# ARAD__DISPATCHER__Dispatcher_RequestPrcoomDayilyReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081a0612 ARAD::DISPATCHER::Dispatcher_RequestPrcoomDayilyReward::dispatch_sig  [0x081a0612-0x81a08d0] ===
 81a0612:	55                   	push   %ebp
 81a0613:	89 e5                	mov    %esp,%ebp
 81a0615:	53                   	push   %ebx
 81a0616:	81 ec a4 00 00 00    	sub    $0xa4,%esp
 81a061c:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81a0620:	75 0a                	jne    81a062c <_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf+0x1a>
 81a0622:	b8 e8 07 00 00       	mov    $0x7e8,%eax
 81a0627:	e9 9c 02 00 00       	jmp    81a08c8 <_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf+0x2b6>
 81a062c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a062f:	89 04 24             	mov    %eax,(%esp)
 81a0632:	e8 fb fd f7 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81a0637:	85 c0                	test   %eax,%eax
 81a0639:	0f 94 c0             	sete   %al
 81a063c:	84 c0                	test   %al,%al
 81a063e:	74 0a                	je     81a064a <_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf+0x38>
 81a0640:	b8 00 00 00 00       	mov    $0x0,%eax
 81a0645:	e9 7e 02 00 00       	jmp    81a08c8 <_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf+0x2b6>
 81a064a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a064d:	89 04 24             	mov    %eax,(%esp)
 81a0650:	e8 37 9d f3 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81a0655:	83 f8 02             	cmp    $0x2,%eax
 81a0658:	7e 10                	jle    81a066a <_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf+0x58>
 81a065a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a065d:	89 04 24             	mov    %eax,(%esp)
 81a0660:	e8 27 9d f3 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81a0665:	83 f8 04             	cmp    $0x4,%eax
 81a0668:	7e 07                	jle    81a0671 <_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf+0x5f>
 81a066a:	b8 01 00 00 00       	mov    $0x1,%eax
 81a066f:	eb 05                	jmp    81a0676 <_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf+0x64>
 81a0671:	b8 00 00 00 00       	mov    $0x0,%eax
 81a0676:	84 c0                	test   %al,%al
 81a0678:	74 0a                	je     81a0684 <_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf+0x72>
 81a067a:	b8 00 00 00 00       	mov    $0x0,%eax
 81a067f:	e9 44 02 00 00       	jmp    81a08c8 <_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf+0x2b6>
 81a0684:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a0687:	0f b6 80 32 ec 08 00 	movzbl 0x8ec32(%eax),%eax
 81a068e:	84 c0                	test   %al,%al
 81a0690:	7f 25                	jg     81a06b7 <_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf+0xa5>
 81a0692:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 81a0699:	00 
 81a069a:	c7 44 24 04 59 02 00 	movl   $0x259,0x4(%esp)
 81a06a1:	00 
 81a06a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a06a5:	89 04 24             	mov    %eax,(%esp)
 81a06a8:	e8 95 b8 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81a06ad:	b8 00 00 00 00       	mov    $0x0,%eax
 81a06b2:	e9 11 02 00 00       	jmp    81a08c8 <_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf+0x2b6>
 81a06b7:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 81a06be:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a06c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a06c5:	8b 45 10             	mov    0x10(%ebp),%eax
 81a06c8:	89 04 24             	mov    %eax,(%esp)
 81a06cb:	e8 20 ca 3e 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81a06d0:	83 f0 01             	xor    $0x1,%eax
 81a06d3:	84 c0                	test   %al,%al
 81a06d5:	74 0a                	je     81a06e1 <_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf+0xcf>
 81a06d7:	b8 fb 07 00 00       	mov    $0x7fb,%eax
 81a06dc:	e9 e7 01 00 00       	jmp    81a08c8 <_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf+0x2b6>
 81a06e1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81a06e4:	3d 2f 21 00 00       	cmp    $0x212f,%eax
 81a06e9:	74 14                	je     81a06ff <_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf+0xed>
 81a06eb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81a06ee:	3d 30 21 00 00       	cmp    $0x2130,%eax
 81a06f3:	74 0a                	je     81a06ff <_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf+0xed>
 81a06f5:	b8 00 08 00 00       	mov    $0x800,%eax
 81a06fa:	e9 c9 01 00 00       	jmp    81a08c8 <_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf+0x2b6>
 81a06ff:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 81a0702:	e8 94 ba f2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81a0707:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81a070b:	89 04 24             	mov    %eax,(%esp)
 81a070e:	e8 1f f3 1b 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81a0713:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81a0716:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81a071a:	74 16                	je     81a0732 <_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf+0x120>
 81a071c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81a071f:	8b 00                	mov    (%eax),%eax
 81a0721:	83 c0 0c             	add    $0xc,%eax
 81a0724:	8b 10                	mov    (%eax),%edx
 81a0726:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81a0729:	89 04 24             	mov    %eax,(%esp)
 81a072c:	ff d2                	call   *%edx
 81a072e:	85 c0                	test   %eax,%eax
 81a0730:	74 07                	je     81a0739 <_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf+0x127>
 81a0732:	b8 01 00 00 00       	mov    $0x1,%eax
 81a0737:	eb 05                	jmp    81a073e <_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf+0x12c>
 81a0739:	b8 00 00 00 00       	mov    $0x0,%eax
 81a073e:	84 c0                	test   %al,%al
 81a0740:	74 0a                	je     81a074c <_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf+0x13a>
 81a0742:	b8 00 00 00 00       	mov    $0x0,%eax
 81a0747:	e9 7c 01 00 00       	jmp    81a08c8 <_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf+0x2b6>
 81a074c:	8d 45 af             	lea    -0x51(%ebp),%eax
 81a074f:	89 04 24             	mov    %eax,(%esp)
 81a0752:	e8 fd b0 f2 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81a0757:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81a075a:	89 04 24             	mov    %eax,(%esp)
 81a075d:	e8 e6 04 f7 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 81a0762:	89 45 b1             	mov    %eax,-0x4f(%ebp)
 81a0765:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81a0768:	8b 00                	mov    (%eax),%eax
 81a076a:	83 c0 08             	add    $0x8,%eax
 81a076d:	8b 10                	mov    (%eax),%edx
 81a076f:	8d 45 af             	lea    -0x51(%ebp),%eax
 81a0772:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a0776:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81a0779:	89 04 24             	mov    %eax,(%esp)
 81a077c:	ff d2                	call   *%edx
 81a077e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81a0785:	00 
 81a0786:	8d 45 af             	lea    -0x51(%ebp),%eax
 81a0789:	89 04 24             	mov    %eax,(%esp)
 81a078c:	e8 f3 b0 f2 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 81a0791:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a0794:	89 04 24             	mov    %eax,(%esp)
 81a0797:	e8 f2 9a f3 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81a079c:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 81a07a3:	00 
 81a07a4:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 81a07ab:	00 
 81a07ac:	c7 44 24 44 0e 00 00 	movl   $0xe,0x44(%esp)
 81a07b3:	00 
 81a07b4:	8b 55 af             	mov    -0x51(%ebp),%edx
 81a07b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a07bb:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 81a07be:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a07c2:	8b 55 b7             	mov    -0x49(%ebp),%edx
 81a07c5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81a07c9:	8b 55 bb             	mov    -0x45(%ebp),%edx
 81a07cc:	89 54 24 10          	mov    %edx,0x10(%esp)
 81a07d0:	8b 55 bf             	mov    -0x41(%ebp),%edx
 81a07d3:	89 54 24 14          	mov    %edx,0x14(%esp)
 81a07d7:	8b 55 c3             	mov    -0x3d(%ebp),%edx
 81a07da:	89 54 24 18          	mov    %edx,0x18(%esp)
 81a07de:	8b 55 c7             	mov    -0x39(%ebp),%edx
 81a07e1:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 81a07e5:	8b 55 cb             	mov    -0x35(%ebp),%edx
 81a07e8:	89 54 24 20          	mov    %edx,0x20(%esp)
 81a07ec:	8b 55 cf             	mov    -0x31(%ebp),%edx
 81a07ef:	89 54 24 24          	mov    %edx,0x24(%esp)
 81a07f3:	8b 55 d3             	mov    -0x2d(%ebp),%edx
 81a07f6:	89 54 24 28          	mov    %edx,0x28(%esp)
 81a07fa:	8b 55 d7             	mov    -0x29(%ebp),%edx
 81a07fd:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 81a0801:	8b 55 db             	mov    -0x25(%ebp),%edx
 81a0804:	89 54 24 30          	mov    %edx,0x30(%esp)
 81a0808:	8b 55 df             	mov    -0x21(%ebp),%edx
 81a080b:	89 54 24 34          	mov    %edx,0x34(%esp)
 81a080f:	8b 55 e3             	mov    -0x1d(%ebp),%edx
 81a0812:	89 54 24 38          	mov    %edx,0x38(%esp)
 81a0816:	8b 55 e7             	mov    -0x19(%ebp),%edx
 81a0819:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 81a081d:	0f b6 55 eb          	movzbl -0x15(%ebp),%edx
 81a0821:	88 54 24 40          	mov    %dl,0x40(%esp)
 81a0825:	89 04 24             	mov    %eax,(%esp)
 81a0828:	e8 59 25 36 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 81a082d:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 81a0831:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
 81a0835:	f7 d0                	not    %eax
 81a0837:	66 c1 e8 0f          	shr    $0xf,%ax
 81a083b:	84 c0                	test   %al,%al
 81a083d:	74 69                	je     81a08a8 <_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf+0x296>
 81a083f:	c7 44 24 04 59 02 00 	movl   $0x259,0x4(%esp)
 81a0846:	00 
 81a0847:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a084a:	89 04 24             	mov    %eax,(%esp)
 81a084d:	e8 4e b6 4d 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81a0852:	0f bf 45 f6          	movswl -0xa(%ebp),%eax
 81a0856:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81a085a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81a0861:	00 
 81a0862:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81a0869:	00 
 81a086a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a086d:	89 04 24             	mov    %eax,(%esp)
 81a0870:	e8 63 ba 4d 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 81a0875:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a0878:	0f b6 80 32 ec 08 00 	movzbl 0x8ec32(%eax),%eax
 81a087f:	8d 50 ff             	lea    -0x1(%eax),%edx
 81a0882:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a0885:	88 90 32 ec 08 00    	mov    %dl,0x8ec32(%eax)
 81a088b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a088e:	89 04 24             	mov    %eax,(%esp)
 81a0891:	e8 10 10 fc ff       	call   81618a6 <_ZN28InterSelectPcroomDailyReward10SendPacketEP5CUser>
 81a0896:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a0899:	89 04 24             	mov    %eax,(%esp)
 81a089c:	e8 65 c6 fb ff       	call   815cf06 <_ZN25DBUpdatePcroomDailyReward11makeRequestEP5CUser>
 81a08a1:	b8 00 00 00 00       	mov    $0x0,%eax
 81a08a6:	eb 20                	jmp    81a08c8 <_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf+0x2b6>
 81a08a8:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 81a08af:	00 
 81a08b0:	c7 44 24 04 59 02 00 	movl   $0x259,0x4(%esp)
 81a08b7:	00 
 81a08b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a08bb:	89 04 24             	mov    %eax,(%esp)
 81a08be:	e8 7f b6 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81a08c3:	b8 00 00 00 00       	mov    $0x0,%eax
 81a08c8:	81 c4 a4 00 00 00    	add    $0xa4,%esp
 81a08ce:	5b                   	pop    %ebx
 81a08cf:	5d                   	pop    %ebp
 81a08d0:	c3                   	ret

