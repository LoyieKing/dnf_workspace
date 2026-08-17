# nexon__cash__NexonCash

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 14

---

## NexonCash

```asm
// === 081ae1b0 nexon::cash::NexonCash::NexonCash  [0x081ae1b0-0x81ae241] ===
 81ae1b0:	55                   	push   %ebp
 81ae1b1:	89 e5                	mov    %esp,%ebp
 81ae1b3:	57                   	push   %edi
 81ae1b4:	56                   	push   %esi
 81ae1b5:	53                   	push   %ebx
 81ae1b6:	83 ec 3c             	sub    $0x3c,%esp
 81ae1b9:	8b 5d 10             	mov    0x10(%ebp),%ebx
 81ae1bc:	8b 4d 14             	mov    0x14(%ebp),%ecx
 81ae1bf:	8b 55 18             	mov    0x18(%ebp),%edx
 81ae1c2:	8b 45 1c             	mov    0x1c(%ebp),%eax
 81ae1c5:	66 89 5d e4          	mov    %bx,-0x1c(%ebp)
 81ae1c9:	88 4d e0             	mov    %cl,-0x20(%ebp)
 81ae1cc:	66 89 55 dc          	mov    %dx,-0x24(%ebp)
 81ae1d0:	66 89 45 d8          	mov    %ax,-0x28(%ebp)
 81ae1d4:	c7 04 24 50 04 00 00 	movl   $0x450,(%esp)
 81ae1db:	e8 70 62 57 00       	call   8724450 <_Znwj>
 81ae1e0:	89 c3                	mov    %eax,%ebx
 81ae1e2:	0f bf 7d d8          	movswl -0x28(%ebp),%edi
 81ae1e6:	0f b7 45 dc          	movzwl -0x24(%ebp),%eax
 81ae1ea:	0f b7 f0             	movzwl %ax,%esi
 81ae1ed:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
 81ae1f1:	0f b6 c8             	movzbl %al,%ecx
 81ae1f4:	0f bf 55 e4          	movswl -0x1c(%ebp),%edx
 81ae1f8:	89 d8                	mov    %ebx,%eax
 81ae1fa:	89 7c 24 14          	mov    %edi,0x14(%esp)
 81ae1fe:	89 74 24 10          	mov    %esi,0x10(%esp)
 81ae202:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81ae206:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ae20a:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ae20d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ae211:	89 04 24             	mov    %eax,(%esp)
 81ae214:	e8 c3 ed ff ff       	call   81acfdc <_ZN5nexon4cash9NCashImplC1EPKcshts>
 81ae219:	eb 18                	jmp    81ae233 <_ZN5nexon4cash9NexonCashC1EPKcscss+0x83>
 81ae21b:	89 d6                	mov    %edx,%esi
 81ae21d:	89 c7                	mov    %eax,%edi
 81ae21f:	89 1c 24             	mov    %ebx,(%esp)
 81ae222:	e8 c9 62 57 00       	call   87244f0 <_ZdlPv>
 81ae227:	89 f8                	mov    %edi,%eax
 81ae229:	89 f2                	mov    %esi,%edx
 81ae22b:	89 04 24             	mov    %eax,(%esp)
 81ae22e:	e8 1d 55 93 00       	call   8ae3750 <_Unwind_Resume>
 81ae233:	89 da                	mov    %ebx,%edx
 81ae235:	8b 45 08             	mov    0x8(%ebp),%eax
 81ae238:	89 10                	mov    %edx,(%eax)
 81ae23a:	83 c4 3c             	add    $0x3c,%esp
 81ae23d:	5b                   	pop    %ebx
 81ae23e:	5e                   	pop    %esi
 81ae23f:	5f                   	pop    %edi
 81ae240:	5d                   	pop    %ebp
 81ae241:	c3                   	ret

```

```c
// nexon::cash::NexonCash::NexonCash @ 0x81ae1b0

/* nexon::cash::NexonCash::NexonCash(char const*, short, char, short, short) */

void __thiscall
nexon::cash::NexonCash::NexonCash
          (NexonCash *this,char *param_1,short param_2,char param_3,short param_4,short param_5)

{
  NCashImpl *this_00;
  
  this_00 = operator_new(0x450);
                    /* try { // try from 081ae214 to 081ae218 has its CatchHandler @ 081ae21b */
  NCashImpl::NCashImpl(this_00,param_1,param_2,param_3,param_4,param_5);
  *(NCashImpl **)this = this_00;
  return;
}

```

