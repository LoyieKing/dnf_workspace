# Dispatcher_BuyCeraShopLimitItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## _checkBuyCondition

```asm
// === 0821f7cc Dispatcher_BuyCeraShopLimitItem::_checkBuyCondition  [0x0821f7cc-0x821f9b9] ===
 821f7cc:	55                   	push   %ebp
 821f7cd:	89 e5                	mov    %esp,%ebp
 821f7cf:	53                   	push   %ebx
 821f7d0:	83 ec 14             	sub    $0x14,%esp
 821f7d3:	8b 45 10             	mov    0x10(%ebp),%eax
 821f7d6:	89 04 24             	mov    %eax,(%esp)
 821f7d9:	e8 3e d3 00 00       	call   822cb1c <_ZNK17CItemLimitEdition16getCondCharacJobEv>
 821f7de:	83 f8 0a             	cmp    $0xa,%eax
 821f7e1:	0f 9e c0             	setle  %al
 821f7e4:	84 c0                	test   %al,%al
 821f7e6:	74 2b                	je     821f813 <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x47>
 821f7e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 821f7eb:	89 04 24             	mov    %eax,(%esp)
 821f7ee:	e8 2d e7 ed ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 821f7f3:	89 c3                	mov    %eax,%ebx
 821f7f5:	8b 45 10             	mov    0x10(%ebp),%eax
 821f7f8:	89 04 24             	mov    %eax,(%esp)
 821f7fb:	e8 1c d3 00 00       	call   822cb1c <_ZNK17CItemLimitEdition16getCondCharacJobEv>
 821f800:	39 c3                	cmp    %eax,%ebx
 821f802:	0f 95 c0             	setne  %al
 821f805:	84 c0                	test   %al,%al
 821f807:	74 0a                	je     821f813 <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x47>
 821f809:	b8 07 00 00 00       	mov    $0x7,%eax
 821f80e:	e9 a1 01 00 00       	jmp    821f9b4 <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x1e8>
 821f813:	8b 45 10             	mov    0x10(%ebp),%eax
 821f816:	89 04 24             	mov    %eax,(%esp)
 821f819:	e8 0a d3 00 00       	call   822cb28 <_ZNK17CItemLimitEdition23getCondCharacLevelBeginEv>
 821f81e:	66 85 c0             	test   %ax,%ax
 821f821:	74 24                	je     821f847 <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x7b>
 821f823:	8b 45 10             	mov    0x10(%ebp),%eax
 821f826:	89 04 24             	mov    %eax,(%esp)
 821f829:	e8 fa d2 00 00       	call   822cb28 <_ZNK17CItemLimitEdition23getCondCharacLevelBeginEv>
 821f82e:	0f b7 d8             	movzwl %ax,%ebx
 821f831:	8b 45 0c             	mov    0xc(%ebp),%eax
 821f834:	89 04 24             	mov    %eax,(%esp)
 821f837:	e8 7c aa eb ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 821f83c:	39 c3                	cmp    %eax,%ebx
 821f83e:	7e 07                	jle    821f847 <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x7b>
 821f840:	b8 01 00 00 00       	mov    $0x1,%eax
 821f845:	eb 05                	jmp    821f84c <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x80>
 821f847:	b8 00 00 00 00       	mov    $0x0,%eax
 821f84c:	84 c0                	test   %al,%al
 821f84e:	74 0a                	je     821f85a <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x8e>
 821f850:	b8 07 00 00 00       	mov    $0x7,%eax
 821f855:	e9 5a 01 00 00       	jmp    821f9b4 <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x1e8>
 821f85a:	8b 45 10             	mov    0x10(%ebp),%eax
 821f85d:	89 04 24             	mov    %eax,(%esp)
 821f860:	e8 cf d2 00 00       	call   822cb34 <_ZNK17CItemLimitEdition21getCondCharacLevelEndEv>
 821f865:	66 85 c0             	test   %ax,%ax
 821f868:	74 24                	je     821f88e <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0xc2>
 821f86a:	8b 45 10             	mov    0x10(%ebp),%eax
 821f86d:	89 04 24             	mov    %eax,(%esp)
 821f870:	e8 bf d2 00 00       	call   822cb34 <_ZNK17CItemLimitEdition21getCondCharacLevelEndEv>
 821f875:	0f b7 d8             	movzwl %ax,%ebx
 821f878:	8b 45 0c             	mov    0xc(%ebp),%eax
 821f87b:	89 04 24             	mov    %eax,(%esp)
 821f87e:	e8 35 aa eb ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 821f883:	39 c3                	cmp    %eax,%ebx
 821f885:	7d 07                	jge    821f88e <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0xc2>
 821f887:	b8 01 00 00 00       	mov    $0x1,%eax
 821f88c:	eb 05                	jmp    821f893 <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0xc7>
 821f88e:	b8 00 00 00 00       	mov    $0x0,%eax
 821f893:	84 c0                	test   %al,%al
 821f895:	74 0a                	je     821f8a1 <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0xd5>
 821f897:	b8 07 00 00 00       	mov    $0x7,%eax
 821f89c:	e9 13 01 00 00       	jmp    821f9b4 <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x1e8>
 821f8a1:	8b 45 10             	mov    0x10(%ebp),%eax
 821f8a4:	89 04 24             	mov    %eax,(%esp)
 821f8a7:	e8 94 d2 00 00       	call   822cb40 <_ZNK17CItemLimitEdition28getCondCharacCreateTimeBeginEv>
 821f8ac:	85 c0                	test   %eax,%eax
 821f8ae:	74 23                	je     821f8d3 <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x107>
 821f8b0:	8b 45 10             	mov    0x10(%ebp),%eax
 821f8b3:	89 04 24             	mov    %eax,(%esp)
 821f8b6:	e8 85 d2 00 00       	call   822cb40 <_ZNK17CItemLimitEdition28getCondCharacCreateTimeBeginEv>
 821f8bb:	89 c3                	mov    %eax,%ebx
 821f8bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 821f8c0:	89 04 24             	mov    %eax,(%esp)
 821f8c3:	e8 3a f9 00 00       	call   822f202 <_ZNK15CUserCharacInfo22getCurCharacCreateTimeEv>
 821f8c8:	39 c3                	cmp    %eax,%ebx
 821f8ca:	7e 07                	jle    821f8d3 <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x107>
 821f8cc:	b8 01 00 00 00       	mov    $0x1,%eax
 821f8d1:	eb 05                	jmp    821f8d8 <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x10c>
 821f8d3:	b8 00 00 00 00       	mov    $0x0,%eax
 821f8d8:	84 c0                	test   %al,%al
 821f8da:	74 0a                	je     821f8e6 <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x11a>
 821f8dc:	b8 07 00 00 00       	mov    $0x7,%eax
 821f8e1:	e9 ce 00 00 00       	jmp    821f9b4 <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x1e8>
 821f8e6:	8b 45 10             	mov    0x10(%ebp),%eax
 821f8e9:	89 04 24             	mov    %eax,(%esp)
 821f8ec:	e8 5b d2 00 00       	call   822cb4c <_ZNK17CItemLimitEdition26getCondCharacCreateTimeEndEv>
 821f8f1:	85 c0                	test   %eax,%eax
 821f8f3:	74 23                	je     821f918 <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x14c>
 821f8f5:	8b 45 10             	mov    0x10(%ebp),%eax
 821f8f8:	89 04 24             	mov    %eax,(%esp)
 821f8fb:	e8 4c d2 00 00       	call   822cb4c <_ZNK17CItemLimitEdition26getCondCharacCreateTimeEndEv>
 821f900:	89 c3                	mov    %eax,%ebx
 821f902:	8b 45 0c             	mov    0xc(%ebp),%eax
 821f905:	89 04 24             	mov    %eax,(%esp)
 821f908:	e8 f5 f8 00 00       	call   822f202 <_ZNK15CUserCharacInfo22getCurCharacCreateTimeEv>
 821f90d:	39 c3                	cmp    %eax,%ebx
 821f90f:	7d 07                	jge    821f918 <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x14c>
 821f911:	b8 01 00 00 00       	mov    $0x1,%eax
 821f916:	eb 05                	jmp    821f91d <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x151>
 821f918:	b8 00 00 00 00       	mov    $0x0,%eax
 821f91d:	84 c0                	test   %al,%al
 821f91f:	74 0a                	je     821f92b <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x15f>
 821f921:	b8 07 00 00 00       	mov    $0x7,%eax
 821f926:	e9 89 00 00 00       	jmp    821f9b4 <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x1e8>
 821f92b:	8b 45 10             	mov    0x10(%ebp),%eax
 821f92e:	89 04 24             	mov    %eax,(%esp)
 821f931:	e8 22 d2 00 00       	call   822cb58 <_ZNK17CItemLimitEdition25getCondAccCreateTimeBeginEv>
 821f936:	85 c0                	test   %eax,%eax
 821f938:	74 23                	je     821f95d <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x191>
 821f93a:	8b 45 10             	mov    0x10(%ebp),%eax
 821f93d:	89 04 24             	mov    %eax,(%esp)
 821f940:	e8 13 d2 00 00       	call   822cb58 <_ZNK17CItemLimitEdition25getCondAccCreateTimeBeginEv>
 821f945:	89 c3                	mov    %eax,%ebx
 821f947:	8b 45 0c             	mov    0xc(%ebp),%eax
 821f94a:	89 04 24             	mov    %eax,(%esp)
 821f94d:	e8 94 04 01 00       	call   822fde6 <_ZNK5CUser10getRegTimeEv>
 821f952:	39 c3                	cmp    %eax,%ebx
 821f954:	7e 07                	jle    821f95d <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x191>
 821f956:	b8 01 00 00 00       	mov    $0x1,%eax
 821f95b:	eb 05                	jmp    821f962 <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x196>
 821f95d:	b8 00 00 00 00       	mov    $0x0,%eax
 821f962:	84 c0                	test   %al,%al
 821f964:	74 07                	je     821f96d <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x1a1>
 821f966:	b8 07 00 00 00       	mov    $0x7,%eax
 821f96b:	eb 47                	jmp    821f9b4 <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x1e8>
 821f96d:	8b 45 10             	mov    0x10(%ebp),%eax
 821f970:	89 04 24             	mov    %eax,(%esp)
 821f973:	e8 ec d1 00 00       	call   822cb64 <_ZNK17CItemLimitEdition23getCondAccCreateTimeEndEv>
 821f978:	85 c0                	test   %eax,%eax
 821f97a:	74 23                	je     821f99f <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x1d3>
 821f97c:	8b 45 10             	mov    0x10(%ebp),%eax
 821f97f:	89 04 24             	mov    %eax,(%esp)
 821f982:	e8 dd d1 00 00       	call   822cb64 <_ZNK17CItemLimitEdition23getCondAccCreateTimeEndEv>
 821f987:	89 c3                	mov    %eax,%ebx
 821f989:	8b 45 0c             	mov    0xc(%ebp),%eax
 821f98c:	89 04 24             	mov    %eax,(%esp)
 821f98f:	e8 52 04 01 00       	call   822fde6 <_ZNK5CUser10getRegTimeEv>
 821f994:	39 c3                	cmp    %eax,%ebx
 821f996:	7d 07                	jge    821f99f <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x1d3>
 821f998:	b8 01 00 00 00       	mov    $0x1,%eax
 821f99d:	eb 05                	jmp    821f9a4 <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x1d8>
 821f99f:	b8 00 00 00 00       	mov    $0x0,%eax
 821f9a4:	84 c0                	test   %al,%al
 821f9a6:	74 07                	je     821f9af <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x1e3>
 821f9a8:	b8 07 00 00 00       	mov    $0x7,%eax
 821f9ad:	eb 05                	jmp    821f9b4 <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition+0x1e8>
 821f9af:	b8 00 00 00 00       	mov    $0x0,%eax
 821f9b4:	83 c4 14             	add    $0x14,%esp
 821f9b7:	5b                   	pop    %ebx
 821f9b8:	5d                   	pop    %ebp
 821f9b9:	c3                   	ret

```

