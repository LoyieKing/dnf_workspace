# Dispatcher_DisJointAvatar

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## SendCreateEmblemInfo

```asm
// === 08218a36 Dispatcher_DisJointAvatar::SendCreateEmblemInfo  [0x08218a36-0x8218b93] ===
 8218a36:	55                   	push   %ebp
 8218a37:	89 e5                	mov    %esp,%ebp
 8218a39:	53                   	push   %ebx
 8218a3a:	83 ec 74             	sub    $0x74,%esp
 8218a3d:	8d 45 a6             	lea    -0x5a(%ebp),%eax
 8218a40:	89 04 24             	mov    %eax,(%esp)
 8218a43:	e8 94 81 ef ff       	call   8110bdc <_ZN30Packet_Emblem_Create_StatisticC1Ev>
 8218a48:	8b 45 0c             	mov    0xc(%ebp),%eax
 8218a4b:	89 04 24             	mov    %eax,(%esp)
 8218a4e:	e8 c1 4d ec ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8218a53:	83 f8 05             	cmp    $0x5,%eax
 8218a56:	0f 97 c0             	seta   %al
 8218a59:	84 c0                	test   %al,%al
 8218a5b:	0f 85 26 01 00 00    	jne    8218b87 <_ZN25Dispatcher_DisJointAvatar20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE+0x151>
 8218a61:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8218a64:	8b 55 0c             	mov    0xc(%ebp),%edx
 8218a67:	89 54 24 04          	mov    %edx,0x4(%esp)
 8218a6b:	89 04 24             	mov    %eax,(%esp)
 8218a6e:	e8 ad 87 ef ff       	call   8111220 <_ZNKSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 8218a73:	83 ec 04             	sub    $0x4,%esp
 8218a76:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8218a79:	8b 55 0c             	mov    0xc(%ebp),%edx
 8218a7c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8218a80:	89 04 24             	mov    %eax,(%esp)
 8218a83:	e8 c4 87 ef ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 8218a88:	83 ec 04             	sub    $0x4,%esp
 8218a8b:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8218a92:	e9 88 00 00 00       	jmp    8218b1f <_ZN25Dispatcher_DisJointAvatar20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE+0xe9>
 8218a97:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8218a9a:	89 04 24             	mov    %eax,(%esp)
 8218a9d:	e8 70 ae f7 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8218aa2:	8b 00                	mov    (%eax),%eax
 8218aa4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8218aa7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8218aaa:	89 04 24             	mov    %eax,(%esp)
 8218aad:	e8 60 ae f7 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8218ab2:	8b 40 04             	mov    0x4(%eax),%eax
 8218ab5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8218ab8:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 8218abb:	e8 db 36 eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 8218ac0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8218ac4:	89 04 24             	mov    %eax,(%esp)
 8218ac7:	e8 66 6f 14 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8218acc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8218acf:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8218ad3:	0f 84 b1 00 00 00    	je     8218b8a <_ZN25Dispatcher_DisJointAvatar20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE+0x154>
 8218ad9:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 8218adc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8218adf:	89 04 24             	mov    %eax,(%esp)
 8218ae2:	e8 6d 81 ef ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8218ae7:	89 44 9d b4          	mov    %eax,-0x4c(%ebp,%ebx,4)
 8218aeb:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8218aee:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8218af1:	83 c2 08             	add    $0x8,%edx
 8218af4:	89 44 95 a8          	mov    %eax,-0x58(%ebp,%edx,4)
 8218af8:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8218afc:	83 7d e8 05          	cmpl   $0x5,-0x18(%ebp)
 8218b00:	7f 39                	jg     8218b3b <_ZN25Dispatcher_DisJointAvatar20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE+0x105>
 8218b02:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8218b05:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8218b0c:	00 
 8218b0d:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8218b10:	89 54 24 04          	mov    %edx,0x4(%esp)
 8218b14:	89 04 24             	mov    %eax,(%esp)
 8218b17:	e8 56 a9 f7 ff       	call   8193472 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEi>
 8218b1c:	83 ec 04             	sub    $0x4,%esp
 8218b1f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8218b22:	89 44 24 04          	mov    %eax,0x4(%esp)
 8218b26:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8218b29:	89 04 24             	mov    %eax,(%esp)
 8218b2c:	e8 b4 ad f7 ff       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8218b31:	84 c0                	test   %al,%al
 8218b33:	0f 85 5e ff ff ff    	jne    8218a97 <_ZN25Dispatcher_DisJointAvatar20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE+0x61>
 8218b39:	eb 01                	jmp    8218b3c <_ZN25Dispatcher_DisJointAvatar20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE+0x106>
 8218b3b:	90                   	nop
 8218b3c:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 8218b3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8218b42:	89 04 24             	mov    %eax,(%esp)
 8218b45:	e8 ca 4c ec ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8218b4a:	39 c3                	cmp    %eax,%ebx
 8218b4c:	0f 95 c0             	setne  %al
 8218b4f:	84 c0                	test   %al,%al
 8218b51:	75 3a                	jne    8218b8d <_ZN25Dispatcher_DisJointAvatar20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE+0x157>
 8218b53:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8218b56:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8218b59:	8d 5d a6             	lea    -0x5a(%ebp),%ebx
 8218b5c:	a1 30 be 40 09       	mov    0x940be30,%eax
 8218b61:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8218b68:	00 
 8218b69:	89 04 24             	mov    %eax,(%esp)
 8218b6c:	e8 87 91 ef ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8218b71:	c7 44 24 08 36 00 00 	movl   $0x36,0x8(%esp)
 8218b78:	00 
 8218b79:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8218b7d:	89 04 24             	mov    %eax,(%esp)
 8218b80:	e8 bf 94 25 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 8218b85:	eb 07                	jmp    8218b8e <_ZN25Dispatcher_DisJointAvatar20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE+0x158>
 8218b87:	90                   	nop
 8218b88:	eb 04                	jmp    8218b8e <_ZN25Dispatcher_DisJointAvatar20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE+0x158>
 8218b8a:	90                   	nop
 8218b8b:	eb 01                	jmp    8218b8e <_ZN25Dispatcher_DisJointAvatar20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE+0x158>
 8218b8d:	90                   	nop
 8218b8e:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8218b91:	c9                   	leave
 8218b92:	c3                   	ret
 8218b93:	90                   	nop

```

```c
// Dispatcher_DisJointAvatar::SendCreateEmblemInfo @ 0x8218a36

/* Dispatcher_DisJointAvatar::SendCreateEmblemInfo(std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > > const&) */

void __thiscall
Dispatcher_DisJointAvatar::SendCreateEmblemInfo(Dispatcher_DisJointAvatar *this,vector *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  CDataManager *this_00;
  int iVar5;
  CStatisticServerProxy *this_01;
  Packet_Emblem_Create_Statistic local_5e [2];
  int aiStack_5c [13];
  __normal_iterator local_28 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_24 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  CItem *local_10;
  
  Packet_Emblem_Create_Statistic::Packet_Emblem_Create_Statistic(local_5e);
  uVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
  if (uVar3 < 6) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    local_1c = 0;
    while (bVar2 = __gnu_cxx::operator!=(local_24,local_28), bVar2) {
      piVar4 = (int *)__gnu_cxx::
                      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_24);
      local_18 = *piVar4;
      iVar5 = __gnu_cxx::
              __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
              ::operator->(local_24);
      iVar1 = local_18;
      local_14 = *(int *)(iVar5 + 4);
      this_00 = (CDataManager *)G_CDataManager();
      local_10 = (CItem *)CDataManager::find_item(this_00,iVar1);
      iVar1 = local_1c;
      if (local_10 == (CItem *)0x0) {
        return;
      }
      iVar5 = CItem::get_grade(local_10);
      aiStack_5c[iVar1 + 3] = iVar5;
      aiStack_5c[local_1c + 8] = local_14;
      local_1c = local_1c + 1;
      if (5 < local_1c) break;
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_20,(int)local_24);
    }
    iVar1 = local_1c;
    iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
    if (iVar1 == iVar5) {
      aiStack_5c[2] = local_1c;
      this_01 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,0);
      CStatisticServerProxy::SendPacket(this_01,(char *)local_5e,0x36);
    }
  }
  return;
}

```

---

## SendDisjointAvatarInfo

```asm
// === 08218996 Dispatcher_DisJointAvatar::SendDisjointAvatarInfo  [0x08218996-0x8218a35] ===
 8218996:	55                   	push   %ebp
 8218997:	89 e5                	mov    %esp,%ebp
 8218999:	53                   	push   %ebx
 821899a:	83 ec 44             	sub    $0x44,%esp
 821899d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 82189a0:	89 04 24             	mov    %eax,(%esp)
 82189a3:	e8 06 82 ef ff       	call   8110bae <_ZN32Packet_Avater_Disjoint_StatisticC1Ev>
 82189a8:	c7 45 d6 01 00 00 00 	movl   $0x1,-0x2a(%ebp)
 82189af:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82189b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82189b9:	89 04 24             	mov    %eax,(%esp)
 82189bc:	e8 15 89 ed ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 82189c1:	83 f8 02             	cmp    $0x2,%eax
 82189c4:	0f 94 c0             	sete   %al
 82189c7:	84 c0                	test   %al,%al
 82189c9:	74 09                	je     82189d4 <_ZN25Dispatcher_DisJointAvatar22SendDisjointAvatarInfoEPK5CItem+0x3e>
 82189cb:	c7 45 f4 02 00 00 00 	movl   $0x2,-0xc(%ebp)
 82189d2:	eb 11                	jmp    82189e5 <_ZN25Dispatcher_DisJointAvatar22SendDisjointAvatarInfoEPK5CItem+0x4f>
 82189d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82189d7:	89 04 24             	mov    %eax,(%esp)
 82189da:	e8 75 82 ef ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 82189df:	83 e8 01             	sub    $0x1,%eax
 82189e2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82189e5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82189e8:	89 45 da             	mov    %eax,-0x26(%ebp)
 82189eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82189ee:	8b 00                	mov    (%eax),%eax
 82189f0:	83 c0 0c             	add    $0xc,%eax
 82189f3:	8b 10                	mov    (%eax),%edx
 82189f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82189f8:	89 04 24             	mov    %eax,(%esp)
 82189fb:	ff d2                	call   *%edx
 82189fd:	89 45 de             	mov    %eax,-0x22(%ebp)
 8218a00:	c6 45 e2 01          	movb   $0x1,-0x1e(%ebp)
 8218a04:	8d 5d cc             	lea    -0x34(%ebp),%ebx
 8218a07:	a1 30 be 40 09       	mov    0x940be30,%eax
 8218a0c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8218a13:	00 
 8218a14:	89 04 24             	mov    %eax,(%esp)
 8218a17:	e8 dc 92 ef ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8218a1c:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 8218a23:	00 
 8218a24:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8218a28:	89 04 24             	mov    %eax,(%esp)
 8218a2b:	e8 14 96 25 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 8218a30:	83 c4 44             	add    $0x44,%esp
 8218a33:	5b                   	pop    %ebx
 8218a34:	5d                   	pop    %ebp
 8218a35:	c3                   	ret

```

