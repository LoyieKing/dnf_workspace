# disconnect_detecter__CDisconnectDetecter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## DoDetectingDisconnect

```asm
// === 084724b0 disconnect_detecter::CDisconnectDetecter::DoDetectingDisconnect  [0x084724b0-0x84725b9] ===
 84724b0:	55                   	push   %ebp
 84724b1:	89 e5                	mov    %esp,%ebp
 84724b3:	53                   	push   %ebx
 84724b4:	83 ec 24             	sub    $0x24,%esp
 84724b7:	8b 55 08             	mov    0x8(%ebp),%edx
 84724ba:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84724bd:	89 54 24 04          	mov    %edx,0x4(%esp)
 84724c1:	89 04 24             	mov    %eax,(%esp)
 84724c4:	e8 07 03 00 00       	call   84727d0 <_ZNSt3mapIN19disconnect_detecter17DetectedObjectKeyEiSt4lessIS1_ESaISt4pairIKS1_iEEE5beginEv>
 84724c9:	83 ec 04             	sub    $0x4,%esp
 84724cc:	e9 a6 00 00 00       	jmp    8472577 <_ZN19disconnect_detecter19CDisconnectDetecter21DoDetectingDisconnectEv+0xc7>
 84724d1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84724d4:	89 04 24             	mov    %eax,(%esp)
 84724d7:	e8 e6 02 00 00       	call   84727c2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN19disconnect_detecter17DetectedObjectKeyEiEEptEv>
 84724dc:	8b 40 08             	mov    0x8(%eax),%eax
 84724df:	89 44 24 04          	mov    %eax,0x4(%esp)
 84724e3:	8b 45 08             	mov    0x8(%ebp),%eax
 84724e6:	89 04 24             	mov    %eax,(%esp)
 84724e9:	e8 06 fd ff ff       	call   84721f4 <_ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi>
 84724ee:	84 c0                	test   %al,%al
 84724f0:	74 7a                	je     847256c <_ZN19disconnect_detecter19CDisconnectDetecter21DoDetectingDisconnectEv+0xbc>
 84724f2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84724f5:	89 04 24             	mov    %eax,(%esp)
 84724f8:	e8 c5 02 00 00       	call   84727c2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN19disconnect_detecter17DetectedObjectKeyEiEEptEv>
 84724fd:	8b 58 04             	mov    0x4(%eax),%ebx
 8472500:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8472503:	89 04 24             	mov    %eax,(%esp)
 8472506:	e8 b7 02 00 00       	call   84727c2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN19disconnect_detecter17DetectedObjectKeyEiEEptEv>
 847250b:	8b 00                	mov    (%eax),%eax
 847250d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8472511:	89 44 24 04          	mov    %eax,0x4(%esp)
 8472515:	8b 45 08             	mov    0x8(%ebp),%eax
 8472518:	89 04 24             	mov    %eax,(%esp)
 847251b:	e8 02 fd ff ff       	call   8472222 <_ZN19disconnect_detecter19CDisconnectDetecter8_GetUserEii>
 8472520:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8472523:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8472527:	74 12                	je     847253b <_ZN19disconnect_detecter19CDisconnectDetecter21DoDetectingDisconnectEv+0x8b>
 8472529:	8b 45 f4             	mov    -0xc(%ebp),%eax
 847252c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8472530:	8b 45 08             	mov    0x8(%ebp),%eax
 8472533:	89 04 24             	mov    %eax,(%esp)
 8472536:	e8 7f 00 00 00       	call   84725ba <_ZN19disconnect_detecter19CDisconnectDetecter12OnDisconnectEP5CUser>
 847253b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 847253e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8472545:	00 
 8472546:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8472549:	89 54 24 04          	mov    %edx,0x4(%esp)
 847254d:	89 04 24             	mov    %eax,(%esp)
 8472550:	e8 a1 02 00 00       	call   84727f6 <_ZNSt17_Rb_tree_iteratorISt4pairIKN19disconnect_detecter17DetectedObjectKeyEiEEppEi>
 8472555:	83 ec 04             	sub    $0x4,%esp
 8472558:	8b 45 08             	mov    0x8(%ebp),%eax
 847255b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 847255e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8472562:	89 04 24             	mov    %eax,(%esp)
 8472565:	e8 3e 02 00 00       	call   84727a8 <_ZNSt3mapIN19disconnect_detecter17DetectedObjectKeyEiSt4lessIS1_ESaISt4pairIKS1_iEEE5eraseESt17_Rb_tree_iteratorIS6_E>
 847256a:	eb 0b                	jmp    8472577 <_ZN19disconnect_detecter19CDisconnectDetecter21DoDetectingDisconnectEv+0xc7>
 847256c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 847256f:	89 04 24             	mov    %eax,(%esp)
 8472572:	e8 bd 02 00 00       	call   8472834 <_ZNSt17_Rb_tree_iteratorISt4pairIKN19disconnect_detecter17DetectedObjectKeyEiEEppEv>
 8472577:	8b 55 08             	mov    0x8(%ebp),%edx
 847257a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 847257d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8472581:	89 04 24             	mov    %eax,(%esp)
 8472584:	e8 e5 01 00 00       	call   847276e <_ZNSt3mapIN19disconnect_detecter17DetectedObjectKeyEiSt4lessIS1_ESaISt4pairIKS1_iEEE3endEv>
 8472589:	83 ec 04             	sub    $0x4,%esp
 847258c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 847258f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8472593:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8472596:	89 04 24             	mov    %eax,(%esp)
 8472599:	e8 f6 01 00 00       	call   8472794 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN19disconnect_detecter17DetectedObjectKeyEiEEneERKS5_>
 847259e:	84 c0                	test   %al,%al
 84725a0:	0f 85 2b ff ff ff    	jne    84724d1 <_ZN19disconnect_detecter19CDisconnectDetecter21DoDetectingDisconnectEv+0x21>
 84725a6:	8b 45 08             	mov    0x8(%ebp),%eax
 84725a9:	89 04 24             	mov    %eax,(%esp)
 84725ac:	e8 a1 02 00 00       	call   8472852 <_ZNKSt3mapIN19disconnect_detecter17DetectedObjectKeyEiSt4lessIS1_ESaISt4pairIKS1_iEEE5emptyEv>
 84725b1:	83 f0 01             	xor    $0x1,%eax
 84725b4:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 84725b7:	c9                   	leave
 84725b8:	c3                   	ret
 84725b9:	90                   	nop

```

