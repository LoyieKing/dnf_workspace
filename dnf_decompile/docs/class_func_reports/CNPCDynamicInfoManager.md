# CNPCDynamicInfoManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## add

```asm
// === 08580668 CNPCDynamicInfoManager::add  [0x08580668-0x8580721] ===
 8580668:	55                   	push   %ebp
 8580669:	89 e5                	mov    %esp,%ebp
 858066b:	53                   	push   %ebx
 858066c:	83 ec 34             	sub    $0x34,%esp
 858066f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8580672:	89 04 24             	mov    %eax,(%esp)
 8580675:	e8 32 13 00 00       	call   85819ac <_ZNK10CNPCScript8getIndexEv>
 858067a:	89 44 24 04          	mov    %eax,0x4(%esp)
 858067e:	8b 45 08             	mov    0x8(%ebp),%eax
 8580681:	89 04 24             	mov    %eax,(%esp)
 8580684:	e8 bf 12 00 00       	call   8581948 <_ZN22CNPCDynamicInfoManager10getNPCInfoEj>
 8580689:	85 c0                	test   %eax,%eax
 858068b:	0f 95 c0             	setne  %al
 858068e:	84 c0                	test   %al,%al
 8580690:	74 0a                	je     858069c <_ZN22CNPCDynamicInfoManager3addEPK10CNPCScript+0x34>
 8580692:	b8 00 00 00 00       	mov    $0x0,%eax
 8580697:	e9 81 00 00 00       	jmp    858071d <_ZN22CNPCDynamicInfoManager3addEPK10CNPCScript+0xb5>
 858069c:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 85806a3:	e8 a8 3d 1a 00       	call   8724450 <_Znwj>
 85806a8:	89 c3                	mov    %eax,%ebx
 85806aa:	89 d8                	mov    %ebx,%eax
 85806ac:	8b 55 0c             	mov    0xc(%ebp),%edx
 85806af:	89 54 24 04          	mov    %edx,0x4(%esp)
 85806b3:	89 04 24             	mov    %eax,(%esp)
 85806b6:	e8 61 12 00 00       	call   858191c <_ZN15CNPCDynamicInfoC1EPK10CNPCScript>
 85806bb:	89 d8                	mov    %ebx,%eax
 85806bd:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85806c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85806c3:	89 04 24             	mov    %eax,(%esp)
 85806c6:	e8 e1 12 00 00       	call   85819ac <_ZNK10CNPCScript8getIndexEv>
 85806cb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85806ce:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85806d1:	8d 55 d8             	lea    -0x28(%ebp),%edx
 85806d4:	89 54 24 08          	mov    %edx,0x8(%esp)
 85806d8:	8d 55 f4             	lea    -0xc(%ebp),%edx
 85806db:	89 54 24 04          	mov    %edx,0x4(%esp)
 85806df:	89 04 24             	mov    %eax,(%esp)
 85806e2:	e8 47 22 00 00       	call   858292e <_ZSt9make_pairIjRP15CNPCDynamicInfoESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 85806e7:	83 ec 04             	sub    $0x4,%esp
 85806ea:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85806ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 85806f1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85806f4:	89 04 24             	mov    %eax,(%esp)
 85806f7:	e8 78 22 00 00       	call   8582974 <_ZNSt4pairIKjP15CNPCDynamicInfoEC1IjS2_EEOS_IT_T0_E>
 85806fc:	8b 55 08             	mov    0x8(%ebp),%edx
 85806ff:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8580702:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 8580705:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8580709:	89 54 24 04          	mov    %edx,0x4(%esp)
 858070d:	89 04 24             	mov    %eax,(%esp)
 8580710:	e8 8f 22 00 00       	call   85829a4 <_ZNSt3mapIjP15CNPCDynamicInfoSt4lessIjESaISt4pairIKjS1_EEE6insertERKS6_>
 8580715:	83 ec 04             	sub    $0x4,%esp
 8580718:	b8 01 00 00 00       	mov    $0x1,%eax
 858071d:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8580720:	c9                   	leave
 8580721:	c3                   	ret

```

