# online_preliminary__COnlinePreliminaryTeam

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## COnlinePreliminaryTeam

```asm
// === 08587eb8 online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam  [0x08587eb8-0x8587ecd] ===
 8587eb8:	55                   	push   %ebp
 8587eb9:	89 e5                	mov    %esp,%ebp
 8587ebb:	83 ec 18             	sub    $0x18,%esp
 8587ebe:	8b 45 08             	mov    0x8(%ebp),%eax
 8587ec1:	83 c0 24             	add    $0x24,%eax
 8587ec4:	89 04 24             	mov    %eax,(%esp)
 8587ec7:	e8 ec 11 00 00       	call   85890b8 <_ZNSt3mapIiN18online_preliminary15PlayCountInfoExESt4lessIiESaISt4pairIKiS1_EEEC1Ev>
 8587ecc:	c9                   	leave
 8587ecd:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam @ 0x8587eb8

/* online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam() */

void __thiscall
online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam(COnlinePreliminaryTeam *this)

{
  std::
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  ::map((map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
         *)(this + 0x24));
  return;
}

```

---

## GetEachOtherTeamPlayCount

```asm
// === 0858844c online_preliminary::COnlinePreliminaryTeam::GetEachOtherTeamPlayCount  [0x0858844c-0x85884b5] ===
 858844c:	55                   	push   %ebp
 858844d:	89 e5                	mov    %esp,%ebp
 858844f:	83 ec 28             	sub    $0x28,%esp
 8588452:	8b 45 08             	mov    0x8(%ebp),%eax
 8588455:	8d 48 24             	lea    0x24(%eax),%ecx
 8588458:	8d 45 f0             	lea    -0x10(%ebp),%eax
 858845b:	8d 55 0c             	lea    0xc(%ebp),%edx
 858845e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8588462:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8588466:	89 04 24             	mov    %eax,(%esp)
 8588469:	e8 8a 0e 00 00       	call   85892f8 <_ZNKSt3mapIiN18online_preliminary15PlayCountInfoExESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 858846e:	83 ec 04             	sub    $0x4,%esp
 8588471:	8b 45 08             	mov    0x8(%ebp),%eax
 8588474:	8d 50 24             	lea    0x24(%eax),%edx
 8588477:	8d 45 f4             	lea    -0xc(%ebp),%eax
 858847a:	89 54 24 04          	mov    %edx,0x4(%esp)
 858847e:	89 04 24             	mov    %eax,(%esp)
 8588481:	e8 9e 0e 00 00       	call   8589324 <_ZNKSt3mapIiN18online_preliminary15PlayCountInfoExESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 8588486:	83 ec 04             	sub    $0x4,%esp
 8588489:	8d 45 f4             	lea    -0xc(%ebp),%eax
 858848c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8588490:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8588493:	89 04 24             	mov    %eax,(%esp)
 8588496:	e8 af 0e 00 00       	call   858934a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN18online_preliminary15PlayCountInfoExEEEneERKS5_>
 858849b:	84 c0                	test   %al,%al
 858849d:	74 10                	je     85884af <_ZNK18online_preliminary22COnlinePreliminaryTeam25GetEachOtherTeamPlayCountEi+0x63>
 858849f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85884a2:	89 04 24             	mov    %eax,(%esp)
 85884a5:	e8 b4 0e 00 00       	call   858935e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN18online_preliminary15PlayCountInfoExEEEptEv>
 85884aa:	8b 40 04             	mov    0x4(%eax),%eax
 85884ad:	eb 05                	jmp    85884b4 <_ZNK18online_preliminary22COnlinePreliminaryTeam25GetEachOtherTeamPlayCountEi+0x68>
 85884af:	b8 00 00 00 00       	mov    $0x0,%eax
 85884b4:	c9                   	leave
 85884b5:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryTeam::GetEachOtherTeamPlayCount @ 0x858844c

/* online_preliminary::COnlinePreliminaryTeam::GetEachOtherTeamPlayCount(int) const */

undefined4 online_preliminary::COnlinePreliminaryTeam::GetEachOtherTeamPlayCount(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_const_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>> local_14 [4];
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  local_10 [12];
  
  std::
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  ::find((int *)local_14);
  std::
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>::
          operator!=(local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>::
            operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## IncreaseEachOtherTeamPlayCount

```asm
// === 085884b6 online_preliminary::COnlinePreliminaryTeam::IncreaseEachOtherTeamPlayCount  [0x085884b6-0x858860b] ===
 85884b6:	55                   	push   %ebp
 85884b7:	89 e5                	mov    %esp,%ebp
 85884b9:	53                   	push   %ebx
 85884ba:	83 ec 54             	sub    $0x54,%esp
 85884bd:	8b 45 08             	mov    0x8(%ebp),%eax
 85884c0:	8d 48 24             	lea    0x24(%eax),%ecx
 85884c3:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85884c6:	8d 55 0c             	lea    0xc(%ebp),%edx
 85884c9:	89 54 24 08          	mov    %edx,0x8(%esp)
 85884cd:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85884d1:	89 04 24             	mov    %eax,(%esp)
 85884d4:	e8 93 0e 00 00       	call   858936c <_ZNSt3mapIiN18online_preliminary15PlayCountInfoExESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 85884d9:	83 ec 04             	sub    $0x4,%esp
 85884dc:	8b 45 08             	mov    0x8(%ebp),%eax
 85884df:	8d 50 24             	lea    0x24(%eax),%edx
 85884e2:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85884e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85884e9:	89 04 24             	mov    %eax,(%esp)
 85884ec:	e8 93 0c 00 00       	call   8589184 <_ZNSt3mapIiN18online_preliminary15PlayCountInfoExESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 85884f1:	83 ec 04             	sub    $0x4,%esp
 85884f4:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85884f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85884fb:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85884fe:	89 04 24             	mov    %eax,(%esp)
 8588501:	e8 a4 0c 00 00       	call   85891aa <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN18online_preliminary15PlayCountInfoExEEEneERKS5_>
 8588506:	84 c0                	test   %al,%al
 8588508:	74 28                	je     8588532 <_ZN18online_preliminary22COnlinePreliminaryTeam30IncreaseEachOtherTeamPlayCountEi+0x7c>
 858850a:	8d 45 b8             	lea    -0x48(%ebp),%eax
 858850d:	89 04 24             	mov    %eax,(%esp)
 8588510:	e8 c7 0c 00 00       	call   85891dc <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN18online_preliminary15PlayCountInfoExEEEptEv>
 8588515:	c6 40 08 01          	movb   $0x1,0x8(%eax)
 8588519:	8d 45 b8             	lea    -0x48(%ebp),%eax
 858851c:	89 04 24             	mov    %eax,(%esp)
 858851f:	e8 b8 0c 00 00       	call   85891dc <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN18online_preliminary15PlayCountInfoExEEEptEv>
 8588524:	8b 50 04             	mov    0x4(%eax),%edx
 8588527:	83 c2 01             	add    $0x1,%edx
 858852a:	89 50 04             	mov    %edx,0x4(%eax)
 858852d:	e9 ce 00 00 00       	jmp    8588600 <_ZN18online_preliminary22COnlinePreliminaryTeam30IncreaseEachOtherTeamPlayCountEi+0x14a>
 8588532:	8b 45 08             	mov    0x8(%ebp),%eax
 8588535:	83 c0 24             	add    $0x24,%eax
 8588538:	89 04 24             	mov    %eax,(%esp)
 858853b:	e8 58 0e 00 00       	call   8589398 <_ZNKSt3mapIiN18online_preliminary15PlayCountInfoExESt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 8588540:	3d e7 03 00 00       	cmp    $0x3e7,%eax
 8588545:	0f 97 c0             	seta   %al
 8588548:	84 c0                	test   %al,%al
 858854a:	74 4c                	je     8588598 <_ZN18online_preliminary22COnlinePreliminaryTeam30IncreaseEachOtherTeamPlayCountEi+0xe2>
 858854c:	8b 45 08             	mov    0x8(%ebp),%eax
 858854f:	83 c0 24             	add    $0x24,%eax
 8588552:	89 04 24             	mov    %eax,(%esp)
 8588555:	e8 3e 0e 00 00       	call   8589398 <_ZNKSt3mapIiN18online_preliminary15PlayCountInfoExESt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 858855a:	89 c3                	mov    %eax,%ebx
 858855c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8588563:	00 
 8588564:	c7 44 24 08 ca 00 00 	movl   $0xca,0x8(%esp)
 858856b:	00 
 858856c:	c7 44 24 04 c0 c6 ca 	movl   $0x8cac6c0,0x4(%esp)
 8588573:	08 
 8588574:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8588577:	89 04 24             	mov    %eax,(%esp)
 858857a:	e8 99 71 fc ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 858857f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8588583:	c7 44 24 04 fc b8 ca 	movl   $0x8cab8fc,0x4(%esp)
 858858a:	08 
 858858b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 858858e:	89 04 24             	mov    %eax,(%esp)
 8588591:	e8 f2 71 fc ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8588596:	eb 6f                	jmp    8588607 <_ZN18online_preliminary22COnlinePreliminaryTeam30IncreaseEachOtherTeamPlayCountEi+0x151>
 8588598:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 858859f:	00 
 85885a0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85885a7:	00 
 85885a8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85885ab:	89 04 24             	mov    %eax,(%esp)
 85885ae:	e8 8d 07 00 00       	call   8588d40 <_ZN18online_preliminary15PlayCountInfoExC1Ejb>
 85885b3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85885b6:	8d 55 f0             	lea    -0x10(%ebp),%edx
 85885b9:	89 54 24 08          	mov    %edx,0x8(%esp)
 85885bd:	8d 55 0c             	lea    0xc(%ebp),%edx
 85885c0:	89 54 24 04          	mov    %edx,0x4(%esp)
 85885c4:	89 04 24             	mov    %eax,(%esp)
 85885c7:	e8 df 0d 00 00       	call   85893ab <_ZSt9make_pairIRiN18online_preliminary15PlayCountInfoExEESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 85885cc:	83 ec 04             	sub    $0x4,%esp
 85885cf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85885d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85885d6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85885d9:	89 04 24             	mov    %eax,(%esp)
 85885dc:	e8 09 0e 00 00       	call   85893ea <_ZNSt4pairIKiN18online_preliminary15PlayCountInfoExEEC1IiS2_EEOS_IT_T0_E>
 85885e1:	8b 45 08             	mov    0x8(%ebp),%eax
 85885e4:	8d 48 24             	lea    0x24(%eax),%ecx
 85885e7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85885ea:	8d 55 d8             	lea    -0x28(%ebp),%edx
 85885ed:	89 54 24 08          	mov    %edx,0x8(%esp)
 85885f1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85885f5:	89 04 24             	mov    %eax,(%esp)
 85885f8:	e8 23 0e 00 00       	call   8589420 <_ZNSt3mapIiN18online_preliminary15PlayCountInfoExESt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 85885fd:	83 ec 04             	sub    $0x4,%esp
 8588600:	8b 45 08             	mov    0x8(%ebp),%eax
 8588603:	c6 40 3d 01          	movb   $0x1,0x3d(%eax)
 8588607:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 858860a:	c9                   	leave
 858860b:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryTeam::IncreaseEachOtherTeamPlayCount @ 0x85884b6