```c
// disconnect_detecter::CDisconnectDetecter::DoDetectingDisconnect @ 0x84724b0

/* disconnect_detecter::CDisconnectDetecter::DoDetectingDisconnect() */

uint __thiscall
disconnect_detecter::CDisconnectDetecter::DoDetectingDisconnect(CDisconnectDetecter *this)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
  local_1c [4];
  map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
  local_18 [4];
  undefined4 local_14;
  CUser *local_10;
  
  std::
  map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>::
            operator!=((_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>
                        *)local_1c,(_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>::
            operator->((_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>
                        *)local_1c);
    cVar1 = _IsTimeout(this,*(int *)(iVar2 + 8));
    if (cVar1 == '\0') {
      std::_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>::
      operator++((_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>> *)
                 local_1c);
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>::
              operator->((_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>
                          *)local_1c);
      iVar2 = *(int *)(iVar2 + 4);
      piVar3 = (int *)std::
                      _Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>
                      ::operator->((_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>
                                    *)local_1c);
      local_10 = (CUser *)_GetUser(this,*piVar3,iVar2);
      if (local_10 != (CUser *)0x0) {
        OnDisconnect(this,local_10);
      }
      uVar5 = 0;
      std::_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>::
      operator++((_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>> *)
                 &local_14,(int)local_1c);
      std::
      map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
      ::erase((map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
               *)this,local_14,uVar5);
    }
  }
  uVar4 = std::
          map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
          ::empty((map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
                   *)this);
  return uVar4 ^ 1;
}

```

---

## OnDisconnect