```

```c
// ARAD::DISPATCHER::Dispatcher_RequestPrcoomDayilyReward::dispatch_sig @ 0x81a0612

/* ARAD::DISPATCHER::Dispatcher_RequestPrcoomDayilyReward::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_RequestPrcoomDayilyReward::dispatch_sig
          (Dispatcher_RequestPrcoomDayilyReward *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  undefined4 uVar4;
  undefined2 local_55;
  undefined2 uStack_53;
  undefined2 uStack_51;
  undefined2 uStack_4f;
  undefined4 local_4d;
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
  undefined1 local_19;
  int local_18;
  CItem *local_14;
  short local_e;
  
  if (param_1 == (CUser *)0x0) {
    return 0x7e8;
  }
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 3) || (iVar3 = CUser::get_state(param_1), 4 < iVar3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  if ((char)param_1[0x8ec32] < '\x01') {
    CUser::SendCmdErrorPacket(param_1,0x259,0x16);
    return 0;
  }
  local_18 = 0;
  cVar2 = PacketBuf::get_int(param_2,&local_18);
  iVar3 = local_18;
  if (cVar2 != '\x01') {
    return 0x7fb;
  }
  if ((local_18 != 0x212f) && (local_18 != 0x2130)) {
    return 0x800;
  }
  this_00 = (CDataManager *)G_CDataManager();
  local_14 = (CItem *)CDataManager::find_item(this_00,iVar3);
  if ((local_14 == (CItem *)0x0) ||
     (iVar3 = (**(code **)(*(int *)local_14 + 0xc))(local_14), iVar3 != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    Inven_Item::Inven_Item((Inven_Item *)&local_55);
    uVar4 = CItem::get_index(local_14);
    uStack_53 = (undefined2)uVar4;
    uStack_51 = (undefined2)((uint)uVar4 >> 0x10);
    (**(code **)(*(int *)local_14 + 8))(local_14,&local_55);
    Inven_Item::set_add_info((Inven_Item *)&local_55,1);
    uVar4 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_e = CInventory::insertItemIntoInventory
                        (uVar4,CONCAT22(uStack_53,local_55),CONCAT22(uStack_4f,uStack_51),local_4d,
                         local_49,local_45,local_41,local_3d,local_39,local_35,local_31,local_2d,
                         local_29,local_25,local_21,local_1d,local_19,0xe,1,1);
    if (local_e < 0) {
      CUser::SendCmdErrorPacket(param_1,0x259,4);
    }
    else {
      CUser::SendCmdOkPacket(param_1,0x259);
      CUser::SendUpdateItem(param_1,1,0,(int)local_e);
      param_1[0x8ec32] = (CUser)((char)param_1[0x8ec32] + -1);
      InterSelectPcroomDailyReward::SendPacket(param_1);
      DBUpdatePcroomDailyReward::makeRequest(param_1);
    }
  }
  return 0;
}

```

