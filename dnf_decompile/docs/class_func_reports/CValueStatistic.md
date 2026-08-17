# CValueStatistic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## AddValueStatistic

```asm
// === 0860d682 CValueStatistic::AddValueStatistic  [0x0860d682-0x860d8a3] ===
 860d682:	55                   	push   %ebp
 860d683:	89 e5                	mov    %esp,%ebp
 860d685:	57                   	push   %edi
 860d686:	56                   	push   %esi
 860d687:	53                   	push   %ebx
 860d688:	81 ec 2c 64 00 00    	sub    $0x642c,%esp
 860d68e:	8b 45 0c             	mov    0xc(%ebp),%eax
 860d691:	85 c0                	test   %eax,%eax
 860d693:	78 27                	js     860d6bc <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj+0x3a>
 860d695:	8b 45 0c             	mov    0xc(%ebp),%eax
 860d698:	83 f8 1d             	cmp    $0x1d,%eax
 860d69b:	7f 1f                	jg     860d6bc <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj+0x3a>
 860d69d:	8b 45 10             	mov    0x10(%ebp),%eax
 860d6a0:	89 04 24             	mov    %eax,(%esp)
 860d6a3:	e8 10 cc ac ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 860d6a8:	85 c0                	test   %eax,%eax
 860d6aa:	7e 10                	jle    860d6bc <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj+0x3a>
 860d6ac:	8b 45 10             	mov    0x10(%ebp),%eax
 860d6af:	89 04 24             	mov    %eax,(%esp)
 860d6b2:	e8 01 cc ac ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 860d6b7:	83 f8 46             	cmp    $0x46,%eax
 860d6ba:	7e 07                	jle    860d6c3 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj+0x41>
 860d6bc:	b8 01 00 00 00       	mov    $0x1,%eax
 860d6c1:	eb 05                	jmp    860d6c8 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj+0x46>
 860d6c3:	b8 00 00 00 00       	mov    $0x0,%eax
 860d6c8:	84 c0                	test   %al,%al
 860d6ca:	74 5e                	je     860d72a <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj+0xa8>
 860d6cc:	8b 45 10             	mov    0x10(%ebp),%eax
 860d6cf:	89 04 24             	mov    %eax,(%esp)
 860d6d2:	e8 e1 cb ac ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 860d6d7:	89 c3                	mov    %eax,%ebx
 860d6d9:	8b 75 0c             	mov    0xc(%ebp),%esi
 860d6dc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 860d6e3:	00 
 860d6e4:	c7 44 24 08 06 03 00 	movl   $0x306,0x8(%esp)
 860d6eb:	00 
 860d6ec:	c7 44 24 04 80 12 ce 	movl   $0x8ce1280,0x4(%esp)
 860d6f3:	08 
 860d6f4:	8d 85 28 bd ff ff    	lea    -0x42d8(%ebp),%eax
 860d6fa:	89 04 24             	mov    %eax,(%esp)
 860d6fd:	e8 16 20 f4 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 860d702:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 860d706:	89 74 24 08          	mov    %esi,0x8(%esp)
 860d70a:	c7 44 24 04 dc 02 ce 	movl   $0x8ce02dc,0x4(%esp)
 860d711:	08 
 860d712:	8d 85 28 bd ff ff    	lea    -0x42d8(%ebp),%eax
 860d718:	89 04 24             	mov    %eax,(%esp)
 860d71b:	e8 68 20 f4 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 860d720:	b8 00 00 00 00       	mov    $0x0,%eax
 860d725:	e9 6e 01 00 00       	jmp    860d898 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj+0x216>
 860d72a:	8b 45 10             	mov    0x10(%ebp),%eax
 860d72d:	89 04 24             	mov    %eax,(%esp)
 860d730:	e8 5b e5 ab ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 860d735:	89 85 38 bd ff ff    	mov    %eax,-0x42c8(%ebp)
 860d73b:	8b 55 08             	mov    0x8(%ebp),%edx
 860d73e:	8d 85 24 bd ff ff    	lea    -0x42dc(%ebp),%eax
 860d744:	8d 8d 38 bd ff ff    	lea    -0x42c8(%ebp),%ecx
 860d74a:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 860d74e:	89 54 24 04          	mov    %edx,0x4(%esp)
 860d752:	89 04 24             	mov    %eax,(%esp)
 860d755:	e8 4c 3b 00 00       	call   86112a6 <_ZNSt3mapI17ENUM_SERVER_GROUPN15CValueStatistic16stValueStatisticESt4lessIS0_ESaISt4pairIKS0_S2_EEE4findERS6_>
 860d75a:	83 ec 04             	sub    $0x4,%esp
 860d75d:	8b 55 08             	mov    0x8(%ebp),%edx
 860d760:	8d 85 3c bd ff ff    	lea    -0x42c4(%ebp),%eax
 860d766:	89 54 24 04          	mov    %edx,0x4(%esp)
 860d76a:	89 04 24             	mov    %eax,(%esp)
 860d76d:	e8 60 3b 00 00       	call   86112d2 <_ZNSt3mapI17ENUM_SERVER_GROUPN15CValueStatistic16stValueStatisticESt4lessIS0_ESaISt4pairIKS0_S2_EEE3endEv>
 860d772:	83 ec 04             	sub    $0x4,%esp
 860d775:	8d 85 3c bd ff ff    	lea    -0x42c4(%ebp),%eax
 860d77b:	89 44 24 04          	mov    %eax,0x4(%esp)
 860d77f:	8d 85 24 bd ff ff    	lea    -0x42dc(%ebp),%eax
 860d785:	89 04 24             	mov    %eax,(%esp)
 860d788:	e8 6b 3b 00 00       	call   86112f8 <_ZNKSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPN15CValueStatistic16stValueStatisticEEEneERKS6_>
 860d78d:	84 c0                	test   %al,%al
 860d78f:	74 57                	je     860d7e8 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj+0x166>
 860d791:	8d 85 24 bd ff ff    	lea    -0x42dc(%ebp),%eax
 860d797:	89 04 24             	mov    %eax,(%esp)
 860d79a:	e8 6d 3b 00 00       	call   861130c <_ZNKSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPN15CValueStatistic16stValueStatisticEEEptEv>
 860d79f:	83 c0 04             	add    $0x4,%eax
 860d7a2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 860d7a5:	8b 45 10             	mov    0x10(%ebp),%eax
 860d7a8:	89 04 24             	mov    %eax,(%esp)
 860d7ab:	e8 08 cb ac ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 860d7b0:	89 c7                	mov    %eax,%edi
 860d7b2:	8b 75 0c             	mov    0xc(%ebp),%esi
 860d7b5:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 860d7b8:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 860d7bb:	01 c0                	add    %eax,%eax
 860d7bd:	89 c2                	mov    %eax,%edx
 860d7bf:	c1 e2 04             	shl    $0x4,%edx
 860d7c2:	29 c2                	sub    %eax,%edx
 860d7c4:	8d 04 1a             	lea    (%edx,%ebx,1),%eax
 860d7c7:	8b 04 81             	mov    (%ecx,%eax,4),%eax
 860d7ca:	89 c3                	mov    %eax,%ebx
 860d7cc:	03 5d 14             	add    0x14(%ebp),%ebx
 860d7cf:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 860d7d2:	89 f8                	mov    %edi,%eax
 860d7d4:	01 c0                	add    %eax,%eax
 860d7d6:	89 c2                	mov    %eax,%edx
 860d7d8:	c1 e2 04             	shl    $0x4,%edx
 860d7db:	29 c2                	sub    %eax,%edx
 860d7dd:	8d 04 32             	lea    (%edx,%esi,1),%eax
 860d7e0:	89 1c 81             	mov    %ebx,(%ecx,%eax,4)
 860d7e3:	e9 ab 00 00 00       	jmp    860d893 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj+0x211>
 860d7e8:	c7 44 24 08 48 21 00 	movl   $0x2148,0x8(%esp)
 860d7ef:	00 
 860d7f0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860d7f7:	00 
 860d7f8:	8d 85 dc 9b ff ff    	lea    -0x6424(%ebp),%eax
 860d7fe:	89 04 24             	mov    %eax,(%esp)
 860d801:	e8 ba 04 a7 ff       	call   807dcc0 <memset@plt>
 860d806:	8b 45 10             	mov    0x10(%ebp),%eax
 860d809:	89 04 24             	mov    %eax,(%esp)
 860d80c:	e8 a7 ca ac ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 860d811:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 860d814:	01 c0                	add    %eax,%eax
 860d816:	89 c2                	mov    %eax,%edx
 860d818:	c1 e2 04             	shl    $0x4,%edx
 860d81b:	29 c2                	sub    %eax,%edx
 860d81d:	01 ca                	add    %ecx,%edx
 860d81f:	8b 45 14             	mov    0x14(%ebp),%eax
 860d822:	89 84 95 dc 9b ff ff 	mov    %eax,-0x6424(%ebp,%edx,4)
 860d829:	8b 45 10             	mov    0x10(%ebp),%eax
 860d82c:	89 04 24             	mov    %eax,(%esp)
 860d82f:	e8 5c e4 ab ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 860d834:	89 45 e0             	mov    %eax,-0x20(%ebp)
 860d837:	8d 85 94 de ff ff    	lea    -0x216c(%ebp),%eax
 860d83d:	8d 95 dc 9b ff ff    	lea    -0x6424(%ebp),%edx
 860d843:	89 54 24 08          	mov    %edx,0x8(%esp)
 860d847:	8d 55 e0             	lea    -0x20(%ebp),%edx
 860d84a:	89 54 24 04          	mov    %edx,0x4(%esp)
 860d84e:	89 04 24             	mov    %eax,(%esp)
 860d851:	e8 c3 3a 00 00       	call   8611319 <_ZSt9make_pairI17ENUM_SERVER_GROUPRN15CValueStatistic16stValueStatisticEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 860d856:	83 ec 04             	sub    $0x4,%esp
 860d859:	8d 85 94 de ff ff    	lea    -0x216c(%ebp),%eax
 860d85f:	89 44 24 04          	mov    %eax,0x4(%esp)
 860d863:	8d 85 48 bd ff ff    	lea    -0x42b8(%ebp),%eax
 860d869:	89 04 24             	mov    %eax,(%esp)
 860d86c:	e8 ef 3a 00 00       	call   8611360 <_ZNSt4pairIK17ENUM_SERVER_GROUPN15CValueStatistic16stValueStatisticEEC1IS0_S3_EEOS_IT_T0_E>
 860d871:	8b 55 08             	mov    0x8(%ebp),%edx
 860d874:	8d 85 40 bd ff ff    	lea    -0x42c0(%ebp),%eax
 860d87a:	8d 8d 48 bd ff ff    	lea    -0x42b8(%ebp),%ecx
 860d880:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 860d884:	89 54 24 04          	mov    %edx,0x4(%esp)
 860d888:	89 04 24             	mov    %eax,(%esp)
 860d88b:	e8 14 3b 00 00       	call   86113a4 <_ZNSt3mapI17ENUM_SERVER_GROUPN15CValueStatistic16stValueStatisticESt4lessIS0_ESaISt4pairIKS0_S2_EEE6insertERKS7_>
 860d890:	83 ec 04             	sub    $0x4,%esp
 860d893:	b8 01 00 00 00       	mov    $0x1,%eax
 860d898:	8d 65 f4             	lea    -0xc(%ebp),%esp
 860d89b:	83 c4 00             	add    $0x0,%esp
 860d89e:	5b                   	pop    %ebx
 860d89f:	5e                   	pop    %esi
 860d8a0:	5f                   	pop    %edi
 860d8a1:	5d                   	pop    %ebp
 860d8a2:	c3                   	ret
 860d8a3:	90                   	nop

```

