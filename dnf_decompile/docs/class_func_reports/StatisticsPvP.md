# StatisticsPvP

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## StatisticsPvP

```asm
// === 0860c4f6 StatisticsPvP::StatisticsPvP  [0x0860c4f6-0x860c53b] ===
 860c4f6:	55                   	push   %ebp
 860c4f7:	89 e5                	mov    %esp,%ebp
 860c4f9:	56                   	push   %esi
 860c4fa:	53                   	push   %ebx
 860c4fb:	83 ec 10             	sub    $0x10,%esp
 860c4fe:	8b 45 08             	mov    0x8(%ebp),%eax
 860c501:	89 04 24             	mov    %eax,(%esp)
 860c504:	e8 09 ef ab ff       	call   80cb412 <_ZN5MutexC1Ev>
 860c509:	8b 45 08             	mov    0x8(%ebp),%eax
 860c50c:	83 c0 18             	add    $0x18,%eax
 860c50f:	89 04 24             	mov    %eax,(%esp)
 860c512:	e8 4f 47 00 00       	call   8610c66 <_ZNSt3mapIN13StatisticsPvP7PvP_KeyENS0_8PvP_RoomESt4lessIS1_ESaISt4pairIKS1_S2_EEEC1Ev>
 860c517:	eb 1b                	jmp    860c534 <_ZN13StatisticsPvPC1Ev+0x3e>
 860c519:	89 d3                	mov    %edx,%ebx
 860c51b:	89 c6                	mov    %eax,%esi
 860c51d:	8b 45 08             	mov    0x8(%ebp),%eax
 860c520:	89 04 24             	mov    %eax,(%esp)
 860c523:	e8 06 ef ab ff       	call   80cb42e <_ZN5MutexD1Ev>
 860c528:	89 f0                	mov    %esi,%eax
 860c52a:	89 da                	mov    %ebx,%edx
 860c52c:	89 04 24             	mov    %eax,(%esp)
 860c52f:	e8 1c 72 4d 00       	call   8ae3750 <_Unwind_Resume>
 860c534:	83 c4 10             	add    $0x10,%esp
 860c537:	5b                   	pop    %ebx
 860c538:	5e                   	pop    %esi
 860c539:	5d                   	pop    %ebp
 860c53a:	c3                   	ret
 860c53b:	90                   	nop

```

```c
// StatisticsPvP::StatisticsPvP @ 0x860c4f6

/* StatisticsPvP::StatisticsPvP() */

void __thiscall StatisticsPvP::StatisticsPvP(StatisticsPvP *this)

{
  Mutex::Mutex((Mutex *)this);
                    /* try { // try from 0860c512 to 0860c516 has its CatchHandler @ 0860c519 */
  std::
  map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
  ::map((map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
         *)(this + 0x18));
  return;
}

```

---

## incPvPRoomResult

