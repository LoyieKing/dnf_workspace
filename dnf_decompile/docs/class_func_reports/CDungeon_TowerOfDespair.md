# CDungeon_TowerOfDespair

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## _do_after_dungeon_start

```asm
// === 0834d8ec CDungeon_TowerOfDespair::_do_after_dungeon_start  [0x0834d8ec-0x834dcd9] ===
 834d8ec:	55                   	push   %ebp
 834d8ed:	89 e5                	mov    %esp,%ebp
 834d8ef:	56                   	push   %esi
 834d8f0:	53                   	push   %ebx
 834d8f1:	81 ec b0 00 00 00    	sub    $0xb0,%esp
 834d8f7:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 834d8fb:	75 0a                	jne    834d907 <_ZNK23CDungeon_TowerOfDespair23_do_after_dungeon_startEP5CUser+0x1b>
 834d8fd:	b8 00 00 00 00       	mov    $0x0,%eax
 834d902:	e9 c9 03 00 00       	jmp    834dcd0 <_ZNK23CDungeon_TowerOfDespair23_do_after_dungeon_startEP5CUser+0x3e4>
 834d907:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 834d90e:	00 
 834d90f:	8b 45 0c             	mov    0xc(%ebp),%eax
 834d912:	89 04 24             	mov    %eax,(%esp)
 834d915:	e8 6a fc d8 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 834d91a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 834d91d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 834d920:	89 04 24             	mov    %eax,(%esp)
 834d923:	e8 62 5f 2f 00       	call   864388a <_ZN13TOD_UserState18IncreaseEnterCountEv>
 834d928:	8b 45 ec             	mov    -0x14(%ebp),%eax
 834d92b:	89 04 24             	mov    %eax,(%esp)
 834d92e:	e8 3f 5f 2f 00       	call   8643872 <_ZNK13TOD_UserState13getEnterCountEv>
 834d933:	83 f8 01             	cmp    $0x1,%eax
 834d936:	0f 9f c0             	setg   %al
 834d939:	84 c0                	test   %al,%al
 834d93b:	0f 84 1b 03 00 00    	je     834dc5c <_ZNK23CDungeon_TowerOfDespair23_do_after_dungeon_startEP5CUser+0x370>
 834d941:	8b 45 08             	mov    0x8(%ebp),%eax
 834d944:	0f b6 80 fc 07 00 00 	movzbl 0x7fc(%eax),%eax
 834d94b:	84 c0                	test   %al,%al
 834d94d:	0f 84 09 03 00 00    	je     834dc5c <_ZNK23CDungeon_TowerOfDespair23_do_after_dungeon_startEP5CUser+0x370>
 834d953:	8b 45 08             	mov    0x8(%ebp),%eax
 834d956:	8b 98 f4 07 00 00    	mov    0x7f4(%eax),%ebx
 834d95c:	8b 45 0c             	mov    0xc(%ebp),%eax
 834d95f:	89 04 24             	mov    %eax,(%esp)
 834d962:	e8 17 c9 d8 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 834d967:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 834d96b:	89 04 24             	mov    %eax,(%esp)
 834d96e:	e8 ff 77 1b 00       	call   8505172 <_ZNK10CInventory16check_item_existEi>
 834d973:	89 45 f0             	mov    %eax,-0x10(%ebp)
 834d976:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 834d97a:	75 0a                	jne    834d986 <_ZNK23CDungeon_TowerOfDespair23_do_after_dungeon_startEP5CUser+0x9a>
 834d97c:	b8 00 00 00 00       	mov    $0x0,%eax
 834d981:	e9 4a 03 00 00       	jmp    834dcd0 <_ZNK23CDungeon_TowerOfDespair23_do_after_dungeon_startEP5CUser+0x3e4>
 834d986:	8b 45 0c             	mov    0xc(%ebp),%eax
 834d989:	89 04 24             	mov    %eax,(%esp)
 834d98c:	e8 ed c8 d8 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 834d991:	8d 95 77 ff ff ff    	lea    -0x89(%ebp),%edx
 834d997:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 834d99a:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 834d99e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 834d9a5:	00 
 834d9a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 834d9aa:	89 14 24             	mov    %edx,(%esp)
 834d9ad:	e8 66 df 1a 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 834d9b2:	83 ec 04             	sub    $0x4,%esp
 834d9b5:	8b 95 7e ff ff ff    	mov    -0x82(%ebp),%edx
 834d9bb:	8b 45 08             	mov    0x8(%ebp),%eax
 834d9be:	8b 80 f8 07 00 00    	mov    0x7f8(%eax),%eax
 834d9c4:	39 c2                	cmp    %eax,%edx
 834d9c6:	7d 0a                	jge    834d9d2 <_ZNK23CDungeon_TowerOfDespair23_do_after_dungeon_startEP5CUser+0xe6>
 834d9c8:	b8 00 00 00 00       	mov    $0x0,%eax
 834d9cd:	e9 fe 02 00 00       	jmp    834dcd0 <_ZNK23CDungeon_TowerOfDespair23_do_after_dungeon_startEP5CUser+0x3e4>
 834d9d2:	8b 45 08             	mov    0x8(%ebp),%eax
 834d9d5:	8b 98 f8 07 00 00    	mov    0x7f8(%eax),%ebx
 834d9db:	8b 45 0c             	mov    0xc(%ebp),%eax
 834d9de:	89 04 24             	mov    %eax,(%esp)
 834d9e1:	e8 a8 c8 d8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 834d9e6:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 834d9ed:	00 
 834d9ee:	c7 44 24 10 0e 00 00 	movl   $0xe,0x10(%esp)
 834d9f5:	00 
 834d9f6:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 834d9fa:	8b 55 f0             	mov    -0x10(%ebp),%edx
 834d9fd:	89 54 24 08          	mov    %edx,0x8(%esp)
 834da01:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 834da08:	00 
 834da09:	89 04 24             	mov    %eax,(%esp)
 834da0c:	e8 fb 65 1b 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 834da11:	83 f0 01             	xor    $0x1,%eax
 834da14:	84 c0                	test   %al,%al
 834da16:	74 65                	je     834da7d <_ZNK23CDungeon_TowerOfDespair23_do_after_dungeon_startEP5CUser+0x191>
 834da18:	8b 45 08             	mov    0x8(%ebp),%eax
 834da1b:	8b b0 f8 07 00 00    	mov    0x7f8(%eax),%esi
 834da21:	8b 45 0c             	mov    0xc(%ebp),%eax
 834da24:	89 04 24             	mov    %eax,(%esp)
 834da27:	e8 22 e2 d7 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 834da2c:	89 c3                	mov    %eax,%ebx
 834da2e:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 834da35:	00 
 834da36:	c7 44 24 08 6f 09 00 	movl   $0x96f,0x8(%esp)
 834da3d:	00 
 834da3e:	c7 44 24 04 00 48 c3 	movl   $0x8c34800,0x4(%esp)
 834da45:	08 
 834da46:	8d 45 d8             	lea    -0x28(%ebp),%eax
 834da49:	89 04 24             	mov    %eax,(%esp)
 834da4c:	e8 c7 1c 20 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 834da51:	89 74 24 10          	mov    %esi,0x10(%esp)
 834da55:	8b 45 f0             	mov    -0x10(%ebp),%eax
 834da58:	89 44 24 0c          	mov    %eax,0xc(%esp)
 834da5c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 834da60:	c7 44 24 04 54 ff c2 	movl   $0x8c2ff54,0x4(%esp)
 834da67:	08 
 834da68:	8d 45 d8             	lea    -0x28(%ebp),%eax
 834da6b:	89 04 24             	mov    %eax,(%esp)
 834da6e:	e8 15 1d 20 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 834da73:	b8 00 00 00 00       	mov    $0x0,%eax
 834da78:	e9 53 02 00 00       	jmp    834dcd0 <_ZNK23CDungeon_TowerOfDespair23_do_after_dungeon_startEP5CUser+0x3e4>
 834da7d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834da80:	89 04 24             	mov    %eax,(%esp)
 834da83:	e8 c4 02 24 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 834da88:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 834da8f:	00 
 834da90:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 834da97:	00 
 834da98:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834da9b:	89 04 24             	mov    %eax,(%esp)
 834da9e:	e8 59 de d7 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 834daa3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 834daaa:	00 
 834daab:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834daae:	89 04 24             	mov    %eax,(%esp)
 834dab1:	e8 6a de d7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 834dab6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 834dabd:	00 
 834dabe:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834dac1:	89 04 24             	mov    %eax,(%esp)
 834dac4:	e8 db c3 d8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 834dac9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 834dacc:	89 44 24 04          	mov    %eax,0x4(%esp)
 834dad0:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834dad3:	89 04 24             	mov    %eax,(%esp)
 834dad6:	e8 c9 c3 d8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 834dadb:	8b 95 7e ff ff ff    	mov    -0x82(%ebp),%edx
 834dae1:	8b 45 08             	mov    0x8(%ebp),%eax
 834dae4:	8b 80 f8 07 00 00    	mov    0x7f8(%eax),%eax
 834daea:	89 d1                	mov    %edx,%ecx
 834daec:	29 c1                	sub    %eax,%ecx
 834daee:	89 c8                	mov    %ecx,%eax
 834daf0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 834daf3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 834daf7:	75 15                	jne    834db0e <_ZNK23CDungeon_TowerOfDespair23_do_after_dungeon_startEP5CUser+0x222>
 834daf9:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 834db00:	ff 
 834db01:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834db04:	89 04 24             	mov    %eax,(%esp)
 834db07:	e8 30 de d7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 834db0c:	eb 15                	jmp    834db23 <_ZNK23CDungeon_TowerOfDespair23_do_after_dungeon_startEP5CUser+0x237>
 834db0e:	8b 85 79 ff ff ff    	mov    -0x87(%ebp),%eax
 834db14:	89 44 24 04          	mov    %eax,0x4(%esp)
 834db18:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834db1b:	89 04 24             	mov    %eax,(%esp)
 834db1e:	e8 19 de d7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 834db23:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834db26:	89 44 24 04          	mov    %eax,0x4(%esp)
 834db2a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834db2d:	89 04 24             	mov    %eax,(%esp)
 834db30:	e8 07 de d7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 834db35:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 834db3b:	89 04 24             	mov    %eax,(%esp)
 834db3e:	e8 99 2c e0 ff       	call   81507dc <_ZNK10Inven_Item11GetItemAttrEv>
 834db43:	0f b6 c0             	movzbl %al,%eax
 834db46:	89 44 24 04          	mov    %eax,0x4(%esp)
 834db4a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834db4d:	89 04 24             	mov    %eax,(%esp)
 834db50:	e8 cb dd d7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 834db55:	0f b7 45 82          	movzwl -0x7e(%ebp),%eax
 834db59:	0f b7 c0             	movzwl %ax,%eax
 834db5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 834db60:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834db63:	89 04 24             	mov    %eax,(%esp)
 834db66:	e8 39 c3 d8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 834db6b:	0f b6 85 77 ff ff ff 	movzbl -0x89(%ebp),%eax
 834db72:	0f b6 c0             	movzbl %al,%eax
 834db75:	89 44 24 04          	mov    %eax,0x4(%esp)
 834db79:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834db7c:	89 04 24             	mov    %eax,(%esp)
 834db7f:	e8 9c dd d7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 834db84:	8b 45 84             	mov    -0x7c(%ebp),%eax
 834db87:	89 44 24 04          	mov    %eax,0x4(%esp)
 834db8b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834db8e:	89 04 24             	mov    %eax,(%esp)
 834db91:	e8 a6 dd d7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 834db96:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 834db9c:	83 c0 11             	add    $0x11,%eax
 834db9f:	89 04 24             	mov    %eax,(%esp)
 834dba2:	e8 8b 2b e0 ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 834dba7:	0f b6 c0             	movzbl %al,%eax
 834dbaa:	89 44 24 04          	mov    %eax,0x4(%esp)
 834dbae:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834dbb1:	89 04 24             	mov    %eax,(%esp)
 834dbb4:	e8 67 dd d7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 834dbb9:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 834dbbf:	83 c0 11             	add    $0x11,%eax
 834dbc2:	89 04 24             	mov    %eax,(%esp)
 834dbc5:	e8 a8 2b e0 ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 834dbca:	0f b7 c0             	movzwl %ax,%eax
 834dbcd:	89 44 24 04          	mov    %eax,0x4(%esp)
 834dbd1:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834dbd4:	89 04 24             	mov    %eax,(%esp)
 834dbd7:	e8 c8 c2 d8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 834dbdc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 834dbe3:	00 
 834dbe4:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834dbe7:	89 04 24             	mov    %eax,(%esp)
 834dbea:	e8 31 dd d7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 834dbef:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 834dbf5:	89 44 24 04          	mov    %eax,0x4(%esp)
 834dbf9:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834dbfc:	89 04 24             	mov    %eax,(%esp)
 834dbff:	e8 8a 2d e0 ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 834dc04:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 834dc0b:	00 
 834dc0c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834dc0f:	89 04 24             	mov    %eax,(%esp)
 834dc12:	e8 41 dd d7 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 834dc17:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834dc1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 834dc1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 834dc21:	89 04 24             	mov    %eax,(%esp)
 834dc24:	e8 91 a9 2f 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 834dc29:	8b 45 0c             	mov    0xc(%ebp),%eax
 834dc2c:	89 04 24             	mov    %eax,(%esp)
 834dc2f:	e8 1e 22 30 00       	call   864fe52 <_ZN5CUser13SaveInventoryEv>
 834dc34:	eb 1b                	jmp    834dc51 <_ZNK23CDungeon_TowerOfDespair23_do_after_dungeon_startEP5CUser+0x365>
 834dc36:	89 d3                	mov    %edx,%ebx
 834dc38:	89 c6                	mov    %eax,%esi
 834dc3a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834dc3d:	89 04 24             	mov    %eax,(%esp)
 834dc40:	e8 3b 02 24 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 834dc45:	89 f0                	mov    %esi,%eax
 834dc47:	89 da                	mov    %ebx,%edx
 834dc49:	89 04 24             	mov    %eax,(%esp)
 834dc4c:	e8 ff 5a 79 00       	call   8ae3750 <_Unwind_Resume>
 834dc51:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834dc54:	89 04 24             	mov    %eax,(%esp)
 834dc57:	e8 24 02 24 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 834dc5c:	8d 45 c1             	lea    -0x3f(%ebp),%eax
 834dc5f:	89 04 24             	mov    %eax,(%esp)
 834dc62:	e8 53 70 02 00       	call   8374cba <_ZN35Packet_TowerOfDespair_Statistic_GTSC1Ev>
 834dc67:	8d 45 ea             	lea    -0x16(%ebp),%eax
 834dc6a:	8b 55 ec             	mov    -0x14(%ebp),%edx
 834dc6d:	89 54 24 04          	mov    %edx,0x4(%esp)
 834dc71:	89 04 24             	mov    %eax,(%esp)
 834dc74:	e8 c5 5b 2f 00       	call   864383e <_ZNK13TOD_UserState18getTodayEnterLayerEv>
 834dc79:	83 ec 04             	sub    $0x4,%esp
 834dc7c:	8d 45 ea             	lea    -0x16(%ebp),%eax
 834dc7f:	89 04 24             	mov    %eax,(%esp)
 834dc82:	e8 b9 0f ee ff       	call   822ec40 <_ZNK9TOD_Layer8GetLayerEv>
 834dc87:	0f b7 c0             	movzwl %ax,%eax
 834dc8a:	89 45 cf             	mov    %eax,-0x31(%ebp)
 834dc8d:	c6 45 d3 01          	movb   $0x1,-0x2d(%ebp)
 834dc91:	8b 45 0c             	mov    0xc(%ebp),%eax
 834dc94:	89 04 24             	mov    %eax,(%esp)
 834dc97:	e8 d2 c6 d8 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 834dc9c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 834dc9f:	8d 5d c1             	lea    -0x3f(%ebp),%ebx
 834dca2:	a1 30 be 40 09       	mov    0x940be30,%eax
 834dca7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 834dcae:	00 
 834dcaf:	89 04 24             	mov    %eax,(%esp)
 834dcb2:	e8 41 40 dc ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 834dcb7:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 834dcbe:	00 
 834dcbf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 834dcc3:	89 04 24             	mov    %eax,(%esp)
 834dcc6:	e8 79 43 12 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 834dccb:	b8 01 00 00 00       	mov    $0x1,%eax
 834dcd0:	8d 65 f8             	lea    -0x8(%ebp),%esp
 834dcd3:	83 c4 00             	add    $0x0,%esp
 834dcd6:	5b                   	pop    %ebx
 834dcd7:	5e                   	pop    %esi
 834dcd8:	5d                   	pop    %ebp
 834dcd9:	c3                   	ret

```

