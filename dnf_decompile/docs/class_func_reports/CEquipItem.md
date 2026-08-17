# CEquipItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 18

---

## IsAvatarColorVariation

```asm
// === 085136c6 CEquipItem::IsAvatarColorVariation  [0x085136c6-0x85136eb] ===
 85136c6:	55                   	push   %ebp
 85136c7:	89 e5                	mov    %esp,%ebp
 85136c9:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85136cd:	78 06                	js     85136d5 <_ZNK10CEquipItem22IsAvatarColorVariationEi+0xf>
 85136cf:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 85136d3:	7e 07                	jle    85136dc <_ZNK10CEquipItem22IsAvatarColorVariationEi+0x16>
 85136d5:	b8 00 00 00 00       	mov    $0x0,%eax
 85136da:	eb 0e                	jmp    85136ea <_ZNK10CEquipItem22IsAvatarColorVariationEi+0x24>
 85136dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 85136df:	8b 55 08             	mov    0x8(%ebp),%edx
 85136e2:	0f b6 84 02 18 02 00 	movzbl 0x218(%edx,%eax,1),%eax
 85136e9:	00 
 85136ea:	5d                   	pop    %ebp
 85136eb:	c3                   	ret

```

```c
// CEquipItem::IsAvatarColorVariation @ 0x85136c6

/* CEquipItem::IsAvatarColorVariation(int) const */

CEquipItem __thiscall CEquipItem::IsAvatarColorVariation(CEquipItem *this,int param_1)

{
  CEquipItem CVar1;
  
  if ((param_1 < 0) || (1 < param_1)) {
    CVar1 = (CEquipItem)0x0;
  }
  else {
    CVar1 = this[param_1 + 0x218];
  }
  return CVar1;
}

```

---

## IsAvatarOptionValid

```asm
// === 0851353e CEquipItem::IsAvatarOptionValid  [0x0851353e-0x851357f] ===
 851353e:	55                   	push   %ebp
 851353f:	89 e5                	mov    %esp,%ebp
 8513541:	83 ec 28             	sub    $0x28,%esp
 8513544:	8b 45 0c             	mov    0xc(%ebp),%eax
 8513547:	88 45 f4             	mov    %al,-0xc(%ebp)
 851354a:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
 851354e:	79 07                	jns    8513557 <_ZNK10CEquipItem19IsAvatarOptionValidEc+0x19>
 8513550:	b8 00 00 00 00       	mov    $0x0,%eax
 8513555:	eb 26                	jmp    851357d <_ZNK10CEquipItem19IsAvatarOptionValidEc+0x3f>
 8513557:	8b 45 08             	mov    0x8(%ebp),%eax
 851355a:	05 f0 01 00 00       	add    $0x1f0,%eax
 851355f:	89 04 24             	mov    %eax,(%esp)
 8513562:	e8 c1 d2 c6 ff       	call   8180828 <_ZNKSt6vectorI24STAvatarAbilityVariationSaIS0_EE4sizeEv>
 8513567:	3a 45 f4             	cmp    -0xc(%ebp),%al
 851356a:	0f 9e c0             	setle  %al
 851356d:	84 c0                	test   %al,%al
 851356f:	74 07                	je     8513578 <_ZNK10CEquipItem19IsAvatarOptionValidEc+0x3a>
 8513571:	b8 00 00 00 00       	mov    $0x0,%eax
 8513576:	eb 05                	jmp    851357d <_ZNK10CEquipItem19IsAvatarOptionValidEc+0x3f>
 8513578:	b8 01 00 00 00       	mov    $0x1,%eax
 851357d:	c9                   	leave
 851357e:	c3                   	ret
 851357f:	90                   	nop

```

```c
// CEquipItem::IsAvatarOptionValid @ 0x851353e

/* CEquipItem::IsAvatarOptionValid(char) const */

undefined4 __thiscall CEquipItem::IsAvatarOptionValid(CEquipItem *this,char param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_1 < '\0') {
    uVar2 = 0;
  }
  else {
    cVar1 = std::vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>>::size
                      ((vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>> *)
                       (this + 0x1f0));
    if (param_1 < cVar1) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## checkItemUpgradePossible

```asm
// === 0851388e CEquipItem::checkItemUpgradePossible  [0x0851388e-0x85138e7] ===
 851388e:	55                   	push   %ebp
 851388f:	89 e5                	mov    %esp,%ebp
 8513891:	53                   	push   %ebx
 8513892:	83 ec 14             	sub    $0x14,%esp
 8513895:	8b 45 08             	mov    0x8(%ebp),%eax
 8513898:	8b 00                	mov    (%eax),%eax
 851389a:	83 c0 30             	add    $0x30,%eax
 851389d:	8b 10                	mov    (%eax),%edx
 851389f:	8b 45 08             	mov    0x8(%ebp),%eax
 85138a2:	89 04 24             	mov    %eax,(%esp)
 85138a5:	ff d2                	call   *%edx
 85138a7:	84 c0                	test   %al,%al
 85138a9:	74 07                	je     85138b2 <_ZNK10CEquipItem24checkItemUpgradePossibleEv+0x24>
 85138ab:	b8 00 00 00 00       	mov    $0x0,%eax
 85138b0:	eb 30                	jmp    85138e2 <_ZNK10CEquipItem24checkItemUpgradePossibleEv+0x54>
 85138b2:	8b 45 08             	mov    0x8(%ebp),%eax
 85138b5:	8b 80 34 02 00 00    	mov    0x234(%eax),%eax
 85138bb:	83 f8 15             	cmp    $0x15,%eax
 85138be:	77 1d                	ja     85138dd <_ZNK10CEquipItem24checkItemUpgradePossibleEv+0x4f>
 85138c0:	ba 01 00 00 00       	mov    $0x1,%edx
 85138c5:	89 d3                	mov    %edx,%ebx
 85138c7:	89 c1                	mov    %eax,%ecx
 85138c9:	d3 e3                	shl    %cl,%ebx
 85138cb:	89 d8                	mov    %ebx,%eax
 85138cd:	25 00 f4 3f 00       	and    $0x3ff400,%eax
 85138d2:	85 c0                	test   %eax,%eax
 85138d4:	74 07                	je     85138dd <_ZNK10CEquipItem24checkItemUpgradePossibleEv+0x4f>
 85138d6:	b8 01 00 00 00       	mov    $0x1,%eax
 85138db:	eb 05                	jmp    85138e2 <_ZNK10CEquipItem24checkItemUpgradePossibleEv+0x54>
 85138dd:	b8 00 00 00 00       	mov    $0x0,%eax
 85138e2:	83 c4 14             	add    $0x14,%esp
 85138e5:	5b                   	pop    %ebx
 85138e6:	5d                   	pop    %ebp
 85138e7:	c3                   	ret

```

```c
// CEquipItem::checkItemUpgradePossible @ 0x851388e

/* CEquipItem::checkItemUpgradePossible() const */

