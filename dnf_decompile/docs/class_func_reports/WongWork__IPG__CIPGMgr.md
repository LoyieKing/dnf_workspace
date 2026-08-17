# WongWork__IPG__CIPGMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## AllocIPGData

```asm
// === 0810466c WongWork::IPG::CIPGMgr::AllocIPGData  [0x0810466c-0x81046ef] ===
 810466c:	55                   	push   %ebp
 810466d:	89 e5                	mov    %esp,%ebp
 810466f:	56                   	push   %esi
 8104670:	53                   	push   %ebx
 8104671:	83 ec 20             	sub    $0x20,%esp
 8104674:	8b 45 08             	mov    0x8(%ebp),%eax
 8104677:	05 bc 00 00 00       	add    $0xbc,%eax
 810467c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8104680:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8104683:	89 04 24             	mov    %eax,(%esp)
 8104686:	e8 c1 0d 00 00       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 810468b:	8b 45 08             	mov    0x8(%ebp),%eax
 810468e:	83 c0 5c             	add    $0x5c,%eax
 8104691:	89 04 24             	mov    %eax,(%esp)
 8104694:	e8 e5 0d 00 00       	call   810547e <_ZN11DynamicPoolIN8WongWork3IPG8SIPGDataEE7AcquireEv>
 8104699:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810469c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81046a0:	74 1b                	je     81046bd <_ZN8WongWork3IPG7CIPGMgr12AllocIPGDataEv+0x51>
 81046a2:	c7 44 24 08 dc 02 00 	movl   $0x2dc,0x8(%esp)
 81046a9:	00 
 81046aa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81046b1:	00 
 81046b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81046b5:	89 04 24             	mov    %eax,(%esp)
 81046b8:	e8 03 96 f7 ff       	call   807dcc0 <memset@plt>
 81046bd:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 81046c0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81046c3:	89 04 24             	mov    %eax,(%esp)
 81046c6:	e8 9d 0d 00 00       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 81046cb:	89 d8                	mov    %ebx,%eax
 81046cd:	83 c4 20             	add    $0x20,%esp
 81046d0:	5b                   	pop    %ebx
 81046d1:	5e                   	pop    %esi
 81046d2:	5d                   	pop    %ebp
 81046d3:	c3                   	ret
 81046d4:	89 d3                	mov    %edx,%ebx
 81046d6:	89 c6                	mov    %eax,%esi
 81046d8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81046db:	89 04 24             	mov    %eax,(%esp)
 81046de:	e8 85 0d 00 00       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 81046e3:	89 f0                	mov    %esi,%eax
 81046e5:	89 da                	mov    %ebx,%edx
 81046e7:	89 04 24             	mov    %eax,(%esp)
 81046ea:	e8 61 f0 9d 00       	call   8ae3750 <_Unwind_Resume>
 81046ef:	90                   	nop

```

```c
// WongWork::IPG::CIPGMgr::AllocIPGData @ 0x810466c

/* WongWork::IPG::CIPGMgr::AllocIPGData() */

void * __thiscall WongWork::IPG::CIPGMgr::AllocIPGData(CIPGMgr *this)

{
  void *pvVar1;
  Guard<Mutex> local_14 [4];
  void *local_10;
  
  Guard<Mutex>::Guard(local_14,(Mutex *)(this + 0xbc));
                    /* try { // try from 08104694 to 08104698 has its CatchHandler @ 081046d4 */
  local_10 = (void *)DynamicPool<WongWork::IPG::SIPGData>::Acquire
                               ((DynamicPool<WongWork::IPG::SIPGData> *)(this + 0x5c));
  if (local_10 != (void *)0x0) {
    memset(local_10,0,0x2dc);
  }
  pvVar1 = local_10;
  Guard<Mutex>::~Guard(local_14);
  return pvVar1;
}

```

---

## Finalize