```c
// CValueStatistic::AddValueStatistic @ 0x860d682

/* CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int) */

undefined4 __thiscall
CValueStatistic::AddValueStatistic(undefined4 this,int param_2,CUserCharacInfo *param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int local_6428 [2130];
  _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>
  local_42e0 [4];
  cMyTrace local_42dc [16];
  undefined4 local_42cc;
  map<ENUM_SERVER_GROUP,CValueStatistic::stValueStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>>
  local_42c8 [4];
  pair local_42c4 [8];
  pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic> local_42bc [8524];
  ENUM_SERVER_GROUP local_2170 [8524];
  undefined4 local_24;
  int local_20;
  
  if ((-1 < param_2) && (param_2 < 0x1e)) {
    iVar3 = CUserCharacInfo::get_charac_level(param_3);
    if (0 < iVar3) {
      iVar3 = CUserCharacInfo::get_charac_level(param_3);
      if (iVar3 < 0x47) {
        bVar1 = false;
        goto LAB_0860d6c8;
      }
    }
  }
  bVar1 = true;
LAB_0860d6c8:
  if (bVar1) {
    uVar4 = CUserCharacInfo::get_charac_level(param_3);
    cMyTrace::cMyTrace(local_42dc,
                       "bool CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)"
                       ,0x306,0);
    cMyTrace::operator()(local_42dc,"VALUE_STATISTIC wrong index (%d,%d)",param_2,uVar4);
    uVar4 = 0;
  }
  else {
    local_42cc = CUser::GetServerGroup((CUser *)param_3);
    std::
    map<ENUM_SERVER_GROUP,CValueStatistic::stValueStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>>
    ::find(local_42e0);
    std::
    map<ENUM_SERVER_GROUP,CValueStatistic::stValueStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>>
    ::end(local_42c8);
    cVar2 = std::
            _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>
            ::operator!=(local_42e0,(_Rb_tree_iterator *)local_42c8);
    if (cVar2 == '\0') {
      memset(local_6428,0,0x2148);
      iVar3 = CUserCharacInfo::get_charac_level(param_3);
      local_6428[iVar3 * 0x1e + param_2] = param_4;
      local_24 = CUser::GetServerGroup((CUser *)param_3);
      std::make_pair<ENUM_SERVER_GROUP,CValueStatistic::stValueStatistic&>
                (local_2170,(stValueStatistic *)&local_24);
      std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>::
      pair<ENUM_SERVER_GROUP,CValueStatistic::stValueStatistic>(local_42bc,local_2170);
      std::
      map<ENUM_SERVER_GROUP,CValueStatistic::stValueStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>>
      ::insert(local_42c4);
    }
    else {
      local_20 = std::
                 _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>
                 ::operator->(local_42e0);
      local_20 = local_20 + 4;
      iVar3 = CUserCharacInfo::get_charac_level(param_3);
      *(int *)(local_20 + (iVar3 * 0x1e + param_2) * 4) =
           *(int *)(local_20 + (iVar3 * 0x1e + param_2) * 4) + param_4;
    }
    uVar4 = 1;
  }
  return uVar4;
}

```