/* online_preliminary::COnlinePreliminaryTeam::IncreaseEachOtherTeamPlayCount(int) */

void online_preliminary::COnlinePreliminaryTeam::IncreaseEachOtherTeamPlayCount(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  _Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>> local_4c [4];
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  local_48 [4];
  cMyTrace local_44 [16];
  pair local_34 [8];
  pair<int_const,online_preliminary::PlayCountInfoEx> local_2c [12];
  int local_20 [3];
  PlayCountInfoEx local_14 [12];
  
  std::
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  ::find((int *)local_4c);
  std::
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  ::end(local_48);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>::
          operator!=(local_4c,(_Rb_tree_iterator *)local_48);
  if (cVar1 == '\0') {
    uVar3 = std::
            map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
            ::size((map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
                    *)(param_1 + 0x24));
    if (999 < uVar3) {
      uVar4 = std::
              map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
              ::size((map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
                      *)(param_1 + 0x24));
      cMyTrace::cMyTrace(local_44,
                         "void online_preliminary::COnlinePreliminaryTeam::IncreaseEachOtherTeamPlayCount(int)"
                         ,0xca,0);
      cMyTrace::operator()
                (local_44,"Online Preliminary each other team play count map size over! %d",uVar4);
      return;
    }
    PlayCountInfoEx::PlayCountInfoEx(local_14,1,true);
    std::make_pair<int&,online_preliminary::PlayCountInfoEx>
              (local_20,(PlayCountInfoEx *)&stack0x00000008);
    std::pair<int_const,online_preliminary::PlayCountInfoEx>::
    pair<int,online_preliminary::PlayCountInfoEx>(local_2c,(pair *)local_20);
    std::
    map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
    ::insert(local_34);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>::
            operator->(local_4c);
    *(undefined1 *)(iVar2 + 8) = 1;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>::
            operator->(local_4c);
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  *(undefined1 *)(param_1 + 0x3d) = 1;
  return;
}

```

---

## IncreaseLoseCount

```asm
// === 0858841a online_preliminary::COnlinePreliminaryTeam::IncreaseLoseCount  [0x0858841a-0x8588435] ===
 858841a:	55                   	push   %ebp
 858841b:	89 e5                	mov    %esp,%ebp
 858841d:	8b 45 08             	mov    0x8(%ebp),%eax
 8588420:	8b 40 10             	mov    0x10(%eax),%eax
 8588423:	8d 50 01             	lea    0x1(%eax),%edx
 8588426:	8b 45 08             	mov    0x8(%ebp),%eax
 8588429:	89 50 10             	mov    %edx,0x10(%eax)
 858842c:	8b 45 08             	mov    0x8(%ebp),%eax
 858842f:	c6 40 3c 01          	movb   $0x1,0x3c(%eax)
 8588433:	5d                   	pop    %ebp
 8588434:	c3                   	ret
 8588435:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminaryTeam::IncreaseLoseCount @ 0x858841a

/* online_preliminary::COnlinePreliminaryTeam::IncreaseLoseCount() */

void __thiscall
online_preliminary::COnlinePreliminaryTeam::IncreaseLoseCount(COnlinePreliminaryTeam *this)

{
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  this[0x3c] = (COnlinePreliminaryTeam)0x1;
  return;
}

```

---

## IncreaseWinCount

```asm
// === 085883fe online_preliminary::COnlinePreliminaryTeam::IncreaseWinCount  [0x085883fe-0x8588419] ===
 85883fe:	55                   	push   %ebp
 85883ff:	89 e5                	mov    %esp,%ebp
 8588401:	8b 45 08             	mov    0x8(%ebp),%eax
 8588404:	8b 40 0c             	mov    0xc(%eax),%eax
 8588407:	8d 50 01             	lea    0x1(%eax),%edx
 858840a:	8b 45 08             	mov    0x8(%ebp),%eax
 858840d:	89 50 0c             	mov    %edx,0xc(%eax)
 8588410:	8b 45 08             	mov    0x8(%ebp),%eax
 8588413:	c6 40 3c 01          	movb   $0x1,0x3c(%eax)
 8588417:	5d                   	pop    %ebp
 8588418:	c3                   	ret
 8588419:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminaryTeam::IncreaseWinCount @ 0x85883fe

/* online_preliminary::COnlinePreliminaryTeam::IncreaseWinCount() */

void __thiscall
online_preliminary::COnlinePreliminaryTeam::IncreaseWinCount(COnlinePreliminaryTeam *this)

{
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  this[0x3c] = (COnlinePreliminaryTeam)0x1;
  return;
}

```

---

## Reset

```asm
// === 0858838a online_preliminary::COnlinePreliminaryTeam::Reset  [0x0858838a-0x85883fd] ===
 858838a:	55                   	push   %ebp
 858838b:	89 e5                	mov    %esp,%ebp
 858838d:	83 ec 18             	sub    $0x18,%esp
 8588390:	8b 45 08             	mov    0x8(%ebp),%eax
 8588393:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8588399:	8b 45 08             	mov    0x8(%ebp),%eax
 858839c:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 85883a3:	8b 45 08             	mov    0x8(%ebp),%eax
 85883a6:	83 c0 14             	add    $0x14,%eax
 85883a9:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 85883b0:	00 
 85883b1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85883b8:	00 
 85883b9:	89 04 24             	mov    %eax,(%esp)
 85883bc:	e8 ff 58 af ff       	call   807dcc0 <memset@plt>
 85883c1:	8b 45 08             	mov    0x8(%ebp),%eax
 85883c4:	ba 00 00 00 00       	mov    $0x0,%edx
 85883c9:	89 50 08             	mov    %edx,0x8(%eax)
 85883cc:	8b 45 08             	mov    0x8(%ebp),%eax
 85883cf:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 85883d6:	8b 45 08             	mov    0x8(%ebp),%eax
 85883d9:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 85883e0:	8b 45 08             	mov    0x8(%ebp),%eax
 85883e3:	83 c0 24             	add    $0x24,%eax
 85883e6:	89 04 24             	mov    %eax,(%esp)
 85883e9:	e8 f6 0e 00 00       	call   85892e4 <_ZNSt3mapIiN18online_preliminary15PlayCountInfoExESt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 85883ee:	8b 45 08             	mov    0x8(%ebp),%eax
 85883f1:	c6 40 3c 00          	movb   $0x0,0x3c(%eax)
 85883f5:	8b 45 08             	mov    0x8(%ebp),%eax
 85883f8:	c6 40 3d 00          	movb   $0x0,0x3d(%eax)
 85883fc:	c9                   	leave
 85883fd:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryTeam::Reset @ 0x858838a

/* online_preliminary::COnlinePreliminaryTeam::Reset() */

void __thiscall online_preliminary::COnlinePreliminaryTeam::Reset(COnlinePreliminaryTeam *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  memset(this + 0x14,0,0x10);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  std::
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  ::clear((map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
           *)(this + 0x24));
  this[0x3c] = (COnlinePreliminaryTeam)0x0;
  this[0x3d] = (COnlinePreliminaryTeam)0x0;
  return;
}

```

---

## ResetDailyMidnight

```asm
// === 08588374 online_preliminary::COnlinePreliminaryTeam::ResetDailyMidnight  [0x08588374-0x8588389] ===
 8588374:	55                   	push   %ebp
 8588375:	89 e5                	mov    %esp,%ebp
 8588377:	83 ec 18             	sub    $0x18,%esp
 858837a:	8b 45 08             	mov    0x8(%ebp),%eax
 858837d:	83 c0 24             	add    $0x24,%eax
 8588380:	89 04 24             	mov    %eax,(%esp)
 8588383:	e8 5c 0f 00 00       	call   85892e4 <_ZNSt3mapIiN18online_preliminary15PlayCountInfoExESt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 8588388:	c9                   	leave
 8588389:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryTeam::ResetDailyMidnight @ 0x8588374

/* online_preliminary::COnlinePreliminaryTeam::ResetDailyMidnight() */

void __thiscall
online_preliminary::COnlinePreliminaryTeam::ResetDailyMidnight(COnlinePreliminaryTeam *this)

{
  std::
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  ::clear((map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
           *)(this + 0x24));
  return;
}

```

---

## SetRating

```asm
// === 08588436 online_preliminary::COnlinePreliminaryTeam::SetRating  [0x08588436-0x858844b] ===
 8588436:	55                   	push   %ebp
 8588437:	89 e5                	mov    %esp,%ebp
 8588439:	8b 45 08             	mov    0x8(%ebp),%eax
 858843c:	8b 55 0c             	mov    0xc(%ebp),%edx
 858843f:	89 50 08             	mov    %edx,0x8(%eax)
 8588442:	8b 45 08             	mov    0x8(%ebp),%eax
 8588445:	c6 40 3c 01          	movb   $0x1,0x3c(%eax)
 8588449:	5d                   	pop    %ebp
 858844a:	c3                   	ret
 858844b:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminaryTeam::SetRating @ 0x8588436

/* online_preliminary::COnlinePreliminaryTeam::SetRating(float) */

void __thiscall
online_preliminary::COnlinePreliminaryTeam::SetRating(COnlinePreliminaryTeam *this,float param_1)

{
  *(float *)(this + 8) = param_1;
  this[0x3c] = (COnlinePreliminaryTeam)0x1;
  return;
}

```

---

## _saveTeam

```asm
// === 08587ee4 online_preliminary::COnlinePreliminaryTeam::_saveTeam  [0x08587ee4-0x858800b] ===
 8587ee4:	55                   	push   %ebp
 8587ee5:	89 e5                	mov    %esp,%ebp
 8587ee7:	56                   	push   %esi
 8587ee8:	53                   	push   %ebx
 8587ee9:	83 ec 20             	sub    $0x20,%esp
 8587eec:	8b 45 08             	mov    0x8(%ebp),%eax
 8587eef:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 8587ef3:	83 f0 01             	xor    $0x1,%eax
 8587ef6:	84 c0                	test   %al,%al
 8587ef8:	74 0a                	je     8587f04 <_ZN18online_preliminary22COnlinePreliminaryTeam9_saveTeamEv+0x20>
 8587efa:	bb 01 00 00 00       	mov    $0x1,%ebx
 8587eff:	e9 ff 00 00 00       	jmp    8588003 <_ZN18online_preliminary22COnlinePreliminaryTeam9_saveTeamEv+0x11f>
 8587f04:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8587f09:	c7 44 24 08 38 00 00 	movl   $0x38,0x8(%esp)
 8587f10:	00 
 8587f11:	c7 44 24 04 e0 b8 ca 	movl   $0x8cab8e0,0x4(%esp)
 8587f18:	08 
 8587f19:	89 04 24             	mov    %eax,(%esp)
 8587f1c:	e8 65 7b d0 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8587f21:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8587f28:	00 
 8587f29:	89 44 24 04          	mov    %eax,0x4(%esp)
 8587f2d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8587f30:	89 04 24             	mov    %eax,(%esp)
 8587f33:	e8 ee 0c b4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8587f38:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8587f3b:	89 04 24             	mov    %eax,(%esp)
 8587f3e:	e8 03 0d b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8587f43:	c7 44 24 04 e9 01 00 	movl   $0x1e9,0x4(%esp)
 8587f4a:	00 
 8587f4b:	89 04 24             	mov    %eax,(%esp)
 8587f4e:	e8 03 0d b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8587f53:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8587f56:	89 04 24             	mov    %eax,(%esp)
 8587f59:	e8 e8 0c b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8587f5e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8587f65:	ff 
 8587f66:	89 04 24             	mov    %eax,(%esp)
 8587f69:	e8 e8 0c b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8587f6e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8587f71:	89 04 24             	mov    %eax,(%esp)
 8587f74:	e8 d5 0c b4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8587f79:	89 04 24             	mov    %eax,(%esp)
 8587f7c:	e8 b1 11 00 00       	call   8589132 <_ZN12CStreamGuard11GetInBufferI27SIG_ONLINE_PRELIMINARY_TEAMEEPT_v>
 8587f81:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8587f84:	8b 45 08             	mov    0x8(%ebp),%eax
 8587f87:	8b 50 04             	mov    0x4(%eax),%edx
 8587f8a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8587f8d:	89 10                	mov    %edx,(%eax)
 8587f8f:	8b 45 08             	mov    0x8(%ebp),%eax
 8587f92:	8b 50 08             	mov    0x8(%eax),%edx
 8587f95:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8587f98:	89 50 14             	mov    %edx,0x14(%eax)
 8587f9b:	8b 45 08             	mov    0x8(%ebp),%eax
 8587f9e:	8b 50 0c             	mov    0xc(%eax),%edx
 8587fa1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8587fa4:	89 50 18             	mov    %edx,0x18(%eax)
 8587fa7:	8b 45 08             	mov    0x8(%ebp),%eax
 8587faa:	8b 50 10             	mov    0x10(%eax),%edx
 8587fad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8587fb0:	89 50 1c             	mov    %edx,0x1c(%eax)
 8587fb3:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8587fb8:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8587fbb:	89 54 24 08          	mov    %edx,0x8(%esp)
 8587fbf:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8587fc6:	00 
 8587fc7:	89 04 24             	mov    %eax,(%esp)
 8587fca:	e8 0f 90 fe ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8587fcf:	8b 45 08             	mov    0x8(%ebp),%eax
 8587fd2:	c6 40 3c 00          	movb   $0x0,0x3c(%eax)
 8587fd6:	bb 01 00 00 00       	mov    $0x1,%ebx
 8587fdb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8587fde:	89 04 24             	mov    %eax,(%esp)
 8587fe1:	e8 ec 48 09 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8587fe6:	eb 1b                	jmp    8588003 <_ZN18online_preliminary22COnlinePreliminaryTeam9_saveTeamEv+0x11f>
 8587fe8:	89 d3                	mov    %edx,%ebx
 8587fea:	89 c6                	mov    %eax,%esi
 8587fec:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8587fef:	89 04 24             	mov    %eax,(%esp)
 8587ff2:	e8 db 48 09 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8587ff7:	89 f0                	mov    %esi,%eax
 8587ff9:	89 da                	mov    %ebx,%edx
 8587ffb:	89 04 24             	mov    %eax,(%esp)
 8587ffe:	e8 4d b7 55 00       	call   8ae3750 <_Unwind_Resume>
 8588003:	89 d8                	mov    %ebx,%eax
 8588005:	83 c4 20             	add    $0x20,%esp
 8588008:	5b                   	pop    %ebx
 8588009:	5e                   	pop    %esi
 858800a:	5d                   	pop    %ebp
 858800b:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryTeam::_saveTeam @ 0x8587ee4

/* online_preliminary::COnlinePreliminaryTeam::_saveTeam() */

undefined4 __thiscall
online_preliminary::COnlinePreliminaryTeam::_saveTeam(COnlinePreliminaryTeam *this)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_ONLINE_PRELIMINARY_TEAM *local_10;
  
  if (this[0x3c] == (COnlinePreliminaryTeam)0x1) {
    pSVar1 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"OnlinePreliminaryTeam.cpp",0x38);
    CStreamGuard::CStreamGuard(local_18,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08587f4e to 08587fce has its CatchHandler @ 08587fe8 */
    CStreamGuard::operator<<(pCVar2,0x1e9);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar2,-1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
    local_10 = CStreamGuard::GetInBuffer<SIG_ONLINE_PRELIMINARY_TEAM>(pCVar2);
    *(undefined4 *)local_10 = *(undefined4 *)(this + 4);
    *(undefined4 *)(local_10 + 0x14) = *(undefined4 *)(this + 8);
    *(undefined4 *)(local_10 + 0x18) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(local_10 + 0x1c) = *(undefined4 *)(this + 0x10);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
    this[0x3c] = (COnlinePreliminaryTeam)0x0;
    CStreamGuard::~CStreamGuard(local_18);
  }
  return 1;
}

