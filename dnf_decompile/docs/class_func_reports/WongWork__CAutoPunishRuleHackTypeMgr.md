# WongWork__CAutoPunishRuleHackTypeMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## GetExceptionCnt

```asm
// === 080f972a WongWork::CAutoPunishRuleHackTypeMgr::GetExceptionCnt  [0x080f972a-0x80f97b3] ===
 80f972a:	55                   	push   %ebp
 80f972b:	89 e5                	mov    %esp,%ebp
 80f972d:	53                   	push   %ebx
 80f972e:	83 ec 24             	sub    $0x24,%esp
 80f9731:	8b 5d 08             	mov    0x8(%ebp),%ebx
 80f9734:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f9737:	8d 48 58             	lea    0x58(%eax),%ecx
 80f973a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80f973d:	8d 55 10             	lea    0x10(%ebp),%edx
 80f9740:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f9744:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80f9748:	89 04 24             	mov    %eax,(%esp)
 80f974b:	e8 d2 09 00 00       	call   80fa122 <_ZNSt3mapIiN8WongWork25stHacktypeExceptionInfo_tESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 80f9750:	83 ec 04             	sub    $0x4,%esp
 80f9753:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f9756:	8d 50 58             	lea    0x58(%eax),%edx
 80f9759:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80f975c:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f9760:	89 04 24             	mov    %eax,(%esp)
 80f9763:	e8 e6 09 00 00       	call   80fa14e <_ZNSt3mapIiN8WongWork25stHacktypeExceptionInfo_tESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 80f9768:	83 ec 04             	sub    $0x4,%esp
 80f976b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80f976e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f9772:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80f9775:	89 04 24             	mov    %eax,(%esp)
 80f9778:	e8 f7 09 00 00       	call   80fa174 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN8WongWork25stHacktypeExceptionInfo_tEEEneERKS5_>
 80f977d:	84 c0                	test   %al,%al
 80f977f:	74 12                	je     80f9793 <_ZN8WongWork26CAutoPunishRuleHackTypeMgr15GetExceptionCntEi+0x69>
 80f9781:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80f9784:	89 04 24             	mov    %eax,(%esp)
 80f9787:	e8 fc 09 00 00       	call   80fa188 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN8WongWork25stHacktypeExceptionInfo_tEEEptEv>
 80f978c:	8b 40 04             	mov    0x4(%eax),%eax
 80f978f:	89 03                	mov    %eax,(%ebx)
 80f9791:	eb 18                	jmp    80f97ab <_ZN8WongWork26CAutoPunishRuleHackTypeMgr15GetExceptionCntEi+0x81>
 80f9793:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80f979a:	00 
 80f979b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80f97a2:	00 
 80f97a3:	89 1c 24             	mov    %ebx,(%esp)
 80f97a6:	e8 7f 00 00 00       	call   80f982a <_ZN8WongWork25stHacktypeExceptionInfo_tC1Ess>
 80f97ab:	89 d8                	mov    %ebx,%eax
 80f97ad:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 80f97b0:	c9                   	leave
 80f97b1:	c2 04 00             	ret    $0x4

```

```c
// WongWork::CAutoPunishRuleHackTypeMgr::GetExceptionCnt @ 0x80f972a

/* WongWork::CAutoPunishRuleHackTypeMgr::GetExceptionCnt(int) */

int WongWork::CAutoPunishRuleHackTypeMgr::GetExceptionCnt(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,WongWork::stHacktypeExceptionInfo_t>> local_14 [4];
  map<int,WongWork::stHacktypeExceptionInfo_t,std::less<int>,std::allocator<std::pair<int_const,WongWork::stHacktypeExceptionInfo_t>>>
  local_10 [8];
  
  std::
  map<int,WongWork::stHacktypeExceptionInfo_t,std::less<int>,std::allocator<std::pair<int_const,WongWork::stHacktypeExceptionInfo_t>>>
  ::find((int *)local_14);
  std::
  map<int,WongWork::stHacktypeExceptionInfo_t,std::less<int>,std::allocator<std::pair<int_const,WongWork::stHacktypeExceptionInfo_t>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,WongWork::stHacktypeExceptionInfo_t>>::
          operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    stHacktypeExceptionInfo_t::stHacktypeExceptionInfo_t((stHacktypeExceptionInfo_t *)param_1,0,0);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,WongWork::stHacktypeExceptionInfo_t>>::
            operator->(local_14);
    *(undefined4 *)param_1 = *(undefined4 *)(iVar2 + 4);
  }
  return param_1;
}

```

---

## WriteFullIPCounterLog

