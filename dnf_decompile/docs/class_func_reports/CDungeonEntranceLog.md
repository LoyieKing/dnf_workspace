# CDungeonEntranceLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## DecrementDungeonEntrance

```asm
// === 0860e324 CDungeonEntranceLog::DecrementDungeonEntrance  [0x0860e324-0x860e38d] ===
 860e324:	55                   	push   %ebp
 860e325:	89 e5                	mov    %esp,%ebp
 860e327:	83 ec 38             	sub    $0x38,%esp
 860e32a:	8b 45 10             	mov    0x10(%ebp),%eax
 860e32d:	88 45 e4             	mov    %al,-0x1c(%ebp)
 860e330:	8b 55 08             	mov    0x8(%ebp),%edx
 860e333:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860e336:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 860e339:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 860e33d:	89 54 24 04          	mov    %edx,0x4(%esp)
 860e341:	89 04 24             	mov    %eax,(%esp)
 860e344:	e8 53 32 00 00       	call   861159c <_ZNSt3mapIi17STDungeonInoutCntSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 860e349:	83 ec 04             	sub    $0x4,%esp
 860e34c:	8b 55 08             	mov    0x8(%ebp),%edx
 860e34f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860e352:	89 54 24 04          	mov    %edx,0x4(%esp)
 860e356:	89 04 24             	mov    %eax,(%esp)
 860e359:	e8 6a 32 00 00       	call   86115c8 <_ZNSt3mapIi17STDungeonInoutCntSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 860e35e:	83 ec 04             	sub    $0x4,%esp
 860e361:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860e364:	89 44 24 04          	mov    %eax,0x4(%esp)
 860e368:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860e36b:	89 04 24             	mov    %eax,(%esp)
 860e36e:	e8 7b 32 00 00       	call   86115ee <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17STDungeonInoutCntEEneERKS4_>
 860e373:	84 c0                	test   %al,%al
 860e375:	74 14                	je     860e38b <_ZN19CDungeonEntranceLog24DecrementDungeonEntranceEib+0x67>
 860e377:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860e37a:	89 04 24             	mov    %eax,(%esp)
 860e37d:	e8 80 32 00 00       	call   8611602 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17STDungeonInoutCntEEptEv>
 860e382:	8b 50 10             	mov    0x10(%eax),%edx
 860e385:	83 ea 01             	sub    $0x1,%edx
 860e388:	89 50 10             	mov    %edx,0x10(%eax)
 860e38b:	c9                   	leave
 860e38c:	c3                   	ret
 860e38d:	90                   	nop

```

```c
// CDungeonEntranceLog::DecrementDungeonEntrance @ 0x860e324

/* CDungeonEntranceLog::DecrementDungeonEntrance(int, bool) */

void CDungeonEntranceLog::DecrementDungeonEntrance(int param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> local_14 [4];
  map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
  local_10 [12];
  
  std::
  map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>::
  find((int *)local_14);
  std::
  map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>::
  end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->(local_14);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + -1;
  }
  return;
}

```

---

## IncrementDungeonEntrance

