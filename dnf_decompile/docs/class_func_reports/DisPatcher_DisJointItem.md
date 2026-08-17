# DisPatcher_DisJointItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## _checkDisjointableItem

```asm
// === 081fa0f6 DisPatcher_DisJointItem::_checkDisjointableItem  [0x081fa0f6-0x81fa19d] ===
 81fa0f6:	55                   	push   %ebp
 81fa0f7:	89 e5                	mov    %esp,%ebp
 81fa0f9:	53                   	push   %ebx
 81fa0fa:	83 ec 24             	sub    $0x24,%esp
 81fa0fd:	8b 45 08             	mov    0x8(%ebp),%eax
 81fa100:	83 c0 11             	add    $0x11,%eax
 81fa103:	89 04 24             	mov    %eax,(%esp)
 81fa106:	e8 b1 66 f5 ff       	call   81507bc <_ZNK17stAmplifyOption_t12isIdentifiedEv>
 81fa10b:	83 f0 01             	xor    $0x1,%eax
 81fa10e:	84 c0                	test   %al,%al
 81fa110:	74 0d                	je     81fa11f <_ZN23DisPatcher_DisJointItem22_checkDisjointableItemERK10Inven_ItemP5CUser+0x29>
 81fa112:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81fa116:	75 07                	jne    81fa11f <_ZN23DisPatcher_DisJointItem22_checkDisjointableItemERK10Inven_ItemP5CUser+0x29>
 81fa118:	b8 01 00 00 00       	mov    $0x1,%eax
 81fa11d:	eb 05                	jmp    81fa124 <_ZN23DisPatcher_DisJointItem22_checkDisjointableItemERK10Inven_ItemP5CUser+0x2e>
 81fa11f:	b8 00 00 00 00       	mov    $0x0,%eax
 81fa124:	84 c0                	test   %al,%al
 81fa126:	74 07                	je     81fa12f <_ZN23DisPatcher_DisJointItem22_checkDisjointableItemERK10Inven_ItemP5CUser+0x39>
 81fa128:	b8 ae 00 00 00       	mov    $0xae,%eax
 81fa12d:	eb 68                	jmp    81fa197 <_ZN23DisPatcher_DisJointItem22_checkDisjointableItemERK10Inven_ItemP5CUser+0xa1>
 81fa12f:	8b 45 08             	mov    0x8(%ebp),%eax
 81fa132:	8b 40 02             	mov    0x2(%eax),%eax
 81fa135:	89 c3                	mov    %eax,%ebx
 81fa137:	e8 5f 20 ed ff       	call   80cc19b <_Z14G_CDataManagerv>
 81fa13c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81fa140:	89 04 24             	mov    %eax,(%esp)
 81fa143:	e8 ea 58 16 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81fa148:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81fa14b:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81fa14f:	75 07                	jne    81fa158 <_ZN23DisPatcher_DisJointItem22_checkDisjointableItemERK10Inven_ItemP5CUser+0x62>
 81fa151:	b8 11 00 00 00       	mov    $0x11,%eax
 81fa156:	eb 3f                	jmp    81fa197 <_ZN23DisPatcher_DisJointItem22_checkDisjointableItemERK10Inven_ItemP5CUser+0xa1>
 81fa158:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81fa15b:	8b 00                	mov    (%eax),%eax
 81fa15d:	83 c0 38             	add    $0x38,%eax
 81fa160:	8b 10                	mov    (%eax),%edx
 81fa162:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81fa165:	89 04 24             	mov    %eax,(%esp)
 81fa168:	ff d2                	call   *%edx
 81fa16a:	84 c0                	test   %al,%al
 81fa16c:	74 07                	je     81fa175 <_ZN23DisPatcher_DisJointItem22_checkDisjointableItemERK10Inven_ItemP5CUser+0x7f>
 81fa16e:	b8 13 00 00 00       	mov    $0x13,%eax
 81fa173:	eb 22                	jmp    81fa197 <_ZN23DisPatcher_DisJointItem22_checkDisjointableItemERK10Inven_ItemP5CUser+0xa1>
 81fa175:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81fa178:	89 04 24             	mov    %eax,(%esp)
 81fa17b:	e8 62 71 ef ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 81fa180:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81fa183:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81fa186:	83 f8 02             	cmp    $0x2,%eax
 81fa189:	75 07                	jne    81fa192 <_ZN23DisPatcher_DisJointItem22_checkDisjointableItemERK10Inven_ItemP5CUser+0x9c>
 81fa18b:	b8 11 00 00 00       	mov    $0x11,%eax
 81fa190:	eb 05                	jmp    81fa197 <_ZN23DisPatcher_DisJointItem22_checkDisjointableItemERK10Inven_ItemP5CUser+0xa1>
 81fa192:	b8 00 00 00 00       	mov    $0x0,%eax
 81fa197:	83 c4 24             	add    $0x24,%esp
 81fa19a:	5b                   	pop    %ebx
 81fa19b:	5d                   	pop    %ebp
 81fa19c:	c3                   	ret
 81fa19d:	90                   	nop

```

```c
// DisPatcher_DisJointItem::_checkDisjointableItem @ 0x81fa0f6

/* DisPatcher_DisJointItem::_checkDisjointableItem(Inven_Item const&, CUser*) */

undefined4 DisPatcher_DisJointItem::_checkDisjointableItem(Inven_Item *param_1,CUser *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  CDataManager *this;
  CItem *this_00;
  int iVar4;
  
  cVar2 = stAmplifyOption_t::isIdentified((stAmplifyOption_t *)(param_1 + 0x11));
  if ((cVar2 == '\x01') || (param_2 != (CUser *)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = 0xae;
  }
  else {
    iVar4 = *(int *)(param_1 + 2);
    this = (CDataManager *)G_CDataManager();
    this_00 = (CItem *)CDataManager::find_item(this,iVar4);
    if (this_00 == (CItem *)0x0) {
      uVar3 = 0x11;
    }
    else {
      cVar2 = (**(code **)(*(int *)this_00 + 0x38))(this_00);
      if (cVar2 == '\0') {
        iVar4 = CItem::GetAttachType(this_00);
        if (iVar4 == 2) {
          uVar3 = 0x11;
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0x13;
      }
    }
  }
  return uVar3;
}

```

---

## _disjoint