```c
// CNPCDynamicInfoManager::add @ 0x8580668

/* CNPCDynamicInfoManager::add(CNPCScript const*) */

bool __thiscall CNPCDynamicInfoManager::add(CNPCDynamicInfoManager *this,CNPCScript *param_1)

{
  int iVar1;
  CNPCDynamicInfo *this_00;
  pair local_28 [8];
  pair<unsigned_int_const,CNPCDynamicInfo*> local_20 [8];
  uint local_18 [2];
  CNPCDynamicInfo *local_10 [2];
  
  CNPCScript::getIndex(param_1);
  iVar1 = getNPCInfo((uint)this);
  if (iVar1 == 0) {
    this_00 = operator_new(0x10);
    CNPCDynamicInfo::CNPCDynamicInfo(this_00,param_1);
    local_10[0] = (CNPCDynamicInfo *)CNPCScript::getIndex(param_1);
    std::make_pair<unsigned_int,CNPCDynamicInfo*&>(local_18,local_10);
    std::pair<unsigned_int_const,CNPCDynamicInfo*>::pair<unsigned_int,CNPCDynamicInfo*>
              (local_20,(pair *)local_18);
    std::
    map<unsigned_int,CNPCDynamicInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>>
    ::insert(local_28);
  }
  return iVar1 == 0;
}

```

---

## makeNotiPacketNPCMood

```asm
// === 085808a6 CNPCDynamicInfoManager::makeNotiPacketNPCMood  [0x085808a6-0x85809a5] ===
 85808a6:	55                   	push   %ebp
 85808a7:	89 e5                	mov    %esp,%ebp
 85808a9:	83 ec 38             	sub    $0x38,%esp
 85808ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 85808af:	c7 44 24 08 c3 00 00 	movl   $0xc3,0x8(%esp)
 85808b6:	00 
 85808b7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85808be:	00 
 85808bf:	89 04 24             	mov    %eax,(%esp)
 85808c2:	e8 35 b0 b4 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85808c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85808ca:	89 04 24             	mov    %eax,(%esp)
 85808cd:	e8 7a 02 b9 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 85808d2:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85808d5:	66 c7 45 f2 00 00    	movw   $0x0,-0xe(%ebp)
 85808db:	8b 45 0c             	mov    0xc(%ebp),%eax
 85808de:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85808e5:	00 
 85808e6:	89 04 24             	mov    %eax,(%esp)
 85808e9:	e8 b6 95 b5 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85808ee:	8b 55 08             	mov    0x8(%ebp),%edx
 85808f1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85808f4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85808f8:	89 04 24             	mov    %eax,(%esp)
 85808fb:	e8 28 21 00 00       	call   8582a28 <_ZNKSt3mapIjP15CNPCDynamicInfoSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 8580900:	83 ec 04             	sub    $0x4,%esp
 8580903:	8b 55 08             	mov    0x8(%ebp),%edx
 8580906:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8580909:	89 54 24 04          	mov    %edx,0x4(%esp)
 858090d:	89 04 24             	mov    %eax,(%esp)
 8580910:	e8 39 21 00 00       	call   8582a4e <_ZNKSt3mapIjP15CNPCDynamicInfoSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 8580915:	83 ec 04             	sub    $0x4,%esp
 8580918:	eb 46                	jmp    8580960 <_ZNK22CNPCDynamicInfoManager21makeNotiPacketNPCMoodER11PacketGuard+0xba>
 858091a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 858091d:	89 04 24             	mov    %eax,(%esp)
 8580920:	e8 81 21 00 00       	call   8582aa6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP15CNPCDynamicInfoEEptEv>
 8580925:	8b 40 04             	mov    0x4(%eax),%eax
 8580928:	89 04 24             	mov    %eax,(%esp)
 858092b:	e8 e0 0f 00 00       	call   8581910 <_ZNK15CNPCDynamicInfo7getMoodEv>
 8580930:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8580933:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8580936:	89 04 24             	mov    %eax,(%esp)
 8580939:	e8 68 21 00 00       	call   8582aa6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP15CNPCDynamicInfoEEptEv>
 858093e:	8b 40 04             	mov    0x4(%eax),%eax
 8580941:	8b 55 0c             	mov    0xc(%ebp),%edx
 8580944:	89 54 24 04          	mov    %edx,0x4(%esp)
 8580948:	89 04 24             	mov    %eax,(%esp)
 858094b:	e8 d4 fc ff ff       	call   8580624 <_ZNK15CNPCDynamicInfo21makeNotiPacketCurMoodER11PacketGuard>
 8580950:	66 83 45 f2 01       	addw   $0x1,-0xe(%ebp)
 8580955:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8580958:	89 04 24             	mov    %eax,(%esp)
 858095b:	e8 28 21 00 00       	call   8582a88 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP15CNPCDynamicInfoEEppEv>
 8580960:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8580963:	89 44 24 04          	mov    %eax,0x4(%esp)
 8580967:	8d 45 e8             	lea    -0x18(%ebp),%eax
 858096a:	89 04 24             	mov    %eax,(%esp)
 858096d:	e8 02 21 00 00       	call   8582a74 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP15CNPCDynamicInfoEEneERKS5_>
 8580972:	84 c0                	test   %al,%al
 8580974:	75 a4                	jne    858091a <_ZNK22CNPCDynamicInfoManager21makeNotiPacketNPCMoodER11PacketGuard+0x74>
 8580976:	0f bf 55 f2          	movswl -0xe(%ebp),%edx
 858097a:	8b 45 0c             	mov    0xc(%ebp),%eax
 858097d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8580981:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8580984:	89 54 24 04          	mov    %edx,0x4(%esp)
 8580988:	89 04 24             	mov    %eax,(%esp)
 858098b:	e8 78 5f b9 ff       	call   8116908 <_ZN18InterfacePacketBuf9put_shortERii>
 8580990:	8b 45 0c             	mov    0xc(%ebp),%eax
 8580993:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858099a:	00 
 858099b:	89 04 24             	mov    %eax,(%esp)
 858099e:	e8 b5 af b4 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85809a3:	c9                   	leave
 85809a4:	c3                   	ret
 85809a5:	90                   	nop

```

