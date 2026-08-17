# ARAD__AradWhiteAccount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## AradWhiteAccount

```asm
// === 081ab518 ARAD::AradWhiteAccount::AradWhiteAccount  [0x081ab518-0x81ab559] ===
 81ab518:	55                   	push   %ebp
 81ab519:	89 e5                	mov    %esp,%ebp
 81ab51b:	56                   	push   %esi
 81ab51c:	53                   	push   %ebx
 81ab51d:	83 ec 10             	sub    $0x10,%esp
 81ab520:	8b 45 08             	mov    0x8(%ebp),%eax
 81ab523:	89 04 24             	mov    %eax,(%esp)
 81ab526:	e8 b3 01 00 00       	call   81ab6de <_ZNSt3setIjSt4lessIjESaIjEEC1Ev>
 81ab52b:	8b 45 08             	mov    0x8(%ebp),%eax
 81ab52e:	89 04 24             	mov    %eax,(%esp)
 81ab531:	e8 c2 00 00 00       	call   81ab5f8 <_ZN4ARAD16AradWhiteAccount4LoadEv>
 81ab536:	eb 1b                	jmp    81ab553 <_ZN4ARAD16AradWhiteAccountC1Ev+0x3b>
 81ab538:	89 d3                	mov    %edx,%ebx
 81ab53a:	89 c6                	mov    %eax,%esi
 81ab53c:	8b 45 08             	mov    0x8(%ebp),%eax
 81ab53f:	89 04 24             	mov    %eax,(%esp)
 81ab542:	e8 83 01 00 00       	call   81ab6ca <_ZNSt3setIjSt4lessIjESaIjEED1Ev>
 81ab547:	89 f0                	mov    %esi,%eax
 81ab549:	89 da                	mov    %ebx,%edx
 81ab54b:	89 04 24             	mov    %eax,(%esp)
 81ab54e:	e8 fd 81 93 00       	call   8ae3750 <_Unwind_Resume>
 81ab553:	83 c4 10             	add    $0x10,%esp
 81ab556:	5b                   	pop    %ebx
 81ab557:	5e                   	pop    %esi
 81ab558:	5d                   	pop    %ebp
 81ab559:	c3                   	ret

```

```c
// ARAD::AradWhiteAccount::AradWhiteAccount @ 0x81ab518

/* ARAD::AradWhiteAccount::AradWhiteAccount() */

void __thiscall ARAD::AradWhiteAccount::AradWhiteAccount(AradWhiteAccount *this)

{
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::set
            ((set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> *)this);
                    /* try { // try from 081ab531 to 081ab535 has its CatchHandler @ 081ab538 */
  Load();
  return;
}

```

---

## IsWhiteAccount

```asm
// === 081ab59c ARAD::AradWhiteAccount::IsWhiteAccount  [0x081ab59c-0x81ab5f7] ===
 81ab59c:	55                   	push   %ebp
 81ab59d:	89 e5                	mov    %esp,%ebp
 81ab59f:	83 ec 28             	sub    $0x28,%esp
 81ab5a2:	8b 55 08             	mov    0x8(%ebp),%edx
 81ab5a5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81ab5a8:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 81ab5ab:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81ab5af:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ab5b3:	89 04 24             	mov    %eax,(%esp)
 81ab5b6:	e8 77 5d f6 ff       	call   8111332 <_ZNSt3setIjSt4lessIjESaIjEE4findERKj>
 81ab5bb:	83 ec 04             	sub    $0x4,%esp
 81ab5be:	8b 55 08             	mov    0x8(%ebp),%edx
 81ab5c1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81ab5c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ab5c8:	89 04 24             	mov    %eax,(%esp)
 81ab5cb:	e8 a8 5c f6 ff       	call   8111278 <_ZNKSt3setIjSt4lessIjESaIjEE3endEv>
 81ab5d0:	83 ec 04             	sub    $0x4,%esp
 81ab5d3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81ab5d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ab5da:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81ab5dd:	89 04 24             	mov    %eax,(%esp)
 81ab5e0:	e8 87 01 00 00       	call   81ab76c <_ZNKSt23_Rb_tree_const_iteratorIjEeqERKS0_>
 81ab5e5:	84 c0                	test   %al,%al
 81ab5e7:	74 07                	je     81ab5f0 <_ZN4ARAD16AradWhiteAccount14IsWhiteAccountEj+0x54>
 81ab5e9:	b8 00 00 00 00       	mov    $0x0,%eax
 81ab5ee:	eb 05                	jmp    81ab5f5 <_ZN4ARAD16AradWhiteAccount14IsWhiteAccountEj+0x59>
 81ab5f0:	b8 01 00 00 00       	mov    $0x1,%eax
 81ab5f5:	c9                   	leave
 81ab5f6:	c3                   	ret
 81ab5f7:	90                   	nop

```

```c
// ARAD::AradWhiteAccount::IsWhiteAccount @ 0x81ab59c

/* ARAD::AradWhiteAccount::IsWhiteAccount(unsigned int) */

bool ARAD::AradWhiteAccount::IsWhiteAccount(uint param_1)

{
  char cVar1;
  _Rb_tree_const_iterator<unsigned_int> local_14 [4];
  set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> local_10 [12];
  
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::find
            ((uint *)local_14);
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<unsigned_int>::operator==
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  return cVar1 == '\0';
}

```

---

## Load