```asm
// === 081f92ca DisPatcher_DisJointItem::_disjoint  [0x081f92ca-0x81f9fb7] ===
 81f92ca:	55                   	push   %ebp
 81f92cb:	89 e5                	mov    %esp,%ebp
 81f92cd:	57                   	push   %edi
 81f92ce:	56                   	push   %esi
 81f92cf:	53                   	push   %ebx
 81f92d0:	81 ec bc 02 00 00    	sub    $0x2bc,%esp
 81f92d6:	8b 45 1c             	mov    0x1c(%ebp),%eax
 81f92d9:	66 89 85 94 fd ff ff 	mov    %ax,-0x26c(%ebp)
 81f92e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f92e3:	0f bf d0             	movswl %ax,%edx
 81f92e6:	8b 45 10             	mov    0x10(%ebp),%eax
 81f92e9:	0f be c0             	movsbl %al,%eax
 81f92ec:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f92f0:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f92f4:	8b 45 14             	mov    0x14(%ebp),%eax
 81f92f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f92fb:	8b 45 08             	mov    0x8(%ebp),%eax
 81f92fe:	89 04 24             	mov    %eax,(%esp)
 81f9301:	e8 76 f7 ff ff       	call   81f8a7c <_Z30_check_disjointable_user_stateP5CUser14ENUM_CMDPACKETcs>
 81f9306:	83 f0 01             	xor    $0x1,%eax
 81f9309:	84 c0                	test   %al,%al
 81f930b:	74 0a                	je     81f9317 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x4d>
 81f930d:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f9312:	e9 94 0c 00 00       	jmp    81f9fab <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0xce1>
 81f9317:	8d 45 90             	lea    -0x70(%ebp),%eax
 81f931a:	89 04 24             	mov    %eax,(%esp)
 81f931d:	e8 2a 4a 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81f9322:	8b 45 14             	mov    0x14(%ebp),%eax
 81f9325:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f9329:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f9330:	00 
 81f9331:	8d 45 90             	lea    -0x70(%ebp),%eax
 81f9334:	89 04 24             	mov    %eax,(%esp)
 81f9337:	e8 c0 25 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f933c:	8b 45 10             	mov    0x10(%ebp),%eax
 81f933f:	89 04 24             	mov    %eax,(%esp)
 81f9342:	e8 fe e4 ef ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81f9347:	89 45 bc             	mov    %eax,-0x44(%ebp)
 81f934a:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 81f9351:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 81f9355:	0f 84 f6 00 00 00    	je     81f9451 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x187>
 81f935b:	8b 45 18             	mov    0x18(%ebp),%eax
 81f935e:	89 04 24             	mov    %eax,(%esp)
 81f9361:	e8 6e 65 03 00       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 81f9366:	89 45 c0             	mov    %eax,-0x40(%ebp)
 81f9369:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 81f936d:	75 58                	jne    81f93c7 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0xfd>
 81f936f:	c7 44 24 10 08 23 bc 	movl   $0x8bc2308,0x10(%esp)
 81f9376:	08 
 81f9377:	c7 44 24 0c b7 87 00 	movl   $0x87b7,0xc(%esp)
 81f937e:	00 
 81f937f:	c7 44 24 08 20 fd bc 	movl   $0x8bcfd20,0x8(%esp)
 81f9386:	08 
 81f9387:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81f938e:	08 
 81f938f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81f9396:	e8 6f a8 8d 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81f939b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81f93a2:	e8 59 c4 52 00       	call   8725800 <__cxa_allocate_exception>
 81f93a7:	89 c2                	mov    %eax,%edx
 81f93a9:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 81f93af:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f93b6:	00 
 81f93b7:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 81f93be:	08 
 81f93bf:	89 04 24             	mov    %eax,(%esp)
 81f93c2:	e8 89 b8 52 00       	call   8724c50 <__cxa_throw>
 81f93c7:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81f93ca:	89 04 24             	mov    %eax,(%esp)
 81f93cd:	e8 c4 b3 03 00       	call   8234796 <_ZN10expert_job10CExpertJob7GetTypeEv>
 81f93d2:	83 f8 03             	cmp    $0x3,%eax
 81f93d5:	0f 95 c0             	setne  %al
 81f93d8:	84 c0                	test   %al,%al
 81f93da:	74 58                	je     81f9434 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x16a>
 81f93dc:	c7 44 24 10 1e 23 bc 	movl   $0x8bc231e,0x10(%esp)
 81f93e3:	08 
 81f93e4:	c7 44 24 0c bd 87 00 	movl   $0x87bd,0xc(%esp)
 81f93eb:	00 
 81f93ec:	c7 44 24 08 20 fd bc 	movl   $0x8bcfd20,0x8(%esp)
 81f93f3:	08 
 81f93f4:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81f93fb:	08 
 81f93fc:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81f9403:	e8 02 a8 8d 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81f9408:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81f940f:	e8 ec c3 52 00       	call   8725800 <__cxa_allocate_exception>
 81f9414:	89 c2                	mov    %eax,%edx
 81f9416:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 81f941c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f9423:	00 
 81f9424:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 81f942b:	08 
 81f942c:	89 04 24             	mov    %eax,(%esp)
 81f942f:	e8 1c b8 52 00       	call   8724c50 <__cxa_throw>
 81f9434:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81f9437:	8b 00                	mov    (%eax),%eax
 81f9439:	8b 10                	mov    (%eax),%edx
 81f943b:	8b 45 08             	mov    0x8(%ebp),%eax
 81f943e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f9442:	8b 45 18             	mov    0x18(%ebp),%eax
 81f9445:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f9449:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81f944c:	89 04 24             	mov    %eax,(%esp)
 81f944f:	ff d2                	call   *%edx
 81f9451:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f9454:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f9458:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81f945b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f945f:	8b 45 08             	mov    0x8(%ebp),%eax
 81f9462:	89 04 24             	mov    %eax,(%esp)
 81f9465:	e8 d8 d4 44 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81f946a:	84 c0                	test   %al,%al
 81f946c:	74 2c                	je     81f949a <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x1d0>
 81f946e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81f9475:	e8 86 c3 52 00       	call   8725800 <__cxa_allocate_exception>
 81f947a:	89 c2                	mov    %eax,%edx
 81f947c:	c7 02 d5 00 00 00    	movl   $0xd5,(%edx)
 81f9482:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f9489:	00 
 81f948a:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 81f9491:	08 
 81f9492:	89 04 24             	mov    %eax,(%esp)
 81f9495:	e8 b6 b7 52 00       	call   8724c50 <__cxa_throw>
 81f949a:	8d 85 07 ff ff ff    	lea    -0xf9(%ebp),%eax
 81f94a0:	89 04 24             	mov    %eax,(%esp)
 81f94a3:	e8 ac 23 ed ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81f94a8:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
 81f94af:	66 83 bd 94 fd ff ff 	cmpw   $0xffff,-0x26c(%ebp)
 81f94b6:	ff 
 81f94b7:	74 3d                	je     81f94f6 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x22c>
 81f94b9:	e8 e9 0e ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81f94be:	89 04 24             	mov    %eax,(%esp)
 81f94c1:	e8 22 90 f4 ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 81f94c6:	84 c0                	test   %al,%al
 81f94c8:	74 2c                	je     81f94f6 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x22c>
 81f94ca:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81f94d1:	e8 2a c3 52 00       	call   8725800 <__cxa_allocate_exception>
 81f94d6:	89 c2                	mov    %eax,%edx
 81f94d8:	c7 02 60 00 00 00    	movl   $0x60,(%edx)
 81f94de:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f94e5:	00 
 81f94e6:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 81f94ed:	08 
 81f94ee:	89 04 24             	mov    %eax,(%esp)
 81f94f1:	e8 5a b7 52 00       	call   8724c50 <__cxa_throw>
 81f94f6:	0f b7 85 94 fd ff ff 	movzwl -0x26c(%ebp),%eax
 81f94fd:	89 44 24 18          	mov    %eax,0x18(%esp)
 81f9501:	8b 45 18             	mov    0x18(%ebp),%eax
 81f9504:	89 44 24 14          	mov    %eax,0x14(%esp)
 81f9508:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81f950b:	89 44 24 10          	mov    %eax,0x10(%esp)
 81f950f:	8d 85 07 ff ff ff    	lea    -0xf9(%ebp),%eax
 81f9515:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81f9519:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81f951c:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f9520:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f9523:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f9527:	8b 45 08             	mov    0x8(%ebp),%eax
 81f952a:	89 04 24             	mov    %eax,(%esp)
 81f952d:	e8 6f f6 ff ff       	call   81f8ba1 <_Z30_check_disjointable_item_stateP5CUseriiR10Inven_ItemPP5CItemS0_t>
 81f9532:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81f9535:	8b 55 c0             	mov    -0x40(%ebp),%edx
 81f9538:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f953c:	8d 95 07 ff ff ff    	lea    -0xf9(%ebp),%edx
 81f9542:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f9546:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f954a:	8b 45 08             	mov    0x8(%ebp),%eax
 81f954d:	89 04 24             	mov    %eax,(%esp)
 81f9550:	e8 8e fa ff ff       	call   81f8fe3 <_Z25_check_disjoint_need_slotP5CUserP5CItemR10Inven_ItemPN10expert_job11CDisjointerE>
 81f9555:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 81f955b:	89 04 24             	mov    %eax,(%esp)
 81f955e:	e8 3f b2 03 00       	call   82347a2 <_ZN14DisJointResultC1Ev>
 81f9563:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 81f956a:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 81f956e:	74 32                	je     81f95a2 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x2d8>
 81f9570:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81f9573:	8b 55 08             	mov    0x8(%ebp),%edx
 81f9576:	89 54 24 10          	mov    %edx,0x10(%esp)
 81f957a:	8d 95 44 ff ff ff    	lea    -0xbc(%ebp),%edx
 81f9580:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f9584:	8d 95 07 ff ff ff    	lea    -0xf9(%ebp),%edx
 81f958a:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f958e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f9592:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81f9595:	89 04 24             	mov    %eax,(%esp)
 81f9598:	e8 4f b2 03 00       	call   82347ec <_ZN10expert_job11CDisjointer19get_disjoint_resultEP5CItemP10Inven_ItemR14DisJointResultP5CUser>
 81f959d:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81f95a0:	eb 29                	jmp    81f95cb <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x301>
 81f95a2:	8b 85 09 ff ff ff    	mov    -0xf7(%ebp),%eax
 81f95a8:	89 c3                	mov    %eax,%ebx
 81f95aa:	e8 ec 2b ed ff       	call   80cc19b <_Z14G_CDataManagerv>
 81f95af:	8b 40 1c             	mov    0x1c(%eax),%eax
 81f95b2:	8d 95 44 ff ff ff    	lea    -0xbc(%ebp),%edx
 81f95b8:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f95bc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f95c0:	89 04 24             	mov    %eax,(%esp)
 81f95c3:	e8 2e 9e 27 00       	call   84733f6 <_ZN8DisJoint9GetResultEiR14DisJointResult>
 81f95c8:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81f95cb:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81f95ce:	85 c0                	test   %eax,%eax
 81f95d0:	7e 2b                	jle    81f95fd <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x333>
 81f95d2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81f95d9:	e8 22 c2 52 00       	call   8725800 <__cxa_allocate_exception>
 81f95de:	89 c2                	mov    %eax,%edx
 81f95e0:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 81f95e3:	89 0a                	mov    %ecx,(%edx)
 81f95e5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f95ec:	00 
 81f95ed:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 81f95f4:	08 
 81f95f5:	89 04 24             	mov    %eax,(%esp)
 81f95f8:	e8 53 b6 52 00       	call   8724c50 <__cxa_throw>
 81f95fd:	66 83 bd 94 fd ff ff 	cmpw   $0xffff,-0x26c(%ebp)
 81f9604:	ff 
 81f9605:	0f 84 89 00 00 00    	je     81f9694 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x3ca>
 81f960b:	0f b7 9d 94 fd ff ff 	movzwl -0x26c(%ebp),%ebx
 81f9612:	8b 45 08             	mov    0x8(%ebp),%eax
 81f9615:	89 04 24             	mov    %eax,(%esp)
 81f9618:	e8 71 0c ee ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81f961d:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81f9624:	00 
 81f9625:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81f962c:	00 
 81f962d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f9631:	89 04 24             	mov    %eax,(%esp)
 81f9634:	e8 a5 62 30 00       	call   84ff8de <_ZN10CInventory8use_itemEiii>
 81f9639:	85 c0                	test   %eax,%eax
 81f963b:	0f 95 c0             	setne  %al
 81f963e:	84 c0                	test   %al,%al
 81f9640:	74 2c                	je     81f966e <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x3a4>
 81f9642:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81f9649:	e8 b2 c1 52 00       	call   8725800 <__cxa_allocate_exception>
 81f964e:	89 c2                	mov    %eax,%edx
 81f9650:	c7 02 16 00 00 00    	movl   $0x16,(%edx)
 81f9656:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f965d:	00 
 81f965e:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 81f9665:	08 
 81f9666:	89 04 24             	mov    %eax,(%esp)
 81f9669:	e8 e2 b5 52 00       	call   8724c50 <__cxa_throw>
 81f966e:	0f b7 85 94 fd ff ff 	movzwl -0x26c(%ebp),%eax
 81f9675:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81f9679:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f9680:	00 
 81f9681:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f9688:	00 
 81f9689:	8b 45 08             	mov    0x8(%ebp),%eax
 81f968c:	89 04 24             	mov    %eax,(%esp)
 81f968f:	e8 44 2c 48 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 81f9694:	c7 85 78 ff ff ff 00 	movl   $0x0,-0x88(%ebp)
 81f969b:	00 00 00 
 81f969e:	c7 85 7c ff ff ff 00 	movl   $0x0,-0x84(%ebp)
 81f96a5:	00 00 00 
 81f96a8:	c7 45 80 00 00 00 00 	movl   $0x0,-0x80(%ebp)
 81f96af:	c7 45 84 00 00 00 00 	movl   $0x0,-0x7c(%ebp)
 81f96b6:	c7 45 88 00 00 00 00 	movl   $0x0,-0x78(%ebp)
 81f96bd:	8d 85 99 fd ff ff    	lea    -0x267(%ebp),%eax
 81f96c3:	89 c3                	mov    %eax,%ebx
 81f96c5:	be 04 00 00 00       	mov    $0x4,%esi
 81f96ca:	eb 0e                	jmp    81f96da <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x410>
 81f96cc:	89 1c 24             	mov    %ebx,(%esp)
 81f96cf:	e8 80 21 ed ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81f96d4:	83 c3 3d             	add    $0x3d,%ebx
 81f96d7:	83 ee 01             	sub    $0x1,%esi
 81f96da:	83 fe ff             	cmp    $0xffffffff,%esi
 81f96dd:	0f 95 c0             	setne  %al
 81f96e0:	84 c0                	test   %al,%al
 81f96e2:	75 e8                	jne    81f96cc <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x402>
 81f96e4:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 81f96eb:	e9 9c 01 00 00       	jmp    81f988c <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x5c2>
 81f96f0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81f96f3:	83 c0 04             	add    $0x4,%eax
 81f96f6:	8b 84 85 48 ff ff ff 	mov    -0xb8(%ebp,%eax,4),%eax
 81f96fd:	85 c0                	test   %eax,%eax
 81f96ff:	0f 84 7f 01 00 00    	je     81f9884 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x5ba>
 81f9705:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 81f9708:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81f970b:	83 c0 04             	add    $0x4,%eax
 81f970e:	8b b4 85 48 ff ff ff 	mov    -0xb8(%ebp,%eax,4),%esi
 81f9715:	e8 81 2a ed ff       	call   80cc19b <_Z14G_CDataManagerv>
 81f971a:	89 74 24 04          	mov    %esi,0x4(%esp)
 81f971e:	89 04 24             	mov    %eax,(%esp)
 81f9721:	e8 0c 63 16 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81f9726:	89 84 9d 78 ff ff ff 	mov    %eax,-0x88(%ebp,%ebx,4)
 81f972d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81f9730:	8b 84 85 78 ff ff ff 	mov    -0x88(%ebp,%eax,4),%eax
 81f9737:	85 c0                	test   %eax,%eax
 81f9739:	0f 84 48 01 00 00    	je     81f9887 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x5bd>
 81f973f:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81f9742:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81f9745:	83 c0 04             	add    $0x4,%eax
 81f9748:	8b 84 85 48 ff ff ff 	mov    -0xb8(%ebp,%eax,4),%eax
 81f974f:	6b d2 3d             	imul   $0x3d,%edx,%edx
 81f9752:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 81f9755:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 81f9758:	81 ea 4f 02 00 00    	sub    $0x24f,%edx
 81f975e:	89 42 02             	mov    %eax,0x2(%edx)
 81f9761:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81f9764:	8b 84 85 44 ff ff ff 	mov    -0xbc(%ebp,%eax,4),%eax
 81f976b:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81f976e:	8d 8d 99 fd ff ff    	lea    -0x267(%ebp),%ecx
 81f9774:	6b d2 3d             	imul   $0x3d,%edx,%edx
 81f9777:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 81f977a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f977e:	89 14 24             	mov    %edx,(%esp)
 81f9781:	e8 fe 20 ed ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 81f9786:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81f9789:	8b 84 85 78 ff ff ff 	mov    -0x88(%ebp,%eax,4),%eax
 81f9790:	8b 00                	mov    (%eax),%eax
 81f9792:	83 c0 08             	add    $0x8,%eax
 81f9795:	8b 10                	mov    (%eax),%edx
 81f9797:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81f979a:	8d 8d 99 fd ff ff    	lea    -0x267(%ebp),%ecx
 81f97a0:	6b c0 3d             	imul   $0x3d,%eax,%eax
 81f97a3:	01 c1                	add    %eax,%ecx
 81f97a5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81f97a8:	8b 84 85 78 ff ff ff 	mov    -0x88(%ebp,%eax,4),%eax
 81f97af:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81f97b3:	89 04 24             	mov    %eax,(%esp)
 81f97b6:	ff d2                	call   *%edx
 81f97b8:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 81f97bb:	8b 45 08             	mov    0x8(%ebp),%eax
 81f97be:	89 04 24             	mov    %eax,(%esp)
 81f97c1:	e8 b8 0a ee ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81f97c6:	89 c2                	mov    %eax,%edx
 81f97c8:	6b c3 3d             	imul   $0x3d,%ebx,%eax
 81f97cb:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 81f97ce:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81f97d1:	2d 4f 02 00 00       	sub    $0x24f,%eax
 81f97d6:	8b 08                	mov    (%eax),%ecx
 81f97d8:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81f97dc:	8b 48 04             	mov    0x4(%eax),%ecx
 81f97df:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81f97e3:	8b 48 08             	mov    0x8(%eax),%ecx
 81f97e6:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81f97ea:	8b 48 0c             	mov    0xc(%eax),%ecx
 81f97ed:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81f97f1:	8b 48 10             	mov    0x10(%eax),%ecx
 81f97f4:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 81f97f8:	8b 48 14             	mov    0x14(%eax),%ecx
 81f97fb:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 81f97ff:	8b 48 18             	mov    0x18(%eax),%ecx
 81f9802:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 81f9806:	8b 48 1c             	mov    0x1c(%eax),%ecx
 81f9809:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 81f980d:	8b 48 20             	mov    0x20(%eax),%ecx
 81f9810:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 81f9814:	8b 48 24             	mov    0x24(%eax),%ecx
 81f9817:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 81f981b:	8b 48 28             	mov    0x28(%eax),%ecx
 81f981e:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 81f9822:	8b 48 2c             	mov    0x2c(%eax),%ecx
 81f9825:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 81f9829:	8b 48 30             	mov    0x30(%eax),%ecx
 81f982c:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 81f9830:	8b 48 34             	mov    0x34(%eax),%ecx
 81f9833:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 81f9837:	8b 48 38             	mov    0x38(%eax),%ecx
 81f983a:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 81f983e:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 81f9842:	88 44 24 40          	mov    %al,0x40(%esp)
 81f9846:	89 14 24             	mov    %edx,(%esp)
 81f9849:	e8 7c 86 30 00       	call   8501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>
 81f984e:	83 f8 ff             	cmp    $0xffffffff,%eax
 81f9851:	0f 94 c0             	sete   %al
 81f9854:	84 c0                	test   %al,%al
 81f9856:	74 30                	je     81f9888 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x5be>
 81f9858:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81f985f:	e8 9c bf 52 00       	call   8725800 <__cxa_allocate_exception>
 81f9864:	89 c2                	mov    %eax,%edx
 81f9866:	c7 02 04 00 00 00    	movl   $0x4,(%edx)
 81f986c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f9873:	00 
 81f9874:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 81f987b:	08 
 81f987c:	89 04 24             	mov    %eax,(%esp)
 81f987f:	e8 cc b3 52 00       	call   8724c50 <__cxa_throw>
 81f9884:	90                   	nop
 81f9885:	eb 01                	jmp    81f9888 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x5be>
 81f9887:	90                   	nop
 81f9888:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 81f988c:	83 7d d4 04          	cmpl   $0x4,-0x2c(%ebp)
 81f9890:	0f 9e c0             	setle  %al
 81f9893:	84 c0                	test   %al,%al
 81f9895:	0f 85 55 fe ff ff    	jne    81f96f0 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x426>
 81f989b:	8b 5d bc             	mov    -0x44(%ebp),%ebx
 81f989e:	8b 45 08             	mov    0x8(%ebp),%eax
 81f98a1:	89 04 24             	mov    %eax,(%esp)
 81f98a4:	e8 e5 09 ee ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81f98a9:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81f98b0:	00 
 81f98b1:	c7 44 24 10 09 00 00 	movl   $0x9,0x10(%esp)
 81f98b8:	00 
 81f98b9:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81f98c0:	00 
 81f98c1:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f98c4:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f98c8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f98cc:	89 04 24             	mov    %eax,(%esp)
 81f98cf:	e8 38 a7 30 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81f98d4:	88 45 cb             	mov    %al,-0x35(%ebp)
 81f98d7:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
 81f98db:	83 f0 01             	xor    $0x1,%eax
 81f98de:	84 c0                	test   %al,%al
 81f98e0:	74 2b                	je     81f990d <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x643>
 81f98e2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81f98e9:	e8 12 bf 52 00       	call   8725800 <__cxa_allocate_exception>
 81f98ee:	89 c2                	mov    %eax,%edx
 81f98f0:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 81f98f3:	89 0a                	mov    %ecx,(%edx)
 81f98f5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f98fc:	00 
 81f98fd:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 81f9904:	08 
 81f9905:	89 04 24             	mov    %eax,(%esp)
 81f9908:	e8 43 b3 52 00       	call   8724c50 <__cxa_throw>
 81f990d:	c7 85 74 ff ff ff 00 	movl   $0x0,-0x8c(%ebp)
 81f9914:	00 00 00 
 81f9917:	8b 85 0e ff ff ff    	mov    -0xf2(%ebp),%eax
 81f991d:	0f bf f0             	movswl %ax,%esi
 81f9920:	8b 5d 8c             	mov    -0x74(%ebp),%ebx
 81f9923:	e8 b5 81 f5 ff       	call   8151add <_Z7G_Storev>
 81f9928:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 81f992e:	89 54 24 14          	mov    %edx,0x14(%esp)
 81f9932:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f9939:	00 
 81f993a:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81f993e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81f9942:	8d 95 07 ff ff ff    	lea    -0xf9(%ebp),%edx
 81f9948:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f994c:	89 04 24             	mov    %eax,(%esp)
 81f994f:	e8 4c f5 41 00       	call   8618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>
 81f9954:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 81f995a:	89 c3                	mov    %eax,%ebx
 81f995c:	e8 8e 3c 41 00       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 81f9961:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81f9965:	8b 55 08             	mov    0x8(%ebp),%edx
 81f9968:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f996c:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 81f9973:	00 
 81f9974:	89 04 24             	mov    %eax,(%esp)
 81f9977:	e8 06 3d 41 00       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 81f997c:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 81f9980:	75 28                	jne    81f99aa <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x6e0>
 81f9982:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f9989:	00 
 81f998a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f9991:	00 
 81f9992:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 81f9999:	00 
 81f999a:	8b 45 08             	mov    0x8(%ebp),%eax
 81f999d:	89 04 24             	mov    %eax,(%esp)
 81f99a0:	e8 eb 89 f2 ff       	call   8122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>
 81f99a5:	e9 85 00 00 00       	jmp    81f9a2f <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x765>
 81f99aa:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 81f99ae:	74 7f                	je     81f9a2f <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x765>
 81f99b0:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 81f99b4:	74 79                	je     81f9a2f <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x765>
 81f99b6:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81f99bd:	ff 
 81f99be:	8b 45 08             	mov    0x8(%ebp),%eax
 81f99c1:	89 04 24             	mov    %eax,(%esp)
 81f99c4:	e8 d7 45 45 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81f99c9:	89 c3                	mov    %eax,%ebx
 81f99cb:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81f99d2:	ff 
 81f99d3:	8b 45 18             	mov    0x18(%ebp),%eax
 81f99d6:	89 04 24             	mov    %eax,(%esp)
 81f99d9:	e8 c2 45 45 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81f99de:	39 c3                	cmp    %eax,%ebx
 81f99e0:	0f 94 c0             	sete   %al
 81f99e3:	84 c0                	test   %al,%al
 81f99e5:	74 25                	je     81f9a0c <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x742>
 81f99e7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f99ee:	00 
 81f99ef:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f99f6:	00 
 81f99f7:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 81f99fe:	00 
 81f99ff:	8b 45 08             	mov    0x8(%ebp),%eax
 81f9a02:	89 04 24             	mov    %eax,(%esp)
 81f9a05:	e8 86 89 f2 ff       	call   8122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>
 81f9a0a:	eb 23                	jmp    81f9a2f <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x765>
 81f9a0c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f9a13:	00 
 81f9a14:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f9a1b:	00 
 81f9a1c:	c7 44 24 04 2d 00 00 	movl   $0x2d,0x4(%esp)
 81f9a23:	00 
 81f9a24:	8b 45 18             	mov    0x18(%ebp),%eax
 81f9a27:	89 04 24             	mov    %eax,(%esp)
 81f9a2a:	e8 61 89 f2 ff       	call   8122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>
 81f9a2f:	8d 85 ca fe ff ff    	lea    -0x136(%ebp),%eax
 81f9a35:	89 04 24             	mov    %eax,(%esp)
 81f9a38:	e8 17 1e ed ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81f9a3d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f9a44:	00 
 81f9a45:	8d 45 90             	lea    -0x70(%ebp),%eax
 81f9a48:	89 04 24             	mov    %eax,(%esp)
 81f9a4b:	e8 d0 1e ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f9a50:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f9a53:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f9a57:	8d 45 90             	lea    -0x70(%ebp),%eax
 81f9a5a:	89 04 24             	mov    %eax,(%esp)
 81f9a5d:	e8 42 04 ee ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81f9a62:	8b 45 10             	mov    0x10(%ebp),%eax
 81f9a65:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f9a69:	8d 45 90             	lea    -0x70(%ebp),%eax
 81f9a6c:	89 04 24             	mov    %eax,(%esp)
 81f9a6f:	e8 ac 1e ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f9a74:	8d 45 90             	lea    -0x70(%ebp),%eax
 81f9a77:	89 04 24             	mov    %eax,(%esp)
 81f9a7a:	e8 cd 70 f1 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 81f9a7f:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 81f9a85:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f9a8c:	00 
 81f9a8d:	8d 45 90             	lea    -0x70(%ebp),%eax
 81f9a90:	89 04 24             	mov    %eax,(%esp)
 81f9a93:	e8 88 1e ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f9a98:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 81f9a9f:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 81f9aa6:	e9 cc 03 00 00       	jmp    81f9e77 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0xbad>
 81f9aab:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81f9aae:	8b 84 85 78 ff ff ff 	mov    -0x88(%ebp,%eax,4),%eax
 81f9ab5:	85 c0                	test   %eax,%eax
 81f9ab7:	0f 84 b2 03 00 00    	je     81f9e6f <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0xba5>
 81f9abd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81f9ac0:	8b 84 85 78 ff ff ff 	mov    -0x88(%ebp,%eax,4),%eax
 81f9ac7:	89 04 24             	mov    %eax,(%esp)
 81f9aca:	e8 2b 78 ef ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 81f9acf:	84 c0                	test   %al,%al
 81f9ad1:	0f 84 8e 00 00 00    	je     81f9b65 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x89b>
 81f9ad7:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81f9ada:	8d 95 99 fd ff ff    	lea    -0x267(%ebp),%edx
 81f9ae0:	6b c0 3d             	imul   $0x3d,%eax,%eax
 81f9ae3:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81f9ae6:	89 04 24             	mov    %eax,(%esp)
 81f9ae9:	e8 4c dd ef ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 81f9aee:	3d e7 03 00 00       	cmp    $0x3e7,%eax
 81f9af3:	0f 9f c0             	setg   %al
 81f9af6:	84 c0                	test   %al,%al
 81f9af8:	74 6b                	je     81f9b65 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x89b>
 81f9afa:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81f9afd:	8d 95 99 fd ff ff    	lea    -0x267(%ebp),%edx
 81f9b03:	6b c0 3d             	imul   $0x3d,%eax,%eax
 81f9b06:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81f9b09:	89 04 24             	mov    %eax,(%esp)
 81f9b0c:	e8 29 dd ef ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 81f9b11:	89 c3                	mov    %eax,%ebx
 81f9b13:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81f9b16:	6b c0 3d             	imul   $0x3d,%eax,%eax
 81f9b19:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81f9b1c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81f9b1f:	2d 4f 02 00 00       	sub    $0x24f,%eax
 81f9b24:	8b 70 02             	mov    0x2(%eax),%esi
 81f9b27:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81f9b2e:	00 
 81f9b2f:	c7 44 24 08 67 88 00 	movl   $0x8867,0x8(%esp)
 81f9b36:	00 
 81f9b37:	c7 44 24 04 20 fd bc 	movl   $0x8bcfd20,0x4(%esp)
 81f9b3e:	08 
 81f9b3f:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81f9b42:	89 04 24             	mov    %eax,(%esp)
 81f9b45:	e8 ce 5b 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81f9b4a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81f9b4e:	89 74 24 08          	mov    %esi,0x8(%esp)
 81f9b52:	c7 44 24 04 3c 23 bc 	movl   $0x8bc233c,0x4(%esp)
 81f9b59:	08 
 81f9b5a:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81f9b5d:	89 04 24             	mov    %eax,(%esp)
 81f9b60:	e8 23 5c 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81f9b65:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 81f9b68:	8b 45 08             	mov    0x8(%ebp),%eax
 81f9b6b:	89 04 24             	mov    %eax,(%esp)
 81f9b6e:	e8 1b 07 ee ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81f9b73:	89 c2                	mov    %eax,%edx
 81f9b75:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 81f9b7c:	00 
 81f9b7d:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 81f9b84:	00 
 81f9b85:	c7 44 24 44 0a 00 00 	movl   $0xa,0x44(%esp)
 81f9b8c:	00 
 81f9b8d:	6b c3 3d             	imul   $0x3d,%ebx,%eax
 81f9b90:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 81f9b93:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81f9b96:	2d 4f 02 00 00       	sub    $0x24f,%eax
 81f9b9b:	8b 08                	mov    (%eax),%ecx
 81f9b9d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81f9ba1:	8b 48 04             	mov    0x4(%eax),%ecx
 81f9ba4:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81f9ba8:	8b 48 08             	mov    0x8(%eax),%ecx
 81f9bab:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81f9baf:	8b 48 0c             	mov    0xc(%eax),%ecx
 81f9bb2:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81f9bb6:	8b 48 10             	mov    0x10(%eax),%ecx
 81f9bb9:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 81f9bbd:	8b 48 14             	mov    0x14(%eax),%ecx
 81f9bc0:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 81f9bc4:	8b 48 18             	mov    0x18(%eax),%ecx
 81f9bc7:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 81f9bcb:	8b 48 1c             	mov    0x1c(%eax),%ecx
 81f9bce:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 81f9bd2:	8b 48 20             	mov    0x20(%eax),%ecx
 81f9bd5:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 81f9bd9:	8b 48 24             	mov    0x24(%eax),%ecx
 81f9bdc:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 81f9be0:	8b 48 28             	mov    0x28(%eax),%ecx
 81f9be3:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 81f9be7:	8b 48 2c             	mov    0x2c(%eax),%ecx
 81f9bea:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 81f9bee:	8b 48 30             	mov    0x30(%eax),%ecx
 81f9bf1:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 81f9bf5:	8b 48 34             	mov    0x34(%eax),%ecx
 81f9bf8:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 81f9bfc:	8b 48 38             	mov    0x38(%eax),%ecx
 81f9bff:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 81f9c03:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 81f9c07:	88 44 24 40          	mov    %al,0x40(%esp)
 81f9c0b:	89 14 24             	mov    %edx,(%esp)
 81f9c0e:	e8 73 91 30 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 81f9c13:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81f9c16:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 81f9c1a:	0f 88 52 02 00 00    	js     81f9e72 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0xba8>
 81f9c20:	8b 45 08             	mov    0x8(%ebp),%eax
 81f9c23:	89 04 24             	mov    %eax,(%esp)
 81f9c26:	e8 53 06 ee ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81f9c2b:	8b 55 cc             	mov    -0x34(%ebp),%edx
 81f9c2e:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f9c32:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f9c39:	00 
 81f9c3a:	89 04 24             	mov    %eax,(%esp)
 81f9c3d:	e8 9c 25 30 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 81f9c42:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81f9c45:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81f9c49:	74 76                	je     81f9cc1 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x9f7>
 81f9c4b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81f9c4e:	8b 50 02             	mov    0x2(%eax),%edx
 81f9c51:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81f9c54:	6b c0 3d             	imul   $0x3d,%eax,%eax
 81f9c57:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 81f9c5a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81f9c5d:	2d 4f 02 00 00       	sub    $0x24f,%eax
 81f9c62:	8b 40 02             	mov    0x2(%eax),%eax
 81f9c65:	39 c2                	cmp    %eax,%edx
 81f9c67:	74 58                	je     81f9cc1 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x9f7>
 81f9c69:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81f9c6c:	6b c0 3d             	imul   $0x3d,%eax,%eax
 81f9c6f:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81f9c72:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81f9c75:	2d 4f 02 00 00       	sub    $0x24f,%eax
 81f9c7a:	8b 70 02             	mov    0x2(%eax),%esi
 81f9c7d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81f9c80:	8b 58 02             	mov    0x2(%eax),%ebx
 81f9c83:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f9c8a:	00 
 81f9c8b:	c7 44 24 08 8a 88 00 	movl   $0x888a,0x8(%esp)
 81f9c92:	00 
 81f9c93:	c7 44 24 04 20 fd bc 	movl   $0x8bcfd20,0x4(%esp)
 81f9c9a:	08 
 81f9c9b:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81f9c9e:	89 04 24             	mov    %eax,(%esp)
 81f9ca1:	e8 72 5a 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81f9ca6:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81f9caa:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81f9cae:	c7 44 24 04 7c 23 bc 	movl   $0x8bc237c,0x4(%esp)
 81f9cb5:	08 
 81f9cb6:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81f9cb9:	89 04 24             	mov    %eax,(%esp)
 81f9cbc:	e8 c7 5a 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81f9cc1:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81f9cc4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f9cc8:	8d 45 90             	lea    -0x70(%ebp),%eax
 81f9ccb:	89 04 24             	mov    %eax,(%esp)
 81f9cce:	e8 d1 01 ee ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81f9cd3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81f9cd6:	6b c0 3d             	imul   $0x3d,%eax,%eax
 81f9cd9:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 81f9cdc:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81f9cdf:	2d 4f 02 00 00       	sub    $0x24f,%eax
 81f9ce4:	8b 40 02             	mov    0x2(%eax),%eax
 81f9ce7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f9ceb:	8d 45 90             	lea    -0x70(%ebp),%eax
 81f9cee:	89 04 24             	mov    %eax,(%esp)
 81f9cf1:	e8 46 1c ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f9cf6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81f9cf9:	6b c0 3d             	imul   $0x3d,%eax,%eax
 81f9cfc:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81f9cff:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81f9d02:	2d 4f 02 00 00       	sub    $0x24f,%eax
 81f9d07:	8b 40 07             	mov    0x7(%eax),%eax
 81f9d0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f9d0e:	8d 45 90             	lea    -0x70(%ebp),%eax
 81f9d11:	89 04 24             	mov    %eax,(%esp)
 81f9d14:	e8 23 1c ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f9d19:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 81f9d20:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 81f9d24:	74 68                	je     81f9d8e <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0xac4>
 81f9d26:	8b 45 18             	mov    0x18(%ebp),%eax
 81f9d29:	89 04 24             	mov    %eax,(%esp)
 81f9d2c:	e8 a3 5b 03 00       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 81f9d31:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81f9d34:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81f9d38:	0f 84 9e 00 00 00    	je     81f9ddc <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0xb12>
 81f9d3e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81f9d41:	6b c0 3d             	imul   $0x3d,%eax,%eax
 81f9d44:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 81f9d47:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81f9d4a:	2d 4f 02 00 00       	sub    $0x24f,%eax
 81f9d4f:	8b 70 07             	mov    0x7(%eax),%esi
 81f9d52:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81f9d55:	6b c0 3d             	imul   $0x3d,%eax,%eax
 81f9d58:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81f9d5b:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81f9d5e:	2d 4f 02 00 00       	sub    $0x24f,%eax
 81f9d63:	8b 40 02             	mov    0x2(%eax),%eax
 81f9d66:	89 c3                	mov    %eax,%ebx
 81f9d68:	e8 e3 40 41 00       	call   860de50 <_Z24GetInstanceCubeStatisticv>
 81f9d6d:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 81f9d74:	00 
 81f9d75:	8b 55 08             	mov    0x8(%ebp),%edx
 81f9d78:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f9d7c:	89 74 24 08          	mov    %esi,0x8(%esp)
 81f9d80:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f9d84:	89 04 24             	mov    %eax,(%esp)
 81f9d87:	e8 2c 42 41 00       	call   860dfb8 <_ZN14CCubeStatistic21collectCubeStatisticsEiiP5CUser20CUBE_STATISTIC_FIELD>
 81f9d8c:	eb 4e                	jmp    81f9ddc <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0xb12>
 81f9d8e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81f9d91:	6b c0 3d             	imul   $0x3d,%eax,%eax
 81f9d94:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 81f9d97:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81f9d9a:	2d 4f 02 00 00       	sub    $0x24f,%eax
 81f9d9f:	8b 70 07             	mov    0x7(%eax),%esi
 81f9da2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81f9da5:	6b c0 3d             	imul   $0x3d,%eax,%eax
 81f9da8:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81f9dab:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81f9dae:	2d 4f 02 00 00       	sub    $0x24f,%eax
 81f9db3:	8b 40 02             	mov    0x2(%eax),%eax
 81f9db6:	89 c3                	mov    %eax,%ebx
 81f9db8:	e8 93 40 41 00       	call   860de50 <_Z24GetInstanceCubeStatisticv>
 81f9dbd:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f9dc4:	00 
 81f9dc5:	8b 55 08             	mov    0x8(%ebp),%edx
 81f9dc8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f9dcc:	89 74 24 08          	mov    %esi,0x8(%esp)
 81f9dd0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f9dd4:	89 04 24             	mov    %eax,(%esp)
 81f9dd7:	e8 dc 41 41 00       	call   860dfb8 <_ZN14CCubeStatistic21collectCubeStatisticsEiiP5CUser20CUBE_STATISTIC_FIELD>
 81f9ddc:	c7 85 6c ff ff ff 00 	movl   $0x0,-0x94(%ebp)
 81f9de3:	00 00 00 
 81f9de6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81f9de9:	6b c0 3d             	imul   $0x3d,%eax,%eax
 81f9dec:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 81f9def:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81f9df2:	2d 4f 02 00 00       	sub    $0x24f,%eax
 81f9df7:	8b 40 07             	mov    0x7(%eax),%eax
 81f9dfa:	0f bf f0             	movswl %ax,%esi
 81f9dfd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81f9e00:	8b 9c 85 78 ff ff ff 	mov    -0x88(%ebp,%eax,4),%ebx
 81f9e07:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81f9e0a:	8d 95 99 fd ff ff    	lea    -0x267(%ebp),%edx
 81f9e10:	6b c0 3d             	imul   $0x3d,%eax,%eax
 81f9e13:	8d 3c 02             	lea    (%edx,%eax,1),%edi
 81f9e16:	e8 c2 7c f5 ff       	call   8151add <_Z7G_Storev>
 81f9e1b:	8d 95 6c ff ff ff    	lea    -0x94(%ebp),%edx
 81f9e21:	89 54 24 14          	mov    %edx,0x14(%esp)
 81f9e25:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f9e2c:	00 
 81f9e2d:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81f9e31:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81f9e35:	89 7c 24 04          	mov    %edi,0x4(%esp)
 81f9e39:	89 04 24             	mov    %eax,(%esp)
 81f9e3c:	e8 5f f0 41 00       	call   8618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>
 81f9e41:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 81f9e47:	89 c3                	mov    %eax,%ebx
 81f9e49:	e8 a1 37 41 00       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 81f9e4e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81f9e52:	8b 55 08             	mov    0x8(%ebp),%edx
 81f9e55:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f9e59:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 81f9e60:	00 
 81f9e61:	89 04 24             	mov    %eax,(%esp)
 81f9e64:	e8 19 38 41 00       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 81f9e69:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 81f9e6d:	eb 04                	jmp    81f9e73 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0xba9>
 81f9e6f:	90                   	nop
 81f9e70:	eb 01                	jmp    81f9e73 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0xba9>
 81f9e72:	90                   	nop
 81f9e73:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 81f9e77:	83 7d d8 04          	cmpl   $0x4,-0x28(%ebp)
 81f9e7b:	0f 9e c0             	setle  %al
 81f9e7e:	84 c0                	test   %al,%al
 81f9e80:	0f 85 25 fc ff ff    	jne    81f9aab <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0x7e1>
 81f9e86:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81f9e89:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f9e8d:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 81f9e93:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f9e97:	8d 45 90             	lea    -0x70(%ebp),%eax
 81f9e9a:	89 04 24             	mov    %eax,(%esp)
 81f9e9d:	e8 86 6c f1 ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 81f9ea2:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 81f9ea6:	74 19                	je     81f9ec1 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0xbf7>
 81f9ea8:	8d 45 90             	lea    -0x70(%ebp),%eax
 81f9eab:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f9eaf:	8b 45 08             	mov    0x8(%ebp),%eax
 81f9eb2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f9eb6:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81f9eb9:	89 04 24             	mov    %eax,(%esp)
 81f9ebc:	e8 df 92 3d 00       	call   85d31a0 <_ZN10expert_job11CDisjointer17complete_disjointEP5CUserR11PacketGuard>
 81f9ec1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f9ec8:	00 
 81f9ec9:	8d 45 90             	lea    -0x70(%ebp),%eax
 81f9ecc:	89 04 24             	mov    %eax,(%esp)
 81f9ecf:	e8 84 1a ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f9ed4:	8d 45 90             	lea    -0x70(%ebp),%eax
 81f9ed7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f9edb:	8b 45 08             	mov    0x8(%ebp),%eax
 81f9ede:	89 04 24             	mov    %eax,(%esp)
 81f9ee1:	e8 d4 e6 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f9ee6:	8b 85 09 ff ff ff    	mov    -0xf7(%ebp),%eax
 81f9eec:	89 c2                	mov    %eax,%edx
 81f9eee:	8b 45 08             	mov    0x8(%ebp),%eax
 81f9ef1:	8b 80 f8 96 07 00    	mov    0x796f8(%eax),%eax
 81f9ef7:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f9efb:	89 04 24             	mov    %eax,(%esp)
 81f9efe:	e8 b1 02 2c 00       	call   84ba1b4 <_ZN10HistoryLog13WriteDisJointEP8_IO_FILEi>
 81f9f03:	eb 79                	jmp    81f9f7e <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0xcb4>
 81f9f05:	83 fa 01             	cmp    $0x1,%edx
 81f9f08:	0f 85 82 00 00 00    	jne    81f9f90 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0xcc6>
 81f9f0e:	89 04 24             	mov    %eax,(%esp)
 81f9f11:	e8 ca bd 52 00       	call   8725ce0 <__cxa_begin_catch>
 81f9f16:	8b 00                	mov    (%eax),%eax
 81f9f18:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81f9f1b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f9f22:	00 
 81f9f23:	8d 45 90             	lea    -0x70(%ebp),%eax
 81f9f26:	89 04 24             	mov    %eax,(%esp)
 81f9f29:	e8 f2 19 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f9f2e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81f9f31:	0f b6 c0             	movzbl %al,%eax
 81f9f34:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f9f38:	8d 45 90             	lea    -0x70(%ebp),%eax
 81f9f3b:	89 04 24             	mov    %eax,(%esp)
 81f9f3e:	e8 dd 19 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f9f43:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f9f4a:	00 
 81f9f4b:	8d 45 90             	lea    -0x70(%ebp),%eax
 81f9f4e:	89 04 24             	mov    %eax,(%esp)
 81f9f51:	e8 02 1a ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f9f56:	8d 45 90             	lea    -0x70(%ebp),%eax
 81f9f59:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f9f5d:	8b 45 08             	mov    0x8(%ebp),%eax
 81f9f60:	89 04 24             	mov    %eax,(%esp)
 81f9f63:	e8 52 e6 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f9f68:	eb 0f                	jmp    81f9f79 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0xcaf>
 81f9f6a:	89 d3                	mov    %edx,%ebx
 81f9f6c:	89 c6                	mov    %eax,%esi
 81f9f6e:	e8 bd bc 52 00       	call   8725c30 <__cxa_end_catch>
 81f9f73:	89 f0                	mov    %esi,%eax
 81f9f75:	89 da                	mov    %ebx,%edx
 81f9f77:	eb 17                	jmp    81f9f90 <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0xcc6>
 81f9f79:	e8 b2 bc 52 00       	call   8725c30 <__cxa_end_catch>
 81f9f7e:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f9f83:	8d 45 90             	lea    -0x70(%ebp),%eax
 81f9f86:	89 04 24             	mov    %eax,(%esp)
 81f9f89:	e8 f2 3e 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f9f8e:	eb 1b                	jmp    81f9fab <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t+0xce1>
 81f9f90:	89 d3                	mov    %edx,%ebx
 81f9f92:	89 c6                	mov    %eax,%esi
 81f9f94:	8d 45 90             	lea    -0x70(%ebp),%eax
 81f9f97:	89 04 24             	mov    %eax,(%esp)
 81f9f9a:	e8 e1 3e 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f9f9f:	89 f0                	mov    %esi,%eax
 81f9fa1:	89 da                	mov    %ebx,%edx
 81f9fa3:	89 04 24             	mov    %eax,(%esp)
 81f9fa6:	e8 a5 97 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f9fab:	89 d8                	mov    %ebx,%eax
 81f9fad:	81 c4 bc 02 00 00    	add    $0x2bc,%esp
 81f9fb3:	5b                   	pop    %ebx
 81f9fb4:	5e                   	pop    %esi
 81f9fb5:	5f                   	pop    %edi
 81f9fb6:	5d                   	pop    %ebp
 81f9fb7:	c3                   	ret

```

