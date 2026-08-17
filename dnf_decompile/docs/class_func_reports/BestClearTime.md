# BestClearTime

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## BestClearTime

```asm
// === 080c851c BestClearTime::BestClearTime  [0x080c851c-0x80c8595] ===
 80c851c:	55                   	push   %ebp
 80c851d:	89 e5                	mov    %esp,%ebp
 80c851f:	56                   	push   %esi
 80c8520:	53                   	push   %ebx
 80c8521:	83 ec 10             	sub    $0x10,%esp
 80c8524:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8527:	89 04 24             	mov    %eax,(%esp)
 80c852a:	e8 8b 07 00 00       	call   80c8cba <_ZN13charac_expand5CDataC1Ev>
 80c852f:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8532:	c7 00 28 68 b2 08    	movl   $0x8b26828,(%eax)
 80c8538:	8b 45 08             	mov    0x8(%ebp),%eax
 80c853b:	83 c0 08             	add    $0x8,%eax
 80c853e:	89 04 24             	mov    %eax,(%esp)
 80c8541:	e8 96 07 00 00       	call   80c8cdc <_ZNSt3mapIi30SIG_BEST_CLEAR_TIME_DIFFICULTYSt4lessIiESaISt4pairIKiS0_EEEC1Ev>
 80c8546:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8549:	83 c0 08             	add    $0x8,%eax
 80c854c:	89 04 24             	mov    %eax,(%esp)
 80c854f:	e8 02 08 00 00       	call   80c8d56 <_ZNSt3mapIi30SIG_BEST_CLEAR_TIME_DIFFICULTYSt4lessIiESaISt4pairIKiS0_EEE5clearEv>
 80c8554:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8557:	c6 40 20 00          	movb   $0x0,0x20(%eax)
 80c855b:	83 c4 10             	add    $0x10,%esp
 80c855e:	5b                   	pop    %ebx
 80c855f:	5e                   	pop    %esi
 80c8560:	5d                   	pop    %ebp
 80c8561:	c3                   	ret
 80c8562:	89 d3                	mov    %edx,%ebx
 80c8564:	89 c6                	mov    %eax,%esi
 80c8566:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8569:	83 c0 08             	add    $0x8,%eax
 80c856c:	89 04 24             	mov    %eax,(%esp)
 80c856f:	e8 54 07 00 00       	call   80c8cc8 <_ZNSt3mapIi30SIG_BEST_CLEAR_TIME_DIFFICULTYSt4lessIiESaISt4pairIKiS0_EEED1Ev>
 80c8574:	89 f0                	mov    %esi,%eax
 80c8576:	89 da                	mov    %ebx,%edx
 80c8578:	eb 00                	jmp    80c857a <_ZN13BestClearTimeC1Ev+0x5e>
 80c857a:	89 d3                	mov    %edx,%ebx
 80c857c:	89 c6                	mov    %eax,%esi
 80c857e:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8581:	89 04 24             	mov    %eax,(%esp)
 80c8584:	e8 59 06 00 00       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 80c8589:	89 f0                	mov    %esi,%eax
 80c858b:	89 da                	mov    %ebx,%edx
 80c858d:	89 04 24             	mov    %eax,(%esp)
 80c8590:	e8 bb b1 a1 00       	call   8ae3750 <_Unwind_Resume>
 80c8595:	90                   	nop

```

```c
// BestClearTime::BestClearTime @ 0x80c851c

/* BestClearTime::BestClearTime() */

void __thiscall BestClearTime::BestClearTime(BestClearTime *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08b26828;
                    /* try { // try from 080c8541 to 080c8545 has its CatchHandler @ 080c857a */
  std::
  map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
  ::map((map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
         *)(this + 8));
                    /* try { // try from 080c854f to 080c8553 has its CatchHandler @ 080c8562 */
  std::
  map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
  ::clear((map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
           *)(this + 8));
  this[0x20] = (BestClearTime)0x0;
  return;
}

```

---

## _reset

```asm
// === 080c8758 BestClearTime::_reset  [0x080c8758-0x80c8775] ===
 80c8758:	55                   	push   %ebp
 80c8759:	89 e5                	mov    %esp,%ebp
 80c875b:	83 ec 18             	sub    $0x18,%esp
 80c875e:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8761:	83 c0 08             	add    $0x8,%eax
 80c8764:	89 04 24             	mov    %eax,(%esp)
 80c8767:	e8 ea 05 00 00       	call   80c8d56 <_ZNSt3mapIi30SIG_BEST_CLEAR_TIME_DIFFICULTYSt4lessIiESaISt4pairIKiS0_EEE5clearEv>
 80c876c:	8b 45 08             	mov    0x8(%ebp),%eax
 80c876f:	c6 40 20 00          	movb   $0x0,0x20(%eax)
 80c8773:	c9                   	leave
 80c8774:	c3                   	ret
 80c8775:	90                   	nop

```

```c
// BestClearTime::_reset @ 0x80c8758

/* BestClearTime::_reset() */

void __thiscall BestClearTime::_reset(BestClearTime *this)

{
  std::
  map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
  ::clear((map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
           *)(this + 8));
  this[0x20] = (BestClearTime)0x0;
  return;
}

```

---

## _saveData

