# EventClassify__CAvatarDisjointRandomReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## SendCreateEmblemStatistic

```asm
// === 0810f742 EventClassify::CAvatarDisjointRandomReward::SendCreateEmblemStatistic  [0x0810f742-0x810f88b] ===
 810f742:	55                   	push   %ebp
 810f743:	89 e5                	mov    %esp,%ebp
 810f745:	53                   	push   %ebx
 810f746:	83 ec 64             	sub    $0x64,%esp
 810f749:	8d 45 b2             	lea    -0x4e(%ebp),%eax
 810f74c:	89 04 24             	mov    %eax,(%esp)
 810f74f:	e8 88 14 00 00       	call   8110bdc <_ZN30Packet_Emblem_Create_StatisticC1Ev>
 810f754:	8b 45 0c             	mov    0xc(%ebp),%eax
 810f757:	89 04 24             	mov    %eax,(%esp)
 810f75a:	e8 b5 e0 fc ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 810f75f:	83 f8 05             	cmp    $0x5,%eax
 810f762:	0f 97 c0             	seta   %al
 810f765:	84 c0                	test   %al,%al
 810f767:	0f 85 13 01 00 00    	jne    810f880 <_ZN13EventClassify27CAvatarDisjointRandomReward25SendCreateEmblemStatisticERSt6vectorISt4pairIiiESaIS3_EE+0x13e>
 810f76d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 810f774:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810f777:	8b 55 0c             	mov    0xc(%ebp),%edx
 810f77a:	89 54 24 04          	mov    %edx,0x4(%esp)
 810f77e:	89 04 24             	mov    %eax,(%esp)
 810f781:	e8 2c de fc ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 810f786:	83 ec 04             	sub    $0x4,%esp
 810f789:	e9 86 00 00 00       	jmp    810f814 <_ZN13EventClassify27CAvatarDisjointRandomReward25SendCreateEmblemStatisticERSt6vectorISt4pairIiiESaIS3_EE+0xd2>
 810f78e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810f791:	89 04 24             	mov    %eax,(%esp)
 810f794:	e8 55 25 00 00       	call   8111cee <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 810f799:	8b 18                	mov    (%eax),%ebx
 810f79b:	e8 fb c9 fb ff       	call   80cc19b <_Z14G_CDataManagerv>
 810f7a0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 810f7a4:	89 04 24             	mov    %eax,(%esp)
 810f7a7:	e8 86 02 25 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 810f7ac:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810f7af:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 810f7b3:	0f 84 ca 00 00 00    	je     810f883 <_ZN13EventClassify27CAvatarDisjointRandomReward25SendCreateEmblemStatisticERSt6vectorISt4pairIiiESaIS3_EE+0x141>
 810f7b9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810f7bc:	8b 00                	mov    (%eax),%eax
 810f7be:	83 c0 0c             	add    $0xc,%eax
 810f7c1:	8b 10                	mov    (%eax),%edx
 810f7c3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810f7c6:	89 04 24             	mov    %eax,(%esp)
 810f7c9:	ff d2                	call   *%edx
 810f7cb:	83 f8 14             	cmp    $0x14,%eax
 810f7ce:	0f 94 c0             	sete   %al
 810f7d1:	84 c0                	test   %al,%al
 810f7d3:	74 34                	je     810f809 <_ZN13EventClassify27CAvatarDisjointRandomReward25SendCreateEmblemStatisticERSt6vectorISt4pairIiiESaIS3_EE+0xc7>
 810f7d5:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 810f7d8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810f7db:	89 04 24             	mov    %eax,(%esp)
 810f7de:	e8 71 14 00 00       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 810f7e3:	89 44 9d c0          	mov    %eax,-0x40(%ebp,%ebx,4)
 810f7e7:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 810f7ea:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810f7ed:	89 04 24             	mov    %eax,(%esp)
 810f7f0:	e8 f9 24 00 00       	call   8111cee <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 810f7f5:	8b 40 04             	mov    0x4(%eax),%eax
 810f7f8:	8d 53 08             	lea    0x8(%ebx),%edx
 810f7fb:	89 44 95 b4          	mov    %eax,-0x4c(%ebp,%edx,4)
 810f7ff:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 810f803:	83 7d f0 05          	cmpl   $0x5,-0x10(%ebp)
 810f807:	7f 3c                	jg     810f845 <_ZN13EventClassify27CAvatarDisjointRandomReward25SendCreateEmblemStatisticERSt6vectorISt4pairIiiESaIS3_EE+0x103>
 810f809:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810f80c:	89 04 24             	mov    %eax,(%esp)
 810f80f:	e8 f6 19 00 00       	call   811120a <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 810f814:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810f817:	8b 55 0c             	mov    0xc(%ebp),%edx
 810f81a:	89 54 24 04          	mov    %edx,0x4(%esp)
 810f81e:	89 04 24             	mov    %eax,(%esp)
 810f821:	e8 b0 dd fc ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 810f826:	83 ec 04             	sub    $0x4,%esp
 810f829:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810f82c:	89 44 24 04          	mov    %eax,0x4(%esp)
 810f830:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810f833:	89 04 24             	mov    %eax,(%esp)
 810f836:	e8 a3 19 00 00       	call   81111de <_ZN9__gnu_cxxneIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 810f83b:	84 c0                	test   %al,%al
 810f83d:	0f 85 4b ff ff ff    	jne    810f78e <_ZN13EventClassify27CAvatarDisjointRandomReward25SendCreateEmblemStatisticERSt6vectorISt4pairIiiESaIS3_EE+0x4c>
 810f843:	eb 01                	jmp    810f846 <_ZN13EventClassify27CAvatarDisjointRandomReward25SendCreateEmblemStatisticERSt6vectorISt4pairIiiESaIS3_EE+0x104>
 810f845:	90                   	nop
 810f846:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 810f84a:	7e 3a                	jle    810f886 <_ZN13EventClassify27CAvatarDisjointRandomReward25SendCreateEmblemStatisticERSt6vectorISt4pairIiiESaIS3_EE+0x144>
 810f84c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810f84f:	89 45 bc             	mov    %eax,-0x44(%ebp)
 810f852:	8d 5d b2             	lea    -0x4e(%ebp),%ebx
 810f855:	a1 30 be 40 09       	mov    0x940be30,%eax
 810f85a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 810f861:	00 
 810f862:	89 04 24             	mov    %eax,(%esp)
 810f865:	e8 8e 24 00 00       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 810f86a:	c7 44 24 08 36 00 00 	movl   $0x36,0x8(%esp)
 810f871:	00 
 810f872:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 810f876:	89 04 24             	mov    %eax,(%esp)
 810f879:	e8 c6 27 36 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 810f87e:	eb 07                	jmp    810f887 <_ZN13EventClassify27CAvatarDisjointRandomReward25SendCreateEmblemStatisticERSt6vectorISt4pairIiiESaIS3_EE+0x145>
 810f880:	90                   	nop
 810f881:	eb 04                	jmp    810f887 <_ZN13EventClassify27CAvatarDisjointRandomReward25SendCreateEmblemStatisticERSt6vectorISt4pairIiiESaIS3_EE+0x145>
 810f883:	90                   	nop
 810f884:	eb 01                	jmp    810f887 <_ZN13EventClassify27CAvatarDisjointRandomReward25SendCreateEmblemStatisticERSt6vectorISt4pairIiiESaIS3_EE+0x145>
 810f886:	90                   	nop
 810f887:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 810f88a:	c9                   	leave
 810f88b:	c3                   	ret

```

