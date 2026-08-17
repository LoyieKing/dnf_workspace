# CDBConnector

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## CDBConnector

```asm
// === 080ec5fc CDBConnector::CDBConnector  [0x080ec5fc-0x80ec619] ===
 80ec5fc:	55                   	push   %ebp
 80ec5fd:	89 e5                	mov    %esp,%ebp
 80ec5ff:	83 ec 18             	sub    $0x18,%esp
 80ec602:	8b 45 08             	mov    0x8(%ebp),%eax
 80ec605:	8b 55 0c             	mov    0xc(%ebp),%edx
 80ec608:	89 10                	mov    %edx,(%eax)
 80ec60a:	8b 45 08             	mov    0x8(%ebp),%eax
 80ec60d:	83 c0 04             	add    $0x4,%eax
 80ec610:	89 04 24             	mov    %eax,(%esp)
 80ec613:	e8 20 07 00 00       	call   80ecd38 <_ZN12STDBConnInfoC1Ev>
 80ec618:	c9                   	leave
 80ec619:	c3                   	ret

```

```c
// CDBConnector::CDBConnector @ 0x80ec5fc

/* CDBConnector::CDBConnector(DBMgr*) */

void __thiscall CDBConnector::CDBConnector(CDBConnector *this,DBMgr *param_1)

{
  *(DBMgr **)this = param_1;
  STDBConnInfo::STDBConnInfo((STDBConnInfo *)(this + 4));
  return;
}

```

---

## Close

```asm
// === 080ec668 CDBConnector::Close  [0x080ec668-0x80ec67b] ===
 80ec668:	55                   	push   %ebp
 80ec669:	89 e5                	mov    %esp,%ebp
 80ec66b:	83 ec 18             	sub    $0x18,%esp
 80ec66e:	8b 45 08             	mov    0x8(%ebp),%eax
 80ec671:	89 04 24             	mov    %eax,(%esp)
 80ec674:	e8 43 00 00 00       	call   80ec6bc <_ZN12CDBConnector11CloseMasterEv>
 80ec679:	c9                   	leave
 80ec67a:	c3                   	ret
 80ec67b:	90                   	nop

```

```c
// CDBConnector::Close @ 0x80ec668

/* CDBConnector::Close() */

void CDBConnector::Close(void)

{
  CloseMaster();
  return;
}

```

---

## CloseMaster

```asm
// === 080ec6bc CDBConnector::CloseMaster  [0x080ec6bc-0x80ec6d9] ===
 80ec6bc:	55                   	push   %ebp
 80ec6bd:	89 e5                	mov    %esp,%ebp
 80ec6bf:	83 ec 18             	sub    $0x18,%esp
 80ec6c2:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 80ec6c7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80ec6ce:	00 
 80ec6cf:	89 04 24             	mov    %eax,(%esp)
 80ec6d2:	e8 09 88 30 00       	call   83f4ee0 <_ZN5DBMgr5CloseE18ENUM_DB_HANDLE_IDX>
 80ec6d7:	c9                   	leave
 80ec6d8:	c3                   	ret
 80ec6d9:	90                   	nop

```

```c
// CDBConnector::CloseMaster @ 0x80ec6bc

/* CDBConnector::CloseMaster() */

void CDBConnector::CloseMaster(void)

{
  DBMgr::Close(GlobalData::s_db_mgr,0);
  return;
}

```

---

## Connect

