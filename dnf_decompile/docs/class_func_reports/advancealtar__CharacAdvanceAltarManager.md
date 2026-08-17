# advancealtar__CharacAdvanceAltarManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 33

---

## CharacAdvanceAltarManager

```asm
// === 0813119e advancealtar::CharacAdvanceAltarManager::CharacAdvanceAltarManager  [0x0813119e-0x8131219] ===
 813119e:	55                   	push   %ebp
 813119f:	89 e5                	mov    %esp,%ebp
 81311a1:	57                   	push   %edi
 81311a2:	56                   	push   %esi
 81311a3:	53                   	push   %ebx
 81311a4:	83 ec 2c             	sub    $0x2c,%esp
 81311a7:	8b 45 08             	mov    0x8(%ebp),%eax
 81311aa:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 81311b0:	8b 45 08             	mov    0x8(%ebp),%eax
 81311b3:	8d 70 04             	lea    0x4(%eax),%esi
 81311b6:	89 f7                	mov    %esi,%edi
 81311b8:	bb 00 00 00 00       	mov    $0x0,%ebx
 81311bd:	eb 11                	jmp    81311d0 <_ZN12advancealtar25CharacAdvanceAltarManagerC1Ev+0x32>
 81311bf:	89 3c 24             	mov    %edi,(%esp)
 81311c2:	e8 57 7f 76 00       	call   889911e <_ZN12advancealtar16AdvanceAltarDataC1Ev>
 81311c7:	81 c7 d0 00 00 00    	add    $0xd0,%edi
 81311cd:	83 eb 01             	sub    $0x1,%ebx
 81311d0:	83 fb ff             	cmp    $0xffffffff,%ebx
 81311d3:	0f 95 c0             	setne  %al
 81311d6:	84 c0                	test   %al,%al
 81311d8:	75 e5                	jne    81311bf <_ZN12advancealtar25CharacAdvanceAltarManagerC1Ev+0x21>
 81311da:	eb 35                	jmp    8131211 <_ZN12advancealtar25CharacAdvanceAltarManagerC1Ev+0x73>
 81311dc:	89 d7                	mov    %edx,%edi
 81311de:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81311e1:	85 f6                	test   %esi,%esi
 81311e3:	74 1f                	je     8131204 <_ZN12advancealtar25CharacAdvanceAltarManagerC1Ev+0x66>
 81311e5:	89 d8                	mov    %ebx,%eax
 81311e7:	69 c0 30 ff ff ff    	imul   $0xffffff30,%eax,%eax
 81311ed:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 81311f0:	39 f3                	cmp    %esi,%ebx
 81311f2:	74 10                	je     8131204 <_ZN12advancealtar25CharacAdvanceAltarManagerC1Ev+0x66>
 81311f4:	81 eb d0 00 00 00    	sub    $0xd0,%ebx
 81311fa:	89 1c 24             	mov    %ebx,(%esp)
 81311fd:	e8 30 33 00 00       	call   8134532 <_ZN12advancealtar16AdvanceAltarDataD1Ev>
 8131202:	eb ec                	jmp    81311f0 <_ZN12advancealtar25CharacAdvanceAltarManagerC1Ev+0x52>
 8131204:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8131207:	89 fa                	mov    %edi,%edx
 8131209:	89 04 24             	mov    %eax,(%esp)
 813120c:	e8 3f 25 9b 00       	call   8ae3750 <_Unwind_Resume>
 8131211:	83 c4 2c             	add    $0x2c,%esp
 8131214:	5b                   	pop    %ebx
 8131215:	5e                   	pop    %esi
 8131216:	5f                   	pop    %edi
 8131217:	5d                   	pop    %ebp
 8131218:	c3                   	ret
 8131219:	90                   	nop

```

```c
// advancealtar::CharacAdvanceAltarManager::CharacAdvanceAltarManager @ 0x813119e

/* advancealtar::CharacAdvanceAltarManager::CharacAdvanceAltarManager() */

void __thiscall
advancealtar::CharacAdvanceAltarManager::CharacAdvanceAltarManager(CharacAdvanceAltarManager *this)

{
  int iVar1;
  AdvanceAltarData *this_00;
  
  *(undefined4 *)this = 0;
  this_00 = (AdvanceAltarData *)(this + 4);
  for (iVar1 = 0; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 081311c2 to 081311c6 has its CatchHandler @ 081311dc */
    AdvanceAltarData::AdvanceAltarData(this_00);
    this_00 = this_00 + 0xd0;
  }
  return;
}

```

---

## addRewardData

```asm
// === 08132abe advancealtar::CharacAdvanceAltarManager::addRewardData  [0x08132abe-0x8132bf9] ===
 8132abe:	55                   	push   %ebp
 8132abf:	89 e5                	mov    %esp,%ebp
 8132ac1:	83 ec 78             	sub    $0x78,%esp
 8132ac4:	8b 45 08             	mov    0x8(%ebp),%eax
 8132ac7:	8b 00                	mov    (%eax),%eax
 8132ac9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8132acc:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8132ad0:	75 0a                	jne    8132adc <_ZN12advancealtar25CharacAdvanceAltarManager13addRewardDataEiRSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiS2_EEE+0x1e>
 8132ad2:	b8 00 00 00 00       	mov    $0x0,%eax
 8132ad7:	e9 1c 01 00 00       	jmp    8132bf8 <_ZN12advancealtar25CharacAdvanceAltarManager13addRewardDataEiRSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiS2_EEE+0x13a>
 8132adc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8132adf:	8d 88 b4 00 00 00    	lea    0xb4(%eax),%ecx
 8132ae5:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8132ae8:	8d 55 0c             	lea    0xc(%ebp),%edx
 8132aeb:	89 54 24 08          	mov    %edx,0x8(%esp)
 8132aef:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8132af3:	89 04 24             	mov    %eax,(%esp)
 8132af6:	e8 87 37 00 00       	call   8136282 <_ZNSt3mapIiN12advancealtar7_RewardESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 8132afb:	83 ec 04             	sub    $0x4,%esp
 8132afe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8132b01:	8d 90 b4 00 00 00    	lea    0xb4(%eax),%edx
 8132b07:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8132b0a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132b0e:	89 04 24             	mov    %eax,(%esp)
 8132b11:	e8 98 37 00 00       	call   81362ae <_ZNSt3mapIiN12advancealtar7_RewardESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 8132b16:	83 ec 04             	sub    $0x4,%esp
 8132b19:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8132b1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8132b20:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8132b23:	89 04 24             	mov    %eax,(%esp)
 8132b26:	e8 a9 37 00 00       	call   81362d4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN12advancealtar7_RewardEEEeqERKS5_>
 8132b2b:	84 c0                	test   %al,%al
 8132b2d:	0f 84 c0 00 00 00    	je     8132bf3 <_ZN12advancealtar25CharacAdvanceAltarManager13addRewardDataEiRSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiS2_EEE+0x135>
 8132b33:	8d 45 a7             	lea    -0x59(%ebp),%eax
 8132b36:	89 04 24             	mov    %eax,(%esp)
 8132b39:	e8 80 19 00 00       	call   81344be <_ZN12advancealtar7_RewardC1Ev>
 8132b3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8132b41:	89 45 a7             	mov    %eax,-0x59(%ebp)
 8132b44:	c6 45 ab 00          	movb   $0x0,-0x55(%ebp)
 8132b48:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8132b4b:	8d 55 a7             	lea    -0x59(%ebp),%edx
 8132b4e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8132b52:	8d 55 0c             	lea    0xc(%ebp),%edx
 8132b55:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132b59:	89 04 24             	mov    %eax,(%esp)
 8132b5c:	e8 0b 39 00 00       	call   813646c <_ZSt9make_pairIRiRN12advancealtar7_RewardEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 8132b61:	83 ec 04             	sub    $0x4,%esp
 8132b64:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8132b67:	89 44 24 04          	mov    %eax,0x4(%esp)
 8132b6b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8132b6e:	89 04 24             	mov    %eax,(%esp)
 8132b71:	e8 34 39 00 00       	call   81364aa <_ZNSt4pairIKiN12advancealtar7_RewardEEC1IiS2_EEOS_IT_T0_E>
 8132b76:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8132b79:	8d 88 b4 00 00 00    	lea    0xb4(%eax),%ecx
 8132b7f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8132b82:	8d 55 bc             	lea    -0x44(%ebp),%edx
 8132b85:	89 54 24 08          	mov    %edx,0x8(%esp)
 8132b89:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8132b8d:	89 04 24             	mov    %eax,(%esp)
 8132b90:	e8 4d 39 00 00       	call   81364e2 <_ZNSt3mapIiN12advancealtar7_RewardESt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 8132b95:	83 ec 04             	sub    $0x4,%esp
 8132b98:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8132b9b:	c6 80 cc 00 00 00 01 	movb   $0x1,0xcc(%eax)
 8132ba2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8132ba5:	8d 55 a7             	lea    -0x59(%ebp),%edx
 8132ba8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8132bac:	8d 55 0c             	lea    0xc(%ebp),%edx
 8132baf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132bb3:	89 04 24             	mov    %eax,(%esp)
 8132bb6:	e8 b1 38 00 00       	call   813646c <_ZSt9make_pairIRiRN12advancealtar7_RewardEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 8132bbb:	83 ec 04             	sub    $0x4,%esp
 8132bbe:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8132bc1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8132bc5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8132bc8:	89 04 24             	mov    %eax,(%esp)
 8132bcb:	e8 da 38 00 00       	call   81364aa <_ZNSt4pairIKiN12advancealtar7_RewardEEC1IiS2_EEOS_IT_T0_E>
 8132bd0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8132bd3:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8132bd6:	89 54 24 08          	mov    %edx,0x8(%esp)
 8132bda:	8b 55 10             	mov    0x10(%ebp),%edx
 8132bdd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132be1:	89 04 24             	mov    %eax,(%esp)
 8132be4:	e8 f9 38 00 00       	call   81364e2 <_ZNSt3mapIiN12advancealtar7_RewardESt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 8132be9:	83 ec 04             	sub    $0x4,%esp
 8132bec:	b8 01 00 00 00       	mov    $0x1,%eax
 8132bf1:	eb 05                	jmp    8132bf8 <_ZN12advancealtar25CharacAdvanceAltarManager13addRewardDataEiRSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiS2_EEE+0x13a>
 8132bf3:	b8 00 00 00 00       	mov    $0x0,%eax
 8132bf8:	c9                   	leave
 8132bf9:	c3                   	ret

```

```c
// advancealtar::CharacAdvanceAltarManager::addRewardData @ 0x8132abe

/* advancealtar::CharacAdvanceAltarManager::addRewardData(int, std::map<int, advancealtar::_Reward,
   std::less<int>, std::allocator<std::pair<int const, advancealtar::_Reward> > >&) */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::addRewardData
          (CharacAdvanceAltarManager *this,int param_1,map *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_5d;
  undefined1 local_59;
  _Rb_tree_iterator<std::pair<int_const,advancealtar::_Reward>> local_58 [4];
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  local_54 [4];
  pair local_50 [8];
  pair<int_const,advancealtar::_Reward> local_48 [12];
  int local_3c [3];
  pair local_30 [8];
  pair<int_const,advancealtar::_Reward> local_28 [12];
  int local_1c [3];
  int local_10;
  
  local_10 = *(int *)this;
  if (local_10 == 0) {
    uVar2 = 0;
  }
  else {
    std::
    map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
    ::find((int *)local_58);
    std::
    map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
    ::end(local_54);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_Reward>>::operator==
                      (local_58,(_Rb_tree_iterator *)local_54);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      _Reward::_Reward((_Reward *)&local_5d);
      local_5d = param_1;
      local_59 = 0;
      std::make_pair<int&,advancealtar::_Reward&>(local_3c,(_Reward *)&param_1);
      std::pair<int_const,advancealtar::_Reward>::pair<int,advancealtar::_Reward>
                (local_48,(pair *)local_3c);
      std::
      map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
      ::insert(local_50);
      *(undefined1 *)(local_10 + 0xcc) = 1;
      std::make_pair<int&,advancealtar::_Reward&>(local_1c,(_Reward *)&param_1);
      std::pair<int_const,advancealtar::_Reward>::pair<int,advancealtar::_Reward>
                (local_28,(pair *)local_1c);
      std::
      map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
      ::insert(local_30);
      uVar2 = 1;
    }
  }
  return uVar2;
}

```

---

## buyItem

```asm
// === 081319ae advancealtar::CharacAdvanceAltarManager::buyItem  [0x081319ae-0x8131b57] ===
 81319ae:	55                   	push   %ebp
 81319af:	89 e5                	mov    %esp,%ebp
 81319b1:	53                   	push   %ebx
 81319b2:	81 ec 84 00 00 00    	sub    $0x84,%esp
 81319b8:	8b 55 14             	mov    0x14(%ebp),%edx
 81319bb:	8b 45 18             	mov    0x18(%ebp),%eax
 81319be:	66 89 55 a4          	mov    %dx,-0x5c(%ebp)
 81319c2:	66 89 45 a0          	mov    %ax,-0x60(%ebp)
 81319c6:	8b 45 08             	mov    0x8(%ebp),%eax
 81319c9:	8b 00                	mov    (%eax),%eax
 81319cb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81319ce:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81319d2:	75 0a                	jne    81319de <_ZN12advancealtar25CharacAdvanceAltarManager7buyItemENS_20AdvanceAltarShopType1TEissiRi+0x30>
 81319d4:	b8 03 00 00 00       	mov    $0x3,%eax
 81319d9:	e9 75 01 00 00       	jmp    8131b53 <_ZN12advancealtar25CharacAdvanceAltarManager7buyItemENS_20AdvanceAltarShopType1TEissiRi+0x1a5>
 81319de:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81319e1:	8b 40 14             	mov    0x14(%eax),%eax
 81319e4:	3b 45 1c             	cmp    0x1c(%ebp),%eax
 81319e7:	7d 0a                	jge    81319f3 <_ZN12advancealtar25CharacAdvanceAltarManager7buyItemENS_20AdvanceAltarShopType1TEissiRi+0x45>
 81319e9:	b8 02 00 00 00       	mov    $0x2,%eax
 81319ee:	e9 60 01 00 00       	jmp    8131b53 <_ZN12advancealtar25CharacAdvanceAltarManager7buyItemENS_20AdvanceAltarShopType1TEissiRi+0x1a5>
 81319f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81319f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81319fa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81319fd:	89 04 24             	mov    %eax,(%esp)
 8131a00:	e8 d3 7f 76 00       	call   88999d8 <_ZN12advancealtar16AdvanceAltarData13getBuyItemMapENS_20AdvanceAltarShopType1TE>
 8131a05:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8131a08:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8131a0c:	75 0a                	jne    8131a18 <_ZN12advancealtar25CharacAdvanceAltarManager7buyItemENS_20AdvanceAltarShopType1TEissiRi+0x6a>
 8131a0e:	b8 03 00 00 00       	mov    $0x3,%eax
 8131a13:	e9 3b 01 00 00       	jmp    8131b53 <_ZN12advancealtar25CharacAdvanceAltarManager7buyItemENS_20AdvanceAltarShopType1TEissiRi+0x1a5>
 8131a18:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8131a1b:	8d 55 10             	lea    0x10(%ebp),%edx
 8131a1e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8131a22:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8131a25:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131a29:	89 04 24             	mov    %eax,(%esp)
 8131a2c:	e8 53 45 00 00       	call   8135f84 <_ZNSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 8131a31:	83 ec 04             	sub    $0x4,%esp
 8131a34:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8131a37:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8131a3a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131a3e:	89 04 24             	mov    %eax,(%esp)
 8131a41:	e8 6a 45 00 00       	call   8135fb0 <_ZNSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 8131a46:	83 ec 04             	sub    $0x4,%esp
 8131a49:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8131a4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8131a50:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8131a53:	89 04 24             	mov    %eax,(%esp)
 8131a56:	e8 7b 45 00 00       	call   8135fd6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEeqERKS5_>
 8131a5b:	84 c0                	test   %al,%al
 8131a5d:	74 72                	je     8131ad1 <_ZN12advancealtar25CharacAdvanceAltarManager7buyItemENS_20AdvanceAltarShopType1TEissiRi+0x123>
 8131a5f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8131a62:	89 04 24             	mov    %eax,(%esp)
 8131a65:	e8 0c 2a 00 00       	call   8134476 <_ZN12advancealtar8_BuyItemC1Ev>
 8131a6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8131a6d:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8131a70:	8b 45 10             	mov    0x10(%ebp),%eax
 8131a73:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8131a76:	0f b7 45 a0          	movzwl -0x60(%ebp),%eax
 8131a7a:	66 89 45 bc          	mov    %ax,-0x44(%ebp)
 8131a7e:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8131a81:	66 89 45 be          	mov    %ax,-0x42(%ebp)
 8131a85:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8131a88:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8131a8b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8131a8f:	8d 55 10             	lea    0x10(%ebp),%edx
 8131a92:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131a96:	89 04 24             	mov    %eax,(%esp)
 8131a99:	e8 4c 45 00 00       	call   8135fea <_ZSt9make_pairIRiRN12advancealtar8_BuyItemEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 8131a9e:	83 ec 04             	sub    $0x4,%esp
 8131aa1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8131aa4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8131aa8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8131aab:	89 04 24             	mov    %eax,(%esp)
 8131aae:	e8 75 45 00 00       	call   8136028 <_ZNSt4pairIKiN12advancealtar8_BuyItemEEC1IiS2_EEOS_IT_T0_E>
 8131ab3:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8131ab6:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8131ab9:	89 54 24 08          	mov    %edx,0x8(%esp)
 8131abd:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8131ac0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131ac4:	89 04 24             	mov    %eax,(%esp)
 8131ac7:	e8 98 45 00 00       	call   8136064 <_ZNSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 8131acc:	83 ec 04             	sub    $0x4,%esp
 8131acf:	eb 2e                	jmp    8131aff <_ZN12advancealtar25CharacAdvanceAltarManager7buyItemENS_20AdvanceAltarShopType1TEissiRi+0x151>
 8131ad1:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8131ad4:	89 04 24             	mov    %eax,(%esp)
 8131ad7:	e8 b4 45 00 00       	call   8136090 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEptEv>
 8131adc:	0f b7 55 a0          	movzwl -0x60(%ebp),%edx
 8131ae0:	66 89 50 0c          	mov    %dx,0xc(%eax)
 8131ae4:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8131ae7:	89 04 24             	mov    %eax,(%esp)
 8131aea:	e8 a1 45 00 00       	call   8136090 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEptEv>
 8131aef:	0f b7 50 0e          	movzwl 0xe(%eax),%edx
 8131af3:	89 d1                	mov    %edx,%ecx
 8131af5:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8131af8:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8131afb:	66 89 50 0e          	mov    %dx,0xe(%eax)
 8131aff:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8131b02:	8b 40 14             	mov    0x14(%eax),%eax
 8131b05:	89 c2                	mov    %eax,%edx
 8131b07:	2b 55 1c             	sub    0x1c(%ebp),%edx
 8131b0a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8131b0d:	89 50 14             	mov    %edx,0x14(%eax)
 8131b10:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8131b13:	c6 80 cc 00 00 00 01 	movb   $0x1,0xcc(%eax)
 8131b1a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8131b1d:	8b 50 14             	mov    0x14(%eax),%edx
 8131b20:	8b 45 20             	mov    0x20(%ebp),%eax
 8131b23:	89 10                	mov    %edx,(%eax)
 8131b25:	0f bf 4d a0          	movswl -0x60(%ebp),%ecx
 8131b29:	0f bf 55 a4          	movswl -0x5c(%ebp),%edx
 8131b2d:	8b 45 10             	mov    0x10(%ebp),%eax
 8131b30:	8b 5d 1c             	mov    0x1c(%ebp),%ebx
 8131b33:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8131b37:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8131b3b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8131b3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8131b43:	8b 45 0c             	mov    0xc(%ebp),%eax
 8131b46:	89 04 24             	mov    %eax,(%esp)
 8131b49:	e8 8c 22 00 00       	call   8133dda <_ZN12advancealtar10HistoryLog7buyItemENS_20AdvanceAltarShopType1TEissi>
 8131b4e:	b8 00 00 00 00       	mov    $0x0,%eax
 8131b53:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8131b56:	c9                   	leave
 8131b57:	c3                   	ret

```

```c
// advancealtar::CharacAdvanceAltarManager::buyItem @ 0x81319ae

/* advancealtar::CharacAdvanceAltarManager::buyItem(advancealtar::AdvanceAltarShopType::T, int,
   short, short, int, int&) */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::buyItem
          (CharacAdvanceAltarManager *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,int param_6,undefined4 *param_7)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  short sVar5;
  undefined4 local_50;
  undefined4 local_4c;
  short local_48;
  undefined2 local_46;
  _Rb_tree_iterator<std::pair<int_const,advancealtar::_BuyItem>> local_44 [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_40 [4];
  pair local_3c [8];
  pair<int_const,advancealtar::_BuyItem> local_34 [16];
  int local_24 [4];
  AdvanceAltarData *local_14;
  int local_10;
  
  sVar5 = (short)param_4;
  sVar2 = (short)param_5;
  local_14 = *(AdvanceAltarData **)this;
  if (local_14 == (AdvanceAltarData *)0x0) {
    uVar3 = 3;
  }
  else if (*(int *)(local_14 + 0x14) < param_6) {
    uVar3 = 2;
  }
  else {
    local_10 = AdvanceAltarData::getBuyItemMap(local_14,param_2);
    if (local_10 == 0) {
      uVar3 = 3;
    }
    else {
      std::
      map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
      ::find((int *)local_44);
      std::
      map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
      ::end(local_40);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator==
                        (local_44,(_Rb_tree_iterator *)local_40);
      if (cVar1 == '\0') {
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator->
                          (local_44);
        *(short *)(iVar4 + 0xc) = sVar2;
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator->
                          (local_44);
        *(short *)(iVar4 + 0xe) = *(short *)(iVar4 + 0xe) + (short)param_6;
      }
      else {
        _BuyItem::_BuyItem((_BuyItem *)&local_50);
        local_50 = param_2;
        local_4c = param_3;
        local_46 = (undefined2)param_6;
        local_48 = sVar2;
        std::make_pair<int&,advancealtar::_BuyItem&>(local_24,(_BuyItem *)&param_3);
        std::pair<int_const,advancealtar::_BuyItem>::pair<int,advancealtar::_BuyItem>
                  (local_34,(pair *)local_24);
        std::
        map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
        ::insert(local_3c);
      }
      *(int *)(local_14 + 0x14) = *(int *)(local_14 + 0x14) - param_6;
      local_14[0xcc] = (AdvanceAltarData)0x1;
      *param_7 = *(undefined4 *)(local_14 + 0x14);
      HistoryLog::buyItem(param_2,param_3,(int)sVar5,(int)sVar2,param_6);
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## checkAndCreateDefaultRidable

```asm
// === 08131426 advancealtar::CharacAdvanceAltarManager::checkAndCreateDefaultRidable  [0x08131426-0x8131599] ===
 8131426:	55                   	push   %ebp
 8131427:	89 e5                	mov    %esp,%ebp
 8131429:	83 ec 28             	sub    $0x28,%esp
 813142c:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 8131430:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8131437:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 813143e:	e9 a3 00 00 00       	jmp    81314e6 <_ZN12advancealtar25CharacAdvanceAltarManager28checkAndCreateDefaultRidableEv+0xc0>
 8131443:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8131446:	8b 55 08             	mov    0x8(%ebp),%edx
 8131449:	69 c0 d0 00 00 00    	imul   $0xd0,%eax,%eax
 813144f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8131452:	83 c0 04             	add    $0x4,%eax
 8131455:	8b 00                	mov    (%eax),%eax
 8131457:	83 f8 01             	cmp    $0x1,%eax
 813145a:	0f 85 82 00 00 00    	jne    81314e2 <_ZN12advancealtar25CharacAdvanceAltarManager28checkAndCreateDefaultRidableEv+0xbc>
 8131460:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8131463:	69 c0 d0 00 00 00    	imul   $0xd0,%eax,%eax
 8131469:	83 c0 30             	add    $0x30,%eax
 813146c:	03 45 08             	add    0x8(%ebp),%eax
 813146f:	83 c0 10             	add    $0x10,%eax
 8131472:	89 04 24             	mov    %eax,(%esp)
 8131475:	e8 28 4a 00 00       	call   8135ea2 <_ZNKSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 813147a:	85 c0                	test   %eax,%eax
 813147c:	75 43                	jne    81314c1 <_ZN12advancealtar25CharacAdvanceAltarManager28checkAndCreateDefaultRidableEv+0x9b>
 813147e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8131481:	69 c0 d0 00 00 00    	imul   $0xd0,%eax,%eax
 8131487:	83 c0 50             	add    $0x50,%eax
 813148a:	03 45 08             	add    0x8(%ebp),%eax
 813148d:	83 c0 08             	add    $0x8,%eax
 8131490:	89 04 24             	mov    %eax,(%esp)
 8131493:	e8 0a 4a 00 00       	call   8135ea2 <_ZNKSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 8131498:	85 c0                	test   %eax,%eax
 813149a:	75 25                	jne    81314c1 <_ZN12advancealtar25CharacAdvanceAltarManager28checkAndCreateDefaultRidableEv+0x9b>
 813149c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813149f:	69 c0 d0 00 00 00    	imul   $0xd0,%eax,%eax
 81314a5:	83 c0 60             	add    $0x60,%eax
 81314a8:	03 45 08             	add    0x8(%ebp),%eax
 81314ab:	83 c0 10             	add    $0x10,%eax
 81314ae:	89 04 24             	mov    %eax,(%esp)
 81314b1:	e8 ec 49 00 00       	call   8135ea2 <_ZNKSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 81314b6:	85 c0                	test   %eax,%eax
 81314b8:	75 07                	jne    81314c1 <_ZN12advancealtar25CharacAdvanceAltarManager28checkAndCreateDefaultRidableEv+0x9b>
 81314ba:	b8 01 00 00 00       	mov    $0x1,%eax
 81314bf:	eb 05                	jmp    81314c6 <_ZN12advancealtar25CharacAdvanceAltarManager28checkAndCreateDefaultRidableEv+0xa0>
 81314c1:	b8 00 00 00 00       	mov    $0x0,%eax
 81314c6:	84 c0                	test   %al,%al
 81314c8:	74 14                	je     81314de <_ZN12advancealtar25CharacAdvanceAltarManager28checkAndCreateDefaultRidableEv+0xb8>
 81314ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81314cd:	69 c0 d0 00 00 00    	imul   $0xd0,%eax,%eax
 81314d3:	03 45 08             	add    0x8(%ebp),%eax
 81314d6:	83 c0 04             	add    $0x4,%eax
 81314d9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81314dc:	eb 17                	jmp    81314f5 <_ZN12advancealtar25CharacAdvanceAltarManager28checkAndCreateDefaultRidableEv+0xcf>
 81314de:	c6 45 ef 01          	movb   $0x1,-0x11(%ebp)
 81314e2:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81314e6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81314ea:	0f 9e c0             	setle  %al
 81314ed:	84 c0                	test   %al,%al
 81314ef:	0f 85 4e ff ff ff    	jne    8131443 <_ZN12advancealtar25CharacAdvanceAltarManager28checkAndCreateDefaultRidableEv+0x1d>
 81314f5:	80 7d ef 00          	cmpb   $0x0,-0x11(%ebp)
 81314f9:	0f 85 98 00 00 00    	jne    8131597 <_ZN12advancealtar25CharacAdvanceAltarManager28checkAndCreateDefaultRidableEv+0x171>
 81314ff:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8131503:	75 09                	jne    813150e <_ZN12advancealtar25CharacAdvanceAltarManager28checkAndCreateDefaultRidableEv+0xe8>
 8131505:	8b 45 08             	mov    0x8(%ebp),%eax
 8131508:	83 c0 04             	add    $0x4,%eax
 813150b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 813150e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8131511:	c6 80 cc 00 00 00 01 	movb   $0x1,0xcc(%eax)
 8131518:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813151b:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8131521:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8131524:	8b 00                	mov    (%eax),%eax
 8131526:	89 44 24 04          	mov    %eax,0x4(%esp)
 813152a:	8b 45 08             	mov    0x8(%ebp),%eax
 813152d:	89 04 24             	mov    %eax,(%esp)
 8131530:	e8 1f fd ff ff       	call   8131254 <_ZN12advancealtar25CharacAdvanceAltarManager26setCurrentAdvanceAltarDataENS_9RidableId1TE>
 8131535:	8b 45 08             	mov    0x8(%ebp),%eax
 8131538:	89 04 24             	mov    %eax,(%esp)
 813153b:	e8 4e 1a 00 00       	call   8132f8e <_ZN12advancealtar25CharacAdvanceAltarManager14setDefaultSlotEv>
 8131540:	8b 45 08             	mov    0x8(%ebp),%eax
 8131543:	89 04 24             	mov    %eax,(%esp)
 8131546:	e8 27 1a 00 00       	call   8132f72 <_ZN12advancealtar25CharacAdvanceAltarManager15setDefaultStageEv>
 813154b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8131552:	00 
 8131553:	8b 45 08             	mov    0x8(%ebp),%eax
 8131556:	89 04 24             	mov    %eax,(%esp)
 8131559:	e8 5a 17 00 00       	call   8132cb8 <_ZN12advancealtar25CharacAdvanceAltarManager17setDefaultBuyItemENS_20AdvanceAltarShopType1TE>
 813155e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8131565:	00 
 8131566:	8b 45 08             	mov    0x8(%ebp),%eax
 8131569:	89 04 24             	mov    %eax,(%esp)
 813156c:	e8 47 17 00 00       	call   8132cb8 <_ZN12advancealtar25CharacAdvanceAltarManager17setDefaultBuyItemENS_20AdvanceAltarShopType1TE>
 8131571:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8131578:	00 
 8131579:	8b 45 08             	mov    0x8(%ebp),%eax
 813157c:	89 04 24             	mov    %eax,(%esp)
 813157f:	e8 34 17 00 00       	call   8132cb8 <_ZN12advancealtar25CharacAdvanceAltarManager17setDefaultBuyItemENS_20AdvanceAltarShopType1TE>
 8131584:	e8 12 ac f9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8131589:	8b 90 64 63 00 00    	mov    0x6364(%eax),%edx
 813158f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8131592:	89 50 04             	mov    %edx,0x4(%eax)
 8131595:	eb 01                	jmp    8131598 <_ZN12advancealtar25CharacAdvanceAltarManager28checkAndCreateDefaultRidableEv+0x172>
 8131597:	90                   	nop
 8131598:	c9                   	leave
 8131599:	c3                   	ret

```

```c
// advancealtar::CharacAdvanceAltarManager::checkAndCreateDefaultRidable @ 0x8131426

/* advancealtar::CharacAdvanceAltarManager::checkAndCreateDefaultRidable() */