```c
// EventClassify::CAvatarDisjointRandomReward::SendCreateEmblemStatistic @ 0x810f742

/* EventClassify::CAvatarDisjointRandomReward::SendCreateEmblemStatistic(std::vector<std::pair<int,
   int>, std::allocator<std::pair<int, int> > >&) */

void __thiscall
EventClassify::CAvatarDisjointRandomReward::SendCreateEmblemStatistic
          (CAvatarDisjointRandomReward *this,vector *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  CDataManager *this_00;
  int iVar5;
  CStatisticServerProxy *this_01;
  Packet_Emblem_Create_Statistic local_52 [2];
  int aiStack_50 [13];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  int local_14;
  CItem *local_10;
  
  Packet_Emblem_Create_Statistic::Packet_Emblem_Create_Statistic(local_52);
  uVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
  if (uVar3 < 6) {
    local_14 = 0;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    while( true ) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar2 = __gnu_cxx::operator!=(local_1c,local_18);
      if (!bVar2) break;
      piVar4 = (int *)__gnu_cxx::
                      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_1c);
      iVar1 = *piVar4;
      this_00 = (CDataManager *)G_CDataManager();
      local_10 = (CItem *)CDataManager::find_item(this_00,iVar1);
      if (local_10 == (CItem *)0x0) {
        return;
      }
      iVar5 = (**(code **)(*(int *)local_10 + 0xc))(local_10);
      iVar1 = local_14;
      if (iVar5 == 0x14) {
        iVar5 = CItem::get_grade(local_10);
        aiStack_50[iVar1 + 3] = iVar5;
        iVar1 = local_14;
        iVar5 = __gnu_cxx::
                __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator->(local_1c);
        aiStack_50[iVar1 + 8] = *(int *)(iVar5 + 4);
        local_14 = local_14 + 1;
        if (5 < local_14) break;
      }
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_1c);
    }
    if (0 < local_14) {
      aiStack_50[2] = local_14;
      this_01 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,0);
      CStatisticServerProxy::SendPacket(this_01,(char *)local_52,0x36);
    }
  }
  return;
}

```

---

## SendDisjointAvatarStatistic