```asm
// === 0860e1ee CDungeonEntranceLog::IncrementDungeonEntrance  [0x0860e1ee-0x860e323] ===
 860e1ee:	55                   	push   %ebp
 860e1ef:	89 e5                	mov    %esp,%ebp
 860e1f1:	83 ec 78             	sub    $0x78,%esp
 860e1f4:	8b 45 10             	mov    0x10(%ebp),%eax
 860e1f7:	88 45 a4             	mov    %al,-0x5c(%ebp)
 860e1fa:	8b 55 08             	mov    0x8(%ebp),%edx
 860e1fd:	8d 45 c0             	lea    -0x40(%ebp),%eax
 860e200:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 860e203:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 860e207:	89 54 24 04          	mov    %edx,0x4(%esp)
 860e20b:	89 04 24             	mov    %eax,(%esp)
 860e20e:	e8 89 33 00 00       	call   861159c <_ZNSt3mapIi17STDungeonInoutCntSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 860e213:	83 ec 04             	sub    $0x4,%esp
 860e216:	8b 55 08             	mov    0x8(%ebp),%edx
 860e219:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 860e21c:	89 54 24 04          	mov    %edx,0x4(%esp)
 860e220:	89 04 24             	mov    %eax,(%esp)
 860e223:	e8 a0 33 00 00       	call   86115c8 <_ZNSt3mapIi17STDungeonInoutCntSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 860e228:	83 ec 04             	sub    $0x4,%esp
 860e22b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 860e22e:	89 44 24 04          	mov    %eax,0x4(%esp)
 860e232:	8d 45 c0             	lea    -0x40(%ebp),%eax
 860e235:	89 04 24             	mov    %eax,(%esp)
 860e238:	e8 b1 33 00 00       	call   86115ee <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17STDungeonInoutCntEEneERKS4_>
 860e23d:	84 c0                	test   %al,%al
 860e23f:	74 60                	je     860e2a1 <_ZN19CDungeonEntranceLog24IncrementDungeonEntranceEib+0xb3>
 860e241:	80 7d a4 00          	cmpb   $0x0,-0x5c(%ebp)
 860e245:	74 19                	je     860e260 <_ZN19CDungeonEntranceLog24IncrementDungeonEntranceEib+0x72>
 860e247:	8d 45 c0             	lea    -0x40(%ebp),%eax
 860e24a:	89 04 24             	mov    %eax,(%esp)
 860e24d:	e8 b0 33 00 00       	call   8611602 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17STDungeonInoutCntEEptEv>
 860e252:	8b 50 08             	mov    0x8(%eax),%edx
 860e255:	83 c2 01             	add    $0x1,%edx
 860e258:	89 50 08             	mov    %edx,0x8(%eax)
 860e25b:	e9 c2 00 00 00       	jmp    860e322 <_ZN19CDungeonEntranceLog24IncrementDungeonEntranceEib+0x134>
 860e260:	8d 45 c0             	lea    -0x40(%ebp),%eax
 860e263:	89 04 24             	mov    %eax,(%esp)
 860e266:	e8 97 33 00 00       	call   8611602 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17STDungeonInoutCntEEptEv>
 860e26b:	8b 50 04             	mov    0x4(%eax),%edx
 860e26e:	83 c2 01             	add    $0x1,%edx
 860e271:	89 50 04             	mov    %edx,0x4(%eax)
 860e274:	8d 45 c0             	lea    -0x40(%ebp),%eax
 860e277:	89 04 24             	mov    %eax,(%esp)
 860e27a:	e8 83 33 00 00       	call   8611602 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17STDungeonInoutCntEEptEv>
 860e27f:	8b 50 0c             	mov    0xc(%eax),%edx
 860e282:	83 c2 01             	add    $0x1,%edx
 860e285:	89 50 0c             	mov    %edx,0xc(%eax)
 860e288:	8d 45 c0             	lea    -0x40(%ebp),%eax
 860e28b:	89 04 24             	mov    %eax,(%esp)
 860e28e:	e8 6f 33 00 00       	call   8611602 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17STDungeonInoutCntEEptEv>
 860e293:	8b 50 10             	mov    0x10(%eax),%edx
 860e296:	83 c2 01             	add    $0x1,%edx
 860e299:	89 50 10             	mov    %edx,0x10(%eax)
 860e29c:	e9 81 00 00 00       	jmp    860e322 <_ZN19CDungeonEntranceLog24IncrementDungeonEntranceEib+0x134>
 860e2a1:	8d 45 b0             	lea    -0x50(%ebp),%eax
 860e2a4:	89 04 24             	mov    %eax,(%esp)
 860e2a7:	e8 12 21 00 00       	call   86103be <_ZN17STDungeonInoutCntC1Ev>
 860e2ac:	80 7d a4 00          	cmpb   $0x0,-0x5c(%ebp)
 860e2b0:	74 0b                	je     860e2bd <_ZN19CDungeonEntranceLog24IncrementDungeonEntranceEib+0xcf>
 860e2b2:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 860e2b5:	83 c0 01             	add    $0x1,%eax
 860e2b8:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 860e2bb:	eb 1b                	jmp    860e2d8 <_ZN19CDungeonEntranceLog24IncrementDungeonEntranceEib+0xea>
 860e2bd:	8b 45 b0             	mov    -0x50(%ebp),%eax
 860e2c0:	83 c0 01             	add    $0x1,%eax
 860e2c3:	89 45 b0             	mov    %eax,-0x50(%ebp)
 860e2c6:	8b 45 b8             	mov    -0x48(%ebp),%eax
 860e2c9:	83 c0 01             	add    $0x1,%eax
 860e2cc:	89 45 b8             	mov    %eax,-0x48(%ebp)
 860e2cf:	8b 45 bc             	mov    -0x44(%ebp),%eax
 860e2d2:	83 c0 01             	add    $0x1,%eax
 860e2d5:	89 45 bc             	mov    %eax,-0x44(%ebp)
 860e2d8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860e2db:	8d 55 b0             	lea    -0x50(%ebp),%edx
 860e2de:	89 54 24 08          	mov    %edx,0x8(%esp)
 860e2e2:	8d 55 0c             	lea    0xc(%ebp),%edx
 860e2e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 860e2e9:	89 04 24             	mov    %eax,(%esp)
 860e2ec:	e8 1e 33 00 00       	call   861160f <_ZSt9make_pairIRiR17STDungeonInoutCntESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 860e2f1:	83 ec 04             	sub    $0x4,%esp
 860e2f4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860e2f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 860e2fb:	8d 45 d0             	lea    -0x30(%ebp),%eax
 860e2fe:	89 04 24             	mov    %eax,(%esp)
 860e301:	e8 48 33 00 00       	call   861164e <_ZNSt4pairIKi17STDungeonInoutCntEC1IiS1_EEOS_IT_T0_E>
 860e306:	8b 55 08             	mov    0x8(%ebp),%edx
 860e309:	8d 45 c8             	lea    -0x38(%ebp),%eax
 860e30c:	8d 4d d0             	lea    -0x30(%ebp),%ecx
 860e30f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 860e313:	89 54 24 04          	mov    %edx,0x4(%esp)
 860e317:	89 04 24             	mov    %eax,(%esp)
 860e31a:	e8 71 33 00 00       	call   8611690 <_ZNSt3mapIi17STDungeonInoutCntSt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 860e31f:	83 ec 04             	sub    $0x4,%esp
 860e322:	c9                   	leave
 860e323:	c3                   	ret

```