```asm
// === 080ec760 CDBConnector::Connect  [0x080ec760-0x80ec8f7] ===
 80ec760:	55                   	push   %ebp
 80ec761:	89 e5                	mov    %esp,%ebp
 80ec763:	57                   	push   %edi
 80ec764:	56                   	push   %esi
 80ec765:	53                   	push   %ebx
 80ec766:	83 ec 5c             	sub    $0x5c,%esp
 80ec769:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80ec76c:	8b 55 0c             	mov    0xc(%ebp),%edx
 80ec76f:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ec773:	89 04 24             	mov    %eax,(%esp)
 80ec776:	e8 ef 06 00 00       	call   80ece6a <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEE5beginEv>
 80ec77b:	83 ec 04             	sub    $0x4,%esp
 80ec77e:	e9 36 01 00 00       	jmp    80ec8b9 <_ZN12CDBConnector7ConnectESt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS1_ESaISt4pairIKS1_S2_EEE+0x159>
 80ec783:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80ec786:	89 04 24             	mov    %eax,(%esp)
 80ec789:	e8 5a 07 00 00       	call   80ecee8 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDX12STDBConnInfoEEptEv>
 80ec78e:	8b 00                	mov    (%eax),%eax
 80ec790:	85 c0                	test   %eax,%eax
 80ec792:	74 12                	je     80ec7a6 <_ZN12CDBConnector7ConnectESt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS1_ESaISt4pairIKS1_S2_EEE+0x46>
 80ec794:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80ec797:	89 04 24             	mov    %eax,(%esp)
 80ec79a:	e8 49 07 00 00       	call   80ecee8 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDX12STDBConnInfoEEptEv>
 80ec79f:	8b 00                	mov    (%eax),%eax
 80ec7a1:	83 f8 05             	cmp    $0x5,%eax
 80ec7a4:	75 07                	jne    80ec7ad <_ZN12CDBConnector7ConnectESt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS1_ESaISt4pairIKS1_S2_EEE+0x4d>
 80ec7a6:	b8 01 00 00 00       	mov    $0x1,%eax
 80ec7ab:	eb 05                	jmp    80ec7b2 <_ZN12CDBConnector7ConnectESt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS1_ESaISt4pairIKS1_S2_EEE+0x52>
 80ec7ad:	b8 00 00 00 00       	mov    $0x0,%eax
 80ec7b2:	84 c0                	test   %al,%al
 80ec7b4:	0f 85 f3 00 00 00    	jne    80ec8ad <_ZN12CDBConnector7ConnectESt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS1_ESaISt4pairIKS1_S2_EEE+0x14d>
 80ec7ba:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80ec7bd:	89 04 24             	mov    %eax,(%esp)
 80ec7c0:	e8 23 07 00 00       	call   80ecee8 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDX12STDBConnInfoEEptEv>
 80ec7c5:	83 c0 46             	add    $0x46,%eax
 80ec7c8:	89 45 c0             	mov    %eax,-0x40(%ebp)
 80ec7cb:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80ec7ce:	89 04 24             	mov    %eax,(%esp)
 80ec7d1:	e8 12 07 00 00       	call   80ecee8 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDX12STDBConnInfoEEptEv>
 80ec7d6:	83 c0 1c             	add    $0x1c,%eax
 80ec7d9:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 80ec7dc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80ec7df:	89 04 24             	mov    %eax,(%esp)
 80ec7e2:	e8 01 07 00 00       	call   80ecee8 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDX12STDBConnInfoEEptEv>
 80ec7e7:	8b 78 18             	mov    0x18(%eax),%edi
 80ec7ea:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80ec7ed:	89 04 24             	mov    %eax,(%esp)
 80ec7f0:	e8 f3 06 00 00       	call   80ecee8 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDX12STDBConnInfoEEptEv>
 80ec7f5:	83 c0 04             	add    $0x4,%eax
 80ec7f8:	89 c6                	mov    %eax,%esi
 80ec7fa:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80ec7fd:	89 04 24             	mov    %eax,(%esp)
 80ec800:	e8 e3 06 00 00       	call   80ecee8 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDX12STDBConnInfoEEptEv>
 80ec805:	8b 00                	mov    (%eax),%eax
 80ec807:	89 c3                	mov    %eax,%ebx
 80ec809:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 80ec810:	00 
 80ec811:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 80ec818:	00 
 80ec819:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 80ec820:	00 
 80ec821:	c7 44 24 08 4e 00 00 	movl   $0x4e,0x8(%esp)
 80ec828:	00 
 80ec829:	c7 44 24 04 40 63 b3 	movl   $0x8b36340,0x4(%esp)
 80ec830:	08 
 80ec831:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80ec834:	89 04 24             	mov    %eax,(%esp)
 80ec837:	e8 0a 2f 46 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 80ec83c:	8b 45 c0             	mov    -0x40(%ebp),%eax
 80ec83f:	89 44 24 18          	mov    %eax,0x18(%esp)
 80ec843:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 80ec846:	89 44 24 14          	mov    %eax,0x14(%esp)
 80ec84a:	89 7c 24 10          	mov    %edi,0x10(%esp)
 80ec84e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 80ec852:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 80ec856:	c7 44 24 04 a4 56 b3 	movl   $0x8b356a4,0x4(%esp)
 80ec85d:	08 
 80ec85e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80ec861:	89 04 24             	mov    %eax,(%esp)
 80ec864:	e8 1f 2f 46 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80ec869:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80ec86c:	89 04 24             	mov    %eax,(%esp)
 80ec86f:	e8 74 06 00 00       	call   80ecee8 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDX12STDBConnInfoEEptEv>
 80ec874:	8d 58 04             	lea    0x4(%eax),%ebx
 80ec877:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80ec87a:	89 04 24             	mov    %eax,(%esp)
 80ec87d:	e8 66 06 00 00       	call   80ecee8 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDX12STDBConnInfoEEptEv>
 80ec882:	8b 00                	mov    (%eax),%eax
 80ec884:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 80ec888:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80ec88f:	00 
 80ec890:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ec894:	8b 45 08             	mov    0x8(%ebp),%eax
 80ec897:	89 04 24             	mov    %eax,(%esp)
 80ec89a:	e8 3b fe ff ff       	call   80ec6da <_ZN12CDBConnector4OpenE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo>
 80ec89f:	83 f0 01             	xor    $0x1,%eax
 80ec8a2:	84 c0                	test   %al,%al
 80ec8a4:	74 08                	je     80ec8ae <_ZN12CDBConnector7ConnectESt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS1_ESaISt4pairIKS1_S2_EEE+0x14e>
 80ec8a6:	b8 00 00 00 00       	mov    $0x0,%eax
 80ec8ab:	eb 40                	jmp    80ec8ed <_ZN12CDBConnector7ConnectESt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS1_ESaISt4pairIKS1_S2_EEE+0x18d>
 80ec8ad:	90                   	nop
 80ec8ae:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80ec8b1:	89 04 24             	mov    %eax,(%esp)
 80ec8b4:	e8 11 06 00 00       	call   80ececa <_ZNSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDX12STDBConnInfoEEppEv>
 80ec8b9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80ec8bc:	8b 55 0c             	mov    0xc(%ebp),%edx
 80ec8bf:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ec8c3:	89 04 24             	mov    %eax,(%esp)
 80ec8c6:	e8 c5 05 00 00       	call   80ece90 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 80ec8cb:	83 ec 04             	sub    $0x4,%esp
 80ec8ce:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80ec8d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ec8d5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80ec8d8:	89 04 24             	mov    %eax,(%esp)
 80ec8db:	e8 d6 05 00 00       	call   80eceb6 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDX12STDBConnInfoEEneERKS5_>
 80ec8e0:	84 c0                	test   %al,%al
 80ec8e2:	0f 85 9b fe ff ff    	jne    80ec783 <_ZN12CDBConnector7ConnectESt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS1_ESaISt4pairIKS1_S2_EEE+0x23>
 80ec8e8:	b8 01 00 00 00       	mov    $0x1,%eax
 80ec8ed:	8d 65 f4             	lea    -0xc(%ebp),%esp
 80ec8f0:	83 c4 00             	add    $0x0,%esp
 80ec8f3:	5b                   	pop    %ebx
 80ec8f4:	5e                   	pop    %esi
 80ec8f5:	5f                   	pop    %edi
 80ec8f6:	5d                   	pop    %ebp
 80ec8f7:	c3                   	ret

```