```asm
// === 0810f5f4 EventClassify::CAvatarDisjointRandomReward::SendDisjointAvatarStatistic  [0x0810f5f4-0x810f693] ===
 810f5f4:	55                   	push   %ebp
 810f5f5:	89 e5                	mov    %esp,%ebp
 810f5f7:	53                   	push   %ebx
 810f5f8:	83 ec 44             	sub    $0x44,%esp
 810f5fb:	8d 45 cc             	lea    -0x34(%ebp),%eax
 810f5fe:	89 04 24             	mov    %eax,(%esp)
 810f601:	e8 a8 15 00 00       	call   8110bae <_ZN32Packet_Avater_Disjoint_StatisticC1Ev>
 810f606:	c7 45 d6 01 00 00 00 	movl   $0x1,-0x2a(%ebp)
 810f60d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 810f614:	8b 45 0c             	mov    0xc(%ebp),%eax
 810f617:	89 04 24             	mov    %eax,(%esp)
 810f61a:	e8 b7 1c fe ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 810f61f:	83 f8 02             	cmp    $0x2,%eax
 810f622:	0f 94 c0             	sete   %al
 810f625:	84 c0                	test   %al,%al
 810f627:	74 09                	je     810f632 <_ZN13EventClassify27CAvatarDisjointRandomReward27SendDisjointAvatarStatisticEPK5CItem+0x3e>
 810f629:	c7 45 f4 02 00 00 00 	movl   $0x2,-0xc(%ebp)
 810f630:	eb 11                	jmp    810f643 <_ZN13EventClassify27CAvatarDisjointRandomReward27SendDisjointAvatarStatisticEPK5CItem+0x4f>
 810f632:	8b 45 0c             	mov    0xc(%ebp),%eax
 810f635:	89 04 24             	mov    %eax,(%esp)
 810f638:	e8 17 16 00 00       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 810f63d:	83 e8 01             	sub    $0x1,%eax
 810f640:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810f643:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810f646:	89 45 da             	mov    %eax,-0x26(%ebp)
 810f649:	8b 45 0c             	mov    0xc(%ebp),%eax
 810f64c:	8b 00                	mov    (%eax),%eax
 810f64e:	83 c0 0c             	add    $0xc,%eax
 810f651:	8b 10                	mov    (%eax),%edx
 810f653:	8b 45 0c             	mov    0xc(%ebp),%eax
 810f656:	89 04 24             	mov    %eax,(%esp)
 810f659:	ff d2                	call   *%edx
 810f65b:	89 45 de             	mov    %eax,-0x22(%ebp)
 810f65e:	c6 45 e2 01          	movb   $0x1,-0x1e(%ebp)
 810f662:	8d 5d cc             	lea    -0x34(%ebp),%ebx
 810f665:	a1 30 be 40 09       	mov    0x940be30,%eax
 810f66a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 810f671:	00 
 810f672:	89 04 24             	mov    %eax,(%esp)
 810f675:	e8 7e 26 00 00       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 810f67a:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 810f681:	00 
 810f682:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 810f686:	89 04 24             	mov    %eax,(%esp)
 810f689:	e8 b6 29 36 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 810f68e:	83 c4 44             	add    $0x44,%esp
 810f691:	5b                   	pop    %ebx
 810f692:	5d                   	pop    %ebp
 810f693:	c3                   	ret

```

```c
// EventClassify::CAvatarDisjointRandomReward::SendDisjointAvatarStatistic @ 0x810f5f4

/* EventClassify::CAvatarDisjointRandomReward::SendDisjointAvatarStatistic(CItem const*) */

void __thiscall
EventClassify::CAvatarDisjointRandomReward::SendDisjointAvatarStatistic
          (CAvatarDisjointRandomReward *this,CItem *param_1)

{
  int iVar1;
  CStatisticServerProxy *this_00;
  Packet_Avater_Disjoint_Statistic local_38 [10];
  undefined4 local_2e;
  int local_2a;
  undefined4 local_26;
  undefined1 local_22;
  int local_10;
  
  Packet_Avater_Disjoint_Statistic::Packet_Avater_Disjoint_Statistic(local_38);
  local_2e = 1;
  local_10 = 0;
  iVar1 = CItem::get_rarity(param_1);
  if (iVar1 == 2) {
    local_10 = 2;
  }
  else {
    local_10 = CItem::get_grade(param_1);
    local_10 = local_10 + -1;
  }
  local_2a = local_10;
  local_26 = (**(code **)(*(int *)param_1 + 0xc))(param_1);
  local_22 = 1;
  this_00 = (CStatisticServerProxy *)
            CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                      (GlobalData::s_statistic_proxy_mgr,0);
  CStatisticServerProxy::SendPacket(this_00,(char *)local_38,0x28);
  return;
}

```

---

## checkAvatarDisjointError

