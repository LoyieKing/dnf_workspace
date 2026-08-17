# CAccountCargo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 28

---

## AddMoney

```asm
// === 0828a742 CAccountCargo::AddMoney  [0x0828a742-0x828a763] ===
 828a742:	55                   	push   %ebp
 828a743:	89 e5                	mov    %esp,%ebp
 828a745:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 828a749:	74 17                	je     828a762 <_ZN13CAccountCargo8AddMoneyEj+0x20>
 828a74b:	8b 45 08             	mov    0x8(%ebp),%eax
 828a74e:	8b 80 5c 0d 00 00    	mov    0xd5c(%eax),%eax
 828a754:	89 c2                	mov    %eax,%edx
 828a756:	03 55 0c             	add    0xc(%ebp),%edx
 828a759:	8b 45 08             	mov    0x8(%ebp),%eax
 828a75c:	89 90 5c 0d 00 00    	mov    %edx,0xd5c(%eax)
 828a762:	5d                   	pop    %ebp
 828a763:	c3                   	ret

```

```c
// CAccountCargo::AddMoney @ 0x828a742

/* CAccountCargo::AddMoney(unsigned int) */

void __thiscall CAccountCargo::AddMoney(CAccountCargo *this,uint param_1)

{
  if (param_1 != 0) {
    *(uint *)(this + 0xd5c) = *(int *)(this + 0xd5c) + param_1;
  }
  return;
}

```

---

## CAccountCargo

```asm
// === 08289794 CAccountCargo::CAccountCargo  [0x08289794-0x8289815] ===
 8289794:	55                   	push   %ebp
 8289795:	89 e5                	mov    %esp,%ebp
 8289797:	56                   	push   %esi
 8289798:	53                   	push   %ebx
 8289799:	83 ec 10             	sub    $0x10,%esp
 828979c:	8b 45 08             	mov    0x8(%ebp),%eax
 828979f:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 82897a5:	8b 45 08             	mov    0x8(%ebp),%eax
 82897a8:	83 c0 04             	add    $0x4,%eax
 82897ab:	89 c3                	mov    %eax,%ebx
 82897ad:	be 37 00 00 00       	mov    $0x37,%esi
 82897b2:	eb 0e                	jmp    82897c2 <_ZN13CAccountCargoC1Ev+0x2e>
 82897b4:	89 1c 24             	mov    %ebx,(%esp)
 82897b7:	e8 98 20 e4 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 82897bc:	83 c3 3d             	add    $0x3d,%ebx
 82897bf:	83 ee 01             	sub    $0x1,%esi
 82897c2:	83 fe ff             	cmp    $0xffffffff,%esi
 82897c5:	0f 95 c0             	setne  %al
 82897c8:	84 c0                	test   %al,%al
 82897ca:	75 e8                	jne    82897b4 <_ZN13CAccountCargoC1Ev+0x20>
 82897cc:	8b 45 08             	mov    0x8(%ebp),%eax
 82897cf:	c7 80 5c 0d 00 00 00 	movl   $0x0,0xd5c(%eax)
 82897d6:	00 00 00 
 82897d9:	8b 45 08             	mov    0x8(%ebp),%eax
 82897dc:	c7 80 60 0d 00 00 00 	movl   $0x0,0xd60(%eax)
 82897e3:	00 00 00 
 82897e6:	8b 45 08             	mov    0x8(%ebp),%eax
 82897e9:	c6 80 64 0d 00 00 00 	movb   $0x0,0xd64(%eax)
 82897f0:	8b 45 08             	mov    0x8(%ebp),%eax
 82897f3:	83 c0 04             	add    $0x4,%eax
 82897f6:	c7 44 24 08 58 0d 00 	movl   $0xd58,0x8(%esp)
 82897fd:	00 
 82897fe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8289805:	00 
 8289806:	89 04 24             	mov    %eax,(%esp)
 8289809:	e8 b2 44 df ff       	call   807dcc0 <memset@plt>
 828980e:	83 c4 10             	add    $0x10,%esp
 8289811:	5b                   	pop    %ebx
 8289812:	5e                   	pop    %esi
 8289813:	5d                   	pop    %ebp
 8289814:	c3                   	ret
 8289815:	90                   	nop

```

```c
// CAccountCargo::CAccountCargo @ 0x8289794

/* CAccountCargo::CAccountCargo() */

void __thiscall CAccountCargo::CAccountCargo(CAccountCargo *this)

{
  Inven_Item *this_00;
  int iVar1;
  
  *(undefined4 *)this = 0;
  this_00 = (Inven_Item *)(this + 4);
  for (iVar1 = 0x37; iVar1 != -1; iVar1 = iVar1 + -1) {
    Inven_Item::Inven_Item(this_00);
    this_00 = this_00 + 0x3d;
  }
  *(undefined4 *)(this + 0xd5c) = 0;
  *(undefined4 *)(this + 0xd60) = 0;
  this[0xd64] = (CAccountCargo)0x0;
  memset(this + 4,0,0xd58);
  return;
}

```

---

## CheckInsertCondition

```asm
// === 08289a4a CAccountCargo::CheckInsertCondition  [0x08289a4a-0x8289c81] ===
 8289a4a:	55                   	push   %ebp
 8289a4b:	89 e5                	mov    %esp,%ebp
 8289a4d:	53                   	push   %ebx
 8289a4e:	83 ec 34             	sub    $0x34,%esp
 8289a51:	8b 45 0c             	mov    0xc(%ebp),%eax
 8289a54:	8b 40 02             	mov    0x2(%eax),%eax
 8289a57:	89 c3                	mov    %eax,%ebx
 8289a59:	e8 3d 27 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8289a5e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8289a62:	89 04 24             	mov    %eax,(%esp)
 8289a65:	e8 c8 5f 0d 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8289a6a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8289a6d:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8289a71:	75 0a                	jne    8289a7d <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x33>
 8289a73:	b8 00 00 00 00       	mov    $0x0,%eax
 8289a78:	e9 ff 01 00 00       	jmp    8289c7c <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x232>
 8289a7d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8289a80:	89 04 24             	mov    %eax,(%esp)
 8289a83:	e8 2c 1b 00 00       	call   828b5b4 <_ZNK5CItem12isPackagableEv>
 8289a88:	83 f0 01             	xor    $0x1,%eax
 8289a8b:	84 c0                	test   %al,%al
 8289a8d:	74 0a                	je     8289a99 <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x4f>
 8289a8f:	b8 00 00 00 00       	mov    $0x0,%eax
 8289a94:	e9 e3 01 00 00       	jmp    8289c7c <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x232>
 8289a99:	8b 45 0c             	mov    0xc(%ebp),%eax
 8289a9c:	83 c0 11             	add    $0x11,%eax
 8289a9f:	89 04 24             	mov    %eax,(%esp)
 8289aa2:	e8 01 1b 00 00       	call   828b5a8 <_ZNK17stAmplifyOption_t7GetLockEv>
 8289aa7:	88 45 eb             	mov    %al,-0x15(%ebp)
 8289aaa:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
 8289aae:	74 33                	je     8289ae3 <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x99>
 8289ab0:	0f b6 5d eb          	movzbl -0x15(%ebp),%ebx
 8289ab4:	8b 45 08             	mov    0x8(%ebp),%eax
 8289ab7:	8b 00                	mov    (%eax),%eax
 8289ab9:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8289ac0:	00 
 8289ac1:	89 04 24             	mov    %eax,(%esp)
 8289ac4:	e8 15 1b 00 00       	call   828b5de <_ZNK5CUser20GetCharacExpandDataRE23ENUM_CHARAC_EXPAND_TYPE>
 8289ac9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8289acd:	89 04 24             	mov    %eax,(%esp)
 8289ad0:	e8 c1 7f 2b 00       	call   8541a96 <_ZNK9item_lock9CItemLock13CheckItemLockEh>
 8289ad5:	84 c0                	test   %al,%al
 8289ad7:	74 0a                	je     8289ae3 <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x99>
 8289ad9:	b8 00 00 00 00       	mov    $0x0,%eax
 8289ade:	e9 99 01 00 00       	jmp    8289c7c <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x232>
 8289ae3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8289ae6:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8289aea:	3c 04                	cmp    $0x4,%al
 8289aec:	74 2c                	je     8289b1a <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0xd0>
 8289aee:	8b 45 0c             	mov    0xc(%ebp),%eax
 8289af1:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8289af5:	3c 05                	cmp    $0x5,%al
 8289af7:	74 21                	je     8289b1a <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0xd0>
 8289af9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8289afc:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8289b00:	3c 06                	cmp    $0x6,%al
 8289b02:	74 16                	je     8289b1a <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0xd0>
 8289b04:	8b 45 0c             	mov    0xc(%ebp),%eax
 8289b07:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8289b0b:	3c 07                	cmp    $0x7,%al
 8289b0d:	74 0b                	je     8289b1a <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0xd0>
 8289b0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8289b12:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8289b16:	3c 08                	cmp    $0x8,%al
 8289b18:	75 0a                	jne    8289b24 <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0xda>
 8289b1a:	b8 00 00 00 00       	mov    $0x0,%eax
 8289b1f:	e9 58 01 00 00       	jmp    8289c7c <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x232>
 8289b24:	8b 45 0c             	mov    0xc(%ebp),%eax
 8289b27:	8b 40 02             	mov    0x2(%eax),%eax
 8289b2a:	3d 63 19 00 00       	cmp    $0x1963,%eax
 8289b2f:	76 17                	jbe    8289b48 <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0xfe>
 8289b31:	8b 45 0c             	mov    0xc(%ebp),%eax
 8289b34:	8b 40 02             	mov    0x2(%eax),%eax
 8289b37:	3d 57 1b 00 00       	cmp    $0x1b57,%eax
 8289b3c:	77 0a                	ja     8289b48 <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0xfe>
 8289b3e:	b8 00 00 00 00       	mov    $0x0,%eax
 8289b43:	e9 34 01 00 00       	jmp    8289c7c <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x232>
 8289b48:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8289b4b:	89 04 24             	mov    %eax,(%esp)
 8289b4e:	e8 8f 77 e6 ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 8289b53:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8289b56:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8289b59:	83 f8 05             	cmp    $0x5,%eax
 8289b5c:	77 2a                	ja     8289b88 <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x13e>
 8289b5e:	8b 04 85 20 48 c1 08 	mov    0x8c14820(,%eax,4),%eax
 8289b65:	ff e0                	jmp    *%eax
 8289b67:	b8 00 00 00 00       	mov    $0x0,%eax
 8289b6c:	e9 0b 01 00 00       	jmp    8289c7c <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x232>
 8289b71:	8b 45 0c             	mov    0xc(%ebp),%eax
 8289b74:	0f b6 00             	movzbl (%eax),%eax
 8289b77:	83 f0 01             	xor    $0x1,%eax
 8289b7a:	84 c0                	test   %al,%al
 8289b7c:	74 0a                	je     8289b88 <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x13e>
 8289b7e:	b8 00 00 00 00       	mov    $0x0,%eax
 8289b83:	e9 f4 00 00 00       	jmp    8289c7c <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x232>
 8289b88:	8b 45 0c             	mov    0xc(%ebp),%eax
 8289b8b:	83 c0 33             	add    $0x33,%eax
 8289b8e:	89 04 24             	mov    %eax,(%esp)
 8289b91:	e8 74 6f e8 ff       	call   8110b0a <_ZNK19UpgradeSeparateInfo18IsTradeRestrictionEv>
 8289b96:	84 c0                	test   %al,%al
 8289b98:	0f 95 c0             	setne  %al
 8289b9b:	84 c0                	test   %al,%al
 8289b9d:	74 0a                	je     8289ba9 <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x15f>
 8289b9f:	b8 00 00 00 00       	mov    $0x0,%eax
 8289ba4:	e9 d3 00 00 00       	jmp    8289c7c <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x232>
 8289ba9:	8b 45 08             	mov    0x8(%ebp),%eax
 8289bac:	8b 00                	mov    (%eax),%eax
 8289bae:	89 04 24             	mov    %eax,(%esp)
 8289bb1:	e8 e6 bc eb ff       	call   814589c <_ZN5CUser8isGMUserEv>
 8289bb6:	83 f0 01             	xor    $0x1,%eax
 8289bb9:	84 c0                	test   %al,%al
 8289bbb:	0f 84 b6 00 00 00    	je     8289c77 <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x22d>
 8289bc1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8289bc4:	8b 00                	mov    (%eax),%eax
 8289bc6:	83 c0 10             	add    $0x10,%eax
 8289bc9:	8b 10                	mov    (%eax),%edx
 8289bcb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8289bce:	89 04 24             	mov    %eax,(%esp)
 8289bd1:	ff d2                	call   *%edx
 8289bd3:	83 f0 01             	xor    $0x1,%eax
 8289bd6:	84 c0                	test   %al,%al
 8289bd8:	0f 84 99 00 00 00    	je     8289c77 <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x22d>
 8289bde:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8289be1:	89 04 24             	mov    %eax,(%esp)
 8289be4:	e8 77 70 e8 ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 8289be9:	85 c0                	test   %eax,%eax
 8289beb:	75 0f                	jne    8289bfc <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x1b2>
 8289bed:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8289bf0:	89 04 24             	mov    %eax,(%esp)
 8289bf3:	e8 0e 77 e6 ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 8289bf8:	85 c0                	test   %eax,%eax
 8289bfa:	74 07                	je     8289c03 <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x1b9>
 8289bfc:	b8 01 00 00 00       	mov    $0x1,%eax
 8289c01:	eb 05                	jmp    8289c08 <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x1be>
 8289c03:	b8 00 00 00 00       	mov    $0x0,%eax
 8289c08:	84 c0                	test   %al,%al
 8289c0a:	74 6b                	je     8289c77 <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x22d>
 8289c0c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8289c0f:	89 04 24             	mov    %eax,(%esp)
 8289c12:	e8 49 70 e8 ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 8289c17:	85 c0                	test   %eax,%eax
 8289c19:	75 16                	jne    8289c31 <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x1e7>
 8289c1b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8289c1e:	89 04 24             	mov    %eax,(%esp)
 8289c21:	e8 e0 76 e6 ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 8289c26:	85 c0                	test   %eax,%eax
 8289c28:	75 07                	jne    8289c31 <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x1e7>
 8289c2a:	b8 01 00 00 00       	mov    $0x1,%eax
 8289c2f:	eb 05                	jmp    8289c36 <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x1ec>
 8289c31:	b8 00 00 00 00       	mov    $0x0,%eax
 8289c36:	84 c0                	test   %al,%al
 8289c38:	74 07                	je     8289c41 <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x1f7>
 8289c3a:	b8 00 00 00 00       	mov    $0x0,%eax
 8289c3f:	eb 3b                	jmp    8289c7c <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x232>
 8289c41:	8b 45 0c             	mov    0xc(%ebp),%eax
 8289c44:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 8289c48:	0f b7 c0             	movzwl %ax,%eax
 8289c4b:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 8289c51:	05 80 4a a5 44       	add    $0x44a54a80,%eax
 8289c56:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8289c59:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8289c60:	e8 39 20 e4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8289c65:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8289c68:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8289c6b:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8289c6e:	7f 07                	jg     8289c77 <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x22d>
 8289c70:	b8 00 00 00 00       	mov    $0x0,%eax
 8289c75:	eb 05                	jmp    8289c7c <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item+0x232>
 8289c77:	b8 01 00 00 00       	mov    $0x1,%eax
 8289c7c:	83 c4 34             	add    $0x34,%esp
 8289c7f:	5b                   	pop    %ebx
 8289c80:	5d                   	pop    %ebp
 8289c81:	c3                   	ret

```

```c
// CAccountCargo::CheckInsertCondition @ 0x8289a4a

/* CAccountCargo::CheckInsertCondition(Inven_Item&) */

undefined4 __thiscall CAccountCargo::CheckInsertCondition(CAccountCargo *this,Inven_Item *param_1)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  uchar uVar4;
  CDataManager *this_00;
  CItem *this_01;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 2);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,iVar6);
  if (this_01 == (CItem *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar3 = CItem::isPackagable(this_01);
    if (cVar3 == '\x01') {
      cVar3 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)(param_1 + 0x11));
      if (cVar3 != '\0') {
        uVar4 = CUser::GetCharacExpandDataR(*(CUser **)this,2);
        cVar3 = item_lock::CItemLock::CheckItemLock(uVar4);
        if (cVar3 != '\0') {
          return 0;
        }
      }
      if ((((param_1[1] == (Inven_Item)0x4) || (param_1[1] == (Inven_Item)0x5)) ||
          (param_1[1] == (Inven_Item)0x6)) ||
         ((param_1[1] == (Inven_Item)0x7 || (param_1[1] == (Inven_Item)0x8)))) {
        uVar5 = 0;
      }
      else if ((*(uint *)(param_1 + 2) < 0x1964) || (6999 < *(uint *)(param_1 + 2))) {
        uVar5 = CItem::GetAttachType(this_01);
        switch(uVar5) {
        case 1:
        case 2:
          return 0;
        case 3:
          if (*param_1 != (Inven_Item)0x1) {
            return 0;
          }
        }
        cVar3 = UpgradeSeparateInfo::IsTradeRestriction((UpgradeSeparateInfo *)(param_1 + 0x33));
        if (cVar3 == '\0') {
          cVar3 = CUser::isGMUser(*(CUser **)this);
          if ((cVar3 != '\x01') &&
             (cVar3 = (**(code **)(*(int *)this_01 + 0x10))(this_01), cVar3 != '\x01')) {
            iVar6 = CItem::getUsablePeriod(this_01);
            if ((iVar6 == 0) && (iVar6 = CItem::getExpirationDate(this_01), iVar6 == 0)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              iVar6 = CItem::getUsablePeriod(this_01);
              if ((iVar6 == 0) && (iVar6 = CItem::getExpirationDate(this_01), iVar6 == 0)) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if (bVar2) {
                return 0;
              }
              uVar1 = *(ushort *)(param_1 + 0xb);
              iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
              if ((int)((uint)uVar1 * 0x15180 + 0x44a54a80) <= iVar6) {
                return 0;
              }
            }
          }
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

```

---

## CheckMoneyLimit

```asm
// === 0828a4ca CAccountCargo::CheckMoneyLimit  [0x0828a4ca-0x828a553] ===
 828a4ca:	55                   	push   %ebp
 828a4cb:	89 e5                	mov    %esp,%ebp
 828a4cd:	53                   	push   %ebx
 828a4ce:	83 ec 24             	sub    $0x24,%esp
 828a4d1:	8b 45 08             	mov    0x8(%ebp),%eax
 828a4d4:	8b 80 60 0d 00 00    	mov    0xd60(%eax),%eax
 828a4da:	89 c3                	mov    %eax,%ebx
 828a4dc:	e8 ba 1c e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828a4e1:	05 e0 a7 00 00       	add    $0xa7e0,%eax
 828a4e6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 828a4ea:	89 04 24             	mov    %eax,(%esp)
 828a4ed:	e8 c8 db 63 00       	call   88c80ba <_ZN18AccountCargoScript18GetCurrUpgradeInfoEi>
 828a4f2:	89 45 ec             	mov    %eax,-0x14(%ebp)
 828a4f5:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 828a4f9:	75 07                	jne    828a502 <_ZN13CAccountCargo15CheckMoneyLimitEj+0x38>
 828a4fb:	b8 00 00 00 00       	mov    $0x0,%eax
 828a500:	eb 4b                	jmp    828a54d <_ZN13CAccountCargo15CheckMoneyLimitEj+0x83>
 828a502:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 828a509:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 828a510:	8b 45 08             	mov    0x8(%ebp),%eax
 828a513:	8b 80 5c 0d 00 00    	mov    0xd5c(%eax),%eax
 828a519:	03 45 0c             	add    0xc(%ebp),%eax
 828a51c:	ba 00 00 00 00       	mov    $0x0,%edx
 828a521:	89 45 f0             	mov    %eax,-0x10(%ebp)
 828a524:	89 55 f4             	mov    %edx,-0xc(%ebp)
 828a527:	8b 45 ec             	mov    -0x14(%ebp),%eax
 828a52a:	8b 40 04             	mov    0x4(%eax),%eax
 828a52d:	ba 00 00 00 00       	mov    $0x0,%edx
 828a532:	3b 55 f4             	cmp    -0xc(%ebp),%edx
 828a535:	77 11                	ja     828a548 <_ZN13CAccountCargo15CheckMoneyLimitEj+0x7e>
 828a537:	3b 55 f4             	cmp    -0xc(%ebp),%edx
 828a53a:	72 05                	jb     828a541 <_ZN13CAccountCargo15CheckMoneyLimitEj+0x77>
 828a53c:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 828a53f:	73 07                	jae    828a548 <_ZN13CAccountCargo15CheckMoneyLimitEj+0x7e>
 828a541:	b8 00 00 00 00       	mov    $0x0,%eax
 828a546:	eb 05                	jmp    828a54d <_ZN13CAccountCargo15CheckMoneyLimitEj+0x83>
 828a548:	b8 01 00 00 00       	mov    $0x1,%eax
 828a54d:	83 c4 24             	add    $0x24,%esp
 828a550:	5b                   	pop    %ebx
 828a551:	5d                   	pop    %ebp
 828a552:	c3                   	ret
 828a553:	90                   	nop

```

```c
// CAccountCargo::CheckMoneyLimit @ 0x828a4ca

/* CAccountCargo::CheckMoneyLimit(unsigned int) */

undefined4 __thiscall CAccountCargo::CheckMoneyLimit(CAccountCargo *this,uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = G_CDataManager();
  iVar1 = AccountCargoScript::GetCurrUpgradeInfo(iVar1 + 0xa7e0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (*(uint *)(iVar1 + 4) < *(int *)(this + 0xd5c) + param_1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## CheckSlotEmpty

```asm
// === 0828a5d4 CAccountCargo::CheckSlotEmpty  [0x0828a5d4-0x828a619] ===
 828a5d4:	55                   	push   %ebp
 828a5d5:	89 e5                	mov    %esp,%ebp
 828a5d7:	83 ec 08             	sub    $0x8,%esp
 828a5da:	8b 45 0c             	mov    0xc(%ebp),%eax
 828a5dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 828a5e1:	8b 45 08             	mov    0x8(%ebp),%eax
 828a5e4:	89 04 24             	mov    %eax,(%esp)
 828a5e7:	e8 68 ff ff ff       	call   828a554 <_ZNK13CAccountCargo14CheckValidSlotEi>
 828a5ec:	83 f0 01             	xor    $0x1,%eax
 828a5ef:	84 c0                	test   %al,%al
 828a5f1:	74 07                	je     828a5fa <_ZN13CAccountCargo14CheckSlotEmptyEi+0x26>
 828a5f3:	b8 00 00 00 00       	mov    $0x0,%eax
 828a5f8:	eb 1d                	jmp    828a617 <_ZN13CAccountCargo14CheckSlotEmptyEi+0x43>
 828a5fa:	8b 55 0c             	mov    0xc(%ebp),%edx
 828a5fd:	8b 45 08             	mov    0x8(%ebp),%eax
 828a600:	6b d2 3d             	imul   $0x3d,%edx,%edx
 828a603:	8b 44 02 06          	mov    0x6(%edx,%eax,1),%eax
 828a607:	85 c0                	test   %eax,%eax
 828a609:	75 07                	jne    828a612 <_ZN13CAccountCargo14CheckSlotEmptyEi+0x3e>
 828a60b:	b8 01 00 00 00       	mov    $0x1,%eax
 828a610:	eb 05                	jmp    828a617 <_ZN13CAccountCargo14CheckSlotEmptyEi+0x43>
 828a612:	b8 00 00 00 00       	mov    $0x0,%eax
 828a617:	c9                   	leave
 828a618:	c3                   	ret
 828a619:	90                   	nop