```asm
// === 0860c5da StatisticsPvP::incPvPRoomResult  [0x0860c5da-0x860c703] ===
 860c5da:	55                   	push   %ebp
 860c5db:	89 e5                	mov    %esp,%ebp
 860c5dd:	56                   	push   %esi
 860c5de:	53                   	push   %ebx
 860c5df:	83 ec 60             	sub    $0x60,%esp
 860c5e2:	8b 45 08             	mov    0x8(%ebp),%eax
 860c5e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 860c5e9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860c5ec:	89 04 24             	mov    %eax,(%esp)
 860c5ef:	e8 58 8e af ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 860c5f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 860c5f7:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 860c5fa:	8b 45 10             	mov    0x10(%ebp),%eax
 860c5fd:	89 45 c8             	mov    %eax,-0x38(%ebp)
 860c600:	8b 45 08             	mov    0x8(%ebp),%eax
 860c603:	8d 48 18             	lea    0x18(%eax),%ecx
 860c606:	8d 45 c0             	lea    -0x40(%ebp),%eax
 860c609:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 860c60c:	89 54 24 08          	mov    %edx,0x8(%esp)
 860c610:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 860c614:	89 04 24             	mov    %eax,(%esp)
 860c617:	e8 d8 46 00 00       	call   8610cf4 <_ZNSt3mapIN13StatisticsPvP7PvP_KeyENS0_8PvP_RoomESt4lessIS1_ESaISt4pairIKS1_S2_EEE4findERS6_>
 860c61c:	83 ec 04             	sub    $0x4,%esp
 860c61f:	8b 45 08             	mov    0x8(%ebp),%eax
 860c622:	8d 50 18             	lea    0x18(%eax),%edx
 860c625:	8d 45 d0             	lea    -0x30(%ebp),%eax
 860c628:	89 54 24 04          	mov    %edx,0x4(%esp)
 860c62c:	89 04 24             	mov    %eax,(%esp)
 860c62f:	e8 06 4c e4 ff       	call   845123a <_ZNSt3mapIN13StatisticsPvP7PvP_KeyENS0_8PvP_RoomESt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 860c634:	83 ec 04             	sub    $0x4,%esp
 860c637:	8d 45 d0             	lea    -0x30(%ebp),%eax
 860c63a:	89 44 24 04          	mov    %eax,0x4(%esp)
 860c63e:	8d 45 c0             	lea    -0x40(%ebp),%eax
 860c641:	89 04 24             	mov    %eax,(%esp)
 860c644:	e8 d7 46 00 00       	call   8610d20 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN13StatisticsPvP7PvP_KeyENS1_8PvP_RoomEEEeqERKS6_>
 860c649:	84 c0                	test   %al,%al
 860c64b:	74 53                	je     860c6a0 <_ZN13StatisticsPvP16incPvPRoomResultEiii+0xc6>
 860c64d:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 860c650:	8b 55 c8             	mov    -0x38(%ebp),%edx
 860c653:	89 45 b0             	mov    %eax,-0x50(%ebp)
 860c656:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 860c659:	c7 45 b8 01 00 00 00 	movl   $0x1,-0x48(%ebp)
 860c660:	8b 45 14             	mov    0x14(%ebp),%eax
 860c663:	89 45 bc             	mov    %eax,-0x44(%ebp)
 860c666:	8d 45 b0             	lea    -0x50(%ebp),%eax
 860c669:	89 44 24 08          	mov    %eax,0x8(%esp)
 860c66d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 860c670:	89 44 24 04          	mov    %eax,0x4(%esp)
 860c674:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860c677:	89 04 24             	mov    %eax,(%esp)
 860c67a:	e8 b5 46 00 00       	call   8610d34 <_ZNSt4pairIKN13StatisticsPvP7PvP_KeyENS0_8PvP_RoomEEC1IRS1_RS3_EEOT_OT0_>
 860c67f:	8b 45 08             	mov    0x8(%ebp),%eax
 860c682:	8d 48 18             	lea    0x18(%eax),%ecx
 860c685:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 860c688:	8d 55 dc             	lea    -0x24(%ebp),%edx
 860c68b:	89 54 24 08          	mov    %edx,0x8(%esp)
 860c68f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 860c693:	89 04 24             	mov    %eax,(%esp)
 860c696:	e8 e3 46 00 00       	call   8610d7e <_ZNSt3mapIN13StatisticsPvP7PvP_KeyENS0_8PvP_RoomESt4lessIS1_ESaISt4pairIKS1_S2_EEE6insertERKS7_>
 860c69b:	83 ec 04             	sub    $0x4,%esp
 860c69e:	eb 4e                	jmp    860c6ee <_ZN13StatisticsPvP16incPvPRoomResultEiii+0x114>
 860c6a0:	8d 45 c0             	lea    -0x40(%ebp),%eax
 860c6a3:	89 04 24             	mov    %eax,(%esp)
 860c6a6:	e8 e7 4b e4 ff       	call   8451292 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN13StatisticsPvP7PvP_KeyENS1_8PvP_RoomEEEdeEv>
 860c6ab:	83 c0 08             	add    $0x8,%eax
 860c6ae:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860c6b1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860c6b4:	8b 40 08             	mov    0x8(%eax),%eax
 860c6b7:	8d 50 01             	lea    0x1(%eax),%edx
 860c6ba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860c6bd:	89 50 08             	mov    %edx,0x8(%eax)
 860c6c0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860c6c3:	8b 40 0c             	mov    0xc(%eax),%eax
 860c6c6:	89 c2                	mov    %eax,%edx
 860c6c8:	03 55 14             	add    0x14(%ebp),%edx
 860c6cb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860c6ce:	89 50 0c             	mov    %edx,0xc(%eax)
 860c6d1:	eb 1b                	jmp    860c6ee <_ZN13StatisticsPvP16incPvPRoomResultEiii+0x114>
 860c6d3:	89 d3                	mov    %edx,%ebx
 860c6d5:	89 c6                	mov    %eax,%esi
 860c6d7:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860c6da:	89 04 24             	mov    %eax,(%esp)
 860c6dd:	e8 86 8d af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860c6e2:	89 f0                	mov    %esi,%eax
 860c6e4:	89 da                	mov    %ebx,%edx
 860c6e6:	89 04 24             	mov    %eax,(%esp)
 860c6e9:	e8 62 70 4d 00       	call   8ae3750 <_Unwind_Resume>
 860c6ee:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860c6f1:	89 04 24             	mov    %eax,(%esp)
 860c6f4:	e8 6f 8d af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860c6f9:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860c6fc:	83 c4 00             	add    $0x0,%esp
 860c6ff:	5b                   	pop    %ebx
 860c700:	5e                   	pop    %esi
 860c701:	5d                   	pop    %ebp
 860c702:	c3                   	ret
 860c703:	90                   	nop

```