```c
// CDBConnector::Connect @ 0x80ec760

/* CDBConnector::Connect(std::map<ENUM_DB_HANDLE_IDX, STDBConnInfo, std::less<ENUM_DB_HANDLE_IDX>,
   std::allocator<std::pair<ENUM_DB_HANDLE_IDX const, STDBConnInfo> > >) */

undefined4 CDBConnector::Connect(CDBConnector *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
  local_34 [4];
  map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
  local_30 [4];
  cMyTrace local_2c [28];
  
  std::
  map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
  ::begin(local_34);
  do {
    std::
    map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
    ::end(local_30);
    cVar4 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator!=
                      ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                       local_34,(_Rb_tree_iterator *)local_30);
    if (cVar4 == '\0') {
      return 1;
    }
    piVar5 = (int *)std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::
                    operator->((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>
                                *)local_34);
    if ((*piVar5 == 0) ||
       (piVar5 = (int *)std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::
                        operator->((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>
                                    *)local_34), *piVar5 == 5)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      iVar6 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                         local_34);
      iVar7 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                         local_34);
      iVar8 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                         local_34);
      uVar1 = *(undefined4 *)(iVar8 + 0x18);
      iVar8 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                         local_34);
      puVar9 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator->
                         ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                          local_34);
      uVar2 = *puVar9;
      cMyTrace::cMyTrace(local_2c,"bool CDBConnector::Connect(DBConnInfo)",0x4e,9,true,true);
      cMyTrace::operator()
                (local_2c,"\t\t- Open(type:%2d, %s/%d/%s/%s",uVar2,iVar8 + 4,uVar1,iVar7 + 0x1c,
                 iVar6 + 0x46);
      iVar6 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                         local_34);
      puVar9 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator->
                         ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                          local_34);
      cVar4 = Open(param_1,*puVar9,0,iVar6 + 4);
      if (cVar4 != '\x01') {
        return 0;
      }
    }
    std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator++
              ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)local_34);
  } while( true );
}

```

---

## ConnectWithServerGroup

```asm
// === 080ec8f8 CDBConnector::ConnectWithServerGroup  [0x080ec8f8-0x80ec9c9] ===
 80ec8f8:	55                   	push   %ebp
 80ec8f9:	89 e5                	mov    %esp,%ebp
 80ec8fb:	56                   	push   %esi
 80ec8fc:	53                   	push   %ebx
 80ec8fd:	83 ec 20             	sub    $0x20,%esp
 80ec900:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80ec903:	8b 55 0c             	mov    0xc(%ebp),%edx
 80ec906:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ec90a:	89 04 24             	mov    %eax,(%esp)
 80ec90d:	e8 58 05 00 00       	call   80ece6a <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEE5beginEv>
 80ec912:	83 ec 04             	sub    $0x4,%esp
 80ec915:	eb 75                	jmp    80ec98c <_ZN12CDBConnector22ConnectWithServerGroupESt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS1_ESaISt4pairIKS1_S2_EEE+0x94>
 80ec917:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80ec91a:	89 04 24             	mov    %eax,(%esp)
 80ec91d:	e8 c6 05 00 00       	call   80ecee8 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDX12STDBConnInfoEEptEv>
 80ec922:	8b 00                	mov    (%eax),%eax
 80ec924:	85 c0                	test   %eax,%eax
 80ec926:	0f 94 c0             	sete   %al
 80ec929:	84 c0                	test   %al,%al
 80ec92b:	75 53                	jne    80ec980 <_ZN12CDBConnector22ConnectWithServerGroupESt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS1_ESaISt4pairIKS1_S2_EEE+0x88>
 80ec92d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80ec930:	89 04 24             	mov    %eax,(%esp)
 80ec933:	e8 b0 05 00 00       	call   80ecee8 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDX12STDBConnInfoEEptEv>
 80ec938:	8d 70 04             	lea    0x4(%eax),%esi
 80ec93b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80ec93e:	89 04 24             	mov    %eax,(%esp)
 80ec941:	e8 a2 05 00 00       	call   80ecee8 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDX12STDBConnInfoEEptEv>
 80ec946:	8b 80 68 01 00 00    	mov    0x168(%eax),%eax
 80ec94c:	89 c3                	mov    %eax,%ebx
 80ec94e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80ec951:	89 04 24             	mov    %eax,(%esp)
 80ec954:	e8 8f 05 00 00       	call   80ecee8 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDX12STDBConnInfoEEptEv>
 80ec959:	8b 00                	mov    (%eax),%eax
 80ec95b:	89 74 24 0c          	mov    %esi,0xc(%esp)
 80ec95f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 80ec963:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ec967:	8b 45 08             	mov    0x8(%ebp),%eax
 80ec96a:	89 04 24             	mov    %eax,(%esp)
 80ec96d:	e8 68 fd ff ff       	call   80ec6da <_ZN12CDBConnector4OpenE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo>
 80ec972:	83 f0 01             	xor    $0x1,%eax
 80ec975:	84 c0                	test   %al,%al
 80ec977:	74 08                	je     80ec981 <_ZN12CDBConnector22ConnectWithServerGroupESt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS1_ESaISt4pairIKS1_S2_EEE+0x89>
 80ec979:	b8 00 00 00 00       	mov    $0x0,%eax
 80ec97e:	eb 40                	jmp    80ec9c0 <_ZN12CDBConnector22ConnectWithServerGroupESt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS1_ESaISt4pairIKS1_S2_EEE+0xc8>
 80ec980:	90                   	nop
 80ec981:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80ec984:	89 04 24             	mov    %eax,(%esp)
 80ec987:	e8 3e 05 00 00       	call   80ececa <_ZNSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDX12STDBConnInfoEEppEv>
 80ec98c:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80ec98f:	8b 55 0c             	mov    0xc(%ebp),%edx
 80ec992:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ec996:	89 04 24             	mov    %eax,(%esp)
 80ec999:	e8 f2 04 00 00       	call   80ece90 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 80ec99e:	83 ec 04             	sub    $0x4,%esp
 80ec9a1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80ec9a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ec9a8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80ec9ab:	89 04 24             	mov    %eax,(%esp)
 80ec9ae:	e8 03 05 00 00       	call   80eceb6 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDX12STDBConnInfoEEneERKS5_>
 80ec9b3:	84 c0                	test   %al,%al
 80ec9b5:	0f 85 5c ff ff ff    	jne    80ec917 <_ZN12CDBConnector22ConnectWithServerGroupESt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS1_ESaISt4pairIKS1_S2_EEE+0x1f>
 80ec9bb:	b8 01 00 00 00       	mov    $0x1,%eax
 80ec9c0:	8d 65 f8             	lea    -0x8(%ebp),%esp
 80ec9c3:	83 c4 00             	add    $0x0,%esp
 80ec9c6:	5b                   	pop    %ebx
 80ec9c7:	5e                   	pop    %esi
 80ec9c8:	5d                   	pop    %ebp
 80ec9c9:	c3                   	ret

```

