# WongWork__CItemUpgrade_Separate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## CItemUpgrade_Separate

```asm
// === 0811dfc0 WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate  [0x0811dfc0-0x811e0bd] ===
 811dfc0:	55                   	push   %ebp
 811dfc1:	89 e5                	mov    %esp,%ebp
 811dfc3:	57                   	push   %edi
 811dfc4:	56                   	push   %esi
 811dfc5:	53                   	push   %ebx
 811dfc6:	83 ec 2c             	sub    $0x2c,%esp
 811dfc9:	8b 45 08             	mov    0x8(%ebp),%eax
 811dfcc:	89 04 24             	mov    %eax,(%esp)
 811dfcf:	e8 60 e8 fd ff       	call   80fc834 <_ZN8WongWork12IItemUpgradeC1Ev>
 811dfd4:	8b 45 08             	mov    0x8(%ebp),%eax
 811dfd7:	c7 00 50 69 b5 08    	movl   $0x8b56950,(%eax)
 811dfdd:	8b 45 08             	mov    0x8(%ebp),%eax
 811dfe0:	83 c0 04             	add    $0x4,%eax
 811dfe3:	89 04 24             	mov    %eax,(%esp)
 811dfe6:	e8 73 0e 00 00       	call   811ee5e <_ZN25GenuineDamageUpgradeTableC1Ev>
 811dfeb:	8b 45 08             	mov    0x8(%ebp),%eax
 811dfee:	c7 80 90 01 00 00 a0 	movl   $0x186a0,0x190(%eax)
 811dff5:	86 01 00 
 811dff8:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 811dfff:	e8 4c f7 f5 ff       	call   807d750 <time@plt>
 811e004:	89 45 dc             	mov    %eax,-0x24(%ebp)
 811e007:	8d 75 dc             	lea    -0x24(%ebp),%esi
 811e00a:	c7 04 24 c8 09 00 00 	movl   $0x9c8,(%esp)
 811e011:	e8 3a 64 60 00       	call   8724450 <_Znwj>
 811e016:	89 c3                	mov    %eax,%ebx
 811e018:	89 d8                	mov    %ebx,%eax
 811e01a:	89 74 24 04          	mov    %esi,0x4(%esp)
 811e01e:	89 04 24             	mov    %eax,(%esp)
 811e021:	e8 04 da fa ff       	call   80cba2a <_ZN7CMTRandC1ERKm>
 811e026:	eb 12                	jmp    811e03a <_ZN8WongWork21CItemUpgrade_SeparateC1Ev+0x7a>
 811e028:	89 d6                	mov    %edx,%esi
 811e02a:	89 c7                	mov    %eax,%edi
 811e02c:	89 1c 24             	mov    %ebx,(%esp)
 811e02f:	e8 bc 64 60 00       	call   87244f0 <_ZdlPv>
 811e034:	89 f8                	mov    %edi,%eax
 811e036:	89 f2                	mov    %esi,%edx
 811e038:	eb 49                	jmp    811e083 <_ZN8WongWork21CItemUpgrade_SeparateC1Ev+0xc3>
 811e03a:	89 da                	mov    %ebx,%edx
 811e03c:	8b 45 08             	mov    0x8(%ebp),%eax
 811e03f:	89 90 8c 01 00 00    	mov    %edx,0x18c(%eax)
 811e045:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 811e04c:	eb 28                	jmp    811e076 <_ZN8WongWork21CItemUpgrade_SeparateC1Ev+0xb6>
 811e04e:	8b 45 08             	mov    0x8(%ebp),%eax
 811e051:	8b 80 90 01 00 00    	mov    0x190(%eax),%eax
 811e057:	89 45 e0             	mov    %eax,-0x20(%ebp)
 811e05a:	8b 45 08             	mov    0x8(%ebp),%eax
 811e05d:	8b 80 8c 01 00 00    	mov    0x18c(%eax),%eax
 811e063:	8d 55 e0             	lea    -0x20(%ebp),%edx
 811e066:	89 54 24 04          	mov    %edx,0x4(%esp)
 811e06a:	89 04 24             	mov    %eax,(%esp)
 811e06d:	e8 4c da fa ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 811e072:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 811e076:	83 7d e4 63          	cmpl   $0x63,-0x1c(%ebp)
 811e07a:	0f 9e c0             	setle  %al
 811e07d:	84 c0                	test   %al,%al
 811e07f:	75 cd                	jne    811e04e <_ZN8WongWork21CItemUpgrade_SeparateC1Ev+0x8e>
 811e081:	eb 33                	jmp    811e0b6 <_ZN8WongWork21CItemUpgrade_SeparateC1Ev+0xf6>
 811e083:	89 d3                	mov    %edx,%ebx
 811e085:	89 c6                	mov    %eax,%esi
 811e087:	8b 45 08             	mov    0x8(%ebp),%eax
 811e08a:	83 c0 04             	add    $0x4,%eax
 811e08d:	89 04 24             	mov    %eax,(%esp)
 811e090:	e8 45 0e 00 00       	call   811eeda <_ZN25GenuineDamageUpgradeTableD1Ev>
 811e095:	89 f0                	mov    %esi,%eax
 811e097:	89 da                	mov    %ebx,%edx
 811e099:	eb 00                	jmp    811e09b <_ZN8WongWork21CItemUpgrade_SeparateC1Ev+0xdb>
 811e09b:	89 d3                	mov    %edx,%ebx
 811e09d:	89 c6                	mov    %eax,%esi
 811e09f:	8b 45 08             	mov    0x8(%ebp),%eax
 811e0a2:	89 04 24             	mov    %eax,(%esp)
 811e0a5:	e8 98 e7 fd ff       	call   80fc842 <_ZN8WongWork12IItemUpgradeD1Ev>
 811e0aa:	89 f0                	mov    %esi,%eax
 811e0ac:	89 da                	mov    %ebx,%edx
 811e0ae:	89 04 24             	mov    %eax,(%esp)
 811e0b1:	e8 9a 56 9c 00       	call   8ae3750 <_Unwind_Resume>
 811e0b6:	83 c4 2c             	add    $0x2c,%esp
 811e0b9:	5b                   	pop    %ebx
 811e0ba:	5e                   	pop    %esi
 811e0bb:	5f                   	pop    %edi
 811e0bc:	5d                   	pop    %ebp
 811e0bd:	c3                   	ret

```

```c
// WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate @ 0x811dfc0

/* WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate() */

void __thiscall WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate(CItemUpgrade_Separate *this)

{
  CMTRand *this_00;
  ulong local_28;
  ulong local_24;
  int local_20;
  
  IItemUpgrade::IItemUpgrade((IItemUpgrade *)this);
  *(undefined ***)this = &PTR_ProcUpgrade_08b56950;
                    /* try { // try from 0811dfe6 to 0811dfea has its CatchHandler @ 0811e09b */
  GenuineDamageUpgradeTable::GenuineDamageUpgradeTable((GenuineDamageUpgradeTable *)(this + 4));
  *(undefined4 *)(this + 400) = 100000;
  local_28 = time((time_t *)0x0);
                    /* try { // try from 0811e011 to 0811e015 has its CatchHandler @ 0811e083 */
  this_00 = operator_new(0x9c8);
                    /* try { // try from 0811e021 to 0811e025 has its CatchHandler @ 0811e028 */
  CMTRand::CMTRand(this_00,&local_28);
  *(CMTRand **)(this + 0x18c) = this_00;
  for (local_20 = 0; local_20 < 100; local_20 = local_20 + 1) {
    local_24 = *(ulong *)(this + 400);
    CMTRand::randInt(*(CMTRand **)(this + 0x18c),&local_24);
  }
  return;
}

```

---

## LoadUpgradeScript

```asm
// === 0811eca8 WongWork::CItemUpgrade_Separate::LoadUpgradeScript  [0x0811eca8-0x811ecc4] ===
 811eca8:	55                   	push   %ebp
 811eca9:	89 e5                	mov    %esp,%ebp
 811ecab:	83 ec 18             	sub    $0x18,%esp
 811ecae:	8b 45 08             	mov    0x8(%ebp),%eax
 811ecb1:	83 c0 04             	add    $0x4,%eax
 811ecb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 811ecb8:	8b 45 0c             	mov    0xc(%ebp),%eax
 811ecbb:	89 04 24             	mov    %eax,(%esp)
 811ecbe:	e8 73 36 7f 00       	call   8912336 <_Z25importGenuineUpgradeTablePKcP25GenuineDamageUpgradeTable>
 811ecc3:	c9                   	leave
 811ecc4:	c3                   	ret

```

```c
// WongWork::CItemUpgrade_Separate::LoadUpgradeScript @ 0x811eca8

/* WongWork::CItemUpgrade_Separate::LoadUpgradeScript(char const*) */

void __thiscall
WongWork::CItemUpgrade_Separate::LoadUpgradeScript(CItemUpgrade_Separate *this,char *param_1)

{
  importGenuineUpgradeTable(param_1,(GenuineDamageUpgradeTable *)(this + 4));
  return;
}

```

---

## ProcUpgrade

