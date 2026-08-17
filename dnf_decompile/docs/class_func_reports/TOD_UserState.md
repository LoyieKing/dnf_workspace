# TOD_UserState

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 15

---

## ClearLayer

```asm
// === 0864390e TOD_UserState::ClearLayer  [0x0864390e-0x8643941] ===
 864390e:	55                   	push   %ebp
 864390f:	89 e5                	mov    %esp,%ebp
 8643911:	83 ec 18             	sub    $0x18,%esp
 8643914:	8b 45 08             	mov    0x8(%ebp),%eax
 8643917:	89 04 24             	mov    %eax,(%esp)
 864391a:	e8 a5 52 a8 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 864391f:	8b 45 08             	mov    0x8(%ebp),%eax
 8643922:	83 c0 14             	add    $0x14,%eax
 8643925:	89 04 24             	mov    %eax,(%esp)
 8643928:	e8 f7 ae fb ff       	call   85fe824 <_ZN9TOD_Layer13increaseLayerEv>
 864392d:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8643934:	e8 65 83 a8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8643939:	8b 55 08             	mov    0x8(%ebp),%edx
 864393c:	89 42 1c             	mov    %eax,0x1c(%edx)
 864393f:	c9                   	leave
 8643940:	c3                   	ret
 8643941:	90                   	nop

```

```c
// TOD_UserState::ClearLayer @ 0x864390e

/* TOD_UserState::ClearLayer() */

void __thiscall TOD_UserState::ClearLayer(TOD_UserState *this)

{
  undefined4 uVar1;
  
  charac_expand::CData::alter((CData *)this);
  TOD_Layer::increaseLayer((TOD_Layer *)(this + 0x14));
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0x1c) = uVar1;
  return;
}

```

---

## IncreaseEnterCount

```asm
// === 0864388a TOD_UserState::IncreaseEnterCount  [0x0864388a-0x86438fb] ===
 864388a:	55                   	push   %ebp
 864388b:	89 e5                	mov    %esp,%ebp
 864388d:	83 ec 18             	sub    $0x18,%esp
 8643890:	8b 45 08             	mov    0x8(%ebp),%eax
 8643893:	8b 40 10             	mov    0x10(%eax),%eax
 8643896:	8d 50 01             	lea    0x1(%eax),%edx
 8643899:	8b 45 08             	mov    0x8(%ebp),%eax
 864389c:	89 50 10             	mov    %edx,0x10(%eax)
 864389f:	8b 45 08             	mov    0x8(%ebp),%eax
 86438a2:	0f b7 40 16          	movzwl 0x16(%eax),%eax
 86438a6:	83 c0 01             	add    $0x1,%eax
 86438a9:	89 c2                	mov    %eax,%edx
 86438ab:	8b 45 08             	mov    0x8(%ebp),%eax
 86438ae:	66 89 50 16          	mov    %dx,0x16(%eax)
 86438b2:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86438b9:	e8 e0 83 a8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86438be:	8b 55 08             	mov    0x8(%ebp),%edx
 86438c1:	89 42 18             	mov    %eax,0x18(%edx)
 86438c4:	8b 45 08             	mov    0x8(%ebp),%eax
 86438c7:	83 c0 14             	add    $0x14,%eax
 86438ca:	89 04 24             	mov    %eax,(%esp)
 86438cd:	e8 6e b3 be ff       	call   822ec40 <_ZNK9TOD_Layer8GetLayerEv>
 86438d2:	66 85 c0             	test   %ax,%ax
 86438d5:	0f 94 c0             	sete   %al
 86438d8:	84 c0                	test   %al,%al
 86438da:	74 12                	je     86438ee <_ZN13TOD_UserState18IncreaseEnterCountEv+0x64>
 86438dc:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86438e3:	e8 b6 83 a8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86438e8:	8b 55 08             	mov    0x8(%ebp),%edx
 86438eb:	89 42 0c             	mov    %eax,0xc(%edx)
 86438ee:	8b 45 08             	mov    0x8(%ebp),%eax
 86438f1:	89 04 24             	mov    %eax,(%esp)
 86438f4:	e8 cb 52 a8 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 86438f9:	c9                   	leave
 86438fa:	c3                   	ret
 86438fb:	90                   	nop

```

```c
// TOD_UserState::IncreaseEnterCount @ 0x864388a

/* TOD_UserState::IncreaseEnterCount() */

void __thiscall TOD_UserState::IncreaseEnterCount(TOD_UserState *this)

{
  short sVar1;
  undefined4 uVar2;
  
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  *(short *)(this + 0x16) = *(short *)(this + 0x16) + 1;
  uVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0x18) = uVar2;
  sVar1 = TOD_Layer::GetLayer((TOD_Layer *)(this + 0x14));
  if (sVar1 == 0) {
    uVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    *(undefined4 *)(this + 0xc) = uVar2;
  }
  charac_expand::CData::alter((CData *)this);
  return;
}

```

