# StatisticsNatType

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## IncreaseNatType

```asm
// === 0860c86c StatisticsNatType::IncreaseNatType  [0x0860c86c-0x860c967] ===
 860c86c:	55                   	push   %ebp
 860c86d:	89 e5                	mov    %esp,%ebp
 860c86f:	53                   	push   %ebx
 860c870:	83 ec 54             	sub    $0x54,%esp
 860c873:	8b 45 14             	mov    0x14(%ebp),%eax
 860c876:	88 45 c4             	mov    %al,-0x3c(%ebp)
 860c879:	8b 45 10             	mov    0x10(%ebp),%eax
 860c87c:	89 44 24 08          	mov    %eax,0x8(%esp)
 860c880:	8b 45 0c             	mov    0xc(%ebp),%eax
 860c883:	89 44 24 04          	mov    %eax,0x4(%esp)
 860c887:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860c88a:	89 04 24             	mov    %eax,(%esp)
 860c88d:	e8 d0 39 00 00       	call   8610262 <_ZN17StatisticsNatType21NAT_TYPE_PEER_TO_PEERC1Eii>
 860c892:	8b 55 08             	mov    0x8(%ebp),%edx
 860c895:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 860c898:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 860c89b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 860c89f:	89 54 24 04          	mov    %edx,0x4(%esp)
 860c8a3:	89 04 24             	mov    %eax,(%esp)
 860c8a6:	e8 25 46 00 00       	call   8610ed0 <_ZNSt3mapIN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS0_12RESULT_COUNTESt4lessIS1_ESaISt4pairIKS1_S3_EEE4findERS7_>
 860c8ab:	83 ec 04             	sub    $0x4,%esp
 860c8ae:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 860c8b5:	8b 55 08             	mov    0x8(%ebp),%edx
 860c8b8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860c8bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 860c8bf:	89 04 24             	mov    %eax,(%esp)
 860c8c2:	e8 83 45 00 00       	call   8610e4a <_ZNSt3mapIN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS0_12RESULT_COUNTESt4lessIS1_ESaISt4pairIKS1_S3_EEE3endEv>
 860c8c7:	83 ec 04             	sub    $0x4,%esp
 860c8ca:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860c8cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 860c8d1:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 860c8d4:	89 04 24             	mov    %eax,(%esp)
 860c8d7:	e8 94 45 00 00       	call   8610e70 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS1_12RESULT_COUNTEEEneERKS7_>
 860c8dc:	84 c0                	test   %al,%al
 860c8de:	74 13                	je     860c8f3 <_ZN17StatisticsNatType15IncreaseNatTypeEiih+0x87>
 860c8e0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 860c8e3:	89 04 24             	mov    %eax,(%esp)
 860c8e6:	e8 d7 45 00 00       	call   8610ec2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS1_12RESULT_COUNTEEEptEv>
 860c8eb:	8b 40 08             	mov    0x8(%eax),%eax
 860c8ee:	89 45 d0             	mov    %eax,-0x30(%ebp)
 860c8f1:	eb 52                	jmp    860c945 <_ZN17StatisticsNatType15IncreaseNatTypeEiih+0xd9>
 860c8f3:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 860c8fa:	e8 51 7b 11 00       	call   8724450 <_Znwj>
 860c8ff:	89 c3                	mov    %eax,%ebx
 860c901:	89 d8                	mov    %ebx,%eax
 860c903:	89 04 24             	mov    %eax,(%esp)
 860c906:	e8 89 39 00 00       	call   8610294 <_ZN17StatisticsNatType12RESULT_COUNTC1Ev>
 860c90b:	89 d8                	mov    %ebx,%eax
 860c90d:	89 45 d0             	mov    %eax,-0x30(%ebp)
 860c910:	8d 45 d0             	lea    -0x30(%ebp),%eax
 860c913:	89 44 24 08          	mov    %eax,0x8(%esp)
 860c917:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860c91a:	89 44 24 04          	mov    %eax,0x4(%esp)
 860c91e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860c921:	89 04 24             	mov    %eax,(%esp)
 860c924:	e8 d3 45 00 00       	call   8610efc <_ZNSt4pairIKN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS0_12RESULT_COUNTEEC1IRS1_RS4_EEOT_OT0_>
 860c929:	8b 55 08             	mov    0x8(%ebp),%edx
 860c92c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860c92f:	8d 4d ec             	lea    -0x14(%ebp),%ecx
 860c932:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 860c936:	89 54 24 04          	mov    %edx,0x4(%esp)
 860c93a:	89 04 24             	mov    %eax,(%esp)
 860c93d:	e8 f2 45 00 00       	call   8610f34 <_ZNSt3mapIN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS0_12RESULT_COUNTESt4lessIS1_ESaISt4pairIKS1_S3_EEE6insertERKS8_>
 860c942:	83 ec 04             	sub    $0x4,%esp
 860c945:	80 7d c4 00          	cmpb   $0x0,-0x3c(%ebp)
 860c949:	74 0c                	je     860c957 <_ZN17StatisticsNatType15IncreaseNatTypeEiih+0xeb>
 860c94b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 860c94e:	8b 10                	mov    (%eax),%edx
 860c950:	83 c2 01             	add    $0x1,%edx
 860c953:	89 10                	mov    %edx,(%eax)
 860c955:	eb 0c                	jmp    860c963 <_ZN17StatisticsNatType15IncreaseNatTypeEiih+0xf7>
 860c957:	8b 45 d0             	mov    -0x30(%ebp),%eax
 860c95a:	8b 50 04             	mov    0x4(%eax),%edx
 860c95d:	83 c2 01             	add    $0x1,%edx
 860c960:	89 50 04             	mov    %edx,0x4(%eax)
 860c963:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 860c966:	c9                   	leave
 860c967:	c3                   	ret

```