```asm
// === 0811e66e WongWork::CItemUpgrade_Separate::ProcUpgrade  [0x0811e66e-0x811eca7] ===
 811e66e:	55                   	push   %ebp
 811e66f:	89 e5                	mov    %esp,%ebp
 811e671:	57                   	push   %edi
 811e672:	56                   	push   %esi
 811e673:	53                   	push   %ebx
 811e674:	81 ec 7c 01 00 00    	sub    $0x17c,%esp
 811e67a:	8b 45 0c             	mov    0xc(%ebp),%eax
 811e67d:	89 04 24             	mov    %eax,(%esp)
 811e680:	e8 09 bc fb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 811e685:	89 45 cc             	mov    %eax,-0x34(%ebp)
 811e688:	8b 45 10             	mov    0x10(%ebp),%eax
 811e68b:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 811e68f:	0f b7 d0             	movzwl %ax,%edx
 811e692:	8d 85 47 ff ff ff    	lea    -0xb9(%ebp),%eax
 811e698:	89 54 24 0c          	mov    %edx,0xc(%esp)
 811e69c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 811e6a3:	00 
 811e6a4:	8b 55 cc             	mov    -0x34(%ebp),%edx
 811e6a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 811e6ab:	89 04 24             	mov    %eax,(%esp)
 811e6ae:	e8 65 d2 3d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 811e6b3:	83 ec 04             	sub    $0x4,%esp
 811e6b6:	8d 85 47 ff ff ff    	lea    -0xb9(%ebp),%eax
 811e6bc:	89 04 24             	mov    %eax,(%esp)
 811e6bf:	e8 a2 06 00 00       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 811e6c4:	84 c0                	test   %al,%al
 811e6c6:	74 0a                	je     811e6d2 <_ZN8WongWork21CItemUpgrade_Separate11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x64>
 811e6c8:	b8 04 00 00 00       	mov    $0x4,%eax
 811e6cd:	e9 ca 05 00 00       	jmp    811ec9c <_ZN8WongWork21CItemUpgrade_Separate11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x62e>
 811e6d2:	8b 95 49 ff ff ff    	mov    -0xb7(%ebp),%edx
 811e6d8:	8b 45 10             	mov    0x10(%ebp),%eax
 811e6db:	8b 40 1d             	mov    0x1d(%eax),%eax
 811e6de:	39 c2                	cmp    %eax,%edx
 811e6e0:	74 0a                	je     811e6ec <_ZN8WongWork21CItemUpgrade_Separate11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x7e>
 811e6e2:	b8 04 00 00 00       	mov    $0x4,%eax
 811e6e7:	e9 b0 05 00 00       	jmp    811ec9c <_ZN8WongWork21CItemUpgrade_Separate11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x62e>
 811e6ec:	8d 85 0a ff ff ff    	lea    -0xf6(%ebp),%eax
 811e6f2:	89 04 24             	mov    %eax,(%esp)
 811e6f5:	e8 5a d1 fa ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 811e6fa:	8b 45 10             	mov    0x10(%ebp),%eax
 811e6fd:	0f b7 40 23          	movzwl 0x23(%eax),%eax
 811e701:	0f b7 d0             	movzwl %ax,%edx
 811e704:	8d 85 c8 fe ff ff    	lea    -0x138(%ebp),%eax
 811e70a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 811e70e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 811e715:	00 
 811e716:	8b 55 cc             	mov    -0x34(%ebp),%edx
 811e719:	89 54 24 04          	mov    %edx,0x4(%esp)
 811e71d:	89 04 24             	mov    %eax,(%esp)
 811e720:	e8 f3 d1 3d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 811e725:	83 ec 04             	sub    $0x4,%esp
 811e728:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 811e72e:	89 85 0a ff ff ff    	mov    %eax,-0xf6(%ebp)
 811e734:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 811e73a:	89 85 0e ff ff ff    	mov    %eax,-0xf2(%ebp)
 811e740:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 811e746:	89 85 12 ff ff ff    	mov    %eax,-0xee(%ebp)
 811e74c:	8b 85 d4 fe ff ff    	mov    -0x12c(%ebp),%eax
 811e752:	89 85 16 ff ff ff    	mov    %eax,-0xea(%ebp)
 811e758:	8b 85 d8 fe ff ff    	mov    -0x128(%ebp),%eax
 811e75e:	89 85 1a ff ff ff    	mov    %eax,-0xe6(%ebp)
 811e764:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 811e76a:	89 85 1e ff ff ff    	mov    %eax,-0xe2(%ebp)
 811e770:	8b 85 e0 fe ff ff    	mov    -0x120(%ebp),%eax
 811e776:	89 85 22 ff ff ff    	mov    %eax,-0xde(%ebp)
 811e77c:	8b 85 e4 fe ff ff    	mov    -0x11c(%ebp),%eax
 811e782:	89 85 26 ff ff ff    	mov    %eax,-0xda(%ebp)
 811e788:	8b 85 e8 fe ff ff    	mov    -0x118(%ebp),%eax
 811e78e:	89 85 2a ff ff ff    	mov    %eax,-0xd6(%ebp)
 811e794:	8b 85 ec fe ff ff    	mov    -0x114(%ebp),%eax
 811e79a:	89 85 2e ff ff ff    	mov    %eax,-0xd2(%ebp)
 811e7a0:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 811e7a6:	89 85 32 ff ff ff    	mov    %eax,-0xce(%ebp)
 811e7ac:	8b 85 f4 fe ff ff    	mov    -0x10c(%ebp),%eax
 811e7b2:	89 85 36 ff ff ff    	mov    %eax,-0xca(%ebp)
 811e7b8:	8b 85 f8 fe ff ff    	mov    -0x108(%ebp),%eax
 811e7be:	89 85 3a ff ff ff    	mov    %eax,-0xc6(%ebp)
 811e7c4:	8b 85 fc fe ff ff    	mov    -0x104(%ebp),%eax
 811e7ca:	89 85 3e ff ff ff    	mov    %eax,-0xc2(%ebp)
 811e7d0:	8b 85 00 ff ff ff    	mov    -0x100(%ebp),%eax
 811e7d6:	89 85 42 ff ff ff    	mov    %eax,-0xbe(%ebp)
 811e7dc:	0f b6 85 04 ff ff ff 	movzbl -0xfc(%ebp),%eax
 811e7e3:	88 85 46 ff ff ff    	mov    %al,-0xba(%ebp)
 811e7e9:	8d 85 0a ff ff ff    	lea    -0xf6(%ebp),%eax
 811e7ef:	89 04 24             	mov    %eax,(%esp)
 811e7f2:	e8 6f 05 00 00       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 811e7f7:	84 c0                	test   %al,%al
 811e7f9:	74 0a                	je     811e805 <_ZN8WongWork21CItemUpgrade_Separate11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x197>
 811e7fb:	b8 16 00 00 00       	mov    $0x16,%eax
 811e800:	e9 97 04 00 00       	jmp    811ec9c <_ZN8WongWork21CItemUpgrade_Separate11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x62e>
 811e805:	8b 85 49 ff ff ff    	mov    -0xb7(%ebp),%eax
 811e80b:	89 c3                	mov    %eax,%ebx
 811e80d:	e8 89 d9 fa ff       	call   80cc19b <_Z14G_CDataManagerv>
 811e812:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 811e816:	89 04 24             	mov    %eax,(%esp)
 811e819:	e8 14 12 24 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 811e81e:	89 45 d0             	mov    %eax,-0x30(%ebp)
 811e821:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 811e825:	75 0a                	jne    811e831 <_ZN8WongWork21CItemUpgrade_Separate11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1c3>
 811e827:	b8 04 00 00 00       	mov    $0x4,%eax
 811e82c:	e9 6b 04 00 00       	jmp    811ec9c <_ZN8WongWork21CItemUpgrade_Separate11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x62e>
 811e831:	8b 45 08             	mov    0x8(%ebp),%eax
 811e834:	89 04 24             	mov    %eax,(%esp)
 811e837:	e8 da 05 00 00       	call   811ee16 <_ZNK8WongWork21CItemUpgrade_Separate19getUpgradeInfoTableEv>
 811e83c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 811e83f:	8d 45 84             	lea    -0x7c(%ebp),%eax
 811e842:	89 04 24             	mov    %eax,(%esp)
 811e845:	e8 b4 05 00 00       	call   811edfe <_ZN8WongWork13STUpgradeInfoC1Ev>
 811e84a:	8b 45 0c             	mov    0xc(%ebp),%eax
 811e84d:	89 04 24             	mov    %eax,(%esp)
 811e850:	e8 63 ba fb ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 811e855:	89 44 24 14          	mov    %eax,0x14(%esp)
 811e859:	8d 45 84             	lea    -0x7c(%ebp),%eax
 811e85c:	89 44 24 10          	mov    %eax,0x10(%esp)
 811e860:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 811e863:	89 44 24 0c          	mov    %eax,0xc(%esp)
 811e867:	8b 45 d0             	mov    -0x30(%ebp),%eax
 811e86a:	89 44 24 08          	mov    %eax,0x8(%esp)
 811e86e:	8d 85 47 ff ff ff    	lea    -0xb9(%ebp),%eax
 811e874:	89 44 24 04          	mov    %eax,0x4(%esp)
 811e878:	8b 45 08             	mov    0x8(%ebp),%eax
 811e87b:	89 04 24             	mov    %eax,(%esp)
 811e87e:	e8 5f fa ff ff       	call   811e2e2 <_ZN8WongWork21CItemUpgrade_Separate15_GetUpgradeInfoEPK10Inven_ItemPK5CItemRK25GenuineDamageUpgradeTablePNS_13STUpgradeInfoEi>
 811e883:	83 f0 01             	xor    $0x1,%eax
 811e886:	84 c0                	test   %al,%al
 811e888:	74 0a                	je     811e894 <_ZN8WongWork21CItemUpgrade_Separate11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x226>
 811e88a:	b8 0d 00 00 00       	mov    $0xd,%eax
 811e88f:	e9 08 04 00 00       	jmp    811ec9c <_ZN8WongWork21CItemUpgrade_Separate11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x62e>
 811e894:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 811e89b:	8b 45 0c             	mov    0xc(%ebp),%eax
 811e89e:	89 04 24             	mov    %eax,(%esp)
 811e8a1:	e8 12 ba fb ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 811e8a6:	89 44 24 18          	mov    %eax,0x18(%esp)
 811e8aa:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 811e8ad:	89 44 24 14          	mov    %eax,0x14(%esp)
 811e8b1:	8d 85 0a ff ff ff    	lea    -0xf6(%ebp),%eax
 811e8b7:	89 44 24 10          	mov    %eax,0x10(%esp)
 811e8bb:	8b 45 d0             	mov    -0x30(%ebp),%eax
 811e8be:	89 44 24 0c          	mov    %eax,0xc(%esp)
 811e8c2:	8d 85 47 ff ff ff    	lea    -0xb9(%ebp),%eax
 811e8c8:	89 44 24 08          	mov    %eax,0x8(%esp)
 811e8cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 811e8cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 811e8d3:	8b 45 08             	mov    0x8(%ebp),%eax
 811e8d6:	89 04 24             	mov    %eax,(%esp)
 811e8d9:	e8 5a f8 ff ff       	call   811e138 <_ZNK8WongWork21CItemUpgrade_Separate15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK25GenuineDamageUpgradeTablei>
 811e8de:	89 45 d8             	mov    %eax,-0x28(%ebp)
 811e8e1:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 811e8e5:	0f 95 c0             	setne  %al
 811e8e8:	84 c0                	test   %al,%al
 811e8ea:	74 08                	je     811e8f4 <_ZN8WongWork21CItemUpgrade_Separate11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x286>
 811e8ec:	8b 45 d8             	mov    -0x28(%ebp),%eax
 811e8ef:	e9 a8 03 00 00       	jmp    811ec9c <_ZN8WongWork21CItemUpgrade_Separate11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x62e>
 811e8f4:	8d 85 47 ff ff ff    	lea    -0xb9(%ebp),%eax
 811e8fa:	83 c0 33             	add    $0x33,%eax
 811e8fd:	89 04 24             	mov    %eax,(%esp)
 811e900:	e8 53 04 00 00       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 811e905:	0f b6 c0             	movzbl %al,%eax
 811e908:	89 45 dc             	mov    %eax,-0x24(%ebp)
 811e90b:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 811e90f:	8d 45 84             	lea    -0x7c(%ebp),%eax
 811e912:	89 44 24 0c          	mov    %eax,0xc(%esp)
 811e916:	8d 85 47 ff ff ff    	lea    -0xb9(%ebp),%eax
 811e91c:	89 44 24 08          	mov    %eax,0x8(%esp)
 811e920:	8b 45 0c             	mov    0xc(%ebp),%eax
 811e923:	89 44 24 04          	mov    %eax,0x4(%esp)
 811e927:	8b 45 08             	mov    0x8(%ebp),%eax
 811e92a:	89 04 24             	mov    %eax,(%esp)
 811e92d:	e8 36 fb ff ff       	call   811e468 <_ZN8WongWork21CItemUpgrade_Separate14_DoProcUpgradeEP5CUserP10Inven_ItemPKNS_13STUpgradeInfoE>
 811e932:	88 45 e3             	mov    %al,-0x1d(%ebp)
 811e935:	8b 45 84             	mov    -0x7c(%ebp),%eax
 811e938:	89 c6                	mov    %eax,%esi
 811e93a:	8b 45 10             	mov    0x10(%ebp),%eax
 811e93d:	0f b7 40 23          	movzwl 0x23(%eax),%eax
 811e941:	0f b7 d8             	movzwl %ax,%ebx
 811e944:	8b 45 0c             	mov    0xc(%ebp),%eax
 811e947:	89 04 24             	mov    %eax,(%esp)
 811e94a:	e8 3f b9 fb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 811e94f:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 811e956:	00 
 811e957:	c7 44 24 10 0c 00 00 	movl   $0xc,0x10(%esp)
 811e95e:	00 
 811e95f:	89 74 24 0c          	mov    %esi,0xc(%esp)
 811e963:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 811e967:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 811e96e:	00 
 811e96f:	89 04 24             	mov    %eax,(%esp)
 811e972:	e8 95 56 3e 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 811e977:	83 f0 01             	xor    $0x1,%eax
 811e97a:	84 c0                	test   %al,%al
 811e97c:	74 0a                	je     811e988 <_ZN8WongWork21CItemUpgrade_Separate11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x31a>
 811e97e:	b8 11 00 00 00       	mov    $0x11,%eax
 811e983:	e9 14 03 00 00       	jmp    811ec9c <_ZN8WongWork21CItemUpgrade_Separate11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x62e>
 811e988:	8b 45 14             	mov    0x14(%ebp),%eax
 811e98b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 811e992:	00 
 811e993:	89 04 24             	mov    %eax,(%esp)
 811e996:	e8 85 cf fa ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 811e99b:	8b 45 10             	mov    0x10(%ebp),%eax
 811e99e:	0f b7 40 23          	movzwl 0x23(%eax),%eax
 811e9a2:	0f b7 d0             	movzwl %ax,%edx
 811e9a5:	8b 45 14             	mov    0x14(%ebp),%eax
 811e9a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 811e9ac:	89 04 24             	mov    %eax,(%esp)
 811e9af:	e8 f0 b4 fb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 811e9b4:	8b 45 10             	mov    0x10(%ebp),%eax
 811e9b7:	0f b7 40 23          	movzwl 0x23(%eax),%eax
 811e9bb:	0f b7 d8             	movzwl %ax,%ebx
 811e9be:	8b 45 0c             	mov    0xc(%ebp),%eax
 811e9c1:	89 04 24             	mov    %eax,(%esp)
 811e9c4:	e8 c5 b8 fb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 811e9c9:	8d 55 8f             	lea    -0x71(%ebp),%edx
 811e9cc:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 811e9d0:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 811e9d7:	00 
 811e9d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 811e9dc:	89 14 24             	mov    %edx,(%esp)
 811e9df:	e8 34 cf 3d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 811e9e4:	83 ec 04             	sub    $0x4,%esp
 811e9e7:	8d 45 8f             	lea    -0x71(%ebp),%eax
 811e9ea:	89 04 24             	mov    %eax,(%esp)
 811e9ed:	e8 48 8e fd ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 811e9f2:	8b 55 14             	mov    0x14(%ebp),%edx
 811e9f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 811e9f9:	89 14 24             	mov    %edx,(%esp)
 811e9fc:	e8 3b cf fa ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 811ea01:	8b 45 dc             	mov    -0x24(%ebp),%eax
 811ea04:	0f be d0             	movsbl %al,%edx
 811ea07:	8b 45 14             	mov    0x14(%ebp),%eax
 811ea0a:	89 54 24 04          	mov    %edx,0x4(%esp)
 811ea0e:	89 04 24             	mov    %eax,(%esp)
 811ea11:	e8 0a cf fa ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 811ea16:	8d 85 47 ff ff ff    	lea    -0xb9(%ebp),%eax
 811ea1c:	83 c0 33             	add    $0x33,%eax
 811ea1f:	89 04 24             	mov    %eax,(%esp)
 811ea22:	e8 31 03 00 00       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 811ea27:	3c 05                	cmp    $0x5,%al
 811ea29:	0f 97 c0             	seta   %al
 811ea2c:	84 c0                	test   %al,%al
 811ea2e:	74 24                	je     811ea54 <_ZN8WongWork21CItemUpgrade_Separate11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x3e6>
 811ea30:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 811ea34:	89 44 24 0c          	mov    %eax,0xc(%esp)
 811ea38:	8d 85 47 ff ff ff    	lea    -0xb9(%ebp),%eax
 811ea3e:	89 44 24 08          	mov    %eax,0x8(%esp)
 811ea42:	8b 45 0c             	mov    0xc(%ebp),%eax
 811ea45:	89 44 24 04          	mov    %eax,0x4(%esp)
 811ea49:	8b 45 08             	mov    0x8(%ebp),%eax
 811ea4c:	89 04 24             	mov    %eax,(%esp)
 811ea4f:	e8 e6 fa ff ff       	call   811e53a <_ZN8WongWork21CItemUpgrade_Separate14_NoticeUpgradeEPK5CUserRK10Inven_Itemb>
 811ea54:	80 7d e3 00          	cmpb   $0x0,-0x1d(%ebp)
 811ea58:	74 15                	je     811ea6f <_ZN8WongWork21CItemUpgrade_Separate11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x401>
 811ea5a:	8b 45 14             	mov    0x14(%ebp),%eax
 811ea5d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 811ea64:	00 
 811ea65:	89 04 24             	mov    %eax,(%esp)
 811ea68:	e8 b3 ce fa ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 811ea6d:	eb 13                	jmp    811ea82 <_ZN8WongWork21CItemUpgrade_Separate11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x414>
 811ea6f:	8b 45 14             	mov    0x14(%ebp),%eax
 811ea72:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 811ea79:	00 
 811ea7a:	89 04 24             	mov    %eax,(%esp)
 811ea7d:	e8 9e ce fa ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 811ea82:	8d 85 47 ff ff ff    	lea    -0xb9(%ebp),%eax
 811ea88:	83 c0 33             	add    $0x33,%eax
 811ea8b:	89 04 24             	mov    %eax,(%esp)
 811ea8e:	e8 c5 02 00 00       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 811ea93:	0f b6 c0             	movzbl %al,%eax
 811ea96:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 811ea99:	8b 45 14             	mov    0x14(%ebp),%eax
 811ea9c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 811ea9f:	89 54 24 04          	mov    %edx,0x4(%esp)
 811eaa3:	89 04 24             	mov    %eax,(%esp)
 811eaa6:	e8 75 ce fa ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 811eaab:	8b 45 10             	mov    0x10(%ebp),%eax
 811eaae:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 811eab2:	0f b7 d0             	movzwl %ax,%edx
 811eab5:	8b 45 14             	mov    0x14(%ebp),%eax
 811eab8:	89 54 24 04          	mov    %edx,0x4(%esp)
 811eabc:	89 04 24             	mov    %eax,(%esp)
 811eabf:	e8 e0 b3 fb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 811eac4:	8b 85 49 ff ff ff    	mov    -0xb7(%ebp),%eax
 811eaca:	85 c0                	test   %eax,%eax
 811eacc:	0f 84 bf 00 00 00    	je     811eb91 <_ZN8WongWork21CItemUpgrade_Separate11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x523>
 811ead2:	8b 45 10             	mov    0x10(%ebp),%eax
 811ead5:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 811ead9:	0f b7 c0             	movzwl %ax,%eax
 811eadc:	8b 95 47 ff ff ff    	mov    -0xb9(%ebp),%edx
 811eae2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 811eae6:	8b 95 4b ff ff ff    	mov    -0xb5(%ebp),%edx
 811eaec:	89 54 24 10          	mov    %edx,0x10(%esp)
 811eaf0:	8b 95 4f ff ff ff    	mov    -0xb1(%ebp),%edx
 811eaf6:	89 54 24 14          	mov    %edx,0x14(%esp)
 811eafa:	8b 95 53 ff ff ff    	mov    -0xad(%ebp),%edx
 811eb00:	89 54 24 18          	mov    %edx,0x18(%esp)
 811eb04:	8b 95 57 ff ff ff    	mov    -0xa9(%ebp),%edx
 811eb0a:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 811eb0e:	8b 95 5b ff ff ff    	mov    -0xa5(%ebp),%edx
 811eb14:	89 54 24 20          	mov    %edx,0x20(%esp)
 811eb18:	8b 95 5f ff ff ff    	mov    -0xa1(%ebp),%edx
 811eb1e:	89 54 24 24          	mov    %edx,0x24(%esp)
 811eb22:	8b 95 63 ff ff ff    	mov    -0x9d(%ebp),%edx
 811eb28:	89 54 24 28          	mov    %edx,0x28(%esp)
 811eb2c:	8b 95 67 ff ff ff    	mov    -0x99(%ebp),%edx
 811eb32:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 811eb36:	8b 95 6b ff ff ff    	mov    -0x95(%ebp),%edx
 811eb3c:	89 54 24 30          	mov    %edx,0x30(%esp)
 811eb40:	8b 95 6f ff ff ff    	mov    -0x91(%ebp),%edx
 811eb46:	89 54 24 34          	mov    %edx,0x34(%esp)
 811eb4a:	8b 95 73 ff ff ff    	mov    -0x8d(%ebp),%edx
 811eb50:	89 54 24 38          	mov    %edx,0x38(%esp)
 811eb54:	8b 95 77 ff ff ff    	mov    -0x89(%ebp),%edx
 811eb5a:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 811eb5e:	8b 95 7b ff ff ff    	mov    -0x85(%ebp),%edx
 811eb64:	89 54 24 40          	mov    %edx,0x40(%esp)
 811eb68:	8b 95 7f ff ff ff    	mov    -0x81(%ebp),%edx
 811eb6e:	89 54 24 44          	mov    %edx,0x44(%esp)
 811eb72:	0f b6 55 83          	movzbl -0x7d(%ebp),%edx
 811eb76:	88 54 24 48          	mov    %dl,0x48(%esp)
 811eb7a:	89 44 24 08          	mov    %eax,0x8(%esp)
 811eb7e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 811eb85:	00 
 811eb86:	8b 45 cc             	mov    -0x34(%ebp),%eax
 811eb89:	89 04 24             	mov    %eax,(%esp)
 811eb8c:	e8 1d 15 3e 00       	call   85000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>
 811eb91:	0f b6 75 e3          	movzbl -0x1d(%ebp),%esi
 811eb95:	8d 85 47 ff ff ff    	lea    -0xb9(%ebp),%eax
 811eb9b:	83 c0 33             	add    $0x33,%eax
 811eb9e:	89 04 24             	mov    %eax,(%esp)
 811eba1:	e8 b2 01 00 00       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 811eba6:	0f b6 d8             	movzbl %al,%ebx
 811eba9:	8b 45 d0             	mov    -0x30(%ebp),%eax
 811ebac:	89 04 24             	mov    %eax,(%esp)
 811ebaf:	e8 94 20 ff ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 811ebb4:	8b 55 0c             	mov    0xc(%ebp),%edx
 811ebb7:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 811ebbd:	89 74 24 10          	mov    %esi,0x10(%esp)
 811ebc1:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 811ebc5:	8b 55 dc             	mov    -0x24(%ebp),%edx
 811ebc8:	89 54 24 08          	mov    %edx,0x8(%esp)
 811ebcc:	89 44 24 04          	mov    %eax,0x4(%esp)
 811ebd0:	89 0c 24             	mov    %ecx,(%esp)
 811ebd3:	e8 32 61 56 00       	call   8684d0a <_ZN15cUserHistoryLog19SeparateUpgradeItemEiiib>
 811ebd8:	8b 45 d0             	mov    -0x30(%ebp),%eax
 811ebdb:	8b 00                	mov    (%eax),%eax
 811ebdd:	83 c0 4c             	add    $0x4c,%eax
 811ebe0:	8b 10                	mov    (%eax),%edx
 811ebe2:	8b 45 d0             	mov    -0x30(%ebp),%eax
 811ebe5:	89 04 24             	mov    %eax,(%esp)
 811ebe8:	ff d2                	call   *%edx
 811ebea:	84 c0                	test   %al,%al
 811ebec:	74 53                	je     811ec41 <_ZN8WongWork21CItemUpgrade_Separate11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x5d3>
 811ebee:	8d 85 47 ff ff ff    	lea    -0xb9(%ebp),%eax
 811ebf4:	89 04 24             	mov    %eax,(%esp)
 811ebf7:	e8 70 64 fd ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 811ebfc:	0f b6 f0             	movzbl %al,%esi
 811ebff:	0f b6 5d e3          	movzbl -0x1d(%ebp),%ebx
 811ec03:	8d 85 47 ff ff ff    	lea    -0xb9(%ebp),%eax
 811ec09:	83 c0 33             	add    $0x33,%eax
 811ec0c:	89 04 24             	mov    %eax,(%esp)
 811ec0f:	e8 44 01 00 00       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 811ec14:	0f b6 c0             	movzbl %al,%eax
 811ec17:	8b 55 10             	mov    0x10(%ebp),%edx
 811ec1a:	83 c2 28             	add    $0x28,%edx
 811ec1d:	89 74 24 14          	mov    %esi,0x14(%esp)
 811ec21:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 811ec25:	89 44 24 0c          	mov    %eax,0xc(%esp)
 811ec29:	8b 45 dc             	mov    -0x24(%ebp),%eax
 811ec2c:	89 44 24 08          	mov    %eax,0x8(%esp)
 811ec30:	89 54 24 04          	mov    %edx,0x4(%esp)
 811ec34:	8b 45 0c             	mov    0xc(%ebp),%eax
 811ec37:	89 04 24             	mov    %eax,(%esp)
 811ec3a:	e8 03 b6 55 00       	call   867a242 <_ZN5CUser34makeGuildItemSeparateUpgradMessageEPKciibi>
 811ec3f:	eb 56                	jmp    811ec97 <_ZN8WongWork21CItemUpgrade_Separate11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x629>
 811ec41:	8d 85 47 ff ff ff    	lea    -0xb9(%ebp),%eax
 811ec47:	89 04 24             	mov    %eax,(%esp)
 811ec4a:	e8 1d 64 fd ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 811ec4f:	0f b6 f8             	movzbl %al,%edi
 811ec52:	0f b6 75 e3          	movzbl -0x1d(%ebp),%esi
 811ec56:	8d 85 47 ff ff ff    	lea    -0xb9(%ebp),%eax
 811ec5c:	83 c0 33             	add    $0x33,%eax
 811ec5f:	89 04 24             	mov    %eax,(%esp)
 811ec62:	e8 f1 00 00 00       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 811ec67:	0f b6 d8             	movzbl %al,%ebx
 811ec6a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 811ec6d:	89 04 24             	mov    %eax,(%esp)
 811ec70:	e8 0d 01 00 00       	call   811ed82 <_ZNK5CItem11GetItemNameEv>
 811ec75:	89 7c 24 14          	mov    %edi,0x14(%esp)
 811ec79:	89 74 24 10          	mov    %esi,0x10(%esp)
 811ec7d:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 811ec81:	8b 55 dc             	mov    -0x24(%ebp),%edx
 811ec84:	89 54 24 08          	mov    %edx,0x8(%esp)
 811ec88:	89 44 24 04          	mov    %eax,0x4(%esp)
 811ec8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 811ec8f:	89 04 24             	mov    %eax,(%esp)
 811ec92:	e8 ab b5 55 00       	call   867a242 <_ZN5CUser34makeGuildItemSeparateUpgradMessageEPKciibi>
 811ec97:	b8 00 00 00 00       	mov    $0x0,%eax
 811ec9c:	8d 65 f4             	lea    -0xc(%ebp),%esp
 811ec9f:	83 c4 00             	add    $0x0,%esp
 811eca2:	5b                   	pop    %ebx
 811eca3:	5e                   	pop    %esi
 811eca4:	5f                   	pop    %edi
 811eca5:	5d                   	pop    %ebp
 811eca6:	c3                   	ret
 811eca7:	90                   	nop

```