```c
// CDBConnector::ConnectWithServerGroup @ 0x80ec8f8

/* CDBConnector::ConnectWithServerGroup(std::map<ENUM_DB_HANDLE_IDX, STDBConnInfo,
   std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const, STDBConnInfo> >
   >) */

undefined4 CDBConnector::ConnectWithServerGroup(CDBConnector *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
  local_14 [4];
  map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
  local_10 [4];
  
  std::
  map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
  ::begin(local_14);
  do {
    std::
    map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
    ::end(local_10);
    cVar2 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator!=
                      ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                       local_14,(_Rb_tree_iterator *)local_10);
    if (cVar2 == '\0') {
      return 1;
    }
    piVar3 = (int *)std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::
                    operator->((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>
                                *)local_14);
    if (*piVar3 != 0) {
      iVar4 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                         local_14);
      iVar5 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                         local_14);
      uVar1 = *(undefined4 *)(iVar5 + 0x168);
      puVar6 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator->
                         ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)
                          local_14);
      cVar2 = Open(param_1,*puVar6,uVar1,iVar4 + 4);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>::operator++
              ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>> *)local_14);
  } while( true );
}

```

---

## GetConnInfo

```asm
// === 080ec9ca CDBConnector::GetConnInfo  [0x080ec9ca-0x80eca6b] ===
 80ec9ca:	55                   	push   %ebp
 80ec9cb:	89 e5                	mov    %esp,%ebp
 80ec9cd:	53                   	push   %ebx
 80ec9ce:	83 ec 24             	sub    $0x24,%esp
 80ec9d1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80ec9d4:	8b 55 0c             	mov    0xc(%ebp),%edx
 80ec9d7:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ec9db:	89 04 24             	mov    %eax,(%esp)
 80ec9de:	e8 13 05 00 00       	call   80ecef6 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPSt4lessIS0_ESaISt4pairIKS0_S1_EEE5beginEv>
 80ec9e3:	83 ec 04             	sub    $0x4,%esp
 80ec9e6:	eb 4e                	jmp    80eca36 <_ZN12CDBConnector11GetConnInfoERSt3mapI18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPSt4lessIS1_ESaISt4pairIKS1_S2_EEERS0_IS1_12STDBConnInfoS4_SaIS5_IS6_SB_EEE+0x6c>
 80ec9e8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80ec9eb:	89 04 24             	mov    %eax,(%esp)
 80ec9ee:	e8 81 05 00 00       	call   80ecf74 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPEEptEv>
 80ec9f3:	8b 58 04             	mov    0x4(%eax),%ebx
 80ec9f6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80ec9f9:	89 04 24             	mov    %eax,(%esp)
 80ec9fc:	e8 73 05 00 00       	call   80ecf74 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPEEptEv>
 80eca01:	8b 00                	mov    (%eax),%eax
 80eca03:	8b 55 10             	mov    0x10(%ebp),%edx
 80eca06:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80eca0a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 80eca0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80eca12:	8b 45 08             	mov    0x8(%ebp),%eax
 80eca15:	89 04 24             	mov    %eax,(%esp)
 80eca18:	e8 4f 00 00 00       	call   80eca6c <_ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE>
 80eca1d:	83 f0 01             	xor    $0x1,%eax
 80eca20:	84 c0                	test   %al,%al
 80eca22:	74 07                	je     80eca2b <_ZN12CDBConnector11GetConnInfoERSt3mapI18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPSt4lessIS1_ESaISt4pairIKS1_S2_EEERS0_IS1_12STDBConnInfoS4_SaIS5_IS6_SB_EEE+0x61>
 80eca24:	b8 00 00 00 00       	mov    $0x0,%eax
 80eca29:	eb 3b                	jmp    80eca66 <_ZN12CDBConnector11GetConnInfoERSt3mapI18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPSt4lessIS1_ESaISt4pairIKS1_S2_EEERS0_IS1_12STDBConnInfoS4_SaIS5_IS6_SB_EEE+0x9c>
 80eca2b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80eca2e:	89 04 24             	mov    %eax,(%esp)
 80eca31:	e8 20 05 00 00       	call   80ecf56 <_ZNSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPEEppEv>
 80eca36:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80eca39:	8b 55 0c             	mov    0xc(%ebp),%edx
 80eca3c:	89 54 24 04          	mov    %edx,0x4(%esp)
 80eca40:	89 04 24             	mov    %eax,(%esp)
 80eca43:	e8 d4 04 00 00       	call   80ecf1c <_ZNSt3mapI18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 80eca48:	83 ec 04             	sub    $0x4,%esp
 80eca4b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80eca4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80eca52:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80eca55:	89 04 24             	mov    %eax,(%esp)
 80eca58:	e8 e5 04 00 00       	call   80ecf42 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPEEneERKS5_>
 80eca5d:	84 c0                	test   %al,%al
 80eca5f:	75 87                	jne    80ec9e8 <_ZN12CDBConnector11GetConnInfoERSt3mapI18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPSt4lessIS1_ESaISt4pairIKS1_S2_EEERS0_IS1_12STDBConnInfoS4_SaIS5_IS6_SB_EEE+0x1e>
 80eca61:	b8 01 00 00 00       	mov    $0x1,%eax
 80eca66:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 80eca69:	c9                   	leave
 80eca6a:	c3                   	ret
 80eca6b:	90                   	nop

```