```asm
// === 0810f3a4 EventClassify::CAvatarDisjointRandomReward::checkAvatarDisjointError  [0x0810f3a4-0x810f4e1] ===
 810f3a4:	55                   	push   %ebp
 810f3a5:	89 e5                	mov    %esp,%ebp
 810f3a7:	53                   	push   %ebx
 810f3a8:	83 ec 34             	sub    $0x34,%esp
 810f3ab:	8b 45 10             	mov    0x10(%ebp),%eax
 810f3ae:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 810f3b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 810f3b5:	89 04 24             	mov    %eax,(%esp)
 810f3b8:	e8 eb 1c 57 00       	call   86810a8 <_ZN5CUser26isEnableAvatarSocketActionEv>
 810f3bd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810f3c0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 810f3c4:	74 08                	je     810f3ce <_ZN13EventClassify27CAvatarDisjointRandomReward24checkAvatarDisjointErrorEP5CUsertR10Inven_ItemPK5CItem+0x2a>
 810f3c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810f3c9:	e9 0e 01 00 00       	jmp    810f4dc <_ZN13EventClassify27CAvatarDisjointRandomReward24checkAvatarDisjointErrorEP5CUsertR10Inven_ItemPK5CItem+0x138>
 810f3ce:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 810f3d2:	89 44 24 08          	mov    %eax,0x8(%esp)
 810f3d6:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 810f3dd:	00 
 810f3de:	8b 45 0c             	mov    0xc(%ebp),%eax
 810f3e1:	89 04 24             	mov    %eax,(%esp)
 810f3e4:	e8 59 75 53 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 810f3e9:	84 c0                	test   %al,%al
 810f3eb:	74 0a                	je     810f3f7 <_ZN13EventClassify27CAvatarDisjointRandomReward24checkAvatarDisjointErrorEP5CUsertR10Inven_ItemPK5CItem+0x53>
 810f3ed:	b8 d5 00 00 00       	mov    $0xd5,%eax
 810f3f2:	e9 e5 00 00 00       	jmp    810f4dc <_ZN13EventClassify27CAvatarDisjointRandomReward24checkAvatarDisjointErrorEP5CUsertR10Inven_ItemPK5CItem+0x138>
 810f3f7:	8b 45 18             	mov    0x18(%ebp),%eax
 810f3fa:	89 04 24             	mov    %eax,(%esp)
 810f3fd:	e8 52 18 00 00       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 810f402:	85 c0                	test   %eax,%eax
 810f404:	74 10                	je     810f416 <_ZN13EventClassify27CAvatarDisjointRandomReward24checkAvatarDisjointErrorEP5CUsertR10Inven_ItemPK5CItem+0x72>
 810f406:	8b 45 18             	mov    0x18(%ebp),%eax
 810f409:	89 04 24             	mov    %eax,(%esp)
 810f40c:	e8 43 18 00 00       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 810f411:	83 f8 03             	cmp    $0x3,%eax
 810f414:	7e 07                	jle    810f41d <_ZN13EventClassify27CAvatarDisjointRandomReward24checkAvatarDisjointErrorEP5CUsertR10Inven_ItemPK5CItem+0x79>
 810f416:	b8 01 00 00 00       	mov    $0x1,%eax
 810f41b:	eb 05                	jmp    810f422 <_ZN13EventClassify27CAvatarDisjointRandomReward24checkAvatarDisjointErrorEP5CUsertR10Inven_ItemPK5CItem+0x7e>
 810f41d:	b8 00 00 00 00       	mov    $0x0,%eax
 810f422:	84 c0                	test   %al,%al
 810f424:	74 0a                	je     810f430 <_ZN13EventClassify27CAvatarDisjointRandomReward24checkAvatarDisjointErrorEP5CUsertR10Inven_ItemPK5CItem+0x8c>
 810f426:	b8 13 00 00 00       	mov    $0x13,%eax
 810f42b:	e9 ac 00 00 00       	jmp    810f4dc <_ZN13EventClassify27CAvatarDisjointRandomReward24checkAvatarDisjointErrorEP5CUsertR10Inven_ItemPK5CItem+0x138>
 810f430:	8b 45 18             	mov    0x18(%ebp),%eax
 810f433:	8b 00                	mov    (%eax),%eax
 810f435:	83 c0 24             	add    $0x24,%eax
 810f438:	8b 10                	mov    (%eax),%edx
 810f43a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 810f441:	00 
 810f442:	8b 45 18             	mov    0x18(%ebp),%eax
 810f445:	89 04 24             	mov    %eax,(%esp)
 810f448:	ff d2                	call   *%edx
 810f44a:	83 f0 01             	xor    $0x1,%eax
 810f44d:	84 c0                	test   %al,%al
 810f44f:	74 0a                	je     810f45b <_ZN13EventClassify27CAvatarDisjointRandomReward24checkAvatarDisjointErrorEP5CUsertR10Inven_ItemPK5CItem+0xb7>
 810f451:	b8 17 00 00 00       	mov    $0x17,%eax
 810f456:	e9 81 00 00 00       	jmp    810f4dc <_ZN13EventClassify27CAvatarDisjointRandomReward24checkAvatarDisjointErrorEP5CUsertR10Inven_ItemPK5CItem+0x138>
 810f45b:	8b 45 14             	mov    0x14(%ebp),%eax
 810f45e:	8b 58 07             	mov    0x7(%eax),%ebx
 810f461:	8b 45 0c             	mov    0xc(%ebp),%eax
 810f464:	89 04 24             	mov    %eax,(%esp)
 810f467:	e8 22 ae fc ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 810f46c:	89 04 24             	mov    %eax,(%esp)
 810f46f:	e8 02 e1 fc ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 810f474:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 810f478:	89 04 24             	mov    %eax,(%esp)
 810f47b:	e8 9a a3 1e 00       	call   82f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>
 810f480:	85 c0                	test   %eax,%eax
 810f482:	0f 95 c0             	setne  %al
 810f485:	84 c0                	test   %al,%al
 810f487:	74 07                	je     810f490 <_ZN13EventClassify27CAvatarDisjointRandomReward24checkAvatarDisjointErrorEP5CUsertR10Inven_ItemPK5CItem+0xec>
 810f489:	b8 17 00 00 00       	mov    $0x17,%eax
 810f48e:	eb 4c                	jmp    810f4dc <_ZN13EventClassify27CAvatarDisjointRandomReward24checkAvatarDisjointErrorEP5CUsertR10Inven_ItemPK5CItem+0x138>
 810f490:	8b 45 14             	mov    0x14(%ebp),%eax
 810f493:	8b 40 02             	mov    0x2(%eax),%eax
 810f496:	89 c3                	mov    %eax,%ebx
 810f498:	e8 fe cc fb ff       	call   80cc19b <_Z14G_CDataManagerv>
 810f49d:	05 08 b5 00 00       	add    $0xb508,%eax
 810f4a2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 810f4a6:	89 04 24             	mov    %eax,(%esp)
 810f4a9:	e8 ce ec 84 00       	call   895e17c <_ZN21EventAvatarListScript17isfindEventAvatarEi>
 810f4ae:	84 c0                	test   %al,%al
 810f4b0:	74 07                	je     810f4b9 <_ZN13EventClassify27CAvatarDisjointRandomReward24checkAvatarDisjointErrorEP5CUsertR10Inven_ItemPK5CItem+0x115>
 810f4b2:	b8 17 00 00 00       	mov    $0x17,%eax
 810f4b7:	eb 23                	jmp    810f4dc <_ZN13EventClassify27CAvatarDisjointRandomReward24checkAvatarDisjointErrorEP5CUsertR10Inven_ItemPK5CItem+0x138>
 810f4b9:	8b 45 14             	mov    0x14(%ebp),%eax
 810f4bc:	83 c0 33             	add    $0x33,%eax
 810f4bf:	89 04 24             	mov    %eax,(%esp)
 810f4c2:	e8 43 16 00 00       	call   8110b0a <_ZNK19UpgradeSeparateInfo18IsTradeRestrictionEv>
 810f4c7:	84 c0                	test   %al,%al
 810f4c9:	0f 95 c0             	setne  %al
 810f4cc:	84 c0                	test   %al,%al
 810f4ce:	74 07                	je     810f4d7 <_ZN13EventClassify27CAvatarDisjointRandomReward24checkAvatarDisjointErrorEP5CUsertR10Inven_ItemPK5CItem+0x133>
 810f4d0:	b8 17 00 00 00       	mov    $0x17,%eax
 810f4d5:	eb 05                	jmp    810f4dc <_ZN13EventClassify27CAvatarDisjointRandomReward24checkAvatarDisjointErrorEP5CUsertR10Inven_ItemPK5CItem+0x138>
 810f4d7:	b8 00 00 00 00       	mov    $0x0,%eax
 810f4dc:	83 c4 34             	add    $0x34,%esp
 810f4df:	5b                   	pop    %ebx
 810f4e0:	5d                   	pop    %ebp
 810f4e1:	c3                   	ret

```