```c
// WongWork::CItemUpgrade_Separate::ProcUpgrade @ 0x811e66e

/* WongWork::CItemUpgrade_Separate::ProcUpgrade(CUser*, MSG_ITEM_UPGRADE*, PacketGuard*) */

int __thiscall
WongWork::CItemUpgrade_Separate::ProcUpgrade
          (CItemUpgrade_Separate *this,CUser *param_1,MSG_ITEM_UPGRADE *param_2,PacketGuard *param_3
          )

{
  undefined2 uVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  CDataManager *this_00;
  int iVar5;
  CInventory *pCVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined4 local_fa;
  undefined4 local_f6;
  undefined4 local_f2;
  undefined4 local_ee;
  undefined4 local_ea;
  undefined4 local_e6;
  undefined4 local_e2;
  undefined4 local_de;
  undefined4 local_da;
  undefined4 local_d6;
  undefined4 local_d2;
  undefined4 local_ce;
  undefined4 local_ca;
  undefined4 local_c6;
  undefined4 local_c2;
  undefined1 local_be;
  undefined2 local_bd;
  undefined2 uStack_bb;
  undefined2 uStack_b9;
  undefined2 uStack_b7;
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
  undefined4 local_89;
  undefined4 local_85;
  undefined1 local_81;
  undefined4 local_80 [2];
  Inven_Item local_75 [61];
  int local_38;
  CItem *local_34;
  GenuineDamageUpgradeTable *local_30;
  int local_2c;
  uint local_28;
  bool local_21;
  uint local_20;
  
  local_38 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)&local_bd,local_38);
  cVar3 = Inven_Item::isEmpty((Inven_Item *)&local_bd);
  if (cVar3 == '\0') {
    if (CONCAT22(uStack_b9,uStack_bb) == *(int *)(param_2 + 0x1d)) {
      Inven_Item::Inven_Item((Inven_Item *)&local_fa);
      CInventory::GetInvenSlot((int)&local_13c,local_38);
      local_fa = local_13c;
      local_f6 = local_138;
      local_f2 = local_134;
      local_ee = local_130;
      local_ea = local_12c;
      local_e6 = local_128;
      local_e2 = local_124;
      local_de = local_120;
      local_da = local_11c;
      local_d6 = local_118;
      local_d2 = local_114;
      local_ce = local_110;
      local_ca = local_10c;
      local_c6 = local_108;
      local_c2 = local_104;
      local_be = local_100;
      cVar3 = Inven_Item::isEmpty((Inven_Item *)&local_fa);
      if (cVar3 == '\0') {
        iVar5 = CONCAT22(uStack_b9,uStack_bb);
        this_00 = (CDataManager *)G_CDataManager();
        local_34 = (CItem *)CDataManager::find_item(this_00,iVar5);
        if (local_34 == (CItem *)0x0) {
          local_2c = 4;
        }
        else {
          local_30 = (GenuineDamageUpgradeTable *)getUpgradeInfoTable(this);
          STUpgradeInfo::STUpgradeInfo((STUpgradeInfo *)local_80);
          iVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          cVar3 = _GetUpgradeInfo(this,(Inven_Item *)&local_bd,local_34,local_30,
                                  (STUpgradeInfo *)local_80,iVar5);
          if (cVar3 == '\x01') {
            local_2c = 0;
            iVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
            local_2c = _CheckCondition(this,param_1,(Inven_Item *)&local_bd,local_34,
                                       (Inven_Item *)&local_fa,local_30,iVar5);
            if (local_2c == 0) {
              local_28 = UpgradeSeparateInfo::GetUpgradeSeparate
                                   ((UpgradeSeparateInfo *)((int)&local_8d + 3));
              local_28 = local_28 & 0xff;
              local_21 = false;
              local_21 = (bool)_DoProcUpgrade(this,param_1,(Inven_Item *)&local_bd,
                                              (STUpgradeInfo *)local_80);
              uVar1 = *(undefined2 *)(param_2 + 0x23);
              pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              cVar3 = CInventory::delete_item(pCVar6,1,uVar1,local_80[0],0xc,1);
              if (cVar3 == '\x01') {
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,1);
                InterfacePacketBuf::put_short
                          ((InterfacePacketBuf *)param_3,(uint)*(ushort *)(param_2 + 0x23));
                iVar5 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                CInventory::GetInvenSlot((int)local_75,iVar5);
                iVar5 = Inven_Item::get_add_info(local_75);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)param_3,iVar5);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,(int)(char)local_28);
                bVar4 = UpgradeSeparateInfo::GetUpgradeSeparate
                                  ((UpgradeSeparateInfo *)((int)&local_8d + 3));
                if (5 < bVar4) {
                  _NoticeUpgrade(this,param_1,(Inven_Item *)&local_bd,local_21);
                }
                if (local_21 == false) {
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,1);
                }
                else {
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,0);
                }
                local_20 = UpgradeSeparateInfo::GetUpgradeSeparate
                                     ((UpgradeSeparateInfo *)((int)&local_8d + 3));
                local_20 = local_20 & 0xff;
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,local_20);
                InterfacePacketBuf::put_short
                          ((InterfacePacketBuf *)param_3,(uint)*(ushort *)(param_2 + 0x1b));
                if (CONCAT22(uStack_b9,uStack_bb) != 0) {
                  CInventory::update_item
                            (local_38,1,*(undefined2 *)(param_2 + 0x1b),CONCAT22(uStack_bb,local_bd)
                             ,CONCAT22(uStack_b7,uStack_b9),local_b5,local_b1,local_ad,local_a9,
                             local_a5,local_a1,local_9d,local_99,local_95,local_91,local_8d,local_89
                             ,local_85,local_81);
                }
                bVar2 = local_21;
                uVar7 = UpgradeSeparateInfo::GetUpgradeSeparate
                                  ((UpgradeSeparateInfo *)((int)&local_8d + 3));
                iVar5 = CItem::get_index(local_34);
                cUserHistoryLog::SeparateUpgradeItem
                          ((cUserHistoryLog *)(param_1 + 0x79700),iVar5,local_28,uVar7 & 0xff,bVar2)
                ;
                cVar3 = (**(code **)(*(int *)local_34 + 0x4c))(local_34);
                if (cVar3 == '\0') {
                  uVar7 = Inven_Item::GetUpgrade((Inven_Item *)&local_bd);
                  bVar2 = local_21;
                  uVar8 = UpgradeSeparateInfo::GetUpgradeSeparate
                                    ((UpgradeSeparateInfo *)((int)&local_8d + 3));
                  pcVar9 = (char *)CItem::GetItemName(local_34);
                  CUser::makeGuildItemSeparateUpgradMessage
                            (param_1,pcVar9,local_28,uVar8 & 0xff,bVar2,uVar7 & 0xff);
                }
                else {
                  uVar7 = Inven_Item::GetUpgrade((Inven_Item *)&local_bd);
                  bVar2 = local_21;
                  uVar8 = UpgradeSeparateInfo::GetUpgradeSeparate
                                    ((UpgradeSeparateInfo *)((int)&local_8d + 3));
                  CUser::makeGuildItemSeparateUpgradMessage
                            (param_1,(char *)(param_2 + 0x28),local_28,uVar8 & 0xff,bVar2,
                             uVar7 & 0xff);
                }
                local_2c = 0;
              }
              else {
                local_2c = 0x11;
              }
            }
          }
          else {
            local_2c = 0xd;
          }
        }
      }
      else {
        local_2c = 0x16;
      }
    }
    else {
      local_2c = 4;
    }
  }
  else {
    local_2c = 4;
  }
  return local_2c;
}

```

