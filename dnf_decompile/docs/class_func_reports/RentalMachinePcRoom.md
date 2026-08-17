# RentalMachinePcRoom

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## CheckRentableItem

```asm
// === 08270752 RentalMachinePcRoom::CheckRentableItem  [0x08270752-0x82707bf] ===
 8270752:	55                   	push   %ebp
 8270753:	89 e5                	mov    %esp,%ebp
 8270755:	83 ec 28             	sub    $0x28,%esp
 8270758:	8b 45 08             	mov    0x8(%ebp),%eax
 827075b:	83 c0 04             	add    $0x4,%eax
 827075e:	89 04 24             	mov    %eax,(%esp)
 8270761:	e8 28 16 00 00       	call   8271d8e <_ZNKSt8auto_ptrIN19RentalMachinePcRoom23RentalMachinePcRoomImplEEptEv>
 8270766:	8d 88 04 01 00 00    	lea    0x104(%eax),%ecx
 827076c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827076f:	8d 55 0c             	lea    0xc(%ebp),%edx
 8270772:	89 54 24 08          	mov    %edx,0x8(%esp)
 8270776:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 827077a:	89 04 24             	mov    %eax,(%esp)
 827077d:	e8 b0 0b ea ff       	call   8111332 <_ZNSt3setIjSt4lessIjESaIjEE4findERKj>
 8270782:	83 ec 04             	sub    $0x4,%esp
 8270785:	8b 45 08             	mov    0x8(%ebp),%eax
 8270788:	83 c0 04             	add    $0x4,%eax
 827078b:	89 04 24             	mov    %eax,(%esp)
 827078e:	e8 fb 15 00 00       	call   8271d8e <_ZNKSt8auto_ptrIN19RentalMachinePcRoom23RentalMachinePcRoomImplEEptEv>
 8270793:	8d 90 04 01 00 00    	lea    0x104(%eax),%edx
 8270799:	8d 45 f4             	lea    -0xc(%ebp),%eax
 827079c:	89 54 24 04          	mov    %edx,0x4(%esp)
 82707a0:	89 04 24             	mov    %eax,(%esp)
 82707a3:	e8 d0 0a ea ff       	call   8111278 <_ZNKSt3setIjSt4lessIjESaIjEE3endEv>
 82707a8:	83 ec 04             	sub    $0x4,%esp
 82707ab:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82707ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 82707b2:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82707b5:	89 04 24             	mov    %eax,(%esp)
 82707b8:	e8 e1 0a ea ff       	call   811129e <_ZNKSt23_Rb_tree_const_iteratorIjEneERKS0_>
 82707bd:	c9                   	leave
 82707be:	c3                   	ret
 82707bf:	90                   	nop

```

```c
// RentalMachinePcRoom::CheckRentableItem @ 0x8270752

/* RentalMachinePcRoom::CheckRentableItem(unsigned int) */

void RentalMachinePcRoom::CheckRentableItem(uint param_1)

{
  _Rb_tree_const_iterator local_14 [4];
  set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> local_10 [12];
  
  std::auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl>::operator->
            ((auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl> *)(param_1 + 4));
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::find
            ((uint *)local_14);
  std::auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl>::operator->
            ((auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl> *)(param_1 + 4));
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::end(local_10);
  std::_Rb_tree_const_iterator<unsigned_int>::operator!=
            ((_Rb_tree_const_iterator<unsigned_int> *)local_10,local_14);
  return;
}

```

---

## CheckupAllRentalItems