```c
// CDungeonEntranceLog::IncrementDungeonEntrance @ 0x860e1ee

/* CDungeonEntranceLog::IncrementDungeonEntrance(int, bool) */

void __thiscall
CDungeonEntranceLog::IncrementDungeonEntrance(CDungeonEntranceLog *this,int param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined3 in_stack_0000000d;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  _Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> local_44 [4];
  map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
  local_40 [4];
  pair local_3c [8];
  pair<int_const,STDungeonInoutCnt> local_34 [20];
  int local_20 [7];
  
  bVar1 = param_2;
  std::
  map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>::
  find((int *)local_44);
  std::
  map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>::
  end(local_40);
  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator!=
                    (local_44,(_Rb_tree_iterator *)local_40);
  if (cVar2 == '\0') {
    STDungeonInoutCnt::STDungeonInoutCnt((STDungeonInoutCnt *)&local_54);
    if (bVar1) {
      local_50 = local_50 + 1;
    }
    else {
      local_54 = local_54 + 1;
      local_4c = local_4c + 1;
      local_48 = local_48 + 1;
    }
    std::make_pair<int&,STDungeonInoutCnt&>(local_20,(STDungeonInoutCnt *)&param_1);
    std::pair<int_const,STDungeonInoutCnt>::pair<int,STDungeonInoutCnt>(local_34,(pair *)local_20);
    std::
    map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
    ::insert(local_3c);
  }
  else if (bVar1) {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->(local_44);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
  }
  else {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->(local_44);
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->(local_44);
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->(local_44);
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  }
  return;
}

```

---

## InsertDungeonEntrance