---

## _CheckCondition

```asm
// === 0811e138 WongWork::CItemUpgrade_Separate::_CheckCondition  [0x0811e138-0x811e2cd] ===
 811e138:	55                   	push   %ebp
 811e139:	89 e5                	mov    %esp,%ebp
 811e13b:	57                   	push   %edi
 811e13c:	56                   	push   %esi
 811e13d:	53                   	push   %ebx
 811e13e:	83 ec 4c             	sub    $0x4c,%esp
 811e141:	8b 45 14             	mov    0x14(%ebp),%eax
 811e144:	8b 55 20             	mov    0x20(%ebp),%edx
 811e147:	89 54 24 04          	mov    %edx,0x4(%esp)
 811e14b:	89 04 24             	mov    %eax,(%esp)
 811e14e:	e8 65 56 3f 00       	call   85137b8 <_ZNK10CEquipItem14getGrowthGradeEi>
 811e153:	88 45 e3             	mov    %al,-0x1d(%ebp)
 811e156:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 811e15a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 811e15d:	8b 45 1c             	mov    0x1c(%ebp),%eax
 811e160:	8d 88 40 01 00 00    	lea    0x140(%eax),%ecx
 811e166:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 811e169:	8d 55 d8             	lea    -0x28(%ebp),%edx
 811e16c:	89 54 24 08          	mov    %edx,0x8(%esp)
 811e170:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 811e174:	89 04 24             	mov    %eax,(%esp)
 811e177:	e8 4a 0f 00 00       	call   811f0c6 <_ZNKSt3mapIi32GenuineDamageUpgradeMaterialInfoSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 811e17c:	83 ec 04             	sub    $0x4,%esp
 811e17f:	8b 45 1c             	mov    0x1c(%ebp),%eax
 811e182:	8d 90 40 01 00 00    	lea    0x140(%eax),%edx
 811e188:	8d 45 dc             	lea    -0x24(%ebp),%eax
 811e18b:	89 54 24 04          	mov    %edx,0x4(%esp)
 811e18f:	89 04 24             	mov    %eax,(%esp)
 811e192:	e8 5b 0f 00 00       	call   811f0f2 <_ZNKSt3mapIi32GenuineDamageUpgradeMaterialInfoSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 811e197:	83 ec 04             	sub    $0x4,%esp
 811e19a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 811e19d:	89 44 24 04          	mov    %eax,0x4(%esp)
 811e1a1:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 811e1a4:	89 04 24             	mov    %eax,(%esp)
 811e1a7:	e8 6c 0f 00 00       	call   811f118 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi32GenuineDamageUpgradeMaterialInfoEEeqERKS4_>
 811e1ac:	84 c0                	test   %al,%al
 811e1ae:	74 0a                	je     811e1ba <_ZNK8WongWork21CItemUpgrade_Separate15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK25GenuineDamageUpgradeTablei+0x82>
 811e1b0:	b8 01 00 00 00       	mov    $0x1,%eax
 811e1b5:	e9 08 01 00 00       	jmp    811e2c2 <_ZNK8WongWork21CItemUpgrade_Separate15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK25GenuineDamageUpgradeTablei+0x18a>
 811e1ba:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 811e1bd:	89 04 24             	mov    %eax,(%esp)
 811e1c0:	e8 67 0f 00 00       	call   811f12c <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi32GenuineDamageUpgradeMaterialInfoEEptEv>
 811e1c5:	8b 40 04             	mov    0x4(%eax),%eax
 811e1c8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 811e1cb:	8b 45 18             	mov    0x18(%ebp),%eax
 811e1ce:	8b 50 02             	mov    0x2(%eax),%edx
 811e1d1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 811e1d4:	39 c2                	cmp    %eax,%edx
 811e1d6:	74 0a                	je     811e1e2 <_ZNK8WongWork21CItemUpgrade_Separate15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK25GenuineDamageUpgradeTablei+0xaa>
 811e1d8:	b8 16 00 00 00       	mov    $0x16,%eax
 811e1dd:	e9 e0 00 00 00       	jmp    811e2c2 <_ZNK8WongWork21CItemUpgrade_Separate15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK25GenuineDamageUpgradeTablei+0x18a>
 811e1e2:	8b 45 18             	mov    0x18(%ebp),%eax
 811e1e5:	8b 40 07             	mov    0x7(%eax),%eax
 811e1e8:	89 c7                	mov    %eax,%edi
 811e1ea:	8b 45 14             	mov    0x14(%ebp),%eax
 811e1ed:	89 04 24             	mov    %eax,(%esp)
 811e1f0:	e8 e1 30 fd ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 811e1f5:	89 c3                	mov    %eax,%ebx
 811e1f7:	8b 45 14             	mov    0x14(%ebp),%eax
 811e1fa:	8b 00                	mov    (%eax),%eax
 811e1fc:	83 c0 0c             	add    $0xc,%eax
 811e1ff:	8b 10                	mov    (%eax),%edx
 811e201:	8b 45 14             	mov    0x14(%ebp),%eax
 811e204:	89 04 24             	mov    %eax,(%esp)
 811e207:	ff d2                	call   *%edx
 811e209:	89 c6                	mov    %eax,%esi
 811e20b:	8b 45 10             	mov    0x10(%ebp),%eax
 811e20e:	83 c0 33             	add    $0x33,%eax
 811e211:	89 04 24             	mov    %eax,(%esp)
 811e214:	e8 3f 0b 00 00       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 811e219:	0f b6 d0             	movzbl %al,%edx
 811e21c:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 811e220:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 811e224:	89 74 24 0c          	mov    %esi,0xc(%esp)
 811e228:	89 54 24 08          	mov    %edx,0x8(%esp)
 811e22c:	89 44 24 04          	mov    %eax,0x4(%esp)
 811e230:	8b 45 1c             	mov    0x1c(%ebp),%eax
 811e233:	89 04 24             	mov    %eax,(%esp)
 811e236:	e8 4d 49 7f 00       	call   8912b88 <_ZNK25GenuineDamageUpgradeTable28getGenuineUpgradeMaterialCntEhi18ENUM_EQUIPMENTTYPE11ENUM_RARITY>
 811e23b:	39 c7                	cmp    %eax,%edi
 811e23d:	0f 92 c0             	setb   %al
 811e240:	84 c0                	test   %al,%al
 811e242:	74 07                	je     811e24b <_ZNK8WongWork21CItemUpgrade_Separate15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK25GenuineDamageUpgradeTablei+0x113>
 811e244:	b8 16 00 00 00       	mov    $0x16,%eax
 811e249:	eb 77                	jmp    811e2c2 <_ZNK8WongWork21CItemUpgrade_Separate15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK25GenuineDamageUpgradeTablei+0x18a>
 811e24b:	8b 45 14             	mov    0x14(%ebp),%eax
 811e24e:	8b 00                	mov    (%eax),%eax
 811e250:	83 c0 0c             	add    $0xc,%eax
 811e253:	8b 10                	mov    (%eax),%edx
 811e255:	8b 45 14             	mov    0x14(%ebp),%eax
 811e258:	89 04 24             	mov    %eax,(%esp)
 811e25b:	ff d2                	call   *%edx
 811e25d:	83 f8 0a             	cmp    $0xa,%eax
 811e260:	0f 95 c0             	setne  %al
 811e263:	84 c0                	test   %al,%al
 811e265:	74 07                	je     811e26e <_ZNK8WongWork21CItemUpgrade_Separate15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK25GenuineDamageUpgradeTablei+0x136>
 811e267:	b8 13 00 00 00       	mov    $0x13,%eax
 811e26c:	eb 54                	jmp    811e2c2 <_ZNK8WongWork21CItemUpgrade_Separate15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK25GenuineDamageUpgradeTablei+0x18a>
 811e26e:	8b 45 10             	mov    0x10(%ebp),%eax
 811e271:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 811e275:	0f b7 d8             	movzwl %ax,%ebx
 811e278:	8b 45 14             	mov    0x14(%ebp),%eax
 811e27b:	89 04 24             	mov    %eax,(%esp)
 811e27e:	e8 15 0b 00 00       	call   811ed98 <_ZNK10CEquipItem13get_enduranceEv>
 811e283:	39 c3                	cmp    %eax,%ebx
 811e285:	0f 95 c0             	setne  %al
 811e288:	84 c0                	test   %al,%al
 811e28a:	74 07                	je     811e293 <_ZNK8WongWork21CItemUpgrade_Separate15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK25GenuineDamageUpgradeTablei+0x15b>
 811e28c:	b8 07 00 00 00       	mov    $0x7,%eax
 811e291:	eb 2f                	jmp    811e2c2 <_ZNK8WongWork21CItemUpgrade_Separate15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK25GenuineDamageUpgradeTablei+0x18a>
 811e293:	8b 45 10             	mov    0x10(%ebp),%eax
 811e296:	83 c0 33             	add    $0x33,%eax
 811e299:	89 04 24             	mov    %eax,(%esp)
 811e29c:	e8 b7 0a 00 00       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 811e2a1:	0f b6 c0             	movzbl %al,%eax
 811e2a4:	8d 50 01             	lea    0x1(%eax),%edx
 811e2a7:	8b 45 1c             	mov    0x1c(%ebp),%eax
 811e2aa:	8b 40 04             	mov    0x4(%eax),%eax
 811e2ad:	39 c2                	cmp    %eax,%edx
 811e2af:	0f 9f c0             	setg   %al
 811e2b2:	84 c0                	test   %al,%al
 811e2b4:	74 07                	je     811e2bd <_ZNK8WongWork21CItemUpgrade_Separate15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK25GenuineDamageUpgradeTablei+0x185>
 811e2b6:	b8 5f 00 00 00       	mov    $0x5f,%eax
 811e2bb:	eb 05                	jmp    811e2c2 <_ZNK8WongWork21CItemUpgrade_Separate15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK25GenuineDamageUpgradeTablei+0x18a>
 811e2bd:	b8 00 00 00 00       	mov    $0x0,%eax
 811e2c2:	8d 65 f4             	lea    -0xc(%ebp),%esp
 811e2c5:	83 c4 00             	add    $0x0,%esp
 811e2c8:	5b                   	pop    %ebx
 811e2c9:	5e                   	pop    %esi
 811e2ca:	5f                   	pop    %edi
 811e2cb:	5d                   	pop    %ebp
 811e2cc:	c3                   	ret
 811e2cd:	90                   	nop

```