```asm
// === 080f96d2 WongWork::CAutoPunishRuleHackTypeMgr::WriteFullIPCounterLog  [0x080f96d2-0x80f9729] ===
 80f96d2:	55                   	push   %ebp
 80f96d3:	89 e5                	mov    %esp,%ebp
 80f96d5:	83 ec 38             	sub    $0x38,%esp
 80f96d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f96db:	89 04 24             	mov    %eax,(%esp)
 80f96de:	e8 eb e2 ff ff       	call   80f79ce <_ZN8WongWork13CHackAnalyzer8getUserPEv>
 80f96e3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80f96e6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80f96ea:	74 3b                	je     80f9727 <_ZN8WongWork26CAutoPunishRuleHackTypeMgr21WriteFullIPCounterLogEPNS_13CHackAnalyzerEiiiiiPc+0x55>
 80f96ec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f96ef:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 80f96f5:	8b 45 24             	mov    0x24(%ebp),%eax
 80f96f8:	89 44 24 18          	mov    %eax,0x18(%esp)
 80f96fc:	8b 45 20             	mov    0x20(%ebp),%eax
 80f96ff:	89 44 24 14          	mov    %eax,0x14(%esp)
 80f9703:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80f9706:	89 44 24 10          	mov    %eax,0x10(%esp)
 80f970a:	8b 45 18             	mov    0x18(%ebp),%eax
 80f970d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80f9711:	8b 45 14             	mov    0x14(%ebp),%eax
 80f9714:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f9718:	8b 45 10             	mov    0x10(%ebp),%eax
 80f971b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f971f:	89 14 24             	mov    %edx,(%esp)
 80f9722:	e8 2d c6 58 00       	call   8685d54 <_ZN15cUserHistoryLog16FullIPCounterLogEiiiiiPc>
 80f9727:	c9                   	leave
 80f9728:	c3                   	ret
 80f9729:	90                   	nop

```

```c
// WongWork::CAutoPunishRuleHackTypeMgr::WriteFullIPCounterLog @ 0x80f96d2

/* WongWork::CAutoPunishRuleHackTypeMgr::WriteFullIPCounterLog(WongWork::CHackAnalyzer*, int, int,
   int, int, int, char*) */

void __thiscall
WongWork::CAutoPunishRuleHackTypeMgr::WriteFullIPCounterLog
          (CAutoPunishRuleHackTypeMgr *this,CHackAnalyzer *param_1,int param_2,int param_3,
          int param_4,int param_5,int param_6,char *param_7)

{
  int iVar1;
  
  iVar1 = CHackAnalyzer::getUserP(param_1);
  if (iVar1 != 0) {
    cUserHistoryLog::FullIPCounterLog
              ((cUserHistoryLog *)(iVar1 + 0x79700),param_2,param_3,param_4,param_5,param_6,param_7)
    ;
  }
  return;
}

```

---

## WriteIPCounterLog

```asm
// === 080f967a WongWork::CAutoPunishRuleHackTypeMgr::WriteIPCounterLog  [0x080f967a-0x80f96d1] ===
 80f967a:	55                   	push   %ebp
 80f967b:	89 e5                	mov    %esp,%ebp
 80f967d:	83 ec 38             	sub    $0x38,%esp
 80f9680:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f9683:	89 04 24             	mov    %eax,(%esp)
 80f9686:	e8 43 e3 ff ff       	call   80f79ce <_ZN8WongWork13CHackAnalyzer8getUserPEv>
 80f968b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80f968e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80f9692:	74 3b                	je     80f96cf <_ZN8WongWork26CAutoPunishRuleHackTypeMgr17WriteIPCounterLogEPNS_13CHackAnalyzerEiiiiiPc+0x55>
 80f9694:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f9697:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 80f969d:	8b 45 24             	mov    0x24(%ebp),%eax
 80f96a0:	89 44 24 18          	mov    %eax,0x18(%esp)
 80f96a4:	8b 45 20             	mov    0x20(%ebp),%eax
 80f96a7:	89 44 24 14          	mov    %eax,0x14(%esp)
 80f96ab:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80f96ae:	89 44 24 10          	mov    %eax,0x10(%esp)
 80f96b2:	8b 45 18             	mov    0x18(%ebp),%eax
 80f96b5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80f96b9:	8b 45 14             	mov    0x14(%ebp),%eax
 80f96bc:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f96c0:	8b 45 10             	mov    0x10(%ebp),%eax
 80f96c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f96c7:	89 14 24             	mov    %edx,(%esp)
 80f96ca:	e8 3d c6 58 00       	call   8685d0c <_ZN15cUserHistoryLog12IPCounterLogEiiiiiPc>
 80f96cf:	c9                   	leave
 80f96d0:	c3                   	ret
 80f96d1:	90                   	nop

```

```c
// WongWork::CAutoPunishRuleHackTypeMgr::WriteIPCounterLog @ 0x80f967a

/* WongWork::CAutoPunishRuleHackTypeMgr::WriteIPCounterLog(WongWork::CHackAnalyzer*, int, int, int,
   int, int, char*) */

void __thiscall
WongWork::CAutoPunishRuleHackTypeMgr::WriteIPCounterLog
          (CAutoPunishRuleHackTypeMgr *this,CHackAnalyzer *param_1,int param_2,int param_3,
          int param_4,int param_5,int param_6,char *param_7)

{
  int iVar1;
  
  iVar1 = CHackAnalyzer::getUserP(param_1);
  if (iVar1 != 0) {
    cUserHistoryLog::IPCounterLog
              ((cUserHistoryLog *)(iVar1 + 0x79700),param_2,param_3,param_4,param_5,param_6,param_7)
    ;
  }
  return;
}

```

---

## _findFullIPCount