```asm
// === 084725ba disconnect_detecter::CDisconnectDetecter::OnDisconnect  [0x084725ba-0x84725cc] ===
 84725ba:	55                   	push   %ebp
 84725bb:	89 e5                	mov    %esp,%ebp
 84725bd:	83 ec 18             	sub    $0x18,%esp
 84725c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84725c3:	89 04 24             	mov    %eax,(%esp)
 84725c6:	e8 03 df 20 00       	call   86804ce <_ZN5CUser12OnDisconnectEv>
 84725cb:	c9                   	leave
 84725cc:	c3                   	ret

```

```c
// disconnect_detecter::CDisconnectDetecter::OnDisconnect @ 0x84725ba

/* disconnect_detecter::CDisconnectDetecter::OnDisconnect(CUser*) */

void __thiscall
disconnect_detecter::CDisconnectDetecter::OnDisconnect(CDisconnectDetecter *this,CUser *param_1)

{
  CUser::OnDisconnect(param_1);
  return;
}

```

---

## RefreshRecvTime

```asm
// === 08472408 disconnect_detecter::CDisconnectDetecter::RefreshRecvTime  [0x08472408-0x84724af] ===
 8472408:	55                   	push   %ebp
 8472409:	89 e5                	mov    %esp,%ebp
 847240b:	53                   	push   %ebx
 847240c:	83 ec 24             	sub    $0x24,%esp
 847240f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8472412:	89 04 24             	mov    %eax,(%esp)
 8472415:	e8 62 7f c6 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 847241a:	0f b7 d8             	movzwl %ax,%ebx
 847241d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8472420:	89 04 24             	mov    %eax,(%esp)
 8472423:	e8 6e 68 c5 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8472428:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847242c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8472430:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8472433:	89 04 24             	mov    %eax,(%esp)
 8472436:	e8 33 02 00 00       	call   847266e <_ZN19disconnect_detecter17DetectedObjectKeyC1Eii>
 847243b:	8b 55 08             	mov    0x8(%ebp),%edx
 847243e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8472441:	8d 4d ec             	lea    -0x14(%ebp),%ecx
 8472444:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8472448:	89 54 24 04          	mov    %edx,0x4(%esp)
 847244c:	89 04 24             	mov    %eax,(%esp)
 847244f:	e8 ee 02 00 00       	call   8472742 <_ZNSt3mapIN19disconnect_detecter17DetectedObjectKeyEiSt4lessIS1_ESaISt4pairIKS1_iEEE4findERS5_>
 8472454:	83 ec 04             	sub    $0x4,%esp
 8472457:	8b 55 08             	mov    0x8(%ebp),%edx
 847245a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 847245d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8472461:	89 04 24             	mov    %eax,(%esp)
 8472464:	e8 05 03 00 00       	call   847276e <_ZNSt3mapIN19disconnect_detecter17DetectedObjectKeyEiSt4lessIS1_ESaISt4pairIKS1_iEEE3endEv>
 8472469:	83 ec 04             	sub    $0x4,%esp
 847246c:	8d 45 f4             	lea    -0xc(%ebp),%eax
 847246f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8472473:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8472476:	89 04 24             	mov    %eax,(%esp)
 8472479:	e8 16 03 00 00       	call   8472794 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN19disconnect_detecter17DetectedObjectKeyEiEEneERKS5_>
 847247e:	84 c0                	test   %al,%al
 8472480:	74 23                	je     84724a5 <_ZN19disconnect_detecter19CDisconnectDetecter15RefreshRecvTimeEP5CUser+0x9d>
 8472482:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8472485:	89 04 24             	mov    %eax,(%esp)
 8472488:	e8 35 03 00 00       	call   84727c2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN19disconnect_detecter17DetectedObjectKeyEiEEptEv>
 847248d:	89 c3                	mov    %eax,%ebx
 847248f:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8472496:	e8 03 98 c5 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 847249b:	89 43 08             	mov    %eax,0x8(%ebx)
 847249e:	b8 01 00 00 00       	mov    $0x1,%eax
 84724a3:	eb 05                	jmp    84724aa <_ZN19disconnect_detecter19CDisconnectDetecter15RefreshRecvTimeEP5CUser+0xa2>
 84724a5:	b8 00 00 00 00       	mov    $0x0,%eax
 84724aa:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 84724ad:	c9                   	leave
 84724ae:	c3                   	ret
 84724af:	90                   	nop

```

