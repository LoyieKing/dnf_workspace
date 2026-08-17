# ServerParameterScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## CheckCollectDungeonStatisticServer

```asm
// === 08a8c2c0 ServerParameterScript::CheckCollectDungeonStatisticServer  [0x08a8c2c0-0x8a8c371] ===
 8a8c2c0:	55                   	push   %ebp
 8a8c2c1:	89 e5                	mov    %esp,%ebp
 8a8c2c3:	56                   	push   %esi
 8a8c2c4:	53                   	push   %ebx
 8a8c2c5:	83 ec 30             	sub    $0x30,%esp
 8a8c2c8:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8a8c2cc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a8c2cf:	89 04 24             	mov    %eax,(%esp)
 8a8c2d2:	e8 33 09 00 00       	call   8a8cc0a <_ZN13stServerIndexC1Ev>
 8a8c2d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a8c2da:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8a8c2dd:	8b 45 10             	mov    0x10(%ebp),%eax
 8a8c2e0:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8a8c2e3:	8b 55 08             	mov    0x8(%ebp),%edx
 8a8c2e6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a8c2e9:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 8a8c2ec:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8a8c2f0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a8c2f4:	89 04 24             	mov    %eax,(%esp)
 8a8c2f7:	e8 02 17 00 00       	call   8a8d9fe <_ZNSt3mapI13stServerIndexbSt4lessIS0_ESaISt4pairIKS0_bEEE4findERS4_>
 8a8c2fc:	83 ec 04             	sub    $0x4,%esp
 8a8c2ff:	8b 55 08             	mov    0x8(%ebp),%edx
 8a8c302:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a8c305:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a8c309:	89 04 24             	mov    %eax,(%esp)
 8a8c30c:	e8 19 17 00 00       	call   8a8da2a <_ZNSt3mapI13stServerIndexbSt4lessIS0_ESaISt4pairIKS0_bEEE3endEv>
 8a8c311:	83 ec 04             	sub    $0x4,%esp
 8a8c314:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a8c317:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a8c31b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a8c31e:	89 04 24             	mov    %eax,(%esp)
 8a8c321:	e8 2a 17 00 00       	call   8a8da50 <_ZNKSt17_Rb_tree_iteratorISt4pairIK13stServerIndexbEEneERKS4_>
 8a8c326:	84 c0                	test   %al,%al
 8a8c328:	74 12                	je     8a8c33c <_ZN21ServerParameterScript34CheckCollectDungeonStatisticServerEii+0x7c>
 8a8c32a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a8c32d:	89 04 24             	mov    %eax,(%esp)
 8a8c330:	e8 2f 17 00 00       	call   8a8da64 <_ZNKSt17_Rb_tree_iteratorISt4pairIK13stServerIndexbEEptEv>
 8a8c335:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8a8c339:	88 45 f7             	mov    %al,-0x9(%ebp)
 8a8c33c:	0f b6 5d f7          	movzbl -0x9(%ebp),%ebx
 8a8c340:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a8c343:	89 04 24             	mov    %eax,(%esp)
 8a8c346:	e8 51 2f 8e ff       	call   836f29c <_ZN13stServerIndexD1Ev>
 8a8c34b:	89 d8                	mov    %ebx,%eax
 8a8c34d:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8a8c350:	83 c4 00             	add    $0x0,%esp
 8a8c353:	5b                   	pop    %ebx
 8a8c354:	5e                   	pop    %esi
 8a8c355:	5d                   	pop    %ebp
 8a8c356:	c3                   	ret
 8a8c357:	89 d3                	mov    %edx,%ebx
 8a8c359:	89 c6                	mov    %eax,%esi
 8a8c35b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a8c35e:	89 04 24             	mov    %eax,(%esp)
 8a8c361:	e8 36 2f 8e ff       	call   836f29c <_ZN13stServerIndexD1Ev>
 8a8c366:	89 f0                	mov    %esi,%eax
 8a8c368:	89 da                	mov    %ebx,%edx
 8a8c36a:	89 04 24             	mov    %eax,(%esp)
 8a8c36d:	e8 de 73 05 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// ServerParameterScript::CheckCollectDungeonStatisticServer @ 0x8a8c2c0

/* ServerParameterScript::CheckCollectDungeonStatisticServer(int, int) */

undefined1 __thiscall
ServerParameterScript::CheckCollectDungeonStatisticServer
          (ServerParameterScript *this,int param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  stServerIndex local_20 [4];
  int local_1c;
  int local_18;
  map<stServerIndex,bool,std::less<stServerIndex>,std::allocator<std::pair<stServerIndex_const,bool>>>
  local_14 [7];
  undefined1 local_d;
  
  local_d = 0;
  stServerIndex::stServerIndex((stServerIndex *)&local_1c);
  local_1c = param_1;
  local_18 = param_2;
                    /* try { // try from 08a8c2f7 to 08a8c310 has its CatchHandler @ 08a8c357 */
  std::
  map<stServerIndex,bool,std::less<stServerIndex>,std::allocator<std::pair<stServerIndex_const,bool>>>
  ::find(local_20);
  std::
  map<stServerIndex,bool,std::less<stServerIndex>,std::allocator<std::pair<stServerIndex_const,bool>>>
  ::end(local_14);
  cVar2 = std::_Rb_tree_iterator<std::pair<stServerIndex_const,bool>>::operator!=
                    ((_Rb_tree_iterator<std::pair<stServerIndex_const,bool>> *)local_20,
                     (_Rb_tree_iterator *)local_14);
  if (cVar2 != '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<stServerIndex_const,bool>>::operator->
                      ((_Rb_tree_iterator<std::pair<stServerIndex_const,bool>> *)local_20);
    local_d = *(undefined1 *)(iVar3 + 8);
  }
  uVar1 = local_d;
  stServerIndex::~stServerIndex((stServerIndex *)&local_1c);
  return uVar1;
}

```

---

## CheckLightServer

```asm
// === 08a8c372 ServerParameterScript::CheckLightServer  [0x08a8c372-0x8a8c3ed] ===
 8a8c372:	55                   	push   %ebp
 8a8c373:	89 e5                	mov    %esp,%ebp
 8a8c375:	83 ec 28             	sub    $0x28,%esp
 8a8c378:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8a8c37c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8c37f:	8d 48 24             	lea    0x24(%eax),%ecx
 8a8c382:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a8c385:	8d 55 0c             	lea    0xc(%ebp),%edx
 8a8c388:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a8c38c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a8c390:	89 04 24             	mov    %eax,(%esp)
 8a8c393:	e8 b2 4d a6 ff       	call   84f114a <_ZNSt3mapIibSt4lessIiESaISt4pairIKibEEE4findERS3_>
 8a8c398:	83 ec 04             	sub    $0x4,%esp
 8a8c39b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8c39e:	8d 50 24             	lea    0x24(%eax),%edx
 8a8c3a1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a8c3a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a8c3a8:	89 04 24             	mov    %eax,(%esp)
 8a8c3ab:	e8 c6 4d a6 ff       	call   84f1176 <_ZNSt3mapIibSt4lessIiESaISt4pairIKibEEE3endEv>
 8a8c3b0:	83 ec 04             	sub    $0x4,%esp
 8a8c3b3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a8c3b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a8c3ba:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a8c3bd:	89 04 24             	mov    %eax,(%esp)
 8a8c3c0:	e8 d7 4d a6 ff       	call   84f119c <_ZNKSt17_Rb_tree_iteratorISt4pairIKibEEneERKS3_>
 8a8c3c5:	84 c0                	test   %al,%al
 8a8c3c7:	74 1e                	je     8a8c3e7 <_ZN21ServerParameterScript16CheckLightServerEi+0x75>
 8a8c3c9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a8c3cc:	89 04 24             	mov    %eax,(%esp)
 8a8c3cf:	e8 9e 16 00 00       	call   8a8da72 <_ZNKSt17_Rb_tree_iteratorISt4pairIKibEEptEv>
 8a8c3d4:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8a8c3d8:	88 45 f7             	mov    %al,-0x9(%ebp)
 8a8c3db:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8a8c3df:	89 04 24             	mov    %eax,(%esp)
 8a8c3e2:	e8 be 07 00 00       	call   8a8cba5 <_Z18SetLightServerFlagb>
 8a8c3e7:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8a8c3eb:	c9                   	leave
 8a8c3ec:	c3                   	ret
 8a8c3ed:	90                   	nop

```