void __thiscall
advancealtar::CharacAdvanceAltarManager::checkAndCreateDefaultRidable
          (CharacAdvanceAltarManager *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  CharacAdvanceAltarManager *local_14;
  int local_10;
  
  bVar2 = false;
  local_14 = (CharacAdvanceAltarManager *)0x0;
  local_10 = 0;
  do {
    if (0 < local_10) {
LAB_081314f5:
      if (!bVar2) {
        if (local_14 == (CharacAdvanceAltarManager *)0x0) {
          local_14 = this + 4;
        }
        local_14[0xcc] = (CharacAdvanceAltarManager)0x1;
        *(undefined4 *)local_14 = 1;
        setCurrentAdvanceAltarData(this,*(undefined4 *)local_14);
        setDefaultSlot(this);
        setDefaultStage(this);
        setDefaultBuyItem(this,0);
        setDefaultBuyItem(this,1);
        setDefaultBuyItem(this,2);
        iVar3 = G_CDataManager();
        *(undefined4 *)(local_14 + 4) = *(undefined4 *)(iVar3 + 0x6364);
      }
      return;
    }
    if (*(int *)(this + local_10 * 0xd0 + 4) == 1) {
      iVar3 = std::
              map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
              ::size((map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
                      *)(this + local_10 * 0xd0 + 0x40));
      if (iVar3 == 0) {
        iVar3 = std::
                map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
                ::size((map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
                        *)(this + local_10 * 0xd0 + 0x58));
        if (iVar3 != 0) goto LAB_081314c1;
        iVar3 = std::
                map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
                ::size((map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
                        *)(this + local_10 * 0xd0 + 0x70));
        if (iVar3 != 0) goto LAB_081314c1;
        bVar1 = true;
      }
      else {
LAB_081314c1:
        bVar1 = false;
      }
      if (bVar1) {
        local_14 = this + local_10 * 0xd0 + 4;
        goto LAB_081314f5;
      }
      bVar2 = true;
    }
    local_10 = local_10 + 1;
  } while( true );
}

```

---

## clearStage

```asm
// === 0813175a advancealtar::CharacAdvanceAltarManager::clearStage  [0x0813175a-0x81318e1] ===
 813175a:	55                   	push   %ebp
 813175b:	89 e5                	mov    %esp,%ebp
 813175d:	53                   	push   %ebx
 813175e:	83 ec 24             	sub    $0x24,%esp
 8131761:	8b 45 20             	mov    0x20(%ebp),%eax
 8131764:	c6 00 00             	movb   $0x0,(%eax)
 8131767:	8b 45 08             	mov    0x8(%ebp),%eax
 813176a:	8b 00                	mov    (%eax),%eax
 813176c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 813176f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8131773:	75 0a                	jne    813177f <_ZN12advancealtar25CharacAdvanceAltarManager10clearStageEiNS_15StageDifficulty1TENS_9StageType1TEiRiRbS6_+0x25>
 8131775:	b8 00 00 00 00       	mov    $0x0,%eax
 813177a:	e9 5e 01 00 00       	jmp    81318dd <_ZN12advancealtar25CharacAdvanceAltarManager10clearStageEiNS_15StageDifficulty1TENS_9StageType1TEiRiRbS6_+0x183>
 813177f:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8131782:	e8 14 aa f9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8131787:	05 98 87 00 00       	add    $0x8798,%eax
 813178c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8131790:	89 04 24             	mov    %eax,(%esp)
 8131793:	e8 5e 36 23 00       	call   8364df6 <_ZNK12StageMapList7isExistEi>
 8131798:	83 f0 01             	xor    $0x1,%eax
 813179b:	84 c0                	test   %al,%al
 813179d:	74 0a                	je     81317a9 <_ZN12advancealtar25CharacAdvanceAltarManager10clearStageEiNS_15StageDifficulty1TENS_9StageType1TEiRiRbS6_+0x4f>
 813179f:	b8 00 00 00 00       	mov    $0x0,%eax
 81317a4:	e9 34 01 00 00       	jmp    81318dd <_ZN12advancealtar25CharacAdvanceAltarManager10clearStageEiNS_15StageDifficulty1TENS_9StageType1TEiRiRbS6_+0x183>
 81317a9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81317ac:	8d 48 24             	lea    0x24(%eax),%ecx
 81317af:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81317b2:	8d 55 0c             	lea    0xc(%ebp),%edx
 81317b5:	89 54 24 08          	mov    %edx,0x8(%esp)
 81317b9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81317bd:	89 04 24             	mov    %eax,(%esp)
 81317c0:	e8 67 46 00 00       	call   8135e2c <_ZNSt3mapIiN12advancealtar6_StageESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 81317c5:	83 ec 04             	sub    $0x4,%esp
 81317c8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81317cb:	8d 50 24             	lea    0x24(%eax),%edx
 81317ce:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81317d1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81317d5:	89 04 24             	mov    %eax,(%esp)
 81317d8:	e8 8b 46 00 00       	call   8135e68 <_ZNSt3mapIiN12advancealtar6_StageESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 81317dd:	83 ec 04             	sub    $0x4,%esp
 81317e0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81317e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81317e7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81317ea:	89 04 24             	mov    %eax,(%esp)
 81317ed:	e8 c4 46 00 00       	call   8135eb6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN12advancealtar6_StageEEEeqERKS5_>
 81317f2:	84 c0                	test   %al,%al
 81317f4:	74 0a                	je     8131800 <_ZN12advancealtar25CharacAdvanceAltarManager10clearStageEiNS_15StageDifficulty1TENS_9StageType1TEiRiRbS6_+0xa6>
 81317f6:	b8 00 00 00 00       	mov    $0x0,%eax
 81317fb:	e9 dd 00 00 00       	jmp    81318dd <_ZN12advancealtar25CharacAdvanceAltarManager10clearStageEiNS_15StageDifficulty1TENS_9StageType1TEiRiRbS6_+0x183>
 8131800:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 8131804:	75 33                	jne    8131839 <_ZN12advancealtar25CharacAdvanceAltarManager10clearStageEiNS_15StageDifficulty1TENS_9StageType1TEiRiRbS6_+0xdf>
 8131806:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8131809:	0f b7 40 18          	movzwl 0x18(%eax),%eax
 813180d:	98                   	cwtl
 813180e:	3b 45 18             	cmp    0x18(%ebp),%eax
 8131811:	7d 1c                	jge    813182f <_ZN12advancealtar25CharacAdvanceAltarManager10clearStageEiNS_15StageDifficulty1TENS_9StageType1TEiRiRbS6_+0xd5>
 8131813:	8b 45 18             	mov    0x18(%ebp),%eax
 8131816:	89 c2                	mov    %eax,%edx
 8131818:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813181b:	66 89 50 18          	mov    %dx,0x18(%eax)
 813181f:	8b 45 24             	mov    0x24(%ebp),%eax
 8131822:	c6 00 01             	movb   $0x1,(%eax)
 8131825:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8131828:	c6 80 cc 00 00 00 01 	movb   $0x1,0xcc(%eax)
 813182f:	b8 01 00 00 00       	mov    $0x1,%eax
 8131834:	e9 a4 00 00 00       	jmp    81318dd <_ZN12advancealtar25CharacAdvanceAltarManager10clearStageEiNS_15StageDifficulty1TENS_9StageType1TEiRiRbS6_+0x183>
 8131839:	8d 45 ec             	lea    -0x14(%ebp),%eax
 813183c:	89 04 24             	mov    %eax,(%esp)
 813183f:	e8 86 46 00 00       	call   8135eca <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN12advancealtar6_StageEEEptEv>
 8131844:	8b 40 08             	mov    0x8(%eax),%eax
 8131847:	83 f8 ff             	cmp    $0xffffffff,%eax
 813184a:	0f 94 c0             	sete   %al
 813184d:	84 c0                	test   %al,%al
 813184f:	74 06                	je     8131857 <_ZN12advancealtar25CharacAdvanceAltarManager10clearStageEiNS_15StageDifficulty1TENS_9StageType1TEiRiRbS6_+0xfd>
 8131851:	8b 45 20             	mov    0x20(%ebp),%eax
 8131854:	c6 00 01             	movb   $0x1,(%eax)
 8131857:	8d 45 ec             	lea    -0x14(%ebp),%eax
 813185a:	89 04 24             	mov    %eax,(%esp)
 813185d:	e8 68 46 00 00       	call   8135eca <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN12advancealtar6_StageEEEptEv>
 8131862:	8b 40 08             	mov    0x8(%eax),%eax
 8131865:	89 c2                	mov    %eax,%edx
 8131867:	8b 45 10             	mov    0x10(%ebp),%eax
 813186a:	39 c2                	cmp    %eax,%edx
 813186c:	0f 9c c0             	setl   %al
 813186f:	84 c0                	test   %al,%al
 8131871:	74 65                	je     81318d8 <_ZN12advancealtar25CharacAdvanceAltarManager10clearStageEiNS_15StageDifficulty1TENS_9StageType1TEiRiRbS6_+0x17e>
 8131873:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8131876:	89 04 24             	mov    %eax,(%esp)
 8131879:	e8 4c 46 00 00       	call   8135eca <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN12advancealtar6_StageEEEptEv>
 813187e:	89 c3                	mov    %eax,%ebx
 8131880:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8131883:	89 04 24             	mov    %eax,(%esp)
 8131886:	e8 3f 46 00 00       	call   8135eca <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN12advancealtar6_StageEEEptEv>
 813188b:	8b 40 08             	mov    0x8(%eax),%eax
 813188e:	89 04 24             	mov    %eax,(%esp)
 8131891:	e8 74 77 76 00       	call   889900a <_ZN12advancealtar15StageDifficulty17getNextDifficultyENS0_1TE>
 8131896:	89 43 08             	mov    %eax,0x8(%ebx)
 8131899:	8b 45 10             	mov    0x10(%ebp),%eax
 813189c:	8b 14 85 7c d3 b6 08 	mov    0x8b6d37c(,%eax,4),%edx
 81318a3:	8b 45 1c             	mov    0x1c(%ebp),%eax
 81318a6:	89 10                	mov    %edx,(%eax)
 81318a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81318ab:	8b 50 0c             	mov    0xc(%eax),%edx
 81318ae:	8b 45 1c             	mov    0x1c(%ebp),%eax
 81318b1:	8b 00                	mov    (%eax),%eax
 81318b3:	01 c2                	add    %eax,%edx
 81318b5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81318b8:	89 50 0c             	mov    %edx,0xc(%eax)
 81318bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81318be:	8b 50 14             	mov    0x14(%eax),%edx
 81318c1:	8b 45 1c             	mov    0x1c(%ebp),%eax
 81318c4:	8b 00                	mov    (%eax),%eax
 81318c6:	01 c2                	add    %eax,%edx
 81318c8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81318cb:	89 50 14             	mov    %edx,0x14(%eax)
 81318ce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81318d1:	c6 80 cc 00 00 00 01 	movb   $0x1,0xcc(%eax)
 81318d8:	b8 01 00 00 00       	mov    $0x1,%eax
 81318dd:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 81318e0:	c9                   	leave
 81318e1:	c3                   	ret

```

```c
// advancealtar::CharacAdvanceAltarManager::clearStage @ 0x813175a