```c
// disconnect_detecter::CDisconnectDetecter::RefreshRecvTime @ 0x8472408

/* disconnect_detecter::CDisconnectDetecter::RefreshRecvTime(CUser*) */

bool __thiscall
disconnect_detecter::CDisconnectDetecter::RefreshRecvTime(CDisconnectDetecter *this,CUser *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  DetectedObjectKey local_1c [4];
  DetectedObjectKey local_18 [8];
  map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
  local_10 [8];
  
  uVar2 = CUser::get_unique_id(param_1);
  iVar3 = CUser::GetUID(param_1);
  DetectedObjectKey::DetectedObjectKey(local_18,iVar3,uVar2 & 0xffff);
  std::
  map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
  ::find(local_1c);
  std::
  map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>::
          operator!=((_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>
                      *)local_1c,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>::
            operator->((_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>
                        *)local_1c);
    uVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    *(undefined4 *)(iVar3 + 8) = uVar4;
  }
  return cVar1 != '\0';
}

```

---

## RegisterUser

```asm
// === 08472272 disconnect_detecter::CDisconnectDetecter::RegisterUser  [0x08472272-0x8472369] ===
 8472272:	55                   	push   %ebp
 8472273:	89 e5                	mov    %esp,%ebp
 8472275:	53                   	push   %ebx
 8472276:	83 ec 54             	sub    $0x54,%esp
 8472279:	8b 45 08             	mov    0x8(%ebp),%eax
 847227c:	89 04 24             	mov    %eax,(%esp)
 847227f:	e8 00 04 00 00       	call   8472684 <_ZNKSt3mapIN19disconnect_detecter17DetectedObjectKeyEiSt4lessIS1_ESaISt4pairIKS1_iEEE4sizeEv>
 8472284:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8472287:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 847228e:	e8 0b 9a c5 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8472293:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8472296:	8b 45 0c             	mov    0xc(%ebp),%eax
 8472299:	89 04 24             	mov    %eax,(%esp)
 847229c:	e8 db 80 c6 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 84722a1:	0f b7 d8             	movzwl %ax,%ebx
 84722a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84722a7:	89 04 24             	mov    %eax,(%esp)
 84722aa:	e8 e7 69 c5 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84722af:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84722b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84722b7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84722ba:	89 04 24             	mov    %eax,(%esp)
 84722bd:	e8 ac 03 00 00       	call   847266e <_ZN19disconnect_detecter17DetectedObjectKeyC1Eii>
 84722c2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84722c5:	8d 55 d8             	lea    -0x28(%ebp),%edx
 84722c8:	89 54 24 08          	mov    %edx,0x8(%esp)
 84722cc:	8d 55 dc             	lea    -0x24(%ebp),%edx
 84722cf:	89 54 24 04          	mov    %edx,0x4(%esp)
 84722d3:	89 04 24             	mov    %eax,(%esp)
 84722d6:	e8 bc 03 00 00       	call   8472697 <_ZSt9make_pairIN19disconnect_detecter17DetectedObjectKeyElESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 84722db:	83 ec 04             	sub    $0x4,%esp
 84722de:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84722e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84722e5:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84722e8:	89 04 24             	mov    %eax,(%esp)
 84722eb:	e8 ea 03 00 00       	call   84726da <_ZNSt4pairIKN19disconnect_detecter17DetectedObjectKeyEiEC1IS1_lEEOS_IT_T0_E>
 84722f0:	8b 55 08             	mov    0x8(%ebp),%edx
 84722f3:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84722f6:	8d 4d c0             	lea    -0x40(%ebp),%ecx
 84722f9:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84722fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8472301:	89 04 24             	mov    %eax,(%esp)
 8472304:	e8 0d 04 00 00       	call   8472716 <_ZNSt3mapIN19disconnect_detecter17DetectedObjectKeyEiSt4lessIS1_ESaISt4pairIKS1_iEEE6insertERKS6_>
 8472309:	83 ec 04             	sub    $0x4,%esp
 847230c:	0f b6 45 bc          	movzbl -0x44(%ebp),%eax
 8472310:	83 f0 01             	xor    $0x1,%eax
 8472313:	84 c0                	test   %al,%al
 8472315:	74 3d                	je     8472354 <_ZN19disconnect_detecter19CDisconnectDetecter12RegisterUserEP5CUser+0xe2>
 8472317:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 847231e:	00 
 847231f:	c7 44 24 08 25 00 00 	movl   $0x25,0x8(%esp)
 8472326:	00 
 8472327:	c7 44 24 04 20 f2 c6 	movl   $0x8c6f220,0x4(%esp)
 847232e:	08 
 847232f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8472332:	89 04 24             	mov    %eax,(%esp)
 8472335:	e8 de d3 0d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 847233a:	c7 44 24 04 00 e6 c6 	movl   $0x8c6e600,0x4(%esp)
 8472341:	08 
 8472342:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8472345:	89 04 24             	mov    %eax,(%esp)
 8472348:	e8 3b d4 0d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 847234d:	b8 00 00 00 00       	mov    $0x0,%eax
 8472352:	eb 10                	jmp    8472364 <_ZN19disconnect_detecter19CDisconnectDetecter12RegisterUserEP5CUser+0xf2>
 8472354:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8472358:	75 05                	jne    847235f <_ZN19disconnect_detecter19CDisconnectDetecter12RegisterUserEP5CUser+0xed>
 847235a:	e8 81 51 1c 00       	call   86374e0 <_ZN21TimerDetectDisconnect15registNextTimerEv>
 847235f:	b8 01 00 00 00       	mov    $0x1,%eax
 8472364:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8472367:	c9                   	leave
 8472368:	c3                   	ret
 8472369:	90                   	nop

```

