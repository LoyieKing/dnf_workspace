# RentalMachineDimension

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 15

---

## CheckRentableItem

```asm
// === 0826eea8 RentalMachineDimension::CheckRentableItem  [0x0826eea8-0x826ef15] ===
 826eea8:	55                   	push   %ebp
 826eea9:	89 e5                	mov    %esp,%ebp
 826eeab:	83 ec 28             	sub    $0x28,%esp
 826eeae:	8b 45 08             	mov    0x8(%ebp),%eax
 826eeb1:	83 c0 04             	add    $0x4,%eax
 826eeb4:	89 04 24             	mov    %eax,(%esp)
 826eeb7:	e8 32 0d 00 00       	call   826fbee <_ZNKSt8auto_ptrIN22RentalMachineDimension26RentalMachineDimensionImplEEptEv>
 826eebc:	8d 88 04 01 00 00    	lea    0x104(%eax),%ecx
 826eec2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 826eec5:	8d 55 0c             	lea    0xc(%ebp),%edx
 826eec8:	89 54 24 08          	mov    %edx,0x8(%esp)
 826eecc:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 826eed0:	89 04 24             	mov    %eax,(%esp)
 826eed3:	e8 5a 24 ea ff       	call   8111332 <_ZNSt3setIjSt4lessIjESaIjEE4findERKj>
 826eed8:	83 ec 04             	sub    $0x4,%esp
 826eedb:	8b 45 08             	mov    0x8(%ebp),%eax
 826eede:	83 c0 04             	add    $0x4,%eax
 826eee1:	89 04 24             	mov    %eax,(%esp)
 826eee4:	e8 05 0d 00 00       	call   826fbee <_ZNKSt8auto_ptrIN22RentalMachineDimension26RentalMachineDimensionImplEEptEv>
 826eee9:	8d 90 04 01 00 00    	lea    0x104(%eax),%edx
 826eeef:	8d 45 f4             	lea    -0xc(%ebp),%eax
 826eef2:	89 54 24 04          	mov    %edx,0x4(%esp)
 826eef6:	89 04 24             	mov    %eax,(%esp)
 826eef9:	e8 7a 23 ea ff       	call   8111278 <_ZNKSt3setIjSt4lessIjESaIjEE3endEv>
 826eefe:	83 ec 04             	sub    $0x4,%esp
 826ef01:	8d 45 f0             	lea    -0x10(%ebp),%eax
 826ef04:	89 44 24 04          	mov    %eax,0x4(%esp)
 826ef08:	8d 45 f4             	lea    -0xc(%ebp),%eax
 826ef0b:	89 04 24             	mov    %eax,(%esp)
 826ef0e:	e8 8b 23 ea ff       	call   811129e <_ZNKSt23_Rb_tree_const_iteratorIjEneERKS0_>
 826ef13:	c9                   	leave
 826ef14:	c3                   	ret
 826ef15:	90                   	nop

```

```c
// RentalMachineDimension::CheckRentableItem @ 0x826eea8

/* RentalMachineDimension::CheckRentableItem(unsigned int) */

void RentalMachineDimension::CheckRentableItem(uint param_1)

{
  _Rb_tree_const_iterator local_14 [4];
  set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> local_10 [12];
  
  std::auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl>::operator->
            ((auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl> *)(param_1 + 4));
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::find
            ((uint *)local_14);
  std::auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl>::operator->
            ((auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl> *)(param_1 + 4));
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::end(local_10);
  std::_Rb_tree_const_iterator<unsigned_int>::operator!=
            ((_Rb_tree_const_iterator<unsigned_int> *)local_10,local_14);
  return;
}

```

---

## CheckupAllRentalItems

```asm
// === 0826f52c RentalMachineDimension::CheckupAllRentalItems  [0x0826f52c-0x826f7e3] ===
 826f52c:	55                   	push   %ebp
 826f52d:	89 e5                	mov    %esp,%ebp
 826f52f:	56                   	push   %esi
 826f530:	53                   	push   %ebx
 826f531:	81 ec c0 00 00 00    	sub    $0xc0,%esp
 826f537:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 826f53e:	8b 55 10             	mov    0x10(%ebp),%edx
 826f541:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826f544:	89 54 24 04          	mov    %edx,0x4(%esp)
 826f548:	89 04 24             	mov    %eax,(%esp)
 826f54b:	e8 fa 05 00 00       	call   826fb4a <_ZNKSt6vectorIN20InstanceRentalSystem9RentInput10RentInElemESaIS2_EE5beginEv>
 826f550:	83 ec 04             	sub    $0x4,%esp
 826f553:	e9 2b 02 00 00       	jmp    826f783 <_ZN22RentalMachineDimension21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x257>
 826f558:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826f55b:	89 04 24             	mov    %eax,(%esp)
 826f55e:	e8 81 06 00 00       	call   826fbe4 <_ZNK9__gnu_cxx17__normal_iteratorIPKN20InstanceRentalSystem9RentInput10RentInElemESt6vectorIS3_SaIS3_EEEdeEv>
 826f563:	89 45 f0             	mov    %eax,-0x10(%ebp)
 826f566:	8d 45 cc             	lea    -0x34(%ebp),%eax
 826f569:	89 04 24             	mov    %eax,(%esp)
 826f56c:	e8 19 5f 6a 00       	call   891548a <_ZN19EventRewardItemInfoC1Ev>
 826f571:	8d 45 cc             	lea    -0x34(%ebp),%eax
 826f574:	89 44 24 0c          	mov    %eax,0xc(%esp)
 826f578:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826f57b:	89 44 24 08          	mov    %eax,0x8(%esp)
 826f57f:	8b 45 0c             	mov    0xc(%ebp),%eax
 826f582:	89 44 24 04          	mov    %eax,0x4(%esp)
 826f586:	8b 45 08             	mov    0x8(%ebp),%eax
 826f589:	89 04 24             	mov    %eax,(%esp)
 826f58c:	e8 b1 02 00 00       	call   826f842 <_ZN22RentalMachineDimension15GetRentItemInfoER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemER19EventRewardItemInfo>
 826f591:	83 f0 01             	xor    $0x1,%eax
 826f594:	84 c0                	test   %al,%al
 826f596:	74 0f                	je     826f5a7 <_ZN22RentalMachineDimension21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x7b>
 826f598:	bb 01 00 00 00       	mov    $0x1,%ebx
 826f59d:	be 00 00 00 00       	mov    $0x0,%esi
 826f5a2:	e9 c2 01 00 00       	jmp    826f769 <_ZN22RentalMachineDimension21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x23d>
 826f5a7:	8b 45 cc             	mov    -0x34(%ebp),%eax
 826f5aa:	89 c6                	mov    %eax,%esi
 826f5ac:	e8 ea cb e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 826f5b1:	89 74 24 04          	mov    %esi,0x4(%esp)
 826f5b5:	89 04 24             	mov    %eax,(%esp)
 826f5b8:	e8 75 04 0f 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 826f5bd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826f5c0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 826f5c4:	75 0f                	jne    826f5d5 <_ZN22RentalMachineDimension21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0xa9>
 826f5c6:	bb 01 00 00 00       	mov    $0x1,%ebx
 826f5cb:	be 00 00 00 00       	mov    $0x0,%esi
 826f5d0:	e9 94 01 00 00       	jmp    826f769 <_ZN22RentalMachineDimension21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x23d>
 826f5d5:	8d 45 8f             	lea    -0x71(%ebp),%eax
 826f5d8:	89 04 24             	mov    %eax,(%esp)
 826f5db:	e8 74 c2 e5 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 826f5e0:	8b 45 cc             	mov    -0x34(%ebp),%eax
 826f5e3:	89 45 91             	mov    %eax,-0x6f(%ebp)
 826f5e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826f5e9:	8b 00                	mov    (%eax),%eax
 826f5eb:	83 c0 08             	add    $0x8,%eax
 826f5ee:	8b 10                	mov    (%eax),%edx
 826f5f0:	8d 45 8f             	lea    -0x71(%ebp),%eax
 826f5f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 826f5f7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826f5fa:	89 04 24             	mov    %eax,(%esp)
 826f5fd:	ff d2                	call   *%edx
 826f5ff:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826f602:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 826f606:	84 c0                	test   %al,%al
 826f608:	0f 84 9e 00 00 00    	je     826f6ac <_ZN22RentalMachineDimension21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x180>
 826f60e:	8b 45 0c             	mov    0xc(%ebp),%eax
 826f611:	89 04 24             	mov    %eax,(%esp)
 826f614:	e8 65 ac e6 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 826f619:	8b 55 8f             	mov    -0x71(%ebp),%edx
 826f61c:	89 54 24 04          	mov    %edx,0x4(%esp)
 826f620:	8b 55 93             	mov    -0x6d(%ebp),%edx
 826f623:	89 54 24 08          	mov    %edx,0x8(%esp)
 826f627:	8b 55 97             	mov    -0x69(%ebp),%edx
 826f62a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 826f62e:	8b 55 9b             	mov    -0x65(%ebp),%edx
 826f631:	89 54 24 10          	mov    %edx,0x10(%esp)
 826f635:	8b 55 9f             	mov    -0x61(%ebp),%edx
 826f638:	89 54 24 14          	mov    %edx,0x14(%esp)
 826f63c:	8b 55 a3             	mov    -0x5d(%ebp),%edx
 826f63f:	89 54 24 18          	mov    %edx,0x18(%esp)
 826f643:	8b 55 a7             	mov    -0x59(%ebp),%edx
 826f646:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 826f64a:	8b 55 ab             	mov    -0x55(%ebp),%edx
 826f64d:	89 54 24 20          	mov    %edx,0x20(%esp)
 826f651:	8b 55 af             	mov    -0x51(%ebp),%edx
 826f654:	89 54 24 24          	mov    %edx,0x24(%esp)
 826f658:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 826f65b:	89 54 24 28          	mov    %edx,0x28(%esp)
 826f65f:	8b 55 b7             	mov    -0x49(%ebp),%edx
 826f662:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 826f666:	8b 55 bb             	mov    -0x45(%ebp),%edx
 826f669:	89 54 24 30          	mov    %edx,0x30(%esp)
 826f66d:	8b 55 bf             	mov    -0x41(%ebp),%edx
 826f670:	89 54 24 34          	mov    %edx,0x34(%esp)
 826f674:	8b 55 c3             	mov    -0x3d(%ebp),%edx
 826f677:	89 54 24 38          	mov    %edx,0x38(%esp)
 826f67b:	8b 55 c7             	mov    -0x39(%ebp),%edx
 826f67e:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 826f682:	0f b6 55 cb          	movzbl -0x35(%ebp),%edx
 826f686:	88 54 24 40          	mov    %dl,0x40(%esp)
 826f68a:	89 04 24             	mov    %eax,(%esp)
 826f68d:	e8 68 24 29 00       	call   8501afa <_ZNK10CInventory26tryInsertItemIntoEquipmentE10Inven_Item>
 826f692:	c1 e8 1f             	shr    $0x1f,%eax
 826f695:	84 c0                	test   %al,%al
 826f697:	0f 84 aa 00 00 00    	je     826f747 <_ZN22RentalMachineDimension21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x21b>
 826f69d:	bb cb 00 00 00       	mov    $0xcb,%ebx
 826f6a2:	be 00 00 00 00       	mov    $0x0,%esi
 826f6a7:	e9 bd 00 00 00       	jmp    826f769 <_ZN22RentalMachineDimension21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x23d>
 826f6ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 826f6af:	89 04 24             	mov    %eax,(%esp)
 826f6b2:	e8 c7 ab e6 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 826f6b7:	8b 55 8f             	mov    -0x71(%ebp),%edx
 826f6ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 826f6be:	8b 55 93             	mov    -0x6d(%ebp),%edx
 826f6c1:	89 54 24 08          	mov    %edx,0x8(%esp)
 826f6c5:	8b 55 97             	mov    -0x69(%ebp),%edx
 826f6c8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 826f6cc:	8b 55 9b             	mov    -0x65(%ebp),%edx
 826f6cf:	89 54 24 10          	mov    %edx,0x10(%esp)
 826f6d3:	8b 55 9f             	mov    -0x61(%ebp),%edx
 826f6d6:	89 54 24 14          	mov    %edx,0x14(%esp)
 826f6da:	8b 55 a3             	mov    -0x5d(%ebp),%edx
 826f6dd:	89 54 24 18          	mov    %edx,0x18(%esp)
 826f6e1:	8b 55 a7             	mov    -0x59(%ebp),%edx
 826f6e4:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 826f6e8:	8b 55 ab             	mov    -0x55(%ebp),%edx
 826f6eb:	89 54 24 20          	mov    %edx,0x20(%esp)
 826f6ef:	8b 55 af             	mov    -0x51(%ebp),%edx
 826f6f2:	89 54 24 24          	mov    %edx,0x24(%esp)
 826f6f6:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 826f6f9:	89 54 24 28          	mov    %edx,0x28(%esp)
 826f6fd:	8b 55 b7             	mov    -0x49(%ebp),%edx
 826f700:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 826f704:	8b 55 bb             	mov    -0x45(%ebp),%edx
 826f707:	89 54 24 30          	mov    %edx,0x30(%esp)
 826f70b:	8b 55 bf             	mov    -0x41(%ebp),%edx
 826f70e:	89 54 24 34          	mov    %edx,0x34(%esp)
 826f712:	8b 55 c3             	mov    -0x3d(%ebp),%edx
 826f715:	89 54 24 38          	mov    %edx,0x38(%esp)
 826f719:	8b 55 c7             	mov    -0x39(%ebp),%edx
 826f71c:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 826f720:	0f b6 55 cb          	movzbl -0x35(%ebp),%edx
 826f724:	88 54 24 40          	mov    %dl,0x40(%esp)
 826f728:	89 04 24             	mov    %eax,(%esp)
 826f72b:	e8 9a 27 29 00       	call   8501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>
 826f730:	c1 e8 1f             	shr    $0x1f,%eax
 826f733:	84 c0                	test   %al,%al
 826f735:	74 0c                	je     826f743 <_ZN22RentalMachineDimension21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x217>
 826f737:	bb cb 00 00 00       	mov    $0xcb,%ebx
 826f73c:	be 00 00 00 00       	mov    $0x0,%esi
 826f741:	eb 26                	jmp    826f769 <_ZN22RentalMachineDimension21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x23d>
 826f743:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 826f747:	be 01 00 00 00       	mov    $0x1,%esi
 826f74c:	eb 1b                	jmp    826f769 <_ZN22RentalMachineDimension21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x23d>
 826f74e:	89 d3                	mov    %edx,%ebx
 826f750:	89 c6                	mov    %eax,%esi
 826f752:	8d 45 cc             	lea    -0x34(%ebp),%eax
 826f755:	89 04 24             	mov    %eax,(%esp)
 826f758:	e8 43 03 00 00       	call   826faa0 <_ZN19EventRewardItemInfoD1Ev>
 826f75d:	89 f0                	mov    %esi,%eax
 826f75f:	89 da                	mov    %ebx,%edx
 826f761:	89 04 24             	mov    %eax,(%esp)
 826f764:	e8 e7 3f 87 00       	call   8ae3750 <_Unwind_Resume>
 826f769:	8d 45 cc             	lea    -0x34(%ebp),%eax
 826f76c:	89 04 24             	mov    %eax,(%esp)
 826f76f:	e8 2c 03 00 00       	call   826faa0 <_ZN19EventRewardItemInfoD1Ev>
 826f774:	85 f6                	test   %esi,%esi
 826f776:	74 5f                	je     826f7d7 <_ZN22RentalMachineDimension21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x2ab>
 826f778:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826f77b:	89 04 24             	mov    %eax,(%esp)
 826f77e:	e8 4b 04 00 00       	call   826fbce <_ZN9__gnu_cxx17__normal_iteratorIPKN20InstanceRentalSystem9RentInput10RentInElemESt6vectorIS3_SaIS3_EEEppEv>
 826f783:	8b 55 10             	mov    0x10(%ebp),%edx
 826f786:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826f789:	89 54 24 04          	mov    %edx,0x4(%esp)
 826f78d:	89 04 24             	mov    %eax,(%esp)
 826f790:	e8 e1 03 00 00       	call   826fb76 <_ZNKSt6vectorIN20InstanceRentalSystem9RentInput10RentInElemESaIS2_EE3endEv>
 826f795:	83 ec 04             	sub    $0x4,%esp
 826f798:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826f79b:	89 44 24 04          	mov    %eax,0x4(%esp)
 826f79f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826f7a2:	89 04 24             	mov    %eax,(%esp)
 826f7a5:	e8 f8 03 00 00       	call   826fba2 <_ZN9__gnu_cxxneIPKN20InstanceRentalSystem9RentInput10RentInElemESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 826f7aa:	84 c0                	test   %al,%al
 826f7ac:	0f 85 a6 fd ff ff    	jne    826f558 <_ZN22RentalMachineDimension21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x2c>
 826f7b2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826f7b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 826f7b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 826f7bc:	89 04 24             	mov    %eax,(%esp)
 826f7bf:	e8 9e 18 00 00       	call   8271062 <_ZN7pc_room33CheckInventoryEquipmentEmptyCountER5CUseri>
 826f7c4:	83 f0 01             	xor    $0x1,%eax
 826f7c7:	84 c0                	test   %al,%al
 826f7c9:	74 07                	je     826f7d2 <_ZN22RentalMachineDimension21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x2a6>
 826f7cb:	bb cb 00 00 00       	mov    $0xcb,%ebx
 826f7d0:	eb 05                	jmp    826f7d7 <_ZN22RentalMachineDimension21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x2ab>
 826f7d2:	bb 00 00 00 00       	mov    $0x0,%ebx
 826f7d7:	89 d8                	mov    %ebx,%eax
 826f7d9:	8d 65 f8             	lea    -0x8(%ebp),%esp
 826f7dc:	83 c4 00             	add    $0x0,%esp
 826f7df:	5b                   	pop    %ebx
 826f7e0:	5e                   	pop    %esi
 826f7e1:	5d                   	pop    %ebp
 826f7e2:	c3                   	ret
 826f7e3:	90                   	nop

```