```c
// StatisticsPvP::incPvPRoomResult @ 0x860c5da

/* StatisticsPvP::incPvPRoomResult(int, int, int) */

void __thiscall
StatisticsPvP::incPvPRoomResult(StatisticsPvP *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  PvP_Key local_44 [4];
  int local_40;
  int local_3c;
  Guard<Mutex> local_38 [4];
  map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
  local_34 [4];
  pair local_30 [8];
  pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room> local_28 [24];
  int local_10;
  
  Guard<Mutex>::Guard(local_38,(Mutex *)this);
  local_40 = param_1;
  local_3c = param_2;
                    /* try { // try from 0860c617 to 0860c69a has its CatchHandler @ 0860c6d3 */
  std::
  map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
  ::find(local_44);
  std::
  map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
  ::end(local_34);
  cVar1 = std::_Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>::
          operator==((_Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>
                      *)local_44,(_Rb_tree_iterator *)local_34);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>
            ::operator*((_Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>
                         *)local_44);
    local_10 = iVar2 + 8;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + param_3;
  }
  else {
    local_54 = local_40;
    local_50 = local_3c;
    local_4c = 1;
    local_48 = param_3;
    std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>::
    pair<StatisticsPvP::PvP_Key&,StatisticsPvP::PvP_Room&>
              (local_28,(PvP_Key *)&local_40,(PvP_Room *)&local_54);
    std::
    map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
    ::insert(local_30);
  }
  Guard<Mutex>::~Guard(local_38);
  return;
}

```

---

## reset

```asm
// === 0860c582 StatisticsPvP::reset  [0x0860c582-0x860c5d9] ===
 860c582:	55                   	push   %ebp
 860c583:	89 e5                	mov    %esp,%ebp
 860c585:	56                   	push   %esi
 860c586:	53                   	push   %ebx
 860c587:	83 ec 20             	sub    $0x20,%esp
 860c58a:	8b 45 08             	mov    0x8(%ebp),%eax
 860c58d:	89 44 24 04          	mov    %eax,0x4(%esp)
 860c591:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860c594:	89 04 24             	mov    %eax,(%esp)
 860c597:	e8 b0 8e af ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 860c59c:	8b 45 08             	mov    0x8(%ebp),%eax
 860c59f:	83 c0 18             	add    $0x18,%eax
 860c5a2:	89 04 24             	mov    %eax,(%esp)
 860c5a5:	e8 36 47 00 00       	call   8610ce0 <_ZNSt3mapIN13StatisticsPvP7PvP_KeyENS0_8PvP_RoomESt4lessIS1_ESaISt4pairIKS1_S2_EEE5clearEv>
 860c5aa:	eb 1b                	jmp    860c5c7 <_ZN13StatisticsPvP5resetEv+0x45>
 860c5ac:	89 d3                	mov    %edx,%ebx
 860c5ae:	89 c6                	mov    %eax,%esi
 860c5b0:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860c5b3:	89 04 24             	mov    %eax,(%esp)
 860c5b6:	e8 ad 8e af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860c5bb:	89 f0                	mov    %esi,%eax
 860c5bd:	89 da                	mov    %ebx,%edx
 860c5bf:	89 04 24             	mov    %eax,(%esp)
 860c5c2:	e8 89 71 4d 00       	call   8ae3750 <_Unwind_Resume>
 860c5c7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860c5ca:	89 04 24             	mov    %eax,(%esp)
 860c5cd:	e8 96 8e af ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 860c5d2:	83 c4 20             	add    $0x20,%esp
 860c5d5:	5b                   	pop    %ebx
 860c5d6:	5e                   	pop    %esi
 860c5d7:	5d                   	pop    %ebp
 860c5d8:	c3                   	ret
 860c5d9:	90                   	nop

```