```c
// EventClassify::CAvatarDisjointRandomReward::checkAvatarDisjointError @ 0x810f3a4

/* EventClassify::CAvatarDisjointRandomReward::checkAvatarDisjointError(CUser*, unsigned short,
   Inven_Item&, CItem const*) */

int __thiscall
EventClassify::CAvatarDisjointRandomReward::checkAvatarDisjointError
          (CAvatarDisjointRandomReward *this,CUser *param_1,ushort param_2,Inven_Item *param_3,
          CItem *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CInventory *this_00;
  CAvatarItemMgr *this_01;
  
  iVar3 = CUser::isEnableAvatarSocketAction(param_1);
  if (iVar3 == 0) {
    cVar2 = CUser::CheckItemLock(param_1,2,(uint)param_2);
    if (cVar2 == '\0') {
      iVar3 = CItem::get_grade(param_4);
      if ((iVar3 == 0) || (iVar3 = CItem::get_grade(param_4), 3 < iVar3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        iVar3 = 0x13;
      }
      else {
        cVar2 = (**(code **)(*(int *)param_4 + 0x24))(param_4,2);
        if (cVar2 == '\x01') {
          iVar3 = *(int *)(param_3 + 7);
          this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          this_01 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(this_00);
          iVar3 = WongWork::CAvatarItemMgr::GetExpireDate(this_01,iVar3);
          if (iVar3 == 0) {
            iVar3 = G_CDataManager();
            cVar2 = EventAvatarListScript::isfindEventAvatar(iVar3 + 0xb508);
            if (cVar2 == '\0') {
              cVar2 = UpgradeSeparateInfo::IsTradeRestriction
                                ((UpgradeSeparateInfo *)(param_3 + 0x33));
              if (cVar2 == '\0') {
                iVar3 = 0;
              }
              else {
                iVar3 = 0x17;
              }
            }
            else {
              iVar3 = 0x17;
            }
          }
          else {
            iVar3 = 0x17;
          }
        }
        else {
          iVar3 = 0x17;
        }
      }
    }
    else {
      iVar3 = 0xd5;
    }
  }
  return iVar3;
}

```

---

## deleteAvatarItem