```c
// RentalMachineDimension::CheckupAllRentalItems @ 0x826f52c

/* RentalMachineDimension::CheckupAllRentalItems(CUser&, InstanceRentalSystem::RentInput const&) */

undefined4 RentalMachineDimension::CheckupAllRentalItems(CUser *param_1,RentInput *param_2)

{
  bool bVar1;
  char cVar2;
  CDataManager *this;
  CInventory *pCVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 uVar5;
  undefined2 local_75;
  undefined2 uStack_73;
  undefined2 uStack_71;
  undefined2 uStack_6f;
  undefined4 local_6d;
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
  undefined4 local_3d;
  undefined1 local_39;
  int local_38 [6];
  __normal_iterator<InstanceRentalSystem::RentInput::RentInElem_const*,std::vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  int local_18;
  RentInElem *local_14;
  int *local_10;
  
  local_18 = 0;
  std::
  vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
  ::begin();
  do {
    std::
    vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
    ::end();
    bVar1 = __gnu_cxx::operator!=(local_20,local_1c);
    if (!bVar1) {
      cVar2 = pc_room::CheckInventoryEquipmentEmptyCount((CUser *)param_2,local_18);
      if (cVar2 == '\x01') {
        uVar5 = 0;
      }
      else {
        uVar5 = 0xcb;
      }
      return uVar5;
    }
    local_14 = (RentInElem *)
               __gnu_cxx::
               __normal_iterator<InstanceRentalSystem::RentInput::RentInElem_const*,std::vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>>
               ::operator*(local_20);
    EventRewardItemInfo::EventRewardItemInfo((EventRewardItemInfo *)local_38);
                    /* try { // try from 0826f58c to 0826f72f has its CatchHandler @ 0826f74e */
    cVar2 = GetRentItemInfo((RentalMachineDimension *)param_1,(CUser *)param_2,local_14,
                            (EventRewardItemInfo *)local_38);
    iVar4 = local_38[0];
    if (cVar2 == '\x01') {
      this = (CDataManager *)G_CDataManager();
      local_10 = (int *)CDataManager::find_item(this,iVar4);
      if (local_10 == (int *)0x0) {
        unaff_EBX = 1;
        bVar1 = false;
      }
      else {
        Inven_Item::Inven_Item((Inven_Item *)&local_75);
        uStack_73 = (undefined2)local_38[0];
        uStack_71 = (undefined2)((uint)local_38[0] >> 0x10);
        (**(code **)(*local_10 + 8))(local_10,&local_75);
        if (local_14[2] == (RentInElem)0x0) {
          uVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
          iVar4 = CInventory::tryInsertItemIntoInventory
                            (uVar5,CONCAT22(uStack_73,local_75),CONCAT22(uStack_6f,uStack_71),
                             local_6d,local_69,local_65,local_61,local_5d,local_59,local_55,local_51
                             ,local_4d,local_49,local_45,local_41,local_3d,local_39);
          if (-1 < iVar4) {
            local_18 = local_18 + 1;
            goto LAB_0826f747;
          }
          unaff_EBX = 0xcb;
          bVar1 = false;
        }
        else {
          pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
          iVar4 = CInventory::tryInsertItemIntoEquipment
                            (pCVar3,CONCAT22(uStack_73,local_75),CONCAT22(uStack_6f,uStack_71),
                             local_6d,local_69,local_65,local_61,local_5d,local_59,local_55,local_51
                             ,local_4d,local_49,local_45,local_41,local_3d,local_39);
          if (iVar4 < 0) {
            unaff_EBX = 0xcb;
            bVar1 = false;
          }
          else {
LAB_0826f747:
            bVar1 = true;
          }
        }
      }
    }
    else {
      unaff_EBX = 1;
      bVar1 = false;
    }
    EventRewardItemInfo::~EventRewardItemInfo((EventRewardItemInfo *)local_38);
    if (!bVar1) {
      return unaff_EBX;
    }
    __gnu_cxx::
    __normal_iterator<InstanceRentalSystem::RentInput::RentInElem_const*,std::vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>>
    ::operator++(local_20);
  } while( true );
}

```

---

## GetRentItemInfo