```asm
// === 080f9574 WongWork::CAutoPunishRuleHackTypeMgr::_findFullIPCount  [0x080f9574-0x80f9679] ===
 80f9574:	55                   	push   %ebp
 80f9575:	89 e5                	mov    %esp,%ebp
 80f9577:	83 ec 48             	sub    $0x48,%esp
 80f957a:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f957d:	66 89 45 ee          	mov    %ax,-0x12(%ebp)
 80f9581:	8b 45 08             	mov    0x8(%ebp),%eax
 80f9584:	8d 48 40             	lea    0x40(%eax),%ecx
 80f9587:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f958a:	8d 55 ee             	lea    -0x12(%ebp),%edx
 80f958d:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f9591:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80f9595:	89 04 24             	mov    %eax,(%esp)
 80f9598:	e8 dd 0a 00 00       	call   80fa07a <_ZNSt8multimapItN8WongWork19HackFullIPCounter_tESt4lessItESaISt4pairIKtS1_EEE11lower_boundERS5_>
 80f959d:	83 ec 04             	sub    $0x4,%esp
 80f95a0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f95a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f95a7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80f95aa:	89 04 24             	mov    %eax,(%esp)
 80f95ad:	e8 f4 0a 00 00       	call   80fa0a6 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKtN8WongWork19HackFullIPCounter_tEEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 80f95b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f95b5:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 80f95b9:	8b 45 08             	mov    0x8(%ebp),%eax
 80f95bc:	8d 48 40             	lea    0x40(%eax),%ecx
 80f95bf:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80f95c2:	8d 55 f6             	lea    -0xa(%ebp),%edx
 80f95c5:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f95c9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80f95cd:	89 04 24             	mov    %eax,(%esp)
 80f95d0:	e8 e1 0a 00 00       	call   80fa0b6 <_ZNSt8multimapItN8WongWork19HackFullIPCounter_tESt4lessItESaISt4pairIKtS1_EEE11upper_boundERS5_>
 80f95d5:	83 ec 04             	sub    $0x4,%esp
 80f95d8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80f95db:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f95df:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80f95e2:	89 04 24             	mov    %eax,(%esp)
 80f95e5:	e8 bc 0a 00 00       	call   80fa0a6 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKtN8WongWork19HackFullIPCounter_tEEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 80f95ea:	eb 6c                	jmp    80f9658 <_ZN8WongWork26CAutoPunishRuleHackTypeMgr16_findFullIPCountEjjPKc+0xe4>
 80f95ec:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80f95ef:	89 04 24             	mov    %eax,(%esp)
 80f95f2:	e8 1d 0b 00 00       	call   80fa114 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKtN8WongWork19HackFullIPCounter_tEEEptEv>
 80f95f7:	8b 50 04             	mov    0x4(%eax),%edx
 80f95fa:	89 55 c8             	mov    %edx,-0x38(%ebp)
 80f95fd:	8b 50 08             	mov    0x8(%eax),%edx
 80f9600:	89 55 cc             	mov    %edx,-0x34(%ebp)
 80f9603:	8b 50 0c             	mov    0xc(%eax),%edx
 80f9606:	89 55 d0             	mov    %edx,-0x30(%ebp)
 80f9609:	8b 50 10             	mov    0x10(%eax),%edx
 80f960c:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 80f960f:	8b 50 14             	mov    0x14(%eax),%edx
 80f9612:	89 55 d8             	mov    %edx,-0x28(%ebp)
 80f9615:	8b 40 18             	mov    0x18(%eax),%eax
 80f9618:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80f961b:	0f b7 45 ca          	movzwl -0x36(%ebp),%eax
 80f961f:	0f b7 c0             	movzwl %ax,%eax
 80f9622:	3b 45 10             	cmp    0x10(%ebp),%eax
 80f9625:	75 26                	jne    80f964d <_ZN8WongWork26CAutoPunishRuleHackTypeMgr16_findFullIPCountEjjPKc+0xd9>
 80f9627:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 80f962e:	00 
 80f962f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80f9632:	83 c0 04             	add    $0x4,%eax
 80f9635:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f9639:	8b 45 14             	mov    0x14(%ebp),%eax
 80f963c:	89 04 24             	mov    %eax,(%esp)
 80f963f:	e8 7c 52 f8 ff       	call   807e8c0 <strncmp@plt>
 80f9644:	85 c0                	test   %eax,%eax
 80f9646:	75 05                	jne    80f964d <_ZN8WongWork26CAutoPunishRuleHackTypeMgr16_findFullIPCountEjjPKc+0xd9>
 80f9648:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80f964b:	eb 2a                	jmp    80f9677 <_ZN8WongWork26CAutoPunishRuleHackTypeMgr16_findFullIPCountEjjPKc+0x103>
 80f964d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80f9650:	89 04 24             	mov    %eax,(%esp)
 80f9653:	e8 9e 0a 00 00       	call   80fa0f6 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKtN8WongWork19HackFullIPCounter_tEEEppEv>
 80f9658:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80f965b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f965f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80f9662:	89 04 24             	mov    %eax,(%esp)
 80f9665:	e8 78 0a 00 00       	call   80fa0e2 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKtN8WongWork19HackFullIPCounter_tEEEneERKS5_>
 80f966a:	84 c0                	test   %al,%al
 80f966c:	0f 85 7a ff ff ff    	jne    80f95ec <_ZN8WongWork26CAutoPunishRuleHackTypeMgr16_findFullIPCountEjjPKc+0x78>
 80f9672:	b8 00 00 00 00       	mov    $0x0,%eax
 80f9677:	c9                   	leave
 80f9678:	c3                   	ret
 80f9679:	90                   	nop

```