```c
// CNPCDynamicInfoManager::makeNotiPacketNPCMood @ 0x85808a6

/* CNPCDynamicInfoManager::makeNotiPacketNPCMood(PacketGuard&) const */

void __thiscall
CNPCDynamicInfoManager::makeNotiPacketNPCMood(CNPCDynamicInfoManager *this,PacketGuard *param_1)

{
  char cVar1;
  int iVar2;
  map<unsigned_int,CNPCDynamicInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>>
  local_20 [4];
  map<unsigned_int,CNPCDynamicInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>>
  local_1c [4];
  int local_18;
  short local_12;
  undefined4 local_10;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0xc3);
  local_18 = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_1);
  local_12 = 0;
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,0);
  std::
  map<unsigned_int,CNPCDynamicInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>>
  ::begin(local_1c);
  std::
  map<unsigned_int,CNPCDynamicInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>>
  ::end(local_20);
  while( true ) {
    cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>> *)
                       local_1c,(_Rb_tree_const_iterator *)local_20);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>> *)
                       local_1c);
    local_10 = CNPCDynamicInfo::getMood(*(CNPCDynamicInfo **)(iVar2 + 4));
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>> *)
                       local_1c);
    CNPCDynamicInfo::makeNotiPacketCurMood(*(CNPCDynamicInfo **)(iVar2 + 4),param_1);
    local_12 = local_12 + 1;
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>::operator++
              ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>> *)local_1c);
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,&local_18,(int)local_12);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}

```

---

## onTimer