---

## cancel

```asm
// === 081ae3bc nexon::cash::NexonCash::cancel  [0x081ae3bc-0x81ae3e7] ===
 81ae3bc:	55                   	push   %ebp
 81ae3bd:	89 e5                	mov    %esp,%ebp
 81ae3bf:	83 ec 18             	sub    $0x18,%esp
 81ae3c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ae3c5:	8b 48 04             	mov    0x4(%eax),%ecx
 81ae3c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ae3cb:	0f b6 00             	movzbl (%eax),%eax
 81ae3ce:	0f b6 d0             	movzbl %al,%edx
 81ae3d1:	8b 45 08             	mov    0x8(%ebp),%eax
 81ae3d4:	8b 00                	mov    (%eax),%eax
 81ae3d6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81ae3da:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ae3de:	89 04 24             	mov    %eax,(%esp)
 81ae3e1:	e8 1e f9 ff ff       	call   81add04 <_ZN5nexon4cash9NCashImpl6cancelEhj>
 81ae3e6:	c9                   	leave
 81ae3e7:	c3                   	ret

```

```c
// nexon::cash::NexonCash::cancel @ 0x81ae3bc

/* nexon::cash::NexonCash::cancel(nexon::cash::NXTransaction const&) */

void __thiscall nexon::cash::NexonCash::cancel(NexonCash *this,NXTransaction *param_1)

{
  NCashImpl::cancel(*(NCashImpl **)this,(uchar)*param_1,*(uint *)(param_1 + 4));
  return;
}

```

---

## charge

```asm
// === 081ae440 nexon::cash::NexonCash::charge  [0x081ae440-0x81ae4ad] ===
 81ae440:	55                   	push   %ebp
 81ae441:	89 e5                	mov    %esp,%ebp
 81ae443:	53                   	push   %ebx
 81ae444:	83 ec 44             	sub    $0x44,%esp
 81ae447:	8b 55 10             	mov    0x10(%ebp),%edx
 81ae44a:	8b 45 14             	mov    0x14(%ebp),%eax
 81ae44d:	88 55 f4             	mov    %dl,-0xc(%ebp)
 81ae450:	88 45 f0             	mov    %al,-0x10(%ebp)
 81ae453:	0f b6 4d f0          	movzbl -0x10(%ebp),%ecx
 81ae457:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
 81ae45b:	8b 45 08             	mov    0x8(%ebp),%eax
 81ae45e:	8b 00                	mov    (%eax),%eax
 81ae460:	8b 5d 30             	mov    0x30(%ebp),%ebx
 81ae463:	89 5c 24 28          	mov    %ebx,0x28(%esp)
 81ae467:	8b 5d 2c             	mov    0x2c(%ebp),%ebx
 81ae46a:	89 5c 24 24          	mov    %ebx,0x24(%esp)
 81ae46e:	8b 5d 28             	mov    0x28(%ebp),%ebx
 81ae471:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 81ae475:	8b 5d 24             	mov    0x24(%ebp),%ebx
 81ae478:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 81ae47c:	8b 5d 20             	mov    0x20(%ebp),%ebx
 81ae47f:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81ae483:	8b 5d 1c             	mov    0x1c(%ebp),%ebx
 81ae486:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 81ae48a:	8b 5d 18             	mov    0x18(%ebp),%ebx
 81ae48d:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81ae491:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81ae495:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ae499:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ae49c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ae4a0:	89 04 24             	mov    %eax,(%esp)
 81ae4a3:	e8 8c f9 ff ff       	call   81ade34 <_ZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionE>
 81ae4a8:	83 c4 44             	add    $0x44,%esp
 81ae4ab:	5b                   	pop    %ebx
 81ae4ac:	5d                   	pop    %ebp
 81ae4ad:	c3                   	ret

```

```c
// nexon::cash::NexonCash::charge @ 0x81ae440

/* nexon::cash::NexonCash::charge(char*, unsigned char, unsigned char, int, char*, char*, char*,
   char*, int, nexon::cash::NXTransaction&) */

void __thiscall
nexon::cash::NexonCash::charge
          (NexonCash *this,char *param_1,uchar param_2,uchar param_3,int param_4,char *param_5,
          char *param_6,char *param_7,char *param_8,int param_9,NXTransaction *param_10)

{
  NCashImpl::chargeCash
            (*(NCashImpl **)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             param_9,param_10);
  return;
}

```