---

## InsertValueStatistic

```asm
// === 0860d8a4 CValueStatistic::InsertValueStatistic  [0x0860d8a4-0x860da16] ===
 860d8a4:	55                   	push   %ebp
 860d8a5:	89 e5                	mov    %esp,%ebp
 860d8a7:	53                   	push   %ebx
 860d8a8:	81 ec c4 00 00 00    	sub    $0xc4,%esp
 860d8ae:	8b 55 08             	mov    0x8(%ebp),%edx
 860d8b1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860d8b4:	89 54 24 04          	mov    %edx,0x4(%esp)
 860d8b8:	89 04 24             	mov    %eax,(%esp)
 860d8bb:	e8 10 3b 00 00       	call   86113d0 <_ZNSt3mapI17ENUM_SERVER_GROUPN15CValueStatistic16stValueStatisticESt4lessIS0_ESaISt4pairIKS0_S2_EEE5beginEv>
 860d8c0:	83 ec 04             	sub    $0x4,%esp
 860d8c3:	e9 16 01 00 00       	jmp    860d9de <_ZN15CValueStatistic20InsertValueStatisticEv+0x13a>
 860d8c8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860d8cb:	89 04 24             	mov    %eax,(%esp)
 860d8ce:	e8 39 3a 00 00       	call   861130c <_ZNKSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPN15CValueStatistic16stValueStatisticEEEptEv>
 860d8d3:	8b 00                	mov    (%eax),%eax
 860d8d5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 860d8d8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860d8db:	89 04 24             	mov    %eax,(%esp)
 860d8de:	e8 29 3a 00 00       	call   861130c <_ZNKSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPN15CValueStatistic16stValueStatisticEEEptEv>
 860d8e3:	83 c0 04             	add    $0x4,%eax
 860d8e6:	89 45 e8             	mov    %eax,-0x18(%ebp)
 860d8e9:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 860d8f0:	e9 c4 00 00 00       	jmp    860d9b9 <_ZN15CValueStatistic20InsertValueStatisticEv+0x115>
 860d8f5:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 860d8f9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 860d900:	eb 26                	jmp    860d928 <_ZN15CValueStatistic20InsertValueStatisticEv+0x84>
 860d902:	8b 45 ec             	mov    -0x14(%ebp),%eax
 860d905:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 860d908:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 860d90b:	01 c0                	add    %eax,%eax
 860d90d:	89 c2                	mov    %eax,%edx
 860d90f:	c1 e2 04             	shl    $0x4,%edx
 860d912:	29 c2                	sub    %eax,%edx
 860d914:	8d 04 1a             	lea    (%edx,%ebx,1),%eax
 860d917:	8b 04 81             	mov    (%ecx,%eax,4),%eax
 860d91a:	85 c0                	test   %eax,%eax
 860d91c:	74 06                	je     860d924 <_ZN15CValueStatistic20InsertValueStatisticEv+0x80>
 860d91e:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 860d922:	eb 0f                	jmp    860d933 <_ZN15CValueStatistic20InsertValueStatisticEv+0x8f>
 860d924:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 860d928:	83 7d f4 1d          	cmpl   $0x1d,-0xc(%ebp)
 860d92c:	0f 9e c0             	setle  %al
 860d92f:	84 c0                	test   %al,%al
 860d931:	75 cf                	jne    860d902 <_ZN15CValueStatistic20InsertValueStatisticEv+0x5e>
 860d933:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 860d937:	83 f0 01             	xor    $0x1,%eax
 860d93a:	84 c0                	test   %al,%al
 860d93c:	75 76                	jne    860d9b4 <_ZN15CValueStatistic20InsertValueStatisticEv+0x110>
 860d93e:	8d 85 56 ff ff ff    	lea    -0xaa(%ebp),%eax
 860d944:	89 04 24             	mov    %eax,(%esp)
 860d947:	e8 7e 27 00 00       	call   86100ca <_ZN22Packet_Value_StatisticC1Ev>
 860d94c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 860d94f:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 860d955:	8b 45 ec             	mov    -0x14(%ebp),%eax
 860d958:	c1 e0 03             	shl    $0x3,%eax
 860d95b:	89 c2                	mov    %eax,%edx
 860d95d:	c1 e2 04             	shl    $0x4,%edx
 860d960:	29 c2                	sub    %eax,%edx
 860d962:	89 d0                	mov    %edx,%eax
 860d964:	03 45 e8             	add    -0x18(%ebp),%eax
 860d967:	c7 44 24 08 78 00 00 	movl   $0x78,0x8(%esp)
 860d96e:	00 
 860d96f:	89 44 24 04          	mov    %eax,0x4(%esp)
 860d973:	8d 85 56 ff ff ff    	lea    -0xaa(%ebp),%eax
 860d979:	83 c0 0e             	add    $0xe,%eax
 860d97c:	89 04 24             	mov    %eax,(%esp)
 860d97f:	e8 1c ff a6 ff       	call   807d8a0 <memcpy@plt>
 860d984:	8d 9d 56 ff ff ff    	lea    -0xaa(%ebp),%ebx
 860d98a:	a1 30 be 40 09       	mov    0x940be30,%eax
 860d98f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 860d992:	89 54 24 04          	mov    %edx,0x4(%esp)
 860d996:	89 04 24             	mov    %eax,(%esp)
 860d999:	e8 5a 43 b0 ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 860d99e:	c7 44 24 08 86 00 00 	movl   $0x86,0x8(%esp)
 860d9a5:	00 
 860d9a6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860d9aa:	89 04 24             	mov    %eax,(%esp)
 860d9ad:	e8 92 46 e6 ff       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 860d9b2:	eb 01                	jmp    860d9b5 <_ZN15CValueStatistic20InsertValueStatisticEv+0x111>
 860d9b4:	90                   	nop
 860d9b5:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 860d9b9:	83 7d ec 46          	cmpl   $0x46,-0x14(%ebp)
 860d9bd:	0f 9e c0             	setle  %al
 860d9c0:	84 c0                	test   %al,%al
 860d9c2:	0f 85 2d ff ff ff    	jne    860d8f5 <_ZN15CValueStatistic20InsertValueStatisticEv+0x51>
 860d9c8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 860d9cb:	89 04 24             	mov    %eax,(%esp)
 860d9ce:	e8 4d 29 00 00       	call   8610320 <_ZN15CValueStatistic16stValueStatistic5resetEv>
 860d9d3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860d9d6:	89 04 24             	mov    %eax,(%esp)
 860d9d9:	e8 18 3a 00 00       	call   86113f6 <_ZNSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPN15CValueStatistic16stValueStatisticEEEppEv>
 860d9de:	8b 55 08             	mov    0x8(%ebp),%edx
 860d9e1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860d9e4:	89 54 24 04          	mov    %edx,0x4(%esp)
 860d9e8:	89 04 24             	mov    %eax,(%esp)
 860d9eb:	e8 e2 38 00 00       	call   86112d2 <_ZNSt3mapI17ENUM_SERVER_GROUPN15CValueStatistic16stValueStatisticESt4lessIS0_ESaISt4pairIKS0_S2_EEE3endEv>
 860d9f0:	83 ec 04             	sub    $0x4,%esp
 860d9f3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860d9f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 860d9fa:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860d9fd:	89 04 24             	mov    %eax,(%esp)
 860da00:	e8 f3 38 00 00       	call   86112f8 <_ZNKSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPN15CValueStatistic16stValueStatisticEEEneERKS6_>
 860da05:	84 c0                	test   %al,%al
 860da07:	0f 85 bb fe ff ff    	jne    860d8c8 <_ZN15CValueStatistic20InsertValueStatisticEv+0x24>
 860da0d:	b8 01 00 00 00       	mov    $0x1,%eax
 860da12:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 860da15:	c9                   	leave
 860da16:	c3                   	ret

```