```asm
// === 080c8616 BestClearTime::_saveData  [0x080c8616-0x80c8757] ===
 80c8616:	55                   	push   %ebp
 80c8617:	89 e5                	mov    %esp,%ebp
 80c8619:	56                   	push   %esi
 80c861a:	53                   	push   %ebx
 80c861b:	83 ec 20             	sub    $0x20,%esp
 80c861e:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 80c8623:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 80c862a:	00 
 80c862b:	c7 44 24 04 00 5c b2 	movl   $0x8b25c00,0x4(%esp)
 80c8632:	08 
 80c8633:	89 04 24             	mov    %eax,(%esp)
 80c8636:	e8 27 7c 1c 00       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 80c863b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 80c8642:	00 
 80c8643:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c8647:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80c864a:	89 04 24             	mov    %eax,(%esp)
 80c864d:	e8 d4 05 00 00       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 80c8652:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80c8655:	89 04 24             	mov    %eax,(%esp)
 80c8658:	e8 e9 05 00 00       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80c865d:	c7 44 24 04 00 03 00 	movl   $0x300,0x4(%esp)
 80c8664:	00 
 80c8665:	89 04 24             	mov    %eax,(%esp)
 80c8668:	e8 e9 05 00 00       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80c866d:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c8670:	89 04 24             	mov    %eax,(%esp)
 80c8673:	e8 1e 06 00 00       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 80c8678:	89 c3                	mov    %eax,%ebx
 80c867a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80c867d:	89 04 24             	mov    %eax,(%esp)
 80c8680:	e8 c1 05 00 00       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80c8685:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80c8689:	89 04 24             	mov    %eax,(%esp)
 80c868c:	e8 c5 05 00 00       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80c8691:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80c8694:	89 04 24             	mov    %eax,(%esp)
 80c8697:	e8 b2 05 00 00       	call   80c8c4e <_ZN12CStreamGuardptEv>
 80c869c:	89 04 24             	mov    %eax,(%esp)
 80c869f:	e8 c6 06 00 00       	call   80c8d6a <_ZN12CStreamGuard11GetInBufferI19SIG_BEST_CLEAR_TIMEEEPT_v>
 80c86a4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80c86a7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80c86ab:	75 0a                	jne    80c86b7 <_ZN13BestClearTime9_saveDataEP5CUser+0xa1>
 80c86ad:	bb 00 00 00 00       	mov    $0x0,%ebx
 80c86b2:	e9 8c 00 00 00       	jmp    80c8743 <_ZN13BestClearTime9_saveDataEP5CUser+0x12d>
 80c86b7:	c7 44 24 08 c8 5d 00 	movl   $0x5dc8,0x8(%esp)
 80c86be:	00 
 80c86bf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80c86c6:	00 
 80c86c7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c86ca:	89 04 24             	mov    %eax,(%esp)
 80c86cd:	e8 ee 55 fb ff       	call   807dcc0 <memset@plt>
 80c86d2:	8b 45 08             	mov    0x8(%ebp),%eax
 80c86d5:	8b 00                	mov    (%eax),%eax
 80c86d7:	83 c0 08             	add    $0x8,%eax
 80c86da:	8b 10                	mov    (%eax),%edx
 80c86dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c86df:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c86e3:	8b 45 08             	mov    0x8(%ebp),%eax
 80c86e6:	89 04 24             	mov    %eax,(%esp)
 80c86e9:	ff d2                	call   *%edx
 80c86eb:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 80c86f2:	ff 
 80c86f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c86f6:	89 04 24             	mov    %eax,(%esp)
 80c86f9:	e8 a2 58 58 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 80c86fe:	89 c2                	mov    %eax,%edx
 80c8700:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c8703:	89 10                	mov    %edx,(%eax)
 80c8705:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 80c870a:	8d 55 ec             	lea    -0x14(%ebp),%edx
 80c870d:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c8711:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 80c8718:	00 
 80c8719:	89 04 24             	mov    %eax,(%esp)
 80c871c:	e8 bd 88 4a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 80c8721:	bb 01 00 00 00       	mov    $0x1,%ebx
 80c8726:	eb 1b                	jmp    80c8743 <_ZN13BestClearTime9_saveDataEP5CUser+0x12d>
 80c8728:	89 d3                	mov    %edx,%ebx
 80c872a:	89 c6                	mov    %eax,%esi
 80c872c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80c872f:	89 04 24             	mov    %eax,(%esp)
 80c8732:	e8 9b 41 55 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80c8737:	89 f0                	mov    %esi,%eax
 80c8739:	89 da                	mov    %ebx,%edx
 80c873b:	89 04 24             	mov    %eax,(%esp)
 80c873e:	e8 0d b0 a1 00       	call   8ae3750 <_Unwind_Resume>
 80c8743:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80c8746:	89 04 24             	mov    %eax,(%esp)
 80c8749:	e8 84 41 55 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80c874e:	89 d8                	mov    %ebx,%eax
 80c8750:	83 c4 20             	add    $0x20,%esp
 80c8753:	5b                   	pop    %ebx
 80c8754:	5e                   	pop    %esi
 80c8755:	5d                   	pop    %ebp
 80c8756:	c3                   	ret
 80c8757:	90                   	nop

```

```c
// BestClearTime::_saveData @ 0x80c8616

/* BestClearTime::_saveData(CUser*) */

bool __thiscall BestClearTime::_saveData(BestClearTime *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  CStreamGuard local_18 [8];
  SIG_BEST_CLEAR_TIME *local_10;
  
  pSVar1 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"BestClearTime.cpp",0x16);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 080c8668 to 080c8720 has its CatchHandler @ 080c8728 */
  CStreamGuard::operator<<(pCVar2,0x300);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_BEST_CLEAR_TIME>(pCVar2);
  bVar5 = local_10 != (SIG_BEST_CLEAR_TIME *)0x0;
  if (bVar5) {
    memset(local_10,0,0x5dc8);
    (**(code **)(*(int *)this + 8))(this,local_10);
    uVar4 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)local_10 = uVar4;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return bVar5;
}

```