```asm
// === 08270d1e RentalMachinePcRoom::CheckupAllRentalItems  [0x08270d1e-0x8270fe9] ===
 8270d1e:	55                   	push   %ebp
 8270d1f:	89 e5                	mov    %esp,%ebp
 8270d21:	56                   	push   %esi
 8270d22:	53                   	push   %ebx
 8270d23:	81 ec c0 00 00 00    	sub    $0xc0,%esp
 8270d29:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8270d30:	8b 55 10             	mov    0x10(%ebp),%edx
 8270d33:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8270d36:	89 54 24 04          	mov    %edx,0x4(%esp)
 8270d3a:	89 04 24             	mov    %eax,(%esp)
 8270d3d:	e8 08 ee ff ff       	call   826fb4a <_ZNKSt6vectorIN20InstanceRentalSystem9RentInput10RentInElemESaIS2_EE5beginEv>
 8270d42:	83 ec 04             	sub    $0x4,%esp
 8270d45:	e9 40 02 00 00       	jmp    8270f8a <_ZN19RentalMachinePcRoom21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x26c>
 8270d4a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8270d4d:	89 04 24             	mov    %eax,(%esp)
 8270d50:	e8 8f ee ff ff       	call   826fbe4 <_ZNK9__gnu_cxx17__normal_iteratorIPKN20InstanceRentalSystem9RentInput10RentInElemESt6vectorIS3_SaIS3_EEEdeEv>
 8270d55:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8270d58:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8270d5b:	89 04 24             	mov    %eax,(%esp)
 8270d5e:	e8 27 47 6a 00       	call   891548a <_ZN19EventRewardItemInfoC1Ev>
 8270d63:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8270d66:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8270d6a:	0f be d0             	movsbl %al,%edx
 8270d6d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8270d70:	0f b6 00             	movzbl (%eax),%eax
 8270d73:	0f be c0             	movsbl %al,%eax
 8270d76:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8270d7d:	00 
 8270d7e:	8d 4d cc             	lea    -0x34(%ebp),%ecx
 8270d81:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8270d85:	89 54 24 08          	mov    %edx,0x8(%esp)
 8270d89:	89 44 24 04          	mov    %eax,0x4(%esp)
 8270d8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8270d90:	89 04 24             	mov    %eax,(%esp)
 8270d93:	e8 fe 05 00 00       	call   8271396 <_ZN7pc_room15GetRentItemInfoER5CUserccR19EventRewardItemInfoi>
 8270d98:	83 f0 01             	xor    $0x1,%eax
 8270d9b:	84 c0                	test   %al,%al
 8270d9d:	74 0f                	je     8270dae <_ZN19RentalMachinePcRoom21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x90>
 8270d9f:	bb 01 00 00 00       	mov    $0x1,%ebx
 8270da4:	be 00 00 00 00       	mov    $0x0,%esi
 8270da9:	e9 c2 01 00 00       	jmp    8270f70 <_ZN19RentalMachinePcRoom21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x252>
 8270dae:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8270db1:	89 c6                	mov    %eax,%esi
 8270db3:	e8 e3 b3 e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8270db8:	89 74 24 04          	mov    %esi,0x4(%esp)
 8270dbc:	89 04 24             	mov    %eax,(%esp)
 8270dbf:	e8 6e ec 0e 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8270dc4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8270dc7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8270dcb:	75 0f                	jne    8270ddc <_ZN19RentalMachinePcRoom21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0xbe>
 8270dcd:	bb 01 00 00 00       	mov    $0x1,%ebx
 8270dd2:	be 00 00 00 00       	mov    $0x0,%esi
 8270dd7:	e9 94 01 00 00       	jmp    8270f70 <_ZN19RentalMachinePcRoom21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x252>
 8270ddc:	8d 45 8f             	lea    -0x71(%ebp),%eax
 8270ddf:	89 04 24             	mov    %eax,(%esp)
 8270de2:	e8 6d aa e5 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8270de7:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8270dea:	89 45 91             	mov    %eax,-0x6f(%ebp)
 8270ded:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8270df0:	8b 00                	mov    (%eax),%eax
 8270df2:	83 c0 08             	add    $0x8,%eax
 8270df5:	8b 10                	mov    (%eax),%edx
 8270df7:	8d 45 8f             	lea    -0x71(%ebp),%eax
 8270dfa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8270dfe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8270e01:	89 04 24             	mov    %eax,(%esp)
 8270e04:	ff d2                	call   *%edx
 8270e06:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8270e09:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 8270e0d:	84 c0                	test   %al,%al
 8270e0f:	0f 84 9e 00 00 00    	je     8270eb3 <_ZN19RentalMachinePcRoom21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x195>
 8270e15:	8b 45 0c             	mov    0xc(%ebp),%eax
 8270e18:	89 04 24             	mov    %eax,(%esp)
 8270e1b:	e8 5e 94 e6 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8270e20:	8b 55 8f             	mov    -0x71(%ebp),%edx
 8270e23:	89 54 24 04          	mov    %edx,0x4(%esp)
 8270e27:	8b 55 93             	mov    -0x6d(%ebp),%edx
 8270e2a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8270e2e:	8b 55 97             	mov    -0x69(%ebp),%edx
 8270e31:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8270e35:	8b 55 9b             	mov    -0x65(%ebp),%edx
 8270e38:	89 54 24 10          	mov    %edx,0x10(%esp)
 8270e3c:	8b 55 9f             	mov    -0x61(%ebp),%edx
 8270e3f:	89 54 24 14          	mov    %edx,0x14(%esp)
 8270e43:	8b 55 a3             	mov    -0x5d(%ebp),%edx
 8270e46:	89 54 24 18          	mov    %edx,0x18(%esp)
 8270e4a:	8b 55 a7             	mov    -0x59(%ebp),%edx
 8270e4d:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8270e51:	8b 55 ab             	mov    -0x55(%ebp),%edx
 8270e54:	89 54 24 20          	mov    %edx,0x20(%esp)
 8270e58:	8b 55 af             	mov    -0x51(%ebp),%edx
 8270e5b:	89 54 24 24          	mov    %edx,0x24(%esp)
 8270e5f:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 8270e62:	89 54 24 28          	mov    %edx,0x28(%esp)
 8270e66:	8b 55 b7             	mov    -0x49(%ebp),%edx
 8270e69:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8270e6d:	8b 55 bb             	mov    -0x45(%ebp),%edx
 8270e70:	89 54 24 30          	mov    %edx,0x30(%esp)
 8270e74:	8b 55 bf             	mov    -0x41(%ebp),%edx
 8270e77:	89 54 24 34          	mov    %edx,0x34(%esp)
 8270e7b:	8b 55 c3             	mov    -0x3d(%ebp),%edx
 8270e7e:	89 54 24 38          	mov    %edx,0x38(%esp)
 8270e82:	8b 55 c7             	mov    -0x39(%ebp),%edx
 8270e85:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 8270e89:	0f b6 55 cb          	movzbl -0x35(%ebp),%edx
 8270e8d:	88 54 24 40          	mov    %dl,0x40(%esp)
 8270e91:	89 04 24             	mov    %eax,(%esp)
 8270e94:	e8 61 0c 29 00       	call   8501afa <_ZNK10CInventory26tryInsertItemIntoEquipmentE10Inven_Item>
 8270e99:	c1 e8 1f             	shr    $0x1f,%eax
 8270e9c:	84 c0                	test   %al,%al
 8270e9e:	0f 84 aa 00 00 00    	je     8270f4e <_ZN19RentalMachinePcRoom21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x230>
 8270ea4:	bb cb 00 00 00       	mov    $0xcb,%ebx
 8270ea9:	be 00 00 00 00       	mov    $0x0,%esi
 8270eae:	e9 bd 00 00 00       	jmp    8270f70 <_ZN19RentalMachinePcRoom21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x252>
 8270eb3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8270eb6:	89 04 24             	mov    %eax,(%esp)
 8270eb9:	e8 c0 93 e6 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8270ebe:	8b 55 8f             	mov    -0x71(%ebp),%edx
 8270ec1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8270ec5:	8b 55 93             	mov    -0x6d(%ebp),%edx
 8270ec8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8270ecc:	8b 55 97             	mov    -0x69(%ebp),%edx
 8270ecf:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8270ed3:	8b 55 9b             	mov    -0x65(%ebp),%edx
 8270ed6:	89 54 24 10          	mov    %edx,0x10(%esp)
 8270eda:	8b 55 9f             	mov    -0x61(%ebp),%edx
 8270edd:	89 54 24 14          	mov    %edx,0x14(%esp)
 8270ee1:	8b 55 a3             	mov    -0x5d(%ebp),%edx
 8270ee4:	89 54 24 18          	mov    %edx,0x18(%esp)
 8270ee8:	8b 55 a7             	mov    -0x59(%ebp),%edx
 8270eeb:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8270eef:	8b 55 ab             	mov    -0x55(%ebp),%edx
 8270ef2:	89 54 24 20          	mov    %edx,0x20(%esp)
 8270ef6:	8b 55 af             	mov    -0x51(%ebp),%edx
 8270ef9:	89 54 24 24          	mov    %edx,0x24(%esp)
 8270efd:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 8270f00:	89 54 24 28          	mov    %edx,0x28(%esp)
 8270f04:	8b 55 b7             	mov    -0x49(%ebp),%edx
 8270f07:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8270f0b:	8b 55 bb             	mov    -0x45(%ebp),%edx
 8270f0e:	89 54 24 30          	mov    %edx,0x30(%esp)
 8270f12:	8b 55 bf             	mov    -0x41(%ebp),%edx
 8270f15:	89 54 24 34          	mov    %edx,0x34(%esp)
 8270f19:	8b 55 c3             	mov    -0x3d(%ebp),%edx
 8270f1c:	89 54 24 38          	mov    %edx,0x38(%esp)
 8270f20:	8b 55 c7             	mov    -0x39(%ebp),%edx
 8270f23:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 8270f27:	0f b6 55 cb          	movzbl -0x35(%ebp),%edx
 8270f2b:	88 54 24 40          	mov    %dl,0x40(%esp)
 8270f2f:	89 04 24             	mov    %eax,(%esp)
 8270f32:	e8 93 0f 29 00       	call   8501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>
 8270f37:	c1 e8 1f             	shr    $0x1f,%eax
 8270f3a:	84 c0                	test   %al,%al
 8270f3c:	74 0c                	je     8270f4a <_ZN19RentalMachinePcRoom21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x22c>
 8270f3e:	bb cb 00 00 00       	mov    $0xcb,%ebx
 8270f43:	be 00 00 00 00       	mov    $0x0,%esi
 8270f48:	eb 26                	jmp    8270f70 <_ZN19RentalMachinePcRoom21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x252>
 8270f4a:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8270f4e:	be 01 00 00 00       	mov    $0x1,%esi
 8270f53:	eb 1b                	jmp    8270f70 <_ZN19RentalMachinePcRoom21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x252>
 8270f55:	89 d3                	mov    %edx,%ebx
 8270f57:	89 c6                	mov    %eax,%esi
 8270f59:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8270f5c:	89 04 24             	mov    %eax,(%esp)
 8270f5f:	e8 3c eb ff ff       	call   826faa0 <_ZN19EventRewardItemInfoD1Ev>
 8270f64:	89 f0                	mov    %esi,%eax
 8270f66:	89 da                	mov    %ebx,%edx
 8270f68:	89 04 24             	mov    %eax,(%esp)
 8270f6b:	e8 e0 27 87 00       	call   8ae3750 <_Unwind_Resume>
 8270f70:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8270f73:	89 04 24             	mov    %eax,(%esp)
 8270f76:	e8 25 eb ff ff       	call   826faa0 <_ZN19EventRewardItemInfoD1Ev>
 8270f7b:	85 f6                	test   %esi,%esi
 8270f7d:	74 5f                	je     8270fde <_ZN19RentalMachinePcRoom21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x2c0>
 8270f7f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8270f82:	89 04 24             	mov    %eax,(%esp)
 8270f85:	e8 44 ec ff ff       	call   826fbce <_ZN9__gnu_cxx17__normal_iteratorIPKN20InstanceRentalSystem9RentInput10RentInElemESt6vectorIS3_SaIS3_EEEppEv>
 8270f8a:	8b 55 10             	mov    0x10(%ebp),%edx
 8270f8d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8270f90:	89 54 24 04          	mov    %edx,0x4(%esp)
 8270f94:	89 04 24             	mov    %eax,(%esp)
 8270f97:	e8 da eb ff ff       	call   826fb76 <_ZNKSt6vectorIN20InstanceRentalSystem9RentInput10RentInElemESaIS2_EE3endEv>
 8270f9c:	83 ec 04             	sub    $0x4,%esp
 8270f9f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8270fa2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8270fa6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8270fa9:	89 04 24             	mov    %eax,(%esp)
 8270fac:	e8 f1 eb ff ff       	call   826fba2 <_ZN9__gnu_cxxneIPKN20InstanceRentalSystem9RentInput10RentInElemESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 8270fb1:	84 c0                	test   %al,%al
 8270fb3:	0f 85 91 fd ff ff    	jne    8270d4a <_ZN19RentalMachinePcRoom21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x2c>
 8270fb9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8270fbc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8270fc0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8270fc3:	89 04 24             	mov    %eax,(%esp)
 8270fc6:	e8 c1 00 00 00       	call   827108c <_ZN7pc_room24CheckInventoryEmptyCountER5CUseri>
 8270fcb:	83 f0 01             	xor    $0x1,%eax
 8270fce:	84 c0                	test   %al,%al
 8270fd0:	74 07                	je     8270fd9 <_ZN19RentalMachinePcRoom21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x2bb>
 8270fd2:	bb cb 00 00 00       	mov    $0xcb,%ebx
 8270fd7:	eb 05                	jmp    8270fde <_ZN19RentalMachinePcRoom21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE+0x2c0>
 8270fd9:	bb 00 00 00 00       	mov    $0x0,%ebx
 8270fde:	89 d8                	mov    %ebx,%eax
 8270fe0:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8270fe3:	83 c4 00             	add    $0x0,%esp
 8270fe6:	5b                   	pop    %ebx
 8270fe7:	5e                   	pop    %esi
 8270fe8:	5d                   	pop    %ebp
 8270fe9:	c3                   	ret

```