```c
// CValueStatistic::InsertValueStatistic @ 0x860d8a4

/* CValueStatistic::InsertValueStatistic() */

undefined4 CValueStatistic::InsertValueStatistic(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  CStatisticServerProxy *this;
  Packet_Value_Statistic local_ae [10];
  int local_a4;
  undefined1 auStack_a0 [120];
  map<ENUM_SERVER_GROUP,CValueStatistic::stValueStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>>
  local_28 [4];
  map<ENUM_SERVER_GROUP,CValueStatistic::stValueStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>>
  local_24 [4];
  undefined4 local_20;
  stValueStatistic *local_1c;
  int local_18;
  char local_11;
  int local_10;
  
  std::
  map<ENUM_SERVER_GROUP,CValueStatistic::stValueStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>>
  ::begin(local_28);
  do {
    std::
    map<ENUM_SERVER_GROUP,CValueStatistic::stValueStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>>
    ::end(local_24);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>
            ::operator!=((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>
                          *)local_28,(_Rb_tree_iterator *)local_24);
    if (cVar1 == '\0') {
      return 1;
    }
    puVar2 = (undefined4 *)
             std::
             _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>
             ::operator->((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>
                           *)local_28);
    local_20 = *puVar2;
    iVar3 = std::
            _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>
            ::operator->((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>
                          *)local_28);
    local_1c = (stValueStatistic *)(iVar3 + 4);
    for (local_18 = 1; local_18 < 0x47; local_18 = local_18 + 1) {
      local_11 = '\0';
      for (local_10 = 0; local_10 < 0x1e; local_10 = local_10 + 1) {
        if (*(int *)(local_1c + (local_18 * 0x1e + local_10) * 4) != 0) {
          local_11 = '\x01';
          break;
        }
      }
      if (local_11 == '\x01') {
        Packet_Value_Statistic::Packet_Value_Statistic(local_ae);
        local_a4 = local_18;
        memcpy(auStack_a0,local_1c + local_18 * 0x78,0x78);
        this = (CStatisticServerProxy *)
               CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                         (GlobalData::s_statistic_proxy_mgr,local_20);
        CStatisticServerProxy::SendPacket(this,(char *)local_ae,0x86);
      }
    }
    stValueStatistic::reset(local_1c);
    std::_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>::
    operator++((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>
                *)local_28);
  } while( true );
}

```