```c
// StatisticsPvP::reset @ 0x860c582

/* StatisticsPvP::reset() */

void __thiscall StatisticsPvP::reset(StatisticsPvP *this)

{
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)this);
                    /* try { // try from 0860c5a5 to 0860c5a9 has its CatchHandler @ 0860c5ac */
  std::
  map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
  ::clear((map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
           *)(this + 0x18));
  Guard<Mutex>::~Guard(local_10);
  return;
}

```

---

## ~StatisticsPvP

```asm
// === 0860c53c StatisticsPvP::~StatisticsPvP  [0x0860c53c-0x860c581] ===
 860c53c:	55                   	push   %ebp
 860c53d:	89 e5                	mov    %esp,%ebp
 860c53f:	56                   	push   %esi
 860c540:	53                   	push   %ebx
 860c541:	83 ec 10             	sub    $0x10,%esp
 860c544:	8b 45 08             	mov    0x8(%ebp),%eax
 860c547:	83 c0 18             	add    $0x18,%eax
 860c54a:	89 04 24             	mov    %eax,(%esp)
 860c54d:	e8 72 42 00 00       	call   86107c4 <_ZNSt3mapIN13StatisticsPvP7PvP_KeyENS0_8PvP_RoomESt4lessIS1_ESaISt4pairIKS1_S2_EEED1Ev>
 860c552:	eb 1b                	jmp    860c56f <_ZN13StatisticsPvPD1Ev+0x33>
 860c554:	89 d3                	mov    %edx,%ebx
 860c556:	89 c6                	mov    %eax,%esi
 860c558:	8b 45 08             	mov    0x8(%ebp),%eax
 860c55b:	89 04 24             	mov    %eax,(%esp)
 860c55e:	e8 cb ee ab ff       	call   80cb42e <_ZN5MutexD1Ev>
 860c563:	89 f0                	mov    %esi,%eax
 860c565:	89 da                	mov    %ebx,%edx
 860c567:	89 04 24             	mov    %eax,(%esp)
 860c56a:	e8 e1 71 4d 00       	call   8ae3750 <_Unwind_Resume>
 860c56f:	8b 45 08             	mov    0x8(%ebp),%eax
 860c572:	89 04 24             	mov    %eax,(%esp)
 860c575:	e8 b4 ee ab ff       	call   80cb42e <_ZN5MutexD1Ev>
 860c57a:	83 c4 10             	add    $0x10,%esp
 860c57d:	5b                   	pop    %ebx
 860c57e:	5e                   	pop    %esi
 860c57f:	5d                   	pop    %ebp
 860c580:	c3                   	ret
 860c581:	90                   	nop

```

```c
// StatisticsPvP::~StatisticsPvP @ 0x860c53c

/* StatisticsPvP::~StatisticsPvP() */

void __thiscall StatisticsPvP::~StatisticsPvP(StatisticsPvP *this)

{
                    /* try { // try from 0860c54d to 0860c551 has its CatchHandler @ 0860c554 */
  std::
  map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
  ::~map((map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
          *)(this + 0x18));
  Mutex::~Mutex((Mutex *)this);
  return;
}

```