---

## checkNewRecord

```asm
// === 080c8b5c BestClearTime::checkNewRecord  [0x080c8b5c-0x80c8b67] ===
 80c8b5c:	55                   	push   %ebp
 80c8b5d:	89 e5                	mov    %esp,%ebp
 80c8b5f:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8b62:	0f b6 40 20          	movzbl 0x20(%eax),%eax
 80c8b66:	5d                   	pop    %ebp
 80c8b67:	c3                   	ret

```

```c
// BestClearTime::checkNewRecord @ 0x80c8b5c

/* BestClearTime::checkNewRecord() */

BestClearTime __thiscall BestClearTime::checkNewRecord(BestClearTime *this)

{
  return this[0x20];
}

```

---

## getBestClearTime

```asm
// === 080c8ac0 BestClearTime::getBestClearTime  [0x080c8ac0-0x80c8b43] ===
 80c8ac0:	55                   	push   %ebp
 80c8ac1:	89 e5                	mov    %esp,%ebp
 80c8ac3:	83 ec 28             	sub    $0x28,%esp
 80c8ac6:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8ac9:	8d 48 08             	lea    0x8(%eax),%ecx
 80c8acc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80c8acf:	8d 55 0c             	lea    0xc(%ebp),%edx
 80c8ad2:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c8ad6:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80c8ada:	89 04 24             	mov    %eax,(%esp)
 80c8add:	e8 dc 03 00 00       	call   80c8ebe <_ZNSt3mapIi30SIG_BEST_CLEAR_TIME_DIFFICULTYSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 80c8ae2:	83 ec 04             	sub    $0x4,%esp
 80c8ae5:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8ae8:	8d 50 08             	lea    0x8(%eax),%edx
 80c8aeb:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80c8aee:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c8af2:	89 04 24             	mov    %eax,(%esp)
 80c8af5:	e8 f0 03 00 00       	call   80c8eea <_ZNSt3mapIi30SIG_BEST_CLEAR_TIME_DIFFICULTYSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 80c8afa:	83 ec 04             	sub    $0x4,%esp
 80c8afd:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80c8b00:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c8b04:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80c8b07:	89 04 24             	mov    %eax,(%esp)
 80c8b0a:	e8 01 04 00 00       	call   80c8f10 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi30SIG_BEST_CLEAR_TIME_DIFFICULTYEEeqERKS4_>
 80c8b0f:	84 c0                	test   %al,%al
 80c8b11:	75 06                	jne    80c8b19 <_ZN13BestClearTime16getBestClearTimeEii+0x59>
 80c8b13:	83 7d 10 04          	cmpl   $0x4,0x10(%ebp)
 80c8b17:	7e 07                	jle    80c8b20 <_ZN13BestClearTime16getBestClearTimeEii+0x60>
 80c8b19:	b8 01 00 00 00       	mov    $0x1,%eax
 80c8b1e:	eb 05                	jmp    80c8b25 <_ZN13BestClearTime16getBestClearTimeEii+0x65>
 80c8b20:	b8 00 00 00 00       	mov    $0x0,%eax
 80c8b25:	84 c0                	test   %al,%al
 80c8b27:	74 07                	je     80c8b30 <_ZN13BestClearTime16getBestClearTimeEii+0x70>
 80c8b29:	b8 00 00 00 00       	mov    $0x0,%eax
 80c8b2e:	eb 12                	jmp    80c8b42 <_ZN13BestClearTime16getBestClearTimeEii+0x82>
 80c8b30:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80c8b33:	89 04 24             	mov    %eax,(%esp)
 80c8b36:	e8 e9 03 00 00       	call   80c8f24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi30SIG_BEST_CLEAR_TIME_DIFFICULTYEEptEv>
 80c8b3b:	8b 55 10             	mov    0x10(%ebp),%edx
 80c8b3e:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 80c8b42:	c9                   	leave
 80c8b43:	c3                   	ret

```

```c
// BestClearTime::getBestClearTime @ 0x80c8ac0

/* BestClearTime::getBestClearTime(int, int) */

undefined4 __thiscall BestClearTime::getBestClearTime(BestClearTime *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  _Rb_tree_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>> local_14 [4];
  map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
  local_10 [12];
  
  std::
  map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
  ::find((int *)local_14);
  std::
  map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
  ::end(local_10);
  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>::operator==
                    (local_14,(_Rb_tree_iterator *)local_10);
  if ((cVar2 == '\0') && (param_2 < 5)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    iVar4 = std::_Rb_tree_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>::operator->
                      (local_14);
    uVar3 = *(undefined4 *)(iVar4 + 4 + param_2 * 4);
  }
  return uVar3;
}

```

---

## getData

