# ContentsType

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## getString

```asm
// === 08ac3434 ContentsType::getString  [0x08ac3434-0x8ac34a3] ===
 8ac3434:	55                   	push   %ebp
 8ac3435:	89 e5                	mov    %esp,%ebp
 8ac3437:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac343a:	83 f8 0c             	cmp    $0xc,%eax
 8ac343d:	77 5d                	ja     8ac349c <_ZN12ContentsType9getStringENS_1TE+0x68>
 8ac343f:	8b 04 85 48 e7 e2 08 	mov    0x8e2e748(,%eax,4),%eax
 8ac3446:	ff e0                	jmp    *%eax
 8ac3448:	b8 cc e6 e2 08       	mov    $0x8e2e6cc,%eax
 8ac344d:	eb 52                	jmp    8ac34a1 <_ZN12ContentsType9getStringENS_1TE+0x6d>
 8ac344f:	b8 d5 e6 e2 08       	mov    $0x8e2e6d5,%eax
 8ac3454:	eb 4b                	jmp    8ac34a1 <_ZN12ContentsType9getStringENS_1TE+0x6d>
 8ac3456:	b8 df e6 e2 08       	mov    $0x8e2e6df,%eax
 8ac345b:	eb 44                	jmp    8ac34a1 <_ZN12ContentsType9getStringENS_1TE+0x6d>
 8ac345d:	b8 eb e6 e2 08       	mov    $0x8e2e6eb,%eax
 8ac3462:	eb 3d                	jmp    8ac34a1 <_ZN12ContentsType9getStringENS_1TE+0x6d>
 8ac3464:	b8 f3 e6 e2 08       	mov    $0x8e2e6f3,%eax
 8ac3469:	eb 36                	jmp    8ac34a1 <_ZN12ContentsType9getStringENS_1TE+0x6d>
 8ac346b:	b8 fe e6 e2 08       	mov    $0x8e2e6fe,%eax
 8ac3470:	eb 2f                	jmp    8ac34a1 <_ZN12ContentsType9getStringENS_1TE+0x6d>
 8ac3472:	b8 09 e7 e2 08       	mov    $0x8e2e709,%eax
 8ac3477:	eb 28                	jmp    8ac34a1 <_ZN12ContentsType9getStringENS_1TE+0x6d>
 8ac3479:	b8 13 e7 e2 08       	mov    $0x8e2e713,%eax
 8ac347e:	eb 21                	jmp    8ac34a1 <_ZN12ContentsType9getStringENS_1TE+0x6d>
 8ac3480:	b8 20 e7 e2 08       	mov    $0x8e2e720,%eax
 8ac3485:	eb 1a                	jmp    8ac34a1 <_ZN12ContentsType9getStringENS_1TE+0x6d>
 8ac3487:	b8 26 e7 e2 08       	mov    $0x8e2e726,%eax
 8ac348c:	eb 13                	jmp    8ac34a1 <_ZN12ContentsType9getStringENS_1TE+0x6d>
 8ac348e:	b8 31 e7 e2 08       	mov    $0x8e2e731,%eax
 8ac3493:	eb 0c                	jmp    8ac34a1 <_ZN12ContentsType9getStringENS_1TE+0x6d>
 8ac3495:	b8 3b e7 e2 08       	mov    $0x8e2e73b,%eax
 8ac349a:	eb 05                	jmp    8ac34a1 <_ZN12ContentsType9getStringENS_1TE+0x6d>
 8ac349c:	b8 45 e7 e2 08       	mov    $0x8e2e745,%eax
 8ac34a1:	5d                   	pop    %ebp
 8ac34a2:	c3                   	ret
 8ac34a3:	90                   	nop

```