```c
// CDungeon_TowerOfDespair::_do_after_dungeon_start @ 0x834d8ec

/* CDungeon_TowerOfDespair::_do_after_dungeon_start(CUser*) const */

undefined4 __thiscall
CDungeon_TowerOfDespair::_do_after_dungeon_start(CDungeon_TowerOfDespair *this,CUser *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  CInventory *pCVar4;
  undefined4 uVar5;
  uint uVar6;
  CStatisticServerProxy *this_00;
  Inven_Item local_8d [2];
  int local_8b;
  int local_86;
  ushort local_82;
  int local_80;
  stAmplifyOption_t asStack_7c [44];
  PacketGuard local_50 [13];
  Packet_TowerOfDespair_Statistic_GTS local_43 [14];
  uint local_35;
  undefined1 local_31;
  undefined4 local_30;
  cMyTrace local_2c [18];
  TOD_Layer local_1a [2];
  TOD_UserState *local_18;
  int local_14;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    return 0;
  }
  local_18 = (TOD_UserState *)CUser::GetCharacExpandData(param_1,0xd);
  TOD_UserState::IncreaseEnterCount(local_18);
  iVar3 = TOD_UserState::getEnterCount(local_18);
  if ((1 < iVar3) && (this[0x7fc] != (CDungeon_TowerOfDespair)0x0)) {
    iVar3 = *(int *)(this + 0x7f4);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    local_14 = CInventory::check_item_exist(pCVar4,iVar3);
    if (local_14 == -1) {
      return 0;
    }
    iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_8d,iVar3);
    if (local_86 < *(int *)(this + 0x7f8)) {
      return 0;
    }
    uVar1 = *(undefined4 *)(this + 0x7f8);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar2 = CInventory::delete_item(pCVar4,1,local_14,uVar1,0xe,1);
    if (cVar2 != '\x01') {
      uVar1 = *(undefined4 *)(this + 0x7f8);
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_2c,
                         "virtual bool CDungeon_TowerOfDespair::_do_after_dungeon_start(CUser*) const"
                         ,0x96f,5);
      cMyTrace::operator()
                (local_2c,
                 "CDungeon_TowerOfDespair::_do_after_dungeon_start, delete_item failed , User ch =%d , %d %d"
                 ,uVar5,local_14,uVar1);
      return 0;
    }
    PacketGuard::PacketGuard(local_50);
                    /* try { // try from 0834da9e to 0834dc33 has its CatchHandler @ 0834dc36 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0xe);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,local_14);
    local_10 = local_86 - *(int *)(this + 0x7f8);
    if (local_10 == 0) {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,-1);
    }
    else {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_8b);
    }
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_10);
    uVar6 = Inven_Item::GetItemAttr(local_8d);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,uVar6 & 0xff);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,(uint)local_82);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,(uint)(byte)local_8d[0]);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_80);
    uVar6 = stAmplifyOption_t::getAbilityType(asStack_7c);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,uVar6 & 0xff);
    uVar6 = stAmplifyOption_t::getAbilityValue(asStack_7c);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,uVar6 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
    InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_50,local_8d);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
    CUser::Send(param_1,local_50);
    CUser::SaveInventory(param_1);
    PacketGuard::~PacketGuard(local_50);
  }
  Packet_TowerOfDespair_Statistic_GTS::Packet_TowerOfDespair_Statistic_GTS(local_43);
  TOD_UserState::getTodayEnterLayer();
  local_35 = TOD_Layer::GetLayer(local_1a);
  local_35 = local_35 & 0xffff;
  local_31 = 1;
  local_30 = CUser::get_acc_id(param_1);
  this_00 = (CStatisticServerProxy *)
            CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                      (GlobalData::s_statistic_proxy_mgr,0);
  CStatisticServerProxy::SendPacket(this_00,(char *)local_43,0x17);
  return 1;
}

```