```c
// Dispatcher_DisJointAvatar::SendDisjointAvatarInfo @ 0x8218996

/* Dispatcher_DisJointAvatar::SendDisjointAvatarInfo(CItem const*) */

void __thiscall
Dispatcher_DisJointAvatar::SendDisjointAvatarInfo(Dispatcher_DisJointAvatar *this,CItem *param_1)

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

## _getJewelTypeIndex

```asm
// === 0821857c Dispatcher_DisJointAvatar::_getJewelTypeIndex  [0x0821857c-0x8218597] ===
 821857c:	55                   	push   %ebp
 821857d:	89 e5                	mov    %esp,%ebp
 821857f:	83 ec 28             	sub    $0x28,%esp
 8218582:	8b 45 0c             	mov    0xc(%ebp),%eax
 8218585:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 8218589:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
 821858d:	89 04 24             	mov    %eax,(%esp)
 8218590:	e8 f7 23 01 00       	call   822a98c <_Z22getAvatarEmblemTypeIdxt>
 8218595:	c9                   	leave
 8218596:	c3                   	ret
 8218597:	90                   	nop

```

```c
// Dispatcher_DisJointAvatar::_getJewelTypeIndex @ 0x821857c

/* Dispatcher_DisJointAvatar::_getJewelTypeIndex(unsigned short) const */

void __thiscall
Dispatcher_DisJointAvatar::_getJewelTypeIndex(Dispatcher_DisJointAvatar *this,ushort param_1)

{
  getAvatarEmblemTypeIdx(param_1);
  return;
}

```

---

## _getResultItems

```asm
// === 0821873c Dispatcher_DisJointAvatar::_getResultItems  [0x0821873c-0x8218995] ===
 821873c:	55                   	push   %ebp
 821873d:	89 e5                	mov    %esp,%ebp
 821873f:	56                   	push   %esi
 8218740:	53                   	push   %ebx
 8218741:	83 ec 50             	sub    $0x50,%esp
 8218744:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 821874b:	83 7d 14 ff          	cmpl   $0xffffffff,0x14(%ebp)
 821874f:	0f 84 87 00 00 00    	je     82187dc <_ZNK25Dispatcher_DisJointAvatar15_getResultItemsEP5CUserPK5CItemiRSt6vectorISt4pairIiiESaIS7_EE+0xa0>
 8218755:	c6 45 f3 0b          	movb   $0xb,-0xd(%ebp)
 8218759:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8218760:	eb 23                	jmp    8218785 <_ZNK25Dispatcher_DisJointAvatar15_getResultItemsEP5CUserPK5CItemiRSt6vectorISt4pairIiiESaIS7_EE+0x49>
 8218762:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8218765:	0f be c0             	movsbl %al,%eax
 8218768:	89 44 24 04          	mov    %eax,0x4(%esp)
 821876c:	8b 45 10             	mov    0x10(%ebp),%eax
 821876f:	89 04 24             	mov    %eax,(%esp)
 8218772:	e8 b1 4f 2f 00       	call   850d728 <_ZNK5CItem14check_job_typeEc>
 8218777:	84 c0                	test   %al,%al
 8218779:	74 06                	je     8218781 <_ZNK25Dispatcher_DisJointAvatar15_getResultItemsEP5CUserPK5CItemiRSt6vectorISt4pairIiiESaIS7_EE+0x45>
 821877b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 821877e:	88 45 f3             	mov    %al,-0xd(%ebp)
 8218781:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8218785:	83 7d f4 0a          	cmpl   $0xa,-0xc(%ebp)
 8218789:	0f 9e c0             	setle  %al
 821878c:	84 c0                	test   %al,%al
 821878e:	75 d2                	jne    8218762 <_ZNK25Dispatcher_DisJointAvatar15_getResultItemsEP5CUserPK5CItemiRSt6vectorISt4pairIiiESaIS7_EE+0x26>
 8218790:	80 7d f3 0b          	cmpb   $0xb,-0xd(%ebp)
 8218794:	75 0a                	jne    82187a0 <_ZNK25Dispatcher_DisJointAvatar15_getResultItemsEP5CUserPK5CItemiRSt6vectorISt4pairIiiESaIS7_EE+0x64>
 8218796:	bb 16 00 00 00       	mov    $0x16,%ebx
 821879b:	e9 ea 01 00 00       	jmp    821898a <_ZNK25Dispatcher_DisJointAvatar15_getResultItemsEP5CUserPK5CItemiRSt6vectorISt4pairIiiESaIS7_EE+0x24e>
 82187a0:	e8 f6 39 eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 82187a5:	8b 70 1c             	mov    0x1c(%eax),%esi
 82187a8:	0f be 5d f3          	movsbl -0xd(%ebp),%ebx
 82187ac:	8b 45 10             	mov    0x10(%ebp),%eax
 82187af:	89 04 24             	mov    %eax,(%esp)
 82187b2:	e8 9d 84 ef ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 82187b7:	8b 4d 14             	mov    0x14(%ebp),%ecx
 82187ba:	89 c2                	mov    %eax,%edx
 82187bc:	c1 e2 02             	shl    $0x2,%edx
 82187bf:	01 c2                	add    %eax,%edx
 82187c1:	89 d8                	mov    %ebx,%eax
 82187c3:	c1 e0 02             	shl    $0x2,%eax
 82187c6:	01 d8                	add    %ebx,%eax
 82187c8:	c1 e0 02             	shl    $0x2,%eax
 82187cb:	8d 04 02             	lea    (%edx,%eax,1),%eax
 82187ce:	01 c8                	add    %ecx,%eax
 82187d0:	83 c0 34             	add    $0x34,%eax
 82187d3:	8b 44 86 04          	mov    0x4(%esi,%eax,4),%eax
 82187d7:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82187da:	eb 40                	jmp    821881c <_ZNK25Dispatcher_DisJointAvatar15_getResultItemsEP5CUserPK5CItemiRSt6vectorISt4pairIiiESaIS7_EE+0xe0>
 82187dc:	e8 ba 39 eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 82187e1:	8b 70 1c             	mov    0x1c(%eax),%esi
 82187e4:	8b 45 10             	mov    0x10(%ebp),%eax
 82187e7:	89 04 24             	mov    %eax,(%esp)
 82187ea:	e8 65 84 ef ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 82187ef:	89 c3                	mov    %eax,%ebx
 82187f1:	8b 45 10             	mov    0x10(%ebp),%eax
 82187f4:	8b 00                	mov    (%eax),%eax
 82187f6:	83 c0 0c             	add    $0xc,%eax
 82187f9:	8b 10                	mov    (%eax),%edx
 82187fb:	8b 45 10             	mov    0x10(%ebp),%eax
 82187fe:	89 04 24             	mov    %eax,(%esp)
 8218801:	ff d2                	call   *%edx
 8218803:	89 c2                	mov    %eax,%edx
 8218805:	89 d8                	mov    %ebx,%eax
 8218807:	c1 e0 02             	shl    $0x2,%eax
 821880a:	01 d8                	add    %ebx,%eax
 821880c:	01 c0                	add    %eax,%eax
 821880e:	01 d0                	add    %edx,%eax
 8218810:	05 10 01 00 00       	add    $0x110,%eax
 8218815:	8b 44 86 04          	mov    0x4(%esi,%eax,4),%eax
 8218819:	89 45 e8             	mov    %eax,-0x18(%ebp)
 821881c:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8218820:	75 0a                	jne    821882c <_ZNK25Dispatcher_DisJointAvatar15_getResultItemsEP5CUserPK5CItemiRSt6vectorISt4pairIiiESaIS7_EE+0xf0>
 8218822:	bb 16 00 00 00       	mov    $0x16,%ebx
 8218827:	e9 5e 01 00 00       	jmp    821898a <_ZNK25Dispatcher_DisJointAvatar15_getResultItemsEP5CUserPK5CItemiRSt6vectorISt4pairIiiESaIS7_EE+0x24e>
 821882c:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 821882f:	e8 67 39 eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 8218834:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8218838:	89 04 24             	mov    %eax,(%esp)
 821883b:	e8 f2 71 14 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8218840:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8218843:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8218847:	74 17                	je     8218860 <_ZNK25Dispatcher_DisJointAvatar15_getResultItemsEP5CUserPK5CItemiRSt6vectorISt4pairIiiESaIS7_EE+0x124>
 8218849:	8b 45 ec             	mov    -0x14(%ebp),%eax
 821884c:	8b 00                	mov    (%eax),%eax
 821884e:	83 c0 0c             	add    $0xc,%eax
 8218851:	8b 10                	mov    (%eax),%edx
 8218853:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8218856:	89 04 24             	mov    %eax,(%esp)
 8218859:	ff d2                	call   *%edx
 821885b:	83 f8 10             	cmp    $0x10,%eax
 821885e:	74 07                	je     8218867 <_ZNK25Dispatcher_DisJointAvatar15_getResultItemsEP5CUserPK5CItemiRSt6vectorISt4pairIiiESaIS7_EE+0x12b>
 8218860:	b8 01 00 00 00       	mov    $0x1,%eax
 8218865:	eb 05                	jmp    821886c <_ZNK25Dispatcher_DisJointAvatar15_getResultItemsEP5CUserPK5CItemiRSt6vectorISt4pairIiiESaIS7_EE+0x130>
 8218867:	b8 00 00 00 00       	mov    $0x0,%eax
 821886c:	84 c0                	test   %al,%al
 821886e:	74 0a                	je     821887a <_ZNK25Dispatcher_DisJointAvatar15_getResultItemsEP5CUserPK5CItemiRSt6vectorISt4pairIiiESaIS7_EE+0x13e>
 8218870:	bb 16 00 00 00       	mov    $0x16,%ebx
 8218875:	e9 10 01 00 00       	jmp    821898a <_ZNK25Dispatcher_DisJointAvatar15_getResultItemsEP5CUserPK5CItemiRSt6vectorISt4pairIiiESaIS7_EE+0x24e>
 821887a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 821887d:	89 04 24             	mov    %eax,(%esp)
 8218880:	e8 23 92 ef ff       	call   8111aa8 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EEC1Ev>
 8218885:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8218888:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 821888b:	89 54 24 04          	mov    %edx,0x4(%esp)
 821888f:	89 04 24             	mov    %eax,(%esp)
 8218892:	e8 c7 6e 2f 00       	call   850f75e <_ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE>
 8218897:	8d 45 d0             	lea    -0x30(%ebp),%eax
 821889a:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 821889d:	89 54 24 04          	mov    %edx,0x4(%esp)
 82188a1:	89 04 24             	mov    %eax,(%esp)
 82188a4:	e8 71 92 ef ff       	call   8111b1a <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE5beginEv>
 82188a9:	83 ec 04             	sub    $0x4,%esp
 82188ac:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82188af:	89 44 24 04          	mov    %eax,0x4(%esp)
 82188b3:	8d 45 c0             	lea    -0x40(%ebp),%eax
 82188b6:	89 04 24             	mov    %eax,(%esp)
 82188b9:	e8 80 92 ef ff       	call   8111b3e <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 82188be:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82188c1:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 82188c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 82188c8:	89 04 24             	mov    %eax,(%esp)
 82188cb:	e8 88 92 ef ff       	call   8111b58 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE3endEv>
 82188d0:	83 ec 04             	sub    $0x4,%esp
 82188d3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82188d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82188da:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82188dd:	89 04 24             	mov    %eax,(%esp)
 82188e0:	e8 59 92 ef ff       	call   8111b3e <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 82188e5:	eb 60                	jmp    8218947 <_ZNK25Dispatcher_DisJointAvatar15_getResultItemsEP5CUserPK5CItemiRSt6vectorISt4pairIiiESaIS7_EE+0x20b>
 82188e7:	8d 45 c0             	lea    -0x40(%ebp),%eax
 82188ea:	89 04 24             	mov    %eax,(%esp)
 82188ed:	e8 ce 92 ef ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 82188f2:	8d 58 08             	lea    0x8(%eax),%ebx
 82188f5:	8d 45 c0             	lea    -0x40(%ebp),%eax
 82188f8:	89 04 24             	mov    %eax,(%esp)
 82188fb:	e8 c0 92 ef ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 8218900:	89 c2                	mov    %eax,%edx
 8218902:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8218905:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8218909:	89 54 24 04          	mov    %edx,0x4(%esp)
 821890d:	89 04 24             	mov    %eax,(%esp)
 8218910:	e8 b5 92 ef ff       	call   8111bca <_ZSt9make_pairIRKjRKtESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 8218915:	83 ec 04             	sub    $0x4,%esp
 8218918:	8d 45 e0             	lea    -0x20(%ebp),%eax
 821891b:	89 44 24 04          	mov    %eax,0x4(%esp)
 821891f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8218922:	89 04 24             	mov    %eax,(%esp)
 8218925:	e8 de 92 ef ff       	call   8111c08 <_ZNSt4pairIiiEC1IjtEEOS_IT_T0_E>
 821892a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 821892d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8218931:	8b 45 18             	mov    0x18(%ebp),%eax
 8218934:	89 04 24             	mov    %eax,(%esp)
 8218937:	e8 ca 4c ec ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 821893c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 821893f:	89 04 24             	mov    %eax,(%esp)
 8218942:	e8 63 92 ef ff       	call   8111baa <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEppEv>
 8218947:	8d 45 bc             	lea    -0x44(%ebp),%eax
 821894a:	89 44 24 04          	mov    %eax,0x4(%esp)
 821894e:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8218951:	89 04 24             	mov    %eax,(%esp)
 8218954:	e8 d4 f2 01 00       	call   8237c2d <_ZN9__gnu_cxxneIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8218959:	84 c0                	test   %al,%al
 821895b:	75 8a                	jne    82188e7 <_ZNK25Dispatcher_DisJointAvatar15_getResultItemsEP5CUserPK5CItemiRSt6vectorISt4pairIiiESaIS7_EE+0x1ab>
 821895d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8218962:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8218965:	89 04 24             	mov    %eax,(%esp)
 8218968:	e8 4f 91 ef ff       	call   8111abc <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EED1Ev>
 821896d:	eb 1b                	jmp    821898a <_ZNK25Dispatcher_DisJointAvatar15_getResultItemsEP5CUserPK5CItemiRSt6vectorISt4pairIiiESaIS7_EE+0x24e>
 821896f:	89 d3                	mov    %edx,%ebx
 8218971:	89 c6                	mov    %eax,%esi
 8218973:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8218976:	89 04 24             	mov    %eax,(%esp)
 8218979:	e8 3e 91 ef ff       	call   8111abc <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EED1Ev>
 821897e:	89 f0                	mov    %esi,%eax
 8218980:	89 da                	mov    %ebx,%edx
 8218982:	89 04 24             	mov    %eax,(%esp)
 8218985:	e8 c6 ad 8c 00       	call   8ae3750 <_Unwind_Resume>
 821898a:	89 d8                	mov    %ebx,%eax
 821898c:	8d 65 f8             	lea    -0x8(%ebp),%esp
 821898f:	83 c4 00             	add    $0x0,%esp
 8218992:	5b                   	pop    %ebx
 8218993:	5e                   	pop    %esi
 8218994:	5d                   	pop    %ebp
 8218995:	c3                   	ret

