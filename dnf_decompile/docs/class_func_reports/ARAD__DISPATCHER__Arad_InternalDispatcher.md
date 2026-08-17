# ARAD__DISPATCHER__Arad_InternalDispatcher

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## Arad_InternalDispatcher

```asm
// === 081984d4 ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher  [0x081984d4-0x8198515] ===
 81984d4:	55                   	push   %ebp
 81984d5:	89 e5                	mov    %esp,%ebp
 81984d7:	56                   	push   %esi
 81984d8:	53                   	push   %ebx
 81984d9:	83 ec 10             	sub    $0x10,%esp
 81984dc:	8b 45 08             	mov    0x8(%ebp),%eax
 81984df:	89 04 24             	mov    %eax,(%esp)
 81984e2:	e8 59 24 00 00       	call   819a940 <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER21Arad_IInterDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEEC1Ev>
 81984e7:	8b 45 08             	mov    0x8(%ebp),%eax
 81984ea:	89 04 24             	mov    %eax,(%esp)
 81984ed:	e8 c8 24 00 00       	call   819a9ba <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER21Arad_IInterDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEE5clearEv>
 81984f2:	eb 1b                	jmp    819850f <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC1Ev+0x3b>
 81984f4:	89 d3                	mov    %edx,%ebx
 81984f6:	89 c6                	mov    %eax,%esi
 81984f8:	8b 45 08             	mov    0x8(%ebp),%eax
 81984fb:	89 04 24             	mov    %eax,(%esp)
 81984fe:	e8 29 24 00 00       	call   819a92c <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER21Arad_IInterDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEED1Ev>
 8198503:	89 f0                	mov    %esi,%eax
 8198505:	89 da                	mov    %ebx,%edx
 8198507:	89 04 24             	mov    %eax,(%esp)
 819850a:	e8 41 b2 94 00       	call   8ae3750 <_Unwind_Resume>
 819850f:	83 c4 10             	add    $0x10,%esp
 8198512:	5b                   	pop    %ebx
 8198513:	5e                   	pop    %esi
 8198514:	5d                   	pop    %ebp
 8198515:	c3                   	ret

```

```c
// ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher @ 0x81984d4

/* ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher() */

void __thiscall
ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher(Arad_InternalDispatcher *this)

{
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
  ::map((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
         *)this);
                    /* try { // try from 081984ed to 081984f1 has its CatchHandler @ 081984f4 */
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
  ::clear((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
           *)this);
  return;
}

```

---

## GetDispatcher

```asm
// === 0819899e ARAD::DISPATCHER::Arad_InternalDispatcher::GetDispatcher  [0x0819899e-0x8198a01] ===
 819899e:	55                   	push   %ebp
 819899f:	89 e5                	mov    %esp,%ebp
 81989a1:	83 ec 28             	sub    $0x28,%esp
 81989a4:	8b 55 08             	mov    0x8(%ebp),%edx
 81989a7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81989aa:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 81989ad:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81989b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81989b5:	89 04 24             	mov    %eax,(%esp)
 81989b8:	e8 ad 20 00 00       	call   819aa6a <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER21Arad_IInterDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEE4findERS8_>
 81989bd:	83 ec 04             	sub    $0x4,%esp
 81989c0:	8b 55 08             	mov    0x8(%ebp),%edx
 81989c3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81989c6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81989ca:	89 04 24             	mov    %eax,(%esp)
 81989cd:	e8 22 20 00 00       	call   819a9f4 <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER21Arad_IInterDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEE3endEv>
 81989d2:	83 ec 04             	sub    $0x4,%esp
 81989d5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81989d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81989dc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81989df:	89 04 24             	mov    %eax,(%esp)
 81989e2:	e8 af 20 00 00       	call   819aa96 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN4ARAD23ENUM_INTERNALPACKET_JPNEPNS1_10DISPATCHER21Arad_IInterDispatcherEEEneERKS8_>
 81989e7:	84 c0                	test   %al,%al
 81989e9:	74 10                	je     81989fb <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher13GetDispatcherENS_23ENUM_INTERNALPACKET_JPNE+0x5d>
 81989eb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81989ee:	89 04 24             	mov    %eax,(%esp)
 81989f1:	e8 b4 20 00 00       	call   819aaaa <_ZNKSt17_Rb_tree_iteratorISt4pairIKN4ARAD23ENUM_INTERNALPACKET_JPNEPNS1_10DISPATCHER21Arad_IInterDispatcherEEEptEv>
 81989f6:	8b 40 04             	mov    0x4(%eax),%eax
 81989f9:	eb 05                	jmp    8198a00 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher13GetDispatcherENS_23ENUM_INTERNALPACKET_JPNE+0x62>
 81989fb:	b8 00 00 00 00       	mov    $0x0,%eax
 8198a00:	c9                   	leave
 8198a01:	c3                   	ret

```