```c
// CDBConnector::GetConnInfo @ 0x80ec9ca

/* CDBConnector::GetConnInfo(std::map<ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP,
   std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const,
   ENUM_SERVER_GROUP> > >&, std::map<ENUM_DB_HANDLE_IDX, STDBConnInfo,
   std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const, STDBConnInfo> >
   >&) */

undefined4 __thiscall CDBConnector::GetConnInfo(CDBConnector *this,map *param_1,map *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
  local_14 [4];
  map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
  local_10 [8];
  
  std::
  map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
  ::begin(local_14);
  while( true ) {
    std::
    map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
    ::end(local_10);
    cVar2 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>::
            operator!=((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>> *)
                       local_14,(_Rb_tree_iterator *)local_10);
    if (cVar2 == '\0') {
      return 1;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>::
            operator->((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>> *)
                       local_14);
    uVar1 = *(undefined4 *)(iVar3 + 4);
    puVar4 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>::
             operator->((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>> *)
                        local_14);
    cVar2 = QueryConnInfo(this,*puVar4,uVar1,param_2);
    if (cVar2 != '\x01') break;
    std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>::operator++
              ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>> *)local_14)
    ;
  }
  return 0;
}

```

---

## Init

```asm
// === 080ec620 CDBConnector::Init  [0x080ec620-0x80ec667] ===
 80ec620:	55                   	push   %ebp
 80ec621:	89 e5                	mov    %esp,%ebp
 80ec623:	57                   	push   %edi
 80ec624:	56                   	push   %esi
 80ec625:	53                   	push   %ebx
 80ec626:	83 ec 1c             	sub    $0x1c,%esp
 80ec629:	8b 55 08             	mov    0x8(%ebp),%edx
 80ec62c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ec62f:	8d 5a 04             	lea    0x4(%edx),%ebx
 80ec632:	89 c2                	mov    %eax,%edx
 80ec634:	b8 5a 00 00 00       	mov    $0x5a,%eax
 80ec639:	89 df                	mov    %ebx,%edi
 80ec63b:	89 d6                	mov    %edx,%esi
 80ec63d:	89 c1                	mov    %eax,%ecx
 80ec63f:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 80ec641:	8b 45 08             	mov    0x8(%ebp),%eax
 80ec644:	89 04 24             	mov    %eax,(%esp)
 80ec647:	e8 30 00 00 00       	call   80ec67c <_ZN12CDBConnector10OpenMasterEv>
 80ec64c:	83 f0 01             	xor    $0x1,%eax
 80ec64f:	84 c0                	test   %al,%al
 80ec651:	74 07                	je     80ec65a <_ZN12CDBConnector4InitER12STDBConnInfo+0x3a>
 80ec653:	b8 00 00 00 00       	mov    $0x0,%eax
 80ec658:	eb 05                	jmp    80ec65f <_ZN12CDBConnector4InitER12STDBConnInfo+0x3f>
 80ec65a:	b8 01 00 00 00       	mov    $0x1,%eax
 80ec65f:	83 c4 1c             	add    $0x1c,%esp
 80ec662:	5b                   	pop    %ebx
 80ec663:	5e                   	pop    %esi
 80ec664:	5f                   	pop    %edi
 80ec665:	5d                   	pop    %ebp
 80ec666:	c3                   	ret
 80ec667:	90                   	nop

```

```c
// CDBConnector::Init @ 0x80ec620

/* CDBConnector::Init(STDBConnInfo&) */

bool __thiscall CDBConnector::Init(CDBConnector *this,STDBConnInfo *param_1)

{
  char cVar1;
  int iVar2;
  CDBConnector *pCVar3;
  
  pCVar3 = this;
  for (iVar2 = 0x5a; pCVar3 = pCVar3 + 4, iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar3 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
  }
  cVar1 = OpenMaster(this);
  return cVar1 == '\x01';
}

```

---

## Open

```asm
// === 080ec6da CDBConnector::Open  [0x080ec6da-0x80ec75f] ===
 80ec6da:	55                   	push   %ebp
 80ec6db:	89 e5                	mov    %esp,%ebp
 80ec6dd:	57                   	push   %edi
 80ec6de:	56                   	push   %esi
 80ec6df:	53                   	push   %ebx
 80ec6e0:	83 ec 3c             	sub    $0x3c,%esp
 80ec6e3:	8b 45 14             	mov    0x14(%ebp),%eax
 80ec6e6:	0f b6 00             	movzbl (%eax),%eax
 80ec6e9:	84 c0                	test   %al,%al
 80ec6eb:	75 07                	jne    80ec6f4 <_ZN12CDBConnector4OpenE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0x1a>
 80ec6ed:	b8 01 00 00 00       	mov    $0x1,%eax
 80ec6f2:	eb 64                	jmp    80ec758 <_ZN12CDBConnector4OpenE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0x7e>
 80ec6f4:	8b 45 14             	mov    0x14(%ebp),%eax
 80ec6f7:	83 c0 2d             	add    $0x2d,%eax
 80ec6fa:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80ec6fd:	8b 45 14             	mov    0x14(%ebp),%eax
 80ec700:	8d 78 18             	lea    0x18(%eax),%edi
 80ec703:	8b 45 14             	mov    0x14(%ebp),%eax
 80ec706:	8d 70 42             	lea    0x42(%eax),%esi
 80ec709:	8b 45 14             	mov    0x14(%ebp),%eax
 80ec70c:	8b 48 14             	mov    0x14(%eax),%ecx
 80ec70f:	8b 45 14             	mov    0x14(%ebp),%eax
 80ec712:	8b 15 ac bd 40 09    	mov    0x940bdac,%edx
 80ec718:	8b 5d 10             	mov    0x10(%ebp),%ebx
 80ec71b:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 80ec71f:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 80ec722:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 80ec726:	89 7c 24 14          	mov    %edi,0x14(%esp)
 80ec72a:	89 74 24 10          	mov    %esi,0x10(%esp)
 80ec72e:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 80ec732:	89 44 24 08          	mov    %eax,0x8(%esp)
 80ec736:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ec739:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ec73d:	89 14 24             	mov    %edx,(%esp)
 80ec740:	e8 e9 85 30 00       	call   83f4d2e <_ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcjS1_S1_S1_17ENUM_SERVER_GROUP>
 80ec745:	83 f0 01             	xor    $0x1,%eax
 80ec748:	84 c0                	test   %al,%al
 80ec74a:	74 07                	je     80ec753 <_ZN12CDBConnector4OpenE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0x79>
 80ec74c:	b8 00 00 00 00       	mov    $0x0,%eax
 80ec751:	eb 05                	jmp    80ec758 <_ZN12CDBConnector4OpenE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0x7e>
 80ec753:	b8 01 00 00 00       	mov    $0x1,%eax
 80ec758:	83 c4 3c             	add    $0x3c,%esp
 80ec75b:	5b                   	pop    %ebx
 80ec75c:	5e                   	pop    %esi
 80ec75d:	5f                   	pop    %edi
 80ec75e:	5d                   	pop    %ebp
 80ec75f:	c3                   	ret

```