```c
// RentalMachinePcRoom::CheckupAllRentalItems @ 0x8270d1e

/* RentalMachinePcRoom::CheckupAllRentalItems(CUser&, InstanceRentalSystem::RentInput const&) */

undefined4 RentalMachinePcRoom::CheckupAllRentalItems(CUser *param_1,RentInput *param_2)

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
  char *local_14;
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
      cVar2 = pc_room::CheckInventoryEmptyCount((CUser *)param_2,local_18);
      if (cVar2 == '\x01') {
        uVar5 = 0;
      }
      else {
        uVar5 = 0xcb;
      }
      return uVar5;
    }
    local_14 = (char *)__gnu_cxx::
                       __normal_iterator<InstanceRentalSystem::RentInput::RentInElem_const*,std::vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>>
                       ::operator*(local_20);
    EventRewardItemInfo::EventRewardItemInfo((EventRewardItemInfo *)local_38);
                    /* try { // try from 08270d93 to 08270f36 has its CatchHandler @ 08270f55 */
    cVar2 = pc_room::GetRentItemInfo
                      ((CUser *)param_2,*local_14,local_14[1],(EventRewardItemInfo *)local_38,1);
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
        if (local_14[2] == '\0') {
          uVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
          iVar4 = CInventory::tryInsertItemIntoInventory
                            (uVar5,CONCAT22(uStack_73,local_75),CONCAT22(uStack_6f,uStack_71),
                             local_6d,local_69,local_65,local_61,local_5d,local_59,local_55,local_51
                             ,local_4d,local_49,local_45,local_41,local_3d,local_39);
          if (-1 < iVar4) {
            local_18 = local_18 + 1;
            goto LAB_08270f4e;
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
LAB_08270f4e:
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

## Ready

```asm
// === 0827073e RentalMachinePcRoom::Ready  [0x0827073e-0x8270751] ===
 827073e:	55                   	push   %ebp
 827073f:	89 e5                	mov    %esp,%ebp
 8270741:	83 ec 18             	sub    $0x18,%esp
 8270744:	8b 45 08             	mov    0x8(%ebp),%eax
 8270747:	89 04 24             	mov    %eax,(%esp)
 827074a:	e8 7d 01 00 00       	call   82708cc <_ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv>
 827074f:	c9                   	leave
 8270750:	c3                   	ret
 8270751:	90                   	nop

```

```c
// RentalMachinePcRoom::Ready @ 0x827073e

/* RentalMachinePcRoom::Ready() */

void __thiscall RentalMachinePcRoom::Ready(RentalMachinePcRoom *this)

{
  checkAllRentalItemScript(this);
  return;
}

```

---

## Rent

```asm
// === 082704e6 RentalMachinePcRoom::Rent  [0x082704e6-0x827073d] ===
 82704e6:	55                   	push   %ebp
 82704e7:	89 e5                	mov    %esp,%ebp
 82704e9:	56                   	push   %esi
 82704ea:	53                   	push   %ebx
 82704eb:	83 ec 50             	sub    $0x50,%esp
 82704ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 82704f1:	89 04 24             	mov    %eax,(%esp)
 82704f4:	e8 f1 0a 00 00       	call   8270fea <_ZN7pc_room12IsPcRoomUserER5CUser>
 82704f9:	83 f0 01             	xor    $0x1,%eax
 82704fc:	84 c0                	test   %al,%al
 82704fe:	74 18                	je     8270518 <_ZN19RentalMachinePcRoom4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x32>
 8270500:	8b 45 10             	mov    0x10(%ebp),%eax
 8270503:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 8270507:	83 f0 01             	xor    $0x1,%eax
 827050a:	84 c0                	test   %al,%al
 827050c:	74 0a                	je     8270518 <_ZN19RentalMachinePcRoom4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x32>
 827050e:	bb 07 00 00 00       	mov    $0x7,%ebx
 8270513:	e9 19 02 00 00       	jmp    8270731 <_ZN19RentalMachinePcRoom4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x24b>
 8270518:	8b 45 0c             	mov    0xc(%ebp),%eax
 827051b:	89 04 24             	mov    %eax,(%esp)
 827051e:	e8 df 0a 00 00       	call   8271002 <_ZN7pc_room24CheckRentableEnvironmentER5CUser>
 8270523:	83 f0 01             	xor    $0x1,%eax
 8270526:	84 c0                	test   %al,%al
 8270528:	74 0a                	je     8270534 <_ZN19RentalMachinePcRoom4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x4e>
 827052a:	bb 07 00 00 00       	mov    $0x7,%ebx
 827052f:	e9 fd 01 00 00       	jmp    8270731 <_ZN19RentalMachinePcRoom4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x24b>
 8270534:	8b 45 10             	mov    0x10(%ebp),%eax
 8270537:	89 44 24 08          	mov    %eax,0x8(%esp)
 827053b:	8b 45 0c             	mov    0xc(%ebp),%eax
 827053e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8270542:	8b 45 08             	mov    0x8(%ebp),%eax
 8270545:	89 04 24             	mov    %eax,(%esp)
 8270548:	e8 d1 07 00 00       	call   8270d1e <_ZN19RentalMachinePcRoom21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE>
 827054d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8270550:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8270554:	74 08                	je     827055e <_ZN19RentalMachinePcRoom4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x78>
 8270556:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8270559:	e9 d3 01 00 00       	jmp    8270731 <_ZN19RentalMachinePcRoom4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x24b>
 827055e:	8b 45 14             	mov    0x14(%ebp),%eax
 8270561:	83 c0 0c             	add    $0xc,%eax
 8270564:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 827056b:	00 
 827056c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8270570:	8b 45 0c             	mov    0xc(%ebp),%eax
 8270573:	89 04 24             	mov    %eax,(%esp)
 8270576:	e8 8c 12 00 00       	call   8271807 <_ZN7pc_room42DeleteAllRentalItemInSameSectionForNewRentER5CUserRSt6vectorIN20InstanceRentalSystem15DeletedRentItemESaIS4_EEi>
 827057b:	8b 55 10             	mov    0x10(%ebp),%edx
 827057e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8270581:	89 54 24 04          	mov    %edx,0x4(%esp)
 8270585:	89 04 24             	mov    %eax,(%esp)
 8270588:	e8 bd f5 ff ff       	call   826fb4a <_ZNKSt6vectorIN20InstanceRentalSystem9RentInput10RentInElemESaIS2_EE5beginEv>
 827058d:	83 ec 04             	sub    $0x4,%esp
 8270590:	e9 68 01 00 00       	jmp    82706fd <_ZN19RentalMachinePcRoom4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x217>
 8270595:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8270598:	89 04 24             	mov    %eax,(%esp)
 827059b:	e8 44 f6 ff ff       	call   826fbe4 <_ZNK9__gnu_cxx17__normal_iteratorIPKN20InstanceRentalSystem9RentInput10RentInElemESt6vectorIS3_SaIS3_EEEdeEv>
 82705a0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82705a3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82705a6:	89 04 24             	mov    %eax,(%esp)
 82705a9:	e8 dc 4e 6a 00       	call   891548a <_ZN19EventRewardItemInfoC1Ev>
 82705ae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82705b1:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 82705b5:	0f be d0             	movsbl %al,%edx
 82705b8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82705bb:	0f b6 00             	movzbl (%eax),%eax
 82705be:	0f be c0             	movsbl %al,%eax
 82705c1:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 82705c8:	00 
 82705c9:	8d 4d d0             	lea    -0x30(%ebp),%ecx
 82705cc:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 82705d0:	89 54 24 08          	mov    %edx,0x8(%esp)
 82705d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82705d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82705db:	89 04 24             	mov    %eax,(%esp)
 82705de:	e8 b3 0d 00 00       	call   8271396 <_ZN7pc_room15GetRentItemInfoER5CUserccR19EventRewardItemInfoi>
 82705e3:	83 f0 01             	xor    $0x1,%eax
 82705e6:	84 c0                	test   %al,%al
 82705e8:	74 56                	je     8270640 <_ZN19RentalMachinePcRoom4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x15a>
 82705ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82705ed:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 82705f1:	0f be d0             	movsbl %al,%edx
 82705f4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82705f7:	0f b6 00             	movzbl (%eax),%eax
 82705fa:	0f be c0             	movsbl %al,%eax
 82705fd:	89 54 24 18          	mov    %edx,0x18(%esp)
 8270601:	89 44 24 14          	mov    %eax,0x14(%esp)
 8270605:	c7 44 24 10 c4 a0 bf 	movl   $0x8bfa0c4,0x10(%esp)
 827060c:	08 
 827060d:	c7 44 24 0c f8 00 00 	movl   $0xf8,0xc(%esp)
 8270614:	00 
 8270615:	c7 44 24 08 e0 af bf 	movl   $0x8bfafe0,0x8(%esp)
 827061c:	08 
 827061d:	c7 44 24 04 19 a1 bf 	movl   $0x8bfa119,0x4(%esp)
 8270624:	08 
 8270625:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 827062c:	e8 d9 35 86 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8270631:	bb 01 00 00 00       	mov    $0x1,%ebx
 8270636:	be 00 00 00 00       	mov    $0x0,%esi
 827063b:	e9 a3 00 00 00       	jmp    82706e3 <_ZN19RentalMachinePcRoom4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x1fd>
 8270640:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8270643:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 8270647:	84 c0                	test   %al,%al
 8270649:	74 2a                	je     8270675 <_ZN19RentalMachinePcRoom4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x18f>
 827064b:	c7 44 24 10 3d 00 00 	movl   $0x3d,0x10(%esp)
 8270652:	00 
 8270653:	8b 45 14             	mov    0x14(%ebp),%eax
 8270656:	89 44 24 0c          	mov    %eax,0xc(%esp)
 827065a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 827065d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8270661:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8270664:	89 44 24 04          	mov    %eax,0x4(%esp)
 8270668:	8b 45 0c             	mov    0xc(%ebp),%eax
 827066b:	89 04 24             	mov    %eax,(%esp)
 827066e:	e8 52 0e 00 00       	call   82714c5 <_ZN7pc_room16ProcessEquipItemER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemERK19EventRewardItemInfoRNS2_10RentOutputEi>
 8270673:	eb 28                	jmp    827069d <_ZN19RentalMachinePcRoom4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x1b7>
 8270675:	c7 44 24 10 3d 00 00 	movl   $0x3d,0x10(%esp)
 827067c:	00 
 827067d:	8b 45 14             	mov    0x14(%ebp),%eax
 8270680:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8270684:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8270687:	89 44 24 08          	mov    %eax,0x8(%esp)
 827068b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 827068e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8270692:	8b 45 0c             	mov    0xc(%ebp),%eax
 8270695:	89 04 24             	mov    %eax,(%esp)
 8270698:	e8 c9 0f 00 00       	call   8271666 <_ZN7pc_room17ProcessInsertItemER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemERK19EventRewardItemInfoRNS2_10RentOutputEi>
 827069d:	8b 45 10             	mov    0x10(%ebp),%eax
 82706a0:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 82706a4:	84 c0                	test   %al,%al
 82706a6:	74 19                	je     82706c1 <_ZN19RentalMachinePcRoom4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x1db>
 82706a8:	8b 45 d0             	mov    -0x30(%ebp),%eax
 82706ab:	89 44 24 08          	mov    %eax,0x8(%esp)
 82706af:	8b 45 0c             	mov    0xc(%ebp),%eax
 82706b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82706b6:	8b 45 08             	mov    0x8(%ebp),%eax
 82706b9:	89 04 24             	mov    %eax,(%esp)
 82706bc:	e8 ff 00 00 00       	call   82707c0 <_ZN19RentalMachinePcRoom3logER5CUseri>
 82706c1:	be 01 00 00 00       	mov    $0x1,%esi
 82706c6:	eb 1b                	jmp    82706e3 <_ZN19RentalMachinePcRoom4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x1fd>
 82706c8:	89 d3                	mov    %edx,%ebx
 82706ca:	89 c6                	mov    %eax,%esi
 82706cc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82706cf:	89 04 24             	mov    %eax,(%esp)
 82706d2:	e8 c9 f3 ff ff       	call   826faa0 <_ZN19EventRewardItemInfoD1Ev>
 82706d7:	89 f0                	mov    %esi,%eax
 82706d9:	89 da                	mov    %ebx,%edx
 82706db:	89 04 24             	mov    %eax,(%esp)
 82706de:	e8 6d 30 87 00       	call   8ae3750 <_Unwind_Resume>
 82706e3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82706e6:	89 04 24             	mov    %eax,(%esp)
 82706e9:	e8 b2 f3 ff ff       	call   826faa0 <_ZN19EventRewardItemInfoD1Ev>
 82706ee:	85 f6                	test   %esi,%esi
 82706f0:	74 3f                	je     8270731 <_ZN19RentalMachinePcRoom4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0x24b>
 82706f2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82706f5:	89 04 24             	mov    %eax,(%esp)
 82706f8:	e8 d1 f4 ff ff       	call   826fbce <_ZN9__gnu_cxx17__normal_iteratorIPKN20InstanceRentalSystem9RentInput10RentInElemESt6vectorIS3_SaIS3_EEEppEv>
 82706fd:	8b 55 10             	mov    0x10(%ebp),%edx
 8270700:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8270703:	89 54 24 04          	mov    %edx,0x4(%esp)
 8270707:	89 04 24             	mov    %eax,(%esp)
 827070a:	e8 67 f4 ff ff       	call   826fb76 <_ZNKSt6vectorIN20InstanceRentalSystem9RentInput10RentInElemESaIS2_EE3endEv>
 827070f:	83 ec 04             	sub    $0x4,%esp
 8270712:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8270715:	89 44 24 04          	mov    %eax,0x4(%esp)
 8270719:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827071c:	89 04 24             	mov    %eax,(%esp)
 827071f:	e8 7e f4 ff ff       	call   826fba2 <_ZN9__gnu_cxxneIPKN20InstanceRentalSystem9RentInput10RentInElemESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 8270724:	84 c0                	test   %al,%al
 8270726:	0f 85 69 fe ff ff    	jne    8270595 <_ZN19RentalMachinePcRoom4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE+0xaf>
 827072c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8270731:	89 d8                	mov    %ebx,%eax
 8270733:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8270736:	83 c4 00             	add    $0x0,%esp
 8270739:	5b                   	pop    %ebx
 827073a:	5e                   	pop    %esi
 827073b:	5d                   	pop    %ebp
 827073c:	c3                   	ret
 827073d:	90                   	nop