```asm
// === 0860e59c CDungeonEntranceLog::InsertDungeonEntrance  [0x0860e59c-0x860e764] ===
 860e59c:	55                   	push   %ebp
 860e59d:	89 e5                	mov    %esp,%ebp
 860e59f:	56                   	push   %esi
 860e5a0:	53                   	push   %ebx
 860e5a1:	83 ec 30             	sub    $0x30,%esp
 860e5a4:	8b 45 08             	mov    0x8(%ebp),%eax
 860e5a7:	89 04 24             	mov    %eax,(%esp)
 860e5aa:	e8 0d 31 00 00       	call   86116bc <_ZNKSt3mapIi17STDungeonInoutCntSt4lessIiESaISt4pairIKiS0_EEE4sizeEv>
 860e5af:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860e5b2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 860e5b6:	7f 0a                	jg     860e5c2 <_ZN19CDungeonEntranceLog21InsertDungeonEntranceEv+0x26>
 860e5b8:	bb 01 00 00 00       	mov    $0x1,%ebx
 860e5bd:	e9 97 01 00 00       	jmp    860e759 <_ZN19CDungeonEntranceLog21InsertDungeonEntranceEv+0x1bd>
 860e5c2:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 860e5c7:	c7 44 24 08 da 04 00 	movl   $0x4da,0x8(%esp)
 860e5ce:	00 
 860e5cf:	c7 44 24 04 63 02 ce 	movl   $0x8ce0263,0x4(%esp)
 860e5d6:	08 
 860e5d7:	89 04 24             	mov    %eax,(%esp)
 860e5da:	e8 a7 14 c8 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 860e5df:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 860e5e6:	00 
 860e5e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 860e5eb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860e5ee:	89 04 24             	mov    %eax,(%esp)
 860e5f1:	e8 30 a6 ab ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 860e5f6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860e5f9:	89 04 24             	mov    %eax,(%esp)
 860e5fc:	e8 45 a6 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860e601:	c7 44 24 04 e0 00 00 	movl   $0xe0,0x4(%esp)
 860e608:	00 
 860e609:	89 04 24             	mov    %eax,(%esp)
 860e60c:	e8 45 a6 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860e611:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860e614:	89 04 24             	mov    %eax,(%esp)
 860e617:	e8 2a a6 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860e61c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 860e623:	ff 
 860e624:	89 04 24             	mov    %eax,(%esp)
 860e627:	e8 2a a6 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860e62c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860e62f:	89 04 24             	mov    %eax,(%esp)
 860e632:	e8 0f a6 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860e637:	8b 55 f4             	mov    -0xc(%ebp),%edx
 860e63a:	89 54 24 04          	mov    %edx,0x4(%esp)
 860e63e:	89 04 24             	mov    %eax,(%esp)
 860e641:	e8 10 a6 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860e646:	8b 55 08             	mov    0x8(%ebp),%edx
 860e649:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860e64c:	89 54 24 04          	mov    %edx,0x4(%esp)
 860e650:	89 04 24             	mov    %eax,(%esp)
 860e653:	e8 78 30 00 00       	call   86116d0 <_ZNSt3mapIi17STDungeonInoutCntSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 860e658:	83 ec 04             	sub    $0x4,%esp
 860e65b:	8b 55 08             	mov    0x8(%ebp),%edx
 860e65e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860e661:	89 54 24 04          	mov    %edx,0x4(%esp)
 860e665:	89 04 24             	mov    %eax,(%esp)
 860e668:	e8 5b 2f 00 00       	call   86115c8 <_ZNSt3mapIi17STDungeonInoutCntSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 860e66d:	83 ec 04             	sub    $0x4,%esp
 860e670:	eb 79                	jmp    860e6eb <_ZN19CDungeonEntranceLog21InsertDungeonEntranceEv+0x14f>
 860e672:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860e675:	89 04 24             	mov    %eax,(%esp)
 860e678:	e8 85 2f 00 00       	call   8611602 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17STDungeonInoutCntEEptEv>
 860e67d:	8b 18                	mov    (%eax),%ebx
 860e67f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860e682:	89 04 24             	mov    %eax,(%esp)
 860e685:	e8 bc a5 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860e68a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860e68e:	89 04 24             	mov    %eax,(%esp)
 860e691:	e8 c0 a5 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860e696:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860e699:	89 04 24             	mov    %eax,(%esp)
 860e69c:	e8 61 2f 00 00       	call   8611602 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17STDungeonInoutCntEEptEv>
 860e6a1:	8b 58 04             	mov    0x4(%eax),%ebx
 860e6a4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860e6a7:	89 04 24             	mov    %eax,(%esp)
 860e6aa:	e8 97 a5 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860e6af:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860e6b3:	89 04 24             	mov    %eax,(%esp)
 860e6b6:	e8 9b a5 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860e6bb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860e6be:	89 04 24             	mov    %eax,(%esp)
 860e6c1:	e8 3c 2f 00 00       	call   8611602 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17STDungeonInoutCntEEptEv>
 860e6c6:	8b 58 08             	mov    0x8(%eax),%ebx
 860e6c9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860e6cc:	89 04 24             	mov    %eax,(%esp)
 860e6cf:	e8 72 a5 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860e6d4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860e6d8:	89 04 24             	mov    %eax,(%esp)
 860e6db:	e8 76 a5 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860e6e0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860e6e3:	89 04 24             	mov    %eax,(%esp)
 860e6e6:	e8 0b 30 00 00       	call   86116f6 <_ZNSt17_Rb_tree_iteratorISt4pairIKi17STDungeonInoutCntEEppEv>
 860e6eb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860e6ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 860e6f2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860e6f5:	89 04 24             	mov    %eax,(%esp)
 860e6f8:	e8 f1 2e 00 00       	call   86115ee <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17STDungeonInoutCntEEneERKS4_>
 860e6fd:	84 c0                	test   %al,%al
 860e6ff:	0f 85 6d ff ff ff    	jne    860e672 <_ZN19CDungeonEntranceLog21InsertDungeonEntranceEv+0xd6>
 860e705:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 860e70a:	8d 55 ec             	lea    -0x14(%ebp),%edx
 860e70d:	89 54 24 08          	mov    %edx,0x8(%esp)
 860e711:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 860e718:	00 
 860e719:	89 04 24             	mov    %eax,(%esp)
 860e71c:	e8 bd 28 f6 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 860e721:	8b 45 08             	mov    0x8(%ebp),%eax
 860e724:	89 04 24             	mov    %eax,(%esp)
 860e727:	e8 e8 2f 00 00       	call   8611714 <_ZNSt3mapIi17STDungeonInoutCntSt4lessIiESaISt4pairIKiS0_EEE5clearEv>
 860e72c:	bb 01 00 00 00       	mov    $0x1,%ebx
 860e731:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860e734:	89 04 24             	mov    %eax,(%esp)
 860e737:	e8 96 e1 00 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860e73c:	eb 1b                	jmp    860e759 <_ZN19CDungeonEntranceLog21InsertDungeonEntranceEv+0x1bd>
 860e73e:	89 d3                	mov    %edx,%ebx
 860e740:	89 c6                	mov    %eax,%esi
 860e742:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860e745:	89 04 24             	mov    %eax,(%esp)
 860e748:	e8 85 e1 00 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860e74d:	89 f0                	mov    %esi,%eax
 860e74f:	89 da                	mov    %ebx,%edx
 860e751:	89 04 24             	mov    %eax,(%esp)
 860e754:	e8 f7 4f 4d 00       	call   8ae3750 <_Unwind_Resume>
 860e759:	89 d8                	mov    %ebx,%eax
 860e75b:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860e75e:	83 c4 00             	add    $0x0,%esp
 860e761:	5b                   	pop    %ebx
 860e762:	5e                   	pop    %esi
 860e763:	5d                   	pop    %ebp
 860e764:	c3                   	ret

```