```c
// WongWork::CItemUpgrade_Separate::_CheckCondition @ 0x811e138

/* WongWork::CItemUpgrade_Separate::_CheckCondition(CUser const*, Inven_Item const&, CItem const*,
   Inven_Item const&, GenuineDamageUpgradeTable const&, int) const */

undefined4 __thiscall
WongWork::CItemUpgrade_Separate::_CheckCondition
          (CItemUpgrade_Separate *this,CUser *param_1,Inven_Item *param_2,CItem *param_3,
          Inven_Item *param_4,GenuineDamageUpgradeTable *param_5,int param_6)

{
  ushort uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  _Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeMaterialInfo>> local_30 [4];
  uint local_2c;
  map<int,GenuineDamageUpgradeMaterialInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeMaterialInfo>>>
  local_28 [7];
  byte local_21;
  int local_20;
  
  local_21 = CEquipItem::getGrowthGrade((CEquipItem *)param_3,param_6);
  local_2c = (uint)local_21;
  std::
  map<int,GenuineDamageUpgradeMaterialInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeMaterialInfo>>>
  ::find((int *)local_30);
  std::
  map<int,GenuineDamageUpgradeMaterialInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeMaterialInfo>>>
  ::end(local_28);
  cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeMaterialInfo>>::
          operator==(local_30,(_Rb_tree_const_iterator *)local_28);
  if (cVar2 == '\0') {
    iVar5 = std::_Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeMaterialInfo>>::
            operator->(local_30);
    local_20 = *(int *)(iVar5 + 4);
    if (*(int *)(param_4 + 2) == local_20) {
      uVar8 = *(uint *)(param_4 + 7);
      uVar4 = CItem::get_rarity(param_3);
      uVar6 = (**(code **)(*(int *)param_3 + 0xc))(param_3);
      uVar3 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(param_2 + 0x33));
      uVar7 = GenuineDamageUpgradeTable::getGenuineUpgradeMaterialCnt
                        (param_5,local_21,uVar3,uVar6,uVar4);
      if (uVar8 < uVar7) {
        uVar4 = 0x16;
      }
      else {
        iVar5 = (**(code **)(*(int *)param_3 + 0xc))(param_3);
        if (iVar5 == 10) {
          uVar1 = *(ushort *)(param_2 + 0xb);
          uVar8 = CEquipItem::get_endurance((CEquipItem *)param_3);
          if (uVar1 == uVar8) {
            uVar8 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(param_2 + 0x33))
            ;
            if (*(int *)(param_5 + 4) < (int)((uVar8 & 0xff) + 1)) {
              uVar4 = 0x5f;
            }
            else {
              uVar4 = 0;
            }
          }
          else {
            uVar4 = 7;
          }
        }
        else {
          uVar4 = 0x13;
        }
      }
    }
    else {
      uVar4 = 0x16;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

```