```

```c
// RentalMachinePcRoom::Rent @ 0x82704e6

/* RentalMachinePcRoom::Rent(CUser&, InstanceRentalSystem::RentInput const&,
   InstanceRentalSystem::RentOutput&) */

int __thiscall
RentalMachinePcRoom::Rent
          (RentalMachinePcRoom *this,CUser *param_1,RentInput *param_2,RentOutput *param_3)

{
  char cVar1;
  bool bVar2;
  int unaff_EBX;
  int local_34 [6];
  __normal_iterator<InstanceRentalSystem::RentInput::RentInElem_const*,std::vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  int local_14;
  RentInElem *local_10;
  
  cVar1 = pc_room::IsPcRoomUser(param_1);
  if ((cVar1 == '\x01') || (param_2[0x11] == (RentInput)0x1)) {
    cVar1 = pc_room::CheckRentableEnvironment(param_1);
    if (cVar1 == '\x01') {
      local_14 = CheckupAllRentalItems((CUser *)this,(RentInput *)param_1);
      if (local_14 == 0) {
        pc_room::DeleteAllRentalItemInSameSectionForNewRent(param_1,(vector *)(param_3 + 0xc),1);
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
                    /* try { // try from 082705de to 082706c0 has its CatchHandler @ 082706c8 */
          cVar1 = pc_room::GetRentItemInfo
                            (param_1,(char)*local_10,(char)local_10[1],
                             (EventRewardItemInfo *)local_34,1);
          if (cVar1 == '\x01') {
            if (local_10[2] == (RentInElem)0x0) {
              pc_room::ProcessInsertItem
                        (param_1,local_10,(EventRewardItemInfo *)local_34,param_3,0x3d);
            }
            else {
              pc_room::ProcessEquipItem
                        (param_1,local_10,(EventRewardItemInfo *)local_34,param_3,0x3d);
            }
            if (param_2[0x10] != (RentInput)0x0) {
              log(this,param_1,local_34[0]);
            }
            bVar2 = true;
          }
          else {
            LogManager::logFormat
                      (1,"RentalSystem.cpp",
                       "virtual ENUM_ERROR RentalMachinePcRoom::Rent(CUser&, const InstanceRentalSystem::RentInput&, InstanceRentalSystem::RentOutput&)"
                       ,0xf8,
                       "Rent error. GetRentItemInfo return false. scriptSectionIndex(%d), scriptSeqIndex(%d)"
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
      local_14 = 7;
    }
  }
  else {
    local_14 = 7;
  }
  return local_14;
}

```

---

## RentalMachinePcRoom

```asm
// === 082703c0 RentalMachinePcRoom::RentalMachinePcRoom  [0x082703c0-0x8270465] ===
 82703c0:	55                   	push   %ebp
 82703c1:	89 e5                	mov    %esp,%ebp
 82703c3:	57                   	push   %edi
 82703c4:	56                   	push   %esi
 82703c5:	53                   	push   %ebx
 82703c6:	83 ec 1c             	sub    $0x1c,%esp
 82703c9:	8b 45 08             	mov    0x8(%ebp),%eax
 82703cc:	89 04 24             	mov    %eax,(%esp)
 82703cf:	e8 8a f6 ff ff       	call   826fa5e <_ZN14IRentalMachineC1Ev>
 82703d4:	8b 45 08             	mov    0x8(%ebp),%eax
 82703d7:	c7 00 68 b0 bf 08    	movl   $0x8bfb068,(%eax)
 82703dd:	c7 04 24 1c 01 00 00 	movl   $0x11c,(%esp)
 82703e4:	e8 67 40 4b 00       	call   8724450 <_Znwj>
 82703e9:	89 c3                	mov    %eax,%ebx
 82703eb:	89 d8                	mov    %ebx,%eax
 82703ed:	89 04 24             	mov    %eax,(%esp)
 82703f0:	e8 8b 16 00 00       	call   8271a80 <_ZN19RentalMachinePcRoom23RentalMachinePcRoomImplC1Ev>
 82703f5:	eb 12                	jmp    8270409 <_ZN19RentalMachinePcRoomC1Ev+0x49>
 82703f7:	89 d6                	mov    %edx,%esi
 82703f9:	89 c7                	mov    %eax,%edi
 82703fb:	89 1c 24             	mov    %ebx,(%esp)
 82703fe:	e8 ed 40 4b 00       	call   87244f0 <_ZdlPv>
 8270403:	89 f8                	mov    %edi,%eax
 8270405:	89 f2                	mov    %esi,%edx
 8270407:	eb 39                	jmp    8270442 <_ZN19RentalMachinePcRoomC1Ev+0x82>
 8270409:	89 d8                	mov    %ebx,%eax
 827040b:	8b 55 08             	mov    0x8(%ebp),%edx
 827040e:	83 c2 04             	add    $0x4,%edx
 8270411:	89 44 24 04          	mov    %eax,0x4(%esp)
 8270415:	89 14 24             	mov    %edx,(%esp)
 8270418:	e8 25 19 00 00       	call   8271d42 <_ZNSt8auto_ptrIN19RentalMachinePcRoom23RentalMachinePcRoomImplEEC1EPS1_>
 827041d:	8b 45 08             	mov    0x8(%ebp),%eax
 8270420:	89 04 24             	mov    %eax,(%esp)
 8270423:	e8 5e 04 00 00       	call   8270886 <_ZN19RentalMachinePcRoom22initLoggingEnvironmentEv>
 8270428:	eb 33                	jmp    827045d <_ZN19RentalMachinePcRoomC1Ev+0x9d>
 827042a:	89 d3                	mov    %edx,%ebx
 827042c:	89 c6                	mov    %eax,%esi
 827042e:	8b 45 08             	mov    0x8(%ebp),%eax
 8270431:	83 c0 04             	add    $0x4,%eax
 8270434:	89 04 24             	mov    %eax,(%esp)
 8270437:	e8 2c 19 00 00       	call   8271d68 <_ZNSt8auto_ptrIN19RentalMachinePcRoom23RentalMachinePcRoomImplEED1Ev>
 827043c:	89 f0                	mov    %esi,%eax
 827043e:	89 da                	mov    %ebx,%edx
 8270440:	eb 00                	jmp    8270442 <_ZN19RentalMachinePcRoomC1Ev+0x82>
 8270442:	89 d3                	mov    %edx,%ebx
 8270444:	89 c6                	mov    %eax,%esi
 8270446:	8b 45 08             	mov    0x8(%ebp),%eax
 8270449:	89 04 24             	mov    %eax,(%esp)
 827044c:	e8 c9 f5 ff ff       	call   826fa1a <_ZN14IRentalMachineD1Ev>
 8270451:	89 f0                	mov    %esi,%eax
 8270453:	89 da                	mov    %ebx,%edx
 8270455:	89 04 24             	mov    %eax,(%esp)
 8270458:	e8 f3 32 87 00       	call   8ae3750 <_Unwind_Resume>
 827045d:	83 c4 1c             	add    $0x1c,%esp
 8270460:	5b                   	pop    %ebx
 8270461:	5e                   	pop    %esi
 8270462:	5f                   	pop    %edi
 8270463:	5d                   	pop    %ebp
 8270464:	c3                   	ret
 8270465:	90                   	nop

```

```c
// RentalMachinePcRoom::RentalMachinePcRoom @ 0x82703c0

/* RentalMachinePcRoom::RentalMachinePcRoom() */

void __thiscall RentalMachinePcRoom::RentalMachinePcRoom(RentalMachinePcRoom *this)

{
  RentalMachinePcRoomImpl *this_00;
  
  IRentalMachine::IRentalMachine((IRentalMachine *)this);
  *(undefined ***)this = &PTR__RentalMachinePcRoom_08bfb068;
                    /* try { // try from 082703e4 to 082703e8 has its CatchHandler @ 08270442 */
  this_00 = operator_new(0x11c);
                    /* try { // try from 082703f0 to 082703f4 has its CatchHandler @ 082703f7 */
  RentalMachinePcRoomImpl::RentalMachinePcRoomImpl(this_00);
  std::auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl>::auto_ptr
            ((auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl> *)(this + 4),this_00);
                    /* try { // try from 08270423 to 08270427 has its CatchHandler @ 0827042a */
  initLoggingEnvironment(this);
  return;
}

```

---

## checkAllRentalItemScript

```asm
// === 082708cc RentalMachinePcRoom::checkAllRentalItemScript  [0x082708cc-0x8270d1d] ===
 82708cc:	55                   	push   %ebp
 82708cd:	89 e5                	mov    %esp,%ebp
 82708cf:	53                   	push   %ebx
 82708d0:	83 ec 54             	sub    $0x54,%esp
 82708d3:	e8 c3 b8 e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 82708d8:	8d 90 00 4b 00 00    	lea    0x4b00(%eax),%edx
 82708de:	8d 45 cc             	lea    -0x34(%ebp),%eax
 82708e1:	89 54 24 04          	mov    %edx,0x4(%esp)
 82708e5:	89 04 24             	mov    %eax,(%esp)
 82708e8:	e8 0b f3 ff ff       	call   826fbf8 <_ZNSt3mapIiSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE5beginEv>
 82708ed:	83 ec 04             	sub    $0x4,%esp
 82708f0:	e9 e8 03 00 00       	jmp    8270cdd <_ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv+0x411>
 82708f5:	8d 45 cc             	lea    -0x34(%ebp),%eax
 82708f8:	89 04 24             	mov    %eax,(%esp)
 82708fb:	e8 76 f3 ff ff       	call   826fc76 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIS2_I19EventRewardItemInfoSaIS3_EESaIS5_EEEEdeEv>
 8270900:	83 c0 04             	add    $0x4,%eax
 8270903:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8270906:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8270909:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 827090c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8270910:	89 04 24             	mov    %eax,(%esp)
 8270913:	e8 f8 f3 ff ff       	call   826fd10 <_ZNKSt6vectorIS_I19EventRewardItemInfoSaIS0_EESaIS2_EE5beginEv>
 8270918:	83 ec 04             	sub    $0x4,%esp
 827091b:	e9 83 03 00 00       	jmp    8270ca3 <_ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv+0x3d7>
 8270920:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8270923:	89 04 24             	mov    %eax,(%esp)
 8270926:	e8 7f f4 ff ff       	call   826fdaa <_ZNK9__gnu_cxx17__normal_iteratorIPKSt6vectorI19EventRewardItemInfoSaIS2_EES1_IS4_SaIS4_EEEdeEv>
 827092b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 827092e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8270931:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8270934:	89 54 24 04          	mov    %edx,0x4(%esp)
 8270938:	89 04 24             	mov    %eax,(%esp)
 827093b:	e8 74 f4 ff ff       	call   826fdb4 <_ZNKSt6vectorI19EventRewardItemInfoSaIS0_EE5beginEv>
 8270940:	83 ec 04             	sub    $0x4,%esp
 8270943:	e9 21 03 00 00       	jmp    8270c69 <_ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv+0x39d>
 8270948:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 827094b:	89 04 24             	mov    %eax,(%esp)
 827094e:	e8 fb f4 ff ff       	call   826fe4e <_ZNK9__gnu_cxx17__normal_iteratorIPK19EventRewardItemInfoSt6vectorIS1_SaIS1_EEEdeEv>
 8270953:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8270956:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8270959:	8b 00                	mov    (%eax),%eax
 827095b:	89 c3                	mov    %eax,%ebx
 827095d:	e8 39 b8 e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8270962:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8270966:	89 04 24             	mov    %eax,(%esp)
 8270969:	e8 c4 f0 0e 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 827096e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8270971:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8270975:	75 4f                	jne    82709c6 <_ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv+0xfa>
 8270977:	8b 45 ec             	mov    -0x14(%ebp),%eax
 827097a:	8b 18                	mov    (%eax),%ebx
 827097c:	c7 44 24 04 80 a1 bf 	movl   $0x8bfa180,0x4(%esp)
 8270983:	08 
 8270984:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 827098b:	e8 70 c9 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 8270990:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8270994:	89 04 24             	mov    %eax,(%esp)
 8270997:	e8 64 f4 48 00       	call   86ffe00 <_ZNSolsEj>
 827099c:	c7 44 24 04 a9 a1 bf 	movl   $0x8bfa1a9,0x4(%esp)
 82709a3:	08 
 82709a4:	89 04 24             	mov    %eax,(%esp)
 82709a7:	e8 54 c9 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 82709ac:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 82709b3:	08 
 82709b4:	89 04 24             	mov    %eax,(%esp)
 82709b7:	e8 a4 ae 48 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 82709bc:	b8 00 00 00 00       	mov    $0x0,%eax
 82709c1:	e9 53 03 00 00       	jmp    8270d19 <_ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv+0x44d>
 82709c6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82709c9:	8b 00                	mov    (%eax),%eax
 82709cb:	83 c0 34             	add    $0x34,%eax
 82709ce:	8b 10                	mov    (%eax),%edx
 82709d0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82709d3:	89 04 24             	mov    %eax,(%esp)
 82709d6:	ff d2                	call   *%edx
 82709d8:	83 f0 01             	xor    $0x1,%eax
 82709db:	84 c0                	test   %al,%al
 82709dd:	74 4f                	je     8270a2e <_ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv+0x162>
 82709df:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82709e2:	8b 18                	mov    (%eax),%ebx
 82709e4:	c7 44 24 04 ac a1 bf 	movl   $0x8bfa1ac,0x4(%esp)
 82709eb:	08 
 82709ec:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 82709f3:	e8 08 c9 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 82709f8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82709fc:	89 04 24             	mov    %eax,(%esp)
 82709ff:	e8 fc f3 48 00       	call   86ffe00 <_ZNSolsEj>
 8270a04:	c7 44 24 04 a9 a1 bf 	movl   $0x8bfa1a9,0x4(%esp)
 8270a0b:	08 
 8270a0c:	89 04 24             	mov    %eax,(%esp)
 8270a0f:	e8 ec c8 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 8270a14:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 8270a1b:	08 
 8270a1c:	89 04 24             	mov    %eax,(%esp)
 8270a1f:	e8 3c ae 48 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 8270a24:	b8 00 00 00 00       	mov    $0x0,%eax
 8270a29:	e9 eb 02 00 00       	jmp    8270d19 <_ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv+0x44d>
 8270a2e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8270a31:	8b 00                	mov    (%eax),%eax
 8270a33:	83 c0 40             	add    $0x40,%eax
 8270a36:	8b 10                	mov    (%eax),%edx
 8270a38:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8270a3b:	89 04 24             	mov    %eax,(%esp)
 8270a3e:	ff d2                	call   *%edx
 8270a40:	83 f0 01             	xor    $0x1,%eax
 8270a43:	84 c0                	test   %al,%al
 8270a45:	74 4f                	je     8270a96 <_ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv+0x1ca>
 8270a47:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8270a4a:	8b 18                	mov    (%eax),%ebx
 8270a4c:	c7 44 24 04 fc a1 bf 	movl   $0x8bfa1fc,0x4(%esp)
 8270a53:	08 
 8270a54:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 8270a5b:	e8 a0 c8 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 8270a60:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8270a64:	89 04 24             	mov    %eax,(%esp)
 8270a67:	e8 94 f3 48 00       	call   86ffe00 <_ZNSolsEj>
 8270a6c:	c7 44 24 04 a9 a1 bf 	movl   $0x8bfa1a9,0x4(%esp)
 8270a73:	08 
 8270a74:	89 04 24             	mov    %eax,(%esp)
 8270a77:	e8 84 c8 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 8270a7c:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 8270a83:	08 
 8270a84:	89 04 24             	mov    %eax,(%esp)
 8270a87:	e8 d4 ad 48 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 8270a8c:	b8 00 00 00 00       	mov    $0x0,%eax
 8270a91:	e9 83 02 00 00       	jmp    8270d19 <_ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv+0x44d>
 8270a96:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8270a99:	8b 00                	mov    (%eax),%eax
 8270a9b:	83 c0 38             	add    $0x38,%eax
 8270a9e:	8b 10                	mov    (%eax),%edx
 8270aa0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8270aa3:	89 04 24             	mov    %eax,(%esp)
 8270aa6:	ff d2                	call   *%edx
 8270aa8:	83 f0 01             	xor    $0x1,%eax
 8270aab:	84 c0                	test   %al,%al
 8270aad:	74 4f                	je     8270afe <_ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv+0x232>
 8270aaf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8270ab2:	8b 18                	mov    (%eax),%ebx
 8270ab4:	c7 44 24 04 48 a2 bf 	movl   $0x8bfa248,0x4(%esp)
 8270abb:	08 
 8270abc:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 8270ac3:	e8 38 c8 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 8270ac8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8270acc:	89 04 24             	mov    %eax,(%esp)
 8270acf:	e8 2c f3 48 00       	call   86ffe00 <_ZNSolsEj>
 8270ad4:	c7 44 24 04 a9 a1 bf 	movl   $0x8bfa1a9,0x4(%esp)
 8270adb:	08 
 8270adc:	89 04 24             	mov    %eax,(%esp)
 8270adf:	e8 1c c8 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 8270ae4:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 8270aeb:	08 
 8270aec:	89 04 24             	mov    %eax,(%esp)
 8270aef:	e8 6c ad 48 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 8270af4:	b8 00 00 00 00       	mov    $0x0,%eax
 8270af9:	e9 1b 02 00 00       	jmp    8270d19 <_ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv+0x44d>
 8270afe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8270b01:	8b 00                	mov    (%eax),%eax
 8270b03:	83 c0 3c             	add    $0x3c,%eax
 8270b06:	8b 10                	mov    (%eax),%edx
 8270b08:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8270b0b:	89 04 24             	mov    %eax,(%esp)
 8270b0e:	ff d2                	call   *%edx
 8270b10:	83 f0 01             	xor    $0x1,%eax
 8270b13:	84 c0                	test   %al,%al
 8270b15:	74 4f                	je     8270b66 <_ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv+0x29a>
 8270b17:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8270b1a:	8b 18                	mov    (%eax),%ebx
 8270b1c:	c7 44 24 04 90 a2 bf 	movl   $0x8bfa290,0x4(%esp)
 8270b23:	08 
 8270b24:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 8270b2b:	e8 d0 c7 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 8270b30:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8270b34:	89 04 24             	mov    %eax,(%esp)
 8270b37:	e8 c4 f2 48 00       	call   86ffe00 <_ZNSolsEj>
 8270b3c:	c7 44 24 04 a9 a1 bf 	movl   $0x8bfa1a9,0x4(%esp)
 8270b43:	08 
 8270b44:	89 04 24             	mov    %eax,(%esp)
 8270b47:	e8 b4 c7 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 8270b4c:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 8270b53:	08 
 8270b54:	89 04 24             	mov    %eax,(%esp)
 8270b57:	e8 04 ad 48 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 8270b5c:	b8 00 00 00 00       	mov    $0x0,%eax
 8270b61:	e9 b3 01 00 00       	jmp    8270d19 <_ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv+0x44d>
 8270b66:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8270b69:	8b 00                	mov    (%eax),%eax
 8270b6b:	83 c0 30             	add    $0x30,%eax
 8270b6e:	8b 10                	mov    (%eax),%edx
 8270b70:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8270b73:	89 04 24             	mov    %eax,(%esp)
 8270b76:	ff d2                	call   *%edx
 8270b78:	83 f0 01             	xor    $0x1,%eax
 8270b7b:	84 c0                	test   %al,%al
 8270b7d:	74 4f                	je     8270bce <_ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv+0x302>
 8270b7f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8270b82:	8b 18                	mov    (%eax),%ebx
 8270b84:	c7 44 24 04 d4 a2 bf 	movl   $0x8bfa2d4,0x4(%esp)
 8270b8b:	08 
 8270b8c:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 8270b93:	e8 68 c7 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 8270b98:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8270b9c:	89 04 24             	mov    %eax,(%esp)
 8270b9f:	e8 5c f2 48 00       	call   86ffe00 <_ZNSolsEj>
 8270ba4:	c7 44 24 04 a9 a1 bf 	movl   $0x8bfa1a9,0x4(%esp)
 8270bab:	08 
 8270bac:	89 04 24             	mov    %eax,(%esp)
 8270baf:	e8 4c c7 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 8270bb4:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 8270bbb:	08 
 8270bbc:	89 04 24             	mov    %eax,(%esp)
 8270bbf:	e8 9c ac 48 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 8270bc4:	b8 00 00 00 00       	mov    $0x0,%eax
 8270bc9:	e9 4b 01 00 00       	jmp    8270d19 <_ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv+0x44d>
 8270bce:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8270bd1:	89 04 24             	mov    %eax,(%esp)
 8270bd4:	e8 09 07 e8 ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 8270bd9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8270bdc:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 8270be0:	74 4f                	je     8270c31 <_ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv+0x365>
 8270be2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8270be5:	8b 18                	mov    (%eax),%ebx
 8270be7:	c7 44 24 04 1c a3 bf 	movl   $0x8bfa31c,0x4(%esp)
 8270bee:	08 
 8270bef:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 8270bf6:	e8 05 c7 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 8270bfb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8270bff:	89 04 24             	mov    %eax,(%esp)
 8270c02:	e8 f9 f1 48 00       	call   86ffe00 <_ZNSolsEj>
 8270c07:	c7 44 24 04 a9 a1 bf 	movl   $0x8bfa1a9,0x4(%esp)
 8270c0e:	08 
 8270c0f:	89 04 24             	mov    %eax,(%esp)
 8270c12:	e8 e9 c6 48 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 8270c17:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 8270c1e:	08 
 8270c1f:	89 04 24             	mov    %eax,(%esp)
 8270c22:	e8 39 ac 48 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 8270c27:	b8 00 00 00 00       	mov    $0x0,%eax
 8270c2c:	e9 e8 00 00 00       	jmp    8270d19 <_ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv+0x44d>
 8270c31:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 8270c34:	8b 45 08             	mov    0x8(%ebp),%eax
 8270c37:	83 c0 04             	add    $0x4,%eax
 8270c3a:	89 04 24             	mov    %eax,(%esp)
 8270c3d:	e8 4c 11 00 00       	call   8271d8e <_ZNKSt8auto_ptrIN19RentalMachinePcRoom23RentalMachinePcRoomImplEEptEv>
 8270c42:	8d 90 04 01 00 00    	lea    0x104(%eax),%edx
 8270c48:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8270c4b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8270c4f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8270c53:	89 04 24             	mov    %eax,(%esp)
 8270c56:	e8 25 ab f3 ff       	call   81ab780 <_ZNSt3setIjSt4lessIjESaIjEE6insertERKj>
 8270c5b:	83 ec 04             	sub    $0x4,%esp
 8270c5e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8270c61:	89 04 24             	mov    %eax,(%esp)
 8270c64:	e8 cf f1 ff ff       	call   826fe38 <_ZN9__gnu_cxx17__normal_iteratorIPK19EventRewardItemInfoSt6vectorIS1_SaIS1_EEEppEv>
 8270c69:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8270c6c:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8270c6f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8270c73:	89 04 24             	mov    %eax,(%esp)
 8270c76:	e8 65 f1 ff ff       	call   826fde0 <_ZNKSt6vectorI19EventRewardItemInfoSaIS0_EE3endEv>
 8270c7b:	83 ec 04             	sub    $0x4,%esp
 8270c7e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8270c81:	89 44 24 04          	mov    %eax,0x4(%esp)
 8270c85:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8270c88:	89 04 24             	mov    %eax,(%esp)
 8270c8b:	e8 7c f1 ff ff       	call   826fe0c <_ZN9__gnu_cxxneIPK19EventRewardItemInfoSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8270c90:	84 c0                	test   %al,%al
 8270c92:	0f 85 b0 fc ff ff    	jne    8270948 <_ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv+0x7c>
 8270c98:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8270c9b:	89 04 24             	mov    %eax,(%esp)
 8270c9e:	e8 f1 f0 ff ff       	call   826fd94 <_ZN9__gnu_cxx17__normal_iteratorIPKSt6vectorI19EventRewardItemInfoSaIS2_EES1_IS4_SaIS4_EEEppEv>
 8270ca3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8270ca6:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8270ca9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8270cad:	89 04 24             	mov    %eax,(%esp)
 8270cb0:	e8 87 f0 ff ff       	call   826fd3c <_ZNKSt6vectorIS_I19EventRewardItemInfoSaIS0_EESaIS2_EE3endEv>
 8270cb5:	83 ec 04             	sub    $0x4,%esp
 8270cb8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8270cbb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8270cbf:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8270cc2:	89 04 24             	mov    %eax,(%esp)
 8270cc5:	e8 9e f0 ff ff       	call   826fd68 <_ZN9__gnu_cxxneIPKSt6vectorI19EventRewardItemInfoSaIS2_EES1_IS4_SaIS4_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 8270cca:	84 c0                	test   %al,%al
 8270ccc:	0f 85 4e fc ff ff    	jne    8270920 <_ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv+0x54>
 8270cd2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8270cd5:	89 04 24             	mov    %eax,(%esp)
 8270cd8:	e8 7b ef ff ff       	call   826fc58 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIS2_I19EventRewardItemInfoSaIS3_EESaIS5_EEEEppEv>
 8270cdd:	e8 b9 b4 e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8270ce2:	8d 90 00 4b 00 00    	lea    0x4b00(%eax),%edx
 8270ce8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8270ceb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8270cef:	89 04 24             	mov    %eax,(%esp)
 8270cf2:	e8 27 ef ff ff       	call   826fc1e <_ZNSt3mapIiSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 8270cf7:	83 ec 04             	sub    $0x4,%esp
 8270cfa:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8270cfd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8270d01:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8270d04:	89 04 24             	mov    %eax,(%esp)
 8270d07:	e8 38 ef ff ff       	call   826fc44 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIS2_I19EventRewardItemInfoSaIS3_EESaIS5_EEEEneERKS9_>
 8270d0c:	84 c0                	test   %al,%al
 8270d0e:	0f 85 e1 fb ff ff    	jne    82708f5 <_ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv+0x29>
 8270d14:	b8 01 00 00 00       	mov    $0x1,%eax
 8270d19:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8270d1c:	c9                   	leave
 8270d1d:	c3                   	ret

```

```c
// RentalMachinePcRoom::checkAllRentalItemScript @ 0x82708cc

/* RentalMachinePcRoom::checkAllRentalItemScript() */

undefined4 __thiscall RentalMachinePcRoom::checkAllRentalItemScript(RentalMachinePcRoom *this)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  CDataManager *this_00;
  ostream *poVar4;
  __normal_iterator<EventRewardItemInfo_const*,std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>
  local_40 [4];
  __normal_iterator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>const*,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>
  local_3c [4];
  map<int,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  local_38 [4];
  map<int,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  local_34 [4];
  __normal_iterator local_30 [4];
  __normal_iterator local_2c [4];
  uint local_28 [2];
  int local_20;
  undefined4 local_1c;
  uint *local_18;
  CItem *local_14;
  int local_10;
  
  G_CDataManager();
  std::
  map<int,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  ::begin(local_38);
  do {
    G_CDataManager();
    std::
    map<int,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
    ::end(local_34);
    cVar3 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
                          *)local_38,(_Rb_tree_iterator *)local_34);
    if (cVar3 == '\0') {
      return 1;
    }
    local_20 = std::
               _Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
               ::operator*((_Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
                            *)local_38);
    local_20 = local_20 + 4;
    std::
    vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
    ::begin();
    while( true ) {
      std::
      vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
      ::end();
      bVar2 = __gnu_cxx::operator!=(local_3c,local_30);
      if (!bVar2) break;
      local_1c = __gnu_cxx::
                 __normal_iterator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>const*,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>
                 ::operator*(local_3c);
      std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>::begin();
      while( true ) {
        std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>::end();
        bVar2 = __gnu_cxx::operator!=(local_40,local_2c);
        if (!bVar2) break;
        local_18 = (uint *)__gnu_cxx::
                           __normal_iterator<EventRewardItemInfo_const*,std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>
                           ::operator*(local_40);
        uVar1 = *local_18;
        this_00 = (CDataManager *)G_CDataManager();
        local_14 = (CItem *)CDataManager::find_item(this_00,uVar1);
        if (local_14 == (CItem *)0x0) {
          uVar1 = *local_18;
          poVar4 = std::operator<<((ostream *)&std::cerr,"[RentalSystem::Ready()] Can`t find item[")
          ;
          poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
          poVar4 = std::operator<<(poVar4,"]");
          std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
          return 0;
        }
        cVar3 = (**(code **)(*(int *)local_14 + 0x34))(local_14);
        if (cVar3 != '\x01') {
          uVar1 = *local_18;
          poVar4 = std::operator<<((ostream *)&std::cerr,
                                   "[RentalSystem::Ready()] Impossible contents(amplify upgrade) is not checked. ["
                                  );
          poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
          poVar4 = std::operator<<(poVar4,"]");
          std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
          return 0;
        }
        cVar3 = (**(code **)(*(int *)local_14 + 0x40))(local_14);
        if (cVar3 != '\x01') {
          uVar1 = *local_18;
          poVar4 = std::operator<<((ostream *)&std::cerr,
                                   "[RentalSystem::Ready()] Impossible contents(charac cargo) is not checked. ["
                                  );
          poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
          poVar4 = std::operator<<(poVar4,"]");
          std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
          return 0;
        }
        cVar3 = (**(code **)(*(int *)local_14 + 0x38))(local_14);
        if (cVar3 != '\x01') {
          uVar1 = *local_18;
          poVar4 = std::operator<<((ostream *)&std::cerr,
                                   "[RentalSystem::Ready()] Impossible contents(disjoint) is not checked. ["
                                  );
          poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
          poVar4 = std::operator<<(poVar4,"]");
          std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
          return 0;
        }
        cVar3 = (**(code **)(*(int *)local_14 + 0x3c))(local_14);
        if (cVar3 != '\x01') {
          uVar1 = *local_18;
          poVar4 = std::operator<<((ostream *)&std::cerr,
                                   "[RentalSystem::Ready()] Impossible contents(gift) is not checked. ["
                                  );
          poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
          poVar4 = std::operator<<(poVar4,"]");
          std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
          return 0;
        }
        cVar3 = (**(code **)(*(int *)local_14 + 0x30))(local_14);
        if (cVar3 != '\x01') {
          uVar1 = *local_18;
          poVar4 = std::operator<<((ostream *)&std::cerr,
                                   "[RentalSystem::Ready()] Impossible contents(upgrade) is not checked. ["
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
                                   "[RentalSystem::Ready()] AtttachType is not trade delete. [");
          poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
          poVar4 = std::operator<<(poVar4,"]");
          std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
          return 0;
        }
        std::auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl>::operator->
                  ((auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl> *)(this + 4));
        std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::insert
                  (local_28);
        __gnu_cxx::
        __normal_iterator<EventRewardItemInfo_const*,std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>
        ::operator++(local_40);
      }
      __gnu_cxx::
      __normal_iterator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>const*,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>
      ::operator++(local_3c);
    }
    std::
    _Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
    ::operator++((_Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
                  *)local_38);
  } while( true );
}