```asm
// === 0826f842 RentalMachineDimension::GetRentItemInfo  [0x0826f842-0x826f9bd] ===
 826f842:	55                   	push   %ebp
 826f843:	89 e5                	mov    %esp,%ebp
 826f845:	83 ec 38             	sub    $0x38,%esp
 826f848:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 826f84f:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 826f856:	00 
 826f857:	8d 45 e0             	lea    -0x20(%ebp),%eax
 826f85a:	89 44 24 04          	mov    %eax,0x4(%esp)
 826f85e:	8b 45 0c             	mov    0xc(%ebp),%eax
 826f861:	89 04 24             	mov    %eax,(%esp)
 826f864:	e8 8e 19 00 00       	call   82711f7 <_ZN7pc_room17GetSelectionIndexER5CUserRii>
 826f869:	83 f0 01             	xor    $0x1,%eax
 826f86c:	84 c0                	test   %al,%al
 826f86e:	74 0a                	je     826f87a <_ZN22RentalMachineDimension15GetRentItemInfoER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemER19EventRewardItemInfo+0x38>
 826f870:	b8 00 00 00 00       	mov    $0x0,%eax
 826f875:	e9 42 01 00 00       	jmp    826f9bc <_ZN22RentalMachineDimension15GetRentItemInfoER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemER19EventRewardItemInfo+0x17a>
 826f87a:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 826f87e:	8d 45 df             	lea    -0x21(%ebp),%eax
 826f881:	89 44 24 04          	mov    %eax,0x4(%esp)
 826f885:	8b 45 0c             	mov    0xc(%ebp),%eax
 826f888:	89 04 24             	mov    %eax,(%esp)
 826f88b:	e8 16 1a 00 00       	call   82712a6 <_ZN7pc_room15GetCharacterJobER5CUserRc>
 826f890:	83 f0 01             	xor    $0x1,%eax
 826f893:	84 c0                	test   %al,%al
 826f895:	74 0a                	je     826f8a1 <_ZN22RentalMachineDimension15GetRentItemInfoER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemER19EventRewardItemInfo+0x5f>
 826f897:	b8 00 00 00 00       	mov    $0x0,%eax
 826f89c:	e9 1b 01 00 00       	jmp    826f9bc <_ZN22RentalMachineDimension15GetRentItemInfoER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemER19EventRewardItemInfo+0x17a>
 826f8a1:	8b 55 e0             	mov    -0x20(%ebp),%edx
 826f8a4:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 826f8a8:	0f be c0             	movsbl %al,%eax
 826f8ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 826f8af:	89 04 24             	mov    %eax,(%esp)
 826f8b2:	e8 f6 4c 62 00       	call   88945ad <_Z30makeFairPVPEquipmentPackageKeyii>
 826f8b7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 826f8ba:	8b 45 10             	mov    0x10(%ebp),%eax
 826f8bd:	0f b6 40 03          	movzbl 0x3(%eax),%eax
 826f8c1:	3c 01                	cmp    $0x1,%al
 826f8c3:	75 2d                	jne    826f8f2 <_ZN22RentalMachineDimension15GetRentItemInfoER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemER19EventRewardItemInfo+0xb0>
 826f8c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 826f8c8:	89 04 24             	mov    %eax,(%esp)
 826f8cb:	e8 c4 13 ea ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 826f8d0:	0f be d0             	movsbl %al,%edx
 826f8d3:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 826f8d7:	0f be c0             	movsbl %al,%eax
 826f8da:	89 54 24 08          	mov    %edx,0x8(%esp)
 826f8de:	89 44 24 04          	mov    %eax,0x4(%esp)
 826f8e2:	8b 45 08             	mov    0x8(%ebp),%eax
 826f8e5:	89 04 24             	mov    %eax,(%esp)
 826f8e8:	e8 27 ff ff ff       	call   826f814 <_ZN22RentalMachineDimension21GetRewardItemGiveListEii>
 826f8ed:	89 45 e8             	mov    %eax,-0x18(%ebp)
 826f8f0:	eb 16                	jmp    826f908 <_ZN22RentalMachineDimension15GetRentItemInfoER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemER19EventRewardItemInfo+0xc6>
 826f8f2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 826f8f9:	00 
 826f8fa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 826f8fd:	89 04 24             	mov    %eax,(%esp)
 826f900:	e8 d5 19 00 00       	call   82712da <_ZN7pc_room26GetRewardItemSelectionListEii>
 826f905:	89 45 e8             	mov    %eax,-0x18(%ebp)
 826f908:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 826f90c:	75 0a                	jne    826f918 <_ZN22RentalMachineDimension15GetRentItemInfoER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemER19EventRewardItemInfo+0xd6>
 826f90e:	b8 00 00 00 00       	mov    $0x0,%eax
 826f913:	e9 a4 00 00 00       	jmp    826f9bc <_ZN22RentalMachineDimension15GetRentItemInfoER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemER19EventRewardItemInfo+0x17a>
 826f918:	8b 45 e8             	mov    -0x18(%ebp),%eax
 826f91b:	89 04 24             	mov    %eax,(%esp)
 826f91e:	e8 35 05 00 00       	call   826fe58 <_ZNKSt6vectorIS_I19EventRewardItemInfoSaIS0_EESaIS2_EE4sizeEv>
 826f923:	89 45 ec             	mov    %eax,-0x14(%ebp)
 826f926:	8b 45 10             	mov    0x10(%ebp),%eax
 826f929:	0f b6 00             	movzbl (%eax),%eax
 826f92c:	84 c0                	test   %al,%al
 826f92e:	78 0e                	js     826f93e <_ZN22RentalMachineDimension15GetRentItemInfoER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemER19EventRewardItemInfo+0xfc>
 826f930:	8b 45 10             	mov    0x10(%ebp),%eax
 826f933:	0f b6 00             	movzbl (%eax),%eax
 826f936:	0f be c0             	movsbl %al,%eax
 826f939:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 826f93c:	7c 07                	jl     826f945 <_ZN22RentalMachineDimension15GetRentItemInfoER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemER19EventRewardItemInfo+0x103>
 826f93e:	b8 00 00 00 00       	mov    $0x0,%eax
 826f943:	eb 77                	jmp    826f9bc <_ZN22RentalMachineDimension15GetRentItemInfoER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemER19EventRewardItemInfo+0x17a>
 826f945:	8b 45 10             	mov    0x10(%ebp),%eax
 826f948:	0f b6 00             	movzbl (%eax),%eax
 826f94b:	0f be c0             	movsbl %al,%eax
 826f94e:	89 44 24 04          	mov    %eax,0x4(%esp)
 826f952:	8b 45 e8             	mov    -0x18(%ebp),%eax
 826f955:	89 04 24             	mov    %eax,(%esp)
 826f958:	e8 1d 05 00 00       	call   826fe7a <_ZNSt6vectorIS_I19EventRewardItemInfoSaIS0_EESaIS2_EE2atEj>
 826f95d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 826f960:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826f963:	89 04 24             	mov    %eax,(%esp)
 826f966:	e8 eb 7c fc ff       	call   8237656 <_ZNKSt6vectorI19EventRewardItemInfoSaIS0_EE4sizeEv>
 826f96b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826f96e:	8b 45 10             	mov    0x10(%ebp),%eax
 826f971:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 826f975:	84 c0                	test   %al,%al
 826f977:	78 0f                	js     826f988 <_ZN22RentalMachineDimension15GetRentItemInfoER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemER19EventRewardItemInfo+0x146>
 826f979:	8b 45 10             	mov    0x10(%ebp),%eax
 826f97c:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 826f980:	0f be c0             	movsbl %al,%eax
 826f983:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 826f986:	7c 07                	jl     826f98f <_ZN22RentalMachineDimension15GetRentItemInfoER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemER19EventRewardItemInfo+0x14d>
 826f988:	b8 00 00 00 00       	mov    $0x0,%eax
 826f98d:	eb 2d                	jmp    826f9bc <_ZN22RentalMachineDimension15GetRentItemInfoER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemER19EventRewardItemInfo+0x17a>
 826f98f:	8b 45 10             	mov    0x10(%ebp),%eax
 826f992:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 826f996:	0f be c0             	movsbl %al,%eax
 826f999:	89 44 24 04          	mov    %eax,0x4(%esp)
 826f99d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826f9a0:	89 04 24             	mov    %eax,(%esp)
 826f9a3:	e8 fe 04 00 00       	call   826fea6 <_ZNSt6vectorI19EventRewardItemInfoSaIS0_EEixEj>
 826f9a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 826f9ac:	8b 45 14             	mov    0x14(%ebp),%eax
 826f9af:	89 04 24             	mov    %eax,(%esp)
 826f9b2:	e8 ff 00 00 00       	call   826fab6 <_ZN19EventRewardItemInfoaSERKS_>
 826f9b7:	b8 01 00 00 00       	mov    $0x1,%eax
 826f9bc:	c9                   	leave
 826f9bd:	c3                   	ret

```

```c
// RentalMachineDimension::GetRentItemInfo @ 0x826f842

/* RentalMachineDimension::GetRentItemInfo(CUser&, InstanceRentalSystem::RentInput::RentInElem
   const&, EventRewardItemInfo&) */

undefined4 __thiscall
RentalMachineDimension::GetRentItemInfo
          (RentalMachineDimension *this,CUser *param_1,RentInElem *param_2,
          EventRewardItemInfo *param_3)

{
  char cVar1;
  undefined4 uVar2;
  EventRewardItemInfo *pEVar3;
  char local_25;
  int local_24;
  int local_20;
  vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
  *local_1c;
  int local_18;
  vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>> *local_14;
  int local_10;
  
  local_24 = 0;
  cVar1 = pc_room::GetSelectionIndex(param_1,&local_24,2);
  if (cVar1 == '\x01') {
    local_25 = '\0';
    cVar1 = pc_room::GetCharacterJob(param_1,&local_25);
    if (cVar1 == '\x01') {
      local_20 = makeFairPVPEquipmentPackageKey((int)local_25,local_24);
      if (param_2[3] == (RentInElem)0x1) {
        cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
        local_1c = (vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
                    *)GetRewardItemGiveList(this,(int)local_25,(int)cVar1);
      }
      else {
        local_1c = (vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
                    *)pc_room::GetRewardItemSelectionList(local_20,2);
      }
      if (local_1c ==
          (vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
           *)0x0) {
        uVar2 = 0;
      }
      else {
        local_18 = std::
                   vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
                   ::size(local_1c);
        if (((char)*param_2 < '\0') || (local_18 <= (char)*param_2)) {
          uVar2 = 0;
        }
        else {
          local_14 = (vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>> *)
                     std::
                     vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
                     ::at(local_1c,(int)(char)*param_2);
          local_10 = std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>::size
                               (local_14);
          if (((char)param_2[1] < '\0') || (local_10 <= (char)param_2[1])) {
            uVar2 = 0;
          }
          else {
            pEVar3 = (EventRewardItemInfo *)
                     std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>::
                     operator[](local_14,(int)(char)param_2[1]);
            EventRewardItemInfo::operator=(param_3,pEVar3);
            uVar2 = 1;
          }
        }
      }
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

## GetRewardItemGiveList

```asm
// === 0826f814 RentalMachineDimension::GetRewardItemGiveList  [0x0826f814-0x826f841] ===
 826f814:	55                   	push   %ebp
 826f815:	89 e5                	mov    %esp,%ebp
 826f817:	83 ec 28             	sub    $0x28,%esp
 826f81a:	e8 7c c9 e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 826f81f:	05 34 4b 00 00       	add    $0x4b34,%eax
 826f824:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826f827:	8b 45 10             	mov    0x10(%ebp),%eax
 826f82a:	89 44 24 08          	mov    %eax,0x8(%esp)
 826f82e:	8b 45 0c             	mov    0xc(%ebp),%eax
 826f831:	89 44 24 04          	mov    %eax,0x4(%esp)
 826f835:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826f838:	89 04 24             	mov    %eax,(%esp)
 826f83b:	e8 c4 67 6a 00       	call   8916004 <_ZN29DimensionActivationRewardData21getRewardGiveItemListEii>
 826f840:	c9                   	leave
 826f841:	c3                   	ret

```

```c
// RentalMachineDimension::GetRewardItemGiveList @ 0x826f814

/* RentalMachineDimension::GetRewardItemGiveList(int, int) */

void __thiscall
RentalMachineDimension::GetRewardItemGiveList(RentalMachineDimension *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = G_CDataManager();
  DimensionActivationRewardData::getRewardGiveItemList
            ((DimensionActivationRewardData *)(iVar1 + 0x4b34),param_1,param_2);
  return;
}

```

---

## Ready

```asm
// === 0826ee94 RentalMachineDimension::Ready  [0x0826ee94-0x826eea7] ===
 826ee94:	55                   	push   %ebp
 826ee95:	89 e5                	mov    %esp,%ebp
 826ee97:	83 ec 18             	sub    $0x18,%esp
 826ee9a:	8b 45 08             	mov    0x8(%ebp),%eax
 826ee9d:	89 04 24             	mov    %eax,(%esp)
 826eea0:	e8 7d 01 00 00       	call   826f022 <_ZN22RentalMachineDimension24checkAllRentalItemScriptEv>
 826eea5:	c9                   	leave
 826eea6:	c3                   	ret
 826eea7:	90                   	nop

```

```c
// RentalMachineDimension::Ready @ 0x826ee94

/* RentalMachineDimension::Ready() */

void __thiscall RentalMachineDimension::Ready(RentalMachineDimension *this)

{
  checkAllRentalItemScript(this);
  return;
}