```c
// WongWork::CAutoPunishRuleHackTypeMgr::_findFullIPCount @ 0x80f9574

/* WongWork::CAutoPunishRuleHackTypeMgr::_findFullIPCount(unsigned int, unsigned int, char const*)
    */

undefined4 __thiscall
WongWork::CAutoPunishRuleHackTypeMgr::_findFullIPCount
          (CAutoPunishRuleHackTypeMgr *this,uint param_1,uint param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  _Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>
  local_24 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>
  local_20 [4];
  multimap<unsigned_short,WongWork::HackFullIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>>
  local_1c [6];
  undefined2 local_16;
  multimap<unsigned_short,WongWork::HackFullIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>>
  local_14 [6];
  undefined2 local_e;
  
  local_16 = (short)param_1;
  std::
  multimap<unsigned_short,WongWork::HackFullIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>>
  ::lower_bound(local_1c,(ushort *)(this + 0x40));
  std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>::
  _Rb_tree_const_iterator(local_20,(_Rb_tree_iterator *)local_1c);
  local_e = (short)param_1;
  std::
  multimap<unsigned_short,WongWork::HackFullIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>>
  ::upper_bound(local_14,(ushort *)(this + 0x40));
  std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>::
  _Rb_tree_const_iterator(local_24,(_Rb_tree_iterator *)local_14);
  while( true ) {
    cVar1 = std::
            _Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>::
            operator!=(local_20,(_Rb_tree_const_iterator *)local_24);
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = std::
            _Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>::
            operator->(local_20);
    local_38 = *(undefined4 *)(iVar2 + 8);
    local_34 = *(undefined4 *)(iVar2 + 0xc);
    local_30 = *(undefined4 *)(iVar2 + 0x10);
    local_2c = *(undefined4 *)(iVar2 + 0x14);
    local_28 = *(undefined4 *)(iVar2 + 0x18);
    if ((*(uint *)(iVar2 + 4) >> 0x10 == param_2) &&
       (iVar2 = strncmp(param_3,(char *)&local_38,0x10), iVar2 == 0)) break;
    std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>::
    operator++(local_20);
  }
  return local_28;
}

```

---

## _findIPCount