---

## ResetDaily

```asm
// === 08643624 TOD_UserState::ResetDaily  [0x08643624-0x8643641] ===
 8643624:	55                   	push   %ebp
 8643625:	89 e5                	mov    %esp,%ebp
 8643627:	83 ec 18             	sub    $0x18,%esp
 864362a:	8b 45 08             	mov    0x8(%ebp),%eax
 864362d:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 8643634:	8b 45 08             	mov    0x8(%ebp),%eax
 8643637:	89 04 24             	mov    %eax,(%esp)
 864363a:	e8 85 55 a8 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 864363f:	c9                   	leave
 8643640:	c3                   	ret
 8643641:	90                   	nop

```

```c
// TOD_UserState::ResetDaily @ 0x8643624

/* TOD_UserState::ResetDaily() */

void __thiscall TOD_UserState::ResetDaily(TOD_UserState *this)

{
  *(undefined4 *)(this + 0x10) = 0;
  charac_expand::CData::alter((CData *)this);
  return;
}

```

---

## TOD_UserState

```asm
// === 08643460 TOD_UserState::TOD_UserState  [0x08643460-0x86434ad] ===
 8643460:	55                   	push   %ebp
 8643461:	89 e5                	mov    %esp,%ebp
 8643463:	56                   	push   %esi
 8643464:	53                   	push   %ebx
 8643465:	83 ec 10             	sub    $0x10,%esp
 8643468:	8b 45 08             	mov    0x8(%ebp),%eax
 864346b:	89 04 24             	mov    %eax,(%esp)
 864346e:	e8 47 58 a8 ff       	call   80c8cba <_ZN13charac_expand5CDataC1Ev>
 8643473:	8b 45 08             	mov    0x8(%ebp),%eax
 8643476:	c7 00 08 c6 ce 08    	movl   $0x8cec608,(%eax)
 864347c:	8b 45 08             	mov    0x8(%ebp),%eax
 864347f:	83 c0 08             	add    $0x8,%eax
 8643482:	89 04 24             	mov    %eax,(%esp)
 8643485:	e8 de ea e4 ff       	call   8491f68 <_ZN26SIG_REQUEST_TOD_USER_STATEC1Ev>
 864348a:	eb 1b                	jmp    86434a7 <_ZN13TOD_UserStateC1Ev+0x47>
 864348c:	89 d3                	mov    %edx,%ebx
 864348e:	89 c6                	mov    %eax,%esi
 8643490:	8b 45 08             	mov    0x8(%ebp),%eax
 8643493:	89 04 24             	mov    %eax,(%esp)
 8643496:	e8 47 57 a8 ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 864349b:	89 f0                	mov    %esi,%eax
 864349d:	89 da                	mov    %ebx,%edx
 864349f:	89 04 24             	mov    %eax,(%esp)
 86434a2:	e8 a9 02 4a 00       	call   8ae3750 <_Unwind_Resume>
 86434a7:	83 c4 10             	add    $0x10,%esp
 86434aa:	5b                   	pop    %ebx
 86434ab:	5e                   	pop    %esi
 86434ac:	5d                   	pop    %ebp
 86434ad:	c3                   	ret

```

```c
// TOD_UserState::TOD_UserState @ 0x8643460

/* TOD_UserState::TOD_UserState() */

void __thiscall TOD_UserState::TOD_UserState(TOD_UserState *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08cec608;
                    /* try { // try from 08643485 to 08643489 has its CatchHandler @ 0864348c */
  SIG_REQUEST_TOD_USER_STATE::SIG_REQUEST_TOD_USER_STATE((SIG_REQUEST_TOD_USER_STATE *)(this + 8));
  return;
}

```

---

## _reset