```c
// disconnect_detecter::CDisconnectDetecter::RegisterUser @ 0x8472272

/* disconnect_detecter::CDisconnectDetecter::RegisterUser(CUser*) */

undefined4 __thiscall
disconnect_detecter::CDisconnectDetecter::RegisterUser(CDisconnectDetecter *this,CUser *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  pair local_4c [4];
  char local_48;
  pair<disconnect_detecter::DetectedObjectKey_const,int> local_44 [12];
  DetectedObjectKey local_38 [12];
  undefined4 local_2c;
  DetectedObjectKey local_28 [8];
  cMyTrace local_20 [16];
  int local_10;
  
  local_10 = std::
             map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
             ::size((map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
                     *)this);
  local_2c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  uVar1 = CUser::get_unique_id(param_1);
  iVar2 = CUser::GetUID(param_1);
  DetectedObjectKey::DetectedObjectKey(local_28,iVar2,uVar1 & 0xffff);
  std::make_pair<disconnect_detecter::DetectedObjectKey,long>(local_38,(long *)local_28);
  std::pair<disconnect_detecter::DetectedObjectKey_const,int>::
  pair<disconnect_detecter::DetectedObjectKey,long>(local_44,local_38);
  std::
  map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
  ::insert(local_4c);
  if (local_48 == '\x01') {
    if (local_10 == 0) {
      TimerDetectDisconnect::registNextTimer();
    }
    uVar3 = 1;
  }
  else {
    cMyTrace::cMyTrace(local_20,
                       "bool disconnect_detecter::CDisconnectDetecter::RegisterUser(CUser*)",0x25,0)
    ;
    cMyTrace::operator()(local_20,"RegisterUser() wrong");
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## UnregisterUser

```asm
// === 0847236a disconnect_detecter::CDisconnectDetecter::UnregisterUser  [0x0847236a-0x8472407] ===
 847236a:	55                   	push   %ebp
 847236b:	89 e5                	mov    %esp,%ebp
 847236d:	53                   	push   %ebx
 847236e:	83 ec 24             	sub    $0x24,%esp
 8472371:	8b 45 0c             	mov    0xc(%ebp),%eax
 8472374:	89 04 24             	mov    %eax,(%esp)
 8472377:	e8 00 80 c6 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 847237c:	0f b7 d8             	movzwl %ax,%ebx
 847237f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8472382:	89 04 24             	mov    %eax,(%esp)
 8472385:	e8 0c 69 c5 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 847238a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847238e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8472392:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8472395:	89 04 24             	mov    %eax,(%esp)
 8472398:	e8 d1 02 00 00       	call   847266e <_ZN19disconnect_detecter17DetectedObjectKeyC1Eii>
 847239d:	8b 55 08             	mov    0x8(%ebp),%edx
 84723a0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84723a3:	8d 4d ec             	lea    -0x14(%ebp),%ecx
 84723a6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84723aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 84723ae:	89 04 24             	mov    %eax,(%esp)
 84723b1:	e8 8c 03 00 00       	call   8472742 <_ZNSt3mapIN19disconnect_detecter17DetectedObjectKeyEiSt4lessIS1_ESaISt4pairIKS1_iEEE4findERS5_>
 84723b6:	83 ec 04             	sub    $0x4,%esp
 84723b9:	8b 55 08             	mov    0x8(%ebp),%edx
 84723bc:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84723bf:	89 54 24 04          	mov    %edx,0x4(%esp)
 84723c3:	89 04 24             	mov    %eax,(%esp)
 84723c6:	e8 a3 03 00 00       	call   847276e <_ZNSt3mapIN19disconnect_detecter17DetectedObjectKeyEiSt4lessIS1_ESaISt4pairIKS1_iEEE3endEv>
 84723cb:	83 ec 04             	sub    $0x4,%esp
 84723ce:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84723d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84723d5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84723d8:	89 04 24             	mov    %eax,(%esp)
 84723db:	e8 b4 03 00 00       	call   8472794 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN19disconnect_detecter17DetectedObjectKeyEiEEneERKS5_>
 84723e0:	84 c0                	test   %al,%al
 84723e2:	74 19                	je     84723fd <_ZN19disconnect_detecter19CDisconnectDetecter14UnregisterUserEP5CUser+0x93>
 84723e4:	8b 45 08             	mov    0x8(%ebp),%eax
 84723e7:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84723ea:	89 54 24 04          	mov    %edx,0x4(%esp)
 84723ee:	89 04 24             	mov    %eax,(%esp)
 84723f1:	e8 b2 03 00 00       	call   84727a8 <_ZNSt3mapIN19disconnect_detecter17DetectedObjectKeyEiSt4lessIS1_ESaISt4pairIKS1_iEEE5eraseESt17_Rb_tree_iteratorIS6_E>
 84723f6:	b8 01 00 00 00       	mov    $0x1,%eax
 84723fb:	eb 05                	jmp    8472402 <_ZN19disconnect_detecter19CDisconnectDetecter14UnregisterUserEP5CUser+0x98>
 84723fd:	b8 00 00 00 00       	mov    $0x0,%eax
 8472402:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8472405:	c9                   	leave
 8472406:	c3                   	ret
 8472407:	90                   	nop