```c
// ServerParameterScript::CheckLightServer @ 0x8a8c372

/* ServerParameterScript::CheckLightServer(int) */

undefined1 ServerParameterScript::CheckLightServer(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,bool>> local_18 [4];
  map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> local_14 [7];
  undefined1 local_d;
  
  local_d = 0;
  std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::find((int *)local_18)
  ;
  std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,bool>>::operator!=
                    (local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,bool>>::operator->(local_18);
    local_d = *(undefined1 *)(iVar2 + 4);
    SetLightServerFlag((bool)local_d);
  }
  return local_d;
}

```

---

## GetEscaladeTutorialReward

```asm
// === 08a8c5f2 ServerParameterScript::GetEscaladeTutorialReward  [0x08a8c5f2-0x8a8c667] ===
 8a8c5f2:	55                   	push   %ebp
 8a8c5f3:	89 e5                	mov    %esp,%ebp
 8a8c5f5:	83 ec 28             	sub    $0x28,%esp
 8a8c5f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a8c5fb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8a8c5fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8c601:	8d 88 88 00 00 00    	lea    0x88(%eax),%ecx
 8a8c607:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a8c60a:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8a8c60d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a8c611:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a8c615:	89 04 24             	mov    %eax,(%esp)
 8a8c618:	e8 eb 37 90 ff       	call   838fe08 <_ZNSt3mapIiSt6vectorISt4pairIiiESaIS2_EESt4lessIiESaIS1_IKiS4_EEE4findERS7_>
 8a8c61d:	83 ec 04             	sub    $0x4,%esp
 8a8c620:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8c623:	8d 90 88 00 00 00    	lea    0x88(%eax),%edx
 8a8c629:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a8c62c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a8c630:	89 04 24             	mov    %eax,(%esp)
 8a8c633:	e8 fc 37 90 ff       	call   838fe34 <_ZNSt3mapIiSt6vectorISt4pairIiiESaIS2_EESt4lessIiESaIS1_IKiS4_EEE3endEv>
 8a8c638:	83 ec 04             	sub    $0x4,%esp
 8a8c63b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a8c63e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a8c642:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a8c645:	89 04 24             	mov    %eax,(%esp)
 8a8c648:	e8 a7 38 90 ff       	call   838fef4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIS0_IiiESaIS3_EEEEneERKS7_>
 8a8c64d:	84 c0                	test   %al,%al
 8a8c64f:	74 10                	je     8a8c661 <_ZN21ServerParameterScript25GetEscaladeTutorialRewardEj+0x6f>
 8a8c651:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a8c654:	89 04 24             	mov    %eax,(%esp)
 8a8c657:	e8 76 38 90 ff       	call   838fed2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIS0_IiiESaIS3_EEEEptEv>
 8a8c65c:	83 c0 04             	add    $0x4,%eax
 8a8c65f:	eb 05                	jmp    8a8c666 <_ZN21ServerParameterScript25GetEscaladeTutorialRewardEj+0x74>
 8a8c661:	b8 00 00 00 00       	mov    $0x0,%eax
 8a8c666:	c9                   	leave
 8a8c667:	c3                   	ret

```

```c
// ServerParameterScript::GetEscaladeTutorialReward @ 0x8a8c5f2

/* ServerParameterScript::GetEscaladeTutorialReward(unsigned int) */

int __thiscall
ServerParameterScript::GetEscaladeTutorialReward(ServerParameterScript *this,uint param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
  local_18 [4];
  uint local_14;
  map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
  local_10 [12];
  
  local_14 = param_1;
  std::
  map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
  ::find((int *)local_18);
  std::
  map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
          ::operator!=(local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
            ::operator->(local_18);
    iVar2 = iVar2 + 4;
  }
  return iVar2;
}

```

---

## GetExpBonusWeight

```asm
// === 08a8c28c ServerParameterScript::GetExpBonusWeight  [0x08a8c28c-0x8a8c2bf] ===
 8a8c28c:	55                   	push   %ebp
 8a8c28d:	89 e5                	mov    %esp,%ebp
 8a8c28f:	83 ec 04             	sub    $0x4,%esp
 8a8c292:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a8c295:	85 c0                	test   %eax,%eax
 8a8c297:	78 1a                	js     8a8c2b3 <_ZNK21ServerParameterScript17GetExpBonusWeightE15eRankBonusIndex+0x27>
 8a8c299:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a8c29c:	83 f8 04             	cmp    $0x4,%eax
 8a8c29f:	7f 12                	jg     8a8c2b3 <_ZNK21ServerParameterScript17GetExpBonusWeightE15eRankBonusIndex+0x27>
 8a8c2a1:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a8c2a4:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8c2a7:	81 c2 e8 00 00 00    	add    $0xe8,%edx
 8a8c2ad:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 8a8c2b1:	eb 05                	jmp    8a8c2b8 <_ZNK21ServerParameterScript17GetExpBonusWeightE15eRankBonusIndex+0x2c>
 8a8c2b3:	b8 00 00 00 00       	mov    $0x0,%eax
 8a8c2b8:	89 45 fc             	mov    %eax,-0x4(%ebp)
 8a8c2bb:	d9 45 fc             	flds   -0x4(%ebp)
 8a8c2be:	c9                   	leave
 8a8c2bf:	c3                   	ret

```

```c
// ServerParameterScript::GetExpBonusWeight @ 0x8a8c28c

/* ServerParameterScript::GetExpBonusWeight(eRankBonusIndex) const */

longdouble __thiscall
ServerParameterScript::GetExpBonusWeight(ServerParameterScript *this,int param_2)

{
  float fVar1;
  
  if ((param_2 < 0) || (4 < param_2)) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = *(float *)(this + (param_2 + 0xe8) * 4 + 0xc);
  }
  return (longdouble)fVar1;
}

```

---

## checkAssaultServer

```asm
// === 08a8c3ee ServerParameterScript::checkAssaultServer  [0x08a8c3ee-0x8a8c485] ===
 8a8c3ee:	55                   	push   %ebp
 8a8c3ef:	89 e5                	mov    %esp,%ebp
 8a8c3f1:	83 ec 28             	sub    $0x28,%esp
 8a8c3f4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a8c3f7:	89 04 24             	mov    %eax,(%esp)
 8a8c3fa:	e8 8f 98 72 ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 8a8c3ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8c402:	8d 50 18             	lea    0x18(%eax),%edx
 8a8c405:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a8c408:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a8c40c:	89 04 24             	mov    %eax,(%esp)
 8a8c40f:	e8 9e 11 65 ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 8a8c414:	83 ec 04             	sub    $0x4,%esp
 8a8c417:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8c41a:	8d 50 18             	lea    0x18(%eax),%edx
 8a8c41d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a8c420:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a8c424:	89 04 24             	mov    %eax,(%esp)
 8a8c427:	e8 aa 11 65 ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 8a8c42c:	83 ec 04             	sub    $0x4,%esp
 8a8c42f:	eb 38                	jmp    8a8c469 <_ZN21ServerParameterScript18checkAssaultServerEii+0x7b>
 8a8c431:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a8c434:	89 04 24             	mov    %eax,(%esp)
 8a8c437:	e8 c0 11 65 ff       	call   80dd5fc <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 8a8c43c:	8b 50 04             	mov    0x4(%eax),%edx
 8a8c43f:	8b 00                	mov    (%eax),%eax
 8a8c441:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8a8c444:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8a8c447:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8a8c44a:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8a8c44d:	75 0f                	jne    8a8c45e <_ZN21ServerParameterScript18checkAssaultServerEii+0x70>
 8a8c44f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a8c452:	3b 45 10             	cmp    0x10(%ebp),%eax
 8a8c455:	75 07                	jne    8a8c45e <_ZN21ServerParameterScript18checkAssaultServerEii+0x70>
 8a8c457:	b8 01 00 00 00       	mov    $0x1,%eax
 8a8c45c:	eb 26                	jmp    8a8c484 <_ZN21ServerParameterScript18checkAssaultServerEii+0x96>
 8a8c45e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a8c461:	89 04 24             	mov    %eax,(%esp)
 8a8c464:	e8 a1 4d 68 ff       	call   811120a <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 8a8c469:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a8c46c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a8c470:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a8c473:	89 04 24             	mov    %eax,(%esp)
 8a8c476:	e8 63 4d 68 ff       	call   81111de <_ZN9__gnu_cxxneIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8a8c47b:	84 c0                	test   %al,%al
 8a8c47d:	75 b2                	jne    8a8c431 <_ZN21ServerParameterScript18checkAssaultServerEii+0x43>
 8a8c47f:	b8 00 00 00 00       	mov    $0x0,%eax
 8a8c484:	c9                   	leave
 8a8c485:	c3                   	ret

```