/* advancealtar::CharacAdvanceAltarManager::clearStage(int, advancealtar::StageDifficulty::T,
   advancealtar::StageType::T, int, int&, bool&, bool&) */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::clearStage
          (CharacAdvanceAltarManager *this,undefined4 param_1,int param_3,int param_4,int param_5,
          int *param_6,undefined1 *param_7,undefined1 *param_8)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  _Rb_tree_iterator<std::pair<int_const,advancealtar::_Stage>> local_18 [4];
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  local_14 [4];
  int local_10;
  
  *param_7 = 0;
  local_10 = *(int *)this;
  if (local_10 == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = G_CDataManager();
    cVar1 = StageMapList::isExist(iVar3 + 0x8798);
    if (cVar1 == '\x01') {
      std::
      map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
      ::find((int *)local_18);
      std::
      map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
      ::end(local_14);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_Stage>>::operator==
                        (local_18,(_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') {
        if (param_4 == 1) {
          if (*(short *)(local_10 + 0x18) < param_5) {
            *(short *)(local_10 + 0x18) = (short)param_5;
            *param_8 = 1;
            *(undefined1 *)(local_10 + 0xcc) = 1;
          }
          uVar2 = 1;
        }
        else {
          iVar3 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_Stage>>::operator->
                            (local_18);
          if (*(int *)(iVar3 + 8) == -1) {
            *param_7 = 1;
          }
          iVar3 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_Stage>>::operator->
                            (local_18);
          if (*(int *)(iVar3 + 8) < param_3) {
            iVar3 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_Stage>>::operator->
                              (local_18);
            iVar4 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_Stage>>::operator->
                              (local_18);
            uVar2 = StageDifficulty::getNextDifficulty(*(undefined4 *)(iVar4 + 8));
            *(undefined4 *)(iVar3 + 8) = uVar2;
            *param_6 = *(int *)(advancealtar::kRewardStar + param_3 * 4);
            *(int *)(local_10 + 0xc) = *(int *)(local_10 + 0xc) + *param_6;
            *(int *)(local_10 + 0x14) = *(int *)(local_10 + 0x14) + *param_6;
            *(undefined1 *)(local_10 + 0xcc) = 1;
          }
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## decTicket

```asm
// === 081313b6 advancealtar::CharacAdvanceAltarManager::decTicket  [0x081313b6-0x8131425] ===
 81313b6:	55                   	push   %ebp
 81313b7:	89 e5                	mov    %esp,%ebp
 81313b9:	83 ec 10             	sub    $0x10,%esp
 81313bc:	8b 45 08             	mov    0x8(%ebp),%eax
 81313bf:	8b 00                	mov    (%eax),%eax
 81313c1:	85 c0                	test   %eax,%eax
 81313c3:	75 07                	jne    81313cc <_ZN12advancealtar25CharacAdvanceAltarManager9decTicketEv+0x16>
 81313c5:	b8 00 00 00 00       	mov    $0x0,%eax
 81313ca:	eb 58                	jmp    8131424 <_ZN12advancealtar25CharacAdvanceAltarManager9decTicketEv+0x6e>
 81313cc:	c6 45 ff 00          	movb   $0x0,-0x1(%ebp)
 81313d0:	8b 45 08             	mov    0x8(%ebp),%eax
 81313d3:	8b 00                	mov    (%eax),%eax
 81313d5:	8b 40 04             	mov    0x4(%eax),%eax
 81313d8:	85 c0                	test   %eax,%eax
 81313da:	7e 14                	jle    81313f0 <_ZN12advancealtar25CharacAdvanceAltarManager9decTicketEv+0x3a>
 81313dc:	8b 45 08             	mov    0x8(%ebp),%eax
 81313df:	8b 00                	mov    (%eax),%eax
 81313e1:	8b 50 04             	mov    0x4(%eax),%edx
 81313e4:	83 ea 01             	sub    $0x1,%edx
 81313e7:	89 50 04             	mov    %edx,0x4(%eax)
 81313ea:	c6 45 ff 01          	movb   $0x1,-0x1(%ebp)
 81313ee:	eb 1e                	jmp    813140e <_ZN12advancealtar25CharacAdvanceAltarManager9decTicketEv+0x58>
 81313f0:	8b 45 08             	mov    0x8(%ebp),%eax
 81313f3:	8b 00                	mov    (%eax),%eax
 81313f5:	8b 40 08             	mov    0x8(%eax),%eax
 81313f8:	85 c0                	test   %eax,%eax
 81313fa:	7e 12                	jle    813140e <_ZN12advancealtar25CharacAdvanceAltarManager9decTicketEv+0x58>
 81313fc:	8b 45 08             	mov    0x8(%ebp),%eax
 81313ff:	8b 00                	mov    (%eax),%eax
 8131401:	8b 50 08             	mov    0x8(%eax),%edx
 8131404:	83 ea 01             	sub    $0x1,%edx
 8131407:	89 50 08             	mov    %edx,0x8(%eax)
 813140a:	c6 45 ff 01          	movb   $0x1,-0x1(%ebp)
 813140e:	80 7d ff 00          	cmpb   $0x0,-0x1(%ebp)
 8131412:	74 0c                	je     8131420 <_ZN12advancealtar25CharacAdvanceAltarManager9decTicketEv+0x6a>
 8131414:	8b 45 08             	mov    0x8(%ebp),%eax
 8131417:	8b 00                	mov    (%eax),%eax
 8131419:	c6 80 cc 00 00 00 01 	movb   $0x1,0xcc(%eax)
 8131420:	0f b6 45 ff          	movzbl -0x1(%ebp),%eax
 8131424:	c9                   	leave
 8131425:	c3                   	ret

```

```c
// advancealtar::CharacAdvanceAltarManager::decTicket @ 0x81313b6

/* advancealtar::CharacAdvanceAltarManager::decTicket() */

char __thiscall advancealtar::CharacAdvanceAltarManager::decTicket(CharacAdvanceAltarManager *this)

{
  undefined1 local_5;
  
  if (*(int *)this == 0) {
    local_5 = '\0';
  }
  else {
    local_5 = '\0';
    if (*(int *)(*(int *)this + 4) < 1) {
      if (0 < *(int *)(*(int *)this + 8)) {
        *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) + -1;
        local_5 = '\x01';
      }
    }
    else {
      *(int *)(*(int *)this + 4) = *(int *)(*(int *)this + 4) + -1;
      local_5 = '\x01';
    }
    if (local_5 != '\0') {
      *(undefined1 *)(*(int *)this + 0xcc) = 1;
    }
  }
  return local_5;
}

```

---

## exchangeSlot

```asm
// === 08131f0a advancealtar::CharacAdvanceAltarManager::exchangeSlot  [0x08131f0a-0x8132233] ===
 8131f0a:	55                   	push   %ebp
 8131f0b:	89 e5                	mov    %esp,%ebp
 8131f0d:	83 ec 48             	sub    $0x48,%esp
 8131f10:	8b 45 0c             	mov    0xc(%ebp),%eax
 8131f13:	8b 10                	mov    (%eax),%edx
 8131f15:	8b 45 10             	mov    0x10(%ebp),%eax
 8131f18:	8b 00                	mov    (%eax),%eax
 8131f1a:	39 c2                	cmp    %eax,%edx
 8131f1c:	74 0a                	je     8131f28 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x1e>
 8131f1e:	b8 02 00 00 00       	mov    $0x2,%eax
 8131f23:	e9 0a 03 00 00       	jmp    8132232 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x328>
 8131f28:	8b 45 08             	mov    0x8(%ebp),%eax
 8131f2b:	8b 00                	mov    (%eax),%eax
 8131f2d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8131f30:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8131f34:	75 0a                	jne    8131f40 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x36>
 8131f36:	b8 03 00 00 00       	mov    $0x3,%eax
 8131f3b:	e9 f2 02 00 00       	jmp    8132232 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x328>
 8131f40:	8b 45 0c             	mov    0xc(%ebp),%eax
 8131f43:	8b 00                	mov    (%eax),%eax
 8131f45:	89 44 24 04          	mov    %eax,0x4(%esp)
 8131f49:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8131f4c:	89 04 24             	mov    %eax,(%esp)
 8131f4f:	e8 b8 7a 76 00       	call   8899a0c <_ZN12advancealtar16AdvanceAltarData10getSlotMapENS_20AdvanceAltarSlotType1TE>
 8131f54:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8131f57:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8131f5b:	75 0a                	jne    8131f67 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x5d>
 8131f5d:	b8 04 00 00 00       	mov    $0x4,%eax
 8131f62:	e9 cb 02 00 00       	jmp    8132232 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x328>
 8131f67:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8131f6a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8131f6d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131f71:	89 04 24             	mov    %eax,(%esp)
 8131f74:	e8 49 42 00 00       	call   81361c2 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE5beginEv>
 8131f79:	83 ec 04             	sub    $0x4,%esp
 8131f7c:	eb 76                	jmp    8131ff4 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0xea>
 8131f7e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8131f81:	89 04 24             	mov    %eax,(%esp)
 8131f84:	e8 d7 42 00 00       	call   8136260 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 8131f89:	0f b6 50 06          	movzbl 0x6(%eax),%edx
 8131f8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8131f90:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8131f94:	38 c2                	cmp    %al,%dl
 8131f96:	75 36                	jne    8131fce <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0xc4>
 8131f98:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8131f9b:	89 04 24             	mov    %eax,(%esp)
 8131f9e:	e8 bd 42 00 00       	call   8136260 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 8131fa3:	8b 50 02             	mov    0x2(%eax),%edx
 8131fa6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8131fa9:	8b 00                	mov    (%eax),%eax
 8131fab:	39 c2                	cmp    %eax,%edx
 8131fad:	75 1f                	jne    8131fce <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0xc4>
 8131faf:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8131fb2:	89 04 24             	mov    %eax,(%esp)
 8131fb5:	e8 a6 42 00 00       	call   8136260 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 8131fba:	8b 50 07             	mov    0x7(%eax),%edx
 8131fbd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8131fc0:	8b 40 08             	mov    0x8(%eax),%eax
 8131fc3:	39 c2                	cmp    %eax,%edx
 8131fc5:	75 07                	jne    8131fce <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0xc4>
 8131fc7:	b8 01 00 00 00       	mov    $0x1,%eax
 8131fcc:	eb 05                	jmp    8131fd3 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0xc9>
 8131fce:	b8 00 00 00 00       	mov    $0x0,%eax
 8131fd3:	84 c0                	test   %al,%al
 8131fd5:	75 4e                	jne    8132025 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x11b>
 8131fd7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8131fda:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8131fe1:	00 
 8131fe2:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8131fe5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131fe9:	89 04 24             	mov    %eax,(%esp)
 8131fec:	e8 31 42 00 00       	call   8136222 <_ZNSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEppEi>
 8131ff1:	83 ec 04             	sub    $0x4,%esp
 8131ff4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8131ff7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8131ffa:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131ffe:	89 04 24             	mov    %eax,(%esp)
 8132001:	e8 e2 41 00 00       	call   81361e8 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE3endEv>
 8132006:	83 ec 04             	sub    $0x4,%esp
 8132009:	8d 45 d0             	lea    -0x30(%ebp),%eax
 813200c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8132010:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8132013:	89 04 24             	mov    %eax,(%esp)
 8132016:	e8 f3 41 00 00       	call   813620e <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEneERKS5_>
 813201b:	84 c0                	test   %al,%al
 813201d:	0f 85 5b ff ff ff    	jne    8131f7e <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x74>
 8132023:	eb 01                	jmp    8132026 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x11c>
 8132025:	90                   	nop
 8132026:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8132029:	8b 55 f4             	mov    -0xc(%ebp),%edx
 813202c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132030:	89 04 24             	mov    %eax,(%esp)
 8132033:	e8 8a 41 00 00       	call   81361c2 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE5beginEv>
 8132038:	83 ec 04             	sub    $0x4,%esp
 813203b:	eb 76                	jmp    81320b3 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x1a9>
 813203d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8132040:	89 04 24             	mov    %eax,(%esp)
 8132043:	e8 18 42 00 00       	call   8136260 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 8132048:	0f b6 50 06          	movzbl 0x6(%eax),%edx
 813204c:	8b 45 10             	mov    0x10(%ebp),%eax
 813204f:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8132053:	38 c2                	cmp    %al,%dl
 8132055:	75 36                	jne    813208d <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x183>
 8132057:	8d 45 c8             	lea    -0x38(%ebp),%eax
 813205a:	89 04 24             	mov    %eax,(%esp)
 813205d:	e8 fe 41 00 00       	call   8136260 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 8132062:	8b 50 02             	mov    0x2(%eax),%edx
 8132065:	8b 45 10             	mov    0x10(%ebp),%eax
 8132068:	8b 00                	mov    (%eax),%eax
 813206a:	39 c2                	cmp    %eax,%edx
 813206c:	75 1f                	jne    813208d <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x183>
 813206e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8132071:	89 04 24             	mov    %eax,(%esp)
 8132074:	e8 e7 41 00 00       	call   8136260 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 8132079:	8b 50 07             	mov    0x7(%eax),%edx
 813207c:	8b 45 10             	mov    0x10(%ebp),%eax
 813207f:	8b 40 08             	mov    0x8(%eax),%eax
 8132082:	39 c2                	cmp    %eax,%edx
 8132084:	75 07                	jne    813208d <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x183>
 8132086:	b8 01 00 00 00       	mov    $0x1,%eax
 813208b:	eb 05                	jmp    8132092 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x188>
 813208d:	b8 00 00 00 00       	mov    $0x0,%eax
 8132092:	84 c0                	test   %al,%al
 8132094:	75 4e                	jne    81320e4 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x1da>
 8132096:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8132099:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81320a0:	00 
 81320a1:	8d 55 c8             	lea    -0x38(%ebp),%edx
 81320a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 81320a8:	89 04 24             	mov    %eax,(%esp)
 81320ab:	e8 72 41 00 00       	call   8136222 <_ZNSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEppEi>
 81320b0:	83 ec 04             	sub    $0x4,%esp
 81320b3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81320b6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81320b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81320bd:	89 04 24             	mov    %eax,(%esp)
 81320c0:	e8 23 41 00 00       	call   81361e8 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE3endEv>
 81320c5:	83 ec 04             	sub    $0x4,%esp
 81320c8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81320cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81320cf:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81320d2:	89 04 24             	mov    %eax,(%esp)
 81320d5:	e8 34 41 00 00       	call   813620e <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEneERKS5_>
 81320da:	84 c0                	test   %al,%al
 81320dc:	0f 85 5b ff ff ff    	jne    813203d <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x133>
 81320e2:	eb 01                	jmp    81320e5 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x1db>
 81320e4:	90                   	nop
 81320e5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81320e8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81320eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 81320ef:	89 04 24             	mov    %eax,(%esp)
 81320f2:	e8 f1 40 00 00       	call   81361e8 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE3endEv>
 81320f7:	83 ec 04             	sub    $0x4,%esp
 81320fa:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81320fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8132101:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8132104:	89 04 24             	mov    %eax,(%esp)
 8132107:	e8 62 41 00 00       	call   813626e <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEeqERKS5_>
 813210c:	84 c0                	test   %al,%al
 813210e:	75 2b                	jne    813213b <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x231>
 8132110:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8132113:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8132116:	89 54 24 04          	mov    %edx,0x4(%esp)
 813211a:	89 04 24             	mov    %eax,(%esp)
 813211d:	e8 c6 40 00 00       	call   81361e8 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE3endEv>
 8132122:	83 ec 04             	sub    $0x4,%esp
 8132125:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8132128:	89 44 24 04          	mov    %eax,0x4(%esp)
 813212c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 813212f:	89 04 24             	mov    %eax,(%esp)
 8132132:	e8 37 41 00 00       	call   813626e <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEeqERKS5_>
 8132137:	84 c0                	test   %al,%al
 8132139:	74 07                	je     8132142 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x238>
 813213b:	b8 01 00 00 00       	mov    $0x1,%eax
 8132140:	eb 05                	jmp    8132147 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x23d>
 8132142:	b8 00 00 00 00       	mov    $0x0,%eax
 8132147:	84 c0                	test   %al,%al
 8132149:	74 0a                	je     8132155 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x24b>
 813214b:	b8 03 00 00 00       	mov    $0x3,%eax
 8132150:	e9 dd 00 00 00       	jmp    8132232 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x328>
 8132155:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8132158:	89 04 24             	mov    %eax,(%esp)
 813215b:	e8 00 41 00 00       	call   8136260 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 8132160:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8132164:	84 c0                	test   %al,%al
 8132166:	75 13                	jne    813217b <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x271>
 8132168:	8d 45 c8             	lea    -0x38(%ebp),%eax
 813216b:	89 04 24             	mov    %eax,(%esp)
 813216e:	e8 ed 40 00 00       	call   8136260 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 8132173:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8132177:	84 c0                	test   %al,%al
 8132179:	74 07                	je     8132182 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x278>
 813217b:	b8 01 00 00 00       	mov    $0x1,%eax
 8132180:	eb 05                	jmp    8132187 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x27d>
 8132182:	b8 00 00 00 00       	mov    $0x0,%eax
 8132187:	84 c0                	test   %al,%al
 8132189:	74 0a                	je     8132195 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x28b>
 813218b:	b8 03 00 00 00       	mov    $0x3,%eax
 8132190:	e9 9d 00 00 00       	jmp    8132232 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x328>
 8132195:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8132198:	8b 55 f4             	mov    -0xc(%ebp),%edx
 813219b:	89 54 24 04          	mov    %edx,0x4(%esp)
 813219f:	89 04 24             	mov    %eax,(%esp)
 81321a2:	e8 41 40 00 00       	call   81361e8 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE3endEv>
 81321a7:	83 ec 04             	sub    $0x4,%esp
 81321aa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81321ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 81321b1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81321b4:	89 04 24             	mov    %eax,(%esp)
 81321b7:	e8 52 40 00 00       	call   813620e <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEneERKS5_>
 81321bc:	84 c0                	test   %al,%al
 81321be:	74 32                	je     81321f2 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x2e8>
 81321c0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81321c3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81321c6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81321ca:	89 04 24             	mov    %eax,(%esp)
 81321cd:	e8 16 40 00 00       	call   81361e8 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE3endEv>
 81321d2:	83 ec 04             	sub    $0x4,%esp
 81321d5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81321d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81321dc:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81321df:	89 04 24             	mov    %eax,(%esp)
 81321e2:	e8 27 40 00 00       	call   813620e <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEneERKS5_>
 81321e7:	84 c0                	test   %al,%al
 81321e9:	74 07                	je     81321f2 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x2e8>
 81321eb:	b8 01 00 00 00       	mov    $0x1,%eax
 81321f0:	eb 05                	jmp    81321f7 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x2ed>
 81321f2:	b8 00 00 00 00       	mov    $0x0,%eax
 81321f7:	84 c0                	test   %al,%al
 81321f9:	74 28                	je     8132223 <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_+0x319>
 81321fb:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81321fe:	89 04 24             	mov    %eax,(%esp)
 8132201:	e8 5a 40 00 00       	call   8136260 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 8132206:	8b 55 10             	mov    0x10(%ebp),%edx
 8132209:	8b 52 08             	mov    0x8(%edx),%edx
 813220c:	89 50 07             	mov    %edx,0x7(%eax)
 813220f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8132212:	89 04 24             	mov    %eax,(%esp)
 8132215:	e8 46 40 00 00       	call   8136260 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 813221a:	8b 55 0c             	mov    0xc(%ebp),%edx
 813221d:	8b 52 08             	mov    0x8(%edx),%edx
 8132220:	89 50 07             	mov    %edx,0x7(%eax)
 8132223:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8132226:	c6 80 cc 00 00 00 01 	movb   $0x1,0xcc(%eax)
 813222d:	b8 00 00 00 00       	mov    $0x0,%eax
 8132232:	c9                   	leave
 8132233:	c3                   	ret

```

```c
// advancealtar::CharacAdvanceAltarManager::exchangeSlot @ 0x8131f0a

/* advancealtar::CharacAdvanceAltarManager::exchangeSlot(CMDPacketStruct::_SetSlotData&,
   CMDPacketStruct::_SetSlotData&) */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::exchangeSlot
          (CharacAdvanceAltarManager *this,_SetSlotData *param_1,_SetSlotData *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_3c [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_38 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_34 [4];
  _Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_30 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_2c [4];
  _Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_28 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_24 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_20 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_1c [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_18 [4];
  AdvanceAltarData *local_14;
  int local_10;
  
  if (*(int *)param_1 != *(int *)param_2) {
    return 2;
  }
  local_14 = *(AdvanceAltarData **)this;
  if (local_14 == (AdvanceAltarData *)0x0) {
    return 3;
  }
  local_10 = AdvanceAltarData::getSlotMap(local_14,*(undefined4 *)param_1);
  if (local_10 == 0) {
    return 4;
  }
  std::
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  ::begin(local_38);
  while( true ) {
    std::
    map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
    ::end(local_34);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                       local_38,(_Rb_tree_iterator *)local_34);
    if (cVar2 == '\0') break;
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                       local_38);
    if (((*(_SetSlotData *)(iVar3 + 6) == param_1[4]) &&
        (iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                 operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *
                            )local_38), *(int *)(iVar3 + 2) == *(int *)param_1)) &&
       (iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                           local_38), *(int *)(iVar3 + 7) == *(int *)(param_1 + 8))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator++
              (local_30,(int)local_38);
  }
  std::
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  ::begin(local_3c);
  while( true ) {
    std::
    map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
    ::end(local_2c);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                       local_3c,(_Rb_tree_iterator *)local_2c);
    if (cVar2 == '\0') break;
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                       local_3c);
    if (((*(_SetSlotData *)(iVar3 + 6) == param_2[4]) &&
        (iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                 operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *
                            )local_3c), *(int *)(iVar3 + 2) == *(int *)param_2)) &&
       (iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                           local_3c), *(int *)(iVar3 + 7) == *(int *)(param_2 + 8))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator++
              (local_28,(int)local_3c);
  }
  std::
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  ::end(local_24);
  cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator==
                    ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                     local_38,(_Rb_tree_iterator *)local_24);
  if (cVar2 == '\0') {
    std::
    map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
    ::end(local_20);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator==
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                       local_3c,(_Rb_tree_iterator *)local_20);
    if (cVar2 != '\0') goto LAB_0813213b;
    bVar1 = false;
  }
  else {
LAB_0813213b:
    bVar1 = true;
  }
  if (bVar1) {
    return 3;
  }
  iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator->
                    ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                     local_38);
  if ((*(char *)(iVar3 + 1) == '\0') &&
     (iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                         local_3c), *(char *)(iVar3 + 1) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 3;
  }
  std::
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  ::end(local_1c);
  cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator!=
                    ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                     local_38,(_Rb_tree_iterator *)local_1c);
  if (cVar2 != '\0') {
    std::
    map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
    ::end(local_18);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                       local_3c,(_Rb_tree_iterator *)local_18);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_081321f7;
    }
  }
  bVar1 = false;
LAB_081321f7:
  if (bVar1) {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                       local_38);
    *(undefined4 *)(iVar3 + 7) = *(undefined4 *)(param_2 + 8);
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                       local_3c);
    *(undefined4 *)(iVar3 + 7) = *(undefined4 *)(param_1 + 8);
  }
  local_14[0xcc] = (AdvanceAltarData)0x1;
  return 0;
}

```

---

## getAdvanceAltarDataByIndex

```asm
// === 081316e8 advancealtar::CharacAdvanceAltarManager::getAdvanceAltarDataByIndex  [0x081316e8-0x813170f] ===
 81316e8:	55                   	push   %ebp
 81316e9:	89 e5                	mov    %esp,%ebp
 81316eb:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81316ef:	78 06                	js     81316f7 <_ZN12advancealtar25CharacAdvanceAltarManager26getAdvanceAltarDataByIndexEi+0xf>
 81316f1:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81316f5:	7e 07                	jle    81316fe <_ZN12advancealtar25CharacAdvanceAltarManager26getAdvanceAltarDataByIndexEi+0x16>
 81316f7:	b8 00 00 00 00       	mov    $0x0,%eax
 81316fc:	eb 0f                	jmp    813170d <_ZN12advancealtar25CharacAdvanceAltarManager26getAdvanceAltarDataByIndexEi+0x25>
 81316fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8131701:	69 c0 d0 00 00 00    	imul   $0xd0,%eax,%eax
 8131707:	03 45 08             	add    0x8(%ebp),%eax
 813170a:	83 c0 04             	add    $0x4,%eax
 813170d:	5d                   	pop    %ebp
 813170e:	c3                   	ret
 813170f:	90                   	nop

```

```c
// advancealtar::CharacAdvanceAltarManager::getAdvanceAltarDataByIndex @ 0x81316e8

/* advancealtar::CharacAdvanceAltarManager::getAdvanceAltarDataByIndex(int) */

CharacAdvanceAltarManager * __thiscall
advancealtar::CharacAdvanceAltarManager::getAdvanceAltarDataByIndex
          (CharacAdvanceAltarManager *this,int param_1)

{
  CharacAdvanceAltarManager *pCVar1;
  
  if ((param_1 < 0) || (0 < param_1)) {
    pCVar1 = (CharacAdvanceAltarManager *)0x0;
  }
  else {
    pCVar1 = this + param_1 * 0xd0 + 4;
  }
  return pCVar1;
}

```

---

## getCharacAdvanceAltarDbData

```asm
// === 08131710 advancealtar::CharacAdvanceAltarManager::getCharacAdvanceAltarDbData  [0x08131710-0x8131759] ===
 8131710:	55                   	push   %ebp
 8131711:	89 e5                	mov    %esp,%ebp
 8131713:	83 ec 28             	sub    $0x28,%esp
 8131716:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 813171d:	eb 2e                	jmp    813174d <_ZNK12advancealtar25CharacAdvanceAltarManager27getCharacAdvanceAltarDbDataERNS_25_CharacAdvanceAltarDbDataE+0x3d>
 813171f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8131722:	69 c0 18 05 00 00    	imul   $0x518,%eax,%eax
 8131728:	03 45 0c             	add    0xc(%ebp),%eax
 813172b:	8d 50 04             	lea    0x4(%eax),%edx
 813172e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8131731:	69 c0 d0 00 00 00    	imul   $0xd0,%eax,%eax
 8131737:	03 45 08             	add    0x8(%ebp),%eax
 813173a:	83 c0 04             	add    $0x4,%eax
 813173d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131741:	89 04 24             	mov    %eax,(%esp)
 8131744:	e8 8f 7f 76 00       	call   88996d8 <_ZNK12advancealtar16AdvanceAltarData3getERNS_19_AdvanceAltarDbDataE>
 8131749:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 813174d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8131751:	0f 9e c0             	setle  %al
 8131754:	84 c0                	test   %al,%al
 8131756:	75 c7                	jne    813171f <_ZNK12advancealtar25CharacAdvanceAltarManager27getCharacAdvanceAltarDbDataERNS_25_CharacAdvanceAltarDbDataE+0xf>
 8131758:	c9                   	leave
 8131759:	c3                   	ret

```

```c
// advancealtar::CharacAdvanceAltarManager::getCharacAdvanceAltarDbData @ 0x8131710

/* advancealtar::CharacAdvanceAltarManager::getCharacAdvanceAltarDbData(advancealtar::_CharacAdvanceAltarDbData&)
   const */

void __thiscall
advancealtar::CharacAdvanceAltarManager::getCharacAdvanceAltarDbData
          (CharacAdvanceAltarManager *this,_CharacAdvanceAltarDbData *param_1)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 1; local_10 = local_10 + 1) {
    AdvanceAltarData::get
              ((AdvanceAltarData *)(this + local_10 * 0xd0 + 4),
               (_AdvanceAltarDbData *)(param_1 + local_10 * 0x518 + 4));
  }
  return;
}

```

---

## getClearStageSummary

```asm
// === 081318e2 advancealtar::CharacAdvanceAltarManager::getClearStageSummary  [0x081318e2-0x81319ad] ===
 81318e2:	55                   	push   %ebp
 81318e3:	89 e5                	mov    %esp,%ebp
 81318e5:	83 ec 28             	sub    $0x28,%esp
 81318e8:	8b 45 08             	mov    0x8(%ebp),%eax
 81318eb:	8b 00                	mov    (%eax),%eax
 81318ed:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81318f0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81318f4:	0f 84 b0 00 00 00    	je     81319aa <_ZNK12advancealtar25CharacAdvanceAltarManager20getClearStageSummaryEPi+0xc8>
 81318fa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81318fd:	8d 50 24             	lea    0x24(%eax),%edx
 8131900:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8131903:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131907:	89 04 24             	mov    %eax,(%esp)
 813190a:	e8 c9 45 00 00       	call   8135ed8 <_ZNKSt3mapIiN12advancealtar6_StageESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 813190f:	83 ec 04             	sub    $0x4,%esp
 8131912:	eb 62                	jmp    8131976 <_ZNK12advancealtar25CharacAdvanceAltarManager20getClearStageSummaryEPi+0x94>
 8131914:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8131917:	89 04 24             	mov    %eax,(%esp)
 813191a:	e8 57 46 00 00       	call   8135f76 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEptEv>
 813191f:	8b 40 08             	mov    0x8(%eax),%eax
 8131922:	83 f8 01             	cmp    $0x1,%eax
 8131925:	74 18                	je     813193f <_ZNK12advancealtar25CharacAdvanceAltarManager20getClearStageSummaryEPi+0x5d>
 8131927:	83 f8 02             	cmp    $0x2,%eax
 813192a:	74 06                	je     8131932 <_ZNK12advancealtar25CharacAdvanceAltarManager20getClearStageSummaryEPi+0x50>
 813192c:	85 c0                	test   %eax,%eax
 813192e:	74 1c                	je     813194c <_ZNK12advancealtar25CharacAdvanceAltarManager20getClearStageSummaryEPi+0x6a>
 8131930:	eb 27                	jmp    8131959 <_ZNK12advancealtar25CharacAdvanceAltarManager20getClearStageSummaryEPi+0x77>
 8131932:	8b 45 0c             	mov    0xc(%ebp),%eax
 8131935:	83 c0 08             	add    $0x8,%eax
 8131938:	8b 10                	mov    (%eax),%edx
 813193a:	83 c2 01             	add    $0x1,%edx
 813193d:	89 10                	mov    %edx,(%eax)
 813193f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8131942:	83 c0 04             	add    $0x4,%eax
 8131945:	8b 10                	mov    (%eax),%edx
 8131947:	83 c2 01             	add    $0x1,%edx
 813194a:	89 10                	mov    %edx,(%eax)
 813194c:	8b 45 0c             	mov    0xc(%ebp),%eax
 813194f:	8b 00                	mov    (%eax),%eax
 8131951:	8d 50 01             	lea    0x1(%eax),%edx
 8131954:	8b 45 0c             	mov    0xc(%ebp),%eax
 8131957:	89 10                	mov    %edx,(%eax)
 8131959:	8d 45 f0             	lea    -0x10(%ebp),%eax
 813195c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8131963:	00 
 8131964:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8131967:	89 54 24 04          	mov    %edx,0x4(%esp)
 813196b:	89 04 24             	mov    %eax,(%esp)
 813196e:	e8 c5 45 00 00       	call   8135f38 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEppEi>
 8131973:	83 ec 04             	sub    $0x4,%esp
 8131976:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8131979:	8d 50 24             	lea    0x24(%eax),%edx
 813197c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 813197f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131983:	89 04 24             	mov    %eax,(%esp)
 8131986:	e8 73 45 00 00       	call   8135efe <_ZNKSt3mapIiN12advancealtar6_StageESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 813198b:	83 ec 04             	sub    $0x4,%esp
 813198e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8131991:	89 44 24 04          	mov    %eax,0x4(%esp)
 8131995:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8131998:	89 04 24             	mov    %eax,(%esp)
 813199b:	e8 84 45 00 00       	call   8135f24 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEneERKS5_>
 81319a0:	84 c0                	test   %al,%al
 81319a2:	0f 85 6c ff ff ff    	jne    8131914 <_ZNK12advancealtar25CharacAdvanceAltarManager20getClearStageSummaryEPi+0x32>
 81319a8:	eb 01                	jmp    81319ab <_ZNK12advancealtar25CharacAdvanceAltarManager20getClearStageSummaryEPi+0xc9>
 81319aa:	90                   	nop
 81319ab:	c9                   	leave
 81319ac:	c3                   	ret
 81319ad:	90                   	nop

```

```c
// advancealtar::CharacAdvanceAltarManager::getClearStageSummary @ 0x81318e2

/* advancealtar::CharacAdvanceAltarManager::getClearStageSummary(int*) const */

void __thiscall
advancealtar::CharacAdvanceAltarManager::getClearStageSummary
          (CharacAdvanceAltarManager *this,int *param_1)

{
  char cVar1;
  int iVar2;
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  local_1c [4];
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  local_18 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> local_14 [4];
  int local_10;
  
  local_10 = *(int *)this;
  if (local_10 != 0) {
    std::
    map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
    ::begin(local_1c);
    while( true ) {
      std::
      map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
      ::end(local_18);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator!=
                        ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> *)
                         local_1c,(_Rb_tree_const_iterator *)local_18);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> *)
                         local_1c);
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 1) {
LAB_0813193f:
        param_1[1] = param_1[1] + 1;
LAB_0813194c:
        *param_1 = *param_1 + 1;
      }
      else {
        if (iVar2 == 2) {
          param_1[2] = param_1[2] + 1;
          goto LAB_0813193f;
        }
        if (iVar2 == 0) goto LAB_0813194c;
      }
      std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator++
                (local_14,(int)local_1c);
    }
  }
  return;
}

```

---

## getCurrentRidableId

```asm
// === 081312d0 advancealtar::CharacAdvanceAltarManager::getCurrentRidableId  [0x081312d0-0x81312eb] ===
 81312d0:	55                   	push   %ebp
 81312d1:	89 e5                	mov    %esp,%ebp
 81312d3:	8b 45 08             	mov    0x8(%ebp),%eax
 81312d6:	8b 00                	mov    (%eax),%eax
 81312d8:	85 c0                	test   %eax,%eax
 81312da:	75 07                	jne    81312e3 <_ZNK12advancealtar25CharacAdvanceAltarManager19getCurrentRidableIdEv+0x13>
 81312dc:	b8 00 00 00 00       	mov    $0x0,%eax
 81312e1:	eb 07                	jmp    81312ea <_ZNK12advancealtar25CharacAdvanceAltarManager19getCurrentRidableIdEv+0x1a>
 81312e3:	8b 45 08             	mov    0x8(%ebp),%eax
 81312e6:	8b 00                	mov    (%eax),%eax
 81312e8:	8b 00                	mov    (%eax),%eax
 81312ea:	5d                   	pop    %ebp
 81312eb:	c3                   	ret

```

```c
// advancealtar::CharacAdvanceAltarManager::getCurrentRidableId @ 0x81312d0

/* advancealtar::CharacAdvanceAltarManager::getCurrentRidableId() const */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::getCurrentRidableId(CharacAdvanceAltarManager *this)

{
  undefined4 uVar1;
  
  if (*(int *)this == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined4 **)this;
  }
  return uVar1;
}

```

---

## getSlotItem

```asm
// === 08132638 advancealtar::CharacAdvanceAltarManager::getSlotItem  [0x08132638-0x81328e9] ===
 8132638:	55                   	push   %ebp
 8132639:	89 e5                	mov    %esp,%ebp
 813263b:	53                   	push   %ebx
 813263c:	81 ec 84 00 00 00    	sub    $0x84,%esp
 8132642:	8b 45 08             	mov    0x8(%ebp),%eax
 8132645:	8b 00                	mov    (%eax),%eax
 8132647:	89 45 dc             	mov    %eax,-0x24(%ebp)
 813264a:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 813264e:	0f 84 90 02 00 00    	je     81328e4 <_ZNK12advancealtar25CharacAdvanceAltarManager11getSlotItemERSt3mapIhNS_9_SlotItemESt4lessIhESaISt4pairIKhS2_EEE+0x2ac>
 8132654:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8132657:	05 84 00 00 00       	add    $0x84,%eax
 813265c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 813265f:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8132662:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8132665:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132669:	89 04 24             	mov    %eax,(%esp)
 813266c:	e8 85 3c 00 00       	call   81362f6 <_ZNKSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE5beginEv>
 8132671:	83 ec 04             	sub    $0x4,%esp
 8132674:	e9 3a 02 00 00       	jmp    81328b3 <_ZNK12advancealtar25CharacAdvanceAltarManager11getSlotItemERSt3mapIhNS_9_SlotItemESt4lessIhESaISt4pairIKhS2_EEE+0x27b>
 8132679:	8b 45 dc             	mov    -0x24(%ebp),%eax
 813267c:	83 c0 3c             	add    $0x3c,%eax
 813267f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8132682:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8132685:	89 04 24             	mov    %eax,(%esp)
 8132688:	e8 07 3d 00 00       	call   8136394 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 813268d:	8d 50 07             	lea    0x7(%eax),%edx
 8132690:	8d 45 98             	lea    -0x68(%ebp),%eax
 8132693:	89 54 24 08          	mov    %edx,0x8(%esp)
 8132697:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 813269a:	89 54 24 04          	mov    %edx,0x4(%esp)
 813269e:	89 04 24             	mov    %eax,(%esp)
 81326a1:	e8 b6 3a 00 00       	call   813615c <_ZNKSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 81326a6:	83 ec 04             	sub    $0x4,%esp
 81326a9:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81326ac:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81326af:	89 54 24 04          	mov    %edx,0x4(%esp)
 81326b3:	89 04 24             	mov    %eax,(%esp)
 81326b6:	e8 cd 3a 00 00       	call   8136188 <_ZNKSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 81326bb:	83 ec 04             	sub    $0x4,%esp
 81326be:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81326c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81326c5:	8d 45 98             	lea    -0x68(%ebp),%eax
 81326c8:	89 04 24             	mov    %eax,(%esp)
 81326cb:	e8 d2 3c 00 00       	call   81363a2 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEneERKS5_>
 81326d0:	84 c0                	test   %al,%al
 81326d2:	0f 84 be 01 00 00    	je     8132896 <_ZNK12advancealtar25CharacAdvanceAltarManager11getSlotItemERSt3mapIhNS_9_SlotItemESt4lessIhESaISt4pairIKhS2_EEE+0x25e>
 81326d8:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81326db:	89 04 24             	mov    %eax,(%esp)
 81326de:	e8 ff 20 00 00       	call   81347e2 <_ZN12advancealtar9_SlotItemC1Ev>
 81326e3:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81326e6:	89 04 24             	mov    %eax,(%esp)
 81326e9:	e8 a6 3c 00 00       	call   8136394 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 81326ee:	0f b6 40 06          	movzbl 0x6(%eax),%eax
 81326f2:	88 45 8c             	mov    %al,-0x74(%ebp)
 81326f5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81326f8:	8b 00                	mov    (%eax),%eax
 81326fa:	89 c3                	mov    %eax,%ebx
 81326fc:	e8 9a 9a f9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8132701:	05 1c 63 00 00       	add    $0x631c,%eax
 8132706:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 813270d:	00 
 813270e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8132712:	89 04 24             	mov    %eax,(%esp)
 8132715:	e8 ce e8 76 00       	call   88a0fe8 <_ZN12advancealtar25AdvanceAltarShopParameter20getBuyUpgradeDataVecEiNS_20AdvanceAltarShopType1TE>
 813271a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 813271d:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8132721:	0f 84 65 01 00 00    	je     813288c <_ZNK12advancealtar25CharacAdvanceAltarManager11getSlotItemERSt3mapIhNS_9_SlotItemESt4lessIhESaISt4pairIKhS2_EEE+0x254>
 8132727:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 813272e:	8d 45 88             	lea    -0x78(%ebp),%eax
 8132731:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8132734:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132738:	89 04 24             	mov    %eax,(%esp)
 813273b:	e8 5e 39 00 00       	call   813609e <_ZNSt6vectorIN12advancealtar14BuyUpgradeDataESaIS1_EE5beginEv>
 8132740:	83 ec 04             	sub    $0x4,%esp
 8132743:	eb 51                	jmp    8132796 <_ZNK12advancealtar25CharacAdvanceAltarManager11getSlotItemERSt3mapIhNS_9_SlotItemESt4lessIhESaISt4pairIKhS2_EEE+0x15e>
 8132745:	8d 45 88             	lea    -0x78(%ebp),%eax
 8132748:	89 04 24             	mov    %eax,(%esp)
 813274b:	e8 f8 39 00 00       	call   8136148 <_ZNK9__gnu_cxx17__normal_iteratorIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEptEv>
 8132750:	8b 18                	mov    (%eax),%ebx
 8132752:	8d 45 98             	lea    -0x68(%ebp),%eax
 8132755:	89 04 24             	mov    %eax,(%esp)
 8132758:	e8 59 3c 00 00       	call   81363b6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEptEv>
 813275d:	8b 40 08             	mov    0x8(%eax),%eax
 8132760:	39 c3                	cmp    %eax,%ebx
 8132762:	0f 94 c0             	sete   %al
 8132765:	84 c0                	test   %al,%al
 8132767:	74 10                	je     8132779 <_ZNK12advancealtar25CharacAdvanceAltarManager11getSlotItemERSt3mapIhNS_9_SlotItemESt4lessIhESaISt4pairIKhS2_EEE+0x141>
 8132769:	8d 45 88             	lea    -0x78(%ebp),%eax
 813276c:	89 04 24             	mov    %eax,(%esp)
 813276f:	e8 de 39 00 00       	call   8136152 <_ZNK9__gnu_cxx17__normal_iteratorIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEdeEv>
 8132774:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8132777:	eb 48                	jmp    81327c1 <_ZNK12advancealtar25CharacAdvanceAltarManager11getSlotItemERSt3mapIhNS_9_SlotItemESt4lessIhESaISt4pairIKhS2_EEE+0x189>
 8132779:	8d 45 ac             	lea    -0x54(%ebp),%eax
 813277c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8132783:	00 
 8132784:	8d 55 88             	lea    -0x78(%ebp),%edx
 8132787:	89 54 24 04          	mov    %edx,0x4(%esp)
 813278b:	89 04 24             	mov    %eax,(%esp)
 813278e:	e8 81 39 00 00       	call   8136114 <_ZN9__gnu_cxx17__normal_iteratorIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEppEi>
 8132793:	83 ec 04             	sub    $0x4,%esp
 8132796:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8132799:	8b 55 e8             	mov    -0x18(%ebp),%edx
 813279c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81327a0:	89 04 24             	mov    %eax,(%esp)
 81327a3:	e8 1a 39 00 00       	call   81360c2 <_ZNSt6vectorIN12advancealtar14BuyUpgradeDataESaIS1_EE3endEv>
 81327a8:	83 ec 04             	sub    $0x4,%esp
 81327ab:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81327ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 81327b2:	8d 45 88             	lea    -0x78(%ebp),%eax
 81327b5:	89 04 24             	mov    %eax,(%esp)
 81327b8:	e8 2b 39 00 00       	call   81360e8 <_ZN9__gnu_cxxneIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 81327bd:	84 c0                	test   %al,%al
 81327bf:	75 84                	jne    8132745 <_ZNK12advancealtar25CharacAdvanceAltarManager11getSlotItemERSt3mapIhNS_9_SlotItemESt4lessIhESaISt4pairIKhS2_EEE+0x10d>
 81327c1:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81327c5:	0f 84 c4 00 00 00    	je     813288f <_ZNK12advancealtar25CharacAdvanceAltarManager11getSlotItemERSt3mapIhNS_9_SlotItemESt4lessIhESaISt4pairIKhS2_EEE+0x257>
 81327cb:	8d 45 98             	lea    -0x68(%ebp),%eax
 81327ce:	89 04 24             	mov    %eax,(%esp)
 81327d1:	e8 e0 3b 00 00       	call   81363b6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEptEv>
 81327d6:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 81327da:	0f bf d8             	movswl %ax,%ebx
 81327dd:	8d 45 88             	lea    -0x78(%ebp),%eax
 81327e0:	89 04 24             	mov    %eax,(%esp)
 81327e3:	e8 60 39 00 00       	call   8136148 <_ZNK9__gnu_cxx17__normal_iteratorIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEptEv>
 81327e8:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81327ef:	00 
 81327f0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81327f4:	89 04 24             	mov    %eax,(%esp)
 81327f7:	e8 50 06 77 00       	call   88a2e4c <_ZN12advancealtar14BuyUpgradeData17getFieldDataPointEiNS_9FieldType1TE>
 81327fc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81327ff:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8132803:	0f 84 89 00 00 00    	je     8132892 <_ZNK12advancealtar25CharacAdvanceAltarManager11getSlotItemERSt3mapIhNS_9_SlotItemESt4lessIhESaISt4pairIKhS2_EEE+0x25a>
 8132809:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813280c:	8b 58 04             	mov    0x4(%eax),%ebx
 813280f:	e8 87 99 f9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8132814:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8132818:	89 04 24             	mov    %eax,(%esp)
 813281b:	e8 12 d2 22 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8132820:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8132823:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8132827:	74 6c                	je     8132895 <_ZNK12advancealtar25CharacAdvanceAltarManager11getSlotItemERSt3mapIhNS_9_SlotItemESt4lessIhESaISt4pairIKhS2_EEE+0x25d>
 8132829:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813282c:	8b 40 04             	mov    0x4(%eax),%eax
 813282f:	89 45 90             	mov    %eax,-0x70(%ebp)
 8132832:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8132835:	89 04 24             	mov    %eax,(%esp)
 8132838:	e8 8d 1f 00 00       	call   81347ca <_ZNK5CItem23getAdvanceAltarNeedGageEv>
 813283d:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8132840:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8132843:	8d 55 8c             	lea    -0x74(%ebp),%edx
 8132846:	89 54 24 08          	mov    %edx,0x8(%esp)
 813284a:	8d 55 8c             	lea    -0x74(%ebp),%edx
 813284d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132851:	89 04 24             	mov    %eax,(%esp)
 8132854:	e8 6a 3b 00 00       	call   81363c3 <_ZSt9make_pairIRhRN12advancealtar9_SlotItemEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 8132859:	83 ec 04             	sub    $0x4,%esp
 813285c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 813285f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8132863:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8132866:	89 04 24             	mov    %eax,(%esp)
 8132869:	e8 94 3b 00 00       	call   8136402 <_ZNSt4pairIKhN12advancealtar9_SlotItemEEC1IhS2_EEOS_IT_T0_E>
 813286e:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8132871:	8d 55 b8             	lea    -0x48(%ebp),%edx
 8132874:	89 54 24 08          	mov    %edx,0x8(%esp)
 8132878:	8b 55 0c             	mov    0xc(%ebp),%edx
 813287b:	89 54 24 04          	mov    %edx,0x4(%esp)
 813287f:	89 04 24             	mov    %eax,(%esp)
 8132882:	e8 b9 3b 00 00       	call   8136440 <_ZNSt3mapIhN12advancealtar9_SlotItemESt4lessIhESaISt4pairIKhS1_EEE6insertERKS6_>
 8132887:	83 ec 04             	sub    $0x4,%esp
 813288a:	eb 0a                	jmp    8132896 <_ZNK12advancealtar25CharacAdvanceAltarManager11getSlotItemERSt3mapIhNS_9_SlotItemESt4lessIhESaISt4pairIKhS2_EEE+0x25e>
 813288c:	90                   	nop
 813288d:	eb 07                	jmp    8132896 <_ZNK12advancealtar25CharacAdvanceAltarManager11getSlotItemERSt3mapIhNS_9_SlotItemESt4lessIhESaISt4pairIKhS2_EEE+0x25e>
 813288f:	90                   	nop
 8132890:	eb 04                	jmp    8132896 <_ZNK12advancealtar25CharacAdvanceAltarManager11getSlotItemERSt3mapIhNS_9_SlotItemESt4lessIhESaISt4pairIKhS2_EEE+0x25e>
 8132892:	90                   	nop
 8132893:	eb 01                	jmp    8132896 <_ZNK12advancealtar25CharacAdvanceAltarManager11getSlotItemERSt3mapIhNS_9_SlotItemESt4lessIhESaISt4pairIKhS2_EEE+0x25e>
 8132895:	90                   	nop
 8132896:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8132899:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81328a0:	00 
 81328a1:	8d 55 9c             	lea    -0x64(%ebp),%edx
 81328a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 81328a8:	89 04 24             	mov    %eax,(%esp)
 81328ab:	e8 a6 3a 00 00       	call   8136356 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKhN12advancealtar5_SlotEEEppEi>
 81328b0:	83 ec 04             	sub    $0x4,%esp
 81328b3:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81328b6:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81328b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81328bd:	89 04 24             	mov    %eax,(%esp)
 81328c0:	e8 57 3a 00 00       	call   813631c <_ZNKSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE3endEv>
 81328c5:	83 ec 04             	sub    $0x4,%esp
 81328c8:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81328cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81328cf:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81328d2:	89 04 24             	mov    %eax,(%esp)
 81328d5:	e8 68 3a 00 00       	call   8136342 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhN12advancealtar5_SlotEEEneERKS5_>
 81328da:	84 c0                	test   %al,%al
 81328dc:	0f 85 97 fd ff ff    	jne    8132679 <_ZNK12advancealtar25CharacAdvanceAltarManager11getSlotItemERSt3mapIhNS_9_SlotItemESt4lessIhESaISt4pairIKhS2_EEE+0x41>
 81328e2:	eb 01                	jmp    81328e5 <_ZNK12advancealtar25CharacAdvanceAltarManager11getSlotItemERSt3mapIhNS_9_SlotItemESt4lessIhESaISt4pairIKhS2_EEE+0x2ad>
 81328e4:	90                   	nop
 81328e5:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 81328e8:	c9                   	leave
 81328e9:	c3                   	ret

```

```c
// advancealtar::CharacAdvanceAltarManager::getSlotItem @ 0x8132638

/* advancealtar::CharacAdvanceAltarManager::getSlotItem(std::map<unsigned char,
   advancealtar::_SlotItem, std::less<unsigned char>, std::allocator<std::pair<unsigned char const,
   advancealtar::_SlotItem> > >&) const */

void advancealtar::CharacAdvanceAltarManager::getSlotItem(map *param_1)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  CDataManager *this;
  __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_7c [4];
  _SlotItem local_78 [4];
  undefined4 local_74;
  undefined4 local_70;
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> local_6c [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_68 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_64 [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_60 [4];
  __normal_iterator local_5c [4];
  __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_58 [4];
  pair local_54 [8];
  pair<unsigned_char_const,advancealtar::_SlotItem> local_4c [16];
  uchar local_3c [16];
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_2c [4];
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  int local_14;
  CItem *local_10;
  
  local_28 = *(undefined4 **)param_1;
  if (local_28 != (undefined4 *)0x0) {
    local_24 = local_28 + 0x21;
    std::
    map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
    ::begin(local_68);
    while( true ) {
      std::
      map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
      ::end(local_64);
      cVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
              operator!=((_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                          *)local_68,(_Rb_tree_const_iterator *)local_64);
      if (cVar3 == '\0') break;
      local_20 = local_28 + 0xf;
      std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator->
                ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                 local_68);
      std::
      map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
      ::find((int *)local_6c);
      std::
      map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
      ::end(local_60);
      cVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator!=
                        (local_6c,(_Rb_tree_const_iterator *)local_60);
      if (cVar3 != '\0') {
        _SlotItem::_SlotItem(local_78);
        iVar4 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                operator->((_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                            *)local_68);
        local_78[0] = *(_SlotItem *)(iVar4 + 6);
        uVar7 = *local_28;
        iVar4 = G_CDataManager();
        local_1c = AdvanceAltarShopParameter::getBuyUpgradeDataVec
                             ((AdvanceAltarShopParameter *)(iVar4 + 0x631c),uVar7,0);
        if (local_1c != 0) {
          local_18 = 0;
          std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::
          begin();
          while( true ) {
            std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::
            end();
            bVar2 = __gnu_cxx::operator!=(local_7c,local_5c);
            if (!bVar2) break;
            piVar5 = (int *)__gnu_cxx::
                            __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                            ::operator->(local_7c);
            iVar4 = *piVar5;
            iVar6 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::
                    operator->(local_6c);
            if (iVar4 == *(int *)(iVar6 + 8)) {
              local_18 = __gnu_cxx::
                         __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                         ::operator*(local_7c);
              break;
            }
            __gnu_cxx::
            __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
            ::operator++(local_58,(int)local_7c);
          }
          if (local_18 != 0) {
            iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::
                    operator->(local_6c);
            sVar1 = *(short *)(iVar4 + 0xc);
            uVar7 = __gnu_cxx::
                    __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                    ::operator->(local_7c);
            local_14 = BuyUpgradeData::getFieldDataPoint(uVar7,(int)sVar1,1);
            if (local_14 != 0) {
              iVar4 = *(int *)(local_14 + 4);
              this = (CDataManager *)G_CDataManager();
              local_10 = (CItem *)CDataManager::find_item(this,iVar4);
              if (local_10 != (CItem *)0x0) {
                local_74 = *(undefined4 *)(local_14 + 4);
                local_70 = CItem::getAdvanceAltarNeedGage(local_10);
                std::make_pair<unsigned_char&,advancealtar::_SlotItem&>(local_3c,local_78);
                std::pair<unsigned_char_const,advancealtar::_SlotItem>::
                pair<unsigned_char,advancealtar::_SlotItem>(local_4c,local_3c);
                std::
                map<unsigned_char,advancealtar::_SlotItem,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>>
                ::insert(local_54);
              }
            }
          }
        }
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator++
                (local_2c,(int)local_68);
    }
  }
  return;
}

```

---

## getTowerInfo

```asm
// === 081328ea advancealtar::CharacAdvanceAltarManager::getTowerInfo  [0x081328ea-0x8132abd] ===
 81328ea:	55                   	push   %ebp
 81328eb:	89 e5                	mov    %esp,%ebp
 81328ed:	53                   	push   %ebx
 81328ee:	83 ec 44             	sub    $0x44,%esp
 81328f1:	8b 45 08             	mov    0x8(%ebp),%eax
 81328f4:	8b 00                	mov    (%eax),%eax
 81328f6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81328f9:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81328fd:	75 0a                	jne    8132909 <_ZNK12advancealtar25CharacAdvanceAltarManager12getTowerInfoEiRiS1_+0x1f>
 81328ff:	b8 00 00 00 00       	mov    $0x0,%eax
 8132904:	e9 b0 01 00 00       	jmp    8132ab9 <_ZNK12advancealtar25CharacAdvanceAltarManager12getTowerInfoEiRiS1_+0x1cf>
 8132909:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813290c:	83 c0 6c             	add    $0x6c,%eax
 813290f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8132912:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8132915:	8d 55 0c             	lea    0xc(%ebp),%edx
 8132918:	89 54 24 08          	mov    %edx,0x8(%esp)
 813291c:	8b 55 e8             	mov    -0x18(%ebp),%edx
 813291f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132923:	89 04 24             	mov    %eax,(%esp)
 8132926:	e8 31 38 00 00       	call   813615c <_ZNKSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 813292b:	83 ec 04             	sub    $0x4,%esp
 813292e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8132931:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8132934:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132938:	89 04 24             	mov    %eax,(%esp)
 813293b:	e8 48 38 00 00       	call   8136188 <_ZNKSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 8132940:	83 ec 04             	sub    $0x4,%esp
 8132943:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8132946:	89 44 24 04          	mov    %eax,0x4(%esp)
 813294a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 813294d:	89 04 24             	mov    %eax,(%esp)
 8132950:	e8 4d 3a 00 00       	call   81363a2 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEneERKS5_>
 8132955:	84 c0                	test   %al,%al
 8132957:	0f 84 57 01 00 00    	je     8132ab4 <_ZNK12advancealtar25CharacAdvanceAltarManager12getTowerInfoEiRiS1_+0x1ca>
 813295d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8132960:	8b 00                	mov    (%eax),%eax
 8132962:	89 c3                	mov    %eax,%ebx
 8132964:	e8 32 98 f9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8132969:	05 1c 63 00 00       	add    $0x631c,%eax
 813296e:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8132975:	00 
 8132976:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 813297a:	89 04 24             	mov    %eax,(%esp)
 813297d:	e8 66 e6 76 00       	call   88a0fe8 <_ZN12advancealtar25AdvanceAltarShopParameter20getBuyUpgradeDataVecEiNS_20AdvanceAltarShopType1TE>
 8132982:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8132985:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8132989:	75 0a                	jne    8132995 <_ZNK12advancealtar25CharacAdvanceAltarManager12getTowerInfoEiRiS1_+0xab>
 813298b:	b8 00 00 00 00       	mov    $0x0,%eax
 8132990:	e9 24 01 00 00       	jmp    8132ab9 <_ZNK12advancealtar25CharacAdvanceAltarManager12getTowerInfoEiRiS1_+0x1cf>
 8132995:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 813299c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 813299f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81329a2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81329a6:	89 04 24             	mov    %eax,(%esp)
 81329a9:	e8 f0 36 00 00       	call   813609e <_ZNSt6vectorIN12advancealtar14BuyUpgradeDataESaIS1_EE5beginEv>
 81329ae:	83 ec 04             	sub    $0x4,%esp
 81329b1:	eb 46                	jmp    81329f9 <_ZNK12advancealtar25CharacAdvanceAltarManager12getTowerInfoEiRiS1_+0x10f>
 81329b3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81329b6:	89 04 24             	mov    %eax,(%esp)
 81329b9:	e8 8a 37 00 00       	call   8136148 <_ZNK9__gnu_cxx17__normal_iteratorIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEptEv>
 81329be:	8b 10                	mov    (%eax),%edx
 81329c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81329c3:	39 c2                	cmp    %eax,%edx
 81329c5:	0f 94 c0             	sete   %al
 81329c8:	84 c0                	test   %al,%al
 81329ca:	74 10                	je     81329dc <_ZNK12advancealtar25CharacAdvanceAltarManager12getTowerInfoEiRiS1_+0xf2>
 81329cc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81329cf:	89 04 24             	mov    %eax,(%esp)
 81329d2:	e8 7b 37 00 00       	call   8136152 <_ZNK9__gnu_cxx17__normal_iteratorIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEdeEv>
 81329d7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81329da:	eb 48                	jmp    8132a24 <_ZNK12advancealtar25CharacAdvanceAltarManager12getTowerInfoEiRiS1_+0x13a>
 81329dc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81329df:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81329e6:	00 
 81329e7:	8d 55 d0             	lea    -0x30(%ebp),%edx
 81329ea:	89 54 24 04          	mov    %edx,0x4(%esp)
 81329ee:	89 04 24             	mov    %eax,(%esp)
 81329f1:	e8 1e 37 00 00       	call   8136114 <_ZN9__gnu_cxx17__normal_iteratorIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEppEi>
 81329f6:	83 ec 04             	sub    $0x4,%esp
 81329f9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81329fc:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81329ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132a03:	89 04 24             	mov    %eax,(%esp)
 8132a06:	e8 b7 36 00 00       	call   81360c2 <_ZNSt6vectorIN12advancealtar14BuyUpgradeDataESaIS1_EE3endEv>
 8132a0b:	83 ec 04             	sub    $0x4,%esp
 8132a0e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8132a11:	89 44 24 04          	mov    %eax,0x4(%esp)
 8132a15:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8132a18:	89 04 24             	mov    %eax,(%esp)
 8132a1b:	e8 c8 36 00 00       	call   81360e8 <_ZN9__gnu_cxxneIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8132a20:	84 c0                	test   %al,%al
 8132a22:	75 8f                	jne    81329b3 <_ZNK12advancealtar25CharacAdvanceAltarManager12getTowerInfoEiRiS1_+0xc9>
 8132a24:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8132a28:	75 0a                	jne    8132a34 <_ZNK12advancealtar25CharacAdvanceAltarManager12getTowerInfoEiRiS1_+0x14a>
 8132a2a:	b8 00 00 00 00       	mov    $0x0,%eax
 8132a2f:	e9 85 00 00 00       	jmp    8132ab9 <_ZNK12advancealtar25CharacAdvanceAltarManager12getTowerInfoEiRiS1_+0x1cf>
 8132a34:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8132a37:	89 04 24             	mov    %eax,(%esp)
 8132a3a:	e8 77 39 00 00       	call   81363b6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEptEv>
 8132a3f:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 8132a43:	98                   	cwtl
 8132a44:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8132a4b:	00 
 8132a4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8132a50:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8132a53:	89 04 24             	mov    %eax,(%esp)
 8132a56:	e8 f1 03 77 00       	call   88a2e4c <_ZN12advancealtar14BuyUpgradeData17getFieldDataPointEiNS_9FieldType1TE>
 8132a5b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8132a5e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8132a62:	75 07                	jne    8132a6b <_ZNK12advancealtar25CharacAdvanceAltarManager12getTowerInfoEiRiS1_+0x181>
 8132a64:	b8 00 00 00 00       	mov    $0x0,%eax
 8132a69:	eb 4e                	jmp    8132ab9 <_ZNK12advancealtar25CharacAdvanceAltarManager12getTowerInfoEiRiS1_+0x1cf>
 8132a6b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8132a6e:	89 04 24             	mov    %eax,(%esp)
 8132a71:	e8 40 39 00 00       	call   81363b6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEptEv>
 8132a76:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 8132a7a:	66 85 c0             	test   %ax,%ax
 8132a7d:	0f 94 c0             	sete   %al
 8132a80:	84 c0                	test   %al,%al
 8132a82:	74 07                	je     8132a8b <_ZNK12advancealtar25CharacAdvanceAltarManager12getTowerInfoEiRiS1_+0x1a1>
 8132a84:	b8 00 00 00 00       	mov    $0x0,%eax
 8132a89:	eb 2e                	jmp    8132ab9 <_ZNK12advancealtar25CharacAdvanceAltarManager12getTowerInfoEiRiS1_+0x1cf>
 8132a8b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8132a8e:	8b 50 04             	mov    0x4(%eax),%edx
 8132a91:	8b 45 10             	mov    0x10(%ebp),%eax
 8132a94:	89 10                	mov    %edx,(%eax)
 8132a96:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8132a99:	89 04 24             	mov    %eax,(%esp)
 8132a9c:	e8 15 39 00 00       	call   81363b6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEptEv>
 8132aa1:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 8132aa5:	0f bf d0             	movswl %ax,%edx
 8132aa8:	8b 45 14             	mov    0x14(%ebp),%eax
 8132aab:	89 10                	mov    %edx,(%eax)
 8132aad:	b8 01 00 00 00       	mov    $0x1,%eax
 8132ab2:	eb 05                	jmp    8132ab9 <_ZNK12advancealtar25CharacAdvanceAltarManager12getTowerInfoEiRiS1_+0x1cf>
 8132ab4:	b8 00 00 00 00       	mov    $0x0,%eax
 8132ab9:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8132abc:	c9                   	leave
 8132abd:	c3                   	ret

```

```c
// advancealtar::CharacAdvanceAltarManager::getTowerInfo @ 0x81328ea

/* advancealtar::CharacAdvanceAltarManager::getTowerInfo(int, int&, int&) const */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::getTowerInfo
          (CharacAdvanceAltarManager *this,int param_1,int *param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_34 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> local_30 [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_2c [4];
  __normal_iterator local_28 [4];
  __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_24 [4];
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = *(undefined4 **)this;
  if (local_20 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    local_1c = local_20 + 0x1b;
    std::
    map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
    ::find((int *)local_30);
    std::
    map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
    ::end(local_2c);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator!=
                      (local_30,(_Rb_tree_const_iterator *)local_2c);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = *local_20;
      iVar4 = G_CDataManager();
      local_18 = AdvanceAltarShopParameter::getBuyUpgradeDataVec
                           ((AdvanceAltarShopParameter *)(iVar4 + 0x631c),uVar3,2);
      if (local_18 == 0) {
        uVar3 = 0;
      }
      else {
        local_14 = 0;
        std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::
        begin();
        while( true ) {
          std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::
          end();
          bVar2 = __gnu_cxx::operator!=(local_34,local_28);
          if (!bVar2) break;
          piVar5 = (int *)__gnu_cxx::
                          __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                          ::operator->(local_34);
          if (*piVar5 == param_1) {
            local_14 = __gnu_cxx::
                       __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                       ::operator*(local_34);
            break;
          }
          __gnu_cxx::
          __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
          ::operator++(local_24,(int)local_34);
        }
        if (local_14 == 0) {
          uVar3 = 0;
        }
        else {
          iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::
                  operator->(local_30);
          local_10 = BuyUpgradeData::getFieldDataPoint(local_14,(int)*(short *)(iVar4 + 0xc),1);
          if (local_10 == 0) {
            uVar3 = 0;
          }
          else {
            iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::
                    operator->(local_30);
            if (*(short *)(iVar4 + 0xc) == 0) {
              uVar3 = 0;
            }
            else {
              *param_2 = *(int *)(local_10 + 4);
              iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::
                      operator->(local_30);
              *param_3 = (int)*(short *)(iVar4 + 0xc);
              uVar3 = 1;
            }
          }
        }
      }
    }
  }
  return uVar3;
}

```

---

## gmSetStar

```asm
// === 08133720 advancealtar::CharacAdvanceAltarManager::gmSetStar  [0x08133720-0x813375b] ===
 8133720:	55                   	push   %ebp
 8133721:	89 e5                	mov    %esp,%ebp
 8133723:	8b 45 08             	mov    0x8(%ebp),%eax
 8133726:	8b 00                	mov    (%eax),%eax
 8133728:	85 c0                	test   %eax,%eax
 813372a:	74 2c                	je     8133758 <_ZN12advancealtar25CharacAdvanceAltarManager9gmSetStarEi+0x38>
 813372c:	8b 45 08             	mov    0x8(%ebp),%eax
 813372f:	8b 00                	mov    (%eax),%eax
 8133731:	8b 55 0c             	mov    0xc(%ebp),%edx
 8133734:	89 50 0c             	mov    %edx,0xc(%eax)
 8133737:	8b 45 08             	mov    0x8(%ebp),%eax
 813373a:	8b 00                	mov    (%eax),%eax
 813373c:	8b 55 08             	mov    0x8(%ebp),%edx
 813373f:	8b 12                	mov    (%edx),%edx
 8133741:	8b 52 10             	mov    0x10(%edx),%edx
 8133744:	03 55 0c             	add    0xc(%ebp),%edx
 8133747:	89 50 14             	mov    %edx,0x14(%eax)
 813374a:	8b 45 08             	mov    0x8(%ebp),%eax
 813374d:	8b 00                	mov    (%eax),%eax
 813374f:	c6 80 cc 00 00 00 01 	movb   $0x1,0xcc(%eax)
 8133756:	eb 01                	jmp    8133759 <_ZN12advancealtar25CharacAdvanceAltarManager9gmSetStarEi+0x39>
 8133758:	90                   	nop
 8133759:	5d                   	pop    %ebp
 813375a:	c3                   	ret
 813375b:	90                   	nop

```

```c
// advancealtar::CharacAdvanceAltarManager::gmSetStar @ 0x8133720

/* advancealtar::CharacAdvanceAltarManager::gmSetStar(int) */

void __thiscall
advancealtar::CharacAdvanceAltarManager::gmSetStar(CharacAdvanceAltarManager *this,int param_1)

{
  if (*(int *)this != 0) {
    *(int *)(*(int *)this + 0xc) = param_1;
    *(int *)(*(int *)this + 0x14) = *(int *)(*(int *)this + 0x10) + param_1;
    *(undefined1 *)(*(int *)this + 0xcc) = 1;
  }
  return;
}

```

---

## gmSetTicket

```asm
// === 0813375c advancealtar::CharacAdvanceAltarManager::gmSetTicket  [0x0813375c-0x8133783] ===
 813375c:	55                   	push   %ebp
 813375d:	89 e5                	mov    %esp,%ebp
 813375f:	8b 45 08             	mov    0x8(%ebp),%eax
 8133762:	8b 00                	mov    (%eax),%eax
 8133764:	85 c0                	test   %eax,%eax
 8133766:	74 19                	je     8133781 <_ZN12advancealtar25CharacAdvanceAltarManager11gmSetTicketEi+0x25>
 8133768:	8b 45 08             	mov    0x8(%ebp),%eax
 813376b:	8b 00                	mov    (%eax),%eax
 813376d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8133770:	89 50 04             	mov    %edx,0x4(%eax)
 8133773:	8b 45 08             	mov    0x8(%ebp),%eax
 8133776:	8b 00                	mov    (%eax),%eax
 8133778:	c6 80 cc 00 00 00 01 	movb   $0x1,0xcc(%eax)
 813377f:	eb 01                	jmp    8133782 <_ZN12advancealtar25CharacAdvanceAltarManager11gmSetTicketEi+0x26>
 8133781:	90                   	nop
 8133782:	5d                   	pop    %ebp
 8133783:	c3                   	ret

```

```c
// advancealtar::CharacAdvanceAltarManager::gmSetTicket @ 0x813375c

/* advancealtar::CharacAdvanceAltarManager::gmSetTicket(int) */

void __thiscall
advancealtar::CharacAdvanceAltarManager::gmSetTicket(CharacAdvanceAltarManager *this,int param_1)

{
  if (*(int *)this != 0) {
    *(int *)(*(int *)this + 4) = param_1;
    *(undefined1 *)(*(int *)this + 0xcc) = 1;
  }
  return;
}

```

---

## isAvailableTciket

```asm
// === 081312ec advancealtar::CharacAdvanceAltarManager::isAvailableTciket  [0x081312ec-0x8131319] ===
 81312ec:	55                   	push   %ebp
 81312ed:	89 e5                	mov    %esp,%ebp
 81312ef:	8b 45 08             	mov    0x8(%ebp),%eax
 81312f2:	8b 00                	mov    (%eax),%eax
 81312f4:	85 c0                	test   %eax,%eax
 81312f6:	75 07                	jne    81312ff <_ZNK12advancealtar25CharacAdvanceAltarManager17isAvailableTciketEv+0x13>
 81312f8:	b8 00 00 00 00       	mov    $0x0,%eax
 81312fd:	eb 18                	jmp    8131317 <_ZNK12advancealtar25CharacAdvanceAltarManager17isAvailableTciketEv+0x2b>
 81312ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8131302:	8b 00                	mov    (%eax),%eax
 8131304:	8b 50 04             	mov    0x4(%eax),%edx
 8131307:	8b 45 08             	mov    0x8(%ebp),%eax
 813130a:	8b 00                	mov    (%eax),%eax
 813130c:	8b 40 08             	mov    0x8(%eax),%eax
 813130f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8131312:	85 c0                	test   %eax,%eax
 8131314:	0f 9f c0             	setg   %al
 8131317:	5d                   	pop    %ebp
 8131318:	c3                   	ret
 8131319:	90                   	nop

```

```c
// advancealtar::CharacAdvanceAltarManager::isAvailableTciket @ 0x81312ec

/* advancealtar::CharacAdvanceAltarManager::isAvailableTciket() const */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::isAvailableTciket(CharacAdvanceAltarManager *this)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)this == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)this + 4) + *(int *)(*(int *)this + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),0 < iVar1);
  }
  return uVar2;
}

```

---

## isEnterStage

```asm
// === 0813131a advancealtar::CharacAdvanceAltarManager::isEnterStage  [0x0813131a-0x81313b5] ===
 813131a:	55                   	push   %ebp
 813131b:	89 e5                	mov    %esp,%ebp
 813131d:	83 ec 28             	sub    $0x28,%esp
 8131320:	8b 45 08             	mov    0x8(%ebp),%eax
 8131323:	8b 00                	mov    (%eax),%eax
 8131325:	85 c0                	test   %eax,%eax
 8131327:	75 0a                	jne    8131333 <_ZNK12advancealtar25CharacAdvanceAltarManager12isEnterStageEi+0x19>
 8131329:	b8 00 00 00 00       	mov    $0x0,%eax
 813132e:	e9 81 00 00 00       	jmp    81313b4 <_ZNK12advancealtar25CharacAdvanceAltarManager12isEnterStageEi+0x9a>
 8131333:	8b 45 08             	mov    0x8(%ebp),%eax
 8131336:	8b 00                	mov    (%eax),%eax
 8131338:	8d 48 24             	lea    0x24(%eax),%ecx
 813133b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 813133e:	8d 55 0c             	lea    0xc(%ebp),%edx
 8131341:	89 54 24 08          	mov    %edx,0x8(%esp)
 8131345:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8131349:	89 04 24             	mov    %eax,(%esp)
 813134c:	e8 db 4a 00 00       	call   8135e2c <_ZNSt3mapIiN12advancealtar6_StageESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 8131351:	83 ec 04             	sub    $0x4,%esp
 8131354:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8131357:	89 44 24 04          	mov    %eax,0x4(%esp)
 813135b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 813135e:	89 04 24             	mov    %eax,(%esp)
 8131361:	e8 f2 4a 00 00       	call   8135e58 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 8131366:	8b 45 08             	mov    0x8(%ebp),%eax
 8131369:	8b 00                	mov    (%eax),%eax
 813136b:	8d 50 24             	lea    0x24(%eax),%edx
 813136e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8131371:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131375:	89 04 24             	mov    %eax,(%esp)
 8131378:	e8 eb 4a 00 00       	call   8135e68 <_ZNSt3mapIiN12advancealtar6_StageESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 813137d:	83 ec 04             	sub    $0x4,%esp
 8131380:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8131383:	89 44 24 04          	mov    %eax,0x4(%esp)
 8131387:	8d 45 f0             	lea    -0x10(%ebp),%eax
 813138a:	89 04 24             	mov    %eax,(%esp)
 813138d:	e8 c6 4a 00 00       	call   8135e58 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 8131392:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8131395:	89 44 24 04          	mov    %eax,0x4(%esp)
 8131399:	8d 45 e8             	lea    -0x18(%ebp),%eax
 813139c:	89 04 24             	mov    %eax,(%esp)
 813139f:	e8 ea 4a 00 00       	call   8135e8e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEeqERKS5_>
 81313a4:	84 c0                	test   %al,%al
 81313a6:	74 07                	je     81313af <_ZNK12advancealtar25CharacAdvanceAltarManager12isEnterStageEi+0x95>
 81313a8:	b8 00 00 00 00       	mov    $0x0,%eax
 81313ad:	eb 05                	jmp    81313b4 <_ZNK12advancealtar25CharacAdvanceAltarManager12isEnterStageEi+0x9a>
 81313af:	b8 01 00 00 00       	mov    $0x1,%eax
 81313b4:	c9                   	leave
 81313b5:	c3                   	ret

```

```c
// advancealtar::CharacAdvanceAltarManager::isEnterStage @ 0x813131a

/* advancealtar::CharacAdvanceAltarManager::isEnterStage(int) const */

undefined4 advancealtar::CharacAdvanceAltarManager::isEnterStage(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> local_1c [4];
  _Rb_tree_iterator local_18 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> local_14 [4];
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  local_10 [12];
  
  if (*(int *)param_1 == 0) {
    uVar2 = 0;
  }
  else {
    std::
    map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
    ::find((int *)local_18);
    std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::_Rb_tree_const_iterator
              (local_1c,local_18);
    std::
    map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
    ::end(local_10);
    std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::_Rb_tree_const_iterator
              (local_14,(_Rb_tree_iterator *)local_10);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator==
                      (local_1c,(_Rb_tree_const_iterator *)local_14);
    if (cVar1 == '\0') {
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

## isUpdated

```asm
// === 081316a0 advancealtar::CharacAdvanceAltarManager::isUpdated  [0x081316a0-0x81316e7] ===
 81316a0:	55                   	push   %ebp
 81316a1:	89 e5                	mov    %esp,%ebp
 81316a3:	83 ec 10             	sub    $0x10,%esp
 81316a6:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 81316ad:	eb 27                	jmp    81316d6 <_ZNK12advancealtar25CharacAdvanceAltarManager9isUpdatedEv+0x36>
 81316af:	8b 45 fc             	mov    -0x4(%ebp),%eax
 81316b2:	8b 55 08             	mov    0x8(%ebp),%edx
 81316b5:	69 c0 d0 00 00 00    	imul   $0xd0,%eax,%eax
 81316bb:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81316be:	05 c0 00 00 00       	add    $0xc0,%eax
 81316c3:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81316c7:	84 c0                	test   %al,%al
 81316c9:	74 07                	je     81316d2 <_ZNK12advancealtar25CharacAdvanceAltarManager9isUpdatedEv+0x32>
 81316cb:	b8 01 00 00 00       	mov    $0x1,%eax
 81316d0:	eb 14                	jmp    81316e6 <_ZNK12advancealtar25CharacAdvanceAltarManager9isUpdatedEv+0x46>
 81316d2:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 81316d6:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
 81316da:	0f 9e c0             	setle  %al
 81316dd:	84 c0                	test   %al,%al
 81316df:	75 ce                	jne    81316af <_ZNK12advancealtar25CharacAdvanceAltarManager9isUpdatedEv+0xf>
 81316e1:	b8 00 00 00 00       	mov    $0x0,%eax
 81316e6:	c9                   	leave
 81316e7:	c3                   	ret

```

```c
// advancealtar::CharacAdvanceAltarManager::isUpdated @ 0x81316a0

/* advancealtar::CharacAdvanceAltarManager::isUpdated() const */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::isUpdated(CharacAdvanceAltarManager *this)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0 < local_8) {
      return 0;
    }
    if (this[local_8 * 0xd0 + 0xd0] != (CharacAdvanceAltarManager)0x0) break;
    local_8 = local_8 + 1;
  }
  return 1;
}

```

---

## refillTicketFree

```asm
// === 0813159a advancealtar::CharacAdvanceAltarManager::refillTicketFree  [0x0813159a-0x8131615] ===
 813159a:	55                   	push   %ebp
 813159b:	89 e5                	mov    %esp,%ebp
 813159d:	53                   	push   %ebx
 813159e:	83 ec 24             	sub    $0x24,%esp
 81315a1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81315a8:	eb 5b                	jmp    8131605 <_ZN12advancealtar25CharacAdvanceAltarManager16refillTicketFreeEv+0x6b>
 81315aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81315ad:	8b 55 08             	mov    0x8(%ebp),%edx
 81315b0:	69 c0 d0 00 00 00    	imul   $0xd0,%eax,%eax
 81315b6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81315b9:	83 c0 04             	add    $0x4,%eax
 81315bc:	8b 00                	mov    (%eax),%eax
 81315be:	89 04 24             	mov    %eax,(%esp)
 81315c1:	e8 2a 7a 76 00       	call   8898ff0 <_ZN12advancealtar16isValidRidableIdENS_9RidableId1TE>
 81315c6:	84 c0                	test   %al,%al
 81315c8:	74 37                	je     8131601 <_ZN12advancealtar25CharacAdvanceAltarManager16refillTicketFreeEv+0x67>
 81315ca:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 81315cd:	e8 c9 ab f9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81315d2:	8b 80 64 63 00 00    	mov    0x6364(%eax),%eax
 81315d8:	8b 4d 08             	mov    0x8(%ebp),%ecx
 81315db:	69 d3 d0 00 00 00    	imul   $0xd0,%ebx,%edx
 81315e1:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 81315e4:	83 c2 08             	add    $0x8,%edx
 81315e7:	89 02                	mov    %eax,(%edx)
 81315e9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81315ec:	8b 55 08             	mov    0x8(%ebp),%edx
 81315ef:	69 c0 d0 00 00 00    	imul   $0xd0,%eax,%eax
 81315f5:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81315f8:	05 c0 00 00 00       	add    $0xc0,%eax
 81315fd:	c6 40 10 01          	movb   $0x1,0x10(%eax)
 8131601:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8131605:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8131609:	0f 9e c0             	setle  %al
 813160c:	84 c0                	test   %al,%al
 813160e:	75 9a                	jne    81315aa <_ZN12advancealtar25CharacAdvanceAltarManager16refillTicketFreeEv+0x10>
 8131610:	83 c4 24             	add    $0x24,%esp
 8131613:	5b                   	pop    %ebx
 8131614:	5d                   	pop    %ebp
 8131615:	c3                   	ret

```

```c
// advancealtar::CharacAdvanceAltarManager::refillTicketFree @ 0x813159a

/* advancealtar::CharacAdvanceAltarManager::refillTicketFree() */

void __thiscall
advancealtar::CharacAdvanceAltarManager::refillTicketFree(CharacAdvanceAltarManager *this)

{
  char cVar1;
  int iVar2;
  int local_10;
  
  for (local_10 = 0; local_10 < 1; local_10 = local_10 + 1) {
    cVar1 = isValidRidableId(*(undefined4 *)(this + local_10 * 0xd0 + 4));
    if (cVar1 != '\0') {
      iVar2 = G_CDataManager();
      *(undefined4 *)(this + local_10 * 0xd0 + 8) = *(undefined4 *)(iVar2 + 0x6364);
      this[local_10 * 0xd0 + 0xd0] = (CharacAdvanceAltarManager)0x1;
    }
  }
  return;
}

```

---

## reset

```asm
// === 08131660 advancealtar::CharacAdvanceAltarManager::reset  [0x08131660-0x813169f] ===
 8131660:	55                   	push   %ebp
 8131661:	89 e5                	mov    %esp,%ebp
 8131663:	83 ec 28             	sub    $0x28,%esp
 8131666:	8b 45 08             	mov    0x8(%ebp),%eax
 8131669:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 813166f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8131676:	eb 1b                	jmp    8131693 <_ZN12advancealtar25CharacAdvanceAltarManager5resetEv+0x33>
 8131678:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813167b:	69 c0 d0 00 00 00    	imul   $0xd0,%eax,%eax
 8131681:	03 45 08             	add    0x8(%ebp),%eax
 8131684:	83 c0 04             	add    $0x4,%eax
 8131687:	89 04 24             	mov    %eax,(%esp)
 813168a:	e8 b5 7b 76 00       	call   8899244 <_ZN12advancealtar16AdvanceAltarData5resetEv>
 813168f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8131693:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8131697:	0f 9e c0             	setle  %al
 813169a:	84 c0                	test   %al,%al
 813169c:	75 da                	jne    8131678 <_ZN12advancealtar25CharacAdvanceAltarManager5resetEv+0x18>
 813169e:	c9                   	leave
 813169f:	c3                   	ret

```

```c
// advancealtar::CharacAdvanceAltarManager::reset @ 0x8131660

/* advancealtar::CharacAdvanceAltarManager::reset() */

void __thiscall advancealtar::CharacAdvanceAltarManager::reset(CharacAdvanceAltarManager *this)

{
  int local_10;
  
  *(undefined4 *)this = 0;
  for (local_10 = 0; local_10 < 1; local_10 = local_10 + 1) {
    AdvanceAltarData::reset((AdvanceAltarData *)(this + local_10 * 0xd0 + 4));
  }
  return;
}

```

---

## resetSlot

```asm
// === 08132bfa advancealtar::CharacAdvanceAltarManager::resetSlot  [0x08132bfa-0x8132cb7] ===
 8132bfa:	55                   	push   %ebp
 8132bfb:	89 e5                	mov    %esp,%ebp
 8132bfd:	83 ec 28             	sub    $0x28,%esp
 8132c00:	8b 45 10             	mov    0x10(%ebp),%eax
 8132c03:	8b 00                	mov    (%eax),%eax
 8132c05:	89 44 24 04          	mov    %eax,0x4(%esp)
 8132c09:	8b 45 0c             	mov    0xc(%ebp),%eax
 8132c0c:	89 04 24             	mov    %eax,(%esp)
 8132c0f:	e8 f8 6d 76 00       	call   8899a0c <_ZN12advancealtar16AdvanceAltarData10getSlotMapENS_20AdvanceAltarSlotType1TE>
 8132c14:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8132c17:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8132c1b:	75 0a                	jne    8132c27 <_ZN12advancealtar25CharacAdvanceAltarManager9resetSlotERNS_16AdvanceAltarDataERKN15CMDPacketStruct12_SetSlotDataE+0x2d>
 8132c1d:	b8 03 00 00 00       	mov    $0x3,%eax
 8132c22:	e9 8f 00 00 00       	jmp    8132cb6 <_ZN12advancealtar25CharacAdvanceAltarManager9resetSlotERNS_16AdvanceAltarDataERKN15CMDPacketStruct12_SetSlotDataE+0xbc>
 8132c27:	8b 45 10             	mov    0x10(%ebp),%eax
 8132c2a:	8d 50 04             	lea    0x4(%eax),%edx
 8132c2d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8132c30:	89 54 24 08          	mov    %edx,0x8(%esp)
 8132c34:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8132c37:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132c3b:	89 04 24             	mov    %eax,(%esp)
 8132c3e:	e8 cb 38 00 00       	call   813650e <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE4findERS5_>
 8132c43:	83 ec 04             	sub    $0x4,%esp
 8132c46:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8132c49:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8132c4c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132c50:	89 04 24             	mov    %eax,(%esp)
 8132c53:	e8 90 35 00 00       	call   81361e8 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE3endEv>
 8132c58:	83 ec 04             	sub    $0x4,%esp
 8132c5b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8132c5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8132c62:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8132c65:	89 04 24             	mov    %eax,(%esp)
 8132c68:	e8 01 36 00 00       	call   813626e <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEeqERKS5_>
 8132c6d:	84 c0                	test   %al,%al
 8132c6f:	74 07                	je     8132c78 <_ZN12advancealtar25CharacAdvanceAltarManager9resetSlotERNS_16AdvanceAltarDataERKN15CMDPacketStruct12_SetSlotDataE+0x7e>
 8132c71:	b8 02 00 00 00       	mov    $0x2,%eax
 8132c76:	eb 3e                	jmp    8132cb6 <_ZN12advancealtar25CharacAdvanceAltarManager9resetSlotERNS_16AdvanceAltarDataERKN15CMDPacketStruct12_SetSlotDataE+0xbc>
 8132c78:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8132c7b:	89 04 24             	mov    %eax,(%esp)
 8132c7e:	e8 dd 35 00 00       	call   8136260 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 8132c83:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8132c87:	83 f0 01             	xor    $0x1,%eax
 8132c8a:	84 c0                	test   %al,%al
 8132c8c:	74 23                	je     8132cb1 <_ZN12advancealtar25CharacAdvanceAltarManager9resetSlotERNS_16AdvanceAltarDataERKN15CMDPacketStruct12_SetSlotDataE+0xb7>
 8132c8e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8132c91:	89 04 24             	mov    %eax,(%esp)
 8132c94:	e8 c7 35 00 00       	call   8136260 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 8132c99:	c7 40 07 00 00 00 00 	movl   $0x0,0x7(%eax)
 8132ca0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8132ca3:	c6 80 cc 00 00 00 01 	movb   $0x1,0xcc(%eax)
 8132caa:	b8 00 00 00 00       	mov    $0x0,%eax
 8132caf:	eb 05                	jmp    8132cb6 <_ZN12advancealtar25CharacAdvanceAltarManager9resetSlotERNS_16AdvanceAltarDataERKN15CMDPacketStruct12_SetSlotDataE+0xbc>
 8132cb1:	b8 02 00 00 00       	mov    $0x2,%eax
 8132cb6:	c9                   	leave
 8132cb7:	c3                   	ret

```

```c
// advancealtar::CharacAdvanceAltarManager::resetSlot @ 0x8132bfa

/* advancealtar::CharacAdvanceAltarManager::resetSlot(advancealtar::AdvanceAltarData&,
   CMDPacketStruct::_SetSlotData const&) */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::resetSlot
          (CharacAdvanceAltarManager *this,AdvanceAltarData *param_1,_SetSlotData *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_18 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_14 [4];
  int local_10;
  
  local_10 = AdvanceAltarData::getSlotMap(param_1,*(undefined4 *)param_2);
  if (local_10 == 0) {
    uVar2 = 3;
  }
  else {
    std::
    map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
    ::find((uchar *)local_18);
    std::
    map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
    ::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator==
                      (local_18,(_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') {
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator->
                        (local_18);
      if (*(char *)(iVar3 + 1) == '\x01') {
        uVar2 = 2;
      }
      else {
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                operator->(local_18);
        *(undefined4 *)(iVar3 + 7) = 0;
        param_1[0xcc] = (AdvanceAltarData)0x1;
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}

```

---

## resetStar

```asm
// === 081333b2 advancealtar::CharacAdvanceAltarManager::resetStar  [0x081333b2-0x813371f] ===
 81333b2:	55                   	push   %ebp
 81333b3:	89 e5                	mov    %esp,%ebp
 81333b5:	83 ec 48             	sub    $0x48,%esp
 81333b8:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81333bc:	74 09                	je     81333c7 <_ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE+0x15>
 81333be:	8b 45 08             	mov    0x8(%ebp),%eax
 81333c1:	8b 00                	mov    (%eax),%eax
 81333c3:	85 c0                	test   %eax,%eax
 81333c5:	75 0a                	jne    81333d1 <_ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE+0x1f>
 81333c7:	b8 02 00 00 00       	mov    $0x2,%eax
 81333cc:	e9 4c 03 00 00       	jmp    813371d <_ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE+0x36b>
 81333d1:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 81333d5:	0f 85 9a 01 00 00    	jne    8133575 <_ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE+0x1c3>
 81333db:	e8 bb 8d f9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81333e0:	05 34 63 00 00       	add    $0x6334,%eax
 81333e5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81333e8:	8b 45 08             	mov    0x8(%ebp),%eax
 81333eb:	8b 00                	mov    (%eax),%eax
 81333ed:	0f b7 40 1a          	movzwl 0x1a(%eax),%eax
 81333f1:	98                   	cwtl
 81333f2:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81333f5:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81333f8:	8d 55 d0             	lea    -0x30(%ebp),%edx
 81333fb:	89 54 24 08          	mov    %edx,0x8(%esp)
 81333ff:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8133402:	89 54 24 04          	mov    %edx,0x4(%esp)
 8133406:	89 04 24             	mov    %eax,(%esp)
 8133409:	e8 fe 32 00 00       	call   813670c <_ZNKSt3mapIiN12advancealtar18_StarRestFeeByGoldESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 813340e:	83 ec 04             	sub    $0x4,%esp
 8133411:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8133418:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 813341b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 813341e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8133422:	89 04 24             	mov    %eax,(%esp)
 8133425:	e8 0e 33 00 00       	call   8136738 <_ZNKSt3mapIiN12advancealtar18_StarRestFeeByGoldESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 813342a:	83 ec 04             	sub    $0x4,%esp
 813342d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8133430:	89 44 24 04          	mov    %eax,0x4(%esp)
 8133434:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8133437:	89 04 24             	mov    %eax,(%esp)
 813343a:	e8 1f 33 00 00       	call   813675e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar18_StarRestFeeByGoldEEEeqERKS5_>
 813343f:	84 c0                	test   %al,%al
 8133441:	74 17                	je     813345a <_ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE+0xa8>
 8133443:	e8 53 8d f9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8133448:	05 1c 63 00 00       	add    $0x631c,%eax
 813344d:	89 04 24             	mov    %eax,(%esp)
 8133450:	e8 6b f7 76 00       	call   88a2bc0 <_ZN12advancealtar25AdvanceAltarShopParameter22getMaxStarResetGoldFeeEv>
 8133455:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8133458:	eb 11                	jmp    813346b <_ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE+0xb9>
 813345a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 813345d:	89 04 24             	mov    %eax,(%esp)
 8133460:	e8 0d 33 00 00       	call   8136772 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar18_StarRestFeeByGoldEEEptEv>
 8133465:	8b 40 04             	mov    0x4(%eax),%eax
 8133468:	89 45 f4             	mov    %eax,-0xc(%ebp)
 813346b:	8b 45 0c             	mov    0xc(%ebp),%eax
 813346e:	89 04 24             	mov    %eax,(%esp)
 8133471:	e8 08 6e fa ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8133476:	89 04 24             	mov    %eax,(%esp)
 8133479:	e8 58 13 00 00       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 813347e:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8133481:	0f 9c c0             	setl   %al
 8133484:	84 c0                	test   %al,%al
 8133486:	74 0a                	je     8133492 <_ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE+0xe0>
 8133488:	b8 03 00 00 00       	mov    $0x3,%eax
 813348d:	e9 8b 02 00 00       	jmp    813371d <_ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE+0x36b>
 8133492:	8b 45 0c             	mov    0xc(%ebp),%eax
 8133495:	89 04 24             	mov    %eax,(%esp)
 8133498:	e8 f1 6d fa ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 813349d:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81334a4:	00 
 81334a5:	c7 44 24 08 32 00 00 	movl   $0x32,0x8(%esp)
 81334ac:	00 
 81334ad:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81334b0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81334b4:	89 04 24             	mov    %eax,(%esp)
 81334b7:	e8 90 c0 3c 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 81334bc:	83 f0 01             	xor    $0x1,%eax
 81334bf:	84 c0                	test   %al,%al
 81334c1:	74 0a                	je     81334cd <_ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE+0x11b>
 81334c3:	b8 03 00 00 00       	mov    $0x3,%eax
 81334c8:	e9 50 02 00 00       	jmp    813371d <_ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE+0x36b>
 81334cd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81334d4:	00 
 81334d5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81334dc:	00 
 81334dd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81334e4:	00 
 81334e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81334e8:	89 04 24             	mov    %eax,(%esp)
 81334eb:	e8 6a 91 54 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 81334f0:	8b 45 08             	mov    0x8(%ebp),%eax
 81334f3:	8b 00                	mov    (%eax),%eax
 81334f5:	0f b7 50 1a          	movzwl 0x1a(%eax),%edx
 81334f9:	83 c2 01             	add    $0x1,%edx
 81334fc:	66 89 50 1a          	mov    %dx,0x1a(%eax)
 8133500:	8b 45 08             	mov    0x8(%ebp),%eax
 8133503:	89 04 24             	mov    %eax,(%esp)
 8133506:	e8 83 fa ff ff       	call   8132f8e <_ZN12advancealtar25CharacAdvanceAltarManager14setDefaultSlotEv>
 813350b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8133512:	00 
 8133513:	8b 45 08             	mov    0x8(%ebp),%eax
 8133516:	89 04 24             	mov    %eax,(%esp)
 8133519:	e8 9a f7 ff ff       	call   8132cb8 <_ZN12advancealtar25CharacAdvanceAltarManager17setDefaultBuyItemENS_20AdvanceAltarShopType1TE>
 813351e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8133525:	00 
 8133526:	8b 45 08             	mov    0x8(%ebp),%eax
 8133529:	89 04 24             	mov    %eax,(%esp)
 813352c:	e8 87 f7 ff ff       	call   8132cb8 <_ZN12advancealtar25CharacAdvanceAltarManager17setDefaultBuyItemENS_20AdvanceAltarShopType1TE>
 8133531:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8133538:	00 
 8133539:	8b 45 08             	mov    0x8(%ebp),%eax
 813353c:	89 04 24             	mov    %eax,(%esp)
 813353f:	e8 74 f7 ff ff       	call   8132cb8 <_ZN12advancealtar25CharacAdvanceAltarManager17setDefaultBuyItemENS_20AdvanceAltarShopType1TE>
 8133544:	8b 45 08             	mov    0x8(%ebp),%eax
 8133547:	8b 00                	mov    (%eax),%eax
 8133549:	8d 50 24             	lea    0x24(%eax),%edx
 813354c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 813354f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8133553:	89 04 24             	mov    %eax,(%esp)
 8133556:	e8 25 32 00 00       	call   8136780 <_ZNSt3mapIiN12advancealtar6_StageESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 813355b:	83 ec 04             	sub    $0x4,%esp
 813355e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8133561:	89 44 24 04          	mov    %eax,0x4(%esp)
 8133565:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8133568:	89 04 24             	mov    %eax,(%esp)
 813356b:	e8 e8 28 00 00       	call   8135e58 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 8133570:	e9 cd 00 00 00       	jmp    8133642 <_ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE+0x290>
 8133575:	b8 02 00 00 00       	mov    $0x2,%eax
 813357a:	e9 9e 01 00 00       	jmp    813371d <_ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE+0x36b>
 813357f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8133582:	89 04 24             	mov    %eax,(%esp)
 8133585:	e8 ec 29 00 00       	call   8135f76 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEptEv>
 813358a:	8b 40 08             	mov    0x8(%eax),%eax
 813358d:	83 f8 ff             	cmp    $0xffffffff,%eax
 8133590:	0f 94 c0             	sete   %al
 8133593:	84 c0                	test   %al,%al
 8133595:	0f 85 89 00 00 00    	jne    8133624 <_ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE+0x272>
 813359b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 813359e:	89 04 24             	mov    %eax,(%esp)
 81335a1:	e8 d0 29 00 00       	call   8135f76 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEptEv>
 81335a6:	8b 40 04             	mov    0x4(%eax),%eax
 81335a9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81335b0:	00 
 81335b1:	89 44 24 08          	mov    %eax,0x8(%esp)
 81335b5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81335bc:	00 
 81335bd:	8b 45 08             	mov    0x8(%ebp),%eax
 81335c0:	89 04 24             	mov    %eax,(%esp)
 81335c3:	e8 58 f7 ff ff       	call   8132d20 <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE>
 81335c8:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81335cb:	89 04 24             	mov    %eax,(%esp)
 81335ce:	e8 a3 29 00 00       	call   8135f76 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEptEv>
 81335d3:	8b 40 04             	mov    0x4(%eax),%eax
 81335d6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81335dd:	00 
 81335de:	89 44 24 08          	mov    %eax,0x8(%esp)
 81335e2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81335e9:	00 
 81335ea:	8b 45 08             	mov    0x8(%ebp),%eax
 81335ed:	89 04 24             	mov    %eax,(%esp)
 81335f0:	e8 2b f7 ff ff       	call   8132d20 <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE>
 81335f5:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81335f8:	89 04 24             	mov    %eax,(%esp)
 81335fb:	e8 76 29 00 00       	call   8135f76 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEptEv>
 8133600:	8b 40 04             	mov    0x4(%eax),%eax
 8133603:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 813360a:	00 
 813360b:	89 44 24 08          	mov    %eax,0x8(%esp)
 813360f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8133616:	00 
 8133617:	8b 45 08             	mov    0x8(%ebp),%eax
 813361a:	89 04 24             	mov    %eax,(%esp)
 813361d:	e8 fe f6 ff ff       	call   8132d20 <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE>
 8133622:	eb 01                	jmp    8133625 <_ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE+0x273>
 8133624:	90                   	nop
 8133625:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8133628:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 813362f:	00 
 8133630:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8133633:	89 54 24 04          	mov    %edx,0x4(%esp)
 8133637:	89 04 24             	mov    %eax,(%esp)
 813363a:	e8 f9 28 00 00       	call   8135f38 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEppEi>
 813363f:	83 ec 04             	sub    $0x4,%esp
 8133642:	8b 45 08             	mov    0x8(%ebp),%eax
 8133645:	8b 00                	mov    (%eax),%eax
 8133647:	8d 50 24             	lea    0x24(%eax),%edx
 813364a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813364d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8133651:	89 04 24             	mov    %eax,(%esp)
 8133654:	e8 0f 28 00 00       	call   8135e68 <_ZNSt3mapIiN12advancealtar6_StageESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 8133659:	83 ec 04             	sub    $0x4,%esp
 813365c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813365f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8133663:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8133666:	89 04 24             	mov    %eax,(%esp)
 8133669:	e8 ea 27 00 00       	call   8135e58 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 813366e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8133671:	89 44 24 04          	mov    %eax,0x4(%esp)
 8133675:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8133678:	89 04 24             	mov    %eax,(%esp)
 813367b:	e8 a4 28 00 00       	call   8135f24 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEneERKS5_>
 8133680:	84 c0                	test   %al,%al
 8133682:	0f 85 f7 fe ff ff    	jne    813357f <_ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE+0x1cd>
 8133688:	8b 45 08             	mov    0x8(%ebp),%eax
 813368b:	8b 00                	mov    (%eax),%eax
 813368d:	8b 50 0c             	mov    0xc(%eax),%edx
 8133690:	8b 45 08             	mov    0x8(%ebp),%eax
 8133693:	8b 00                	mov    (%eax),%eax
 8133695:	8b 40 10             	mov    0x10(%eax),%eax
 8133698:	01 c2                	add    %eax,%edx
 813369a:	8b 45 08             	mov    0x8(%ebp),%eax
 813369d:	8b 00                	mov    (%eax),%eax
 813369f:	8b 40 14             	mov    0x14(%eax),%eax
 81336a2:	89 d1                	mov    %edx,%ecx
 81336a4:	29 c1                	sub    %eax,%ecx
 81336a6:	89 c8                	mov    %ecx,%eax
 81336a8:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81336ab:	8b 45 08             	mov    0x8(%ebp),%eax
 81336ae:	8b 00                	mov    (%eax),%eax
 81336b0:	8b 55 08             	mov    0x8(%ebp),%edx
 81336b3:	8b 12                	mov    (%edx),%edx
 81336b5:	8b 4a 0c             	mov    0xc(%edx),%ecx
 81336b8:	8b 55 08             	mov    0x8(%ebp),%edx
 81336bb:	8b 12                	mov    (%edx),%edx
 81336bd:	8b 52 10             	mov    0x10(%edx),%edx
 81336c0:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 81336c3:	89 50 14             	mov    %edx,0x14(%eax)
 81336c6:	8b 45 08             	mov    0x8(%ebp),%eax
 81336c9:	8b 00                	mov    (%eax),%eax
 81336cb:	c6 80 cc 00 00 00 01 	movb   $0x1,0xcc(%eax)
 81336d2:	c7 45 ec 02 00 00 00 	movl   $0x2,-0x14(%ebp)
 81336d9:	8b 45 10             	mov    0x10(%ebp),%eax
 81336dc:	83 f8 01             	cmp    $0x1,%eax
 81336df:	74 09                	je     81336ea <_ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE+0x338>
 81336e1:	c7 45 ec 02 00 00 00 	movl   $0x2,-0x14(%ebp)
 81336e8:	eb 07                	jmp    81336f1 <_ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE+0x33f>
 81336ea:	c7 45 ec 03 00 00 00 	movl   $0x3,-0x14(%ebp)
 81336f1:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81336f5:	7e 21                	jle    8133718 <_ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE+0x366>
 81336f7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81336fa:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81336fe:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8133705:	00 
 8133706:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8133709:	89 44 24 04          	mov    %eax,0x4(%esp)
 813370d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8133710:	89 04 24             	mov    %eax,(%esp)
 8133713:	e8 3e 06 00 00       	call   8133d56 <_ZN12advancealtar10HistoryLog7starAddER5CUserNS_11AddStarType1TEii>
 8133718:	b8 00 00 00 00       	mov    $0x0,%eax
 813371d:	c9                   	leave
 813371e:	c3                   	ret
 813371f:	90                   	nop

```

```c
// advancealtar::CharacAdvanceAltarManager::resetStar @ 0x81333b2

/* WARNING: Removing unreachable block (ram,0x081336ea) */
/* advancealtar::CharacAdvanceAltarManager::resetStar(CUser*, CMDPacketStruct::ResetStarType::T) */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::resetStar
          (CharacAdvanceAltarManager *this,CUser *param_1,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CInventory *pCVar4;
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> local_3c [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_StarRestFeeByGold>> local_38 [4];
  int local_34;
  map<int,advancealtar::_StarRestFeeByGold,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>>
  local_30 [4];
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  local_2c [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> local_28 [4];
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  local_24 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> local_20 [4];
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  
  if ((param_1 == (CUser *)0x0) || (*(int *)this == 0)) {
    uVar2 = 2;
  }
  else if (param_3 == 0) {
    local_14 = G_CDataManager();
    local_14 = local_14 + 0x6334;
    local_34 = (int)*(short *)(*(int *)this + 0x1a);
    std::
    map<int,advancealtar::_StarRestFeeByGold,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>>
    ::find((int *)local_38);
    local_10 = 0;
    std::
    map<int,advancealtar::_StarRestFeeByGold,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>>
    ::end(local_30);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>::
            operator==(local_38,(_Rb_tree_const_iterator *)local_30);
    if (cVar1 == '\0') {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>::
              operator->(local_38);
      local_10 = *(int *)(iVar3 + 4);
    }
    else {
      iVar3 = G_CDataManager();
      local_10 = AdvanceAltarShopParameter::getMaxStarResetGoldFee
                           ((AdvanceAltarShopParameter *)(iVar3 + 0x631c));
    }
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar3 = CInventory::get_money(pCVar4);
    if (iVar3 < local_10) {
      uVar2 = 3;
    }
    else {
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar1 = CInventory::use_money(pCVar4,local_10,0x32,1);
      if (cVar1 == '\x01') {
        CUser::SendUpdateItemList(param_1,1,0,0);
        *(short *)(*(int *)this + 0x1a) = *(short *)(*(int *)this + 0x1a) + 1;
        setDefaultSlot(this);
        setDefaultBuyItem(this,0);
        setDefaultBuyItem(this,1);
        setDefaultBuyItem(this,2);
        std::
        map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
        ::begin(local_2c);
        std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::
        _Rb_tree_const_iterator(local_3c,(_Rb_tree_iterator *)local_2c);
        while( true ) {
          std::
          map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
          ::end(local_24);
          std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::
          _Rb_tree_const_iterator(local_28,(_Rb_tree_iterator *)local_24);
          cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::
                  operator!=(local_3c,(_Rb_tree_const_iterator *)local_28);
          if (cVar1 == '\0') break;
          iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::
                  operator->(local_3c);
          if (*(int *)(iVar3 + 8) != -1) {
            iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::
                    operator->(local_3c);
            setUnlockBuyItem(this,0,*(undefined4 *)(iVar3 + 4),0);
            iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::
                    operator->(local_3c);
            setUnlockBuyItem(this,1,*(undefined4 *)(iVar3 + 4),0);
            iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::
                    operator->(local_3c);
            setUnlockBuyItem(this,2,*(undefined4 *)(iVar3 + 4),0);
          }
          std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator++
                    (local_20,(int)local_3c);
        }
        local_1c = (*(int *)(*(int *)this + 0xc) + *(int *)(*(int *)this + 0x10)) -
                   *(int *)(*(int *)this + 0x14);
        *(int *)(*(int *)this + 0x14) = *(int *)(*(int *)this + 0xc) + *(int *)(*(int *)this + 0x10)
        ;
        *(undefined1 *)(*(int *)this + 0xcc) = 1;
        local_18 = 2;
        if (0 < local_1c) {
          HistoryLog::starAdd(param_1,2,0,local_1c);
        }
        uVar2 = 0;
      }
      else {
        uVar2 = 3;
      }
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

```

---

## sendAchievementReward

```asm
// === 0813234e advancealtar::CharacAdvanceAltarManager::sendAchievementReward  [0x0813234e-0x8132637] ===
 813234e:	55                   	push   %ebp
 813234f:	89 e5                	mov    %esp,%ebp
 8132351:	56                   	push   %esi
 8132352:	53                   	push   %ebx
 8132353:	83 ec 50             	sub    $0x50,%esp
 8132356:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 813235a:	74 09                	je     8132365 <_ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE+0x17>
 813235c:	8b 45 08             	mov    0x8(%ebp),%eax
 813235f:	8b 00                	mov    (%eax),%eax
 8132361:	85 c0                	test   %eax,%eax
 8132363:	75 0a                	jne    813236f <_ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE+0x21>
 8132365:	bb 02 00 00 00       	mov    $0x2,%ebx
 813236a:	e9 bc 02 00 00       	jmp    813262b <_ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE+0x2dd>
 813236f:	8b 45 08             	mov    0x8(%ebp),%eax
 8132372:	8b 00                	mov    (%eax),%eax
 8132374:	8d 88 b4 00 00 00    	lea    0xb4(%eax),%ecx
 813237a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 813237d:	8d 55 10             	lea    0x10(%ebp),%edx
 8132380:	89 54 24 08          	mov    %edx,0x8(%esp)
 8132384:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8132388:	89 04 24             	mov    %eax,(%esp)
 813238b:	e8 f2 3e 00 00       	call   8136282 <_ZNSt3mapIiN12advancealtar7_RewardESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 8132390:	83 ec 04             	sub    $0x4,%esp
 8132393:	8b 45 08             	mov    0x8(%ebp),%eax
 8132396:	8b 00                	mov    (%eax),%eax
 8132398:	8d 90 b4 00 00 00    	lea    0xb4(%eax),%edx
 813239e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81323a1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81323a5:	89 04 24             	mov    %eax,(%esp)
 81323a8:	e8 01 3f 00 00       	call   81362ae <_ZNSt3mapIiN12advancealtar7_RewardESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 81323ad:	83 ec 04             	sub    $0x4,%esp
 81323b0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81323b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81323b7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81323ba:	89 04 24             	mov    %eax,(%esp)
 81323bd:	e8 12 3f 00 00       	call   81362d4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN12advancealtar7_RewardEEEeqERKS5_>
 81323c2:	84 c0                	test   %al,%al
 81323c4:	74 0a                	je     81323d0 <_ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE+0x82>
 81323c6:	bb 02 00 00 00       	mov    $0x2,%ebx
 81323cb:	e9 5b 02 00 00       	jmp    813262b <_ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE+0x2dd>
 81323d0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81323d3:	89 04 24             	mov    %eax,(%esp)
 81323d6:	e8 0d 3f 00 00       	call   81362e8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN12advancealtar7_RewardEEEptEv>
 81323db:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 81323df:	84 c0                	test   %al,%al
 81323e1:	74 0a                	je     81323ed <_ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE+0x9f>
 81323e3:	bb 03 00 00 00       	mov    $0x3,%ebx
 81323e8:	e9 3e 02 00 00       	jmp    813262b <_ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE+0x2dd>
 81323ed:	8b 5d 10             	mov    0x10(%ebp),%ebx
 81323f0:	e8 a6 9d f9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81323f5:	05 4c 63 00 00       	add    $0x634c,%eax
 81323fa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81323fe:	89 04 24             	mov    %eax,(%esp)
 8132401:	e8 3e 91 76 00       	call   889b544 <_ZNK12advancealtar15RewardParameter24getAchievementRewardDataEi>
 8132406:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8132409:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 813240d:	75 0a                	jne    8132419 <_ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE+0xcb>
 813240f:	bb 03 00 00 00       	mov    $0x3,%ebx
 8132414:	e9 12 02 00 00       	jmp    813262b <_ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE+0x2dd>
 8132419:	8b 45 ec             	mov    -0x14(%ebp),%eax
 813241c:	83 c0 10             	add    $0x10,%eax
 813241f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8132422:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8132425:	89 04 24             	mov    %eax,(%esp)
 8132428:	e8 b3 27 00 00       	call   8134be0 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EEC1Ev>
 813242d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8132430:	89 04 24             	mov    %eax,(%esp)
 8132433:	e8 a8 27 00 00       	call   8134be0 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EEC1Ev>
 8132438:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 813243f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8132442:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8132445:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132449:	89 04 24             	mov    %eax,(%esp)
 813244c:	e8 03 33 00 00       	call   8135754 <_ZNKSt6vectorIN12advancealtar11_RewardItemESaIS1_EE5beginEv>
 8132451:	83 ec 04             	sub    $0x4,%esp
 8132454:	e9 a4 00 00 00       	jmp    81324fd <_ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE+0x1af>
 8132459:	e8 48 ab ff ff       	call   812cfa6 <_ZN12advancealtar9isOnEventEv>
 813245e:	84 c0                	test   %al,%al
 8132460:	74 4e                	je     81324b0 <_ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE+0x162>
 8132462:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8132465:	89 04 24             	mov    %eax,(%esp)
 8132468:	e8 ef 37 00 00       	call   8135c5c <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEptEv>
 813246d:	8b 00                	mov    (%eax),%eax
 813246f:	85 c0                	test   %eax,%eax
 8132471:	0f 94 c0             	sete   %al
 8132474:	84 c0                	test   %al,%al
 8132476:	74 1c                	je     8132494 <_ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE+0x146>
 8132478:	8d 45 c0             	lea    -0x40(%ebp),%eax
 813247b:	89 04 24             	mov    %eax,(%esp)
 813247e:	e8 89 33 00 00       	call   813580c <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEdeEv>
 8132483:	89 44 24 04          	mov    %eax,0x4(%esp)
 8132487:	8d 45 d0             	lea    -0x30(%ebp),%eax
 813248a:	89 04 24             	mov    %eax,(%esp)
 813248d:	e8 56 37 00 00       	call   8135be8 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EE9push_backERKS1_>
 8132492:	eb 4c                	jmp    81324e0 <_ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE+0x192>
 8132494:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8132497:	89 04 24             	mov    %eax,(%esp)
 813249a:	e8 6d 33 00 00       	call   813580c <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEdeEv>
 813249f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81324a3:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81324a6:	89 04 24             	mov    %eax,(%esp)
 81324a9:	e8 3a 37 00 00       	call   8135be8 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EE9push_backERKS1_>
 81324ae:	eb 30                	jmp    81324e0 <_ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE+0x192>
 81324b0:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81324b3:	89 04 24             	mov    %eax,(%esp)
 81324b6:	e8 a1 37 00 00       	call   8135c5c <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEptEv>
 81324bb:	8b 00                	mov    (%eax),%eax
 81324bd:	85 c0                	test   %eax,%eax
 81324bf:	0f 94 c0             	sete   %al
 81324c2:	84 c0                	test   %al,%al
 81324c4:	74 1a                	je     81324e0 <_ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE+0x192>
 81324c6:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81324c9:	89 04 24             	mov    %eax,(%esp)
 81324cc:	e8 3b 33 00 00       	call   813580c <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEdeEv>
 81324d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81324d5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81324d8:	89 04 24             	mov    %eax,(%esp)
 81324db:	e8 08 37 00 00       	call   8135be8 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EE9push_backERKS1_>
 81324e0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81324e3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81324ea:	00 
 81324eb:	8d 55 c0             	lea    -0x40(%ebp),%edx
 81324ee:	89 54 24 04          	mov    %edx,0x4(%esp)
 81324f2:	89 04 24             	mov    %eax,(%esp)
 81324f5:	e8 de 32 00 00       	call   81357d8 <_ZN9__gnu_cxx17__normal_iteratorIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEppEi>
 81324fa:	83 ec 04             	sub    $0x4,%esp
 81324fd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8132500:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8132503:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132507:	89 04 24             	mov    %eax,(%esp)
 813250a:	e8 71 32 00 00       	call   8135780 <_ZNKSt6vectorIN12advancealtar11_RewardItemESaIS1_EE3endEv>
 813250f:	83 ec 04             	sub    $0x4,%esp
 8132512:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8132515:	89 44 24 04          	mov    %eax,0x4(%esp)
 8132519:	8d 45 c0             	lea    -0x40(%ebp),%eax
 813251c:	89 04 24             	mov    %eax,(%esp)
 813251f:	e8 88 32 00 00       	call   81357ac <_ZN9__gnu_cxxneIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8132524:	84 c0                	test   %al,%al
 8132526:	0f 85 2d ff ff ff    	jne    8132459 <_ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE+0x10b>
 813252c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 813252f:	89 04 24             	mov    %eax,(%esp)
 8132532:	e8 89 31 00 00       	call   81356c0 <_ZNKSt6vectorIN12advancealtar11_RewardItemESaIS1_EE4sizeEv>
 8132537:	85 c0                	test   %eax,%eax
 8132539:	0f 95 c0             	setne  %al
 813253c:	84 c0                	test   %al,%al
 813253e:	74 38                	je     8132578 <_ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE+0x22a>
 8132540:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8132543:	83 c0 24             	add    $0x24,%eax
 8132546:	89 04 24             	mov    %eax,(%esp)
 8132549:	e8 a2 3f 5d 00       	call   87064f0 <_ZNKSs5c_strEv>
 813254e:	89 c3                	mov    %eax,%ebx
 8132550:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8132553:	83 c0 20             	add    $0x20,%eax
 8132556:	89 04 24             	mov    %eax,(%esp)
 8132559:	e8 92 3f 5d 00       	call   87064f0 <_ZNKSs5c_strEv>
 813255e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8132562:	89 44 24 08          	mov    %eax,0x8(%esp)
 8132566:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8132569:	89 44 24 04          	mov    %eax,0x4(%esp)
 813256d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8132570:	89 04 24             	mov    %eax,(%esp)
 8132573:	e8 02 cf ff ff       	call   812f47a <_ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_>
 8132578:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 813257b:	89 04 24             	mov    %eax,(%esp)
 813257e:	e8 3d 31 00 00       	call   81356c0 <_ZNKSt6vectorIN12advancealtar11_RewardItemESaIS1_EE4sizeEv>
 8132583:	85 c0                	test   %eax,%eax
 8132585:	0f 95 c0             	setne  %al
 8132588:	84 c0                	test   %al,%al
 813258a:	74 2c                	je     81325b8 <_ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE+0x26a>
 813258c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 813258f:	83 c0 24             	add    $0x24,%eax
 8132592:	89 04 24             	mov    %eax,(%esp)
 8132595:	e8 56 3f 5d 00       	call   87064f0 <_ZNKSs5c_strEv>
 813259a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 813259e:	c7 44 24 08 22 c7 b6 	movl   $0x8b6c722,0x8(%esp)
 81325a5:	08 
 81325a6:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81325a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81325ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 81325b0:	89 04 24             	mov    %eax,(%esp)
 81325b3:	e8 c2 ce ff ff       	call   812f47a <_ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_>
 81325b8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81325bb:	8d 50 10             	lea    0x10(%eax),%edx
 81325be:	8b 45 14             	mov    0x14(%ebp),%eax
 81325c1:	89 10                	mov    %edx,(%eax)
 81325c3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81325c6:	89 04 24             	mov    %eax,(%esp)
 81325c9:	e8 1a 3d 00 00       	call   81362e8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN12advancealtar7_RewardEEEptEv>
 81325ce:	c6 40 08 01          	movb   $0x1,0x8(%eax)
 81325d2:	8b 45 08             	mov    0x8(%ebp),%eax
 81325d5:	8b 00                	mov    (%eax),%eax
 81325d7:	c6 80 cc 00 00 00 01 	movb   $0x1,0xcc(%eax)
 81325de:	bb 00 00 00 00       	mov    $0x0,%ebx
 81325e3:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81325e6:	89 04 24             	mov    %eax,(%esp)
 81325e9:	e8 06 26 00 00       	call   8134bf4 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EED1Ev>
 81325ee:	eb 30                	jmp    8132620 <_ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE+0x2d2>
 81325f0:	89 d3                	mov    %edx,%ebx
 81325f2:	89 c6                	mov    %eax,%esi
 81325f4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81325f7:	89 04 24             	mov    %eax,(%esp)
 81325fa:	e8 f5 25 00 00       	call   8134bf4 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EED1Ev>
 81325ff:	89 f0                	mov    %esi,%eax
 8132601:	89 da                	mov    %ebx,%edx
 8132603:	eb 00                	jmp    8132605 <_ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE+0x2b7>
 8132605:	89 d3                	mov    %edx,%ebx
 8132607:	89 c6                	mov    %eax,%esi
 8132609:	8d 45 d0             	lea    -0x30(%ebp),%eax
 813260c:	89 04 24             	mov    %eax,(%esp)
 813260f:	e8 e0 25 00 00       	call   8134bf4 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EED1Ev>
 8132614:	89 f0                	mov    %esi,%eax
 8132616:	89 da                	mov    %ebx,%edx
 8132618:	89 04 24             	mov    %eax,(%esp)
 813261b:	e8 30 11 9b 00       	call   8ae3750 <_Unwind_Resume>
 8132620:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8132623:	89 04 24             	mov    %eax,(%esp)
 8132626:	e8 c9 25 00 00       	call   8134bf4 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EED1Ev>
 813262b:	89 d8                	mov    %ebx,%eax
 813262d:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8132630:	83 c4 00             	add    $0x0,%esp
 8132633:	5b                   	pop    %ebx
 8132634:	5e                   	pop    %esi
 8132635:	5d                   	pop    %ebp
 8132636:	c3                   	ret
 8132637:	90                   	nop

```

```c
// advancealtar::CharacAdvanceAltarManager::sendAchievementReward @ 0x813234e

/* advancealtar::CharacAdvanceAltarManager::sendAchievementReward(CUser*, int,
   std::vector<advancealtar::_RewardItem, std::allocator<advancealtar::_RewardItem> > const**) */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::sendAchievementReward
          (CharacAdvanceAltarManager *this,CUser *param_1,int param_2,vector **param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  _RewardItem *p_Var5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
  local_44 [4];
  vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> local_40 [12];
  vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> local_34 [12];
  _Rb_tree_iterator<std::pair<int_const,advancealtar::_Reward>> local_28 [4];
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  local_24 [4];
  __normal_iterator local_20 [4];
  __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
  local_1c [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  
  if ((param_1 == (CUser *)0x0) || (*(int *)this == 0)) {
    uVar8 = 2;
  }
  else {
    std::
    map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
    ::find((int *)local_28);
    std::
    map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
    ::end(local_24);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_Reward>>::operator==
                      (local_28,(_Rb_tree_iterator *)local_24);
    if (cVar1 == '\0') {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_Reward>>::operator->
                        (local_28);
      if (*(char *)(iVar3 + 8) == '\0') {
        iVar3 = G_CDataManager();
        local_18 = RewardParameter::getAchievementRewardData(iVar3 + 0x634c);
        if (local_18 == 0) {
          uVar8 = 3;
        }
        else {
          local_14 = local_18 + 0x10;
          std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::vector
                    (local_34);
                    /* try { // try from 08132433 to 08132437 has its CatchHandler @ 08132605 */
          std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::vector
                    (local_40);
          local_10 = 0;
                    /* try { // try from 0813244c to 081325b7 has its CatchHandler @ 081325f0 */
          std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::begin();
          while( true ) {
            std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::end();
            bVar2 = __gnu_cxx::operator!=(local_44,local_20);
            if (!bVar2) break;
            cVar1 = isOnEvent();
            if (cVar1 == '\0') {
              piVar4 = (int *)__gnu_cxx::
                              __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                              ::operator->(local_44);
              if (*piVar4 == 0) {
                p_Var5 = (_RewardItem *)
                         __gnu_cxx::
                         __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                         ::operator*(local_44);
                std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
                push_back(local_34,p_Var5);
              }
            }
            else {
              piVar4 = (int *)__gnu_cxx::
                              __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                              ::operator->(local_44);
              if (*piVar4 == 0) {
                p_Var5 = (_RewardItem *)
                         __gnu_cxx::
                         __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                         ::operator*(local_44);
                std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
                push_back(local_34,p_Var5);
              }
              else {
                p_Var5 = (_RewardItem *)
                         __gnu_cxx::
                         __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                         ::operator*(local_44);
                std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
                push_back(local_40,p_Var5);
              }
            }
            __gnu_cxx::
            __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
            ::operator++(local_1c,(int)local_44);
          }
          iVar3 = std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
                  size(local_34);
          if (iVar3 != 0) {
            pcVar6 = (char *)std::string::c_str((string *)(local_18 + 0x24));
            pcVar7 = (char *)std::string::c_str((string *)(local_18 + 0x20));
            ProcStage::sendMailRewardItem(param_1,(vector *)local_34,pcVar7,pcVar6);
          }
          iVar3 = std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
                  size(local_40);
          if (iVar3 != 0) {
            pcVar6 = (char *)std::string::c_str((string *)(local_18 + 0x24));
            ProcStage::sendMailRewardItem
                      (param_1,(vector *)local_40,"chn_game_server_msg_86",pcVar6);
          }
          *param_3 = (vector *)(local_18 + 0x10);
          iVar3 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_Reward>>::operator->
                            (local_28);
          *(undefined1 *)(iVar3 + 8) = 1;
          *(undefined1 *)(*(int *)this + 0xcc) = 1;
          uVar8 = 0;
                    /* try { // try from 081325e9 to 081325ed has its CatchHandler @ 08132605 */
          std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::~vector
                    (local_40);
          std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::~vector
                    (local_34);
        }
      }
      else {
        uVar8 = 3;
      }
    }
    else {
      uVar8 = 2;
    }
  }
  return uVar8;
}

```

---

## set

```asm
// === 08131616 advancealtar::CharacAdvanceAltarManager::set  [0x08131616-0x813165f] ===
 8131616:	55                   	push   %ebp
 8131617:	89 e5                	mov    %esp,%ebp
 8131619:	83 ec 28             	sub    $0x28,%esp
 813161c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8131623:	eb 2e                	jmp    8131653 <_ZN12advancealtar25CharacAdvanceAltarManager3setERKNS_25_CharacAdvanceAltarDbDataE+0x3d>
 8131625:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8131628:	69 c0 18 05 00 00    	imul   $0x518,%eax,%eax
 813162e:	03 45 0c             	add    0xc(%ebp),%eax
 8131631:	8d 50 04             	lea    0x4(%eax),%edx
 8131634:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8131637:	69 c0 d0 00 00 00    	imul   $0xd0,%eax,%eax
 813163d:	03 45 08             	add    0x8(%ebp),%eax
 8131640:	83 c0 04             	add    $0x4,%eax
 8131643:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131647:	89 04 24             	mov    %eax,(%esp)
 813164a:	e8 8b 7c 76 00       	call   88992da <_ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE>
 813164f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8131653:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8131657:	0f 9e c0             	setle  %al
 813165a:	84 c0                	test   %al,%al
 813165c:	75 c7                	jne    8131625 <_ZN12advancealtar25CharacAdvanceAltarManager3setERKNS_25_CharacAdvanceAltarDbDataE+0xf>
 813165e:	c9                   	leave
 813165f:	c3                   	ret

```

```c
// advancealtar::CharacAdvanceAltarManager::set @ 0x8131616

/* advancealtar::CharacAdvanceAltarManager::set(advancealtar::_CharacAdvanceAltarDbData const&) */

void __thiscall
advancealtar::CharacAdvanceAltarManager::set
          (CharacAdvanceAltarManager *this,_CharacAdvanceAltarDbData *param_1)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 1; local_10 = local_10 + 1) {
    AdvanceAltarData::set
              ((AdvanceAltarData *)(this + local_10 * 0xd0 + 4),
               (_AdvanceAltarDbData *)(param_1 + local_10 * 0x518 + 4));
  }
  return;
}

```

---

## setCurrentAdvanceAltarData

```asm
// === 08131254 advancealtar::CharacAdvanceAltarManager::setCurrentAdvanceAltarData  [0x08131254-0x81312cf] ===
 8131254:	55                   	push   %ebp
 8131255:	89 e5                	mov    %esp,%ebp
 8131257:	83 ec 28             	sub    $0x28,%esp
 813125a:	8b 45 0c             	mov    0xc(%ebp),%eax
 813125d:	89 04 24             	mov    %eax,(%esp)
 8131260:	e8 8b 7d 76 00       	call   8898ff0 <_ZN12advancealtar16isValidRidableIdENS_9RidableId1TE>
 8131265:	83 f0 01             	xor    $0x1,%eax
 8131268:	84 c0                	test   %al,%al
 813126a:	74 07                	je     8131273 <_ZN12advancealtar25CharacAdvanceAltarManager26setCurrentAdvanceAltarDataENS_9RidableId1TE+0x1f>
 813126c:	b8 00 00 00 00       	mov    $0x0,%eax
 8131271:	eb 5a                	jmp    81312cd <_ZN12advancealtar25CharacAdvanceAltarManager26setCurrentAdvanceAltarDataENS_9RidableId1TE+0x79>
 8131273:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 813127a:	eb 38                	jmp    81312b4 <_ZN12advancealtar25CharacAdvanceAltarManager26setCurrentAdvanceAltarDataENS_9RidableId1TE+0x60>
 813127c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813127f:	8b 55 08             	mov    0x8(%ebp),%edx
 8131282:	69 c0 d0 00 00 00    	imul   $0xd0,%eax,%eax
 8131288:	8d 04 02             	lea    (%edx,%eax,1),%eax
 813128b:	83 c0 04             	add    $0x4,%eax
 813128e:	8b 00                	mov    (%eax),%eax
 8131290:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8131293:	75 1b                	jne    81312b0 <_ZN12advancealtar25CharacAdvanceAltarManager26setCurrentAdvanceAltarDataENS_9RidableId1TE+0x5c>
 8131295:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8131298:	69 c0 d0 00 00 00    	imul   $0xd0,%eax,%eax
 813129e:	03 45 08             	add    0x8(%ebp),%eax
 81312a1:	8d 50 04             	lea    0x4(%eax),%edx
 81312a4:	8b 45 08             	mov    0x8(%ebp),%eax
 81312a7:	89 10                	mov    %edx,(%eax)
 81312a9:	b8 01 00 00 00       	mov    $0x1,%eax
 81312ae:	eb 1d                	jmp    81312cd <_ZN12advancealtar25CharacAdvanceAltarManager26setCurrentAdvanceAltarDataENS_9RidableId1TE+0x79>
 81312b0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81312b4:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81312b8:	0f 9e c0             	setle  %al
 81312bb:	84 c0                	test   %al,%al
 81312bd:	75 bd                	jne    813127c <_ZN12advancealtar25CharacAdvanceAltarManager26setCurrentAdvanceAltarDataENS_9RidableId1TE+0x28>
 81312bf:	8b 45 08             	mov    0x8(%ebp),%eax
 81312c2:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 81312c8:	b8 00 00 00 00       	mov    $0x0,%eax
 81312cd:	c9                   	leave
 81312ce:	c3                   	ret
 81312cf:	90                   	nop

```

```c
// advancealtar::CharacAdvanceAltarManager::setCurrentAdvanceAltarData @ 0x8131254

/* advancealtar::CharacAdvanceAltarManager::setCurrentAdvanceAltarData(advancealtar::RidableId::T)
    */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::setCurrentAdvanceAltarData
          (CharacAdvanceAltarManager *this,int param_2)

{
  char cVar1;
  int local_10;
  
  cVar1 = isValidRidableId(param_2);
  if (cVar1 == '\x01') {
    for (local_10 = 0; local_10 < 1; local_10 = local_10 + 1) {
      if (*(int *)(this + local_10 * 0xd0 + 4) == param_2) {
        *(CharacAdvanceAltarManager **)this = this + local_10 * 0xd0 + 4;
        return 1;
      }
    }
    *(undefined4 *)this = 0;
  }
  return 0;
}

```

---

## setDefaultBuyItem

```asm
// === 08132cb8 advancealtar::CharacAdvanceAltarManager::setDefaultBuyItem  [0x08132cb8-0x8132d1f] ===
 8132cb8:	55                   	push   %ebp
 8132cb9:	89 e5                	mov    %esp,%ebp
 8132cbb:	83 ec 28             	sub    $0x28,%esp
 8132cbe:	8b 45 08             	mov    0x8(%ebp),%eax
 8132cc1:	8b 00                	mov    (%eax),%eax
 8132cc3:	85 c0                	test   %eax,%eax
 8132cc5:	74 52                	je     8132d19 <_ZN12advancealtar25CharacAdvanceAltarManager17setDefaultBuyItemENS_20AdvanceAltarShopType1TE+0x61>
 8132cc7:	8b 45 08             	mov    0x8(%ebp),%eax
 8132cca:	8b 00                	mov    (%eax),%eax
 8132ccc:	8b 55 0c             	mov    0xc(%ebp),%edx
 8132ccf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132cd3:	89 04 24             	mov    %eax,(%esp)
 8132cd6:	e8 fd 6c 76 00       	call   88999d8 <_ZN12advancealtar16AdvanceAltarData13getBuyItemMapENS_20AdvanceAltarShopType1TE>
 8132cdb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8132cde:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8132ce2:	74 38                	je     8132d1c <_ZN12advancealtar25CharacAdvanceAltarManager17setDefaultBuyItemENS_20AdvanceAltarShopType1TE+0x64>
 8132ce4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8132ce7:	89 04 24             	mov    %eax,(%esp)
 8132cea:	e8 4b 38 00 00       	call   813653a <_ZNSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 8132cef:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8132cf6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8132cfd:	00 
 8132cfe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8132d01:	89 44 24 08          	mov    %eax,0x8(%esp)
 8132d05:	8b 45 0c             	mov    0xc(%ebp),%eax
 8132d08:	89 44 24 04          	mov    %eax,0x4(%esp)
 8132d0c:	8b 45 08             	mov    0x8(%ebp),%eax
 8132d0f:	89 04 24             	mov    %eax,(%esp)
 8132d12:	e8 09 00 00 00       	call   8132d20 <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE>
 8132d17:	eb 04                	jmp    8132d1d <_ZN12advancealtar25CharacAdvanceAltarManager17setDefaultBuyItemENS_20AdvanceAltarShopType1TE+0x65>
 8132d19:	90                   	nop
 8132d1a:	eb 01                	jmp    8132d1d <_ZN12advancealtar25CharacAdvanceAltarManager17setDefaultBuyItemENS_20AdvanceAltarShopType1TE+0x65>
 8132d1c:	90                   	nop
 8132d1d:	c9                   	leave
 8132d1e:	c3                   	ret
 8132d1f:	90                   	nop

```

```c
// advancealtar::CharacAdvanceAltarManager::setDefaultBuyItem @ 0x8132cb8

/* advancealtar::CharacAdvanceAltarManager::setDefaultBuyItem(advancealtar::AdvanceAltarShopType::T)
    */

void __thiscall
advancealtar::CharacAdvanceAltarManager::setDefaultBuyItem
          (CharacAdvanceAltarManager *this,undefined4 param_2)

{
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  *this_00;
  
  if ((*(int *)this != 0) &&
     (this_00 = (map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
                 *)AdvanceAltarData::getBuyItemMap(*(AdvanceAltarData **)this,param_2),
     this_00 !=
     (map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
      *)0x0)) {
    std::
    map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
    ::clear(this_00);
    setUnlockBuyItem(this,param_2,0,0);
  }
  return;
}

```

---

## setDefaultSlot

```asm
// === 08132f8e advancealtar::CharacAdvanceAltarManager::setDefaultSlot  [0x08132f8e-0x81331d3] ===
 8132f8e:	55                   	push   %ebp
 8132f8f:	89 e5                	mov    %esp,%ebp
 8132f91:	81 ec 98 00 00 00    	sub    $0x98,%esp
 8132f97:	8b 45 08             	mov    0x8(%ebp),%eax
 8132f9a:	8b 00                	mov    (%eax),%eax
 8132f9c:	85 c0                	test   %eax,%eax
 8132f9e:	0f 84 2c 02 00 00    	je     81331d0 <_ZN12advancealtar25CharacAdvanceAltarManager14setDefaultSlotEv+0x242>
 8132fa4:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8132fab:	e9 fa 00 00 00       	jmp    81330aa <_ZN12advancealtar25CharacAdvanceAltarManager14setDefaultSlotEv+0x11c>
 8132fb0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8132fb3:	88 45 a7             	mov    %al,-0x59(%ebp)
 8132fb6:	8b 45 08             	mov    0x8(%ebp),%eax
 8132fb9:	8b 00                	mov    (%eax),%eax
 8132fbb:	8d 88 84 00 00 00    	lea    0x84(%eax),%ecx
 8132fc1:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8132fc4:	8d 55 a7             	lea    -0x59(%ebp),%edx
 8132fc7:	89 54 24 08          	mov    %edx,0x8(%esp)
 8132fcb:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8132fcf:	89 04 24             	mov    %eax,(%esp)
 8132fd2:	e8 37 35 00 00       	call   813650e <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE4findERS5_>
 8132fd7:	83 ec 04             	sub    $0x4,%esp
 8132fda:	8b 45 08             	mov    0x8(%ebp),%eax
 8132fdd:	8b 00                	mov    (%eax),%eax
 8132fdf:	8d 90 84 00 00 00    	lea    0x84(%eax),%edx
 8132fe5:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8132fe8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132fec:	89 04 24             	mov    %eax,(%esp)
 8132fef:	e8 f4 31 00 00       	call   81361e8 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE3endEv>
 8132ff4:	83 ec 04             	sub    $0x4,%esp
 8132ff7:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8132ffa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8132ffe:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8133001:	89 04 24             	mov    %eax,(%esp)
 8133004:	e8 65 32 00 00       	call   813626e <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEeqERKS5_>
 8133009:	84 c0                	test   %al,%al
 813300b:	0f 84 83 00 00 00    	je     8133094 <_ZN12advancealtar25CharacAdvanceAltarManager14setDefaultSlotEv+0x106>
 8133011:	8d 45 96             	lea    -0x6a(%ebp),%eax
 8133014:	89 04 24             	mov    %eax,(%esp)
 8133017:	e8 7e 14 00 00       	call   813449a <_ZN12advancealtar5_SlotC1Ev>
 813301c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813301f:	0f b6 80 94 d3 b6 08 	movzbl 0x8b6d394(%eax),%eax
 8133026:	88 45 96             	mov    %al,-0x6a(%ebp)
 8133029:	c7 45 97 01 00 00 00 	movl   $0x1,-0x69(%ebp)
 8133030:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 8133037:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813303a:	88 45 9b             	mov    %al,-0x65(%ebp)
 813303d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8133040:	8d 55 96             	lea    -0x6a(%ebp),%edx
 8133043:	89 54 24 08          	mov    %edx,0x8(%esp)
 8133047:	8d 55 96             	lea    -0x6a(%ebp),%edx
 813304a:	83 c2 05             	add    $0x5,%edx
 813304d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8133051:	89 04 24             	mov    %eax,(%esp)
 8133054:	e8 68 35 00 00       	call   81365c1 <_ZSt9make_pairIRhRN12advancealtar5_SlotEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 8133059:	83 ec 04             	sub    $0x4,%esp
 813305c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 813305f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8133063:	8d 45 b5             	lea    -0x4b(%ebp),%eax
 8133066:	89 04 24             	mov    %eax,(%esp)
 8133069:	e8 92 35 00 00       	call   8136600 <_ZNSt4pairIKhN12advancealtar5_SlotEEC1IhS2_EEOS_IT_T0_E>
 813306e:	8b 45 08             	mov    0x8(%ebp),%eax
 8133071:	8b 00                	mov    (%eax),%eax
 8133073:	8d 88 84 00 00 00    	lea    0x84(%eax),%ecx
 8133079:	8d 45 ac             	lea    -0x54(%ebp),%eax
 813307c:	8d 55 b5             	lea    -0x4b(%ebp),%edx
 813307f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8133083:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8133087:	89 04 24             	mov    %eax,(%esp)
 813308a:	e8 b1 35 00 00       	call   8136640 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE6insertERKS6_>
 813308f:	83 ec 04             	sub    $0x4,%esp
 8133092:	eb 12                	jmp    81330a6 <_ZN12advancealtar25CharacAdvanceAltarManager14setDefaultSlotEv+0x118>
 8133094:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8133097:	89 04 24             	mov    %eax,(%esp)
 813309a:	e8 c1 31 00 00       	call   8136260 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 813309f:	c7 40 07 00 00 00 00 	movl   $0x0,0x7(%eax)
 81330a6:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81330aa:	83 7d f0 05          	cmpl   $0x5,-0x10(%ebp)
 81330ae:	0f 9e c0             	setle  %al
 81330b1:	84 c0                	test   %al,%al
 81330b3:	0f 85 f7 fe ff ff    	jne    8132fb0 <_ZN12advancealtar25CharacAdvanceAltarManager14setDefaultSlotEv+0x22>
 81330b9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81330c0:	e9 fa 00 00 00       	jmp    81331bf <_ZN12advancealtar25CharacAdvanceAltarManager14setDefaultSlotEv+0x231>
 81330c5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81330c8:	88 45 cb             	mov    %al,-0x35(%ebp)
 81330cb:	8b 45 08             	mov    0x8(%ebp),%eax
 81330ce:	8b 00                	mov    (%eax),%eax
 81330d0:	8d 88 9c 00 00 00    	lea    0x9c(%eax),%ecx
 81330d6:	8d 45 90             	lea    -0x70(%ebp),%eax
 81330d9:	8d 55 cb             	lea    -0x35(%ebp),%edx
 81330dc:	89 54 24 08          	mov    %edx,0x8(%esp)
 81330e0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81330e4:	89 04 24             	mov    %eax,(%esp)
 81330e7:	e8 22 34 00 00       	call   813650e <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE4findERS5_>
 81330ec:	83 ec 04             	sub    $0x4,%esp
 81330ef:	8b 45 08             	mov    0x8(%ebp),%eax
 81330f2:	8b 00                	mov    (%eax),%eax
 81330f4:	8d 90 9c 00 00 00    	lea    0x9c(%eax),%edx
 81330fa:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81330fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8133101:	89 04 24             	mov    %eax,(%esp)
 8133104:	e8 df 30 00 00       	call   81361e8 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE3endEv>
 8133109:	83 ec 04             	sub    $0x4,%esp
 813310c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 813310f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8133113:	8d 45 90             	lea    -0x70(%ebp),%eax
 8133116:	89 04 24             	mov    %eax,(%esp)
 8133119:	e8 50 31 00 00       	call   813626e <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEeqERKS5_>
 813311e:	84 c0                	test   %al,%al
 8133120:	0f 84 83 00 00 00    	je     81331a9 <_ZN12advancealtar25CharacAdvanceAltarManager14setDefaultSlotEv+0x21b>
 8133126:	8d 45 86             	lea    -0x7a(%ebp),%eax
 8133129:	89 04 24             	mov    %eax,(%esp)
 813312c:	e8 69 13 00 00       	call   813449a <_ZN12advancealtar5_SlotC1Ev>
 8133131:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8133134:	0f b6 80 9a d3 b6 08 	movzbl 0x8b6d39a(%eax),%eax
 813313b:	88 45 86             	mov    %al,-0x7a(%ebp)
 813313e:	c7 45 87 02 00 00 00 	movl   $0x2,-0x79(%ebp)
 8133145:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
 813314c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813314f:	88 45 8b             	mov    %al,-0x75(%ebp)
 8133152:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 8133155:	8d 55 86             	lea    -0x7a(%ebp),%edx
 8133158:	89 54 24 08          	mov    %edx,0x8(%esp)
 813315c:	8d 55 86             	lea    -0x7a(%ebp),%edx
 813315f:	83 c2 05             	add    $0x5,%edx
 8133162:	89 54 24 04          	mov    %edx,0x4(%esp)
 8133166:	89 04 24             	mov    %eax,(%esp)
 8133169:	e8 53 34 00 00       	call   81365c1 <_ZSt9make_pairIRhRN12advancealtar5_SlotEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 813316e:	83 ec 04             	sub    $0x4,%esp
 8133171:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 8133174:	89 44 24 04          	mov    %eax,0x4(%esp)
 8133178:	8d 45 da             	lea    -0x26(%ebp),%eax
 813317b:	89 04 24             	mov    %eax,(%esp)
 813317e:	e8 7d 34 00 00       	call   8136600 <_ZNSt4pairIKhN12advancealtar5_SlotEEC1IhS2_EEOS_IT_T0_E>
 8133183:	8b 45 08             	mov    0x8(%ebp),%eax
 8133186:	8b 00                	mov    (%eax),%eax
 8133188:	8d 88 9c 00 00 00    	lea    0x9c(%eax),%ecx
 813318e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8133191:	8d 55 da             	lea    -0x26(%ebp),%edx
 8133194:	89 54 24 08          	mov    %edx,0x8(%esp)
 8133198:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 813319c:	89 04 24             	mov    %eax,(%esp)
 813319f:	e8 9c 34 00 00       	call   8136640 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE6insertERKS6_>
 81331a4:	83 ec 04             	sub    $0x4,%esp
 81331a7:	eb 12                	jmp    81331bb <_ZN12advancealtar25CharacAdvanceAltarManager14setDefaultSlotEv+0x22d>
 81331a9:	8d 45 90             	lea    -0x70(%ebp),%eax
 81331ac:	89 04 24             	mov    %eax,(%esp)
 81331af:	e8 ac 30 00 00       	call   8136260 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 81331b4:	c7 40 07 00 00 00 00 	movl   $0x0,0x7(%eax)
 81331bb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81331bf:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 81331c3:	0f 9e c0             	setle  %al
 81331c6:	84 c0                	test   %al,%al
 81331c8:	0f 85 f7 fe ff ff    	jne    81330c5 <_ZN12advancealtar25CharacAdvanceAltarManager14setDefaultSlotEv+0x137>
 81331ce:	eb 01                	jmp    81331d1 <_ZN12advancealtar25CharacAdvanceAltarManager14setDefaultSlotEv+0x243>
 81331d0:	90                   	nop
 81331d1:	c9                   	leave
 81331d2:	c3                   	ret
 81331d3:	90                   	nop

```

```c
// advancealtar::CharacAdvanceAltarManager::setDefaultSlot @ 0x8132f8e

/* advancealtar::CharacAdvanceAltarManager::setDefaultSlot() */

void __thiscall
advancealtar::CharacAdvanceAltarManager::setDefaultSlot(CharacAdvanceAltarManager *this)

{
  char cVar1;
  int iVar2;
  _Slot local_7e;
  undefined4 local_7d;
  _Slot local_79;
  undefined4 local_78;
  _Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_74 [6];
  _Slot local_6e;
  undefined4 local_6d;
  _Slot local_69;
  undefined4 local_68;
  _Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_64 [7];
  undefined1 local_5d;
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_5c [4];
  pair local_58 [9];
  pair<unsigned_char_const,advancealtar::_Slot> local_4f [11];
  uchar local_44 [11];
  undefined1 local_39;
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_38 [4];
  pair local_34 [10];
  pair<unsigned_char_const,advancealtar::_Slot> local_2a [11];
  uchar local_1f [11];
  int local_14;
  int local_10;
  
  if (*(int *)this != 0) {
    for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
      local_5d = (undefined1)local_14;
      std::
      map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
      ::find((uchar *)local_64);
      std::
      map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
      ::end(local_5c);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator==
                        (local_64,(_Rb_tree_iterator *)local_5c);
      if (cVar1 == '\0') {
        iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                operator->(local_64);
        *(undefined4 *)(iVar2 + 7) = 0;
      }
      else {
        _Slot::_Slot(&local_6e);
        local_6e = *(_Slot *)((int)&advancealtar::kUnitSlotNoLock + local_14);
        local_6d = 1;
        local_68 = 0;
        local_69 = SUB41(local_14,0);
        std::make_pair<unsigned_char&,advancealtar::_Slot&>(local_44,&local_69);
        std::pair<unsigned_char_const,advancealtar::_Slot>::pair<unsigned_char,advancealtar::_Slot>
                  (local_4f,local_44);
        std::
        map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
        ::insert(local_58);
      }
    }
    for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
      local_39 = (undefined1)local_10;
      std::
      map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
      ::find((uchar *)local_74);
      std::
      map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
      ::end(local_38);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator==
                        (local_74,(_Rb_tree_iterator *)local_38);
      if (cVar1 == '\0') {
        iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                operator->(local_74);
        *(undefined4 *)(iVar2 + 7) = 0;
      }
      else {
        _Slot::_Slot(&local_7e);
        local_7e = *(_Slot *)((int)&advancealtar::kSkillSlotNoLock + local_10);
        local_7d = 2;
        local_78 = 0;
        local_79 = SUB41(local_10,0);
        std::make_pair<unsigned_char&,advancealtar::_Slot&>(local_1f,&local_79);
        std::pair<unsigned_char_const,advancealtar::_Slot>::pair<unsigned_char,advancealtar::_Slot>
                  (local_2a,local_1f);
        std::
        map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
        ::insert(local_34);
      }
    }
  }
  return;
}

```

---

## setDefaultStage

```asm
// === 08132f72 advancealtar::CharacAdvanceAltarManager::setDefaultStage  [0x08132f72-0x8132f8d] ===
 8132f72:	55                   	push   %ebp
 8132f73:	89 e5                	mov    %esp,%ebp
 8132f75:	83 ec 18             	sub    $0x18,%esp
 8132f78:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8132f7f:	00 
 8132f80:	8b 45 08             	mov    0x8(%ebp),%eax
 8132f83:	89 04 24             	mov    %eax,(%esp)
 8132f86:	e8 49 02 00 00       	call   81331d4 <_ZN12advancealtar25CharacAdvanceAltarManager12setNextStageEi>
 8132f8b:	c9                   	leave
 8132f8c:	c3                   	ret
 8132f8d:	90                   	nop

```

```c
// advancealtar::CharacAdvanceAltarManager::setDefaultStage @ 0x8132f72

/* advancealtar::CharacAdvanceAltarManager::setDefaultStage() */

void __thiscall
advancealtar::CharacAdvanceAltarManager::setDefaultStage(CharacAdvanceAltarManager *this)

{
  setNextStage(this,0);
  return;
}

```

---

## setNextStage

```asm
// === 081331d4 advancealtar::CharacAdvanceAltarManager::setNextStage  [0x081331d4-0x81333b1] ===
 81331d4:	55                   	push   %ebp
 81331d5:	89 e5                	mov    %esp,%ebp
 81331d7:	81 ec 88 00 00 00    	sub    $0x88,%esp
 81331dd:	8b 45 08             	mov    0x8(%ebp),%eax
 81331e0:	8b 00                	mov    (%eax),%eax
 81331e2:	85 c0                	test   %eax,%eax
 81331e4:	0f 84 c5 01 00 00    	je     81333af <_ZN12advancealtar25CharacAdvanceAltarManager12setNextStageEi+0x1db>
 81331ea:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81331ee:	75 7b                	jne    813326b <_ZN12advancealtar25CharacAdvanceAltarManager12setNextStageEi+0x97>
 81331f0:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81331f3:	89 04 24             	mov    %eax,(%esp)
 81331f6:	e8 57 12 00 00       	call   8134452 <_ZN12advancealtar6_StageC1Ev>
 81331fb:	e8 9b 8f f9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8133200:	05 98 87 00 00       	add    $0x8798,%eax
 8133205:	89 04 24             	mov    %eax,(%esp)
 8133208:	e8 b3 15 00 00       	call   81347c0 <_ZNK12StageMapList18getFirstStageIndexEv>
 813320d:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8133210:	c7 45 a8 ff ff ff ff 	movl   $0xffffffff,-0x58(%ebp)
 8133217:	8d 45 c0             	lea    -0x40(%ebp),%eax
 813321a:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 813321d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8133221:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 8133224:	89 54 24 04          	mov    %edx,0x4(%esp)
 8133228:	89 04 24             	mov    %eax,(%esp)
 813322b:	e8 3c 34 00 00       	call   813666c <_ZSt9make_pairIRiRN12advancealtar6_StageEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 8133230:	83 ec 04             	sub    $0x4,%esp
 8133233:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8133236:	89 44 24 04          	mov    %eax,0x4(%esp)
 813323a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 813323d:	89 04 24             	mov    %eax,(%esp)
 8133240:	e8 65 34 00 00       	call   81366aa <_ZNSt4pairIKiN12advancealtar6_StageEEC1IiS2_EEOS_IT_T0_E>
 8133245:	8b 45 08             	mov    0x8(%ebp),%eax
 8133248:	8b 00                	mov    (%eax),%eax
 813324a:	8d 48 24             	lea    0x24(%eax),%ecx
 813324d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8133250:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8133253:	89 54 24 08          	mov    %edx,0x8(%esp)
 8133257:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 813325b:	89 04 24             	mov    %eax,(%esp)
 813325e:	e8 7d 34 00 00       	call   81366e0 <_ZNSt3mapIiN12advancealtar6_StageESt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 8133263:	83 ec 04             	sub    $0x4,%esp
 8133266:	e9 45 01 00 00       	jmp    81333b0 <_ZN12advancealtar25CharacAdvanceAltarManager12setNextStageEi+0x1dc>
 813326b:	c6 45 a3 00          	movb   $0x0,-0x5d(%ebp)
 813326f:	e8 27 8f f9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8133274:	8d 90 98 87 00 00    	lea    0x8798(%eax),%edx
 813327a:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 813327d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8133281:	8b 45 0c             	mov    0xc(%ebp),%eax
 8133284:	89 44 24 04          	mov    %eax,0x4(%esp)
 8133288:	89 14 24             	mov    %edx,(%esp)
 813328b:	e8 c8 1b 23 00       	call   8364e58 <_ZNK12StageMapList12getNextStageEiRb>
 8133290:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8133293:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8133296:	85 c0                	test   %eax,%eax
 8133298:	0f 84 12 01 00 00    	je     81333b0 <_ZN12advancealtar25CharacAdvanceAltarManager12setNextStageEi+0x1dc>
 813329e:	8b 45 08             	mov    0x8(%ebp),%eax
 81332a1:	8b 00                	mov    (%eax),%eax
 81332a3:	8d 48 24             	lea    0x24(%eax),%ecx
 81332a6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81332a9:	8d 55 9c             	lea    -0x64(%ebp),%edx
 81332ac:	89 54 24 08          	mov    %edx,0x8(%esp)
 81332b0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81332b4:	89 04 24             	mov    %eax,(%esp)
 81332b7:	e8 70 2b 00 00       	call   8135e2c <_ZNSt3mapIiN12advancealtar6_StageESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 81332bc:	83 ec 04             	sub    $0x4,%esp
 81332bf:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81332c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81332c6:	8d 45 98             	lea    -0x68(%ebp),%eax
 81332c9:	89 04 24             	mov    %eax,(%esp)
 81332cc:	e8 87 2b 00 00       	call   8135e58 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 81332d1:	8b 45 08             	mov    0x8(%ebp),%eax
 81332d4:	8b 00                	mov    (%eax),%eax
 81332d6:	8d 50 24             	lea    0x24(%eax),%edx
 81332d9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81332dc:	89 54 24 04          	mov    %edx,0x4(%esp)
 81332e0:	89 04 24             	mov    %eax,(%esp)
 81332e3:	e8 80 2b 00 00       	call   8135e68 <_ZNSt3mapIiN12advancealtar6_StageESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 81332e8:	83 ec 04             	sub    $0x4,%esp
 81332eb:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81332ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 81332f2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81332f5:	89 04 24             	mov    %eax,(%esp)
 81332f8:	e8 5b 2b 00 00       	call   8135e58 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 81332fd:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8133300:	89 44 24 04          	mov    %eax,0x4(%esp)
 8133304:	8d 45 98             	lea    -0x68(%ebp),%eax
 8133307:	89 04 24             	mov    %eax,(%esp)
 813330a:	e8 7f 2b 00 00       	call   8135e8e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEeqERKS5_>
 813330f:	84 c0                	test   %al,%al
 8133311:	0f 84 99 00 00 00    	je     81333b0 <_ZN12advancealtar25CharacAdvanceAltarManager12setNextStageEi+0x1dc>
 8133317:	8b 45 08             	mov    0x8(%ebp),%eax
 813331a:	8b 00                	mov    (%eax),%eax
 813331c:	c6 40 20 01          	movb   $0x1,0x20(%eax)
 8133320:	8d 45 90             	lea    -0x70(%ebp),%eax
 8133323:	89 04 24             	mov    %eax,(%esp)
 8133326:	e8 27 11 00 00       	call   8134452 <_ZN12advancealtar6_StageC1Ev>
 813332b:	8b 45 9c             	mov    -0x64(%ebp),%eax
 813332e:	89 45 90             	mov    %eax,-0x70(%ebp)
 8133331:	c7 45 94 ff ff ff ff 	movl   $0xffffffff,-0x6c(%ebp)
 8133338:	8d 45 ec             	lea    -0x14(%ebp),%eax
 813333b:	8d 55 90             	lea    -0x70(%ebp),%edx
 813333e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8133342:	8d 55 90             	lea    -0x70(%ebp),%edx
 8133345:	89 54 24 04          	mov    %edx,0x4(%esp)
 8133349:	89 04 24             	mov    %eax,(%esp)
 813334c:	e8 1b 33 00 00       	call   813666c <_ZSt9make_pairIRiRN12advancealtar6_StageEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 8133351:	83 ec 04             	sub    $0x4,%esp
 8133354:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8133357:	89 44 24 04          	mov    %eax,0x4(%esp)
 813335b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813335e:	89 04 24             	mov    %eax,(%esp)
 8133361:	e8 44 33 00 00       	call   81366aa <_ZNSt4pairIKiN12advancealtar6_StageEEC1IiS2_EEOS_IT_T0_E>
 8133366:	8b 45 08             	mov    0x8(%ebp),%eax
 8133369:	8b 00                	mov    (%eax),%eax
 813336b:	8d 48 24             	lea    0x24(%eax),%ecx
 813336e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8133371:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8133374:	89 54 24 08          	mov    %edx,0x8(%esp)
 8133378:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 813337c:	89 04 24             	mov    %eax,(%esp)
 813337f:	e8 5c 33 00 00       	call   81366e0 <_ZNSt3mapIiN12advancealtar6_StageESt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 8133384:	83 ec 04             	sub    $0x4,%esp
 8133387:	8b 45 08             	mov    0x8(%ebp),%eax
 813338a:	8b 00                	mov    (%eax),%eax
 813338c:	c6 80 cc 00 00 00 01 	movb   $0x1,0xcc(%eax)
 8133393:	0f b6 45 a3          	movzbl -0x5d(%ebp),%eax
 8133397:	84 c0                	test   %al,%al
 8133399:	74 15                	je     81333b0 <_ZN12advancealtar25CharacAdvanceAltarManager12setNextStageEi+0x1dc>
 813339b:	8b 45 9c             	mov    -0x64(%ebp),%eax
 813339e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81333a2:	8b 45 08             	mov    0x8(%ebp),%eax
 81333a5:	89 04 24             	mov    %eax,(%esp)
 81333a8:	e8 27 fe ff ff       	call   81331d4 <_ZN12advancealtar25CharacAdvanceAltarManager12setNextStageEi>
 81333ad:	eb 01                	jmp    81333b0 <_ZN12advancealtar25CharacAdvanceAltarManager12setNextStageEi+0x1dc>
 81333af:	90                   	nop
 81333b0:	c9                   	leave
 81333b1:	c3                   	ret

```

```c
// advancealtar::CharacAdvanceAltarManager::setNextStage @ 0x81331d4

/* advancealtar::CharacAdvanceAltarManager::setNextStage(int) */

void __thiscall
advancealtar::CharacAdvanceAltarManager::setNextStage(CharacAdvanceAltarManager *this,int param_1)

{
  char cVar1;
  int iVar2;
  int local_74 [2];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> local_6c [4];
  int local_68;
  bool local_61;
  undefined4 local_60;
  undefined4 local_5c;
  pair local_58 [8];
  pair<int_const,advancealtar::_Stage> local_50 [12];
  int local_44 [3];
  _Rb_tree_iterator local_38 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> local_34 [4];
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  local_30 [4];
  pair local_2c [8];
  pair<int_const,advancealtar::_Stage> local_24 [12];
  int local_18 [5];
  
  if (*(int *)this != 0) {
    if (param_1 == 0) {
      _Stage::_Stage((_Stage *)&local_60);
      iVar2 = G_CDataManager();
      local_60 = StageMapList::getFirstStageIndex((StageMapList *)(iVar2 + 0x8798));
      local_5c = 0xffffffff;
      std::make_pair<int&,advancealtar::_Stage&>(local_44,(_Stage *)&local_60);
      std::pair<int_const,advancealtar::_Stage>::pair<int,advancealtar::_Stage>
                (local_50,(pair *)local_44);
      std::
      map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
      ::insert(local_58);
    }
    else {
      local_61 = false;
      iVar2 = G_CDataManager();
      local_68 = StageMapList::getNextStage((StageMapList *)(iVar2 + 0x8798),param_1,&local_61);
      if (local_68 != 0) {
        std::
        map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
        ::find((int *)local_38);
        std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::
        _Rb_tree_const_iterator(local_6c,local_38);
        std::
        map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
        ::end(local_30);
        std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::
        _Rb_tree_const_iterator(local_34,(_Rb_tree_iterator *)local_30);
        cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator==
                          (local_6c,(_Rb_tree_const_iterator *)local_34);
        if (cVar1 != '\0') {
          *(undefined1 *)(*(int *)this + 0x20) = 1;
          _Stage::_Stage((_Stage *)local_74);
          local_74[0] = local_68;
          local_74[1] = 0xffffffff;
          std::make_pair<int&,advancealtar::_Stage&>(local_18,(_Stage *)local_74);
          std::pair<int_const,advancealtar::_Stage>::pair<int,advancealtar::_Stage>
                    (local_24,(pair *)local_18);
          std::
          map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
          ::insert(local_2c);
          *(undefined1 *)(*(int *)this + 0xcc) = 1;
          if (local_61 != false) {
            setNextStage(this,local_68);
          }
        }
      }
    }
  }
  return;
}

```

---

## setSlot

```asm
// === 08131b58 advancealtar::CharacAdvanceAltarManager::setSlot  [0x08131b58-0x8131f09] ===
 8131b58:	55                   	push   %ebp
 8131b59:	89 e5                	mov    %esp,%ebp
 8131b5b:	53                   	push   %ebx
 8131b5c:	83 ec 64             	sub    $0x64,%esp
 8131b5f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8131b62:	88 45 b4             	mov    %al,-0x4c(%ebp)
 8131b65:	8b 45 08             	mov    0x8(%ebp),%eax
 8131b68:	8b 00                	mov    (%eax),%eax
 8131b6a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8131b6d:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8131b71:	75 0a                	jne    8131b7d <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x25>
 8131b73:	b8 02 00 00 00       	mov    $0x2,%eax
 8131b78:	e9 87 03 00 00       	jmp    8131f04 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x3ac>
 8131b7d:	8b 45 10             	mov    0x10(%ebp),%eax
 8131b80:	8b 00                	mov    (%eax),%eax
 8131b82:	83 f8 01             	cmp    $0x1,%eax
 8131b85:	74 07                	je     8131b8e <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x36>
 8131b87:	83 f8 02             	cmp    $0x2,%eax
 8131b8a:	74 1e                	je     8131baa <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x52>
 8131b8c:	eb 38                	jmp    8131bc6 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x6e>
 8131b8e:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8131b95:	8b 45 10             	mov    0x10(%ebp),%eax
 8131b98:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8131b9c:	3c 05                	cmp    $0x5,%al
 8131b9e:	76 30                	jbe    8131bd0 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x78>
 8131ba0:	b8 02 00 00 00       	mov    $0x2,%eax
 8131ba5:	e9 5a 03 00 00       	jmp    8131f04 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x3ac>
 8131baa:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 8131bb1:	8b 45 10             	mov    0x10(%ebp),%eax
 8131bb4:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8131bb8:	3c 05                	cmp    $0x5,%al
 8131bba:	76 17                	jbe    8131bd3 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x7b>
 8131bbc:	b8 02 00 00 00       	mov    $0x2,%eax
 8131bc1:	e9 3e 03 00 00       	jmp    8131f04 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x3ac>
 8131bc6:	b8 02 00 00 00       	mov    $0x2,%eax
 8131bcb:	e9 34 03 00 00       	jmp    8131f04 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x3ac>
 8131bd0:	90                   	nop
 8131bd1:	eb 01                	jmp    8131bd4 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x7c>
 8131bd3:	90                   	nop
 8131bd4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8131bd7:	8b 00                	mov    (%eax),%eax
 8131bd9:	89 c3                	mov    %eax,%ebx
 8131bdb:	e8 bb a5 f9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8131be0:	8d 90 1c 63 00 00    	lea    0x631c(%eax),%edx
 8131be6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8131be9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8131bed:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8131bf1:	89 14 24             	mov    %edx,(%esp)
 8131bf4:	e8 ef f3 76 00       	call   88a0fe8 <_ZN12advancealtar25AdvanceAltarShopParameter20getBuyUpgradeDataVecEiNS_20AdvanceAltarShopType1TE>
 8131bf9:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8131bfc:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8131c00:	75 0a                	jne    8131c0c <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0xb4>
 8131c02:	b8 03 00 00 00       	mov    $0x3,%eax
 8131c07:	e9 f8 02 00 00       	jmp    8131f04 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x3ac>
 8131c0c:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8131c13:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8131c16:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8131c19:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131c1d:	89 04 24             	mov    %eax,(%esp)
 8131c20:	e8 79 44 00 00       	call   813609e <_ZNSt6vectorIN12advancealtar14BuyUpgradeDataESaIS1_EE5beginEv>
 8131c25:	83 ec 04             	sub    $0x4,%esp
 8131c28:	eb 49                	jmp    8131c73 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x11b>
 8131c2a:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8131c2d:	89 04 24             	mov    %eax,(%esp)
 8131c30:	e8 13 45 00 00       	call   8136148 <_ZNK9__gnu_cxx17__normal_iteratorIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEptEv>
 8131c35:	8b 10                	mov    (%eax),%edx
 8131c37:	8b 45 10             	mov    0x10(%ebp),%eax
 8131c3a:	8b 40 08             	mov    0x8(%eax),%eax
 8131c3d:	39 c2                	cmp    %eax,%edx
 8131c3f:	0f 94 c0             	sete   %al
 8131c42:	84 c0                	test   %al,%al
 8131c44:	74 10                	je     8131c56 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0xfe>
 8131c46:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8131c49:	89 04 24             	mov    %eax,(%esp)
 8131c4c:	e8 01 45 00 00       	call   8136152 <_ZNK9__gnu_cxx17__normal_iteratorIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEdeEv>
 8131c51:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8131c54:	eb 48                	jmp    8131c9e <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x146>
 8131c56:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8131c59:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8131c60:	00 
 8131c61:	8d 55 b8             	lea    -0x48(%ebp),%edx
 8131c64:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131c68:	89 04 24             	mov    %eax,(%esp)
 8131c6b:	e8 a4 44 00 00       	call   8136114 <_ZN9__gnu_cxx17__normal_iteratorIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEppEi>
 8131c70:	83 ec 04             	sub    $0x4,%esp
 8131c73:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8131c76:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8131c79:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131c7d:	89 04 24             	mov    %eax,(%esp)
 8131c80:	e8 3d 44 00 00       	call   81360c2 <_ZNSt6vectorIN12advancealtar14BuyUpgradeDataESaIS1_EE3endEv>
 8131c85:	83 ec 04             	sub    $0x4,%esp
 8131c88:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8131c8b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8131c8f:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8131c92:	89 04 24             	mov    %eax,(%esp)
 8131c95:	e8 4e 44 00 00       	call   81360e8 <_ZN9__gnu_cxxneIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8131c9a:	84 c0                	test   %al,%al
 8131c9c:	75 8c                	jne    8131c2a <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0xd2>
 8131c9e:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8131ca2:	75 0a                	jne    8131cae <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x156>
 8131ca4:	b8 03 00 00 00       	mov    $0x3,%eax
 8131ca9:	e9 56 02 00 00       	jmp    8131f04 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x3ac>
 8131cae:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8131cb1:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8131cb5:	83 f0 01             	xor    $0x1,%eax
 8131cb8:	84 c0                	test   %al,%al
 8131cba:	74 0a                	je     8131cc6 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x16e>
 8131cbc:	b8 03 00 00 00       	mov    $0x3,%eax
 8131cc1:	e9 3e 02 00 00       	jmp    8131f04 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x3ac>
 8131cc6:	0f b6 45 b4          	movzbl -0x4c(%ebp),%eax
 8131cca:	83 f0 01             	xor    $0x1,%eax
 8131ccd:	84 c0                	test   %al,%al
 8131ccf:	74 1e                	je     8131cef <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x197>
 8131cd1:	8b 45 10             	mov    0x10(%ebp),%eax
 8131cd4:	89 44 24 08          	mov    %eax,0x8(%esp)
 8131cd8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8131cdb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8131cdf:	8b 45 08             	mov    0x8(%ebp),%eax
 8131ce2:	89 04 24             	mov    %eax,(%esp)
 8131ce5:	e8 10 0f 00 00       	call   8132bfa <_ZN12advancealtar25CharacAdvanceAltarManager9resetSlotERNS_16AdvanceAltarDataERKN15CMDPacketStruct12_SetSlotDataE>
 8131cea:	e9 15 02 00 00       	jmp    8131f04 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x3ac>
 8131cef:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8131cf2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8131cf6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8131cf9:	89 04 24             	mov    %eax,(%esp)
 8131cfc:	e8 d7 7c 76 00       	call   88999d8 <_ZN12advancealtar16AdvanceAltarData13getBuyItemMapENS_20AdvanceAltarShopType1TE>
 8131d01:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8131d04:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8131d08:	75 0a                	jne    8131d14 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x1bc>
 8131d0a:	b8 03 00 00 00       	mov    $0x3,%eax
 8131d0f:	e9 f0 01 00 00       	jmp    8131f04 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x3ac>
 8131d14:	8b 45 10             	mov    0x10(%ebp),%eax
 8131d17:	8d 50 08             	lea    0x8(%eax),%edx
 8131d1a:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8131d1d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8131d21:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8131d24:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131d28:	89 04 24             	mov    %eax,(%esp)
 8131d2b:	e8 2c 44 00 00       	call   813615c <_ZNKSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 8131d30:	83 ec 04             	sub    $0x4,%esp
 8131d33:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8131d36:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8131d39:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131d3d:	89 04 24             	mov    %eax,(%esp)
 8131d40:	e8 43 44 00 00       	call   8136188 <_ZNKSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 8131d45:	83 ec 04             	sub    $0x4,%esp
 8131d48:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8131d4b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8131d4f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8131d52:	89 04 24             	mov    %eax,(%esp)
 8131d55:	e8 54 44 00 00       	call   81361ae <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEeqERKS5_>
 8131d5a:	84 c0                	test   %al,%al
 8131d5c:	74 0a                	je     8131d68 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x210>
 8131d5e:	b8 03 00 00 00       	mov    $0x3,%eax
 8131d63:	e9 9c 01 00 00       	jmp    8131f04 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x3ac>
 8131d68:	8b 45 10             	mov    0x10(%ebp),%eax
 8131d6b:	8b 00                	mov    (%eax),%eax
 8131d6d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8131d71:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8131d74:	89 04 24             	mov    %eax,(%esp)
 8131d77:	e8 90 7c 76 00       	call   8899a0c <_ZN12advancealtar16AdvanceAltarData10getSlotMapENS_20AdvanceAltarSlotType1TE>
 8131d7c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8131d7f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8131d83:	75 0a                	jne    8131d8f <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x237>
 8131d85:	b8 03 00 00 00       	mov    $0x3,%eax
 8131d8a:	e9 75 01 00 00       	jmp    8131f04 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x3ac>
 8131d8f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8131d92:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8131d95:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131d99:	89 04 24             	mov    %eax,(%esp)
 8131d9c:	e8 21 44 00 00       	call   81361c2 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE5beginEv>
 8131da1:	83 ec 04             	sub    $0x4,%esp
 8131da4:	eb 44                	jmp    8131dea <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x292>
 8131da6:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8131da9:	89 04 24             	mov    %eax,(%esp)
 8131dac:	e8 af 44 00 00       	call   8136260 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 8131db1:	8b 50 07             	mov    0x7(%eax),%edx
 8131db4:	8b 45 10             	mov    0x10(%ebp),%eax
 8131db7:	8b 40 08             	mov    0x8(%eax),%eax
 8131dba:	39 c2                	cmp    %eax,%edx
 8131dbc:	0f 94 c0             	sete   %al
 8131dbf:	84 c0                	test   %al,%al
 8131dc1:	74 0a                	je     8131dcd <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x275>
 8131dc3:	b8 04 00 00 00       	mov    $0x4,%eax
 8131dc8:	e9 37 01 00 00       	jmp    8131f04 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x3ac>
 8131dcd:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8131dd0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8131dd7:	00 
 8131dd8:	8d 55 bc             	lea    -0x44(%ebp),%edx
 8131ddb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131ddf:	89 04 24             	mov    %eax,(%esp)
 8131de2:	e8 3b 44 00 00       	call   8136222 <_ZNSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEppEi>
 8131de7:	83 ec 04             	sub    $0x4,%esp
 8131dea:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8131ded:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8131df0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131df4:	89 04 24             	mov    %eax,(%esp)
 8131df7:	e8 ec 43 00 00       	call   81361e8 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE3endEv>
 8131dfc:	83 ec 04             	sub    $0x4,%esp
 8131dff:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8131e02:	89 44 24 04          	mov    %eax,0x4(%esp)
 8131e06:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8131e09:	89 04 24             	mov    %eax,(%esp)
 8131e0c:	e8 fd 43 00 00       	call   813620e <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEneERKS5_>
 8131e11:	84 c0                	test   %al,%al
 8131e13:	75 91                	jne    8131da6 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x24e>
 8131e15:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8131e18:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8131e1b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131e1f:	89 04 24             	mov    %eax,(%esp)
 8131e22:	e8 9b 43 00 00       	call   81361c2 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE5beginEv>
 8131e27:	83 ec 04             	sub    $0x4,%esp
 8131e2a:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8131e2d:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8131e30:	e9 9b 00 00 00       	jmp    8131ed0 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x378>
 8131e35:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8131e38:	89 04 24             	mov    %eax,(%esp)
 8131e3b:	e8 20 44 00 00       	call   8136260 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 8131e40:	0f b6 50 06          	movzbl 0x6(%eax),%edx
 8131e44:	8b 45 10             	mov    0x10(%ebp),%eax
 8131e47:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8131e4b:	38 c2                	cmp    %al,%dl
 8131e4d:	75 36                	jne    8131e85 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x32d>
 8131e4f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8131e52:	89 04 24             	mov    %eax,(%esp)
 8131e55:	e8 06 44 00 00       	call   8136260 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 8131e5a:	8b 40 02             	mov    0x2(%eax),%eax
 8131e5d:	89 c2                	mov    %eax,%edx
 8131e5f:	8b 45 10             	mov    0x10(%ebp),%eax
 8131e62:	8b 00                	mov    (%eax),%eax
 8131e64:	39 c2                	cmp    %eax,%edx
 8131e66:	75 1d                	jne    8131e85 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x32d>
 8131e68:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8131e6b:	89 04 24             	mov    %eax,(%esp)
 8131e6e:	e8 ed 43 00 00       	call   8136260 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 8131e73:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8131e77:	83 f0 01             	xor    $0x1,%eax
 8131e7a:	84 c0                	test   %al,%al
 8131e7c:	74 07                	je     8131e85 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x32d>
 8131e7e:	b8 01 00 00 00       	mov    $0x1,%eax
 8131e83:	eb 05                	jmp    8131e8a <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x332>
 8131e85:	b8 00 00 00 00       	mov    $0x0,%eax
 8131e8a:	84 c0                	test   %al,%al
 8131e8c:	74 25                	je     8131eb3 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x35b>
 8131e8e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8131e91:	89 04 24             	mov    %eax,(%esp)
 8131e94:	e8 c7 43 00 00       	call   8136260 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 8131e99:	8b 55 10             	mov    0x10(%ebp),%edx
 8131e9c:	8b 52 08             	mov    0x8(%edx),%edx
 8131e9f:	89 50 07             	mov    %edx,0x7(%eax)
 8131ea2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8131ea5:	c6 80 cc 00 00 00 01 	movb   $0x1,0xcc(%eax)
 8131eac:	b8 00 00 00 00       	mov    $0x0,%eax
 8131eb1:	eb 51                	jmp    8131f04 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x3ac>
 8131eb3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8131eb6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8131ebd:	00 
 8131ebe:	8d 55 bc             	lea    -0x44(%ebp),%edx
 8131ec1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131ec5:	89 04 24             	mov    %eax,(%esp)
 8131ec8:	e8 55 43 00 00       	call   8136222 <_ZNSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEppEi>
 8131ecd:	83 ec 04             	sub    $0x4,%esp
 8131ed0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8131ed3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8131ed6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131eda:	89 04 24             	mov    %eax,(%esp)
 8131edd:	e8 06 43 00 00       	call   81361e8 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE3endEv>
 8131ee2:	83 ec 04             	sub    $0x4,%esp
 8131ee5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8131ee8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8131eec:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8131eef:	89 04 24             	mov    %eax,(%esp)
 8131ef2:	e8 17 43 00 00       	call   813620e <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEneERKS5_>
 8131ef7:	84 c0                	test   %al,%al
 8131ef9:	0f 85 36 ff ff ff    	jne    8131e35 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE+0x2dd>
 8131eff:	b8 02 00 00 00       	mov    $0x2,%eax
 8131f04:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8131f07:	c9                   	leave
 8131f08:	c3                   	ret
 8131f09:	90                   	nop

```

```c
// advancealtar::CharacAdvanceAltarManager::setSlot @ 0x8131b58

/* advancealtar::CharacAdvanceAltarManager::setSlot(bool, CMDPacketStruct::_SetSlotData const&) */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::setSlot
          (CharacAdvanceAltarManager *this,bool param_1,_SetSlotData *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  _SetSlotData *p_Var6;
  undefined4 local_54;
  char local_50;
  __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_4c [4];
  undefined4 local_48;
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> local_44 [4];
  __normal_iterator local_40 [4];
  __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_3c [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_38 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_34 [4];
  _Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_30 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_2c [4];
  _Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_28 [4];
  AdvanceAltarData *local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_50 = param_1;
  local_24 = *(AdvanceAltarData **)this;
  if (local_24 == (AdvanceAltarData *)0x0) {
    return 2;
  }
  if (*(int *)param_2 == 1) {
    local_20 = 0;
    if (5 < (byte)param_2[4]) {
      return 2;
    }
  }
  else {
    if (*(int *)param_2 != 2) {
      return 2;
    }
    local_20 = 1;
    if (5 < (byte)param_2[4]) {
      return 2;
    }
  }
  uVar4 = *(undefined4 *)local_24;
  iVar3 = G_CDataManager();
  local_1c = AdvanceAltarShopParameter::getBuyUpgradeDataVec
                       ((AdvanceAltarShopParameter *)(iVar3 + 0x631c),uVar4,local_20);
  if (local_1c == 0) {
    uVar4 = 3;
  }
  else {
    local_18 = 0;
    std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::begin();
    while( true ) {
      std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::end();
      bVar1 = __gnu_cxx::operator!=(local_4c,local_40);
      if (!bVar1) break;
      piVar5 = (int *)__gnu_cxx::
                      __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                      ::operator->(local_4c);
      if (*piVar5 == *(int *)(param_2 + 8)) {
        local_18 = __gnu_cxx::
                   __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                   ::operator*(local_4c);
        break;
      }
      __gnu_cxx::
      __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
      ::operator++(local_3c,(int)local_4c);
    }
    if (local_18 == 0) {
      uVar4 = 3;
    }
    else if (*(char *)(local_18 + 8) == '\x01') {
      if (local_50 == '\x01') {
        local_14 = AdvanceAltarData::getBuyItemMap(local_24,local_20);
        if (local_14 == 0) {
          uVar4 = 3;
        }
        else {
          p_Var6 = param_2 + 8;
          std::
          map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
          ::find((int *)local_44);
          std::
          map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
          ::end(local_38);
          cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::
                  operator==(local_44,(_Rb_tree_const_iterator *)local_38);
          if (cVar2 == '\0') {
            local_10 = AdvanceAltarData::getSlotMap(local_24,*(undefined4 *)param_2,p_Var6);
            if (local_10 == 0) {
              uVar4 = 3;
            }
            else {
              std::
              map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
              ::begin((map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
                       *)&local_48);
              while( true ) {
                std::
                map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
                ::end(local_34);
                cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                        operator!=((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                                    *)&local_48,(_Rb_tree_iterator *)local_34);
                if (cVar2 == '\0') break;
                iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                        operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                                    *)&local_48);
                if (*(int *)(iVar3 + 7) == *(int *)(param_2 + 8)) {
                  return 4;
                }
                std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                operator++(local_30,(int)&local_48);
              }
              std::
              map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
              ::begin((map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
                       *)&local_54);
              local_48 = local_54;
              while( true ) {
                std::
                map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
                ::end(local_2c);
                cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                        operator!=((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                                    *)&local_48,(_Rb_tree_iterator *)local_2c);
                if (cVar2 == '\0') break;
                iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                        operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                                    *)&local_48);
                if (((*(_SetSlotData *)(iVar3 + 6) == param_2[4]) &&
                    (iVar3 = std::
                             _Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                             operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                                         *)&local_48), *(int *)(iVar3 + 2) == *(int *)param_2)) &&
                   (iVar3 = std::
                            _Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                            operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                                        *)&local_48), *(char *)(iVar3 + 1) != '\x01')) {
                  bVar1 = true;
                }
                else {
                  bVar1 = false;
                }
                if (bVar1) {
                  iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                          ::operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                                        *)&local_48);
                  *(undefined4 *)(iVar3 + 7) = *(undefined4 *)(param_2 + 8);
                  local_24[0xcc] = (AdvanceAltarData)0x1;
                  return 0;
                }
                std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                operator++(local_28,(int)&local_48);
              }
              uVar4 = 2;
            }
          }
          else {
            uVar4 = 3;
          }
        }
      }
      else {
        uVar4 = resetSlot(this,local_24,param_2);
      }
    }
    else {
      uVar4 = 3;
    }
  }
  return uVar4;
}