```asm
// === 080c883c BestClearTime::getData  [0x080c883c-0x80c8927] ===
 80c883c:	55                   	push   %ebp
 80c883d:	89 e5                	mov    %esp,%ebp
 80c883f:	53                   	push   %ebx
 80c8840:	83 ec 24             	sub    $0x24,%esp
 80c8843:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c8846:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80c8849:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80c8850:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8853:	8d 50 08             	lea    0x8(%eax),%edx
 80c8856:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80c8859:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c885d:	89 04 24             	mov    %eax,(%esp)
 80c8860:	e8 cd 05 00 00       	call   80c8e32 <_ZNKSt3mapIi30SIG_BEST_CLEAR_TIME_DIFFICULTYSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 80c8865:	83 ec 04             	sub    $0x4,%esp
 80c8868:	eb 7b                	jmp    80c88e5 <_ZNK13BestClearTime7getDataEPc+0xa9>
 80c886a:	81 7d f4 e7 03 00 00 	cmpl   $0x3e7,-0xc(%ebp)
 80c8871:	0f 8f ab 00 00 00    	jg     80c8922 <_ZNK13BestClearTime7getDataEPc+0xe6>
 80c8877:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 80c887a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80c887d:	89 04 24             	mov    %eax,(%esp)
 80c8880:	e8 0d 06 00 00       	call   80c8e92 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi30SIG_BEST_CLEAR_TIME_DIFFICULTYEEptEv>
 80c8885:	8b 08                	mov    (%eax),%ecx
 80c8887:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80c888a:	89 d8                	mov    %ebx,%eax
 80c888c:	01 c0                	add    %eax,%eax
 80c888e:	01 d8                	add    %ebx,%eax
 80c8890:	c1 e0 03             	shl    $0x3,%eax
 80c8893:	89 4c 10 08          	mov    %ecx,0x8(%eax,%edx,1)
 80c8897:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 80c889a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80c889d:	89 04 24             	mov    %eax,(%esp)
 80c88a0:	e8 ed 05 00 00       	call   80c8e92 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi30SIG_BEST_CLEAR_TIME_DIFFICULTYEEptEv>
 80c88a5:	89 c2                	mov    %eax,%edx
 80c88a7:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 80c88aa:	89 d8                	mov    %ebx,%eax
 80c88ac:	01 c0                	add    %eax,%eax
 80c88ae:	01 d8                	add    %ebx,%eax
 80c88b0:	c1 e0 03             	shl    $0x3,%eax
 80c88b3:	8b 5a 04             	mov    0x4(%edx),%ebx
 80c88b6:	89 5c 08 0c          	mov    %ebx,0xc(%eax,%ecx,1)
 80c88ba:	8b 5a 08             	mov    0x8(%edx),%ebx
 80c88bd:	89 5c 08 10          	mov    %ebx,0x10(%eax,%ecx,1)
 80c88c1:	8b 5a 0c             	mov    0xc(%edx),%ebx
 80c88c4:	89 5c 08 14          	mov    %ebx,0x14(%eax,%ecx,1)
 80c88c8:	8b 5a 10             	mov    0x10(%edx),%ebx
 80c88cb:	89 5c 08 18          	mov    %ebx,0x18(%eax,%ecx,1)
 80c88cf:	8b 52 14             	mov    0x14(%edx),%edx
 80c88d2:	89 54 08 1c          	mov    %edx,0x1c(%eax,%ecx,1)
 80c88d6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80c88d9:	89 04 24             	mov    %eax,(%esp)
 80c88dc:	e8 bf 05 00 00       	call   80c8ea0 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKi30SIG_BEST_CLEAR_TIME_DIFFICULTYEEppEv>
 80c88e1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80c88e5:	8b 45 08             	mov    0x8(%ebp),%eax
 80c88e8:	8d 50 08             	lea    0x8(%eax),%edx
 80c88eb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80c88ee:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c88f2:	89 04 24             	mov    %eax,(%esp)
 80c88f5:	e8 5e 05 00 00       	call   80c8e58 <_ZNKSt3mapIi30SIG_BEST_CLEAR_TIME_DIFFICULTYSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 80c88fa:	83 ec 04             	sub    $0x4,%esp
 80c88fd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80c8900:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c8904:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80c8907:	89 04 24             	mov    %eax,(%esp)
 80c890a:	e8 6f 05 00 00       	call   80c8e7e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi30SIG_BEST_CLEAR_TIME_DIFFICULTYEEneERKS4_>
 80c890f:	84 c0                	test   %al,%al
 80c8911:	0f 85 53 ff ff ff    	jne    80c886a <_ZNK13BestClearTime7getDataEPc+0x2e>
 80c8917:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80c891a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80c891d:	89 50 04             	mov    %edx,0x4(%eax)
 80c8920:	eb 01                	jmp    80c8923 <_ZNK13BestClearTime7getDataEPc+0xe7>
 80c8922:	90                   	nop
 80c8923:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 80c8926:	c9                   	leave
 80c8927:	c3                   	ret

```

```c
// BestClearTime::getData @ 0x80c883c

/* BestClearTime::getData(char*) const */

void __thiscall BestClearTime::getData(BestClearTime *this,char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
  local_1c [4];
  map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
  local_18 [4];
  char *local_14;
  int local_10;
  
  local_14 = param_1;
  local_10 = 0;
  std::
  map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>::
            operator!=((_Rb_tree_const_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>
                        *)local_1c,(_Rb_tree_const_iterator *)local_18);
    iVar3 = local_10;
    if (cVar1 == '\0') {
      *(int *)(local_14 + 4) = local_10;
      return;
    }
    if (999 < local_10) break;
    puVar2 = (undefined4 *)
             std::_Rb_tree_const_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>::
             operator->((_Rb_tree_const_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>
                         *)local_1c);
    iVar4 = local_10;
    *(undefined4 *)(local_14 + iVar3 * 0x18 + 8) = *puVar2;
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>::
            operator->((_Rb_tree_const_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>
                        *)local_1c);
    iVar4 = iVar4 * 0x18;
    *(undefined4 *)(local_14 + iVar4 + 0xc) = *(undefined4 *)(iVar3 + 4);
    *(undefined4 *)(local_14 + iVar4 + 0x10) = *(undefined4 *)(iVar3 + 8);
    *(undefined4 *)(local_14 + iVar4 + 0x14) = *(undefined4 *)(iVar3 + 0xc);
    *(undefined4 *)(local_14 + iVar4 + 0x18) = *(undefined4 *)(iVar3 + 0x10);
    *(undefined4 *)(local_14 + iVar4 + 0x1c) = *(undefined4 *)(iVar3 + 0x14);
    std::_Rb_tree_const_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>::operator++
              ((_Rb_tree_const_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>> *)
               local_1c);
    local_10 = local_10 + 1;
  }
  return;
}

```

