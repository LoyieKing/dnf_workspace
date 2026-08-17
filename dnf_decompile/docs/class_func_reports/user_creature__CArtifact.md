# user_creature__CArtifact

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## EquipArtifact

```asm
// === 08336f6e user_creature::CArtifact::EquipArtifact  [0x08336f6e-0x8336fc7] ===
 8336f6e:	55                   	push   %ebp
 8336f6f:	89 e5                	mov    %esp,%ebp
 8336f71:	53                   	push   %ebx
 8336f72:	83 ec 24             	sub    $0x24,%esp
 8336f75:	8b 45 0c             	mov    0xc(%ebp),%eax
 8336f78:	8b 40 02             	mov    0x2(%eax),%eax
 8336f7b:	89 c3                	mov    %eax,%ebx
 8336f7d:	e8 19 52 d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8336f82:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8336f86:	89 04 24             	mov    %eax,(%esp)
 8336f89:	e8 a4 8a 02 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8336f8e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8336f91:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8336f95:	75 07                	jne    8336f9e <_ZN13user_creature9CArtifact13EquipArtifactEPK10Inven_Item+0x30>
 8336f97:	b8 00 00 00 00       	mov    $0x0,%eax
 8336f9c:	eb 23                	jmp    8336fc1 <_ZN13user_creature9CArtifact13EquipArtifactEPK10Inven_Item+0x53>
 8336f9e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8336fa1:	89 04 24             	mov    %eax,(%esp)
 8336fa4:	e8 51 a3 db ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8336fa9:	84 c0                	test   %al,%al
 8336fab:	74 07                	je     8336fb4 <_ZN13user_creature9CArtifact13EquipArtifactEPK10Inven_Item+0x46>
 8336fad:	b8 00 00 00 00       	mov    $0x0,%eax
 8336fb2:	eb 0d                	jmp    8336fc1 <_ZN13user_creature9CArtifact13EquipArtifactEPK10Inven_Item+0x53>
 8336fb4:	8b 45 08             	mov    0x8(%ebp),%eax
 8336fb7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8336fba:	89 10                	mov    %edx,(%eax)
 8336fbc:	b8 01 00 00 00       	mov    $0x1,%eax
 8336fc1:	83 c4 24             	add    $0x24,%esp
 8336fc4:	5b                   	pop    %ebx
 8336fc5:	5d                   	pop    %ebp
 8336fc6:	c3                   	ret
 8336fc7:	90                   	nop

```

```c
// user_creature::CArtifact::EquipArtifact @ 0x8336f6e

/* user_creature::CArtifact::EquipArtifact(Inven_Item const*) */

undefined4 __thiscall user_creature::CArtifact::EquipArtifact(CArtifact *this,Inven_Item *param_1)

{
  int iVar1;
  char cVar2;
  CDataManager *this_00;
  CItem *this_01;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 2);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,iVar1);
  if (this_01 == (CItem *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar2 = CItem::is_stackable(this_01);
    if (cVar2 == '\0') {
      *(CItem **)this = this_01;
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

## GetCreatureMinimumLevel

```asm
// === 08337012 user_creature::CArtifact::GetCreatureMinimumLevel  [0x08337012-0x833704f] ===
 8337012:	55                   	push   %ebp
 8337013:	89 e5                	mov    %esp,%ebp
 8337015:	83 ec 18             	sub    $0x18,%esp
 8337018:	8b 45 08             	mov    0x8(%ebp),%eax
 833701b:	8b 00                	mov    (%eax),%eax
 833701d:	85 c0                	test   %eax,%eax
 833701f:	75 07                	jne    8337028 <_ZN13user_creature9CArtifact23GetCreatureMinimumLevelEv+0x16>
 8337021:	b8 00 00 00 00       	mov    $0x0,%eax
 8337026:	eb 25                	jmp    833704d <_ZN13user_creature9CArtifact23GetCreatureMinimumLevelEv+0x3b>
 8337028:	8b 45 08             	mov    0x8(%ebp),%eax
 833702b:	8b 00                	mov    (%eax),%eax
 833702d:	89 04 24             	mov    %eax,(%esp)
 8337030:	e8 c5 a2 db ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8337035:	84 c0                	test   %al,%al
 8337037:	74 07                	je     8337040 <_ZN13user_creature9CArtifact23GetCreatureMinimumLevelEv+0x2e>
 8337039:	b8 00 00 00 00       	mov    $0x0,%eax
 833703e:	eb 0d                	jmp    833704d <_ZN13user_creature9CArtifact23GetCreatureMinimumLevelEv+0x3b>
 8337040:	8b 45 08             	mov    0x8(%ebp),%eax
 8337043:	8b 00                	mov    (%eax),%eax
 8337045:	89 04 24             	mov    %eax,(%esp)
 8337048:	e8 9b 7e 00 00       	call   833eee8 <_ZNK10CEquipItem26get_creature_minimum_levelEv>
 833704d:	c9                   	leave
 833704e:	c3                   	ret
 833704f:	90                   	nop