```

---

## Rent

```asm
// === 0826ec22 RentalMachineDimension::Rent  [0x0826ec22-0x826ee93] ===
 826ec22:	55                   	push   %ebp
 826ec23:	89 e5                	mov    %esp,%ebp
 826ec25:	56                   	push   %esi
 826ec26:	53                   	push   %ebx
 826ec27:	83 ec 50             	sub    $0x50,%esp
 826ec2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 826ec2d:	89 04 24             	mov    %eax,(%esp)
 826ec30:	e8 fd 23 00 00       	call   8271032 <_ZN7pc_room37CheckRentableEnvironmentAtChannelTypeER5CUser>
 826ec35:	83 f0 01             	xor    $0x1,%eax
 826ec38:	84 c0                	test   %al,%al
 826ec3a:	74 0a                	je     826ec46 <_ZN22RentalMachineDimension4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x24>
 826ec3c:	bb 07 00 00 00       	mov    $0x7,%ebx
 826ec41:	e9 41 02 00 00       	jmp    826ee87 <_ZN22RentalMachineDimension4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x265>
 826ec46:	8b 45 0c             	mov    0xc(%ebp),%eax
 826ec49:	89 04 24             	mov    %eax,(%esp)
 826ec4c:	e8 67 b6 e6 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 826ec51:	89 44 24 04          	mov    %eax,0x4(%esp)
 826ec55:	8b 45 08             	mov    0x8(%ebp),%eax
 826ec58:	89 04 24             	mov    %eax,(%esp)
 826ec5b:	e8 84 0b 00 00       	call   826f7e4 <_ZN22RentalMachineDimension16checkRentalLevelEi>
 826ec60:	83 f0 01             	xor    $0x1,%eax
 826ec63:	84 c0                	test   %al,%al
 826ec65:	74 0a                	je     826ec71 <_ZN22RentalMachineDimension4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x4f>
 826ec67:	bb 0e 00 00 00       	mov    $0xe,%ebx
 826ec6c:	e9 16 02 00 00       	jmp    826ee87 <_ZN22RentalMachineDimension4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x265>
 826ec71:	8b 45 0c             	mov    0xc(%ebp),%eax
 826ec74:	89 04 24             	mov    %eax,(%esp)
 826ec77:	e8 18 20 ea ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 826ec7c:	0f be c0             	movsbl %al,%eax
 826ec7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 826ec83:	8b 45 08             	mov    0x8(%ebp),%eax
 826ec86:	89 04 24             	mov    %eax,(%esp)
 826ec89:	e8 6e 0b 00 00       	call   826f7fc <_ZN22RentalMachineDimension18checkRentalGrowJobEi>
 826ec8e:	83 f0 01             	xor    $0x1,%eax
 826ec91:	84 c0                	test   %al,%al
 826ec93:	74 0a                	je     826ec9f <_ZN22RentalMachineDimension4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x7d>
 826ec95:	bb fe 00 00 00       	mov    $0xfe,%ebx
 826ec9a:	e9 e8 01 00 00       	jmp    826ee87 <_ZN22RentalMachineDimension4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x265>
 826ec9f:	8b 45 10             	mov    0x10(%ebp),%eax
 826eca2:	89 44 24 08          	mov    %eax,0x8(%esp)
 826eca6:	8b 45 0c             	mov    0xc(%ebp),%eax
 826eca9:	89 44 24 04          	mov    %eax,0x4(%esp)
 826ecad:	8b 45 08             	mov    0x8(%ebp),%eax
 826ecb0:	89 04 24             	mov    %eax,(%esp)
 826ecb3:	e8 74 08 00 00       	call   826f52c <_ZN22RentalMachineDimension21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE>
 826ecb8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 826ecbb:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 826ecbf:	74 08                	je     826ecc9 <_ZN22RentalMachineDimension4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0xa7>
 826ecc1:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 826ecc4:	e9 be 01 00 00       	jmp    826ee87 <_ZN22RentalMachineDimension4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x265>
 826ecc9:	8b 45 14             	mov    0x14(%ebp),%eax
 826eccc:	83 c0 0c             	add    $0xc,%eax
 826eccf:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 826ecd6:	00 
 826ecd7:	89 44 24 04          	mov    %eax,0x4(%esp)
 826ecdb:	8b 45 0c             	mov    0xc(%ebp),%eax
 826ecde:	89 04 24             	mov    %eax,(%esp)
 826ece1:	e8 21 2b 00 00       	call   8271807 <_ZN7pc_room42DeleteAllRentalItemInSameSectionForNewRentER5CUserRSt6vectorIN20InstanceRentalSystem15DeletedRentItemESaIS4_EEi>
 826ece6:	8b 55 10             	mov    0x10(%ebp),%edx
 826ece9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826ecec:	89 54 24 04          	mov    %edx,0x4(%esp)
 826ecf0:	89 04 24             	mov    %eax,(%esp)
 826ecf3:	e8 52 0e 00 00       	call   826fb4a <_ZNKSt6vectorIN20InstanceRentalSystem9RentInput10RentInElemESaIS2_EE5beginEv>
 826ecf8:	83 ec 04             	sub    $0x4,%esp
 826ecfb:	e9 53 01 00 00       	jmp    826ee53 <_ZN22RentalMachineDimension4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x231>
 826ed00:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826ed03:	89 04 24             	mov    %eax,(%esp)
 826ed06:	e8 d9 0e 00 00       	call   826fbe4 <_ZNK9__gnu_cxx17__normal_iteratorIPKN20InstanceRentalSystem9RentInput10RentInElemESt6vectorIS3_SaIS3_EEEdeEv>
 826ed0b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826ed0e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 826ed11:	89 04 24             	mov    %eax,(%esp)
 826ed14:	e8 71 67 6a 00       	call   891548a <_ZN19EventRewardItemInfoC1Ev>
 826ed19:	8d 45 d0             	lea    -0x30(%ebp),%eax
 826ed1c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 826ed20:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826ed23:	89 44 24 08          	mov    %eax,0x8(%esp)
 826ed27:	8b 45 0c             	mov    0xc(%ebp),%eax
 826ed2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 826ed2e:	8b 45 08             	mov    0x8(%ebp),%eax
 826ed31:	89 04 24             	mov    %eax,(%esp)
 826ed34:	e8 09 0b 00 00       	call   826f842 <_ZN22RentalMachineDimension15GetRentItemInfoER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemER19EventRewardItemInfo>
 826ed39:	83 f0 01             	xor    $0x1,%eax
 826ed3c:	84 c0                	test   %al,%al
 826ed3e:	74 56                	je     826ed96 <_ZN22RentalMachineDimension4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x174>
 826ed40:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826ed43:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 826ed47:	0f be d0             	movsbl %al,%edx
 826ed4a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826ed4d:	0f b6 00             	movzbl (%eax),%eax
 826ed50:	0f be c0             	movsbl %al,%eax
 826ed53:	89 54 24 18          	mov    %edx,0x18(%esp)
 826ed57:	89 44 24 14          	mov    %eax,0x14(%esp)
 826ed5b:	c7 44 24 10 04 90 bf 	movl   $0x8bf9004,0x10(%esp)
 826ed62:	08 
 826ed63:	c7 44 24 0c 43 00 00 	movl   $0x43,0xc(%esp)
 826ed6a:	00 
 826ed6b:	c7 44 24 08 60 9f bf 	movl   $0x8bf9f60,0x8(%esp)
 826ed72:	08 
 826ed73:	c7 44 24 04 62 90 bf 	movl   $0x8bf9062,0x4(%esp)
 826ed7a:	08 
 826ed7b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 826ed82:	e8 83 4e 86 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 826ed87:	bb 01 00 00 00       	mov    $0x1,%ebx
 826ed8c:	be 00 00 00 00       	mov    $0x0,%esi
 826ed91:	e9 a3 00 00 00       	jmp    826ee39 <_ZN22RentalMachineDimension4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x217>
 826ed96:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826ed99:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 826ed9d:	84 c0                	test   %al,%al
 826ed9f:	74 2a                	je     826edcb <_ZN22RentalMachineDimension4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x1a9>
 826eda1:	c7 44 24 10 3e 00 00 	movl   $0x3e,0x10(%esp)
 826eda8:	00 
 826eda9:	8b 45 14             	mov    0x14(%ebp),%eax
 826edac:	89 44 24 0c          	mov    %eax,0xc(%esp)
 826edb0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 826edb3:	89 44 24 08          	mov    %eax,0x8(%esp)
 826edb7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826edba:	89 44 24 04          	mov    %eax,0x4(%esp)
 826edbe:	8b 45 0c             	mov    0xc(%ebp),%eax
 826edc1:	89 04 24             	mov    %eax,(%esp)
 826edc4:	e8 fc 26 00 00       	call   82714c5 <_ZN7pc_room16ProcessEquipItemER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemERK19EventRewardItemInfoRNS2_10RentOutputEi>
 826edc9:	eb 28                	jmp    826edf3 <_ZN22RentalMachineDimension4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x1d1>
 826edcb:	c7 44 24 10 3e 00 00 	movl   $0x3e,0x10(%esp)
 826edd2:	00 
 826edd3:	8b 45 14             	mov    0x14(%ebp),%eax
 826edd6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 826edda:	8d 45 d0             	lea    -0x30(%ebp),%eax
 826eddd:	89 44 24 08          	mov    %eax,0x8(%esp)
 826ede1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826ede4:	89 44 24 04          	mov    %eax,0x4(%esp)
 826ede8:	8b 45 0c             	mov    0xc(%ebp),%eax
 826edeb:	89 04 24             	mov    %eax,(%esp)
 826edee:	e8 73 28 00 00       	call   8271666 <_ZN7pc_room17ProcessInsertItemER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemERK19EventRewardItemInfoRNS2_10RentOutputEi>
 826edf3:	8b 45 10             	mov    0x10(%ebp),%eax
 826edf6:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 826edfa:	84 c0                	test   %al,%al
 826edfc:	74 19                	je     826ee17 <_ZN22RentalMachineDimension4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x1f5>
 826edfe:	8b 45 d0             	mov    -0x30(%ebp),%eax
 826ee01:	89 44 24 08          	mov    %eax,0x8(%esp)
 826ee05:	8b 45 0c             	mov    0xc(%ebp),%eax
 826ee08:	89 44 24 04          	mov    %eax,0x4(%esp)
 826ee0c:	8b 45 08             	mov    0x8(%ebp),%eax
 826ee0f:	89 04 24             	mov    %eax,(%esp)
 826ee12:	e8 ff 00 00 00       	call   826ef16 <_ZN22RentalMachineDimension3logER5CUseri>
 826ee17:	be 01 00 00 00       	mov    $0x1,%esi
 826ee1c:	eb 1b                	jmp    826ee39 <_ZN22RentalMachineDimension4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x217>
 826ee1e:	89 d3                	mov    %edx,%ebx
 826ee20:	89 c6                	mov    %eax,%esi
 826ee22:	8d 45 d0             	lea    -0x30(%ebp),%eax
 826ee25:	89 04 24             	mov    %eax,(%esp)
 826ee28:	e8 73 0c 00 00       	call   826faa0 <_ZN19EventRewardItemInfoD1Ev>
 826ee2d:	89 f0                	mov    %esi,%eax
 826ee2f:	89 da                	mov    %ebx,%edx
 826ee31:	89 04 24             	mov    %eax,(%esp)
 826ee34:	e8 17 49 87 00       	call   8ae3750 <_Unwind_Resume>
 826ee39:	8d 45 d0             	lea    -0x30(%ebp),%eax
 826ee3c:	89 04 24             	mov    %eax,(%esp)
 826ee3f:	e8 5c 0c 00 00       	call   826faa0 <_ZN19EventRewardItemInfoD1Ev>
 826ee44:	85 f6                	test   %esi,%esi
 826ee46:	74 3f                	je     826ee87 <_ZN22RentalMachineDimension4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x265>
 826ee48:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826ee4b:	89 04 24             	mov    %eax,(%esp)
 826ee4e:	e8 7b 0d 00 00       	call   826fbce <_ZN9__gnu_cxx17__normal_iteratorIPKN20InstanceRentalSystem9RentInput10RentInElemESt6vectorIS3_SaIS3_EEEppEv>
 826ee53:	8b 55 10             	mov    0x10(%ebp),%edx
 826ee56:	8d 45 ec             	lea    -0x14(%ebp),%eax
 826ee59:	89 54 24 04          	mov    %edx,0x4(%esp)
 826ee5d:	89 04 24             	mov    %eax,(%esp)
 826ee60:	e8 11 0d 00 00       	call   826fb76 <_ZNKSt6vectorIN20InstanceRentalSystem9RentInput10RentInElemESaIS2_EE3endEv>
 826ee65:	83 ec 04             	sub    $0x4,%esp
 826ee68:	8d 45 ec             	lea    -0x14(%ebp),%eax
 826ee6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 826ee6f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826ee72:	89 04 24             	mov    %eax,(%esp)
 826ee75:	e8 28 0d 00 00       	call   826fba2 <_ZN9__gnu_cxxneIPKN20InstanceRentalSystem9RentInput10RentInElemESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 826ee7a:	84 c0                	test   %al,%al
 826ee7c:	0f 85 7e fe ff ff    	jne    826ed00 <_ZN22RentalMachineDimension4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0xde>
 826ee82:	bb 00 00 00 00       	mov    $0x0,%ebx
 826ee87:	89 d8                	mov    %ebx,%eax
 826ee89:	8d 65 f8             	lea    -0x8(%ebp),%esp
 826ee8c:	83 c4 00             	add    $0x0,%esp
 826ee8f:	5b                   	pop    %ebx
 826ee90:	5e                   	pop    %esi
 826ee91:	5d                   	pop    %ebp
 826ee92:	c3                   	ret
 826ee93:	90                   	nop

```

```c
// RentalMachineDimension::Rent @ 0x826ec22

/* RentalMachineDimension::Rent(CUser&, InstanceRentalSystem::RentInput const&,
   InstanceRentalSystem::RentOutput&) */

int __thiscall
RentalMachineDimension::Rent
          (RentalMachineDimension *this,CUser *param_1,RentInput *param_2,RentOutput *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int unaff_EBX;
  int local_34 [6];
  __normal_iterator<InstanceRentalSystem::RentInput::RentInElem_const*,std::vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  int local_14;
  RentInElem *local_10;
  
  cVar1 = pc_room::CheckRentableEnvironmentAtChannelType(param_1);
  if (cVar1 == '\x01') {
    iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    cVar1 = checkRentalLevel(this,iVar3);
    if (cVar1 == '\x01') {
      cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
      cVar1 = checkRentalGrowJob(this,(int)cVar1);
      if (cVar1 == '\x01') {
        local_14 = CheckupAllRentalItems((CUser *)this,(RentInput *)param_1);
        if (local_14 == 0) {
          pc_room::DeleteAllRentalItemInSameSectionForNewRent(param_1,(vector *)(param_3 + 0xc),2);
          std::
          vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
          ::begin();
          while( true ) {
            std::
            vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
            ::end();
            bVar2 = __gnu_cxx::operator!=(local_1c,local_18);
            if (!bVar2) break;
            local_10 = (RentInElem *)
                       __gnu_cxx::
                       __normal_iterator<InstanceRentalSystem::RentInput::RentInElem_const*,std::vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>>
                       ::operator*(local_1c);
            EventRewardItemInfo::EventRewardItemInfo((EventRewardItemInfo *)local_34);
                    /* try { // try from 0826ed34 to 0826ee16 has its CatchHandler @ 0826ee1e */
            cVar1 = GetRentItemInfo(this,param_1,local_10,(EventRewardItemInfo *)local_34);
            if (cVar1 == '\x01') {
              if (local_10[2] == (RentInElem)0x0) {
                pc_room::ProcessInsertItem
                          (param_1,local_10,(EventRewardItemInfo *)local_34,param_3,0x3e);
              }
              else {
                pc_room::ProcessEquipItem
                          (param_1,local_10,(EventRewardItemInfo *)local_34,param_3,0x3e);
              }
              if (param_2[0x10] != (RentInput)0x0) {
                log(this,param_1,local_34[0]);
              }
              bVar2 = true;
            }
            else {
              LogManager::logFormat
                        (1,"RentalMachineDimension.cpp",
                         "virtual ENUM_ERROR RentalMachineDimension::Rent(CUser&, const InstanceRentalSystem::RentInput&, InstanceRentalSystem::RentOutput&)"
                         ,0x43,
                         "Rent error. GetDimensionRentItemInfo return false. scriptSectionIndex(%d), scriptSeqIndex(%d)"
                         ,(int)(char)*local_10,(int)(char)local_10[1]);
              unaff_EBX = 1;
              bVar2 = false;
            }
            EventRewardItemInfo::~EventRewardItemInfo((EventRewardItemInfo *)local_34);
            if (!bVar2) {
              return unaff_EBX;
            }
            __gnu_cxx::
            __normal_iterator<InstanceRentalSystem::RentInput::RentInElem_const*,std::vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>>
            ::operator++(local_1c);
          }
          local_14 = 0;
        }
      }
      else {
        local_14 = 0xfe;
      }
    }
    else {
      local_14 = 0xe;
    }
  }
  else {
    local_14 = 7;
  }
  return local_14;
}