```asm
// === 086437ec TOD_UserState::_reset  [0x086437ec-0x864383d] ===
 86437ec:	55                   	push   %ebp
 86437ed:	89 e5                	mov    %esp,%ebp
 86437ef:	83 ec 18             	sub    $0x18,%esp
 86437f2:	8b 45 08             	mov    0x8(%ebp),%eax
 86437f5:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 86437fc:	8b 45 08             	mov    0x8(%ebp),%eax
 86437ff:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8643806:	8b 45 08             	mov    0x8(%ebp),%eax
 8643809:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 8643810:	8b 45 08             	mov    0x8(%ebp),%eax
 8643813:	83 c0 14             	add    $0x14,%eax
 8643816:	89 04 24             	mov    %eax,(%esp)
 8643819:	e8 34 b0 fb ff       	call   85fe852 <_ZN9TOD_Layer10resetLayerEv>
 864381e:	8b 45 08             	mov    0x8(%ebp),%eax
 8643821:	66 c7 40 16 00 00    	movw   $0x0,0x16(%eax)
 8643827:	8b 45 08             	mov    0x8(%ebp),%eax
 864382a:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 8643831:	8b 45 08             	mov    0x8(%ebp),%eax
 8643834:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 864383b:	c9                   	leave
 864383c:	c3                   	ret
 864383d:	90                   	nop

```

```c
// TOD_UserState::_reset @ 0x86437ec

/* TOD_UserState::_reset() */

void __thiscall TOD_UserState::_reset(TOD_UserState *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  TOD_Layer::resetLayer((TOD_Layer *)(this + 0x14));
  *(undefined2 *)(this + 0x16) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}

```

---

## _saveData