```

```c
// user_creature::CArtifact::GetCreatureMinimumLevel @ 0x8337012

/* user_creature::CArtifact::GetCreatureMinimumLevel() */

undefined4 __thiscall user_creature::CArtifact::GetCreatureMinimumLevel(CArtifact *this)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)this == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CItem::is_stackable(*(CItem **)this);
    if (cVar1 == '\0') {
      uVar2 = CEquipItem::get_creature_minimum_level(*(CEquipItem **)this);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## GetExperienceAmount

```asm
// === 08336fc8 user_creature::CArtifact::GetExperienceAmount  [0x08336fc8-0x8337011] ===
 8336fc8:	55                   	push   %ebp
 8336fc9:	89 e5                	mov    %esp,%ebp
 8336fcb:	83 ec 38             	sub    $0x38,%esp
 8336fce:	8b 45 08             	mov    0x8(%ebp),%eax
 8336fd1:	8b 00                	mov    (%eax),%eax
 8336fd3:	85 c0                	test   %eax,%eax
 8336fd5:	75 07                	jne    8336fde <_ZN13user_creature9CArtifact19GetExperienceAmountEv+0x16>
 8336fd7:	b8 00 00 00 00       	mov    $0x0,%eax
 8336fdc:	eb 2b                	jmp    8337009 <_ZN13user_creature9CArtifact19GetExperienceAmountEv+0x41>
 8336fde:	8b 45 08             	mov    0x8(%ebp),%eax
 8336fe1:	8b 00                	mov    (%eax),%eax
 8336fe3:	89 04 24             	mov    %eax,(%esp)
 8336fe6:	e8 0f a3 db ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8336feb:	84 c0                	test   %al,%al
 8336fed:	74 07                	je     8336ff6 <_ZN13user_creature9CArtifact19GetExperienceAmountEv+0x2e>
 8336fef:	b8 00 00 00 00       	mov    $0x0,%eax
 8336ff4:	eb 13                	jmp    8337009 <_ZN13user_creature9CArtifact19GetExperienceAmountEv+0x41>
 8336ff6:	8b 45 08             	mov    0x8(%ebp),%eax
 8336ff9:	8b 00                	mov    (%eax),%eax
 8336ffb:	89 04 24             	mov    %eax,(%esp)
 8336ffe:	e8 a3 7e 00 00       	call   833eea6 <_ZNK10CEquipItem21get_experience_amountEv>
 8337003:	d9 5d f4             	fstps  -0xc(%ebp)
 8337006:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8337009:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 833700c:	d9 45 e4             	flds   -0x1c(%ebp)
 833700f:	c9                   	leave
 8337010:	c3                   	ret
 8337011:	90                   	nop

```

```c
// user_creature::CArtifact::GetExperienceAmount @ 0x8336fc8

/* user_creature::CArtifact::GetExperienceAmount() */

longdouble __thiscall user_creature::CArtifact::GetExperienceAmount(CArtifact *this)

{
  char cVar1;
  float fVar2;
  longdouble lVar3;
  
  if (*(int *)this == 0) {
    fVar2 = 0.0;
  }
  else {
    cVar1 = CItem::is_stackable(*(CItem **)this);
    if (cVar1 == '\0') {
      lVar3 = (longdouble)CEquipItem::get_experience_amount(*(CEquipItem **)this);
      fVar2 = (float)lVar3;
    }
    else {
      fVar2 = 0.0;
    }
  }
  return (longdouble)fVar2;
}

```

---

## Reset

```asm
// === 08336f60 user_creature::CArtifact::Reset  [0x08336f60-0x8336f6d] ===
 8336f60:	55                   	push   %ebp
 8336f61:	89 e5                	mov    %esp,%ebp
 8336f63:	8b 45 08             	mov    0x8(%ebp),%eax
 8336f66:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8336f6c:	5d                   	pop    %ebp
 8336f6d:	c3                   	ret

```

```c
// user_creature::CArtifact::Reset @ 0x8336f60

/* user_creature::CArtifact::Reset() */

void __thiscall user_creature::CArtifact::Reset(CArtifact *this)

{
  *(undefined4 *)this = 0;
  return;
}

```