```

```c
// CAccountCargo::CheckSlotEmpty @ 0x828a5d4

/* CAccountCargo::CheckSlotEmpty(int) */

undefined4 __thiscall CAccountCargo::CheckSlotEmpty(CAccountCargo *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = CheckValidSlot(this,param_1);
  if (cVar1 == '\x01') {
    if (*(int *)(this + param_1 * 0x3d + 6) == 0) {
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

## CheckStackLimit

```asm
// === 0828a670 CAccountCargo::CheckStackLimit  [0x0828a670-0x828a741] ===
 828a670:	55                   	push   %ebp
 828a671:	89 e5                	mov    %esp,%ebp
 828a673:	83 ec 28             	sub    $0x28,%esp
 828a676:	8b 45 0c             	mov    0xc(%ebp),%eax
 828a679:	89 44 24 04          	mov    %eax,0x4(%esp)
 828a67d:	8b 45 08             	mov    0x8(%ebp),%eax
 828a680:	89 04 24             	mov    %eax,(%esp)
 828a683:	e8 cc fe ff ff       	call   828a554 <_ZNK13CAccountCargo14CheckValidSlotEi>
 828a688:	83 f0 01             	xor    $0x1,%eax
 828a68b:	84 c0                	test   %al,%al
 828a68d:	74 0a                	je     828a699 <_ZN13CAccountCargo15CheckStackLimitEiii+0x29>
 828a68f:	b8 00 00 00 00       	mov    $0x0,%eax
 828a694:	e9 a6 00 00 00       	jmp    828a73f <_ZN13CAccountCargo15CheckStackLimitEiii+0xcf>
 828a699:	8b 55 0c             	mov    0xc(%ebp),%edx
 828a69c:	8b 45 08             	mov    0x8(%ebp),%eax
 828a69f:	6b d2 3d             	imul   $0x3d,%edx,%edx
 828a6a2:	8b 54 02 06          	mov    0x6(%edx,%eax,1),%edx
 828a6a6:	8b 45 10             	mov    0x10(%ebp),%eax
 828a6a9:	39 c2                	cmp    %eax,%edx
 828a6ab:	74 0a                	je     828a6b7 <_ZN13CAccountCargo15CheckStackLimitEiii+0x47>
 828a6ad:	b8 00 00 00 00       	mov    $0x0,%eax
 828a6b2:	e9 88 00 00 00       	jmp    828a73f <_ZN13CAccountCargo15CheckStackLimitEiii+0xcf>
 828a6b7:	e8 df 1a e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828a6bc:	8b 55 10             	mov    0x10(%ebp),%edx
 828a6bf:	89 54 24 04          	mov    %edx,0x4(%esp)
 828a6c3:	89 04 24             	mov    %eax,(%esp)
 828a6c6:	e8 67 53 0d 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 828a6cb:	89 45 ec             	mov    %eax,-0x14(%ebp)
 828a6ce:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 828a6d2:	75 07                	jne    828a6db <_ZN13CAccountCargo15CheckStackLimitEiii+0x6b>
 828a6d4:	b8 00 00 00 00       	mov    $0x0,%eax
 828a6d9:	eb 64                	jmp    828a73f <_ZN13CAccountCargo15CheckStackLimitEiii+0xcf>
 828a6db:	8b 45 ec             	mov    -0x14(%ebp),%eax
 828a6de:	89 04 24             	mov    %eax,(%esp)
 828a6e1:	e8 14 6c e6 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 828a6e6:	83 f0 01             	xor    $0x1,%eax
 828a6e9:	84 c0                	test   %al,%al
 828a6eb:	74 07                	je     828a6f4 <_ZN13CAccountCargo15CheckStackLimitEiii+0x84>
 828a6ed:	b8 00 00 00 00       	mov    $0x0,%eax
 828a6f2:	eb 4b                	jmp    828a73f <_ZN13CAccountCargo15CheckStackLimitEiii+0xcf>
 828a6f4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 828a6f7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 828a6fa:	8b 55 0c             	mov    0xc(%ebp),%edx
 828a6fd:	8b 45 08             	mov    0x8(%ebp),%eax
 828a700:	6b d2 3d             	imul   $0x3d,%edx,%edx
 828a703:	8b 44 02 0b          	mov    0xb(%edx,%eax,1),%eax
 828a707:	03 45 14             	add    0x14(%ebp),%eax
 828a70a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 828a70d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828a710:	89 04 24             	mov    %eax,(%esp)
 828a713:	e8 e4 22 fa ff       	call   822c9fc <_ZNK14CStackableItem17getStackableLimitEv>
 828a718:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 828a71b:	7c 06                	jl     828a723 <_ZN13CAccountCargo15CheckStackLimitEiii+0xb3>
 828a71d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 828a721:	79 07                	jns    828a72a <_ZN13CAccountCargo15CheckStackLimitEiii+0xba>
 828a723:	b8 01 00 00 00       	mov    $0x1,%eax
 828a728:	eb 05                	jmp    828a72f <_ZN13CAccountCargo15CheckStackLimitEiii+0xbf>
 828a72a:	b8 00 00 00 00       	mov    $0x0,%eax
 828a72f:	84 c0                	test   %al,%al
 828a731:	74 07                	je     828a73a <_ZN13CAccountCargo15CheckStackLimitEiii+0xca>
 828a733:	b8 00 00 00 00       	mov    $0x0,%eax
 828a738:	eb 05                	jmp    828a73f <_ZN13CAccountCargo15CheckStackLimitEiii+0xcf>
 828a73a:	b8 01 00 00 00       	mov    $0x1,%eax
 828a73f:	c9                   	leave
 828a740:	c3                   	ret
 828a741:	90                   	nop

```

```c
// CAccountCargo::CheckStackLimit @ 0x828a670

/* CAccountCargo::CheckStackLimit(int, int, int) */

undefined4 __thiscall
CAccountCargo::CheckStackLimit(CAccountCargo *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  CDataManager *this_00;
  CItem *this_01;
  int iVar5;
  
  cVar3 = CheckValidSlot(this,param_1);
  if (cVar3 == '\x01') {
    if (*(int *)(this + param_1 * 0x3d + 6) == param_2) {
      this_00 = (CDataManager *)G_CDataManager();
      this_01 = (CItem *)CDataManager::find_item(this_00,param_2);
      if (this_01 == (CItem *)0x0) {
        uVar4 = 0;
      }
      else {
        cVar3 = CItem::is_stackable(this_01);
        if (cVar3 == '\x01') {
          iVar1 = *(int *)(this + param_1 * 0x3d + 0xb);
          iVar5 = CStackableItem::getStackableLimit((CStackableItem *)this_01);
          if ((iVar5 < iVar1 + param_3) || (iVar1 + param_3 < 0)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
        }
        else {
          uVar4 = 0;
        }
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## CheckValidSlot

```asm
// === 0828a554 CAccountCargo::CheckValidSlot  [0x0828a554-0x828a57f] ===
 828a554:	55                   	push   %ebp
 828a555:	89 e5                	mov    %esp,%ebp
 828a557:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 828a55b:	78 14                	js     828a571 <_ZNK13CAccountCargo14CheckValidSlotEi+0x1d>
 828a55d:	8b 45 08             	mov    0x8(%ebp),%eax
 828a560:	8b 80 60 0d 00 00    	mov    0xd60(%eax),%eax
 828a566:	3b 45 0c             	cmp    0xc(%ebp),%eax
 828a569:	7e 06                	jle    828a571 <_ZNK13CAccountCargo14CheckValidSlotEi+0x1d>
 828a56b:	83 7d 0c 37          	cmpl   $0x37,0xc(%ebp)
 828a56f:	7e 07                	jle    828a578 <_ZNK13CAccountCargo14CheckValidSlotEi+0x24>
 828a571:	b8 00 00 00 00       	mov    $0x0,%eax
 828a576:	eb 05                	jmp    828a57d <_ZNK13CAccountCargo14CheckValidSlotEi+0x29>
 828a578:	b8 01 00 00 00       	mov    $0x1,%eax
 828a57d:	5d                   	pop    %ebp
 828a57e:	c3                   	ret
 828a57f:	90                   	nop

```

```c
// CAccountCargo::CheckValidSlot @ 0x828a554

/* CAccountCargo::CheckValidSlot(int) const */

undefined4 __thiscall CAccountCargo::CheckValidSlot(CAccountCargo *this,int param_1)

{
  undefined4 uVar1;
  
  if (((param_1 < 0) || (*(int *)(this + 0xd60) <= param_1)) || (0x37 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## Clear

```asm
// === 0828986c CAccountCargo::Clear  [0x0828986c-0x82898bf] ===
 828986c:	55                   	push   %ebp
 828986d:	89 e5                	mov    %esp,%ebp
 828986f:	83 ec 18             	sub    $0x18,%esp
 8289872:	8b 45 08             	mov    0x8(%ebp),%eax
 8289875:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 828987b:	8b 45 08             	mov    0x8(%ebp),%eax
 828987e:	c7 80 60 0d 00 00 00 	movl   $0x0,0xd60(%eax)
 8289885:	00 00 00 
 8289888:	8b 45 08             	mov    0x8(%ebp),%eax
 828988b:	c7 80 5c 0d 00 00 00 	movl   $0x0,0xd5c(%eax)
 8289892:	00 00 00 
 8289895:	8b 45 08             	mov    0x8(%ebp),%eax
 8289898:	c6 80 64 0d 00 00 00 	movb   $0x0,0xd64(%eax)
 828989f:	8b 45 08             	mov    0x8(%ebp),%eax
 82898a2:	83 c0 04             	add    $0x4,%eax
 82898a5:	c7 44 24 08 58 0d 00 	movl   $0xd58,0x8(%esp)
 82898ac:	00 
 82898ad:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82898b4:	00 
 82898b5:	89 04 24             	mov    %eax,(%esp)
 82898b8:	e8 03 44 df ff       	call   807dcc0 <memset@plt>
 82898bd:	c9                   	leave
 82898be:	c3                   	ret
 82898bf:	90                   	nop

```

```c
// CAccountCargo::Clear @ 0x828986c

/* CAccountCargo::Clear() */

void __thiscall CAccountCargo::Clear(CAccountCargo *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0xd60) = 0;
  *(undefined4 *)(this + 0xd5c) = 0;
  this[0xd64] = (CAccountCargo)0x0;
  memset(this + 4,0,0xd58);
  return;
}

```

---

## CreateAccountCargo

```asm
// === 0828ad72 CAccountCargo::CreateAccountCargo  [0x0828ad72-0x828b0b1] ===
 828ad72:	55                   	push   %ebp
 828ad73:	89 e5                	mov    %esp,%ebp
 828ad75:	56                   	push   %esi
 828ad76:	53                   	push   %ebx
 828ad77:	83 ec 70             	sub    $0x70,%esp
 828ad7a:	8b 45 08             	mov    0x8(%ebp),%eax
 828ad7d:	89 04 24             	mov    %eax,(%esp)
 828ad80:	e8 ab 4e fa ff       	call   822fc30 <_ZN5CUser19IsExistAccountCargoEv>
 828ad85:	84 c0                	test   %al,%al
 828ad87:	74 20                	je     828ada9 <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x37>
 828ad89:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 828ad90:	00 
 828ad91:	c7 44 24 04 32 01 00 	movl   $0x132,0x4(%esp)
 828ad98:	00 
 828ad99:	8b 45 08             	mov    0x8(%ebp),%eax
 828ad9c:	89 04 24             	mov    %eax,(%esp)
 828ad9f:	e8 9e 11 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828ada4:	e9 02 03 00 00       	jmp    828b0ab <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x339>
 828ada9:	e8 ed 13 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828adae:	8b 98 e0 a7 00 00    	mov    0xa7e0(%eax),%ebx
 828adb4:	8b 45 08             	mov    0x8(%ebp),%eax
 828adb7:	89 04 24             	mov    %eax,(%esp)
 828adba:	e8 73 56 e9 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 828adbf:	0f b7 40 27          	movzwl 0x27(%eax),%eax
 828adc3:	98                   	cwtl
 828adc4:	39 c3                	cmp    %eax,%ebx
 828adc6:	0f 9f c0             	setg   %al
 828adc9:	84 c0                	test   %al,%al
 828adcb:	74 20                	je     828aded <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x7b>
 828adcd:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 828add4:	00 
 828add5:	c7 44 24 04 32 01 00 	movl   $0x132,0x4(%esp)
 828addc:	00 
 828addd:	8b 45 08             	mov    0x8(%ebp),%eax
 828ade0:	89 04 24             	mov    %eax,(%esp)
 828ade3:	e8 5a 11 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828ade8:	e9 be 02 00 00       	jmp    828b0ab <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x339>
 828aded:	e8 a9 13 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828adf2:	05 e0 a7 00 00       	add    $0xa7e0,%eax
 828adf7:	89 04 24             	mov    %eax,(%esp)
 828adfa:	e8 57 d2 63 00       	call   88c8056 <_ZN18AccountCargoScript13GetCreateInfoEv>
 828adff:	89 45 e8             	mov    %eax,-0x18(%ebp)
 828ae02:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 828ae06:	75 20                	jne    828ae28 <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0xb6>
 828ae08:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 828ae0f:	00 
 828ae10:	c7 44 24 04 32 01 00 	movl   $0x132,0x4(%esp)
 828ae17:	00 
 828ae18:	8b 45 08             	mov    0x8(%ebp),%eax
 828ae1b:	89 04 24             	mov    %eax,(%esp)
 828ae1e:	e8 1f 11 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828ae23:	e9 83 02 00 00       	jmp    828b0ab <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x339>
 828ae28:	e8 b9 77 ed ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 828ae2d:	c7 44 24 0c 18 00 00 	movl   $0x18,0xc(%esp)
 828ae34:	00 
 828ae35:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 828ae3c:	00 
 828ae3d:	8b 55 08             	mov    0x8(%ebp),%edx
 828ae40:	89 54 24 04          	mov    %edx,0x4(%esp)
 828ae44:	89 04 24             	mov    %eax,(%esp)
 828ae47:	e8 6c 38 ee ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 828ae4c:	84 c0                	test   %al,%al
 828ae4e:	74 20                	je     828ae70 <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0xfe>
 828ae50:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 828ae57:	00 
 828ae58:	c7 44 24 04 32 01 00 	movl   $0x132,0x4(%esp)
 828ae5f:	00 
 828ae60:	8b 45 08             	mov    0x8(%ebp),%eax
 828ae63:	89 04 24             	mov    %eax,(%esp)
 828ae66:	e8 d7 10 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828ae6b:	e9 3b 02 00 00       	jmp    828b0ab <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x339>
 828ae70:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 828ae75:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 828ae7c:	00 
 828ae7d:	8b 55 08             	mov    0x8(%ebp),%edx
 828ae80:	89 54 24 04          	mov    %edx,0x4(%esp)
 828ae84:	89 04 24             	mov    %eax,(%esp)
 828ae87:	e8 76 db ff ff       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 828ae8c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 828ae8f:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 828ae93:	74 22                	je     828aeb7 <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x145>
 828ae95:	8b 45 ec             	mov    -0x14(%ebp),%eax
 828ae98:	0f b6 c0             	movzbl %al,%eax
 828ae9b:	89 44 24 08          	mov    %eax,0x8(%esp)
 828ae9f:	c7 44 24 04 32 01 00 	movl   $0x132,0x4(%esp)
 828aea6:	00 
 828aea7:	8b 45 08             	mov    0x8(%ebp),%eax
 828aeaa:	89 04 24             	mov    %eax,(%esp)
 828aead:	e8 90 10 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828aeb2:	e9 f4 01 00 00       	jmp    828b0ab <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x339>
 828aeb7:	8d 45 ab             	lea    -0x55(%ebp),%eax
 828aeba:	89 04 24             	mov    %eax,(%esp)
 828aebd:	e8 92 09 e4 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 828aec2:	e8 d4 12 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828aec7:	8b 80 e4 a7 00 00    	mov    0xa7e4(%eax),%eax
 828aecd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 828aed0:	8b 45 08             	mov    0x8(%ebp),%eax
 828aed3:	89 04 24             	mov    %eax,(%esp)
 828aed6:	e8 a3 f3 e4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 828aedb:	8d 55 ab             	lea    -0x55(%ebp),%edx
 828aede:	89 54 24 08          	mov    %edx,0x8(%esp)
 828aee2:	8b 55 f0             	mov    -0x10(%ebp),%edx
 828aee5:	89 54 24 04          	mov    %edx,0x4(%esp)
 828aee9:	89 04 24             	mov    %eax,(%esp)
 828aeec:	e8 3b 10 27 00       	call   84fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>
 828aef1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 828aef4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828aef7:	8b 40 08             	mov    0x8(%eax),%eax
 828aefa:	85 c0                	test   %eax,%eax
 828aefc:	74 33                	je     828af31 <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x1bf>
 828aefe:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 828af02:	74 0d                	je     828af11 <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x19f>
 828af04:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828af07:	8b 50 08             	mov    0x8(%eax),%edx
 828af0a:	8b 45 b2             	mov    -0x4e(%ebp),%eax
 828af0d:	39 c2                	cmp    %eax,%edx
 828af0f:	7e 20                	jle    828af31 <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x1bf>
 828af11:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 828af18:	00 
 828af19:	c7 44 24 04 32 01 00 	movl   $0x132,0x4(%esp)
 828af20:	00 
 828af21:	8b 45 08             	mov    0x8(%ebp),%eax
 828af24:	89 04 24             	mov    %eax,(%esp)
 828af27:	e8 16 10 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828af2c:	e9 7a 01 00 00       	jmp    828b0ab <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x339>
 828af31:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828af34:	8b 40 0c             	mov    0xc(%eax),%eax
 828af37:	85 c0                	test   %eax,%eax
 828af39:	7e 1c                	jle    828af57 <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x1e5>
 828af3b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828af3e:	8b 58 0c             	mov    0xc(%eax),%ebx
 828af41:	8b 45 08             	mov    0x8(%ebp),%eax
 828af44:	89 04 24             	mov    %eax,(%esp)
 828af47:	e8 3c f2 ee ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 828af4c:	39 c3                	cmp    %eax,%ebx
 828af4e:	7e 07                	jle    828af57 <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x1e5>
 828af50:	b8 01 00 00 00       	mov    $0x1,%eax
 828af55:	eb 05                	jmp    828af5c <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x1ea>
 828af57:	b8 00 00 00 00       	mov    $0x0,%eax
 828af5c:	84 c0                	test   %al,%al
 828af5e:	74 20                	je     828af80 <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x20e>
 828af60:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 828af67:	00 
 828af68:	c7 44 24 04 32 01 00 	movl   $0x132,0x4(%esp)
 828af6f:	00 
 828af70:	8b 45 08             	mov    0x8(%ebp),%eax
 828af73:	89 04 24             	mov    %eax,(%esp)
 828af76:	e8 c7 0f 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828af7b:	e9 2b 01 00 00       	jmp    828b0ab <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x339>
 828af80:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828af83:	8b 40 08             	mov    0x8(%eax),%eax
 828af86:	85 c0                	test   %eax,%eax
 828af88:	74 4a                	je     828afd4 <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x262>
 828af8a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828af8d:	8b 58 08             	mov    0x8(%eax),%ebx
 828af90:	8b 45 08             	mov    0x8(%ebp),%eax
 828af93:	89 04 24             	mov    %eax,(%esp)
 828af96:	e8 f3 f2 e4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 828af9b:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 828afa2:	00 
 828afa3:	c7 44 24 10 24 00 00 	movl   $0x24,0x10(%esp)
 828afaa:	00 
 828afab:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 828afaf:	8b 55 f4             	mov    -0xc(%ebp),%edx
 828afb2:	89 54 24 08          	mov    %edx,0x8(%esp)
 828afb6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 828afbd:	00 
 828afbe:	89 04 24             	mov    %eax,(%esp)
 828afc1:	e8 46 90 27 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 828afc6:	83 f0 01             	xor    $0x1,%eax
 828afc9:	84 c0                	test   %al,%al
 828afcb:	74 07                	je     828afd4 <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x262>
 828afcd:	b8 01 00 00 00       	mov    $0x1,%eax
 828afd2:	eb 05                	jmp    828afd9 <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x267>
 828afd4:	b8 00 00 00 00       	mov    $0x0,%eax
 828afd9:	84 c0                	test   %al,%al
 828afdb:	74 20                	je     828affd <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x28b>
 828afdd:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 828afe4:	00 
 828afe5:	c7 44 24 04 32 01 00 	movl   $0x132,0x4(%esp)
 828afec:	00 
 828afed:	8b 45 08             	mov    0x8(%ebp),%eax
 828aff0:	89 04 24             	mov    %eax,(%esp)
 828aff3:	e8 4a 0f 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828aff8:	e9 ae 00 00 00       	jmp    828b0ab <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x339>
 828affd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828b000:	8b 40 0c             	mov    0xc(%eax),%eax
 828b003:	85 c0                	test   %eax,%eax
 828b005:	7e 51                	jle    828b058 <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x2e6>
 828b007:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828b00a:	8b 58 0c             	mov    0xc(%eax),%ebx
 828b00d:	8b 45 08             	mov    0x8(%ebp),%eax
 828b010:	89 04 24             	mov    %eax,(%esp)
 828b013:	e8 76 f2 e4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 828b018:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 828b01f:	00 
 828b020:	c7 44 24 08 29 00 00 	movl   $0x29,0x8(%esp)
 828b027:	00 
 828b028:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 828b02c:	89 04 24             	mov    %eax,(%esp)
 828b02f:	e8 18 45 27 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 828b034:	83 f0 01             	xor    $0x1,%eax
 828b037:	84 c0                	test   %al,%al
 828b039:	74 1d                	je     828b058 <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x2e6>
 828b03b:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 828b042:	00 
 828b043:	c7 44 24 04 32 01 00 	movl   $0x132,0x4(%esp)
 828b04a:	00 
 828b04b:	8b 45 08             	mov    0x8(%ebp),%eax
 828b04e:	89 04 24             	mov    %eax,(%esp)
 828b051:	e8 ec 0e 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828b056:	eb 53                	jmp    828b0ab <_ZN13CAccountCargo18CreateAccountCargoEP5CUser+0x339>
 828b058:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828b05b:	8b 40 08             	mov    0x8(%eax),%eax
 828b05e:	85 c0                	test   %eax,%eax
 828b060:	0f 95 c0             	setne  %al
 828b063:	0f b6 c0             	movzbl %al,%eax
 828b066:	89 44 24 08          	mov    %eax,0x8(%esp)
 828b06a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828b06d:	89 44 24 04          	mov    %eax,0x4(%esp)
 828b071:	8b 45 08             	mov    0x8(%ebp),%eax
 828b074:	89 04 24             	mov    %eax,(%esp)
 828b077:	e8 54 03 00 00       	call   828b3d0 <_ZN13CAccountCargo16SendNotifyRecipeEP5CUserib>
 828b07c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828b07f:	8b 00                	mov    (%eax),%eax
 828b081:	89 c6                	mov    %eax,%esi
 828b083:	8b 45 08             	mov    0x8(%ebp),%eax
 828b086:	89 04 24             	mov    %eax,(%esp)
 828b089:	e8 e0 f2 e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 828b08e:	89 c3                	mov    %eax,%ebx
 828b090:	8b 45 08             	mov    0x8(%ebp),%eax
 828b093:	89 04 24             	mov    %eax,(%esp)
 828b096:	e8 fb db e3 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 828b09b:	89 74 24 08          	mov    %esi,0x8(%esp)
 828b09f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 828b0a3:	89 04 24             	mov    %eax,(%esp)
 828b0a6:	e8 db fd 1a 00       	call   843ae86 <_ZN21DB_CreateAccountCargo11makeRequestEijj>
 828b0ab:	83 c4 70             	add    $0x70,%esp
 828b0ae:	5b                   	pop    %ebx
 828b0af:	5e                   	pop    %esi
 828b0b0:	5d                   	pop    %ebp
 828b0b1:	c3                   	ret

```

```c
// CAccountCargo::CreateAccountCargo @ 0x828ad72

/* CAccountCargo::CreateAccountCargo(CUser*) */

void CAccountCargo::CreateAccountCargo(CUser *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ServiceRestrictManager *pSVar6;
  CInventory *pCVar7;
  uint uVar8;
  Inven_Item local_59 [7];
  int local_52;
  uint *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  cVar3 = CUser::IsExistAccountCargo(param_1);
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0x132,0x14);
    return;
  }
  iVar4 = G_CDataManager();
  iVar4 = *(int *)(iVar4 + 0xa7e0);
  iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (*(short *)(iVar5 + 0x27) < iVar4) {
    CUser::SendCmdErrorPacket(param_1,0x132,0xe);
    return;
  }
  G_CDataManager();
  local_1c = (uint *)AccountCargoScript::GetCreateInfo();
  if (local_1c == (uint *)0x0) {
    CUser::SendCmdErrorPacket(param_1,0x132,0x13);
    return;
  }
  pSVar6 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
  cVar3 = ServiceRestrictManager::isRestricted(pSVar6,param_1,1,0x18);
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0x132,0xd1);
    return;
  }
  local_18 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,4);
  if (local_18 != 0) {
    CUser::SendCmdErrorPacket(param_1,0x132,local_18 & 0xff);
    return;
  }
  Inven_Item::Inven_Item(local_59);
  iVar4 = G_CDataManager();
  local_14 = *(int *)(iVar4 + 0xa7e4);
  pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  local_10 = CInventory::GetInvenData(pCVar7,local_14,local_59);
  if ((local_1c[2] != 0) && ((local_10 == -1 || (local_52 < (int)local_1c[2])))) {
    CUser::SendCmdErrorPacket(param_1,0x132,0x16);
    return;
  }
  if (((int)local_1c[3] < 1) ||
     (uVar1 = local_1c[3], iVar4 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1),
     (int)uVar1 <= iVar4)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    CUser::SendCmdErrorPacket(param_1,0x132,0x16);
    return;
  }
  if (local_1c[2] != 0) {
    uVar1 = local_1c[2];
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar3 = CInventory::delete_item(pCVar7,1,local_10,uVar1,0x24,1);
    if (cVar3 != '\x01') {
      bVar2 = true;
      goto LAB_0828afd9;
    }
  }
  bVar2 = false;
LAB_0828afd9:
  if (bVar2) {
    CUser::SendCmdErrorPacket(param_1,0x132,0x16);
  }
  else {
    if (0 < (int)local_1c[3]) {
      uVar1 = local_1c[3];
      pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar3 = CInventory::use_money(pCVar7,uVar1,0x29,1);
      if (cVar3 != '\x01') {
        CUser::SendCmdErrorPacket(param_1,0x132,0x16);
        return;
      }
    }
    SendNotifyRecipe(param_1,local_10,local_1c[2] != 0);
    uVar1 = *local_1c;
    uVar8 = CUser::get_acc_id(param_1);
    iVar4 = CUser::GetUID(param_1);
    DB_CreateAccountCargo::makeRequest(iVar4,uVar8,uVar1);
  }
  return;
}

```

---

## DeleteAccountCargo

```asm
// === 0828b4ec CAccountCargo::DeleteAccountCargo  [0x0828b4ec-0x828b54a] ===
 828b4ec:	55                   	push   %ebp
 828b4ed:	89 e5                	mov    %esp,%ebp
 828b4ef:	53                   	push   %ebx
 828b4f0:	83 ec 24             	sub    $0x24,%esp
 828b4f3:	8b 45 08             	mov    0x8(%ebp),%eax
 828b4f6:	89 04 24             	mov    %eax,(%esp)
 828b4f9:	e8 32 47 fa ff       	call   822fc30 <_ZN5CUser19IsExistAccountCargoEv>
 828b4fe:	83 f0 01             	xor    $0x1,%eax
 828b501:	84 c0                	test   %al,%al
 828b503:	75 3f                	jne    828b544 <_ZN13CAccountCargo18DeleteAccountCargoEP5CUser+0x58>
 828b505:	8b 45 08             	mov    0x8(%ebp),%eax
 828b508:	89 04 24             	mov    %eax,(%esp)
 828b50b:	e8 12 47 fa ff       	call   822fc22 <_ZN5CUser15GetAccountCargoEv>
 828b510:	89 45 f4             	mov    %eax,-0xc(%ebp)
 828b513:	8b 45 08             	mov    0x8(%ebp),%eax
 828b516:	89 04 24             	mov    %eax,(%esp)
 828b519:	e8 50 ee e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 828b51e:	89 c3                	mov    %eax,%ebx
 828b520:	8b 45 08             	mov    0x8(%ebp),%eax
 828b523:	89 04 24             	mov    %eax,(%esp)
 828b526:	e8 6b d7 e3 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 828b52b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 828b52f:	89 04 24             	mov    %eax,(%esp)
 828b532:	e8 a9 fd 1a 00       	call   843b2e0 <_ZN21DB_DeleteAccountCargo11makeRequestEij>
 828b537:	8b 45 08             	mov    0x8(%ebp),%eax
 828b53a:	89 04 24             	mov    %eax,(%esp)
 828b53d:	e8 84 00 00 00       	call   828b5c6 <_ZN5CUser11DeleteCargoEv>
 828b542:	eb 01                	jmp    828b545 <_ZN13CAccountCargo18DeleteAccountCargoEP5CUser+0x59>
 828b544:	90                   	nop
 828b545:	83 c4 24             	add    $0x24,%esp
 828b548:	5b                   	pop    %ebx
 828b549:	5d                   	pop    %ebp
 828b54a:	c3                   	ret

```

```c
// CAccountCargo::DeleteAccountCargo @ 0x828b4ec

/* CAccountCargo::DeleteAccountCargo(CUser*) */

void CAccountCargo::DeleteAccountCargo(CUser *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  cVar1 = CUser::IsExistAccountCargo(param_1);
  if (cVar1 == '\x01') {
    CUser::GetAccountCargo(param_1);
    uVar2 = CUser::get_acc_id(param_1);
    iVar3 = CUser::GetUID(param_1);
    DB_DeleteAccountCargo::makeRequest(iVar3,uVar2);
    CUser::DeleteCargo(param_1);
  }
  return;
}

```

---

## DeleteItem

```asm
// === 08289e3c CAccountCargo::DeleteItem  [0x08289e3c-0x8289f25] ===
 8289e3c:	55                   	push   %ebp
 8289e3d:	89 e5                	mov    %esp,%ebp
 8289e3f:	53                   	push   %ebx
 8289e40:	83 ec 14             	sub    $0x14,%esp
 8289e43:	8b 45 0c             	mov    0xc(%ebp),%eax
 8289e46:	89 44 24 04          	mov    %eax,0x4(%esp)
 8289e4a:	8b 45 08             	mov    0x8(%ebp),%eax
 8289e4d:	89 04 24             	mov    %eax,(%esp)
 8289e50:	e8 ff 06 00 00       	call   828a554 <_ZNK13CAccountCargo14CheckValidSlotEi>
 8289e55:	83 f0 01             	xor    $0x1,%eax
 8289e58:	84 c0                	test   %al,%al
 8289e5a:	74 0a                	je     8289e66 <_ZN13CAccountCargo10DeleteItemEii+0x2a>
 8289e5c:	b8 00 00 00 00       	mov    $0x0,%eax
 8289e61:	e9 ba 00 00 00       	jmp    8289f20 <_ZN13CAccountCargo10DeleteItemEii+0xe4>
 8289e66:	8b 55 0c             	mov    0xc(%ebp),%edx
 8289e69:	8b 45 08             	mov    0x8(%ebp),%eax
 8289e6c:	6b d2 3d             	imul   $0x3d,%edx,%edx
 8289e6f:	8b 44 02 06          	mov    0x6(%edx,%eax,1),%eax
 8289e73:	85 c0                	test   %eax,%eax
 8289e75:	74 06                	je     8289e7d <_ZN13CAccountCargo10DeleteItemEii+0x41>
 8289e77:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8289e7b:	7f 0a                	jg     8289e87 <_ZN13CAccountCargo10DeleteItemEii+0x4b>
 8289e7d:	b8 00 00 00 00       	mov    $0x0,%eax
 8289e82:	e9 99 00 00 00       	jmp    8289f20 <_ZN13CAccountCargo10DeleteItemEii+0xe4>
 8289e87:	8b 45 0c             	mov    0xc(%ebp),%eax
 8289e8a:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8289e8d:	03 45 08             	add    0x8(%ebp),%eax
 8289e90:	83 c0 04             	add    $0x4,%eax
 8289e93:	89 04 24             	mov    %eax,(%esp)
 8289e96:	e8 77 69 ec ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 8289e9b:	84 c0                	test   %al,%al
 8289e9d:	74 14                	je     8289eb3 <_ZN13CAccountCargo10DeleteItemEii+0x77>
 8289e9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8289ea2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8289ea6:	8b 45 08             	mov    0x8(%ebp),%eax
 8289ea9:	89 04 24             	mov    %eax,(%esp)
 8289eac:	e8 0f fa ff ff       	call   82898c0 <_ZN13CAccountCargo9ResetSlotEi>
 8289eb1:	eb 5e                	jmp    8289f11 <_ZN13CAccountCargo10DeleteItemEii+0xd5>
 8289eb3:	8b 55 0c             	mov    0xc(%ebp),%edx
 8289eb6:	8b 45 08             	mov    0x8(%ebp),%eax
 8289eb9:	6b d2 3d             	imul   $0x3d,%edx,%edx
 8289ebc:	8b 44 02 0b          	mov    0xb(%edx,%eax,1),%eax
 8289ec0:	3b 45 10             	cmp    0x10(%ebp),%eax
 8289ec3:	7d 07                	jge    8289ecc <_ZN13CAccountCargo10DeleteItemEii+0x90>
 8289ec5:	b8 00 00 00 00       	mov    $0x0,%eax
 8289eca:	eb 54                	jmp    8289f20 <_ZN13CAccountCargo10DeleteItemEii+0xe4>
 8289ecc:	8b 55 0c             	mov    0xc(%ebp),%edx
 8289ecf:	8b 45 08             	mov    0x8(%ebp),%eax
 8289ed2:	6b d2 3d             	imul   $0x3d,%edx,%edx
 8289ed5:	8b 44 02 0b          	mov    0xb(%edx,%eax,1),%eax
 8289ed9:	3b 45 10             	cmp    0x10(%ebp),%eax
 8289edc:	7e 21                	jle    8289eff <_ZN13CAccountCargo10DeleteItemEii+0xc3>
 8289ede:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8289ee1:	8b 55 0c             	mov    0xc(%ebp),%edx
 8289ee4:	8b 45 08             	mov    0x8(%ebp),%eax
 8289ee7:	6b d2 3d             	imul   $0x3d,%edx,%edx
 8289eea:	8b 44 02 0b          	mov    0xb(%edx,%eax,1),%eax
 8289eee:	89 c1                	mov    %eax,%ecx
 8289ef0:	2b 4d 10             	sub    0x10(%ebp),%ecx
 8289ef3:	8b 45 08             	mov    0x8(%ebp),%eax
 8289ef6:	6b d3 3d             	imul   $0x3d,%ebx,%edx
 8289ef9:	89 4c 02 0b          	mov    %ecx,0xb(%edx,%eax,1)
 8289efd:	eb 12                	jmp    8289f11 <_ZN13CAccountCargo10DeleteItemEii+0xd5>
 8289eff:	8b 45 0c             	mov    0xc(%ebp),%eax
 8289f02:	89 44 24 04          	mov    %eax,0x4(%esp)
 8289f06:	8b 45 08             	mov    0x8(%ebp),%eax
 8289f09:	89 04 24             	mov    %eax,(%esp)
 8289f0c:	e8 af f9 ff ff       	call   82898c0 <_ZN13CAccountCargo9ResetSlotEi>
 8289f11:	8b 45 08             	mov    0x8(%ebp),%eax
 8289f14:	c6 80 64 0d 00 00 01 	movb   $0x1,0xd64(%eax)
 8289f1b:	b8 01 00 00 00       	mov    $0x1,%eax
 8289f20:	83 c4 14             	add    $0x14,%esp
 8289f23:	5b                   	pop    %ebx
 8289f24:	5d                   	pop    %ebp
 8289f25:	c3                   	ret

```

```c
// CAccountCargo::DeleteItem @ 0x8289e3c

/* CAccountCargo::DeleteItem(int, int) */

undefined4 __thiscall CAccountCargo::DeleteItem(CAccountCargo *this,int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = CheckValidSlot(this,param_1);
  if (cVar1 == '\x01') {
    if ((*(int *)(this + param_1 * 0x3d + 6) == 0) || (param_2 < 1)) {
      uVar2 = 0;
    }
    else {
      cVar1 = Inven_Item::isEquipableItemType((Inven_Item *)(this + param_1 * 0x3d + 4));
      if (cVar1 == '\0') {
        if (*(int *)(this + param_1 * 0x3d + 0xb) < param_2) {
          return 0;
        }
        if (param_2 < *(int *)(this + param_1 * 0x3d + 0xb)) {
          *(int *)(this + param_1 * 0x3d + 0xb) = *(int *)(this + param_1 * 0x3d + 0xb) - param_2;
        }
        else {
          ResetSlot(this,param_1);
        }
      }
      else {
        ResetSlot(this,param_1);
      }
      this[0xd64] = (CAccountCargo)0x1;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## DepositMoney

```asm
// === 0828a12a CAccountCargo::DepositMoney  [0x0828a12a-0x828a2f5] ===
 828a12a:	55                   	push   %ebp
 828a12b:	89 e5                	mov    %esp,%ebp
 828a12d:	53                   	push   %ebx
 828a12e:	83 ec 24             	sub    $0x24,%esp
 828a131:	8b 45 08             	mov    0x8(%ebp),%eax
 828a134:	8b 18                	mov    (%eax),%ebx
 828a136:	e8 ab 84 ed ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 828a13b:	c7 44 24 0c 1a 00 00 	movl   $0x1a,0xc(%esp)
 828a142:	00 
 828a143:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 828a14a:	00 
 828a14b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 828a14f:	89 04 24             	mov    %eax,(%esp)
 828a152:	e8 61 45 ee ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 828a157:	84 c0                	test   %al,%al
 828a159:	74 27                	je     828a182 <_ZN13CAccountCargo12DepositMoneyEj+0x58>
 828a15b:	8b 45 08             	mov    0x8(%ebp),%eax
 828a15e:	8b 00                	mov    (%eax),%eax
 828a160:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 828a167:	00 
 828a168:	c7 44 24 04 34 01 00 	movl   $0x134,0x4(%esp)
 828a16f:	00 
 828a170:	89 04 24             	mov    %eax,(%esp)
 828a173:	e8 ca 1d 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828a178:	b8 00 00 00 00       	mov    $0x0,%eax
 828a17d:	e9 6d 01 00 00       	jmp    828a2ef <_ZN13CAccountCargo12DepositMoneyEj+0x1c5>
 828a182:	8b 45 08             	mov    0x8(%ebp),%eax
 828a185:	8b 10                	mov    (%eax),%edx
 828a187:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 828a18c:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 828a193:	00 
 828a194:	89 54 24 04          	mov    %edx,0x4(%esp)
 828a198:	89 04 24             	mov    %eax,(%esp)
 828a19b:	e8 62 e8 ff ff       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 828a1a0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 828a1a3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 828a1a7:	74 29                	je     828a1d2 <_ZN13CAccountCargo12DepositMoneyEj+0xa8>
 828a1a9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828a1ac:	0f b6 d0             	movzbl %al,%edx
 828a1af:	8b 45 08             	mov    0x8(%ebp),%eax
 828a1b2:	8b 00                	mov    (%eax),%eax
 828a1b4:	89 54 24 08          	mov    %edx,0x8(%esp)
 828a1b8:	c7 44 24 04 34 01 00 	movl   $0x134,0x4(%esp)
 828a1bf:	00 
 828a1c0:	89 04 24             	mov    %eax,(%esp)
 828a1c3:	e8 7a 1d 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828a1c8:	b8 00 00 00 00       	mov    $0x0,%eax
 828a1cd:	e9 1d 01 00 00       	jmp    828a2ef <_ZN13CAccountCargo12DepositMoneyEj+0x1c5>
 828a1d2:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 828a1d5:	8b 45 08             	mov    0x8(%ebp),%eax
 828a1d8:	8b 00                	mov    (%eax),%eax
 828a1da:	89 04 24             	mov    %eax,(%esp)
 828a1dd:	e8 a6 ff ee ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 828a1e2:	39 c3                	cmp    %eax,%ebx
 828a1e4:	7f 07                	jg     828a1ed <_ZN13CAccountCargo12DepositMoneyEj+0xc3>
 828a1e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 828a1e9:	85 c0                	test   %eax,%eax
 828a1eb:	79 07                	jns    828a1f4 <_ZN13CAccountCargo12DepositMoneyEj+0xca>
 828a1ed:	b8 01 00 00 00       	mov    $0x1,%eax
 828a1f2:	eb 05                	jmp    828a1f9 <_ZN13CAccountCargo12DepositMoneyEj+0xcf>
 828a1f4:	b8 00 00 00 00       	mov    $0x0,%eax
 828a1f9:	84 c0                	test   %al,%al
 828a1fb:	74 27                	je     828a224 <_ZN13CAccountCargo12DepositMoneyEj+0xfa>
 828a1fd:	8b 45 08             	mov    0x8(%ebp),%eax
 828a200:	8b 00                	mov    (%eax),%eax
 828a202:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 828a209:	00 
 828a20a:	c7 44 24 04 34 01 00 	movl   $0x134,0x4(%esp)
 828a211:	00 
 828a212:	89 04 24             	mov    %eax,(%esp)
 828a215:	e8 28 1d 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828a21a:	b8 00 00 00 00       	mov    $0x0,%eax
 828a21f:	e9 cb 00 00 00       	jmp    828a2ef <_ZN13CAccountCargo12DepositMoneyEj+0x1c5>
 828a224:	8b 45 0c             	mov    0xc(%ebp),%eax
 828a227:	89 44 24 04          	mov    %eax,0x4(%esp)
 828a22b:	8b 45 08             	mov    0x8(%ebp),%eax
 828a22e:	89 04 24             	mov    %eax,(%esp)
 828a231:	e8 94 02 00 00       	call   828a4ca <_ZN13CAccountCargo15CheckMoneyLimitEj>
 828a236:	83 f0 01             	xor    $0x1,%eax
 828a239:	84 c0                	test   %al,%al
 828a23b:	74 27                	je     828a264 <_ZN13CAccountCargo12DepositMoneyEj+0x13a>
 828a23d:	8b 45 08             	mov    0x8(%ebp),%eax
 828a240:	8b 00                	mov    (%eax),%eax
 828a242:	c7 44 24 08 5f 00 00 	movl   $0x5f,0x8(%esp)
 828a249:	00 
 828a24a:	c7 44 24 04 34 01 00 	movl   $0x134,0x4(%esp)
 828a251:	00 
 828a252:	89 04 24             	mov    %eax,(%esp)
 828a255:	e8 e8 1c 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828a25a:	b8 00 00 00 00       	mov    $0x0,%eax
 828a25f:	e9 8b 00 00 00       	jmp    828a2ef <_ZN13CAccountCargo12DepositMoneyEj+0x1c5>
 828a264:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 828a267:	8b 45 08             	mov    0x8(%ebp),%eax
 828a26a:	8b 00                	mov    (%eax),%eax
 828a26c:	89 04 24             	mov    %eax,(%esp)
 828a26f:	e8 1a 00 e5 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 828a274:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 828a27b:	00 
 828a27c:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 828a283:	00 
 828a284:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 828a288:	89 04 24             	mov    %eax,(%esp)
 828a28b:	e8 bc 52 27 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 828a290:	83 f0 01             	xor    $0x1,%eax
 828a293:	84 c0                	test   %al,%al
 828a295:	74 24                	je     828a2bb <_ZN13CAccountCargo12DepositMoneyEj+0x191>
 828a297:	8b 45 08             	mov    0x8(%ebp),%eax
 828a29a:	8b 00                	mov    (%eax),%eax
 828a29c:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 828a2a3:	00 
 828a2a4:	c7 44 24 04 34 01 00 	movl   $0x134,0x4(%esp)
 828a2ab:	00 
 828a2ac:	89 04 24             	mov    %eax,(%esp)
 828a2af:	e8 8e 1c 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828a2b4:	b8 00 00 00 00       	mov    $0x0,%eax
 828a2b9:	eb 34                	jmp    828a2ef <_ZN13CAccountCargo12DepositMoneyEj+0x1c5>
 828a2bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 828a2be:	89 44 24 04          	mov    %eax,0x4(%esp)
 828a2c2:	8b 45 08             	mov    0x8(%ebp),%eax
 828a2c5:	89 04 24             	mov    %eax,(%esp)
 828a2c8:	e8 75 04 00 00       	call   828a742 <_ZN13CAccountCargo8AddMoneyEj>
 828a2cd:	c7 44 24 04 34 01 00 	movl   $0x134,0x4(%esp)
 828a2d4:	00 
 828a2d5:	8b 45 08             	mov    0x8(%ebp),%eax
 828a2d8:	89 04 24             	mov    %eax,(%esp)
 828a2db:	e8 fc 04 00 00       	call   828a7dc <_ZN13CAccountCargo15SendNotifyMoneyE14ENUM_CMDPACKET>
 828a2e0:	8b 45 08             	mov    0x8(%ebp),%eax
 828a2e3:	c6 80 64 0d 00 00 01 	movb   $0x1,0xd64(%eax)
 828a2ea:	b8 01 00 00 00       	mov    $0x1,%eax
 828a2ef:	83 c4 24             	add    $0x24,%esp
 828a2f2:	5b                   	pop    %ebx
 828a2f3:	5d                   	pop    %ebp
 828a2f4:	c3                   	ret
 828a2f5:	90                   	nop

```

```c
// CAccountCargo::DepositMoney @ 0x828a12a

/* CAccountCargo::DepositMoney(unsigned int) */

undefined4 __thiscall CAccountCargo::DepositMoney(CAccountCargo *this,uint param_1)

{
  bool bVar1;
  char cVar2;
  ServiceRestrictManager *pSVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  CInventory *pCVar7;
  
  uVar4 = *(undefined4 *)this;
  pSVar3 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
  cVar2 = ServiceRestrictManager::isRestricted(pSVar3,uVar4,1,0x1a);
  if (cVar2 == '\0') {
    uVar5 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,*(undefined4 *)this,2);
    if (uVar5 == 0) {
      iVar6 = CUserCharacInfo::getCurCharacMoney(*(CUserCharacInfo **)this);
      if ((iVar6 < (int)param_1) || ((int)param_1 < 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        CUser::SendCmdErrorPacket(*(CUser **)this,0x134,10);
        uVar4 = 0;
      }
      else {
        cVar2 = CheckMoneyLimit(this,param_1);
        if (cVar2 == '\x01') {
          pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)this);
          cVar2 = CInventory::use_money(pCVar7,param_1,0x28,1);
          if (cVar2 == '\x01') {
            AddMoney(this,param_1);
            SendNotifyMoney(this,0x134);
            this[0xd64] = (CAccountCargo)0x1;
            uVar4 = 1;
          }
          else {
            CUser::SendCmdErrorPacket(*(CUser **)this,0x134,10);
            uVar4 = 0;
          }
        }
        else {
          CUser::SendCmdErrorPacket(*(CUser **)this,0x134,0x5f);
          uVar4 = 0;
        }
      }
    }
    else {
      CUser::SendCmdErrorPacket(*(CUser **)this,0x134,uVar5 & 0xff);
      uVar4 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(*(CUser **)this,0x134,0xd1);
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## GetEmptySlot

```asm
// === 0828a580 CAccountCargo::GetEmptySlot  [0x0828a580-0x828a5d3] ===
 828a580:	55                   	push   %ebp
 828a581:	89 e5                	mov    %esp,%ebp
 828a583:	83 ec 10             	sub    $0x10,%esp
 828a586:	8b 45 08             	mov    0x8(%ebp),%eax
 828a589:	8b 80 60 0d 00 00    	mov    0xd60(%eax),%eax
 828a58f:	83 f8 38             	cmp    $0x38,%eax
 828a592:	76 05                	jbe    828a599 <_ZN13CAccountCargo12GetEmptySlotEv+0x19>
 828a594:	b8 38 00 00 00       	mov    $0x38,%eax
 828a599:	89 45 f8             	mov    %eax,-0x8(%ebp)
 828a59c:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 828a5a3:	eb 1a                	jmp    828a5bf <_ZN13CAccountCargo12GetEmptySlotEv+0x3f>
 828a5a5:	8b 55 fc             	mov    -0x4(%ebp),%edx
 828a5a8:	8b 45 08             	mov    0x8(%ebp),%eax
 828a5ab:	6b d2 3d             	imul   $0x3d,%edx,%edx
 828a5ae:	8b 44 02 06          	mov    0x6(%edx,%eax,1),%eax
 828a5b2:	85 c0                	test   %eax,%eax
 828a5b4:	75 05                	jne    828a5bb <_ZN13CAccountCargo12GetEmptySlotEv+0x3b>
 828a5b6:	8b 45 fc             	mov    -0x4(%ebp),%eax
 828a5b9:	eb 16                	jmp    828a5d1 <_ZN13CAccountCargo12GetEmptySlotEv+0x51>
 828a5bb:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 828a5bf:	8b 45 fc             	mov    -0x4(%ebp),%eax
 828a5c2:	3b 45 f8             	cmp    -0x8(%ebp),%eax
 828a5c5:	0f 9c c0             	setl   %al
 828a5c8:	84 c0                	test   %al,%al
 828a5ca:	75 d9                	jne    828a5a5 <_ZN13CAccountCargo12GetEmptySlotEv+0x25>
 828a5cc:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 828a5d1:	c9                   	leave
 828a5d2:	c3                   	ret
 828a5d3:	90                   	nop

```

```c
// CAccountCargo::GetEmptySlot @ 0x828a580

/* CAccountCargo::GetEmptySlot() */

int __thiscall CAccountCargo::GetEmptySlot(CAccountCargo *this)

{
  uint uVar1;
  int local_8;
  
  uVar1 = *(uint *)(this + 0xd60);
  if (0x38 < uVar1) {
    uVar1 = 0x38;
  }
  local_8 = 0;
  while( true ) {
    if ((int)uVar1 <= local_8) {
      return -1;
    }
    if (*(int *)(this + local_8 * 0x3d + 6) == 0) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

```

---

## GetItemCount

```asm
// === 0828a794 CAccountCargo::GetItemCount  [0x0828a794-0x828a7db] ===
 828a794:	55                   	push   %ebp
 828a795:	89 e5                	mov    %esp,%ebp
 828a797:	83 ec 10             	sub    $0x10,%esp
 828a79a:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 828a7a1:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 828a7a8:	eb 19                	jmp    828a7c3 <_ZN13CAccountCargo12GetItemCountEv+0x2f>
 828a7aa:	8b 55 fc             	mov    -0x4(%ebp),%edx
 828a7ad:	8b 45 08             	mov    0x8(%ebp),%eax
 828a7b0:	6b d2 3d             	imul   $0x3d,%edx,%edx
 828a7b3:	8b 44 02 06          	mov    0x6(%edx,%eax,1),%eax
 828a7b7:	85 c0                	test   %eax,%eax
 828a7b9:	74 04                	je     828a7bf <_ZN13CAccountCargo12GetItemCountEv+0x2b>
 828a7bb:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 828a7bf:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 828a7c3:	8b 45 08             	mov    0x8(%ebp),%eax
 828a7c6:	8b 80 60 0d 00 00    	mov    0xd60(%eax),%eax
 828a7cc:	3b 45 fc             	cmp    -0x4(%ebp),%eax
 828a7cf:	0f 9f c0             	setg   %al
 828a7d2:	84 c0                	test   %al,%al
 828a7d4:	75 d4                	jne    828a7aa <_ZN13CAccountCargo12GetItemCountEv+0x16>
 828a7d6:	8b 45 f8             	mov    -0x8(%ebp),%eax
 828a7d9:	c9                   	leave
 828a7da:	c3                   	ret
 828a7db:	90                   	nop

```

```c
// CAccountCargo::GetItemCount @ 0x828a794

/* CAccountCargo::GetItemCount() */

int __thiscall CAccountCargo::GetItemCount(CAccountCargo *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < *(int *)(this + 0xd60); local_8 = local_8 + 1) {
    if (*(int *)(this + local_8 * 0x3d + 6) != 0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

```

---

## GetSlot

```asm
// === 082898f8 CAccountCargo::GetSlot  [0x082898f8-0x8289a0b] ===
 82898f8:	55                   	push   %ebp
 82898f9:	89 e5                	mov    %esp,%ebp
 82898fb:	53                   	push   %ebx
 82898fc:	83 ec 54             	sub    $0x54,%esp
 82898ff:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8289902:	8b 45 10             	mov    0x10(%ebp),%eax
 8289905:	89 44 24 04          	mov    %eax,0x4(%esp)
 8289909:	8b 45 0c             	mov    0xc(%ebp),%eax
 828990c:	89 04 24             	mov    %eax,(%esp)
 828990f:	e8 40 0c 00 00       	call   828a554 <_ZNK13CAccountCargo14CheckValidSlotEi>
 8289914:	83 f0 01             	xor    $0x1,%eax
 8289917:	84 c0                	test   %al,%al
 8289919:	74 6d                	je     8289988 <_ZN13CAccountCargo7GetSlotEi+0x90>
 828991b:	8d 45 bb             	lea    -0x45(%ebp),%eax
 828991e:	89 04 24             	mov    %eax,(%esp)
 8289921:	e8 2e 1f e4 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8289926:	8b 45 bb             	mov    -0x45(%ebp),%eax
 8289929:	89 03                	mov    %eax,(%ebx)
 828992b:	8b 45 bf             	mov    -0x41(%ebp),%eax
 828992e:	89 43 04             	mov    %eax,0x4(%ebx)
 8289931:	8b 45 c3             	mov    -0x3d(%ebp),%eax
 8289934:	89 43 08             	mov    %eax,0x8(%ebx)
 8289937:	8b 45 c7             	mov    -0x39(%ebp),%eax
 828993a:	89 43 0c             	mov    %eax,0xc(%ebx)
 828993d:	8b 45 cb             	mov    -0x35(%ebp),%eax
 8289940:	89 43 10             	mov    %eax,0x10(%ebx)
 8289943:	8b 45 cf             	mov    -0x31(%ebp),%eax
 8289946:	89 43 14             	mov    %eax,0x14(%ebx)
 8289949:	8b 45 d3             	mov    -0x2d(%ebp),%eax
 828994c:	89 43 18             	mov    %eax,0x18(%ebx)
 828994f:	8b 45 d7             	mov    -0x29(%ebp),%eax
 8289952:	89 43 1c             	mov    %eax,0x1c(%ebx)
 8289955:	8b 45 db             	mov    -0x25(%ebp),%eax
 8289958:	89 43 20             	mov    %eax,0x20(%ebx)
 828995b:	8b 45 df             	mov    -0x21(%ebp),%eax
 828995e:	89 43 24             	mov    %eax,0x24(%ebx)
 8289961:	8b 45 e3             	mov    -0x1d(%ebp),%eax
 8289964:	89 43 28             	mov    %eax,0x28(%ebx)
 8289967:	8b 45 e7             	mov    -0x19(%ebp),%eax
 828996a:	89 43 2c             	mov    %eax,0x2c(%ebx)
 828996d:	8b 45 eb             	mov    -0x15(%ebp),%eax
 8289970:	89 43 30             	mov    %eax,0x30(%ebx)
 8289973:	8b 45 ef             	mov    -0x11(%ebp),%eax
 8289976:	89 43 34             	mov    %eax,0x34(%ebx)
 8289979:	8b 45 f3             	mov    -0xd(%ebp),%eax
 828997c:	89 43 38             	mov    %eax,0x38(%ebx)
 828997f:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8289983:	88 43 3c             	mov    %al,0x3c(%ebx)
 8289986:	eb 79                	jmp    8289a01 <_ZN13CAccountCargo7GetSlotEi+0x109>
 8289988:	8b 55 10             	mov    0x10(%ebp),%edx
 828998b:	8b 45 0c             	mov    0xc(%ebp),%eax
 828998e:	6b d2 3d             	imul   $0x3d,%edx,%edx
 8289991:	8b 4c 02 04          	mov    0x4(%edx,%eax,1),%ecx
 8289995:	89 0b                	mov    %ecx,(%ebx)
 8289997:	8b 4c 02 08          	mov    0x8(%edx,%eax,1),%ecx
 828999b:	89 4b 04             	mov    %ecx,0x4(%ebx)
 828999e:	8b 4c 02 0c          	mov    0xc(%edx,%eax,1),%ecx
 82899a2:	89 4b 08             	mov    %ecx,0x8(%ebx)
 82899a5:	8b 4c 02 10          	mov    0x10(%edx,%eax,1),%ecx
 82899a9:	89 4b 0c             	mov    %ecx,0xc(%ebx)
 82899ac:	8b 4c 02 14          	mov    0x14(%edx,%eax,1),%ecx
 82899b0:	89 4b 10             	mov    %ecx,0x10(%ebx)
 82899b3:	8b 4c 02 18          	mov    0x18(%edx,%eax,1),%ecx
 82899b7:	89 4b 14             	mov    %ecx,0x14(%ebx)
 82899ba:	8b 4c 02 1c          	mov    0x1c(%edx,%eax,1),%ecx
 82899be:	89 4b 18             	mov    %ecx,0x18(%ebx)
 82899c1:	8b 4c 02 20          	mov    0x20(%edx,%eax,1),%ecx
 82899c5:	89 4b 1c             	mov    %ecx,0x1c(%ebx)
 82899c8:	8b 4c 02 24          	mov    0x24(%edx,%eax,1),%ecx
 82899cc:	89 4b 20             	mov    %ecx,0x20(%ebx)
 82899cf:	8b 4c 02 28          	mov    0x28(%edx,%eax,1),%ecx
 82899d3:	89 4b 24             	mov    %ecx,0x24(%ebx)
 82899d6:	8b 4c 02 2c          	mov    0x2c(%edx,%eax,1),%ecx
 82899da:	89 4b 28             	mov    %ecx,0x28(%ebx)
 82899dd:	8b 4c 02 30          	mov    0x30(%edx,%eax,1),%ecx
 82899e1:	89 4b 2c             	mov    %ecx,0x2c(%ebx)
 82899e4:	8b 4c 02 34          	mov    0x34(%edx,%eax,1),%ecx
 82899e8:	89 4b 30             	mov    %ecx,0x30(%ebx)
 82899eb:	8b 4c 02 38          	mov    0x38(%edx,%eax,1),%ecx
 82899ef:	89 4b 34             	mov    %ecx,0x34(%ebx)
 82899f2:	8b 4c 02 3c          	mov    0x3c(%edx,%eax,1),%ecx
 82899f6:	89 4b 38             	mov    %ecx,0x38(%ebx)
 82899f9:	0f b6 44 02 40       	movzbl 0x40(%edx,%eax,1),%eax
 82899fe:	88 43 3c             	mov    %al,0x3c(%ebx)
 8289a01:	89 d8                	mov    %ebx,%eax
 8289a03:	83 c4 54             	add    $0x54,%esp
 8289a06:	5b                   	pop    %ebx
 8289a07:	5d                   	pop    %ebp
 8289a08:	c2 04 00             	ret    $0x4
 8289a0b:	90                   	nop

```

```c
// CAccountCargo::GetSlot @ 0x82898f8

/* CAccountCargo::GetSlot(int) */

int CAccountCargo::GetSlot(int param_1)

{
  char cVar1;
  int iVar2;
  CAccountCargo *in_stack_00000008;
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
  
  cVar1 = CheckValidSlot(in_stack_00000008,in_stack_0000000c);
  if (cVar1 == '\x01') {
    iVar2 = in_stack_0000000c * 0x3d;
    *(undefined4 *)param_1 = *(undefined4 *)(in_stack_00000008 + iVar2 + 4);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(in_stack_00000008 + iVar2 + 8);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x1c);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x28);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x2c);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x34);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(in_stack_00000008 + iVar2 + 0x3c);
    *(CAccountCargo *)(param_1 + 0x3c) = in_stack_00000008[iVar2 + 0x40];
  }
  else {
    Inven_Item::Inven_Item((Inven_Item *)&local_49);
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

## GetSlotRef

```asm
// === 08289a0c CAccountCargo::GetSlotRef  [0x08289a0c-0x8289a49] ===
 8289a0c:	55                   	push   %ebp
 8289a0d:	89 e5                	mov    %esp,%ebp
 8289a0f:	83 ec 18             	sub    $0x18,%esp
 8289a12:	8b 45 0c             	mov    0xc(%ebp),%eax
 8289a15:	89 44 24 04          	mov    %eax,0x4(%esp)
 8289a19:	8b 45 08             	mov    0x8(%ebp),%eax
 8289a1c:	89 04 24             	mov    %eax,(%esp)
 8289a1f:	e8 30 0b 00 00       	call   828a554 <_ZNK13CAccountCargo14CheckValidSlotEi>
 8289a24:	83 f0 01             	xor    $0x1,%eax
 8289a27:	84 c0                	test   %al,%al
 8289a29:	74 07                	je     8289a32 <_ZN13CAccountCargo10GetSlotRefEi+0x26>
 8289a2b:	b8 00 00 00 00       	mov    $0x0,%eax
 8289a30:	eb 16                	jmp    8289a48 <_ZN13CAccountCargo10GetSlotRefEi+0x3c>
 8289a32:	8b 45 08             	mov    0x8(%ebp),%eax
 8289a35:	c6 80 64 0d 00 00 01 	movb   $0x1,0xd64(%eax)
 8289a3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8289a3f:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8289a42:	03 45 08             	add    0x8(%ebp),%eax
 8289a45:	83 c0 04             	add    $0x4,%eax
 8289a48:	c9                   	leave
 8289a49:	c3                   	ret

```

```c
// CAccountCargo::GetSlotRef @ 0x8289a0c

/* CAccountCargo::GetSlotRef(int) */

CAccountCargo * __thiscall CAccountCargo::GetSlotRef(CAccountCargo *this,int param_1)

{
  char cVar1;
  CAccountCargo *pCVar2;
  
  cVar1 = CheckValidSlot(this,param_1);
  if (cVar1 == '\x01') {
    this[0xd64] = (CAccountCargo)0x1;
    pCVar2 = this + param_1 * 0x3d + 4;
  }
  else {
    pCVar2 = (CAccountCargo *)0x0;
  }
  return pCVar2;
}

```

---

## GetSpecificItemSlot

```asm
// === 0828a61a CAccountCargo::GetSpecificItemSlot  [0x0828a61a-0x828a66f] ===
 828a61a:	55                   	push   %ebp
 828a61b:	89 e5                	mov    %esp,%ebp
 828a61d:	83 ec 10             	sub    $0x10,%esp
 828a620:	8b 45 08             	mov    0x8(%ebp),%eax
 828a623:	8b 80 60 0d 00 00    	mov    0xd60(%eax),%eax
 828a629:	83 f8 38             	cmp    $0x38,%eax
 828a62c:	76 05                	jbe    828a633 <_ZN13CAccountCargo19GetSpecificItemSlotEi+0x19>
 828a62e:	b8 38 00 00 00       	mov    $0x38,%eax
 828a633:	89 45 f8             	mov    %eax,-0x8(%ebp)
 828a636:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 828a63d:	eb 1d                	jmp    828a65c <_ZN13CAccountCargo19GetSpecificItemSlotEi+0x42>
 828a63f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 828a642:	8b 55 fc             	mov    -0x4(%ebp),%edx
 828a645:	8b 45 08             	mov    0x8(%ebp),%eax
 828a648:	6b d2 3d             	imul   $0x3d,%edx,%edx
 828a64b:	8b 44 02 06          	mov    0x6(%edx,%eax,1),%eax
 828a64f:	39 c1                	cmp    %eax,%ecx
 828a651:	75 05                	jne    828a658 <_ZN13CAccountCargo19GetSpecificItemSlotEi+0x3e>
 828a653:	8b 45 fc             	mov    -0x4(%ebp),%eax
 828a656:	eb 16                	jmp    828a66e <_ZN13CAccountCargo19GetSpecificItemSlotEi+0x54>
 828a658:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 828a65c:	8b 45 fc             	mov    -0x4(%ebp),%eax
 828a65f:	3b 45 f8             	cmp    -0x8(%ebp),%eax
 828a662:	0f 9c c0             	setl   %al
 828a665:	84 c0                	test   %al,%al
 828a667:	75 d6                	jne    828a63f <_ZN13CAccountCargo19GetSpecificItemSlotEi+0x25>
 828a669:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 828a66e:	c9                   	leave
 828a66f:	c3                   	ret

```

```c
// CAccountCargo::GetSpecificItemSlot @ 0x828a61a

/* CAccountCargo::GetSpecificItemSlot(int) */

int __thiscall CAccountCargo::GetSpecificItemSlot(CAccountCargo *this,int param_1)

{
  uint uVar1;
  int local_8;
  
  uVar1 = *(uint *)(this + 0xd60);
  if (0x38 < uVar1) {
    uVar1 = 0x38;
  }
  local_8 = 0;
  while( true ) {
    if ((int)uVar1 <= local_8) {
      return -1;
    }
    if (param_1 == *(int *)(this + local_8 * 0x3d + 6)) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

```

---

## InsertItem

```asm
// === 08289c82 CAccountCargo::InsertItem  [0x08289c82-0x8289e3b] ===
 8289c82:	55                   	push   %ebp
 8289c83:	89 e5                	mov    %esp,%ebp
 8289c85:	53                   	push   %ebx
 8289c86:	83 ec 24             	sub    $0x24,%esp
 8289c89:	8b 45 10             	mov    0x10(%ebp),%eax
 8289c8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8289c90:	8b 45 08             	mov    0x8(%ebp),%eax
 8289c93:	89 04 24             	mov    %eax,(%esp)
 8289c96:	e8 b9 08 00 00       	call   828a554 <_ZNK13CAccountCargo14CheckValidSlotEi>
 8289c9b:	83 f0 01             	xor    $0x1,%eax
 8289c9e:	84 c0                	test   %al,%al
 8289ca0:	74 0a                	je     8289cac <_ZN13CAccountCargo10InsertItemER10Inven_Itemi+0x2a>
 8289ca2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8289ca7:	e9 8a 01 00 00       	jmp    8289e36 <_ZN13CAccountCargo10InsertItemER10Inven_Itemi+0x1b4>
 8289cac:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
 8289cb3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8289cb6:	89 04 24             	mov    %eax,(%esp)
 8289cb9:	e8 54 6b ec ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 8289cbe:	84 c0                	test   %al,%al
 8289cc0:	0f 84 9c 00 00 00    	je     8289d62 <_ZN13CAccountCargo10InsertItemER10Inven_Itemi+0xe0>
 8289cc6:	8b 55 10             	mov    0x10(%ebp),%edx
 8289cc9:	8b 45 08             	mov    0x8(%ebp),%eax
 8289ccc:	6b d2 3d             	imul   $0x3d,%edx,%edx
 8289ccf:	8b 44 02 06          	mov    0x6(%edx,%eax,1),%eax
 8289cd3:	85 c0                	test   %eax,%eax
 8289cd5:	0f 85 4e 01 00 00    	jne    8289e29 <_ZN13CAccountCargo10InsertItemER10Inven_Itemi+0x1a7>
 8289cdb:	8b 55 10             	mov    0x10(%ebp),%edx
 8289cde:	8b 45 08             	mov    0x8(%ebp),%eax
 8289ce1:	6b d2 3d             	imul   $0x3d,%edx,%edx
 8289ce4:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8289ce7:	8b 19                	mov    (%ecx),%ebx
 8289ce9:	89 5c 02 04          	mov    %ebx,0x4(%edx,%eax,1)
 8289ced:	8b 59 04             	mov    0x4(%ecx),%ebx
 8289cf0:	89 5c 02 08          	mov    %ebx,0x8(%edx,%eax,1)
 8289cf4:	8b 59 08             	mov    0x8(%ecx),%ebx
 8289cf7:	89 5c 02 0c          	mov    %ebx,0xc(%edx,%eax,1)
 8289cfb:	8b 59 0c             	mov    0xc(%ecx),%ebx
 8289cfe:	89 5c 02 10          	mov    %ebx,0x10(%edx,%eax,1)
 8289d02:	8b 59 10             	mov    0x10(%ecx),%ebx
 8289d05:	89 5c 02 14          	mov    %ebx,0x14(%edx,%eax,1)
 8289d09:	8b 59 14             	mov    0x14(%ecx),%ebx
 8289d0c:	89 5c 02 18          	mov    %ebx,0x18(%edx,%eax,1)
 8289d10:	8b 59 18             	mov    0x18(%ecx),%ebx
 8289d13:	89 5c 02 1c          	mov    %ebx,0x1c(%edx,%eax,1)
 8289d17:	8b 59 1c             	mov    0x1c(%ecx),%ebx
 8289d1a:	89 5c 02 20          	mov    %ebx,0x20(%edx,%eax,1)
 8289d1e:	8b 59 20             	mov    0x20(%ecx),%ebx
 8289d21:	89 5c 02 24          	mov    %ebx,0x24(%edx,%eax,1)
 8289d25:	8b 59 24             	mov    0x24(%ecx),%ebx
 8289d28:	89 5c 02 28          	mov    %ebx,0x28(%edx,%eax,1)
 8289d2c:	8b 59 28             	mov    0x28(%ecx),%ebx
 8289d2f:	89 5c 02 2c          	mov    %ebx,0x2c(%edx,%eax,1)
 8289d33:	8b 59 2c             	mov    0x2c(%ecx),%ebx
 8289d36:	89 5c 02 30          	mov    %ebx,0x30(%edx,%eax,1)
 8289d3a:	8b 59 30             	mov    0x30(%ecx),%ebx
 8289d3d:	89 5c 02 34          	mov    %ebx,0x34(%edx,%eax,1)
 8289d41:	8b 59 34             	mov    0x34(%ecx),%ebx
 8289d44:	89 5c 02 38          	mov    %ebx,0x38(%edx,%eax,1)
 8289d48:	8b 59 38             	mov    0x38(%ecx),%ebx
 8289d4b:	89 5c 02 3c          	mov    %ebx,0x3c(%edx,%eax,1)
 8289d4f:	0f b6 49 3c          	movzbl 0x3c(%ecx),%ecx
 8289d53:	88 4c 02 40          	mov    %cl,0x40(%edx,%eax,1)
 8289d57:	8b 45 10             	mov    0x10(%ebp),%eax
 8289d5a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8289d5d:	e9 c7 00 00 00       	jmp    8289e29 <_ZN13CAccountCargo10InsertItemER10Inven_Itemi+0x1a7>
 8289d62:	8b 45 0c             	mov    0xc(%ebp),%eax
 8289d65:	8b 48 02             	mov    0x2(%eax),%ecx
 8289d68:	8b 55 10             	mov    0x10(%ebp),%edx
 8289d6b:	8b 45 08             	mov    0x8(%ebp),%eax
 8289d6e:	6b d2 3d             	imul   $0x3d,%edx,%edx
 8289d71:	8b 44 02 06          	mov    0x6(%edx,%eax,1),%eax
 8289d75:	39 c1                	cmp    %eax,%ecx
 8289d77:	75 2e                	jne    8289da7 <_ZN13CAccountCargo10InsertItemER10Inven_Itemi+0x125>
 8289d79:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8289d7c:	8b 55 10             	mov    0x10(%ebp),%edx
 8289d7f:	8b 45 08             	mov    0x8(%ebp),%eax
 8289d82:	6b d2 3d             	imul   $0x3d,%edx,%edx
 8289d85:	8b 54 02 0b          	mov    0xb(%edx,%eax,1),%edx
 8289d89:	8b 45 0c             	mov    0xc(%ebp),%eax
 8289d8c:	8b 40 07             	mov    0x7(%eax),%eax
 8289d8f:	8d 0c 02             	lea    (%edx,%eax,1),%ecx
 8289d92:	8b 45 08             	mov    0x8(%ebp),%eax
 8289d95:	6b d3 3d             	imul   $0x3d,%ebx,%edx
 8289d98:	89 4c 02 0b          	mov    %ecx,0xb(%edx,%eax,1)
 8289d9c:	8b 45 10             	mov    0x10(%ebp),%eax
 8289d9f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8289da2:	e9 82 00 00 00       	jmp    8289e29 <_ZN13CAccountCargo10InsertItemER10Inven_Itemi+0x1a7>
 8289da7:	8b 55 10             	mov    0x10(%ebp),%edx
 8289daa:	8b 45 08             	mov    0x8(%ebp),%eax
 8289dad:	6b d2 3d             	imul   $0x3d,%edx,%edx
 8289db0:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8289db3:	8b 19                	mov    (%ecx),%ebx
 8289db5:	89 5c 02 04          	mov    %ebx,0x4(%edx,%eax,1)
 8289db9:	8b 59 04             	mov    0x4(%ecx),%ebx
 8289dbc:	89 5c 02 08          	mov    %ebx,0x8(%edx,%eax,1)
 8289dc0:	8b 59 08             	mov    0x8(%ecx),%ebx
 8289dc3:	89 5c 02 0c          	mov    %ebx,0xc(%edx,%eax,1)
 8289dc7:	8b 59 0c             	mov    0xc(%ecx),%ebx
 8289dca:	89 5c 02 10          	mov    %ebx,0x10(%edx,%eax,1)
 8289dce:	8b 59 10             	mov    0x10(%ecx),%ebx
 8289dd1:	89 5c 02 14          	mov    %ebx,0x14(%edx,%eax,1)
 8289dd5:	8b 59 14             	mov    0x14(%ecx),%ebx
 8289dd8:	89 5c 02 18          	mov    %ebx,0x18(%edx,%eax,1)
 8289ddc:	8b 59 18             	mov    0x18(%ecx),%ebx
 8289ddf:	89 5c 02 1c          	mov    %ebx,0x1c(%edx,%eax,1)
 8289de3:	8b 59 1c             	mov    0x1c(%ecx),%ebx
 8289de6:	89 5c 02 20          	mov    %ebx,0x20(%edx,%eax,1)
 8289dea:	8b 59 20             	mov    0x20(%ecx),%ebx
 8289ded:	89 5c 02 24          	mov    %ebx,0x24(%edx,%eax,1)
 8289df1:	8b 59 24             	mov    0x24(%ecx),%ebx
 8289df4:	89 5c 02 28          	mov    %ebx,0x28(%edx,%eax,1)
 8289df8:	8b 59 28             	mov    0x28(%ecx),%ebx
 8289dfb:	89 5c 02 2c          	mov    %ebx,0x2c(%edx,%eax,1)
 8289dff:	8b 59 2c             	mov    0x2c(%ecx),%ebx
 8289e02:	89 5c 02 30          	mov    %ebx,0x30(%edx,%eax,1)
 8289e06:	8b 59 30             	mov    0x30(%ecx),%ebx
 8289e09:	89 5c 02 34          	mov    %ebx,0x34(%edx,%eax,1)
 8289e0d:	8b 59 34             	mov    0x34(%ecx),%ebx
 8289e10:	89 5c 02 38          	mov    %ebx,0x38(%edx,%eax,1)
 8289e14:	8b 59 38             	mov    0x38(%ecx),%ebx
 8289e17:	89 5c 02 3c          	mov    %ebx,0x3c(%edx,%eax,1)
 8289e1b:	0f b6 49 3c          	movzbl 0x3c(%ecx),%ecx
 8289e1f:	88 4c 02 40          	mov    %cl,0x40(%edx,%eax,1)
 8289e23:	8b 45 10             	mov    0x10(%ebp),%eax
 8289e26:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8289e29:	8b 45 08             	mov    0x8(%ebp),%eax
 8289e2c:	c6 80 64 0d 00 00 01 	movb   $0x1,0xd64(%eax)
 8289e33:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8289e36:	83 c4 24             	add    $0x24,%esp
 8289e39:	5b                   	pop    %ebx
 8289e3a:	5d                   	pop    %ebp
 8289e3b:	c3                   	ret

```

```c
// CAccountCargo::InsertItem @ 0x8289c82

/* CAccountCargo::InsertItem(Inven_Item&, int) */

int __thiscall CAccountCargo::InsertItem(CAccountCargo *this,Inven_Item *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int local_10;
  
  cVar1 = CheckValidSlot(this,param_2);
  if (cVar1 == '\x01') {
    local_10 = -1;
    cVar1 = Inven_Item::isEquipableItemType(param_1);
    if (cVar1 == '\0') {
      if (*(int *)(param_1 + 2) == *(int *)(this + param_2 * 0x3d + 6)) {
        *(int *)(this + param_2 * 0x3d + 0xb) =
             *(int *)(this + param_2 * 0x3d + 0xb) + *(int *)(param_1 + 7);
        local_10 = param_2;
      }
      else {
        iVar2 = param_2 * 0x3d;
        *(undefined4 *)(this + iVar2 + 4) = *(undefined4 *)param_1;
        *(undefined4 *)(this + iVar2 + 8) = *(undefined4 *)(param_1 + 4);
        *(undefined4 *)(this + iVar2 + 0xc) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)(this + iVar2 + 0x10) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(this + iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)(this + iVar2 + 0x18) = *(undefined4 *)(param_1 + 0x14);
        *(undefined4 *)(this + iVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
        *(undefined4 *)(this + iVar2 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
        *(undefined4 *)(this + iVar2 + 0x24) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)(this + iVar2 + 0x28) = *(undefined4 *)(param_1 + 0x24);
        *(undefined4 *)(this + iVar2 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(this + iVar2 + 0x30) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)(this + iVar2 + 0x34) = *(undefined4 *)(param_1 + 0x30);
        *(undefined4 *)(this + iVar2 + 0x38) = *(undefined4 *)(param_1 + 0x34);
        *(undefined4 *)(this + iVar2 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
        this[iVar2 + 0x40] = *(CAccountCargo *)(param_1 + 0x3c);
        local_10 = param_2;
      }
    }
    else if (*(int *)(this + param_2 * 0x3d + 6) == 0) {
      iVar2 = param_2 * 0x3d;
      *(undefined4 *)(this + iVar2 + 4) = *(undefined4 *)param_1;
      *(undefined4 *)(this + iVar2 + 8) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(this + iVar2 + 0xc) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(this + iVar2 + 0x10) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(this + iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(this + iVar2 + 0x18) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(this + iVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(this + iVar2 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(this + iVar2 + 0x24) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(this + iVar2 + 0x28) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(this + iVar2 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(this + iVar2 + 0x30) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(this + iVar2 + 0x34) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(this + iVar2 + 0x38) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(this + iVar2 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
      this[iVar2 + 0x40] = *(CAccountCargo *)(param_1 + 0x3c);
      local_10 = param_2;
    }
    this[0xd64] = (CAccountCargo)0x1;
  }
  else {
    local_10 = -1;
  }
  return local_10;
}

```

---

## MakeItemPacket

```asm
// === 0828ab1c CAccountCargo::MakeItemPacket  [0x0828ab1c-0x828ad71] ===
 828ab1c:	55                   	push   %ebp
 828ab1d:	89 e5                	mov    %esp,%ebp
 828ab1f:	83 ec 18             	sub    $0x18,%esp
 828ab22:	8b 45 0c             	mov    0xc(%ebp),%eax
 828ab25:	8b 55 10             	mov    0x10(%ebp),%edx
 828ab28:	89 54 24 04          	mov    %edx,0x4(%esp)
 828ab2c:	89 04 24             	mov    %eax,(%esp)
 828ab2f:	e8 70 f3 e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 828ab34:	8b 55 10             	mov    0x10(%ebp),%edx
 828ab37:	8b 45 08             	mov    0x8(%ebp),%eax
 828ab3a:	6b d2 3d             	imul   $0x3d,%edx,%edx
 828ab3d:	8b 44 02 06          	mov    0x6(%edx,%eax,1),%eax
 828ab41:	85 c0                	test   %eax,%eax
 828ab43:	0f 84 69 01 00 00    	je     828acb2 <_ZNK13CAccountCargo14MakeItemPacketEP11PacketGuardi+0x196>
 828ab49:	8b 55 10             	mov    0x10(%ebp),%edx
 828ab4c:	8b 45 08             	mov    0x8(%ebp),%eax
 828ab4f:	6b d2 3d             	imul   $0x3d,%edx,%edx
 828ab52:	8b 44 02 06          	mov    0x6(%edx,%eax,1),%eax
 828ab56:	89 c2                	mov    %eax,%edx
 828ab58:	8b 45 0c             	mov    0xc(%ebp),%eax
 828ab5b:	89 54 24 04          	mov    %edx,0x4(%esp)
 828ab5f:	89 04 24             	mov    %eax,(%esp)
 828ab62:	e8 d5 0d e4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 828ab67:	8b 55 10             	mov    0x10(%ebp),%edx
 828ab6a:	8b 45 08             	mov    0x8(%ebp),%eax
 828ab6d:	6b d2 3d             	imul   $0x3d,%edx,%edx
 828ab70:	8b 54 02 0b          	mov    0xb(%edx,%eax,1),%edx
 828ab74:	8b 45 0c             	mov    0xc(%ebp),%eax
 828ab77:	89 54 24 04          	mov    %edx,0x4(%esp)
 828ab7b:	89 04 24             	mov    %eax,(%esp)
 828ab7e:	e8 b9 0d e4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 828ab83:	8b 45 10             	mov    0x10(%ebp),%eax
 828ab86:	6b c0 3d             	imul   $0x3d,%eax,%eax
 828ab89:	03 45 08             	add    0x8(%ebp),%eax
 828ab8c:	83 c0 04             	add    $0x4,%eax
 828ab8f:	89 04 24             	mov    %eax,(%esp)
 828ab92:	e8 68 1a 27 00       	call   84fc5ff <_Z24GetIntegratedPvPItemAttrRK10Inven_Item>
 828ab97:	0f b6 d0             	movzbl %al,%edx
 828ab9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 828ab9d:	89 54 24 04          	mov    %edx,0x4(%esp)
 828aba1:	89 04 24             	mov    %eax,(%esp)
 828aba4:	e8 77 0d e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 828aba9:	8b 55 10             	mov    0x10(%ebp),%edx
 828abac:	8b 45 08             	mov    0x8(%ebp),%eax
 828abaf:	6b d2 3d             	imul   $0x3d,%edx,%edx
 828abb2:	0f b7 44 02 0f       	movzwl 0xf(%edx,%eax,1),%eax
 828abb7:	0f b7 d0             	movzwl %ax,%edx
 828abba:	8b 45 0c             	mov    0xc(%ebp),%eax
 828abbd:	89 54 24 04          	mov    %edx,0x4(%esp)
 828abc1:	89 04 24             	mov    %eax,(%esp)
 828abc4:	e8 db f2 e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 828abc9:	8b 55 10             	mov    0x10(%ebp),%edx
 828abcc:	8b 45 08             	mov    0x8(%ebp),%eax
 828abcf:	6b d2 3d             	imul   $0x3d,%edx,%edx
 828abd2:	0f b6 44 02 04       	movzbl 0x4(%edx,%eax,1),%eax
 828abd7:	0f b6 d0             	movzbl %al,%edx
 828abda:	8b 45 0c             	mov    0xc(%ebp),%eax
 828abdd:	89 54 24 04          	mov    %edx,0x4(%esp)
 828abe1:	89 04 24             	mov    %eax,(%esp)
 828abe4:	e8 37 0d e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 828abe9:	e8 b9 f7 e4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 828abee:	89 04 24             	mov    %eax,(%esp)
 828abf1:	e8 06 98 fa ff       	call   82343fc <_ZN9GameWorld24IsEnchantRevisionChannelEv>
 828abf6:	84 c0                	test   %al,%al
 828abf8:	74 15                	je     828ac0f <_ZNK13CAccountCargo14MakeItemPacketEP11PacketGuardi+0xf3>
 828abfa:	8b 45 0c             	mov    0xc(%ebp),%eax
 828abfd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828ac04:	00 
 828ac05:	89 04 24             	mov    %eax,(%esp)
 828ac08:	e8 2f 0d e4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 828ac0d:	eb 1e                	jmp    828ac2d <_ZNK13CAccountCargo14MakeItemPacketEP11PacketGuardi+0x111>
 828ac0f:	8b 55 10             	mov    0x10(%ebp),%edx
 828ac12:	8b 45 08             	mov    0x8(%ebp),%eax
 828ac15:	6b d2 3d             	imul   $0x3d,%edx,%edx
 828ac18:	8b 44 02 11          	mov    0x11(%edx,%eax,1),%eax
 828ac1c:	89 c2                	mov    %eax,%edx
 828ac1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 828ac21:	89 54 24 04          	mov    %edx,0x4(%esp)
 828ac25:	89 04 24             	mov    %eax,(%esp)
 828ac28:	e8 0f 0d e4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 828ac2d:	8b 45 10             	mov    0x10(%ebp),%eax
 828ac30:	6b c0 3d             	imul   $0x3d,%eax,%eax
 828ac33:	83 c0 10             	add    $0x10,%eax
 828ac36:	03 45 08             	add    0x8(%ebp),%eax
 828ac39:	83 c0 05             	add    $0x5,%eax
 828ac3c:	89 04 24             	mov    %eax,(%esp)
 828ac3f:	e8 ee 5a ec ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 828ac44:	0f b6 d0             	movzbl %al,%edx
 828ac47:	8b 45 0c             	mov    0xc(%ebp),%eax
 828ac4a:	89 54 24 04          	mov    %edx,0x4(%esp)
 828ac4e:	89 04 24             	mov    %eax,(%esp)
 828ac51:	e8 ca 0c e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 828ac56:	8b 45 10             	mov    0x10(%ebp),%eax
 828ac59:	6b c0 3d             	imul   $0x3d,%eax,%eax
 828ac5c:	83 c0 10             	add    $0x10,%eax
 828ac5f:	03 45 08             	add    0x8(%ebp),%eax
 828ac62:	83 c0 05             	add    $0x5,%eax
 828ac65:	89 04 24             	mov    %eax,(%esp)
 828ac68:	e8 05 5b ec ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 828ac6d:	0f b7 d0             	movzwl %ax,%edx
 828ac70:	8b 45 0c             	mov    0xc(%ebp),%eax
 828ac73:	89 54 24 04          	mov    %edx,0x4(%esp)
 828ac77:	89 04 24             	mov    %eax,(%esp)
 828ac7a:	e8 25 f2 e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 828ac7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 828ac82:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828ac89:	00 
 828ac8a:	89 04 24             	mov    %eax,(%esp)
 828ac8d:	e8 8e 0c e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 828ac92:	8b 45 10             	mov    0x10(%ebp),%eax
 828ac95:	6b c0 3d             	imul   $0x3d,%eax,%eax
 828ac98:	03 45 08             	add    0x8(%ebp),%eax
 828ac9b:	8d 50 04             	lea    0x4(%eax),%edx
 828ac9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 828aca1:	89 54 24 04          	mov    %edx,0x4(%esp)
 828aca5:	89 04 24             	mov    %eax,(%esp)
 828aca8:	e8 e1 5c ec ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 828acad:	e9 be 00 00 00       	jmp    828ad70 <_ZNK13CAccountCargo14MakeItemPacketEP11PacketGuardi+0x254>
 828acb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 828acb5:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 828acbc:	ff 
 828acbd:	89 04 24             	mov    %eax,(%esp)
 828acc0:	e8 77 0c e4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 828acc5:	8b 45 0c             	mov    0xc(%ebp),%eax
 828acc8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828accf:	00 
 828acd0:	89 04 24             	mov    %eax,(%esp)
 828acd3:	e8 64 0c e4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 828acd8:	8b 45 0c             	mov    0xc(%ebp),%eax
 828acdb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828ace2:	00 
 828ace3:	89 04 24             	mov    %eax,(%esp)
 828ace6:	e8 35 0c e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 828aceb:	8b 45 0c             	mov    0xc(%ebp),%eax
 828acee:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828acf5:	00 
 828acf6:	89 04 24             	mov    %eax,(%esp)
 828acf9:	e8 a6 f1 e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 828acfe:	8b 45 0c             	mov    0xc(%ebp),%eax
 828ad01:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828ad08:	00 
 828ad09:	89 04 24             	mov    %eax,(%esp)
 828ad0c:	e8 0f 0c e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 828ad11:	8b 45 0c             	mov    0xc(%ebp),%eax
 828ad14:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828ad1b:	00 
 828ad1c:	89 04 24             	mov    %eax,(%esp)
 828ad1f:	e8 18 0c e4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 828ad24:	8b 45 0c             	mov    0xc(%ebp),%eax
 828ad27:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828ad2e:	00 
 828ad2f:	89 04 24             	mov    %eax,(%esp)
 828ad32:	e8 e9 0b e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 828ad37:	8b 45 0c             	mov    0xc(%ebp),%eax
 828ad3a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828ad41:	00 
 828ad42:	89 04 24             	mov    %eax,(%esp)
 828ad45:	e8 5a f1 e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 828ad4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 828ad4d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828ad54:	00 
 828ad55:	89 04 24             	mov    %eax,(%esp)
 828ad58:	e8 c3 0b e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 828ad5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 828ad60:	c7 44 24 04 c0 dd 43 	movl   $0x943ddc0,0x4(%esp)
 828ad67:	09 
 828ad68:	89 04 24             	mov    %eax,(%esp)
 828ad6b:	e8 1e 5c ec ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 828ad70:	c9                   	leave
 828ad71:	c3                   	ret

```

```c
// CAccountCargo::MakeItemPacket @ 0x828ab1c

/* CAccountCargo::MakeItemPacket(PacketGuard*, int) const */

void __thiscall CAccountCargo::MakeItemPacket(CAccountCargo *this,PacketGuard *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  GameWorld *this_00;
  
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,param_2);
  if (*(int *)(this + param_2 * 0x3d + 6) == 0) {
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
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + param_2 * 0x3d + 6));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + param_2 * 0x3d + 0xb))
    ;
    uVar2 = GetIntegratedPvPItemAttr((Inven_Item *)(this + param_2 * 0x3d + 4));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar2 & 0xff);
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)param_1,(uint)*(ushort *)(this + param_2 * 0x3d + 0xf));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(byte)this[param_2 * 0x3d + 4])
    ;
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsEnchantRevisionChannel(this_00);
    if (cVar1 == '\0') {
      InterfacePacketBuf::put_int
                ((InterfacePacketBuf *)param_1,*(int *)(this + param_2 * 0x3d + 0x11));
    }
    else {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0);
    }
    uVar2 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(this + param_2 * 0x3d + 0x15));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar2 & 0xff);
    uVar2 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(this + param_2 * 0x3d + 0x15));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar2 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
    InterfacePacketBuf::put_packet
              ((InterfacePacketBuf *)param_1,(Inven_Item *)(this + param_2 * 0x3d + 4));
  }
  return;
}

```

---

## MoveItem

```asm
// === 08289f26 CAccountCargo::MoveItem  [0x08289f26-0x828a129] ===
 8289f26:	55                   	push   %ebp
 8289f27:	89 e5                	mov    %esp,%ebp
 8289f29:	56                   	push   %esi
 8289f2a:	53                   	push   %ebx
 8289f2b:	83 ec 50             	sub    $0x50,%esp
 8289f2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8289f31:	89 44 24 04          	mov    %eax,0x4(%esp)
 8289f35:	8b 45 08             	mov    0x8(%ebp),%eax
 8289f38:	89 04 24             	mov    %eax,(%esp)
 8289f3b:	e8 14 06 00 00       	call   828a554 <_ZNK13CAccountCargo14CheckValidSlotEi>
 8289f40:	83 f0 01             	xor    $0x1,%eax
 8289f43:	84 c0                	test   %al,%al
 8289f45:	75 21                	jne    8289f68 <_ZN13CAccountCargo8MoveItemEii+0x42>
 8289f47:	8b 45 10             	mov    0x10(%ebp),%eax
 8289f4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8289f4e:	8b 45 08             	mov    0x8(%ebp),%eax
 8289f51:	89 04 24             	mov    %eax,(%esp)
 8289f54:	e8 fb 05 00 00       	call   828a554 <_ZNK13CAccountCargo14CheckValidSlotEi>
 8289f59:	83 f0 01             	xor    $0x1,%eax
 8289f5c:	84 c0                	test   %al,%al
 8289f5e:	75 08                	jne    8289f68 <_ZN13CAccountCargo8MoveItemEii+0x42>
 8289f60:	8b 45 0c             	mov    0xc(%ebp),%eax
 8289f63:	3b 45 10             	cmp    0x10(%ebp),%eax
 8289f66:	75 07                	jne    8289f6f <_ZN13CAccountCargo8MoveItemEii+0x49>
 8289f68:	b8 01 00 00 00       	mov    $0x1,%eax
 8289f6d:	eb 05                	jmp    8289f74 <_ZN13CAccountCargo8MoveItemEii+0x4e>
 8289f6f:	b8 00 00 00 00       	mov    $0x0,%eax
 8289f74:	84 c0                	test   %al,%al
 8289f76:	74 0a                	je     8289f82 <_ZN13CAccountCargo8MoveItemEii+0x5c>
 8289f78:	b8 00 00 00 00       	mov    $0x0,%eax
 8289f7d:	e9 a1 01 00 00       	jmp    828a123 <_ZN13CAccountCargo8MoveItemEii+0x1fd>
 8289f82:	8d 45 bb             	lea    -0x45(%ebp),%eax
 8289f85:	89 04 24             	mov    %eax,(%esp)
 8289f88:	e8 c7 18 e4 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8289f8d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8289f90:	8b 45 08             	mov    0x8(%ebp),%eax
 8289f93:	6b d2 3d             	imul   $0x3d,%edx,%edx
 8289f96:	8b 4c 02 04          	mov    0x4(%edx,%eax,1),%ecx
 8289f9a:	89 4d bb             	mov    %ecx,-0x45(%ebp)
 8289f9d:	8b 4c 02 08          	mov    0x8(%edx,%eax,1),%ecx
 8289fa1:	89 4d bf             	mov    %ecx,-0x41(%ebp)
 8289fa4:	8b 4c 02 0c          	mov    0xc(%edx,%eax,1),%ecx
 8289fa8:	89 4d c3             	mov    %ecx,-0x3d(%ebp)
 8289fab:	8b 4c 02 10          	mov    0x10(%edx,%eax,1),%ecx
 8289faf:	89 4d c7             	mov    %ecx,-0x39(%ebp)
 8289fb2:	8b 4c 02 14          	mov    0x14(%edx,%eax,1),%ecx
 8289fb6:	89 4d cb             	mov    %ecx,-0x35(%ebp)
 8289fb9:	8b 4c 02 18          	mov    0x18(%edx,%eax,1),%ecx
 8289fbd:	89 4d cf             	mov    %ecx,-0x31(%ebp)
 8289fc0:	8b 4c 02 1c          	mov    0x1c(%edx,%eax,1),%ecx
 8289fc4:	89 4d d3             	mov    %ecx,-0x2d(%ebp)
 8289fc7:	8b 4c 02 20          	mov    0x20(%edx,%eax,1),%ecx
 8289fcb:	89 4d d7             	mov    %ecx,-0x29(%ebp)
 8289fce:	8b 4c 02 24          	mov    0x24(%edx,%eax,1),%ecx
 8289fd2:	89 4d db             	mov    %ecx,-0x25(%ebp)
 8289fd5:	8b 4c 02 28          	mov    0x28(%edx,%eax,1),%ecx
 8289fd9:	89 4d df             	mov    %ecx,-0x21(%ebp)
 8289fdc:	8b 4c 02 2c          	mov    0x2c(%edx,%eax,1),%ecx
 8289fe0:	89 4d e3             	mov    %ecx,-0x1d(%ebp)
 8289fe3:	8b 4c 02 30          	mov    0x30(%edx,%eax,1),%ecx
 8289fe7:	89 4d e7             	mov    %ecx,-0x19(%ebp)
 8289fea:	8b 4c 02 34          	mov    0x34(%edx,%eax,1),%ecx
 8289fee:	89 4d eb             	mov    %ecx,-0x15(%ebp)
 8289ff1:	8b 4c 02 38          	mov    0x38(%edx,%eax,1),%ecx
 8289ff5:	89 4d ef             	mov    %ecx,-0x11(%ebp)
 8289ff8:	8b 4c 02 3c          	mov    0x3c(%edx,%eax,1),%ecx
 8289ffc:	89 4d f3             	mov    %ecx,-0xd(%ebp)
 8289fff:	0f b6 44 02 40       	movzbl 0x40(%edx,%eax,1),%eax
 828a004:	88 45 f7             	mov    %al,-0x9(%ebp)
 828a007:	8b 55 0c             	mov    0xc(%ebp),%edx
 828a00a:	8b 5d 10             	mov    0x10(%ebp),%ebx
 828a00d:	8b 45 08             	mov    0x8(%ebp),%eax
 828a010:	6b d2 3d             	imul   $0x3d,%edx,%edx
 828a013:	8b 4d 08             	mov    0x8(%ebp),%ecx
 828a016:	6b db 3d             	imul   $0x3d,%ebx,%ebx
 828a019:	8b 74 0b 04          	mov    0x4(%ebx,%ecx,1),%esi
 828a01d:	89 74 02 04          	mov    %esi,0x4(%edx,%eax,1)
 828a021:	8b 74 0b 08          	mov    0x8(%ebx,%ecx,1),%esi
 828a025:	89 74 02 08          	mov    %esi,0x8(%edx,%eax,1)
 828a029:	8b 74 0b 0c          	mov    0xc(%ebx,%ecx,1),%esi
 828a02d:	89 74 02 0c          	mov    %esi,0xc(%edx,%eax,1)
 828a031:	8b 74 0b 10          	mov    0x10(%ebx,%ecx,1),%esi
 828a035:	89 74 02 10          	mov    %esi,0x10(%edx,%eax,1)
 828a039:	8b 74 0b 14          	mov    0x14(%ebx,%ecx,1),%esi
 828a03d:	89 74 02 14          	mov    %esi,0x14(%edx,%eax,1)
 828a041:	8b 74 0b 18          	mov    0x18(%ebx,%ecx,1),%esi
 828a045:	89 74 02 18          	mov    %esi,0x18(%edx,%eax,1)
 828a049:	8b 74 0b 1c          	mov    0x1c(%ebx,%ecx,1),%esi
 828a04d:	89 74 02 1c          	mov    %esi,0x1c(%edx,%eax,1)
 828a051:	8b 74 0b 20          	mov    0x20(%ebx,%ecx,1),%esi
 828a055:	89 74 02 20          	mov    %esi,0x20(%edx,%eax,1)
 828a059:	8b 74 0b 24          	mov    0x24(%ebx,%ecx,1),%esi
 828a05d:	89 74 02 24          	mov    %esi,0x24(%edx,%eax,1)
 828a061:	8b 74 0b 28          	mov    0x28(%ebx,%ecx,1),%esi
 828a065:	89 74 02 28          	mov    %esi,0x28(%edx,%eax,1)
 828a069:	8b 74 0b 2c          	mov    0x2c(%ebx,%ecx,1),%esi
 828a06d:	89 74 02 2c          	mov    %esi,0x2c(%edx,%eax,1)
 828a071:	8b 74 0b 30          	mov    0x30(%ebx,%ecx,1),%esi
 828a075:	89 74 02 30          	mov    %esi,0x30(%edx,%eax,1)
 828a079:	8b 74 0b 34          	mov    0x34(%ebx,%ecx,1),%esi
 828a07d:	89 74 02 34          	mov    %esi,0x34(%edx,%eax,1)
 828a081:	8b 74 0b 38          	mov    0x38(%ebx,%ecx,1),%esi
 828a085:	89 74 02 38          	mov    %esi,0x38(%edx,%eax,1)
 828a089:	8b 74 0b 3c          	mov    0x3c(%ebx,%ecx,1),%esi
 828a08d:	89 74 02 3c          	mov    %esi,0x3c(%edx,%eax,1)
 828a091:	0f b6 4c 0b 40       	movzbl 0x40(%ebx,%ecx,1),%ecx
 828a096:	88 4c 02 40          	mov    %cl,0x40(%edx,%eax,1)
 828a09a:	8b 55 10             	mov    0x10(%ebp),%edx
 828a09d:	8b 45 08             	mov    0x8(%ebp),%eax
 828a0a0:	6b d2 3d             	imul   $0x3d,%edx,%edx
 828a0a3:	8b 4d bb             	mov    -0x45(%ebp),%ecx
 828a0a6:	89 4c 02 04          	mov    %ecx,0x4(%edx,%eax,1)
 828a0aa:	8b 4d bf             	mov    -0x41(%ebp),%ecx
 828a0ad:	89 4c 02 08          	mov    %ecx,0x8(%edx,%eax,1)
 828a0b1:	8b 4d c3             	mov    -0x3d(%ebp),%ecx
 828a0b4:	89 4c 02 0c          	mov    %ecx,0xc(%edx,%eax,1)
 828a0b8:	8b 4d c7             	mov    -0x39(%ebp),%ecx
 828a0bb:	89 4c 02 10          	mov    %ecx,0x10(%edx,%eax,1)
 828a0bf:	8b 4d cb             	mov    -0x35(%ebp),%ecx
 828a0c2:	89 4c 02 14          	mov    %ecx,0x14(%edx,%eax,1)
 828a0c6:	8b 4d cf             	mov    -0x31(%ebp),%ecx
 828a0c9:	89 4c 02 18          	mov    %ecx,0x18(%edx,%eax,1)
 828a0cd:	8b 4d d3             	mov    -0x2d(%ebp),%ecx
 828a0d0:	89 4c 02 1c          	mov    %ecx,0x1c(%edx,%eax,1)
 828a0d4:	8b 4d d7             	mov    -0x29(%ebp),%ecx
 828a0d7:	89 4c 02 20          	mov    %ecx,0x20(%edx,%eax,1)
 828a0db:	8b 4d db             	mov    -0x25(%ebp),%ecx
 828a0de:	89 4c 02 24          	mov    %ecx,0x24(%edx,%eax,1)
 828a0e2:	8b 4d df             	mov    -0x21(%ebp),%ecx
 828a0e5:	89 4c 02 28          	mov    %ecx,0x28(%edx,%eax,1)
 828a0e9:	8b 4d e3             	mov    -0x1d(%ebp),%ecx
 828a0ec:	89 4c 02 2c          	mov    %ecx,0x2c(%edx,%eax,1)
 828a0f0:	8b 4d e7             	mov    -0x19(%ebp),%ecx
 828a0f3:	89 4c 02 30          	mov    %ecx,0x30(%edx,%eax,1)
 828a0f7:	8b 4d eb             	mov    -0x15(%ebp),%ecx
 828a0fa:	89 4c 02 34          	mov    %ecx,0x34(%edx,%eax,1)
 828a0fe:	8b 4d ef             	mov    -0x11(%ebp),%ecx
 828a101:	89 4c 02 38          	mov    %ecx,0x38(%edx,%eax,1)
 828a105:	8b 4d f3             	mov    -0xd(%ebp),%ecx
 828a108:	89 4c 02 3c          	mov    %ecx,0x3c(%edx,%eax,1)
 828a10c:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
 828a110:	88 4c 02 40          	mov    %cl,0x40(%edx,%eax,1)
 828a114:	8b 45 08             	mov    0x8(%ebp),%eax
 828a117:	c6 80 64 0d 00 00 01 	movb   $0x1,0xd64(%eax)
 828a11e:	b8 01 00 00 00       	mov    $0x1,%eax
 828a123:	83 c4 50             	add    $0x50,%esp
 828a126:	5b                   	pop    %ebx
 828a127:	5e                   	pop    %esi
 828a128:	5d                   	pop    %ebp
 828a129:	c3                   	ret

```

```c
// CAccountCargo::MoveItem @ 0x8289f26

/* CAccountCargo::MoveItem(int, int) */

bool __thiscall CAccountCargo::MoveItem(CAccountCargo *this,int param_1,int param_2)

{
  CAccountCargo CVar1;
  undefined4 uVar2;
  undefined4 uVar3;
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
  bool bVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  Inven_Item local_49 [61];
  
  cVar18 = CheckValidSlot(this,param_1);
  if (((cVar18 == '\x01') && (cVar18 = CheckValidSlot(this,param_2), cVar18 == '\x01')) &&
     (param_1 != param_2)) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  if (!bVar17) {
    Inven_Item::Inven_Item(local_49);
    iVar19 = param_1 * 0x3d;
    uVar2 = *(undefined4 *)(this + iVar19 + 4);
    uVar3 = *(undefined4 *)(this + iVar19 + 8);
    uVar4 = *(undefined4 *)(this + iVar19 + 0xc);
    uVar5 = *(undefined4 *)(this + iVar19 + 0x10);
    uVar6 = *(undefined4 *)(this + iVar19 + 0x14);
    uVar7 = *(undefined4 *)(this + iVar19 + 0x18);
    uVar8 = *(undefined4 *)(this + iVar19 + 0x1c);
    uVar9 = *(undefined4 *)(this + iVar19 + 0x20);
    uVar10 = *(undefined4 *)(this + iVar19 + 0x24);
    uVar11 = *(undefined4 *)(this + iVar19 + 0x28);
    uVar12 = *(undefined4 *)(this + iVar19 + 0x2c);
    uVar13 = *(undefined4 *)(this + iVar19 + 0x30);
    uVar14 = *(undefined4 *)(this + iVar19 + 0x34);
    uVar15 = *(undefined4 *)(this + iVar19 + 0x38);
    uVar16 = *(undefined4 *)(this + iVar19 + 0x3c);
    CVar1 = this[iVar19 + 0x40];
    iVar19 = param_1 * 0x3d;
    iVar20 = param_2 * 0x3d;
    *(undefined4 *)(this + iVar19 + 4) = *(undefined4 *)(this + iVar20 + 4);
    *(undefined4 *)(this + iVar19 + 8) = *(undefined4 *)(this + iVar20 + 8);
    *(undefined4 *)(this + iVar19 + 0xc) = *(undefined4 *)(this + iVar20 + 0xc);
    *(undefined4 *)(this + iVar19 + 0x10) = *(undefined4 *)(this + iVar20 + 0x10);
    *(undefined4 *)(this + iVar19 + 0x14) = *(undefined4 *)(this + iVar20 + 0x14);
    *(undefined4 *)(this + iVar19 + 0x18) = *(undefined4 *)(this + iVar20 + 0x18);
    *(undefined4 *)(this + iVar19 + 0x1c) = *(undefined4 *)(this + iVar20 + 0x1c);
    *(undefined4 *)(this + iVar19 + 0x20) = *(undefined4 *)(this + iVar20 + 0x20);
    *(undefined4 *)(this + iVar19 + 0x24) = *(undefined4 *)(this + iVar20 + 0x24);
    *(undefined4 *)(this + iVar19 + 0x28) = *(undefined4 *)(this + iVar20 + 0x28);
    *(undefined4 *)(this + iVar19 + 0x2c) = *(undefined4 *)(this + iVar20 + 0x2c);
    *(undefined4 *)(this + iVar19 + 0x30) = *(undefined4 *)(this + iVar20 + 0x30);
    *(undefined4 *)(this + iVar19 + 0x34) = *(undefined4 *)(this + iVar20 + 0x34);
    *(undefined4 *)(this + iVar19 + 0x38) = *(undefined4 *)(this + iVar20 + 0x38);
    *(undefined4 *)(this + iVar19 + 0x3c) = *(undefined4 *)(this + iVar20 + 0x3c);
    this[iVar19 + 0x40] = this[iVar20 + 0x40];
    iVar19 = param_2 * 0x3d;
    *(undefined4 *)(this + iVar19 + 4) = uVar2;
    *(undefined4 *)(this + iVar19 + 8) = uVar3;
    *(undefined4 *)(this + iVar19 + 0xc) = uVar4;
    *(undefined4 *)(this + iVar19 + 0x10) = uVar5;
    *(undefined4 *)(this + iVar19 + 0x14) = uVar6;
    *(undefined4 *)(this + iVar19 + 0x18) = uVar7;
    *(undefined4 *)(this + iVar19 + 0x1c) = uVar8;
    *(undefined4 *)(this + iVar19 + 0x20) = uVar9;
    *(undefined4 *)(this + iVar19 + 0x24) = uVar10;
    *(undefined4 *)(this + iVar19 + 0x28) = uVar11;
    *(undefined4 *)(this + iVar19 + 0x2c) = uVar12;
    *(undefined4 *)(this + iVar19 + 0x30) = uVar13;
    *(undefined4 *)(this + iVar19 + 0x34) = uVar14;
    *(undefined4 *)(this + iVar19 + 0x38) = uVar15;
    *(undefined4 *)(this + iVar19 + 0x3c) = uVar16;
    this[iVar19 + 0x40] = CVar1;
    this[0xd64] = (CAccountCargo)0x1;
  }
  return !bVar17;
}

```

---

## ResetSlot

```asm
// === 082898c0 CAccountCargo::ResetSlot  [0x082898c0-0x82898f7] ===
 82898c0:	55                   	push   %ebp
 82898c1:	89 e5                	mov    %esp,%ebp
 82898c3:	83 ec 18             	sub    $0x18,%esp
 82898c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82898c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82898cd:	8b 45 08             	mov    0x8(%ebp),%eax
 82898d0:	89 04 24             	mov    %eax,(%esp)
 82898d3:	e8 7c 0c 00 00       	call   828a554 <_ZNK13CAccountCargo14CheckValidSlotEi>
 82898d8:	83 f0 01             	xor    $0x1,%eax
 82898db:	84 c0                	test   %al,%al
 82898dd:	75 16                	jne    82898f5 <_ZN13CAccountCargo9ResetSlotEi+0x35>
 82898df:	8b 45 0c             	mov    0xc(%ebp),%eax
 82898e2:	6b c0 3d             	imul   $0x3d,%eax,%eax
 82898e5:	03 45 08             	add    0x8(%ebp),%eax
 82898e8:	83 c0 04             	add    $0x4,%eax
 82898eb:	89 04 24             	mov    %eax,(%esp)
 82898ee:	e8 e5 1e e4 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 82898f3:	eb 01                	jmp    82898f6 <_ZN13CAccountCargo9ResetSlotEi+0x36>
 82898f5:	90                   	nop
 82898f6:	c9                   	leave
 82898f7:	c3                   	ret

```

```c
// CAccountCargo::ResetSlot @ 0x82898c0

/* CAccountCargo::ResetSlot(int) */

void __thiscall CAccountCargo::ResetSlot(CAccountCargo *this,int param_1)

{
  char cVar1;
  
  cVar1 = CheckValidSlot(this,param_1);
  if (cVar1 == '\x01') {
    Inven_Item::reset((Inven_Item *)(this + param_1 * 0x3d + 4));
  }
  return;
}

```

---

## SendItemList

```asm
// === 0828a88a CAccountCargo::SendItemList  [0x0828a88a-0x828ab1b] ===
 828a88a:	55                   	push   %ebp
 828a88b:	89 e5                	mov    %esp,%ebp
 828a88d:	56                   	push   %esi
 828a88e:	53                   	push   %ebx
 828a88f:	83 ec 20             	sub    $0x20,%esp
 828a892:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828a895:	89 04 24             	mov    %eax,(%esp)
 828a898:	e8 af 34 30 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 828a89d:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 828a8a4:	00 
 828a8a5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828a8ac:	00 
 828a8ad:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828a8b0:	89 04 24             	mov    %eax,(%esp)
 828a8b3:	e8 44 10 e4 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 828a8b8:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 828a8bf:	00 
 828a8c0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828a8c3:	89 04 24             	mov    %eax,(%esp)
 828a8c6:	e8 55 10 e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 828a8cb:	8b 45 08             	mov    0x8(%ebp),%eax
 828a8ce:	8b 80 60 0d 00 00    	mov    0xd60(%eax),%eax
 828a8d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 828a8d8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828a8db:	89 04 24             	mov    %eax,(%esp)
 828a8de:	e8 c1 f5 e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 828a8e3:	8b 45 08             	mov    0x8(%ebp),%eax
 828a8e6:	8b 80 5c 0d 00 00    	mov    0xd5c(%eax),%eax
 828a8ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 828a8f0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828a8f3:	89 04 24             	mov    %eax,(%esp)
 828a8f6:	e8 41 10 e4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 828a8fb:	8b 45 08             	mov    0x8(%ebp),%eax
 828a8fe:	89 04 24             	mov    %eax,(%esp)
 828a901:	e8 8e fe ff ff       	call   828a794 <_ZN13CAccountCargo12GetItemCountEv>
 828a906:	89 44 24 04          	mov    %eax,0x4(%esp)
 828a90a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828a90d:	89 04 24             	mov    %eax,(%esp)
 828a910:	e8 8f f5 e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 828a915:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 828a91c:	e9 8b 01 00 00       	jmp    828aaac <_ZN13CAccountCargo12SendItemListEv+0x222>
 828a921:	8b 55 f4             	mov    -0xc(%ebp),%edx
 828a924:	8b 45 08             	mov    0x8(%ebp),%eax
 828a927:	6b d2 3d             	imul   $0x3d,%edx,%edx
 828a92a:	8b 44 02 06          	mov    0x6(%edx,%eax,1),%eax
 828a92e:	85 c0                	test   %eax,%eax
 828a930:	0f 84 72 01 00 00    	je     828aaa8 <_ZN13CAccountCargo12SendItemListEv+0x21e>
 828a936:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828a939:	89 44 24 04          	mov    %eax,0x4(%esp)
 828a93d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828a940:	89 04 24             	mov    %eax,(%esp)
 828a943:	e8 5c f5 e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 828a948:	8b 55 f4             	mov    -0xc(%ebp),%edx
 828a94b:	8b 45 08             	mov    0x8(%ebp),%eax
 828a94e:	6b d2 3d             	imul   $0x3d,%edx,%edx
 828a951:	8b 44 02 06          	mov    0x6(%edx,%eax,1),%eax
 828a955:	89 44 24 04          	mov    %eax,0x4(%esp)
 828a959:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828a95c:	89 04 24             	mov    %eax,(%esp)
 828a95f:	e8 d8 0f e4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 828a964:	8b 55 f4             	mov    -0xc(%ebp),%edx
 828a967:	8b 45 08             	mov    0x8(%ebp),%eax
 828a96a:	6b d2 3d             	imul   $0x3d,%edx,%edx
 828a96d:	8b 44 02 0b          	mov    0xb(%edx,%eax,1),%eax
 828a971:	89 44 24 04          	mov    %eax,0x4(%esp)
 828a975:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828a978:	89 04 24             	mov    %eax,(%esp)
 828a97b:	e8 bc 0f e4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 828a980:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828a983:	6b c0 3d             	imul   $0x3d,%eax,%eax
 828a986:	03 45 08             	add    0x8(%ebp),%eax
 828a989:	83 c0 04             	add    $0x4,%eax
 828a98c:	89 04 24             	mov    %eax,(%esp)
 828a98f:	e8 6b 1c 27 00       	call   84fc5ff <_Z24GetIntegratedPvPItemAttrRK10Inven_Item>
 828a994:	0f b6 c0             	movzbl %al,%eax
 828a997:	89 44 24 04          	mov    %eax,0x4(%esp)
 828a99b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828a99e:	89 04 24             	mov    %eax,(%esp)
 828a9a1:	e8 7a 0f e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 828a9a6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 828a9a9:	8b 45 08             	mov    0x8(%ebp),%eax
 828a9ac:	6b d2 3d             	imul   $0x3d,%edx,%edx
 828a9af:	0f b7 44 02 0f       	movzwl 0xf(%edx,%eax,1),%eax
 828a9b4:	0f b7 c0             	movzwl %ax,%eax
 828a9b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 828a9bb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828a9be:	89 04 24             	mov    %eax,(%esp)
 828a9c1:	e8 de f4 e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 828a9c6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 828a9c9:	8b 45 08             	mov    0x8(%ebp),%eax
 828a9cc:	6b d2 3d             	imul   $0x3d,%edx,%edx
 828a9cf:	0f b6 44 02 04       	movzbl 0x4(%edx,%eax,1),%eax
 828a9d4:	0f b6 c0             	movzbl %al,%eax
 828a9d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 828a9db:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828a9de:	89 04 24             	mov    %eax,(%esp)
 828a9e1:	e8 3a 0f e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 828a9e6:	e8 bc f9 e4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 828a9eb:	89 04 24             	mov    %eax,(%esp)
 828a9ee:	e8 09 9a fa ff       	call   82343fc <_ZN9GameWorld24IsEnchantRevisionChannelEv>
 828a9f3:	84 c0                	test   %al,%al
 828a9f5:	74 15                	je     828aa0c <_ZN13CAccountCargo12SendItemListEv+0x182>
 828a9f7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828a9fe:	00 
 828a9ff:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828aa02:	89 04 24             	mov    %eax,(%esp)
 828aa05:	e8 32 0f e4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 828aa0a:	eb 1c                	jmp    828aa28 <_ZN13CAccountCargo12SendItemListEv+0x19e>
 828aa0c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 828aa0f:	8b 45 08             	mov    0x8(%ebp),%eax
 828aa12:	6b d2 3d             	imul   $0x3d,%edx,%edx
 828aa15:	8b 44 02 11          	mov    0x11(%edx,%eax,1),%eax
 828aa19:	89 44 24 04          	mov    %eax,0x4(%esp)
 828aa1d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828aa20:	89 04 24             	mov    %eax,(%esp)
 828aa23:	e8 14 0f e4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 828aa28:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828aa2b:	6b c0 3d             	imul   $0x3d,%eax,%eax
 828aa2e:	83 c0 10             	add    $0x10,%eax
 828aa31:	03 45 08             	add    0x8(%ebp),%eax
 828aa34:	83 c0 05             	add    $0x5,%eax
 828aa37:	89 04 24             	mov    %eax,(%esp)
 828aa3a:	e8 f3 5c ec ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 828aa3f:	0f b6 c0             	movzbl %al,%eax
 828aa42:	89 44 24 04          	mov    %eax,0x4(%esp)
 828aa46:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828aa49:	89 04 24             	mov    %eax,(%esp)
 828aa4c:	e8 cf 0e e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 828aa51:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828aa54:	6b c0 3d             	imul   $0x3d,%eax,%eax
 828aa57:	83 c0 10             	add    $0x10,%eax
 828aa5a:	03 45 08             	add    0x8(%ebp),%eax
 828aa5d:	83 c0 05             	add    $0x5,%eax
 828aa60:	89 04 24             	mov    %eax,(%esp)
 828aa63:	e8 0a 5d ec ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 828aa68:	0f b7 c0             	movzwl %ax,%eax
 828aa6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 828aa6f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828aa72:	89 04 24             	mov    %eax,(%esp)
 828aa75:	e8 2a f4 e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 828aa7a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828aa81:	00 
 828aa82:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828aa85:	89 04 24             	mov    %eax,(%esp)
 828aa88:	e8 93 0e e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 828aa8d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828aa90:	6b c0 3d             	imul   $0x3d,%eax,%eax
 828aa93:	03 45 08             	add    0x8(%ebp),%eax
 828aa96:	83 c0 04             	add    $0x4,%eax
 828aa99:	89 44 24 04          	mov    %eax,0x4(%esp)
 828aa9d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828aaa0:	89 04 24             	mov    %eax,(%esp)
 828aaa3:	e8 e6 5e ec ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 828aaa8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 828aaac:	8b 45 08             	mov    0x8(%ebp),%eax
 828aaaf:	8b 80 60 0d 00 00    	mov    0xd60(%eax),%eax
 828aab5:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 828aab8:	0f 9f c0             	setg   %al
 828aabb:	84 c0                	test   %al,%al
 828aabd:	0f 85 5e fe ff ff    	jne    828a921 <_ZN13CAccountCargo12SendItemListEv+0x97>
 828aac3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 828aaca:	00 
 828aacb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828aace:	89 04 24             	mov    %eax,(%esp)
 828aad1:	e8 82 0e e4 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 828aad6:	8b 45 08             	mov    0x8(%ebp),%eax
 828aad9:	8b 00                	mov    (%eax),%eax
 828aadb:	8d 55 e8             	lea    -0x18(%ebp),%edx
 828aade:	89 54 24 04          	mov    %edx,0x4(%esp)
 828aae2:	89 04 24             	mov    %eax,(%esp)
 828aae5:	e8 d0 da 3b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 828aaea:	89 c3                	mov    %eax,%ebx
 828aaec:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828aaef:	89 04 24             	mov    %eax,(%esp)
 828aaf2:	e8 89 33 30 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 828aaf7:	89 d8                	mov    %ebx,%eax
 828aaf9:	83 c4 20             	add    $0x20,%esp
 828aafc:	5b                   	pop    %ebx
 828aafd:	5e                   	pop    %esi
 828aafe:	5d                   	pop    %ebp
 828aaff:	c3                   	ret
 828ab00:	89 d3                	mov    %edx,%ebx
 828ab02:	89 c6                	mov    %eax,%esi
 828ab04:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828ab07:	89 04 24             	mov    %eax,(%esp)
 828ab0a:	e8 71 33 30 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 828ab0f:	89 f0                	mov    %esi,%eax
 828ab11:	89 da                	mov    %ebx,%edx
 828ab13:	89 04 24             	mov    %eax,(%esp)
 828ab16:	e8 35 8c 85 00       	call   8ae3750 <_Unwind_Resume>
 828ab1b:	90                   	nop

```

```c
// CAccountCargo::SendItemList @ 0x828a88a

/* CAccountCargo::SendItemList() */

undefined4 __thiscall CAccountCargo::SendItemList(CAccountCargo *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  GameWorld *this_00;
  undefined4 uVar4;
  PacketGuard local_1c [12];
  int local_10;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0828a8b3 to 0828aae9 has its CatchHandler @ 0828ab00 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xd);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0xc);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,*(int *)(this + 0xd60));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(this + 0xd5c));
  iVar2 = GetItemCount(this);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,iVar2);
  for (local_10 = 0; local_10 < *(int *)(this + 0xd60); local_10 = local_10 + 1) {
    if (*(int *)(this + local_10 * 0x3d + 6) != 0) {
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,local_10);
      InterfacePacketBuf::put_int
                ((InterfacePacketBuf *)local_1c,*(int *)(this + local_10 * 0x3d + 6));
      InterfacePacketBuf::put_int
                ((InterfacePacketBuf *)local_1c,*(int *)(this + local_10 * 0x3d + 0xb));
      uVar3 = GetIntegratedPvPItemAttr((Inven_Item *)(this + local_10 * 0x3d + 4));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,uVar3 & 0xff);
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(this + local_10 * 0x3d + 0xf));
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)local_1c,(uint)(byte)this[local_10 * 0x3d + 4]);
      this_00 = (GameWorld *)G_GameWorld();
      cVar1 = GameWorld::IsEnchantRevisionChannel(this_00);
      if (cVar1 == '\0') {
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_1c,*(int *)(this + local_10 * 0x3d + 0x11));
      }
      else {
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,0);
      }
      uVar3 = stAmplifyOption_t::getAbilityType
                        ((stAmplifyOption_t *)(this + local_10 * 0x3d + 0x15));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,uVar3 & 0xff);
      uVar3 = stAmplifyOption_t::getAbilityValue
                        ((stAmplifyOption_t *)(this + local_10 * 0x3d + 0x15));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar3 & 0xffff);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
      InterfacePacketBuf::put_packet
                ((InterfacePacketBuf *)local_1c,(Inven_Item *)(this + local_10 * 0x3d + 4));
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  uVar4 = CUser::Send(*(CUser **)this,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return uVar4;
}