```c
// ARAD::DISPATCHER::Arad_InternalDispatcher::GetDispatcher @ 0x819899e

/* ARAD::DISPATCHER::Arad_InternalDispatcher::GetDispatcher(ARAD::ENUM_INTERNALPACKET_JPN) */

undefined4 ARAD::DISPATCHER::Arad_InternalDispatcher::GetDispatcher(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>
  local_14 [4];
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
  local_10 [12];
  
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
  ::find(local_14);
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>
          ::operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>
            ::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## Init

```asm
// === 08198598 ARAD::DISPATCHER::Arad_InternalDispatcher::Init  [0x08198598-0x819899d] ===
 8198598:	55                   	push   %ebp
 8198599:	89 e5                	mov    %esp,%ebp
 819859b:	53                   	push   %ebx
 819859c:	83 ec 24             	sub    $0x24,%esp
 819859f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81985a6:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 81985ad:	e8 9e be 58 00       	call   8724450 <_Znwj>
 81985b2:	89 c3                	mov    %eax,%ebx
 81985b4:	89 d8                	mov    %ebx,%eax
 81985b6:	89 04 24             	mov    %eax,(%esp)
 81985b9:	e8 b0 1e 00 00       	call   819a46e <_ZN4ARAD10DISPATCHER31Arad_INTER_kLoadRewardEventItemC1Ev>
 81985be:	89 d8                	mov    %ebx,%eax
 81985c0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81985c3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81985c7:	74 2f                	je     81985f8 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x60>
 81985c9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81985cc:	89 04 24             	mov    %eax,(%esp)
 81985cf:	e8 f2 1d 00 00       	call   819a3c6 <_ZNK4ARAD10DISPATCHER21Arad_IInterDispatcher8get_codeEv>
 81985d4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81985d7:	89 54 24 08          	mov    %edx,0x8(%esp)
 81985db:	89 44 24 04          	mov    %eax,0x4(%esp)
 81985df:	8b 45 08             	mov    0x8(%ebp),%eax
 81985e2:	89 04 24             	mov    %eax,(%esp)
 81985e5:	e8 18 04 00 00       	call   8198a02 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE>
 81985ea:	83 f0 01             	xor    $0x1,%eax
 81985ed:	84 c0                	test   %al,%al
 81985ef:	74 07                	je     81985f8 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x60>
 81985f1:	b8 01 00 00 00       	mov    $0x1,%eax
 81985f6:	eb 05                	jmp    81985fd <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x65>
 81985f8:	b8 00 00 00 00       	mov    $0x0,%eax
 81985fd:	84 c0                	test   %al,%al
 81985ff:	74 0a                	je     819860b <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x73>
 8198601:	b8 00 00 00 00       	mov    $0x0,%eax
 8198606:	e9 8c 03 00 00       	jmp    8198997 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x3ff>
 819860b:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8198612:	e8 39 be 58 00       	call   8724450 <_Znwj>
 8198617:	89 c3                	mov    %eax,%ebx
 8198619:	89 d8                	mov    %ebx,%eax
 819861b:	89 04 24             	mov    %eax,(%esp)
 819861e:	e8 bd 1e 00 00       	call   819a4e0 <_ZN4ARAD10DISPATCHER27Arad_INTER_kSaveServerStateC1Ev>
 8198623:	89 d8                	mov    %ebx,%eax
 8198625:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8198628:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 819862c:	74 2f                	je     819865d <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0xc5>
 819862e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8198631:	89 04 24             	mov    %eax,(%esp)
 8198634:	e8 8d 1d 00 00       	call   819a3c6 <_ZNK4ARAD10DISPATCHER21Arad_IInterDispatcher8get_codeEv>
 8198639:	8b 55 f4             	mov    -0xc(%ebp),%edx
 819863c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8198640:	89 44 24 04          	mov    %eax,0x4(%esp)
 8198644:	8b 45 08             	mov    0x8(%ebp),%eax
 8198647:	89 04 24             	mov    %eax,(%esp)
 819864a:	e8 b3 03 00 00       	call   8198a02 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE>
 819864f:	83 f0 01             	xor    $0x1,%eax
 8198652:	84 c0                	test   %al,%al
 8198654:	74 07                	je     819865d <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0xc5>
 8198656:	b8 01 00 00 00       	mov    $0x1,%eax
 819865b:	eb 05                	jmp    8198662 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0xca>
 819865d:	b8 00 00 00 00       	mov    $0x0,%eax
 8198662:	84 c0                	test   %al,%al
 8198664:	74 0a                	je     8198670 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0xd8>
 8198666:	b8 00 00 00 00       	mov    $0x0,%eax
 819866b:	e9 27 03 00 00       	jmp    8198997 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x3ff>
 8198670:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8198677:	e8 d4 bd 58 00       	call   8724450 <_Znwj>
 819867c:	89 c3                	mov    %eax,%ebx
 819867e:	89 d8                	mov    %ebx,%eax
 8198680:	89 04 24             	mov    %eax,(%esp)
 8198683:	e8 ca 1e 00 00       	call   819a552 <_ZN4ARAD10DISPATCHER27Arad_INTER_kLoadServerStateC1Ev>
 8198688:	89 d8                	mov    %ebx,%eax
 819868a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 819868d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8198691:	74 2f                	je     81986c2 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x12a>
 8198693:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8198696:	89 04 24             	mov    %eax,(%esp)
 8198699:	e8 28 1d 00 00       	call   819a3c6 <_ZNK4ARAD10DISPATCHER21Arad_IInterDispatcher8get_codeEv>
 819869e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81986a1:	89 54 24 08          	mov    %edx,0x8(%esp)
 81986a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81986a9:	8b 45 08             	mov    0x8(%ebp),%eax
 81986ac:	89 04 24             	mov    %eax,(%esp)
 81986af:	e8 4e 03 00 00       	call   8198a02 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE>
 81986b4:	83 f0 01             	xor    $0x1,%eax
 81986b7:	84 c0                	test   %al,%al
 81986b9:	74 07                	je     81986c2 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x12a>
 81986bb:	b8 01 00 00 00       	mov    $0x1,%eax
 81986c0:	eb 05                	jmp    81986c7 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x12f>
 81986c2:	b8 00 00 00 00       	mov    $0x0,%eax
 81986c7:	84 c0                	test   %al,%al
 81986c9:	74 0a                	je     81986d5 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x13d>
 81986cb:	b8 00 00 00 00       	mov    $0x0,%eax
 81986d0:	e9 c2 02 00 00       	jmp    8198997 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x3ff>
 81986d5:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 81986dc:	e8 6f bd 58 00       	call   8724450 <_Znwj>
 81986e1:	89 c3                	mov    %eax,%ebx
 81986e3:	89 d8                	mov    %ebx,%eax
 81986e5:	89 04 24             	mov    %eax,(%esp)
 81986e8:	e8 d7 1e 00 00       	call   819a5c4 <_ZN4ARAD10DISPATCHER29Arad_INTER_kDeleteServerStateC1Ev>
 81986ed:	89 d8                	mov    %ebx,%eax
 81986ef:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81986f2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81986f6:	74 2f                	je     8198727 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x18f>
 81986f8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81986fb:	89 04 24             	mov    %eax,(%esp)
 81986fe:	e8 c3 1c 00 00       	call   819a3c6 <_ZNK4ARAD10DISPATCHER21Arad_IInterDispatcher8get_codeEv>
 8198703:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8198706:	89 54 24 08          	mov    %edx,0x8(%esp)
 819870a:	89 44 24 04          	mov    %eax,0x4(%esp)
 819870e:	8b 45 08             	mov    0x8(%ebp),%eax
 8198711:	89 04 24             	mov    %eax,(%esp)
 8198714:	e8 e9 02 00 00       	call   8198a02 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE>
 8198719:	83 f0 01             	xor    $0x1,%eax
 819871c:	84 c0                	test   %al,%al
 819871e:	74 07                	je     8198727 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x18f>
 8198720:	b8 01 00 00 00       	mov    $0x1,%eax
 8198725:	eb 05                	jmp    819872c <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x194>
 8198727:	b8 00 00 00 00       	mov    $0x0,%eax
 819872c:	84 c0                	test   %al,%al
 819872e:	74 0a                	je     819873a <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x1a2>
 8198730:	b8 00 00 00 00       	mov    $0x0,%eax
 8198735:	e9 5d 02 00 00       	jmp    8198997 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x3ff>
 819873a:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8198741:	e8 0a bd 58 00       	call   8724450 <_Znwj>
 8198746:	89 c3                	mov    %eax,%ebx
 8198748:	89 d8                	mov    %ebx,%eax
 819874a:	89 04 24             	mov    %eax,(%esp)
 819874d:	e8 aa 1c 00 00       	call   819a3fc <_ZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRouletteC1Ev>
 8198752:	89 d8                	mov    %ebx,%eax
 8198754:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8198757:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 819875b:	74 2f                	je     819878c <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x1f4>
 819875d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8198760:	89 04 24             	mov    %eax,(%esp)
 8198763:	e8 5e 1c 00 00       	call   819a3c6 <_ZNK4ARAD10DISPATCHER21Arad_IInterDispatcher8get_codeEv>
 8198768:	8b 55 f4             	mov    -0xc(%ebp),%edx
 819876b:	89 54 24 08          	mov    %edx,0x8(%esp)
 819876f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8198773:	8b 45 08             	mov    0x8(%ebp),%eax
 8198776:	89 04 24             	mov    %eax,(%esp)
 8198779:	e8 84 02 00 00       	call   8198a02 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE>
 819877e:	83 f0 01             	xor    $0x1,%eax
 8198781:	84 c0                	test   %al,%al
 8198783:	74 07                	je     819878c <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x1f4>
 8198785:	b8 01 00 00 00       	mov    $0x1,%eax
 819878a:	eb 05                	jmp    8198791 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x1f9>
 819878c:	b8 00 00 00 00       	mov    $0x0,%eax
 8198791:	84 c0                	test   %al,%al
 8198793:	74 0a                	je     819879f <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x207>
 8198795:	b8 00 00 00 00       	mov    $0x0,%eax
 819879a:	e9 f8 01 00 00       	jmp    8198997 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x3ff>
 819879f:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 81987a6:	e8 a5 bc 58 00       	call   8724450 <_Znwj>
 81987ab:	89 c3                	mov    %eax,%ebx
 81987ad:	89 d8                	mov    %ebx,%eax
 81987af:	89 04 24             	mov    %eax,(%esp)
 81987b2:	e8 7f 1e 00 00       	call   819a636 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacterC1Ev>
 81987b7:	89 d8                	mov    %ebx,%eax
 81987b9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81987bc:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81987c0:	74 2f                	je     81987f1 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x259>
 81987c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81987c5:	89 04 24             	mov    %eax,(%esp)
 81987c8:	e8 f9 1b 00 00       	call   819a3c6 <_ZNK4ARAD10DISPATCHER21Arad_IInterDispatcher8get_codeEv>
 81987cd:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81987d0:	89 54 24 08          	mov    %edx,0x8(%esp)
 81987d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81987d8:	8b 45 08             	mov    0x8(%ebp),%eax
 81987db:	89 04 24             	mov    %eax,(%esp)
 81987de:	e8 1f 02 00 00       	call   8198a02 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE>
 81987e3:	83 f0 01             	xor    $0x1,%eax
 81987e6:	84 c0                	test   %al,%al
 81987e8:	74 07                	je     81987f1 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x259>
 81987ea:	b8 01 00 00 00       	mov    $0x1,%eax
 81987ef:	eb 05                	jmp    81987f6 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x25e>
 81987f1:	b8 00 00 00 00       	mov    $0x0,%eax
 81987f6:	84 c0                	test   %al,%al
 81987f8:	74 0a                	je     8198804 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x26c>
 81987fa:	b8 00 00 00 00       	mov    $0x0,%eax
 81987ff:	e9 93 01 00 00       	jmp    8198997 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x3ff>
 8198804:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 819880b:	e8 40 bc 58 00       	call   8724450 <_Znwj>
 8198810:	89 c3                	mov    %eax,%ebx
 8198812:	89 d8                	mov    %ebx,%eax
 8198814:	89 04 24             	mov    %eax,(%esp)
 8198817:	e8 8c 1e 00 00       	call   819a6a8 <_ZN4ARAD10DISPATCHER36Arad_INTER_kAvatarHiddenOptionChangeC1Ev>
 819881c:	89 d8                	mov    %ebx,%eax
 819881e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8198821:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8198825:	74 2f                	je     8198856 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x2be>
 8198827:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819882a:	89 04 24             	mov    %eax,(%esp)
 819882d:	e8 94 1b 00 00       	call   819a3c6 <_ZNK4ARAD10DISPATCHER21Arad_IInterDispatcher8get_codeEv>
 8198832:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8198835:	89 54 24 08          	mov    %edx,0x8(%esp)
 8198839:	89 44 24 04          	mov    %eax,0x4(%esp)
 819883d:	8b 45 08             	mov    0x8(%ebp),%eax
 8198840:	89 04 24             	mov    %eax,(%esp)
 8198843:	e8 ba 01 00 00       	call   8198a02 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE>
 8198848:	83 f0 01             	xor    $0x1,%eax
 819884b:	84 c0                	test   %al,%al
 819884d:	74 07                	je     8198856 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x2be>
 819884f:	b8 01 00 00 00       	mov    $0x1,%eax
 8198854:	eb 05                	jmp    819885b <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x2c3>
 8198856:	b8 00 00 00 00       	mov    $0x0,%eax
 819885b:	84 c0                	test   %al,%al
 819885d:	74 0a                	je     8198869 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x2d1>
 819885f:	b8 00 00 00 00       	mov    $0x0,%eax
 8198864:	e9 2e 01 00 00       	jmp    8198997 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x3ff>
 8198869:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8198870:	e8 db bb 58 00       	call   8724450 <_Znwj>
 8198875:	89 c3                	mov    %eax,%ebx
 8198877:	89 d8                	mov    %ebx,%eax
 8198879:	89 04 24             	mov    %eax,(%esp)
 819887c:	e8 99 1e 00 00       	call   819a71a <_ZN4ARAD10DISPATCHER29Arad_INTER_kUseAvatarRechargeC1Ev>
 8198881:	89 d8                	mov    %ebx,%eax
 8198883:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8198886:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 819888a:	74 2f                	je     81988bb <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x323>
 819888c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819888f:	89 04 24             	mov    %eax,(%esp)
 8198892:	e8 2f 1b 00 00       	call   819a3c6 <_ZNK4ARAD10DISPATCHER21Arad_IInterDispatcher8get_codeEv>
 8198897:	8b 55 f4             	mov    -0xc(%ebp),%edx
 819889a:	89 54 24 08          	mov    %edx,0x8(%esp)
 819889e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81988a2:	8b 45 08             	mov    0x8(%ebp),%eax
 81988a5:	89 04 24             	mov    %eax,(%esp)
 81988a8:	e8 55 01 00 00       	call   8198a02 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE>
 81988ad:	83 f0 01             	xor    $0x1,%eax
 81988b0:	84 c0                	test   %al,%al
 81988b2:	74 07                	je     81988bb <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x323>
 81988b4:	b8 01 00 00 00       	mov    $0x1,%eax
 81988b9:	eb 05                	jmp    81988c0 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x328>
 81988bb:	b8 00 00 00 00       	mov    $0x0,%eax
 81988c0:	84 c0                	test   %al,%al
 81988c2:	74 0a                	je     81988ce <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x336>
 81988c4:	b8 00 00 00 00       	mov    $0x0,%eax
 81988c9:	e9 c9 00 00 00       	jmp    8198997 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x3ff>
 81988ce:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 81988d5:	e8 76 bb 58 00       	call   8724450 <_Znwj>
 81988da:	89 c3                	mov    %eax,%ebx
 81988dc:	89 d8                	mov    %ebx,%eax
 81988de:	89 04 24             	mov    %eax,(%esp)
 81988e1:	e8 a6 1e 00 00       	call   819a78c <_ZN4ARAD10DISPATCHER26Arad_INTER_kEmblemCompoundC1Ev>
 81988e6:	89 d8                	mov    %ebx,%eax
 81988e8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81988eb:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81988ef:	74 2f                	je     8198920 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x388>
 81988f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81988f4:	89 04 24             	mov    %eax,(%esp)
 81988f7:	e8 ca 1a 00 00       	call   819a3c6 <_ZNK4ARAD10DISPATCHER21Arad_IInterDispatcher8get_codeEv>
 81988fc:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81988ff:	89 54 24 08          	mov    %edx,0x8(%esp)
 8198903:	89 44 24 04          	mov    %eax,0x4(%esp)
 8198907:	8b 45 08             	mov    0x8(%ebp),%eax
 819890a:	89 04 24             	mov    %eax,(%esp)
 819890d:	e8 f0 00 00 00       	call   8198a02 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE>
 8198912:	83 f0 01             	xor    $0x1,%eax
 8198915:	84 c0                	test   %al,%al
 8198917:	74 07                	je     8198920 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x388>
 8198919:	b8 01 00 00 00       	mov    $0x1,%eax
 819891e:	eb 05                	jmp    8198925 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x38d>
 8198920:	b8 00 00 00 00       	mov    $0x0,%eax
 8198925:	84 c0                	test   %al,%al
 8198927:	74 07                	je     8198930 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x398>
 8198929:	b8 00 00 00 00       	mov    $0x0,%eax
 819892e:	eb 67                	jmp    8198997 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x3ff>
 8198930:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8198937:	e8 14 bb 58 00       	call   8724450 <_Znwj>
 819893c:	89 c3                	mov    %eax,%ebx
 819893e:	89 d8                	mov    %ebx,%eax
 8198940:	89 04 24             	mov    %eax,(%esp)
 8198943:	e8 b6 1e 00 00       	call   819a7fe <_ZN4ARAD10DISPATCHER25Arad_INTER_kAvatarConvertC1Ev>
 8198948:	89 d8                	mov    %ebx,%eax
 819894a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 819894d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8198951:	74 2f                	je     8198982 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x3ea>
 8198953:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8198956:	89 04 24             	mov    %eax,(%esp)
 8198959:	e8 68 1a 00 00       	call   819a3c6 <_ZNK4ARAD10DISPATCHER21Arad_IInterDispatcher8get_codeEv>
 819895e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8198961:	89 54 24 08          	mov    %edx,0x8(%esp)
 8198965:	89 44 24 04          	mov    %eax,0x4(%esp)
 8198969:	8b 45 08             	mov    0x8(%ebp),%eax
 819896c:	89 04 24             	mov    %eax,(%esp)
 819896f:	e8 8e 00 00 00       	call   8198a02 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE>
 8198974:	83 f0 01             	xor    $0x1,%eax
 8198977:	84 c0                	test   %al,%al
 8198979:	74 07                	je     8198982 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x3ea>
 819897b:	b8 01 00 00 00       	mov    $0x1,%eax
 8198980:	eb 05                	jmp    8198987 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x3ef>
 8198982:	b8 00 00 00 00       	mov    $0x0,%eax
 8198987:	84 c0                	test   %al,%al
 8198989:	74 07                	je     8198992 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x3fa>
 819898b:	b8 00 00 00 00       	mov    $0x0,%eax
 8198990:	eb 05                	jmp    8198997 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv+0x3ff>
 8198992:	b8 01 00 00 00       	mov    $0x1,%eax
 8198997:	83 c4 24             	add    $0x24,%esp
 819899a:	5b                   	pop    %ebx
 819899b:	5d                   	pop    %ebp
 819899c:	c3                   	ret
 819899d:	90                   	nop