undefined4 __thiscall CEquipItem::checkItemUpgradePossible(CEquipItem *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*(int *)this + 0x30))(this);
  if (cVar1 == '\0') {
    if ((*(uint *)(this + 0x234) < 0x16) &&
       ((1 << ((byte)*(uint *)(this + 0x234) & 0x1f) & 0x3ff400U) != 0)) {
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

## check_able_To_equip

```asm
// === 085108fc CEquipItem::check_able_To_equip  [0x085108fc-0x8510989] ===
 85108fc:	55                   	push   %ebp
 85108fd:	89 e5                	mov    %esp,%ebp
 85108ff:	83 ec 28             	sub    $0x28,%esp
 8510902:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510905:	88 45 f4             	mov    %al,-0xc(%ebp)
 8510908:	8b 45 08             	mov    0x8(%ebp),%eax
 851090b:	89 04 24             	mov    %eax,(%esp)
 851090e:	e8 e7 09 be ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8510913:	84 c0                	test   %al,%al
 8510915:	74 07                	je     851091e <_ZN10CEquipItem19check_able_To_equipEcii+0x22>
 8510917:	b8 01 00 00 00       	mov    $0x1,%eax
 851091c:	eb 69                	jmp    8510987 <_ZN10CEquipItem19check_able_To_equipEcii+0x8b>
 851091e:	0f be 45 f4          	movsbl -0xc(%ebp),%eax
 8510922:	89 44 24 04          	mov    %eax,0x4(%esp)
 8510926:	8b 45 08             	mov    0x8(%ebp),%eax
 8510929:	89 04 24             	mov    %eax,(%esp)
 851092c:	e8 95 ff ff ff       	call   85108c6 <_ZNK10CEquipItem11check_eTypeEc>
 8510931:	83 f0 01             	xor    $0x1,%eax
 8510934:	84 c0                	test   %al,%al
 8510936:	74 07                	je     851093f <_ZN10CEquipItem19check_able_To_equipEcii+0x43>
 8510938:	b8 17 00 00 00       	mov    $0x17,%eax
 851093d:	eb 48                	jmp    8510987 <_ZN10CEquipItem19check_able_To_equipEcii+0x8b>
 851093f:	8b 45 10             	mov    0x10(%ebp),%eax
 8510942:	0f be d0             	movsbl %al,%edx
 8510945:	8b 45 08             	mov    0x8(%ebp),%eax
 8510948:	89 54 24 04          	mov    %edx,0x4(%esp)
 851094c:	89 04 24             	mov    %eax,(%esp)
 851094f:	e8 d4 cd ff ff       	call   850d728 <_ZNK5CItem14check_job_typeEc>
 8510954:	83 f0 01             	xor    $0x1,%eax
 8510957:	84 c0                	test   %al,%al
 8510959:	74 07                	je     8510962 <_ZN10CEquipItem19check_able_To_equipEcii+0x66>
 851095b:	b8 08 00 00 00       	mov    $0x8,%eax
 8510960:	eb 25                	jmp    8510987 <_ZN10CEquipItem19check_able_To_equipEcii+0x8b>
 8510962:	8b 45 08             	mov    0x8(%ebp),%eax
 8510965:	8b 55 14             	mov    0x14(%ebp),%edx
 8510968:	89 54 24 04          	mov    %edx,0x4(%esp)
 851096c:	89 04 24             	mov    %eax,(%esp)
 851096f:	e8 48 8c fd ff       	call   84e95bc <_ZNK5CItem15check_low_levelEi>
 8510974:	83 f0 01             	xor    $0x1,%eax
 8510977:	84 c0                	test   %al,%al
 8510979:	74 07                	je     8510982 <_ZN10CEquipItem19check_able_To_equipEcii+0x86>
 851097b:	b8 0e 00 00 00       	mov    $0xe,%eax
 8510980:	eb 05                	jmp    8510987 <_ZN10CEquipItem19check_able_To_equipEcii+0x8b>
 8510982:	b8 00 00 00 00       	mov    $0x0,%eax
 8510987:	c9                   	leave
 8510988:	c3                   	ret
 8510989:	90                   	nop

```

```c
// CEquipItem::check_able_To_equip @ 0x85108fc

/* CEquipItem::check_able_To_equip(char, int, int) */

undefined4 __thiscall
CEquipItem::check_able_To_equip(CEquipItem *this,char param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = CItem::is_stackable((CItem *)this);
  if (cVar1 == '\0') {
    cVar1 = check_eType(this,param_1);
    if (cVar1 == '\x01') {
      cVar1 = CItem::check_job_type((CItem *)this,(char)param_2);
      if (cVar1 == '\x01') {
        cVar1 = CItem::check_low_level((CItem *)this,param_3);
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = 0xe;
        }
      }
      else {
        uVar2 = 8;
      }
    }
    else {
      uVar2 = 0x17;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## check_eType

```asm
// === 085108c6 CEquipItem::check_eType  [0x085108c6-0x85108fb] ===
 85108c6:	55                   	push   %ebp
 85108c7:	89 e5                	mov    %esp,%ebp
 85108c9:	83 ec 04             	sub    $0x4,%esp
 85108cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 85108cf:	88 45 fc             	mov    %al,-0x4(%ebp)
 85108d2:	80 7d fc 15          	cmpb   $0x15,-0x4(%ebp)
 85108d6:	7e 07                	jle    85108df <_ZNK10CEquipItem11check_eTypeEc+0x19>
 85108d8:	b8 00 00 00 00       	mov    $0x0,%eax
 85108dd:	eb 1a                	jmp    85108f9 <_ZNK10CEquipItem11check_eTypeEc+0x33>
 85108df:	8b 45 08             	mov    0x8(%ebp),%eax
 85108e2:	8b 80 34 02 00 00    	mov    0x234(%eax),%eax
 85108e8:	3a 45 fc             	cmp    -0x4(%ebp),%al
 85108eb:	75 07                	jne    85108f4 <_ZNK10CEquipItem11check_eTypeEc+0x2e>
 85108ed:	b8 01 00 00 00       	mov    $0x1,%eax
 85108f2:	eb 05                	jmp    85108f9 <_ZNK10CEquipItem11check_eTypeEc+0x33>
 85108f4:	b8 00 00 00 00       	mov    $0x0,%eax
 85108f9:	c9                   	leave
 85108fa:	c3                   	ret
 85108fb:	90                   	nop

```

```c
// CEquipItem::check_eType @ 0x85108c6

/* CEquipItem::check_eType(char) const */

undefined4 __thiscall CEquipItem::check_eType(CEquipItem *this,char param_1)

{
  undefined4 uVar1;
  
  if (param_1 < '\x16') {
    if ((char)*(undefined4 *)(this + 0x234) == param_1) {
      uVar1 = 1;
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

## getExpBonusPoint

```asm
// === 08513530 CEquipItem::getExpBonusPoint  [0x08513530-0x851353d] ===
 8513530:	55                   	push   %ebp
 8513531:	89 e5                	mov    %esp,%ebp
 8513533:	8b 45 08             	mov    0x8(%ebp),%eax
 8513536:	05 e8 01 00 00       	add    $0x1e8,%eax
 851353b:	5d                   	pop    %ebp
 851353c:	c3                   	ret
 851353d:	90                   	nop

```

```c
// CEquipItem::getExpBonusPoint @ 0x8513530

/* CEquipItem::getExpBonusPoint() const */

CEquipItem * __thiscall CEquipItem::getExpBonusPoint(CEquipItem *this)

{
  return this + 0x1e8;
}

```

---

## getGrowthGrade

```asm
// === 085137b8 CEquipItem::getGrowthGrade  [0x085137b8-0x851381b] ===
 85137b8:	55                   	push   %ebp
 85137b9:	89 e5                	mov    %esp,%ebp
 85137bb:	56                   	push   %esi
 85137bc:	53                   	push   %ebx
 85137bd:	83 ec 20             	sub    $0x20,%esp
 85137c0:	8b 45 08             	mov    0x8(%ebp),%eax
 85137c3:	0f b6 80 1a 02 00 00 	movzbl 0x21a(%eax),%eax
 85137ca:	84 c0                	test   %al,%al
 85137cc:	74 41                	je     851380f <_ZNK10CEquipItem14getGrowthGradeEi+0x57>
 85137ce:	8b 45 08             	mov    0x8(%ebp),%eax
 85137d1:	8b 98 28 02 00 00    	mov    0x228(%eax),%ebx
 85137d7:	8b 45 08             	mov    0x8(%ebp),%eax
 85137da:	8b 88 24 02 00 00    	mov    0x224(%eax),%ecx
 85137e0:	8b 45 08             	mov    0x8(%ebp),%eax
 85137e3:	8b 90 20 02 00 00    	mov    0x220(%eax),%edx
 85137e9:	8b 45 08             	mov    0x8(%ebp),%eax
 85137ec:	8b 80 1c 02 00 00    	mov    0x21c(%eax),%eax
 85137f2:	8b 75 0c             	mov    0xc(%ebp),%esi
 85137f5:	89 74 24 10          	mov    %esi,0x10(%esp)
 85137f9:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85137fd:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8513801:	89 54 24 04          	mov    %edx,0x4(%esp)
 8513805:	89 04 24             	mov    %eax,(%esp)
 8513808:	e8 90 8f 47 00       	call   898c79d <_Z21getLevelLinearAbilityiiiii>
 851380d:	eb 06                	jmp    8513815 <_ZNK10CEquipItem14getGrowthGradeEi+0x5d>
 851380f:	8b 45 08             	mov    0x8(%ebp),%eax
 8513812:	8b 40 08             	mov    0x8(%eax),%eax
 8513815:	83 c4 20             	add    $0x20,%esp
 8513818:	5b                   	pop    %ebx
 8513819:	5e                   	pop    %esi
 851381a:	5d                   	pop    %ebp
 851381b:	c3                   	ret

```

```c
// CEquipItem::getGrowthGrade @ 0x85137b8

/* CEquipItem::getGrowthGrade(int) const */

undefined4 __thiscall CEquipItem::getGrowthGrade(CEquipItem *this,int param_1)

{
  undefined4 uVar1;
  
  if (this[0x21a] == (CEquipItem)0x0) {
    uVar1 = *(undefined4 *)(this + 8);
  }
  else {
    uVar1 = getLevelLinearAbility
                      (*(int *)(this + 0x21c),*(int *)(this + 0x220),*(int *)(this + 0x224),
                       *(int *)(this + 0x228),param_1);
  }
  return uVar1;
}

```

---

## getGrowthRepairCost

```asm
// === 0851381c CEquipItem::getGrowthRepairCost  [0x0851381c-0x8513883] ===
 851381c:	55                   	push   %ebp
 851381d:	89 e5                	mov    %esp,%ebp
 851381f:	56                   	push   %esi
 8513820:	53                   	push   %ebx
 8513821:	83 ec 20             	sub    $0x20,%esp
 8513824:	8b 45 08             	mov    0x8(%ebp),%eax
 8513827:	0f b6 80 1a 02 00 00 	movzbl 0x21a(%eax),%eax
 851382e:	84 c0                	test   %al,%al
 8513830:	74 41                	je     8513873 <_ZNK10CEquipItem19getGrowthRepairCostEi+0x57>
 8513832:	8b 45 08             	mov    0x8(%ebp),%eax
 8513835:	8b 98 30 02 00 00    	mov    0x230(%eax),%ebx
 851383b:	8b 45 08             	mov    0x8(%ebp),%eax
 851383e:	8b 88 2c 02 00 00    	mov    0x22c(%eax),%ecx
 8513844:	8b 45 08             	mov    0x8(%ebp),%eax
 8513847:	8b 90 20 02 00 00    	mov    0x220(%eax),%edx
 851384d:	8b 45 08             	mov    0x8(%ebp),%eax
 8513850:	8b 80 1c 02 00 00    	mov    0x21c(%eax),%eax
 8513856:	8b 75 0c             	mov    0xc(%ebp),%esi
 8513859:	89 74 24 10          	mov    %esi,0x10(%esp)
 851385d:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8513861:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8513865:	89 54 24 04          	mov    %edx,0x4(%esp)
 8513869:	89 04 24             	mov    %eax,(%esp)
 851386c:	e8 2c 8f 47 00       	call   898c79d <_Z21getLevelLinearAbilityiiiii>
 8513871:	eb 09                	jmp    851387c <_ZNK10CEquipItem19getGrowthRepairCostEi+0x60>
 8513873:	8b 45 08             	mov    0x8(%ebp),%eax
 8513876:	8b 80 90 01 00 00    	mov    0x190(%eax),%eax
 851387c:	83 c4 20             	add    $0x20,%esp
 851387f:	5b                   	pop    %ebx
 8513880:	5e                   	pop    %esi
 8513881:	5d                   	pop    %ebp
 8513882:	c3                   	ret
 8513883:	90                   	nop

```

```c
// CEquipItem::getGrowthRepairCost @ 0x851381c

/* CEquipItem::getGrowthRepairCost(int) const */

undefined4 __thiscall CEquipItem::getGrowthRepairCost(CEquipItem *this,int param_1)

{
  undefined4 uVar1;
  
  if (this[0x21a] == (CEquipItem)0x0) {
    uVar1 = *(undefined4 *)(this + 400);
  }
  else {
    uVar1 = getLevelLinearAbility
                      (*(int *)(this + 0x21c),*(int *)(this + 0x220),*(int *)(this + 0x22c),
                       *(int *)(this + 0x230),param_1);
  }
  return uVar1;
}

```

---

## getWpBonusPoint

```asm
// === 08513522 CEquipItem::getWpBonusPoint  [0x08513522-0x851352f] ===
 8513522:	55                   	push   %ebp
 8513523:	89 e5                	mov    %esp,%ebp
 8513525:	8b 45 08             	mov    0x8(%ebp),%eax
 8513528:	05 e0 01 00 00       	add    $0x1e0,%eax
 851352d:	5d                   	pop    %ebp
 851352e:	c3                   	ret
 851352f:	90                   	nop

```

```c
// CEquipItem::getWpBonusPoint @ 0x8513522

/* CEquipItem::getWpBonusPoint() const */

CEquipItem * __thiscall CEquipItem::getWpBonusPoint(CEquipItem *this)

{
  return this + 0x1e0;
}

```

---

## get_aura_avatar_option_value

```asm
// === 08510c0c CEquipItem::get_aura_avatar_option_value  [0x08510c0c-0x8510c19] ===
 8510c0c:	55                   	push   %ebp
 8510c0d:	89 e5                	mov    %esp,%ebp
 8510c0f:	8b 45 08             	mov    0x8(%ebp),%eax
 8510c12:	8b 80 dc 01 00 00    	mov    0x1dc(%eax),%eax
 8510c18:	5d                   	pop    %ebp
 8510c19:	c3                   	ret

```

```c
// CEquipItem::get_aura_avatar_option_value @ 0x8510c0c

/* CEquipItem::get_aura_avatar_option_value() */

undefined4 __thiscall CEquipItem::get_aura_avatar_option_value(CEquipItem *this)

{
  return *(undefined4 *)(this + 0x1dc);
}

```

---

## isAmplifyPollutionItem

```asm
// === 085136b6 CEquipItem::isAmplifyPollutionItem  [0x085136b6-0x85136c5] ===
 85136b6:	55                   	push   %ebp
 85136b7:	89 e5                	mov    %esp,%ebp
 85136b9:	8b 45 08             	mov    0x8(%ebp),%eax
 85136bc:	0f b6 80 fc 01 00 00 	movzbl 0x1fc(%eax),%eax
 85136c3:	5d                   	pop    %ebp
 85136c4:	c3                   	ret
 85136c5:	90                   	nop

```

```c
// CEquipItem::isAmplifyPollutionItem @ 0x85136b6

/* CEquipItem::isAmplifyPollutionItem() const */

CEquipItem __thiscall CEquipItem::isAmplifyPollutionItem(CEquipItem *this)

{
  return this[0x1fc];
}

```

---

## isExistUpgradableLevelTag

```asm
// === 0851378a CEquipItem::isExistUpgradableLevelTag  [0x0851378a-0x85137a7] ===
 851378a:	55                   	push   %ebp
 851378b:	89 e5                	mov    %esp,%ebp
 851378d:	83 ec 18             	sub    $0x18,%esp
 8513790:	8b 45 08             	mov    0x8(%ebp),%eax
 8513793:	05 00 02 00 00       	add    $0x200,%eax
 8513798:	89 04 24             	mov    %eax,(%esp)
 851379b:	e8 70 5a 00 00       	call   8519210 <_ZNKSt3mapIN15ItemUpgradeType1TESt4pairIiiESt4lessIS1_ESaIS2_IKS1_S3_EEE4sizeEv>
 85137a0:	85 c0                	test   %eax,%eax
 85137a2:	0f 95 c0             	setne  %al
 85137a5:	c9                   	leave
 85137a6:	c3                   	ret
 85137a7:	90                   	nop

```

```c
// CEquipItem::isExistUpgradableLevelTag @ 0x851378a

/* CEquipItem::isExistUpgradableLevelTag() */

bool __thiscall CEquipItem::isExistUpgradableLevelTag(CEquipItem *this)

{
  int iVar1;
  
  iVar1 = std::
          map<ItemUpgradeType::T,std::pair<int,int>,std::less<ItemUpgradeType::T>,std::allocator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>>
          ::size((map<ItemUpgradeType::T,std::pair<int,int>,std::less<ItemUpgradeType::T>,std::allocator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>>
                  *)(this + 0x200));
  return iVar1 != 0;
}

```

---

## isGrowthType

```asm
// === 085137a8 CEquipItem::isGrowthType  [0x085137a8-0x85137b7] ===
 85137a8:	55                   	push   %ebp
 85137a9:	89 e5                	mov    %esp,%ebp
 85137ab:	8b 45 08             	mov    0x8(%ebp),%eax
 85137ae:	0f b6 80 1a 02 00 00 	movzbl 0x21a(%eax),%eax
 85137b5:	5d                   	pop    %ebp
 85137b6:	c3                   	ret
 85137b7:	90                   	nop

```

```c
// CEquipItem::isGrowthType @ 0x85137a8

/* CEquipItem::isGrowthType() const */

CEquipItem __thiscall CEquipItem::isGrowthType(CEquipItem *this)

{
  return this[0x21a];
}

```

---

## isUpgradableLevel

```asm
// === 085136ec CEquipItem::isUpgradableLevel  [0x085136ec-0x8513789] ===
 85136ec:	55                   	push   %ebp
 85136ed:	89 e5                	mov    %esp,%ebp
 85136ef:	83 ec 28             	sub    $0x28,%esp
 85136f2:	8b 45 08             	mov    0x8(%ebp),%eax
 85136f5:	8d 88 00 02 00 00    	lea    0x200(%eax),%ecx
 85136fb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85136fe:	8d 55 0c             	lea    0xc(%ebp),%edx
 8513701:	89 54 24 08          	mov    %edx,0x8(%esp)
 8513705:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8513709:	89 04 24             	mov    %eax,(%esp)
 851370c:	e8 8b 5a 00 00       	call   851919c <_ZNSt3mapIN15ItemUpgradeType1TESt4pairIiiESt4lessIS1_ESaIS2_IKS1_S3_EEE4findERS6_>
 8513711:	83 ec 04             	sub    $0x4,%esp
 8513714:	8b 45 08             	mov    0x8(%ebp),%eax
 8513717:	8d 90 00 02 00 00    	lea    0x200(%eax),%edx
 851371d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8513720:	89 54 24 04          	mov    %edx,0x4(%esp)
 8513724:	89 04 24             	mov    %eax,(%esp)
 8513727:	e8 9c 5a 00 00       	call   85191c8 <_ZNSt3mapIN15ItemUpgradeType1TESt4pairIiiESt4lessIS1_ESaIS2_IKS1_S3_EEE3endEv>
 851372c:	83 ec 04             	sub    $0x4,%esp
 851372f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8513732:	89 44 24 04          	mov    %eax,0x4(%esp)
 8513736:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8513739:	89 04 24             	mov    %eax,(%esp)
 851373c:	e8 ad 5a 00 00       	call   85191ee <_ZNKSt17_Rb_tree_iteratorISt4pairIKN15ItemUpgradeType1TES0_IiiEEEneERKS6_>
 8513741:	84 c0                	test   %al,%al
 8513743:	74 3d                	je     8513782 <_ZN10CEquipItem17isUpgradableLevelEN15ItemUpgradeType1TEi+0x96>
 8513745:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8513748:	89 04 24             	mov    %eax,(%esp)
 851374b:	e8 b2 5a 00 00       	call   8519202 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN15ItemUpgradeType1TES0_IiiEEEptEv>
 8513750:	8b 40 04             	mov    0x4(%eax),%eax
 8513753:	3b 45 10             	cmp    0x10(%ebp),%eax
 8513756:	7f 13                	jg     851376b <_ZN10CEquipItem17isUpgradableLevelEN15ItemUpgradeType1TEi+0x7f>
 8513758:	8d 45 f0             	lea    -0x10(%ebp),%eax
 851375b:	89 04 24             	mov    %eax,(%esp)
 851375e:	e8 9f 5a 00 00       	call   8519202 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN15ItemUpgradeType1TES0_IiiEEEptEv>
 8513763:	8b 40 08             	mov    0x8(%eax),%eax
 8513766:	3b 45 10             	cmp    0x10(%ebp),%eax
 8513769:	7d 07                	jge    8513772 <_ZN10CEquipItem17isUpgradableLevelEN15ItemUpgradeType1TEi+0x86>
 851376b:	b8 01 00 00 00       	mov    $0x1,%eax
 8513770:	eb 05                	jmp    8513777 <_ZN10CEquipItem17isUpgradableLevelEN15ItemUpgradeType1TEi+0x8b>
 8513772:	b8 00 00 00 00       	mov    $0x0,%eax
 8513777:	84 c0                	test   %al,%al
 8513779:	74 07                	je     8513782 <_ZN10CEquipItem17isUpgradableLevelEN15ItemUpgradeType1TEi+0x96>
 851377b:	b8 00 00 00 00       	mov    $0x0,%eax
 8513780:	eb 05                	jmp    8513787 <_ZN10CEquipItem17isUpgradableLevelEN15ItemUpgradeType1TEi+0x9b>
 8513782:	b8 01 00 00 00       	mov    $0x1,%eax
 8513787:	c9                   	leave
 8513788:	c3                   	ret
 8513789:	90                   	nop

```

```c
// CEquipItem::isUpgradableLevel @ 0x85136ec

/* CEquipItem::isUpgradableLevel(ItemUpgradeType::T, int) */

undefined4 __thiscall CEquipItem::isUpgradableLevel(undefined4 this,undefined4 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>> local_14 [4];
  map<ItemUpgradeType::T,std::pair<int,int>,std::less<ItemUpgradeType::T>,std::allocator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>>
  local_10 [12];
  
  std::
  map<ItemUpgradeType::T,std::pair<int,int>,std::less<ItemUpgradeType::T>,std::allocator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>>
  ::find(local_14);
  std::
  map<ItemUpgradeType::T,std::pair<int,int>,std::less<ItemUpgradeType::T>,std::allocator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>>
  ::end(local_10);
  cVar2 = std::_Rb_tree_iterator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar2 != '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>::
            operator->(local_14);
    if ((param_3 < *(int *)(iVar3 + 4)) ||
       (iVar3 = std::_Rb_tree_iterator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>::
                operator->(local_14), *(int *)(iVar3 + 8) < param_3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 0;
    }
  }
  return 1;
}

```

---

## is_aura_avatar_option

```asm
// === 08510bdc CEquipItem::is_aura_avatar_option  [0x08510bdc-0x8510c0b] ===
 8510bdc:	55                   	push   %ebp
 8510bdd:	89 e5                	mov    %esp,%ebp
 8510bdf:	83 ec 04             	sub    $0x4,%esp
 8510be2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510be5:	88 45 fc             	mov    %al,-0x4(%ebp)
 8510be8:	8b 45 08             	mov    0x8(%ebp),%eax
 8510beb:	0f b6 80 d8 01 00 00 	movzbl 0x1d8(%eax),%eax
 8510bf2:	0f b6 d0             	movzbl %al,%edx
 8510bf5:	0f be 45 fc          	movsbl -0x4(%ebp),%eax
 8510bf9:	39 c2                	cmp    %eax,%edx
 8510bfb:	75 07                	jne    8510c04 <_ZN10CEquipItem21is_aura_avatar_optionEc+0x28>
 8510bfd:	b8 01 00 00 00       	mov    $0x1,%eax
 8510c02:	eb 05                	jmp    8510c09 <_ZN10CEquipItem21is_aura_avatar_optionEc+0x2d>
 8510c04:	b8 00 00 00 00       	mov    $0x0,%eax
 8510c09:	c9                   	leave
 8510c0a:	c3                   	ret
 8510c0b:	90                   	nop

```

```c
// CEquipItem::is_aura_avatar_option @ 0x8510bdc

/* CEquipItem::is_aura_avatar_option(char) */

bool __thiscall CEquipItem::is_aura_avatar_option(CEquipItem *this,char param_1)

{
  return (uint)(byte)this[0x1d8] == (int)param_1;
}

```

---

## make_item

```asm
// === 0851098a CEquipItem::make_item  [0x0851098a-0x8510bdb] ===
 851098a:	55                   	push   %ebp
 851098b:	89 e5                	mov    %esp,%ebp
 851098d:	53                   	push   %ebx
 851098e:	83 ec 24             	sub    $0x24,%esp
 8510991:	8b 45 08             	mov    0x8(%ebp),%eax
 8510994:	8b 00                	mov    (%eax),%eax
 8510996:	83 c0 10             	add    $0x10,%eax
 8510999:	8b 10                	mov    (%eax),%edx
 851099b:	8b 45 08             	mov    0x8(%ebp),%eax
 851099e:	89 04 24             	mov    %eax,(%esp)
 85109a1:	ff d2                	call   *%edx
 85109a3:	84 c0                	test   %al,%al
 85109a5:	74 09                	je     85109b0 <_ZNK10CEquipItem9make_itemER10Inven_Item+0x26>
 85109a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85109aa:	c6 40 01 08          	movb   $0x8,0x1(%eax)
 85109ae:	eb 07                	jmp    85109b7 <_ZNK10CEquipItem9make_itemER10Inven_Item+0x2d>
 85109b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85109b3:	c6 40 01 01          	movb   $0x1,0x1(%eax)
 85109b7:	8b 45 08             	mov    0x8(%ebp),%eax
 85109ba:	8b 80 34 02 00 00    	mov    0x234(%eax),%eax
 85109c0:	83 f8 16             	cmp    $0x16,%eax
 85109c3:	75 09                	jne    85109ce <_ZNK10CEquipItem9make_itemER10Inven_Item+0x44>
 85109c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85109c8:	c6 40 01 05          	movb   $0x5,0x1(%eax)
 85109cc:	eb 31                	jmp    85109ff <_ZNK10CEquipItem9make_itemER10Inven_Item+0x75>
 85109ce:	8b 45 08             	mov    0x8(%ebp),%eax
 85109d1:	8b 80 34 02 00 00    	mov    0x234(%eax),%eax
 85109d7:	83 f8 17             	cmp    $0x17,%eax
 85109da:	74 1c                	je     85109f8 <_ZNK10CEquipItem9make_itemER10Inven_Item+0x6e>
 85109dc:	8b 45 08             	mov    0x8(%ebp),%eax
 85109df:	8b 80 34 02 00 00    	mov    0x234(%eax),%eax
 85109e5:	83 f8 18             	cmp    $0x18,%eax
 85109e8:	74 0e                	je     85109f8 <_ZNK10CEquipItem9make_itemER10Inven_Item+0x6e>
 85109ea:	8b 45 08             	mov    0x8(%ebp),%eax
 85109ed:	8b 80 34 02 00 00    	mov    0x234(%eax),%eax
 85109f3:	83 f8 19             	cmp    $0x19,%eax
 85109f6:	75 07                	jne    85109ff <_ZNK10CEquipItem9make_itemER10Inven_Item+0x75>
 85109f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85109fb:	c6 40 01 06          	movb   $0x6,0x1(%eax)
 85109ff:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8510a06:	e8 7c 11 1a 00       	call   86b1b87 <_Z12get_rand_inti>
 8510a0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8510a0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510a12:	89 04 24             	mov    %eax,(%esp)
 8510a15:	e8 6a ae bb ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8510a1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510a1d:	89 04 24             	mov    %eax,(%esp)
 8510a20:	e8 6d ae bb ff       	call   80cb892 <_ZN10Inven_Item13ResetItemAttrEv>
 8510a25:	8b 45 08             	mov    0x8(%ebp),%eax
 8510a28:	8b 80 70 01 00 00    	mov    0x170(%eax),%eax
 8510a2e:	89 c2                	mov    %eax,%edx
 8510a30:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510a33:	66 89 50 0b          	mov    %dx,0xb(%eax)
 8510a37:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510a3a:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8510a3e:	3c 08                	cmp    $0x8,%al
 8510a40:	75 4f                	jne    8510a91 <_ZNK10CEquipItem9make_itemER10Inven_Item+0x107>
 8510a42:	8b 45 08             	mov    0x8(%ebp),%eax
 8510a45:	8b 80 38 02 00 00    	mov    0x238(%eax),%eax
 8510a4b:	85 c0                	test   %eax,%eax
 8510a4d:	7e 27                	jle    8510a76 <_ZNK10CEquipItem9make_itemER10Inven_Item+0xec>
 8510a4f:	8b 45 08             	mov    0x8(%ebp),%eax
 8510a52:	8b 98 38 02 00 00    	mov    0x238(%eax),%ebx
 8510a58:	8b 45 08             	mov    0x8(%ebp),%eax
 8510a5b:	89 04 24             	mov    %eax,(%esp)
 8510a5e:	e8 c5 04 c4 ff       	call   8150f28 <_ZNK10CEquipItem19getAvatarTypeSelectEv>
 8510a63:	89 04 24             	mov    %eax,(%esp)
 8510a66:	e8 2f 17 c4 ff       	call   815219a <_ZNKSt6vectorI20stAvatarTypeSelect_tSaIS0_EE4sizeEv>
 8510a6b:	39 c3                	cmp    %eax,%ebx
 8510a6d:	7d 07                	jge    8510a76 <_ZNK10CEquipItem9make_itemER10Inven_Item+0xec>
 8510a6f:	b8 01 00 00 00       	mov    $0x1,%eax
 8510a74:	eb 05                	jmp    8510a7b <_ZNK10CEquipItem9make_itemER10Inven_Item+0xf1>
 8510a76:	b8 00 00 00 00       	mov    $0x0,%eax
 8510a7b:	84 c0                	test   %al,%al
 8510a7d:	74 12                	je     8510a91 <_ZNK10CEquipItem9make_itemER10Inven_Item+0x107>
 8510a7f:	8b 45 08             	mov    0x8(%ebp),%eax
 8510a82:	8b 80 38 02 00 00    	mov    0x238(%eax),%eax
 8510a88:	89 c2                	mov    %eax,%edx
 8510a8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510a8d:	66 89 50 0b          	mov    %dx,0xb(%eax)
 8510a91:	8b 45 08             	mov    0x8(%ebp),%eax
 8510a94:	8b 40 34             	mov    0x34(%eax),%eax
 8510a97:	83 f8 03             	cmp    $0x3,%eax
 8510a9a:	75 06                	jne    8510aa2 <_ZNK10CEquipItem9make_itemER10Inven_Item+0x118>
 8510a9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510a9f:	c6 00 01             	movb   $0x1,(%eax)
 8510aa2:	8b 45 08             	mov    0x8(%ebp),%eax
 8510aa5:	8b 00                	mov    (%eax),%eax
 8510aa7:	83 c0 48             	add    $0x48,%eax
 8510aaa:	8b 10                	mov    (%eax),%edx
 8510aac:	8b 45 08             	mov    0x8(%ebp),%eax
 8510aaf:	89 04 24             	mov    %eax,(%esp)
 8510ab2:	ff d2                	call   *%edx
 8510ab4:	85 c0                	test   %eax,%eax
 8510ab6:	0f 94 c0             	sete   %al
 8510ab9:	84 c0                	test   %al,%al
 8510abb:	0f 84 a6 00 00 00    	je     8510b67 <_ZNK10CEquipItem9make_itemER10Inven_Item+0x1dd>
 8510ac1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8510ac8:	8b 45 08             	mov    0x8(%ebp),%eax
 8510acb:	89 04 24             	mov    %eax,(%esp)
 8510ace:	e8 8d 01 c0 ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 8510ad3:	85 c0                	test   %eax,%eax
 8510ad5:	0f 95 c0             	setne  %al
 8510ad8:	84 c0                	test   %al,%al
 8510ada:	74 27                	je     8510b03 <_ZNK10CEquipItem9make_itemER10Inven_Item+0x179>
 8510adc:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8510ae3:	e8 b6 b1 bb ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8510ae8:	89 c3                	mov    %eax,%ebx
 8510aea:	8b 45 08             	mov    0x8(%ebp),%eax
 8510aed:	89 04 24             	mov    %eax,(%esp)
 8510af0:	e8 6b 01 c0 ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 8510af5:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 8510afb:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8510afe:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8510b01:	eb 22                	jmp    8510b25 <_ZNK10CEquipItem9make_itemER10Inven_Item+0x19b>
 8510b03:	8b 45 08             	mov    0x8(%ebp),%eax
 8510b06:	89 04 24             	mov    %eax,(%esp)
 8510b09:	e8 f8 07 be ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 8510b0e:	85 c0                	test   %eax,%eax
 8510b10:	0f 95 c0             	setne  %al
 8510b13:	84 c0                	test   %al,%al
 8510b15:	74 0e                	je     8510b25 <_ZNK10CEquipItem9make_itemER10Inven_Item+0x19b>
 8510b17:	8b 45 08             	mov    0x8(%ebp),%eax
 8510b1a:	89 04 24             	mov    %eax,(%esp)
 8510b1d:	e8 e4 07 be ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 8510b22:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8510b25:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8510b29:	74 3c                	je     8510b67 <_ZNK10CEquipItem9make_itemER10Inven_Item+0x1dd>
 8510b2b:	8b 45 08             	mov    0x8(%ebp),%eax
 8510b2e:	8b 80 34 02 00 00    	mov    0x234(%eax),%eax
 8510b34:	83 f8 0a             	cmp    $0xa,%eax
 8510b37:	74 2e                	je     8510b67 <_ZNK10CEquipItem9make_itemER10Inven_Item+0x1dd>
 8510b39:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8510b3c:	8d 88 80 b5 5a bb    	lea    -0x44a54a80(%eax),%ecx
 8510b42:	ba 07 45 2e c2       	mov    $0xc22e4507,%edx
 8510b47:	89 c8                	mov    %ecx,%eax
 8510b49:	f7 ea                	imul   %edx
 8510b4b:	8d 04 0a             	lea    (%edx,%ecx,1),%eax
 8510b4e:	89 c2                	mov    %eax,%edx
 8510b50:	c1 fa 10             	sar    $0x10,%edx
 8510b53:	89 c8                	mov    %ecx,%eax
 8510b55:	c1 f8 1f             	sar    $0x1f,%eax
 8510b58:	89 d1                	mov    %edx,%ecx
 8510b5a:	29 c1                	sub    %eax,%ecx
 8510b5c:	89 c8                	mov    %ecx,%eax
 8510b5e:	89 c2                	mov    %eax,%edx
 8510b60:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510b63:	66 89 50 0b          	mov    %dx,0xb(%eax)
 8510b67:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510b6a:	c7 40 0d 00 00 00 00 	movl   $0x0,0xd(%eax)
 8510b71:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510b74:	83 c0 15             	add    $0x15,%eax
 8510b77:	89 04 24             	mov    %eax,(%esp)
 8510b7a:	e8 69 2e 00 00       	call   85139e8 <_ZN30itemGloballyUniqueIdentifier_t5resetEv>
 8510b7f:	8b 45 08             	mov    0x8(%ebp),%eax
 8510b82:	8b 80 34 02 00 00    	mov    0x234(%eax),%eax
 8510b88:	83 f8 19             	cmp    $0x19,%eax
 8510b8b:	77 3b                	ja     8510bc8 <_ZNK10CEquipItem9make_itemER10Inven_Item+0x23e>
 8510b8d:	ba 01 00 00 00       	mov    $0x1,%edx
 8510b92:	89 d3                	mov    %edx,%ebx
 8510b94:	89 c1                	mov    %eax,%ecx
 8510b96:	d3 e3                	shl    %cl,%ebx
 8510b98:	89 d8                	mov    %ebx,%eax
 8510b9a:	25 00 fc bf 03       	and    $0x3bffc00,%eax
 8510b9f:	85 c0                	test   %eax,%eax
 8510ba1:	74 25                	je     8510bc8 <_ZNK10CEquipItem9make_itemER10Inven_Item+0x23e>
 8510ba3:	e8 d9 b5 bb ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8510ba8:	8b 80 98 01 00 00    	mov    0x198(%eax),%eax
 8510bae:	8b 55 0c             	mov    0xc(%ebp),%edx
 8510bb1:	83 c2 15             	add    $0x15,%edx
 8510bb4:	89 44 24 08          	mov    %eax,0x8(%esp)
 8510bb8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8510bbc:	c7 04 24 68 4d 49 09 	movl   $0x9494d68,(%esp)
 8510bc3:	e8 a4 18 38 00       	call   889246c <_ZN38CItemGloballyUniqueIdentifierGenerator8generateEP30itemGloballyUniqueIdentifier_ti>
 8510bc8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510bcb:	83 c0 11             	add    $0x11,%eax
 8510bce:	89 04 24             	mov    %eax,(%esp)
 8510bd1:	e8 86 ab bb ff       	call   80cb75c <_ZN17stAmplifyOption_t5resetEv>
 8510bd6:	83 c4 24             	add    $0x24,%esp
 8510bd9:	5b                   	pop    %ebx
 8510bda:	5d                   	pop    %ebp
 8510bdb:	c3                   	ret

```

```c
// CEquipItem::make_item @ 0x851098a

/* CEquipItem::make_item(Inven_Item&) const */

void __thiscall CEquipItem::make_item(CEquipItem *this,Inven_Item *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *this_00;
  int iVar4;
  int local_10;
  
  cVar2 = (**(code **)(*(int *)this + 0x10))(this);
  if (cVar2 == '\0') {
    param_1[1] = (Inven_Item)0x1;
  }
  else {
    param_1[1] = (Inven_Item)0x8;
  }
  if (*(int *)(this + 0x234) == 0x16) {
    param_1[1] = (Inven_Item)0x5;
  }
  else if (((*(int *)(this + 0x234) == 0x17) || (*(int *)(this + 0x234) == 0x18)) ||
          (*(int *)(this + 0x234) == 0x19)) {
    param_1[1] = (Inven_Item)0x6;
  }
  iVar3 = get_rand_int(0);
  Inven_Item::set_add_info(param_1,iVar3);
  Inven_Item::ResetItemAttr(param_1);
  *(short *)(param_1 + 0xb) = (short)*(undefined4 *)(this + 0x170);
  if (param_1[1] != (Inven_Item)0x8) goto LAB_08510a91;
  if (*(int *)(this + 0x238) < 1) {
LAB_08510a76:
    bVar1 = false;
  }
  else {
    iVar3 = *(int *)(this + 0x238);
    this_00 = (vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *)
              getAvatarTypeSelect(this);
    iVar4 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::size(this_00);
    if (iVar4 <= iVar3) goto LAB_08510a76;
    bVar1 = true;
  }
  if (bVar1) {
    *(short *)(param_1 + 0xb) = (short)*(undefined4 *)(this + 0x238);
  }
LAB_08510a91:
  if (*(int *)(this + 0x34) == 3) {
    *param_1 = (Inven_Item)0x1;
  }
  iVar3 = (**(code **)(*(int *)this + 0x48))(this);
  if (iVar3 == 0) {
    local_10 = 0;
    iVar3 = CItem::getUsablePeriod((CItem *)this);
    if (iVar3 == 0) {
      iVar3 = CItem::getExpirationDate((CItem *)this);
      if (iVar3 != 0) {
        local_10 = CItem::getExpirationDate((CItem *)this);
      }
    }
    else {
      local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      iVar3 = CItem::getUsablePeriod((CItem *)this);
      local_10 = local_10 + iVar3 * 0x15180;
    }
    if ((local_10 != 0) && (*(int *)(this + 0x234) != 10)) {
      *(short *)(param_1 + 0xb) = (short)((local_10 + -0x44a54a80) / 0x15180);
    }
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  itemGloballyUniqueIdentifier_t::reset((itemGloballyUniqueIdentifier_t *)(param_1 + 0x15));
  if ((*(uint *)(this + 0x234) < 0x1a) &&
     ((1 << ((byte)*(uint *)(this + 0x234) & 0x1f) & 0x3bffc00U) != 0)) {
    iVar3 = G_CEnvironment();
    CItemGloballyUniqueIdentifierGenerator::generate
              ((CItemGloballyUniqueIdentifierGenerator *)&g_ItemGloballyUniqueIdentifierGenerator,
               (itemGloballyUniqueIdentifier_t *)(param_1 + 0x15),*(int *)(iVar3 + 0x198));
  }
  stAmplifyOption_t::reset((stAmplifyOption_t *)(param_1 + 0x11));
  return;
}

```

---

## set_item

```asm
// === 0850fd84 CEquipItem::set_item  [0x0850fd84-0x8510817] ===
 850fd84:	55                   	push   %ebp
 850fd85:	89 e5                	mov    %esp,%ebp
 850fd87:	57                   	push   %edi
 850fd88:	56                   	push   %esi
 850fd89:	53                   	push   %ebx
 850fd8a:	81 ec 4c 02 00 00    	sub    $0x24c,%esp
 850fd90:	8b 45 0c             	mov    0xc(%ebp),%eax
 850fd93:	8b 10                	mov    (%eax),%edx
 850fd95:	8b 45 08             	mov    0x8(%ebp),%eax
 850fd98:	89 50 04             	mov    %edx,0x4(%eax)
 850fd9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 850fd9e:	8b 50 04             	mov    0x4(%eax),%edx
 850fda1:	8b 45 08             	mov    0x8(%ebp),%eax
 850fda4:	89 50 08             	mov    %edx,0x8(%eax)
 850fda7:	8b 45 0c             	mov    0xc(%ebp),%eax
 850fdaa:	8b 50 14             	mov    0x14(%eax),%edx
 850fdad:	8b 45 08             	mov    0x8(%ebp),%eax
 850fdb0:	89 50 0c             	mov    %edx,0xc(%eax)
 850fdb3:	8b 45 0c             	mov    0xc(%ebp),%eax
 850fdb6:	8b 50 24             	mov    0x24(%eax),%edx
 850fdb9:	8b 45 08             	mov    0x8(%ebp),%eax
 850fdbc:	89 50 30             	mov    %edx,0x30(%eax)
 850fdbf:	8b 45 0c             	mov    0xc(%ebp),%eax
 850fdc2:	8b 50 18             	mov    0x18(%eax),%edx
 850fdc5:	8b 45 08             	mov    0x8(%ebp),%eax
 850fdc8:	89 50 10             	mov    %edx,0x10(%eax)
 850fdcb:	8b 45 0c             	mov    0xc(%ebp),%eax
 850fdce:	8b 50 1c             	mov    0x1c(%eax),%edx
 850fdd1:	8b 45 08             	mov    0x8(%ebp),%eax
 850fdd4:	89 50 14             	mov    %edx,0x14(%eax)
 850fdd7:	8b 45 0c             	mov    0xc(%ebp),%eax
 850fdda:	8b 50 10             	mov    0x10(%eax),%edx
 850fddd:	8b 45 08             	mov    0x8(%ebp),%eax
 850fde0:	89 50 38             	mov    %edx,0x38(%eax)
 850fde3:	8b 45 0c             	mov    0xc(%ebp),%eax
 850fde6:	0f b6 90 fc 00 00 00 	movzbl 0xfc(%eax),%edx
 850fded:	8b 45 08             	mov    0x8(%ebp),%eax
 850fdf0:	88 50 60             	mov    %dl,0x60(%eax)
 850fdf3:	8b 45 0c             	mov    0xc(%ebp),%eax
 850fdf6:	8b 50 28             	mov    0x28(%eax),%edx
 850fdf9:	8b 45 08             	mov    0x8(%ebp),%eax
 850fdfc:	89 50 24             	mov    %edx,0x24(%eax)
 850fdff:	8b 45 0c             	mov    0xc(%ebp),%eax
 850fe02:	8b 50 2c             	mov    0x2c(%eax),%edx
 850fe05:	8b 45 08             	mov    0x8(%ebp),%eax
 850fe08:	89 50 28             	mov    %edx,0x28(%eax)
 850fe0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 850fe0e:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 850fe12:	84 c0                	test   %al,%al
 850fe14:	74 19                	je     850fe2f <_ZN10CEquipItem8set_itemER17STEquipmentScript+0xab>
 850fe16:	8b 45 08             	mov    0x8(%ebp),%eax
 850fe19:	8b 40 04             	mov    0x4(%eax),%eax
 850fe1c:	89 c3                	mov    %eax,%ebx
 850fe1e:	e8 78 c3 bb ff       	call   80cc19b <_Z14G_CDataManagerv>
 850fe23:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 850fe27:	89 04 24             	mov    %eax,(%esp)
 850fe2a:	e8 8d 41 00 00       	call   8513fbc <_ZN12CDataManager26set_AuctionRegFreeCeraItemEj>
 850fe2f:	8b 45 0c             	mov    0xc(%ebp),%eax
 850fe32:	0f b6 50 31          	movzbl 0x31(%eax),%edx
 850fe36:	8b 45 08             	mov    0x8(%ebp),%eax
 850fe39:	88 90 f8 00 00 00    	mov    %dl,0xf8(%eax)
 850fe3f:	8d 9d e0 fd ff ff    	lea    -0x220(%ebp),%ebx
 850fe45:	b8 00 00 00 00       	mov    $0x0,%eax
 850fe4a:	ba 7d 00 00 00       	mov    $0x7d,%edx
 850fe4f:	89 df                	mov    %ebx,%edi
 850fe51:	89 d1                	mov    %edx,%ecx
 850fe53:	f3 ab                	rep stos %eax,%es:(%edi)
 850fe55:	8b 45 0c             	mov    0xc(%ebp),%eax
 850fe58:	05 ac 00 00 00       	add    $0xac,%eax
 850fe5d:	89 04 24             	mov    %eax,(%esp)
 850fe60:	e8 8b 66 1f 00       	call   87064f0 <_ZNKSs5c_strEv>
 850fe65:	89 44 24 04          	mov    %eax,0x4(%esp)
 850fe69:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
 850fe6f:	89 04 24             	mov    %eax,(%esp)
 850fe72:	e8 79 e0 b6 ff       	call   807def0 <strcpy@plt>
 850fe77:	8b 45 0c             	mov    0xc(%ebp),%eax
 850fe7a:	05 ac 00 00 00       	add    $0xac,%eax
 850fe7f:	89 04 24             	mov    %eax,(%esp)
 850fe82:	e8 69 66 1f 00       	call   87064f0 <_ZNKSs5c_strEv>
 850fe87:	8d 95 e0 fd ff ff    	lea    -0x220(%ebp),%edx
 850fe8d:	89 54 24 04          	mov    %edx,0x4(%esp)
 850fe91:	89 04 24             	mov    %eax,(%esp)
 850fe94:	e8 6f 8f bf ff       	call   8108e08 <_ZN8CodePage15script2DatabaseEPcS0_>
 850fe99:	83 f0 01             	xor    $0x1,%eax
 850fe9c:	84 c0                	test   %al,%al
 850fe9e:	74 72                	je     850ff12 <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x18e>
 850fea0:	8b 45 0c             	mov    0xc(%ebp),%eax
 850fea3:	05 ac 00 00 00       	add    $0xac,%eax
 850fea8:	89 04 24             	mov    %eax,(%esp)
 850feab:	e8 40 66 1f 00       	call   87064f0 <_ZNKSs5c_strEv>
 850feb0:	89 c7                	mov    %eax,%edi
 850feb2:	e8 29 8f bf ff       	call   8108de0 <_ZN8CodePage8databaseEv>
 850feb7:	89 c6                	mov    %eax,%esi
 850feb9:	e8 0e 8f bf ff       	call   8108dcc <_ZN8CodePage6scriptEv>
 850febe:	89 c3                	mov    %eax,%ebx
 850fec0:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 850fec7:	00 
 850fec8:	c7 44 24 08 53 05 00 	movl   $0x553,0x8(%esp)
 850fecf:	00 
 850fed0:	c7 44 24 04 20 6d c9 	movl   $0x8c96d20,0x4(%esp)
 850fed7:	08 
 850fed8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 850fedb:	89 04 24             	mov    %eax,(%esp)
 850fede:	e8 35 f8 03 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 850fee3:	c7 44 24 18 53 05 00 	movl   $0x553,0x18(%esp)
 850feea:	00 
 850feeb:	c7 44 24 14 20 6d c9 	movl   $0x8c96d20,0x14(%esp)
 850fef2:	08 
 850fef3:	89 7c 24 10          	mov    %edi,0x10(%esp)
 850fef7:	89 74 24 0c          	mov    %esi,0xc(%esp)
 850fefb:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 850feff:	c7 44 24 04 83 5a c9 	movl   $0x8c95a83,0x4(%esp)
 850ff06:	08 
 850ff07:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 850ff0a:	89 04 24             	mov    %eax,(%esp)
 850ff0d:	e8 76 f8 03 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 850ff12:	8b 45 08             	mov    0x8(%ebp),%eax
 850ff15:	8d 50 2c             	lea    0x2c(%eax),%edx
 850ff18:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
 850ff1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 850ff22:	89 14 24             	mov    %edx,(%esp)
 850ff25:	e8 f6 87 1f 00       	call   8708720 <_ZNSsaSEPKc>
 850ff2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 850ff2d:	8b 50 08             	mov    0x8(%eax),%edx
 850ff30:	8b 45 08             	mov    0x8(%ebp),%eax
 850ff33:	89 50 34             	mov    %edx,0x34(%eax)
 850ff36:	8b 45 0c             	mov    0xc(%ebp),%eax
 850ff39:	8b 50 0c             	mov    0xc(%eax),%edx
 850ff3c:	8b 45 08             	mov    0x8(%ebp),%eax
 850ff3f:	89 50 50             	mov    %edx,0x50(%eax)
 850ff42:	8b 45 0c             	mov    0xc(%ebp),%eax
 850ff45:	8b 50 20             	mov    0x20(%eax),%edx
 850ff48:	8b 45 08             	mov    0x8(%ebp),%eax
 850ff4b:	89 50 64             	mov    %edx,0x64(%eax)
 850ff4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 850ff51:	8b 90 8c 08 00 00    	mov    0x88c(%eax),%edx
 850ff57:	8b 45 08             	mov    0x8(%ebp),%eax
 850ff5a:	89 50 68             	mov    %edx,0x68(%eax)
 850ff5d:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 850ff64:	eb 19                	jmp    850ff7f <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x1fb>
 850ff66:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 850ff69:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 850ff6c:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 850ff6f:	0f b6 4c 11 38       	movzbl 0x38(%ecx,%edx,1),%ecx
 850ff74:	8b 55 08             	mov    0x8(%ebp),%edx
 850ff77:	88 4c 02 3c          	mov    %cl,0x3c(%edx,%eax,1)
 850ff7b:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 850ff7f:	83 7d e4 0a          	cmpl   $0xa,-0x1c(%ebp)
 850ff83:	0f 9e c0             	setle  %al
 850ff86:	84 c0                	test   %al,%al
 850ff88:	75 dc                	jne    850ff66 <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x1e2>
 850ff8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 850ff8d:	8b 50 5c             	mov    0x5c(%eax),%edx
 850ff90:	8b 45 08             	mov    0x8(%ebp),%eax
 850ff93:	89 50 48             	mov    %edx,0x48(%eax)
 850ff96:	8b 45 0c             	mov    0xc(%ebp),%eax
 850ff99:	8b 50 60             	mov    0x60(%eax),%edx
 850ff9c:	8b 45 08             	mov    0x8(%ebp),%eax
 850ff9f:	89 50 4c             	mov    %edx,0x4c(%eax)
 850ffa2:	8b 45 0c             	mov    0xc(%ebp),%eax
 850ffa5:	8b 90 b4 01 00 00    	mov    0x1b4(%eax),%edx
 850ffab:	8b 45 08             	mov    0x8(%ebp),%eax
 850ffae:	89 90 34 02 00 00    	mov    %edx,0x234(%eax)
 850ffb4:	8b 45 0c             	mov    0xc(%ebp),%eax
 850ffb7:	8b 90 bc 01 00 00    	mov    0x1bc(%eax),%edx
 850ffbd:	8b 45 08             	mov    0x8(%ebp),%eax
 850ffc0:	89 90 70 01 00 00    	mov    %edx,0x170(%eax)
 850ffc6:	8b 45 08             	mov    0x8(%ebp),%eax
 850ffc9:	c6 40 54 00          	movb   $0x0,0x54(%eax)
 850ffcd:	8b 45 0c             	mov    0xc(%ebp),%eax
 850ffd0:	8b 90 84 01 00 00    	mov    0x184(%eax),%edx
 850ffd6:	8b 45 08             	mov    0x8(%ebp),%eax
 850ffd9:	89 50 58             	mov    %edx,0x58(%eax)
 850ffdc:	8b 45 0c             	mov    0xc(%ebp),%eax
 850ffdf:	8b 90 80 01 00 00    	mov    0x180(%eax),%edx
 850ffe5:	8b 45 08             	mov    0x8(%ebp),%eax
 850ffe8:	89 50 5c             	mov    %edx,0x5c(%eax)
 850ffeb:	8b 45 0c             	mov    0xc(%ebp),%eax
 850ffee:	8b 90 50 07 00 00    	mov    0x750(%eax),%edx
 850fff4:	8b 45 08             	mov    0x8(%ebp),%eax
 850fff7:	89 90 58 01 00 00    	mov    %edx,0x158(%eax)
 850fffd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510000:	8b 90 bc 06 00 00    	mov    0x6bc(%eax),%edx
 8510006:	8b 45 08             	mov    0x8(%ebp),%eax
 8510009:	89 90 5c 01 00 00    	mov    %edx,0x15c(%eax)
 851000f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510012:	8b 90 38 07 00 00    	mov    0x738(%eax),%edx
 8510018:	8b 45 08             	mov    0x8(%ebp),%eax
 851001b:	89 90 68 01 00 00    	mov    %edx,0x168(%eax)
 8510021:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510024:	8b 80 b4 01 00 00    	mov    0x1b4(%eax),%eax
 851002a:	83 f8 16             	cmp    $0x16,%eax
 851002d:	75 6e                	jne    851009d <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x319>
 851002f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510032:	8b 80 b8 01 00 00    	mov    0x1b8(%eax),%eax
 8510038:	83 f8 01             	cmp    $0x1,%eax
 851003b:	74 2f                	je     851006c <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x2e8>
 851003d:	83 f8 02             	cmp    $0x2,%eax
 8510040:	74 3e                	je     8510080 <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x2fc>
 8510042:	85 c0                	test   %eax,%eax
 8510044:	75 57                	jne    851009d <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x319>
 8510046:	8b 45 08             	mov    0x8(%ebp),%eax
 8510049:	8b 70 04             	mov    0x4(%eax),%esi
 851004c:	8b 45 08             	mov    0x8(%ebp),%eax
 851004f:	8b 98 5c 01 00 00    	mov    0x15c(%eax),%ebx
 8510055:	e8 76 6b e2 ff       	call   8336bd0 <_ZN13user_creature28GetInstanceCreatureScriptMgrEv>
 851005a:	89 74 24 08          	mov    %esi,0x8(%esp)
 851005e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8510062:	89 04 24             	mov    %eax,(%esp)
 8510065:	e8 e0 d4 e2 ff       	call   833d54a <_ZN13user_creature18CCreatureScriptMgr27RegisterCreatureIdAndItemIdEii>
 851006a:	eb 31                	jmp    851009d <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x319>
 851006c:	8b 45 0c             	mov    0xc(%ebp),%eax
 851006f:	8b 90 64 07 00 00    	mov    0x764(%eax),%edx
 8510075:	8b 45 08             	mov    0x8(%ebp),%eax
 8510078:	89 90 64 01 00 00    	mov    %edx,0x164(%eax)
 851007e:	eb 1d                	jmp    851009d <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x319>
 8510080:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510083:	8d 90 88 00 00 00    	lea    0x88(%eax),%edx
 8510089:	8b 45 08             	mov    0x8(%ebp),%eax
 851008c:	05 48 01 00 00       	add    $0x148,%eax
 8510091:	89 54 24 04          	mov    %edx,0x4(%esp)
 8510095:	89 04 24             	mov    %eax,(%esp)
 8510098:	e8 a3 b9 4a 00       	call   89bba40 <_ZN15RandomItemTable3SetEPSt6vectorIiSaIiEE>
 851009d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85100a0:	8b 90 b8 01 00 00    	mov    0x1b8(%eax),%edx
 85100a6:	8b 45 08             	mov    0x8(%ebp),%eax
 85100a9:	89 90 60 01 00 00    	mov    %edx,0x160(%eax)
 85100af:	8b 45 0c             	mov    0xc(%ebp),%eax
 85100b2:	8b 90 f4 00 00 00    	mov    0xf4(%eax),%edx
 85100b8:	8b 45 08             	mov    0x8(%ebp),%eax
 85100bb:	89 50 6c             	mov    %edx,0x6c(%eax)
 85100be:	8b 45 0c             	mov    0xc(%ebp),%eax
 85100c1:	8b 90 f8 00 00 00    	mov    0xf8(%eax),%edx
 85100c7:	8b 45 08             	mov    0x8(%ebp),%eax
 85100ca:	89 50 70             	mov    %edx,0x70(%eax)
 85100cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 85100d0:	0f b6 90 ac 07 00 00 	movzbl 0x7ac(%eax),%edx
 85100d7:	8b 45 08             	mov    0x8(%ebp),%eax
 85100da:	88 90 6c 01 00 00    	mov    %dl,0x16c(%eax)
 85100e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85100e3:	8d 90 c0 06 00 00    	lea    0x6c0(%eax),%edx
 85100e9:	8b 45 08             	mov    0x8(%ebp),%eax
 85100ec:	05 74 01 00 00       	add    $0x174,%eax
 85100f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85100f5:	89 04 24             	mov    %eax,(%esp)
 85100f8:	e8 eb 7a 00 00       	call   8517be8 <_ZNSt6vectorI20stAvatarTypeSelect_tSaIS0_EEaSERKS2_>
 85100fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510100:	8d 90 cc 06 00 00    	lea    0x6cc(%eax),%edx
 8510106:	8b 45 08             	mov    0x8(%ebp),%eax
 8510109:	05 80 01 00 00       	add    $0x180,%eax
 851010e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8510112:	89 04 24             	mov    %eax,(%esp)
 8510115:	e8 1c 7d 00 00       	call   8517e36 <_ZNSt6vectorItSaItEEaSERKS1_>
 851011a:	8b 45 0c             	mov    0xc(%ebp),%eax
 851011d:	8b 90 d8 06 00 00    	mov    0x6d8(%eax),%edx
 8510123:	8b 45 08             	mov    0x8(%ebp),%eax
 8510126:	89 90 8c 01 00 00    	mov    %edx,0x18c(%eax)
 851012c:	8b 45 0c             	mov    0xc(%ebp),%eax
 851012f:	8b 90 78 01 00 00    	mov    0x178(%eax),%edx
 8510135:	8b 45 08             	mov    0x8(%ebp),%eax
 8510138:	89 90 90 01 00 00    	mov    %edx,0x190(%eax)
 851013e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510141:	8b 90 00 01 00 00    	mov    0x100(%eax),%edx
 8510147:	8b 45 08             	mov    0x8(%ebp),%eax
 851014a:	89 50 74             	mov    %edx,0x74(%eax)
 851014d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510150:	0f b6 90 04 01 00 00 	movzbl 0x104(%eax),%edx
 8510157:	8b 45 08             	mov    0x8(%ebp),%eax
 851015a:	88 50 78             	mov    %dl,0x78(%eax)
 851015d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510160:	0f b6 90 bc 07 00 00 	movzbl 0x7bc(%eax),%edx
 8510167:	8b 45 08             	mov    0x8(%ebp),%eax
 851016a:	88 50 79             	mov    %dl,0x79(%eax)
 851016d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510170:	8d 50 6c             	lea    0x6c(%eax),%edx
 8510173:	8b 45 08             	mov    0x8(%ebp),%eax
 8510176:	05 b0 00 00 00       	add    $0xb0,%eax
 851017b:	89 54 24 04          	mov    %edx,0x4(%esp)
 851017f:	89 04 24             	mov    %eax,(%esp)
 8510182:	e8 79 7b 1f 00       	call   8707d00 <_ZNSsaSERKSs>
 8510187:	8b 45 0c             	mov    0xc(%ebp),%eax
 851018a:	8b 90 c8 00 00 00    	mov    0xc8(%eax),%edx
 8510190:	8b 45 08             	mov    0x8(%ebp),%eax
 8510193:	89 90 80 00 00 00    	mov    %edx,0x80(%eax)
 8510199:	8b 45 0c             	mov    0xc(%ebp),%eax
 851019c:	8b 90 cc 00 00 00    	mov    0xcc(%eax),%edx
 85101a2:	8b 45 08             	mov    0x8(%ebp),%eax
 85101a5:	89 50 7c             	mov    %edx,0x7c(%eax)
 85101a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85101ab:	0f b6 90 f4 06 00 00 	movzbl 0x6f4(%eax),%edx
 85101b2:	8b 45 08             	mov    0x8(%ebp),%eax
 85101b5:	88 90 84 00 00 00    	mov    %dl,0x84(%eax)
 85101bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 85101be:	0f b6 90 f5 06 00 00 	movzbl 0x6f5(%eax),%edx
 85101c5:	8b 45 08             	mov    0x8(%ebp),%eax
 85101c8:	88 90 85 00 00 00    	mov    %dl,0x85(%eax)
 85101ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 85101d1:	0f b6 90 f6 06 00 00 	movzbl 0x6f6(%eax),%edx
 85101d8:	8b 45 08             	mov    0x8(%ebp),%eax
 85101db:	88 90 86 00 00 00    	mov    %dl,0x86(%eax)
 85101e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85101e4:	0f b6 90 d0 00 00 00 	movzbl 0xd0(%eax),%edx
 85101eb:	8b 45 08             	mov    0x8(%ebp),%eax
 85101ee:	88 90 87 00 00 00    	mov    %dl,0x87(%eax)
 85101f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85101f7:	0f b6 90 da 00 00 00 	movzbl 0xda(%eax),%edx
 85101fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8510201:	88 90 88 00 00 00    	mov    %dl,0x88(%eax)
 8510207:	8b 45 0c             	mov    0xc(%ebp),%eax
 851020a:	0f b6 90 d9 00 00 00 	movzbl 0xd9(%eax),%edx
 8510211:	8b 45 08             	mov    0x8(%ebp),%eax
 8510214:	88 90 89 00 00 00    	mov    %dl,0x89(%eax)
 851021a:	8b 45 0c             	mov    0xc(%ebp),%eax
 851021d:	8b 90 f8 06 00 00    	mov    0x6f8(%eax),%edx
 8510223:	8b 45 08             	mov    0x8(%ebp),%eax
 8510226:	89 90 ac 00 00 00    	mov    %edx,0xac(%eax)
 851022c:	8b 45 08             	mov    0x8(%ebp),%eax
 851022f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8510232:	8b 8a 05 01 00 00    	mov    0x105(%edx),%ecx
 8510238:	89 88 b4 00 00 00    	mov    %ecx,0xb4(%eax)
 851023e:	8b 8a 09 01 00 00    	mov    0x109(%edx),%ecx
 8510244:	89 88 b8 00 00 00    	mov    %ecx,0xb8(%eax)
 851024a:	0f b6 92 0d 01 00 00 	movzbl 0x10d(%edx),%edx
 8510251:	88 90 bc 00 00 00    	mov    %dl,0xbc(%eax)
 8510257:	8b 45 0c             	mov    0xc(%ebp),%eax
 851025a:	05 05 01 00 00       	add    $0x105,%eax
 851025f:	89 04 24             	mov    %eax,(%esp)
 8510262:	e8 bd 37 00 00       	call   8513a24 <_ZN20STSpecialMonsterDrop5clearEv>
 8510267:	8b 45 0c             	mov    0xc(%ebp),%eax
 851026a:	0f b6 90 0e 01 00 00 	movzbl 0x10e(%eax),%edx
 8510271:	8b 45 08             	mov    0x8(%ebp),%eax
 8510274:	88 90 94 01 00 00    	mov    %dl,0x194(%eax)
 851027a:	8b 45 0c             	mov    0xc(%ebp),%eax
 851027d:	8d 90 d8 07 00 00    	lea    0x7d8(%eax),%edx
 8510283:	8b 45 08             	mov    0x8(%ebp),%eax
 8510286:	05 98 01 00 00       	add    $0x198,%eax
 851028b:	89 54 24 04          	mov    %edx,0x4(%esp)
 851028f:	89 04 24             	mov    %eax,(%esp)
 8510292:	e8 f5 ed df ff       	call   830f08c <_ZNSt6vectorISt4pairIiiESaIS1_EEaSERKS3_>
 8510297:	8b 45 0c             	mov    0xc(%ebp),%eax
 851029a:	8d 90 e4 07 00 00    	lea    0x7e4(%eax),%edx
 85102a0:	8b 45 08             	mov    0x8(%ebp),%eax
 85102a3:	05 a4 01 00 00       	add    $0x1a4,%eax
 85102a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85102ac:	89 04 24             	mov    %eax,(%esp)
 85102af:	e8 d8 ed df ff       	call   830f08c <_ZNSt6vectorISt4pairIiiESaIS1_EEaSERKS3_>
 85102b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85102b7:	8d 90 cc 07 00 00    	lea    0x7cc(%eax),%edx
 85102bd:	8b 45 08             	mov    0x8(%ebp),%eax
 85102c0:	05 b0 01 00 00       	add    $0x1b0,%eax
 85102c5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85102c9:	89 04 24             	mov    %eax,(%esp)
 85102cc:	e8 ad 7d 00 00       	call   851807e <_ZNSt6vectorI19STEnchantSystemDataSaIS0_EEaSERKS2_>
 85102d1:	8b 45 08             	mov    0x8(%ebp),%eax
 85102d4:	c7 80 bc 01 00 00 00 	movl   $0x0,0x1bc(%eax)
 85102db:	00 00 00 
 85102de:	8b 45 08             	mov    0x8(%ebp),%eax
 85102e1:	8b 00                	mov    (%eax),%eax
 85102e3:	83 c0 10             	add    $0x10,%eax
 85102e6:	8b 10                	mov    (%eax),%edx
 85102e8:	8b 45 08             	mov    0x8(%ebp),%eax
 85102eb:	89 04 24             	mov    %eax,(%esp)
 85102ee:	ff d2                	call   *%edx
 85102f0:	84 c0                	test   %al,%al
 85102f2:	74 4a                	je     851033e <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x5ba>
 85102f4:	8b 45 08             	mov    0x8(%ebp),%eax
 85102f7:	8b 40 08             	mov    0x8(%eax),%eax
 85102fa:	83 f8 03             	cmp    $0x3,%eax
 85102fd:	75 1b                	jne    851031a <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x596>
 85102ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510302:	8b 80 98 07 00 00    	mov    0x798(%eax),%eax
 8510308:	83 f8 03             	cmp    $0x3,%eax
 851030b:	75 0d                	jne    851031a <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x596>
 851030d:	8b 45 08             	mov    0x8(%ebp),%eax
 8510310:	c7 80 bc 01 00 00 06 	movl   $0x6,0x1bc(%eax)
 8510317:	00 00 00 
 851031a:	8b 45 0c             	mov    0xc(%ebp),%eax
 851031d:	05 24 04 00 00       	add    $0x424,%eax
 8510322:	89 04 24             	mov    %eax,(%esp)
 8510325:	e8 fe 04 c7 ff       	call   8180828 <_ZNKSt6vectorI24STAvatarAbilityVariationSaIS0_EE4sizeEv>
 851032a:	89 44 24 04          	mov    %eax,0x4(%esp)
 851032e:	8b 45 08             	mov    0x8(%ebp),%eax
 8510331:	89 04 24             	mov    %eax,(%esp)
 8510334:	e8 fb 49 00 00       	call   8514d34 <_ZN10CEquipItem19setAvatarOptionSizeEi>
 8510339:	e9 16 01 00 00       	jmp    8510454 <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x6d0>
 851033e:	8b 45 08             	mov    0x8(%ebp),%eax
 8510341:	8b 00                	mov    (%eax),%eax
 8510343:	83 c0 0c             	add    $0xc,%eax
 8510346:	8b 10                	mov    (%eax),%edx
 8510348:	8b 45 08             	mov    0x8(%ebp),%eax
 851034b:	89 04 24             	mov    %eax,(%esp)
 851034e:	ff d2                	call   *%edx
 8510350:	83 f8 16             	cmp    $0x16,%eax
 8510353:	0f 94 c0             	sete   %al
 8510356:	84 c0                	test   %al,%al
 8510358:	74 21                	je     851037b <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x5f7>
 851035a:	8b 45 0c             	mov    0xc(%ebp),%eax
 851035d:	8b 40 10             	mov    0x10(%eax),%eax
 8510360:	83 f8 02             	cmp    $0x2,%eax
 8510363:	0f 85 eb 00 00 00    	jne    8510454 <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x6d0>
 8510369:	8b 45 08             	mov    0x8(%ebp),%eax
 851036c:	c7 80 bc 01 00 00 0a 	movl   $0xa,0x1bc(%eax)
 8510373:	00 00 00 
 8510376:	e9 d9 00 00 00       	jmp    8510454 <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x6d0>
 851037b:	8b 45 0c             	mov    0xc(%ebp),%eax
 851037e:	8b 40 10             	mov    0x10(%eax),%eax
 8510381:	83 f8 02             	cmp    $0x2,%eax
 8510384:	75 4f                	jne    85103d5 <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x651>
 8510386:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510389:	8b 80 c4 00 00 00    	mov    0xc4(%eax),%eax
 851038f:	83 f8 05             	cmp    $0x5,%eax
 8510392:	75 12                	jne    85103a6 <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x622>
 8510394:	8b 45 08             	mov    0x8(%ebp),%eax
 8510397:	c7 80 bc 01 00 00 02 	movl   $0x2,0x1bc(%eax)
 851039e:	00 00 00 
 85103a1:	e9 ae 00 00 00       	jmp    8510454 <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x6d0>
 85103a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85103a9:	8b 80 c4 00 00 00    	mov    0xc4(%eax),%eax
 85103af:	83 f8 1e             	cmp    $0x1e,%eax
 85103b2:	75 12                	jne    85103c6 <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x642>
 85103b4:	8b 45 08             	mov    0x8(%ebp),%eax
 85103b7:	c7 80 bc 01 00 00 01 	movl   $0x1,0x1bc(%eax)
 85103be:	00 00 00 
 85103c1:	e9 8e 00 00 00       	jmp    8510454 <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x6d0>
 85103c6:	8b 45 08             	mov    0x8(%ebp),%eax
 85103c9:	c7 80 bc 01 00 00 09 	movl   $0x9,0x1bc(%eax)
 85103d0:	00 00 00 
 85103d3:	eb 7f                	jmp    8510454 <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x6d0>
 85103d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85103d8:	8b 40 10             	mov    0x10(%eax),%eax
 85103db:	83 f8 03             	cmp    $0x3,%eax
 85103de:	75 0f                	jne    85103ef <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x66b>
 85103e0:	8b 45 08             	mov    0x8(%ebp),%eax
 85103e3:	c7 80 bc 01 00 00 03 	movl   $0x3,0x1bc(%eax)
 85103ea:	00 00 00 
 85103ed:	eb 65                	jmp    8510454 <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x6d0>
 85103ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 85103f2:	8b 40 10             	mov    0x10(%eax),%eax
 85103f5:	83 f8 05             	cmp    $0x5,%eax
 85103f8:	75 0f                	jne    8510409 <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x685>
 85103fa:	8b 45 08             	mov    0x8(%ebp),%eax
 85103fd:	c7 80 bc 01 00 00 04 	movl   $0x4,0x1bc(%eax)
 8510404:	00 00 00 
 8510407:	eb 4b                	jmp    8510454 <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x6d0>
 8510409:	8b 45 0c             	mov    0xc(%ebp),%eax
 851040c:	8b 40 10             	mov    0x10(%eax),%eax
 851040f:	83 f8 04             	cmp    $0x4,%eax
 8510412:	75 0f                	jne    8510423 <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x69f>
 8510414:	8b 45 08             	mov    0x8(%ebp),%eax
 8510417:	c7 80 bc 01 00 00 05 	movl   $0x5,0x1bc(%eax)
 851041e:	00 00 00 
 8510421:	eb 31                	jmp    8510454 <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x6d0>
 8510423:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510426:	8b 40 10             	mov    0x10(%eax),%eax
 8510429:	85 c0                	test   %eax,%eax
 851042b:	75 0f                	jne    851043c <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x6b8>
 851042d:	8b 45 08             	mov    0x8(%ebp),%eax
 8510430:	c7 80 bc 01 00 00 07 	movl   $0x7,0x1bc(%eax)
 8510437:	00 00 00 
 851043a:	eb 18                	jmp    8510454 <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x6d0>
 851043c:	8b 45 0c             	mov    0xc(%ebp),%eax
 851043f:	8b 40 10             	mov    0x10(%eax),%eax
 8510442:	83 f8 01             	cmp    $0x1,%eax
 8510445:	75 0d                	jne    8510454 <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x6d0>
 8510447:	8b 45 08             	mov    0x8(%ebp),%eax
 851044a:	c7 80 bc 01 00 00 08 	movl   $0x8,0x1bc(%eax)
 8510451:	00 00 00 
 8510454:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510457:	0f b6 90 0f 01 00 00 	movzbl 0x10f(%eax),%edx
 851045e:	8b 45 08             	mov    0x8(%ebp),%eax
 8510461:	88 90 bd 00 00 00    	mov    %dl,0xbd(%eax)
 8510467:	8b 45 0c             	mov    0xc(%ebp),%eax
 851046a:	8d 90 10 01 00 00    	lea    0x110(%eax),%edx
 8510470:	8b 45 08             	mov    0x8(%ebp),%eax
 8510473:	05 c0 00 00 00       	add    $0xc0,%eax
 8510478:	89 54 24 04          	mov    %edx,0x4(%esp)
 851047c:	89 04 24             	mov    %eax,(%esp)
 851047f:	e8 08 ec df ff       	call   830f08c <_ZNSt6vectorISt4pairIiiESaIS1_EEaSERKS3_>
 8510484:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510487:	8b 90 10 08 00 00    	mov    0x810(%eax),%edx
 851048d:	8b 45 08             	mov    0x8(%ebp),%eax
 8510490:	89 90 cc 00 00 00    	mov    %edx,0xcc(%eax)
 8510496:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510499:	8b 90 7c 01 00 00    	mov    0x17c(%eax),%edx
 851049f:	8b 45 08             	mov    0x8(%ebp),%eax
 85104a2:	89 90 c0 01 00 00    	mov    %edx,0x1c0(%eax)
 85104a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85104ab:	0f b6 80 14 08 00 00 	movzbl 0x814(%eax),%eax
 85104b2:	3c 02                	cmp    $0x2,%al
 85104b4:	74 3a                	je     85104f0 <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x76c>
 85104b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85104b9:	8b 98 18 08 00 00    	mov    0x818(%eax),%ebx
 85104bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 85104c2:	0f b6 80 14 08 00 00 	movzbl 0x814(%eax),%eax
 85104c9:	84 c0                	test   %al,%al
 85104cb:	0f 95 c0             	setne  %al
 85104ce:	0f b6 c8             	movzbl %al,%ecx
 85104d1:	8b 45 08             	mov    0x8(%ebp),%eax
 85104d4:	8b 50 04             	mov    0x4(%eax),%edx
 85104d7:	a1 50 f7 41 09       	mov    0x941f750,%eax
 85104dc:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85104e0:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85104e4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85104e8:	89 04 24             	mov    %eax,(%esp)
 85104eb:	e8 94 d2 e1 ff       	call   832d784 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item27ForceResultItemRule_SettingEibi>
 85104f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85104f3:	8d 90 dc 00 00 00    	lea    0xdc(%eax),%edx
 85104f9:	8b 45 08             	mov    0x8(%ebp),%eax
 85104fc:	05 d4 00 00 00       	add    $0xd4,%eax
 8510501:	89 54 24 04          	mov    %edx,0x4(%esp)
 8510505:	89 04 24             	mov    %eax,(%esp)
 8510508:	e8 87 66 00 00       	call   8516b94 <_ZNSt3setIiSt4lessIiESaIiEEaSERKS3_>
 851050d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510510:	8b 50 64             	mov    0x64(%eax),%edx
 8510513:	8b 45 08             	mov    0x8(%ebp),%eax
 8510516:	89 90 ec 00 00 00    	mov    %edx,0xec(%eax)
 851051c:	8b 45 0c             	mov    0xc(%ebp),%eax
 851051f:	8b 90 e0 06 00 00    	mov    0x6e0(%eax),%edx
 8510525:	8b 45 08             	mov    0x8(%ebp),%eax
 8510528:	89 90 38 02 00 00    	mov    %edx,0x238(%eax)
 851052e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510531:	0f b6 90 88 08 00 00 	movzbl 0x888(%eax),%edx
 8510538:	8b 45 08             	mov    0x8(%ebp),%eax
 851053b:	88 90 c8 01 00 00    	mov    %dl,0x1c8(%eax)
 8510541:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510544:	0f b6 90 89 08 00 00 	movzbl 0x889(%eax),%edx
 851054b:	8b 45 08             	mov    0x8(%ebp),%eax
 851054e:	88 90 c9 01 00 00    	mov    %dl,0x1c9(%eax)
 8510554:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510557:	8b 90 50 01 00 00    	mov    0x150(%eax),%edx
 851055d:	8b 45 08             	mov    0x8(%ebp),%eax
 8510560:	89 90 fc 00 00 00    	mov    %edx,0xfc(%eax)
 8510566:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510569:	8b 90 54 01 00 00    	mov    0x154(%eax),%edx
 851056f:	8b 45 08             	mov    0x8(%ebp),%eax
 8510572:	89 90 00 01 00 00    	mov    %edx,0x100(%eax)
 8510578:	8b 45 08             	mov    0x8(%ebp),%eax
 851057b:	05 04 01 00 00       	add    $0x104,%eax
 8510580:	89 04 24             	mov    %eax,(%esp)
 8510583:	e8 2a 66 00 00       	call   8516bb2 <_ZNSt6vectorIN12STItemScript10SEXPERTJOB7SUSABLEESaIS2_EE5clearEv>
 8510588:	8b 45 0c             	mov    0xc(%ebp),%eax
 851058b:	8d 90 58 01 00 00    	lea    0x158(%eax),%edx
 8510591:	8b 45 08             	mov    0x8(%ebp),%eax
 8510594:	05 04 01 00 00       	add    $0x104,%eax
 8510599:	89 54 24 04          	mov    %edx,0x4(%esp)
 851059d:	89 04 24             	mov    %eax,(%esp)
 85105a0:	e8 29 66 00 00       	call   8516bce <_ZNSt6vectorIN12STItemScript10SEXPERTJOB7SUSABLEESaIS2_EEaSERKS4_>
 85105a5:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85105a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85105ab:	8b 90 3c 01 00 00    	mov    0x13c(%eax),%edx
 85105b1:	8b 80 38 01 00 00    	mov    0x138(%eax),%eax
 85105b7:	89 81 10 01 00 00    	mov    %eax,0x110(%ecx)
 85105bd:	89 91 14 01 00 00    	mov    %edx,0x114(%ecx)
 85105c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85105c6:	8b 90 48 01 00 00    	mov    0x148(%eax),%edx
 85105cc:	8b 45 08             	mov    0x8(%ebp),%eax
 85105cf:	89 90 18 01 00 00    	mov    %edx,0x118(%eax)
 85105d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85105d8:	8b 90 4c 01 00 00    	mov    0x14c(%eax),%edx
 85105de:	8b 45 08             	mov    0x8(%ebp),%eax
 85105e1:	89 90 1c 01 00 00    	mov    %edx,0x11c(%eax)
 85105e7:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85105ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 85105ed:	8b 90 44 01 00 00    	mov    0x144(%eax),%edx
 85105f3:	8b 80 40 01 00 00    	mov    0x140(%eax),%eax
 85105f9:	89 81 20 01 00 00    	mov    %eax,0x120(%ecx)
 85105ff:	89 91 24 01 00 00    	mov    %edx,0x124(%ecx)
 8510605:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510608:	8d 90 1c 01 00 00    	lea    0x11c(%eax),%edx
 851060e:	8b 45 08             	mov    0x8(%ebp),%eax
 8510611:	05 28 01 00 00       	add    $0x128,%eax
 8510616:	89 54 24 04          	mov    %edx,0x4(%esp)
 851061a:	89 04 24             	mov    %eax,(%esp)
 851061d:	e8 fa 67 00 00       	call   8516e1c <_ZNSt3setIN12STItemScript18ENUM_ITEM_CATEGORYESt4lessIS1_ESaIS1_EEaSERKS5_>
 8510622:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510625:	8b 90 04 06 00 00    	mov    0x604(%eax),%edx
 851062b:	8b 45 08             	mov    0x8(%ebp),%eax
 851062e:	89 90 cc 01 00 00    	mov    %edx,0x1cc(%eax)
 8510634:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510637:	d9 80 08 06 00 00    	flds   0x608(%eax)
 851063d:	d9 bd d6 fd ff ff    	fnstcw -0x22a(%ebp)
 8510643:	0f b7 85 d6 fd ff ff 	movzwl -0x22a(%ebp),%eax
 851064a:	b4 0c                	mov    $0xc,%ah
 851064c:	66 89 85 d4 fd ff ff 	mov    %ax,-0x22c(%ebp)
 8510653:	d9 ad d4 fd ff ff    	fldcw  -0x22c(%ebp)
 8510659:	db 9d d0 fd ff ff    	fistpl -0x230(%ebp)
 851065f:	d9 ad d6 fd ff ff    	fldcw  -0x22a(%ebp)
 8510665:	8b 95 d0 fd ff ff    	mov    -0x230(%ebp),%edx
 851066b:	8b 45 08             	mov    0x8(%ebp),%eax
 851066e:	89 90 d0 01 00 00    	mov    %edx,0x1d0(%eax)
 8510674:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510677:	8b 90 0c 06 00 00    	mov    0x60c(%eax),%edx
 851067d:	8b 45 08             	mov    0x8(%ebp),%eax
 8510680:	89 90 d4 01 00 00    	mov    %edx,0x1d4(%eax)
 8510686:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510689:	0f b6 80 80 08 00 00 	movzbl 0x880(%eax),%eax
 8510690:	89 c2                	mov    %eax,%edx
 8510692:	8b 45 08             	mov    0x8(%ebp),%eax
 8510695:	88 90 d8 01 00 00    	mov    %dl,0x1d8(%eax)
 851069b:	8b 45 0c             	mov    0xc(%ebp),%eax
 851069e:	8b 90 84 08 00 00    	mov    0x884(%eax),%edx
 85106a4:	8b 45 08             	mov    0x8(%ebp),%eax
 85106a7:	89 90 dc 01 00 00    	mov    %edx,0x1dc(%eax)
 85106ad:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85106b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85106b3:	8b 90 20 08 00 00    	mov    0x820(%eax),%edx
 85106b9:	8b 80 1c 08 00 00    	mov    0x81c(%eax),%eax
 85106bf:	89 81 e0 01 00 00    	mov    %eax,0x1e0(%ecx)
 85106c5:	89 91 e4 01 00 00    	mov    %edx,0x1e4(%ecx)
 85106cb:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85106ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 85106d1:	8b 90 28 08 00 00    	mov    0x828(%eax),%edx
 85106d7:	8b 80 24 08 00 00    	mov    0x824(%eax),%eax
 85106dd:	89 81 e8 01 00 00    	mov    %eax,0x1e8(%ecx)
 85106e3:	89 91 ec 01 00 00    	mov    %edx,0x1ec(%ecx)
 85106e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85106ec:	8d 90 24 04 00 00    	lea    0x424(%eax),%edx
 85106f2:	8b 45 08             	mov    0x8(%ebp),%eax
 85106f5:	05 f0 01 00 00       	add    $0x1f0,%eax
 85106fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 85106fe:	89 04 24             	mov    %eax,(%esp)
 8510701:	e8 b8 fe e6 ff       	call   83805be <_ZNSt6vectorI24STAvatarAbilityVariationSaIS0_EEaSERKS2_>
 8510706:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510709:	8b 80 90 08 00 00    	mov    0x890(%eax),%eax
 851070f:	83 f8 01             	cmp    $0x1,%eax
 8510712:	75 0c                	jne    8510720 <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x99c>
 8510714:	8b 45 08             	mov    0x8(%ebp),%eax
 8510717:	c6 80 fc 01 00 00 00 	movb   $0x0,0x1fc(%eax)
 851071e:	eb 0a                	jmp    851072a <_ZN10CEquipItem8set_itemER17STEquipmentScript+0x9a6>
 8510720:	8b 45 08             	mov    0x8(%ebp),%eax
 8510723:	c6 80 fc 01 00 00 01 	movb   $0x1,0x1fc(%eax)
 851072a:	8b 45 0c             	mov    0xc(%ebp),%eax
 851072d:	8d 90 fc 06 00 00    	lea    0x6fc(%eax),%edx
 8510733:	8b 45 08             	mov    0x8(%ebp),%eax
 8510736:	05 00 02 00 00       	add    $0x200,%eax
 851073b:	89 54 24 04          	mov    %edx,0x4(%esp)
 851073f:	89 04 24             	mov    %eax,(%esp)
 8510742:	e8 a9 7b 00 00       	call   85182f0 <_ZNSt3mapIN15ItemUpgradeType1TESt4pairIiiESt4lessIS1_ESaIS2_IKS1_S3_EEEaSERKS9_>
 8510747:	8b 45 0c             	mov    0xc(%ebp),%eax
 851074a:	0f b6 90 8a 08 00 00 	movzbl 0x88a(%eax),%edx
 8510751:	8b 45 08             	mov    0x8(%ebp),%eax
 8510754:	88 90 18 02 00 00    	mov    %dl,0x218(%eax)
 851075a:	8b 45 0c             	mov    0xc(%ebp),%eax
 851075d:	0f b6 90 8b 08 00 00 	movzbl 0x88b(%eax),%edx
 8510764:	8b 45 08             	mov    0x8(%ebp),%eax
 8510767:	88 90 19 02 00 00    	mov    %dl,0x219(%eax)
 851076d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510770:	0f b6 90 9c 06 00 00 	movzbl 0x69c(%eax),%edx
 8510777:	8b 45 08             	mov    0x8(%ebp),%eax
 851077a:	88 90 1a 02 00 00    	mov    %dl,0x21a(%eax)
 8510780:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510783:	8b 90 e8 01 00 00    	mov    0x1e8(%eax),%edx
 8510789:	8b 45 08             	mov    0x8(%ebp),%eax
 851078c:	89 90 1c 02 00 00    	mov    %edx,0x21c(%eax)
 8510792:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510795:	8b 90 ec 01 00 00    	mov    0x1ec(%eax),%edx
 851079b:	8b 45 08             	mov    0x8(%ebp),%eax
 851079e:	89 90 20 02 00 00    	mov    %edx,0x220(%eax)
 85107a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85107a7:	8b 90 a0 05 00 00    	mov    0x5a0(%eax),%edx
 85107ad:	8b 45 08             	mov    0x8(%ebp),%eax
 85107b0:	89 90 24 02 00 00    	mov    %edx,0x224(%eax)
 85107b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85107b9:	8b 90 a4 05 00 00    	mov    0x5a4(%eax),%edx
 85107bf:	8b 45 08             	mov    0x8(%ebp),%eax
 85107c2:	89 90 28 02 00 00    	mov    %edx,0x228(%eax)
 85107c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85107cb:	8b 90 c8 05 00 00    	mov    0x5c8(%eax),%edx
 85107d1:	8b 45 08             	mov    0x8(%ebp),%eax
 85107d4:	89 90 2c 02 00 00    	mov    %edx,0x22c(%eax)
 85107da:	8b 45 0c             	mov    0xc(%ebp),%eax
 85107dd:	8b 90 cc 05 00 00    	mov    0x5cc(%eax),%edx
 85107e3:	8b 45 08             	mov    0x8(%ebp),%eax
 85107e6:	89 90 30 02 00 00    	mov    %edx,0x230(%eax)
 85107ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 85107ef:	0f b6 90 d8 00 00 00 	movzbl 0xd8(%eax),%edx
 85107f6:	8b 45 08             	mov    0x8(%ebp),%eax
 85107f9:	88 90 44 01 00 00    	mov    %dl,0x144(%eax)
 85107ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8510802:	c7 80 40 01 00 00 00 	movl   $0x0,0x140(%eax)
 8510809:	00 00 00 
 851080c:	81 c4 4c 02 00 00    	add    $0x24c,%esp
 8510812:	5b                   	pop    %ebx
 8510813:	5e                   	pop    %esi
 8510814:	5f                   	pop    %edi
 8510815:	5d                   	pop    %ebp
 8510816:	c3                   	ret
 8510817:	90                   	nop

```

```c
// CEquipItem::set_item @ 0x850fd84

/* CEquipItem::set_item(STEquipmentScript&) */

void __thiscall CEquipItem::set_item(CEquipItem *this,STEquipmentScript *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  char local_224 [500];
  cMyTrace local_30 [16];
  int local_20;
  
  bVar9 = 0;
  *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x10);
  this[0x60] = *(CEquipItem *)(param_1 + 0xfc);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x2c);
  if (param_1[0x30] != (STEquipmentScript)0x0) {
    uVar2 = G_CDataManager();
    CDataManager::set_AuctionRegFreeCeraItem(uVar2);
  }
  this[0xf8] = *(CEquipItem *)(param_1 + 0x31);
  pcVar3 = local_224;
  for (iVar8 = 0x7d; iVar8 != 0; iVar8 = iVar8 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + ((uint)bVar9 * -2 + 1) * 4;
  }
  pcVar3 = (char *)std::string::c_str((string *)(param_1 + 0xac));
  strcpy(local_224,pcVar3);
  pcVar3 = (char *)std::string::c_str((string *)(param_1 + 0xac));
  cVar1 = CodePage::script2Database(pcVar3,local_224);
  if (cVar1 != '\x01') {
    uVar4 = std::string::c_str((string *)(param_1 + 0xac));
    uVar5 = CodePage::database();
    uVar6 = CodePage::script();
    cMyTrace::cMyTrace(local_30,"void CEquipItem::set_item(STEquipmentScript&)",0x553,5);
    cMyTrace::operator()
              (local_30,"Error!!! %s->%s [%s][%s][%d]",uVar6,uVar5,uVar4,
               "void CEquipItem::set_item(STEquipmentScript&)",0x553);
  }
  std::string::operator=((string *)(this + 0x2c),local_224);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x88c);
  for (local_20 = 0; local_20 < 0xb; local_20 = local_20 + 1) {
    this[local_20 + 0x3c] = *(CEquipItem *)(param_1 + local_20 + 0x38);
  }
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 0x234) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(this + 0x170) = *(undefined4 *)(param_1 + 0x1bc);
  this[0x54] = (CEquipItem)0x0;
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(this + 0x158) = *(undefined4 *)(param_1 + 0x750);
  *(undefined4 *)(this + 0x15c) = *(undefined4 *)(param_1 + 0x6bc);
  *(undefined4 *)(this + 0x168) = *(undefined4 *)(param_1 + 0x738);
  if (*(int *)(param_1 + 0x1b4) == 0x16) {
    iVar8 = *(int *)(param_1 + 0x1b8);
    if (iVar8 == 1) {
      *(undefined4 *)(this + 0x164) = *(undefined4 *)(param_1 + 0x764);
    }
    else if (iVar8 == 2) {
      RandomItemTable::Set((vector *)(this + 0x148));
    }
    else if (iVar8 == 0) {
      iVar8 = *(int *)(this + 0x15c);
      iVar7 = user_creature::GetInstanceCreatureScriptMgr();
      user_creature::CCreatureScriptMgr::RegisterCreatureIdAndItemId(iVar7,iVar8);
    }
  }
  *(undefined4 *)(this + 0x160) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0xf8);
  this[0x16c] = *(CEquipItem *)(param_1 + 0x7ac);
  std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::operator=
            ((vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *)(this + 0x174),
             (vector *)(param_1 + 0x6c0));
  std::vector<unsigned_short,std::allocator<unsigned_short>>::operator=
            ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x180),
             (vector *)(param_1 + 0x6cc));
  *(undefined4 *)(this + 0x18c) = *(undefined4 *)(param_1 + 0x6d8);
  *(undefined4 *)(this + 400) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x100);
  this[0x78] = *(CEquipItem *)(param_1 + 0x104);
  this[0x79] = *(CEquipItem *)(param_1 + 0x7bc);
  std::string::operator=((string *)(this + 0xb0),(string *)(param_1 + 0x6c));
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0xcc);
  this[0x84] = *(CEquipItem *)(param_1 + 0x6f4);
  this[0x85] = *(CEquipItem *)(param_1 + 0x6f5);
  this[0x86] = *(CEquipItem *)(param_1 + 0x6f6);
  this[0x87] = *(CEquipItem *)(param_1 + 0xd0);
  this[0x88] = *(CEquipItem *)(param_1 + 0xda);
  this[0x89] = *(CEquipItem *)(param_1 + 0xd9);
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0x6f8);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0x105);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0x109);
  this[0xbc] = *(CEquipItem *)(param_1 + 0x10d);
  STSpecialMonsterDrop::clear((STSpecialMonsterDrop *)(param_1 + 0x105));
  this[0x194] = *(CEquipItem *)(param_1 + 0x10e);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x198),
             (vector *)(param_1 + 0x7d8));
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x1a4),
             (vector *)(param_1 + 0x7e4));
  std::vector<STEnchantSystemData,std::allocator<STEnchantSystemData>>::operator=
            ((vector<STEnchantSystemData,std::allocator<STEnchantSystemData>> *)(this + 0x1b0),
             (vector *)(param_1 + 0x7cc));
  *(undefined4 *)(this + 0x1bc) = 0;
  cVar1 = (**(code **)(*(int *)this + 0x10))(this);
  if (cVar1 == '\0') {
    iVar8 = (**(code **)(*(int *)this + 0xc))(this);
    if (iVar8 == 0x16) {
      if (*(int *)(param_1 + 0x10) == 2) {
        *(undefined4 *)(this + 0x1bc) = 10;
      }
    }
    else if (*(int *)(param_1 + 0x10) == 2) {
      if (*(int *)(param_1 + 0xc4) == 5) {
        *(undefined4 *)(this + 0x1bc) = 2;
      }
      else if (*(int *)(param_1 + 0xc4) == 0x1e) {
        *(undefined4 *)(this + 0x1bc) = 1;
      }
      else {
        *(undefined4 *)(this + 0x1bc) = 9;
      }
    }
    else if (*(int *)(param_1 + 0x10) == 3) {
      *(undefined4 *)(this + 0x1bc) = 3;
    }
    else if (*(int *)(param_1 + 0x10) == 5) {
      *(undefined4 *)(this + 0x1bc) = 4;
    }
    else if (*(int *)(param_1 + 0x10) == 4) {
      *(undefined4 *)(this + 0x1bc) = 5;
    }
    else if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined4 *)(this + 0x1bc) = 7;
    }
    else if (*(int *)(param_1 + 0x10) == 1) {
      *(undefined4 *)(this + 0x1bc) = 8;
    }
  }
  else {
    if ((*(int *)(this + 8) == 3) && (*(int *)(param_1 + 0x798) == 3)) {
      *(undefined4 *)(this + 0x1bc) = 6;
    }
    iVar8 = std::vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>>::size
                      ((vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>> *)
                       (param_1 + 0x424));
    setAvatarOptionSize(this,iVar8);
  }
  this[0xbd] = *(CEquipItem *)(param_1 + 0x10f);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xc0),
             (vector *)(param_1 + 0x110));
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0x810);
  *(undefined4 *)(this + 0x1c0) = *(undefined4 *)(param_1 + 0x17c);
  if (param_1[0x814] != (STEquipmentScript)0x2) {
    ExtreamDungeon::CCompound_ExtreamDun_Item::ForceResultItemRule_Setting
              (GlobalData::s_pCompoundBindCube,*(int *)(this + 4),
               param_1[0x814] != (STEquipmentScript)0x0,*(int *)(param_1 + 0x818));
  }
  std::set<int,std::less<int>,std::allocator<int>>::operator=
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0xd4),(set *)(param_1 + 0xdc));
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x238) = *(undefined4 *)(param_1 + 0x6e0);
  this[0x1c8] = *(CEquipItem *)(param_1 + 0x888);
  this[0x1c9] = *(CEquipItem *)(param_1 + 0x889);
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(this + 0x100) = *(undefined4 *)(param_1 + 0x154);
  std::vector<STItemScript::SEXPERTJOB::SUSABLE,std::allocator<STItemScript::SEXPERTJOB::SUSABLE>>::
  clear((vector<STItemScript::SEXPERTJOB::SUSABLE,std::allocator<STItemScript::SEXPERTJOB::SUSABLE>>
         *)(this + 0x104));
  std::vector<STItemScript::SEXPERTJOB::SUSABLE,std::allocator<STItemScript::SEXPERTJOB::SUSABLE>>::
  operator=((vector<STItemScript::SEXPERTJOB::SUSABLE,std::allocator<STItemScript::SEXPERTJOB::SUSABLE>>
             *)(this + 0x104),(vector *)(param_1 + 0x158));
  uVar4 = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(this + 0x110) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(this + 0x114) = uVar4;
  *(undefined4 *)(this + 0x118) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(this + 0x11c) = *(undefined4 *)(param_1 + 0x14c);
  uVar4 = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(this + 0x120) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(this + 0x124) = uVar4;
  std::
  set<STItemScript::ENUM_ITEM_CATEGORY,std::less<STItemScript::ENUM_ITEM_CATEGORY>,std::allocator<STItemScript::ENUM_ITEM_CATEGORY>>
  ::operator=((set<STItemScript::ENUM_ITEM_CATEGORY,std::less<STItemScript::ENUM_ITEM_CATEGORY>,std::allocator<STItemScript::ENUM_ITEM_CATEGORY>>
               *)(this + 0x128),(set *)(param_1 + 0x11c));
  *(undefined4 *)(this + 0x1cc) = *(undefined4 *)(param_1 + 0x604);
  *(int *)(this + 0x1d0) = (int)ROUND(*(float *)(param_1 + 0x608));
  *(undefined4 *)(this + 0x1d4) = *(undefined4 *)(param_1 + 0x60c);
  this[0x1d8] = *(CEquipItem *)(param_1 + 0x880);
  *(undefined4 *)(this + 0x1dc) = *(undefined4 *)(param_1 + 0x884);
  uVar4 = *(undefined4 *)(param_1 + 0x820);
  *(undefined4 *)(this + 0x1e0) = *(undefined4 *)(param_1 + 0x81c);
  *(undefined4 *)(this + 0x1e4) = uVar4;
  uVar4 = *(undefined4 *)(param_1 + 0x828);
  *(undefined4 *)(this + 0x1e8) = *(undefined4 *)(param_1 + 0x824);
  *(undefined4 *)(this + 0x1ec) = uVar4;
  std::vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>>::operator=
            ((vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>> *)
             (this + 0x1f0),(vector *)(param_1 + 0x424));
  if (*(int *)(param_1 + 0x890) == 1) {
    this[0x1fc] = (CEquipItem)0x0;
  }
  else {
    this[0x1fc] = (CEquipItem)0x1;
  }
  std::
  map<ItemUpgradeType::T,std::pair<int,int>,std::less<ItemUpgradeType::T>,std::allocator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>>
  ::operator=((map<ItemUpgradeType::T,std::pair<int,int>,std::less<ItemUpgradeType::T>,std::allocator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>>
               *)(this + 0x200),(map *)(param_1 + 0x6fc));
  this[0x218] = *(CEquipItem *)(param_1 + 0x88a);
  this[0x219] = *(CEquipItem *)(param_1 + 0x88b);
  this[0x21a] = *(CEquipItem *)(param_1 + 0x69c);
  *(undefined4 *)(this + 0x21c) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(this + 0x220) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(this + 0x224) = *(undefined4 *)(param_1 + 0x5a0);
  *(undefined4 *)(this + 0x228) = *(undefined4 *)(param_1 + 0x5a4);
  *(undefined4 *)(this + 0x22c) = *(undefined4 *)(param_1 + 0x5c8);
  *(undefined4 *)(this + 0x230) = *(undefined4 *)(param_1 + 0x5cc);
  this[0x144] = *(CEquipItem *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0x140) = 0;
  return;
}

```

---

## verify

```asm
// === 08510818 CEquipItem::verify  [0x08510818-0x85108c5] ===
 8510818:	55                   	push   %ebp
 8510819:	89 e5                	mov    %esp,%ebp
 851081b:	83 ec 18             	sub    $0x18,%esp
 851081e:	8b 45 08             	mov    0x8(%ebp),%eax
 8510821:	8b 40 6c             	mov    0x6c(%eax),%eax
 8510824:	85 c0                	test   %eax,%eax
 8510826:	75 0e                	jne    8510836 <_ZN10CEquipItem6verifyEv+0x1e>
 8510828:	8b 45 08             	mov    0x8(%ebp),%eax
 851082b:	8b 40 70             	mov    0x70(%eax),%eax
 851082e:	85 c0                	test   %eax,%eax
 8510830:	0f 84 89 00 00 00    	je     85108bf <_ZN10CEquipItem6verifyEv+0xa7>
 8510836:	8b 45 08             	mov    0x8(%ebp),%eax
 8510839:	8b 00                	mov    (%eax),%eax
 851083b:	83 c0 0c             	add    $0xc,%eax
 851083e:	8b 10                	mov    (%eax),%edx
 8510840:	8b 45 08             	mov    0x8(%ebp),%eax
 8510843:	89 04 24             	mov    %eax,(%esp)
 8510846:	ff d2                	call   *%edx
 8510848:	85 c0                	test   %eax,%eax
 851084a:	78 17                	js     8510863 <_ZN10CEquipItem6verifyEv+0x4b>
 851084c:	8b 45 08             	mov    0x8(%ebp),%eax
 851084f:	8b 00                	mov    (%eax),%eax
 8510851:	83 c0 0c             	add    $0xc,%eax
 8510854:	8b 10                	mov    (%eax),%edx
 8510856:	8b 45 08             	mov    0x8(%ebp),%eax
 8510859:	89 04 24             	mov    %eax,(%esp)
 851085c:	ff d2                	call   *%edx
 851085e:	83 f8 09             	cmp    $0x9,%eax
 8510861:	7e 4c                	jle    85108af <_ZN10CEquipItem6verifyEv+0x97>
 8510863:	8b 45 08             	mov    0x8(%ebp),%eax
 8510866:	8b 00                	mov    (%eax),%eax
 8510868:	83 c0 0c             	add    $0xc,%eax
 851086b:	8b 10                	mov    (%eax),%edx
 851086d:	8b 45 08             	mov    0x8(%ebp),%eax
 8510870:	89 04 24             	mov    %eax,(%esp)
 8510873:	ff d2                	call   *%edx
 8510875:	83 f8 0b             	cmp    $0xb,%eax
 8510878:	74 35                	je     85108af <_ZN10CEquipItem6verifyEv+0x97>
 851087a:	8b 45 08             	mov    0x8(%ebp),%eax
 851087d:	8b 00                	mov    (%eax),%eax
 851087f:	83 c0 0c             	add    $0xc,%eax
 8510882:	8b 10                	mov    (%eax),%edx
 8510884:	8b 45 08             	mov    0x8(%ebp),%eax
 8510887:	89 04 24             	mov    %eax,(%esp)
 851088a:	ff d2                	call   *%edx
 851088c:	83 f8 16             	cmp    $0x16,%eax
 851088f:	74 1e                	je     85108af <_ZN10CEquipItem6verifyEv+0x97>
 8510891:	8b 45 08             	mov    0x8(%ebp),%eax
 8510894:	8b 00                	mov    (%eax),%eax
 8510896:	83 c0 0c             	add    $0xc,%eax
 8510899:	8b 10                	mov    (%eax),%edx
 851089b:	8b 45 08             	mov    0x8(%ebp),%eax
 851089e:	89 04 24             	mov    %eax,(%esp)
 85108a1:	ff d2                	call   *%edx
 85108a3:	83 f8 0a             	cmp    $0xa,%eax
 85108a6:	74 07                	je     85108af <_ZN10CEquipItem6verifyEv+0x97>
 85108a8:	b8 01 00 00 00       	mov    $0x1,%eax
 85108ad:	eb 05                	jmp    85108b4 <_ZN10CEquipItem6verifyEv+0x9c>
 85108af:	b8 00 00 00 00       	mov    $0x0,%eax
 85108b4:	84 c0                	test   %al,%al
 85108b6:	74 07                	je     85108bf <_ZN10CEquipItem6verifyEv+0xa7>
 85108b8:	b8 00 00 00 00       	mov    $0x0,%eax
 85108bd:	eb 05                	jmp    85108c4 <_ZN10CEquipItem6verifyEv+0xac>
 85108bf:	b8 01 00 00 00       	mov    $0x1,%eax
 85108c4:	c9                   	leave
 85108c5:	c3                   	ret

```

```c
// CEquipItem::verify @ 0x8510818

/* CEquipItem::verify() */

undefined4 __thiscall CEquipItem::verify(CEquipItem *this)

{
  bool bVar1;
  int iVar2;
  
  if ((*(int *)(this + 0x6c) != 0) || (*(int *)(this + 0x70) != 0)) {
    iVar2 = (**(code **)(*(int *)this + 0xc))(this);
    if (((iVar2 < 0) || (iVar2 = (**(code **)(*(int *)this + 0xc))(this), 9 < iVar2)) &&
       (((iVar2 = (**(code **)(*(int *)this + 0xc))(this), iVar2 != 0xb &&
         (iVar2 = (**(code **)(*(int *)this + 0xc))(this), iVar2 != 0x16)) &&
        (iVar2 = (**(code **)(*(int *)this + 0xc))(this), iVar2 != 10)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 0;
    }
  }
  return 1;
}

```