```asm
// === 08643642 TOD_UserState::_saveData  [0x08643642-0x86437eb] ===
 8643642:	55                   	push   %ebp
 8643643:	89 e5                	mov    %esp,%ebp
 8643645:	56                   	push   %esi
 8643646:	53                   	push   %ebx
 8643647:	83 ec 20             	sub    $0x20,%esp
 864364a:	a1 54 f7 41 09       	mov    0x941f754,%eax
 864364f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8643652:	8b 45 0c             	mov    0xc(%ebp),%eax
 8643655:	89 04 24             	mov    %eax,(%esp)
 8643658:	e8 5b 6c a9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 864365d:	89 c3                	mov    %eax,%ebx
 864365f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8643662:	89 04 24             	mov    %eax,(%esp)
 8643665:	e8 b4 03 00 00       	call   8643a1e <_ZN17TowerOfDespairMgr8GetMinLvEv>
 864366a:	0f b7 c0             	movzwl %ax,%eax
 864366d:	39 c3                	cmp    %eax,%ebx
 864366f:	0f 9c c0             	setl   %al
 8643672:	84 c0                	test   %al,%al
 8643674:	74 0a                	je     8643680 <_ZN13TOD_UserState9_saveDataEP5CUser+0x3e>
 8643676:	bb 01 00 00 00       	mov    $0x1,%ebx
 864367b:	e9 63 01 00 00       	jmp    86437e3 <_ZN13TOD_UserState9_saveDataEP5CUser+0x1a1>
 8643680:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8643685:	c7 44 24 08 58 00 00 	movl   $0x58,0x8(%esp)
 864368c:	00 
 864368d:	c7 44 24 04 e3 b9 ce 	movl   $0x8ceb9e3,0x4(%esp)
 8643694:	08 
 8643695:	89 04 24             	mov    %eax,(%esp)
 8643698:	e8 e9 c3 c4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 864369d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 86436a4:	00 
 86436a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 86436a9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86436ac:	89 04 24             	mov    %eax,(%esp)
 86436af:	e8 72 55 a8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 86436b4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86436b7:	89 04 24             	mov    %eax,(%esp)
 86436ba:	e8 87 55 a8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 86436bf:	c7 44 24 04 78 02 00 	movl   $0x278,0x4(%esp)
 86436c6:	00 
 86436c7:	89 04 24             	mov    %eax,(%esp)
 86436ca:	e8 87 55 a8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 86436cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 86436d2:	89 04 24             	mov    %eax,(%esp)
 86436d5:	e8 bc 55 a8 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 86436da:	89 c3                	mov    %eax,%ebx
 86436dc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86436df:	89 04 24             	mov    %eax,(%esp)
 86436e2:	e8 5f 55 a8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 86436e7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86436eb:	89 04 24             	mov    %eax,(%esp)
 86436ee:	e8 63 55 a8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 86436f3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86436f6:	89 04 24             	mov    %eax,(%esp)
 86436f9:	e8 50 55 a8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 86436fe:	89 04 24             	mov    %eax,(%esp)
 8643701:	e8 28 03 00 00       	call   8643a2e <_ZN12CStreamGuard11GetInBufferI26SIG_REQUEST_TOD_USER_STATEEEPT_v>
 8643706:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8643709:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 864370d:	75 0a                	jne    8643719 <_ZN13TOD_UserState9_saveDataEP5CUser+0xd7>
 864370f:	bb 00 00 00 00       	mov    $0x0,%ebx
 8643714:	e9 bf 00 00 00       	jmp    86437d8 <_ZN13TOD_UserState9_saveDataEP5CUser+0x196>
 8643719:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 8643720:	00 
 8643721:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8643728:	00 
 8643729:	8b 45 f4             	mov    -0xc(%ebp),%eax
 864372c:	89 04 24             	mov    %eax,(%esp)
 864372f:	e8 8c a5 a3 ff       	call   807dcc0 <memset@plt>
 8643734:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 864373b:	ff 
 864373c:	8b 45 0c             	mov    0xc(%ebp),%eax
 864373f:	89 04 24             	mov    %eax,(%esp)
 8643742:	e8 59 a8 00 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8643747:	89 c2                	mov    %eax,%edx
 8643749:	8b 45 f4             	mov    -0xc(%ebp),%eax
 864374c:	89 10                	mov    %edx,(%eax)
 864374e:	8b 45 08             	mov    0x8(%ebp),%eax
 8643751:	0f b7 50 16          	movzwl 0x16(%eax),%edx
 8643755:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8643758:	66 89 50 0e          	mov    %dx,0xe(%eax)
 864375c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 864375f:	8b 55 08             	mov    0x8(%ebp),%edx
 8643762:	0f b7 52 14          	movzwl 0x14(%edx),%edx
 8643766:	66 89 50 0c          	mov    %dx,0xc(%eax)
 864376a:	8b 45 08             	mov    0x8(%ebp),%eax
 864376d:	8b 50 0c             	mov    0xc(%eax),%edx
 8643770:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8643773:	89 50 04             	mov    %edx,0x4(%eax)
 8643776:	8b 45 08             	mov    0x8(%ebp),%eax
 8643779:	8b 50 10             	mov    0x10(%eax),%edx
 864377c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 864377f:	89 50 08             	mov    %edx,0x8(%eax)
 8643782:	8b 45 08             	mov    0x8(%ebp),%eax
 8643785:	8b 50 18             	mov    0x18(%eax),%edx
 8643788:	8b 45 f4             	mov    -0xc(%ebp),%eax
 864378b:	89 50 10             	mov    %edx,0x10(%eax)
 864378e:	8b 45 08             	mov    0x8(%ebp),%eax
 8643791:	8b 50 1c             	mov    0x1c(%eax),%edx
 8643794:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8643797:	89 50 14             	mov    %edx,0x14(%eax)
 864379a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 864379f:	8d 55 e8             	lea    -0x18(%ebp),%edx
 86437a2:	89 54 24 08          	mov    %edx,0x8(%esp)
 86437a6:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86437ad:	00 
 86437ae:	89 04 24             	mov    %eax,(%esp)
 86437b1:	e8 28 d8 f2 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 86437b6:	bb 01 00 00 00       	mov    $0x1,%ebx
 86437bb:	eb 1b                	jmp    86437d8 <_ZN13TOD_UserState9_saveDataEP5CUser+0x196>
 86437bd:	89 d3                	mov    %edx,%ebx
 86437bf:	89 c6                	mov    %eax,%esi
 86437c1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86437c4:	89 04 24             	mov    %eax,(%esp)
 86437c7:	e8 06 91 fd ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 86437cc:	89 f0                	mov    %esi,%eax
 86437ce:	89 da                	mov    %ebx,%edx
 86437d0:	89 04 24             	mov    %eax,(%esp)
 86437d3:	e8 78 ff 49 00       	call   8ae3750 <_Unwind_Resume>
 86437d8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86437db:	89 04 24             	mov    %eax,(%esp)
 86437de:	e8 ef 90 fd ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 86437e3:	89 d8                	mov    %ebx,%eax
 86437e5:	83 c4 20             	add    $0x20,%esp
 86437e8:	5b                   	pop    %ebx
 86437e9:	5e                   	pop    %esi
 86437ea:	5d                   	pop    %ebp
 86437eb:	c3                   	ret

```