```asm
// === 08580722 CNPCDynamicInfoManager::onTimer  [0x08580722-0x85808a5] ===
 8580722:	55                   	push   %ebp
 8580723:	89 e5                	mov    %esp,%ebp
 8580725:	56                   	push   %esi
 8580726:	53                   	push   %ebx
 8580727:	83 ec 40             	sub    $0x40,%esp
 858072a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 858072d:	89 04 24             	mov    %eax,(%esp)
 8580730:	e8 17 d6 00 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8580735:	c7 44 24 08 c3 00 00 	movl   $0xc3,0x8(%esp)
 858073c:	00 
 858073d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8580744:	00 
 8580745:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8580748:	89 04 24             	mov    %eax,(%esp)
 858074b:	e8 ac b1 b4 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8580750:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8580753:	89 04 24             	mov    %eax,(%esp)
 8580756:	e8 f1 03 b9 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 858075b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 858075e:	66 c7 45 ee 00 00    	movw   $0x0,-0x12(%ebp)
 8580764:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858076b:	00 
 858076c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 858076f:	89 04 24             	mov    %eax,(%esp)
 8580772:	e8 2d 97 b5 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8580777:	8b 55 08             	mov    0x8(%ebp),%edx
 858077a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 858077d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8580781:	89 04 24             	mov    %eax,(%esp)
 8580784:	e8 47 22 00 00       	call   85829d0 <_ZNSt3mapIjP15CNPCDynamicInfoSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 8580789:	83 ec 04             	sub    $0x4,%esp
 858078c:	8b 55 08             	mov    0x8(%ebp),%edx
 858078f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8580792:	89 54 24 04          	mov    %edx,0x4(%esp)
 8580796:	89 04 24             	mov    %eax,(%esp)
 8580799:	e8 a0 1c 00 00       	call   858243e <_ZNSt3mapIjP15CNPCDynamicInfoSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 858079e:	83 ec 04             	sub    $0x4,%esp
 85807a1:	eb 6f                	jmp    8580812 <_ZN22CNPCDynamicInfoManager7onTimerEv+0xf0>
 85807a3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85807a6:	89 04 24             	mov    %eax,(%esp)
 85807a9:	e8 ca 1c 00 00       	call   8582478 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP15CNPCDynamicInfoEEptEv>
 85807ae:	8b 40 04             	mov    0x4(%eax),%eax
 85807b1:	89 04 24             	mov    %eax,(%esp)
 85807b4:	e8 57 11 00 00       	call   8581910 <_ZNK15CNPCDynamicInfo7getMoodEv>
 85807b9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85807bc:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85807bf:	89 04 24             	mov    %eax,(%esp)
 85807c2:	e8 b1 1c 00 00       	call   8582478 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP15CNPCDynamicInfoEEptEv>
 85807c7:	8b 40 04             	mov    0x4(%eax),%eax
 85807ca:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85807d1:	00 
 85807d2:	89 04 24             	mov    %eax,(%esp)
 85807d5:	e8 d8 fc ff ff       	call   85804b2 <_ZN15CNPCDynamicInfo10changeMoodEb>
 85807da:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85807dd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85807e0:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85807e3:	74 22                	je     8580807 <_ZN22CNPCDynamicInfoManager7onTimerEv+0xe5>
 85807e5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85807e8:	89 04 24             	mov    %eax,(%esp)
 85807eb:	e8 88 1c 00 00       	call   8582478 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP15CNPCDynamicInfoEEptEv>
 85807f0:	8b 40 04             	mov    0x4(%eax),%eax
 85807f3:	8d 55 e0             	lea    -0x20(%ebp),%edx
 85807f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 85807fa:	89 04 24             	mov    %eax,(%esp)
 85807fd:	e8 22 fe ff ff       	call   8580624 <_ZNK15CNPCDynamicInfo21makeNotiPacketCurMoodER11PacketGuard>
 8580802:	66 83 45 ee 01       	addw   $0x1,-0x12(%ebp)
 8580807:	8d 45 d8             	lea    -0x28(%ebp),%eax
 858080a:	89 04 24             	mov    %eax,(%esp)
 858080d:	e8 f8 21 00 00       	call   8582a0a <_ZNSt17_Rb_tree_iteratorISt4pairIKjP15CNPCDynamicInfoEEppEv>
 8580812:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8580815:	89 44 24 04          	mov    %eax,0x4(%esp)
 8580819:	8d 45 d8             	lea    -0x28(%ebp),%eax
 858081c:	89 04 24             	mov    %eax,(%esp)
 858081f:	e8 d2 21 00 00       	call   85829f6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP15CNPCDynamicInfoEEneERKS5_>
 8580824:	84 c0                	test   %al,%al
 8580826:	0f 85 77 ff ff ff    	jne    85807a3 <_ZN22CNPCDynamicInfoManager7onTimerEv+0x81>
 858082c:	0f bf 45 ee          	movswl -0x12(%ebp),%eax
 8580830:	89 44 24 08          	mov    %eax,0x8(%esp)
 8580834:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8580837:	89 44 24 04          	mov    %eax,0x4(%esp)
 858083b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 858083e:	89 04 24             	mov    %eax,(%esp)
 8580841:	e8 c2 60 b9 ff       	call   8116908 <_ZN18InterfacePacketBuf9put_shortERii>
 8580846:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858084d:	00 
 858084e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8580851:	89 04 24             	mov    %eax,(%esp)
 8580854:	e8 ff b0 b4 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8580859:	66 83 7d ee 00       	cmpw   $0x0,-0x12(%ebp)
 858085e:	74 31                	je     8580891 <_ZN22CNPCDynamicInfoManager7onTimerEv+0x16f>
 8580860:	e8 42 9b b5 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8580865:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8580868:	89 54 24 04          	mov    %edx,0x4(%esp)
 858086c:	89 04 24             	mov    %eax,(%esp)
 858086f:	e8 a0 83 14 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 8580874:	eb 1b                	jmp    8580891 <_ZN22CNPCDynamicInfoManager7onTimerEv+0x16f>
 8580876:	89 d3                	mov    %edx,%ebx
 8580878:	89 c6                	mov    %eax,%esi
 858087a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 858087d:	89 04 24             	mov    %eax,(%esp)
 8580880:	e8 fb d5 00 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8580885:	89 f0                	mov    %esi,%eax
 8580887:	89 da                	mov    %ebx,%edx
 8580889:	89 04 24             	mov    %eax,(%esp)
 858088c:	e8 bf 2e 56 00       	call   8ae3750 <_Unwind_Resume>
 8580891:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8580894:	89 04 24             	mov    %eax,(%esp)
 8580897:	e8 e4 d5 00 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 858089c:	8d 65 f8             	lea    -0x8(%ebp),%esp
 858089f:	83 c4 00             	add    $0x0,%esp
 85808a2:	5b                   	pop    %ebx
 85808a3:	5e                   	pop    %esi
 85808a4:	5d                   	pop    %ebp
 85808a5:	c3                   	ret

```