```asm
// === 081ab5f8 ARAD::AradWhiteAccount::Load  [0x081ab5f8-0x81ab66d] ===
 81ab5f8:	55                   	push   %ebp
 81ab5f9:	89 e5                	mov    %esp,%ebp
 81ab5fb:	83 ec 48             	sub    $0x48,%esp
 81ab5fe:	c7 45 dc 70 fa 27 00 	movl   $0x27fa70,-0x24(%ebp)
 81ab605:	8b 55 08             	mov    0x8(%ebp),%edx
 81ab608:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81ab60b:	8d 4d dc             	lea    -0x24(%ebp),%ecx
 81ab60e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81ab612:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ab616:	89 04 24             	mov    %eax,(%esp)
 81ab619:	e8 62 01 00 00       	call   81ab780 <_ZNSt3setIjSt4lessIjESaIjEE6insertERKj>
 81ab61e:	83 ec 04             	sub    $0x4,%esp
 81ab621:	c7 45 e8 74 fa 27 00 	movl   $0x27fa74,-0x18(%ebp)
 81ab628:	8b 55 08             	mov    0x8(%ebp),%edx
 81ab62b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ab62e:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 81ab631:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81ab635:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ab639:	89 04 24             	mov    %eax,(%esp)
 81ab63c:	e8 3f 01 00 00       	call   81ab780 <_ZNSt3setIjSt4lessIjESaIjEE6insertERKj>
 81ab641:	83 ec 04             	sub    $0x4,%esp
 81ab644:	c7 45 f4 63 fa 27 00 	movl   $0x27fa63,-0xc(%ebp)
 81ab64b:	8b 55 08             	mov    0x8(%ebp),%edx
 81ab64e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ab651:	8d 4d f4             	lea    -0xc(%ebp),%ecx
 81ab654:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81ab658:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ab65c:	89 04 24             	mov    %eax,(%esp)
 81ab65f:	e8 1c 01 00 00       	call   81ab780 <_ZNSt3setIjSt4lessIjESaIjEE6insertERKj>
 81ab664:	83 ec 04             	sub    $0x4,%esp
 81ab667:	b8 01 00 00 00       	mov    $0x1,%eax
 81ab66c:	c9                   	leave
 81ab66d:	c3                   	ret

```

```c
// ARAD::AradWhiteAccount::Load @ 0x81ab5f8

/* ARAD::AradWhiteAccount::Load() */

undefined4 ARAD::AradWhiteAccount::Load(void)

{
  uint local_30 [2];
  undefined4 local_28;
  uint local_24 [2];
  undefined4 local_1c;
  uint local_18 [2];
  undefined4 local_10;
  
  local_28 = 0x27fa70;
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::insert(local_30);
  local_1c = 0x27fa74;
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::insert(local_24);
  local_10 = 0x27fa63;
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::insert(local_18);
  return 1;
}

```

---

## ~AradWhiteAccount

```asm
// === 081ab55a ARAD::AradWhiteAccount::~AradWhiteAccount  [0x081ab55a-0x81ab59b] ===
 81ab55a:	55                   	push   %ebp
 81ab55b:	89 e5                	mov    %esp,%ebp
 81ab55d:	56                   	push   %esi
 81ab55e:	53                   	push   %ebx
 81ab55f:	83 ec 10             	sub    $0x10,%esp
 81ab562:	8b 45 08             	mov    0x8(%ebp),%eax
 81ab565:	89 04 24             	mov    %eax,(%esp)
 81ab568:	e8 eb 01 00 00       	call   81ab758 <_ZNSt3setIjSt4lessIjESaIjEE5clearEv>
 81ab56d:	eb 1b                	jmp    81ab58a <_ZN4ARAD16AradWhiteAccountD1Ev+0x30>
 81ab56f:	89 d3                	mov    %edx,%ebx
 81ab571:	89 c6                	mov    %eax,%esi
 81ab573:	8b 45 08             	mov    0x8(%ebp),%eax
 81ab576:	89 04 24             	mov    %eax,(%esp)
 81ab579:	e8 4c 01 00 00       	call   81ab6ca <_ZNSt3setIjSt4lessIjESaIjEED1Ev>
 81ab57e:	89 f0                	mov    %esi,%eax
 81ab580:	89 da                	mov    %ebx,%edx
 81ab582:	89 04 24             	mov    %eax,(%esp)
 81ab585:	e8 c6 81 93 00       	call   8ae3750 <_Unwind_Resume>
 81ab58a:	8b 45 08             	mov    0x8(%ebp),%eax
 81ab58d:	89 04 24             	mov    %eax,(%esp)
 81ab590:	e8 35 01 00 00       	call   81ab6ca <_ZNSt3setIjSt4lessIjESaIjEED1Ev>
 81ab595:	83 c4 10             	add    $0x10,%esp
 81ab598:	5b                   	pop    %ebx
 81ab599:	5e                   	pop    %esi
 81ab59a:	5d                   	pop    %ebp
 81ab59b:	c3                   	ret

```

```c
// ARAD::AradWhiteAccount::~AradWhiteAccount @ 0x81ab55a

/* ARAD::AradWhiteAccount::~AradWhiteAccount() */

void __thiscall ARAD::AradWhiteAccount::~AradWhiteAccount(AradWhiteAccount *this)

{
                    /* try { // try from 081ab568 to 081ab56c has its CatchHandler @ 081ab56f */
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::clear
            ((set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> *)this);
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::~set
            ((set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> *)this);
  return;
}

```