```c
// DisPatcher_DisJointItem::_disjoint @ 0x81f92ca

/* DisPatcher_DisJointItem::_disjoint(CUser*, int, int, ENUM_CMDPACKET, CUser*, unsigned short) */

undefined4
DisPatcher_DisJointItem::_disjoint
          (CUser *param_1,int param_2,int param_3,int param_4,CUserCharacInfo *param_5,
          ushort param_6)

{
  CItem *pCVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  GameWorld *this;
  int *piVar5;
  CInventory *pCVar6;
  CDataManager *this_00;
  Store *pSVar7;
  CValueStatistic *pCVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  CCubeStatistic *pCVar12;
  Inven_Item *this_01;
  Inven_Item local_26b [7];
  undefined1 auStack_264 [5];
  undefined4 auStack_25f [12];
  undefined1 auStack_22f [245];
  Inven_Item local_13a [61];
  Inven_Item local_fd [2];
  int local_fb;
  short local_f6;
  DisJointResult local_c0 [4];
  int aiStack_bc [9];
  int local_98;
  int local_94;
  int local_90 [6];
  CItem *local_78;
  PacketGuard local_74 [12];
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  int local_48;
  CExpertJob *local_44;
  int local_40;
  char local_39;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  cVar2 = _check_disjointable_user_state(param_1,param_4,(int)(char)param_3,(int)(short)param_2);
  if (cVar2 == '\x01') {
    PacketGuard::PacketGuard(local_74);
                    /* try { // try from 081f9337 to 081f933b has its CatchHandler @ 081f9f90 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_74,1,param_4);
    local_48 = GetInvenTypeFromItemSpace(param_3);
    local_44 = (CExpertJob *)0x0;
    if (param_5 != (CUserCharacInfo *)0x0) {
      local_44 = (CExpertJob *)CUserCharacInfo::GetCurCharacExpertJob(param_5);
      if (local_44 == (CExpertJob *)0x0) {
                    /* try { // try from 081f9396 to 081f9f02 has its CatchHandler @ 081f9f05 */
        LogManager::logFormat
                  (1,"PacketDispatcher_Impl_1.cpp",
                   "static int DisPatcher_DisJointItem::_disjoint(CUser*, int, int, ENUM_CMDPACKET, CUser*, short unsigned int)"
                   ,0x87b7,"expert job null point");
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = 0x13;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
      }
      iVar4 = expert_job::CExpertJob::GetType(local_44);
      if (iVar4 != 3) {
        LogManager::logFormat
                  (1,"PacketDispatcher_Impl_1.cpp",
                   "static int DisPatcher_DisJointItem::_disjoint(CUser*, int, int, ENUM_CMDPACKET, CUser*, short unsigned int)"
                   ,0x87bd,"expert job permission error");
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = 0x13;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
      }
      (*(code *)**(undefined4 **)local_44)(local_44,param_5,param_1);
    }
    cVar2 = CUser::CheckItemLock(param_1,local_48,param_2);
    if (cVar2 != '\0') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = 0xd5;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
    }
    Inven_Item::Inven_Item(local_fd);
    local_78 = (CItem *)0x0;
    if (param_6 != 0xffff) {
      this = (GameWorld *)G_GameWorld();
      cVar2 = GameWorld::IsPVPChannel(this);
      if (cVar2 != '\0') {
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = 0x60;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
      }
    }
    _check_disjointable_item_state
              (param_1,param_2,local_48,local_fd,&local_78,(CUser *)param_5,param_6);
    _check_disjoint_need_slot(param_1,local_78,local_fd,(CDisjointer *)local_44);
    DisJointResult::DisJointResult(local_c0);
    iVar4 = local_fb;
    local_40 = 0;
    if (param_5 == (CUserCharacInfo *)0x0) {
      iVar9 = G_CDataManager();
      local_40 = DisJoint::GetResult(*(DisJoint **)(iVar9 + 0x1c),iVar4,local_c0);
    }
    else {
      local_40 = expert_job::CDisjointer::get_disjoint_result
                           ((CDisjointer *)local_44,local_78,local_fd,local_c0,param_1);
    }
    if (0 < local_40) {
      piVar5 = (int *)__cxa_allocate_exception(4);
      *piVar5 = local_40;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(piVar5,&ENUM_ERROR::typeinfo,0);
    }
    if (param_6 != 0xffff) {
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      iVar4 = CInventory::use_item(pCVar6,(uint)param_6,1,1);
      if (iVar4 != 0) {
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = 0x16;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
      }
      CUser::SendUpdateItem(param_1,1,0,param_6);
    }
    local_90[1] = 0;
    local_90[2] = 0;
    local_90[3] = 0;
    local_90[4] = 0;
    local_90[5] = 0;
    this_01 = local_26b;
    for (iVar4 = 4; iVar4 != -1; iVar4 = iVar4 + -1) {
      Inven_Item::Inven_Item(this_01);
      this_01 = this_01 + 0x3d;
    }
    for (local_30 = 0; iVar9 = local_30, iVar4 = local_48, local_30 < 5; local_30 = local_30 + 1) {
      if (aiStack_bc[local_30 + 4] != 0) {
        iVar4 = aiStack_bc[local_30 + 4];
        this_00 = (CDataManager *)G_CDataManager();
        iVar4 = CDataManager::find_item(this_00,iVar4);
        local_90[iVar9 + 1] = iVar4;
        if (local_90[local_30 + 1] != 0) {
          *(int *)(local_26b + local_30 * 0x3d + 2) = aiStack_bc[local_30 + 4];
          Inven_Item::set_add_info(local_26b + local_30 * 0x3d,*(int *)(local_c0 + local_30 * 4));
          (**(code **)(*(int *)local_90[local_30 + 1] + 8))
                    (local_90[local_30 + 1],local_26b + local_30 * 0x3d);
          iVar4 = local_30;
          uVar11 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          iVar4 = iVar4 * 0x3d;
          iVar4 = CInventory::tryInsertItemIntoInventory
                            (uVar11,*(undefined4 *)(local_26b + iVar4),
                             *(undefined4 *)(local_26b + iVar4 + 4),
                             *(undefined4 *)((int)auStack_25f + iVar4 + -4),
                             *(undefined4 *)((int)auStack_25f + iVar4),
                             *(undefined4 *)((int)auStack_25f + iVar4 + 4),
                             *(undefined4 *)((int)auStack_25f + iVar4 + 8),
                             *(undefined4 *)((int)auStack_25f + iVar4 + 0xc),
                             *(undefined4 *)((int)auStack_25f + iVar4 + 0x10),
                             *(undefined4 *)((int)auStack_25f + iVar4 + 0x14),
                             *(undefined4 *)((int)auStack_25f + iVar4 + 0x18),
                             *(undefined4 *)(auStack_22f + iVar4 + -0x14),
                             *(undefined4 *)(auStack_22f + iVar4 + -0x10),
                             *(undefined4 *)(auStack_22f + iVar4 + -0xc),
                             *(undefined4 *)(auStack_22f + iVar4 + -8),
                             *(undefined4 *)(auStack_22f + iVar4 + -4),auStack_22f[iVar4]);
          if (iVar4 == -1) {
            puVar3 = (undefined4 *)__cxa_allocate_exception(4);
            *puVar3 = 4;
                    /* WARNING: Subroutine does not return */
            __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
          }
        }
      }
    }
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_39 = CInventory::delete_item(pCVar6,iVar4,param_2,1,9,1);
    pCVar1 = local_78;
    if (local_39 != '\x01') {
      piVar5 = (int *)__cxa_allocate_exception(4);
      *piVar5 = local_40;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(piVar5,&ENUM_ERROR::typeinfo,0);
    }
    local_90[0] = 0;
    pSVar7 = (Store *)G_Store();
    Store::GetSellItemPrice(pSVar7,local_fd,pCVar1,local_f6,false,local_90);
    iVar4 = local_90[0];
    pCVar8 = (CValueStatistic *)GetInstanceValueStatistic();
    CValueStatistic::AddValueStatistic(pCVar8,0x13,param_1,iVar4);
    if (param_5 == (CUserCharacInfo *)0x0) {
      APSystem::CUserProc::ClearActionAndSendtoUser(param_1,7,0,0);
    }
    else if ((param_5 != (CUserCharacInfo *)0x0) && (param_1 != (CUser *)0x0)) {
      iVar4 = CUser::get_charac_no(param_1,-1);
      iVar9 = CUser::get_charac_no((CUser *)param_5,-1);
      if (iVar4 == iVar9) {
        APSystem::CUserProc::ClearActionAndSendtoUser(param_1,0x20,0,0);
      }
      else {
        APSystem::CUserProc::ClearActionAndSendtoUser(param_5,0x2d,0,0);
      }
    }
    Inven_Item::Inven_Item(local_13a);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_74,param_2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,param_3);
    local_94 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_74);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,0);
    local_34 = 0;
    for (local_2c = 0; local_2c < 5; local_2c = local_2c + 1) {
      if (local_90[local_2c + 1] != 0) {
        cVar2 = CItem::is_stackable((CItem *)local_90[local_2c + 1]);
        if ((cVar2 != '\0') &&
           (iVar4 = Inven_Item::get_add_info(local_26b + local_2c * 0x3d), 999 < iVar4)) {
          uVar10 = Inven_Item::get_add_info(local_26b + local_2c * 0x3d);
          uVar11 = *(undefined4 *)(local_26b + local_2c * 0x3d + 2);
          cMyTrace::cMyTrace(local_68,
                             "static int DisPatcher_DisJointItem::_disjoint(CUser*, int, int, ENUM_CMDPACKET, CUser*, short unsigned int)"
                             ,0x8867,5);
          cMyTrace::operator()
                    (local_68,"DisPatcher_DisJointItem::dispatch_sig, out_item , ITEM #%d, %d",
                     uVar11,uVar10);
        }
        iVar4 = local_2c;
        uVar11 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        iVar4 = iVar4 * 0x3d;
        local_38 = CInventory::insertItemIntoInventory
                             (uVar11,*(undefined4 *)(local_26b + iVar4),
                              *(undefined4 *)(local_26b + iVar4 + 4),
                              *(undefined4 *)((int)auStack_25f + iVar4 + -4),
                              *(undefined4 *)((int)auStack_25f + iVar4),
                              *(undefined4 *)((int)auStack_25f + iVar4 + 4),
                              *(undefined4 *)((int)auStack_25f + iVar4 + 8),
                              *(undefined4 *)((int)auStack_25f + iVar4 + 0xc),
                              *(undefined4 *)((int)auStack_25f + iVar4 + 0x10),
                              *(undefined4 *)((int)auStack_25f + iVar4 + 0x14),
                              *(undefined4 *)((int)auStack_25f + iVar4 + 0x18),
                              *(undefined4 *)(auStack_22f + iVar4 + -0x14),
                              *(undefined4 *)(auStack_22f + iVar4 + -0x10),
                              *(undefined4 *)(auStack_22f + iVar4 + -0xc),
                              *(undefined4 *)(auStack_22f + iVar4 + -8),
                              *(undefined4 *)(auStack_22f + iVar4 + -4),auStack_22f[iVar4],10,1,0);
        if (-1 < local_38) {
          pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          local_28 = CInventory::GetInvenRef(pCVar6,1,local_38);
          if ((local_28 != 0) &&
             (*(int *)(local_28 + 2) != *(int *)(local_26b + local_2c * 0x3d + 2))) {
            uVar11 = *(undefined4 *)(local_26b + local_2c * 0x3d + 2);
            uVar10 = *(undefined4 *)(local_28 + 2);
            cMyTrace::cMyTrace(local_58,
                               "static int DisPatcher_DisJointItem::_disjoint(CUser*, int, int, ENUM_CMDPACKET, CUser*, short unsigned int)"
                               ,0x888a,0);
            cMyTrace::operator()
                      (local_58,"ENUM_CMDPACKET_DISJOINT_ITEM error item_id mismatch %d, %d",uVar10,
                       uVar11);
          }
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_74,local_38);
          InterfacePacketBuf::put_int
                    ((InterfacePacketBuf *)local_74,*(int *)(local_26b + local_2c * 0x3d + 2));
          InterfacePacketBuf::put_int
                    ((InterfacePacketBuf *)local_74,
                     *(int *)((int)auStack_25f + local_2c * 0x3d + -5));
          local_24 = 0;
          if (param_5 == (CUserCharacInfo *)0x0) {
            uVar11 = *(undefined4 *)((int)auStack_25f + local_2c * 0x3d + -5);
            uVar10 = *(undefined4 *)(local_26b + local_2c * 0x3d + 2);
            pCVar12 = (CCubeStatistic *)GetInstanceCubeStatistic();
            CCubeStatistic::collectCubeStatistics(pCVar12,uVar10,uVar11,param_1,0);
          }
          else {
            local_24 = CUserCharacInfo::GetCurCharacExpertJob(param_5);
            if (local_24 != 0) {
              uVar11 = *(undefined4 *)((int)auStack_25f + local_2c * 0x3d + -5);
              uVar10 = *(undefined4 *)(local_26b + local_2c * 0x3d + 2);
              pCVar12 = (CCubeStatistic *)GetInstanceCubeStatistic();
              CCubeStatistic::collectCubeStatistics(pCVar12,uVar10,uVar11,param_1,2);
            }
          }
          local_98 = 0;
          uVar11 = *(undefined4 *)((int)auStack_25f + local_2c * 0x3d + -5);
          pCVar1 = (CItem *)local_90[local_2c + 1];
          iVar4 = local_2c * 0x3d;
          pSVar7 = (Store *)G_Store();
          Store::GetSellItemPrice(pSVar7,local_26b + iVar4,pCVar1,(short)uVar11,false,&local_98);
          iVar4 = local_98;
          pCVar8 = (CValueStatistic *)GetInstanceValueStatistic();
          CValueStatistic::AddValueStatistic(pCVar8,8,param_1,iVar4);
          local_34 = local_34 + 1;
        }
      }
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,&local_94,local_34);
    if (param_5 != (CUserCharacInfo *)0x0) {
      expert_job::CDisjointer::complete_disjoint((CDisjointer *)local_44,param_1,local_74);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_74,true);
    CUser::Send(param_1,local_74);
    HistoryLog::WriteDisJoint(*(_IO_FILE **)(param_1 + 0x796f8),local_fb);
    PacketGuard::~PacketGuard(local_74);
  }
  return 0;
}

```