```asm
// === 08104600 WongWork::IPG::CIPGMgr::Finalize  [0x08104600-0x810466b] ===
 8104600:	55                   	push   %ebp
 8104601:	89 e5                	mov    %esp,%ebp
 8104603:	83 ec 28             	sub    $0x28,%esp
 8104606:	8b 45 08             	mov    0x8(%ebp),%eax
 8104609:	8b 00                	mov    (%eax),%eax
 810460b:	85 c0                	test   %eax,%eax
 810460d:	74 5a                	je     8104669 <_ZN8WongWork3IPG7CIPGMgr8FinalizeEv+0x69>
 810460f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8104616:	eb 17                	jmp    810462f <_ZN8WongWork3IPG7CIPGMgr8FinalizeEv+0x2f>
 8104618:	8b 45 08             	mov    0x8(%ebp),%eax
 810461b:	8b 00                	mov    (%eax),%eax
 810461d:	8b 00                	mov    (%eax),%eax
 810461f:	8b 10                	mov    (%eax),%edx
 8104621:	8b 45 08             	mov    0x8(%ebp),%eax
 8104624:	8b 00                	mov    (%eax),%eax
 8104626:	89 04 24             	mov    %eax,(%esp)
 8104629:	ff d2                	call   *%edx
 810462b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 810462f:	8b 45 08             	mov    0x8(%ebp),%eax
 8104632:	8b 40 04             	mov    0x4(%eax),%eax
 8104635:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8104638:	0f 97 c0             	seta   %al
 810463b:	84 c0                	test   %al,%al
 810463d:	75 d9                	jne    8104618 <_ZN8WongWork3IPG7CIPGMgr8FinalizeEv+0x18>
 810463f:	8b 45 08             	mov    0x8(%ebp),%eax
 8104642:	8b 00                	mov    (%eax),%eax
 8104644:	85 c0                	test   %eax,%eax
 8104646:	74 16                	je     810465e <_ZN8WongWork3IPG7CIPGMgr8FinalizeEv+0x5e>
 8104648:	8b 45 08             	mov    0x8(%ebp),%eax
 810464b:	8b 00                	mov    (%eax),%eax
 810464d:	8b 00                	mov    (%eax),%eax
 810464f:	83 c0 08             	add    $0x8,%eax
 8104652:	8b 10                	mov    (%eax),%edx
 8104654:	8b 45 08             	mov    0x8(%ebp),%eax
 8104657:	8b 00                	mov    (%eax),%eax
 8104659:	89 04 24             	mov    %eax,(%esp)
 810465c:	ff d2                	call   *%edx
 810465e:	8b 45 08             	mov    0x8(%ebp),%eax
 8104661:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8104667:	eb 01                	jmp    810466a <_ZN8WongWork3IPG7CIPGMgr8FinalizeEv+0x6a>
 8104669:	90                   	nop
 810466a:	c9                   	leave
 810466b:	c3                   	ret

```

```c
// WongWork::IPG::CIPGMgr::Finalize @ 0x8104600

/* WongWork::IPG::CIPGMgr::Finalize() */

void __thiscall WongWork::IPG::CIPGMgr::Finalize(CIPGMgr *this)

{
  uint local_10;
  
  if (*(int *)this != 0) {
    for (local_10 = 0; local_10 < *(uint *)(this + 4); local_10 = local_10 + 1) {
      (**(code **)**(undefined4 **)this)(*(undefined4 *)this);
    }
    if (*(int *)this != 0) {
      (**(code **)(**(int **)this + 8))(*(undefined4 *)this);
    }
    *(undefined4 *)this = 0;
  }
  return;
}

```

---

## FreeIPGData