```asm
// === 0810f4e2 EventClassify::CAvatarDisjointRandomReward::deleteAvatarItem  [0x0810f4e2-0x810f5f3] ===
 810f4e2:	55                   	push   %ebp
 810f4e3:	89 e5                	mov    %esp,%ebp
 810f4e5:	56                   	push   %esi
 810f4e6:	53                   	push   %ebx
 810f4e7:	83 ec 30             	sub    $0x30,%esp
 810f4ea:	8b 45 10             	mov    0x10(%ebp),%eax
 810f4ed:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 810f4f1:	0f b7 5d f4          	movzwl -0xc(%ebp),%ebx
 810f4f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 810f4f8:	89 04 24             	mov    %eax,(%esp)
 810f4fb:	e8 8e ad fc ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 810f500:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 810f507:	00 
 810f508:	c7 44 24 10 06 00 00 	movl   $0x6,0x10(%esp)
 810f50f:	00 
 810f510:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 810f517:	00 
 810f518:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 810f51c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 810f523:	00 
 810f524:	89 04 24             	mov    %eax,(%esp)
 810f527:	e8 e0 4a 3f 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 810f52c:	83 f0 01             	xor    $0x1,%eax
 810f52f:	84 c0                	test   %al,%al
 810f531:	74 0a                	je     810f53d <_ZN13EventClassify27CAvatarDisjointRandomReward16deleteAvatarItemEP5CUsertR10Inven_ItemPK5CItem+0x5b>
 810f533:	b8 16 00 00 00       	mov    $0x16,%eax
 810f538:	e9 af 00 00 00       	jmp    810f5ec <_ZN13EventClassify27CAvatarDisjointRandomReward16deleteAvatarItemEP5CUsertR10Inven_ItemPK5CItem+0x10a>
 810f53d:	8b 45 14             	mov    0x14(%ebp),%eax
 810f540:	8b 58 07             	mov    0x7(%eax),%ebx
 810f543:	8b 45 0c             	mov    0xc(%ebp),%eax
 810f546:	89 04 24             	mov    %eax,(%esp)
 810f549:	e8 40 ad fc ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 810f54e:	89 04 24             	mov    %eax,(%esp)
 810f551:	e8 16 17 00 00       	call   8110c6c <_ZN10CInventory17GetAvatarItemMgrWEv>
 810f556:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 810f55a:	89 04 24             	mov    %eax,(%esp)
 810f55d:	e8 a0 9e 1e 00       	call   82f9402 <_ZN8WongWork14CAvatarItemMgr12UnRegistItemEi>
 810f562:	83 f0 01             	xor    $0x1,%eax
 810f565:	84 c0                	test   %al,%al
 810f567:	74 07                	je     810f570 <_ZN13EventClassify27CAvatarDisjointRandomReward16deleteAvatarItemEP5CUsertR10Inven_ItemPK5CItem+0x8e>
 810f569:	b8 16 00 00 00       	mov    $0x16,%eax
 810f56e:	eb 7c                	jmp    810f5ec <_ZN13EventClassify27CAvatarDisjointRandomReward16deleteAvatarItemEP5CUsertR10Inven_ItemPK5CItem+0x10a>
 810f570:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
 810f574:	8d 70 0a             	lea    0xa(%eax),%esi
 810f577:	8b 45 14             	mov    0x14(%ebp),%eax
 810f57a:	8b 58 07             	mov    0x7(%eax),%ebx
 810f57d:	8b 45 0c             	mov    0xc(%ebp),%eax
 810f580:	89 04 24             	mov    %eax,(%esp)
 810f583:	e8 06 ad fc ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 810f588:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 810f58f:	00 
 810f590:	89 74 24 10          	mov    %esi,0x10(%esp)
 810f594:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 810f59b:	00 
 810f59c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 810f5a0:	c7 44 24 04 36 00 00 	movl   $0x36,0x4(%esp)
 810f5a7:	00 
 810f5a8:	89 04 24             	mov    %eax,(%esp)
 810f5ab:	e8 7e 96 3f 00       	call   8508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>
 810f5b0:	8b 45 14             	mov    0x14(%ebp),%eax
 810f5b3:	8b 58 07             	mov    0x7(%eax),%ebx
 810f5b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 810f5b9:	89 04 24             	mov    %eax,(%esp)
 810f5bc:	e8 8d c6 fb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 810f5c1:	c7 44 24 08 23 c3 b4 	movl   $0x8b4c323,0x8(%esp)
 810f5c8:	08 
 810f5c9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 810f5cd:	89 04 24             	mov    %eax,(%esp)
 810f5d0:	e8 95 5d 33 00       	call   844536a <_ZN22DB_UpdateAvatarHistory11makeRequestEjiPc>
 810f5d5:	8b 45 18             	mov    0x18(%ebp),%eax
 810f5d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 810f5dc:	8b 45 08             	mov    0x8(%ebp),%eax
 810f5df:	89 04 24             	mov    %eax,(%esp)
 810f5e2:	e8 0d 00 00 00       	call   810f5f4 <_ZN13EventClassify27CAvatarDisjointRandomReward27SendDisjointAvatarStatisticEPK5CItem>
 810f5e7:	b8 00 00 00 00       	mov    $0x0,%eax
 810f5ec:	83 c4 30             	add    $0x30,%esp
 810f5ef:	5b                   	pop    %ebx
 810f5f0:	5e                   	pop    %esi
 810f5f1:	5d                   	pop    %ebp
 810f5f2:	c3                   	ret
 810f5f3:	90                   	nop

```

```c
// EventClassify::CAvatarDisjointRandomReward::deleteAvatarItem @ 0x810f4e2

/* EventClassify::CAvatarDisjointRandomReward::deleteAvatarItem(CUser*, unsigned short, Inven_Item&,
   CItem const*) */

undefined4 __thiscall
EventClassify::CAvatarDisjointRandomReward::deleteAvatarItem
          (CAvatarDisjointRandomReward *this,CUser *param_1,ushort param_2,Inven_Item *param_3,
          CItem *param_4)

{
  char cVar1;
  CInventory *pCVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  cVar1 = CInventory::delete_item(pCVar2,2,param_2,1,6,1);
  if (cVar1 == '\x01') {
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    iVar4 = CInventory::GetAvatarItemMgrW(pCVar2);
    cVar1 = WongWork::CAvatarItemMgr::UnRegistItem(iVar4);
    if (cVar1 == '\x01') {
      iVar4 = *(int *)(param_3 + 7);
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      CInventory::SendAvatarEvent(pCVar2,0x36,iVar4,5,param_2 + 10,0);
      iVar4 = *(int *)(param_3 + 7);
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      DB_UpdateAvatarHistory::makeRequest(uVar5,iVar4,"");
      SendDisjointAvatarStatistic(this,param_4);
      uVar3 = 0;
    }
    else {
      uVar3 = 0x16;
    }
  }
  else {
    uVar3 = 0x16;
  }
  return uVar3;
}

```

---

## getRewardItem