```c
// StatisticsNatType::IncreaseNatType @ 0x860c86c

/* StatisticsNatType::IncreaseNatType(int, int, unsigned char) */

void __thiscall
StatisticsNatType::IncreaseNatType(StatisticsNatType *this,int param_1,int param_2,uchar param_3)

{
  char cVar1;
  int iVar2;
  RESULT_COUNT *this_00;
  RESULT_COUNT *local_34;
  NAT_TYPE_PEER_TO_PEER local_30 [4];
  NAT_TYPE_PEER_TO_PEER local_2c [8];
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  local_24 [4];
  pair local_20 [8];
  pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>
  local_18 [16];
  
  NAT_TYPE_PEER_TO_PEER::NAT_TYPE_PEER_TO_PEER(local_2c,param_1,param_2);
  std::
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  ::find(local_30);
  local_34 = (RESULT_COUNT *)0x0;
  std::
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  ::end(local_24);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
          ::operator!=((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                        *)local_30,(_Rb_tree_iterator *)local_24);
  if (cVar1 == '\0') {
    this_00 = operator_new(8);
    RESULT_COUNT::RESULT_COUNT(this_00);
    local_34 = this_00;
    std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>::
    pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER&,StatisticsNatType::RESULT_COUNT*&>
              (local_18,local_2c,&local_34);
    std::
    map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
    ::insert(local_20);
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
            ::operator->((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                          *)local_30);
    local_34 = *(RESULT_COUNT **)(iVar2 + 8);
  }
  if (param_3 == '\0') {
    *(int *)(local_34 + 4) = *(int *)(local_34 + 4) + 1;
  }
  else {
    *(int *)local_34 = *(int *)local_34 + 1;
  }
  return;
}

```

---

## Reset