```asm
// === 081046f0 WongWork::IPG::CIPGMgr::FreeIPGData  [0x081046f0-0x8104753] ===
 81046f0:	55                   	push   %ebp
 81046f1:	89 e5                	mov    %esp,%ebp
 81046f3:	56                   	push   %esi
 81046f4:	53                   	push   %ebx
 81046f5:	83 ec 20             	sub    $0x20,%esp
 81046f8:	8b 45 08             	mov    0x8(%ebp),%eax
 81046fb:	05 bc 00 00 00       	add    $0xbc,%eax
 8104700:	89 44 24 04          	mov    %eax,0x4(%esp)
 8104704:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8104707:	89 04 24             	mov    %eax,(%esp)
 810470a:	e8 3d 0d 00 00       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 810470f:	8b 45 08             	mov    0x8(%ebp),%eax
 8104712:	8d 50 5c             	lea    0x5c(%eax),%edx
 8104715:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104718:	89 44 24 04          	mov    %eax,0x4(%esp)
 810471c:	89 14 24             	mov    %edx,(%esp)
 810471f:	e8 b0 0f 00 00       	call   81056d4 <_ZN11DynamicPoolIN8WongWork3IPG8SIPGDataEE4FreeEPS2_>
 8104724:	eb 1b                	jmp    8104741 <_ZN8WongWork3IPG7CIPGMgr11FreeIPGDataEPNS0_8SIPGDataE+0x51>
 8104726:	89 d3                	mov    %edx,%ebx
 8104728:	89 c6                	mov    %eax,%esi
 810472a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 810472d:	89 04 24             	mov    %eax,(%esp)
 8104730:	e8 33 0d 00 00       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8104735:	89 f0                	mov    %esi,%eax
 8104737:	89 da                	mov    %ebx,%edx
 8104739:	89 04 24             	mov    %eax,(%esp)
 810473c:	e8 0f f0 9d 00       	call   8ae3750 <_Unwind_Resume>
 8104741:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8104744:	89 04 24             	mov    %eax,(%esp)
 8104747:	e8 1c 0d 00 00       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 810474c:	83 c4 20             	add    $0x20,%esp
 810474f:	5b                   	pop    %ebx
 8104750:	5e                   	pop    %esi
 8104751:	5d                   	pop    %ebp
 8104752:	c3                   	ret
 8104753:	90                   	nop

```

```c
// WongWork::IPG::CIPGMgr::FreeIPGData @ 0x81046f0

/* WongWork::IPG::CIPGMgr::FreeIPGData(WongWork::IPG::SIPGData*) */

void __thiscall WongWork::IPG::CIPGMgr::FreeIPGData(CIPGMgr *this,SIPGData *param_1)

{
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)(this + 0xbc));
                    /* try { // try from 0810471f to 08104723 has its CatchHandler @ 08104726 */
  DynamicPool<WongWork::IPG::SIPGData>::Free
            ((DynamicPool<WongWork::IPG::SIPGData> *)(this + 0x5c),param_1);
  Guard<Mutex>::~Guard(local_10);
  return;
}

```

---

## Initialize