```c
// ServerParameterScript::checkAssaultServer @ 0x8a8c3ee

/* ServerParameterScript::checkAssaultServer(int, int) */

undefined4 __thiscall
ServerParameterScript::checkAssaultServer(ServerParameterScript *this,int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  __normal_iterator local_1c [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  std::pair<int,int>::pair((pair<int,int> *)&local_14);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_18,local_1c);
    if (!bVar1) {
      return 0;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator*(local_18);
    local_10 = piVar2[1];
    local_14 = *piVar2;
    if ((local_14 == param_1) && (local_10 == param_2)) break;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_18);
  }
  return 1;
}

```

---

## getAssaultGhostTime

```asm
// === 08a8c804 ServerParameterScript::getAssaultGhostTime  [0x08a8c804-0x8a8cb48] ===
 8a8c804:	55                   	push   %ebp
 8a8c805:	89 e5                	mov    %esp,%ebp
 8a8c807:	56                   	push   %esi
 8a8c808:	53                   	push   %ebx
 8a8c809:	83 c4 80             	add    $0xffffff80,%esp
 8a8c80c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8c80f:	05 f0 04 00 00       	add    $0x4f0,%eax
 8a8c814:	89 04 24             	mov    %eax,(%esp)
 8a8c817:	e8 c2 13 00 00       	call   8a8dbde <_ZNKSt6vectorI26stAssaultLevelGhostPanaltySaIS0_EE5emptyEv>
 8a8c81c:	84 c0                	test   %al,%al
 8a8c81e:	74 0a                	je     8a8c82a <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0x26>
 8a8c820:	b8 b4 00 00 00       	mov    $0xb4,%eax
 8a8c825:	e9 15 03 00 00       	jmp    8a8cb3f <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0x33b>
 8a8c82a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8c82d:	8d 90 f0 04 00 00    	lea    0x4f0(%eax),%edx
 8a8c833:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8a8c836:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a8c83a:	89 04 24             	mov    %eax,(%esp)
 8a8c83d:	e8 e0 13 00 00       	call   8a8dc22 <_ZNSt6vectorI26stAssaultLevelGhostPanaltySaIS0_EE5beginEv>
 8a8c842:	83 ec 04             	sub    $0x4,%esp
 8a8c845:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8a8c848:	89 04 24             	mov    %eax,(%esp)
 8a8c84b:	e8 06 05 00 00       	call   8a8cd56 <_ZN26stAssaultLevelGhostPanaltyC1Ev>
 8a8c850:	eb 76                	jmp    8a8c8c8 <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0xc4>
 8a8c852:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8a8c855:	89 04 24             	mov    %eax,(%esp)
 8a8c858:	e8 3b 14 00 00       	call   8a8dc98 <_ZNK9__gnu_cxx17__normal_iteratorIP26stAssaultLevelGhostPanaltySt6vectorIS1_SaIS1_EEEptEv>
 8a8c85d:	8b 00                	mov    (%eax),%eax
 8a8c85f:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8a8c862:	7f 1a                	jg     8a8c87e <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0x7a>
 8a8c864:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8a8c867:	89 04 24             	mov    %eax,(%esp)
 8a8c86a:	e8 29 14 00 00       	call   8a8dc98 <_ZNK9__gnu_cxx17__normal_iteratorIP26stAssaultLevelGhostPanaltySt6vectorIS1_SaIS1_EEEptEv>
 8a8c86f:	8b 40 04             	mov    0x4(%eax),%eax
 8a8c872:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8a8c875:	7c 07                	jl     8a8c87e <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0x7a>
 8a8c877:	b8 01 00 00 00       	mov    $0x1,%eax
 8a8c87c:	eb 05                	jmp    8a8c883 <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0x7f>
 8a8c87e:	b8 00 00 00 00       	mov    $0x0,%eax
 8a8c883:	84 c0                	test   %al,%al
 8a8c885:	74 24                	je     8a8c8ab <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0xa7>
 8a8c887:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8a8c88a:	89 04 24             	mov    %eax,(%esp)
 8a8c88d:	e8 10 14 00 00       	call   8a8dca2 <_ZNK9__gnu_cxx17__normal_iteratorIP26stAssaultLevelGhostPanaltySt6vectorIS1_SaIS1_EEEdeEv>
 8a8c892:	8b 10                	mov    (%eax),%edx
 8a8c894:	89 55 cc             	mov    %edx,-0x34(%ebp)
 8a8c897:	8b 50 04             	mov    0x4(%eax),%edx
 8a8c89a:	89 55 d0             	mov    %edx,-0x30(%ebp)
 8a8c89d:	8b 50 08             	mov    0x8(%eax),%edx
 8a8c8a0:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 8a8c8a3:	8b 40 0c             	mov    0xc(%eax),%eax
 8a8c8a6:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8a8c8a9:	eb 52                	jmp    8a8c8fd <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0xf9>
 8a8c8ab:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a8c8ae:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8a8c8b5:	00 
 8a8c8b6:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8a8c8b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a8c8bd:	89 04 24             	mov    %eax,(%esp)
 8a8c8c0:	e8 e7 13 00 00       	call   8a8dcac <_ZN9__gnu_cxx17__normal_iteratorIP26stAssaultLevelGhostPanaltySt6vectorIS1_SaIS1_EEEppEi>
 8a8c8c5:	83 ec 04             	sub    $0x4,%esp
 8a8c8c8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8c8cb:	8d 90 f0 04 00 00    	lea    0x4f0(%eax),%edx
 8a8c8d1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a8c8d4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a8c8d8:	89 04 24             	mov    %eax,(%esp)
 8a8c8db:	e8 66 13 00 00       	call   8a8dc46 <_ZNSt6vectorI26stAssaultLevelGhostPanaltySaIS0_EE3endEv>
 8a8c8e0:	83 ec 04             	sub    $0x4,%esp
 8a8c8e3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a8c8e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a8c8ea:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8a8c8ed:	89 04 24             	mov    %eax,(%esp)
 8a8c8f0:	e8 77 13 00 00       	call   8a8dc6c <_ZN9__gnu_cxxneIP26stAssaultLevelGhostPanaltySt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8a8c8f5:	84 c0                	test   %al,%al
 8a8c8f7:	0f 85 55 ff ff ff    	jne    8a8c852 <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0x4e>
 8a8c8fd:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8a8c904:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 8a8c907:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8a8c90a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8a8c90d:	89 d3                	mov    %edx,%ebx
 8a8c90f:	29 c3                	sub    %eax,%ebx
 8a8c911:	89 d8                	mov    %ebx,%eax
 8a8c913:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 8a8c916:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8a8c919:	89 de                	mov    %ebx,%esi
 8a8c91b:	29 d6                	sub    %edx,%esi
 8a8c91d:	89 f2                	mov    %esi,%edx
 8a8c91f:	89 55 94             	mov    %edx,-0x6c(%ebp)
 8a8c922:	ba 00 00 00 00       	mov    $0x0,%edx
 8a8c927:	f7 75 94             	divl   -0x6c(%ebp)
 8a8c92a:	89 c2                	mov    %eax,%edx
 8a8c92c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8a8c92f:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8a8c932:	89 de                	mov    %ebx,%esi
 8a8c934:	29 c6                	sub    %eax,%esi
 8a8c936:	89 f0                	mov    %esi,%eax
 8a8c938:	0f af c2             	imul   %edx,%eax
 8a8c93b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8a8c93e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8a8c941:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8a8c944:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8a8c947:	76 08                	jbe    8a8c951 <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0x14d>
 8a8c949:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8a8c94c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8a8c94f:	eb 0e                	jmp    8a8c95f <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0x15b>
 8a8c951:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8a8c954:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8a8c957:	73 06                	jae    8a8c95f <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0x15b>
 8a8c959:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8a8c95c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8a8c95f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8c962:	05 fc 04 00 00       	add    $0x4fc,%eax
 8a8c967:	89 04 24             	mov    %eax,(%esp)
 8a8c96a:	e8 71 13 00 00       	call   8a8dce0 <_ZNKSt6vectorI31stAssaultChaosPointGhostPanaltySaIS0_EE5emptyEv>
 8a8c96f:	84 c0                	test   %al,%al
 8a8c971:	74 1a                	je     8a8c98d <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0x189>
 8a8c973:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8a8c976:	89 45 90             	mov    %eax,-0x70(%ebp)
 8a8c979:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 8a8c97e:	8b 45 90             	mov    -0x70(%ebp),%eax
 8a8c981:	f7 e2                	mul    %edx
 8a8c983:	89 d0                	mov    %edx,%eax
 8a8c985:	c1 e8 06             	shr    $0x6,%eax
 8a8c988:	e9 b2 01 00 00       	jmp    8a8cb3f <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0x33b>
 8a8c98d:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 8a8c992:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8a8c995:	81 7d 10 e8 03 00 00 	cmpl   $0x3e8,0x10(%ebp)
 8a8c99c:	7e 07                	jle    8a8c9a5 <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0x1a1>
 8a8c99e:	c7 45 10 e8 03 00 00 	movl   $0x3e8,0x10(%ebp)
 8a8c9a5:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8a8c9a8:	89 04 24             	mov    %eax,(%esp)
 8a8c9ab:	e8 74 13 00 00       	call   8a8dd24 <_ZN9__gnu_cxx17__normal_iteratorIP31stAssaultChaosPointGhostPanaltySt6vectorIS1_SaIS1_EEEC1Ev>
 8a8c9b0:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8c9b3:	8d 90 fc 04 00 00    	lea    0x4fc(%eax),%edx
 8a8c9b9:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8a8c9bc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a8c9c0:	89 04 24             	mov    %eax,(%esp)
 8a8c9c3:	e8 6a 13 00 00       	call   8a8dd32 <_ZNSt6vectorI31stAssaultChaosPointGhostPanaltySaIS0_EE5beginEv>
 8a8c9c8:	83 ec 04             	sub    $0x4,%esp
 8a8c9cb:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8a8c9ce:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8a8c9d1:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8a8c9d4:	89 04 24             	mov    %eax,(%esp)
 8a8c9d7:	e8 a6 03 00 00       	call   8a8cd82 <_ZN31stAssaultChaosPointGhostPanaltyC1Ev>
 8a8c9dc:	eb 76                	jmp    8a8ca54 <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0x250>
 8a8c9de:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8a8c9e1:	89 04 24             	mov    %eax,(%esp)
 8a8c9e4:	e8 bf 13 00 00       	call   8a8dda8 <_ZNK9__gnu_cxx17__normal_iteratorIP31stAssaultChaosPointGhostPanaltySt6vectorIS1_SaIS1_EEEptEv>
 8a8c9e9:	8b 00                	mov    (%eax),%eax
 8a8c9eb:	3b 45 10             	cmp    0x10(%ebp),%eax
 8a8c9ee:	7f 1a                	jg     8a8ca0a <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0x206>
 8a8c9f0:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8a8c9f3:	89 04 24             	mov    %eax,(%esp)
 8a8c9f6:	e8 ad 13 00 00       	call   8a8dda8 <_ZNK9__gnu_cxx17__normal_iteratorIP31stAssaultChaosPointGhostPanaltySt6vectorIS1_SaIS1_EEEptEv>
 8a8c9fb:	8b 40 04             	mov    0x4(%eax),%eax
 8a8c9fe:	3b 45 10             	cmp    0x10(%ebp),%eax
 8a8ca01:	7c 07                	jl     8a8ca0a <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0x206>
 8a8ca03:	b8 01 00 00 00       	mov    $0x1,%eax
 8a8ca08:	eb 05                	jmp    8a8ca0f <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0x20b>
 8a8ca0a:	b8 00 00 00 00       	mov    $0x0,%eax
 8a8ca0f:	84 c0                	test   %al,%al
 8a8ca11:	74 24                	je     8a8ca37 <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0x233>
 8a8ca13:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8a8ca16:	89 04 24             	mov    %eax,(%esp)
 8a8ca19:	e8 94 13 00 00       	call   8a8ddb2 <_ZNK9__gnu_cxx17__normal_iteratorIP31stAssaultChaosPointGhostPanaltySt6vectorIS1_SaIS1_EEEdeEv>
 8a8ca1e:	8b 10                	mov    (%eax),%edx
 8a8ca20:	89 55 b8             	mov    %edx,-0x48(%ebp)
 8a8ca23:	8b 50 04             	mov    0x4(%eax),%edx
 8a8ca26:	89 55 bc             	mov    %edx,-0x44(%ebp)
 8a8ca29:	8b 50 08             	mov    0x8(%eax),%edx
 8a8ca2c:	89 55 c0             	mov    %edx,-0x40(%ebp)
 8a8ca2f:	8b 40 0c             	mov    0xc(%eax),%eax
 8a8ca32:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8a8ca35:	eb 52                	jmp    8a8ca89 <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0x285>
 8a8ca37:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a8ca3a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8a8ca41:	00 
 8a8ca42:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8a8ca45:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a8ca49:	89 04 24             	mov    %eax,(%esp)
 8a8ca4c:	e8 6b 13 00 00       	call   8a8ddbc <_ZN9__gnu_cxx17__normal_iteratorIP31stAssaultChaosPointGhostPanaltySt6vectorIS1_SaIS1_EEEppEi>
 8a8ca51:	83 ec 04             	sub    $0x4,%esp
 8a8ca54:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8ca57:	8d 90 fc 04 00 00    	lea    0x4fc(%eax),%edx
 8a8ca5d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a8ca60:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a8ca64:	89 04 24             	mov    %eax,(%esp)
 8a8ca67:	e8 ea 12 00 00       	call   8a8dd56 <_ZNSt6vectorI31stAssaultChaosPointGhostPanaltySaIS0_EE3endEv>
 8a8ca6c:	83 ec 04             	sub    $0x4,%esp
 8a8ca6f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a8ca72:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a8ca76:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8a8ca79:	89 04 24             	mov    %eax,(%esp)
 8a8ca7c:	e8 fb 12 00 00       	call   8a8dd7c <_ZN9__gnu_cxxneIP31stAssaultChaosPointGhostPanaltySt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8a8ca81:	84 c0                	test   %al,%al
 8a8ca83:	0f 85 55 ff ff ff    	jne    8a8c9de <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0x1da>
 8a8ca89:	d9 45 c0             	flds   -0x40(%ebp)
 8a8ca8c:	d9 45 c4             	flds   -0x3c(%ebp)
 8a8ca8f:	d9 45 c0             	flds   -0x40(%ebp)
 8a8ca92:	de e9                	fsubrp %st,%st(1)
 8a8ca94:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8a8ca97:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8a8ca9a:	89 d1                	mov    %edx,%ecx
 8a8ca9c:	29 c1                	sub    %eax,%ecx
 8a8ca9e:	89 c8                	mov    %ecx,%eax
 8a8caa0:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8a8caa3:	db 45 a0             	fildl  -0x60(%ebp)
 8a8caa6:	de f9                	fdivrp %st,%st(1)
 8a8caa8:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8a8caab:	8b 55 10             	mov    0x10(%ebp),%edx
 8a8caae:	89 d3                	mov    %edx,%ebx
 8a8cab0:	29 c3                	sub    %eax,%ebx
 8a8cab2:	89 d8                	mov    %ebx,%eax
 8a8cab4:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8a8cab7:	db 45 a0             	fildl  -0x60(%ebp)
 8a8caba:	de c9                	fmulp  %st,%st(1)
 8a8cabc:	de c1                	faddp  %st,%st(1)
 8a8cabe:	d9 5d f4             	fstps  -0xc(%ebp)
 8a8cac1:	d9 45 c0             	flds   -0x40(%ebp)
 8a8cac4:	d9 45 f4             	flds   -0xc(%ebp)
 8a8cac7:	d9 c9                	fxch   %st(1)
 8a8cac9:	da e9                	fucompp
 8a8cacb:	df e0                	fnstsw %ax
 8a8cacd:	9e                   	sahf
 8a8cace:	0f 97 c0             	seta   %al
 8a8cad1:	84 c0                	test   %al,%al
 8a8cad3:	74 08                	je     8a8cadd <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0x2d9>
 8a8cad5:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8a8cad8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8a8cadb:	eb 1a                	jmp    8a8caf7 <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0x2f3>
 8a8cadd:	d9 45 c4             	flds   -0x3c(%ebp)
 8a8cae0:	d9 45 f4             	flds   -0xc(%ebp)
 8a8cae3:	da e9                	fucompp
 8a8cae5:	df e0                	fnstsw %ax
 8a8cae7:	f6 c4 45             	test   $0x45,%ah
 8a8caea:	0f 94 c0             	sete   %al
 8a8caed:	84 c0                	test   %al,%al
 8a8caef:	74 06                	je     8a8caf7 <_ZN21ServerParameterScript19getAssaultGhostTimeEii+0x2f3>
 8a8caf1:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8a8caf4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8a8caf7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8a8cafa:	ba 00 00 00 00       	mov    $0x0,%edx
 8a8caff:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8a8cb02:	89 55 ac             	mov    %edx,-0x54(%ebp)
 8a8cb05:	df 6d a8             	fildll -0x58(%ebp)
 8a8cb08:	d8 4d f4             	fmuls  -0xc(%ebp)
 8a8cb0b:	d9 7d a6             	fnstcw -0x5a(%ebp)
 8a8cb0e:	0f b7 45 a6          	movzwl -0x5a(%ebp),%eax
 8a8cb12:	b4 0c                	mov    $0xc,%ah
 8a8cb14:	66 89 45 a4          	mov    %ax,-0x5c(%ebp)
 8a8cb18:	d9 6d a4             	fldcw  -0x5c(%ebp)
 8a8cb1b:	df 7d a8             	fistpll -0x58(%ebp)
 8a8cb1e:	d9 6d a6             	fldcw  -0x5a(%ebp)
 8a8cb21:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8a8cb24:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8a8cb27:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8a8cb2a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8a8cb2d:	89 45 90             	mov    %eax,-0x70(%ebp)
 8a8cb30:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 8a8cb35:	8b 45 90             	mov    -0x70(%ebp),%eax
 8a8cb38:	f7 e2                	mul    %edx
 8a8cb3a:	89 d0                	mov    %edx,%eax
 8a8cb3c:	c1 e8 06             	shr    $0x6,%eax
 8a8cb3f:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8a8cb42:	83 c4 00             	add    $0x0,%esp
 8a8cb45:	5b                   	pop    %ebx
 8a8cb46:	5e                   	pop    %esi
 8a8cb47:	5d                   	pop    %ebp
 8a8cb48:	c3                   	ret

```