---

## loadData

```asm
// === 080c8776 BestClearTime::loadData  [0x080c8776-0x80c883b] ===
 80c8776:	55                   	push   %ebp
 80c8777:	89 e5                	mov    %esp,%ebp
 80c8779:	83 ec 58             	sub    $0x58,%esp
 80c877c:	8b 45 08             	mov    0x8(%ebp),%eax
 80c877f:	8b 00                	mov    (%eax),%eax
 80c8781:	83 c0 1c             	add    $0x1c,%eax
 80c8784:	8b 10                	mov    (%eax),%edx
 80c8786:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8789:	89 04 24             	mov    %eax,(%esp)
 80c878c:	ff d2                	call   *%edx
 80c878e:	8b 45 10             	mov    0x10(%ebp),%eax
 80c8791:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80c8794:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80c879b:	eb 6f                	jmp    80c880c <_ZN13BestClearTime8loadDataEP5CUserPc+0x96>
 80c879d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80c87a0:	89 d0                	mov    %edx,%eax
 80c87a2:	01 c0                	add    %eax,%eax
 80c87a4:	01 d0                	add    %edx,%eax
 80c87a6:	c1 e0 03             	shl    $0x3,%eax
 80c87a9:	03 45 f0             	add    -0x10(%ebp),%eax
 80c87ac:	8d 48 0c             	lea    0xc(%eax),%ecx
 80c87af:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80c87b2:	89 d0                	mov    %edx,%eax
 80c87b4:	01 c0                	add    %eax,%eax
 80c87b6:	01 d0                	add    %edx,%eax
 80c87b8:	c1 e0 03             	shl    $0x3,%eax
 80c87bb:	03 45 f0             	add    -0x10(%ebp),%eax
 80c87be:	8d 50 08             	lea    0x8(%eax),%edx
 80c87c1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80c87c4:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 80c87c8:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c87cc:	89 04 24             	mov    %eax,(%esp)
 80c87cf:	e8 ab 05 00 00       	call   80c8d7f <_ZSt9make_pairIRiR30SIG_BEST_CLEAR_TIME_DIFFICULTYESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 80c87d4:	83 ec 04             	sub    $0x4,%esp
 80c87d7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80c87da:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c87de:	8d 45 c0             	lea    -0x40(%ebp),%eax
 80c87e1:	89 04 24             	mov    %eax,(%esp)
 80c87e4:	e8 d5 05 00 00       	call   80c8dbe <_ZNSt4pairIKi30SIG_BEST_CLEAR_TIME_DIFFICULTYEC1IiS1_EEOS_IT_T0_E>
 80c87e9:	8b 45 08             	mov    0x8(%ebp),%eax
 80c87ec:	8d 48 08             	lea    0x8(%eax),%ecx
 80c87ef:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80c87f2:	8d 55 c0             	lea    -0x40(%ebp),%edx
 80c87f5:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c87f9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80c87fd:	89 04 24             	mov    %eax,(%esp)
 80c8800:	e8 01 06 00 00       	call   80c8e06 <_ZNSt3mapIi30SIG_BEST_CLEAR_TIME_DIFFICULTYSt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 80c8805:	83 ec 04             	sub    $0x4,%esp
 80c8808:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80c880c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80c880f:	8b 40 04             	mov    0x4(%eax),%eax
 80c8812:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80c8815:	7e 10                	jle    80c8827 <_ZN13BestClearTime8loadDataEP5CUserPc+0xb1>
 80c8817:	81 7d f4 e7 03 00 00 	cmpl   $0x3e7,-0xc(%ebp)
 80c881e:	7f 07                	jg     80c8827 <_ZN13BestClearTime8loadDataEP5CUserPc+0xb1>
 80c8820:	b8 01 00 00 00       	mov    $0x1,%eax
 80c8825:	eb 05                	jmp    80c882c <_ZN13BestClearTime8loadDataEP5CUserPc+0xb6>
 80c8827:	b8 00 00 00 00       	mov    $0x0,%eax
 80c882c:	84 c0                	test   %al,%al
 80c882e:	0f 85 69 ff ff ff    	jne    80c879d <_ZN13BestClearTime8loadDataEP5CUserPc+0x27>
 80c8834:	b8 01 00 00 00       	mov    $0x1,%eax
 80c8839:	c9                   	leave
 80c883a:	c3                   	ret
 80c883b:	90                   	nop

```

```c
// BestClearTime::loadData @ 0x80c8776

/* BestClearTime::loadData(CUser*, char*) */

undefined4 __thiscall BestClearTime::loadData(BestClearTime *this,CUser *param_1,char *param_2)

{
  bool bVar1;
  pair local_4c [8];
  pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY> local_44 [24];
  int local_2c [6];
  char *local_14;
  int local_10;
  
  (**(code **)(*(int *)this + 0x1c))(this);
  local_14 = param_2;
  local_10 = 0;
  while( true ) {
    if ((local_10 < *(int *)(local_14 + 4)) && (local_10 < 1000)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) break;
    std::make_pair<int&,SIG_BEST_CLEAR_TIME_DIFFICULTY&>
              (local_2c,(SIG_BEST_CLEAR_TIME_DIFFICULTY *)(local_14 + local_10 * 0x18 + 8));
    std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>::pair<int,SIG_BEST_CLEAR_TIME_DIFFICULTY>
              (local_44,(pair *)local_2c);
    std::
    map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
    ::insert(local_4c);
    local_10 = local_10 + 1;
  }
  return 1;
}

```