```c
// CDungeonEntranceLog::InsertDungeonEntrance @ 0x860e59c

/* CDungeonEntranceLog::InsertDungeonEntrance() */

undefined4 __thiscall CDungeonEntranceLog::InsertDungeonEntrance(CDungeonEntranceLog *this)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int *piVar4;
  int iVar5;
  map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
  local_20 [4];
  map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
  local_1c [4];
  CStreamGuard local_18 [8];
  int local_10;
  
  local_10 = std::
             map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
             ::size((map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
                     *)this);
  if (0 < local_10) {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Statistics.cpp",0x4da);
    CStreamGuard::CStreamGuard(local_18,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0860e60c to 0860e72b has its CatchHandler @ 0860e73e */
    CStreamGuard::operator<<(pCVar3,0xe0);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,-1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,local_10);
    std::
    map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
    ::begin(local_1c);
    std::
    map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
    ::end(local_20);
    while (cVar1 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator!=
                             ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)local_1c,
                              (_Rb_tree_iterator *)local_20), cVar1 != '\0') {
      piVar4 = (int *)std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)
                                 local_1c);
      iVar5 = *piVar4;
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
      CStreamGuard::operator<<(pCVar3,iVar5);
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)local_1c);
      iVar5 = *(int *)(iVar5 + 4);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
      CStreamGuard::operator<<(pCVar3,iVar5);
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)local_1c);
      iVar5 = *(int *)(iVar5 + 8);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
      CStreamGuard::operator<<(pCVar3,iVar5);
      std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)local_1c);
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_18);
    std::
    map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
    ::clear((map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
             *)this);
    CStreamGuard::~CStreamGuard(local_18);
  }
  return 1;
}

```