```asm
// === 0860c7da StatisticsNatType::Reset  [0x0860c7da-0x860c86b] ===
 860c7da:	55                   	push   %ebp
 860c7db:	89 e5                	mov    %esp,%ebp
 860c7dd:	83 ec 28             	sub    $0x28,%esp
 860c7e0:	8b 55 08             	mov    0x8(%ebp),%edx
 860c7e3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860c7e6:	89 54 24 04          	mov    %edx,0x4(%esp)
 860c7ea:	89 04 24             	mov    %eax,(%esp)
 860c7ed:	e8 32 46 00 00       	call   8610e24 <_ZNSt3mapIN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS0_12RESULT_COUNTESt4lessIS1_ESaISt4pairIKS1_S3_EEE5beginEv>
 860c7f2:	83 ec 04             	sub    $0x4,%esp
 860c7f5:	eb 47                	jmp    860c83e <_ZN17StatisticsNatType5ResetEv+0x64>
 860c7f7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860c7fa:	89 04 24             	mov    %eax,(%esp)
 860c7fd:	e8 c0 46 00 00       	call   8610ec2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS1_12RESULT_COUNTEEEptEv>
 860c802:	8b 40 08             	mov    0x8(%eax),%eax
 860c805:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860c808:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 860c80c:	74 13                	je     860c821 <_ZN17StatisticsNatType5ResetEv+0x47>
 860c80e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860c811:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 860c818:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860c81b:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 860c821:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860c824:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 860c82b:	00 
 860c82c:	8d 55 e8             	lea    -0x18(%ebp),%edx
 860c82f:	89 54 24 04          	mov    %edx,0x4(%esp)
 860c833:	89 04 24             	mov    %eax,(%esp)
 860c836:	e8 49 46 00 00       	call   8610e84 <_ZNSt17_Rb_tree_iteratorISt4pairIKN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS1_12RESULT_COUNTEEEppEi>
 860c83b:	83 ec 04             	sub    $0x4,%esp
 860c83e:	8b 55 08             	mov    0x8(%ebp),%edx
 860c841:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860c844:	89 54 24 04          	mov    %edx,0x4(%esp)
 860c848:	89 04 24             	mov    %eax,(%esp)
 860c84b:	e8 fa 45 00 00       	call   8610e4a <_ZNSt3mapIN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS0_12RESULT_COUNTESt4lessIS1_ESaISt4pairIKS1_S3_EEE3endEv>
 860c850:	83 ec 04             	sub    $0x4,%esp
 860c853:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860c856:	89 44 24 04          	mov    %eax,0x4(%esp)
 860c85a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860c85d:	89 04 24             	mov    %eax,(%esp)
 860c860:	e8 0b 46 00 00       	call   8610e70 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS1_12RESULT_COUNTEEEneERKS7_>
 860c865:	84 c0                	test   %al,%al
 860c867:	75 8e                	jne    860c7f7 <_ZN17StatisticsNatType5ResetEv+0x1d>
 860c869:	c9                   	leave
 860c86a:	c3                   	ret
 860c86b:	90                   	nop

```

```c
// StatisticsNatType::Reset @ 0x860c7da

/* StatisticsNatType::Reset() */

void StatisticsNatType::Reset(void)

{
  char cVar1;
  int iVar2;
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  local_1c [4];
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
  local_14 [4];
  undefined4 *local_10;
  
  std::
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
    ::end(local_18);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
            ::operator!=((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                          *)local_1c,(_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
            ::operator->((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                          *)local_1c);
    local_10 = *(undefined4 **)(iVar2 + 8);
    if (local_10 != (undefined4 *)0x0) {
      local_10[1] = 0;
      *local_10 = 0;
    }
    std::
    _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
    ::operator++(local_14,(int)local_1c);
  }
  return;
}

```

---

## StatisticsNatType

```asm
// === 0860c704 StatisticsNatType::StatisticsNatType  [0x0860c704-0x860c717] ===
 860c704:	55                   	push   %ebp
 860c705:	89 e5                	mov    %esp,%ebp
 860c707:	83 ec 18             	sub    $0x18,%esp
 860c70a:	8b 45 08             	mov    0x8(%ebp),%eax
 860c70d:	89 04 24             	mov    %eax,(%esp)
 860c710:	e8 95 46 00 00       	call   8610daa <_ZNSt3mapIN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS0_12RESULT_COUNTESt4lessIS1_ESaISt4pairIKS1_S3_EEEC1Ev>
 860c715:	c9                   	leave
 860c716:	c3                   	ret
 860c717:	90                   	nop

```