```c
// ServerParameterScript::getAssaultGhostTime @ 0x8a8c804

/* ServerParameterScript::getAssaultGhostTime(int, int) */

uint __thiscall
ServerParameterScript::getAssaultGhostTime(ServerParameterScript *this,int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  ulonglong local_5c;
  int local_4c;
  int local_48;
  float local_44;
  float local_40;
  __normal_iterator<stAssaultChaosPointGhostPanalty*,std::vector<stAssaultChaosPointGhostPanalty,std::allocator<stAssaultChaosPointGhostPanalty>>>
  local_3c [4];
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  __normal_iterator<stAssaultLevelGhostPanalty*,std::vector<stAssaultLevelGhostPanalty,std::allocator<stAssaultLevelGhostPanalty>>>
  local_28 [4];
  __normal_iterator local_24 [4];
  __normal_iterator<stAssaultLevelGhostPanalty*,std::vector<stAssaultLevelGhostPanalty,std::allocator<stAssaultLevelGhostPanalty>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator<stAssaultChaosPointGhostPanalty*,std::vector<stAssaultChaosPointGhostPanalty,std::allocator<stAssaultChaosPointGhostPanalty>>>
  local_18 [4];
  uint local_14;
  float local_10;
  
  cVar1 = std::vector<stAssaultLevelGhostPanalty,std::allocator<stAssaultLevelGhostPanalty>>::empty
                    ();
  if (cVar1 == '\0') {
    std::vector<stAssaultLevelGhostPanalty,std::allocator<stAssaultLevelGhostPanalty>>::begin();
    stAssaultLevelGhostPanalty::stAssaultLevelGhostPanalty((stAssaultLevelGhostPanalty *)&local_38);
    while( true ) {
      std::vector<stAssaultLevelGhostPanalty,std::allocator<stAssaultLevelGhostPanalty>>::end();
      bVar2 = __gnu_cxx::operator!=(local_28,local_24);
      if (!bVar2) break;
      piVar3 = (int *)__gnu_cxx::
                      __normal_iterator<stAssaultLevelGhostPanalty*,std::vector<stAssaultLevelGhostPanalty,std::allocator<stAssaultLevelGhostPanalty>>>
                      ::operator->(local_28);
      if (param_1 < *piVar3) {
LAB_08a8c87e:
        bVar2 = false;
      }
      else {
        iVar4 = __gnu_cxx::
                __normal_iterator<stAssaultLevelGhostPanalty*,std::vector<stAssaultLevelGhostPanalty,std::allocator<stAssaultLevelGhostPanalty>>>
                ::operator->(local_28);
        if (*(int *)(iVar4 + 4) < param_1) goto LAB_08a8c87e;
        bVar2 = true;
      }
      if (bVar2) {
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<stAssaultLevelGhostPanalty*,std::vector<stAssaultLevelGhostPanalty,std::allocator<stAssaultLevelGhostPanalty>>>
                        ::operator*(local_28);
        local_38 = *piVar3;
        local_34 = piVar3[1];
        local_30 = piVar3[2];
        local_2c = piVar3[3];
        break;
      }
      __gnu_cxx::
      __normal_iterator<stAssaultLevelGhostPanalty*,std::vector<stAssaultLevelGhostPanalty,std::allocator<stAssaultLevelGhostPanalty>>>
      ::operator++(local_20,(int)local_28);
    }
    local_14 = local_30 +
               (param_1 - local_38) * ((local_2c - local_30) / (uint)(local_34 - local_38));
    if (local_14 < local_30) {
      local_14 = local_30;
    }
    else if (local_2c < local_14) {
      local_14 = local_2c;
    }
    cVar1 = std::
            vector<stAssaultChaosPointGhostPanalty,std::allocator<stAssaultChaosPointGhostPanalty>>
            ::empty();
    if (cVar1 == '\0') {
      local_10 = 1.0;
      if (1000 < param_2) {
        param_2 = 1000;
      }
      __gnu_cxx::
      __normal_iterator<stAssaultChaosPointGhostPanalty*,std::vector<stAssaultChaosPointGhostPanalty,std::allocator<stAssaultChaosPointGhostPanalty>>>
      ::__normal_iterator(local_3c);
      std::vector<stAssaultChaosPointGhostPanalty,std::allocator<stAssaultChaosPointGhostPanalty>>::
      begin();
      stAssaultChaosPointGhostPanalty::stAssaultChaosPointGhostPanalty
                ((stAssaultChaosPointGhostPanalty *)&local_4c);
      while( true ) {
        std::vector<stAssaultChaosPointGhostPanalty,std::allocator<stAssaultChaosPointGhostPanalty>>
        ::end();
        bVar2 = __gnu_cxx::operator!=(local_3c,local_1c);
        if (!bVar2) break;
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<stAssaultChaosPointGhostPanalty*,std::vector<stAssaultChaosPointGhostPanalty,std::allocator<stAssaultChaosPointGhostPanalty>>>
                        ::operator->(local_3c);
        if (param_2 < *piVar3) {
LAB_08a8ca0a:
          bVar2 = false;
        }
        else {
          iVar4 = __gnu_cxx::
                  __normal_iterator<stAssaultChaosPointGhostPanalty*,std::vector<stAssaultChaosPointGhostPanalty,std::allocator<stAssaultChaosPointGhostPanalty>>>
                  ::operator->(local_3c);
          if (*(int *)(iVar4 + 4) < param_2) goto LAB_08a8ca0a;
          bVar2 = true;
        }
        if (bVar2) {
          piVar3 = (int *)__gnu_cxx::
                          __normal_iterator<stAssaultChaosPointGhostPanalty*,std::vector<stAssaultChaosPointGhostPanalty,std::allocator<stAssaultChaosPointGhostPanalty>>>
                          ::operator*(local_3c);
          local_4c = *piVar3;
          local_48 = piVar3[1];
          local_44 = (float)piVar3[2];
          local_40 = (float)piVar3[3];
          break;
        }
        __gnu_cxx::
        __normal_iterator<stAssaultChaosPointGhostPanalty*,std::vector<stAssaultChaosPointGhostPanalty,std::allocator<stAssaultChaosPointGhostPanalty>>>
        ::operator++(local_18,(int)local_3c);
      }
      local_10 = (float)(param_2 - local_4c) *
                 ((local_40 - local_44) / (float)(local_48 - local_4c)) + local_44;
      if (local_44 <= local_10) {
        if (local_40 < local_10) {
          local_10 = local_40;
        }
      }
      else {
        local_10 = local_44;
      }
      local_5c = (ulonglong)local_14;
      local_5c._0_4_ = (uint)(longlong)ROUND((float)local_5c * local_10);
      local_14 = (uint)local_5c / 1000;
    }
    else {
      local_14 = local_14 / 1000;
    }
  }
  else {
    local_14 = 0xb4;
  }
  return local_14;
}

```