```

---

## _saveTeamMatchList

```asm
// === 0858800c online_preliminary::COnlinePreliminaryTeam::_saveTeamMatchList  [0x0858800c-0x85882b7] ===
 858800c:	55                   	push   %ebp
 858800d:	89 e5                	mov    %esp,%ebp
 858800f:	56                   	push   %esi
 8588010:	53                   	push   %ebx
 8588011:	83 ec 30             	sub    $0x30,%esp
 8588014:	8b 45 08             	mov    0x8(%ebp),%eax
 8588017:	0f b6 40 3d          	movzbl 0x3d(%eax),%eax
 858801b:	83 f0 01             	xor    $0x1,%eax
 858801e:	84 c0                	test   %al,%al
 8588020:	74 0a                	je     858802c <_ZN18online_preliminary22COnlinePreliminaryTeam18_saveTeamMatchListEv+0x20>
 8588022:	bb 01 00 00 00       	mov    $0x1,%ebx
 8588027:	e9 7f 02 00 00       	jmp    85882ab <_ZN18online_preliminary22COnlinePreliminaryTeam18_saveTeamMatchListEv+0x29f>
 858802c:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8588031:	c7 44 24 08 4e 00 00 	movl   $0x4e,0x8(%esp)
 8588038:	00 
 8588039:	c7 44 24 04 e0 b8 ca 	movl   $0x8cab8e0,0x4(%esp)
 8588040:	08 
 8588041:	89 04 24             	mov    %eax,(%esp)
 8588044:	e8 3d 7a d0 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8588049:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8588050:	00 
 8588051:	89 44 24 04          	mov    %eax,0x4(%esp)
 8588055:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8588058:	89 04 24             	mov    %eax,(%esp)
 858805b:	e8 c6 0b b4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8588060:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8588063:	89 04 24             	mov    %eax,(%esp)
 8588066:	e8 db 0b b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 858806b:	c7 44 24 04 ed 01 00 	movl   $0x1ed,0x4(%esp)
 8588072:	00 
 8588073:	89 04 24             	mov    %eax,(%esp)
 8588076:	e8 db 0b b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 858807b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 858807e:	89 04 24             	mov    %eax,(%esp)
 8588081:	e8 c0 0b b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8588086:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 858808d:	ff 
 858808e:	89 04 24             	mov    %eax,(%esp)
 8588091:	e8 c0 0b b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8588096:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8588099:	89 04 24             	mov    %eax,(%esp)
 858809c:	e8 ad 0b b4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 85880a1:	89 04 24             	mov    %eax,(%esp)
 85880a4:	e8 9f 10 00 00       	call   8589148 <_ZN12CStreamGuard11GetInBufferI38SIG_ONLINE_PRELIMINARY_TEAM_MATCH_LISTEEPT_v>
 85880a9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85880ac:	8b 45 08             	mov    0x8(%ebp),%eax
 85880af:	8b 50 04             	mov    0x4(%eax),%edx
 85880b2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85880b5:	89 10                	mov    %edx,(%eax)
 85880b7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85880ba:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 85880c1:	8b 45 08             	mov    0x8(%ebp),%eax
 85880c4:	8d 50 24             	lea    0x24(%eax),%edx
 85880c7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85880ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 85880ce:	89 04 24             	mov    %eax,(%esp)
 85880d1:	e8 88 10 00 00       	call   858915e <_ZNSt3mapIiN18online_preliminary15PlayCountInfoExESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 85880d6:	83 ec 04             	sub    $0x4,%esp
 85880d9:	e9 2b 01 00 00       	jmp    8588209 <_ZN18online_preliminary22COnlinePreliminaryTeam18_saveTeamMatchListEv+0x1fd>
 85880de:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85880e1:	89 04 24             	mov    %eax,(%esp)
 85880e4:	e8 f3 10 00 00       	call   85891dc <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN18online_preliminary15PlayCountInfoExEEEptEv>
 85880e9:	83 c0 04             	add    $0x4,%eax
 85880ec:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85880ef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85880f2:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 85880f6:	83 f0 01             	xor    $0x1,%eax
 85880f9:	84 c0                	test   %al,%al
 85880fb:	0f 85 fc 00 00 00    	jne    85881fd <_ZN18online_preliminary22COnlinePreliminaryTeam18_saveTeamMatchListEv+0x1f1>
 8588101:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8588104:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 8588108:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858810b:	8b 58 04             	mov    0x4(%eax),%ebx
 858810e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8588111:	89 04 24             	mov    %eax,(%esp)
 8588114:	e8 c3 10 00 00       	call   85891dc <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN18online_preliminary15PlayCountInfoExEEEptEv>
 8588119:	8b 10                	mov    (%eax),%edx
 858811b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858811e:	89 54 d8 08          	mov    %edx,0x8(%eax,%ebx,8)
 8588122:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8588125:	8b 50 04             	mov    0x4(%eax),%edx
 8588128:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858812b:	8b 08                	mov    (%eax),%ecx
 858812d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8588130:	89 4c d0 0c          	mov    %ecx,0xc(%eax,%edx,8)
 8588134:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8588137:	8b 40 04             	mov    0x4(%eax),%eax
 858813a:	8d 50 01             	lea    0x1(%eax),%edx
 858813d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8588140:	89 50 04             	mov    %edx,0x4(%eax)
 8588143:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8588146:	8b 40 04             	mov    0x4(%eax),%eax
 8588149:	83 f8 64             	cmp    $0x64,%eax
 858814c:	0f 85 ac 00 00 00    	jne    85881fe <_ZN18online_preliminary22COnlinePreliminaryTeam18_saveTeamMatchListEv+0x1f2>
 8588152:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8588157:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 858815a:	89 54 24 08          	mov    %edx,0x8(%esp)
 858815e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8588165:	00 
 8588166:	89 04 24             	mov    %eax,(%esp)
 8588169:	e8 70 8e fe ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 858816e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8588173:	c7 44 24 08 66 00 00 	movl   $0x66,0x8(%esp)
 858817a:	00 
 858817b:	c7 44 24 04 e0 b8 ca 	movl   $0x8cab8e0,0x4(%esp)
 8588182:	08 
 8588183:	89 04 24             	mov    %eax,(%esp)
 8588186:	e8 fb 78 d0 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 858818b:	89 44 24 04          	mov    %eax,0x4(%esp)
 858818f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8588192:	89 04 24             	mov    %eax,(%esp)
 8588195:	e8 aa 64 b5 ff       	call   80de644 <_ZN12CStreamGuard3SetEP6Stream>
 858819a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 858819d:	89 04 24             	mov    %eax,(%esp)
 85881a0:	e8 a1 0a b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85881a5:	c7 44 24 04 ed 01 00 	movl   $0x1ed,0x4(%esp)
 85881ac:	00 
 85881ad:	89 04 24             	mov    %eax,(%esp)
 85881b0:	e8 a1 0a b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85881b5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85881b8:	89 04 24             	mov    %eax,(%esp)
 85881bb:	e8 86 0a b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85881c0:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 85881c7:	ff 
 85881c8:	89 04 24             	mov    %eax,(%esp)
 85881cb:	e8 86 0a b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85881d0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85881d3:	89 04 24             	mov    %eax,(%esp)
 85881d6:	e8 73 0a b4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 85881db:	89 04 24             	mov    %eax,(%esp)
 85881de:	e8 65 0f 00 00       	call   8589148 <_ZN12CStreamGuard11GetInBufferI38SIG_ONLINE_PRELIMINARY_TEAM_MATCH_LISTEEPT_v>
 85881e3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85881e6:	8b 45 08             	mov    0x8(%ebp),%eax
 85881e9:	8b 50 04             	mov    0x4(%eax),%edx
 85881ec:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85881ef:	89 10                	mov    %edx,(%eax)
 85881f1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85881f4:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 85881fb:	eb 01                	jmp    85881fe <_ZN18online_preliminary22COnlinePreliminaryTeam18_saveTeamMatchListEv+0x1f2>
 85881fd:	90                   	nop
 85881fe:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8588201:	89 04 24             	mov    %eax,(%esp)
 8588204:	e8 b5 0f 00 00       	call   85891be <_ZNSt17_Rb_tree_iteratorISt4pairIKiN18online_preliminary15PlayCountInfoExEEEppEv>
 8588209:	8b 45 08             	mov    0x8(%ebp),%eax
 858820c:	8d 50 24             	lea    0x24(%eax),%edx
 858820f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8588212:	89 54 24 04          	mov    %edx,0x4(%esp)
 8588216:	89 04 24             	mov    %eax,(%esp)
 8588219:	e8 66 0f 00 00       	call   8589184 <_ZNSt3mapIiN18online_preliminary15PlayCountInfoExESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 858821e:	83 ec 04             	sub    $0x4,%esp
 8588221:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8588224:	89 44 24 04          	mov    %eax,0x4(%esp)
 8588228:	8d 45 e0             	lea    -0x20(%ebp),%eax
 858822b:	89 04 24             	mov    %eax,(%esp)
 858822e:	e8 77 0f 00 00       	call   85891aa <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN18online_preliminary15PlayCountInfoExEEEneERKS5_>
 8588233:	84 c0                	test   %al,%al
 8588235:	0f 85 a3 fe ff ff    	jne    85880de <_ZN18online_preliminary22COnlinePreliminaryTeam18_saveTeamMatchListEv+0xd2>
 858823b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858823e:	8b 40 04             	mov    0x4(%eax),%eax
 8588241:	85 c0                	test   %eax,%eax
 8588243:	74 1e                	je     8588263 <_ZN18online_preliminary22COnlinePreliminaryTeam18_saveTeamMatchListEv+0x257>
 8588245:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 858824a:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 858824d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8588251:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8588258:	00 
 8588259:	89 04 24             	mov    %eax,(%esp)
 858825c:	e8 7d 8d fe ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8588261:	eb 14                	jmp    8588277 <_ZN18online_preliminary22COnlinePreliminaryTeam18_saveTeamMatchListEv+0x26b>
 8588263:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8588268:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 858826b:	89 54 24 04          	mov    %edx,0x4(%esp)
 858826f:	89 04 24             	mov    %eax,(%esp)
 8588272:	e8 09 8e b7 ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 8588277:	8b 45 08             	mov    0x8(%ebp),%eax
 858827a:	c6 40 3d 00          	movb   $0x0,0x3d(%eax)
 858827e:	bb 01 00 00 00       	mov    $0x1,%ebx
 8588283:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8588286:	89 04 24             	mov    %eax,(%esp)
 8588289:	e8 44 46 09 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 858828e:	eb 1b                	jmp    85882ab <_ZN18online_preliminary22COnlinePreliminaryTeam18_saveTeamMatchListEv+0x29f>
 8588290:	89 d3                	mov    %edx,%ebx
 8588292:	89 c6                	mov    %eax,%esi
 8588294:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8588297:	89 04 24             	mov    %eax,(%esp)
 858829a:	e8 33 46 09 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 858829f:	89 f0                	mov    %esi,%eax
 85882a1:	89 da                	mov    %ebx,%edx
 85882a3:	89 04 24             	mov    %eax,(%esp)
 85882a6:	e8 a5 b4 55 00       	call   8ae3750 <_Unwind_Resume>
 85882ab:	89 d8                	mov    %ebx,%eax
 85882ad:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85882b0:	83 c4 00             	add    $0x0,%esp
 85882b3:	5b                   	pop    %ebx
 85882b4:	5e                   	pop    %esi
 85882b5:	5d                   	pop    %ebp
 85882b6:	c3                   	ret
 85882b7:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminaryTeam::_saveTeamMatchList @ 0x858800c