```

```c
// Dispatcher_DisJointAvatar::_getResultItems @ 0x821873c

/* Dispatcher_DisJointAvatar::_getResultItems(CUser*, CItem const*, int, std::vector<std::pair<int,
   int>, std::allocator<std::pair<int, int> > >&) const */

undefined4 __thiscall
Dispatcher_DisJointAvatar::_getResultItems
          (Dispatcher_DisJointAvatar *this,CUser *param_1,CItem *param_2,int param_3,vector *param_4
          )

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  CDataManager *this_00;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_48 [4];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_44 [4];
  vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> local_40 [12];
  __normal_iterator local_34 [4];
  __normal_iterator local_30 [4];
  pair<int,int> local_2c [8];
  uint local_24 [2];
  int local_1c;
  CStackableItem *local_18;
  char local_11;
  int local_10;
  
  local_1c = 0;
  if (param_3 == -1) {
    iVar3 = G_CDataManager();
    iVar3 = *(int *)(iVar3 + 0x1c);
    iVar4 = CItem::get_grade(param_2);
    iVar6 = (**(code **)(*(int *)param_2 + 0xc))(param_2);
    local_1c = *(int *)(iVar3 + 4 + (iVar4 * 10 + iVar6 + 0x110) * 4);
  }
  else {
    local_11 = '\v';
    for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
      cVar1 = CItem::check_job_type(param_2,(char)local_10);
      if (cVar1 != '\0') {
        local_11 = (char)local_10;
      }
    }
    if (local_11 == '\v') {
      return 0x16;
    }
    iVar3 = G_CDataManager();
    iVar3 = *(int *)(iVar3 + 0x1c);
    iVar6 = (int)local_11;
    iVar4 = CItem::get_grade(param_2);
    local_1c = *(int *)(iVar3 + 4 + (iVar4 * 5 + iVar6 * 0x14 + param_3 + 0x34) * 4);
  }
  iVar3 = local_1c;
  if (local_1c != 0) {
    this_00 = (CDataManager *)G_CDataManager();
    local_18 = (CStackableItem *)CDataManager::find_item(this_00,iVar3);
    if ((local_18 == (CStackableItem *)0x0) ||
       (iVar3 = (**(code **)(*(int *)local_18 + 0xc))(local_18), iVar3 != 0x10)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar7 = 0x16;
    }
    else {
      std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::vector
                (local_40);
                    /* try { // try from 08218892 to 08218958 has its CatchHandler @ 0821896f */
      CStackableItem::getBoosterItem(local_18,(vector *)local_40);
      std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::begin
                ();
      __gnu_cxx::
      __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
      ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_44,local_34);
      std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::end();
      __gnu_cxx::
      __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
      ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_48,local_30);
      while (bVar2 = __gnu_cxx::operator!=(local_44,local_48), bVar2) {
        __gnu_cxx::
        __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
        ::operator->(local_44);
        puVar5 = (ushort *)
                 __gnu_cxx::
                 __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                 ::operator->(local_44);
        std::make_pair<unsigned_int_const&,unsigned_short_const&>(local_24,puVar5);
        std::pair<int,int>::pair<unsigned_int,unsigned_short>(local_2c,(pair *)local_24);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_4,local_2c
                  );
        __gnu_cxx::
        __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
        ::operator++(local_44);
      }
      uVar7 = 0;
      std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
      ~vector(local_40);
    }
    return uVar7;
  }
  return 0x16;
}

