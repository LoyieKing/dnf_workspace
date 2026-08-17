# CItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## GetNeedMaterial

```asm
// === 0850d6f4 CItem::GetNeedMaterial  [0x0850d6f4-0x850d727] ===
 850d6f4:	55                   	push   %ebp
 850d6f5:	89 e5                	mov    %esp,%ebp
 850d6f7:	83 ec 28             	sub    $0x28,%esp
 850d6fa:	e8 b3 83 ca ff       	call   81b5ab2 <_ZN23NeedMaterialDataManager11getInstanceEv>
 850d6ff:	8b 55 08             	mov    0x8(%ebp),%edx
 850d702:	89 54 24 04          	mov    %edx,0x4(%esp)
 850d706:	89 04 24             	mov    %eax,(%esp)
 850d709:	e8 62 84 ca ff       	call   81b5b70 <_ZNK23NeedMaterialDataManager15getNeedMaterialEPK5CItem>
 850d70e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 850d711:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850d714:	8b 00                	mov    (%eax),%eax
 850d716:	83 f8 ff             	cmp    $0xffffffff,%eax
 850d719:	74 05                	je     850d720 <_ZNK5CItem15GetNeedMaterialEv+0x2c>
 850d71b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850d71e:	eb 06                	jmp    850d726 <_ZNK5CItem15GetNeedMaterialEv+0x32>
 850d720:	8b 45 08             	mov    0x8(%ebp),%eax
 850d723:	83 c0 24             	add    $0x24,%eax
 850d726:	c9                   	leave
 850d727:	c3                   	ret

```

```c
// CItem::GetNeedMaterial @ 0x850d6f4

/* CItem::GetNeedMaterial() const */

CItem * __thiscall CItem::GetNeedMaterial(CItem *this)

{
  NeedMaterialDataManager *this_00;
  CItem *pCVar1;
  
  this_00 = (NeedMaterialDataManager *)NeedMaterialDataManager::getInstance();
  pCVar1 = (CItem *)NeedMaterialDataManager::getNeedMaterial(this_00,this);
  if (*(int *)pCVar1 == -1) {
    pCVar1 = this + 0x24;
  }
  return pCVar1;
}

```

---

## checkItemUpgradePossible

```asm
// === 08513884 CItem::checkItemUpgradePossible  [0x08513884-0x851388d] ===
 8513884:	55                   	push   %ebp
 8513885:	89 e5                	mov    %esp,%ebp
 8513887:	b8 00 00 00 00       	mov    $0x0,%eax
 851388c:	5d                   	pop    %ebp
 851388d:	c3                   	ret

```

```c
// CItem::checkItemUpgradePossible @ 0x8513884

/* CItem::checkItemUpgradePossible() const */

undefined4 CItem::checkItemUpgradePossible(void)

{
  return 0;
}

```

---

## check_item_routing

```asm
// === 0850d756 CItem::check_item_routing  [0x0850d756-0x850d77f] ===
 850d756:	55                   	push   %ebp
 850d757:	89 e5                	mov    %esp,%ebp
 850d759:	83 ec 18             	sub    $0x18,%esp
 850d75c:	8b 45 08             	mov    0x8(%ebp),%eax
 850d75f:	89 04 24             	mov    %eax,(%esp)
 850d762:	e8 03 c2 f5 ff       	call   846996a <_ZNK5CItem17isEpicRoutingItemEv>
 850d767:	84 c0                	test   %al,%al
 850d769:	74 07                	je     850d772 <_ZNK5CItem18check_item_routingEv+0x1c>
 850d76b:	b8 01 00 00 00       	mov    $0x1,%eax
 850d770:	eb 0b                	jmp    850d77d <_ZNK5CItem18check_item_routingEv+0x27>
 850d772:	8b 45 08             	mov    0x8(%ebp),%eax
 850d775:	8b 40 38             	mov    0x38(%eax),%eax
 850d778:	85 c0                	test   %eax,%eax
 850d77a:	0f 9f c0             	setg   %al
 850d77d:	c9                   	leave
 850d77e:	c3                   	ret
 850d77f:	90                   	nop

```

```c
// CItem::check_item_routing @ 0x850d756

/* CItem::check_item_routing() const */

undefined4 __thiscall CItem::check_item_routing(CItem *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = isEpicRoutingItem(this);
  if (cVar1 == '\0') {
    uVar2 = CONCAT31((int3)((uint)*(int *)(this + 0x38) >> 8),0 < *(int *)(this + 0x38));
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## check_job_type

```asm
// === 0850d728 CItem::check_job_type  [0x0850d728-0x850d755] ===
 850d728:	55                   	push   %ebp
 850d729:	89 e5                	mov    %esp,%ebp
 850d72b:	83 ec 14             	sub    $0x14,%esp
 850d72e:	8b 45 0c             	mov    0xc(%ebp),%eax
 850d731:	88 45 ec             	mov    %al,-0x14(%ebp)
 850d734:	80 7d ec 0a          	cmpb   $0xa,-0x14(%ebp)
 850d738:	7e 07                	jle    850d741 <_ZNK5CItem14check_job_typeEc+0x19>
 850d73a:	b8 00 00 00 00       	mov    $0x0,%eax
 850d73f:	eb 12                	jmp    850d753 <_ZNK5CItem14check_job_typeEc+0x2b>
 850d741:	0f be 45 ec          	movsbl -0x14(%ebp),%eax
 850d745:	89 45 fc             	mov    %eax,-0x4(%ebp)
 850d748:	8b 45 fc             	mov    -0x4(%ebp),%eax
 850d74b:	8b 55 08             	mov    0x8(%ebp),%edx
 850d74e:	0f b6 44 02 3c       	movzbl 0x3c(%edx,%eax,1),%eax
 850d753:	c9                   	leave
 850d754:	c3                   	ret
 850d755:	90                   	nop

```

```c
// CItem::check_job_type @ 0x850d728

/* CItem::check_job_type(char) const */

CItem __thiscall CItem::check_job_type(CItem *this,char param_1)

{
  CItem CVar1;
  
  if (param_1 < '\v') {
    CVar1 = this[param_1 + 0x3c];
  }
  else {
    CVar1 = (CItem)0x0;
  }
  return CVar1;
}

```

---

## isAmplifyPollutionItem

```asm
// === 085136ac CItem::isAmplifyPollutionItem  [0x085136ac-0x85136b5] ===
 85136ac:	55                   	push   %ebp
 85136ad:	89 e5                	mov    %esp,%ebp
 85136af:	b8 01 00 00 00       	mov    $0x1,%eax
 85136b4:	5d                   	pop    %ebp
 85136b5:	c3                   	ret

```

```c
// CItem::isAmplifyPollutionItem @ 0x85136ac

/* CItem::isAmplifyPollutionItem() const */

undefined4 CItem::isAmplifyPollutionItem(void)

{
  return 1;
}

```