---

## checkCafeCoupon

```asm
// === 081ae414 nexon::cash::NexonCash::checkCafeCoupon  [0x081ae414-0x81ae429] ===
 81ae414:	55                   	push   %ebp
 81ae415:	89 e5                	mov    %esp,%ebp
 81ae417:	83 ec 18             	sub    $0x18,%esp
 81ae41a:	8b 45 08             	mov    0x8(%ebp),%eax
 81ae41d:	8b 00                	mov    (%eax),%eax
 81ae41f:	89 04 24             	mov    %eax,(%esp)
 81ae422:	e8 f7 05 00 00       	call   81aea1e <_ZN5nexon4cash9NCashImpl15checkCafeCouponEv>
 81ae427:	c9                   	leave
 81ae428:	c3                   	ret
 81ae429:	90                   	nop

```

```c
// nexon::cash::NexonCash::checkCafeCoupon @ 0x81ae414

/* nexon::cash::NexonCash::checkCafeCoupon() */

void nexon::cash::NexonCash::checkCafeCoupon(void)

{
  NCashImpl::checkCafeCoupon();
  return;
}

```

---

## checkCoupon

```asm
// === 081ae3e8 nexon::cash::NexonCash::checkCoupon  [0x081ae3e8-0x81ae3fd] ===
 81ae3e8:	55                   	push   %ebp
 81ae3e9:	89 e5                	mov    %esp,%ebp
 81ae3eb:	83 ec 18             	sub    $0x18,%esp
 81ae3ee:	8b 45 08             	mov    0x8(%ebp),%eax
 81ae3f1:	8b 00                	mov    (%eax),%eax
 81ae3f3:	89 04 24             	mov    %eax,(%esp)
 81ae3f6:	e8 0f 06 00 00       	call   81aea0a <_ZN5nexon4cash9NCashImpl11checkCouponEv>
 81ae3fb:	c9                   	leave
 81ae3fc:	c3                   	ret
 81ae3fd:	90                   	nop

```

```c
// nexon::cash::NexonCash::checkCoupon @ 0x81ae3e8

/* nexon::cash::NexonCash::checkCoupon() */

void nexon::cash::NexonCash::checkCoupon(void)

{
  NCashImpl::checkCoupon();
  return;
}

```

---

## checkEntrance

```asm
// === 081ae4ae nexon::cash::NexonCash::checkEntrance  [0x081ae4ae-0x81ae4d0] ===
 81ae4ae:	55                   	push   %ebp
 81ae4af:	89 e5                	mov    %esp,%ebp
 81ae4b1:	83 ec 18             	sub    $0x18,%esp
 81ae4b4:	8b 45 08             	mov    0x8(%ebp),%eax
 81ae4b7:	8b 00                	mov    (%eax),%eax
 81ae4b9:	8b 55 10             	mov    0x10(%ebp),%edx
 81ae4bc:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ae4c0:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ae4c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ae4c7:	89 04 24             	mov    %eax,(%esp)
 81ae4ca:	e8 47 ee ff ff       	call   81ad316 <_ZN5nexon4cash9NCashImpl13checkEntranceEPKcRc>
 81ae4cf:	c9                   	leave
 81ae4d0:	c3                   	ret

```

```c
// nexon::cash::NexonCash::checkEntrance @ 0x81ae4ae

/* nexon::cash::NexonCash::checkEntrance(char const*, char&) */

void __thiscall nexon::cash::NexonCash::checkEntrance(NexonCash *this,char *param_1,char *param_2)

{
  NCashImpl::checkEntrance(*(NCashImpl **)this,param_1,param_2);
  return;
}

```

---

## confirm

```asm
// === 081ae390 nexon::cash::NexonCash::confirm  [0x081ae390-0x81ae3bb] ===
 81ae390:	55                   	push   %ebp
 81ae391:	89 e5                	mov    %esp,%ebp
 81ae393:	83 ec 18             	sub    $0x18,%esp
 81ae396:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ae399:	8b 48 04             	mov    0x4(%eax),%ecx
 81ae39c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ae39f:	0f b6 00             	movzbl (%eax),%eax
 81ae3a2:	0f b6 d0             	movzbl %al,%edx
 81ae3a5:	8b 45 08             	mov    0x8(%ebp),%eax
 81ae3a8:	8b 00                	mov    (%eax),%eax
 81ae3aa:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81ae3ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ae3b2:	89 04 24             	mov    %eax,(%esp)
 81ae3b5:	e8 1a f8 ff ff       	call   81adbd4 <_ZN5nexon4cash9NCashImpl7confirmEhj>
 81ae3ba:	c9                   	leave
 81ae3bb:	c3                   	ret

```