```c
// CDBConnector::Open @ 0x80ec6da

/* CDBConnector::Open(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP, STDBConnInfo&) */

undefined4 __thiscall
CDBConnector::Open(undefined4 this,undefined4 param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*param_4 == '\0') {
    uVar2 = 1;
  }
  else {
    cVar1 = DBMgr::Open(GlobalData::s_db_mgr,param_2,param_4,*(undefined4 *)(param_4 + 0x14),
                        param_4 + 0x42,param_4 + 0x18,param_4 + 0x2d,param_3);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## OpenMaster

```asm
// === 080ec67c CDBConnector::OpenMaster  [0x080ec67c-0x80ec6bb] ===
 80ec67c:	55                   	push   %ebp
 80ec67d:	89 e5                	mov    %esp,%ebp
 80ec67f:	83 ec 18             	sub    $0x18,%esp
 80ec682:	8b 45 08             	mov    0x8(%ebp),%eax
 80ec685:	83 c0 04             	add    $0x4,%eax
 80ec688:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80ec68c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80ec693:	00 
 80ec694:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80ec69b:	00 
 80ec69c:	8b 45 08             	mov    0x8(%ebp),%eax
 80ec69f:	89 04 24             	mov    %eax,(%esp)
 80ec6a2:	e8 33 00 00 00       	call   80ec6da <_ZN12CDBConnector4OpenE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo>
 80ec6a7:	83 f0 01             	xor    $0x1,%eax
 80ec6aa:	84 c0                	test   %al,%al
 80ec6ac:	74 07                	je     80ec6b5 <_ZN12CDBConnector10OpenMasterEv+0x39>
 80ec6ae:	b8 00 00 00 00       	mov    $0x0,%eax
 80ec6b3:	eb 05                	jmp    80ec6ba <_ZN12CDBConnector10OpenMasterEv+0x3e>
 80ec6b5:	b8 01 00 00 00       	mov    $0x1,%eax
 80ec6ba:	c9                   	leave
 80ec6bb:	c3                   	ret

```

```c
// CDBConnector::OpenMaster @ 0x80ec67c

/* CDBConnector::OpenMaster() */

bool __thiscall CDBConnector::OpenMaster(CDBConnector *this)

{
  char cVar1;
  
  cVar1 = Open(this,0,0,this + 4);
  return cVar1 == '\x01';
}