```c
// TOD_UserState::_saveData @ 0x8643642

/* TOD_UserState::_saveData(CUser*) */

bool __thiscall TOD_UserState::_saveData(TOD_UserState *this,CUser *param_1)

{
  int iVar1;
  uint uVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  undefined4 uVar5;
  bool bVar6;
  CStreamGuard local_1c [8];
  TowerOfDespairMgr *local_14;
  SIG_REQUEST_TOD_USER_STATE *local_10;
  
  local_14 = GlobalData::s_pTowerOfDespairMgr;
  iVar1 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  uVar2 = TowerOfDespairMgr::GetMinLv(local_14);
  if (iVar1 < (int)(uVar2 & 0xffff)) {
    bVar6 = true;
  }
  else {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"TOD_UserState.cpp",0x58);
    CStreamGuard::CStreamGuard(local_1c,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 086436ca to 086437b5 has its CatchHandler @ 086437bd */
    CStreamGuard::operator<<(pCVar4,0x278);
    iVar1 = CUser::GetUID(param_1);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar4,iVar1);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
    local_10 = CStreamGuard::GetInBuffer<SIG_REQUEST_TOD_USER_STATE>(pCVar4);
    bVar6 = local_10 != (SIG_REQUEST_TOD_USER_STATE *)0x0;
    if (bVar6) {
      memset(local_10,0,0x18);
      uVar5 = CUser::get_charac_no(param_1,-1);
      *(undefined4 *)local_10 = uVar5;
      *(undefined2 *)(local_10 + 0xe) = *(undefined2 *)(this + 0x16);
      *(undefined2 *)(local_10 + 0xc) = *(undefined2 *)(this + 0x14);
      *(undefined4 *)(local_10 + 4) = *(undefined4 *)(this + 0xc);
      *(undefined4 *)(local_10 + 8) = *(undefined4 *)(this + 0x10);
      *(undefined4 *)(local_10 + 0x10) = *(undefined4 *)(this + 0x18);
      *(undefined4 *)(local_10 + 0x14) = *(undefined4 *)(this + 0x1c);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
    }
    CStreamGuard::~CStreamGuard(local_1c);
  }
  return bVar6;
}

```

---

## getData

```asm
// === 086435ca TOD_UserState::getData  [0x086435ca-0x8643623] ===
 86435ca:	55                   	push   %ebp
 86435cb:	89 e5                	mov    %esp,%ebp
 86435cd:	83 ec 10             	sub    $0x10,%esp
 86435d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 86435d3:	89 45 fc             	mov    %eax,-0x4(%ebp)
 86435d6:	8b 45 08             	mov    0x8(%ebp),%eax
 86435d9:	0f b7 50 16          	movzwl 0x16(%eax),%edx
 86435dd:	8b 45 fc             	mov    -0x4(%ebp),%eax
 86435e0:	66 89 50 0e          	mov    %dx,0xe(%eax)
 86435e4:	8b 45 fc             	mov    -0x4(%ebp),%eax
 86435e7:	8b 55 08             	mov    0x8(%ebp),%edx
 86435ea:	0f b7 52 14          	movzwl 0x14(%edx),%edx
 86435ee:	66 89 50 0c          	mov    %dx,0xc(%eax)
 86435f2:	8b 45 08             	mov    0x8(%ebp),%eax
 86435f5:	8b 50 0c             	mov    0xc(%eax),%edx
 86435f8:	8b 45 fc             	mov    -0x4(%ebp),%eax
 86435fb:	89 50 04             	mov    %edx,0x4(%eax)
 86435fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8643601:	8b 50 10             	mov    0x10(%eax),%edx
 8643604:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8643607:	89 50 08             	mov    %edx,0x8(%eax)
 864360a:	8b 45 08             	mov    0x8(%ebp),%eax
 864360d:	8b 50 18             	mov    0x18(%eax),%edx
 8643610:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8643613:	89 50 10             	mov    %edx,0x10(%eax)
 8643616:	8b 45 08             	mov    0x8(%ebp),%eax
 8643619:	8b 50 1c             	mov    0x1c(%eax),%edx
 864361c:	8b 45 fc             	mov    -0x4(%ebp),%eax
 864361f:	89 50 14             	mov    %edx,0x14(%eax)
 8643622:	c9                   	leave
 8643623:	c3                   	ret

```

```c
// TOD_UserState::getData @ 0x86435ca

/* TOD_UserState::getData(char*) const */

void __thiscall TOD_UserState::getData(TOD_UserState *this,char *param_1)

{
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(this + 0x16);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(this + 0x14);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(this + 0x1c);
  return;
}

```

---

## getEnterCount

```asm
// === 08643872 TOD_UserState::getEnterCount  [0x08643872-0x864387d] ===
 8643872:	55                   	push   %ebp
 8643873:	89 e5                	mov    %esp,%ebp
 8643875:	8b 45 08             	mov    0x8(%ebp),%eax
 8643878:	8b 40 10             	mov    0x10(%eax),%eax
 864387b:	5d                   	pop    %ebp
 864387c:	c3                   	ret
 864387d:	90                   	nop

```

```c
// TOD_UserState::getEnterCount @ 0x8643872

/* TOD_UserState::getEnterCount() const */

undefined4 __thiscall TOD_UserState::getEnterCount(TOD_UserState *this)

{
  return *(undefined4 *)(this + 0x10);
}

```