```asm
// === 080f9322 WongWork::CAutoPunishRuleHackTypeMgr::_findIPCount  [0x080f9322-0x80f9469] ===
 80f9322:	55                   	push   %ebp
 80f9323:	89 e5                	mov    %esp,%ebp
 80f9325:	83 ec 58             	sub    $0x58,%esp
 80f9328:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f932b:	66 89 45 ee          	mov    %ax,-0x12(%ebp)
 80f932f:	8b 45 08             	mov    0x8(%ebp),%eax
 80f9332:	8d 48 24             	lea    0x24(%eax),%ecx
 80f9335:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f9338:	8d 55 ee             	lea    -0x12(%ebp),%edx
 80f933b:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f933f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80f9343:	89 04 24             	mov    %eax,(%esp)
 80f9346:	e8 cb 0b 00 00       	call   80f9f16 <_ZNSt8multimapItN8WongWork15HackIPCounter_tESt4lessItESaISt4pairIKtS1_EEE11lower_boundERS5_>
 80f934b:	83 ec 04             	sub    $0x4,%esp
 80f934e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f9351:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f9355:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80f9358:	89 04 24             	mov    %eax,(%esp)
 80f935b:	e8 e2 0b 00 00       	call   80f9f42 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKtN8WongWork15HackIPCounter_tEEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 80f9360:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f9363:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 80f9367:	8b 45 08             	mov    0x8(%ebp),%eax
 80f936a:	8d 48 24             	lea    0x24(%eax),%ecx
 80f936d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80f9370:	8d 55 f6             	lea    -0xa(%ebp),%edx
 80f9373:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f9377:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80f937b:	89 04 24             	mov    %eax,(%esp)
 80f937e:	e8 cf 0b 00 00       	call   80f9f52 <_ZNSt8multimapItN8WongWork15HackIPCounter_tESt4lessItESaISt4pairIKtS1_EEE11upper_boundERS5_>
 80f9383:	83 ec 04             	sub    $0x4,%esp
 80f9386:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80f9389:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f938d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80f9390:	89 04 24             	mov    %eax,(%esp)
 80f9393:	e8 aa 0b 00 00       	call   80f9f42 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKtN8WongWork15HackIPCounter_tEEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 80f9398:	e9 ac 00 00 00       	jmp    80f9449 <_ZN8WongWork26CAutoPunishRuleHackTypeMgr12_findIPCountEjjPKc+0x127>
 80f939d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80f93a0:	89 04 24             	mov    %eax,(%esp)
 80f93a3:	e8 08 0c 00 00       	call   80f9fb0 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKtN8WongWork15HackIPCounter_tEEEptEv>
 80f93a8:	8b 50 04             	mov    0x4(%eax),%edx
 80f93ab:	89 55 c8             	mov    %edx,-0x38(%ebp)
 80f93ae:	8b 50 08             	mov    0x8(%eax),%edx
 80f93b1:	89 55 cc             	mov    %edx,-0x34(%ebp)
 80f93b4:	8b 50 0c             	mov    0xc(%eax),%edx
 80f93b7:	89 55 d0             	mov    %edx,-0x30(%ebp)
 80f93ba:	8b 50 10             	mov    0x10(%eax),%edx
 80f93bd:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 80f93c0:	8b 50 14             	mov    0x14(%eax),%edx
 80f93c3:	89 55 d8             	mov    %edx,-0x28(%ebp)
 80f93c6:	8b 40 18             	mov    0x18(%eax),%eax
 80f93c9:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80f93cc:	0f b7 45 ca          	movzwl -0x36(%ebp),%eax
 80f93d0:	0f b7 c0             	movzwl %ax,%eax
 80f93d3:	3b 45 10             	cmp    0x10(%ebp),%eax
 80f93d6:	75 66                	jne    80f943e <_ZN8WongWork26CAutoPunishRuleHackTypeMgr12_findIPCountEjjPKc+0x11c>
 80f93d8:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 80f93df:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 80f93e6:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 80f93ed:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 80f93f4:	8b 45 14             	mov    0x14(%ebp),%eax
 80f93f7:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f93fb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80f9402:	00 
 80f9403:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80f9406:	89 04 24             	mov    %eax,(%esp)
 80f9409:	e8 c7 89 5b 00       	call   86b1dd5 <_Z22Divide_C_ClassIP_EndIPPcS_S_>
 80f940e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80f9411:	0f b6 00             	movzbl (%eax),%eax
 80f9414:	84 c0                	test   %al,%al
 80f9416:	74 26                	je     80f943e <_ZN8WongWork26CAutoPunishRuleHackTypeMgr12_findIPCountEjjPKc+0x11c>
 80f9418:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 80f941f:	00 
 80f9420:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80f9423:	83 c0 04             	add    $0x4,%eax
 80f9426:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f942a:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80f942d:	89 04 24             	mov    %eax,(%esp)
 80f9430:	e8 8b 54 f8 ff       	call   807e8c0 <strncmp@plt>
 80f9435:	85 c0                	test   %eax,%eax
 80f9437:	75 05                	jne    80f943e <_ZN8WongWork26CAutoPunishRuleHackTypeMgr12_findIPCountEjjPKc+0x11c>
 80f9439:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80f943c:	eb 2a                	jmp    80f9468 <_ZN8WongWork26CAutoPunishRuleHackTypeMgr12_findIPCountEjjPKc+0x146>
 80f943e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80f9441:	89 04 24             	mov    %eax,(%esp)
 80f9444:	e8 49 0b 00 00       	call   80f9f92 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKtN8WongWork15HackIPCounter_tEEEppEv>
 80f9449:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80f944c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f9450:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80f9453:	89 04 24             	mov    %eax,(%esp)
 80f9456:	e8 23 0b 00 00       	call   80f9f7e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKtN8WongWork15HackIPCounter_tEEEneERKS5_>
 80f945b:	84 c0                	test   %al,%al
 80f945d:	0f 85 3a ff ff ff    	jne    80f939d <_ZN8WongWork26CAutoPunishRuleHackTypeMgr12_findIPCountEjjPKc+0x7b>
 80f9463:	b8 00 00 00 00       	mov    $0x0,%eax
 80f9468:	c9                   	leave
 80f9469:	c3                   	ret

```