```

---

## setUnlockBuyItem

```asm
// === 08132d20 advancealtar::CharacAdvanceAltarManager::setUnlockBuyItem  [0x08132d20-0x8132f71] ===
 8132d20:	55                   	push   %ebp
 8132d21:	89 e5                	mov    %esp,%ebp
 8132d23:	53                   	push   %ebx
 8132d24:	83 ec 74             	sub    $0x74,%esp
 8132d27:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8132d2e:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8132d35:	8b 45 08             	mov    0x8(%ebp),%eax
 8132d38:	8b 00                	mov    (%eax),%eax
 8132d3a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8132d3d:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8132d41:	0f 84 1e 02 00 00    	je     8132f65 <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE+0x245>
 8132d47:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8132d4a:	8b 00                	mov    (%eax),%eax
 8132d4c:	89 c3                	mov    %eax,%ebx
 8132d4e:	e8 48 94 f9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8132d53:	8d 90 1c 63 00 00    	lea    0x631c(%eax),%edx
 8132d59:	8b 45 0c             	mov    0xc(%ebp),%eax
 8132d5c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8132d60:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8132d64:	89 14 24             	mov    %edx,(%esp)
 8132d67:	e8 7c e2 76 00       	call   88a0fe8 <_ZN12advancealtar25AdvanceAltarShopParameter20getBuyUpgradeDataVecEiNS_20AdvanceAltarShopType1TE>
 8132d6c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8132d6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8132d72:	89 44 24 04          	mov    %eax,0x4(%esp)
 8132d76:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8132d79:	89 04 24             	mov    %eax,(%esp)
 8132d7c:	e8 57 6c 76 00       	call   88999d8 <_ZN12advancealtar16AdvanceAltarData13getBuyItemMapENS_20AdvanceAltarShopType1TE>
 8132d81:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8132d84:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8132d88:	0f 84 da 01 00 00    	je     8132f68 <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE+0x248>
 8132d8e:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8132d92:	0f 84 d3 01 00 00    	je     8132f6b <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE+0x24b>
 8132d98:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8132d9b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8132d9e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132da2:	89 04 24             	mov    %eax,(%esp)
 8132da5:	e8 f4 32 00 00       	call   813609e <_ZNSt6vectorIN12advancealtar14BuyUpgradeDataESaIS1_EE5beginEv>
 8132daa:	83 ec 04             	sub    $0x4,%esp
 8132dad:	e9 78 01 00 00       	jmp    8132f2a <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE+0x20a>
 8132db2:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8132db5:	89 04 24             	mov    %eax,(%esp)
 8132db8:	e8 8b 33 00 00       	call   8136148 <_ZNK9__gnu_cxx17__normal_iteratorIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEptEv>
 8132dbd:	8b 40 04             	mov    0x4(%eax),%eax
 8132dc0:	3b 45 10             	cmp    0x10(%ebp),%eax
 8132dc3:	0f 94 c0             	sete   %al
 8132dc6:	84 c0                	test   %al,%al
 8132dc8:	0f 84 3f 01 00 00    	je     8132f0d <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE+0x1ed>
 8132dce:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8132dd1:	89 04 24             	mov    %eax,(%esp)
 8132dd4:	e8 9d 16 00 00       	call   8134476 <_ZN12advancealtar8_BuyItemC1Ev>
 8132dd9:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 8132de0:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8132de3:	89 04 24             	mov    %eax,(%esp)
 8132de6:	e8 5d 33 00 00       	call   8136148 <_ZNK9__gnu_cxx17__normal_iteratorIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEptEv>
 8132deb:	8d 55 a0             	lea    -0x60(%ebp),%edx
 8132dee:	89 54 24 08          	mov    %edx,0x8(%esp)
 8132df2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8132df9:	00 
 8132dfa:	89 04 24             	mov    %eax,(%esp)
 8132dfd:	e8 18 01 77 00       	call   88a2f1a <_ZN12advancealtar14BuyUpgradeData25getMinLevelFieldDataPointENS_9FieldType1TERi>
 8132e02:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8132e05:	8b 5d a0             	mov    -0x60(%ebp),%ebx
 8132e08:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8132e0b:	89 04 24             	mov    %eax,(%esp)
 8132e0e:	e8 35 33 00 00       	call   8136148 <_ZNK9__gnu_cxx17__normal_iteratorIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEptEv>
 8132e13:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8132e1a:	00 
 8132e1b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8132e1f:	89 04 24             	mov    %eax,(%esp)
 8132e22:	e8 25 00 77 00       	call   88a2e4c <_ZN12advancealtar14BuyUpgradeData17getFieldDataPointEiNS_9FieldType1TE>
 8132e27:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8132e2a:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8132e2e:	0f 84 d9 00 00 00    	je     8132f0d <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE+0x1ed>
 8132e34:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8132e38:	0f 84 cf 00 00 00    	je     8132f0d <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE+0x1ed>
 8132e3e:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8132e41:	89 04 24             	mov    %eax,(%esp)
 8132e44:	e8 ff 32 00 00       	call   8136148 <_ZNK9__gnu_cxx17__normal_iteratorIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEptEv>
 8132e49:	8b 00                	mov    (%eax),%eax
 8132e4b:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8132e4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8132e51:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8132e54:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8132e57:	66 89 45 ac          	mov    %ax,-0x54(%ebp)
 8132e5b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8132e5e:	8b 40 04             	mov    0x4(%eax),%eax
 8132e61:	66 89 45 ae          	mov    %ax,-0x52(%ebp)
 8132e65:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8132e68:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 8132e6b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8132e6f:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 8132e72:	83 c2 04             	add    $0x4,%edx
 8132e75:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132e79:	89 04 24             	mov    %eax,(%esp)
 8132e7c:	e8 69 31 00 00       	call   8135fea <_ZSt9make_pairIRiRN12advancealtar8_BuyItemEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 8132e81:	83 ec 04             	sub    $0x4,%esp
 8132e84:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8132e87:	89 44 24 04          	mov    %eax,0x4(%esp)
 8132e8b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8132e8e:	89 04 24             	mov    %eax,(%esp)
 8132e91:	e8 92 31 00 00       	call   8136028 <_ZNSt4pairIKiN12advancealtar8_BuyItemEEC1IiS2_EEOS_IT_T0_E>
 8132e96:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8132e99:	8d 55 c0             	lea    -0x40(%ebp),%edx
 8132e9c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8132ea0:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8132ea3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132ea7:	89 04 24             	mov    %eax,(%esp)
 8132eaa:	e8 b5 31 00 00       	call   8136064 <_ZNSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 8132eaf:	83 ec 04             	sub    $0x4,%esp
 8132eb2:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8132eb5:	85 c0                	test   %eax,%eax
 8132eb7:	7e 1a                	jle    8132ed3 <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE+0x1b3>
 8132eb9:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8132ebc:	89 04 24             	mov    %eax,(%esp)
 8132ebf:	e8 84 32 00 00       	call   8136148 <_ZNK9__gnu_cxx17__normal_iteratorIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEptEv>
 8132ec4:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8132ec8:	84 c0                	test   %al,%al
 8132eca:	74 07                	je     8132ed3 <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE+0x1b3>
 8132ecc:	b8 01 00 00 00       	mov    $0x1,%eax
 8132ed1:	eb 05                	jmp    8132ed8 <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE+0x1b8>
 8132ed3:	b8 00 00 00 00       	mov    $0x0,%eax
 8132ed8:	84 c0                	test   %al,%al
 8132eda:	74 19                	je     8132ef5 <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE+0x1d5>
 8132edc:	8b 55 a8             	mov    -0x58(%ebp),%edx
 8132edf:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8132ee2:	89 54 24 08          	mov    %edx,0x8(%esp)
 8132ee6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8132eea:	8b 45 08             	mov    0x8(%ebp),%eax
 8132eed:	89 04 24             	mov    %eax,(%esp)
 8132ef0:	e8 3f f3 ff ff       	call   8132234 <_ZN12advancealtar25CharacAdvanceAltarManager24setUnlockItemToEmptySlotENS_20AdvanceAltarShopType1TEi>
 8132ef5:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8132ef9:	74 12                	je     8132f0d <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE+0x1ed>
 8132efb:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8132efe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8132f02:	8b 45 14             	mov    0x14(%ebp),%eax
 8132f05:	89 04 24             	mov    %eax,(%esp)
 8132f08:	e8 41 36 00 00       	call   813654e <_ZNSt6vectorIN12advancealtar8_BuyItemESaIS1_EE9push_backERKS1_>
 8132f0d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8132f10:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8132f17:	00 
 8132f18:	8d 55 b0             	lea    -0x50(%ebp),%edx
 8132f1b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132f1f:	89 04 24             	mov    %eax,(%esp)
 8132f22:	e8 ed 31 00 00       	call   8136114 <_ZN9__gnu_cxx17__normal_iteratorIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEppEi>
 8132f27:	83 ec 04             	sub    $0x4,%esp
 8132f2a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8132f2d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8132f30:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132f34:	89 04 24             	mov    %eax,(%esp)
 8132f37:	e8 86 31 00 00       	call   81360c2 <_ZNSt6vectorIN12advancealtar14BuyUpgradeDataESaIS1_EE3endEv>
 8132f3c:	83 ec 04             	sub    $0x4,%esp
 8132f3f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8132f42:	89 44 24 04          	mov    %eax,0x4(%esp)
 8132f46:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8132f49:	89 04 24             	mov    %eax,(%esp)
 8132f4c:	e8 97 31 00 00       	call   81360e8 <_ZN9__gnu_cxxneIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8132f51:	84 c0                	test   %al,%al
 8132f53:	0f 85 59 fe ff ff    	jne    8132db2 <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE+0x92>
 8132f59:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8132f5c:	c6 80 cc 00 00 00 01 	movb   $0x1,0xcc(%eax)
 8132f63:	eb 07                	jmp    8132f6c <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE+0x24c>
 8132f65:	90                   	nop
 8132f66:	eb 04                	jmp    8132f6c <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE+0x24c>
 8132f68:	90                   	nop
 8132f69:	eb 01                	jmp    8132f6c <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE+0x24c>
 8132f6b:	90                   	nop
 8132f6c:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8132f6f:	c9                   	leave
 8132f70:	c3                   	ret
 8132f71:	90                   	nop