```

---

## SendNotifyMoney

```asm
// === 0828a7dc CAccountCargo::SendNotifyMoney  [0x0828a7dc-0x828a889] ===
 828a7dc:	55                   	push   %ebp
 828a7dd:	89 e5                	mov    %esp,%ebp
 828a7df:	56                   	push   %esi
 828a7e0:	53                   	push   %ebx
 828a7e1:	83 ec 20             	sub    $0x20,%esp
 828a7e4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828a7e7:	89 04 24             	mov    %eax,(%esp)
 828a7ea:	e8 5d 35 30 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 828a7ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 828a7f2:	89 44 24 08          	mov    %eax,0x8(%esp)
 828a7f6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 828a7fd:	00 
 828a7fe:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828a801:	89 04 24             	mov    %eax,(%esp)
 828a804:	e8 f3 10 e4 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 828a809:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 828a810:	00 
 828a811:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828a814:	89 04 24             	mov    %eax,(%esp)
 828a817:	e8 04 11 e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 828a81c:	8b 45 08             	mov    0x8(%ebp),%eax
 828a81f:	8b 80 5c 0d 00 00    	mov    0xd5c(%eax),%eax
 828a825:	89 44 24 04          	mov    %eax,0x4(%esp)
 828a829:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828a82c:	89 04 24             	mov    %eax,(%esp)
 828a82f:	e8 08 11 e4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 828a834:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 828a83b:	00 
 828a83c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828a83f:	89 04 24             	mov    %eax,(%esp)
 828a842:	e8 11 11 e4 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 828a847:	8b 45 08             	mov    0x8(%ebp),%eax
 828a84a:	8b 00                	mov    (%eax),%eax
 828a84c:	8d 55 ec             	lea    -0x14(%ebp),%edx
 828a84f:	89 54 24 04          	mov    %edx,0x4(%esp)
 828a853:	89 04 24             	mov    %eax,(%esp)
 828a856:	e8 5f dd 3b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 828a85b:	eb 1b                	jmp    828a878 <_ZN13CAccountCargo15SendNotifyMoneyE14ENUM_CMDPACKET+0x9c>
 828a85d:	89 d3                	mov    %edx,%ebx
 828a85f:	89 c6                	mov    %eax,%esi
 828a861:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828a864:	89 04 24             	mov    %eax,(%esp)
 828a867:	e8 14 36 30 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 828a86c:	89 f0                	mov    %esi,%eax
 828a86e:	89 da                	mov    %ebx,%edx
 828a870:	89 04 24             	mov    %eax,(%esp)
 828a873:	e8 d8 8e 85 00       	call   8ae3750 <_Unwind_Resume>
 828a878:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828a87b:	89 04 24             	mov    %eax,(%esp)
 828a87e:	e8 fd 35 30 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 828a883:	83 c4 20             	add    $0x20,%esp
 828a886:	5b                   	pop    %ebx
 828a887:	5e                   	pop    %esi
 828a888:	5d                   	pop    %ebp
 828a889:	c3                   	ret