```c
// StatisticsNatType::StatisticsNatType @ 0x860c704

/* StatisticsNatType::StatisticsNatType() */

void __thiscall StatisticsNatType::StatisticsNatType(StatisticsNatType *this)

{
  std::
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  ::map((map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
         *)this);
  return;
}

```

---

## UpdateNatType

```asm
// === 0860c968 StatisticsNatType::UpdateNatType  [0x0860c968-0x860cba4] ===
 860c968:	55                   	push   %ebp
 860c969:	89 e5                	mov    %esp,%ebp
 860c96b:	56                   	push   %esi
 860c96c:	53                   	push   %ebx
 860c96d:	83 ec 40             	sub    $0x40,%esp
 860c970:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860c973:	89 04 24             	mov    %eax,(%esp)
 860c976:	e8 e5 45 00 00       	call   8610f60 <_ZNSt17_Rb_tree_iteratorISt4pairIKN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS1_12RESULT_COUNTEEEC1Ev>
 860c97b:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 860c982:	e8 c9 0d a7 ff       	call   807d750 <time@plt>
 860c987:	89 45 f0             	mov    %eax,-0x10(%ebp)
 860c98a:	8b 55 08             	mov    0x8(%ebp),%edx
 860c98d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 860c990:	89 54 24 04          	mov    %edx,0x4(%esp)
 860c994:	89 04 24             	mov    %eax,(%esp)
 860c997:	e8 88 44 00 00       	call   8610e24 <_ZNSt3mapIN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS0_12RESULT_COUNTESt4lessIS1_ESaISt4pairIKS1_S3_EEE5beginEv>
 860c99c:	83 ec 04             	sub    $0x4,%esp
 860c99f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 860c9a2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 860c9a5:	e9 b7 01 00 00       	jmp    860cb61 <_ZN17StatisticsNatType13UpdateNatTypeEv+0x1f9>
 860c9aa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860c9ad:	89 04 24             	mov    %eax,(%esp)
 860c9b0:	e8 0d 45 00 00       	call   8610ec2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS1_12RESULT_COUNTEEEptEv>
 860c9b5:	8b 40 08             	mov    0x8(%eax),%eax
 860c9b8:	85 c0                	test   %eax,%eax
 860c9ba:	0f 94 c0             	sete   %al
 860c9bd:	84 c0                	test   %al,%al
 860c9bf:	0f 85 7e 01 00 00    	jne    860cb43 <_ZN17StatisticsNatType13UpdateNatTypeEv+0x1db>
 860c9c5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860c9c8:	89 04 24             	mov    %eax,(%esp)
 860c9cb:	e8 f2 44 00 00       	call   8610ec2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS1_12RESULT_COUNTEEEptEv>
 860c9d0:	8b 40 08             	mov    0x8(%eax),%eax
 860c9d3:	8b 40 04             	mov    0x4(%eax),%eax
 860c9d6:	85 c0                	test   %eax,%eax
 860c9d8:	7f 14                	jg     860c9ee <_ZN17StatisticsNatType13UpdateNatTypeEv+0x86>
 860c9da:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860c9dd:	89 04 24             	mov    %eax,(%esp)
 860c9e0:	e8 dd 44 00 00       	call   8610ec2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS1_12RESULT_COUNTEEEptEv>
 860c9e5:	8b 40 08             	mov    0x8(%eax),%eax
 860c9e8:	8b 00                	mov    (%eax),%eax
 860c9ea:	85 c0                	test   %eax,%eax
 860c9ec:	7e 07                	jle    860c9f5 <_ZN17StatisticsNatType13UpdateNatTypeEv+0x8d>
 860c9ee:	b8 01 00 00 00       	mov    $0x1,%eax
 860c9f3:	eb 05                	jmp    860c9fa <_ZN17StatisticsNatType13UpdateNatTypeEv+0x92>
 860c9f5:	b8 00 00 00 00       	mov    $0x0,%eax
 860c9fa:	84 c0                	test   %al,%al
 860c9fc:	0f 84 42 01 00 00    	je     860cb44 <_ZN17StatisticsNatType13UpdateNatTypeEv+0x1dc>
 860ca02:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 860ca07:	c7 44 24 08 c7 01 00 	movl   $0x1c7,0x8(%esp)
 860ca0e:	00 
 860ca0f:	c7 44 24 04 63 02 ce 	movl   $0x8ce0263,0x4(%esp)
 860ca16:	08 
 860ca17:	89 04 24             	mov    %eax,(%esp)
 860ca1a:	e8 67 30 c8 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 860ca1f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 860ca26:	00 
 860ca27:	89 44 24 04          	mov    %eax,0x4(%esp)
 860ca2b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860ca2e:	89 04 24             	mov    %eax,(%esp)
 860ca31:	e8 f0 c1 ab ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 860ca36:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860ca39:	89 04 24             	mov    %eax,(%esp)
 860ca3c:	e8 05 c2 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860ca41:	c7 44 24 04 83 00 00 	movl   $0x83,0x4(%esp)
 860ca48:	00 
 860ca49:	89 04 24             	mov    %eax,(%esp)
 860ca4c:	e8 05 c2 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860ca51:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860ca54:	89 04 24             	mov    %eax,(%esp)
 860ca57:	e8 ea c1 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860ca5c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 860ca63:	ff 
 860ca64:	89 04 24             	mov    %eax,(%esp)
 860ca67:	e8 ea c1 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860ca6c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860ca6f:	89 04 24             	mov    %eax,(%esp)
 860ca72:	e8 d7 c1 ab ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 860ca77:	89 04 24             	mov    %eax,(%esp)
 860ca7a:	e8 ef 44 00 00       	call   8610f6e <_ZN12CStreamGuard11GetInBufferI12SIG_NAT_TYPEEEPT_v>
 860ca7f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860ca82:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 860ca89:	00 
 860ca8a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860ca91:	00 
 860ca92:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860ca95:	89 04 24             	mov    %eax,(%esp)
 860ca98:	e8 23 12 a7 ff       	call   807dcc0 <memset@plt>
 860ca9d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860caa0:	89 04 24             	mov    %eax,(%esp)
 860caa3:	e8 1a 44 00 00       	call   8610ec2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS1_12RESULT_COUNTEEEptEv>
 860caa8:	8b 10                	mov    (%eax),%edx
 860caaa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860caad:	89 10                	mov    %edx,(%eax)
 860caaf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860cab2:	89 04 24             	mov    %eax,(%esp)
 860cab5:	e8 08 44 00 00       	call   8610ec2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS1_12RESULT_COUNTEEEptEv>
 860caba:	8b 50 04             	mov    0x4(%eax),%edx
 860cabd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860cac0:	89 50 04             	mov    %edx,0x4(%eax)
 860cac3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860cac6:	89 04 24             	mov    %eax,(%esp)
 860cac9:	e8 f4 43 00 00       	call   8610ec2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS1_12RESULT_COUNTEEEptEv>
 860cace:	8b 40 08             	mov    0x8(%eax),%eax
 860cad1:	8b 40 04             	mov    0x4(%eax),%eax
 860cad4:	89 c2                	mov    %eax,%edx
 860cad6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860cad9:	89 50 08             	mov    %edx,0x8(%eax)
 860cadc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860cadf:	89 04 24             	mov    %eax,(%esp)
 860cae2:	e8 db 43 00 00       	call   8610ec2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS1_12RESULT_COUNTEEEptEv>
 860cae7:	8b 40 08             	mov    0x8(%eax),%eax
 860caea:	8b 00                	mov    (%eax),%eax
 860caec:	89 c2                	mov    %eax,%edx
 860caee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860caf1:	89 50 0c             	mov    %edx,0xc(%eax)
 860caf4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860caf7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 860cafa:	89 50 10             	mov    %edx,0x10(%eax)
 860cafd:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 860cb02:	8d 55 dc             	lea    -0x24(%ebp),%edx
 860cb05:	89 54 24 08          	mov    %edx,0x8(%esp)
 860cb09:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 860cb10:	00 
 860cb11:	89 04 24             	mov    %eax,(%esp)
 860cb14:	e8 c5 44 f6 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 860cb19:	eb 1b                	jmp    860cb36 <_ZN17StatisticsNatType13UpdateNatTypeEv+0x1ce>
 860cb1b:	89 d3                	mov    %edx,%ebx
 860cb1d:	89 c6                	mov    %eax,%esi
 860cb1f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860cb22:	89 04 24             	mov    %eax,(%esp)
 860cb25:	e8 a8 fd 00 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860cb2a:	89 f0                	mov    %esi,%eax
 860cb2c:	89 da                	mov    %ebx,%edx
 860cb2e:	89 04 24             	mov    %eax,(%esp)
 860cb31:	e8 1a 6c 4d 00       	call   8ae3750 <_Unwind_Resume>
 860cb36:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860cb39:	89 04 24             	mov    %eax,(%esp)
 860cb3c:	e8 91 fd 00 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860cb41:	eb 01                	jmp    860cb44 <_ZN17StatisticsNatType13UpdateNatTypeEv+0x1dc>
 860cb43:	90                   	nop
 860cb44:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860cb47:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 860cb4e:	00 
 860cb4f:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 860cb52:	89 54 24 04          	mov    %edx,0x4(%esp)
 860cb56:	89 04 24             	mov    %eax,(%esp)
 860cb59:	e8 26 43 00 00       	call   8610e84 <_ZNSt17_Rb_tree_iteratorISt4pairIKN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS1_12RESULT_COUNTEEEppEi>
 860cb5e:	83 ec 04             	sub    $0x4,%esp
 860cb61:	8b 55 08             	mov    0x8(%ebp),%edx
 860cb64:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860cb67:	89 54 24 04          	mov    %edx,0x4(%esp)
 860cb6b:	89 04 24             	mov    %eax,(%esp)
 860cb6e:	e8 d7 42 00 00       	call   8610e4a <_ZNSt3mapIN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS0_12RESULT_COUNTESt4lessIS1_ESaISt4pairIKS1_S3_EEE3endEv>
 860cb73:	83 ec 04             	sub    $0x4,%esp
 860cb76:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860cb79:	89 44 24 04          	mov    %eax,0x4(%esp)
 860cb7d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860cb80:	89 04 24             	mov    %eax,(%esp)
 860cb83:	e8 e8 42 00 00       	call   8610e70 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS1_12RESULT_COUNTEEEneERKS7_>
 860cb88:	84 c0                	test   %al,%al
 860cb8a:	0f 85 1a fe ff ff    	jne    860c9aa <_ZN17StatisticsNatType13UpdateNatTypeEv+0x42>
 860cb90:	8b 45 08             	mov    0x8(%ebp),%eax
 860cb93:	89 04 24             	mov    %eax,(%esp)
 860cb96:	e8 3f fc ff ff       	call   860c7da <_ZN17StatisticsNatType5ResetEv>
 860cb9b:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860cb9e:	83 c4 00             	add    $0x0,%esp
 860cba1:	5b                   	pop    %ebx
 860cba2:	5e                   	pop    %esi
 860cba3:	5d                   	pop    %ebp
 860cba4:	c3                   	ret

```