```

---

## _selectJewelTypeIndex

```asm
// === 08218598 Dispatcher_DisJointAvatar::_selectJewelTypeIndex  [0x08218598-0x821873b] ===
 8218598:	55                   	push   %ebp
 8218599:	89 e5                	mov    %esp,%ebp
 821859b:	83 ec 68             	sub    $0x68,%esp
 821859e:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 82185a5:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 82185ac:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 82185b3:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 82185ba:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 82185c1:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 82185c8:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 82185cf:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 82185d6:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 82185dd:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 82185e4:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 82185eb:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 82185f2:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 82185f9:	e9 96 00 00 00       	jmp    8218694 <_ZNK25Dispatcher_DisJointAvatar21_selectJewelTypeIndexEPK20stAvatarEmblemInfo_t+0xfc>
 82185fe:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8218601:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8218604:	89 d0                	mov    %edx,%eax
 8218606:	01 c0                	add    %eax,%eax
 8218608:	01 d0                	add    %edx,%eax
 821860a:	01 c0                	add    %eax,%eax
 821860c:	0f b7 04 08          	movzwl (%eax,%ecx,1),%eax
 8218610:	66 85 c0             	test   %ax,%ax
 8218613:	74 71                	je     8218686 <_ZNK25Dispatcher_DisJointAvatar21_selectJewelTypeIndexEPK20stAvatarEmblemInfo_t+0xee>
 8218615:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8218618:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 821861b:	89 d0                	mov    %edx,%eax
 821861d:	01 c0                	add    %eax,%eax
 821861f:	01 d0                	add    %edx,%eax
 8218621:	01 c0                	add    %eax,%eax
 8218623:	0f b7 04 08          	movzwl (%eax,%ecx,1),%eax
 8218627:	66 83 f8 ef          	cmp    $0xffef,%ax
 821862b:	74 5c                	je     8218689 <_ZNK25Dispatcher_DisJointAvatar21_selectJewelTypeIndexEPK20stAvatarEmblemInfo_t+0xf1>
 821862d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8218630:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8218633:	89 d0                	mov    %edx,%eax
 8218635:	01 c0                	add    %eax,%eax
 8218637:	01 d0                	add    %edx,%eax
 8218639:	01 c0                	add    %eax,%eax
 821863b:	0f b7 04 08          	movzwl (%eax,%ecx,1),%eax
 821863f:	66 83 f8 ff          	cmp    $0xffff,%ax
 8218643:	74 47                	je     821868c <_ZNK25Dispatcher_DisJointAvatar21_selectJewelTypeIndexEPK20stAvatarEmblemInfo_t+0xf4>
 8218645:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8218648:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 821864b:	89 d0                	mov    %edx,%eax
 821864d:	01 c0                	add    %eax,%eax
 821864f:	01 d0                	add    %edx,%eax
 8218651:	01 c0                	add    %eax,%eax
 8218653:	0f b7 04 08          	movzwl (%eax,%ecx,1),%eax
 8218657:	0f b7 c0             	movzwl %ax,%eax
 821865a:	89 44 24 04          	mov    %eax,0x4(%esp)
 821865e:	8b 45 08             	mov    0x8(%ebp),%eax
 8218661:	89 04 24             	mov    %eax,(%esp)
 8218664:	e8 13 ff ff ff       	call   821857c <_ZNK25Dispatcher_DisJointAvatar18_getJewelTypeIndexEt>
 8218669:	89 45 e8             	mov    %eax,-0x18(%ebp)
 821866c:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
 8218670:	74 1d                	je     821868f <_ZNK25Dispatcher_DisJointAvatar21_selectJewelTypeIndexEPK20stAvatarEmblemInfo_t+0xf7>
 8218672:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8218675:	8b 54 85 c4          	mov    -0x3c(%ebp,%eax,4),%edx
 8218679:	83 c2 01             	add    $0x1,%edx
 821867c:	89 54 85 c4          	mov    %edx,-0x3c(%ebp,%eax,4)
 8218680:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 8218684:	eb 0a                	jmp    8218690 <_ZNK25Dispatcher_DisJointAvatar21_selectJewelTypeIndexEPK20stAvatarEmblemInfo_t+0xf8>
 8218686:	90                   	nop
 8218687:	eb 07                	jmp    8218690 <_ZNK25Dispatcher_DisJointAvatar21_selectJewelTypeIndexEPK20stAvatarEmblemInfo_t+0xf8>
 8218689:	90                   	nop
 821868a:	eb 04                	jmp    8218690 <_ZNK25Dispatcher_DisJointAvatar21_selectJewelTypeIndexEPK20stAvatarEmblemInfo_t+0xf8>
 821868c:	90                   	nop
 821868d:	eb 01                	jmp    8218690 <_ZNK25Dispatcher_DisJointAvatar21_selectJewelTypeIndexEPK20stAvatarEmblemInfo_t+0xf8>
 821868f:	90                   	nop
 8218690:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8218694:	83 7d e4 04          	cmpl   $0x4,-0x1c(%ebp)
 8218698:	0f 9e c0             	setle  %al
 821869b:	84 c0                	test   %al,%al
 821869d:	0f 85 5b ff ff ff    	jne    82185fe <_ZNK25Dispatcher_DisJointAvatar21_selectJewelTypeIndexEPK20stAvatarEmblemInfo_t+0x66>
 82186a3:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 82186a7:	75 0a                	jne    82186b3 <_ZNK25Dispatcher_DisJointAvatar21_selectJewelTypeIndexEPK20stAvatarEmblemInfo_t+0x11b>
 82186a9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 82186ae:	e9 86 00 00 00       	jmp    8218739 <_ZNK25Dispatcher_DisJointAvatar21_selectJewelTypeIndexEPK20stAvatarEmblemInfo_t+0x1a1>
 82186b3:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82186ba:	eb 36                	jmp    82186f2 <_ZNK25Dispatcher_DisJointAvatar21_selectJewelTypeIndexEPK20stAvatarEmblemInfo_t+0x15a>
 82186bc:	b8 10 27 00 00       	mov    $0x2710,%eax
 82186c1:	89 c2                	mov    %eax,%edx
 82186c3:	c1 fa 1f             	sar    $0x1f,%edx
 82186c6:	f7 7d d8             	idivl  -0x28(%ebp)
 82186c9:	89 c2                	mov    %eax,%edx
 82186cb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82186ce:	8b 44 85 c4          	mov    -0x3c(%ebp,%eax,4),%eax
 82186d2:	0f af c2             	imul   %edx,%eax
 82186d5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82186d8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82186db:	8b 55 dc             	mov    -0x24(%ebp),%edx
 82186de:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 82186e1:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 82186e4:	89 54 85 b0          	mov    %edx,-0x50(%ebp,%eax,4)
 82186e8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82186eb:	01 45 dc             	add    %eax,-0x24(%ebp)
 82186ee:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 82186f2:	83 7d ec 04          	cmpl   $0x4,-0x14(%ebp)
 82186f6:	0f 9e c0             	setle  %al
 82186f9:	84 c0                	test   %al,%al
 82186fb:	75 bf                	jne    82186bc <_ZNK25Dispatcher_DisJointAvatar21_selectJewelTypeIndexEPK20stAvatarEmblemInfo_t+0x124>
 82186fd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8218700:	89 04 24             	mov    %eax,(%esp)
 8218703:	e8 7f 94 49 00       	call   86b1b87 <_Z12get_rand_inti>
 8218708:	89 45 e0             	mov    %eax,-0x20(%ebp)
 821870b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8218712:	eb 15                	jmp    8218729 <_ZNK25Dispatcher_DisJointAvatar21_selectJewelTypeIndexEPK20stAvatarEmblemInfo_t+0x191>
 8218714:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8218717:	8b 44 85 b0          	mov    -0x50(%ebp,%eax,4),%eax
 821871b:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 821871e:	7e 05                	jle    8218725 <_ZNK25Dispatcher_DisJointAvatar21_selectJewelTypeIndexEPK20stAvatarEmblemInfo_t+0x18d>
 8218720:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8218723:	eb 14                	jmp    8218739 <_ZNK25Dispatcher_DisJointAvatar21_selectJewelTypeIndexEPK20stAvatarEmblemInfo_t+0x1a1>
 8218725:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8218729:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 821872d:	0f 9e c0             	setle  %al
 8218730:	84 c0                	test   %al,%al
 8218732:	75 e0                	jne    8218714 <_ZNK25Dispatcher_DisJointAvatar21_selectJewelTypeIndexEPK20stAvatarEmblemInfo_t+0x17c>
 8218734:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8218739:	c9                   	leave
 821873a:	c3                   	ret
 821873b:	90                   	nop

```

```c
// Dispatcher_DisJointAvatar::_selectJewelTypeIndex @ 0x8218598

/* Dispatcher_DisJointAvatar::_selectJewelTypeIndex(stAvatarEmblemInfo_t const*) const */

int __thiscall
Dispatcher_DisJointAvatar::_selectJewelTypeIndex
          (Dispatcher_DisJointAvatar *this,stAvatarEmblemInfo_t *param_1)

{
  int local_54 [13];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_54[5] = 0;
  local_54[6] = 0;
  local_54[7] = 0;
  local_54[8] = 0;
  local_54[9] = 0;
  local_54[0] = 0;
  local_54[1] = 0;
  local_54[2] = 0;
  local_54[3] = 0;
  local_54[4] = 0;
  local_54[10] = 0;
  local_54[0xb] = 0;
  for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
    if (((*(short *)(param_1 + local_20 * 6) != 0) && (*(short *)(param_1 + local_20 * 6) != -0x11))
       && (*(short *)(param_1 + local_20 * 6) != -1)) {
      local_1c = _getJewelTypeIndex(this,*(ushort *)(param_1 + local_20 * 6));
      if (local_1c != -1) {
        local_54[local_1c + 5] = local_54[local_1c + 5] + 1;
        local_54[10] = local_54[10] + 1;
      }
    }
  }
  if (local_54[10] != 0) {
    for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
      local_14 = local_54[local_18 + 5] * (int)(10000 / (longlong)local_54[10]);
      local_54[local_18] = local_14 + local_54[0xb];
      local_54[0xb] = local_54[0xb] + local_14;
    }
    local_54[0xc] = get_rand_int(local_54[0xb]);
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      if (local_54[0xc] < local_54[local_10]) {
        return local_10;
      }
    }
  }
  return -1;
}