```

```c
// advancealtar::CharacAdvanceAltarManager::setUnlockBuyItem @ 0x8132d20

/* advancealtar::CharacAdvanceAltarManager::setUnlockBuyItem(advancealtar::AdvanceAltarShopType::T,
   int, std::vector<advancealtar::_BuyItem, std::allocator<advancealtar::_BuyItem> >*) */

void __thiscall
advancealtar::CharacAdvanceAltarManager::setUnlockBuyItem
          (CharacAdvanceAltarManager *this,undefined4 param_2,int param_3,
          vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>> *param_4)

{
  bool bVar1;
  int iVar2;
  BuyUpgradeData *pBVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined2 local_56;
  __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_54 [4];
  __normal_iterator local_50 [4];
  pair local_4c [8];
  pair<int_const,advancealtar::_BuyItem> local_44 [16];
  int local_34 [4];
  __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_24 [4];
  int local_20;
  int local_1c;
  AdvanceAltarData *local_18;
  int local_14;
  int local_10;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = *(AdvanceAltarData **)this;
  if (local_18 != (AdvanceAltarData *)0x0) {
    uVar4 = *(undefined4 *)local_18;
    iVar2 = G_CDataManager();
    local_20 = AdvanceAltarShopParameter::getBuyUpgradeDataVec
                         ((AdvanceAltarShopParameter *)(iVar2 + 0x631c),uVar4,param_2);
    local_1c = AdvanceAltarData::getBuyItemMap(local_18,param_2);
    if ((local_20 != 0) && (local_1c != 0)) {
      std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::begin
                ();
      while( true ) {
        std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::end
                  ();
        bVar1 = __gnu_cxx::operator!=(local_54,local_50);
        if (!bVar1) break;
        iVar2 = __gnu_cxx::
                __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                ::operator->(local_54);
        if (*(int *)(iVar2 + 4) == param_3) {
          _BuyItem::_BuyItem((_BuyItem *)&local_60);
          local_64 = 0;
          pBVar3 = (BuyUpgradeData *)
                   __gnu_cxx::
                   __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                   ::operator->(local_54);
          local_14 = BuyUpgradeData::getMinLevelFieldDataPoint(pBVar3,1,&local_64);
          iVar2 = local_64;
          uVar4 = __gnu_cxx::
                  __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                  ::operator->(local_54);
          local_10 = BuyUpgradeData::getFieldDataPoint(uVar4,iVar2,2);
          if ((local_14 != 0) && (local_10 != 0)) {
            puVar5 = (undefined4 *)
                     __gnu_cxx::
                     __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                     ::operator->(local_54);
            local_5c = *puVar5;
            local_60 = param_2;
            local_58 = (undefined2)local_64;
            local_56 = (undefined2)*(undefined4 *)(local_10 + 4);
            std::make_pair<int&,advancealtar::_BuyItem&>(local_34,(_BuyItem *)&local_5c);
            std::pair<int_const,advancealtar::_BuyItem>::pair<int,advancealtar::_BuyItem>
                      (local_44,(pair *)local_34);
            std::
            map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
            ::insert(local_4c);
            if ((local_64 < 1) ||
               (iVar2 = __gnu_cxx::
                        __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                        ::operator->(local_54), *(char *)(iVar2 + 8) == '\0')) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              setUnlockItemToEmptySlot(this,local_60,local_5c);
            }
            if (param_4 !=
                (vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>> *)0x0) {
              std::vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>>::push_back
                        (param_4,(_BuyItem *)&local_60);
            }
          }
        }
        __gnu_cxx::
        __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
        ::operator++(local_24,(int)local_54);
      }
      local_18[0xcc] = (AdvanceAltarData)0x1;
    }
  }
  return;
}