```asm
// === 08104494 WongWork::IPG::CIPGMgr::Initialize  [0x08104494-0x81045ff] ===
 8104494:	55                   	push   %ebp
 8104495:	89 e5                	mov    %esp,%ebp
 8104497:	57                   	push   %edi
 8104498:	56                   	push   %esi
 8104499:	53                   	push   %ebx
 810449a:	83 ec 4c             	sub    $0x4c,%esp
 810449d:	8b 45 08             	mov    0x8(%ebp),%eax
 81044a0:	8b 00                	mov    (%eax),%eax
 81044a2:	85 c0                	test   %eax,%eax
 81044a4:	74 0a                	je     81044b0 <_ZN8WongWork3IPG7CIPGMgr10InitializeEjj+0x1c>
 81044a6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81044ab:	e9 47 01 00 00       	jmp    81045f7 <_ZN8WongWork3IPG7CIPGMgr10InitializeEjj+0x163>
 81044b0:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81044b4:	0f 84 dc 00 00 00    	je     8104596 <_ZN8WongWork3IPG7CIPGMgr10InitializeEjj+0x102>
 81044ba:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 81044bd:	8d 04 9d 00 00 00 00 	lea    0x0(,%ebx,4),%eax
 81044c4:	83 c0 01             	add    $0x1,%eax
 81044c7:	c1 e0 02             	shl    $0x2,%eax
 81044ca:	89 04 24             	mov    %eax,(%esp)
 81044cd:	e8 ee e8 61 00       	call   8722dc0 <_Znaj>
 81044d2:	89 c6                	mov    %eax,%esi
 81044d4:	89 f0                	mov    %esi,%eax
 81044d6:	89 18                	mov    %ebx,(%eax)
 81044d8:	89 f0                	mov    %esi,%eax
 81044da:	8d 78 04             	lea    0x4(%eax),%edi
 81044dd:	89 7d c8             	mov    %edi,-0x38(%ebp)
 81044e0:	8d 43 ff             	lea    -0x1(%ebx),%eax
 81044e3:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81044e6:	eb 13                	jmp    81044fb <_ZN8WongWork3IPG7CIPGMgr10InitializeEjj+0x67>
 81044e8:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81044eb:	89 04 24             	mov    %eax,(%esp)
 81044ee:	e8 ef 0e 00 00       	call   81053e2 <_ZN8WongWork3IPG7CIPGMgr10CIPGWorkerC1Ev>
 81044f3:	83 45 c8 10          	addl   $0x10,-0x38(%ebp)
 81044f7:	83 6d cc 01          	subl   $0x1,-0x34(%ebp)
 81044fb:	83 7d cc ff          	cmpl   $0xffffffff,-0x34(%ebp)
 81044ff:	0f 95 c0             	setne  %al
 8104502:	84 c0                	test   %al,%al
 8104504:	75 e2                	jne    81044e8 <_ZN8WongWork3IPG7CIPGMgr10InitializeEjj+0x54>
 8104506:	eb 49                	jmp    8104551 <_ZN8WongWork3IPG7CIPGMgr10InitializeEjj+0xbd>
 8104508:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 810450b:	89 45 d0             	mov    %eax,-0x30(%ebp)
 810450e:	85 ff                	test   %edi,%edi
 8104510:	74 21                	je     8104533 <_ZN8WongWork3IPG7CIPGMgr10InitializeEjj+0x9f>
 8104512:	8d 43 ff             	lea    -0x1(%ebx),%eax
 8104515:	2b 45 cc             	sub    -0x34(%ebp),%eax
 8104518:	c1 e0 04             	shl    $0x4,%eax
 810451b:	8d 1c 07             	lea    (%edi,%eax,1),%ebx
 810451e:	39 fb                	cmp    %edi,%ebx
 8104520:	74 11                	je     8104533 <_ZN8WongWork3IPG7CIPGMgr10InitializeEjj+0x9f>
 8104522:	83 eb 10             	sub    $0x10,%ebx
 8104525:	8b 03                	mov    (%ebx),%eax
 8104527:	83 c0 04             	add    $0x4,%eax
 810452a:	8b 00                	mov    (%eax),%eax
 810452c:	89 1c 24             	mov    %ebx,(%esp)
 810452f:	ff d0                	call   *%eax
 8104531:	eb eb                	jmp    810451e <_ZN8WongWork3IPG7CIPGMgr10InitializeEjj+0x8a>
 8104533:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8104536:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8104539:	89 d3                	mov    %edx,%ebx
 810453b:	89 c7                	mov    %eax,%edi
 810453d:	89 34 24             	mov    %esi,(%esp)
 8104540:	e8 6b 06 62 00       	call   8724bb0 <_ZdaPv>
 8104545:	89 f8                	mov    %edi,%eax
 8104547:	89 da                	mov    %ebx,%edx
 8104549:	89 04 24             	mov    %eax,(%esp)
 810454c:	e8 ff f1 9d 00       	call   8ae3750 <_Unwind_Resume>
 8104551:	89 f0                	mov    %esi,%eax
 8104553:	8d 50 04             	lea    0x4(%eax),%edx
 8104556:	8b 45 08             	mov    0x8(%ebp),%eax
 8104559:	89 10                	mov    %edx,(%eax)
 810455b:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8104562:	eb 25                	jmp    8104589 <_ZN8WongWork3IPG7CIPGMgr10InitializeEjj+0xf5>
 8104564:	8b 45 08             	mov    0x8(%ebp),%eax
 8104567:	8b 00                	mov    (%eax),%eax
 8104569:	8b 55 08             	mov    0x8(%ebp),%edx
 810456c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8104570:	89 04 24             	mov    %eax,(%esp)
 8104573:	e8 5c 0e 00 00       	call   81053d4 <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker9SetIPGMgrEPS1_>
 8104578:	8b 45 08             	mov    0x8(%ebp),%eax
 810457b:	8b 00                	mov    (%eax),%eax
 810457d:	89 04 24             	mov    %eax,(%esp)
 8104580:	e8 05 c6 52 00       	call   8630b8a <_ZN15ThreadInterface5beginEv>
 8104585:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8104589:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 810458c:	3b 45 0c             	cmp    0xc(%ebp),%eax
 810458f:	0f 92 c0             	setb   %al
 8104592:	84 c0                	test   %al,%al
 8104594:	75 ce                	jne    8104564 <_ZN8WongWork3IPG7CIPGMgr10InitializeEjj+0xd0>
 8104596:	8b 45 08             	mov    0x8(%ebp),%eax
 8104599:	8b 55 10             	mov    0x10(%ebp),%edx
 810459c:	89 50 08             	mov    %edx,0x8(%eax)
 810459f:	8b 45 08             	mov    0x8(%ebp),%eax
 81045a2:	8b 55 0c             	mov    0xc(%ebp),%edx
 81045a5:	89 50 04             	mov    %edx,0x4(%eax)
 81045a8:	8b 45 08             	mov    0x8(%ebp),%eax
 81045ab:	05 ec 00 00 00       	add    $0xec,%eax
 81045b0:	89 04 24             	mov    %eax,(%esp)
 81045b3:	e8 c4 1f 04 00       	call   814657c <_Z15InitBillingCashRPN6Taiwan10TaiwanCashE>
 81045b8:	83 f0 01             	xor    $0x1,%eax
 81045bb:	84 c0                	test   %al,%al
 81045bd:	74 33                	je     81045f2 <_ZN8WongWork3IPG7CIPGMgr10InitializeEjj+0x15e>
 81045bf:	c7 44 24 10 60 21 b4 	movl   $0x8b42160,0x10(%esp)
 81045c6:	08 
 81045c7:	c7 44 24 0c 98 00 00 	movl   $0x98,0xc(%esp)
 81045ce:	00 
 81045cf:	c7 44 24 08 40 31 b4 	movl   $0x8b43140,0x8(%esp)
 81045d6:	08 
 81045d7:	c7 44 24 04 87 21 b4 	movl   $0x8b42187,0x4(%esp)
 81045de:	08 
 81045df:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81045e6:	e8 1f f6 9c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81045eb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81045f0:	eb 05                	jmp    81045f7 <_ZN8WongWork3IPG7CIPGMgr10InitializeEjj+0x163>
 81045f2:	b8 00 00 00 00       	mov    $0x0,%eax
 81045f7:	83 c4 4c             	add    $0x4c,%esp
 81045fa:	5b                   	pop    %ebx
 81045fb:	5e                   	pop    %esi
 81045fc:	5f                   	pop    %edi
 81045fd:	5d                   	pop    %ebp
 81045fe:	c3                   	ret
 81045ff:	90                   	nop

```

