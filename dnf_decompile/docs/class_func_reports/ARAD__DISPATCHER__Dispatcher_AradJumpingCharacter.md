# ARAD__DISPATCHER__Dispatcher_AradJumpingCharacter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## checkWorkState

```asm
// === 0819f44c ARAD::DISPATCHER::Dispatcher_AradJumpingCharacter::checkWorkState  [0x0819f44c-0x819f6f7] ===
 819f44c:	55                   	push   %ebp
 819f44d:	89 e5                	mov    %esp,%ebp
 819f44f:	81 ec a8 00 00 00    	sub    $0xa8,%esp
 819f455:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 819f459:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 819f45e:	c7 44 24 08 2a 00 00 	movl   $0x2a,0x8(%esp)
 819f465:	00 
 819f466:	8b 55 0c             	mov    0xc(%ebp),%edx
 819f469:	89 54 24 04          	mov    %edx,0x4(%esp)
 819f46d:	89 04 24             	mov    %eax,(%esp)
 819f470:	e8 8d 95 0e 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 819f475:	89 45 ec             	mov    %eax,-0x14(%ebp)
 819f478:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 819f47c:	74 27                	je     819f4a5 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE+0x59>
 819f47e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 819f481:	0f b6 c0             	movzbl %al,%eax
 819f484:	89 44 24 08          	mov    %eax,0x8(%esp)
 819f488:	c7 44 24 04 49 02 00 	movl   $0x249,0x4(%esp)
 819f48f:	00 
 819f490:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f493:	89 04 24             	mov    %eax,(%esp)
 819f496:	e8 a7 ca 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819f49b:	b8 00 00 00 00       	mov    $0x0,%eax
 819f4a0:	e9 50 02 00 00       	jmp    819f6f5 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE+0x2a9>
 819f4a5:	8b 45 10             	mov    0x10(%ebp),%eax
 819f4a8:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 819f4ac:	3c 02                	cmp    $0x2,%al
 819f4ae:	0f 85 84 00 00 00    	jne    819f538 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE+0xec>
 819f4b4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 819f4bb:	eb 31                	jmp    819f4ee <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE+0xa2>
 819f4bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f4c0:	8d 90 e8 96 07 00    	lea    0x796e8(%eax),%edx
 819f4c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819f4c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 819f4cd:	89 14 24             	mov    %edx,(%esp)
 819f4d0:	e8 e3 16 00 00       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 819f4d5:	0f b7 40 27          	movzwl 0x27(%eax),%eax
 819f4d9:	66 83 f8 3b          	cmp    $0x3b,%ax
 819f4dd:	0f 9f c0             	setg   %al
 819f4e0:	84 c0                	test   %al,%al
 819f4e2:	74 06                	je     819f4ea <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE+0x9e>
 819f4e4:	c6 45 eb 01          	movb   $0x1,-0x15(%ebp)
 819f4e8:	eb 1e                	jmp    819f508 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE+0xbc>
 819f4ea:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 819f4ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f4f1:	05 e8 96 07 00       	add    $0x796e8,%eax
 819f4f6:	89 04 24             	mov    %eax,(%esp)
 819f4f9:	e8 9c 16 00 00       	call   81a0b9a <_ZNKSt6vectorI12_Charac_infoSaIS0_EE4sizeEv>
 819f4fe:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 819f501:	0f 97 c0             	seta   %al
 819f504:	84 c0                	test   %al,%al
 819f506:	75 b5                	jne    819f4bd <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE+0x71>
 819f508:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 819f50c:	83 f0 01             	xor    $0x1,%eax
 819f50f:	84 c0                	test   %al,%al
 819f511:	74 25                	je     819f538 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE+0xec>
 819f513:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 819f51a:	00 
 819f51b:	c7 44 24 04 49 02 00 	movl   $0x249,0x4(%esp)
 819f522:	00 
 819f523:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f526:	89 04 24             	mov    %eax,(%esp)
 819f529:	e8 14 ca 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819f52e:	b8 00 00 00 00       	mov    $0x0,%eax
 819f533:	e9 bd 01 00 00       	jmp    819f6f5 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE+0x2a9>
 819f538:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f53b:	89 04 24             	mov    %eax,(%esp)
 819f53e:	e8 75 ad f3 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 819f543:	83 f8 11             	cmp    $0x11,%eax
 819f546:	0f 9f c0             	setg   %al
 819f549:	84 c0                	test   %al,%al
 819f54b:	74 25                	je     819f572 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE+0x126>
 819f54d:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 819f554:	00 
 819f555:	c7 44 24 04 49 02 00 	movl   $0x249,0x4(%esp)
 819f55c:	00 
 819f55d:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f560:	89 04 24             	mov    %eax,(%esp)
 819f563:	e8 da c9 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819f568:	b8 00 00 00 00       	mov    $0x0,%eax
 819f56d:	e9 83 01 00 00       	jmp    819f6f5 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE+0x2a9>
 819f572:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f575:	89 04 24             	mov    %eax,(%esp)
 819f578:	e8 11 ad f3 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 819f57d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 819f580:	8d 45 ae             	lea    -0x52(%ebp),%eax
 819f583:	89 04 24             	mov    %eax,(%esp)
 819f586:	e8 c9 c2 f2 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 819f58b:	8b 45 10             	mov    0x10(%ebp),%eax
 819f58e:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 819f592:	0f b7 d0             	movzwl %ax,%edx
 819f595:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 819f59b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 819f59f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 819f5a6:	00 
 819f5a7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 819f5aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 819f5ae:	89 04 24             	mov    %eax,(%esp)
 819f5b1:	e8 62 c3 35 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 819f5b6:	83 ec 04             	sub    $0x4,%esp
 819f5b9:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 819f5bf:	89 45 ae             	mov    %eax,-0x52(%ebp)
 819f5c2:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 819f5c8:	89 45 b2             	mov    %eax,-0x4e(%ebp)
 819f5cb:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 819f5d1:	89 45 b6             	mov    %eax,-0x4a(%ebp)
 819f5d4:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 819f5da:	89 45 ba             	mov    %eax,-0x46(%ebp)
 819f5dd:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 819f5e3:	89 45 be             	mov    %eax,-0x42(%ebp)
 819f5e6:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 819f5ec:	89 45 c2             	mov    %eax,-0x3e(%ebp)
 819f5ef:	8b 45 80             	mov    -0x80(%ebp),%eax
 819f5f2:	89 45 c6             	mov    %eax,-0x3a(%ebp)
 819f5f5:	8b 45 84             	mov    -0x7c(%ebp),%eax
 819f5f8:	89 45 ca             	mov    %eax,-0x36(%ebp)
 819f5fb:	8b 45 88             	mov    -0x78(%ebp),%eax
 819f5fe:	89 45 ce             	mov    %eax,-0x32(%ebp)
 819f601:	8b 45 8c             	mov    -0x74(%ebp),%eax
 819f604:	89 45 d2             	mov    %eax,-0x2e(%ebp)
 819f607:	8b 45 90             	mov    -0x70(%ebp),%eax
 819f60a:	89 45 d6             	mov    %eax,-0x2a(%ebp)
 819f60d:	8b 45 94             	mov    -0x6c(%ebp),%eax
 819f610:	89 45 da             	mov    %eax,-0x26(%ebp)
 819f613:	8b 45 98             	mov    -0x68(%ebp),%eax
 819f616:	89 45 de             	mov    %eax,-0x22(%ebp)
 819f619:	8b 45 9c             	mov    -0x64(%ebp),%eax
 819f61c:	89 45 e2             	mov    %eax,-0x1e(%ebp)
 819f61f:	8b 45 a0             	mov    -0x60(%ebp),%eax
 819f622:	89 45 e6             	mov    %eax,-0x1a(%ebp)
 819f625:	0f b6 45 a4          	movzbl -0x5c(%ebp),%eax
 819f629:	88 45 ea             	mov    %al,-0x16(%ebp)
 819f62c:	8d 45 ae             	lea    -0x52(%ebp),%eax
 819f62f:	89 04 24             	mov    %eax,(%esp)
 819f632:	e8 2f f7 f7 ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 819f637:	84 c0                	test   %al,%al
 819f639:	74 25                	je     819f660 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE+0x214>
 819f63b:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 819f642:	00 
 819f643:	c7 44 24 04 49 02 00 	movl   $0x249,0x4(%esp)
 819f64a:	00 
 819f64b:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f64e:	89 04 24             	mov    %eax,(%esp)
 819f651:	e8 ec c8 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819f656:	b8 00 00 00 00       	mov    $0x0,%eax
 819f65b:	e9 95 00 00 00       	jmp    819f6f5 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE+0x2a9>
 819f660:	8b 45 10             	mov    0x10(%ebp),%eax
 819f663:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 819f667:	3c 01                	cmp    $0x1,%al
 819f669:	75 2c                	jne    819f697 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE+0x24b>
 819f66b:	8b 45 b0             	mov    -0x50(%ebp),%eax
 819f66e:	3d 68 d4 28 00       	cmp    $0x28d468,%eax
 819f673:	74 7b                	je     819f6f0 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE+0x2a4>
 819f675:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 819f67c:	00 
 819f67d:	c7 44 24 04 49 02 00 	movl   $0x249,0x4(%esp)
 819f684:	00 
 819f685:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f688:	89 04 24             	mov    %eax,(%esp)
 819f68b:	e8 b2 c8 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819f690:	b8 00 00 00 00       	mov    $0x0,%eax
 819f695:	eb 5e                	jmp    819f6f5 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE+0x2a9>
 819f697:	8b 45 10             	mov    0x10(%ebp),%eax
 819f69a:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 819f69e:	3c 02                	cmp    $0x2,%al
 819f6a0:	75 2c                	jne    819f6ce <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE+0x282>
 819f6a2:	8b 45 b0             	mov    -0x50(%ebp),%eax
 819f6a5:	3d 69 d4 28 00       	cmp    $0x28d469,%eax
 819f6aa:	74 44                	je     819f6f0 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE+0x2a4>
 819f6ac:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 819f6b3:	00 
 819f6b4:	c7 44 24 04 49 02 00 	movl   $0x249,0x4(%esp)
 819f6bb:	00 
 819f6bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f6bf:	89 04 24             	mov    %eax,(%esp)
 819f6c2:	e8 7b c8 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819f6c7:	b8 00 00 00 00       	mov    $0x0,%eax
 819f6cc:	eb 27                	jmp    819f6f5 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE+0x2a9>
 819f6ce:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 819f6d5:	00 
 819f6d6:	c7 44 24 04 49 02 00 	movl   $0x249,0x4(%esp)
 819f6dd:	00 
 819f6de:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f6e1:	89 04 24             	mov    %eax,(%esp)
 819f6e4:	e8 59 c8 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819f6e9:	b8 00 00 00 00       	mov    $0x0,%eax
 819f6ee:	eb 05                	jmp    819f6f5 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE+0x2a9>
 819f6f0:	b8 01 00 00 00       	mov    $0x1,%eax
 819f6f5:	c9                   	leave
 819f6f6:	c3                   	ret
 819f6f7:	90                   	nop

```

