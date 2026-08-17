# user_creature__CCreatureItemConverter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## SetEggItem

```asm
// === 08336eae user_creature::CCreatureItemConverter::SetEggItem  [0x08336eae-0x8336f5f] ===
 8336eae:	55                   	push   %ebp
 8336eaf:	89 e5                	mov    %esp,%ebp
 8336eb1:	53                   	push   %ebx
 8336eb2:	83 ec 24             	sub    $0x24,%esp
 8336eb5:	8b 45 08             	mov    0x8(%ebp),%eax
 8336eb8:	8b 40 02             	mov    0x2(%eax),%eax
 8336ebb:	89 c3                	mov    %eax,%ebx
 8336ebd:	e8 d9 52 d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8336ec2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8336ec6:	89 04 24             	mov    %eax,(%esp)
 8336ec9:	e8 64 8b 02 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8336ece:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8336ed1:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8336ed5:	75 07                	jne    8336ede <_ZN13user_creature22CCreatureItemConverter10SetEggItemEP10Inven_Item+0x30>
 8336ed7:	b8 00 00 00 00       	mov    $0x0,%eax
 8336edc:	eb 7c                	jmp    8336f5a <_ZN13user_creature22CCreatureItemConverter10SetEggItemEP10Inven_Item+0xac>
 8336ede:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8336ee1:	89 04 24             	mov    %eax,(%esp)
 8336ee4:	e8 11 a4 db ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8336ee9:	84 c0                	test   %al,%al
 8336eeb:	74 07                	je     8336ef4 <_ZN13user_creature22CCreatureItemConverter10SetEggItemEP10Inven_Item+0x46>
 8336eed:	b8 00 00 00 00       	mov    $0x0,%eax
 8336ef2:	eb 66                	jmp    8336f5a <_ZN13user_creature22CCreatureItemConverter10SetEggItemEP10Inven_Item+0xac>
 8336ef4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8336ef7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8336efa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8336efd:	89 04 24             	mov    %eax,(%esp)
 8336f00:	e8 c7 7f 00 00       	call   833eecc <_ZNK10CEquipItem12get_sub_typeEv>
 8336f05:	83 f8 01             	cmp    $0x1,%eax
 8336f08:	74 09                	je     8336f13 <_ZN13user_creature22CCreatureItemConverter10SetEggItemEP10Inven_Item+0x65>
 8336f0a:	83 f8 02             	cmp    $0x2,%eax
 8336f0d:	74 0c                	je     8336f1b <_ZN13user_creature22CCreatureItemConverter10SetEggItemEP10Inven_Item+0x6d>
 8336f0f:	85 c0                	test   %eax,%eax
 8336f11:	eb 42                	jmp    8336f55 <_ZN13user_creature22CCreatureItemConverter10SetEggItemEP10Inven_Item+0xa7>
 8336f13:	8b 45 08             	mov    0x8(%ebp),%eax
 8336f16:	c6 00 01             	movb   $0x1,(%eax)
 8336f19:	eb 3a                	jmp    8336f55 <_ZN13user_creature22CCreatureItemConverter10SetEggItemEP10Inven_Item+0xa7>
 8336f1b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8336f1e:	8b 80 48 01 00 00    	mov    0x148(%eax),%eax
 8336f24:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8336f27:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8336f2a:	89 04 24             	mov    %eax,(%esp)
 8336f2d:	e8 55 ac 37 00       	call   86b1b87 <_Z12get_rand_inti>
 8336f32:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8336f35:	81 c2 48 01 00 00    	add    $0x148,%edx
 8336f3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8336f3f:	89 14 24             	mov    %edx,(%esp)
 8336f42:	e8 25 4c 68 00       	call   89bbb6c <_ZNK15RandomItemTable18GetRandomItemIndexEi>
 8336f47:	89 c2                	mov    %eax,%edx
 8336f49:	8b 45 08             	mov    0x8(%ebp),%eax
 8336f4c:	89 50 02             	mov    %edx,0x2(%eax)
 8336f4f:	8b 45 08             	mov    0x8(%ebp),%eax
 8336f52:	c6 00 01             	movb   $0x1,(%eax)
 8336f55:	b8 01 00 00 00       	mov    $0x1,%eax
 8336f5a:	83 c4 24             	add    $0x24,%esp
 8336f5d:	5b                   	pop    %ebx
 8336f5e:	5d                   	pop    %ebp
 8336f5f:	c3                   	ret

```

```c
// user_creature::CCreatureItemConverter::SetEggItem @ 0x8336eae

/* user_creature::CCreatureItemConverter::SetEggItem(Inven_Item*) */

undefined4 user_creature::CCreatureItemConverter::SetEggItem(Inven_Item *param_1)

{
  char cVar1;
  CDataManager *this;
  CItem *this_00;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 2);
  this = (CDataManager *)G_CDataManager();
  this_00 = (CItem *)CDataManager::find_item(this,iVar3);
  if (this_00 == (CItem *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CItem::is_stackable(this_00);
    if (cVar1 == '\0') {
      iVar3 = CEquipItem::get_sub_type((CEquipItem *)this_00);
      if (iVar3 == 1) {
        *param_1 = (Inven_Item)0x1;
      }
      else if (iVar3 == 2) {
        iVar3 = get_rand_int(*(int *)(this_00 + 0x148));
        uVar2 = RandomItemTable::GetRandomItemIndex((RandomItemTable *)(this_00 + 0x148),iVar3);
        *(undefined4 *)(param_1 + 2) = uVar2;
        *param_1 = (Inven_Item)0x1;
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