---

## getLastClearTime

```asm
// === 0864387e TOD_UserState::getLastClearTime  [0x0864387e-0x8643889] ===
 864387e:	55                   	push   %ebp
 864387f:	89 e5                	mov    %esp,%ebp
 8643881:	8b 45 08             	mov    0x8(%ebp),%eax
 8643884:	8b 40 1c             	mov    0x1c(%eax),%eax
 8643887:	5d                   	pop    %ebp
 8643888:	c3                   	ret
 8643889:	90                   	nop

```

```c
// TOD_UserState::getLastClearTime @ 0x864387e

/* TOD_UserState::getLastClearTime() const */

undefined4 __thiscall TOD_UserState::getLastClearTime(TOD_UserState *this)

{
  return *(undefined4 *)(this + 0x1c);
}

```

---

## getLastEnterLayer

```asm
// === 08643942 TOD_UserState::getLastEnterLayer  [0x08643942-0x864396b] ===
 8643942:	55                   	push   %ebp
 8643943:	89 e5                	mov    %esp,%ebp
 8643945:	53                   	push   %ebx
 8643946:	83 ec 14             	sub    $0x14,%esp
 8643949:	8b 5d 08             	mov    0x8(%ebp),%ebx
 864394c:	89 d8                	mov    %ebx,%eax
 864394e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8643951:	83 c2 14             	add    $0x14,%edx
 8643954:	89 54 24 04          	mov    %edx,0x4(%esp)
 8643958:	89 04 24             	mov    %eax,(%esp)
 864395b:	e8 9a b7 fb ff       	call   85ff0fa <_ZN9TOD_LayerC1ERKS_>
 8643960:	89 d8                	mov    %ebx,%eax
 8643962:	89 d8                	mov    %ebx,%eax
 8643964:	83 c4 14             	add    $0x14,%esp
 8643967:	5b                   	pop    %ebx
 8643968:	5d                   	pop    %ebp
 8643969:	c2 04 00             	ret    $0x4

```

```c
// TOD_UserState::getLastEnterLayer @ 0x8643942

/* TOD_UserState::getLastEnterLayer() const */

TOD_Layer * TOD_UserState::getLastEnterLayer(void)

{
  TOD_Layer *in_stack_00000004;
  int in_stack_00000008;
  
  TOD_Layer::TOD_Layer(in_stack_00000004,(TOD_Layer *)(in_stack_00000008 + 0x14));
  return in_stack_00000004;
}

```

---

## getTodayEnterLayer

```asm
// === 0864383e TOD_UserState::getTodayEnterLayer  [0x0864383e-0x8643871] ===
 864383e:	55                   	push   %ebp
 864383f:	89 e5                	mov    %esp,%ebp
 8643841:	53                   	push   %ebx
 8643842:	83 ec 14             	sub    $0x14,%esp
 8643845:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8643848:	89 d8                	mov    %ebx,%eax
 864384a:	8b 55 0c             	mov    0xc(%ebp),%edx
 864384d:	83 c2 14             	add    $0x14,%edx
 8643850:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8643857:	00 
 8643858:	89 54 24 04          	mov    %edx,0x4(%esp)
 864385c:	89 04 24             	mov    %eax,(%esp)
 864385f:	e8 64 01 00 00       	call   86439c8 <_ZNK9TOD_LayerplEi>
 8643864:	83 ec 04             	sub    $0x4,%esp
 8643867:	89 d8                	mov    %ebx,%eax
 8643869:	89 d8                	mov    %ebx,%eax
 864386b:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 864386e:	c9                   	leave
 864386f:	c2 04 00             	ret    $0x4

```

```c
// TOD_UserState::getTodayEnterLayer @ 0x864383e

/* TOD_UserState::getTodayEnterLayer() const */

TOD_Layer * TOD_UserState::getTodayEnterLayer(void)

{
  TOD_Layer *in_stack_00000004;
  int in_stack_00000008;
  
  TOD_Layer::operator+(in_stack_00000004,in_stack_00000008 + 0x14);
  return in_stack_00000004;
}

```

---

## loadData