```

```c
// CAccountCargo::SendNotifyMoney @ 0x828a7dc

/* CAccountCargo::SendNotifyMoney(ENUM_CMDPACKET) */

void __thiscall CAccountCargo::SendNotifyMoney(CAccountCargo *this,int param_2)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0828a804 to 0828a85a has its CatchHandler @ 0828a85d */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,*(int *)(this + 0xd5c));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(*(CUser **)this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## SendNotifyRecipe

```asm
// === 0828b3d0 CAccountCargo::SendNotifyRecipe  [0x0828b3d0-0x828b4eb] ===
 828b3d0:	55                   	push   %ebp
 828b3d1:	89 e5                	mov    %esp,%ebp
 828b3d3:	56                   	push   %esi
 828b3d4:	53                   	push   %ebx
 828b3d5:	83 ec 30             	sub    $0x30,%esp
 828b3d8:	8b 45 10             	mov    0x10(%ebp),%eax
 828b3db:	88 45 e4             	mov    %al,-0x1c(%ebp)
 828b3de:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828b3e1:	89 04 24             	mov    %eax,(%esp)
 828b3e4:	e8 63 29 30 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 828b3e9:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 828b3f0:	00 
 828b3f1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828b3f8:	00 
 828b3f9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828b3fc:	89 04 24             	mov    %eax,(%esp)
 828b3ff:	e8 f8 04 e4 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 828b404:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828b40b:	00 
 828b40c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828b40f:	89 04 24             	mov    %eax,(%esp)
 828b412:	e8 09 05 e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 828b417:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 828b41b:	74 3e                	je     828b45b <_ZN13CAccountCargo16SendNotifyRecipeEP5CUserib+0x8b>
 828b41d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 828b424:	00 
 828b425:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828b428:	89 04 24             	mov    %eax,(%esp)
 828b42b:	e8 74 ea e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 828b430:	8b 45 08             	mov    0x8(%ebp),%eax
 828b433:	89 04 24             	mov    %eax,(%esp)
 828b436:	e8 43 ee e4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 828b43b:	8d 55 ec             	lea    -0x14(%ebp),%edx
 828b43e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 828b442:	8b 55 0c             	mov    0xc(%ebp),%edx
 828b445:	89 54 24 08          	mov    %edx,0x8(%esp)
 828b449:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 828b450:	00 
 828b451:	89 04 24             	mov    %eax,(%esp)
 828b454:	e8 63 12 27 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 828b459:	eb 13                	jmp    828b46e <_ZN13CAccountCargo16SendNotifyRecipeEP5CUserib+0x9e>
 828b45b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 828b462:	00 
 828b463:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828b466:	89 04 24             	mov    %eax,(%esp)
 828b469:	e8 36 ea e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 828b46e:	8b 45 08             	mov    0x8(%ebp),%eax
 828b471:	89 04 24             	mov    %eax,(%esp)
 828b474:	e8 05 ee e4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 828b479:	8d 55 ec             	lea    -0x14(%ebp),%edx
 828b47c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 828b480:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 828b487:	00 
 828b488:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 828b48f:	00 
 828b490:	89 04 24             	mov    %eax,(%esp)
 828b493:	e8 24 12 27 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 828b498:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 828b49f:	00 
 828b4a0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828b4a3:	89 04 24             	mov    %eax,(%esp)
 828b4a6:	e8 ad 04 e4 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 828b4ab:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828b4ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 828b4b2:	8b 45 08             	mov    0x8(%ebp),%eax
 828b4b5:	89 04 24             	mov    %eax,(%esp)
 828b4b8:	e8 fd d0 3b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 828b4bd:	eb 1b                	jmp    828b4da <_ZN13CAccountCargo16SendNotifyRecipeEP5CUserib+0x10a>
 828b4bf:	89 d3                	mov    %edx,%ebx
 828b4c1:	89 c6                	mov    %eax,%esi
 828b4c3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828b4c6:	89 04 24             	mov    %eax,(%esp)
 828b4c9:	e8 b2 29 30 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 828b4ce:	89 f0                	mov    %esi,%eax
 828b4d0:	89 da                	mov    %ebx,%edx
 828b4d2:	89 04 24             	mov    %eax,(%esp)
 828b4d5:	e8 76 82 85 00       	call   8ae3750 <_Unwind_Resume>
 828b4da:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828b4dd:	89 04 24             	mov    %eax,(%esp)
 828b4e0:	e8 9b 29 30 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 828b4e5:	83 c4 30             	add    $0x30,%esp
 828b4e8:	5b                   	pop    %ebx
 828b4e9:	5e                   	pop    %esi
 828b4ea:	5d                   	pop    %ebp
 828b4eb:	c3                   	ret

```

```c
// CAccountCargo::SendNotifyRecipe @ 0x828b3d0

/* CAccountCargo::SendNotifyRecipe(CUser*, int, bool) */

void CAccountCargo::SendNotifyRecipe(CUser *param_1,int param_2,bool param_3)

{
  CInventory *pCVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0828b3ff to 0828b4bc has its CatchHandler @ 0828b4bf */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xe);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
  if (param_3) {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,2);
    pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::MakeItemPacket(pCVar1,1,param_2,local_18);
  }
  else {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
  }
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::MakeItemPacket(pCVar1,1,0,local_18);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## SetDBData

```asm
// === 08289816 CAccountCargo::SetDBData  [0x08289816-0x828986b] ===
 8289816:	55                   	push   %ebp
 8289817:	89 e5                	mov    %esp,%ebp
 8289819:	83 ec 18             	sub    $0x18,%esp
 828981c:	8b 45 08             	mov    0x8(%ebp),%eax
 828981f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8289822:	89 10                	mov    %edx,(%eax)
 8289824:	8b 45 08             	mov    0x8(%ebp),%eax
 8289827:	8b 55 18             	mov    0x18(%ebp),%edx
 828982a:	89 90 60 0d 00 00    	mov    %edx,0xd60(%eax)
 8289830:	8b 45 08             	mov    0x8(%ebp),%eax
 8289833:	8b 55 14             	mov    0x14(%ebp),%edx
 8289836:	89 90 5c 0d 00 00    	mov    %edx,0xd5c(%eax)
 828983c:	8b 45 08             	mov    0x8(%ebp),%eax
 828983f:	c6 80 64 0d 00 00 00 	movb   $0x0,0xd64(%eax)
 8289846:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 828984a:	74 1d                	je     8289869 <_ZN13CAccountCargo9SetDBDataEP5CUserP10Inven_Itemjj+0x53>
 828984c:	8b 45 08             	mov    0x8(%ebp),%eax
 828984f:	8d 50 04             	lea    0x4(%eax),%edx
 8289852:	c7 44 24 08 58 0d 00 	movl   $0xd58,0x8(%esp)
 8289859:	00 
 828985a:	8b 45 10             	mov    0x10(%ebp),%eax
 828985d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8289861:	89 14 24             	mov    %edx,(%esp)
 8289864:	e8 37 40 df ff       	call   807d8a0 <memcpy@plt>
 8289869:	c9                   	leave
 828986a:	c3                   	ret
 828986b:	90                   	nop

```

```c
// CAccountCargo::SetDBData @ 0x8289816

/* CAccountCargo::SetDBData(CUser*, Inven_Item*, unsigned int, unsigned int) */

void __thiscall
CAccountCargo::SetDBData
          (CAccountCargo *this,CUser *param_1,Inven_Item *param_2,uint param_3,uint param_4)

{
  *(CUser **)this = param_1;
  *(uint *)(this + 0xd60) = param_4;
  *(uint *)(this + 0xd5c) = param_3;
  this[0xd64] = (CAccountCargo)0x0;
  if (param_2 != (Inven_Item *)0x0) {
    memcpy(this + 4,param_2,0xd58);
  }
  return;
}

```

---

## SubMoney

```asm
// === 0828a764 CAccountCargo::SubMoney  [0x0828a764-0x828a793] ===
 828a764:	55                   	push   %ebp
 828a765:	89 e5                	mov    %esp,%ebp
 828a767:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 828a76b:	74 25                	je     828a792 <_ZN13CAccountCargo8SubMoneyEj+0x2e>
 828a76d:	8b 45 08             	mov    0x8(%ebp),%eax
 828a770:	8b 80 5c 0d 00 00    	mov    0xd5c(%eax),%eax
 828a776:	3b 45 0c             	cmp    0xc(%ebp),%eax
 828a779:	72 17                	jb     828a792 <_ZN13CAccountCargo8SubMoneyEj+0x2e>
 828a77b:	8b 45 08             	mov    0x8(%ebp),%eax
 828a77e:	8b 80 5c 0d 00 00    	mov    0xd5c(%eax),%eax
 828a784:	89 c2                	mov    %eax,%edx
 828a786:	2b 55 0c             	sub    0xc(%ebp),%edx
 828a789:	8b 45 08             	mov    0x8(%ebp),%eax
 828a78c:	89 90 5c 0d 00 00    	mov    %edx,0xd5c(%eax)
 828a792:	5d                   	pop    %ebp
 828a793:	c3                   	ret

```

```c
// CAccountCargo::SubMoney @ 0x828a764

/* CAccountCargo::SubMoney(unsigned int) */

void __thiscall CAccountCargo::SubMoney(CAccountCargo *this,uint param_1)

{
  if ((param_1 != 0) && (param_1 <= *(uint *)(this + 0xd5c))) {
    *(uint *)(this + 0xd5c) = *(int *)(this + 0xd5c) - param_1;
  }
  return;
}

```

---

## UpgradeAccountCargo

```asm
// === 0828b0b2 CAccountCargo::UpgradeAccountCargo  [0x0828b0b2-0x828b3cf] ===
 828b0b2:	55                   	push   %ebp
 828b0b3:	89 e5                	mov    %esp,%ebp
 828b0b5:	56                   	push   %esi
 828b0b6:	53                   	push   %ebx
 828b0b7:	83 c4 80             	add    $0xffffff80,%esp
 828b0ba:	8b 45 08             	mov    0x8(%ebp),%eax
 828b0bd:	89 04 24             	mov    %eax,(%esp)
 828b0c0:	e8 6b 4b fa ff       	call   822fc30 <_ZN5CUser19IsExistAccountCargoEv>
 828b0c5:	83 f0 01             	xor    $0x1,%eax
 828b0c8:	84 c0                	test   %al,%al
 828b0ca:	74 20                	je     828b0ec <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x3a>
 828b0cc:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 828b0d3:	00 
 828b0d4:	c7 44 24 04 32 01 00 	movl   $0x132,0x4(%esp)
 828b0db:	00 
 828b0dc:	8b 45 08             	mov    0x8(%ebp),%eax
 828b0df:	89 04 24             	mov    %eax,(%esp)
 828b0e2:	e8 5b 0e 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828b0e7:	e9 dd 02 00 00       	jmp    828b3c9 <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x317>
 828b0ec:	8b 45 08             	mov    0x8(%ebp),%eax
 828b0ef:	89 04 24             	mov    %eax,(%esp)
 828b0f2:	e8 2b 4b fa ff       	call   822fc22 <_ZN5CUser15GetAccountCargoEv>
 828b0f7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 828b0fa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 828b0fd:	89 04 24             	mov    %eax,(%esp)
 828b100:	e8 0d 3f fa ff       	call   822f012 <_ZN13CAccountCargo11GetCapacityEv>
 828b105:	89 c3                	mov    %eax,%ebx
 828b107:	e8 8f 10 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828b10c:	05 e0 a7 00 00       	add    $0xa7e0,%eax
 828b111:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 828b115:	89 04 24             	mov    %eax,(%esp)
 828b118:	e8 07 d0 63 00       	call   88c8124 <_ZN18AccountCargoScript18GetNextUpgradeInfoEi>
 828b11d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 828b120:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 828b124:	75 20                	jne    828b146 <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x94>
 828b126:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 828b12d:	00 
 828b12e:	c7 44 24 04 33 01 00 	movl   $0x133,0x4(%esp)
 828b135:	00 
 828b136:	8b 45 08             	mov    0x8(%ebp),%eax
 828b139:	89 04 24             	mov    %eax,(%esp)
 828b13c:	e8 01 0e 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828b141:	e9 83 02 00 00       	jmp    828b3c9 <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x317>
 828b146:	e8 9b 74 ed ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 828b14b:	c7 44 24 0c 19 00 00 	movl   $0x19,0xc(%esp)
 828b152:	00 
 828b153:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 828b15a:	00 
 828b15b:	8b 55 08             	mov    0x8(%ebp),%edx
 828b15e:	89 54 24 04          	mov    %edx,0x4(%esp)
 828b162:	89 04 24             	mov    %eax,(%esp)
 828b165:	e8 4e 35 ee ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 828b16a:	84 c0                	test   %al,%al
 828b16c:	74 20                	je     828b18e <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0xdc>
 828b16e:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 828b175:	00 
 828b176:	c7 44 24 04 33 01 00 	movl   $0x133,0x4(%esp)
 828b17d:	00 
 828b17e:	8b 45 08             	mov    0x8(%ebp),%eax
 828b181:	89 04 24             	mov    %eax,(%esp)
 828b184:	e8 b9 0d 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828b189:	e9 3b 02 00 00       	jmp    828b3c9 <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x317>
 828b18e:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 828b193:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 828b19a:	00 
 828b19b:	8b 55 08             	mov    0x8(%ebp),%edx
 828b19e:	89 54 24 04          	mov    %edx,0x4(%esp)
 828b1a2:	89 04 24             	mov    %eax,(%esp)
 828b1a5:	e8 58 d8 ff ff       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 828b1aa:	89 45 ec             	mov    %eax,-0x14(%ebp)
 828b1ad:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 828b1b1:	74 22                	je     828b1d5 <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x123>
 828b1b3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 828b1b6:	0f b6 c0             	movzbl %al,%eax
 828b1b9:	89 44 24 08          	mov    %eax,0x8(%esp)
 828b1bd:	c7 44 24 04 33 01 00 	movl   $0x133,0x4(%esp)
 828b1c4:	00 
 828b1c5:	8b 45 08             	mov    0x8(%ebp),%eax
 828b1c8:	89 04 24             	mov    %eax,(%esp)
 828b1cb:	e8 72 0d 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828b1d0:	e9 f4 01 00 00       	jmp    828b3c9 <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x317>
 828b1d5:	8d 45 a7             	lea    -0x59(%ebp),%eax
 828b1d8:	89 04 24             	mov    %eax,(%esp)
 828b1db:	e8 74 06 e4 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 828b1e0:	e8 b6 0f e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828b1e5:	8b 80 e4 a7 00 00    	mov    0xa7e4(%eax),%eax
 828b1eb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 828b1ee:	8b 45 08             	mov    0x8(%ebp),%eax
 828b1f1:	89 04 24             	mov    %eax,(%esp)
 828b1f4:	e8 85 f0 e4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 828b1f9:	8d 55 a7             	lea    -0x59(%ebp),%edx
 828b1fc:	89 54 24 08          	mov    %edx,0x8(%esp)
 828b200:	8b 55 f0             	mov    -0x10(%ebp),%edx
 828b203:	89 54 24 04          	mov    %edx,0x4(%esp)
 828b207:	89 04 24             	mov    %eax,(%esp)
 828b20a:	e8 1d 0d 27 00       	call   84fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>
 828b20f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 828b212:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828b215:	8b 40 08             	mov    0x8(%eax),%eax
 828b218:	85 c0                	test   %eax,%eax
 828b21a:	74 33                	je     828b24f <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x19d>
 828b21c:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 828b220:	74 0d                	je     828b22f <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x17d>
 828b222:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828b225:	8b 50 08             	mov    0x8(%eax),%edx
 828b228:	8b 45 ae             	mov    -0x52(%ebp),%eax
 828b22b:	39 c2                	cmp    %eax,%edx
 828b22d:	7e 20                	jle    828b24f <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x19d>
 828b22f:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 828b236:	00 
 828b237:	c7 44 24 04 33 01 00 	movl   $0x133,0x4(%esp)
 828b23e:	00 
 828b23f:	8b 45 08             	mov    0x8(%ebp),%eax
 828b242:	89 04 24             	mov    %eax,(%esp)
 828b245:	e8 f8 0c 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828b24a:	e9 7a 01 00 00       	jmp    828b3c9 <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x317>
 828b24f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828b252:	8b 40 0c             	mov    0xc(%eax),%eax
 828b255:	85 c0                	test   %eax,%eax
 828b257:	7e 1c                	jle    828b275 <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x1c3>
 828b259:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828b25c:	8b 58 0c             	mov    0xc(%eax),%ebx
 828b25f:	8b 45 08             	mov    0x8(%ebp),%eax
 828b262:	89 04 24             	mov    %eax,(%esp)
 828b265:	e8 1e ef ee ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 828b26a:	39 c3                	cmp    %eax,%ebx
 828b26c:	7e 07                	jle    828b275 <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x1c3>
 828b26e:	b8 01 00 00 00       	mov    $0x1,%eax
 828b273:	eb 05                	jmp    828b27a <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x1c8>
 828b275:	b8 00 00 00 00       	mov    $0x0,%eax
 828b27a:	84 c0                	test   %al,%al
 828b27c:	74 20                	je     828b29e <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x1ec>
 828b27e:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 828b285:	00 
 828b286:	c7 44 24 04 33 01 00 	movl   $0x133,0x4(%esp)
 828b28d:	00 
 828b28e:	8b 45 08             	mov    0x8(%ebp),%eax
 828b291:	89 04 24             	mov    %eax,(%esp)
 828b294:	e8 a9 0c 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828b299:	e9 2b 01 00 00       	jmp    828b3c9 <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x317>
 828b29e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828b2a1:	8b 40 08             	mov    0x8(%eax),%eax
 828b2a4:	85 c0                	test   %eax,%eax
 828b2a6:	74 4a                	je     828b2f2 <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x240>
 828b2a8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828b2ab:	8b 58 08             	mov    0x8(%eax),%ebx
 828b2ae:	8b 45 08             	mov    0x8(%ebp),%eax
 828b2b1:	89 04 24             	mov    %eax,(%esp)
 828b2b4:	e8 d5 ef e4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 828b2b9:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 828b2c0:	00 
 828b2c1:	c7 44 24 10 24 00 00 	movl   $0x24,0x10(%esp)
 828b2c8:	00 
 828b2c9:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 828b2cd:	8b 55 f4             	mov    -0xc(%ebp),%edx
 828b2d0:	89 54 24 08          	mov    %edx,0x8(%esp)
 828b2d4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 828b2db:	00 
 828b2dc:	89 04 24             	mov    %eax,(%esp)
 828b2df:	e8 28 8d 27 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 828b2e4:	83 f0 01             	xor    $0x1,%eax
 828b2e7:	84 c0                	test   %al,%al
 828b2e9:	74 07                	je     828b2f2 <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x240>
 828b2eb:	b8 01 00 00 00       	mov    $0x1,%eax
 828b2f0:	eb 05                	jmp    828b2f7 <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x245>
 828b2f2:	b8 00 00 00 00       	mov    $0x0,%eax
 828b2f7:	84 c0                	test   %al,%al
 828b2f9:	74 20                	je     828b31b <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x269>
 828b2fb:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 828b302:	00 
 828b303:	c7 44 24 04 33 01 00 	movl   $0x133,0x4(%esp)
 828b30a:	00 
 828b30b:	8b 45 08             	mov    0x8(%ebp),%eax
 828b30e:	89 04 24             	mov    %eax,(%esp)
 828b311:	e8 2c 0c 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828b316:	e9 ae 00 00 00       	jmp    828b3c9 <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x317>
 828b31b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828b31e:	8b 40 0c             	mov    0xc(%eax),%eax
 828b321:	85 c0                	test   %eax,%eax
 828b323:	7e 51                	jle    828b376 <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x2c4>
 828b325:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828b328:	8b 58 0c             	mov    0xc(%eax),%ebx
 828b32b:	8b 45 08             	mov    0x8(%ebp),%eax
 828b32e:	89 04 24             	mov    %eax,(%esp)
 828b331:	e8 58 ef e4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 828b336:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 828b33d:	00 
 828b33e:	c7 44 24 08 29 00 00 	movl   $0x29,0x8(%esp)
 828b345:	00 
 828b346:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 828b34a:	89 04 24             	mov    %eax,(%esp)
 828b34d:	e8 fa 41 27 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 828b352:	83 f0 01             	xor    $0x1,%eax
 828b355:	84 c0                	test   %al,%al
 828b357:	74 1d                	je     828b376 <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x2c4>
 828b359:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 828b360:	00 
 828b361:	c7 44 24 04 33 01 00 	movl   $0x133,0x4(%esp)
 828b368:	00 
 828b369:	8b 45 08             	mov    0x8(%ebp),%eax
 828b36c:	89 04 24             	mov    %eax,(%esp)
 828b36f:	e8 ce 0b 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828b374:	eb 53                	jmp    828b3c9 <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser+0x317>
 828b376:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828b379:	8b 40 08             	mov    0x8(%eax),%eax
 828b37c:	85 c0                	test   %eax,%eax
 828b37e:	0f 95 c0             	setne  %al
 828b381:	0f b6 c0             	movzbl %al,%eax
 828b384:	89 44 24 08          	mov    %eax,0x8(%esp)
 828b388:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828b38b:	89 44 24 04          	mov    %eax,0x4(%esp)
 828b38f:	8b 45 08             	mov    0x8(%ebp),%eax
 828b392:	89 04 24             	mov    %eax,(%esp)
 828b395:	e8 36 00 00 00       	call   828b3d0 <_ZN13CAccountCargo16SendNotifyRecipeEP5CUserib>
 828b39a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828b39d:	8b 00                	mov    (%eax),%eax
 828b39f:	89 c6                	mov    %eax,%esi
 828b3a1:	8b 45 08             	mov    0x8(%ebp),%eax
 828b3a4:	89 04 24             	mov    %eax,(%esp)
 828b3a7:	e8 c2 ef e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 828b3ac:	89 c3                	mov    %eax,%ebx
 828b3ae:	8b 45 08             	mov    0x8(%ebp),%eax
 828b3b1:	89 04 24             	mov    %eax,(%esp)
 828b3b4:	e8 dd d8 e3 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 828b3b9:	89 74 24 08          	mov    %esi,0x8(%esp)
 828b3bd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 828b3c1:	89 04 24             	mov    %eax,(%esp)
 828b3c4:	e8 95 fd 1a 00       	call   843b15e <_ZN22DB_UpgradeAccountCargo11makeRequestEijj>
 828b3c9:	83 ec 80             	sub    $0xffffff80,%esp
 828b3cc:	5b                   	pop    %ebx
 828b3cd:	5e                   	pop    %esi
 828b3ce:	5d                   	pop    %ebp
 828b3cf:	c3                   	ret

```

```c
// CAccountCargo::UpgradeAccountCargo @ 0x828b0b2

/* CAccountCargo::UpgradeAccountCargo(CUser*) */

void CAccountCargo::UpgradeAccountCargo(CUser *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ServiceRestrictManager *pSVar5;
  CInventory *pCVar6;
  uint uVar7;
  Inven_Item local_5d [7];
  int local_56;
  CAccountCargo *local_20;
  uint *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  cVar3 = CUser::IsExistAccountCargo(param_1);
  if (cVar3 != '\x01') {
    CUser::SendCmdErrorPacket(param_1,0x132,0x15);
    return;
  }
  local_20 = (CAccountCargo *)CUser::GetAccountCargo(param_1);
  GetCapacity(local_20);
  iVar4 = G_CDataManager();
  local_1c = (uint *)AccountCargoScript::GetNextUpgradeInfo(iVar4 + 0xa7e0);
  if (local_1c == (uint *)0x0) {
    CUser::SendCmdErrorPacket(param_1,0x133,0x13);
    return;
  }
  pSVar5 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
  cVar3 = ServiceRestrictManager::isRestricted(pSVar5,param_1,1,0x19);
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0x133,0xd1);
    return;
  }
  local_18 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,5);
  if (local_18 != 0) {
    CUser::SendCmdErrorPacket(param_1,0x133,local_18 & 0xff);
    return;
  }
  Inven_Item::Inven_Item(local_5d);
  iVar4 = G_CDataManager();
  local_14 = *(int *)(iVar4 + 0xa7e4);
  pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  local_10 = CInventory::GetInvenData(pCVar6,local_14,local_5d);
  if ((local_1c[2] != 0) && ((local_10 == -1 || (local_56 < (int)local_1c[2])))) {
    CUser::SendCmdErrorPacket(param_1,0x133,0x16);
    return;
  }
  if (((int)local_1c[3] < 1) ||
     (uVar1 = local_1c[3], iVar4 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1),
     (int)uVar1 <= iVar4)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    CUser::SendCmdErrorPacket(param_1,0x133,0x16);
    return;
  }
  if (local_1c[2] != 0) {
    uVar1 = local_1c[2];
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar3 = CInventory::delete_item(pCVar6,1,local_10,uVar1,0x24,1);
    if (cVar3 != '\x01') {
      bVar2 = true;
      goto LAB_0828b2f7;
    }
  }
  bVar2 = false;