```

---

## QueryConnInfo

```asm
// === 080eca6c CDBConnector::QueryConnInfo  [0x080eca6c-0x80eccda] ===
 80eca6c:	55                   	push   %ebp
 80eca6d:	89 e5                	mov    %esp,%ebp
 80eca6f:	57                   	push   %edi
 80eca70:	56                   	push   %esi
 80eca71:	53                   	push   %ebx
 80eca72:	81 ec cc 01 00 00    	sub    $0x1cc,%esp
 80eca78:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 80eca7d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80eca84:	00 
 80eca85:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80eca8c:	00 
 80eca8d:	89 04 24             	mov    %eax,(%esp)
 80eca90:	e8 a9 87 30 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 80eca95:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80eca98:	8b 55 0c             	mov    0xc(%ebp),%edx
 80eca9b:	8b 45 10             	mov    0x10(%ebp),%eax
 80eca9e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80ecaa2:	89 44 24 08          	mov    %eax,0x8(%esp)
 80ecaa6:	c7 44 24 04 c4 56 b3 	movl   $0x8b356c4,0x4(%esp)
 80ecaad:	08 
 80ecaae:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80ecab1:	89 04 24             	mov    %eax,(%esp)
 80ecab4:	e8 07 77 30 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 80ecab9:	83 f0 01             	xor    $0x1,%eax
 80ecabc:	84 c0                	test   %al,%al
 80ecabe:	74 0a                	je     80ecaca <_ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE+0x5e>
 80ecac0:	b8 00 00 00 00       	mov    $0x0,%eax
 80ecac5:	e9 06 02 00 00       	jmp    80eccd0 <_ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE+0x264>
 80ecaca:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80ecad1:	00 
 80ecad2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80ecad5:	89 04 24             	mov    %eax,(%esp)
 80ecad8:	e8 49 78 30 00       	call   83f4326 <_ZN5MySQL4execEb>
 80ecadd:	83 f0 01             	xor    $0x1,%eax
 80ecae0:	84 c0                	test   %al,%al
 80ecae2:	74 0a                	je     80ecaee <_ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE+0x82>
 80ecae4:	b8 00 00 00 00       	mov    $0x0,%eax
 80ecae9:	e9 e2 01 00 00       	jmp    80eccd0 <_ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE+0x264>
 80ecaee:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80ecaf1:	89 04 24             	mov    %eax,(%esp)
 80ecaf4:	e8 c3 79 30 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 80ecaf9:	83 f0 01             	xor    $0x1,%eax
 80ecafc:	84 c0                	test   %al,%al
 80ecafe:	74 0a                	je     80ecb0a <_ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE+0x9e>
 80ecb00:	b8 00 00 00 00       	mov    $0x0,%eax
 80ecb05:	e9 c6 01 00 00       	jmp    80eccd0 <_ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE+0x264>
 80ecb0a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80ecb0d:	89 04 24             	mov    %eax,(%esp)
 80ecb10:	e8 57 58 ff ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 80ecb15:	83 f8 01             	cmp    $0x1,%eax
 80ecb18:	0f 95 c0             	setne  %al
 80ecb1b:	84 c0                	test   %al,%al
 80ecb1d:	74 0a                	je     80ecb29 <_ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE+0xbd>
 80ecb1f:	b8 00 00 00 00       	mov    $0x0,%eax
 80ecb24:	e9 a7 01 00 00       	jmp    80eccd0 <_ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE+0x264>
 80ecb29:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 80ecb30:	8d 85 38 fe ff ff    	lea    -0x1c8(%ebp),%eax
 80ecb36:	89 04 24             	mov    %eax,(%esp)
 80ecb39:	e8 fa 01 00 00       	call   80ecd38 <_ZN12STDBConnInfoC1Ev>
 80ecb3e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80ecb41:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 80ecb45:	c7 44 24 0c 1f 00 00 	movl   $0x1f,0xc(%esp)
 80ecb4c:	00 
 80ecb4d:	8d 95 38 fe ff ff    	lea    -0x1c8(%ebp),%edx
 80ecb53:	83 c2 42             	add    $0x42,%edx
 80ecb56:	89 54 24 08          	mov    %edx,0x8(%esp)
 80ecb5a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ecb5e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80ecb61:	89 04 24             	mov    %eax,(%esp)
 80ecb64:	e8 81 02 00 00       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 80ecb69:	83 f0 01             	xor    $0x1,%eax
 80ecb6c:	84 c0                	test   %al,%al
 80ecb6e:	74 0a                	je     80ecb7a <_ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE+0x10e>
 80ecb70:	b8 00 00 00 00       	mov    $0x0,%eax
 80ecb75:	e9 56 01 00 00       	jmp    80eccd0 <_ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE+0x264>
 80ecb7a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80ecb7d:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 80ecb81:	c7 44 24 0c 11 00 00 	movl   $0x11,0xc(%esp)
 80ecb88:	00 
 80ecb89:	8d 95 38 fe ff ff    	lea    -0x1c8(%ebp),%edx
 80ecb8f:	89 54 24 08          	mov    %edx,0x8(%esp)
 80ecb93:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ecb97:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80ecb9a:	89 04 24             	mov    %eax,(%esp)
 80ecb9d:	e8 48 02 00 00       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 80ecba2:	83 f0 01             	xor    $0x1,%eax
 80ecba5:	84 c0                	test   %al,%al
 80ecba7:	74 0a                	je     80ecbb3 <_ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE+0x147>
 80ecba9:	b8 00 00 00 00       	mov    $0x0,%eax
 80ecbae:	e9 1d 01 00 00       	jmp    80eccd0 <_ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE+0x264>
 80ecbb3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80ecbb6:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 80ecbba:	8d 95 38 fe ff ff    	lea    -0x1c8(%ebp),%edx
 80ecbc0:	83 c2 14             	add    $0x14,%edx
 80ecbc3:	89 54 24 08          	mov    %edx,0x8(%esp)
 80ecbc7:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ecbcb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80ecbce:	89 04 24             	mov    %eax,(%esp)
 80ecbd1:	e8 d8 56 ff ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 80ecbd6:	83 f0 01             	xor    $0x1,%eax
 80ecbd9:	84 c0                	test   %al,%al
 80ecbdb:	74 0a                	je     80ecbe7 <_ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE+0x17b>
 80ecbdd:	b8 00 00 00 00       	mov    $0x0,%eax
 80ecbe2:	e9 e9 00 00 00       	jmp    80eccd0 <_ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE+0x264>
 80ecbe7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80ecbea:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 80ecbee:	c7 44 24 0c 15 00 00 	movl   $0x15,0xc(%esp)
 80ecbf5:	00 
 80ecbf6:	8d 95 38 fe ff ff    	lea    -0x1c8(%ebp),%edx
 80ecbfc:	83 c2 18             	add    $0x18,%edx
 80ecbff:	89 54 24 08          	mov    %edx,0x8(%esp)
 80ecc03:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ecc07:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80ecc0a:	89 04 24             	mov    %eax,(%esp)
 80ecc0d:	e8 d8 01 00 00       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 80ecc12:	83 f0 01             	xor    $0x1,%eax
 80ecc15:	84 c0                	test   %al,%al
 80ecc17:	74 0a                	je     80ecc23 <_ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE+0x1b7>
 80ecc19:	b8 00 00 00 00       	mov    $0x0,%eax
 80ecc1e:	e9 ad 00 00 00       	jmp    80eccd0 <_ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE+0x264>
 80ecc23:	8d 5d a0             	lea    -0x60(%ebp),%ebx
 80ecc26:	b8 00 00 00 00       	mov    $0x0,%eax
 80ecc2b:	ba 0f 00 00 00       	mov    $0xf,%edx
 80ecc30:	89 df                	mov    %ebx,%edi
 80ecc32:	89 d1                	mov    %edx,%ecx
 80ecc34:	f3 ab                	rep stos %eax,%es:(%edi)
 80ecc36:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80ecc39:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 80ecc3d:	c7 44 24 0c 3c 00 00 	movl   $0x3c,0xc(%esp)
 80ecc44:	00 
 80ecc45:	8d 55 a0             	lea    -0x60(%ebp),%edx
 80ecc48:	89 54 24 08          	mov    %edx,0x8(%esp)
 80ecc4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ecc50:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80ecc53:	89 04 24             	mov    %eax,(%esp)
 80ecc56:	e8 8f 01 00 00       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 80ecc5b:	83 f0 01             	xor    $0x1,%eax
 80ecc5e:	84 c0                	test   %al,%al
 80ecc60:	74 07                	je     80ecc69 <_ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE+0x1fd>
 80ecc62:	b8 00 00 00 00       	mov    $0x0,%eax
 80ecc67:	eb 67                	jmp    80eccd0 <_ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE+0x264>
 80ecc69:	e8 13 f5 fd ff       	call   80cc181 <_Z14G_CEnvironmentv>
 80ecc6e:	8d 95 38 fe ff ff    	lea    -0x1c8(%ebp),%edx
 80ecc74:	83 c2 2d             	add    $0x2d,%edx
 80ecc77:	89 54 24 08          	mov    %edx,0x8(%esp)
 80ecc7b:	8d 55 a0             	lea    -0x60(%ebp),%edx
 80ecc7e:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ecc82:	89 04 24             	mov    %eax,(%esp)
 80ecc85:	e8 4a 63 1a 00       	call   8292fd4 <_ZN12CEnvironment12DecryptValueEPKcPc>
 80ecc8a:	83 f0 01             	xor    $0x1,%eax
 80ecc8d:	84 c0                	test   %al,%al
 80ecc8f:	74 07                	je     80ecc98 <_ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE+0x22c>
 80ecc91:	b8 00 00 00 00       	mov    $0x0,%eax
 80ecc96:	eb 38                	jmp    80eccd0 <_ZN12CDBConnector13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPRSt3mapIS0_12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S3_EEE+0x264>
 80ecc98:	8b 45 10             	mov    0x10(%ebp),%eax
 80ecc9b:	89 45 9c             	mov    %eax,-0x64(%ebp)
 80ecc9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ecca1:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80ecca4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80ecca7:	89 44 24 04          	mov    %eax,0x4(%esp)
 80eccab:	8b 45 14             	mov    0x14(%ebp),%eax
 80eccae:	89 04 24             	mov    %eax,(%esp)
 80eccb1:	e8 cc 02 00 00       	call   80ecf82 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEEixERS5_>
 80eccb6:	89 c2                	mov    %eax,%edx
 80eccb8:	8d 9d 38 fe ff ff    	lea    -0x1c8(%ebp),%ebx
 80eccbe:	b8 5a 00 00 00       	mov    $0x5a,%eax
 80eccc3:	89 d7                	mov    %edx,%edi
 80eccc5:	89 de                	mov    %ebx,%esi
 80eccc7:	89 c1                	mov    %eax,%ecx
 80eccc9:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 80ecccb:	b8 01 00 00 00       	mov    $0x1,%eax
 80eccd0:	81 c4 cc 01 00 00    	add    $0x1cc,%esp
 80eccd6:	5b                   	pop    %ebx
 80eccd7:	5e                   	pop    %esi
 80eccd8:	5f                   	pop    %edi
 80eccd9:	5d                   	pop    %ebp
 80eccda:	c3                   	ret