---

## _DoProcUpgrade

```asm
// === 0811e468 WongWork::CItemUpgrade_Separate::_DoProcUpgrade  [0x0811e468-0x811e539] ===
 811e468:	55                   	push   %ebp
 811e469:	89 e5                	mov    %esp,%ebp
 811e46b:	53                   	push   %ebx
 811e46c:	83 ec 24             	sub    $0x24,%esp
 811e46f:	8b 45 0c             	mov    0xc(%ebp),%eax
 811e472:	89 04 24             	mov    %eax,(%esp)
 811e475:	e8 74 09 00 00       	call   811edee <_ZNK5CUser16IsGameMasterModeEv>
 811e47a:	84 c0                	test   %al,%al
 811e47c:	74 47                	je     811e4c5 <_ZN8WongWork21CItemUpgrade_Separate14_DoProcUpgradeEP5CUserP10Inven_ItemPKNS_13STUpgradeInfoE+0x5d>
 811e47e:	8b 45 0c             	mov    0xc(%ebp),%eax
 811e481:	89 04 24             	mov    %eax,(%esp)
 811e484:	e8 1d 09 00 00       	call   811eda6 <_ZN15CUserCharacInfo26getUpgradeSeparateTrueFlagEv>
 811e489:	3c 01                	cmp    $0x1,%al
 811e48b:	0f 94 c0             	sete   %al
 811e48e:	84 c0                	test   %al,%al
 811e490:	74 18                	je     811e4aa <_ZN8WongWork21CItemUpgrade_Separate14_DoProcUpgradeEP5CUserP10Inven_ItemPKNS_13STUpgradeInfoE+0x42>
 811e492:	8b 45 10             	mov    0x10(%ebp),%eax
 811e495:	83 c0 33             	add    $0x33,%eax
 811e498:	89 04 24             	mov    %eax,(%esp)
 811e49b:	e8 92 08 00 00       	call   811ed32 <_ZN19UpgradeSeparateInfo18IncUpgradeSeparateEv>
 811e4a0:	b8 01 00 00 00       	mov    $0x1,%eax
 811e4a5:	e9 8a 00 00 00       	jmp    811e534 <_ZN8WongWork21CItemUpgrade_Separate14_DoProcUpgradeEP5CUserP10Inven_ItemPKNS_13STUpgradeInfoE+0xcc>
 811e4aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 811e4ad:	89 04 24             	mov    %eax,(%esp)
 811e4b0:	e8 15 09 00 00       	call   811edca <_ZN15CUserCharacInfo27getUpgradeSeparateFlaseFlagEv>
 811e4b5:	3c 01                	cmp    $0x1,%al
 811e4b7:	0f 94 c0             	sete   %al
 811e4ba:	84 c0                	test   %al,%al
 811e4bc:	74 07                	je     811e4c5 <_ZN8WongWork21CItemUpgrade_Separate14_DoProcUpgradeEP5CUserP10Inven_ItemPKNS_13STUpgradeInfoE+0x5d>
 811e4be:	b8 00 00 00 00       	mov    $0x0,%eax
 811e4c3:	eb 6f                	jmp    811e534 <_ZN8WongWork21CItemUpgrade_Separate14_DoProcUpgradeEP5CUserP10Inven_ItemPKNS_13STUpgradeInfoE+0xcc>
 811e4c5:	8b 45 14             	mov    0x14(%ebp),%eax
 811e4c8:	8b 40 04             	mov    0x4(%eax),%eax
 811e4cb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 811e4ce:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 811e4d2:	74 3d                	je     811e511 <_ZN8WongWork21CItemUpgrade_Separate14_DoProcUpgradeEP5CUserP10Inven_ItemPKNS_13STUpgradeInfoE+0xa9>
 811e4d4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 811e4d7:	89 d0                	mov    %edx,%eax
 811e4d9:	c1 e0 02             	shl    $0x2,%eax
 811e4dc:	01 d0                	add    %edx,%eax
 811e4de:	01 c0                	add    %eax,%eax
 811e4e0:	89 c3                	mov    %eax,%ebx
 811e4e2:	8b 45 08             	mov    0x8(%ebp),%eax
 811e4e5:	8b 80 90 01 00 00    	mov    0x190(%eax),%eax
 811e4eb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 811e4ee:	8b 45 08             	mov    0x8(%ebp),%eax
 811e4f1:	8b 80 8c 01 00 00    	mov    0x18c(%eax),%eax
 811e4f7:	8d 55 f0             	lea    -0x10(%ebp),%edx
 811e4fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 811e4fe:	89 04 24             	mov    %eax,(%esp)
 811e501:	e8 b8 d5 fa ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 811e506:	39 c3                	cmp    %eax,%ebx
 811e508:	73 07                	jae    811e511 <_ZN8WongWork21CItemUpgrade_Separate14_DoProcUpgradeEP5CUserP10Inven_ItemPKNS_13STUpgradeInfoE+0xa9>
 811e50a:	b8 01 00 00 00       	mov    $0x1,%eax
 811e50f:	eb 05                	jmp    811e516 <_ZN8WongWork21CItemUpgrade_Separate14_DoProcUpgradeEP5CUserP10Inven_ItemPKNS_13STUpgradeInfoE+0xae>
 811e511:	b8 00 00 00 00       	mov    $0x0,%eax
 811e516:	84 c0                	test   %al,%al
 811e518:	74 07                	je     811e521 <_ZN8WongWork21CItemUpgrade_Separate14_DoProcUpgradeEP5CUserP10Inven_ItemPKNS_13STUpgradeInfoE+0xb9>
 811e51a:	b8 00 00 00 00       	mov    $0x0,%eax
 811e51f:	eb 13                	jmp    811e534 <_ZN8WongWork21CItemUpgrade_Separate14_DoProcUpgradeEP5CUserP10Inven_ItemPKNS_13STUpgradeInfoE+0xcc>
 811e521:	8b 45 10             	mov    0x10(%ebp),%eax
 811e524:	83 c0 33             	add    $0x33,%eax
 811e527:	89 04 24             	mov    %eax,(%esp)
 811e52a:	e8 03 08 00 00       	call   811ed32 <_ZN19UpgradeSeparateInfo18IncUpgradeSeparateEv>
 811e52f:	b8 01 00 00 00       	mov    $0x1,%eax
 811e534:	83 c4 24             	add    $0x24,%esp
 811e537:	5b                   	pop    %ebx
 811e538:	5d                   	pop    %ebp
 811e539:	c3                   	ret

```

```c
// WongWork::CItemUpgrade_Separate::_DoProcUpgrade @ 0x811e468

/* WongWork::CItemUpgrade_Separate::_DoProcUpgrade(CUser*, Inven_Item*, WongWork::STUpgradeInfo
   const*) */

bool __thiscall
WongWork::CItemUpgrade_Separate::_DoProcUpgrade
          (CItemUpgrade_Separate *this,CUser *param_1,Inven_Item *param_2,STUpgradeInfo *param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  ulong local_14;
  int local_10;
  
  cVar3 = CUser::IsGameMasterMode(param_1);
  if (cVar3 != '\0') {
    cVar3 = CUserCharacInfo::getUpgradeSeparateTrueFlag((CUserCharacInfo *)param_1);
    if (cVar3 == '\x01') {
      UpgradeSeparateInfo::IncUpgradeSeparate((UpgradeSeparateInfo *)(param_2 + 0x33));
      return true;
    }
    cVar3 = CUserCharacInfo::getUpgradeSeparateFlaseFlag((CUserCharacInfo *)param_1);
    if (cVar3 == '\x01') {
      return false;
    }
  }
  local_10 = *(int *)(param_3 + 4);
  if (local_10 != 0) {
    uVar1 = local_10 * 10;
    local_14 = *(ulong *)(this + 400);
    uVar4 = CMTRand::randInt(*(CMTRand **)(this + 0x18c),&local_14);
    if (uVar1 < uVar4) {
      bVar2 = true;
      goto LAB_0811e516;
    }
  }
  bVar2 = false;
LAB_0811e516:
  if (!bVar2) {
    UpgradeSeparateInfo::IncUpgradeSeparate((UpgradeSeparateInfo *)(param_2 + 0x33));
  }
  return !bVar2;
}

```

---

## _GetPenaltyType

```asm
// === 0811e2ce WongWork::CItemUpgrade_Separate::_GetPenaltyType  [0x0811e2ce-0x811e2e1] ===
 811e2ce:	55                   	push   %ebp
 811e2cf:	89 e5                	mov    %esp,%ebp
 811e2d1:	83 ec 04             	sub    $0x4,%esp
 811e2d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 811e2d7:	88 45 fc             	mov    %al,-0x4(%ebp)
 811e2da:	b8 01 00 00 00       	mov    $0x1,%eax
 811e2df:	c9                   	leave
 811e2e0:	c3                   	ret
 811e2e1:	90                   	nop

```