LAB_0828b2f7:
  if (bVar2) {
    CUser::SendCmdErrorPacket(param_1,0x133,0x16);
  }
  else {
    if (0 < (int)local_1c[3]) {
      uVar1 = local_1c[3];
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar3 = CInventory::use_money(pCVar6,uVar1,0x29,1);
      if (cVar3 != '\x01') {
        CUser::SendCmdErrorPacket(param_1,0x133,0x16);
        return;
      }
    }
    SendNotifyRecipe(param_1,local_10,local_1c[2] != 0);
    uVar1 = *local_1c;
    uVar7 = CUser::get_acc_id(param_1);
    iVar4 = CUser::GetUID(param_1);
    DB_UpgradeAccountCargo::makeRequest(iVar4,uVar7,uVar1);
  }
  return;
}

```

---

## WithdrawMoney

```asm
// === 0828a2f6 CAccountCargo::WithdrawMoney  [0x0828a2f6-0x828a4c9] ===
 828a2f6:	55                   	push   %ebp
 828a2f7:	89 e5                	mov    %esp,%ebp
 828a2f9:	53                   	push   %ebx
 828a2fa:	83 ec 34             	sub    $0x34,%esp
 828a2fd:	8b 45 08             	mov    0x8(%ebp),%eax
 828a300:	8b 18                	mov    (%eax),%ebx
 828a302:	e8 df 82 ed ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 828a307:	c7 44 24 0c 1a 00 00 	movl   $0x1a,0xc(%esp)
 828a30e:	00 
 828a30f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 828a316:	00 
 828a317:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 828a31b:	89 04 24             	mov    %eax,(%esp)
 828a31e:	e8 95 43 ee ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 828a323:	84 c0                	test   %al,%al
 828a325:	74 27                	je     828a34e <_ZN13CAccountCargo13WithdrawMoneyEj+0x58>
 828a327:	8b 45 08             	mov    0x8(%ebp),%eax
 828a32a:	8b 00                	mov    (%eax),%eax
 828a32c:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 828a333:	00 
 828a334:	c7 44 24 04 35 01 00 	movl   $0x135,0x4(%esp)
 828a33b:	00 
 828a33c:	89 04 24             	mov    %eax,(%esp)
 828a33f:	e8 fe 1b 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828a344:	b8 00 00 00 00       	mov    $0x0,%eax
 828a349:	e9 75 01 00 00       	jmp    828a4c3 <_ZN13CAccountCargo13WithdrawMoneyEj+0x1cd>
 828a34e:	8b 45 08             	mov    0x8(%ebp),%eax
 828a351:	8b 10                	mov    (%eax),%edx
 828a353:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 828a358:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 828a35f:	00 
 828a360:	89 54 24 04          	mov    %edx,0x4(%esp)
 828a364:	89 04 24             	mov    %eax,(%esp)
 828a367:	e8 96 e6 ff ff       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 828a36c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 828a36f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 828a373:	74 29                	je     828a39e <_ZN13CAccountCargo13WithdrawMoneyEj+0xa8>
 828a375:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828a378:	0f b6 d0             	movzbl %al,%edx
 828a37b:	8b 45 08             	mov    0x8(%ebp),%eax
 828a37e:	8b 00                	mov    (%eax),%eax
 828a380:	89 54 24 08          	mov    %edx,0x8(%esp)
 828a384:	c7 44 24 04 35 01 00 	movl   $0x135,0x4(%esp)
 828a38b:	00 
 828a38c:	89 04 24             	mov    %eax,(%esp)
 828a38f:	e8 ae 1b 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828a394:	b8 00 00 00 00       	mov    $0x0,%eax
 828a399:	e9 25 01 00 00       	jmp    828a4c3 <_ZN13CAccountCargo13WithdrawMoneyEj+0x1cd>
 828a39e:	8b 45 08             	mov    0x8(%ebp),%eax
 828a3a1:	89 04 24             	mov    %eax,(%esp)
 828a3a4:	e8 77 4c fa ff       	call   822f020 <_ZN13CAccountCargo8GetMoneyEv>
 828a3a9:	3b 45 0c             	cmp    0xc(%ebp),%eax
 828a3ac:	72 07                	jb     828a3b5 <_ZN13CAccountCargo13WithdrawMoneyEj+0xbf>
 828a3ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 828a3b1:	85 c0                	test   %eax,%eax
 828a3b3:	79 07                	jns    828a3bc <_ZN13CAccountCargo13WithdrawMoneyEj+0xc6>
 828a3b5:	b8 01 00 00 00       	mov    $0x1,%eax
 828a3ba:	eb 05                	jmp    828a3c1 <_ZN13CAccountCargo13WithdrawMoneyEj+0xcb>
 828a3bc:	b8 00 00 00 00       	mov    $0x0,%eax
 828a3c1:	84 c0                	test   %al,%al
 828a3c3:	74 27                	je     828a3ec <_ZN13CAccountCargo13WithdrawMoneyEj+0xf6>
 828a3c5:	8b 45 08             	mov    0x8(%ebp),%eax
 828a3c8:	8b 00                	mov    (%eax),%eax
 828a3ca:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 828a3d1:	00 
 828a3d2:	c7 44 24 04 35 01 00 	movl   $0x135,0x4(%esp)
 828a3d9:	00 
 828a3da:	89 04 24             	mov    %eax,(%esp)
 828a3dd:	e8 60 1b 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828a3e2:	b8 00 00 00 00       	mov    $0x0,%eax
 828a3e7:	e9 d7 00 00 00       	jmp    828a4c3 <_ZN13CAccountCargo13WithdrawMoneyEj+0x1cd>
 828a3ec:	8b 55 0c             	mov    0xc(%ebp),%edx
 828a3ef:	8b 45 08             	mov    0x8(%ebp),%eax
 828a3f2:	8b 00                	mov    (%eax),%eax
 828a3f4:	89 54 24 04          	mov    %edx,0x4(%esp)
 828a3f8:	89 04 24             	mov    %eax,(%esp)
 828a3fb:	e8 1c 0b 3e 00       	call   866af1c <_ZN5CUser10CheckMoneyEi>
 828a400:	83 f0 01             	xor    $0x1,%eax
 828a403:	84 c0                	test   %al,%al
 828a405:	74 27                	je     828a42e <_ZN13CAccountCargo13WithdrawMoneyEj+0x138>
 828a407:	8b 45 08             	mov    0x8(%ebp),%eax
 828a40a:	8b 00                	mov    (%eax),%eax
 828a40c:	c7 44 24 08 5e 00 00 	movl   $0x5e,0x8(%esp)
 828a413:	00 
 828a414:	c7 44 24 04 34 01 00 	movl   $0x134,0x4(%esp)
 828a41b:	00 
 828a41c:	89 04 24             	mov    %eax,(%esp)
 828a41f:	e8 1e 1b 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828a424:	b8 00 00 00 00       	mov    $0x0,%eax
 828a429:	e9 95 00 00 00       	jmp    828a4c3 <_ZN13CAccountCargo13WithdrawMoneyEj+0x1cd>
 828a42e:	8b 45 0c             	mov    0xc(%ebp),%eax
 828a431:	89 44 24 04          	mov    %eax,0x4(%esp)
 828a435:	8b 45 08             	mov    0x8(%ebp),%eax
 828a438:	89 04 24             	mov    %eax,(%esp)
 828a43b:	e8 24 03 00 00       	call   828a764 <_ZN13CAccountCargo8SubMoneyEj>
 828a440:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 828a443:	8b 45 08             	mov    0x8(%ebp),%eax
 828a446:	8b 00                	mov    (%eax),%eax
 828a448:	89 04 24             	mov    %eax,(%esp)
 828a44b:	e8 3e fe e4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 828a450:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 828a457:	00 
 828a458:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 828a45f:	00 
 828a460:	c7 44 24 08 1b 00 00 	movl   $0x1b,0x8(%esp)
 828a467:	00 
 828a468:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 828a46c:	89 04 24             	mov    %eax,(%esp)
 828a46f:	e8 28 4e 27 00       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 828a474:	85 c0                	test   %eax,%eax
 828a476:	0f 94 c0             	sete   %al
 828a479:	84 c0                	test   %al,%al
 828a47b:	74 24                	je     828a4a1 <_ZN13CAccountCargo13WithdrawMoneyEj+0x1ab>
 828a47d:	8b 45 08             	mov    0x8(%ebp),%eax
 828a480:	8b 00                	mov    (%eax),%eax
 828a482:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 828a489:	00 
 828a48a:	c7 44 24 04 35 01 00 	movl   $0x135,0x4(%esp)
 828a491:	00 
 828a492:	89 04 24             	mov    %eax,(%esp)
 828a495:	e8 a8 1a 3f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 828a49a:	b8 00 00 00 00       	mov    $0x0,%eax
 828a49f:	eb 22                	jmp    828a4c3 <_ZN13CAccountCargo13WithdrawMoneyEj+0x1cd>
 828a4a1:	c7 44 24 04 35 01 00 	movl   $0x135,0x4(%esp)
 828a4a8:	00 
 828a4a9:	8b 45 08             	mov    0x8(%ebp),%eax
 828a4ac:	89 04 24             	mov    %eax,(%esp)
 828a4af:	e8 28 03 00 00       	call   828a7dc <_ZN13CAccountCargo15SendNotifyMoneyE14ENUM_CMDPACKET>
 828a4b4:	8b 45 08             	mov    0x8(%ebp),%eax
 828a4b7:	c6 80 64 0d 00 00 01 	movb   $0x1,0xd64(%eax)
 828a4be:	b8 01 00 00 00       	mov    $0x1,%eax
 828a4c3:	83 c4 34             	add    $0x34,%esp
 828a4c6:	5b                   	pop    %ebx
 828a4c7:	5d                   	pop    %ebp
 828a4c8:	c3                   	ret
 828a4c9:	90                   	nop