```

---

## setUnlockItemToEmptySlot

```asm
// === 08132234 advancealtar::CharacAdvanceAltarManager::setUnlockItemToEmptySlot  [0x08132234-0x813234d] ===
 8132234:	55                   	push   %ebp
 8132235:	89 e5                	mov    %esp,%ebp
 8132237:	83 ec 38             	sub    $0x38,%esp
 813223a:	8b 45 0c             	mov    0xc(%ebp),%eax
 813223d:	85 c0                	test   %eax,%eax
 813223f:	74 0a                	je     813224b <_ZN12advancealtar25CharacAdvanceAltarManager24setUnlockItemToEmptySlotENS_20AdvanceAltarShopType1TEi+0x17>
 8132241:	83 f8 01             	cmp    $0x1,%eax
 8132244:	74 0e                	je     8132254 <_ZN12advancealtar25CharacAdvanceAltarManager24setUnlockItemToEmptySlotENS_20AdvanceAltarShopType1TEi+0x20>
 8132246:	e9 00 01 00 00       	jmp    813234b <_ZN12advancealtar25CharacAdvanceAltarManager24setUnlockItemToEmptySlotENS_20AdvanceAltarShopType1TEi+0x117>
 813224b:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 8132252:	eb 08                	jmp    813225c <_ZN12advancealtar25CharacAdvanceAltarManager24setUnlockItemToEmptySlotENS_20AdvanceAltarShopType1TEi+0x28>
 8132254:	c7 45 ec 02 00 00 00 	movl   $0x2,-0x14(%ebp)
 813225b:	90                   	nop
 813225c:	8b 45 08             	mov    0x8(%ebp),%eax
 813225f:	8b 00                	mov    (%eax),%eax
 8132261:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8132264:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8132268:	0f 84 d9 00 00 00    	je     8132347 <_ZN12advancealtar25CharacAdvanceAltarManager24setUnlockItemToEmptySlotENS_20AdvanceAltarShopType1TEi+0x113>
 813226e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8132271:	89 44 24 04          	mov    %eax,0x4(%esp)
 8132275:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8132278:	89 04 24             	mov    %eax,(%esp)
 813227b:	e8 8c 77 76 00       	call   8899a0c <_ZN12advancealtar16AdvanceAltarData10getSlotMapENS_20AdvanceAltarSlotType1TE>
 8132280:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8132283:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8132287:	0f 84 bd 00 00 00    	je     813234a <_ZN12advancealtar25CharacAdvanceAltarManager24setUnlockItemToEmptySlotENS_20AdvanceAltarShopType1TEi+0x116>
 813228d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8132290:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8132293:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132297:	89 04 24             	mov    %eax,(%esp)
 813229a:	e8 23 3f 00 00       	call   81361c2 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE5beginEv>
 813229f:	83 ec 04             	sub    $0x4,%esp
 81322a2:	eb 72                	jmp    8132316 <_ZN12advancealtar25CharacAdvanceAltarManager24setUnlockItemToEmptySlotENS_20AdvanceAltarShopType1TEi+0xe2>
 81322a4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81322a7:	89 04 24             	mov    %eax,(%esp)
 81322aa:	e8 b1 3f 00 00       	call   8136260 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 81322af:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 81322b3:	83 f0 01             	xor    $0x1,%eax
 81322b6:	84 c0                	test   %al,%al
 81322b8:	74 19                	je     81322d3 <_ZN12advancealtar25CharacAdvanceAltarManager24setUnlockItemToEmptySlotENS_20AdvanceAltarShopType1TEi+0x9f>
 81322ba:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81322bd:	89 04 24             	mov    %eax,(%esp)
 81322c0:	e8 9b 3f 00 00       	call   8136260 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 81322c5:	8b 40 07             	mov    0x7(%eax),%eax
 81322c8:	85 c0                	test   %eax,%eax
 81322ca:	75 07                	jne    81322d3 <_ZN12advancealtar25CharacAdvanceAltarManager24setUnlockItemToEmptySlotENS_20AdvanceAltarShopType1TEi+0x9f>
 81322cc:	b8 01 00 00 00       	mov    $0x1,%eax
 81322d1:	eb 05                	jmp    81322d8 <_ZN12advancealtar25CharacAdvanceAltarManager24setUnlockItemToEmptySlotENS_20AdvanceAltarShopType1TEi+0xa4>
 81322d3:	b8 00 00 00 00       	mov    $0x0,%eax
 81322d8:	84 c0                	test   %al,%al
 81322da:	74 1d                	je     81322f9 <_ZN12advancealtar25CharacAdvanceAltarManager24setUnlockItemToEmptySlotENS_20AdvanceAltarShopType1TEi+0xc5>
 81322dc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81322df:	89 04 24             	mov    %eax,(%esp)
 81322e2:	e8 79 3f 00 00       	call   8136260 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 81322e7:	8b 55 10             	mov    0x10(%ebp),%edx
 81322ea:	89 50 07             	mov    %edx,0x7(%eax)
 81322ed:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81322f0:	c6 80 cc 00 00 00 01 	movb   $0x1,0xcc(%eax)
 81322f7:	eb 52                	jmp    813234b <_ZN12advancealtar25CharacAdvanceAltarManager24setUnlockItemToEmptySlotENS_20AdvanceAltarShopType1TEi+0x117>
 81322f9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81322fc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8132303:	00 
 8132304:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8132307:	89 54 24 04          	mov    %edx,0x4(%esp)
 813230b:	89 04 24             	mov    %eax,(%esp)
 813230e:	e8 0f 3f 00 00       	call   8136222 <_ZNSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEppEi>
 8132313:	83 ec 04             	sub    $0x4,%esp
 8132316:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8132319:	8b 55 f4             	mov    -0xc(%ebp),%edx
 813231c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8132320:	89 04 24             	mov    %eax,(%esp)
 8132323:	e8 c0 3e 00 00       	call   81361e8 <_ZNSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE3endEv>
 8132328:	83 ec 04             	sub    $0x4,%esp
 813232b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 813232e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8132332:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8132335:	89 04 24             	mov    %eax,(%esp)
 8132338:	e8 d1 3e 00 00       	call   813620e <_ZNKSt17_Rb_tree_iteratorISt4pairIKhN12advancealtar5_SlotEEEneERKS5_>
 813233d:	84 c0                	test   %al,%al
 813233f:	0f 85 5f ff ff ff    	jne    81322a4 <_ZN12advancealtar25CharacAdvanceAltarManager24setUnlockItemToEmptySlotENS_20AdvanceAltarShopType1TEi+0x70>
 8132345:	eb 04                	jmp    813234b <_ZN12advancealtar25CharacAdvanceAltarManager24setUnlockItemToEmptySlotENS_20AdvanceAltarShopType1TEi+0x117>
 8132347:	90                   	nop
 8132348:	eb 01                	jmp    813234b <_ZN12advancealtar25CharacAdvanceAltarManager24setUnlockItemToEmptySlotENS_20AdvanceAltarShopType1TEi+0x117>
 813234a:	90                   	nop
 813234b:	c9                   	leave
 813234c:	c3                   	ret
 813234d:	90                   	nop