```c
// CNPCDynamicInfoManager::onTimer @ 0x8580722

/* CNPCDynamicInfoManager::onTimer() */

void CNPCDynamicInfoManager::onTimer(void)

{
  char cVar1;
  int iVar2;
  GameWorld *this;
  map<unsigned_int,CNPCDynamicInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>>
  local_30 [4];
  map<unsigned_int,CNPCDynamicInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>>
  local_2c [4];
  int local_28;
  PacketGuard local_24 [14];
  short local_16;
  int local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0858074b to 08580873 has its CatchHandler @ 08580876 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0xc3);
  local_28 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_24);
  local_16 = 0;
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,0);
  std::
  map<unsigned_int,CNPCDynamicInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>>
  ::begin(local_2c);
  std::
  map<unsigned_int,CNPCDynamicInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>>
  ::end(local_30);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>> *)local_2c
                       ,(_Rb_tree_iterator *)local_30);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>> *)local_2c
                      );
    local_14 = CNPCDynamicInfo::getMood(*(CNPCDynamicInfo **)(iVar2 + 4));
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>> *)local_2c
                      );
    local_10 = CNPCDynamicInfo::changeMood(*(CNPCDynamicInfo **)(iVar2 + 4),false);
    if (local_14 != local_10) {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>> *)
                         local_2c);
      CNPCDynamicInfo::makeNotiPacketCurMood(*(CNPCDynamicInfo **)(iVar2 + 4),local_24);
      local_16 = local_16 + 1;
    }
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>> *)local_2c);
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,&local_28,(int)local_16);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  if (local_16 != 0) {
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this,local_24);
  }
  PacketGuard::~PacketGuard(local_24);
  return;
}

```