```

```c
// CAccountCargo::WithdrawMoney @ 0x828a2f6

/* CAccountCargo::WithdrawMoney(unsigned int) */

undefined4 __thiscall CAccountCargo::WithdrawMoney(CAccountCargo *this,uint param_1)

{
  bool bVar1;
  char cVar2;
  ServiceRestrictManager *pSVar3;
  undefined4 uVar4;
  uint uVar5;
  CInventory *pCVar6;
  int iVar7;
  
  uVar4 = *(undefined4 *)this;
  pSVar3 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
  cVar2 = ServiceRestrictManager::isRestricted(pSVar3,uVar4,1,0x1a);
  if (cVar2 == '\0') {
    uVar5 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,*(undefined4 *)this,3);
    if (uVar5 == 0) {
      uVar5 = GetMoney(this);
      if ((uVar5 < param_1) || ((int)param_1 < 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        CUser::SendCmdErrorPacket(*(CUser **)this,0x135,10);
        uVar4 = 0;
      }
      else {
        cVar2 = CUser::CheckMoney(*(CUser **)this,param_1);
        if (cVar2 == '\x01') {
          SubMoney(this,param_1);
          pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)this);
          iVar7 = CInventory::gain_money(pCVar6,param_1,0x1b,1,0);
          if (iVar7 == 0) {
            CUser::SendCmdErrorPacket(*(CUser **)this,0x135,10);
            uVar4 = 0;
          }
          else {
            SendNotifyMoney(this,0x135);
            this[0xd64] = (CAccountCargo)0x1;
            uVar4 = 1;
          }
        }
        else {
          CUser::SendCmdErrorPacket(*(CUser **)this,0x134,0x5e);
          uVar4 = 0;
        }
      }
    }
    else {
      CUser::SendCmdErrorPacket(*(CUser **)this,0x135,uVar5 & 0xff);
      uVar4 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(*(CUser **)this,0x135,0xd1);
    uVar4 = 0;
  }
  return uVar4;
}

```