```

---

## initLoggingEnvironment

```asm
// === 08270886 RentalMachinePcRoom::initLoggingEnvironment  [0x08270886-0x82708cb] ===
 8270886:	55                   	push   %ebp
 8270887:	89 e5                	mov    %esp,%ebp
 8270889:	53                   	push   %ebx
 827088a:	83 ec 14             	sub    $0x14,%esp
 827088d:	e8 ef b8 e5 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8270892:	89 04 24             	mov    %eax,(%esp)
 8270895:	e8 00 9b e6 ff       	call   80da39a <_ZN12CEnvironment13get_file_nameEv>
 827089a:	89 c3                	mov    %eax,%ebx
 827089c:	8b 45 08             	mov    0x8(%ebp),%eax
 827089f:	83 c0 04             	add    $0x4,%eax
 82708a2:	89 04 24             	mov    %eax,(%esp)
 82708a5:	e8 e4 14 00 00       	call   8271d8e <_ZNKSt8auto_ptrIN19RentalMachinePcRoom23RentalMachinePcRoomImplEEptEv>
 82708aa:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82708ae:	c7 44 24 08 64 a1 bf 	movl   $0x8bfa164,0x8(%esp)
 82708b5:	08 
 82708b6:	c7 44 24 04 03 01 00 	movl   $0x103,0x4(%esp)
 82708bd:	00 
 82708be:	89 04 24             	mov    %eax,(%esp)
 82708c1:	e8 56 bf 31 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 82708c6:	83 c4 14             	add    $0x14,%esp
 82708c9:	5b                   	pop    %ebx
 82708ca:	5d                   	pop    %ebp
 82708cb:	c3                   	ret