```c
// ContentsType::getString @ 0x8ac3434

/* ContentsType::getString(ContentsType::T) */

char * ContentsType::getString(undefined4 param_1)

{
  char *pcVar1;
  
  switch(param_1) {
  default:
    pcVar1 = "";
    break;
  case 1:
    pcVar1 = "[normal]";
    break;
  case 2:
    pcVar1 = "[ancient]";
    break;
  case 3:
    pcVar1 = "[dimension]";
    break;
  case 4:
    pcVar1 = "[tower]";
    break;
  case 5:
    pcVar1 = "[infinite]";
    break;
  case 6:
    pcVar1 = "[ultimate]";
    break;
  case 7:
    pcVar1 = "[despair]";
    break;
  case 8:
    pcVar1 = "[tournament]";
    break;
  case 9:
    pcVar1 = "[pvp]";
    break;
  case 10:
    pcVar1 = "[fair pvp]";
    break;
  case 0xb:
    pcVar1 = "[warroom]";
    break;
  case 0xc:
    pcVar1 = "[assault]";
  }
  return pcVar1;
}

```

---

## getType

```asm
// === 08ac34a4 ContentsType::getType  [0x08ac34a4-0x8ac35cb] ===
 8ac34a4:	55                   	push   %ebp
 8ac34a5:	89 e5                	mov    %esp,%ebp
 8ac34a7:	56                   	push   %esi
 8ac34a8:	53                   	push   %ebx
 8ac34a9:	83 ec 30             	sub    $0x30,%esp
 8ac34ac:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8ac34b3:	e9 f9 00 00 00       	jmp    8ac35b1 <_ZN12ContentsType7getTypeEPKc+0x10d>
 8ac34b8:	8d 45 eb             	lea    -0x15(%ebp),%eax
 8ac34bb:	89 04 24             	mov    %eax,(%esp)
 8ac34be:	e8 0d cc c1 ff       	call   86e00d0 <_ZNSaIcEC1Ev>
 8ac34c3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac34c6:	89 04 24             	mov    %eax,(%esp)
 8ac34c9:	e8 66 ff ff ff       	call   8ac3434 <_ZN12ContentsType9getStringENS_1TE>
 8ac34ce:	8d 55 eb             	lea    -0x15(%ebp),%edx
 8ac34d1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac34d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac34d9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ac34dc:	89 04 24             	mov    %eax,(%esp)
 8ac34df:	e8 4c 41 c4 ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8ac34e4:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8ac34e7:	89 04 24             	mov    %eax,(%esp)
 8ac34ea:	e8 e1 cb c1 ff       	call   86e00d0 <_ZNSaIcEC1Ev>
 8ac34ef:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8ac34f2:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac34f6:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac34f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac34fd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac3500:	89 04 24             	mov    %eax,(%esp)
 8ac3503:	e8 28 41 c4 ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8ac3508:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ac350b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac350f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac3512:	89 04 24             	mov    %eax,(%esp)
 8ac3515:	e8 59 dd 6a ff       	call   8171273 <_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_>
 8ac351a:	89 c3                	mov    %eax,%ebx
 8ac351c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac351f:	89 04 24             	mov    %eax,(%esp)
 8ac3522:	e8 b9 46 c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ac3527:	eb 3d                	jmp    8ac3566 <_ZN12ContentsType7getTypeEPKc+0xc2>
 8ac3529:	89 d3                	mov    %edx,%ebx
 8ac352b:	89 c6                	mov    %eax,%esi
 8ac352d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac3530:	89 04 24             	mov    %eax,(%esp)
 8ac3533:	e8 a8 46 c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ac3538:	89 f0                	mov    %esi,%eax
 8ac353a:	89 da                	mov    %ebx,%edx
 8ac353c:	eb 00                	jmp    8ac353e <_ZN12ContentsType7getTypeEPKc+0x9a>
 8ac353e:	89 d3                	mov    %edx,%ebx
 8ac3540:	89 c6                	mov    %eax,%esi
 8ac3542:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8ac3545:	89 04 24             	mov    %eax,(%esp)
 8ac3548:	e8 a3 cb c1 ff       	call   86e00f0 <_ZNSaIcED1Ev>
 8ac354d:	89 f0                	mov    %esi,%eax
 8ac354f:	89 da                	mov    %ebx,%edx
 8ac3551:	89 d3                	mov    %edx,%ebx
 8ac3553:	89 c6                	mov    %eax,%esi
 8ac3555:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ac3558:	89 04 24             	mov    %eax,(%esp)
 8ac355b:	e8 80 46 c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ac3560:	89 f0                	mov    %esi,%eax
 8ac3562:	89 da                	mov    %ebx,%edx
 8ac3564:	eb 18                	jmp    8ac357e <_ZN12ContentsType7getTypeEPKc+0xda>
 8ac3566:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8ac3569:	89 04 24             	mov    %eax,(%esp)
 8ac356c:	e8 7f cb c1 ff       	call   86e00f0 <_ZNSaIcED1Ev>
 8ac3571:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ac3574:	89 04 24             	mov    %eax,(%esp)
 8ac3577:	e8 64 46 c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ac357c:	eb 1b                	jmp    8ac3599 <_ZN12ContentsType7getTypeEPKc+0xf5>
 8ac357e:	89 d3                	mov    %edx,%ebx
 8ac3580:	89 c6                	mov    %eax,%esi
 8ac3582:	8d 45 eb             	lea    -0x15(%ebp),%eax
 8ac3585:	89 04 24             	mov    %eax,(%esp)
 8ac3588:	e8 63 cb c1 ff       	call   86e00f0 <_ZNSaIcED1Ev>
 8ac358d:	89 f0                	mov    %esi,%eax
 8ac358f:	89 da                	mov    %ebx,%edx
 8ac3591:	89 04 24             	mov    %eax,(%esp)
 8ac3594:	e8 b7 01 02 00       	call   8ae3750 <_Unwind_Resume>
 8ac3599:	8d 45 eb             	lea    -0x15(%ebp),%eax
 8ac359c:	89 04 24             	mov    %eax,(%esp)
 8ac359f:	e8 4c cb c1 ff       	call   86e00f0 <_ZNSaIcED1Ev>
 8ac35a4:	84 db                	test   %bl,%bl
 8ac35a6:	74 05                	je     8ac35ad <_ZN12ContentsType7getTypeEPKc+0x109>
 8ac35a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac35ab:	eb 18                	jmp    8ac35c5 <_ZN12ContentsType7getTypeEPKc+0x121>
 8ac35ad:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8ac35b1:	83 7d f4 0c          	cmpl   $0xc,-0xc(%ebp)
 8ac35b5:	0f 9e c0             	setle  %al
 8ac35b8:	84 c0                	test   %al,%al
 8ac35ba:	0f 85 f8 fe ff ff    	jne    8ac34b8 <_ZN12ContentsType7getTypeEPKc+0x14>
 8ac35c0:	b8 00 00 00 00       	mov    $0x0,%eax
 8ac35c5:	83 c4 30             	add    $0x30,%esp
 8ac35c8:	5b                   	pop    %ebx
 8ac35c9:	5e                   	pop    %esi
 8ac35ca:	5d                   	pop    %ebp
 8ac35cb:	c3                   	ret

```