```c
// WongWork::CAutoPunishRuleHackTypeMgr::_findIPCount @ 0x80f9322

/* WongWork::CAutoPunishRuleHackTypeMgr::_findIPCount(unsigned int, unsigned int, char const*) */

undefined4 __thiscall
WongWork::CAutoPunishRuleHackTypeMgr::_findIPCount
          (CAutoPunishRuleHackTypeMgr *this,uint param_1,uint param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  char local_4c [16];
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  _Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>> local_24 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>> local_20 [4];
  multimap<unsigned_short,WongWork::HackIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>>>
  local_1c [6];
  undefined2 local_16;
  multimap<unsigned_short,WongWork::HackIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>>>
  local_14 [6];
  undefined2 local_e;
  
  local_16 = (short)param_1;
  std::
  multimap<unsigned_short,WongWork::HackIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>>>
  ::lower_bound(local_1c,(ushort *)(this + 0x24));
  std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>>::
  _Rb_tree_const_iterator(local_20,(_Rb_tree_iterator *)local_1c);
  local_e = (short)param_1;
  std::
  multimap<unsigned_short,WongWork::HackIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>>>
  ::upper_bound(local_14,(ushort *)(this + 0x24));
  std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>>::
  _Rb_tree_const_iterator(local_24,(_Rb_tree_iterator *)local_14);
  do {
    cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>>
            ::operator!=(local_20,(_Rb_tree_const_iterator *)local_24);
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>>
            ::operator->(local_20);
    local_3c = *(uint *)(iVar2 + 4);
    local_38 = *(undefined4 *)(iVar2 + 8);
    local_34 = *(undefined4 *)(iVar2 + 0xc);
    local_30 = *(undefined4 *)(iVar2 + 0x10);
    local_2c = *(undefined4 *)(iVar2 + 0x14);
    local_28 = *(undefined4 *)(iVar2 + 0x18);
    if (local_3c >> 0x10 == param_2) {
      local_4c[0] = '\0';
      local_4c[1] = '\0';
      local_4c[2] = '\0';
      local_4c[3] = '\0';
      local_4c[4] = '\0';
      local_4c[5] = '\0';
      local_4c[6] = '\0';
      local_4c[7] = '\0';
      local_4c[8] = '\0';
      local_4c[9] = '\0';
      local_4c[10] = '\0';
      local_4c[0xb] = '\0';
      local_4c[0xc] = '\0';
      local_4c[0xd] = '\0';
      local_4c[0xe] = '\0';
      local_4c[0xf] = '\0';
      Divide_C_ClassIP_EndIP(local_4c,(char *)0x0,param_3);
      if ((local_4c[0] != '\0') && (iVar2 = strncmp(local_4c,(char *)&local_38,0xc), iVar2 == 0)) {
        return local_28;
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>>::
    operator++(local_20);
  } while( true );
}

```

---

## setFullIPCounterData

```asm
// === 080f946a WongWork::CAutoPunishRuleHackTypeMgr::setFullIPCounterData  [0x080f946a-0x80f9573] ===
 80f946a:	55                   	push   %ebp
 80f946b:	89 e5                	mov    %esp,%ebp
 80f946d:	81 ec d8 00 00 00    	sub    $0xd8,%esp
 80f9473:	8b 55 10             	mov    0x10(%ebp),%edx
 80f9476:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f9479:	8b 4d 18             	mov    0x18(%ebp),%ecx
 80f947c:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 80f9480:	8b 4d 14             	mov    0x14(%ebp),%ecx
 80f9483:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 80f9487:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f948b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f948f:	8d 45 8c             	lea    -0x74(%ebp),%eax
 80f9492:	89 04 24             	mov    %eax,(%esp)
 80f9495:	e8 5c 04 00 00       	call   80f98f6 <_ZN8WongWork19HackFullIPCounter_tC1EjjPcj>
 80f949a:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 80f94a0:	8d 55 8c             	lea    -0x74(%ebp),%edx
 80f94a3:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f94a7:	8d 55 0c             	lea    0xc(%ebp),%edx
 80f94aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f94ae:	89 04 24             	mov    %eax,(%esp)
 80f94b1:	e8 07 0b 00 00       	call   80f9fbd <_ZSt9make_pairIRjN8WongWork19HackFullIPCounter_tEESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 80f94b6:	83 ec 04             	sub    $0x4,%esp
 80f94b9:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 80f94bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f94c3:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 80f94c9:	89 04 24             	mov    %eax,(%esp)
 80f94cc:	e8 2b 0b 00 00       	call   80f9ffc <_ZNSt4pairIKtN8WongWork19HackFullIPCounter_tEEC1IjS2_EEOS_IT_T0_E>
 80f94d1:	8b 45 08             	mov    0x8(%ebp),%eax
 80f94d4:	8d 48 40             	lea    0x40(%eax),%ecx
 80f94d7:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 80f94dd:	8d 95 54 ff ff ff    	lea    -0xac(%ebp),%edx
 80f94e3:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f94e7:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80f94eb:	89 04 24             	mov    %eax,(%esp)
 80f94ee:	e8 5b 0b 00 00       	call   80fa04e <_ZNSt8multimapItN8WongWork19HackFullIPCounter_tESt4lessItESaISt4pairIKtS1_EEE6insertERKS6_>
 80f94f3:	83 ec 04             	sub    $0x4,%esp
 80f94f6:	8b 45 10             	mov    0x10(%ebp),%eax
 80f94f9:	85 c0                	test   %eax,%eax
 80f94fb:	74 74                	je     80f9571 <_ZN8WongWork26CAutoPunishRuleHackTypeMgr20setFullIPCounterDataEjjPcj+0x107>
 80f94fd:	8b 55 10             	mov    0x10(%ebp),%edx
 80f9500:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f9503:	8b 4d 18             	mov    0x18(%ebp),%ecx
 80f9506:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 80f950a:	8b 4d 14             	mov    0x14(%ebp),%ecx
 80f950d:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 80f9511:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f9515:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f9519:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80f951c:	89 04 24             	mov    %eax,(%esp)
 80f951f:	e8 d2 03 00 00       	call   80f98f6 <_ZN8WongWork19HackFullIPCounter_tC1EjjPcj>
 80f9524:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 80f9527:	8d 55 e0             	lea    -0x20(%ebp),%edx
 80f952a:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f952e:	8d 55 10             	lea    0x10(%ebp),%edx
 80f9531:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f9535:	89 04 24             	mov    %eax,(%esp)
 80f9538:	e8 80 0a 00 00       	call   80f9fbd <_ZSt9make_pairIRjN8WongWork19HackFullIPCounter_tEESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 80f953d:	83 ec 04             	sub    $0x4,%esp
 80f9540:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 80f9543:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f9547:	8d 45 a8             	lea    -0x58(%ebp),%eax
 80f954a:	89 04 24             	mov    %eax,(%esp)
 80f954d:	e8 aa 0a 00 00       	call   80f9ffc <_ZNSt4pairIKtN8WongWork19HackFullIPCounter_tEEC1IjS2_EEOS_IT_T0_E>
 80f9552:	8b 45 08             	mov    0x8(%ebp),%eax
 80f9555:	8d 48 40             	lea    0x40(%eax),%ecx
 80f9558:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 80f955b:	8d 55 a8             	lea    -0x58(%ebp),%edx
 80f955e:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f9562:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80f9566:	89 04 24             	mov    %eax,(%esp)
 80f9569:	e8 e0 0a 00 00       	call   80fa04e <_ZNSt8multimapItN8WongWork19HackFullIPCounter_tESt4lessItESaISt4pairIKtS1_EEE6insertERKS6_>
 80f956e:	83 ec 04             	sub    $0x4,%esp
 80f9571:	c9                   	leave
 80f9572:	c3                   	ret
 80f9573:	90                   	nop

```