---

## setBestClearTime

```asm
// === 080c8928 BestClearTime::setBestClearTime  [0x080c8928-0x80c8abf] ===
 80c8928:	55                   	push   %ebp
 80c8929:	89 e5                	mov    %esp,%ebp
 80c892b:	83 ec 78             	sub    $0x78,%esp
 80c892e:	83 7d 10 04          	cmpl   $0x4,0x10(%ebp)
 80c8932:	0f 8f 84 01 00 00    	jg     80c8abc <_ZN13BestClearTime16setBestClearTimeEiii+0x194>
 80c8938:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 80c893c:	79 07                	jns    80c8945 <_ZN13BestClearTime16setBestClearTimeEiii+0x1d>
 80c893e:	c7 45 14 00 00 00 00 	movl   $0x0,0x14(%ebp)
 80c8945:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8948:	8d 48 08             	lea    0x8(%eax),%ecx
 80c894b:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80c894e:	8d 55 0c             	lea    0xc(%ebp),%edx
 80c8951:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c8955:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80c8959:	89 04 24             	mov    %eax,(%esp)
 80c895c:	e8 5d 05 00 00       	call   80c8ebe <_ZNSt3mapIi30SIG_BEST_CLEAR_TIME_DIFFICULTYSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 80c8961:	83 ec 04             	sub    $0x4,%esp
 80c8964:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8967:	8d 50 08             	lea    0x8(%eax),%edx
 80c896a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80c896d:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c8971:	89 04 24             	mov    %eax,(%esp)
 80c8974:	e8 71 05 00 00       	call   80c8eea <_ZNSt3mapIi30SIG_BEST_CLEAR_TIME_DIFFICULTYSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 80c8979:	83 ec 04             	sub    $0x4,%esp
 80c897c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80c897f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c8983:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80c8986:	89 04 24             	mov    %eax,(%esp)
 80c8989:	e8 82 05 00 00       	call   80c8f10 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi30SIG_BEST_CLEAR_TIME_DIFFICULTYEEeqERKS4_>
 80c898e:	84 c0                	test   %al,%al
 80c8990:	0f 84 85 00 00 00    	je     80c8a1b <_ZN13BestClearTime16setBestClearTimeEiii+0xf3>
 80c8996:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 80c8999:	89 04 24             	mov    %eax,(%esp)
 80c899c:	e8 d1 02 00 00       	call   80c8c72 <_ZN30SIG_BEST_CLEAR_TIME_DIFFICULTYC1Ev>
 80c89a1:	8b 45 10             	mov    0x10(%ebp),%eax
 80c89a4:	8b 55 14             	mov    0x14(%ebp),%edx
 80c89a7:	89 54 85 a4          	mov    %edx,-0x5c(%ebp,%eax,4)
 80c89ab:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80c89ae:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 80c89b1:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c89b5:	8d 55 0c             	lea    0xc(%ebp),%edx
 80c89b8:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c89bc:	89 04 24             	mov    %eax,(%esp)
 80c89bf:	e8 bb 03 00 00       	call   80c8d7f <_ZSt9make_pairIRiR30SIG_BEST_CLEAR_TIME_DIFFICULTYESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 80c89c4:	83 ec 04             	sub    $0x4,%esp
 80c89c7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80c89ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c89ce:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80c89d1:	89 04 24             	mov    %eax,(%esp)
 80c89d4:	e8 e5 03 00 00       	call   80c8dbe <_ZNSt4pairIKi30SIG_BEST_CLEAR_TIME_DIFFICULTYEC1IiS1_EEOS_IT_T0_E>
 80c89d9:	8b 45 08             	mov    0x8(%ebp),%eax
 80c89dc:	8d 48 08             	lea    0x8(%eax),%ecx
 80c89df:	8d 45 c0             	lea    -0x40(%ebp),%eax
 80c89e2:	8d 55 c8             	lea    -0x38(%ebp),%edx
 80c89e5:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c89e9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80c89ed:	89 04 24             	mov    %eax,(%esp)
 80c89f0:	e8 11 04 00 00       	call   80c8e06 <_ZNSt3mapIi30SIG_BEST_CLEAR_TIME_DIFFICULTYSt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 80c89f5:	83 ec 04             	sub    $0x4,%esp
 80c89f8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80c89ff:	00 
 80c8a00:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8a03:	89 04 24             	mov    %eax,(%esp)
 80c8a06:	e8 39 01 00 00       	call   80c8b44 <_ZN13BestClearTime12setNewRecordEb>
 80c8a0b:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8a0e:	89 04 24             	mov    %eax,(%esp)
 80c8a11:	e8 ae 01 00 00       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 80c8a16:	e9 a2 00 00 00       	jmp    80c8abd <_ZN13BestClearTime16setBestClearTimeEiii+0x195>
 80c8a1b:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80c8a1e:	89 04 24             	mov    %eax,(%esp)
 80c8a21:	e8 fe 04 00 00       	call   80c8f24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi30SIG_BEST_CLEAR_TIME_DIFFICULTYEEptEv>
 80c8a26:	8b 55 10             	mov    0x10(%ebp),%edx
 80c8a29:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 80c8a2d:	85 c0                	test   %eax,%eax
 80c8a2f:	0f 94 c0             	sete   %al
 80c8a32:	84 c0                	test   %al,%al
 80c8a34:	74 35                	je     80c8a6b <_ZN13BestClearTime16setBestClearTimeEiii+0x143>
 80c8a36:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80c8a39:	89 04 24             	mov    %eax,(%esp)
 80c8a3c:	e8 e3 04 00 00       	call   80c8f24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi30SIG_BEST_CLEAR_TIME_DIFFICULTYEEptEv>
 80c8a41:	8b 55 10             	mov    0x10(%ebp),%edx
 80c8a44:	8b 4d 14             	mov    0x14(%ebp),%ecx
 80c8a47:	89 4c 90 04          	mov    %ecx,0x4(%eax,%edx,4)
 80c8a4b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80c8a52:	00 
 80c8a53:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8a56:	89 04 24             	mov    %eax,(%esp)
 80c8a59:	e8 e6 00 00 00       	call   80c8b44 <_ZN13BestClearTime12setNewRecordEb>
 80c8a5e:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8a61:	89 04 24             	mov    %eax,(%esp)
 80c8a64:	e8 5b 01 00 00       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 80c8a69:	eb 52                	jmp    80c8abd <_ZN13BestClearTime16setBestClearTimeEiii+0x195>
 80c8a6b:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80c8a6e:	89 04 24             	mov    %eax,(%esp)
 80c8a71:	e8 ae 04 00 00       	call   80c8f24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi30SIG_BEST_CLEAR_TIME_DIFFICULTYEEptEv>
 80c8a76:	8b 55 10             	mov    0x10(%ebp),%edx
 80c8a79:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 80c8a7d:	3b 45 14             	cmp    0x14(%ebp),%eax
 80c8a80:	0f 9f c0             	setg   %al
 80c8a83:	84 c0                	test   %al,%al
 80c8a85:	74 36                	je     80c8abd <_ZN13BestClearTime16setBestClearTimeEiii+0x195>
 80c8a87:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80c8a8a:	89 04 24             	mov    %eax,(%esp)
 80c8a8d:	e8 92 04 00 00       	call   80c8f24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi30SIG_BEST_CLEAR_TIME_DIFFICULTYEEptEv>
 80c8a92:	8b 55 10             	mov    0x10(%ebp),%edx
 80c8a95:	8b 4d 14             	mov    0x14(%ebp),%ecx
 80c8a98:	89 4c 90 04          	mov    %ecx,0x4(%eax,%edx,4)
 80c8a9c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80c8aa3:	00 
 80c8aa4:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8aa7:	89 04 24             	mov    %eax,(%esp)
 80c8aaa:	e8 95 00 00 00       	call   80c8b44 <_ZN13BestClearTime12setNewRecordEb>
 80c8aaf:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8ab2:	89 04 24             	mov    %eax,(%esp)
 80c8ab5:	e8 0a 01 00 00       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 80c8aba:	eb 01                	jmp    80c8abd <_ZN13BestClearTime16setBestClearTimeEiii+0x195>
 80c8abc:	90                   	nop
 80c8abd:	c9                   	leave
 80c8abe:	c3                   	ret
 80c8abf:	90                   	nop

```