/* online_preliminary::COnlinePreliminaryTeam::_saveTeamMatchList() */

undefined4 __thiscall
online_preliminary::COnlinePreliminaryTeam::_saveTeamMatchList(COnlinePreliminaryTeam *this)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 *puVar5;
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  local_24 [4];
  CStreamGuard local_20 [8];
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  local_18 [4];
  SIG_ONLINE_PRELIMINARY_TEAM_MATCH_LIST *local_14;
  undefined4 *local_10;
  
  if (this[0x3d] == (COnlinePreliminaryTeam)0x1) {
    pSVar2 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"OnlinePreliminaryTeam.cpp",0x4e);
    CStreamGuard::CStreamGuard(local_20,pSVar2,false);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 08588076 to 08588276 has its CatchHandler @ 08588290 */
    CStreamGuard::operator<<(pCVar3,0x1ed);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
    CStreamGuard::operator<<(pCVar3,-1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_20);
    local_14 = CStreamGuard::GetInBuffer<SIG_ONLINE_PRELIMINARY_TEAM_MATCH_LIST>(pCVar3);
    *(undefined4 *)local_14 = *(undefined4 *)(this + 4);
    *(undefined4 *)(local_14 + 4) = 0;
    std::
    map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
    ::begin(local_24);
    while( true ) {
      std::
      map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
      ::end(local_18);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>::
              operator!=((_Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>
                          *)local_24,(_Rb_tree_iterator *)local_18);
      if (cVar1 == '\0') break;
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>::
              operator->((_Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>
                          *)local_24);
      local_10 = (undefined4 *)(iVar4 + 4);
      if (*(char *)(iVar4 + 8) == '\x01') {
        *(undefined1 *)(iVar4 + 8) = 0;
        iVar4 = *(int *)(local_14 + 4);
        puVar5 = (undefined4 *)
                 std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>::
                 operator->((_Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>
                             *)local_24);
        *(undefined4 *)(local_14 + iVar4 * 8 + 8) = *puVar5;
        *(undefined4 *)(local_14 + *(int *)(local_14 + 4) * 8 + 0xc) = *local_10;
        *(int *)(local_14 + 4) = *(int *)(local_14 + 4) + 1;
        if (*(int *)(local_14 + 4) == 100) {
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
          pSVar2 = (Stream *)
                   StreamPool::Acquire(GlobalData::s_stream_pool,"OnlinePreliminaryTeam.cpp",0x66);
          CStreamGuard::Set(local_20,pSVar2);
          pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
          CStreamGuard::operator<<(pCVar3,0x1ed);
          pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
          CStreamGuard::operator<<(pCVar3,-1);
          pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_20);
          local_14 = CStreamGuard::GetInBuffer<SIG_ONLINE_PRELIMINARY_TEAM_MATCH_LIST>(pCVar3);
          *(undefined4 *)local_14 = *(undefined4 *)(this + 4);
          *(undefined4 *)(local_14 + 4) = 0;
        }
      }
      std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>> *)
                 local_24);
    }
    if (*(int *)(local_14 + 4) == 0) {
      StreamPool::Free(GlobalData::s_stream_pool,local_20);
    }
    else {
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
    }
    this[0x3d] = (COnlinePreliminaryTeam)0x0;
    CStreamGuard::~CStreamGuard(local_20);
  }
  return 1;
}