```

---

## dispatch_sig

```asm
// === 08217c06 Dispatcher_DisJointAvatar::dispatch_sig  [0x08217c06-0x821857b] ===
 8217c06:	55                   	push   %ebp
 8217c07:	89 e5                	mov    %esp,%ebp
 8217c09:	56                   	push   %esi
 8217c0a:	53                   	push   %ebx
 8217c0b:	81 ec 00 01 00 00    	sub    $0x100,%esp
 8217c11:	8b 45 0c             	mov    0xc(%ebp),%eax
 8217c14:	89 04 24             	mov    %eax,(%esp)
 8217c17:	e8 70 27 ec ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8217c1c:	83 f8 03             	cmp    $0x3,%eax
 8217c1f:	0f 95 c0             	setne  %al
 8217c22:	84 c0                	test   %al,%al
 8217c24:	74 0a                	je     8217c30 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x2a>
 8217c26:	bb 00 00 00 00       	mov    $0x0,%ebx
 8217c2b:	e9 40 09 00 00       	jmp    8218570 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x96a>
 8217c30:	8b 45 0c             	mov    0xc(%ebp),%eax
 8217c33:	89 04 24             	mov    %eax,(%esp)
 8217c36:	e8 6d 94 46 00       	call   86810a8 <_ZN5CUser26isEnableAvatarSocketActionEv>
 8217c3b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8217c3e:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8217c42:	74 27                	je     8217c6b <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x65>
 8217c44:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8217c47:	0f b6 c0             	movzbl %al,%eax
 8217c4a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8217c4e:	c7 44 24 04 cd 00 00 	movl   $0xcd,0x4(%esp)
 8217c55:	00 
 8217c56:	8b 45 0c             	mov    0xc(%ebp),%eax
 8217c59:	89 04 24             	mov    %eax,(%esp)
 8217c5c:	e8 e1 42 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8217c61:	bb 00 00 00 00       	mov    $0x0,%ebx
 8217c66:	e9 05 09 00 00       	jmp    8218570 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x96a>
 8217c6b:	e8 76 a9 f4 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 8217c70:	c7 44 24 0c 14 00 00 	movl   $0x14,0xc(%esp)
 8217c77:	00 
 8217c78:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8217c7f:	00 
 8217c80:	8b 55 0c             	mov    0xc(%ebp),%edx
 8217c83:	89 54 24 04          	mov    %edx,0x4(%esp)
 8217c87:	89 04 24             	mov    %eax,(%esp)
 8217c8a:	e8 29 6a f5 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 8217c8f:	84 c0                	test   %al,%al
 8217c91:	74 25                	je     8217cb8 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0xb2>
 8217c93:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 8217c9a:	00 
 8217c9b:	c7 44 24 04 cd 00 00 	movl   $0xcd,0x4(%esp)
 8217ca2:	00 
 8217ca3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8217ca6:	89 04 24             	mov    %eax,(%esp)
 8217ca9:	e8 94 42 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8217cae:	bb 00 00 00 00       	mov    $0x0,%ebx
 8217cb3:	e9 b8 08 00 00       	jmp    8218570 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x96a>
 8217cb8:	66 c7 45 c6 00 00    	movw   $0x0,-0x3a(%ebp)
 8217cbe:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8217cc5:	8d 45 c6             	lea    -0x3a(%ebp),%eax
 8217cc8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8217ccc:	8b 45 10             	mov    0x10(%ebp),%eax
 8217ccf:	89 04 24             	mov    %eax,(%esp)
 8217cd2:	e8 d9 53 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8217cd7:	83 f0 01             	xor    $0x1,%eax
 8217cda:	84 c0                	test   %al,%al
 8217cdc:	74 2b                	je     8217d09 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x103>
 8217cde:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8217ce5:	00 
 8217ce6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8217ced:	00 
 8217cee:	c7 44 24 04 c0 d8 bc 	movl   $0x8bcd8c0,0x4(%esp)
 8217cf5:	08 
 8217cf6:	c7 04 24 a7 ca 00 00 	movl   $0xcaa7,(%esp)
 8217cfd:	e8 d5 8b 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8217d02:	89 c3                	mov    %eax,%ebx
 8217d04:	e9 67 08 00 00       	jmp    8218570 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x96a>
 8217d09:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8217d0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8217d10:	8b 45 10             	mov    0x10(%ebp),%eax
 8217d13:	89 04 24             	mov    %eax,(%esp)
 8217d16:	e8 cd 39 01 00       	call   822b6e8 <_ZN9PacketBuf12get_item_idxERm>
 8217d1b:	83 f0 01             	xor    $0x1,%eax
 8217d1e:	84 c0                	test   %al,%al
 8217d20:	74 2b                	je     8217d4d <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x147>
 8217d22:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8217d29:	00 
 8217d2a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8217d31:	00 
 8217d32:	c7 44 24 04 c0 d8 bc 	movl   $0x8bcd8c0,0x4(%esp)
 8217d39:	08 
 8217d3a:	c7 04 24 a8 ca 00 00 	movl   $0xcaa8,(%esp)
 8217d41:	e8 91 8b 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8217d46:	89 c3                	mov    %eax,%ebx
 8217d48:	e9 23 08 00 00       	jmp    8218570 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x96a>
 8217d4d:	0f b7 45 c6          	movzwl -0x3a(%ebp),%eax
 8217d51:	0f b7 c0             	movzwl %ax,%eax
 8217d54:	89 44 24 08          	mov    %eax,0x8(%esp)
 8217d58:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8217d5f:	00 
 8217d60:	8b 45 0c             	mov    0xc(%ebp),%eax
 8217d63:	89 04 24             	mov    %eax,(%esp)
 8217d66:	e8 d7 eb 42 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 8217d6b:	84 c0                	test   %al,%al
 8217d6d:	74 25                	je     8217d94 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x18e>
 8217d6f:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 8217d76:	00 
 8217d77:	c7 44 24 04 cd 00 00 	movl   $0xcd,0x4(%esp)
 8217d7e:	00 
 8217d7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8217d82:	89 04 24             	mov    %eax,(%esp)
 8217d85:	e8 b8 41 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8217d8a:	bb 00 00 00 00       	mov    $0x0,%ebx
 8217d8f:	e9 dc 07 00 00       	jmp    8218570 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x96a>
 8217d94:	8d 85 5b ff ff ff    	lea    -0xa5(%ebp),%eax
 8217d9a:	89 04 24             	mov    %eax,(%esp)
 8217d9d:	e8 b2 3a eb ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8217da2:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8217da9:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8217dac:	89 04 24             	mov    %eax,(%esp)
 8217daf:	e8 22 cc f1 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 8217db4:	0f b7 45 c6          	movzwl -0x3a(%ebp),%eax
 8217db8:	0f b7 d8             	movzwl %ax,%ebx
 8217dbb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8217dbe:	89 04 24             	mov    %eax,(%esp)
 8217dc1:	e8 b8 24 ec ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8217dc6:	8d 95 18 ff ff ff    	lea    -0xe8(%ebp),%edx
 8217dcc:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8217dd0:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8217dd7:	00 
 8217dd8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8217ddc:	89 14 24             	mov    %edx,(%esp)
 8217ddf:	e8 34 3b 2e 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8217de4:	83 ec 04             	sub    $0x4,%esp
 8217de7:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 8217ded:	89 85 5b ff ff ff    	mov    %eax,-0xa5(%ebp)
 8217df3:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
 8217df9:	89 85 5f ff ff ff    	mov    %eax,-0xa1(%ebp)
 8217dff:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 8217e05:	89 85 63 ff ff ff    	mov    %eax,-0x9d(%ebp)
 8217e0b:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 8217e11:	89 85 67 ff ff ff    	mov    %eax,-0x99(%ebp)
 8217e17:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 8217e1d:	89 85 6b ff ff ff    	mov    %eax,-0x95(%ebp)
 8217e23:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 8217e29:	89 85 6f ff ff ff    	mov    %eax,-0x91(%ebp)
 8217e2f:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
 8217e35:	89 85 73 ff ff ff    	mov    %eax,-0x8d(%ebp)
 8217e3b:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 8217e41:	89 85 77 ff ff ff    	mov    %eax,-0x89(%ebp)
 8217e47:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 8217e4d:	89 85 7b ff ff ff    	mov    %eax,-0x85(%ebp)
 8217e53:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 8217e59:	89 85 7f ff ff ff    	mov    %eax,-0x81(%ebp)
 8217e5f:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 8217e65:	89 45 83             	mov    %eax,-0x7d(%ebp)
 8217e68:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 8217e6e:	89 45 87             	mov    %eax,-0x79(%ebp)
 8217e71:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 8217e77:	89 45 8b             	mov    %eax,-0x75(%ebp)
 8217e7a:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 8217e80:	89 45 8f             	mov    %eax,-0x71(%ebp)
 8217e83:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 8217e89:	89 45 93             	mov    %eax,-0x6d(%ebp)
 8217e8c:	0f b6 85 54 ff ff ff 	movzbl -0xac(%ebp),%eax
 8217e93:	88 45 97             	mov    %al,-0x69(%ebp)
 8217e96:	8b 95 5d ff ff ff    	mov    -0xa3(%ebp),%edx
 8217e9c:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8217e9f:	39 c2                	cmp    %eax,%edx
 8217ea1:	74 2c                	je     8217ecf <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x2c9>
 8217ea3:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8217eaa:	e8 51 d9 50 00       	call   8725800 <__cxa_allocate_exception>
 8217eaf:	89 c2                	mov    %eax,%edx
 8217eb1:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 8217eb7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8217ebe:	00 
 8217ebf:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8217ec6:	08 
 8217ec7:	89 04 24             	mov    %eax,(%esp)
 8217eca:	e8 81 cd 50 00       	call   8724c50 <__cxa_throw>
 8217ecf:	8b 85 5d ff ff ff    	mov    -0xa3(%ebp),%eax
 8217ed5:	89 c3                	mov    %eax,%ebx
 8217ed7:	e8 bf 42 eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 8217edc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8217ee0:	89 04 24             	mov    %eax,(%esp)
 8217ee3:	e8 4a 7b 14 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8217ee8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8217eeb:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8217eef:	75 2c                	jne    8217f1d <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x317>
 8217ef1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8217ef8:	e8 03 d9 50 00       	call   8725800 <__cxa_allocate_exception>
 8217efd:	89 c2                	mov    %eax,%edx
 8217eff:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 8217f05:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8217f0c:	00 
 8217f0d:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8217f14:	08 
 8217f15:	89 04 24             	mov    %eax,(%esp)
 8217f18:	e8 33 cd 50 00       	call   8724c50 <__cxa_throw>
 8217f1d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8217f20:	89 04 24             	mov    %eax,(%esp)
 8217f23:	e8 2c 8d ef ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8217f28:	85 c0                	test   %eax,%eax
 8217f2a:	74 10                	je     8217f3c <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x336>
 8217f2c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8217f2f:	89 04 24             	mov    %eax,(%esp)
 8217f32:	e8 1d 8d ef ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8217f37:	83 f8 03             	cmp    $0x3,%eax
 8217f3a:	7e 07                	jle    8217f43 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x33d>
 8217f3c:	b8 01 00 00 00       	mov    $0x1,%eax
 8217f41:	eb 05                	jmp    8217f48 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x342>
 8217f43:	b8 00 00 00 00       	mov    $0x0,%eax
 8217f48:	84 c0                	test   %al,%al
 8217f4a:	74 2c                	je     8217f78 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x372>
 8217f4c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8217f53:	e8 a8 d8 50 00       	call   8725800 <__cxa_allocate_exception>
 8217f58:	89 c2                	mov    %eax,%edx
 8217f5a:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 8217f60:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8217f67:	00 
 8217f68:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8217f6f:	08 
 8217f70:	89 04 24             	mov    %eax,(%esp)
 8217f73:	e8 d8 cc 50 00       	call   8724c50 <__cxa_throw>
 8217f78:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8217f7b:	8b 00                	mov    (%eax),%eax
 8217f7d:	83 c0 24             	add    $0x24,%eax
 8217f80:	8b 10                	mov    (%eax),%edx
 8217f82:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8217f89:	00 
 8217f8a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8217f8d:	89 04 24             	mov    %eax,(%esp)
 8217f90:	ff d2                	call   *%edx
 8217f92:	83 f0 01             	xor    $0x1,%eax
 8217f95:	84 c0                	test   %al,%al
 8217f97:	74 2c                	je     8217fc5 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x3bf>
 8217f99:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8217fa0:	e8 5b d8 50 00       	call   8725800 <__cxa_allocate_exception>
 8217fa5:	89 c2                	mov    %eax,%edx
 8217fa7:	c7 02 17 00 00 00    	movl   $0x17,(%edx)
 8217fad:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8217fb4:	00 
 8217fb5:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8217fbc:	08 
 8217fbd:	89 04 24             	mov    %eax,(%esp)
 8217fc0:	e8 8b cc 50 00       	call   8724c50 <__cxa_throw>
 8217fc5:	8b 9d 62 ff ff ff    	mov    -0x9e(%ebp),%ebx
 8217fcb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8217fce:	89 04 24             	mov    %eax,(%esp)
 8217fd1:	e8 b8 22 ec ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8217fd6:	89 04 24             	mov    %eax,(%esp)
 8217fd9:	e8 98 55 ec ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 8217fde:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8217fe2:	89 04 24             	mov    %eax,(%esp)
 8217fe5:	e8 30 18 0e 00       	call   82f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>
 8217fea:	85 c0                	test   %eax,%eax
 8217fec:	0f 95 c0             	setne  %al
 8217fef:	84 c0                	test   %al,%al
 8217ff1:	74 2c                	je     821801f <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x419>
 8217ff3:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8217ffa:	e8 01 d8 50 00       	call   8725800 <__cxa_allocate_exception>
 8217fff:	89 c2                	mov    %eax,%edx
 8218001:	c7 02 17 00 00 00    	movl   $0x17,(%edx)
 8218007:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821800e:	00 
 821800f:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8218016:	08 
 8218017:	89 04 24             	mov    %eax,(%esp)
 821801a:	e8 31 cc 50 00       	call   8724c50 <__cxa_throw>
 821801f:	8d 85 5b ff ff ff    	lea    -0xa5(%ebp),%eax
 8218025:	83 c0 33             	add    $0x33,%eax
 8218028:	89 04 24             	mov    %eax,(%esp)
 821802b:	e8 da 8a ef ff       	call   8110b0a <_ZNK19UpgradeSeparateInfo18IsTradeRestrictionEv>
 8218030:	84 c0                	test   %al,%al
 8218032:	0f 95 c0             	setne  %al
 8218035:	84 c0                	test   %al,%al
 8218037:	74 2c                	je     8218065 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x45f>
 8218039:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8218040:	e8 bb d7 50 00       	call   8725800 <__cxa_allocate_exception>
 8218045:	89 c2                	mov    %eax,%edx
 8218047:	c7 02 17 00 00 00    	movl   $0x17,(%edx)
 821804d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8218054:	00 
 8218055:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 821805c:	08 
 821805d:	89 04 24             	mov    %eax,(%esp)
 8218060:	e8 eb cb 50 00       	call   8724c50 <__cxa_throw>
 8218065:	8b 9d 62 ff ff ff    	mov    -0x9e(%ebp),%ebx
 821806b:	8b 45 0c             	mov    0xc(%ebp),%eax
 821806e:	89 04 24             	mov    %eax,(%esp)
 8218071:	e8 18 22 ec ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8218076:	89 04 24             	mov    %eax,(%esp)
 8218079:	e8 f8 54 ec ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 821807e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8218082:	89 04 24             	mov    %eax,(%esp)
 8218085:	e8 6e 18 0e 00       	call   82f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>
 821808a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 821808d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8218090:	89 44 24 04          	mov    %eax,0x4(%esp)
 8218094:	8b 45 08             	mov    0x8(%ebp),%eax
 8218097:	89 04 24             	mov    %eax,(%esp)
 821809a:	e8 f9 04 00 00       	call   8218598 <_ZNK25Dispatcher_DisJointAvatar21_selectJewelTypeIndexEPK20stAvatarEmblemInfo_t>
 821809f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82180a2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82180a5:	8b 80 34 02 00 00    	mov    0x234(%eax),%eax
 82180ab:	83 f8 09             	cmp    $0x9,%eax
 82180ae:	75 07                	jne    82180b7 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x4b1>
 82180b0:	c7 45 ec ff ff ff ff 	movl   $0xffffffff,-0x14(%ebp)
 82180b7:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82180ba:	89 44 24 10          	mov    %eax,0x10(%esp)
 82180be:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82180c1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82180c5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82180c8:	89 44 24 08          	mov    %eax,0x8(%esp)
 82180cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82180cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 82180d3:	8b 45 08             	mov    0x8(%ebp),%eax
 82180d6:	89 04 24             	mov    %eax,(%esp)
 82180d9:	e8 5e 06 00 00       	call   821873c <_ZNK25Dispatcher_DisJointAvatar15_getResultItemsEP5CUserPK5CItemiRSt6vectorISt4pairIiiESaIS7_EE>
 82180de:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82180e1:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82180e5:	74 2b                	je     8218112 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x50c>
 82180e7:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82180ee:	e8 0d d7 50 00       	call   8725800 <__cxa_allocate_exception>
 82180f3:	89 c2                	mov    %eax,%edx
 82180f5:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 82180f8:	89 0a                	mov    %ecx,(%edx)
 82180fa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8218101:	00 
 8218102:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8218109:	08 
 821810a:	89 04 24             	mov    %eax,(%esp)
 821810d:	e8 3e cb 50 00       	call   8724c50 <__cxa_throw>
 8218112:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8218115:	89 04 24             	mov    %eax,(%esp)
 8218118:	e8 f7 56 ec ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 821811d:	89 c3                	mov    %eax,%ebx
 821811f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8218122:	89 04 24             	mov    %eax,(%esp)
 8218125:	e8 54 21 ec ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 821812a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 821812e:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8218135:	00 
 8218136:	89 04 24             	mov    %eax,(%esp)
 8218139:	e8 26 ce 2e 00       	call   8504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>
 821813e:	83 f0 01             	xor    $0x1,%eax
 8218141:	84 c0                	test   %al,%al
 8218143:	74 2c                	je     8218171 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x56b>
 8218145:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 821814c:	e8 af d6 50 00       	call   8725800 <__cxa_allocate_exception>
 8218151:	89 c2                	mov    %eax,%edx
 8218153:	c7 02 04 00 00 00    	movl   $0x4,(%edx)
 8218159:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8218160:	00 
 8218161:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8218168:	08 
 8218169:	89 04 24             	mov    %eax,(%esp)
 821816c:	e8 df ca 50 00       	call   8724c50 <__cxa_throw>
 8218171:	0f b7 45 c6          	movzwl -0x3a(%ebp),%eax
 8218175:	0f b7 d8             	movzwl %ax,%ebx
 8218178:	8b 45 0c             	mov    0xc(%ebp),%eax
 821817b:	89 04 24             	mov    %eax,(%esp)
 821817e:	e8 0b 21 ec ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8218183:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 821818a:	00 
 821818b:	c7 44 24 10 06 00 00 	movl   $0x6,0x10(%esp)
 8218192:	00 
 8218193:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 821819a:	00 
 821819b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 821819f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82181a6:	00 
 82181a7:	89 04 24             	mov    %eax,(%esp)
 82181aa:	e8 5d be 2e 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 82181af:	83 f0 01             	xor    $0x1,%eax
 82181b2:	84 c0                	test   %al,%al
 82181b4:	74 2c                	je     82181e2 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x5dc>
 82181b6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82181bd:	e8 3e d6 50 00       	call   8725800 <__cxa_allocate_exception>
 82181c2:	89 c2                	mov    %eax,%edx
 82181c4:	c7 02 16 00 00 00    	movl   $0x16,(%edx)
 82181ca:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82181d1:	00 
 82181d2:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82181d9:	08 
 82181da:	89 04 24             	mov    %eax,(%esp)
 82181dd:	e8 6e ca 50 00       	call   8724c50 <__cxa_throw>
 82181e2:	8b 9d 62 ff ff ff    	mov    -0x9e(%ebp),%ebx
 82181e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82181eb:	89 04 24             	mov    %eax,(%esp)
 82181ee:	e8 9b 20 ec ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 82181f3:	89 04 24             	mov    %eax,(%esp)
 82181f6:	e8 71 8a ef ff       	call   8110c6c <_ZN10CInventory17GetAvatarItemMgrWEv>
 82181fb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82181ff:	89 04 24             	mov    %eax,(%esp)
 8218202:	e8 fb 11 0e 00       	call   82f9402 <_ZN8WongWork14CAvatarItemMgr12UnRegistItemEi>
 8218207:	83 f0 01             	xor    $0x1,%eax
 821820a:	84 c0                	test   %al,%al
 821820c:	0f 84 80 00 00 00    	je     8218292 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x68c>
 8218212:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8218219:	e8 e2 d5 50 00       	call   8725800 <__cxa_allocate_exception>
 821821e:	89 c2                	mov    %eax,%edx
 8218220:	c7 02 16 00 00 00    	movl   $0x16,(%edx)
 8218226:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821822d:	00 
 821822e:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8218235:	08 
 8218236:	89 04 24             	mov    %eax,(%esp)
 8218239:	e8 12 ca 50 00       	call   8724c50 <__cxa_throw>
 821823e:	83 fa 01             	cmp    $0x1,%edx
 8218241:	0f 85 03 03 00 00    	jne    821854a <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x944>
 8218247:	89 04 24             	mov    %eax,(%esp)
 821824a:	e8 91 da 50 00       	call   8725ce0 <__cxa_begin_catch>
 821824f:	8b 00                	mov    (%eax),%eax
 8218251:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8218254:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8218257:	0f b6 c0             	movzbl %al,%eax
 821825a:	89 44 24 08          	mov    %eax,0x8(%esp)
 821825e:	c7 44 24 04 cd 00 00 	movl   $0xcd,0x4(%esp)
 8218265:	00 
 8218266:	8b 45 0c             	mov    0xc(%ebp),%eax
 8218269:	89 04 24             	mov    %eax,(%esp)
 821826c:	e8 d1 3c 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8218271:	bb 00 00 00 00       	mov    $0x0,%ebx
 8218276:	e8 b5 d9 50 00       	call   8725c30 <__cxa_end_catch>
 821827b:	e9 e5 02 00 00       	jmp    8218565 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x95f>
 8218280:	89 d3                	mov    %edx,%ebx
 8218282:	89 c6                	mov    %eax,%esi
 8218284:	e8 a7 d9 50 00       	call   8725c30 <__cxa_end_catch>
 8218289:	89 f0                	mov    %esi,%eax
 821828b:	89 da                	mov    %ebx,%edx
 821828d:	e9 b8 02 00 00       	jmp    821854a <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x944>
 8218292:	0f b7 45 c6          	movzwl -0x3a(%ebp),%eax
 8218296:	0f b7 c0             	movzwl %ax,%eax
 8218299:	8d 70 0a             	lea    0xa(%eax),%esi
 821829c:	8b 9d 62 ff ff ff    	mov    -0x9e(%ebp),%ebx
 82182a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82182a5:	89 04 24             	mov    %eax,(%esp)
 82182a8:	e8 e1 1f ec ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 82182ad:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 82182b4:	00 
 82182b5:	89 74 24 10          	mov    %esi,0x10(%esp)
 82182b9:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 82182c0:	00 
 82182c1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82182c5:	c7 44 24 04 36 00 00 	movl   $0x36,0x4(%esp)
 82182cc:	00 
 82182cd:	89 04 24             	mov    %eax,(%esp)
 82182d0:	e8 59 09 2f 00       	call   8508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>
 82182d5:	8b 9d 62 ff ff ff    	mov    -0x9e(%ebp),%ebx
 82182db:	8b 45 0c             	mov    0xc(%ebp),%eax
 82182de:	89 04 24             	mov    %eax,(%esp)
 82182e1:	e8 68 39 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 82182e6:	c7 44 24 08 f9 13 bc 	movl   $0x8bc13f9,0x8(%esp)
 82182ed:	08 
 82182ee:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82182f2:	89 04 24             	mov    %eax,(%esp)
 82182f5:	e8 70 d0 22 00       	call   844536a <_ZN22DB_UpdateAvatarHistory11makeRequestEjiPc>
 82182fa:	8d 45 a8             	lea    -0x58(%ebp),%eax
 82182fd:	89 04 24             	mov    %eax,(%esp)
 8218300:	e8 a7 5e e7 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8218305:	8b 45 0c             	mov    0xc(%ebp),%eax
 8218308:	89 04 24             	mov    %eax,(%esp)
 821830b:	e8 7e 1f ec ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8218310:	c7 44 24 1c f9 13 bc 	movl   $0x8bc13f9,0x1c(%esp)
 8218317:	08 
 8218318:	c7 44 24 18 f9 13 bc 	movl   $0x8bc13f9,0x18(%esp)
 821831f:	08 
 8218320:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8218327:	00 
 8218328:	c7 44 24 10 0a 00 00 	movl   $0xa,0x10(%esp)
 821832f:	00 
 8218330:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8218337:	00 
 8218338:	8d 55 a8             	lea    -0x58(%ebp),%edx
 821833b:	89 54 24 08          	mov    %edx,0x8(%esp)
 821833f:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8218342:	89 54 24 04          	mov    %edx,0x4(%esp)
 8218346:	89 04 24             	mov    %eax,(%esp)
 8218349:	e8 64 e8 2e 00       	call   8506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>
 821834e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8218351:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8218354:	89 04 24             	mov    %eax,(%esp)
 8218357:	e8 f0 59 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 821835c:	c7 44 24 08 cd 00 00 	movl   $0xcd,0x8(%esp)
 8218363:	00 
 8218364:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821836b:	00 
 821836c:	8d 45 9c             	lea    -0x64(%ebp),%eax
 821836f:	89 04 24             	mov    %eax,(%esp)
 8218372:	e8 85 35 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8218377:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821837e:	00 
 821837f:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8218382:	89 04 24             	mov    %eax,(%esp)
 8218385:	e8 96 35 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821838a:	0f b7 45 c6          	movzwl -0x3a(%ebp),%eax
 821838e:	0f b7 c0             	movzwl %ax,%eax
 8218391:	89 44 24 04          	mov    %eax,0x4(%esp)
 8218395:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8218398:	89 04 24             	mov    %eax,(%esp)
 821839b:	e8 04 1b ec ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82183a0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82183a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82183a7:	8d 45 9c             	lea    -0x64(%ebp),%eax
 82183aa:	89 04 24             	mov    %eax,(%esp)
 82183ad:	e8 f2 1a ec ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82183b2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82183b5:	8d 55 a8             	lea    -0x58(%ebp),%edx
 82183b8:	89 54 24 04          	mov    %edx,0x4(%esp)
 82183bc:	89 04 24             	mov    %eax,(%esp)
 82183bf:	e8 84 5e e7 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 82183c4:	83 ec 04             	sub    $0x4,%esp
 82183c7:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82183ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 82183ce:	8d 45 98             	lea    -0x68(%ebp),%eax
 82183d1:	89 04 24             	mov    %eax,(%esp)
 82183d4:	e8 13 16 ee ff       	call   80f99ec <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 82183d9:	e9 ab 00 00 00       	jmp    8218489 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x883>
 82183de:	8d 45 98             	lea    -0x68(%ebp),%eax
 82183e1:	89 04 24             	mov    %eax,(%esp)
 82183e4:	e8 33 16 ee ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 82183e9:	8b 00                	mov    (%eax),%eax
 82183eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 82183ef:	8d 45 9c             	lea    -0x64(%ebp),%eax
 82183f2:	89 04 24             	mov    %eax,(%esp)
 82183f5:	e8 aa 1a ec ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82183fa:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82183fd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8218404:	00 
 8218405:	8d 55 98             	lea    -0x68(%ebp),%edx
 8218408:	89 54 24 04          	mov    %edx,0x4(%esp)
 821840c:	89 04 24             	mov    %eax,(%esp)
 821840f:	e8 9e b4 f7 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 8218414:	83 ec 04             	sub    $0x4,%esp
 8218417:	8d 45 98             	lea    -0x68(%ebp),%eax
 821841a:	89 04 24             	mov    %eax,(%esp)
 821841d:	e8 fa 15 ee ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 8218422:	8b 00                	mov    (%eax),%eax
 8218424:	89 44 24 04          	mov    %eax,0x4(%esp)
 8218428:	8d 45 9c             	lea    -0x64(%ebp),%eax
 821842b:	89 04 24             	mov    %eax,(%esp)
 821842e:	e8 61 33 01 00       	call   822b794 <_ZN18InterfacePacketBuf12put_item_idxEm>
 8218433:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8218436:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821843d:	00 
 821843e:	8d 55 98             	lea    -0x68(%ebp),%edx
 8218441:	89 54 24 04          	mov    %edx,0x4(%esp)
 8218445:	89 04 24             	mov    %eax,(%esp)
 8218448:	e8 65 b4 f7 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 821844d:	83 ec 04             	sub    $0x4,%esp
 8218450:	8d 45 98             	lea    -0x68(%ebp),%eax
 8218453:	89 04 24             	mov    %eax,(%esp)
 8218456:	e8 c1 15 ee ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 821845b:	8b 00                	mov    (%eax),%eax
 821845d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8218461:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8218464:	89 04 24             	mov    %eax,(%esp)
 8218467:	e8 d0 34 eb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 821846c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 821846f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8218476:	00 
 8218477:	8d 55 98             	lea    -0x68(%ebp),%edx
 821847a:	89 54 24 04          	mov    %edx,0x4(%esp)
 821847e:	89 04 24             	mov    %eax,(%esp)
 8218481:	e8 2c b4 f7 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 8218486:	83 ec 04             	sub    $0x4,%esp
 8218489:	8d 45 cc             	lea    -0x34(%ebp),%eax
 821848c:	8d 55 a8             	lea    -0x58(%ebp),%edx
 821848f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8218493:	89 04 24             	mov    %eax,(%esp)
 8218496:	e8 d1 5d e7 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 821849b:	83 ec 04             	sub    $0x4,%esp
 821849e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 82184a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82184a5:	8d 45 98             	lea    -0x68(%ebp),%eax
 82184a8:	89 04 24             	mov    %eax,(%esp)
 82184ab:	e8 78 af f7 ff       	call   8193428 <_ZN9__gnu_cxxneIPKiPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T1_EERKNS7_IT0_S9_EE>
 82184b0:	84 c0                	test   %al,%al
 82184b2:	0f 85 26 ff ff ff    	jne    82183de <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x7d8>
 82184b8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82184bf:	00 
 82184c0:	8d 45 9c             	lea    -0x64(%ebp),%eax
 82184c3:	89 04 24             	mov    %eax,(%esp)
 82184c6:	e8 8d 34 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82184cb:	8d 45 9c             	lea    -0x64(%ebp),%eax
 82184ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 82184d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82184d5:	89 04 24             	mov    %eax,(%esp)
 82184d8:	e8 dd 00 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82184dd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82184e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82184e4:	8b 45 08             	mov    0x8(%ebp),%eax
 82184e7:	89 04 24             	mov    %eax,(%esp)
 82184ea:	e8 a7 04 00 00       	call   8218996 <_ZN25Dispatcher_DisJointAvatar22SendDisjointAvatarInfoEPK5CItem>
 82184ef:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82184f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82184f6:	8b 45 08             	mov    0x8(%ebp),%eax
 82184f9:	89 04 24             	mov    %eax,(%esp)
 82184fc:	e8 35 05 00 00       	call   8218a36 <_ZN25Dispatcher_DisJointAvatar20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE>
 8218501:	bb 00 00 00 00       	mov    $0x0,%ebx
 8218506:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8218509:	89 04 24             	mov    %eax,(%esp)
 821850c:	e8 6f 59 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8218511:	eb 2a                	jmp    821853d <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x937>
 8218513:	89 d3                	mov    %edx,%ebx
 8218515:	89 c6                	mov    %eax,%esi
 8218517:	8d 45 9c             	lea    -0x64(%ebp),%eax
 821851a:	89 04 24             	mov    %eax,(%esp)
 821851d:	e8 5e 59 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8218522:	89 f0                	mov    %esi,%eax
 8218524:	89 da                	mov    %ebx,%edx
 8218526:	eb 00                	jmp    8218528 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x922>
 8218528:	89 d3                	mov    %edx,%ebx
 821852a:	89 c6                	mov    %eax,%esi
 821852c:	8d 45 a8             	lea    -0x58(%ebp),%eax
 821852f:	89 04 24             	mov    %eax,(%esp)
 8218532:	e8 a3 b8 e6 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8218537:	89 f0                	mov    %esi,%eax
 8218539:	89 da                	mov    %ebx,%edx
 821853b:	eb 0d                	jmp    821854a <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x944>
 821853d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8218540:	89 04 24             	mov    %eax,(%esp)
 8218543:	e8 92 b8 e6 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8218548:	eb 1b                	jmp    8218565 <_ZN25Dispatcher_DisJointAvatar12dispatch_sigEP5CUserR9PacketBuf+0x95f>
 821854a:	89 d3                	mov    %edx,%ebx
 821854c:	89 c6                	mov    %eax,%esi
 821854e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8218551:	89 04 24             	mov    %eax,(%esp)
 8218554:	e8 91 c4 f1 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8218559:	89 f0                	mov    %esi,%eax
 821855b:	89 da                	mov    %ebx,%edx
 821855d:	89 04 24             	mov    %eax,(%esp)
 8218560:	e8 eb b1 8c 00       	call   8ae3750 <_Unwind_Resume>
 8218565:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8218568:	89 04 24             	mov    %eax,(%esp)
 821856b:	e8 7a c4 f1 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8218570:	89 d8                	mov    %ebx,%eax
 8218572:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8218575:	83 c4 00             	add    $0x0,%esp
 8218578:	5b                   	pop    %ebx
 8218579:	5e                   	pop    %esi
 821857a:	5d                   	pop    %ebp
 821857b:	c3                   	ret