```

```c
// RentalMachinePcRoom::initLoggingEnvironment @ 0x8270886

/* RentalMachinePcRoom::initLoggingEnvironment() */

void __thiscall RentalMachinePcRoom::initLoggingEnvironment(RentalMachinePcRoom *this)

{
  CEnvironment *this_00;
  undefined4 uVar1;
  char *pcVar2;
  
  this_00 = (CEnvironment *)G_CEnvironment();
  uVar1 = CEnvironment::get_file_name(this_00);
  pcVar2 = (char *)std::auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl>::operator->
                             ((auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl> *)(this + 4));
  OS_API::snprintf(pcVar2,0x103,"./log/%s/dw2_RentalItems",uVar1);
  return;
}

```

---

## log

```asm
// === 082707c0 RentalMachinePcRoom::log  [0x082707c0-0x8270885] ===
 82707c0:	55                   	push   %ebp
 82707c1:	89 e5                	mov    %esp,%ebp
 82707c3:	57                   	push   %edi
 82707c4:	56                   	push   %esi
 82707c5:	53                   	push   %ebx
 82707c6:	83 ec 4c             	sub    $0x4c,%esp
 82707c9:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 82707cd:	e8 d5 9b e6 ff       	call   80da3a7 <_Z11G_GameWorldv>
 82707d2:	89 04 24             	mov    %eax,(%esp)
 82707d5:	e8 44 0b e8 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 82707da:	84 c0                	test   %al,%al
 82707dc:	74 10                	je     82707ee <_ZN19RentalMachinePcRoom3logER5CUseri+0x2e>
 82707de:	8b 45 0c             	mov    0xc(%ebp),%eax
 82707e1:	89 04 24             	mov    %eax,(%esp)
 82707e4:	e8 a7 b4 e5 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 82707e9:	88 45 e7             	mov    %al,-0x19(%ebp)
 82707ec:	eb 0e                	jmp    82707fc <_ZN19RentalMachinePcRoom3logER5CUseri+0x3c>
 82707ee:	e8 8e b9 e5 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 82707f3:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 82707f9:	88 45 e7             	mov    %al,-0x19(%ebp)
 82707fc:	0f be 45 e7          	movsbl -0x19(%ebp),%eax
 8270800:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8270803:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 827080a:	ff 
 827080b:	8b 45 0c             	mov    0xc(%ebp),%eax
 827080e:	89 04 24             	mov    %eax,(%esp)
 8270811:	e8 8a d7 3d 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8270816:	89 c6                	mov    %eax,%esi
 8270818:	8b 45 0c             	mov    0xc(%ebp),%eax
 827081b:	89 04 24             	mov    %eax,(%esp)
 827081e:	e8 4b 9b e6 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8270823:	89 c3                	mov    %eax,%ebx
 8270825:	8b 45 08             	mov    0x8(%ebp),%eax
 8270828:	83 c0 04             	add    $0x4,%eax
 827082b:	89 04 24             	mov    %eax,(%esp)
 827082e:	e8 5b 15 00 00       	call   8271d8e <_ZNKSt8auto_ptrIN19RentalMachinePcRoom23RentalMachinePcRoomImplEEptEv>
 8270833:	89 c7                	mov    %eax,%edi
 8270835:	c7 44 24 08 2e 01 00 	movl   $0x12e,0x8(%esp)
 827083c:	00 
 827083d:	c7 44 24 04 a0 af bf 	movl   $0x8bfafa0,0x4(%esp)
 8270844:	08 
 8270845:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8270848:	89 04 24             	mov    %eax,(%esp)
 827084b:	e8 1c 70 e9 ff       	call   810786c <_ZN10CMyFileLogC1EPKci>
 8270850:	8b 45 10             	mov    0x10(%ebp),%eax
 8270853:	89 44 24 18          	mov    %eax,0x18(%esp)
 8270857:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 827085a:	89 44 24 14          	mov    %eax,0x14(%esp)
 827085e:	89 74 24 10          	mov    %esi,0x10(%esp)
 8270862:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8270866:	c7 44 24 08 2c a1 bf 	movl   $0x8bfa12c,0x8(%esp)
 827086d:	08 
 827086e:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8270872:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8270875:	89 04 24             	mov    %eax,(%esp)
 8270878:	e8 1b 70 e9 ff       	call   8107898 <_ZN10CMyFileLogclEPKcS1_z>
 827087d:	83 c4 4c             	add    $0x4c,%esp
 8270880:	5b                   	pop    %ebx
 8270881:	5e                   	pop    %esi
 8270882:	5f                   	pop    %edi
 8270883:	5d                   	pop    %ebp
 8270884:	c3                   	ret
 8270885:	90                   	nop