```

---

## RentalMachineDimension

```asm
// === 0826eafc RentalMachineDimension::RentalMachineDimension  [0x0826eafc-0x826eba1] ===
 826eafc:	55                   	push   %ebp
 826eafd:	89 e5                	mov    %esp,%ebp
 826eaff:	57                   	push   %edi
 826eb00:	56                   	push   %esi
 826eb01:	53                   	push   %ebx
 826eb02:	83 ec 1c             	sub    $0x1c,%esp
 826eb05:	8b 45 08             	mov    0x8(%ebp),%eax
 826eb08:	89 04 24             	mov    %eax,(%esp)
 826eb0b:	e8 4e 0f 00 00       	call   826fa5e <_ZN14IRentalMachineC1Ev>
 826eb10:	8b 45 08             	mov    0x8(%ebp),%eax
 826eb13:	c7 00 f0 9f bf 08    	movl   $0x8bf9ff0,(%eax)
 826eb19:	c7 04 24 1c 01 00 00 	movl   $0x11c,(%esp)
 826eb20:	e8 2b 59 4b 00       	call   8724450 <_Znwj>
 826eb25:	89 c3                	mov    %eax,%ebx
 826eb27:	89 d8                	mov    %ebx,%eax
 826eb29:	89 04 24             	mov    %eax,(%esp)
 826eb2c:	e8 3b 0f 00 00       	call   826fa6c <_ZN22RentalMachineDimension26RentalMachineDimensionImplC1Ev>
 826eb31:	eb 12                	jmp    826eb45 <_ZN22RentalMachineDimensionC1Ev+0x49>
 826eb33:	89 d6                	mov    %edx,%esi
 826eb35:	89 c7                	mov    %eax,%edi
 826eb37:	89 1c 24             	mov    %ebx,(%esp)
 826eb3a:	e8 b1 59 4b 00       	call   87244f0 <_ZdlPv>
 826eb3f:	89 f8                	mov    %edi,%eax
 826eb41:	89 f2                	mov    %esi,%edx
 826eb43:	eb 39                	jmp    826eb7e <_ZN22RentalMachineDimensionC1Ev+0x82>
 826eb45:	89 d8                	mov    %ebx,%eax
 826eb47:	8b 55 08             	mov    0x8(%ebp),%edx
 826eb4a:	83 c2 04             	add    $0x4,%edx
 826eb4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 826eb51:	89 14 24             	mov    %edx,(%esp)
 826eb54:	e8 a5 0f 00 00       	call   826fafe <_ZNSt8auto_ptrIN22RentalMachineDimension26RentalMachineDimensionImplEEC1EPS1_>
 826eb59:	8b 45 08             	mov    0x8(%ebp),%eax
 826eb5c:	89 04 24             	mov    %eax,(%esp)
 826eb5f:	e8 78 04 00 00       	call   826efdc <_ZN22RentalMachineDimension22initLoggingEnvironmentEv>
 826eb64:	eb 33                	jmp    826eb99 <_ZN22RentalMachineDimensionC1Ev+0x9d>
 826eb66:	89 d3                	mov    %edx,%ebx
 826eb68:	89 c6                	mov    %eax,%esi
 826eb6a:	8b 45 08             	mov    0x8(%ebp),%eax
 826eb6d:	83 c0 04             	add    $0x4,%eax
 826eb70:	89 04 24             	mov    %eax,(%esp)
 826eb73:	e8 ac 0f 00 00       	call   826fb24 <_ZNSt8auto_ptrIN22RentalMachineDimension26RentalMachineDimensionImplEED1Ev>
 826eb78:	89 f0                	mov    %esi,%eax
 826eb7a:	89 da                	mov    %ebx,%edx
 826eb7c:	eb 00                	jmp    826eb7e <_ZN22RentalMachineDimensionC1Ev+0x82>
 826eb7e:	89 d3                	mov    %edx,%ebx
 826eb80:	89 c6                	mov    %eax,%esi
 826eb82:	8b 45 08             	mov    0x8(%ebp),%eax
 826eb85:	89 04 24             	mov    %eax,(%esp)
 826eb88:	e8 8d 0e 00 00       	call   826fa1a <_ZN14IRentalMachineD1Ev>
 826eb8d:	89 f0                	mov    %esi,%eax
 826eb8f:	89 da                	mov    %ebx,%edx
 826eb91:	89 04 24             	mov    %eax,(%esp)
 826eb94:	e8 b7 4b 87 00       	call   8ae3750 <_Unwind_Resume>
 826eb99:	83 c4 1c             	add    $0x1c,%esp
 826eb9c:	5b                   	pop    %ebx
 826eb9d:	5e                   	pop    %esi
 826eb9e:	5f                   	pop    %edi
 826eb9f:	5d                   	pop    %ebp
 826eba0:	c3                   	ret
 826eba1:	90                   	nop

```

```c
// RentalMachineDimension::RentalMachineDimension @ 0x826eafc

/* RentalMachineDimension::RentalMachineDimension() */

void __thiscall RentalMachineDimension::RentalMachineDimension(RentalMachineDimension *this)

{
  RentalMachineDimensionImpl *this_00;
  
  IRentalMachine::IRentalMachine((IRentalMachine *)this);
  *(undefined ***)this = &PTR__RentalMachineDimension_08bf9ff0;
                    /* try { // try from 0826eb20 to 0826eb24 has its CatchHandler @ 0826eb7e */
  this_00 = operator_new(0x11c);
                    /* try { // try from 0826eb2c to 0826eb30 has its CatchHandler @ 0826eb33 */
  RentalMachineDimensionImpl::RentalMachineDimensionImpl(this_00);
  std::auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl>::auto_ptr
            ((auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl> *)(this + 4),this_00);
                    /* try { // try from 0826eb5f to 0826eb63 has its CatchHandler @ 0826eb66 */
  initLoggingEnvironment(this);
  return;
}

```

---

## checkAllRentalItemScript

```asm
// === 0826f022 RentalMachineDimension::checkAllRentalItemScript  [0x0826f022-0x826f14d] ===
 826f022:	55                   	push   %ebp
 826f023:	89 e5                	mov    %esp,%ebp
 826f025:	83 ec 38             	sub    $0x38,%esp
 826f028:	e8 6e d1 e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 826f02d:	8d 90 40 4b 00 00    	lea    0x4b40(%eax),%edx
 826f033:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826f036:	89 54 24 04          	mov    %edx,0x4(%esp)
 826f03a:	89 04 24             	mov    %eax,(%esp)
 826f03d:	e8 b6 0b 00 00       	call   826fbf8 <_ZNSt3mapIiSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE5beginEv>
 826f042:	83 ec 04             	sub    $0x4,%esp
 826f045:	eb 3f                	jmp    826f086 <_ZN22RentalMachineDimension24checkAllRentalItemScriptEv+0x64>
 826f047:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826f04a:	89 04 24             	mov    %eax,(%esp)
 826f04d:	e8 24 0c 00 00       	call   826fc76 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIS2_I19EventRewardItemInfoSaIS3_EESaIS5_EEEEdeEv>
 826f052:	83 c0 04             	add    $0x4,%eax
 826f055:	89 45 f0             	mov    %eax,-0x10(%ebp)
 826f058:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826f05b:	89 44 24 04          	mov    %eax,0x4(%esp)
 826f05f:	8b 45 08             	mov    0x8(%ebp),%eax
 826f062:	89 04 24             	mov    %eax,(%esp)
 826f065:	e8 e4 00 00 00       	call   826f14e <_ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE>
 826f06a:	83 f0 01             	xor    $0x1,%eax
 826f06d:	84 c0                	test   %al,%al
 826f06f:	74 0a                	je     826f07b <_ZN22RentalMachineDimension24checkAllRentalItemScriptEv+0x59>
 826f071:	b8 00 00 00 00       	mov    $0x0,%eax
 826f076:	e9 d1 00 00 00       	jmp    826f14c <_ZN22RentalMachineDimension24checkAllRentalItemScriptEv+0x12a>
 826f07b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826f07e:	89 04 24             	mov    %eax,(%esp)
 826f081:	e8 d2 0b 00 00       	call   826fc58 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIS2_I19EventRewardItemInfoSaIS3_EESaIS5_EEEEppEv>
 826f086:	e8 10 d1 e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 826f08b:	8d 90 40 4b 00 00    	lea    0x4b40(%eax),%edx
 826f091:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826f094:	89 54 24 04          	mov    %edx,0x4(%esp)
 826f098:	89 04 24             	mov    %eax,(%esp)
 826f09b:	e8 7e 0b 00 00       	call   826fc1e <_ZNSt3mapIiSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 826f0a0:	83 ec 04             	sub    $0x4,%esp
 826f0a3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826f0a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 826f0aa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826f0ad:	89 04 24             	mov    %eax,(%esp)
 826f0b0:	e8 8f 0b 00 00       	call   826fc44 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIS2_I19EventRewardItemInfoSaIS3_EESaIS5_EEEEneERKS9_>
 826f0b5:	84 c0                	test   %al,%al
 826f0b7:	75 8e                	jne    826f047 <_ZN22RentalMachineDimension24checkAllRentalItemScriptEv+0x25>
 826f0b9:	e8 dd d0 e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 826f0be:	8d 90 58 4b 00 00    	lea    0x4b58(%eax),%edx
 826f0c4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 826f0c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 826f0cb:	89 04 24             	mov    %eax,(%esp)
 826f0ce:	e8 b1 0b 00 00       	call   826fc84 <_ZNSt3mapISt4pairIiiESt6vectorIS2_I19EventRewardItemInfoSaIS3_EESaIS5_EESt4lessIS1_ESaIS0_IKS1_S7_EEE5beginEv>
 826f0d3:	83 ec 04             	sub    $0x4,%esp
 826f0d6:	eb 3c                	jmp    826f114 <_ZN22RentalMachineDimension24checkAllRentalItemScriptEv+0xf2>
 826f0d8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 826f0db:	89 04 24             	mov    %eax,(%esp)
 826f0de:	e8 1f 0c 00 00       	call   826fd02 <_ZNKSt17_Rb_tree_iteratorISt4pairIKS0_IiiESt6vectorIS3_I19EventRewardItemInfoSaIS4_EESaIS6_EEEEdeEv>
 826f0e3:	83 c0 08             	add    $0x8,%eax
 826f0e6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826f0e9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826f0ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 826f0f0:	8b 45 08             	mov    0x8(%ebp),%eax
 826f0f3:	89 04 24             	mov    %eax,(%esp)
 826f0f6:	e8 53 00 00 00       	call   826f14e <_ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE>
 826f0fb:	83 f0 01             	xor    $0x1,%eax
 826f0fe:	84 c0                	test   %al,%al
 826f100:	74 07                	je     826f109 <_ZN22RentalMachineDimension24checkAllRentalItemScriptEv+0xe7>
 826f102:	b8 00 00 00 00       	mov    $0x0,%eax
 826f107:	eb 43                	jmp    826f14c <_ZN22RentalMachineDimension24checkAllRentalItemScriptEv+0x12a>
 826f109:	8d 45 e0             	lea    -0x20(%ebp),%eax
 826f10c:	89 04 24             	mov    %eax,(%esp)
 826f10f:	e8 d0 0b 00 00       	call   826fce4 <_ZNSt17_Rb_tree_iteratorISt4pairIKS0_IiiESt6vectorIS3_I19EventRewardItemInfoSaIS4_EESaIS6_EEEEppEv>
 826f114:	e8 82 d0 e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 826f119:	8d 90 58 4b 00 00    	lea    0x4b58(%eax),%edx
 826f11f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 826f122:	89 54 24 04          	mov    %edx,0x4(%esp)
 826f126:	89 04 24             	mov    %eax,(%esp)
 826f129:	e8 7c 0b 00 00       	call   826fcaa <_ZNSt3mapISt4pairIiiESt6vectorIS2_I19EventRewardItemInfoSaIS3_EESaIS5_EESt4lessIS1_ESaIS0_IKS1_S7_EEE3endEv>
 826f12e:	83 ec 04             	sub    $0x4,%esp
 826f131:	8d 45 ec             	lea    -0x14(%ebp),%eax
 826f134:	89 44 24 04          	mov    %eax,0x4(%esp)
 826f138:	8d 45 e0             	lea    -0x20(%ebp),%eax
 826f13b:	89 04 24             	mov    %eax,(%esp)
 826f13e:	e8 8d 0b 00 00       	call   826fcd0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKS0_IiiESt6vectorIS3_I19EventRewardItemInfoSaIS4_EESaIS6_EEEEneERKSA_>
 826f143:	84 c0                	test   %al,%al
 826f145:	75 91                	jne    826f0d8 <_ZN22RentalMachineDimension24checkAllRentalItemScriptEv+0xb6>
 826f147:	b8 01 00 00 00       	mov    $0x1,%eax
 826f14c:	c9                   	leave
 826f14d:	c3                   	ret