```c
// WongWork::IPG::CIPGMgr::Initialize @ 0x8104494

/* WongWork::IPG::CIPGMgr::Initialize(unsigned int, unsigned int) */

undefined4 __thiscall WongWork::IPG::CIPGMgr::Initialize(CIPGMgr *this,uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint *puVar3;
  CIPGWorker *local_3c;
  uint local_38;
  uint local_20;
  
  if (*(int *)this == 0) {
    if (param_1 != 0) {
      puVar3 = operator_new__((param_1 * 4 + 1) * 4);
      *puVar3 = param_1;
      local_3c = (CIPGWorker *)(puVar3 + 1);
      local_38 = param_1;
      while (local_38 = local_38 - 1, local_38 != 0xffffffff) {
                    /* try { // try from 081044ee to 081044f2 has its CatchHandler @ 08104508 */
        CIPGWorker::CIPGWorker(local_3c);
        local_3c = local_3c + 0x10;
      }
      *(uint **)this = puVar3 + 1;
      for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
        CIPGWorker::SetIPGMgr(*(CIPGWorker **)this,this);
        ThreadInterface::begin(*(ThreadInterface **)this);
      }
    }
    *(uint *)(this + 8) = param_2;
    *(uint *)(this + 4) = param_1;
    cVar1 = InitBillingCash((TaiwanCash **)(this + 0xec));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      LogManager::logFormat
                (1,"IPGMgr.cpp","int WongWork::IPG::CIPGMgr::Initialize(unsigned int, unsigned int)"
                 ,0x98,"Global billing cash initialize failed.");
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

```