```c
// StatisticsNatType::UpdateNatType @ 0x860c968

/* StatisticsNatType::UpdateNatType() */

void StatisticsNatType::UpdateNatType(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  undefined4 *puVar6;
  undefined4 local_30 [2];
  CStreamGuard local_28 [8];
  undefined4 local_20;
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
  local_18 [4];
  time_t local_14;
  SIG_NAT_TYPE *local_10;
  
  std::
  _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
  ::_Rb_tree_iterator((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                       *)&local_20);
  local_14 = time((time_t *)0x0);
  std::
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  ::begin((map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
           *)local_30);
  local_20 = local_30[0];
  do {
    std::
    map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
    ::end(local_1c);
    cVar2 = std::
            _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
            ::operator!=((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                          *)&local_20,(_Rb_tree_iterator *)local_1c);
    if (cVar2 == '\0') {
      Reset();
      return;
    }
    iVar3 = std::
            _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
            ::operator->((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                          *)&local_20);
    if (*(int *)(iVar3 + 8) != 0) {
      iVar3 = std::
              _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
              ::operator->((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                            *)&local_20);
      if (*(int *)(*(int *)(iVar3 + 8) + 4) < 1) {
        iVar3 = std::
                _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                ::operator->((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                              *)&local_20);
        if (0 < **(int **)(iVar3 + 8)) goto LAB_0860c9ee;
        bVar1 = false;
      }
      else {
LAB_0860c9ee:
        bVar1 = true;
      }
      if (bVar1) {
        pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Statistics.cpp",0x1c7);
        CStreamGuard::CStreamGuard(local_28,pSVar4,true);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 0860ca4c to 0860cb18 has its CatchHandler @ 0860cb1b */
        CStreamGuard::operator<<(pCVar5,0x83);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_28);
        CStreamGuard::operator<<(pCVar5,-1);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_28);
        local_10 = CStreamGuard::GetInBuffer<SIG_NAT_TYPE>(pCVar5);
        memset(local_10,0,0x14);
        puVar6 = (undefined4 *)
                 std::
                 _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                 ::operator->((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                               *)&local_20);
        *(undefined4 *)local_10 = *puVar6;
        iVar3 = std::
                _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                ::operator->((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                              *)&local_20);
        *(undefined4 *)(local_10 + 4) = *(undefined4 *)(iVar3 + 4);
        iVar3 = std::
                _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                ::operator->((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                              *)&local_20);
        *(undefined4 *)(local_10 + 8) = *(undefined4 *)(*(int *)(iVar3 + 8) + 4);
        iVar3 = std::
                _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                ::operator->((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                              *)&local_20);
        *(undefined4 *)(local_10 + 0xc) = **(undefined4 **)(iVar3 + 8);
        *(time_t *)(local_10 + 0x10) = local_14;
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_28);
        CStreamGuard::~CStreamGuard(local_28);
      }
    }
    std::
    _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
    ::operator++(local_18,(int)&local_20);
  } while( true );
}

```