```

```c
// RentalMachineDimension::checkAllRentalItemScript @ 0x826f022

/* RentalMachineDimension::checkAllRentalItemScript() */

undefined4 __thiscall RentalMachineDimension::checkAllRentalItemScript(RentalMachineDimension *this)

{
  char cVar1;
  map<std::pair<int,int>,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  local_24 [4];
  map<int,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  local_20 [4];
  map<int,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  local_1c [4];
  map<std::pair<int,int>,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  G_CDataManager();
  std::
  map<int,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  ::begin(local_20);
  while( true ) {
    G_CDataManager();
    std::
    map<int,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
    ::end(local_1c);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
                          *)local_20,(_Rb_tree_iterator *)local_1c);
    if (cVar1 == '\0') {
      G_CDataManager();
      std::
      map<std::pair<int,int>,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
      ::begin(local_24);
      while( true ) {
        G_CDataManager();
        std::
        map<std::pair<int,int>,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
        ::end(local_18);
        cVar1 = std::
                _Rb_tree_iterator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
                ::operator!=((_Rb_tree_iterator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
                              *)local_24,(_Rb_tree_iterator *)local_18);
        if (cVar1 == '\0') {
          return 1;
        }
        local_10 = std::
                   _Rb_tree_iterator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
                   ::operator*((_Rb_tree_iterator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
                                *)local_24);
        local_10 = local_10 + 8;
        cVar1 = checkSelectionListScript((vector *)this);
        if (cVar1 != '\x01') break;
        std::
        _Rb_tree_iterator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
        ::operator++((_Rb_tree_iterator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
                      *)local_24);
      }
      return 0;
    }
    local_14 = std::
               _Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
               ::operator*((_Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
                            *)local_20);
    local_14 = local_14 + 4;
    cVar1 = checkSelectionListScript((vector *)this);
    if (cVar1 != '\x01') break;
    std::
    _Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
    ::operator++((_Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
                  *)local_20);
  }
  return 0;
}

```

---

## checkRentalGrowJob

```asm
// === 0826f7fc RentalMachineDimension::checkRentalGrowJob  [0x0826f7fc-0x826f813] ===
 826f7fc:	55                   	push   %ebp
 826f7fd:	89 e5                	mov    %esp,%ebp
 826f7ff:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 826f803:	74 07                	je     826f80c <_ZN22RentalMachineDimension18checkRentalGrowJobEi+0x10>
 826f805:	b8 01 00 00 00       	mov    $0x1,%eax
 826f80a:	eb 05                	jmp    826f811 <_ZN22RentalMachineDimension18checkRentalGrowJobEi+0x15>
 826f80c:	b8 00 00 00 00       	mov    $0x0,%eax
 826f811:	5d                   	pop    %ebp
 826f812:	c3                   	ret
 826f813:	90                   	nop

```

```c
// RentalMachineDimension::checkRentalGrowJob @ 0x826f7fc

/* RentalMachineDimension::checkRentalGrowJob(int) */

bool __thiscall RentalMachineDimension::checkRentalGrowJob(RentalMachineDimension *this,int param_1)

{
  return param_1 != 0;
}

```

---

## checkRentalLevel

```asm
// === 0826f7e4 RentalMachineDimension::checkRentalLevel  [0x0826f7e4-0x826f7fb] ===
 826f7e4:	55                   	push   %ebp
 826f7e5:	89 e5                	mov    %esp,%ebp
 826f7e7:	83 7d 0c 40          	cmpl   $0x40,0xc(%ebp)
 826f7eb:	7e 07                	jle    826f7f4 <_ZN22RentalMachineDimension16checkRentalLevelEi+0x10>
 826f7ed:	b8 01 00 00 00       	mov    $0x1,%eax
 826f7f2:	eb 05                	jmp    826f7f9 <_ZN22RentalMachineDimension16checkRentalLevelEi+0x15>
 826f7f4:	b8 00 00 00 00       	mov    $0x0,%eax
 826f7f9:	5d                   	pop    %ebp
 826f7fa:	c3                   	ret
 826f7fb:	90                   	nop

```

```c
// RentalMachineDimension::checkRentalLevel @ 0x826f7e4

/* RentalMachineDimension::checkRentalLevel(int) */

bool __thiscall RentalMachineDimension::checkRentalLevel(RentalMachineDimension *this,int param_1)

{
  return 0x40 < param_1;
}