---

## getAssaultPriceChaospointWeight

```asm
// === 08a8c668 ServerParameterScript::getAssaultPriceChaospointWeight  [0x08a8c668-0x8a8c803] ===
 8a8c668:	55                   	push   %ebp
 8a8c669:	89 e5                	mov    %esp,%ebp
 8a8c66b:	83 ec 58             	sub    $0x58,%esp
 8a8c66e:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8c671:	05 e4 04 00 00       	add    $0x4e4,%eax
 8a8c676:	89 04 24             	mov    %eax,(%esp)
 8a8c679:	e8 5e 14 00 00       	call   8a8dadc <_ZNKSt6vectorI25stAssaultChaosPointWeightSaIS0_EE5emptyEv>
 8a8c67e:	84 c0                	test   %al,%al
 8a8c680:	74 0a                	je     8a8c68c <_ZN21ServerParameterScript31getAssaultPriceChaospointWeightEi+0x24>
 8a8c682:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 8a8c687:	e9 6f 01 00 00       	jmp    8a8c7fb <_ZN21ServerParameterScript31getAssaultPriceChaospointWeightEi+0x193>
 8a8c68c:	81 7d 0c e8 03 00 00 	cmpl   $0x3e8,0xc(%ebp)
 8a8c693:	7e 07                	jle    8a8c69c <_ZN21ServerParameterScript31getAssaultPriceChaospointWeightEi+0x34>
 8a8c695:	c7 45 0c e8 03 00 00 	movl   $0x3e8,0xc(%ebp)
 8a8c69c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8c69f:	8d 90 e4 04 00 00    	lea    0x4e4(%eax),%edx
 8a8c6a5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a8c6a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a8c6ac:	89 04 24             	mov    %eax,(%esp)
 8a8c6af:	e8 6c 14 00 00       	call   8a8db20 <_ZNSt6vectorI25stAssaultChaosPointWeightSaIS0_EE5beginEv>
 8a8c6b4:	83 ec 04             	sub    $0x4,%esp
 8a8c6b7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8a8c6ba:	89 04 24             	mov    %eax,(%esp)
 8a8c6bd:	e8 66 06 00 00       	call   8a8cd28 <_ZN25stAssaultChaosPointWeightC1Ev>
 8a8c6c2:	eb 76                	jmp    8a8c73a <_ZN21ServerParameterScript31getAssaultPriceChaospointWeightEi+0xd2>
 8a8c6c4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a8c6c7:	89 04 24             	mov    %eax,(%esp)
 8a8c6ca:	e8 c7 14 00 00       	call   8a8db96 <_ZNK9__gnu_cxx17__normal_iteratorIP25stAssaultChaosPointWeightSt6vectorIS1_SaIS1_EEEptEv>
 8a8c6cf:	8b 00                	mov    (%eax),%eax
 8a8c6d1:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8a8c6d4:	7f 1a                	jg     8a8c6f0 <_ZN21ServerParameterScript31getAssaultPriceChaospointWeightEi+0x88>
 8a8c6d6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a8c6d9:	89 04 24             	mov    %eax,(%esp)
 8a8c6dc:	e8 b5 14 00 00       	call   8a8db96 <_ZNK9__gnu_cxx17__normal_iteratorIP25stAssaultChaosPointWeightSt6vectorIS1_SaIS1_EEEptEv>
 8a8c6e1:	8b 40 04             	mov    0x4(%eax),%eax
 8a8c6e4:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8a8c6e7:	7c 07                	jl     8a8c6f0 <_ZN21ServerParameterScript31getAssaultPriceChaospointWeightEi+0x88>
 8a8c6e9:	b8 01 00 00 00       	mov    $0x1,%eax
 8a8c6ee:	eb 05                	jmp    8a8c6f5 <_ZN21ServerParameterScript31getAssaultPriceChaospointWeightEi+0x8d>
 8a8c6f0:	b8 00 00 00 00       	mov    $0x0,%eax
 8a8c6f5:	84 c0                	test   %al,%al
 8a8c6f7:	74 24                	je     8a8c71d <_ZN21ServerParameterScript31getAssaultPriceChaospointWeightEi+0xb5>
 8a8c6f9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a8c6fc:	89 04 24             	mov    %eax,(%esp)
 8a8c6ff:	e8 9c 14 00 00       	call   8a8dba0 <_ZNK9__gnu_cxx17__normal_iteratorIP25stAssaultChaosPointWeightSt6vectorIS1_SaIS1_EEEdeEv>
 8a8c704:	8b 10                	mov    (%eax),%edx
 8a8c706:	89 55 d8             	mov    %edx,-0x28(%ebp)
 8a8c709:	8b 50 04             	mov    0x4(%eax),%edx
 8a8c70c:	89 55 dc             	mov    %edx,-0x24(%ebp)
 8a8c70f:	8b 50 08             	mov    0x8(%eax),%edx
 8a8c712:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8a8c715:	8b 40 0c             	mov    0xc(%eax),%eax
 8a8c718:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8a8c71b:	eb 52                	jmp    8a8c76f <_ZN21ServerParameterScript31getAssaultPriceChaospointWeightEi+0x107>
 8a8c71d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a8c720:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8a8c727:	00 
 8a8c728:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8a8c72b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a8c72f:	89 04 24             	mov    %eax,(%esp)
 8a8c732:	e8 73 14 00 00       	call   8a8dbaa <_ZN9__gnu_cxx17__normal_iteratorIP25stAssaultChaosPointWeightSt6vectorIS1_SaIS1_EEEppEi>
 8a8c737:	83 ec 04             	sub    $0x4,%esp
 8a8c73a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8c73d:	8d 90 e4 04 00 00    	lea    0x4e4(%eax),%edx
 8a8c743:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a8c746:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a8c74a:	89 04 24             	mov    %eax,(%esp)
 8a8c74d:	e8 f2 13 00 00       	call   8a8db44 <_ZNSt6vectorI25stAssaultChaosPointWeightSaIS0_EE3endEv>
 8a8c752:	83 ec 04             	sub    $0x4,%esp
 8a8c755:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a8c758:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a8c75c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a8c75f:	89 04 24             	mov    %eax,(%esp)
 8a8c762:	e8 03 14 00 00       	call   8a8db6a <_ZN9__gnu_cxxneIP25stAssaultChaosPointWeightSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8a8c767:	84 c0                	test   %al,%al
 8a8c769:	0f 85 55 ff ff ff    	jne    8a8c6c4 <_ZN21ServerParameterScript31getAssaultPriceChaospointWeightEi+0x5c>
 8a8c76f:	d9 45 e0             	flds   -0x20(%ebp)
 8a8c772:	d9 ee                	fldz
 8a8c774:	d9 c9                	fxch   %st(1)
 8a8c776:	da e9                	fucompp
 8a8c778:	df e0                	fnstsw %ax
 8a8c77a:	9e                   	sahf
 8a8c77b:	75 09                	jne    8a8c786 <_ZN21ServerParameterScript31getAssaultPriceChaospointWeightEi+0x11e>
 8a8c77d:	7a 07                	jp     8a8c786 <_ZN21ServerParameterScript31getAssaultPriceChaospointWeightEi+0x11e>
 8a8c77f:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 8a8c784:	eb 75                	jmp    8a8c7fb <_ZN21ServerParameterScript31getAssaultPriceChaospointWeightEi+0x193>
 8a8c786:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 8a8c78b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8a8c78e:	d9 45 e0             	flds   -0x20(%ebp)
 8a8c791:	d9 45 e4             	flds   -0x1c(%ebp)
 8a8c794:	d9 45 e0             	flds   -0x20(%ebp)
 8a8c797:	de e9                	fsubrp %st,%st(1)
 8a8c799:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8a8c79c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8a8c79f:	89 d1                	mov    %edx,%ecx
 8a8c7a1:	29 c1                	sub    %eax,%ecx
 8a8c7a3:	89 c8                	mov    %ecx,%eax
 8a8c7a5:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8a8c7a8:	db 45 d4             	fildl  -0x2c(%ebp)
 8a8c7ab:	de f9                	fdivrp %st,%st(1)
 8a8c7ad:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8a8c7b0:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a8c7b3:	89 d1                	mov    %edx,%ecx
 8a8c7b5:	29 c1                	sub    %eax,%ecx
 8a8c7b7:	89 c8                	mov    %ecx,%eax
 8a8c7b9:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8a8c7bc:	db 45 d4             	fildl  -0x2c(%ebp)
 8a8c7bf:	de c9                	fmulp  %st,%st(1)
 8a8c7c1:	de c1                	faddp  %st,%st(1)
 8a8c7c3:	d9 5d f4             	fstps  -0xc(%ebp)
 8a8c7c6:	d9 45 e0             	flds   -0x20(%ebp)
 8a8c7c9:	d9 45 f4             	flds   -0xc(%ebp)
 8a8c7cc:	d9 c9                	fxch   %st(1)
 8a8c7ce:	da e9                	fucompp
 8a8c7d0:	df e0                	fnstsw %ax
 8a8c7d2:	9e                   	sahf
 8a8c7d3:	0f 97 c0             	seta   %al
 8a8c7d6:	84 c0                	test   %al,%al
 8a8c7d8:	74 05                	je     8a8c7df <_ZN21ServerParameterScript31getAssaultPriceChaospointWeightEi+0x177>
 8a8c7da:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8a8c7dd:	eb 1c                	jmp    8a8c7fb <_ZN21ServerParameterScript31getAssaultPriceChaospointWeightEi+0x193>
 8a8c7df:	d9 45 e4             	flds   -0x1c(%ebp)
 8a8c7e2:	d9 45 f4             	flds   -0xc(%ebp)
 8a8c7e5:	da e9                	fucompp
 8a8c7e7:	df e0                	fnstsw %ax
 8a8c7e9:	f6 c4 45             	test   $0x45,%ah
 8a8c7ec:	0f 94 c0             	sete   %al
 8a8c7ef:	84 c0                	test   %al,%al
 8a8c7f1:	74 05                	je     8a8c7f8 <_ZN21ServerParameterScript31getAssaultPriceChaospointWeightEi+0x190>
 8a8c7f3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8a8c7f6:	eb 03                	jmp    8a8c7fb <_ZN21ServerParameterScript31getAssaultPriceChaospointWeightEi+0x193>
 8a8c7f8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a8c7fb:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8a8c7fe:	d9 45 c4             	flds   -0x3c(%ebp)
 8a8c801:	c9                   	leave
 8a8c802:	c3                   	ret
 8a8c803:	90                   	nop

```