```c
// nexon::cash::NexonCash::confirm @ 0x81ae390

/* nexon::cash::NexonCash::confirm(nexon::cash::NXTransaction const&) */

void __thiscall nexon::cash::NexonCash::confirm(NexonCash *this,NXTransaction *param_1)

{
  NCashImpl::confirm(*(NCashImpl **)this,(uchar)*param_1,*(uint *)(param_1 + 4));
  return;
}

```

---

## getBalance

```asm
// === 081ae258 nexon::cash::NexonCash::getBalance  [0x081ae258-0x81ae27b] ===
 81ae258:	55                   	push   %ebp
 81ae259:	89 e5                	mov    %esp,%ebp
 81ae25b:	83 ec 18             	sub    $0x18,%esp
 81ae25e:	8b 45 08             	mov    0x8(%ebp),%eax
 81ae261:	8b 00                	mov    (%eax),%eax
 81ae263:	8b 55 10             	mov    0x10(%ebp),%edx
 81ae266:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ae26a:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ae26d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ae271:	89 04 24             	mov    %eax,(%esp)
 81ae274:	e8 25 f2 ff ff       	call   81ad49e <_ZN5nexon4cash9NCashImpl10getBalanceEPKcRi>
 81ae279:	c9                   	leave
 81ae27a:	c3                   	ret
 81ae27b:	90                   	nop

```

```c
// nexon::cash::NexonCash::getBalance @ 0x81ae258

/* nexon::cash::NexonCash::getBalance(char const*, int&) */

void __thiscall nexon::cash::NexonCash::getBalance(NexonCash *this,char *param_1,int *param_2)

{
  NCashImpl::getBalance(*(NCashImpl **)this,param_1,param_2);
  return;
}

```

---

## gift

```asm
// === 081ae330 nexon::cash::NexonCash::gift  [0x081ae330-0x81ae38f] ===
 81ae330:	55                   	push   %ebp
 81ae331:	89 e5                	mov    %esp,%ebp
 81ae333:	83 ec 48             	sub    $0x48,%esp
 81ae336:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ae339:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81ae33c:	8b 45 10             	mov    0x10(%ebp),%eax
 81ae33f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ae342:	8b 45 08             	mov    0x8(%ebp),%eax
 81ae345:	8b 08                	mov    (%eax),%ecx
 81ae347:	8b 45 2c             	mov    0x2c(%ebp),%eax
 81ae34a:	89 44 24 24          	mov    %eax,0x24(%esp)
 81ae34e:	8b 45 28             	mov    0x28(%ebp),%eax
 81ae351:	89 44 24 20          	mov    %eax,0x20(%esp)
 81ae355:	8b 45 24             	mov    0x24(%ebp),%eax
 81ae358:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 81ae35c:	8b 45 20             	mov    0x20(%ebp),%eax
 81ae35f:	89 44 24 18          	mov    %eax,0x18(%esp)
 81ae363:	8b 45 1c             	mov    0x1c(%ebp),%eax
 81ae366:	89 44 24 14          	mov    %eax,0x14(%esp)
 81ae36a:	8b 45 18             	mov    0x18(%ebp),%eax
 81ae36d:	89 44 24 10          	mov    %eax,0x10(%esp)
 81ae371:	8b 45 14             	mov    0x14(%ebp),%eax
 81ae374:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81ae378:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ae37b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81ae37e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ae382:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ae386:	89 0c 24             	mov    %ecx,(%esp)
 81ae389:	e8 36 f6 ff ff       	call   81ad9c4 <_ZN5nexon4cash9NCashImpl4giftEyiiPKcS3_S3_S3_RNS0_13NXTransactionE>
 81ae38e:	c9                   	leave
 81ae38f:	c3                   	ret

```