```c
// Dispatcher_BuyCeraShopLimitItem::_checkBuyCondition @ 0x821f7cc

/* Dispatcher_BuyCeraShopLimitItem::_checkBuyCondition(CUser*, CItemLimitEdition const*) const */

undefined4 __thiscall
Dispatcher_BuyCeraShopLimitItem::_checkBuyCondition
          (Dispatcher_BuyCeraShopLimitItem *this,CUser *param_1,CItemLimitEdition *param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar3 = CItemLimitEdition::getCondCharacJob(param_2);
  if (iVar3 < 0xb) {
    iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    iVar4 = CItemLimitEdition::getCondCharacJob(param_2);
    if (iVar3 != iVar4) {
      return 7;
    }
  }
  sVar2 = CItemLimitEdition::getCondCharacLevelBegin(param_2);
  if (sVar2 == 0) {
LAB_0821f847:
    bVar1 = false;
  }
  else {
    uVar5 = CItemLimitEdition::getCondCharacLevelBegin(param_2);
    iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if ((int)(uVar5 & 0xffff) <= iVar3) goto LAB_0821f847;
    bVar1 = true;
  }
  if (bVar1) {
    return 7;
  }
  sVar2 = CItemLimitEdition::getCondCharacLevelEnd(param_2);
  if (sVar2 == 0) {
LAB_0821f88e:
    bVar1 = false;
  }
  else {
    uVar5 = CItemLimitEdition::getCondCharacLevelEnd(param_2);
    iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if (iVar3 <= (int)(uVar5 & 0xffff)) goto LAB_0821f88e;
    bVar1 = true;
  }
  if (bVar1) {
    return 7;
  }
  iVar3 = CItemLimitEdition::getCondCharacCreateTimeBegin(param_2);
  if (iVar3 == 0) {
LAB_0821f8d3:
    bVar1 = false;
  }
  else {
    iVar3 = CItemLimitEdition::getCondCharacCreateTimeBegin(param_2);
    iVar4 = CUserCharacInfo::getCurCharacCreateTime((CUserCharacInfo *)param_1);
    if (iVar3 <= iVar4) goto LAB_0821f8d3;
    bVar1 = true;
  }
  if (bVar1) {
    return 7;
  }
  iVar3 = CItemLimitEdition::getCondCharacCreateTimeEnd(param_2);
  if (iVar3 == 0) {
LAB_0821f918:
    bVar1 = false;
  }
  else {
    iVar3 = CItemLimitEdition::getCondCharacCreateTimeEnd(param_2);
    iVar4 = CUserCharacInfo::getCurCharacCreateTime((CUserCharacInfo *)param_1);
    if (iVar4 <= iVar3) goto LAB_0821f918;
    bVar1 = true;
  }
  if (bVar1) {
    return 7;
  }
  iVar3 = CItemLimitEdition::getCondAccCreateTimeBegin(param_2);
  if (iVar3 == 0) {
LAB_0821f95d:
    bVar1 = false;
  }
  else {
    iVar3 = CItemLimitEdition::getCondAccCreateTimeBegin(param_2);
    iVar4 = CUser::getRegTime(param_1);
    if (iVar3 <= iVar4) goto LAB_0821f95d;
    bVar1 = true;
  }
  if (bVar1) {
    return 7;
  }
  iVar3 = CItemLimitEdition::getCondAccCreateTimeEnd(param_2);
  if (iVar3 != 0) {
    iVar3 = CItemLimitEdition::getCondAccCreateTimeEnd(param_2);
    iVar4 = CUser::getRegTime(param_1);
    if (iVar3 < iVar4) {
      bVar1 = true;
      goto LAB_0821f9a4;
    }
  }
  bVar1 = false;
LAB_0821f9a4:
  if (bVar1) {
    uVar6 = 7;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

```

---

## _checkUserState

```asm
// === 0821f72a Dispatcher_BuyCeraShopLimitItem::_checkUserState  [0x0821f72a-0x821f7cb] ===
 821f72a:	55                   	push   %ebp
 821f72b:	89 e5                	mov    %esp,%ebp
 821f72d:	53                   	push   %ebx
 821f72e:	83 ec 24             	sub    $0x24,%esp
 821f731:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 821f736:	c7 44 24 08 39 00 00 	movl   $0x39,0x8(%esp)
 821f73d:	00 
 821f73e:	8b 55 0c             	mov    0xc(%ebp),%edx
 821f741:	89 54 24 04          	mov    %edx,0x4(%esp)
 821f745:	89 04 24             	mov    %eax,(%esp)
 821f748:	e8 b5 92 06 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 821f74d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 821f750:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 821f754:	74 05                	je     821f75b <_ZNK31Dispatcher_BuyCeraShopLimitItem15_checkUserStateEP5CUser+0x31>
 821f756:	8b 45 f4             	mov    -0xc(%ebp),%eax
 821f759:	eb 6a                	jmp    821f7c5 <_ZNK31Dispatcher_BuyCeraShopLimitItem15_checkUserStateEP5CUser+0x9b>
 821f75b:	e8 88 54 3a 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 821f760:	8b 55 0c             	mov    0xc(%ebp),%edx
 821f763:	89 54 24 04          	mov    %edx,0x4(%esp)
 821f767:	89 04 24             	mov    %eax,(%esp)
 821f76a:	e8 ef b5 3a 00       	call   85cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>
 821f76f:	84 c0                	test   %al,%al
 821f771:	74 07                	je     821f77a <_ZNK31Dispatcher_BuyCeraShopLimitItem15_checkUserStateEP5CUser+0x50>
 821f773:	b8 13 00 00 00       	mov    $0x13,%eax
 821f778:	eb 4b                	jmp    821f7c5 <_ZNK31Dispatcher_BuyCeraShopLimitItem15_checkUserStateEP5CUser+0x9b>
 821f77a:	8b 45 0c             	mov    0xc(%ebp),%eax
 821f77d:	89 04 24             	mov    %eax,(%esp)
 821f780:	e8 79 ab eb ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 821f785:	84 c0                	test   %al,%al
 821f787:	74 07                	je     821f790 <_ZNK31Dispatcher_BuyCeraShopLimitItem15_checkUserStateEP5CUser+0x66>
 821f789:	b8 13 00 00 00       	mov    $0x13,%eax
 821f78e:	eb 35                	jmp    821f7c5 <_ZNK31Dispatcher_BuyCeraShopLimitItem15_checkUserStateEP5CUser+0x9b>
 821f790:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 821f797:	e8 02 c5 ea ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 821f79c:	89 c3                	mov    %eax,%ebx
 821f79e:	8b 45 0c             	mov    0xc(%ebp),%eax
 821f7a1:	89 04 24             	mov    %eax,(%esp)
 821f7a4:	e8 61 02 01 00       	call   822fa0a <_ZNK15CUserCharacInfo30getLastItemLimitEditionBuyTimeEv>
 821f7a9:	89 da                	mov    %ebx,%edx
 821f7ab:	29 c2                	sub    %eax,%edx
 821f7ad:	89 d0                	mov    %edx,%eax
 821f7af:	83 f8 1d             	cmp    $0x1d,%eax
 821f7b2:	0f 9e c0             	setle  %al
 821f7b5:	84 c0                	test   %al,%al
 821f7b7:	74 07                	je     821f7c0 <_ZNK31Dispatcher_BuyCeraShopLimitItem15_checkUserStateEP5CUser+0x96>
 821f7b9:	b8 09 00 00 00       	mov    $0x9,%eax
 821f7be:	eb 05                	jmp    821f7c5 <_ZNK31Dispatcher_BuyCeraShopLimitItem15_checkUserStateEP5CUser+0x9b>
 821f7c0:	b8 00 00 00 00       	mov    $0x0,%eax
 821f7c5:	83 c4 24             	add    $0x24,%esp
 821f7c8:	5b                   	pop    %ebx
 821f7c9:	5d                   	pop    %ebp
 821f7ca:	c3                   	ret
 821f7cb:	90                   	nop

```