```

```c
// ARAD::DISPATCHER::Arad_InternalDispatcher::Init @ 0x8198598

/* ARAD::DISPATCHER::Arad_InternalDispatcher::Init() */

bool __thiscall ARAD::DISPATCHER::Arad_InternalDispatcher::Init(Arad_InternalDispatcher *this)

{
  bool bVar1;
  char cVar2;
  Arad_INTER_kLoadRewardEventItem *this_00;
  undefined4 uVar3;
  Arad_INTER_kSaveServerState *this_01;
  Arad_INTER_kLoadServerState *this_02;
  Arad_INTER_kDeleteServerState *this_03;
  Arad_INTER_kAvatarRoulette *this_04;
  Arad_INTER_kAradJumpingCharacter *this_05;
  Arad_INTER_kAvatarHiddenOptionChange *this_06;
  Arad_INTER_kUseAvatarRecharge *this_07;
  Arad_INTER_kEmblemCompound *this_08;
  Arad_INTER_kAvatarConvert *this_09;
  
  this_00 = operator_new(8);
  Arad_INTER_kLoadRewardEventItem::Arad_INTER_kLoadRewardEventItem(this_00);
  if (this_00 == (Arad_INTER_kLoadRewardEventItem *)0x0) {
LAB_081985f8:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IInterDispatcher::get_code((Arad_IInterDispatcher *)this_00);
    cVar2 = _registDispatcher(this,uVar3,this_00);
    if (cVar2 == '\x01') goto LAB_081985f8;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_01 = operator_new(8);
  Arad_INTER_kSaveServerState::Arad_INTER_kSaveServerState(this_01);
  if (this_01 == (Arad_INTER_kSaveServerState *)0x0) {
LAB_0819865d:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IInterDispatcher::get_code((Arad_IInterDispatcher *)this_01);
    cVar2 = _registDispatcher(this,uVar3,this_01);
    if (cVar2 == '\x01') goto LAB_0819865d;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_02 = operator_new(8);
  Arad_INTER_kLoadServerState::Arad_INTER_kLoadServerState(this_02);
  if (this_02 == (Arad_INTER_kLoadServerState *)0x0) {
LAB_081986c2:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IInterDispatcher::get_code((Arad_IInterDispatcher *)this_02);
    cVar2 = _registDispatcher(this,uVar3,this_02);
    if (cVar2 == '\x01') goto LAB_081986c2;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_03 = operator_new(8);
  Arad_INTER_kDeleteServerState::Arad_INTER_kDeleteServerState(this_03);
  if (this_03 == (Arad_INTER_kDeleteServerState *)0x0) {
LAB_08198727:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IInterDispatcher::get_code((Arad_IInterDispatcher *)this_03);
    cVar2 = _registDispatcher(this,uVar3,this_03);
    if (cVar2 == '\x01') goto LAB_08198727;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_04 = operator_new(8);
  Arad_INTER_kAvatarRoulette::Arad_INTER_kAvatarRoulette(this_04);
  if (this_04 == (Arad_INTER_kAvatarRoulette *)0x0) {
LAB_0819878c:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IInterDispatcher::get_code((Arad_IInterDispatcher *)this_04);
    cVar2 = _registDispatcher(this,uVar3,this_04);
    if (cVar2 == '\x01') goto LAB_0819878c;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_05 = operator_new(8);
  Arad_INTER_kAradJumpingCharacter::Arad_INTER_kAradJumpingCharacter(this_05);
  if (this_05 == (Arad_INTER_kAradJumpingCharacter *)0x0) {
LAB_081987f1:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IInterDispatcher::get_code((Arad_IInterDispatcher *)this_05);
    cVar2 = _registDispatcher(this,uVar3,this_05);
    if (cVar2 == '\x01') goto LAB_081987f1;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_06 = operator_new(8);
  Arad_INTER_kAvatarHiddenOptionChange::Arad_INTER_kAvatarHiddenOptionChange(this_06);
  if (this_06 == (Arad_INTER_kAvatarHiddenOptionChange *)0x0) {
LAB_08198856:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IInterDispatcher::get_code((Arad_IInterDispatcher *)this_06);
    cVar2 = _registDispatcher(this,uVar3,this_06);
    if (cVar2 == '\x01') goto LAB_08198856;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_07 = operator_new(8);
  Arad_INTER_kUseAvatarRecharge::Arad_INTER_kUseAvatarRecharge(this_07);
  if (this_07 == (Arad_INTER_kUseAvatarRecharge *)0x0) {
LAB_081988bb:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IInterDispatcher::get_code((Arad_IInterDispatcher *)this_07);
    cVar2 = _registDispatcher(this,uVar3,this_07);
    if (cVar2 == '\x01') goto LAB_081988bb;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_08 = operator_new(8);
  Arad_INTER_kEmblemCompound::Arad_INTER_kEmblemCompound(this_08);
  if (this_08 == (Arad_INTER_kEmblemCompound *)0x0) {
LAB_08198920:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IInterDispatcher::get_code((Arad_IInterDispatcher *)this_08);
    cVar2 = _registDispatcher(this,uVar3,this_08);
    if (cVar2 == '\x01') goto LAB_08198920;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_09 = operator_new(8);
  Arad_INTER_kAvatarConvert::Arad_INTER_kAvatarConvert(this_09);
  if (this_09 != (Arad_INTER_kAvatarConvert *)0x0) {
    uVar3 = Arad_IInterDispatcher::get_code((Arad_IInterDispatcher *)this_09);
    cVar2 = _registDispatcher(this,uVar3,this_09);
    if (cVar2 != '\x01') {
      bVar1 = true;
      goto LAB_08198987;
    }
  }
  bVar1 = false;
LAB_08198987:
  return !bVar1;
}

```

---

## _registDispatcher

```asm
// === 08198a02 ARAD::DISPATCHER::Arad_InternalDispatcher::_registDispatcher  [0x08198a02-0x8198a47] ===
 8198a02:	55                   	push   %ebp
 8198a03:	89 e5                	mov    %esp,%ebp
 8198a05:	83 ec 18             	sub    $0x18,%esp
 8198a08:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198a0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8198a0f:	8b 45 08             	mov    0x8(%ebp),%eax
 8198a12:	89 04 24             	mov    %eax,(%esp)
 8198a15:	e8 84 ff ff ff       	call   819899e <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher13GetDispatcherENS_23ENUM_INTERNALPACKET_JPNE>
 8198a1a:	85 c0                	test   %eax,%eax
 8198a1c:	0f 95 c0             	setne  %al
 8198a1f:	84 c0                	test   %al,%al
 8198a21:	74 07                	je     8198a2a <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE+0x28>
 8198a23:	b8 00 00 00 00       	mov    $0x0,%eax
 8198a28:	eb 1c                	jmp    8198a46 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE+0x44>
 8198a2a:	8b 45 08             	mov    0x8(%ebp),%eax
 8198a2d:	8d 55 0c             	lea    0xc(%ebp),%edx
 8198a30:	89 54 24 04          	mov    %edx,0x4(%esp)
 8198a34:	89 04 24             	mov    %eax,(%esp)
 8198a37:	e8 7c 20 00 00       	call   819aab8 <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER21Arad_IInterDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEEixERS8_>
 8198a3c:	8b 55 10             	mov    0x10(%ebp),%edx
 8198a3f:	89 10                	mov    %edx,(%eax)
 8198a41:	b8 01 00 00 00       	mov    $0x1,%eax
 8198a46:	c9                   	leave
 8198a47:	c3                   	ret

```

```c
// ARAD::DISPATCHER::Arad_InternalDispatcher::_registDispatcher @ 0x8198a02

/* ARAD::DISPATCHER::Arad_InternalDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN,
   ARAD::DISPATCHER::Arad_IInterDispatcher*) */

bool __thiscall
ARAD::DISPATCHER::Arad_InternalDispatcher::_registDispatcher
          (Arad_InternalDispatcher *this,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = GetDispatcher(this,param_2);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)
             std::
             map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
             ::operator[]((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
                           *)this,(ENUM_INTERNALPACKET_JPN *)&param_2);
    *puVar2 = param_3;
  }
  return iVar1 == 0;
}

```

---

## _unregistDispatcher

```asm
// === 08198a48 ARAD::DISPATCHER::Arad_InternalDispatcher::_unregistDispatcher  [0x08198a48-0x8198a99] ===
 8198a48:	55                   	push   %ebp
 8198a49:	89 e5                	mov    %esp,%ebp
 8198a4b:	83 ec 28             	sub    $0x28,%esp
 8198a4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198a51:	89 44 24 04          	mov    %eax,0x4(%esp)
 8198a55:	8b 45 08             	mov    0x8(%ebp),%eax
 8198a58:	89 04 24             	mov    %eax,(%esp)
 8198a5b:	e8 3e ff ff ff       	call   819899e <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher13GetDispatcherENS_23ENUM_INTERNALPACKET_JPNE>
 8198a60:	85 c0                	test   %eax,%eax
 8198a62:	0f 95 c0             	setne  %al
 8198a65:	84 c0                	test   %al,%al
 8198a67:	74 2e                	je     8198a97 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher19_unregistDispatcherENS_23ENUM_INTERNALPACKET_JPNE+0x4f>
 8198a69:	8b 55 08             	mov    0x8(%ebp),%edx
 8198a6c:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8198a6f:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 8198a72:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8198a76:	89 54 24 04          	mov    %edx,0x4(%esp)
 8198a7a:	89 04 24             	mov    %eax,(%esp)
 8198a7d:	e8 e8 1f 00 00       	call   819aa6a <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER21Arad_IInterDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEE4findERS8_>
 8198a82:	83 ec 04             	sub    $0x4,%esp
 8198a85:	8b 45 08             	mov    0x8(%ebp),%eax
 8198a88:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8198a8b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8198a8f:	89 04 24             	mov    %eax,(%esp)
 8198a92:	e8 17 21 00 00       	call   819abae <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER21Arad_IInterDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEE5eraseESt17_Rb_tree_iteratorIS9_E>
 8198a97:	c9                   	leave
 8198a98:	c3                   	ret
 8198a99:	90                   	nop

```

```c
// ARAD::DISPATCHER::Arad_InternalDispatcher::_unregistDispatcher @ 0x8198a48

/* ARAD::DISPATCHER::Arad_InternalDispatcher::_unregistDispatcher(ARAD::ENUM_INTERNALPACKET_JPN) */

void __thiscall
ARAD::DISPATCHER::Arad_InternalDispatcher::_unregistDispatcher
          (Arad_InternalDispatcher *this,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_10 [3];
  
  iVar1 = GetDispatcher(this,param_2);
  if (iVar1 != 0) {
    puVar2 = &param_2;
    std::
    map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
    ::find((ENUM_INTERNALPACKET_JPN *)local_10);
    std::
    map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
    ::erase((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
             *)this,local_10[0],puVar2);
  }
  return;
}

```

---

## ~Arad_InternalDispatcher

```asm
// === 08198516 ARAD::DISPATCHER::Arad_InternalDispatcher::~Arad_InternalDispatcher  [0x08198516-0x8198597] ===
 8198516:	55                   	push   %ebp
 8198517:	89 e5                	mov    %esp,%ebp
 8198519:	56                   	push   %esi
 819851a:	53                   	push   %ebx
 819851b:	83 ec 20             	sub    $0x20,%esp
 819851e:	8b 55 08             	mov    0x8(%ebp),%edx
 8198521:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8198524:	89 54 24 04          	mov    %edx,0x4(%esp)
 8198528:	89 04 24             	mov    %eax,(%esp)
 819852b:	e8 c4 24 00 00       	call   819a9f4 <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER21Arad_IInterDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEE3endEv>
 8198530:	83 ec 04             	sub    $0x4,%esp
 8198533:	8b 55 08             	mov    0x8(%ebp),%edx
 8198536:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8198539:	89 54 24 04          	mov    %edx,0x4(%esp)
 819853d:	89 04 24             	mov    %eax,(%esp)
 8198540:	e8 89 24 00 00       	call   819a9ce <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER21Arad_IInterDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEE5beginEv>
 8198545:	83 ec 04             	sub    $0x4,%esp
 8198548:	8d 45 ef             	lea    -0x11(%ebp),%eax
 819854b:	88 5c 24 0c          	mov    %bl,0xc(%esp)
 819854f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8198552:	89 54 24 08          	mov    %edx,0x8(%esp)
 8198556:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8198559:	89 54 24 04          	mov    %edx,0x4(%esp)
 819855d:	89 04 24             	mov    %eax,(%esp)
 8198560:	e8 b4 24 00 00       	call   819aa19 <_ZSt8for_eachISt17_Rb_tree_iteratorISt4pairIKN4ARAD23ENUM_INTERNALPACKET_JPNEPNS2_10DISPATCHER21Arad_IInterDispatcherEEENS5_23Arad_InternalDispatcher16DeleteDispatcherEET0_T_SD_SC_>
 8198565:	83 ec 04             	sub    $0x4,%esp
 8198568:	8b 45 08             	mov    0x8(%ebp),%eax
 819856b:	89 04 24             	mov    %eax,(%esp)
 819856e:	e8 b9 23 00 00       	call   819a92c <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER21Arad_IInterDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEED1Ev>
 8198573:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8198576:	83 c4 00             	add    $0x0,%esp
 8198579:	5b                   	pop    %ebx
 819857a:	5e                   	pop    %esi
 819857b:	5d                   	pop    %ebp
 819857c:	c3                   	ret
 819857d:	89 d3                	mov    %edx,%ebx
 819857f:	89 c6                	mov    %eax,%esi
 8198581:	8b 45 08             	mov    0x8(%ebp),%eax
 8198584:	89 04 24             	mov    %eax,(%esp)
 8198587:	e8 a0 23 00 00       	call   819a92c <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER21Arad_IInterDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEED1Ev>
 819858c:	89 f0                	mov    %esi,%eax
 819858e:	89 da                	mov    %ebx,%edx
 8198590:	89 04 24             	mov    %eax,(%esp)
 8198593:	e8 b8 b1 94 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// ARAD::DISPATCHER::Arad_InternalDispatcher::~Arad_InternalDispatcher @ 0x8198516

/* ARAD::DISPATCHER::Arad_InternalDispatcher::~Arad_InternalDispatcher() */

void __thiscall
ARAD::DISPATCHER::Arad_InternalDispatcher::~Arad_InternalDispatcher(Arad_InternalDispatcher *this)

{
  undefined1 local_15;
  undefined4 local_14;
  undefined4 local_10;
  
                    /* try { // try from 0819852b to 08198564 has its CatchHandler @ 0819857d */
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
  ::end((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
         *)&local_14);
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
  ::begin((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
           *)&local_10);
  std::
  for_each<std::_Rb_tree_iterator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>,ARAD::DISPATCHER::Arad_InternalDispatcher::DeleteDispatcher>
            (&local_15,local_10,local_14);
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
  ::~map((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
          *)this);
  return;
}

```