---

## dispatch_sig

```asm
// === 081f9fb8 DisPatcher_DisJointItem::dispatch_sig  [0x081f9fb8-0x81fa0f5] ===
 81f9fb8:	55                   	push   %ebp
 81f9fb9:	89 e5                	mov    %esp,%ebp
 81f9fbb:	83 ec 48             	sub    $0x48,%esp
 81f9fbe:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81f9fc2:	74 0f                	je     81f9fd3 <_ZN23DisPatcher_DisJointItem12dispatch_sigEP5CUserR9PacketBuf+0x1b>
 81f9fc4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f9fc7:	89 04 24             	mov    %eax,(%esp)
 81f9fca:	e8 2f 03 ee ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 81f9fcf:	84 c0                	test   %al,%al
 81f9fd1:	74 07                	je     81f9fda <_ZN23DisPatcher_DisJointItem12dispatch_sigEP5CUserR9PacketBuf+0x22>
 81f9fd3:	b8 01 00 00 00       	mov    $0x1,%eax
 81f9fd8:	eb 05                	jmp    81f9fdf <_ZN23DisPatcher_DisJointItem12dispatch_sigEP5CUserR9PacketBuf+0x27>
 81f9fda:	b8 00 00 00 00       	mov    $0x0,%eax
 81f9fdf:	84 c0                	test   %al,%al
 81f9fe1:	74 0a                	je     81f9fed <_ZN23DisPatcher_DisJointItem12dispatch_sigEP5CUserR9PacketBuf+0x35>
 81f9fe3:	b8 00 00 00 00       	mov    $0x0,%eax
 81f9fe8:	e9 07 01 00 00       	jmp    81fa0f4 <_ZN23DisPatcher_DisJointItem12dispatch_sigEP5CUserR9PacketBuf+0x13c>
 81f9fed:	8d 45 e9             	lea    -0x17(%ebp),%eax
 81f9ff0:	83 c0 0d             	add    $0xd,%eax
 81f9ff3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f9ff7:	8b 45 10             	mov    0x10(%ebp),%eax
 81f9ffa:	89 04 24             	mov    %eax,(%esp)
 81f9ffd:	e8 be 2f 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81fa002:	83 f0 01             	xor    $0x1,%eax
 81fa005:	84 c0                	test   %al,%al
 81fa007:	74 29                	je     81fa032 <_ZN23DisPatcher_DisJointItem12dispatch_sigEP5CUserR9PacketBuf+0x7a>
 81fa009:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fa010:	00 
 81fa011:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fa018:	00 
 81fa019:	c7 44 24 04 c0 fc bc 	movl   $0x8bcfcc0,0x4(%esp)
 81fa020:	08 
 81fa021:	c7 04 24 d0 88 00 00 	movl   $0x88d0,(%esp)
 81fa028:	e8 aa 68 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fa02d:	e9 c2 00 00 00       	jmp    81fa0f4 <_ZN23DisPatcher_DisJointItem12dispatch_sigEP5CUserR9PacketBuf+0x13c>
 81fa032:	c6 45 e8 00          	movb   $0x0,-0x18(%ebp)
 81fa036:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81fa039:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa03d:	8b 45 10             	mov    0x10(%ebp),%eax
 81fa040:	89 04 24             	mov    %eax,(%esp)
 81fa043:	e8 da 2e 39 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81fa048:	83 f0 01             	xor    $0x1,%eax
 81fa04b:	84 c0                	test   %al,%al
 81fa04d:	74 26                	je     81fa075 <_ZN23DisPatcher_DisJointItem12dispatch_sigEP5CUserR9PacketBuf+0xbd>
 81fa04f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fa056:	00 
 81fa057:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fa05e:	00 
 81fa05f:	c7 44 24 04 c0 fc bc 	movl   $0x8bcfcc0,0x4(%esp)
 81fa066:	08 
 81fa067:	c7 04 24 d2 88 00 00 	movl   $0x88d2,(%esp)
 81fa06e:	e8 64 68 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fa073:	eb 7f                	jmp    81fa0f4 <_ZN23DisPatcher_DisJointItem12dispatch_sigEP5CUserR9PacketBuf+0x13c>
 81fa075:	66 c7 45 e6 ff ff    	movw   $0xffff,-0x1a(%ebp)
 81fa07b:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 81fa07e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa082:	8b 45 10             	mov    0x10(%ebp),%eax
 81fa085:	89 04 24             	mov    %eax,(%esp)
 81fa088:	e8 23 30 39 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81fa08d:	83 f0 01             	xor    $0x1,%eax
 81fa090:	84 c0                	test   %al,%al
 81fa092:	74 26                	je     81fa0ba <_ZN23DisPatcher_DisJointItem12dispatch_sigEP5CUserR9PacketBuf+0x102>
 81fa094:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fa09b:	00 
 81fa09c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fa0a3:	00 
 81fa0a4:	c7 44 24 04 c0 fc bc 	movl   $0x8bcfcc0,0x4(%esp)
 81fa0ab:	08 
 81fa0ac:	c7 04 24 d6 88 00 00 	movl   $0x88d6,(%esp)
 81fa0b3:	e8 1f 68 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fa0b8:	eb 3a                	jmp    81fa0f4 <_ZN23DisPatcher_DisJointItem12dispatch_sigEP5CUserR9PacketBuf+0x13c>
 81fa0ba:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 81fa0be:	0f b7 c8             	movzwl %ax,%ecx
 81fa0c1:	0f b6 45 e8          	movzbl -0x18(%ebp),%eax
 81fa0c5:	0f be d0             	movsbl %al,%edx
 81fa0c8:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
 81fa0cc:	98                   	cwtl
 81fa0cd:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 81fa0d1:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81fa0d8:	00 
 81fa0d9:	c7 44 24 0c 1c 00 00 	movl   $0x1c,0xc(%esp)
 81fa0e0:	00 
 81fa0e1:	89 54 24 08          	mov    %edx,0x8(%esp)
 81fa0e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa0e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fa0ec:	89 04 24             	mov    %eax,(%esp)
 81fa0ef:	e8 d6 f1 ff ff       	call   81f92ca <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t>
 81fa0f4:	c9                   	leave
 81fa0f5:	c3                   	ret

```