```

---

## checkSelectionListScript

```asm
// === 0826f14e RentalMachineDimension::checkSelectionListScript  [0x0826f14e-0x826f52b] ===
 826f14e:	55                   	push   %ebp
 826f14f:	89 e5                	mov    %esp,%ebp
 826f151:	53                   	push   %ebx
 826f152:	83 ec 44             	sub    $0x44,%esp
 826f155:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 826f158:	8b 55 0c             	mov    0xc(%ebp),%edx
 826f15b:	89 54 24 04          	mov    %edx,0x4(%esp)
 826f15f:	89 04 24             	mov    %eax,(%esp)
 826f162:	e8 a9 0b 00 00       	call   826fd10 <_ZNKSt6vectorIS_I19EventRewardItemInfoSaIS0_EESaIS2_EE5beginEv>
 826f167:	83 ec 04             	sub    $0x4,%esp
 826f16a:	e9 83 03 00 00       	jmp    826f4f2 <_ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE+0x3a4>
 826f16f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 826f172:	89 04 24             	mov    %eax,(%esp)
 826f175:	e8 30 0c 00 00       	call   826fdaa <_ZNK9__gnu_cxx17__normal_iteratorIPKSt6vectorI19EventRewardItemInfoSaIS2_EES1_IS4_SaIS4_EEEdeEv>
 826f17a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 826f17d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 826f180:	8b 55 e8             	mov    -0x18(%ebp),%edx
 826f183:	89 54 24 04          	mov    %edx,0x4(%esp)
 826f187:	89 04 24             	mov    %eax,(%esp)
 826f18a:	e8 25 0c 00 00       	call   826fdb4 <_ZNKSt6vectorI19EventRewardItemInfoSaIS0_EE5beginEv>
 826f18f:	83 ec 04             	sub    $0x4,%esp
 826f192:	e9 21 03 00 00       	jmp    826f4b8 <_ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE+0x36a>
 826f197:	8d 45 d0             	lea    -0x30(%ebp),%eax
 826f19a:	89 04 24             	mov    %eax,(%esp)
 826f19d:	e8 ac 0c 00 00       	call   826fe4e <_ZNK9__gnu_cxx17__normal_iteratorIPK19EventRewardItemInfoSt6vectorIS1_SaIS1_EEEdeEv>
 826f1a2:	89 45 ec             	mov    %eax,-0x14(%ebp)
 826f1a5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826f1a8:	8b 00                	mov    (%eax),%eax
 826f1aa:	89 c3                	mov    %eax,%ebx
 826f1ac:	e8 ea cf e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 826f1b1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 826f1b5:	89 04 24             	mov    %eax,(%esp)
 826f1b8:	e8 75 08 0f 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 826f1bd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 826f1c0:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 826f1c4:	75 4f                	jne    826f215 <_ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE+0xc7>
 826f1c6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826f1c9:	8b 18                	mov    (%eax),%ebx
 826f1cb:	c7 44 24 04 dc 90 bf 	movl   $0x8bf90dc,0x4(%esp)
 826f1d2:	08 
 826f1d3:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 826f1da:	e8 21 e1 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 826f1df:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 826f1e3:	89 04 24             	mov    %eax,(%esp)
 826f1e6:	e8 15 0c 49 00       	call   86ffe00 <_ZNSolsEj>
 826f1eb:	c7 44 24 04 0e 91 bf 	movl   $0x8bf910e,0x4(%esp)
 826f1f2:	08 
 826f1f3:	89 04 24             	mov    %eax,(%esp)
 826f1f6:	e8 05 e1 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 826f1fb:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 826f202:	08 
 826f203:	89 04 24             	mov    %eax,(%esp)
 826f206:	e8 55 c6 48 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 826f20b:	b8 00 00 00 00       	mov    $0x0,%eax
 826f210:	e9 11 03 00 00       	jmp    826f526 <_ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE+0x3d8>
 826f215:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826f218:	8b 00                	mov    (%eax),%eax
 826f21a:	83 c0 34             	add    $0x34,%eax
 826f21d:	8b 10                	mov    (%eax),%edx
 826f21f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826f222:	89 04 24             	mov    %eax,(%esp)
 826f225:	ff d2                	call   *%edx
 826f227:	83 f0 01             	xor    $0x1,%eax
 826f22a:	84 c0                	test   %al,%al
 826f22c:	74 4f                	je     826f27d <_ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE+0x12f>
 826f22e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826f231:	8b 18                	mov    (%eax),%ebx
 826f233:	c7 44 24 04 10 91 bf 	movl   $0x8bf9110,0x4(%esp)
 826f23a:	08 
 826f23b:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 826f242:	e8 b9 e0 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 826f247:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 826f24b:	89 04 24             	mov    %eax,(%esp)
 826f24e:	e8 ad 0b 49 00       	call   86ffe00 <_ZNSolsEj>
 826f253:	c7 44 24 04 0e 91 bf 	movl   $0x8bf910e,0x4(%esp)
 826f25a:	08 
 826f25b:	89 04 24             	mov    %eax,(%esp)
 826f25e:	e8 9d e0 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 826f263:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 826f26a:	08 
 826f26b:	89 04 24             	mov    %eax,(%esp)
 826f26e:	e8 ed c5 48 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 826f273:	b8 00 00 00 00       	mov    $0x0,%eax
 826f278:	e9 a9 02 00 00       	jmp    826f526 <_ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE+0x3d8>
 826f27d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826f280:	8b 00                	mov    (%eax),%eax
 826f282:	83 c0 40             	add    $0x40,%eax
 826f285:	8b 10                	mov    (%eax),%edx
 826f287:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826f28a:	89 04 24             	mov    %eax,(%esp)
 826f28d:	ff d2                	call   *%edx
 826f28f:	83 f0 01             	xor    $0x1,%eax
 826f292:	84 c0                	test   %al,%al
 826f294:	74 4f                	je     826f2e5 <_ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE+0x197>
 826f296:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826f299:	8b 18                	mov    (%eax),%ebx
 826f29b:	c7 44 24 04 68 91 bf 	movl   $0x8bf9168,0x4(%esp)
 826f2a2:	08 
 826f2a3:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 826f2aa:	e8 51 e0 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 826f2af:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 826f2b3:	89 04 24             	mov    %eax,(%esp)
 826f2b6:	e8 45 0b 49 00       	call   86ffe00 <_ZNSolsEj>
 826f2bb:	c7 44 24 04 0e 91 bf 	movl   $0x8bf910e,0x4(%esp)
 826f2c2:	08 
 826f2c3:	89 04 24             	mov    %eax,(%esp)
 826f2c6:	e8 35 e0 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 826f2cb:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 826f2d2:	08 
 826f2d3:	89 04 24             	mov    %eax,(%esp)
 826f2d6:	e8 85 c5 48 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 826f2db:	b8 00 00 00 00       	mov    $0x0,%eax
 826f2e0:	e9 41 02 00 00       	jmp    826f526 <_ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE+0x3d8>
 826f2e5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826f2e8:	8b 00                	mov    (%eax),%eax
 826f2ea:	83 c0 38             	add    $0x38,%eax
 826f2ed:	8b 10                	mov    (%eax),%edx
 826f2ef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826f2f2:	89 04 24             	mov    %eax,(%esp)
 826f2f5:	ff d2                	call   *%edx
 826f2f7:	83 f0 01             	xor    $0x1,%eax
 826f2fa:	84 c0                	test   %al,%al
 826f2fc:	74 4f                	je     826f34d <_ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE+0x1ff>
 826f2fe:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826f301:	8b 18                	mov    (%eax),%ebx
 826f303:	c7 44 24 04 c0 91 bf 	movl   $0x8bf91c0,0x4(%esp)
 826f30a:	08 
 826f30b:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 826f312:	e8 e9 df 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 826f317:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 826f31b:	89 04 24             	mov    %eax,(%esp)
 826f31e:	e8 dd 0a 49 00       	call   86ffe00 <_ZNSolsEj>
 826f323:	c7 44 24 04 0e 91 bf 	movl   $0x8bf910e,0x4(%esp)
 826f32a:	08 
 826f32b:	89 04 24             	mov    %eax,(%esp)
 826f32e:	e8 cd df 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 826f333:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 826f33a:	08 
 826f33b:	89 04 24             	mov    %eax,(%esp)
 826f33e:	e8 1d c5 48 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 826f343:	b8 00 00 00 00       	mov    $0x0,%eax
 826f348:	e9 d9 01 00 00       	jmp    826f526 <_ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE+0x3d8>
 826f34d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826f350:	8b 00                	mov    (%eax),%eax
 826f352:	83 c0 3c             	add    $0x3c,%eax
 826f355:	8b 10                	mov    (%eax),%edx
 826f357:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826f35a:	89 04 24             	mov    %eax,(%esp)
 826f35d:	ff d2                	call   *%edx
 826f35f:	83 f0 01             	xor    $0x1,%eax
 826f362:	84 c0                	test   %al,%al
 826f364:	74 4f                	je     826f3b5 <_ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE+0x267>
 826f366:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826f369:	8b 18                	mov    (%eax),%ebx
 826f36b:	c7 44 24 04 14 92 bf 	movl   $0x8bf9214,0x4(%esp)
 826f372:	08 
 826f373:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 826f37a:	e8 81 df 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 826f37f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 826f383:	89 04 24             	mov    %eax,(%esp)
 826f386:	e8 75 0a 49 00       	call   86ffe00 <_ZNSolsEj>
 826f38b:	c7 44 24 04 0e 91 bf 	movl   $0x8bf910e,0x4(%esp)
 826f392:	08 
 826f393:	89 04 24             	mov    %eax,(%esp)
 826f396:	e8 65 df 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 826f39b:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 826f3a2:	08 
 826f3a3:	89 04 24             	mov    %eax,(%esp)
 826f3a6:	e8 b5 c4 48 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 826f3ab:	b8 00 00 00 00       	mov    $0x0,%eax
 826f3b0:	e9 71 01 00 00       	jmp    826f526 <_ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE+0x3d8>
 826f3b5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826f3b8:	8b 00                	mov    (%eax),%eax
 826f3ba:	83 c0 30             	add    $0x30,%eax
 826f3bd:	8b 10                	mov    (%eax),%edx
 826f3bf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826f3c2:	89 04 24             	mov    %eax,(%esp)
 826f3c5:	ff d2                	call   *%edx
 826f3c7:	83 f0 01             	xor    $0x1,%eax
 826f3ca:	84 c0                	test   %al,%al
 826f3cc:	74 4f                	je     826f41d <_ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE+0x2cf>
 826f3ce:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826f3d1:	8b 18                	mov    (%eax),%ebx
 826f3d3:	c7 44 24 04 64 92 bf 	movl   $0x8bf9264,0x4(%esp)
 826f3da:	08 
 826f3db:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 826f3e2:	e8 19 df 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 826f3e7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 826f3eb:	89 04 24             	mov    %eax,(%esp)
 826f3ee:	e8 0d 0a 49 00       	call   86ffe00 <_ZNSolsEj>
 826f3f3:	c7 44 24 04 0e 91 bf 	movl   $0x8bf910e,0x4(%esp)
 826f3fa:	08 
 826f3fb:	89 04 24             	mov    %eax,(%esp)
 826f3fe:	e8 fd de 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 826f403:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 826f40a:	08 
 826f40b:	89 04 24             	mov    %eax,(%esp)
 826f40e:	e8 4d c4 48 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 826f413:	b8 00 00 00 00       	mov    $0x0,%eax
 826f418:	e9 09 01 00 00       	jmp    826f526 <_ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE+0x3d8>
 826f41d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826f420:	89 04 24             	mov    %eax,(%esp)
 826f423:	e8 ba 1e e8 ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 826f428:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826f42b:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 826f42f:	74 4f                	je     826f480 <_ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE+0x332>
 826f431:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826f434:	8b 18                	mov    (%eax),%ebx
 826f436:	c7 44 24 04 b4 92 bf 	movl   $0x8bf92b4,0x4(%esp)
 826f43d:	08 
 826f43e:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 826f445:	e8 b6 de 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 826f44a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 826f44e:	89 04 24             	mov    %eax,(%esp)
 826f451:	e8 aa 09 49 00       	call   86ffe00 <_ZNSolsEj>
 826f456:	c7 44 24 04 0e 91 bf 	movl   $0x8bf910e,0x4(%esp)
 826f45d:	08 
 826f45e:	89 04 24             	mov    %eax,(%esp)
 826f461:	e8 9a de 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 826f466:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 826f46d:	08 
 826f46e:	89 04 24             	mov    %eax,(%esp)
 826f471:	e8 ea c3 48 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 826f476:	b8 00 00 00 00       	mov    $0x0,%eax
 826f47b:	e9 a6 00 00 00       	jmp    826f526 <_ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE+0x3d8>
 826f480:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 826f483:	8b 45 08             	mov    0x8(%ebp),%eax
 826f486:	83 c0 04             	add    $0x4,%eax
 826f489:	89 04 24             	mov    %eax,(%esp)
 826f48c:	e8 5d 07 00 00       	call   826fbee <_ZNKSt8auto_ptrIN22RentalMachineDimension26RentalMachineDimensionImplEEptEv>
 826f491:	8d 90 04 01 00 00    	lea    0x104(%eax),%edx
 826f497:	8d 45 e0             	lea    -0x20(%ebp),%eax
 826f49a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 826f49e:	89 54 24 04          	mov    %edx,0x4(%esp)
 826f4a2:	89 04 24             	mov    %eax,(%esp)
 826f4a5:	e8 d6 c2 f3 ff       	call   81ab780 <_ZNSt3setIjSt4lessIjESaIjEE6insertERKj>
 826f4aa:	83 ec 04             	sub    $0x4,%esp
 826f4ad:	8d 45 d0             	lea    -0x30(%ebp),%eax
 826f4b0:	89 04 24             	mov    %eax,(%esp)
 826f4b3:	e8 80 09 00 00       	call   826fe38 <_ZN9__gnu_cxx17__normal_iteratorIPK19EventRewardItemInfoSt6vectorIS1_SaIS1_EEEppEv>
 826f4b8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 826f4bb:	8b 55 e8             	mov    -0x18(%ebp),%edx
 826f4be:	89 54 24 04          	mov    %edx,0x4(%esp)
 826f4c2:	89 04 24             	mov    %eax,(%esp)
 826f4c5:	e8 16 09 00 00       	call   826fde0 <_ZNKSt6vectorI19EventRewardItemInfoSaIS0_EE3endEv>
 826f4ca:	83 ec 04             	sub    $0x4,%esp
 826f4cd:	8d 45 dc             	lea    -0x24(%ebp),%eax
 826f4d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 826f4d4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 826f4d7:	89 04 24             	mov    %eax,(%esp)
 826f4da:	e8 2d 09 00 00       	call   826fe0c <_ZN9__gnu_cxxneIPK19EventRewardItemInfoSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 826f4df:	84 c0                	test   %al,%al
 826f4e1:	0f 85 b0 fc ff ff    	jne    826f197 <_ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE+0x49>
 826f4e7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 826f4ea:	89 04 24             	mov    %eax,(%esp)
 826f4ed:	e8 a2 08 00 00       	call   826fd94 <_ZN9__gnu_cxx17__normal_iteratorIPKSt6vectorI19EventRewardItemInfoSaIS2_EES1_IS4_SaIS4_EEEppEv>
 826f4f2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 826f4f5:	8b 55 0c             	mov    0xc(%ebp),%edx
 826f4f8:	89 54 24 04          	mov    %edx,0x4(%esp)
 826f4fc:	89 04 24             	mov    %eax,(%esp)
 826f4ff:	e8 38 08 00 00       	call   826fd3c <_ZNKSt6vectorIS_I19EventRewardItemInfoSaIS0_EESaIS2_EE3endEv>
 826f504:	83 ec 04             	sub    $0x4,%esp
 826f507:	8d 45 d8             	lea    -0x28(%ebp),%eax
 826f50a:	89 44 24 04          	mov    %eax,0x4(%esp)
 826f50e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 826f511:	89 04 24             	mov    %eax,(%esp)
 826f514:	e8 4f 08 00 00       	call   826fd68 <_ZN9__gnu_cxxneIPKSt6vectorI19EventRewardItemInfoSaIS2_EES1_IS4_SaIS4_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 826f519:	84 c0                	test   %al,%al
 826f51b:	0f 85 4e fc ff ff    	jne    826f16f <_ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE+0x21>
 826f521:	b8 01 00 00 00       	mov    $0x1,%eax
 826f526:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 826f529:	c9                   	leave
 826f52a:	c3                   	ret
 826f52b:	90                   	nop

```

```c
// RentalMachineDimension::checkSelectionListScript @ 0x826f14e

/* RentalMachineDimension::checkSelectionListScript(std::vector<std::vector<EventRewardItemInfo,
   std::allocator<EventRewardItemInfo> >, std::allocator<std::vector<EventRewardItemInfo,
   std::allocator<EventRewardItemInfo> > > > const&) */

undefined4 RentalMachineDimension::checkSelectionListScript(vector *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  CDataManager *this;
  ostream *poVar4;
  __normal_iterator<EventRewardItemInfo_const*,std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>
  local_34 [4];
  __normal_iterator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>const*,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>
  local_30 [4];
  __normal_iterator local_2c [4];
  __normal_iterator local_28 [4];
  uint local_24 [2];
  undefined4 local_1c;
  uint *local_18;
  CItem *local_14;
  int local_10;
  
  std::
  vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
  ::begin();
  do {
    std::
    vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
    ::end();
    bVar3 = __gnu_cxx::operator!=(local_30,local_2c);
    if (!bVar3) {
      return 1;
    }
    local_1c = __gnu_cxx::
               __normal_iterator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>const*,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>
               ::operator*(local_30);
    std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>::begin();
    while( true ) {
      std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>::end();
      bVar3 = __gnu_cxx::operator!=(local_34,local_28);
      if (!bVar3) break;
      local_18 = (uint *)__gnu_cxx::
                         __normal_iterator<EventRewardItemInfo_const*,std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>
                         ::operator*(local_34);
      uVar1 = *local_18;
      this = (CDataManager *)G_CDataManager();
      local_14 = (CItem *)CDataManager::find_item(this,uVar1);
      if (local_14 == (CItem *)0x0) {
        uVar1 = *local_18;
        poVar4 = std::operator<<((ostream *)&std::cerr,
                                 "[RentalDimensionSystem::Ready()] Can`t find item[");
        poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
        poVar4 = std::operator<<(poVar4,"]");
        std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
        return 0;
      }
      cVar2 = (**(code **)(*(int *)local_14 + 0x34))(local_14);
      if (cVar2 != '\x01') {
        uVar1 = *local_18;
        poVar4 = std::operator<<((ostream *)&std::cerr,
                                 "[RentalDimensionSystem::Ready()] Impossible contents(amplify upgrade) is not checked. ["
                                );
        poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
        poVar4 = std::operator<<(poVar4,"]");
        std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
        return 0;
      }
      cVar2 = (**(code **)(*(int *)local_14 + 0x40))(local_14);
      if (cVar2 != '\x01') {
        uVar1 = *local_18;
        poVar4 = std::operator<<((ostream *)&std::cerr,
                                 "[RentalDimensionSystem::Ready()] Impossible contents(charac cargo) is not checked. ["
                                );
        poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
        poVar4 = std::operator<<(poVar4,"]");
        std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
        return 0;
      }
      cVar2 = (**(code **)(*(int *)local_14 + 0x38))(local_14);
      if (cVar2 != '\x01') {
        uVar1 = *local_18;
        poVar4 = std::operator<<((ostream *)&std::cerr,
                                 "[RentalDimensionSystem::Ready()] Impossible contents(disjoint) is not checked. ["
                                );
        poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
        poVar4 = std::operator<<(poVar4,"]");
        std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
        return 0;
      }
      cVar2 = (**(code **)(*(int *)local_14 + 0x3c))(local_14);
      if (cVar2 != '\x01') {
        uVar1 = *local_18;
        poVar4 = std::operator<<((ostream *)&std::cerr,
                                 "[RentalDimensionSystem::Ready()] Impossible contents(gift) is not checked. ["
                                );
        poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
        poVar4 = std::operator<<(poVar4,"]");
        std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
        return 0;
      }
      cVar2 = (**(code **)(*(int *)local_14 + 0x30))(local_14);
      if (cVar2 != '\x01') {
        uVar1 = *local_18;
        poVar4 = std::operator<<((ostream *)&std::cerr,
                                 "[RentalDimensionSystem::Ready()] Impossible contents(upgrade) is not checked. ["
                                );
        poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
        poVar4 = std::operator<<(poVar4,"]");
        std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
        return 0;
      }
      local_10 = CItem::GetAttachType(local_14);
      if (local_10 != 2) {
        uVar1 = *local_18;
        poVar4 = std::operator<<((ostream *)&std::cerr,
                                 "[RentalDimensionSystem::Ready()] AtttachType is not trade delete. ["
                                );
        poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
        poVar4 = std::operator<<(poVar4,"]");
        std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
        return 0;
      }
      std::auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl>::operator->
                ((auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl> *)(param_1 + 4));
      std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::insert(local_24);
      __gnu_cxx::
      __normal_iterator<EventRewardItemInfo_const*,std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>
      ::operator++(local_34);
    }
    __gnu_cxx::
    __normal_iterator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>const*,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>
    ::operator++(local_30);
  } while( true );
}