---

## PutIPGRequest

```asm
// === 08104754 WongWork::IPG::CIPGMgr::PutIPGRequest  [0x08104754-0x81047e9] ===
 8104754:	55                   	push   %ebp
 8104755:	89 e5                	mov    %esp,%ebp
 8104757:	56                   	push   %esi
 8104758:	53                   	push   %ebx
 8104759:	83 ec 30             	sub    $0x30,%esp
 810475c:	8b 45 10             	mov    0x10(%ebp),%eax
 810475f:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8104762:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 8104766:	74 66                	je     81047ce <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb+0x7a>
 8104768:	8b 45 08             	mov    0x8(%ebp),%eax
 810476b:	8b 40 04             	mov    0x4(%eax),%eax
 810476e:	85 c0                	test   %eax,%eax
 8104770:	74 5c                	je     81047ce <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb+0x7a>
 8104772:	8b 45 08             	mov    0x8(%ebp),%eax
 8104775:	05 d4 00 00 00       	add    $0xd4,%eax
 810477a:	89 44 24 04          	mov    %eax,0x4(%esp)
 810477e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8104781:	89 04 24             	mov    %eax,(%esp)
 8104784:	e8 c3 0c 00 00       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 8104789:	8b 45 08             	mov    0x8(%ebp),%eax
 810478c:	8d 50 0c             	lea    0xc(%eax),%edx
 810478f:	8d 45 0c             	lea    0xc(%ebp),%eax
 8104792:	89 44 24 04          	mov    %eax,0x4(%esp)
 8104796:	89 14 24             	mov    %edx,(%esp)
 8104799:	e8 58 10 00 00       	call   81057f6 <_ZNSt5queueIPN8WongWork3IPG8SIPGDataESt5dequeIS3_SaIS3_EEE4pushERKS3_>
 810479e:	eb 1b                	jmp    81047bb <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb+0x67>
 81047a0:	89 d3                	mov    %edx,%ebx
 81047a2:	89 c6                	mov    %eax,%esi
 81047a4:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81047a7:	89 04 24             	mov    %eax,(%esp)
 81047aa:	e8 b9 0c 00 00       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 81047af:	89 f0                	mov    %esi,%eax
 81047b1:	89 da                	mov    %ebx,%edx
 81047b3:	89 04 24             	mov    %eax,(%esp)
 81047b6:	e8 95 ef 9d 00       	call   8ae3750 <_Unwind_Resume>
 81047bb:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81047be:	89 04 24             	mov    %eax,(%esp)
 81047c1:	e8 a2 0c 00 00       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 81047c6:	90                   	nop
 81047c7:	b8 00 00 00 00       	mov    $0x0,%eax
 81047cc:	eb 14                	jmp    81047e2 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb+0x8e>
 81047ce:	8b 55 0c             	mov    0xc(%ebp),%edx
 81047d1:	8b 45 08             	mov    0x8(%ebp),%eax
 81047d4:	8b 00                	mov    (%eax),%eax
 81047d6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81047da:	89 04 24             	mov    %eax,(%esp)
 81047dd:	e8 76 0a 00 00       	call   8105258 <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker11ProcIPGSyncEPNS0_8SIPGDataE>
 81047e2:	83 c4 30             	add    $0x30,%esp
 81047e5:	5b                   	pop    %ebx
 81047e6:	5e                   	pop    %esi
 81047e7:	5d                   	pop    %ebp
 81047e8:	c3                   	ret
 81047e9:	90                   	nop

```