```

```c
// disconnect_detecter::CDisconnectDetecter::UnregisterUser @ 0x847236a

/* disconnect_detecter::CDisconnectDetecter::UnregisterUser(CUser*) */

bool __thiscall
disconnect_detecter::CDisconnectDetecter::UnregisterUser(CDisconnectDetecter *this,CUser *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  DetectedObjectKey *pDVar4;
  undefined4 local_1c;
  DetectedObjectKey local_18 [8];
  map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
  local_10 [8];
  
  uVar2 = CUser::get_unique_id(param_1);
  iVar3 = CUser::GetUID(param_1);
  DetectedObjectKey::DetectedObjectKey(local_18,iVar3,uVar2 & 0xffff);
  pDVar4 = local_18;
  std::
  map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
  ::find((DetectedObjectKey *)&local_1c);
  std::
  map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>::
          operator!=((_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>
                      *)&local_1c,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    std::
    map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
    ::erase((map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
             *)this,local_1c,pDVar4);
  }
  return cVar1 != '\0';
}

```

---

## _GetUser

```asm
// === 08472222 disconnect_detecter::CDisconnectDetecter::_GetUser  [0x08472222-0x8472271] ===
 8472222:	55                   	push   %ebp
 8472223:	89 e5                	mov    %esp,%ebp
 8472225:	83 ec 28             	sub    $0x28,%esp
 8472228:	e8 61 9f c5 ff       	call   80cc18e <_Z14G_CGameManagerv>
 847222d:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8472234:	00 
 8472235:	8b 55 0c             	mov    0xc(%ebp),%edx
 8472238:	89 54 24 04          	mov    %edx,0x4(%esp)
 847223c:	89 04 24             	mov    %eax,(%esp)
 847223f:	e8 60 25 e2 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 8472244:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8472247:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 847224b:	74 1f                	je     847226c <_ZN19disconnect_detecter19CDisconnectDetecter8_GetUserEii+0x4a>
 847224d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8472250:	89 04 24             	mov    %eax,(%esp)
 8472253:	e8 24 81 c6 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8472258:	0f b7 c0             	movzwl %ax,%eax
 847225b:	3b 45 10             	cmp    0x10(%ebp),%eax
 847225e:	0f 95 c0             	setne  %al
 8472261:	84 c0                	test   %al,%al
 8472263:	74 07                	je     847226c <_ZN19disconnect_detecter19CDisconnectDetecter8_GetUserEii+0x4a>
 8472265:	b8 00 00 00 00       	mov    $0x0,%eax
 847226a:	eb 03                	jmp    847226f <_ZN19disconnect_detecter19CDisconnectDetecter8_GetUserEii+0x4d>
 847226c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 847226f:	c9                   	leave
 8472270:	c3                   	ret
 8472271:	90                   	nop