```c
// WongWork::CAutoPunishRuleHackTypeMgr::setFullIPCounterData @ 0x80f946a

/* WongWork::CAutoPunishRuleHackTypeMgr::setFullIPCounterData(unsigned int, unsigned int, char*,
   unsigned int) */

void __thiscall
WongWork::CAutoPunishRuleHackTypeMgr::setFullIPCounterData
          (CAutoPunishRuleHackTypeMgr *this,uint param_1,uint param_2,char *param_3,uint param_4)

{
  pair local_b4 [4];
  pair<unsigned_short_const,WongWork::HackFullIPCounter_t> local_b0 [28];
  uint local_94 [7];
  HackFullIPCounter_t local_78 [24];
  pair local_60 [4];
  pair<unsigned_short_const,WongWork::HackFullIPCounter_t> local_5c [28];
  uint local_40 [7];
  HackFullIPCounter_t local_24 [32];
  
  HackFullIPCounter_t::HackFullIPCounter_t(local_78,param_1,param_2,param_3,param_4);
  std::make_pair<unsigned_int&,WongWork::HackFullIPCounter_t>
            (local_94,(HackFullIPCounter_t *)&param_1);
  std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>::
  pair<unsigned_int,WongWork::HackFullIPCounter_t>(local_b0,(pair *)local_94);
  std::
  multimap<unsigned_short,WongWork::HackFullIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>>
  ::insert(local_b4);
  if (param_2 != 0) {
    HackFullIPCounter_t::HackFullIPCounter_t(local_24,param_1,param_2,param_3,param_4);
    std::make_pair<unsigned_int&,WongWork::HackFullIPCounter_t>
              (local_40,(HackFullIPCounter_t *)&param_2);
    std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>::
    pair<unsigned_int,WongWork::HackFullIPCounter_t>(local_5c,(pair *)local_40);
    std::
    multimap<unsigned_short,WongWork::HackFullIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>>
    ::insert(local_60);
  }
  return;
}

```

---

## setIPCounterData