```

---

## loadDataPreliminaryTeam

```asm
// === 085882b8 online_preliminary::COnlinePreliminaryTeam::loadDataPreliminaryTeam  [0x085882b8-0x8588319] ===
 85882b8:	55                   	push   %ebp
 85882b9:	89 e5                	mov    %esp,%ebp
 85882bb:	83 ec 28             	sub    $0x28,%esp
 85882be:	8b 45 0c             	mov    0xc(%ebp),%eax
 85882c1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85882c4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85882c7:	8b 10                	mov    (%eax),%edx
 85882c9:	8b 45 08             	mov    0x8(%ebp),%eax
 85882cc:	89 50 04             	mov    %edx,0x4(%eax)
 85882cf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85882d2:	8d 50 04             	lea    0x4(%eax),%edx
 85882d5:	8b 45 08             	mov    0x8(%ebp),%eax
 85882d8:	83 c0 14             	add    $0x14,%eax
 85882db:	c7 44 24 08 0f 00 00 	movl   $0xf,0x8(%esp)
 85882e2:	00 
 85882e3:	89 54 24 04          	mov    %edx,0x4(%esp)
 85882e7:	89 04 24             	mov    %eax,(%esp)
 85882ea:	e8 e1 55 af ff       	call   807d8d0 <strncpy@plt>
 85882ef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85882f2:	8b 50 14             	mov    0x14(%eax),%edx
 85882f5:	8b 45 08             	mov    0x8(%ebp),%eax
 85882f8:	89 50 08             	mov    %edx,0x8(%eax)
 85882fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85882fe:	8b 50 18             	mov    0x18(%eax),%edx
 8588301:	8b 45 08             	mov    0x8(%ebp),%eax
 8588304:	89 50 0c             	mov    %edx,0xc(%eax)
 8588307:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858830a:	8b 50 1c             	mov    0x1c(%eax),%edx
 858830d:	8b 45 08             	mov    0x8(%ebp),%eax
 8588310:	89 50 10             	mov    %edx,0x10(%eax)
 8588313:	b8 01 00 00 00       	mov    $0x1,%eax
 8588318:	c9                   	leave
 8588319:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryTeam::loadDataPreliminaryTeam @ 0x85882b8