```c
// ARAD::DISPATCHER::Dispatcher_AradJumpingCharacter::checkWorkState @ 0x819f44c

/* ARAD::DISPATCHER::Dispatcher_AradJumpingCharacter::checkWorkState(CUser*,
   arad::SigAradJumpingCharacter&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_AradJumpingCharacter::checkWorkState
          (Dispatcher_AradJumpingCharacter *this,CUser *param_1,SigAradJumpingCharacter *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_9c [8];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined2 local_56;
  undefined2 uStack_54;
  undefined2 local_52;
  undefined2 uStack_50;
  undefined4 local_4e;
  undefined4 local_4a;
  undefined4 local_46;
  undefined4 local_42;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined4 local_36;
  undefined4 local_32;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined4 local_26;
  undefined4 local_22;
  undefined4 local_1e;
  undefined1 local_1a;
  char local_19;
  uint local_18;
  int local_14;
  uint local_10;
  
  local_19 = '\0';
  local_18 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x2a);
  if (local_18 == 0) {
    local_18 = 0;
    if (param_2[9] == (SigAradJumpingCharacter)0x2) {
      local_10 = 0;
      while (uVar3 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                               ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                                (param_1 + 0x796e8)), local_10 < uVar3) {
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                           local_10);
        if (0x3b < *(short *)(iVar4 + 0x27)) {
          local_19 = '\x01';
          break;
        }
        local_10 = local_10 + 1;
      }
      if (local_19 != '\x01') {
        CUser::SendCmdErrorPacket(param_1,0x249,8);
        return 0;
      }
    }
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if (iVar4 < 0x12) {
      local_14 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      Inven_Item::Inven_Item((Inven_Item *)&local_56);
      uVar3 = (uint)*(ushort *)(param_2 + 0xb);
      CInventory::GetInvenSlot((int)local_9c,local_14);
      local_56 = (undefined2)local_9c._0_4_;
      uStack_54 = SUB42(local_9c._0_4_,2);
      local_52 = (undefined2)local_9c._4_4_;
      uStack_50 = SUB42(local_9c._4_4_,2);
      local_4e = local_94;
      local_4a = local_90;
      local_46 = local_8c;
      local_42 = local_88;
      local_3e = local_84;
      local_3a = local_80;
      local_36 = local_7c;
      local_32 = local_78;
      local_2e = local_74;
      local_2a = local_70;
      local_26 = local_6c;
      local_22 = local_68;
      local_1e = local_64;
      local_1a = local_60;
      cVar1 = Inven_Item::isEmpty((Inven_Item *)&local_56);
      if (cVar1 == '\0') {
        if (param_2[9] == (SigAradJumpingCharacter)0x1) {
          if (CONCAT22(local_52,uStack_54) != 0x28d468) {
            CUser::SendCmdErrorPacket(param_1,0x249,0x11,uVar3);
            return 0;
          }
        }
        else {
          if (param_2[9] != (SigAradJumpingCharacter)0x2) {
            CUser::SendCmdErrorPacket(param_1,0x249,0x11,uVar3);
            return 0;
          }
          if (CONCAT22(local_52,uStack_54) != 0x28d469) {
            CUser::SendCmdErrorPacket(param_1,0x249,0x11,uVar3);
            return 0;
          }
        }
        uVar2 = 1;
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x249,0x11,uVar3);
        uVar2 = 0;
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x249,0x12);
      uVar2 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x249,local_18 & 0xff);
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## dispatch_sig

```asm
// === 0819f1ec ARAD::DISPATCHER::Dispatcher_AradJumpingCharacter::dispatch_sig  [0x0819f1ec-0x819f44b] ===
 819f1ec:	55                   	push   %ebp
 819f1ed:	89 e5                	mov    %esp,%ebp
 819f1ef:	56                   	push   %esi
 819f1f0:	53                   	push   %ebx
 819f1f1:	83 ec 30             	sub    $0x30,%esp
 819f1f4:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 819f1f8:	75 0a                	jne    819f204 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0x18>
 819f1fa:	bb 9b 05 00 00       	mov    $0x59b,%ebx
 819f1ff:	e9 3e 02 00 00       	jmp    819f442 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0x256>
 819f204:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f207:	89 04 24             	mov    %eax,(%esp)
 819f20a:	e8 23 12 f8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 819f20f:	85 c0                	test   %eax,%eax
 819f211:	0f 94 c0             	sete   %al
 819f214:	84 c0                	test   %al,%al
 819f216:	74 0a                	je     819f222 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0x36>
 819f218:	bb 00 00 00 00       	mov    $0x0,%ebx
 819f21d:	e9 20 02 00 00       	jmp    819f442 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0x256>
 819f222:	8d 45 e7             	lea    -0x19(%ebp),%eax
 819f225:	89 04 24             	mov    %eax,(%esp)
 819f228:	e8 63 17 00 00       	call   81a0990 <_ZN4arad23SigAradJumpingCharacterC1Ev>
 819f22d:	8d 45 e7             	lea    -0x19(%ebp),%eax
 819f230:	83 c0 09             	add    $0x9,%eax
 819f233:	89 44 24 04          	mov    %eax,0x4(%esp)
 819f237:	8b 45 10             	mov    0x10(%ebp),%eax
 819f23a:	89 04 24             	mov    %eax,(%esp)
 819f23d:	e8 2e dd 3e 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 819f242:	83 f0 01             	xor    $0x1,%eax
 819f245:	84 c0                	test   %al,%al
 819f247:	74 0a                	je     819f253 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0x67>
 819f249:	bb a9 05 00 00       	mov    $0x5a9,%ebx
 819f24e:	e9 ef 01 00 00       	jmp    819f442 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0x256>
 819f253:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 819f257:	84 c0                	test   %al,%al
 819f259:	74 08                	je     819f263 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0x77>
 819f25b:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 819f25f:	3c 02                	cmp    $0x2,%al
 819f261:	76 0a                	jbe    819f26d <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0x81>
 819f263:	bb ac 05 00 00       	mov    $0x5ac,%ebx
 819f268:	e9 d5 01 00 00       	jmp    819f442 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0x256>
 819f26d:	8d 45 e7             	lea    -0x19(%ebp),%eax
 819f270:	83 c0 0a             	add    $0xa,%eax
 819f273:	89 44 24 04          	mov    %eax,0x4(%esp)
 819f277:	8b 45 10             	mov    0x10(%ebp),%eax
 819f27a:	89 04 24             	mov    %eax,(%esp)
 819f27d:	e8 ee dc 3e 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 819f282:	83 f0 01             	xor    $0x1,%eax
 819f285:	84 c0                	test   %al,%al
 819f287:	74 0a                	je     819f293 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0xa7>
 819f289:	bb af 05 00 00       	mov    $0x5af,%ebx
 819f28e:	e9 af 01 00 00       	jmp    819f442 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0x256>
 819f293:	0f b6 45 f1          	movzbl -0xf(%ebp),%eax
 819f297:	84 c0                	test   %al,%al
 819f299:	74 08                	je     819f2a3 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0xb7>
 819f29b:	0f b6 45 f1          	movzbl -0xf(%ebp),%eax
 819f29f:	3c 04                	cmp    $0x4,%al
 819f2a1:	76 0a                	jbe    819f2ad <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0xc1>
 819f2a3:	bb b1 05 00 00       	mov    $0x5b1,%ebx
 819f2a8:	e9 95 01 00 00       	jmp    819f442 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0x256>
 819f2ad:	8d 45 e7             	lea    -0x19(%ebp),%eax
 819f2b0:	83 c0 0b             	add    $0xb,%eax
 819f2b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 819f2b7:	8b 45 10             	mov    0x10(%ebp),%eax
 819f2ba:	89 04 24             	mov    %eax,(%esp)
 819f2bd:	e8 ee dd 3e 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 819f2c2:	83 f0 01             	xor    $0x1,%eax
 819f2c5:	84 c0                	test   %al,%al
 819f2c7:	74 0a                	je     819f2d3 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0xe7>
 819f2c9:	bb b4 05 00 00       	mov    $0x5b4,%ebx
 819f2ce:	e9 6f 01 00 00       	jmp    819f442 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0x256>
 819f2d3:	8d 45 e7             	lea    -0x19(%ebp),%eax
 819f2d6:	83 c0 0d             	add    $0xd,%eax
 819f2d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 819f2dd:	8b 45 10             	mov    0x10(%ebp),%eax
 819f2e0:	89 04 24             	mov    %eax,(%esp)
 819f2e3:	e8 58 df 3e 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 819f2e8:	83 f0 01             	xor    $0x1,%eax
 819f2eb:	84 c0                	test   %al,%al
 819f2ed:	74 0a                	je     819f2f9 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0x10d>
 819f2ef:	bb b6 05 00 00       	mov    $0x5b6,%ebx
 819f2f4:	e9 49 01 00 00       	jmp    819f442 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0x256>
 819f2f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f2fc:	89 04 24             	mov    %eax,(%esp)
 819f2ff:	e8 88 b0 f3 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 819f304:	83 f8 02             	cmp    $0x2,%eax
 819f307:	7e 10                	jle    819f319 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0x12d>
 819f309:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f30c:	89 04 24             	mov    %eax,(%esp)
 819f30f:	e8 78 b0 f3 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 819f314:	83 f8 04             	cmp    $0x4,%eax
 819f317:	7e 07                	jle    819f320 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0x134>
 819f319:	b8 01 00 00 00       	mov    $0x1,%eax
 819f31e:	eb 05                	jmp    819f325 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0x139>
 819f320:	b8 00 00 00 00       	mov    $0x0,%eax
 819f325:	84 c0                	test   %al,%al
 819f327:	74 0a                	je     819f333 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0x147>
 819f329:	bb 00 00 00 00       	mov    $0x0,%ebx
 819f32e:	e9 0f 01 00 00       	jmp    819f442 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0x256>
 819f333:	8d 45 e7             	lea    -0x19(%ebp),%eax
 819f336:	89 44 24 08          	mov    %eax,0x8(%esp)
 819f33a:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f33d:	89 44 24 04          	mov    %eax,0x4(%esp)
 819f341:	8b 45 08             	mov    0x8(%ebp),%eax
 819f344:	89 04 24             	mov    %eax,(%esp)
 819f347:	e8 00 01 00 00       	call   819f44c <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE>
 819f34c:	83 f0 01             	xor    $0x1,%eax
 819f34f:	84 c0                	test   %al,%al
 819f351:	74 0a                	je     819f35d <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0x171>
 819f353:	bb 00 00 00 00       	mov    $0x0,%ebx
 819f358:	e9 e5 00 00 00       	jmp    819f442 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0x256>
 819f35d:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f360:	89 04 24             	mov    %eax,(%esp)
 819f363:	e8 06 b0 f3 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 819f368:	89 45 e8             	mov    %eax,-0x18(%ebp)
 819f36b:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 819f372:	ff 
 819f373:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f376:	89 04 24             	mov    %eax,(%esp)
 819f379:	e8 22 ec 4a 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 819f37e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 819f381:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 819f386:	c7 44 24 08 c8 05 00 	movl   $0x5c8,0x8(%esp)
 819f38d:	00 
 819f38e:	c7 44 24 04 60 9a ba 	movl   $0x8ba9a60,0x4(%esp)
 819f395:	08 
 819f396:	89 04 24             	mov    %eax,(%esp)
 819f399:	e8 e8 06 0f 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 819f39e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 819f3a5:	00 
 819f3a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 819f3aa:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819f3ad:	89 04 24             	mov    %eax,(%esp)
 819f3b0:	e8 71 98 f2 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 819f3b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f3b8:	89 04 24             	mov    %eax,(%esp)
 819f3bb:	e8 d6 98 f2 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 819f3c0:	89 44 24 08          	mov    %eax,0x8(%esp)
 819f3c4:	c7 44 24 04 2d 00 00 	movl   $0x2d,0x4(%esp)
 819f3cb:	00 
 819f3cc:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819f3cf:	89 04 24             	mov    %eax,(%esp)
 819f3d2:	e8 df 83 ff ff       	call   81977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>
 819f3d7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819f3da:	89 04 24             	mov    %eax,(%esp)
 819f3dd:	e8 6c 98 f2 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 819f3e2:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 819f3e9:	00 
 819f3ea:	8d 55 e7             	lea    -0x19(%ebp),%edx
 819f3ed:	89 54 24 04          	mov    %edx,0x4(%esp)
 819f3f1:	89 04 24             	mov    %eax,(%esp)
 819f3f4:	e8 59 f2 f3 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 819f3f9:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 819f3fe:	8d 55 dc             	lea    -0x24(%ebp),%edx
 819f401:	89 54 24 08          	mov    %edx,0x8(%esp)
 819f405:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 819f40c:	00 
 819f40d:	89 04 24             	mov    %eax,(%esp)
 819f410:	e8 c9 1b 3d 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 819f415:	bb 00 00 00 00       	mov    $0x0,%ebx
 819f41a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819f41d:	89 04 24             	mov    %eax,(%esp)
 819f420:	e8 ad d4 47 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 819f425:	eb 1b                	jmp    819f442 <_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter12dispatch_sigEP5CUserR9PacketBuf+0x256>
 819f427:	89 d3                	mov    %edx,%ebx
 819f429:	89 c6                	mov    %eax,%esi
 819f42b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819f42e:	89 04 24             	mov    %eax,(%esp)
 819f431:	e8 9c d4 47 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 819f436:	89 f0                	mov    %esi,%eax
 819f438:	89 da                	mov    %ebx,%edx
 819f43a:	89 04 24             	mov    %eax,(%esp)
 819f43d:	e8 0e 43 94 00       	call   8ae3750 <_Unwind_Resume>
 819f442:	89 d8                	mov    %ebx,%eax
 819f444:	83 c4 30             	add    $0x30,%esp
 819f447:	5b                   	pop    %ebx
 819f448:	5e                   	pop    %esi
 819f449:	5d                   	pop    %ebp
 819f44a:	c3                   	ret
 819f44b:	90                   	nop