---

## InsertDungeonEntrance_Hour

```asm
// === 0860e38e CDungeonEntranceLog::InsertDungeonEntrance_Hour  [0x0860e38e-0x860e59b] ===
 860e38e:	55                   	push   %ebp
 860e38f:	89 e5                	mov    %esp,%ebp
 860e391:	56                   	push   %esi
 860e392:	53                   	push   %ebx
 860e393:	83 ec 40             	sub    $0x40,%esp
 860e396:	8b 45 08             	mov    0x8(%ebp),%eax
 860e399:	89 04 24             	mov    %eax,(%esp)
 860e39c:	e8 1b 33 00 00       	call   86116bc <_ZNKSt3mapIi17STDungeonInoutCntSt4lessIiESaISt4pairIKiS0_EEE4sizeEv>
 860e3a1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860e3a4:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 860e3a8:	7f 0a                	jg     860e3b4 <_ZN19CDungeonEntranceLog26InsertDungeonEntrance_HourEv+0x26>
 860e3aa:	bb 01 00 00 00       	mov    $0x1,%ebx
 860e3af:	e9 dc 01 00 00       	jmp    860e590 <_ZN19CDungeonEntranceLog26InsertDungeonEntrance_HourEv+0x202>
 860e3b4:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 860e3b9:	c7 44 24 08 b5 04 00 	movl   $0x4b5,0x8(%esp)
 860e3c0:	00 
 860e3c1:	c7 44 24 04 63 02 ce 	movl   $0x8ce0263,0x4(%esp)
 860e3c8:	08 
 860e3c9:	89 04 24             	mov    %eax,(%esp)
 860e3cc:	e8 b5 16 c8 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 860e3d1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 860e3d8:	00 
 860e3d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 860e3dd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860e3e0:	89 04 24             	mov    %eax,(%esp)
 860e3e3:	e8 3e a8 ab ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 860e3e8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860e3eb:	89 04 24             	mov    %eax,(%esp)
 860e3ee:	e8 53 a8 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860e3f3:	c7 44 24 04 e1 00 00 	movl   $0xe1,0x4(%esp)
 860e3fa:	00 
 860e3fb:	89 04 24             	mov    %eax,(%esp)
 860e3fe:	e8 53 a8 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860e403:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860e406:	89 04 24             	mov    %eax,(%esp)
 860e409:	e8 38 a8 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860e40e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 860e415:	ff 
 860e416:	89 04 24             	mov    %eax,(%esp)
 860e419:	e8 38 a8 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860e41e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860e421:	89 04 24             	mov    %eax,(%esp)
 860e424:	e8 1d a8 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860e429:	8b 55 f4             	mov    -0xc(%ebp),%edx
 860e42c:	89 54 24 04          	mov    %edx,0x4(%esp)
 860e430:	89 04 24             	mov    %eax,(%esp)
 860e433:	e8 1e a8 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860e438:	8b 55 08             	mov    0x8(%ebp),%edx
 860e43b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860e43e:	89 54 24 04          	mov    %edx,0x4(%esp)
 860e442:	89 04 24             	mov    %eax,(%esp)
 860e445:	e8 86 32 00 00       	call   86116d0 <_ZNSt3mapIi17STDungeonInoutCntSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 860e44a:	83 ec 04             	sub    $0x4,%esp
 860e44d:	8b 55 08             	mov    0x8(%ebp),%edx
 860e450:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860e453:	89 54 24 04          	mov    %edx,0x4(%esp)
 860e457:	89 04 24             	mov    %eax,(%esp)
 860e45a:	e8 69 31 00 00       	call   86115c8 <_ZNSt3mapIi17STDungeonInoutCntSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 860e45f:	83 ec 04             	sub    $0x4,%esp
 860e462:	eb 79                	jmp    860e4dd <_ZN19CDungeonEntranceLog26InsertDungeonEntrance_HourEv+0x14f>
 860e464:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860e467:	89 04 24             	mov    %eax,(%esp)
 860e46a:	e8 93 31 00 00       	call   8611602 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17STDungeonInoutCntEEptEv>
 860e46f:	8b 18                	mov    (%eax),%ebx
 860e471:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860e474:	89 04 24             	mov    %eax,(%esp)
 860e477:	e8 ca a7 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860e47c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860e480:	89 04 24             	mov    %eax,(%esp)
 860e483:	e8 ce a7 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860e488:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860e48b:	89 04 24             	mov    %eax,(%esp)
 860e48e:	e8 6f 31 00 00       	call   8611602 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17STDungeonInoutCntEEptEv>
 860e493:	8b 58 0c             	mov    0xc(%eax),%ebx
 860e496:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860e499:	89 04 24             	mov    %eax,(%esp)
 860e49c:	e8 a5 a7 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860e4a1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860e4a5:	89 04 24             	mov    %eax,(%esp)
 860e4a8:	e8 a9 a7 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860e4ad:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860e4b0:	89 04 24             	mov    %eax,(%esp)
 860e4b3:	e8 4a 31 00 00       	call   8611602 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17STDungeonInoutCntEEptEv>
 860e4b8:	8b 58 10             	mov    0x10(%eax),%ebx
 860e4bb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860e4be:	89 04 24             	mov    %eax,(%esp)
 860e4c1:	e8 80 a7 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860e4c6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860e4ca:	89 04 24             	mov    %eax,(%esp)
 860e4cd:	e8 84 a7 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860e4d2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860e4d5:	89 04 24             	mov    %eax,(%esp)
 860e4d8:	e8 19 32 00 00       	call   86116f6 <_ZNSt17_Rb_tree_iteratorISt4pairIKi17STDungeonInoutCntEEppEv>
 860e4dd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860e4e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 860e4e4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860e4e7:	89 04 24             	mov    %eax,(%esp)
 860e4ea:	e8 ff 30 00 00       	call   86115ee <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17STDungeonInoutCntEEneERKS4_>
 860e4ef:	84 c0                	test   %al,%al
 860e4f1:	0f 85 6d ff ff ff    	jne    860e464 <_ZN19CDungeonEntranceLog26InsertDungeonEntrance_HourEv+0xd6>
 860e4f7:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 860e4fc:	8d 55 ec             	lea    -0x14(%ebp),%edx
 860e4ff:	89 54 24 08          	mov    %edx,0x8(%esp)
 860e503:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 860e50a:	00 
 860e50b:	89 04 24             	mov    %eax,(%esp)
 860e50e:	e8 cb 2a f6 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 860e513:	8b 55 08             	mov    0x8(%ebp),%edx
 860e516:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 860e519:	89 54 24 04          	mov    %edx,0x4(%esp)
 860e51d:	89 04 24             	mov    %eax,(%esp)
 860e520:	e8 ab 31 00 00       	call   86116d0 <_ZNSt3mapIi17STDungeonInoutCntSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 860e525:	83 ec 04             	sub    $0x4,%esp
 860e528:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 860e52b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 860e52e:	eb 1d                	jmp    860e54d <_ZN19CDungeonEntranceLog26InsertDungeonEntrance_HourEv+0x1bf>
 860e530:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860e533:	89 04 24             	mov    %eax,(%esp)
 860e536:	e8 c7 30 00 00       	call   8611602 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17STDungeonInoutCntEEptEv>
 860e53b:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 860e542:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860e545:	89 04 24             	mov    %eax,(%esp)
 860e548:	e8 a9 31 00 00       	call   86116f6 <_ZNSt17_Rb_tree_iteratorISt4pairIKi17STDungeonInoutCntEEppEv>
 860e54d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860e550:	89 44 24 04          	mov    %eax,0x4(%esp)
 860e554:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860e557:	89 04 24             	mov    %eax,(%esp)
 860e55a:	e8 8f 30 00 00       	call   86115ee <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17STDungeonInoutCntEEneERKS4_>
 860e55f:	84 c0                	test   %al,%al
 860e561:	75 cd                	jne    860e530 <_ZN19CDungeonEntranceLog26InsertDungeonEntrance_HourEv+0x1a2>
 860e563:	bb 01 00 00 00       	mov    $0x1,%ebx
 860e568:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860e56b:	89 04 24             	mov    %eax,(%esp)
 860e56e:	e8 5f e3 00 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860e573:	eb 1b                	jmp    860e590 <_ZN19CDungeonEntranceLog26InsertDungeonEntrance_HourEv+0x202>
 860e575:	89 d3                	mov    %edx,%ebx
 860e577:	89 c6                	mov    %eax,%esi
 860e579:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860e57c:	89 04 24             	mov    %eax,(%esp)
 860e57f:	e8 4e e3 00 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860e584:	89 f0                	mov    %esi,%eax
 860e586:	89 da                	mov    %ebx,%edx
 860e588:	89 04 24             	mov    %eax,(%esp)
 860e58b:	e8 c0 51 4d 00       	call   8ae3750 <_Unwind_Resume>
 860e590:	89 d8                	mov    %ebx,%eax
 860e592:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860e595:	83 c4 00             	add    $0x0,%esp
 860e598:	5b                   	pop    %ebx
 860e599:	5e                   	pop    %esi
 860e59a:	5d                   	pop    %ebp
 860e59b:	c3                   	ret

```