/* online_preliminary::COnlinePreliminaryTeam::loadDataPreliminaryTeam(char*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminaryTeam::loadDataPreliminaryTeam
          (COnlinePreliminaryTeam *this,char *param_1)

{
  *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
  strncpy((char *)(this + 0x14),param_1 + 4,0xf);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x1c);
  return 1;
}

```

---

## loadDataPreliminaryTeamMatchList

```asm
// === 0858831a online_preliminary::COnlinePreliminaryTeam::loadDataPreliminaryTeamMatchList  [0x0858831a-0x8588373] ===
 858831a:	55                   	push   %ebp
 858831b:	89 e5                	mov    %esp,%ebp
 858831d:	83 ec 28             	sub    $0x28,%esp
 8588320:	8b 45 0c             	mov    0xc(%ebp),%eax
 8588323:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8588326:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 858832d:	eb 2e                	jmp    858835d <_ZN18online_preliminary22COnlinePreliminaryTeam32loadDataPreliminaryTeamMatchListEPc+0x43>
 858832f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8588332:	c1 e0 03             	shl    $0x3,%eax
 8588335:	03 45 f0             	add    -0x10(%ebp),%eax
 8588338:	8d 50 08             	lea    0x8(%eax),%edx
 858833b:	8b 45 08             	mov    0x8(%ebp),%eax
 858833e:	83 c0 24             	add    $0x24,%eax
 8588341:	89 54 24 04          	mov    %edx,0x4(%esp)
 8588345:	89 04 24             	mov    %eax,(%esp)
 8588348:	e8 9d 0e 00 00       	call   85891ea <_ZNSt3mapIiN18online_preliminary15PlayCountInfoExESt4lessIiESaISt4pairIKiS1_EEEixERS5_>
 858834d:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8588350:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8588353:	8b 54 ca 0c          	mov    0xc(%edx,%ecx,8),%edx
 8588357:	89 10                	mov    %edx,(%eax)
 8588359:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 858835d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8588360:	8b 40 04             	mov    0x4(%eax),%eax
 8588363:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8588366:	0f 9f c0             	setg   %al
 8588369:	84 c0                	test   %al,%al
 858836b:	75 c2                	jne    858832f <_ZN18online_preliminary22COnlinePreliminaryTeam32loadDataPreliminaryTeamMatchListEPc+0x15>
 858836d:	b8 01 00 00 00       	mov    $0x1,%eax
 8588372:	c9                   	leave
 8588373:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryTeam::loadDataPreliminaryTeamMatchList @ 0x858831a

/* online_preliminary::COnlinePreliminaryTeam::loadDataPreliminaryTeamMatchList(char*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminaryTeam::loadDataPreliminaryTeamMatchList
          (COnlinePreliminaryTeam *this,char *param_1)

{
  undefined4 *puVar1;
  int local_10;
  
  for (local_10 = 0; local_10 < *(int *)(param_1 + 4); local_10 = local_10 + 1) {
    puVar1 = (undefined4 *)
             std::
             map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
             ::operator[]((map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
                           *)(this + 0x24),(int *)(param_1 + local_10 * 8 + 8));
    *puVar1 = *(undefined4 *)(param_1 + local_10 * 8 + 0xc);
  }
  return 1;
}

```

---

## ~COnlinePreliminaryTeam

```asm
// === 08587ece online_preliminary::COnlinePreliminaryTeam::~COnlinePreliminaryTeam  [0x08587ece-0x8587ee3] ===
 8587ece:	55                   	push   %ebp
 8587ecf:	89 e5                	mov    %esp,%ebp
 8587ed1:	83 ec 18             	sub    $0x18,%esp
 8587ed4:	8b 45 08             	mov    0x8(%ebp),%eax
 8587ed7:	83 c0 24             	add    $0x24,%eax
 8587eda:	89 04 24             	mov    %eax,(%esp)
 8587edd:	e8 24 0f 00 00       	call   8588e06 <_ZNSt3mapIiN18online_preliminary15PlayCountInfoExESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 8587ee2:	c9                   	leave
 8587ee3:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryTeam::~COnlinePreliminaryTeam @ 0x8587ece

/* online_preliminary::COnlinePreliminaryTeam::~COnlinePreliminaryTeam() */

void __thiscall
online_preliminary::COnlinePreliminaryTeam::~COnlinePreliminaryTeam(COnlinePreliminaryTeam *this)

{
  std::
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  ::~map((map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
          *)(this + 0x24));
  return;
}

```