```

```c
// CDBConnector::QueryConnInfo @ 0x80eca6c

/* CDBConnector::QueryConnInfo(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP, std::map<ENUM_DB_HANDLE_IDX,
   STDBConnInfo, std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const,
   STDBConnInfo> > >&) */

undefined4 __thiscall
CDBConnector::QueryConnInfo
          (undefined4 this,undefined4 param_2,undefined4 param_3,
          map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
          *param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  CEnvironment *this_00;
  undefined4 *puVar5;
  STDBConnInfo *pSVar6;
  char *pcVar7;
  byte bVar8;
  STDBConnInfo local_1cc [20];
  uint uStack_1b8;
  char acStack_1b4 [21];
  char acStack_19f [21];
  char acStack_18a [290];
  undefined4 local_68;
  char local_64 [60];
  undefined4 local_28;
  MySQL *local_24;
  int local_20;
  
  bVar8 = 0;
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0,0);
  cVar2 = MySQL::set_query(local_24,
                           "seLect db_name,db_ip,db_port,db_userid,db_passwd from db_connect where db_server_group = %d and db_type = %d"
                           ,param_3,param_2);
  if (cVar2 == '\x01') {
    cVar2 = MySQL::exec(local_24,true);
    if (cVar2 == '\x01') {
      cVar2 = MySQL::fetch(local_24);
      if (cVar2 == '\x01') {
        iVar4 = MySQL::get_n_rows(local_24);
        if (iVar4 == 1) {
          local_20 = 0;
          STDBConnInfo::STDBConnInfo(local_1cc);
          iVar4 = local_20;
          local_20 = local_20 + 1;
          cVar2 = MySQL::get_str(local_24,iVar4,acStack_18a,0x1f);
          iVar4 = local_20;
          if (cVar2 == '\x01') {
            local_20 = local_20 + 1;
            cVar2 = MySQL::get_str(local_24,iVar4,(char *)local_1cc,0x11);
            iVar4 = local_20;
            if (cVar2 == '\x01') {
              local_20 = local_20 + 1;
              cVar2 = MySQL::get_int(local_24,iVar4,&uStack_1b8);
              iVar4 = local_20;
              if (cVar2 == '\x01') {
                local_20 = local_20 + 1;
                cVar2 = MySQL::get_str(local_24,iVar4,acStack_1b4,0x15);
                if (cVar2 == '\x01') {
                  pcVar7 = local_64;
                  for (iVar4 = 0xf; iVar1 = local_20, iVar4 != 0; iVar4 = iVar4 + -1) {
                    pcVar7[0] = '\0';
                    pcVar7[1] = '\0';
                    pcVar7[2] = '\0';
                    pcVar7[3] = '\0';
                    pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
                  }
                  local_20 = local_20 + 1;
                  cVar2 = MySQL::get_str(local_24,iVar1,local_64,0x3c);
                  if (cVar2 == '\x01') {
                    this_00 = (CEnvironment *)G_CEnvironment();
                    cVar2 = CEnvironment::DecryptValue(this_00,local_64,acStack_19f);
                    if (cVar2 == '\x01') {
                      local_68 = param_3;
                      local_28 = param_2;
                      puVar5 = (undefined4 *)
                               std::
                               map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
                               ::operator[](param_4,(ENUM_DB_HANDLE_IDX *)&local_28);
                      pSVar6 = local_1cc;
                      for (iVar4 = 0x5a; iVar4 != 0; iVar4 = iVar4 + -1) {
                        *puVar5 = *(undefined4 *)pSVar6;
                        pSVar6 = pSVar6 + ((uint)bVar8 * -2 + 1) * 4;
                        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
                      }
                      uVar3 = 1;
                    }
                    else {
                      uVar3 = 0;
                    }
                  }
                  else {
                    uVar3 = 0;
                  }
                }
                else {
                  uVar3 = 0;
                }
              }
              else {
                uVar3 = 0;
              }
            }
            else {
              uVar3 = 0;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## ~CDBConnector

```asm
// === 080ec61a CDBConnector::~CDBConnector  [0x080ec61a-0x80ec61f] ===
 80ec61a:	55                   	push   %ebp
 80ec61b:	89 e5                	mov    %esp,%ebp
 80ec61d:	5d                   	pop    %ebp
 80ec61e:	c3                   	ret
 80ec61f:	90                   	nop

```

```c
// CDBConnector::~CDBConnector @ 0x80ec61a

/* CDBConnector::~CDBConnector() */

void __thiscall CDBConnector::~CDBConnector(CDBConnector *this)

{
  return;
}

```