```c
// ServerParameterScript::getAssaultPriceChaospointWeight @ 0x8a8c668

/* ServerParameterScript::getAssaultPriceChaospointWeight(int) */

longdouble __thiscall
ServerParameterScript::getAssaultPriceChaospointWeight(ServerParameterScript *this,int param_1)

{
  float fVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  __normal_iterator<stAssaultChaosPointWeight*,std::vector<stAssaultChaosPointWeight,std::allocator<stAssaultChaosPointWeight>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator<stAssaultChaosPointWeight*,std::vector<stAssaultChaosPointWeight,std::allocator<stAssaultChaosPointWeight>>>
  local_14 [16];
  
  cVar2 = std::vector<stAssaultChaosPointWeight,std::allocator<stAssaultChaosPointWeight>>::empty();
  if (cVar2 == '\0') {
    if (1000 < param_1) {
      param_1 = 1000;
    }
    std::vector<stAssaultChaosPointWeight,std::allocator<stAssaultChaosPointWeight>>::begin();
    stAssaultChaosPointWeight::stAssaultChaosPointWeight((stAssaultChaosPointWeight *)&local_2c);
    while( true ) {
      std::vector<stAssaultChaosPointWeight,std::allocator<stAssaultChaosPointWeight>>::end();
      bVar3 = __gnu_cxx::operator!=(local_1c,local_18);
      if (!bVar3) break;
      piVar4 = (int *)__gnu_cxx::
                      __normal_iterator<stAssaultChaosPointWeight*,std::vector<stAssaultChaosPointWeight,std::allocator<stAssaultChaosPointWeight>>>
                      ::operator->(local_1c);
      if ((param_1 < *piVar4) ||
         (iVar5 = __gnu_cxx::
                  __normal_iterator<stAssaultChaosPointWeight*,std::vector<stAssaultChaosPointWeight,std::allocator<stAssaultChaosPointWeight>>>
                  ::operator->(local_1c), *(int *)(iVar5 + 4) < param_1)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        piVar4 = (int *)__gnu_cxx::
                        __normal_iterator<stAssaultChaosPointWeight*,std::vector<stAssaultChaosPointWeight,std::allocator<stAssaultChaosPointWeight>>>
                        ::operator*(local_1c);
        local_2c = *piVar4;
        local_28 = piVar4[1];
        local_24 = (float)piVar4[2];
        local_20 = (float)piVar4[3];
        break;
      }
      __gnu_cxx::
      __normal_iterator<stAssaultChaosPointWeight*,std::vector<stAssaultChaosPointWeight,std::allocator<stAssaultChaosPointWeight>>>
      ::operator++(local_14,(int)local_1c);
    }
    if ((local_24 != 0.0) || (NAN(local_24))) {
      fVar1 = (float)(param_1 - local_2c) * ((local_20 - local_24) / (float)(local_28 - local_2c)) +
              local_24;
      if ((local_24 <= fVar1) && (local_24 = fVar1, local_20 < fVar1)) {
        local_24 = local_20;
      }
    }
    else {
      local_24 = 1.0;
    }
  }
  else {
    local_24 = 1.0;
  }
  return (longdouble)local_24;
}

```