```asm
// === 0810f694 EventClassify::CAvatarDisjointRandomReward::getRewardItem  [0x0810f694-0x810f741] ===
 810f694:	55                   	push   %ebp
 810f695:	89 e5                	mov    %esp,%ebp
 810f697:	83 ec 28             	sub    $0x28,%esp
 810f69a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 810f6a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 810f6a4:	89 04 24             	mov    %eax,(%esp)
 810f6a7:	e8 a8 15 00 00       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 810f6ac:	88 45 ef             	mov    %al,-0x11(%ebp)
 810f6af:	8b 45 08             	mov    0x8(%ebp),%eax
 810f6b2:	8b 40 1c             	mov    0x1c(%eax),%eax
 810f6b5:	8d 48 08             	lea    0x8(%eax),%ecx
 810f6b8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810f6bb:	8d 55 ef             	lea    -0x11(%ebp),%edx
 810f6be:	89 54 24 08          	mov    %edx,0x8(%esp)
 810f6c2:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 810f6c6:	89 04 24             	mov    %eax,(%esp)
 810f6c9:	e8 92 26 00 00       	call   8111d60 <_ZNSt3mapIcjSt4lessIcESaISt4pairIKcjEEE4findERS3_>
 810f6ce:	83 ec 04             	sub    $0x4,%esp
 810f6d1:	8b 45 08             	mov    0x8(%ebp),%eax
 810f6d4:	8b 40 1c             	mov    0x1c(%eax),%eax
 810f6d7:	8d 50 08             	lea    0x8(%eax),%edx
 810f6da:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810f6dd:	89 54 24 04          	mov    %edx,0x4(%esp)
 810f6e1:	89 04 24             	mov    %eax,(%esp)
 810f6e4:	e8 a3 26 00 00       	call   8111d8c <_ZNSt3mapIcjSt4lessIcESaISt4pairIKcjEEE3endEv>
 810f6e9:	83 ec 04             	sub    $0x4,%esp
 810f6ec:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810f6ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 810f6f3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810f6f6:	89 04 24             	mov    %eax,(%esp)
 810f6f9:	e8 b4 26 00 00       	call   8111db2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKcjEEeqERKS3_>
 810f6fe:	84 c0                	test   %al,%al
 810f700:	74 07                	je     810f709 <_ZN13EventClassify27CAvatarDisjointRandomReward13getRewardItemEPK5CItemRSt6vectorISt4pairIiiESaIS6_EE+0x75>
 810f702:	b8 15 00 00 00       	mov    $0x15,%eax
 810f707:	eb 37                	jmp    810f740 <_ZN13EventClassify27CAvatarDisjointRandomReward13getRewardItemEPK5CItemRSt6vectorISt4pairIiiESaIS6_EE+0xac>
 810f709:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810f70c:	89 04 24             	mov    %eax,(%esp)
 810f70f:	e8 b2 26 00 00       	call   8111dc6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKcjEEptEv>
 810f714:	8b 40 04             	mov    0x4(%eax),%eax
 810f717:	8b 55 10             	mov    0x10(%ebp),%edx
 810f71a:	89 54 24 08          	mov    %edx,0x8(%esp)
 810f71e:	89 44 24 04          	mov    %eax,0x4(%esp)
 810f722:	8d 45 ee             	lea    -0x12(%ebp),%eax
 810f725:	89 04 24             	mov    %eax,(%esp)
 810f728:	e8 2d e5 ff ff       	call   810dc5a <_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE>
 810f72d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810f730:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 810f734:	74 05                	je     810f73b <_ZN13EventClassify27CAvatarDisjointRandomReward13getRewardItemEPK5CItemRSt6vectorISt4pairIiiESaIS6_EE+0xa7>
 810f736:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810f739:	eb 05                	jmp    810f740 <_ZN13EventClassify27CAvatarDisjointRandomReward13getRewardItemEPK5CItemRSt6vectorISt4pairIiiESaIS6_EE+0xac>
 810f73b:	b8 00 00 00 00       	mov    $0x0,%eax
 810f740:	c9                   	leave
 810f741:	c3                   	ret

```

```c
// EventClassify::CAvatarDisjointRandomReward::getRewardItem @ 0x810f694

/* EventClassify::CAvatarDisjointRandomReward::getRewardItem(CItem const*,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) */

int __thiscall
EventClassify::CAvatarDisjointRandomReward::getRewardItem
          (CAvatarDisjointRandomReward *this,CItem *param_1,vector *param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<char_const,unsigned_int>> local_1c [6];
  CEventActionMng local_16;
  undefined1 local_15;
  map<char,unsigned_int,std::less<char>,std::allocator<std::pair<char_const,unsigned_int>>>
  local_14 [4];
  undefined4 local_10;
  
  local_10 = 0;
  local_15 = CItem::get_grade(param_1);
  std::map<char,unsigned_int,std::less<char>,std::allocator<std::pair<char_const,unsigned_int>>>::
  find((char *)local_1c);
  std::map<char,unsigned_int,std::less<char>,std::allocator<std::pair<char_const,unsigned_int>>>::
  end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<char_const,unsigned_int>>::operator==
                    (local_1c,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<char_const,unsigned_int>>::operator->(local_1c);
    iVar2 = CEventActionMng::getResultItemFromLottery(&local_16,*(uint *)(iVar2 + 4),param_2);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0x15;
  }
  return iVar2;
}

```

---

## sendRandomItemReward