```c
// BestClearTime::setBestClearTime @ 0x80c8928

/* BestClearTime::setBestClearTime(int, int, int) */

void __thiscall
BestClearTime::setBestClearTime(BestClearTime *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  SIG_BEST_CLEAR_TIME_DIFFICULTY local_60 [20];
  _Rb_tree_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>> local_4c [4];
  map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
  local_48 [4];
  pair local_44 [8];
  pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY> local_3c [24];
  int local_24 [8];
  
  if (param_2 < 5) {
    if (param_3 < 0) {
      param_3 = 0;
    }
    std::
    map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
    ::find((int *)local_4c);
    std::
    map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
    ::end(local_48);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>::operator==
                      (local_4c,(_Rb_tree_iterator *)local_48);
    if (cVar1 == '\0') {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>::
              operator->(local_4c);
      if (*(int *)(iVar2 + 4 + param_2 * 4) == 0) {
        iVar2 = std::_Rb_tree_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>::
                operator->(local_4c);
        *(int *)(iVar2 + 4 + param_2 * 4) = param_3;
        setNewRecord(this,true);
        charac_expand::CData::alter((CData *)this);
      }
      else {
        iVar2 = std::_Rb_tree_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>::
                operator->(local_4c);
        if (param_3 < *(int *)(iVar2 + 4 + param_2 * 4)) {
          iVar2 = std::_Rb_tree_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>::
                  operator->(local_4c);
          *(int *)(iVar2 + 4 + param_2 * 4) = param_3;
          setNewRecord(this,true);
          charac_expand::CData::alter((CData *)this);
        }
      }
    }
    else {
      SIG_BEST_CLEAR_TIME_DIFFICULTY::SIG_BEST_CLEAR_TIME_DIFFICULTY(local_60);
      *(int *)(local_60 + param_2 * 4) = param_3;
      std::make_pair<int&,SIG_BEST_CLEAR_TIME_DIFFICULTY&>
                (local_24,(SIG_BEST_CLEAR_TIME_DIFFICULTY *)&param_1);
      std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>::pair<int,SIG_BEST_CLEAR_TIME_DIFFICULTY>
                (local_3c,(pair *)local_24);
      std::
      map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
      ::insert(local_44);
      setNewRecord(this,true);
      charac_expand::CData::alter((CData *)this);
    }
  }
  return;
}

```