```

```c
// Dispatcher_DisJointAvatar::dispatch_sig @ 0x8217c06

/* Dispatcher_DisJointAvatar::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_DisJointAvatar::dispatch_sig
          (Dispatcher_DisJointAvatar *this,CUser *param_1,PacketBuf *param_2)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ServiceRestrictManager *pSVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  CDataManager *this_00;
  CInventory *pCVar8;
  CAvatarItemMgr *pCVar9;
  int *piVar10;
  int iVar11;
  ulong *puVar12;
  uint uVar13;
  undefined1 local_ec [12];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined2 local_a9;
  undefined2 uStack_a7;
  undefined2 local_a5;
  undefined1 uStack_a3;
  int iStack_a2;
  undefined1 uStack_9e;
  undefined4 local_9d;
  undefined4 local_99;
  undefined4 local_95;
  undefined4 local_91;
  undefined4 local_8d;
  undefined4 local_89;
  undefined4 local_85;
  undefined4 local_81;
  undefined4 local_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined1 local_6d;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_6c [4];
  PacketGuard local_68 [12];
  vector<int,std::allocator<int>> local_5c [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_50 [12];
  ulong local_44;
  ushort local_3e;
  __normal_iterator local_3c [4];
  __normal_iterator local_38 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_34 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_30 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_2c [4];
  uint local_28;
  CItem *local_24;
  int local_20;
  stAvatarEmblemInfo_t *local_1c;
  int local_18;
  int local_14;
  
  iVar4 = CUser::get_state(param_1);
  if (iVar4 != 3) {
    return 0;
  }
  local_28 = CUser::isEnableAvatarSocketAction(param_1);
  if (local_28 != 0) {
    CUser::SendCmdErrorPacket(param_1,0xcd,local_28 & 0xff);
    return 0;
  }
  pSVar5 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
  cVar2 = ServiceRestrictManager::isRestricted(pSVar5,param_1,1,0x14);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0xcd,0xd1);
    return 0;
  }
  local_3e = 0;
  local_44 = 0;
  cVar2 = PacketBuf::get_short(param_2,&local_3e);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0xcaa7,
                     "virtual int Dispatcher_DisJointAvatar::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  cVar2 = PacketBuf::get_item_idx(param_2,&local_44);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0xcaa8,
                     "virtual int Dispatcher_DisJointAvatar::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  cVar2 = CUser::CheckItemLock(param_1,2,(uint)local_3e);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0xcd,0xd5);
    return 0;
  }
  Inven_Item::Inven_Item((Inven_Item *)&local_a9);
  local_24 = (CItem *)0x0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_50);
  uVar13 = (uint)local_3e;
  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  uVar6 = 2;
                    /* try { // try from 08217ddf to 0821823d has its CatchHandler @ 0821823e */
  CInventory::GetInvenSlot((int)local_ec,iVar4);
  local_a9 = (undefined2)local_ec._0_4_;
  uStack_a7 = SUB42(local_ec._0_4_,2);
  local_a5 = (undefined2)local_ec._4_4_;
  uStack_a3 = SUB41(local_ec._4_4_,2);
  iStack_a2._1_3_ = (undefined3)local_ec._8_4_;
  iStack_a2 = CONCAT31(iStack_a2._1_3_,SUB41(local_ec._4_4_,3));
  uStack_9e = SUB41(local_ec._8_4_,3);
  local_9d = local_e0;
  local_99 = local_dc;
  local_95 = local_d8;
  local_91 = local_d4;
  local_8d = local_d0;
  local_89 = local_cc;
  local_85 = local_c8;
  local_81 = local_c4;
  local_7d = local_c0;
  local_79 = local_bc;
  local_75 = local_b8;
  local_71 = local_b4;
  local_6d = local_b0;
  if (CONCAT22(local_a5,uStack_a7) != local_44) {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar6,uVar13);
    *puVar7 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = CONCAT22(local_a5,uStack_a7);
  this_00 = (CDataManager *)G_CDataManager();
  local_24 = (CItem *)CDataManager::find_item(this_00,iVar4);
  if (local_24 != (CItem *)0x0) {
    iVar4 = CItem::get_grade(local_24);
    if ((iVar4 == 0) || (iVar4 = CItem::get_grade(local_24), 3 < iVar4)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 0x13;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    cVar2 = (**(code **)(*(int *)local_24 + 0x24))(local_24,2);
    iVar4 = iStack_a2;
    if (cVar2 != '\x01') {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 0x17;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    pCVar9 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar8);
    iVar4 = WongWork::CAvatarItemMgr::GetExpireDate(pCVar9,iVar4);
    if (iVar4 != 0) {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 0x17;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    cVar2 = UpgradeSeparateInfo::IsTradeRestriction((UpgradeSeparateInfo *)((int)&local_79 + 3));
    iVar4 = iStack_a2;
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 0x17;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    pCVar9 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar8);
    local_1c = (stAvatarEmblemInfo_t *)WongWork::CAvatarItemMgr::getJewelSocketData(pCVar9,iVar4);
    local_18 = _selectJewelTypeIndex(this,local_1c);
    if (*(int *)(local_24 + 0x234) == 9) {
      local_18 = -1;
    }
    local_14 = _getResultItems(this,param_1,local_24,local_18,(vector *)local_50);
    if (local_14 != 0) {
      piVar10 = (int *)__cxa_allocate_exception(4);
      *piVar10 = local_14;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(piVar10,&ENUM_ERROR::typeinfo,0);
    }
    uVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_50);
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    cVar2 = CInventory::check_empty_count(pCVar8,9,uVar6);
    uVar1 = local_3e;
    if (cVar2 != '\x01') {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 4;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar2 = CInventory::delete_item(pCVar8,2,uVar1,1,6,1);
    iVar4 = iStack_a2;
    if (cVar2 == '\x01') {
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      iVar11 = CInventory::GetAvatarItemMgrW(pCVar8);
      cVar2 = WongWork::CAvatarItemMgr::UnRegistItem(iVar11);
      iVar11 = iStack_a2;
      if (cVar2 == '\x01') {
        uVar13 = (uint)local_3e;
        pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 082182d0 to 08218304 has its CatchHandler @ 0821854a */
        CInventory::SendAvatarEvent(pCVar8,0x36,iVar11,5,uVar13 + 10,0);
        iVar4 = iStack_a2;
        uVar13 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        DB_UpdateAvatarHistory::makeRequest(uVar13,iVar4,"");
        std::vector<int,std::allocator<int>>::vector(local_5c);
        pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 08218349 to 0821835b has its CatchHandler @ 08218528 */
        local_20 = CInventory::insert_event_items
                             (pCVar8,local_50,local_5c,0,10,0,&DAT_08bc13f9,&DAT_08bc13f9);
        PacketGuard::PacketGuard(local_68);
                    /* try { // try from 08218372 to 08218500 has its CatchHandler @ 08218513 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_68,1,0xcd);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_68,1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_68,(uint)local_3e);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_68,local_20);
        std::vector<int,std::allocator<int>>::begin();
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
        __normal_iterator<int*>(local_6c,local_3c);
        while( true ) {
          std::vector<int,std::allocator<int>>::end();
          bVar3 = __gnu_cxx::operator!=(local_6c,local_38);
          if (!bVar3) break;
          piVar10 = (int *)__gnu_cxx::
                           __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                           operator*(local_6c);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_68,*piVar10);
          __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                    (local_34,(int)local_6c);
          puVar12 = (ulong *)__gnu_cxx::
                             __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                             operator*(local_6c);
          InterfacePacketBuf::put_item_idx((InterfacePacketBuf *)local_68,*puVar12);
          __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                    (local_30,(int)local_6c);
          piVar10 = (int *)__gnu_cxx::
                           __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                           operator*(local_6c);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_68,*piVar10);
          __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                    (local_2c,(int)local_6c);
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_68,true);
        CUser::Send(param_1,local_68);
        SendDisjointAvatarInfo(this,local_24);
        SendCreateEmblemInfo(this,(vector *)local_50);
                    /* try { // try from 0821850c to 08218510 has its CatchHandler @ 08218528 */
        PacketGuard::~PacketGuard(local_68);
                    /* try { // try from 08218543 to 08218547 has its CatchHandler @ 0821854a */
        std::vector<int,std::allocator<int>>::~vector(local_5c);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_50);
        return 0;
      }
      puVar7 = (undefined4 *)__cxa_allocate_exception(4,iVar4);
      *puVar7 = 0x16;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 0x16;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  puVar7 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar6,uVar13);
  *puVar7 = 0x11;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
}

```