```c
// WongWork::IPG::CIPGMgr::PutIPGRequest @ 0x8104754

/* WongWork::IPG::CIPGMgr::PutIPGRequest(WongWork::IPG::SIPGData*, bool) */

undefined4 __thiscall
WongWork::IPG::CIPGMgr::PutIPGRequest(CIPGMgr *this,SIPGData *param_1,bool param_2)

{
  undefined4 uVar1;
  undefined3 in_stack_0000000d;
  Guard<Mutex> local_10 [4];
  
  if ((param_2) && (*(int *)(this + 4) != 0)) {
    Guard<Mutex>::Guard(local_10,(Mutex *)(this + 0xd4));
                    /* try { // try from 08104799 to 0810479d has its CatchHandler @ 081047a0 */
    std::
    queue<WongWork::IPG::SIPGData*,std::deque<WongWork::IPG::SIPGData*,std::allocator<WongWork::IPG::SIPGData*>>>
    ::push((queue<WongWork::IPG::SIPGData*,std::deque<WongWork::IPG::SIPGData*,std::allocator<WongWork::IPG::SIPGData*>>>
            *)(this + 0xc),&param_1);
    Guard<Mutex>::~Guard(local_10);
    uVar1 = 0;
  }
  else {
    uVar1 = CIPGWorker::ProcIPGSync(*(CIPGWorker **)this,param_1);
  }
  return uVar1;
}

```

---

## _GetIPGRequest