---

## setNewRecord

```asm
// === 080c8b44 BestClearTime::setNewRecord  [0x080c8b44-0x80c8b5b] ===
 80c8b44:	55                   	push   %ebp
 80c8b45:	89 e5                	mov    %esp,%ebp
 80c8b47:	83 ec 04             	sub    $0x4,%esp
 80c8b4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c8b4d:	88 45 fc             	mov    %al,-0x4(%ebp)
 80c8b50:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8b53:	0f b6 55 fc          	movzbl -0x4(%ebp),%edx
 80c8b57:	88 50 20             	mov    %dl,0x20(%eax)
 80c8b5a:	c9                   	leave
 80c8b5b:	c3                   	ret

```

```c
// BestClearTime::setNewRecord @ 0x80c8b44

/* BestClearTime::setNewRecord(bool) */

void __thiscall BestClearTime::setNewRecord(BestClearTime *this,bool param_1)

{
  this[0x20] = (BestClearTime)param_1;
  return;
}

```

---

## ~BestClearTime

```asm
// === 080c8596 BestClearTime::~BestClearTime  [0x080c8596-0x80c85f7] ===
 80c8596:	55                   	push   %ebp
 80c8597:	89 e5                	mov    %esp,%ebp
 80c8599:	56                   	push   %esi
 80c859a:	53                   	push   %ebx
 80c859b:	83 ec 10             	sub    $0x10,%esp
 80c859e:	8b 45 08             	mov    0x8(%ebp),%eax
 80c85a1:	c7 00 28 68 b2 08    	movl   $0x8b26828,(%eax)
 80c85a7:	8b 45 08             	mov    0x8(%ebp),%eax
 80c85aa:	83 c0 08             	add    $0x8,%eax
 80c85ad:	89 04 24             	mov    %eax,(%esp)
 80c85b0:	e8 13 07 00 00       	call   80c8cc8 <_ZNSt3mapIi30SIG_BEST_CLEAR_TIME_DIFFICULTYSt4lessIiESaISt4pairIKiS0_EEED1Ev>
 80c85b5:	eb 1b                	jmp    80c85d2 <_ZN13BestClearTimeD1Ev+0x3c>
 80c85b7:	89 d3                	mov    %edx,%ebx
 80c85b9:	89 c6                	mov    %eax,%esi
 80c85bb:	8b 45 08             	mov    0x8(%ebp),%eax
 80c85be:	89 04 24             	mov    %eax,(%esp)
 80c85c1:	e8 1c 06 00 00       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 80c85c6:	89 f0                	mov    %esi,%eax
 80c85c8:	89 da                	mov    %ebx,%edx
 80c85ca:	89 04 24             	mov    %eax,(%esp)
 80c85cd:	e8 7e b1 a1 00       	call   8ae3750 <_Unwind_Resume>
 80c85d2:	8b 45 08             	mov    0x8(%ebp),%eax
 80c85d5:	89 04 24             	mov    %eax,(%esp)
 80c85d8:	e8 05 06 00 00       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 80c85dd:	b8 00 00 00 00       	mov    $0x0,%eax
 80c85e2:	84 c0                	test   %al,%al
 80c85e4:	74 0b                	je     80c85f1 <_ZN13BestClearTimeD1Ev+0x5b>
 80c85e6:	8b 45 08             	mov    0x8(%ebp),%eax
 80c85e9:	89 04 24             	mov    %eax,(%esp)
 80c85ec:	e8 ff be 65 00       	call   87244f0 <_ZdlPv>
 80c85f1:	83 c4 10             	add    $0x10,%esp
 80c85f4:	5b                   	pop    %ebx
 80c85f5:	5e                   	pop    %esi
 80c85f6:	5d                   	pop    %ebp
 80c85f7:	c3                   	ret

```

```c
// BestClearTime::~BestClearTime @ 0x80c8596

/* WARNING: Removing unreachable block (ram,0x080c85e6) */
/* BestClearTime::~BestClearTime() */

void __thiscall BestClearTime::~BestClearTime(BestClearTime *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08b26828;
                    /* try { // try from 080c85b0 to 080c85b4 has its CatchHandler @ 080c85b7 */
  std::
  map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
  ::~map((map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
          *)(this + 8));
  charac_expand::CData::~CData((CData *)this);
  return;
}

```

---

## ~BestClearTime_080c85f8

```asm
// === 080c85f8 BestClearTime::~BestClearTime  [0x080c85f8-0x80c8615] ===
 80c85f8:	55                   	push   %ebp
 80c85f9:	89 e5                	mov    %esp,%ebp
 80c85fb:	83 ec 18             	sub    $0x18,%esp
 80c85fe:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8601:	89 04 24             	mov    %eax,(%esp)
 80c8604:	e8 8d ff ff ff       	call   80c8596 <_ZN13BestClearTimeD1Ev>
 80c8609:	8b 45 08             	mov    0x8(%ebp),%eax
 80c860c:	89 04 24             	mov    %eax,(%esp)
 80c860f:	e8 dc be 65 00       	call   87244f0 <_ZdlPv>
 80c8614:	c9                   	leave
 80c8615:	c3                   	ret

```

```c
// BestClearTime::~BestClearTime @ 0x80c85f8

/* BestClearTime::~BestClearTime() */

void __thiscall BestClearTime::~BestClearTime(BestClearTime *this)

{
  ~BestClearTime(this);
  operator_delete(this);
  return;
}

```