```c
// nexon::cash::NexonCash::gift @ 0x81ae330

/* nexon::cash::NexonCash::gift(unsigned long long, int, int, char const*, char const*, char const*,
   char const*, nexon::cash::NXTransaction&) */

void __thiscall
nexon::cash::NexonCash::gift
          (NexonCash *this,ulonglong param_1,int param_2,int param_3,char *param_4,char *param_5,
          char *param_6,char *param_7,NXTransaction *param_8)

{
  NCashImpl::gift(CONCAT44((undefined4)param_1,*(undefined4 *)this),param_1._4_4_,param_2,
                  (char *)param_3,param_4,param_5,param_6,(NXTransaction *)param_7);
  return;
}

```

---

## purchase

```asm
// === 081ae27c nexon::cash::NexonCash::purchase  [0x081ae27c-0x81ae2cd] ===
 81ae27c:	55                   	push   %ebp
 81ae27d:	89 e5                	mov    %esp,%ebp
 81ae27f:	83 ec 38             	sub    $0x38,%esp
 81ae282:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ae285:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81ae288:	8b 45 10             	mov    0x10(%ebp),%eax
 81ae28b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ae28e:	8b 45 08             	mov    0x8(%ebp),%eax
 81ae291:	8b 08                	mov    (%eax),%ecx
 81ae293:	8b 45 24             	mov    0x24(%ebp),%eax
 81ae296:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 81ae29a:	8b 45 20             	mov    0x20(%ebp),%eax
 81ae29d:	89 44 24 18          	mov    %eax,0x18(%esp)
 81ae2a1:	8b 45 1c             	mov    0x1c(%ebp),%eax
 81ae2a4:	89 44 24 14          	mov    %eax,0x14(%esp)
 81ae2a8:	8b 45 18             	mov    0x18(%ebp),%eax
 81ae2ab:	89 44 24 10          	mov    %eax,0x10(%esp)
 81ae2af:	8b 45 14             	mov    0x14(%ebp),%eax
 81ae2b2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81ae2b6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ae2b9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81ae2bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ae2c0:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ae2c4:	89 0c 24             	mov    %ecx,(%esp)
 81ae2c7:	e8 f6 f2 ff ff       	call   81ad5c2 <_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionE>
 81ae2cc:	c9                   	leave
 81ae2cd:	c3                   	ret

```

```c
// nexon::cash::NexonCash::purchase @ 0x81ae27c

/* nexon::cash::NexonCash::purchase(unsigned long long, int, int, char const*, char const*,
   nexon::cash::NXTransaction&) */

void __thiscall
nexon::cash::NexonCash::purchase
          (NexonCash *this,ulonglong param_1,int param_2,int param_3,char *param_4,char *param_5,
          NXTransaction *param_6)

{
  NCashImpl::purchase(CONCAT44((undefined4)param_1,*(undefined4 *)this),param_1._4_4_,param_2,
                      (char *)param_3,param_4,(NXTransaction *)param_5);
  return;
}

```

---

## purchase_081ae2ce

```asm
// === 081ae2ce nexon::cash::NexonCash::purchase  [0x081ae2ce-0x81ae32f] ===
 81ae2ce:	55                   	push   %ebp
 81ae2cf:	89 e5                	mov    %esp,%ebp
 81ae2d1:	83 ec 48             	sub    $0x48,%esp
 81ae2d4:	8b 45 28             	mov    0x28(%ebp),%eax
 81ae2d7:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ae2da:	89 55 f0             	mov    %edx,-0x10(%ebp)
 81ae2dd:	8b 55 10             	mov    0x10(%ebp),%edx
 81ae2e0:	89 55 f4             	mov    %edx,-0xc(%ebp)
 81ae2e3:	66 89 45 ec          	mov    %ax,-0x14(%ebp)
 81ae2e7:	0f bf 45 ec          	movswl -0x14(%ebp),%eax
 81ae2eb:	8b 55 08             	mov    0x8(%ebp),%edx
 81ae2ee:	8b 0a                	mov    (%edx),%ecx
 81ae2f0:	89 44 24 20          	mov    %eax,0x20(%esp)
 81ae2f4:	8b 45 24             	mov    0x24(%ebp),%eax
 81ae2f7:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 81ae2fb:	8b 45 20             	mov    0x20(%ebp),%eax
 81ae2fe:	89 44 24 18          	mov    %eax,0x18(%esp)
 81ae302:	8b 45 1c             	mov    0x1c(%ebp),%eax
 81ae305:	89 44 24 14          	mov    %eax,0x14(%esp)
 81ae309:	8b 45 18             	mov    0x18(%ebp),%eax
 81ae30c:	89 44 24 10          	mov    %eax,0x10(%esp)
 81ae310:	8b 45 14             	mov    0x14(%ebp),%eax
 81ae313:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81ae317:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ae31a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81ae31d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ae321:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ae325:	89 0c 24             	mov    %ecx,(%esp)
 81ae328:	e8 81 f4 ff ff       	call   81ad7ae <_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionEs>
 81ae32d:	c9                   	leave
 81ae32e:	c3                   	ret
 81ae32f:	90                   	nop

```