```c
// WongWork::CItemUpgrade_Separate::_GetPenaltyType @ 0x811e2ce

/* WongWork::CItemUpgrade_Separate::_GetPenaltyType(unsigned char, ENUM_RARITY,
   GenuineDamageUpgradeTable const&, GenuineDamageUpgradeInfo const*) */

undefined4 WongWork::CItemUpgrade_Separate::_GetPenaltyType(void)

{
  return 1;
}

```

---

## _GetUpgradeInfo

```asm
// === 0811e2e2 WongWork::CItemUpgrade_Separate::_GetUpgradeInfo  [0x0811e2e2-0x811e467] ===
 811e2e2:	55                   	push   %ebp
 811e2e3:	89 e5                	mov    %esp,%ebp
 811e2e5:	56                   	push   %esi
 811e2e6:	53                   	push   %ebx
 811e2e7:	83 ec 50             	sub    $0x50,%esp
 811e2ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 811e2ed:	83 c0 33             	add    $0x33,%eax
 811e2f0:	89 04 24             	mov    %eax,(%esp)
 811e2f3:	e8 60 0a 00 00       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 811e2f8:	0f b6 d0             	movzbl %al,%edx
 811e2fb:	8b 45 14             	mov    0x14(%ebp),%eax
 811e2fe:	8b 40 04             	mov    0x4(%eax),%eax
 811e301:	39 c2                	cmp    %eax,%edx
 811e303:	7f 15                	jg     811e31a <_ZN8WongWork21CItemUpgrade_Separate15_GetUpgradeInfoEPK10Inven_ItemPK5CItemRK25GenuineDamageUpgradeTablePNS_13STUpgradeInfoEi+0x38>
 811e305:	8b 45 0c             	mov    0xc(%ebp),%eax
 811e308:	83 c0 33             	add    $0x33,%eax
 811e30b:	89 04 24             	mov    %eax,(%esp)
 811e30e:	e8 45 0a 00 00       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 811e313:	b8 00 00 00 00       	mov    $0x0,%eax
 811e318:	eb 05                	jmp    811e31f <_ZN8WongWork21CItemUpgrade_Separate15_GetUpgradeInfoEPK10Inven_ItemPK5CItemRK25GenuineDamageUpgradeTablePNS_13STUpgradeInfoEi+0x3d>
 811e31a:	b8 01 00 00 00       	mov    $0x1,%eax
 811e31f:	84 c0                	test   %al,%al
 811e321:	74 0a                	je     811e32d <_ZN8WongWork21CItemUpgrade_Separate15_GetUpgradeInfoEPK10Inven_ItemPK5CItemRK25GenuineDamageUpgradeTablePNS_13STUpgradeInfoEi+0x4b>
 811e323:	b8 00 00 00 00       	mov    $0x0,%eax
 811e328:	e9 31 01 00 00       	jmp    811e45e <_ZN8WongWork21CItemUpgrade_Separate15_GetUpgradeInfoEPK10Inven_ItemPK5CItemRK25GenuineDamageUpgradeTablePNS_13STUpgradeInfoEi+0x17c>
 811e32d:	8b 45 10             	mov    0x10(%ebp),%eax
 811e330:	8b 55 1c             	mov    0x1c(%ebp),%edx
 811e333:	89 54 24 04          	mov    %edx,0x4(%esp)
 811e337:	89 04 24             	mov    %eax,(%esp)
 811e33a:	e8 79 54 3f 00       	call   85137b8 <_ZNK10CEquipItem14getGrowthGradeEi>
 811e33f:	88 45 f3             	mov    %al,-0xd(%ebp)
 811e342:	8b 45 10             	mov    0x10(%ebp),%eax
 811e345:	89 04 24             	mov    %eax,(%esp)
 811e348:	e8 89 2f fd ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 811e34d:	89 c3                	mov    %eax,%ebx
 811e34f:	8b 45 10             	mov    0x10(%ebp),%eax
 811e352:	8b 00                	mov    (%eax),%eax
 811e354:	83 c0 0c             	add    $0xc,%eax
 811e357:	8b 10                	mov    (%eax),%edx
 811e359:	8b 45 10             	mov    0x10(%ebp),%eax
 811e35c:	89 04 24             	mov    %eax,(%esp)
 811e35f:	ff d2                	call   *%edx
 811e361:	89 c6                	mov    %eax,%esi
 811e363:	8b 45 0c             	mov    0xc(%ebp),%eax
 811e366:	83 c0 33             	add    $0x33,%eax
 811e369:	89 04 24             	mov    %eax,(%esp)
 811e36c:	e8 e7 09 00 00       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 811e371:	0f b6 d0             	movzbl %al,%edx
 811e374:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 811e378:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 811e37c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 811e380:	89 54 24 08          	mov    %edx,0x8(%esp)
 811e384:	89 44 24 04          	mov    %eax,0x4(%esp)
 811e388:	8b 45 14             	mov    0x14(%ebp),%eax
 811e38b:	89 04 24             	mov    %eax,(%esp)
 811e38e:	e8 f5 47 7f 00       	call   8912b88 <_ZNK25GenuineDamageUpgradeTable28getGenuineUpgradeMaterialCntEhi18ENUM_EQUIPMENTTYPE11ENUM_RARITY>
 811e393:	89 45 f4             	mov    %eax,-0xc(%ebp)
 811e396:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 811e39a:	79 0a                	jns    811e3a6 <_ZN8WongWork21CItemUpgrade_Separate15_GetUpgradeInfoEPK10Inven_ItemPK5CItemRK25GenuineDamageUpgradeTablePNS_13STUpgradeInfoEi+0xc4>
 811e39c:	b8 00 00 00 00       	mov    $0x0,%eax
 811e3a1:	e9 b8 00 00 00       	jmp    811e45e <_ZN8WongWork21CItemUpgrade_Separate15_GetUpgradeInfoEPK10Inven_ItemPK5CItemRK25GenuineDamageUpgradeTablePNS_13STUpgradeInfoEi+0x17c>
 811e3a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 811e3a9:	83 c0 33             	add    $0x33,%eax
 811e3ac:	89 04 24             	mov    %eax,(%esp)
 811e3af:	e8 a4 09 00 00       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 811e3b4:	0f b6 c0             	movzbl %al,%eax
 811e3b7:	83 c0 01             	add    $0x1,%eax
 811e3ba:	89 45 e8             	mov    %eax,-0x18(%ebp)
 811e3bd:	8b 45 14             	mov    0x14(%ebp),%eax
 811e3c0:	8d 88 58 01 00 00    	lea    0x158(%eax),%ecx
 811e3c6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 811e3c9:	8d 55 e8             	lea    -0x18(%ebp),%edx
 811e3cc:	89 54 24 08          	mov    %edx,0x8(%esp)
 811e3d0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 811e3d4:	89 04 24             	mov    %eax,(%esp)
 811e3d7:	e8 5e 0d 00 00       	call   811f13a <_ZNKSt3mapIi24GenuineDamageUpgradeInfoSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 811e3dc:	83 ec 04             	sub    $0x4,%esp
 811e3df:	8b 45 14             	mov    0x14(%ebp),%eax
 811e3e2:	8d 90 58 01 00 00    	lea    0x158(%eax),%edx
 811e3e8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811e3eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 811e3ef:	89 04 24             	mov    %eax,(%esp)
 811e3f2:	e8 6f 0d 00 00       	call   811f166 <_ZNKSt3mapIi24GenuineDamageUpgradeInfoSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 811e3f7:	83 ec 04             	sub    $0x4,%esp
 811e3fa:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811e3fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 811e401:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 811e404:	89 04 24             	mov    %eax,(%esp)
 811e407:	e8 80 0d 00 00       	call   811f18c <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi24GenuineDamageUpgradeInfoEEeqERKS4_>
 811e40c:	84 c0                	test   %al,%al
 811e40e:	74 07                	je     811e417 <_ZN8WongWork21CItemUpgrade_Separate15_GetUpgradeInfoEPK10Inven_ItemPK5CItemRK25GenuineDamageUpgradeTablePNS_13STUpgradeInfoEi+0x135>
 811e410:	b8 00 00 00 00       	mov    $0x0,%eax
 811e415:	eb 47                	jmp    811e45e <_ZN8WongWork21CItemUpgrade_Separate15_GetUpgradeInfoEPK10Inven_ItemPK5CItemRK25GenuineDamageUpgradeTablePNS_13STUpgradeInfoEi+0x17c>
 811e417:	8b 55 f4             	mov    -0xc(%ebp),%edx
 811e41a:	8b 45 18             	mov    0x18(%ebp),%eax
 811e41d:	89 10                	mov    %edx,(%eax)
 811e41f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 811e422:	89 04 24             	mov    %eax,(%esp)
 811e425:	e8 76 0d 00 00       	call   811f1a0 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi24GenuineDamageUpgradeInfoEEptEv>
 811e42a:	d9 40 0c             	flds   0xc(%eax)
 811e42d:	d9 05 b0 75 b5 08    	flds   0x8b575b0
 811e433:	de c9                	fmulp  %st,%st(1)
 811e435:	d9 7d d6             	fnstcw -0x2a(%ebp)
 811e438:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 811e43c:	b4 0c                	mov    $0xc,%ah
 811e43e:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 811e442:	d9 6d d4             	fldcw  -0x2c(%ebp)
 811e445:	df 7d c8             	fistpll -0x38(%ebp)
 811e448:	d9 6d d6             	fldcw  -0x2a(%ebp)
 811e44b:	8b 45 c8             	mov    -0x38(%ebp),%eax
 811e44e:	8b 55 cc             	mov    -0x34(%ebp),%edx
 811e451:	89 c2                	mov    %eax,%edx
 811e453:	8b 45 18             	mov    0x18(%ebp),%eax
 811e456:	89 50 04             	mov    %edx,0x4(%eax)
 811e459:	b8 01 00 00 00       	mov    $0x1,%eax
 811e45e:	8d 65 f8             	lea    -0x8(%ebp),%esp
 811e461:	83 c4 00             	add    $0x0,%esp
 811e464:	5b                   	pop    %ebx
 811e465:	5e                   	pop    %esi
 811e466:	5d                   	pop    %ebp
 811e467:	c3                   	ret

```