```

```c
// disconnect_detecter::CDisconnectDetecter::_GetUser @ 0x8472222

/* disconnect_detecter::CDisconnectDetecter::_GetUser(int, int) */

CUser * __thiscall
disconnect_detecter::CDisconnectDetecter::_GetUser
          (CDisconnectDetecter *this,int param_1,int param_2)

{
  int iVar1;
  CUser *this_00;
  uint uVar2;
  
  iVar1 = G_CGameManager();
  this_00 = (CUser *)CGameManager::getUser(iVar1,param_1);
  if ((this_00 != (CUser *)0x0) &&
     (uVar2 = CUser::get_unique_id(this_00), (uVar2 & 0xffff) != param_2)) {
    this_00 = (CUser *)0x0;
  }
  return this_00;
}

```

---

## _IsTimeout

```asm
// === 084721f4 disconnect_detecter::CDisconnectDetecter::_IsTimeout  [0x084721f4-0x8472221] ===
 84721f4:	55                   	push   %ebp
 84721f5:	89 e5                	mov    %esp,%ebp
 84721f7:	83 ec 18             	sub    $0x18,%esp
 84721fa:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8472201:	e8 98 9a c5 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8472206:	2b 45 0c             	sub    0xc(%ebp),%eax
 8472209:	83 f8 1e             	cmp    $0x1e,%eax
 847220c:	0f 9f c0             	setg   %al
 847220f:	84 c0                	test   %al,%al
 8472211:	74 07                	je     847221a <_ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x26>
 8472213:	b8 01 00 00 00       	mov    $0x1,%eax
 8472218:	eb 05                	jmp    847221f <_ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x2b>
 847221a:	b8 00 00 00 00       	mov    $0x0,%eax
 847221f:	c9                   	leave
 8472220:	c3                   	ret
 8472221:	90                   	nop

```

```c
// disconnect_detecter::CDisconnectDetecter::_IsTimeout @ 0x84721f4

/* disconnect_detecter::CDisconnectDetecter::_IsTimeout(int) */

bool __thiscall
disconnect_detecter::CDisconnectDetecter::_IsTimeout(CDisconnectDetecter *this,int param_1)

{
  int iVar1;
  
  iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  return 0x1e < iVar1 - param_1;
}

```