```asm
// === 080f9218 WongWork::CAutoPunishRuleHackTypeMgr::setIPCounterData  [0x080f9218-0x80f9321] ===
 80f9218:	55                   	push   %ebp
 80f9219:	89 e5                	mov    %esp,%ebp
 80f921b:	81 ec d8 00 00 00    	sub    $0xd8,%esp
 80f9221:	8b 55 10             	mov    0x10(%ebp),%edx
 80f9224:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f9227:	8b 4d 18             	mov    0x18(%ebp),%ecx
 80f922a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 80f922e:	8b 4d 14             	mov    0x14(%ebp),%ecx
 80f9231:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 80f9235:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f9239:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f923d:	8d 45 8c             	lea    -0x74(%ebp),%eax
 80f9240:	89 04 24             	mov    %eax,(%esp)
 80f9243:	e8 4a 06 00 00       	call   80f9892 <_ZN8WongWork15HackIPCounter_tC1EjjPcj>
 80f9248:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 80f924e:	8d 55 8c             	lea    -0x74(%ebp),%edx
 80f9251:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f9255:	8d 55 0c             	lea    0xc(%ebp),%edx
 80f9258:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f925c:	89 04 24             	mov    %eax,(%esp)
 80f925f:	e8 f5 0b 00 00       	call   80f9e59 <_ZSt9make_pairIRjN8WongWork15HackIPCounter_tEESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 80f9264:	83 ec 04             	sub    $0x4,%esp
 80f9267:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 80f926d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f9271:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 80f9277:	89 04 24             	mov    %eax,(%esp)
 80f927a:	e8 19 0c 00 00       	call   80f9e98 <_ZNSt4pairIKtN8WongWork15HackIPCounter_tEEC1IjS2_EEOS_IT_T0_E>
 80f927f:	8b 45 08             	mov    0x8(%ebp),%eax
 80f9282:	8d 48 24             	lea    0x24(%eax),%ecx
 80f9285:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 80f928b:	8d 95 54 ff ff ff    	lea    -0xac(%ebp),%edx
 80f9291:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f9295:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80f9299:	89 04 24             	mov    %eax,(%esp)
 80f929c:	e8 49 0c 00 00       	call   80f9eea <_ZNSt8multimapItN8WongWork15HackIPCounter_tESt4lessItESaISt4pairIKtS1_EEE6insertERKS6_>
 80f92a1:	83 ec 04             	sub    $0x4,%esp
 80f92a4:	8b 45 10             	mov    0x10(%ebp),%eax
 80f92a7:	85 c0                	test   %eax,%eax
 80f92a9:	74 74                	je     80f931f <_ZN8WongWork26CAutoPunishRuleHackTypeMgr16setIPCounterDataEjjPcj+0x107>
 80f92ab:	8b 55 10             	mov    0x10(%ebp),%edx
 80f92ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f92b1:	8b 4d 18             	mov    0x18(%ebp),%ecx
 80f92b4:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 80f92b8:	8b 4d 14             	mov    0x14(%ebp),%ecx
 80f92bb:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 80f92bf:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f92c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f92c7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80f92ca:	89 04 24             	mov    %eax,(%esp)
 80f92cd:	e8 c0 05 00 00       	call   80f9892 <_ZN8WongWork15HackIPCounter_tC1EjjPcj>
 80f92d2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 80f92d5:	8d 55 e0             	lea    -0x20(%ebp),%edx
 80f92d8:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f92dc:	8d 55 10             	lea    0x10(%ebp),%edx
 80f92df:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f92e3:	89 04 24             	mov    %eax,(%esp)
 80f92e6:	e8 6e 0b 00 00       	call   80f9e59 <_ZSt9make_pairIRjN8WongWork15HackIPCounter_tEESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 80f92eb:	83 ec 04             	sub    $0x4,%esp
 80f92ee:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 80f92f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f92f5:	8d 45 a8             	lea    -0x58(%ebp),%eax
 80f92f8:	89 04 24             	mov    %eax,(%esp)
 80f92fb:	e8 98 0b 00 00       	call   80f9e98 <_ZNSt4pairIKtN8WongWork15HackIPCounter_tEEC1IjS2_EEOS_IT_T0_E>
 80f9300:	8b 45 08             	mov    0x8(%ebp),%eax
 80f9303:	8d 48 24             	lea    0x24(%eax),%ecx
 80f9306:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 80f9309:	8d 55 a8             	lea    -0x58(%ebp),%edx
 80f930c:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f9310:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80f9314:	89 04 24             	mov    %eax,(%esp)
 80f9317:	e8 ce 0b 00 00       	call   80f9eea <_ZNSt8multimapItN8WongWork15HackIPCounter_tESt4lessItESaISt4pairIKtS1_EEE6insertERKS6_>
 80f931c:	83 ec 04             	sub    $0x4,%esp
 80f931f:	c9                   	leave
 80f9320:	c3                   	ret
 80f9321:	90                   	nop

```

```c
// WongWork::CAutoPunishRuleHackTypeMgr::setIPCounterData @ 0x80f9218

/* WongWork::CAutoPunishRuleHackTypeMgr::setIPCounterData(unsigned int, unsigned int, char*,
   unsigned int) */

void __thiscall
WongWork::CAutoPunishRuleHackTypeMgr::setIPCounterData
          (CAutoPunishRuleHackTypeMgr *this,uint param_1,uint param_2,char *param_3,uint param_4)

{
  pair local_b4 [4];
  pair<unsigned_short_const,WongWork::HackIPCounter_t> local_b0 [28];
  uint local_94 [7];
  HackIPCounter_t local_78 [24];
  pair local_60 [4];
  pair<unsigned_short_const,WongWork::HackIPCounter_t> local_5c [28];
  uint local_40 [7];
  HackIPCounter_t local_24 [32];
  
  HackIPCounter_t::HackIPCounter_t(local_78,param_1,param_2,param_3,param_4);
  std::make_pair<unsigned_int&,WongWork::HackIPCounter_t>(local_94,(HackIPCounter_t *)&param_1);
  std::pair<unsigned_short_const,WongWork::HackIPCounter_t>::
  pair<unsigned_int,WongWork::HackIPCounter_t>(local_b0,(pair *)local_94);
  std::
  multimap<unsigned_short,WongWork::HackIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>>>
  ::insert(local_b4);
  if (param_2 != 0) {
    HackIPCounter_t::HackIPCounter_t(local_24,param_1,param_2,param_3,param_4);
    std::make_pair<unsigned_int&,WongWork::HackIPCounter_t>(local_40,(HackIPCounter_t *)&param_2);
    std::pair<unsigned_short_const,WongWork::HackIPCounter_t>::
    pair<unsigned_int,WongWork::HackIPCounter_t>(local_5c,(pair *)local_40);
    std::
    multimap<unsigned_short,WongWork::HackIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>>>
    ::insert(local_60);
  }
  return;
}

```