```c
// Dispatcher_BuyCeraShopLimitItem::_checkUserState @ 0x821f72a

/* Dispatcher_BuyCeraShopLimitItem::_checkUserState(CUser*) const */

int __thiscall
Dispatcher_BuyCeraShopLimitItem::_checkUserState
          (Dispatcher_BuyCeraShopLimitItem *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  CPrivateStoreMgr *this_00;
  int iVar3;
  
  iVar2 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x39);
  if (iVar2 == 0) {
    this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    cVar1 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_00,param_1);
    if (cVar1 == '\0') {
      cVar1 = CUser::CheckInTrade(param_1);
      if (cVar1 == '\0') {
        iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        iVar3 = CUserCharacInfo::getLastItemLimitEditionBuyTime((CUserCharacInfo *)param_1);
        if (iVar2 - iVar3 < 0x1e) {
          iVar2 = 9;
        }
        else {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 0x13;
      }
    }
    else {
      iVar2 = 0x13;
    }
  }
  return iVar2;
}

```

---

## dispatch_sig

```asm
// === 0821f9ba Dispatcher_BuyCeraShopLimitItem::dispatch_sig  [0x0821f9ba-0x8220483] ===
 821f9ba:	55                   	push   %ebp
 821f9bb:	89 e5                	mov    %esp,%ebp
 821f9bd:	57                   	push   %edi
 821f9be:	56                   	push   %esi
 821f9bf:	53                   	push   %ebx
 821f9c0:	81 ec 6c 02 00 00    	sub    $0x26c,%esp
 821f9c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 821f9c9:	89 04 24             	mov    %eax,(%esp)
 821f9cc:	e8 bb a9 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 821f9d1:	83 f8 02             	cmp    $0x2,%eax
 821f9d4:	0f 9e c0             	setle  %al
 821f9d7:	84 c0                	test   %al,%al
 821f9d9:	74 2b                	je     821fa06 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x4c>
 821f9db:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821f9e2:	00 
 821f9e3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821f9ea:	00 
 821f9eb:	c7 44 24 04 80 cf bc 	movl   $0x8bccf80,0x4(%esp)
 821f9f2:	08 
 821f9f3:	c7 04 24 87 d8 00 00 	movl   $0xd887,(%esp)
 821f9fa:	e8 d8 0e 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821f9ff:	89 c3                	mov    %eax,%ebx
 821fa01:	e9 70 0a 00 00       	jmp    8220476 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0xabc>
 821fa06:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
 821fa0c:	89 04 24             	mov    %eax,(%esp)
 821fa0f:	e8 50 c6 00 00       	call   822c064 <_ZN39Packet_Item_Limit_Edition_Buyable_QueryC1Ev>
 821fa14:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
 821fa1a:	83 c0 0e             	add    $0xe,%eax
 821fa1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 821fa21:	8b 45 10             	mov    0x10(%ebp),%eax
 821fa24:	89 04 24             	mov    %eax,(%esp)
 821fa27:	e8 14 d8 36 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 821fa2c:	83 f0 01             	xor    $0x1,%eax
 821fa2f:	84 c0                	test   %al,%al
 821fa31:	74 2b                	je     821fa5e <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0xa4>
 821fa33:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821fa3a:	00 
 821fa3b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821fa42:	00 
 821fa43:	c7 44 24 04 80 cf bc 	movl   $0x8bccf80,0x4(%esp)
 821fa4a:	08 
 821fa4b:	c7 04 24 8c d8 00 00 	movl   $0xd88c,(%esp)
 821fa52:	e8 80 0e 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821fa57:	89 c3                	mov    %eax,%ebx
 821fa59:	e9 18 0a 00 00       	jmp    8220476 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0xabc>
 821fa5e:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
 821fa64:	83 c0 12             	add    $0x12,%eax
 821fa67:	89 44 24 04          	mov    %eax,0x4(%esp)
 821fa6b:	8b 45 10             	mov    0x10(%ebp),%eax
 821fa6e:	89 04 24             	mov    %eax,(%esp)
 821fa71:	e8 fa d4 36 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 821fa76:	83 f0 01             	xor    $0x1,%eax
 821fa79:	84 c0                	test   %al,%al
 821fa7b:	74 2b                	je     821faa8 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0xee>
 821fa7d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821fa84:	00 
 821fa85:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821fa8c:	00 
 821fa8d:	c7 44 24 04 80 cf bc 	movl   $0x8bccf80,0x4(%esp)
 821fa94:	08 
 821fa95:	c7 04 24 8d d8 00 00 	movl   $0xd88d,(%esp)
 821fa9c:	e8 36 0e 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821faa1:	89 c3                	mov    %eax,%ebx
 821faa3:	e9 ce 09 00 00       	jmp    8220476 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0xabc>
 821faa8:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
 821faae:	83 c0 13             	add    $0x13,%eax
 821fab1:	89 44 24 04          	mov    %eax,0x4(%esp)
 821fab5:	8b 45 10             	mov    0x10(%ebp),%eax
 821fab8:	89 04 24             	mov    %eax,(%esp)
 821fabb:	e8 b0 d4 36 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 821fac0:	83 f0 01             	xor    $0x1,%eax
 821fac3:	84 c0                	test   %al,%al
 821fac5:	75 0b                	jne    821fad2 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x118>
 821fac7:	0f b6 85 db fd ff ff 	movzbl -0x225(%ebp),%eax
 821face:	3c 23                	cmp    $0x23,%al
 821fad0:	76 07                	jbe    821fad9 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x11f>
 821fad2:	b8 01 00 00 00       	mov    $0x1,%eax
 821fad7:	eb 05                	jmp    821fade <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x124>
 821fad9:	b8 00 00 00 00       	mov    $0x0,%eax
 821fade:	84 c0                	test   %al,%al
 821fae0:	74 2b                	je     821fb0d <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x153>
 821fae2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821fae9:	00 
 821faea:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821faf1:	00 
 821faf2:	c7 44 24 04 80 cf bc 	movl   $0x8bccf80,0x4(%esp)
 821faf9:	08 
 821fafa:	c7 04 24 90 d8 00 00 	movl   $0xd890,(%esp)
 821fb01:	e8 d1 0d 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821fb06:	89 c3                	mov    %eax,%ebx
 821fb08:	e9 69 09 00 00       	jmp    8220476 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0xabc>
 821fb0d:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 821fb14:	e9 b8 00 00 00       	jmp    821fbd1 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x217>
 821fb19:	8b 55 c0             	mov    -0x40(%ebp),%edx
 821fb1c:	8d 8d c8 fd ff ff    	lea    -0x238(%ebp),%ecx
 821fb22:	89 d0                	mov    %edx,%eax
 821fb24:	c1 e0 02             	shl    $0x2,%eax
 821fb27:	01 d0                	add    %edx,%eax
 821fb29:	83 c0 10             	add    $0x10,%eax
 821fb2c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 821fb2f:	83 c0 04             	add    $0x4,%eax
 821fb32:	89 44 24 04          	mov    %eax,0x4(%esp)
 821fb36:	8b 45 10             	mov    0x10(%ebp),%eax
 821fb39:	89 04 24             	mov    %eax,(%esp)
 821fb3c:	e8 a7 bb 00 00       	call   822b6e8 <_ZN9PacketBuf12get_item_idxERm>
 821fb41:	83 f0 01             	xor    $0x1,%eax
 821fb44:	84 c0                	test   %al,%al
 821fb46:	74 2b                	je     821fb73 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x1b9>
 821fb48:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821fb4f:	00 
 821fb50:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821fb57:	00 
 821fb58:	c7 44 24 04 80 cf bc 	movl   $0x8bccf80,0x4(%esp)
 821fb5f:	08 
 821fb60:	c7 04 24 94 d8 00 00 	movl   $0xd894,(%esp)
 821fb67:	e8 6b 0d 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821fb6c:	89 c3                	mov    %eax,%ebx
 821fb6e:	e9 03 09 00 00       	jmp    8220476 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0xabc>
 821fb73:	8b 55 c0             	mov    -0x40(%ebp),%edx
 821fb76:	8d 8d c8 fd ff ff    	lea    -0x238(%ebp),%ecx
 821fb7c:	89 d0                	mov    %edx,%eax
 821fb7e:	c1 e0 02             	shl    $0x2,%eax
 821fb81:	01 d0                	add    %edx,%eax
 821fb83:	83 c0 10             	add    $0x10,%eax
 821fb86:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 821fb89:	83 c0 08             	add    $0x8,%eax
 821fb8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 821fb90:	8b 45 10             	mov    0x10(%ebp),%eax
 821fb93:	89 04 24             	mov    %eax,(%esp)
 821fb96:	e8 d5 d3 36 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 821fb9b:	83 f0 01             	xor    $0x1,%eax
 821fb9e:	84 c0                	test   %al,%al
 821fba0:	74 2b                	je     821fbcd <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x213>
 821fba2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821fba9:	00 
 821fbaa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821fbb1:	00 
 821fbb2:	c7 44 24 04 80 cf bc 	movl   $0x8bccf80,0x4(%esp)
 821fbb9:	08 
 821fbba:	c7 04 24 95 d8 00 00 	movl   $0xd895,(%esp)
 821fbc1:	e8 11 0d 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821fbc6:	89 c3                	mov    %eax,%ebx
 821fbc8:	e9 a9 08 00 00       	jmp    8220476 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0xabc>
 821fbcd:	83 45 c0 01          	addl   $0x1,-0x40(%ebp)
 821fbd1:	0f b6 85 db fd ff ff 	movzbl -0x225(%ebp),%eax
 821fbd8:	0f b6 c0             	movzbl %al,%eax
 821fbdb:	3b 45 c0             	cmp    -0x40(%ebp),%eax
 821fbde:	0f 9f c0             	setg   %al
 821fbe1:	84 c0                	test   %al,%al
 821fbe3:	0f 85 30 ff ff ff    	jne    821fb19 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x15f>
 821fbe9:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
 821fbef:	05 c3 00 00 00       	add    $0xc3,%eax
 821fbf4:	89 44 24 04          	mov    %eax,0x4(%esp)
 821fbf8:	8b 45 10             	mov    0x10(%ebp),%eax
 821fbfb:	89 04 24             	mov    %eax,(%esp)
 821fbfe:	e8 6d d3 36 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 821fc03:	83 f0 01             	xor    $0x1,%eax
 821fc06:	84 c0                	test   %al,%al
 821fc08:	75 0b                	jne    821fc15 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x25b>
 821fc0a:	0f b6 85 8b fe ff ff 	movzbl -0x175(%ebp),%eax
 821fc11:	3c 23                	cmp    $0x23,%al
 821fc13:	76 07                	jbe    821fc1c <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x262>
 821fc15:	b8 01 00 00 00       	mov    $0x1,%eax
 821fc1a:	eb 05                	jmp    821fc21 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x267>
 821fc1c:	b8 00 00 00 00       	mov    $0x0,%eax
 821fc21:	84 c0                	test   %al,%al
 821fc23:	74 2b                	je     821fc50 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x296>
 821fc25:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821fc2c:	00 
 821fc2d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821fc34:	00 
 821fc35:	c7 44 24 04 80 cf bc 	movl   $0x8bccf80,0x4(%esp)
 821fc3c:	08 
 821fc3d:	c7 04 24 9d d8 00 00 	movl   $0xd89d,(%esp)
 821fc44:	e8 8e 0c 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821fc49:	89 c3                	mov    %eax,%ebx
 821fc4b:	e9 26 08 00 00       	jmp    8220476 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0xabc>
 821fc50:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 821fc57:	e9 03 01 00 00       	jmp    821fd5f <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x3a5>
 821fc5c:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 821fc5f:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
 821fc65:	83 c2 18             	add    $0x18,%edx
 821fc68:	c1 e2 03             	shl    $0x3,%edx
 821fc6b:	01 d0                	add    %edx,%eax
 821fc6d:	83 c0 04             	add    $0x4,%eax
 821fc70:	89 44 24 04          	mov    %eax,0x4(%esp)
 821fc74:	8b 45 10             	mov    0x10(%ebp),%eax
 821fc77:	89 04 24             	mov    %eax,(%esp)
 821fc7a:	e8 69 ba 00 00       	call   822b6e8 <_ZN9PacketBuf12get_item_idxERm>
 821fc7f:	83 f0 01             	xor    $0x1,%eax
 821fc82:	84 c0                	test   %al,%al
 821fc84:	74 2b                	je     821fcb1 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x2f7>
 821fc86:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821fc8d:	00 
 821fc8e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821fc95:	00 
 821fc96:	c7 44 24 04 80 cf bc 	movl   $0x8bccf80,0x4(%esp)
 821fc9d:	08 
 821fc9e:	c7 04 24 a1 d8 00 00 	movl   $0xd8a1,(%esp)
 821fca5:	e8 2d 0c 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821fcaa:	89 c3                	mov    %eax,%ebx
 821fcac:	e9 c5 07 00 00       	jmp    8220476 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0xabc>
 821fcb1:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 821fcb4:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
 821fcba:	83 c2 18             	add    $0x18,%edx
 821fcbd:	c1 e2 03             	shl    $0x3,%edx
 821fcc0:	01 d0                	add    %edx,%eax
 821fcc2:	83 c0 08             	add    $0x8,%eax
 821fcc5:	89 44 24 04          	mov    %eax,0x4(%esp)
 821fcc9:	8b 45 10             	mov    0x10(%ebp),%eax
 821fccc:	89 04 24             	mov    %eax,(%esp)
 821fccf:	e8 dc d3 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821fcd4:	83 f0 01             	xor    $0x1,%eax
 821fcd7:	84 c0                	test   %al,%al
 821fcd9:	74 2b                	je     821fd06 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x34c>
 821fcdb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821fce2:	00 
 821fce3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821fcea:	00 
 821fceb:	c7 44 24 04 80 cf bc 	movl   $0x8bccf80,0x4(%esp)
 821fcf2:	08 
 821fcf3:	c7 04 24 a2 d8 00 00 	movl   $0xd8a2,(%esp)
 821fcfa:	e8 d8 0b 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821fcff:	89 c3                	mov    %eax,%ebx
 821fd01:	e9 70 07 00 00       	jmp    8220476 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0xabc>
 821fd06:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 821fd09:	8d 85 c8 fd ff ff    	lea    -0x238(%ebp),%eax
 821fd0f:	83 c2 18             	add    $0x18,%edx
 821fd12:	c1 e2 03             	shl    $0x3,%edx
 821fd15:	01 d0                	add    %edx,%eax
 821fd17:	83 c0 0a             	add    $0xa,%eax
 821fd1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 821fd1e:	8b 45 10             	mov    0x10(%ebp),%eax
 821fd21:	89 04 24             	mov    %eax,(%esp)
 821fd24:	e8 87 d3 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821fd29:	83 f0 01             	xor    $0x1,%eax
 821fd2c:	84 c0                	test   %al,%al
 821fd2e:	74 2b                	je     821fd5b <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x3a1>
 821fd30:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821fd37:	00 
 821fd38:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821fd3f:	00 
 821fd40:	c7 44 24 04 80 cf bc 	movl   $0x8bccf80,0x4(%esp)
 821fd47:	08 
 821fd48:	c7 04 24 a3 d8 00 00 	movl   $0xd8a3,(%esp)
 821fd4f:	e8 83 0b 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821fd54:	89 c3                	mov    %eax,%ebx
 821fd56:	e9 1b 07 00 00       	jmp    8220476 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0xabc>
 821fd5b:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 821fd5f:	0f b6 85 8b fe ff ff 	movzbl -0x175(%ebp),%eax
 821fd66:	0f b6 c0             	movzbl %al,%eax
 821fd69:	3b 45 c4             	cmp    -0x3c(%ebp),%eax
 821fd6c:	0f 9f c0             	setg   %al
 821fd6f:	84 c0                	test   %al,%al
 821fd71:	0f 85 e5 fe ff ff    	jne    821fc5c <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x2a2>
 821fd77:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 821fd7e:	e9 95 00 00 00       	jmp    821fe18 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x45e>
 821fd83:	8b 45 c8             	mov    -0x38(%ebp),%eax
 821fd86:	83 c0 01             	add    $0x1,%eax
 821fd89:	89 45 cc             	mov    %eax,-0x34(%ebp)
 821fd8c:	eb 6e                	jmp    821fdfc <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x442>
 821fd8e:	8b 45 c8             	mov    -0x38(%ebp),%eax
 821fd91:	83 c0 18             	add    $0x18,%eax
 821fd94:	8b 94 c5 cc fd ff ff 	mov    -0x234(%ebp,%eax,8),%edx
 821fd9b:	8b 45 cc             	mov    -0x34(%ebp),%eax
 821fd9e:	83 c0 18             	add    $0x18,%eax
 821fda1:	8b 84 c5 cc fd ff ff 	mov    -0x234(%ebp,%eax,8),%eax
 821fda8:	39 c2                	cmp    %eax,%edx
 821fdaa:	75 4c                	jne    821fdf8 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x43e>
 821fdac:	8b 45 c8             	mov    -0x38(%ebp),%eax
 821fdaf:	83 c0 18             	add    $0x18,%eax
 821fdb2:	0f b7 94 c5 d0 fd ff 	movzwl -0x230(%ebp,%eax,8),%edx
 821fdb9:	ff 
 821fdba:	8b 45 cc             	mov    -0x34(%ebp),%eax
 821fdbd:	83 c0 18             	add    $0x18,%eax
 821fdc0:	0f b7 84 c5 d0 fd ff 	movzwl -0x230(%ebp,%eax,8),%eax
 821fdc7:	ff 
 821fdc8:	66 39 c2             	cmp    %ax,%dx
 821fdcb:	75 2b                	jne    821fdf8 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x43e>
 821fdcd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821fdd4:	00 
 821fdd5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821fddc:	00 
 821fddd:	c7 44 24 04 80 cf bc 	movl   $0x8bccf80,0x4(%esp)
 821fde4:	08 
 821fde5:	c7 04 24 ac d8 00 00 	movl   $0xd8ac,(%esp)
 821fdec:	e8 e6 0a 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821fdf1:	89 c3                	mov    %eax,%ebx
 821fdf3:	e9 7e 06 00 00       	jmp    8220476 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0xabc>
 821fdf8:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 821fdfc:	0f b6 85 8b fe ff ff 	movzbl -0x175(%ebp),%eax
 821fe03:	0f b6 c0             	movzbl %al,%eax
 821fe06:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 821fe09:	0f 9f c0             	setg   %al
 821fe0c:	84 c0                	test   %al,%al
 821fe0e:	0f 85 7a ff ff ff    	jne    821fd8e <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x3d4>
 821fe14:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 821fe18:	0f b6 85 8b fe ff ff 	movzbl -0x175(%ebp),%eax
 821fe1f:	0f b6 c0             	movzbl %al,%eax
 821fe22:	3b 45 c8             	cmp    -0x38(%ebp),%eax
 821fe25:	0f 9f c0             	setg   %al
 821fe28:	84 c0                	test   %al,%al
 821fe2a:	0f 85 53 ff ff ff    	jne    821fd83 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x3c9>
 821fe30:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 821fe37:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 821fe3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 821fe41:	89 44 24 04          	mov    %eax,0x4(%esp)
 821fe45:	8b 45 08             	mov    0x8(%ebp),%eax
 821fe48:	89 04 24             	mov    %eax,(%esp)
 821fe4b:	e8 da f8 ff ff       	call   821f72a <_ZNK31Dispatcher_BuyCeraShopLimitItem15_checkUserStateEP5CUser>
 821fe50:	89 45 d0             	mov    %eax,-0x30(%ebp)
 821fe53:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 821fe57:	74 2b                	je     821fe84 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x4ca>
 821fe59:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 821fe60:	e8 9b 59 50 00       	call   8725800 <__cxa_allocate_exception>
 821fe65:	89 c2                	mov    %eax,%edx
 821fe67:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 821fe6a:	89 0a                	mov    %ecx,(%edx)
 821fe6c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821fe73:	00 
 821fe74:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 821fe7b:	08 
 821fe7c:	89 04 24             	mov    %eax,(%esp)
 821fe7f:	e8 cc 4d 50 00       	call   8724c50 <__cxa_throw>
 821fe84:	8b 9d d6 fd ff ff    	mov    -0x22a(%ebp),%ebx
 821fe8a:	e8 0c c3 ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 821fe8f:	89 04 24             	mov    %eax,(%esp)
 821fe92:	e8 0f a1 f5 ff       	call   8179fa6 <_ZN12CDataManager22getItemLimitEditionMgrEv>
 821fe97:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821fe9b:	89 04 24             	mov    %eax,(%esp)
 821fe9e:	e8 05 a2 f5 ff       	call   817a0a8 <_ZNK20CItemLimitEditionMgr11getItemInfoEj>
 821fea3:	89 45 b8             	mov    %eax,-0x48(%ebp)
 821fea6:	83 7d b8 00          	cmpl   $0x0,-0x48(%ebp)
 821feaa:	0f 94 c0             	sete   %al
 821fead:	84 c0                	test   %al,%al
 821feaf:	74 2c                	je     821fedd <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x523>
 821feb1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 821feb8:	e8 43 59 50 00       	call   8725800 <__cxa_allocate_exception>
 821febd:	89 c2                	mov    %eax,%edx
 821febf:	c7 02 16 00 00 00    	movl   $0x16,(%edx)
 821fec5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821fecc:	00 
 821fecd:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 821fed4:	08 
 821fed5:	89 04 24             	mov    %eax,(%esp)
 821fed8:	e8 73 4d 50 00       	call   8724c50 <__cxa_throw>
 821fedd:	8b 45 b8             	mov    -0x48(%ebp),%eax
 821fee0:	89 04 24             	mov    %eax,(%esp)
 821fee3:	e8 e0 cb 00 00       	call   822cac8 <_ZNK17CItemLimitEdition14isSellCompleteEv>
 821fee8:	84 c0                	test   %al,%al
 821feea:	74 2c                	je     821ff18 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x55e>
 821feec:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 821fef3:	e8 08 59 50 00       	call   8725800 <__cxa_allocate_exception>
 821fef8:	89 c2                	mov    %eax,%edx
 821fefa:	c7 02 5f 00 00 00    	movl   $0x5f,(%edx)
 821ff00:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821ff07:	00 
 821ff08:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 821ff0f:	08 
 821ff10:	89 04 24             	mov    %eax,(%esp)
 821ff13:	e8 38 4d 50 00       	call   8724c50 <__cxa_throw>
 821ff18:	8b 45 b8             	mov    -0x48(%ebp),%eax
 821ff1b:	89 04 24             	mov    %eax,(%esp)
 821ff1e:	e8 81 cb 00 00       	call   822caa4 <_ZNK17CItemLimitEdition14getSellEndTimeEv>
 821ff23:	89 c3                	mov    %eax,%ebx
 821ff25:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 821ff2c:	e8 6d bd ea ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 821ff31:	39 c3                	cmp    %eax,%ebx
 821ff33:	0f 9c c0             	setl   %al
 821ff36:	84 c0                	test   %al,%al
 821ff38:	74 2c                	je     821ff66 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x5ac>
 821ff3a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 821ff41:	e8 ba 58 50 00       	call   8725800 <__cxa_allocate_exception>
 821ff46:	89 c2                	mov    %eax,%edx
 821ff48:	c7 02 16 00 00 00    	movl   $0x16,(%edx)
 821ff4e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821ff55:	00 
 821ff56:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 821ff5d:	08 
 821ff5e:	89 04 24             	mov    %eax,(%esp)
 821ff61:	e8 ea 4c 50 00       	call   8724c50 <__cxa_throw>
 821ff66:	8b 45 b8             	mov    -0x48(%ebp),%eax
 821ff69:	89 04 24             	mov    %eax,(%esp)
 821ff6c:	e8 1f a1 f5 ff       	call   817a090 <_ZNK17CItemLimitEdition14getRelateditemEv>
 821ff71:	83 f8 01             	cmp    $0x1,%eax
 821ff74:	74 58                	je     821ffce <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x614>
 821ff76:	8b 45 b8             	mov    -0x48(%ebp),%eax
 821ff79:	89 04 24             	mov    %eax,(%esp)
 821ff7c:	e8 0f a1 f5 ff       	call   817a090 <_ZNK17CItemLimitEdition14getRelateditemEv>
 821ff81:	89 c3                	mov    %eax,%ebx
 821ff83:	e8 13 c2 ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 821ff88:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821ff8c:	89 04 24             	mov    %eax,(%esp)
 821ff8f:	e8 9e fa 13 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 821ff94:	89 45 bc             	mov    %eax,-0x44(%ebp)
 821ff97:	83 7d bc 00          	cmpl   $0x0,-0x44(%ebp)
 821ff9b:	0f 94 c0             	sete   %al
 821ff9e:	84 c0                	test   %al,%al
 821ffa0:	74 2d                	je     821ffcf <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x615>
 821ffa2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 821ffa9:	e8 52 58 50 00       	call   8725800 <__cxa_allocate_exception>
 821ffae:	89 c2                	mov    %eax,%edx
 821ffb0:	c7 02 16 00 00 00    	movl   $0x16,(%edx)
 821ffb6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821ffbd:	00 
 821ffbe:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 821ffc5:	08 
 821ffc6:	89 04 24             	mov    %eax,(%esp)
 821ffc9:	e8 82 4c 50 00       	call   8724c50 <__cxa_throw>
 821ffce:	90                   	nop
 821ffcf:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ffd2:	89 04 24             	mov    %eax,(%esp)
 821ffd5:	e8 a0 df ed ff       	call   80fdf7a <_ZN5CUser7GetCeraEv>
 821ffda:	89 c3                	mov    %eax,%ebx
 821ffdc:	8b 45 b8             	mov    -0x48(%ebp),%eax
 821ffdf:	89 04 24             	mov    %eax,(%esp)
 821ffe2:	e8 13 cb 00 00       	call   822cafa <_ZNK17CItemLimitEdition12getPriceCeraEv>
 821ffe7:	39 c3                	cmp    %eax,%ebx
 821ffe9:	0f 92 c0             	setb   %al
 821ffec:	84 c0                	test   %al,%al
 821ffee:	74 2c                	je     822001c <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x662>
 821fff0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 821fff7:	e8 04 58 50 00       	call   8725800 <__cxa_allocate_exception>
 821fffc:	89 c2                	mov    %eax,%edx
 821fffe:	c7 02 0b 00 00 00    	movl   $0xb,(%edx)
 8220004:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822000b:	00 
 822000c:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8220013:	08 
 8220014:	89 04 24             	mov    %eax,(%esp)
 8220017:	e8 34 4c 50 00       	call   8724c50 <__cxa_throw>
 822001c:	8b 45 0c             	mov    0xc(%ebp),%eax
 822001f:	89 04 24             	mov    %eax,(%esp)
 8220022:	e8 57 a2 eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8220027:	89 04 24             	mov    %eax,(%esp)
 822002a:	e8 a7 47 f1 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 822002f:	89 c3                	mov    %eax,%ebx
 8220031:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8220034:	89 04 24             	mov    %eax,(%esp)
 8220037:	e8 ca ca 00 00       	call   822cb06 <_ZNK17CItemLimitEdition12getPriceGoldEv>
 822003c:	39 c3                	cmp    %eax,%ebx
 822003e:	0f 9c c0             	setl   %al
 8220041:	84 c0                	test   %al,%al
 8220043:	74 2c                	je     8220071 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x6b7>
 8220045:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 822004c:	e8 af 57 50 00       	call   8725800 <__cxa_allocate_exception>
 8220051:	89 c2                	mov    %eax,%edx
 8220053:	c7 02 0a 00 00 00    	movl   $0xa,(%edx)
 8220059:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8220060:	00 
 8220061:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8220068:	08 
 8220069:	89 04 24             	mov    %eax,(%esp)
 822006c:	e8 df 4b 50 00       	call   8724c50 <__cxa_throw>
 8220071:	8b 45 0c             	mov    0xc(%ebp),%eax
 8220074:	89 04 24             	mov    %eax,(%esp)
 8220077:	e8 00 a1 f5 ff       	call   817a17c <_ZN15CUserCharacInfo11GetWinPointEv>
 822007c:	89 c3                	mov    %eax,%ebx
 822007e:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8220081:	89 04 24             	mov    %eax,(%esp)
 8220084:	e8 89 ca 00 00       	call   822cb12 <_ZNK17CItemLimitEdition16getPriceWinPointEv>
 8220089:	39 c3                	cmp    %eax,%ebx
 822008b:	0f 92 c0             	setb   %al
 822008e:	84 c0                	test   %al,%al
 8220090:	74 2c                	je     82200be <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x704>
 8220092:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8220099:	e8 62 57 50 00       	call   8725800 <__cxa_allocate_exception>
 822009e:	89 c2                	mov    %eax,%edx
 82200a0:	c7 02 0c 00 00 00    	movl   $0xc,(%edx)
 82200a6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82200ad:	00 
 82200ae:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82200b5:	08 
 82200b6:	89 04 24             	mov    %eax,(%esp)
 82200b9:	e8 92 4b 50 00       	call   8724c50 <__cxa_throw>
 82200be:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 82200c5:	8b 45 b8             	mov    -0x48(%ebp),%eax
 82200c8:	89 44 24 08          	mov    %eax,0x8(%esp)
 82200cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82200cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 82200d3:	8b 45 08             	mov    0x8(%ebp),%eax
 82200d6:	89 04 24             	mov    %eax,(%esp)
 82200d9:	e8 ee f6 ff ff       	call   821f7cc <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition>
 82200de:	89 45 d0             	mov    %eax,-0x30(%ebp)
 82200e1:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 82200e5:	0f 95 c0             	setne  %al
 82200e8:	84 c0                	test   %al,%al
 82200ea:	74 2b                	je     8220117 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x75d>
 82200ec:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82200f3:	e8 08 57 50 00       	call   8725800 <__cxa_allocate_exception>
 82200f8:	89 c2                	mov    %eax,%edx
 82200fa:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 82200fd:	89 0a                	mov    %ecx,(%edx)
 82200ff:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8220106:	00 
 8220107:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 822010e:	08 
 822010f:	89 04 24             	mov    %eax,(%esp)
 8220112:	e8 39 4b 50 00       	call   8724c50 <__cxa_throw>
 8220117:	8b 45 b8             	mov    -0x48(%ebp),%eax
 822011a:	89 04 24             	mov    %eax,(%esp)
 822011d:	e8 8e c9 00 00       	call   822cab0 <_ZNK17CItemLimitEdition19getAvatarTypeSelectEv>
 8220122:	66 98                	cbtw
 8220124:	66 89 45 d6          	mov    %ax,-0x2a(%ebp)
 8220128:	83 7d bc 00          	cmpl   $0x0,-0x44(%ebp)
 822012c:	0f 84 e3 00 00 00    	je     8220215 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x85b>
 8220132:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8220135:	8b 00                	mov    (%eax),%eax
 8220137:	83 c0 10             	add    $0x10,%eax
 822013a:	8b 10                	mov    (%eax),%edx
 822013c:	8b 45 bc             	mov    -0x44(%ebp),%eax
 822013f:	89 04 24             	mov    %eax,(%esp)
 8220142:	ff d2                	call   *%edx
 8220144:	84 c0                	test   %al,%al
 8220146:	0f 84 c9 00 00 00    	je     8220215 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x85b>
 822014c:	8b 45 bc             	mov    -0x44(%ebp),%eax
 822014f:	85 c0                	test   %eax,%eax
 8220151:	75 07                	jne    822015a <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x7a0>
 8220153:	b8 00 00 00 00       	mov    $0x0,%eax
 8220158:	eb 20                	jmp    822017a <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x7c0>
 822015a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8220161:	00 
 8220162:	c7 44 24 08 10 6f c9 	movl   $0x8c96f10,0x8(%esp)
 8220169:	08 
 822016a:	c7 44 24 04 74 6f c9 	movl   $0x8c96f74,0x4(%esp)
 8220171:	08 
 8220172:	89 04 24             	mov    %eax,(%esp)
 8220175:	e8 16 5c 50 00       	call   8725d90 <__dynamic_cast>
 822017a:	89 45 dc             	mov    %eax,-0x24(%ebp)
 822017d:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8220181:	0f 84 8e 00 00 00    	je     8220215 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x85b>
 8220187:	8b 45 b8             	mov    -0x48(%ebp),%eax
 822018a:	89 04 24             	mov    %eax,(%esp)
 822018d:	e8 1e c9 00 00       	call   822cab0 <_ZNK17CItemLimitEdition19getAvatarTypeSelectEv>
 8220192:	3c ff                	cmp    $0xff,%al
 8220194:	0f 94 c0             	sete   %al
 8220197:	84 c0                	test   %al,%al
 8220199:	74 7a                	je     8220215 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x85b>
 822019b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 822019e:	89 04 24             	mov    %eax,(%esp)
 82201a1:	e8 82 0d f3 ff       	call   8150f28 <_ZNK10CEquipItem19getAvatarTypeSelectEv>
 82201a6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 82201a9:	8d 45 a8             	lea    -0x58(%ebp),%eax
 82201ac:	8b 55 e0             	mov    -0x20(%ebp),%edx
 82201af:	89 54 24 04          	mov    %edx,0x4(%esp)
 82201b3:	89 04 24             	mov    %eax,(%esp)
 82201b6:	e8 3f 20 f3 ff       	call   81521fa <_ZNKSt6vectorI20stAvatarTypeSelect_tSaIS0_EE5beginEv>
 82201bb:	83 ec 04             	sub    $0x4,%esp
 82201be:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 82201c1:	8b 55 e0             	mov    -0x20(%ebp),%edx
 82201c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 82201c8:	89 04 24             	mov    %eax,(%esp)
 82201cb:	e8 56 20 f3 ff       	call   8152226 <_ZNKSt6vectorI20stAvatarTypeSelect_tSaIS0_EE3endEv>
 82201d0:	83 ec 04             	sub    $0x4,%esp
 82201d3:	eb 27                	jmp    82201fc <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x842>
 82201d5:	66 83 45 d6 01       	addw   $0x1,-0x2a(%ebp)
 82201da:	8d 45 a8             	lea    -0x58(%ebp),%eax
 82201dd:	89 04 24             	mov    %eax,(%esp)
 82201e0:	e8 af 20 f3 ff       	call   8152294 <_ZNK9__gnu_cxx17__normal_iteratorIPK20stAvatarTypeSelect_tSt6vectorIS1_SaIS1_EEEptEv>
 82201e5:	8b 40 10             	mov    0x10(%eax),%eax
 82201e8:	85 c0                	test   %eax,%eax
 82201ea:	0f 9f c0             	setg   %al
 82201ed:	84 c0                	test   %al,%al
 82201ef:	75 23                	jne    8220214 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x85a>
 82201f1:	8d 45 a8             	lea    -0x58(%ebp),%eax
 82201f4:	89 04 24             	mov    %eax,(%esp)
 82201f7:	e8 82 20 f3 ff       	call   815227e <_ZN9__gnu_cxx17__normal_iteratorIPK20stAvatarTypeSelect_tSt6vectorIS1_SaIS1_EEEppEv>
 82201fc:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 82201ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8220203:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8220206:	89 04 24             	mov    %eax,(%esp)
 8220209:	e8 44 20 f3 ff       	call   8152252 <_ZN9__gnu_cxxneIPK20stAvatarTypeSelect_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 822020e:	84 c0                	test   %al,%al
 8220210:	75 c3                	jne    82201d5 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x81b>
 8220212:	eb 01                	jmp    8220215 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x85b>
 8220214:	90                   	nop
 8220215:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 8220219:	0f b7 c0             	movzwl %ax,%eax
 822021c:	89 85 c4 fd ff ff    	mov    %eax,-0x23c(%ebp)
 8220222:	0f b6 85 da fd ff ff 	movzbl -0x226(%ebp),%eax
 8220229:	0f b6 f8             	movzbl %al,%edi
 822022c:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 8220230:	0f b7 f0             	movzwl %ax,%esi
 8220233:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8220236:	89 04 24             	mov    %eax,(%esp)
 8220239:	e8 5a c8 00 00       	call   822ca98 <_ZNK17CItemLimitEdition17getRelatedItemCntEv>
 822023e:	89 c3                	mov    %eax,%ebx
 8220240:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8220243:	89 04 24             	mov    %eax,(%esp)
 8220246:	e8 45 9e f5 ff       	call   817a090 <_ZNK17CItemLimitEdition14getRelateditemEv>
 822024b:	89 85 b4 fd ff ff    	mov    %eax,-0x24c(%ebp)
 8220251:	8b 8d d6 fd ff ff    	mov    -0x22a(%ebp),%ecx
 8220257:	8b 15 44 f7 41 09    	mov    0x941f744,%edx
 822025d:	8b 85 c4 fd ff ff    	mov    -0x23c(%ebp),%eax
 8220263:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8220267:	89 7c 24 18          	mov    %edi,0x18(%esp)
 822026b:	89 74 24 14          	mov    %esi,0x14(%esp)
 822026f:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8220273:	8b 85 b4 fd ff ff    	mov    -0x24c(%ebp),%eax
 8220279:	89 44 24 0c          	mov    %eax,0xc(%esp)
 822027d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8220281:	8b 45 0c             	mov    0xc(%ebp),%eax
 8220284:	89 44 24 04          	mov    %eax,0x4(%esp)
 8220288:	89 14 24             	mov    %edx,(%esp)
 822028b:	e8 9a 3c 10 00       	call   8323f2a <_ZN8WongWork9CCeraShop20checkBuyingConditionEP5CUserjmjtht>
 8220290:	83 f0 01             	xor    $0x1,%eax
 8220293:	84 c0                	test   %al,%al
 8220295:	74 2c                	je     82202c3 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x909>
 8220297:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 822029e:	e8 5d 55 50 00       	call   8725800 <__cxa_allocate_exception>
 82202a3:	89 c2                	mov    %eax,%edx
 82202a5:	c7 02 07 00 00 00    	movl   $0x7,(%edx)
 82202ab:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82202b2:	00 
 82202b3:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82202ba:	08 
 82202bb:	89 04 24             	mov    %eax,(%esp)
 82202be:	e8 8d 49 50 00       	call   8724c50 <__cxa_throw>
 82202c3:	c6 45 b7 00          	movb   $0x0,-0x49(%ebp)
 82202c7:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 82202ce:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 82202d5:	8b 45 b8             	mov    -0x48(%ebp),%eax
 82202d8:	89 04 24             	mov    %eax,(%esp)
 82202db:	e8 bc 9d f5 ff       	call   817a09c <_ZNK17CItemLimitEdition14getFeaturedIdxEv>
 82202e0:	89 45 d8             	mov    %eax,-0x28(%ebp)
 82202e3:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 82202e7:	75 3e                	jne    8220327 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x96d>
 82202e9:	8b 45 b8             	mov    -0x48(%ebp),%eax
 82202ec:	89 04 24             	mov    %eax,(%esp)
 82202ef:	e8 9c 9d f5 ff       	call   817a090 <_ZNK17CItemLimitEdition14getRelateditemEv>
 82202f4:	89 c2                	mov    %eax,%edx
 82202f6:	a1 44 f7 41 09       	mov    0x941f744,%eax
 82202fb:	8d 4d b7             	lea    -0x49(%ebp),%ecx
 82202fe:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8220302:	8d 4d ac             	lea    -0x54(%ebp),%ecx
 8220305:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8220309:	8d 4d b0             	lea    -0x50(%ebp),%ecx
 822030c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8220310:	89 54 24 04          	mov    %edx,0x4(%esp)
 8220314:	89 04 24             	mov    %eax,(%esp)
 8220317:	e8 02 47 10 00       	call   8324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>
 822031c:	84 c0                	test   %al,%al
 822031e:	74 07                	je     8220327 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x96d>
 8220320:	b8 01 00 00 00       	mov    $0x1,%eax
 8220325:	eb 05                	jmp    822032c <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x972>
 8220327:	b8 00 00 00 00       	mov    $0x0,%eax
 822032c:	84 c0                	test   %al,%al
 822032e:	74 24                	je     8220354 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x99a>
 8220330:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8220333:	89 04 24             	mov    %eax,(%esp)
 8220336:	e8 55 9d f5 ff       	call   817a090 <_ZNK17CItemLimitEdition14getRelateditemEv>
 822033b:	89 c3                	mov    %eax,%ebx
 822033d:	e8 59 be ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 8220342:	8b 40 0c             	mov    0xc(%eax),%eax
 8220345:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8220349:	89 04 24             	mov    %eax,(%esp)
 822034c:	e8 bb 9d f5 ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 8220351:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8220354:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8220358:	74 54                	je     82203ae <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x9f4>
 822035a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 822035d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8220361:	8b 45 0c             	mov    0xc(%ebp),%eax
 8220364:	89 04 24             	mov    %eax,(%esp)
 8220367:	e8 0c d5 42 00       	call   864d878 <_ZN5CUser17IsRestrictedGoodsEi>
 822036c:	84 c0                	test   %al,%al
 822036e:	74 2c                	je     822039c <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0x9e2>
 8220370:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8220377:	e8 84 54 50 00       	call   8725800 <__cxa_allocate_exception>
 822037c:	89 c2                	mov    %eax,%edx
 822037e:	c7 02 12 00 00 00    	movl   $0x12,(%edx)
 8220384:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822038b:	00 
 822038c:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8220393:	08 
 8220394:	89 04 24             	mov    %eax,(%esp)
 8220397:	e8 b4 48 50 00       	call   8724c50 <__cxa_throw>
 822039c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 822039f:	89 44 24 04          	mov    %eax,0x4(%esp)
 82203a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 82203a6:	89 04 24             	mov    %eax,(%esp)
 82203a9:	e8 a0 d4 42 00       	call   864d84e <_ZN5CUser18SetRestrictedGoodsEi>
 82203ae:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 82203b5:	e8 e4 b8 ea ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 82203ba:	8b 55 0c             	mov    0xc(%ebp),%edx
 82203bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82203c1:	89 14 24             	mov    %edx,(%esp)
 82203c4:	e8 23 f6 00 00       	call   822f9ec <_ZN15CUserCharacInfo33updateLastItemLimitEditionBuyTimeEl>
 82203c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82203cc:	89 04 24             	mov    %eax,(%esp)
 82203cf:	e8 c2 88 ea ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 82203d4:	89 85 d2 fd ff ff    	mov    %eax,-0x22e(%ebp)
 82203da:	0f b7 85 ca fd ff ff 	movzwl -0x236(%ebp),%eax
 82203e1:	0f b7 f0             	movzwl %ax,%esi
 82203e4:	8d 9d c8 fd ff ff    	lea    -0x238(%ebp),%ebx
 82203ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 82203ed:	89 04 24             	mov    %eax,(%esp)
 82203f0:	e8 9b b8 ea ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 82203f5:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 82203fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 82203ff:	89 14 24             	mov    %edx,(%esp)
 8220402:	e8 83 1c ef ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8220407:	89 74 24 08          	mov    %esi,0x8(%esp)
 822040b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 822040f:	89 04 24             	mov    %eax,(%esp)
 8220412:	e8 2d 0a 25 00       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 8220417:	bb 00 00 00 00       	mov    $0x0,%ebx
 822041c:	eb 58                	jmp    8220476 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0xabc>
 822041e:	83 fa 01             	cmp    $0x1,%edx
 8220421:	74 08                	je     822042b <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0xa71>
 8220423:	89 04 24             	mov    %eax,(%esp)
 8220426:	e8 25 33 8c 00       	call   8ae3750 <_Unwind_Resume>
 822042b:	89 04 24             	mov    %eax,(%esp)
 822042e:	e8 ad 58 50 00       	call   8725ce0 <__cxa_begin_catch>
 8220433:	8b 00                	mov    (%eax),%eax
 8220435:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8220438:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 822043b:	0f b6 c0             	movzbl %al,%eax
 822043e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8220442:	c7 44 24 04 00 01 00 	movl   $0x100,0x4(%esp)
 8220449:	00 
 822044a:	8b 45 0c             	mov    0xc(%ebp),%eax
 822044d:	89 04 24             	mov    %eax,(%esp)
 8220450:	e8 ed ba 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8220455:	bb 00 00 00 00       	mov    $0x0,%ebx
 822045a:	e8 d1 57 50 00       	call   8725c30 <__cxa_end_catch>
 822045f:	eb 15                	jmp    8220476 <_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf+0xabc>
 8220461:	89 d3                	mov    %edx,%ebx
 8220463:	89 c6                	mov    %eax,%esi
 8220465:	e8 c6 57 50 00       	call   8725c30 <__cxa_end_catch>
 822046a:	89 f0                	mov    %esi,%eax
 822046c:	89 da                	mov    %ebx,%edx
 822046e:	89 04 24             	mov    %eax,(%esp)
 8220471:	e8 da 32 8c 00       	call   8ae3750 <_Unwind_Resume>
 8220476:	89 d8                	mov    %ebx,%eax
 8220478:	8d 65 f4             	lea    -0xc(%ebp),%esp
 822047b:	83 c4 00             	add    $0x0,%esp
 822047e:	5b                   	pop    %ebx
 822047f:	5e                   	pop    %esi
 8220480:	5f                   	pop    %edi
 8220481:	5d                   	pop    %ebp
 8220482:	c3                   	ret
 8220483:	90                   	nop

```