---

## ~StatisticsNatType

```asm
// === 0860c718 StatisticsNatType::~StatisticsNatType  [0x0860c718-0x860c7d9] ===
 860c718:	55                   	push   %ebp
 860c719:	89 e5                	mov    %esp,%ebp
 860c71b:	56                   	push   %esi
 860c71c:	53                   	push   %ebx
 860c71d:	83 ec 20             	sub    $0x20,%esp
 860c720:	8b 55 08             	mov    0x8(%ebp),%edx
 860c723:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860c726:	89 54 24 04          	mov    %edx,0x4(%esp)
 860c72a:	89 04 24             	mov    %eax,(%esp)
 860c72d:	e8 f2 46 00 00       	call   8610e24 <_ZNSt3mapIN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS0_12RESULT_COUNTESt4lessIS1_ESaISt4pairIKS1_S3_EEE5beginEv>
 860c732:	83 ec 04             	sub    $0x4,%esp
 860c735:	eb 46                	jmp    860c77d <_ZN17StatisticsNatTypeD1Ev+0x65>
 860c737:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860c73a:	89 04 24             	mov    %eax,(%esp)
 860c73d:	e8 80 47 00 00       	call   8610ec2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS1_12RESULT_COUNTEEEptEv>
 860c742:	8b 40 08             	mov    0x8(%eax),%eax
 860c745:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860c748:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 860c74c:	74 12                	je     860c760 <_ZN17StatisticsNatTypeD1Ev+0x48>
 860c74e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860c751:	89 04 24             	mov    %eax,(%esp)
 860c754:	e8 97 7d 11 00       	call   87244f0 <_ZdlPv>
 860c759:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 860c760:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860c763:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 860c76a:	00 
 860c76b:	8d 55 e8             	lea    -0x18(%ebp),%edx
 860c76e:	89 54 24 04          	mov    %edx,0x4(%esp)
 860c772:	89 04 24             	mov    %eax,(%esp)
 860c775:	e8 0a 47 00 00       	call   8610e84 <_ZNSt17_Rb_tree_iteratorISt4pairIKN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS1_12RESULT_COUNTEEEppEi>
 860c77a:	83 ec 04             	sub    $0x4,%esp
 860c77d:	8b 55 08             	mov    0x8(%ebp),%edx
 860c780:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860c783:	89 54 24 04          	mov    %edx,0x4(%esp)
 860c787:	89 04 24             	mov    %eax,(%esp)
 860c78a:	e8 bb 46 00 00       	call   8610e4a <_ZNSt3mapIN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS0_12RESULT_COUNTESt4lessIS1_ESaISt4pairIKS1_S3_EEE3endEv>
 860c78f:	83 ec 04             	sub    $0x4,%esp
 860c792:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860c795:	89 44 24 04          	mov    %eax,0x4(%esp)
 860c799:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860c79c:	89 04 24             	mov    %eax,(%esp)
 860c79f:	e8 cc 46 00 00       	call   8610e70 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS1_12RESULT_COUNTEEEneERKS7_>
 860c7a4:	84 c0                	test   %al,%al
 860c7a6:	75 8f                	jne    860c737 <_ZN17StatisticsNatTypeD1Ev+0x1f>
 860c7a8:	eb 1b                	jmp    860c7c5 <_ZN17StatisticsNatTypeD1Ev+0xad>
 860c7aa:	89 d3                	mov    %edx,%ebx
 860c7ac:	89 c6                	mov    %eax,%esi
 860c7ae:	8b 45 08             	mov    0x8(%ebp),%eax
 860c7b1:	89 04 24             	mov    %eax,(%esp)
 860c7b4:	e8 1f 40 00 00       	call   86107d8 <_ZNSt3mapIN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS0_12RESULT_COUNTESt4lessIS1_ESaISt4pairIKS1_S3_EEED1Ev>
 860c7b9:	89 f0                	mov    %esi,%eax
 860c7bb:	89 da                	mov    %ebx,%edx
 860c7bd:	89 04 24             	mov    %eax,(%esp)
 860c7c0:	e8 8b 6f 4d 00       	call   8ae3750 <_Unwind_Resume>
 860c7c5:	8b 45 08             	mov    0x8(%ebp),%eax
 860c7c8:	89 04 24             	mov    %eax,(%esp)
 860c7cb:	e8 08 40 00 00       	call   86107d8 <_ZNSt3mapIN17StatisticsNatType21NAT_TYPE_PEER_TO_PEEREPNS0_12RESULT_COUNTESt4lessIS1_ESaISt4pairIKS1_S3_EEED1Ev>
 860c7d0:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860c7d3:	83 c4 00             	add    $0x0,%esp
 860c7d6:	5b                   	pop    %ebx
 860c7d7:	5e                   	pop    %esi
 860c7d8:	5d                   	pop    %ebp
 860c7d9:	c3                   	ret

```

```c
// StatisticsNatType::~StatisticsNatType @ 0x860c718

/* StatisticsNatType::~StatisticsNatType() */

void __thiscall StatisticsNatType::~StatisticsNatType(StatisticsNatType *this)

{
  char cVar1;
  int iVar2;
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  local_1c [4];
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
  local_14 [4];
  void *local_10;
  
                    /* try { // try from 0860c72d to 0860c78e has its CatchHandler @ 0860c7aa */
  std::
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
    ::end(local_18);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
            ::operator!=((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                          *)local_1c,(_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
            ::operator->((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                          *)local_1c);
    local_10 = *(void **)(iVar2 + 8);
    if (local_10 != (void *)0x0) {
      operator_delete(local_10);
      local_10 = (void *)0x0;
    }
    std::
    _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
    ::operator++(local_14,(int)local_1c);
  }
  std::
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  ::~map((map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
          *)this);
  return;
}

```