---

## getLuckPoint

```asm
// === 08a8c486 ServerParameterScript::getLuckPoint  [0x08a8c486-0x8a8c4fd] ===
 8a8c486:	55                   	push   %ebp
 8a8c487:	89 e5                	mov    %esp,%ebp
 8a8c489:	83 ec 28             	sub    $0x28,%esp
 8a8c48c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8a8c493:	eb 49                	jmp    8a8c4de <_ZN21ServerParameterScript12getLuckPointEiRi+0x58>
 8a8c495:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8c498:	8d 50 48             	lea    0x48(%eax),%edx
 8a8c49b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a8c49e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a8c4a2:	89 14 24             	mov    %edx,(%esp)
 8a8c4a5:	e8 f2 15 00 00       	call   8a8da9c <_ZNSt6vectorI13stLuckPoint_tSaIS0_EEixEj>
 8a8c4aa:	8b 00                	mov    (%eax),%eax
 8a8c4ac:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8a8c4af:	0f 9d c0             	setge  %al
 8a8c4b2:	84 c0                	test   %al,%al
 8a8c4b4:	74 24                	je     8a8c4da <_ZN21ServerParameterScript12getLuckPointEiRi+0x54>
 8a8c4b6:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8c4b9:	8d 50 48             	lea    0x48(%eax),%edx
 8a8c4bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a8c4bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a8c4c3:	89 14 24             	mov    %edx,(%esp)
 8a8c4c6:	e8 d1 15 00 00       	call   8a8da9c <_ZNSt6vectorI13stLuckPoint_tSaIS0_EEixEj>
 8a8c4cb:	8b 50 04             	mov    0x4(%eax),%edx
 8a8c4ce:	8b 45 10             	mov    0x10(%ebp),%eax
 8a8c4d1:	89 10                	mov    %edx,(%eax)
 8a8c4d3:	b8 01 00 00 00       	mov    $0x1,%eax
 8a8c4d8:	eb 21                	jmp    8a8c4fb <_ZN21ServerParameterScript12getLuckPointEiRi+0x75>
 8a8c4da:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8a8c4de:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8c4e1:	83 c0 48             	add    $0x48,%eax
 8a8c4e4:	89 04 24             	mov    %eax,(%esp)
 8a8c4e7:	e8 94 15 00 00       	call   8a8da80 <_ZNKSt6vectorI13stLuckPoint_tSaIS0_EE4sizeEv>
 8a8c4ec:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8a8c4ef:	0f 97 c0             	seta   %al
 8a8c4f2:	84 c0                	test   %al,%al
 8a8c4f4:	75 9f                	jne    8a8c495 <_ZN21ServerParameterScript12getLuckPointEiRi+0xf>
 8a8c4f6:	b8 00 00 00 00       	mov    $0x0,%eax
 8a8c4fb:	c9                   	leave
 8a8c4fc:	c3                   	ret
 8a8c4fd:	90                   	nop

```