```

```c
// RentalMachinePcRoom::log @ 0x82707c0

/* RentalMachinePcRoom::log(CUser&, int) */

void __thiscall RentalMachinePcRoom::log(RentalMachinePcRoom *this,CUser *param_1,int param_2)

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
  pcVar5 = (char *)std::auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl>::operator->
                             ((auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl> *)(this + 4));
  CMyFileLog::CMyFileLog(local_28,"void RentalMachinePcRoom::log(CUser&, int)",0x12e);
  CMyFileLog::operator()
            (local_28,pcVar5,"[RENT] m_id(%d) char_no(%d) server_info(%d) item_id(%d)",uVar4,uVar3,
             iVar2,param_2);
  return;
}

```

---

## ~RentalMachinePcRoom

```asm
// === 08270466 RentalMachinePcRoom::~RentalMachinePcRoom  [0x08270466-0x82704c7] ===
 8270466:	55                   	push   %ebp
 8270467:	89 e5                	mov    %esp,%ebp
 8270469:	56                   	push   %esi
 827046a:	53                   	push   %ebx
 827046b:	83 ec 10             	sub    $0x10,%esp
 827046e:	8b 45 08             	mov    0x8(%ebp),%eax
 8270471:	c7 00 68 b0 bf 08    	movl   $0x8bfb068,(%eax)
 8270477:	8b 45 08             	mov    0x8(%ebp),%eax
 827047a:	83 c0 04             	add    $0x4,%eax
 827047d:	89 04 24             	mov    %eax,(%esp)
 8270480:	e8 e3 18 00 00       	call   8271d68 <_ZNSt8auto_ptrIN19RentalMachinePcRoom23RentalMachinePcRoomImplEED1Ev>
 8270485:	eb 1b                	jmp    82704a2 <_ZN19RentalMachinePcRoomD1Ev+0x3c>
 8270487:	89 d3                	mov    %edx,%ebx
 8270489:	89 c6                	mov    %eax,%esi
 827048b:	8b 45 08             	mov    0x8(%ebp),%eax
 827048e:	89 04 24             	mov    %eax,(%esp)
 8270491:	e8 84 f5 ff ff       	call   826fa1a <_ZN14IRentalMachineD1Ev>
 8270496:	89 f0                	mov    %esi,%eax
 8270498:	89 da                	mov    %ebx,%edx
 827049a:	89 04 24             	mov    %eax,(%esp)
 827049d:	e8 ae 32 87 00       	call   8ae3750 <_Unwind_Resume>
 82704a2:	8b 45 08             	mov    0x8(%ebp),%eax
 82704a5:	89 04 24             	mov    %eax,(%esp)
 82704a8:	e8 6d f5 ff ff       	call   826fa1a <_ZN14IRentalMachineD1Ev>
 82704ad:	b8 00 00 00 00       	mov    $0x0,%eax
 82704b2:	84 c0                	test   %al,%al
 82704b4:	74 0b                	je     82704c1 <_ZN19RentalMachinePcRoomD1Ev+0x5b>
 82704b6:	8b 45 08             	mov    0x8(%ebp),%eax
 82704b9:	89 04 24             	mov    %eax,(%esp)
 82704bc:	e8 2f 40 4b 00       	call   87244f0 <_ZdlPv>
 82704c1:	83 c4 10             	add    $0x10,%esp
 82704c4:	5b                   	pop    %ebx
 82704c5:	5e                   	pop    %esi
 82704c6:	5d                   	pop    %ebp
 82704c7:	c3                   	ret