```c
// ContentsType::getType @ 0x8ac34a4

/* ContentsType::getType(char const*) */

int ContentsType::getType(char *param_1)

{
  char cVar1;
  char *pcVar2;
  string local_20;
  allocator<char> local_19;
  string local_18;
  allocator<char> local_11;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (0xc < local_10) {
      return 0;
    }
    std::allocator<char>::allocator();
    pcVar2 = (char *)getString(local_10);
                    /* try { // try from 08ac34df to 08ac34e3 has its CatchHandler @ 08ac357e */
    std::string::string((string *)&local_20,pcVar2,(allocator *)&local_19);
    std::allocator<char>::allocator();
                    /* try { // try from 08ac3503 to 08ac3507 has its CatchHandler @ 08ac353e */
    std::string::string((string *)&local_18,param_1,(allocator *)&local_11);
                    /* try { // try from 08ac3515 to 08ac3519 has its CatchHandler @ 08ac3529 */
    cVar1 = std::operator==(&local_18,&local_20);
                    /* try { // try from 08ac3522 to 08ac3526 has its CatchHandler @ 08ac353e */
    std::string::~string((string *)&local_18);
    std::allocator<char>::~allocator(&local_11);
                    /* try { // try from 08ac3577 to 08ac357b has its CatchHandler @ 08ac357e */
    std::string::~string((string *)&local_20);
    std::allocator<char>::~allocator(&local_19);
    if (cVar1 != '\0') break;
    local_10 = local_10 + 1;
  }
  return local_10;
}

```