```c
// ServerParameterScript::getLuckPoint @ 0x8a8c486

/* ServerParameterScript::getLuckPoint(int, int&) */

undefined4 __thiscall
ServerParameterScript::getLuckPoint(ServerParameterScript *this,int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    uVar3 = std::vector<stLuckPoint_t,std::allocator<stLuckPoint_t>>::size
                      ((vector<stLuckPoint_t,std::allocator<stLuckPoint_t>> *)(this + 0x48));
    if (uVar3 <= local_10) {
      return 0;
    }
    piVar1 = (int *)std::vector<stLuckPoint_t,std::allocator<stLuckPoint_t>>::operator[]
                              ((vector<stLuckPoint_t,std::allocator<stLuckPoint_t>> *)(this + 0x48),
                               local_10);
    if (param_1 <= *piVar1) break;
    local_10 = local_10 + 1;
  }
  iVar2 = std::vector<stLuckPoint_t,std::allocator<stLuckPoint_t>>::operator[]
                    ((vector<stLuckPoint_t,std::allocator<stLuckPoint_t>> *)(this + 0x48),local_10);
  *param_2 = *(int *)(iVar2 + 4);
  return 1;
}

```

---

## getLuckPointDeductionRate

```asm
// === 08a8c4fe ServerParameterScript::getLuckPointDeductionRate  [0x08a8c4fe-0x8a8c5f1] ===
 8a8c4fe:	55                   	push   %ebp
 8a8c4ff:	89 e5                	mov    %esp,%ebp
 8a8c501:	53                   	push   %ebx
 8a8c502:	83 ec 24             	sub    $0x24,%esp
 8a8c505:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8a8c50c:	e9 b9 00 00 00       	jmp    8a8c5ca <_ZN21ServerParameterScript25getLuckPointDeductionRateEii+0xcc>
 8a8c511:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8c514:	8d 50 54             	lea    0x54(%eax),%edx
 8a8c517:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8a8c51a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a8c51e:	89 14 24             	mov    %edx,(%esp)
 8a8c521:	e8 a4 15 00 00       	call   8a8daca <_ZNSt6vectorI22stLuckPointDeduction_tSaIS0_EEixEj>
 8a8c526:	8b 00                	mov    (%eax),%eax
 8a8c528:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8a8c52b:	0f 9d c0             	setge  %al
 8a8c52e:	84 c0                	test   %al,%al
 8a8c530:	0f 84 90 00 00 00    	je     8a8c5c6 <_ZN21ServerParameterScript25getLuckPointDeductionRateEii+0xc8>
 8a8c536:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8a8c53d:	eb 50                	jmp    8a8c58f <_ZN21ServerParameterScript25getLuckPointDeductionRateEii+0x91>
 8a8c53f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a8c542:	8b 55 08             	mov    0x8(%ebp),%edx
 8a8c545:	83 c2 6c             	add    $0x6c,%edx
 8a8c548:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a8c54c:	89 14 24             	mov    %edx,(%esp)
 8a8c54f:	e8 88 1c 60 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 8a8c554:	8b 00                	mov    (%eax),%eax
 8a8c556:	3b 45 10             	cmp    0x10(%ebp),%eax
 8a8c559:	0f 9e c0             	setle  %al
 8a8c55c:	84 c0                	test   %al,%al
 8a8c55e:	74 2b                	je     8a8c58b <_ZN21ServerParameterScript25getLuckPointDeductionRateEii+0x8d>
 8a8c560:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8a8c563:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8c566:	8d 50 54             	lea    0x54(%eax),%edx
 8a8c569:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8a8c56c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a8c570:	89 14 24             	mov    %edx,(%esp)
 8a8c573:	e8 52 15 00 00       	call   8a8daca <_ZNSt6vectorI22stLuckPointDeduction_tSaIS0_EEixEj>
 8a8c578:	83 c0 04             	add    $0x4,%eax
 8a8c57b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8a8c57f:	89 04 24             	mov    %eax,(%esp)
 8a8c582:	e8 55 1c 60 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 8a8c587:	8b 00                	mov    (%eax),%eax
 8a8c589:	eb 60                	jmp    8a8c5eb <_ZN21ServerParameterScript25getLuckPointDeductionRateEii+0xed>
 8a8c58b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8a8c58f:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 8a8c593:	0f 9e c0             	setle  %al
 8a8c596:	84 c0                	test   %al,%al
 8a8c598:	75 a5                	jne    8a8c53f <_ZN21ServerParameterScript25getLuckPointDeductionRateEii+0x41>
 8a8c59a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8c59d:	8d 50 54             	lea    0x54(%eax),%edx
 8a8c5a0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8a8c5a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a8c5a7:	89 14 24             	mov    %edx,(%esp)
 8a8c5aa:	e8 1b 15 00 00       	call   8a8daca <_ZNSt6vectorI22stLuckPointDeduction_tSaIS0_EEixEj>
 8a8c5af:	83 c0 04             	add    $0x4,%eax
 8a8c5b2:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8a8c5b9:	00 
 8a8c5ba:	89 04 24             	mov    %eax,(%esp)
 8a8c5bd:	e8 1a 1c 60 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 8a8c5c2:	8b 00                	mov    (%eax),%eax
 8a8c5c4:	eb 25                	jmp    8a8c5eb <_ZN21ServerParameterScript25getLuckPointDeductionRateEii+0xed>
 8a8c5c6:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8a8c5ca:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8c5cd:	83 c0 54             	add    $0x54,%eax
 8a8c5d0:	89 04 24             	mov    %eax,(%esp)
 8a8c5d3:	e8 d6 14 00 00       	call   8a8daae <_ZNKSt6vectorI22stLuckPointDeduction_tSaIS0_EE4sizeEv>
 8a8c5d8:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8a8c5db:	0f 97 c0             	seta   %al
 8a8c5de:	84 c0                	test   %al,%al
 8a8c5e0:	0f 85 2b ff ff ff    	jne    8a8c511 <_ZN21ServerParameterScript25getLuckPointDeductionRateEii+0x13>
 8a8c5e6:	b8 00 00 00 00       	mov    $0x0,%eax
 8a8c5eb:	83 c4 24             	add    $0x24,%esp
 8a8c5ee:	5b                   	pop    %ebx
 8a8c5ef:	5d                   	pop    %ebp
 8a8c5f0:	c3                   	ret
 8a8c5f1:	90                   	nop

```

```c
// ServerParameterScript::getLuckPointDeductionRate @ 0x8a8c4fe

/* ServerParameterScript::getLuckPointDeductionRate(int, int) */

undefined4 __thiscall
ServerParameterScript::getLuckPointDeductionRate
          (ServerParameterScript *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint local_14;
  uint local_10;
  
  local_14 = 0;
  while( true ) {
    uVar4 = std::vector<stLuckPointDeduction_t,std::allocator<stLuckPointDeduction_t>>::size
                      ((vector<stLuckPointDeduction_t,std::allocator<stLuckPointDeduction_t>> *)
                       (this + 0x54));
    if (uVar4 <= local_14) {
      return 0;
    }
    piVar1 = (int *)std::vector<stLuckPointDeduction_t,std::allocator<stLuckPointDeduction_t>>::
                    operator[]((vector<stLuckPointDeduction_t,std::allocator<stLuckPointDeduction_t>>
                                *)(this + 0x54),local_14);
    if (param_1 <= *piVar1) break;
    local_14 = local_14 + 1;
  }
  local_10 = 0;
  while( true ) {
    if (2 < (int)local_10) {
      iVar2 = std::vector<stLuckPointDeduction_t,std::allocator<stLuckPointDeduction_t>>::operator[]
                        ((vector<stLuckPointDeduction_t,std::allocator<stLuckPointDeduction_t>> *)
                         (this + 0x54),local_14);
      puVar3 = (undefined4 *)
               std::vector<int,std::allocator<int>>::operator[]
                         ((vector<int,std::allocator<int>> *)(iVar2 + 4),3);
      return *puVar3;
    }
    piVar1 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)(this + 0x6c),local_10);
    if (*piVar1 <= param_2) break;
    local_10 = local_10 + 1;
  }
  iVar2 = std::vector<stLuckPointDeduction_t,std::allocator<stLuckPointDeduction_t>>::operator[]
                    ((vector<stLuckPointDeduction_t,std::allocator<stLuckPointDeduction_t>> *)
                     (this + 0x54),local_14);
  puVar3 = (undefined4 *)
           std::vector<int,std::allocator<int>>::operator[]
                     ((vector<int,std::allocator<int>> *)(iVar2 + 4),local_10);
  return *puVar3;
}

```