```c
// CDungeonEntranceLog::InsertDungeonEntrance_Hour @ 0x860e38e

/* CDungeonEntranceLog::InsertDungeonEntrance_Hour() */

undefined4 __thiscall CDungeonEntranceLog::InsertDungeonEntrance_Hour(CDungeonEntranceLog *this)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_30 [4];
  map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
  local_20 [4];
  undefined4 local_1c;
  CStreamGuard local_18 [8];
  int local_10;
  
  local_10 = std::
             map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
             ::size((map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
                     *)this);
  if (0 < local_10) {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Statistics.cpp",0x4b5);
    CStreamGuard::CStreamGuard(local_18,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0860e3fe to 0860e54c has its CatchHandler @ 0860e575 */
    CStreamGuard::operator<<(pCVar3,0xe1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,-1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,local_10);
    std::
    map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
    ::begin((map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
             *)&local_1c);
    std::
    map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
    ::end(local_20);
    while (cVar1 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator!=
                             ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)&local_1c
                              ,(_Rb_tree_iterator *)local_20), cVar1 != '\0') {
      piVar4 = (int *)std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)
                                 &local_1c);
      iVar5 = *piVar4;
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
      CStreamGuard::operator<<(pCVar3,iVar5);
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)&local_1c);
      iVar5 = *(int *)(iVar5 + 0xc);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
      CStreamGuard::operator<<(pCVar3,iVar5);
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)&local_1c);
      iVar5 = *(int *)(iVar5 + 0x10);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
      CStreamGuard::operator<<(pCVar3,iVar5);
      std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)&local_1c);
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_18);
    std::
    map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
    ::begin((map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
             *)local_30);
    local_1c = local_30[0];
    while (cVar1 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator!=
                             ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)&local_1c
                              ,(_Rb_tree_iterator *)local_20), cVar1 != '\0') {
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)&local_1c);
      *(undefined4 *)(iVar5 + 0xc) = 0;
      std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)&local_1c);
    }
    CStreamGuard::~CStreamGuard(local_18);
  }
  return 1;
}

```