```

---

## initLoggingEnvironment

```asm
// === 0826efdc RentalMachineDimension::initLoggingEnvironment  [0x0826efdc-0x826f021] ===
 826efdc:	55                   	push   %ebp
 826efdd:	89 e5                	mov    %esp,%ebp
 826efdf:	53                   	push   %ebx
 826efe0:	83 ec 14             	sub    $0x14,%esp
 826efe3:	e8 99 d1 e5 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 826efe8:	89 04 24             	mov    %eax,(%esp)
 826efeb:	e8 aa b3 e6 ff       	call   80da39a <_ZN12CEnvironment13get_file_nameEv>
 826eff0:	89 c3                	mov    %eax,%ebx
 826eff2:	8b 45 08             	mov    0x8(%ebp),%eax
 826eff5:	83 c0 04             	add    $0x4,%eax
 826eff8:	89 04 24             	mov    %eax,(%esp)
 826effb:	e8 ee 0b 00 00       	call   826fbee <_ZNKSt8auto_ptrIN22RentalMachineDimension26RentalMachineDimensionImplEEptEv>
 826f000:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 826f004:	c7 44 24 08 c2 90 bf 	movl   $0x8bf90c2,0x8(%esp)
 826f00b:	08 
 826f00c:	c7 44 24 04 03 01 00 	movl   $0x103,0x4(%esp)
 826f013:	00 
 826f014:	89 04 24             	mov    %eax,(%esp)
 826f017:	e8 00 d8 31 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 826f01c:	83 c4 14             	add    $0x14,%esp
 826f01f:	5b                   	pop    %ebx
 826f020:	5d                   	pop    %ebp
 826f021:	c3                   	ret

```

```c
// RentalMachineDimension::initLoggingEnvironment @ 0x826efdc

/* RentalMachineDimension::initLoggingEnvironment() */

void __thiscall RentalMachineDimension::initLoggingEnvironment(RentalMachineDimension *this)

{
  CEnvironment *this_00;
  undefined4 uVar1;
  char *pcVar2;
  
  this_00 = (CEnvironment *)G_CEnvironment();
  uVar1 = CEnvironment::get_file_name(this_00);
  pcVar2 = (char *)std::auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl>::operator->
                             ((auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl> *)
                              (this + 4));
  OS_API::snprintf(pcVar2,0x103,"./log/%s/dw2_RentalItems",uVar1);
  return;
}

```

---

## log

```asm
// === 0826ef16 RentalMachineDimension::log  [0x0826ef16-0x826efdb] ===
 826ef16:	55                   	push   %ebp
 826ef17:	89 e5                	mov    %esp,%ebp
 826ef19:	57                   	push   %edi
 826ef1a:	56                   	push   %esi
 826ef1b:	53                   	push   %ebx
 826ef1c:	83 ec 4c             	sub    $0x4c,%esp
 826ef1f:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 826ef23:	e8 7f b4 e6 ff       	call   80da3a7 <_Z11G_GameWorldv>
 826ef28:	89 04 24             	mov    %eax,(%esp)
 826ef2b:	e8 ee 23 e8 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 826ef30:	84 c0                	test   %al,%al
 826ef32:	74 10                	je     826ef44 <_ZN22RentalMachineDimension3logER5CUseri+0x2e>
 826ef34:	8b 45 0c             	mov    0xc(%ebp),%eax
 826ef37:	89 04 24             	mov    %eax,(%esp)
 826ef3a:	e8 51 cd e5 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 826ef3f:	88 45 e7             	mov    %al,-0x19(%ebp)
 826ef42:	eb 0e                	jmp    826ef52 <_ZN22RentalMachineDimension3logER5CUseri+0x3c>
 826ef44:	e8 38 d2 e5 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 826ef49:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 826ef4f:	88 45 e7             	mov    %al,-0x19(%ebp)
 826ef52:	0f be 45 e7          	movsbl -0x19(%ebp),%eax
 826ef56:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 826ef59:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 826ef60:	ff 
 826ef61:	8b 45 0c             	mov    0xc(%ebp),%eax
 826ef64:	89 04 24             	mov    %eax,(%esp)
 826ef67:	e8 34 f0 3d 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 826ef6c:	89 c6                	mov    %eax,%esi
 826ef6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 826ef71:	89 04 24             	mov    %eax,(%esp)
 826ef74:	e8 f5 b3 e6 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 826ef79:	89 c3                	mov    %eax,%ebx
 826ef7b:	8b 45 08             	mov    0x8(%ebp),%eax
 826ef7e:	83 c0 04             	add    $0x4,%eax
 826ef81:	89 04 24             	mov    %eax,(%esp)
 826ef84:	e8 65 0c 00 00       	call   826fbee <_ZNKSt8auto_ptrIN22RentalMachineDimension26RentalMachineDimensionImplEEptEv>
 826ef89:	89 c7                	mov    %eax,%edi
 826ef8b:	c7 44 24 08 71 00 00 	movl   $0x71,0x8(%esp)
 826ef92:	00 
 826ef93:	c7 44 24 04 20 9f bf 	movl   $0x8bf9f20,0x4(%esp)
 826ef9a:	08 
 826ef9b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 826ef9e:	89 04 24             	mov    %eax,(%esp)
 826efa1:	e8 c6 88 e9 ff       	call   810786c <_ZN10CMyFileLogC1EPKci>
 826efa6:	8b 45 10             	mov    0x10(%ebp),%eax
 826efa9:	89 44 24 18          	mov    %eax,0x18(%esp)
 826efad:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 826efb0:	89 44 24 14          	mov    %eax,0x14(%esp)
 826efb4:	89 74 24 10          	mov    %esi,0x10(%esp)
 826efb8:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 826efbc:	c7 44 24 08 80 90 bf 	movl   $0x8bf9080,0x8(%esp)
 826efc3:	08 
 826efc4:	89 7c 24 04          	mov    %edi,0x4(%esp)
 826efc8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 826efcb:	89 04 24             	mov    %eax,(%esp)
 826efce:	e8 c5 88 e9 ff       	call   8107898 <_ZN10CMyFileLogclEPKcS1_z>
 826efd3:	83 c4 4c             	add    $0x4c,%esp
 826efd6:	5b                   	pop    %ebx
 826efd7:	5e                   	pop    %esi
 826efd8:	5f                   	pop    %edi
 826efd9:	5d                   	pop    %ebp
 826efda:	c3                   	ret
 826efdb:	90                   	nop

```

```c
// RentalMachineDimension::log @ 0x826ef16

/* RentalMachineDimension::log(CUser&, int) */

void __thiscall RentalMachineDimension::log(RentalMachineDimension *this,CUser *param_1,int param_2)

{
  char cVar1;
  GameWorld *this_00;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  CMyFileLog local_28 [11];
  char local_1d;
  
  local_1d = 0;
  this_00 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
  if (cVar1 == '\0') {
    iVar2 = G_CEnvironment();
    local_1d = (char)*(undefined4 *)(iVar2 + 0x378);
  }
  else {
    local_1d = CUser::GetServerGroup(param_1);
  }
  iVar2 = (int)local_1d;
  uVar3 = CUser::get_charac_no(param_1,-1);
  uVar4 = CUser::get_acc_id(param_1);
  pcVar5 = (char *)std::auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl>::operator->
                             ((auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl> *)
                              (this + 4));
  CMyFileLog::CMyFileLog(local_28,"void RentalMachineDimension::log(CUser&, int)",0x71);
  CMyFileLog::operator()
            (local_28,pcVar5,"[RENT] Dimension m_id(%d) char_no(%d) server_info(%d) item_id(%d)",
             uVar4,uVar3,iVar2,param_2);
  return;
}

```

---

## ~RentalMachineDimension

```asm
// === 0826eba2 RentalMachineDimension::~RentalMachineDimension  [0x0826eba2-0x826ec03] ===
 826eba2:	55                   	push   %ebp
 826eba3:	89 e5                	mov    %esp,%ebp
 826eba5:	56                   	push   %esi
 826eba6:	53                   	push   %ebx
 826eba7:	83 ec 10             	sub    $0x10,%esp
 826ebaa:	8b 45 08             	mov    0x8(%ebp),%eax
 826ebad:	c7 00 f0 9f bf 08    	movl   $0x8bf9ff0,(%eax)
 826ebb3:	8b 45 08             	mov    0x8(%ebp),%eax
 826ebb6:	83 c0 04             	add    $0x4,%eax
 826ebb9:	89 04 24             	mov    %eax,(%esp)
 826ebbc:	e8 63 0f 00 00       	call   826fb24 <_ZNSt8auto_ptrIN22RentalMachineDimension26RentalMachineDimensionImplEED1Ev>
 826ebc1:	eb 1b                	jmp    826ebde <_ZN22RentalMachineDimensionD1Ev+0x3c>
 826ebc3:	89 d3                	mov    %edx,%ebx
 826ebc5:	89 c6                	mov    %eax,%esi
 826ebc7:	8b 45 08             	mov    0x8(%ebp),%eax
 826ebca:	89 04 24             	mov    %eax,(%esp)
 826ebcd:	e8 48 0e 00 00       	call   826fa1a <_ZN14IRentalMachineD1Ev>
 826ebd2:	89 f0                	mov    %esi,%eax
 826ebd4:	89 da                	mov    %ebx,%edx
 826ebd6:	89 04 24             	mov    %eax,(%esp)
 826ebd9:	e8 72 4b 87 00       	call   8ae3750 <_Unwind_Resume>
 826ebde:	8b 45 08             	mov    0x8(%ebp),%eax
 826ebe1:	89 04 24             	mov    %eax,(%esp)
 826ebe4:	e8 31 0e 00 00       	call   826fa1a <_ZN14IRentalMachineD1Ev>
 826ebe9:	b8 00 00 00 00       	mov    $0x0,%eax
 826ebee:	84 c0                	test   %al,%al
 826ebf0:	74 0b                	je     826ebfd <_ZN22RentalMachineDimensionD1Ev+0x5b>
 826ebf2:	8b 45 08             	mov    0x8(%ebp),%eax
 826ebf5:	89 04 24             	mov    %eax,(%esp)
 826ebf8:	e8 f3 58 4b 00       	call   87244f0 <_ZdlPv>
 826ebfd:	83 c4 10             	add    $0x10,%esp
 826ec00:	5b                   	pop    %ebx
 826ec01:	5e                   	pop    %esi
 826ec02:	5d                   	pop    %ebp
 826ec03:	c3                   	ret

```

```c
// RentalMachineDimension::~RentalMachineDimension @ 0x826eba2

/* WARNING: Removing unreachable block (ram,0x0826ebf2) */
/* RentalMachineDimension::~RentalMachineDimension() */

void __thiscall RentalMachineDimension::~RentalMachineDimension(RentalMachineDimension *this)

{
  *(undefined ***)this = &PTR__RentalMachineDimension_08bf9ff0;
                    /* try { // try from 0826ebbc to 0826ebc0 has its CatchHandler @ 0826ebc3 */
  std::auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl>::~auto_ptr
            ((auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl> *)(this + 4));
  IRentalMachine::~IRentalMachine((IRentalMachine *)this);
  return;
}

```

---

## ~RentalMachineDimension_0826ec04

```asm
// === 0826ec04 RentalMachineDimension::~RentalMachineDimension  [0x0826ec04-0x826ec21] ===
 826ec04:	55                   	push   %ebp
 826ec05:	89 e5                	mov    %esp,%ebp
 826ec07:	83 ec 18             	sub    $0x18,%esp
 826ec0a:	8b 45 08             	mov    0x8(%ebp),%eax
 826ec0d:	89 04 24             	mov    %eax,(%esp)
 826ec10:	e8 8d ff ff ff       	call   826eba2 <_ZN22RentalMachineDimensionD1Ev>
 826ec15:	8b 45 08             	mov    0x8(%ebp),%eax
 826ec18:	89 04 24             	mov    %eax,(%esp)
 826ec1b:	e8 d0 58 4b 00       	call   87244f0 <_ZdlPv>
 826ec20:	c9                   	leave
 826ec21:	c3                   	ret

```

```c
// RentalMachineDimension::~RentalMachineDimension @ 0x826ec04

/* RentalMachineDimension::~RentalMachineDimension() */

void __thiscall RentalMachineDimension::~RentalMachineDimension(RentalMachineDimension *this)

{
  ~RentalMachineDimension(this);
  operator_delete(this);
  return;
}

```