```c
// nexon::cash::NexonCash::purchase @ 0x81ae2ce

/* nexon::cash::NexonCash::purchase(unsigned long long, int, int, char const*, char const*,
   nexon::cash::NXTransaction&, short) */

void __thiscall
nexon::cash::NexonCash::purchase
          (NexonCash *this,ulonglong param_1,int param_2,int param_3,char *param_4,char *param_5,
          NXTransaction *param_6,short param_7)

{
  NCashImpl::purchase(CONCAT44((undefined4)param_1,*(undefined4 *)this),param_1._4_4_,param_2,
                      (char *)param_3,param_4,(NXTransaction *)param_5,(short)param_6);
  return;
}

```

---

## useCafeCoupon

```asm
// === 081ae42a nexon::cash::NexonCash::useCafeCoupon  [0x081ae42a-0x81ae43f] ===
 81ae42a:	55                   	push   %ebp
 81ae42b:	89 e5                	mov    %esp,%ebp
 81ae42d:	83 ec 18             	sub    $0x18,%esp
 81ae430:	8b 45 08             	mov    0x8(%ebp),%eax
 81ae433:	8b 00                	mov    (%eax),%eax
 81ae435:	89 04 24             	mov    %eax,(%esp)
 81ae438:	e8 eb 05 00 00       	call   81aea28 <_ZN5nexon4cash9NCashImpl13useCafeCouponEv>
 81ae43d:	c9                   	leave
 81ae43e:	c3                   	ret
 81ae43f:	90                   	nop

```

```c
// nexon::cash::NexonCash::useCafeCoupon @ 0x81ae42a

/* nexon::cash::NexonCash::useCafeCoupon() */

void nexon::cash::NexonCash::useCafeCoupon(void)

{
  NCashImpl::useCafeCoupon();
  return;
}

```

---

## useCoupon

```asm
// === 081ae3fe nexon::cash::NexonCash::useCoupon  [0x081ae3fe-0x81ae413] ===
 81ae3fe:	55                   	push   %ebp
 81ae3ff:	89 e5                	mov    %esp,%ebp
 81ae401:	83 ec 18             	sub    $0x18,%esp
 81ae404:	8b 45 08             	mov    0x8(%ebp),%eax
 81ae407:	8b 00                	mov    (%eax),%eax
 81ae409:	89 04 24             	mov    %eax,(%esp)
 81ae40c:	e8 03 06 00 00       	call   81aea14 <_ZN5nexon4cash9NCashImpl9useCouponEv>
 81ae411:	c9                   	leave
 81ae412:	c3                   	ret
 81ae413:	90                   	nop

```

```c
// nexon::cash::NexonCash::useCoupon @ 0x81ae3fe

/* nexon::cash::NexonCash::useCoupon() */

void nexon::cash::NexonCash::useCoupon(void)

{
  NCashImpl::useCoupon();
  return;
}

```

---

## ~NexonCash

```asm
// === 081ae242 nexon::cash::NexonCash::~NexonCash  [0x081ae242-0x81ae257] ===
 81ae242:	55                   	push   %ebp
 81ae243:	89 e5                	mov    %esp,%ebp
 81ae245:	83 ec 18             	sub    $0x18,%esp
 81ae248:	8b 45 08             	mov    0x8(%ebp),%eax
 81ae24b:	8b 00                	mov    (%eax),%eax
 81ae24d:	89 04 24             	mov    %eax,(%esp)
 81ae250:	e8 5b fb ec ff       	call   807ddb0 <free@plt>
 81ae255:	c9                   	leave
 81ae256:	c3                   	ret
 81ae257:	90                   	nop

```

```c
// nexon::cash::NexonCash::~NexonCash @ 0x81ae242

/* nexon::cash::NexonCash::~NexonCash() */

void __thiscall nexon::cash::NexonCash::~NexonCash(NexonCash *this)

{
  free(*(void **)this);
  return;
}

```