```asm
// === 0810f88c EventClassify::CAvatarDisjointRandomReward::sendRandomItemReward  [0x0810f88c-0x810f95d] ===
 810f88c:	55                   	push   %ebp
 810f88d:	89 e5                	mov    %esp,%ebp
 810f88f:	53                   	push   %ebx
 810f890:	83 ec 24             	sub    $0x24,%esp
 810f893:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 810f89a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810f89d:	8b 55 10             	mov    0x10(%ebp),%edx
 810f8a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 810f8a4:	89 04 24             	mov    %eax,(%esp)
 810f8a7:	e8 06 dd fc ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 810f8ac:	83 ec 04             	sub    $0x4,%esp
 810f8af:	eb 74                	jmp    810f925 <_ZN13EventClassify27CAvatarDisjointRandomReward20sendRandomItemRewardEP5CUserRSt6vectorISt4pairIiiESaIS5_EE+0x99>
 810f8b1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810f8b4:	89 04 24             	mov    %eax,(%esp)
 810f8b7:	e8 32 24 00 00       	call   8111cee <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 810f8bc:	8b 58 04             	mov    0x4(%eax),%ebx
 810f8bf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810f8c2:	89 04 24             	mov    %eax,(%esp)
 810f8c5:	e8 24 24 00 00       	call   8111cee <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 810f8ca:	8b 00                	mov    (%eax),%eax
 810f8cc:	8b 55 08             	mov    0x8(%ebp),%edx
 810f8cf:	8b 52 1c             	mov    0x1c(%edx),%edx
 810f8d2:	83 c2 20             	add    $0x20,%edx
 810f8d5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 810f8d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 810f8dd:	89 14 24             	mov    %edx,(%esp)
 810f8e0:	e8 a7 c7 fd ff       	call   80ec08c <_ZN15Action_SendMail8set_itemEii>
 810f8e5:	8b 45 08             	mov    0x8(%ebp),%eax
 810f8e8:	8b 40 1c             	mov    0x1c(%eax),%eax
 810f8eb:	83 c0 20             	add    $0x20,%eax
 810f8ee:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810f8f5:	00 
 810f8f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 810f8fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 810f8fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 810f901:	8d 45 ef             	lea    -0x11(%ebp),%eax
 810f904:	89 04 24             	mov    %eax,(%esp)
 810f907:	e8 26 d6 ff ff       	call   810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>
 810f90c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810f90f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 810f913:	74 05                	je     810f91a <_ZN13EventClassify27CAvatarDisjointRandomReward20sendRandomItemRewardEP5CUserRSt6vectorISt4pairIiiESaIS5_EE+0x8e>
 810f915:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810f918:	eb 3f                	jmp    810f959 <_ZN13EventClassify27CAvatarDisjointRandomReward20sendRandomItemRewardEP5CUserRSt6vectorISt4pairIiiESaIS5_EE+0xcd>
 810f91a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810f91d:	89 04 24             	mov    %eax,(%esp)
 810f920:	e8 e5 18 00 00       	call   811120a <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 810f925:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810f928:	8b 55 10             	mov    0x10(%ebp),%edx
 810f92b:	89 54 24 04          	mov    %edx,0x4(%esp)
 810f92f:	89 04 24             	mov    %eax,(%esp)
 810f932:	e8 9f dc fc ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 810f937:	83 ec 04             	sub    $0x4,%esp
 810f93a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810f93d:	89 44 24 04          	mov    %eax,0x4(%esp)
 810f941:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810f944:	89 04 24             	mov    %eax,(%esp)
 810f947:	e8 92 18 00 00       	call   81111de <_ZN9__gnu_cxxneIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 810f94c:	84 c0                	test   %al,%al
 810f94e:	0f 85 5d ff ff ff    	jne    810f8b1 <_ZN13EventClassify27CAvatarDisjointRandomReward20sendRandomItemRewardEP5CUserRSt6vectorISt4pairIiiESaIS5_EE+0x25>
 810f954:	b8 00 00 00 00       	mov    $0x0,%eax
 810f959:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 810f95c:	c9                   	leave
 810f95d:	c3                   	ret

```

```c
// EventClassify::CAvatarDisjointRandomReward::sendRandomItemReward @ 0x810f88c

/* EventClassify::CAvatarDisjointRandomReward::sendRandomItemReward(CUser*,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) */

int EventClassify::CAvatarDisjointRandomReward::sendRandomItemReward(CUser *param_1,vector *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_1c [7];
  CEventActionMng local_15;
  __normal_iterator local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  while( true ) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_14);
    if (!bVar1) {
      return 0;
    }
    iVar2 = __gnu_cxx::
            __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator->(local_1c);
    iVar2 = *(int *)(iVar2 + 4);
    piVar3 = (int *)__gnu_cxx::
                    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator->(local_1c);
    Action_SendMail::set_item((Action_SendMail *)(*(int *)(param_1 + 0x1c) + 0x20),*piVar3,iVar2);
    local_10 = CEventActionMng::process_action_send_mail
                         (&local_15,(CUser *)param_2,
                          (Action_SendMail *)(*(int *)(param_1 + 0x1c) + 0x20),false);
    if (local_10 != 0) break;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_1c);
  }
  return local_10;
}

```

---

## set_event_data

```asm
// === 0810f37a EventClassify::CAvatarDisjointRandomReward::set_event_data  [0x0810f37a-0x810f3a3] ===
 810f37a:	55                   	push   %ebp
 810f37b:	89 e5                	mov    %esp,%ebp
 810f37d:	83 ec 18             	sub    $0x18,%esp
 810f380:	8b 45 08             	mov    0x8(%ebp),%eax
 810f383:	8b 00                	mov    (%eax),%eax
 810f385:	83 c0 18             	add    $0x18,%eax
 810f388:	8b 08                	mov    (%eax),%ecx
 810f38a:	8b 45 08             	mov    0x8(%ebp),%eax
 810f38d:	8b 55 0c             	mov    0xc(%ebp),%edx
 810f390:	89 54 24 04          	mov    %edx,0x4(%esp)
 810f394:	89 04 24             	mov    %eax,(%esp)
 810f397:	ff d1                	call   *%ecx
 810f399:	8b 55 10             	mov    0x10(%ebp),%edx
 810f39c:	8b 45 08             	mov    0x8(%ebp),%eax
 810f39f:	89 50 1c             	mov    %edx,0x1c(%eax)
 810f3a2:	c9                   	leave
 810f3a3:	c3                   	ret

```

```c
// EventClassify::CAvatarDisjointRandomReward::set_event_data @ 0x810f37a

/* EventClassify::CAvatarDisjointRandomReward::set_event_data(int, InGameEventScript*) */

void __thiscall
EventClassify::CAvatarDisjointRandomReward::set_event_data
          (CAvatarDisjointRandomReward *this,int param_1,InGameEventScript *param_2)

{
  (**(code **)(*(int *)this + 0x18))(this,param_1);
  *(InGameEventScript **)(this + 0x1c) = param_2;
  return;
}

```