```asm
// === 081047ea WongWork::IPG::CIPGMgr::_GetIPGRequest  [0x081047ea-0x8104883] ===
 81047ea:	55                   	push   %ebp
 81047eb:	89 e5                	mov    %esp,%ebp
 81047ed:	56                   	push   %esi
 81047ee:	53                   	push   %ebx
 81047ef:	83 ec 20             	sub    $0x20,%esp
 81047f2:	8b 45 08             	mov    0x8(%ebp),%eax
 81047f5:	05 d4 00 00 00       	add    $0xd4,%eax
 81047fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 81047fe:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8104801:	89 04 24             	mov    %eax,(%esp)
 8104804:	e8 43 0c 00 00       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 8104809:	8b 45 08             	mov    0x8(%ebp),%eax
 810480c:	83 c0 0c             	add    $0xc,%eax
 810480f:	89 04 24             	mov    %eax,(%esp)
 8104812:	e8 f9 0f 00 00       	call   8105810 <_ZNKSt5queueIPN8WongWork3IPG8SIPGDataESt5dequeIS3_SaIS3_EEE5emptyEv>
 8104817:	84 c0                	test   %al,%al
 8104819:	74 07                	je     8104822 <_ZN8WongWork3IPG7CIPGMgr14_GetIPGRequestEv+0x38>
 810481b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8104820:	eb 4e                	jmp    8104870 <_ZN8WongWork3IPG7CIPGMgr14_GetIPGRequestEv+0x86>
 8104822:	8b 45 08             	mov    0x8(%ebp),%eax
 8104825:	83 c0 0c             	add    $0xc,%eax
 8104828:	89 04 24             	mov    %eax,(%esp)
 810482b:	e8 f4 0f 00 00       	call   8105824 <_ZNSt5queueIPN8WongWork3IPG8SIPGDataESt5dequeIS3_SaIS3_EEE5frontEv>
 8104830:	8b 00                	mov    (%eax),%eax
 8104832:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8104835:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8104839:	75 07                	jne    8104842 <_ZN8WongWork3IPG7CIPGMgr14_GetIPGRequestEv+0x58>
 810483b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8104840:	eb 2e                	jmp    8104870 <_ZN8WongWork3IPG7CIPGMgr14_GetIPGRequestEv+0x86>
 8104842:	8b 45 08             	mov    0x8(%ebp),%eax
 8104845:	83 c0 0c             	add    $0xc,%eax
 8104848:	89 04 24             	mov    %eax,(%esp)
 810484b:	e8 e8 0f 00 00       	call   8105838 <_ZNSt5queueIPN8WongWork3IPG8SIPGDataESt5dequeIS3_SaIS3_EEE3popEv>
 8104850:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8104853:	eb 1b                	jmp    8104870 <_ZN8WongWork3IPG7CIPGMgr14_GetIPGRequestEv+0x86>
 8104855:	89 d3                	mov    %edx,%ebx
 8104857:	89 c6                	mov    %eax,%esi
 8104859:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810485c:	89 04 24             	mov    %eax,(%esp)
 810485f:	e8 04 0c 00 00       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8104864:	89 f0                	mov    %esi,%eax
 8104866:	89 da                	mov    %ebx,%edx
 8104868:	89 04 24             	mov    %eax,(%esp)
 810486b:	e8 e0 ee 9d 00       	call   8ae3750 <_Unwind_Resume>
 8104870:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8104873:	89 04 24             	mov    %eax,(%esp)
 8104876:	e8 ed 0b 00 00       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 810487b:	89 d8                	mov    %ebx,%eax
 810487d:	83 c4 20             	add    $0x20,%esp
 8104880:	5b                   	pop    %ebx
 8104881:	5e                   	pop    %esi
 8104882:	5d                   	pop    %ebp
 8104883:	c3                   	ret

```

```c
// WongWork::IPG::CIPGMgr::_GetIPGRequest @ 0x81047ea

/* WongWork::IPG::CIPGMgr::_GetIPGRequest() */

int __thiscall WongWork::IPG::CIPGMgr::_GetIPGRequest(CIPGMgr *this)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  Guard<Mutex> local_14 [4];
  int local_10;
  
  Guard<Mutex>::Guard(local_14,(Mutex *)(this + 0xd4));
                    /* try { // try from 08104812 to 0810484f has its CatchHandler @ 08104855 */
  cVar1 = std::
          queue<WongWork::IPG::SIPGData*,std::deque<WongWork::IPG::SIPGData*,std::allocator<WongWork::IPG::SIPGData*>>>
          ::empty((queue<WongWork::IPG::SIPGData*,std::deque<WongWork::IPG::SIPGData*,std::allocator<WongWork::IPG::SIPGData*>>>
                   *)(this + 0xc));
  if (cVar1 == '\0') {
    piVar2 = (int *)std::
                    queue<WongWork::IPG::SIPGData*,std::deque<WongWork::IPG::SIPGData*,std::allocator<WongWork::IPG::SIPGData*>>>
                    ::front();
    local_10 = *piVar2;
    if (local_10 == 0) {
      iVar3 = 0;
    }
    else {
      std::
      queue<WongWork::IPG::SIPGData*,std::deque<WongWork::IPG::SIPGData*,std::allocator<WongWork::IPG::SIPGData*>>>
      ::pop((queue<WongWork::IPG::SIPGData*,std::deque<WongWork::IPG::SIPGData*,std::allocator<WongWork::IPG::SIPGData*>>>
             *)(this + 0xc));
      iVar3 = local_10;
    }
  }
  else {
    iVar3 = 0;
  }
  Guard<Mutex>::~Guard(local_14);
  return iVar3;
}

```