```c
// Dispatcher_BuyCeraShopLimitItem::dispatch_sig @ 0x821f9ba

/* Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_BuyCeraShopLimitItem::dispatch_sig
          (Dispatcher_BuyCeraShopLimitItem *this,CUser *param_1,PacketBuf *param_2)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  CDataManager *pCVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  CInventory *this_00;
  ulong uVar12;
  long lVar13;
  CMonitorServerProxy *this_01;
  Packet_Item_Limit_Edition_Buyable_Query local_23c [2];
  ushort local_23a;
  ulong uStack_238;
  ushort uStack_234;
  undefined4 local_232;
  uint local_22e;
  uchar local_22a;
  byte local_229;
  ulong uStack_228;
  uchar auStack_224 [171];
  byte local_179;
  ulong uStack_178;
  ushort auStack_174 [138];
  __normal_iterator local_60 [4];
  __normal_iterator<stAvatarTypeSelect_t_const*,std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>>
  local_5c [4];
  int local_58 [2];
  bool local_4d;
  CItemLimitEdition *local_4c;
  int *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  ushort local_2e;
  int local_2c;
  CEquipItem *local_28;
  undefined4 local_24;
  
  iVar4 = CUser::get_state(param_1);
  if (iVar4 < 3) {
    uVar5 = LineFunc(0xd887,
                     "virtual int Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  Packet_Item_Limit_Edition_Buyable_Query::Packet_Item_Limit_Edition_Buyable_Query(local_23c);
  cVar2 = PacketBuf::get_int(param_2,&local_22e);
  if (cVar2 != '\x01') {
    uVar5 = LineFunc(0xd88c,
                     "virtual int Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  cVar2 = PacketBuf::get_byte(param_2,&local_22a);
  if (cVar2 != '\x01') {
    uVar5 = LineFunc(0xd88d,
                     "virtual int Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  cVar2 = PacketBuf::get_byte(param_2,&local_229);
  if ((cVar2 == '\x01') && (local_229 < 0x24)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    uVar5 = LineFunc(0xd890,
                     "virtual int Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  for (local_44 = 0; local_44 < (int)(uint)local_229; local_44 = local_44 + 1) {
    cVar2 = PacketBuf::get_item_idx(param_2,(ulong *)((int)&uStack_228 + local_44 * 5));
    if (cVar2 != '\x01') {
      uVar5 = LineFunc(0xd894,
                       "virtual int Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar5;
    }
    cVar2 = PacketBuf::get_byte(param_2,auStack_224 + local_44 * 5);
    if (cVar2 != '\x01') {
      uVar5 = LineFunc(0xd895,
                       "virtual int Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar5;
    }
  }
  cVar2 = PacketBuf::get_byte(param_2,&local_179);
  if ((cVar2 == '\x01') && (local_179 < 0x24)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    uVar5 = LineFunc(0xd89d,
                     "virtual int Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  for (local_40 = 0; local_40 < (int)(uint)local_179; local_40 = local_40 + 1) {
    cVar2 = PacketBuf::get_item_idx(param_2,&uStack_238 + (local_40 + 0x18) * 2);
    if (cVar2 != '\x01') {
      uVar5 = LineFunc(0xd8a1,
                       "virtual int Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar5;
    }
    cVar2 = PacketBuf::get_short(param_2,&uStack_234 + (local_40 + 0x18) * 4);
    if (cVar2 != '\x01') {
      uVar5 = LineFunc(0xd8a2,
                       "virtual int Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar5;
    }
    cVar2 = PacketBuf::get_short(param_2,(ushort *)(&local_232 + (local_40 + 0x18) * 2));
    if (cVar2 != '\x01') {
      uVar5 = LineFunc(0xd8a3,
                       "virtual int Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar5;
    }
  }
  for (local_3c = 0; local_3c < (int)(uint)local_179; local_3c = local_3c + 1) {
    for (local_38 = local_3c + 1; local_38 < (int)(uint)local_179; local_38 = local_38 + 1) {
      if (((&uStack_238)[(local_3c + 0x18) * 2] == (&uStack_238)[(local_38 + 0x18) * 2]) &&
         ((&uStack_234)[(local_3c + 0x18) * 4] == (&uStack_234)[(local_38 + 0x18) * 4])) {
        uVar5 = LineFunc(0xd8ac,
                         "virtual int Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar5;
      }
    }
  }
  local_4c = (CItemLimitEdition *)0x0;
  local_48 = (int *)0x0;
                    /* try { // try from 0821fe4b to 082203ad has its CatchHandler @ 0822041e */
  local_34 = _checkUserState(this,param_1);
  uVar11 = local_22e;
  if (local_34 != 0) {
    piVar6 = (int *)__cxa_allocate_exception(4);
    *piVar6 = local_34;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar6,&ENUM_ERROR::typeinfo,0);
  }
  pCVar7 = (CDataManager *)G_CDataManager();
  uVar8 = CDataManager::getItemLimitEditionMgr(pCVar7);
  local_4c = (CItemLimitEdition *)CItemLimitEditionMgr::getItemInfo(uVar8);
  if (local_4c == (CItemLimitEdition *)0x0) {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4,uVar11);
    *puVar9 = 0x16;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CItemLimitEdition::isSellComplete(local_4c);
  if (cVar2 != '\0') {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4,uVar11);
    *puVar9 = 0x5f;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = CItemLimitEdition::getSellEndTime(local_4c);
  iVar10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if (iVar4 < iVar10) {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4,uVar11);
    *puVar9 = 0x16;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = CItemLimitEdition::getRelateditem(local_4c);
  if (iVar4 != 1) {
    iVar4 = CItemLimitEdition::getRelateditem(local_4c);
    pCVar7 = (CDataManager *)G_CDataManager();
    local_48 = (int *)CDataManager::find_item(pCVar7,iVar4);
    if (local_48 == (int *)0x0) {
      puVar9 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar9 = 0x16;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
    }
  }
  uVar11 = CUser::GetCera(param_1);
  uVar8 = CItemLimitEdition::getPriceCera(local_4c);
  if (uVar11 < uVar8) {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar9 = 0xb;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar4 = CInventory::get_money(this_00);
  iVar10 = CItemLimitEdition::getPriceGold(local_4c);
  if (iVar4 < iVar10) {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar9 = 10;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  uVar11 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
  uVar8 = CItemLimitEdition::getPriceWinPoint();
  if (uVar11 < uVar8) {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar9 = 0xc;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  local_34 = 0;
  local_34 = _checkBuyCondition(this,param_1,local_4c);
  if (local_34 != 0) {
    piVar6 = (int *)__cxa_allocate_exception(4);
    *piVar6 = local_34;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar6,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CItemLimitEdition::getAvatarTypeSelect(local_4c);
  local_2e = (ushort)cVar2;
  if ((local_48 != (int *)0x0) && (cVar2 = (**(code **)(*local_48 + 0x10))(local_48), cVar2 != '\0')
     ) {
    if (local_48 == (int *)0x0) {
      local_28 = (CEquipItem *)0x0;
    }
    else {
      local_28 = (CEquipItem *)__dynamic_cast(local_48,&CItem::typeinfo,&CEquipItem::typeinfo,0);
    }
    if ((local_28 != (CEquipItem *)0x0) &&
       (cVar2 = CItemLimitEdition::getAvatarTypeSelect(local_4c), cVar2 == -1)) {
      local_24 = CEquipItem::getAvatarTypeSelect(local_28);
      std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::begin();
      std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::end();
      while (bVar3 = __gnu_cxx::operator!=(local_5c,local_60), bVar3) {
        local_2e = local_2e + 1;
        iVar4 = __gnu_cxx::
                __normal_iterator<stAvatarTypeSelect_t_const*,std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>>
                ::operator->(local_5c);
        if (0 < *(int *)(iVar4 + 0x10)) break;
        __gnu_cxx::
        __normal_iterator<stAvatarTypeSelect_t_const*,std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>>
        ::operator++(local_5c);
      }
    }
  }
  uVar1 = local_2e;
  uVar11 = CItemLimitEdition::getRelatedItemCnt(local_4c);
  uVar12 = CItemLimitEdition::getRelateditem(local_4c);
  cVar2 = WongWork::CCeraShop::checkBuyingCondition
                    (GlobalData::s_pCeraShop,param_1,local_22e,uVar12,uVar11,uVar1,local_22a,uVar1);
  if (cVar2 != '\x01') {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar9 = 7;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  local_4d = false;
  local_58[1] = 0;
  local_58[0] = 0;
  local_2c = CItemLimitEdition::getFeaturedIdx(local_4c);
  if (local_2c == 0) {
    iVar4 = CItemLimitEdition::getRelateditem(local_4c);
    cVar2 = WongWork::CCeraShop::IsSpecialItem
                      (GlobalData::s_pCeraShop,iVar4,local_58 + 1,local_58,&local_4d);
    if (cVar2 != '\0') {
      bVar3 = true;
      goto LAB_0822032c;
    }
  }
  bVar3 = false;
LAB_0822032c:
  if (bVar3) {
    iVar4 = CItemLimitEdition::getRelateditem(local_4c);
    iVar10 = G_CDataManager();
    local_2c = CItemList::GetRestrictCode(*(CItemList **)(iVar10 + 0xc),iVar4);
  }
  if (local_2c != 0) {
    cVar2 = CUser::IsRestrictedGoods(param_1,local_2c);
    if (cVar2 != '\0') {
      puVar9 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar9 = 0x12;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
    }
    CUser::SetRestrictedGoods(param_1,local_2c);
  }
  lVar13 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  CUserCharacInfo::updateLastItemLimitEditionBuyTime((CUserCharacInfo *)param_1,lVar13);
  local_232 = CUser::GetUID(param_1);
  uVar5 = CUser::GetServerGroup(param_1);
  this_01 = (CMonitorServerProxy *)
            CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                      (GlobalData::s_monitor_proxy_mgr,uVar5);
  CMonitorServerProxy::SendTcpPacket(this_01,(char *)local_23c,(uint)local_23a);
  return 0;
}

```