```c
// WongWork::CItemUpgrade_Separate::_GetUpgradeInfo @ 0x811e2e2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WongWork::CItemUpgrade_Separate::_GetUpgradeInfo(Inven_Item const*, CItem const*,
   GenuineDamageUpgradeTable const&, WongWork::STUpgradeInfo*, int) */

undefined4 __thiscall
WongWork::CItemUpgrade_Separate::_GetUpgradeInfo
          (CItemUpgrade_Separate *this,Inven_Item *param_1,CItem *param_2,
          GenuineDamageUpgradeTable *param_3,STUpgradeInfo *param_4,int param_5)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_3c;
  _Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeInfo>> local_20 [4];
  int local_1c;
  map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
  local_18 [7];
  undefined1 local_11;
  int local_10;
  
  uVar3 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(param_1 + 0x33));
  if (*(int *)(param_3 + 4) < (int)(uVar3 & 0xff)) {
    uVar4 = 0;
  }
  else {
    UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(param_1 + 0x33));
    local_11 = CEquipItem::getGrowthGrade((CEquipItem *)param_2,param_5);
    uVar4 = CItem::get_rarity(param_2);
    uVar5 = (**(code **)(*(int *)param_2 + 0xc))(param_2);
    uVar1 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(param_1 + 0x33));
    local_10 = GenuineDamageUpgradeTable::getGenuineUpgradeMaterialCnt
                         (param_3,local_11,uVar1,uVar5,uVar4);
    if (local_10 < 0) {
      uVar4 = 0;
    }
    else {
      uVar3 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(param_1 + 0x33));
      local_1c = (uVar3 & 0xff) + 1;
      std::
      map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
      ::find((int *)local_20);
      std::
      map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
      ::end(local_18);
      cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeInfo>>::
              operator==(local_20,(_Rb_tree_const_iterator *)local_18);
      if (cVar2 == '\0') {
        *(int *)param_4 = local_10;
        iVar6 = std::_Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeInfo>>::
                operator->(local_20);
        local_3c = (undefined4)(longlong)ROUND(_DAT_08b575b0 * *(float *)(iVar6 + 0xc));
        *(undefined4 *)(param_4 + 4) = local_3c;
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

```

---

## _NoticeUpgrade

```asm
// === 0811e53a WongWork::CItemUpgrade_Separate::_NoticeUpgrade  [0x0811e53a-0x811e66d] ===
 811e53a:	55                   	push   %ebp
 811e53b:	89 e5                	mov    %esp,%ebp
 811e53d:	56                   	push   %esi
 811e53e:	53                   	push   %ebx
 811e53f:	83 ec 30             	sub    $0x30,%esp
 811e542:	8b 45 14             	mov    0x14(%ebp),%eax
 811e545:	88 45 e4             	mov    %al,-0x1c(%ebp)
 811e548:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811e54b:	89 04 24             	mov    %eax,(%esp)
 811e54e:	e8 f9 f7 46 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 811e553:	c7 44 24 08 56 00 00 	movl   $0x56,0x8(%esp)
 811e55a:	00 
 811e55b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 811e562:	00 
 811e563:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811e566:	89 04 24             	mov    %eax,(%esp)
 811e569:	e8 8e d3 fa ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 811e56e:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 811e575:	00 
 811e576:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811e579:	89 04 24             	mov    %eax,(%esp)
 811e57c:	e8 9f d3 fa ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 811e581:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 811e585:	89 44 24 04          	mov    %eax,0x4(%esp)
 811e589:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811e58c:	89 04 24             	mov    %eax,(%esp)
 811e58f:	e8 8c d3 fa ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 811e594:	8b 45 0c             	mov    0xc(%ebp),%eax
 811e597:	89 04 24             	mov    %eax,(%esp)
 811e59a:	e8 dd bd fb ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 811e59f:	0f b7 c0             	movzwl %ax,%eax
 811e5a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 811e5a6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811e5a9:	89 04 24             	mov    %eax,(%esp)
 811e5ac:	e8 f3 b8 fb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 811e5b1:	8b 45 10             	mov    0x10(%ebp),%eax
 811e5b4:	8b 40 02             	mov    0x2(%eax),%eax
 811e5b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 811e5bb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811e5be:	89 04 24             	mov    %eax,(%esp)
 811e5c1:	e8 76 d3 fa ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 811e5c6:	8b 45 10             	mov    0x10(%ebp),%eax
 811e5c9:	89 04 24             	mov    %eax,(%esp)
 811e5cc:	e8 9b 6a fd ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 811e5d1:	0f b6 c0             	movzbl %al,%eax
 811e5d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 811e5d8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811e5db:	89 04 24             	mov    %eax,(%esp)
 811e5de:	e8 3d d3 fa ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 811e5e3:	8b 45 10             	mov    0x10(%ebp),%eax
 811e5e6:	83 c0 33             	add    $0x33,%eax
 811e5e9:	89 04 24             	mov    %eax,(%esp)
 811e5ec:	e8 67 07 00 00       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 811e5f1:	0f b6 c0             	movzbl %al,%eax
 811e5f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 811e5f8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811e5fb:	89 04 24             	mov    %eax,(%esp)
 811e5fe:	e8 1d d3 fa ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 811e603:	8b 45 10             	mov    0x10(%ebp),%eax
 811e606:	8d 50 25             	lea    0x25(%eax),%edx
 811e609:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811e60c:	89 44 24 04          	mov    %eax,0x4(%esp)
 811e610:	89 14 24             	mov    %edx,(%esp)
 811e613:	e8 96 0b 00 00       	call   811f1ae <_ZNK12RandomOption24put_packet_random_optionI11PacketGuardEEvRT_>
 811e618:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 811e61f:	00 
 811e620:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811e623:	89 04 24             	mov    %eax,(%esp)
 811e626:	e8 2d d3 fa ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 811e62b:	e8 77 bd fb ff       	call   80da3a7 <_Z11G_GameWorldv>
 811e630:	8d 55 ec             	lea    -0x14(%ebp),%edx
 811e633:	89 54 24 04          	mov    %edx,0x4(%esp)
 811e637:	89 04 24             	mov    %eax,(%esp)
 811e63a:	e8 d5 a5 5a 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 811e63f:	eb 1b                	jmp    811e65c <_ZN8WongWork21CItemUpgrade_Separate14_NoticeUpgradeEPK5CUserRK10Inven_Itemb+0x122>
 811e641:	89 d3                	mov    %edx,%ebx
 811e643:	89 c6                	mov    %eax,%esi
 811e645:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811e648:	89 04 24             	mov    %eax,(%esp)
 811e64b:	e8 30 f8 46 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 811e650:	89 f0                	mov    %esi,%eax
 811e652:	89 da                	mov    %ebx,%edx
 811e654:	89 04 24             	mov    %eax,(%esp)
 811e657:	e8 f4 50 9c 00       	call   8ae3750 <_Unwind_Resume>
 811e65c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 811e65f:	89 04 24             	mov    %eax,(%esp)
 811e662:	e8 19 f8 46 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 811e667:	83 c4 30             	add    $0x30,%esp
 811e66a:	5b                   	pop    %ebx
 811e66b:	5e                   	pop    %esi
 811e66c:	5d                   	pop    %ebp
 811e66d:	c3                   	ret

```

```c
// WongWork::CItemUpgrade_Separate::_NoticeUpgrade @ 0x811e53a

/* WongWork::CItemUpgrade_Separate::_NoticeUpgrade(CUser const*, Inven_Item const&, bool) */

void __thiscall
WongWork::CItemUpgrade_Separate::_NoticeUpgrade
          (CItemUpgrade_Separate *this,CUser *param_1,Inven_Item *param_2,bool param_3)

{
  uint uVar1;
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0811e569 to 0811e63e has its CatchHandler @ 0811e641 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x56);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,10);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)param_3);
  uVar1 = CUser::get_unique_id(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,uVar1 & 0xffff);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,*(int *)(param_2 + 2));
  uVar1 = Inven_Item::GetUpgrade(param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,uVar1 & 0xff);
  uVar1 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(param_2 + 0x33));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,uVar1 & 0xff);
  RandomOption::put_packet_random_option<PacketGuard>((RandomOption *)(param_2 + 0x25),local_18);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## ~CItemUpgrade_Separate

```asm
// === 0811e0be WongWork::CItemUpgrade_Separate::~CItemUpgrade_Separate  [0x0811e0be-0x811e137] ===
 811e0be:	55                   	push   %ebp
 811e0bf:	89 e5                	mov    %esp,%ebp
 811e0c1:	56                   	push   %esi
 811e0c2:	53                   	push   %ebx
 811e0c3:	83 ec 10             	sub    $0x10,%esp
 811e0c6:	8b 45 08             	mov    0x8(%ebp),%eax
 811e0c9:	c7 00 50 69 b5 08    	movl   $0x8b56950,(%eax)
 811e0cf:	8b 45 08             	mov    0x8(%ebp),%eax
 811e0d2:	8b 80 8c 01 00 00    	mov    0x18c(%eax),%eax
 811e0d8:	85 c0                	test   %eax,%eax
 811e0da:	74 11                	je     811e0ed <_ZN8WongWork21CItemUpgrade_SeparateD1Ev+0x2f>
 811e0dc:	8b 45 08             	mov    0x8(%ebp),%eax
 811e0df:	8b 80 8c 01 00 00    	mov    0x18c(%eax),%eax
 811e0e5:	89 04 24             	mov    %eax,(%esp)
 811e0e8:	e8 03 64 60 00       	call   87244f0 <_ZdlPv>
 811e0ed:	8b 45 08             	mov    0x8(%ebp),%eax
 811e0f0:	c7 80 8c 01 00 00 00 	movl   $0x0,0x18c(%eax)
 811e0f7:	00 00 00 
 811e0fa:	8b 45 08             	mov    0x8(%ebp),%eax
 811e0fd:	83 c0 04             	add    $0x4,%eax
 811e100:	89 04 24             	mov    %eax,(%esp)
 811e103:	e8 d2 0d 00 00       	call   811eeda <_ZN25GenuineDamageUpgradeTableD1Ev>
 811e108:	eb 1b                	jmp    811e125 <_ZN8WongWork21CItemUpgrade_SeparateD1Ev+0x67>
 811e10a:	89 d3                	mov    %edx,%ebx
 811e10c:	89 c6                	mov    %eax,%esi
 811e10e:	8b 45 08             	mov    0x8(%ebp),%eax
 811e111:	89 04 24             	mov    %eax,(%esp)
 811e114:	e8 29 e7 fd ff       	call   80fc842 <_ZN8WongWork12IItemUpgradeD1Ev>
 811e119:	89 f0                	mov    %esi,%eax
 811e11b:	89 da                	mov    %ebx,%edx
 811e11d:	89 04 24             	mov    %eax,(%esp)
 811e120:	e8 2b 56 9c 00       	call   8ae3750 <_Unwind_Resume>
 811e125:	8b 45 08             	mov    0x8(%ebp),%eax
 811e128:	89 04 24             	mov    %eax,(%esp)
 811e12b:	e8 12 e7 fd ff       	call   80fc842 <_ZN8WongWork12IItemUpgradeD1Ev>
 811e130:	83 c4 10             	add    $0x10,%esp
 811e133:	5b                   	pop    %ebx
 811e134:	5e                   	pop    %esi
 811e135:	5d                   	pop    %ebp
 811e136:	c3                   	ret
 811e137:	90                   	nop

```

```c
// WongWork::CItemUpgrade_Separate::~CItemUpgrade_Separate @ 0x811e0be

/* WongWork::CItemUpgrade_Separate::~CItemUpgrade_Separate() */

void __thiscall WongWork::CItemUpgrade_Separate::~CItemUpgrade_Separate(CItemUpgrade_Separate *this)

{
  *(undefined ***)this = &PTR_ProcUpgrade_08b56950;
  if (*(int *)(this + 0x18c) != 0) {
    operator_delete(*(void **)(this + 0x18c));
  }
  *(undefined4 *)(this + 0x18c) = 0;
                    /* try { // try from 0811e103 to 0811e107 has its CatchHandler @ 0811e10a */
  GenuineDamageUpgradeTable::~GenuineDamageUpgradeTable((GenuineDamageUpgradeTable *)(this + 4));
  IItemUpgrade::~IItemUpgrade((IItemUpgrade *)this);
  return;
}

```