```

```c
// advancealtar::CharacAdvanceAltarManager::setUnlockItemToEmptySlot @ 0x8132234

/* advancealtar::CharacAdvanceAltarManager::setUnlockItemToEmptySlot(advancealtar::AdvanceAltarShopType::T,
   int) */

void __thiscall
advancealtar::CharacAdvanceAltarManager::setUnlockItemToEmptySlot
          (CharacAdvanceAltarManager *this,int param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_24 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_20 [4];
  _Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_1c [4];
  undefined4 local_18;
  AdvanceAltarData *local_14;
  int local_10;
  
  if (param_2 == 0) {
    local_18 = 1;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    local_18 = 2;
  }
  local_14 = *(AdvanceAltarData **)this;
  if ((local_14 != (AdvanceAltarData *)0x0) &&
     (local_10 = AdvanceAltarData::getSlotMap(local_14,local_18), local_10 != 0)) {
    std::
    map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
    ::begin(local_24);
    while( true ) {
      std::
      map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
      ::end(local_20);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                         local_24,(_Rb_tree_iterator *)local_20);
      if (cVar2 == '\0') break;
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                         local_24);
      if ((*(char *)(iVar3 + 1) == '\x01') ||
         (iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                  operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                              *)local_24), *(int *)(iVar3 + 7) != 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                           local_24);
        *(undefined4 *)(iVar3 + 7) = param_3;
        local_14[0xcc] = (AdvanceAltarData)0x1;
        return;
      }
      std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator++
                (local_1c,(int)local_24);
    }
  }
  return;
}