```

```c
// ARAD::DISPATCHER::Dispatcher_AradJumpingCharacter::dispatch_sig @ 0x819f1ec

/* ARAD::DISPATCHER::Dispatcher_AradJumpingCharacter::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_AradJumpingCharacter::dispatch_sig
          (Dispatcher_AradJumpingCharacter *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  Stream *pSVar4;
  undefined4 uVar5;
  CStreamGuard *this_00;
  CStreamGuard local_28 [11];
  SigAradJumpingCharacter local_1d;
  undefined4 local_1c;
  undefined4 local_18;
  byte local_14;
  byte local_13;
  ushort uStack_12;
  uint uStack_10;
  
  if (param_1 == (CUser *)0x0) {
    return 0x59b;
  }
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar3 == 0) {
    return 0;
  }
  arad::SigAradJumpingCharacter::SigAradJumpingCharacter(&local_1d);
  cVar2 = PacketBuf::get_byte(param_2,&local_14);
  if (cVar2 != '\x01') {
    return 0x5a9;
  }
  if ((local_14 == 0) || (2 < local_14)) {
    return 0x5ac;
  }
  cVar2 = PacketBuf::get_byte(param_2,&local_13);
  if (cVar2 != '\x01') {
    return 0x5af;
  }
  if ((local_13 == 0) || (4 < local_13)) {
    return 0x5b1;
  }
  cVar2 = PacketBuf::get_short(param_2,&uStack_12);
  if (cVar2 != '\x01') {
    return 0x5b4;
  }
  cVar2 = PacketBuf::get_int(param_2,&uStack_10);
  if (cVar2 != '\x01') {
    return 0x5b6;
  }
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 3) || (iVar3 = CUser::get_state(param_1), 4 < iVar3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((!bVar1) && (cVar2 = checkWorkState(this,param_1,&local_1d), cVar2 == '\x01')) {
    local_1c = CUser::get_acc_id(param_1);
    local_18 = CUser::get_charac_no(param_1,-1);
    pSVar4 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"localjapan/Arad_PacketDispatcher.cpp",
                                 0x5c8);
    CStreamGuard::CStreamGuard(local_28,pSVar4,true);
    uVar5 = CUser::GetUID(param_1);
                    /* try { // try from 0819f3d2 to 0819f414 has its CatchHandler @ 0819f427 */
    make_internal_stream_jpn(local_28,0x2d,uVar5);
    this_00 = (CStreamGuard *)CStreamGuard::operator->(local_28);
    CStreamGuard::put_binary(this_00,&local_1d,0x11);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_28);
    CStreamGuard::~CStreamGuard(local_28);
  }
  return 0;
}

```