```asm
// === 086434fc TOD_UserState::loadData  [0x086434fc-0x86435c9] ===
 86434fc:	55                   	push   %ebp
 86434fd:	89 e5                	mov    %esp,%ebp
 86434ff:	56                   	push   %esi
 8643500:	53                   	push   %ebx
 8643501:	83 ec 20             	sub    $0x20,%esp
 8643504:	8b 45 08             	mov    0x8(%ebp),%eax
 8643507:	8b 00                	mov    (%eax),%eax
 8643509:	83 c0 1c             	add    $0x1c,%eax
 864350c:	8b 10                	mov    (%eax),%edx
 864350e:	8b 45 08             	mov    0x8(%ebp),%eax
 8643511:	89 04 24             	mov    %eax,(%esp)
 8643514:	ff d2                	call   *%edx
 8643516:	8b 45 10             	mov    0x10(%ebp),%eax
 8643519:	89 45 f4             	mov    %eax,-0xc(%ebp)
 864351c:	8b 45 08             	mov    0x8(%ebp),%eax
 864351f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8643522:	8b 0a                	mov    (%edx),%ecx
 8643524:	89 48 08             	mov    %ecx,0x8(%eax)
 8643527:	8b 4a 04             	mov    0x4(%edx),%ecx
 864352a:	89 48 0c             	mov    %ecx,0xc(%eax)
 864352d:	8b 4a 08             	mov    0x8(%edx),%ecx
 8643530:	89 48 10             	mov    %ecx,0x10(%eax)
 8643533:	8b 4a 0c             	mov    0xc(%edx),%ecx
 8643536:	89 48 14             	mov    %ecx,0x14(%eax)
 8643539:	8b 4a 10             	mov    0x10(%edx),%ecx
 864353c:	89 48 18             	mov    %ecx,0x18(%eax)
 864353f:	8b 52 14             	mov    0x14(%edx),%edx
 8643542:	89 50 1c             	mov    %edx,0x1c(%eax)
 8643545:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 864354c:	e8 4d 87 a8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8643551:	89 c6                	mov    %eax,%esi
 8643553:	8b 45 0c             	mov    0xc(%ebp),%eax
 8643556:	89 04 24             	mov    %eax,(%esp)
 8643559:	e8 4c 31 c6 ff       	call   82a66aa <_ZNK15CUserCharacInfo24getCurCharacLastPlayTickEv>
 864355e:	89 c3                	mov    %eax,%ebx
 8643560:	e8 1c 8c a8 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8643565:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 864356b:	89 74 24 08          	mov    %esi,0x8(%esp)
 864356f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8643573:	89 04 24             	mov    %eax,(%esp)
 8643576:	e8 2d 8b e2 ff       	call   846c0a8 <_Z22CheckDailyScheduleTimeill>
 864357b:	84 c0                	test   %al,%al
 864357d:	74 12                	je     8643591 <_ZN13TOD_UserState8loadDataEP5CUserPc+0x95>
 864357f:	8b 45 08             	mov    0x8(%ebp),%eax
 8643582:	8b 00                	mov    (%eax),%eax
 8643584:	83 c0 0c             	add    $0xc,%eax
 8643587:	8b 10                	mov    (%eax),%edx
 8643589:	8b 45 08             	mov    0x8(%ebp),%eax
 864358c:	89 04 24             	mov    %eax,(%esp)
 864358f:	ff d2                	call   *%edx
 8643591:	8b 45 08             	mov    0x8(%ebp),%eax
 8643594:	0f b7 40 16          	movzwl 0x16(%eax),%eax
 8643598:	66 85 c0             	test   %ax,%ax
 864359b:	74 21                	je     86435be <_ZN13TOD_UserState8loadDataEP5CUserPc+0xc2>
 864359d:	8b 45 08             	mov    0x8(%ebp),%eax
 86435a0:	8b 40 18             	mov    0x18(%eax),%eax
 86435a3:	3d f0 5d 27 4e       	cmp    $0x4e275df0,%eax
 86435a8:	7f 09                	jg     86435b3 <_ZN13TOD_UserState8loadDataEP5CUserPc+0xb7>
 86435aa:	8b 45 08             	mov    0x8(%ebp),%eax
 86435ad:	66 c7 40 16 00 00    	movw   $0x0,0x16(%eax)
 86435b3:	8b 45 08             	mov    0x8(%ebp),%eax
 86435b6:	89 04 24             	mov    %eax,(%esp)
 86435b9:	e8 06 56 a8 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 86435be:	b8 01 00 00 00       	mov    $0x1,%eax
 86435c3:	83 c4 20             	add    $0x20,%esp
 86435c6:	5b                   	pop    %ebx
 86435c7:	5e                   	pop    %esi
 86435c8:	5d                   	pop    %ebp
 86435c9:	c3                   	ret

```