```c
// DisPatcher_DisJointItem::dispatch_sig @ 0x81f9fb8

/* DisPatcher_DisJointItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_DisJointItem::dispatch_sig
          (DisPatcher_DisJointItem *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  ushort local_1e;
  char local_1c [14];
  short local_e [5];
  
  if (param_1 != (CUser *)0x0) {
    cVar2 = CUser::CheckInTrade(param_1);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_081f9fdf;
    }
  }
  bVar1 = true;
LAB_081f9fdf:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    cVar2 = PacketBuf::get_short(param_2,local_e);
    if (cVar2 == '\x01') {
      local_1c[0] = '\0';
      cVar2 = PacketBuf::get_byte(param_2,local_1c);
      if (cVar2 == '\x01') {
        local_1e = 0xffff;
        cVar2 = PacketBuf::get_short(param_2,&local_1e);
        if (cVar2 == '\x01') {
          uVar3 = _disjoint(param_1,(int)local_e[0],(int)local_1c[0],0x1c,0,local_1e);
        }
        else {
          uVar3 = LineFunc(0x88d6,
                           "virtual int DisPatcher_DisJointItem::dispatch_sig(CUser*, PacketBuf&)",0
                           ,0);
        }
      }
      else {
        uVar3 = LineFunc(0x88d2,
                         "virtual int DisPatcher_DisJointItem::dispatch_sig(CUser*, PacketBuf&)",0,0
                        );
      }
    }
    else {
      uVar3 = LineFunc(0x88d0,
                       "virtual int DisPatcher_DisJointItem::dispatch_sig(CUser*, PacketBuf&)",0,0);
    }
  }
  return uVar3;
}

```