```

---

## ~CharacAdvanceAltarManager

```asm
// === 0813121a advancealtar::CharacAdvanceAltarManager::~CharacAdvanceAltarManager  [0x0813121a-0x8131253] ===
 813121a:	55                   	push   %ebp
 813121b:	89 e5                	mov    %esp,%ebp
 813121d:	53                   	push   %ebx
 813121e:	83 ec 14             	sub    $0x14,%esp
 8131221:	8b 45 08             	mov    0x8(%ebp),%eax
 8131224:	83 c0 04             	add    $0x4,%eax
 8131227:	85 c0                	test   %eax,%eax
 8131229:	74 23                	je     813124e <_ZN12advancealtar25CharacAdvanceAltarManagerD1Ev+0x34>
 813122b:	8b 45 08             	mov    0x8(%ebp),%eax
 813122e:	8d 98 d4 00 00 00    	lea    0xd4(%eax),%ebx
 8131234:	8b 45 08             	mov    0x8(%ebp),%eax
 8131237:	83 c0 04             	add    $0x4,%eax
 813123a:	39 c3                	cmp    %eax,%ebx
 813123c:	74 10                	je     813124e <_ZN12advancealtar25CharacAdvanceAltarManagerD1Ev+0x34>
 813123e:	81 eb d0 00 00 00    	sub    $0xd0,%ebx
 8131244:	89 1c 24             	mov    %ebx,(%esp)
 8131247:	e8 e6 32 00 00       	call   8134532 <_ZN12advancealtar16AdvanceAltarDataD1Ev>
 813124c:	eb e6                	jmp    8131234 <_ZN12advancealtar25CharacAdvanceAltarManagerD1Ev+0x1a>
 813124e:	83 c4 14             	add    $0x14,%esp
 8131251:	5b                   	pop    %ebx
 8131252:	5d                   	pop    %ebp
 8131253:	c3                   	ret

```

```c
// advancealtar::CharacAdvanceAltarManager::~CharacAdvanceAltarManager @ 0x813121a

/* advancealtar::CharacAdvanceAltarManager::~CharacAdvanceAltarManager() */

void __thiscall
advancealtar::CharacAdvanceAltarManager::~CharacAdvanceAltarManager(CharacAdvanceAltarManager *this)

{
  AdvanceAltarData *this_00;
  
  if (this != (CharacAdvanceAltarManager *)0xfffffffc) {
    this_00 = (AdvanceAltarData *)(this + 0xd4);
    while (this_00 != (AdvanceAltarData *)(this + 4)) {
      this_00 = this_00 + -0xd0;
      AdvanceAltarData::~AdvanceAltarData(this_00);
    }
  }
  return;
}

```