```c
// TOD_UserState::loadData @ 0x86434fc

/* TOD_UserState::loadData(CUser*, char*) */

undefined4 __thiscall TOD_UserState::loadData(TOD_UserState *this,CUser *param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  (**(code **)(*(int *)this + 0x1c))(this);
  *(undefined4 *)(this + 8) = *(undefined4 *)param_2;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  lVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  lVar3 = CUserCharacInfo::getCurCharacLastPlayTick((CUserCharacInfo *)param_1);
  iVar4 = G_CEnvironment();
  cVar1 = CheckDailyScheduleTime(*(int *)(iVar4 + 0x37c),lVar3,lVar2);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)this + 0xc))(this);
  }
  if (*(short *)(this + 0x16) != 0) {
    if (*(int *)(this + 0x18) < 0x4e275df1) {
      *(undefined2 *)(this + 0x16) = 0;
    }
    charac_expand::CData::alter((CData *)this);
  }
  return 1;
}

```

---

## setEnterLayer

```asm
// === 086438fc TOD_UserState::setEnterLayer  [0x086438fc-0x864390d] ===
 86438fc:	55                   	push   %ebp
 86438fd:	89 e5                	mov    %esp,%ebp
 86438ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8643902:	8b 55 0c             	mov    0xc(%ebp),%edx
 8643905:	0f b7 12             	movzwl (%edx),%edx
 8643908:	66 89 50 14          	mov    %dx,0x14(%eax)
 864390c:	5d                   	pop    %ebp
 864390d:	c3                   	ret

```

```c
// TOD_UserState::setEnterLayer @ 0x86438fc

/* TOD_UserState::setEnterLayer(TOD_Layer const&) */

void __thiscall TOD_UserState::setEnterLayer(TOD_UserState *this,TOD_Layer *param_1)

{
  *(undefined2 *)(this + 0x14) = *(undefined2 *)param_1;
  return;
}

```

---

## ~TOD_UserState

```asm
// === 086434ae TOD_UserState::~TOD_UserState  [0x086434ae-0x86434dd] ===
 86434ae:	55                   	push   %ebp
 86434af:	89 e5                	mov    %esp,%ebp
 86434b1:	83 ec 18             	sub    $0x18,%esp
 86434b4:	8b 45 08             	mov    0x8(%ebp),%eax
 86434b7:	c7 00 08 c6 ce 08    	movl   $0x8cec608,(%eax)
 86434bd:	8b 45 08             	mov    0x8(%ebp),%eax
 86434c0:	89 04 24             	mov    %eax,(%esp)
 86434c3:	e8 1a 57 a8 ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 86434c8:	b8 00 00 00 00       	mov    $0x0,%eax
 86434cd:	84 c0                	test   %al,%al
 86434cf:	74 0b                	je     86434dc <_ZN13TOD_UserStateD1Ev+0x2e>
 86434d1:	8b 45 08             	mov    0x8(%ebp),%eax
 86434d4:	89 04 24             	mov    %eax,(%esp)
 86434d7:	e8 14 10 0e 00       	call   87244f0 <_ZdlPv>
 86434dc:	c9                   	leave
 86434dd:	c3                   	ret

```

```c
// TOD_UserState::~TOD_UserState @ 0x86434ae

/* WARNING: Removing unreachable block (ram,0x086434d1) */
/* TOD_UserState::~TOD_UserState() */

void __thiscall TOD_UserState::~TOD_UserState(TOD_UserState *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08cec608;
  charac_expand::CData::~CData((CData *)this);
  return;
}

```

---

## ~TOD_UserState_086434de

```asm
// === 086434de TOD_UserState::~TOD_UserState  [0x086434de-0x86434fb] ===
 86434de:	55                   	push   %ebp
 86434df:	89 e5                	mov    %esp,%ebp
 86434e1:	83 ec 18             	sub    $0x18,%esp
 86434e4:	8b 45 08             	mov    0x8(%ebp),%eax
 86434e7:	89 04 24             	mov    %eax,(%esp)
 86434ea:	e8 bf ff ff ff       	call   86434ae <_ZN13TOD_UserStateD1Ev>
 86434ef:	8b 45 08             	mov    0x8(%ebp),%eax
 86434f2:	89 04 24             	mov    %eax,(%esp)
 86434f5:	e8 f6 0f 0e 00       	call   87244f0 <_ZdlPv>
 86434fa:	c9                   	leave
 86434fb:	c3                   	ret

```

```c
// TOD_UserState::~TOD_UserState @ 0x86434de

/* TOD_UserState::~TOD_UserState() */

void __thiscall TOD_UserState::~TOD_UserState(TOD_UserState *this)

{
  ~TOD_UserState(this);
  operator_delete(this);
  return;
}

```