```

```c
// RentalMachinePcRoom::~RentalMachinePcRoom @ 0x8270466

/* WARNING: Removing unreachable block (ram,0x082704b6) */
/* RentalMachinePcRoom::~RentalMachinePcRoom() */

void __thiscall RentalMachinePcRoom::~RentalMachinePcRoom(RentalMachinePcRoom *this)

{
  *(undefined ***)this = &PTR__RentalMachinePcRoom_08bfb068;
                    /* try { // try from 08270480 to 08270484 has its CatchHandler @ 08270487 */
  std::auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl>::~auto_ptr
            ((auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl> *)(this + 4));
  IRentalMachine::~IRentalMachine((IRentalMachine *)this);
  return;
}

```

---

## ~RentalMachinePcRoom_082704c8

```asm
// === 082704c8 RentalMachinePcRoom::~RentalMachinePcRoom  [0x082704c8-0x82704e5] ===
 82704c8:	55                   	push   %ebp
 82704c9:	89 e5                	mov    %esp,%ebp
 82704cb:	83 ec 18             	sub    $0x18,%esp
 82704ce:	8b 45 08             	mov    0x8(%ebp),%eax
 82704d1:	89 04 24             	mov    %eax,(%esp)
 82704d4:	e8 8d ff ff ff       	call   8270466 <_ZN19RentalMachinePcRoomD1Ev>
 82704d9:	8b 45 08             	mov    0x8(%ebp),%eax
 82704dc:	89 04 24             	mov    %eax,(%esp)
 82704df:	e8 0c 40 4b 00       	call   87244f0 <_ZdlPv>
 82704e4:	c9                   	leave
 82704e5:	c3                   	ret

```

```c
// RentalMachinePcRoom::~RentalMachinePcRoom @ 0x82704c8

/* RentalMachinePcRoom::~RentalMachinePcRoom() */

void __thiscall RentalMachinePcRoom::~RentalMachinePcRoom(RentalMachinePcRoom *this)

{
  ~RentalMachinePcRoom(this);
  operator_delete(this);
  return;
}

```

