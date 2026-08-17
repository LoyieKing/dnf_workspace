# APSystem__DB_UpdateActionPoint

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## MakeActionClearStateString

```asm
// === 081246d6 APSystem::DB_UpdateActionPoint::MakeActionClearStateString  [0x081246d6-0x8124879] ===
 81246d6:	55                   	push   %ebp
 81246d7:	89 e5                	mov    %esp,%ebp
 81246d9:	57                   	push   %edi
 81246da:	56                   	push   %esi
 81246db:	53                   	push   %ebx
 81246dc:	81 ec dc 00 00 00    	sub    $0xdc,%esp
 81246e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81246e5:	89 04 24             	mov    %eax,(%esp)
 81246e8:	e8 e3 46 5e 00       	call   8708dd0 <_ZNSs5clearEv>
 81246ed:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81246f0:	89 04 24             	mov    %eax,(%esp)
 81246f3:	e8 d8 1e 5e 00       	call   87065d0 <_ZNSsC1Ev>
 81246f8:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 81246ff:	e9 32 01 00 00       	jmp    8124836 <_ZN8APSystem20DB_UpdateActionPoint26MakeActionClearStateStringERSsPKNS_12_ActionPointEj+0x160>
 8124704:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8124707:	89 d0                	mov    %edx,%eax
 8124709:	c1 e0 02             	shl    $0x2,%eax
 812470c:	01 d0                	add    %edx,%eax
 812470e:	01 c0                	add    %eax,%eax
 8124710:	01 d0                	add    %edx,%eax
 8124712:	03 45 10             	add    0x10(%ebp),%eax
 8124715:	8b 40 02             	mov    0x2(%eax),%eax
 8124718:	89 04 24             	mov    %eax,(%esp)
 812471b:	e8 36 02 77 00       	call   8894956 <_ZN8APSystem24CActionPointEtcParameter23IsValidActionGroupIndexENS_17_ActionGroupIndexE>
 8124720:	83 f0 01             	xor    $0x1,%eax
 8124723:	84 c0                	test   %al,%al
 8124725:	0f 85 06 01 00 00    	jne    8124831 <_ZN8APSystem20DB_UpdateActionPoint26MakeActionClearStateStringERSsPKNS_12_ActionPointEj+0x15b>
 812472b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 812472e:	89 d0                	mov    %edx,%eax
 8124730:	c1 e0 02             	shl    $0x2,%eax
 8124733:	01 d0                	add    %edx,%eax
 8124735:	01 c0                	add    %eax,%eax
 8124737:	01 d0                	add    %edx,%eax
 8124739:	03 45 10             	add    0x10(%ebp),%eax
 812473c:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 8124740:	0f be c0             	movsbl %al,%eax
 8124743:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 8124749:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 812474c:	89 d0                	mov    %edx,%eax
 812474e:	c1 e0 02             	shl    $0x2,%eax
 8124751:	01 d0                	add    %edx,%eax
 8124753:	01 c0                	add    %eax,%eax
 8124755:	01 d0                	add    %edx,%eax
 8124757:	03 45 10             	add    0x10(%ebp),%eax
 812475a:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 812475e:	0f be c0             	movsbl %al,%eax
 8124761:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 8124767:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 812476a:	89 d0                	mov    %edx,%eax
 812476c:	c1 e0 02             	shl    $0x2,%eax
 812476f:	01 d0                	add    %edx,%eax
 8124771:	01 c0                	add    %eax,%eax
 8124773:	01 d0                	add    %edx,%eax
 8124775:	03 45 10             	add    0x10(%ebp),%eax
 8124778:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 812477c:	0f be f8             	movsbl %al,%edi
 812477f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8124782:	89 d0                	mov    %edx,%eax
 8124784:	c1 e0 02             	shl    $0x2,%eax
 8124787:	01 d0                	add    %edx,%eax
 8124789:	01 c0                	add    %eax,%eax
 812478b:	01 d0                	add    %edx,%eax
 812478d:	03 45 10             	add    0x10(%ebp),%eax
 8124790:	0f b6 40 07          	movzbl 0x7(%eax),%eax
 8124794:	0f be f0             	movsbl %al,%esi
 8124797:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 812479a:	89 d0                	mov    %edx,%eax
 812479c:	c1 e0 02             	shl    $0x2,%eax
 812479f:	01 d0                	add    %edx,%eax
 81247a1:	01 c0                	add    %eax,%eax
 81247a3:	01 d0                	add    %edx,%eax
 81247a5:	03 45 10             	add    0x10(%ebp),%eax
 81247a8:	0f b6 40 06          	movzbl 0x6(%eax),%eax
 81247ac:	0f be d8             	movsbl %al,%ebx
 81247af:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81247b2:	89 d0                	mov    %edx,%eax
 81247b4:	c1 e0 02             	shl    $0x2,%eax
 81247b7:	01 d0                	add    %edx,%eax
 81247b9:	01 c0                	add    %eax,%eax
 81247bb:	01 d0                	add    %edx,%eax
 81247bd:	03 45 10             	add    0x10(%ebp),%eax
 81247c0:	8b 40 02             	mov    0x2(%eax),%eax
 81247c3:	89 c1                	mov    %eax,%ecx
 81247c5:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81247c8:	89 d0                	mov    %edx,%eax
 81247ca:	c1 e0 02             	shl    $0x2,%eax
 81247cd:	01 d0                	add    %edx,%eax
 81247cf:	01 c0                	add    %eax,%eax
 81247d1:	01 d0                	add    %edx,%eax
 81247d3:	03 45 10             	add    0x10(%ebp),%eax
 81247d6:	0f b7 00             	movzwl (%eax),%eax
 81247d9:	0f b7 c0             	movzwl %ax,%eax
 81247dc:	8b 95 50 ff ff ff    	mov    -0xb0(%ebp),%edx
 81247e2:	89 54 24 20          	mov    %edx,0x20(%esp)
 81247e6:	8b 95 54 ff ff ff    	mov    -0xac(%ebp),%edx
 81247ec:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 81247f0:	89 7c 24 18          	mov    %edi,0x18(%esp)
 81247f4:	89 74 24 14          	mov    %esi,0x14(%esp)
 81247f8:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81247fc:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8124800:	89 44 24 08          	mov    %eax,0x8(%esp)
 8124804:	c7 44 24 04 09 e5 b5 	movl   $0x8b5e509,0x4(%esp)
 812480b:	08 
 812480c:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8124812:	89 04 24             	mov    %eax,(%esp)
 8124815:	e8 26 9c f5 ff       	call   807e440 <sprintf@plt>
 812481a:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8124820:	89 44 24 04          	mov    %eax,0x4(%esp)
 8124824:	8b 45 0c             	mov    0xc(%ebp),%eax
 8124827:	89 04 24             	mov    %eax,(%esp)
 812482a:	e8 01 38 5e 00       	call   8708030 <_ZNSspLEPKc>
 812482f:	eb 01                	jmp    8124832 <_ZN8APSystem20DB_UpdateActionPoint26MakeActionClearStateStringERSsPKNS_12_ActionPointEj+0x15c>
 8124831:	90                   	nop
 8124832:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8124836:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8124839:	3b 45 14             	cmp    0x14(%ebp),%eax
 812483c:	0f 92 c0             	setb   %al
 812483f:	84 c0                	test   %al,%al
 8124841:	0f 85 bd fe ff ff    	jne    8124704 <_ZN8APSystem20DB_UpdateActionPoint26MakeActionClearStateStringERSsPKNS_12_ActionPointEj+0x2e>
 8124847:	eb 1b                	jmp    8124864 <_ZN8APSystem20DB_UpdateActionPoint26MakeActionClearStateStringERSsPKNS_12_ActionPointEj+0x18e>
 8124849:	89 d3                	mov    %edx,%ebx
 812484b:	89 c6                	mov    %eax,%esi
 812484d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8124850:	89 04 24             	mov    %eax,(%esp)
 8124853:	e8 88 33 5e 00       	call   8707be0 <_ZNSsD1Ev>
 8124858:	89 f0                	mov    %esi,%eax
 812485a:	89 da                	mov    %ebx,%edx
 812485c:	89 04 24             	mov    %eax,(%esp)
 812485f:	e8 ec ee 9b 00       	call   8ae3750 <_Unwind_Resume>
 8124864:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8124867:	89 04 24             	mov    %eax,(%esp)
 812486a:	e8 71 33 5e 00       	call   8707be0 <_ZNSsD1Ev>
 812486f:	81 c4 dc 00 00 00    	add    $0xdc,%esp
 8124875:	5b                   	pop    %ebx
 8124876:	5e                   	pop    %esi
 8124877:	5f                   	pop    %edi
 8124878:	5d                   	pop    %ebp
 8124879:	c3                   	ret

```

```c
// APSystem::DB_UpdateActionPoint::MakeActionClearStateString @ 0x81246d6

/* APSystem::DB_UpdateActionPoint::MakeActionClearStateString(std::string&, APSystem::_ActionPoint
   const*, unsigned int) */

void __thiscall
APSystem::DB_UpdateActionPoint::MakeActionClearStateString
          (DB_UpdateActionPoint *this,string *param_1,_ActionPoint *param_2,uint param_3)

{
  char cVar1;
  char local_a4 [128];
  string local_24 [4];
  uint local_20;
  
  std::string::clear((string *)param_1);
  std::string::string(local_24);
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
                    /* try { // try from 0812471b to 0812482e has its CatchHandler @ 08124849 */
    cVar1 = CActionPointEtcParameter::IsValidActionGroupIndex
                      (*(undefined4 *)(param_2 + local_20 * 0xb + 2));
    if (cVar1 == '\x01') {
      sprintf(local_a4,"%d,%d,%d,%d,%d,%d,%d|",(uint)*(ushort *)(param_2 + local_20 * 0xb),
              *(undefined4 *)(param_2 + local_20 * 0xb + 2),(int)(char)param_2[local_20 * 0xb + 6],
              (int)(char)param_2[local_20 * 0xb + 7],(int)(char)param_2[local_20 * 0xb + 8],
              (int)(char)param_2[local_20 * 0xb + 9],(int)(char)param_2[local_20 * 0xb + 10]);
      std::string::operator+=((string *)param_1,local_a4);
    }
  }
  std::string::~string(local_24);
  return;
}

```

---

## Update

```asm
// === 08124386 APSystem::DB_UpdateActionPoint::Update  [0x08124386-0x81246d5] ===
 8124386:	55                   	push   %ebp
 8124387:	89 e5                	mov    %esp,%ebp
 8124389:	57                   	push   %edi
 812438a:	56                   	push   %esi
 812438b:	53                   	push   %ebx
 812438c:	81 ec ac 00 00 00    	sub    $0xac,%esp
 8124392:	8b 45 0c             	mov    0xc(%ebp),%eax
 8124395:	88 45 94             	mov    %al,-0x6c(%ebp)
 8124398:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 812439d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81243a4:	00 
 81243a5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81243ac:	00 
 81243ad:	89 04 24             	mov    %eax,(%esp)
 81243b0:	e8 89 0e 2d 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 81243b5:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81243b8:	80 7d 94 00          	cmpb   $0x0,-0x6c(%ebp)
 81243bc:	74 2e                	je     81243ec <_ZN8APSystem20DB_UpdateActionPoint6UpdateEbRKNS_22_SIG_LOAD_ACTION_POINTE+0x66>
 81243be:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81243c5:	e8 d4 78 fa ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81243ca:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81243cd:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81243d0:	2d 80 51 01 00       	sub    $0x15180,%eax
 81243d5:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81243d8:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81243db:	89 44 24 04          	mov    %eax,0x4(%esp)
 81243df:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81243e2:	89 04 24             	mov    %eax,(%esp)
 81243e5:	e8 76 9f f5 ff       	call   807e360 <localtime_r@plt>
 81243ea:	eb 0b                	jmp    81243f7 <_ZN8APSystem20DB_UpdateActionPoint6UpdateEbRKNS_22_SIG_LOAD_ACTION_POINTE+0x71>
 81243ec:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81243ef:	89 04 24             	mov    %eax,(%esp)
 81243f2:	e8 c9 db 58 00       	call   86b1fc0 <_Z19__GetCurrentDNFDateR2tm>
 81243f7:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 81243fe:	00 
 81243ff:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8124406:	00 
 8124407:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 812440a:	89 04 24             	mov    %eax,(%esp)
 812440d:	e8 ae 98 f5 ff       	call   807dcc0 <memset@plt>
 8124412:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8124415:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8124418:	8d 4a 01             	lea    0x1(%edx),%ecx
 812441b:	8b 55 b0             	mov    -0x50(%ebp),%edx
 812441e:	81 c2 6c 07 00 00    	add    $0x76c,%edx
 8124424:	89 44 24 10          	mov    %eax,0x10(%esp)
 8124428:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 812442c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8124430:	c7 44 24 04 23 e2 b5 	movl   $0x8b5e223,0x4(%esp)
 8124437:	08 
 8124438:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 812443b:	89 04 24             	mov    %eax,(%esp)
 812443e:	e8 fd 9f f5 ff       	call   807e440 <sprintf@plt>
 8124443:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8124446:	89 04 24             	mov    %eax,(%esp)
 8124449:	e8 82 21 5e 00       	call   87065d0 <_ZNSsC1Ev>
 812444e:	8b 45 10             	mov    0x10(%ebp),%eax
 8124451:	83 c0 0d             	add    $0xd,%eax
 8124454:	c7 44 24 0c 2c 01 00 	movl   $0x12c,0xc(%esp)
 812445b:	00 
 812445c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8124460:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8124463:	89 44 24 04          	mov    %eax,0x4(%esp)
 8124467:	8b 45 08             	mov    0x8(%ebp),%eax
 812446a:	89 04 24             	mov    %eax,(%esp)
 812446d:	e8 64 02 00 00       	call   81246d6 <_ZN8APSystem20DB_UpdateActionPoint26MakeActionClearStateStringERSsPKNS_12_ActionPointEj>
 8124472:	c7 45 cc 00 04 00 00 	movl   $0x400,-0x34(%ebp)
 8124479:	8b 45 cc             	mov    -0x34(%ebp),%eax
 812447c:	3d ff 07 00 00       	cmp    $0x7ff,%eax
 8124481:	76 0a                	jbe    812448d <_ZN8APSystem20DB_UpdateActionPoint6UpdateEbRKNS_22_SIG_LOAD_ACTION_POINTE+0x107>
 8124483:	bb 00 00 00 00       	mov    $0x0,%ebx
 8124488:	e9 31 02 00 00       	jmp    81246be <_ZN8APSystem20DB_UpdateActionPoint6UpdateEbRKNS_22_SIG_LOAD_ACTION_POINTE+0x338>
 812448d:	c7 44 24 08 00 08 00 	movl   $0x800,0x8(%esp)
 8124494:	00 
 8124495:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 812449c:	00 
 812449d:	c7 04 24 a0 f0 3f 09 	movl   $0x93ff0a0,(%esp)
 81244a4:	e8 17 98 f5 ff       	call   807dcc0 <memset@plt>
 81244a9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81244ac:	89 04 24             	mov    %eax,(%esp)
 81244af:	e8 ac 21 5e 00       	call   8706660 <_ZNKSs4sizeEv>
 81244b4:	89 c3                	mov    %eax,%ebx
 81244b6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81244b9:	89 04 24             	mov    %eax,(%esp)
 81244bc:	e8 2f 20 5e 00       	call   87064f0 <_ZNKSs5c_strEv>
 81244c1:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81244c5:	89 44 24 08          	mov    %eax,0x8(%esp)
 81244c9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81244cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81244d0:	c7 04 24 a0 f0 3f 09 	movl   $0x93ff0a0,(%esp)
 81244d7:	e8 43 db 58 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 81244dc:	83 f0 01             	xor    $0x1,%eax
 81244df:	84 c0                	test   %al,%al
 81244e1:	74 0a                	je     81244ed <_ZN8APSystem20DB_UpdateActionPoint6UpdateEbRKNS_22_SIG_LOAD_ACTION_POINTE+0x167>
 81244e3:	bb 00 00 00 00       	mov    $0x0,%ebx
 81244e8:	e9 d1 01 00 00       	jmp    81246be <_ZN8APSystem20DB_UpdateActionPoint6UpdateEbRKNS_22_SIG_LOAD_ACTION_POINTE+0x338>
 81244ed:	8b 45 10             	mov    0x10(%ebp),%eax
 81244f0:	8b 18                	mov    (%eax),%ebx
 81244f2:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81244f5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81244f9:	c7 44 24 08 a0 f0 3f 	movl   $0x93ff0a0,0x8(%esp)
 8124500:	09 
 8124501:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8124508:	00 
 8124509:	8b 45 e0             	mov    -0x20(%ebp),%eax
 812450c:	89 04 24             	mov    %eax,(%esp)
 812450f:	e8 16 00 2d 00       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8124514:	89 c6                	mov    %eax,%esi
 8124516:	8b 45 10             	mov    0x10(%ebp),%eax
 8124519:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 812451d:	0f b6 c0             	movzbl %al,%eax
 8124520:	89 45 80             	mov    %eax,-0x80(%ebp)
 8124523:	8b 45 10             	mov    0x10(%ebp),%eax
 8124526:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 812452a:	0f b6 c0             	movzbl %al,%eax
 812452d:	89 45 84             	mov    %eax,-0x7c(%ebp)
 8124530:	8b 45 10             	mov    0x10(%ebp),%eax
 8124533:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 8124537:	0f b6 c0             	movzbl %al,%eax
 812453a:	89 45 88             	mov    %eax,-0x78(%ebp)
 812453d:	8b 45 10             	mov    0x10(%ebp),%eax
 8124540:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 8124544:	0f b6 f8             	movzbl %al,%edi
 8124547:	8b 45 10             	mov    0x10(%ebp),%eax
 812454a:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 812454e:	0f b6 c8             	movzbl %al,%ecx
 8124551:	8b 45 10             	mov    0x10(%ebp),%eax
 8124554:	8b 50 04             	mov    0x4(%eax),%edx
 8124557:	89 5c 24 28          	mov    %ebx,0x28(%esp)
 812455b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 812455e:	89 44 24 24          	mov    %eax,0x24(%esp)
 8124562:	89 74 24 20          	mov    %esi,0x20(%esp)
 8124566:	8b 45 80             	mov    -0x80(%ebp),%eax
 8124569:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 812456d:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8124570:	89 44 24 18          	mov    %eax,0x18(%esp)
 8124574:	8b 45 88             	mov    -0x78(%ebp),%eax
 8124577:	89 44 24 14          	mov    %eax,0x14(%esp)
 812457b:	89 7c 24 10          	mov    %edi,0x10(%esp)
 812457f:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8124583:	89 54 24 08          	mov    %edx,0x8(%esp)
 8124587:	c7 44 24 04 30 e3 b5 	movl   $0x8b5e330,0x4(%esp)
 812458e:	08 
 812458f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8124592:	89 04 24             	mov    %eax,(%esp)
 8124595:	e8 26 fc 2c 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 812459a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81245a1:	00 
 81245a2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81245a5:	89 04 24             	mov    %eax,(%esp)
 81245a8:	e8 79 fd 2c 00       	call   83f4326 <_ZN5MySQL4execEb>
 81245ad:	88 45 e7             	mov    %al,-0x19(%ebp)
 81245b0:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 81245b4:	83 f0 01             	xor    $0x1,%eax
 81245b7:	84 c0                	test   %al,%al
 81245b9:	75 11                	jne    81245cc <_ZN8APSystem20DB_UpdateActionPoint6UpdateEbRKNS_22_SIG_LOAD_ACTION_POINTE+0x246>
 81245bb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81245be:	89 04 24             	mov    %eax,(%esp)
 81245c1:	e8 4a fd 2c 00       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 81245c6:	09 d0                	or     %edx,%eax
 81245c8:	85 c0                	test   %eax,%eax
 81245ca:	75 07                	jne    81245d3 <_ZN8APSystem20DB_UpdateActionPoint6UpdateEbRKNS_22_SIG_LOAD_ACTION_POINTE+0x24d>
 81245cc:	b8 01 00 00 00       	mov    $0x1,%eax
 81245d1:	eb 05                	jmp    81245d8 <_ZN8APSystem20DB_UpdateActionPoint6UpdateEbRKNS_22_SIG_LOAD_ACTION_POINTE+0x252>
 81245d3:	b8 00 00 00 00       	mov    $0x0,%eax
 81245d8:	84 c0                	test   %al,%al
 81245da:	0f 84 bd 00 00 00    	je     812469d <_ZN8APSystem20DB_UpdateActionPoint6UpdateEbRKNS_22_SIG_LOAD_ACTION_POINTE+0x317>
 81245e0:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81245e3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81245e7:	c7 44 24 08 a0 f0 3f 	movl   $0x93ff0a0,0x8(%esp)
 81245ee:	09 
 81245ef:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81245f6:	00 
 81245f7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81245fa:	89 04 24             	mov    %eax,(%esp)
 81245fd:	e8 28 ff 2c 00       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8124602:	89 c2                	mov    %eax,%edx
 8124604:	8b 45 10             	mov    0x10(%ebp),%eax
 8124607:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 812460b:	0f b6 c0             	movzbl %al,%eax
 812460e:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8124611:	8b 45 10             	mov    0x10(%ebp),%eax
 8124614:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 8124618:	0f b6 c0             	movzbl %al,%eax
 812461b:	89 45 90             	mov    %eax,-0x70(%ebp)
 812461e:	8b 45 10             	mov    0x10(%ebp),%eax
 8124621:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 8124625:	0f b6 f8             	movzbl %al,%edi
 8124628:	8b 45 10             	mov    0x10(%ebp),%eax
 812462b:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 812462f:	0f b6 f0             	movzbl %al,%esi
 8124632:	8b 45 10             	mov    0x10(%ebp),%eax
 8124635:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8124639:	0f b6 d8             	movzbl %al,%ebx
 812463c:	8b 45 10             	mov    0x10(%ebp),%eax
 812463f:	8b 48 04             	mov    0x4(%eax),%ecx
 8124642:	8b 45 10             	mov    0x10(%ebp),%eax
 8124645:	8b 00                	mov    (%eax),%eax
 8124647:	89 54 24 28          	mov    %edx,0x28(%esp)
 812464b:	8b 55 8c             	mov    -0x74(%ebp),%edx
 812464e:	89 54 24 24          	mov    %edx,0x24(%esp)
 8124652:	8b 55 90             	mov    -0x70(%ebp),%edx
 8124655:	89 54 24 20          	mov    %edx,0x20(%esp)
 8124659:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 812465d:	89 74 24 18          	mov    %esi,0x18(%esp)
 8124661:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8124665:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8124669:	89 44 24 0c          	mov    %eax,0xc(%esp)
 812466d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8124670:	89 44 24 08          	mov    %eax,0x8(%esp)
 8124674:	c7 44 24 04 10 e4 b5 	movl   $0x8b5e410,0x4(%esp)
 812467b:	08 
 812467c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 812467f:	89 04 24             	mov    %eax,(%esp)
 8124682:	e8 39 fb 2c 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8124687:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 812468e:	00 
 812468f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8124692:	89 04 24             	mov    %eax,(%esp)
 8124695:	e8 8c fc 2c 00       	call   83f4326 <_ZN5MySQL4execEb>
 812469a:	88 45 e7             	mov    %al,-0x19(%ebp)
 812469d:	0f b6 5d e7          	movzbl -0x19(%ebp),%ebx
 81246a1:	eb 1b                	jmp    81246be <_ZN8APSystem20DB_UpdateActionPoint6UpdateEbRKNS_22_SIG_LOAD_ACTION_POINTE+0x338>
 81246a3:	89 d3                	mov    %edx,%ebx
 81246a5:	89 c6                	mov    %eax,%esi
 81246a7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81246aa:	89 04 24             	mov    %eax,(%esp)
 81246ad:	e8 2e 35 5e 00       	call   8707be0 <_ZNSsD1Ev>
 81246b2:	89 f0                	mov    %esi,%eax
 81246b4:	89 da                	mov    %ebx,%edx
 81246b6:	89 04 24             	mov    %eax,(%esp)
 81246b9:	e8 92 f0 9b 00       	call   8ae3750 <_Unwind_Resume>
 81246be:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81246c1:	89 04 24             	mov    %eax,(%esp)
 81246c4:	e8 17 35 5e 00       	call   8707be0 <_ZNSsD1Ev>
 81246c9:	89 d8                	mov    %ebx,%eax
 81246cb:	81 c4 ac 00 00 00    	add    $0xac,%esp
 81246d1:	5b                   	pop    %ebx
 81246d2:	5e                   	pop    %esi
 81246d3:	5f                   	pop    %edi
 81246d4:	5d                   	pop    %ebp
 81246d5:	c3                   	ret

```

```c
// APSystem::DB_UpdateActionPoint::Update @ 0x8124386

/* WARNING: Removing unreachable block (ram,0x08124483) */
/* APSystem::DB_UpdateActionPoint::Update(bool, APSystem::_SIG_LOAD_ACTION_POINT const&) */

char __thiscall
APSystem::DB_UpdateActionPoint::Update
          (DB_UpdateActionPoint *this,bool param_1,_SIG_LOAD_ACTION_POINT *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  tm local_68;
  int local_3c;
  uint local_38;
  string local_34;
  char local_30 [12];
  MySQL *local_24;
  char local_1d;
  
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  if (param_1) {
    local_3c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_3c = local_3c + -0x15180;
    localtime_r(&local_3c,&local_68);
  }
  else {
    __GetCurrentDNFDate(&local_68);
  }
  memset(local_30,0,0xc);
  sprintf(local_30,"%04d-%02d-%02d",local_68.tm_year + 0x76c,local_68.tm_mon + 1,local_68.tm_mday);
  std::string::string((string *)&local_34);
                    /* try { // try from 0812446d to 08124699 has its CatchHandler @ 081246a3 */
  MakeActionClearStateString(this,&local_34,(_ActionPoint *)(param_2 + 0xd),300);
  local_38 = 0x400;
  memset(&g_szZipAP_CLEAR_STATE,0,0x800);
  uVar3 = std::string::size((string *)&local_34);
  pcVar4 = (char *)std::string::c_str((string *)&local_34);
  cVar2 = compress_zip((char *)&g_szZipAP_CLEAR_STATE,&local_38,pcVar4,uVar3);
  if (cVar2 == '\x01') {
    uVar6 = *(undefined4 *)param_2;
    uVar5 = MySQL::blob_to_str(local_24,0,&g_szZipAP_CLEAR_STATE,local_38);
    MySQL::set_query(local_24,
                     "update charac_action_point set ap_sum=%d, is_reward_medal=%u, \t\t\t\t\tis_reward_item_1=%u, is_reward_item_2=%u, is_reward_item_3=%u, is_reward_item_4=%u,\t\t\t\t\t\tap_clear_state=\'%s\'\t\t\t\t\t\twhere occ_date=\'%s\'\t\t\t\t\t\tand charac_no=%u"
                     ,*(undefined4 *)(param_2 + 4),(uint)(byte)param_2[8],(uint)(byte)param_2[9],
                     (uint)(byte)param_2[10],(uint)(byte)param_2[0xb],(uint)(byte)param_2[0xc],uVar5
                     ,local_30,uVar6);
    local_1d = MySQL::exec(local_24,true);
    if ((local_1d == '\x01') && (lVar7 = MySQL::getAffectedRowCount(local_24), lVar7 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    cVar2 = local_1d;
    if (bVar1) {
      uVar6 = MySQL::blob_to_str(local_24,0,&g_szZipAP_CLEAR_STATE,local_38);
      MySQL::set_query(local_24,
                       "insert into charac_action_point\t\t\t\t\t\t\t(occ_date, charac_no, ap_sum, is_reward_medal, \t\t\t\t\t\t\tis_reward_item_1, is_reward_item_2, is_reward_item_3, is_reward_item_4,\t\t\t\t\t\t\t\tap_clear_state)\t\t\t\t\t\t\t\tvalues \t\t\t\t\t\t\t(\'%s\', %u, %u, %u, %u, %u, %u, %u, \'%s\')"
                       ,local_30,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
                       (uint)(byte)param_2[8],(uint)(byte)param_2[9],(uint)(byte)param_2[10],
                       (uint)(byte)param_2[0xb],(uint)(byte)param_2[0xc],uVar6);
      local_1d = MySQL::exec(local_24,true);
      cVar2 = local_1d;
    }
  }
  else {
    cVar2 = '\0';
  }
  std::string::~string((string *)&local_34);
  return cVar2;
}

```

---

## dispatch

```asm
// === 0812432a APSystem::DB_UpdateActionPoint::dispatch  [0x0812432a-0x8124385] ===
 812432a:	55                   	push   %ebp
 812432b:	89 e5                	mov    %esp,%ebp
 812432d:	83 ec 28             	sub    $0x28,%esp
 8124330:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8124334:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8124337:	89 44 24 04          	mov    %eax,0x4(%esp)
 812433b:	8b 45 14             	mov    0x14(%ebp),%eax
 812433e:	89 04 24             	mov    %eax,(%esp)
 8124341:	e8 36 81 4f 00       	call   861c47c <_ZN6StreamrsERb>
 8124346:	8b 45 14             	mov    0x14(%ebp),%eax
 8124349:	89 04 24             	mov    %eax,(%esp)
 812434c:	e8 93 13 00 00       	call   81256e4 <_ZN6Stream12GetOutBufferIN8APSystem22_SIG_LOAD_ACTION_POINTEEEPT_v>
 8124351:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8124354:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8124358:	75 07                	jne    8124361 <_ZN8APSystem20DB_UpdateActionPoint8dispatchEiiP6Stream+0x37>
 812435a:	b8 00 00 00 00       	mov    $0x0,%eax
 812435f:	eb 22                	jmp    8124383 <_ZN8APSystem20DB_UpdateActionPoint8dispatchEiiP6Stream+0x59>
 8124361:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8124365:	0f b6 c0             	movzbl %al,%eax
 8124368:	8b 55 f4             	mov    -0xc(%ebp),%edx
 812436b:	89 54 24 08          	mov    %edx,0x8(%esp)
 812436f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8124373:	8b 45 08             	mov    0x8(%ebp),%eax
 8124376:	89 04 24             	mov    %eax,(%esp)
 8124379:	e8 08 00 00 00       	call   8124386 <_ZN8APSystem20DB_UpdateActionPoint6UpdateEbRKNS_22_SIG_LOAD_ACTION_POINTE>
 812437e:	b8 01 00 00 00       	mov    $0x1,%eax
 8124383:	c9                   	leave
 8124384:	c3                   	ret
 8124385:	90                   	nop

```

```c
// APSystem::DB_UpdateActionPoint::dispatch @ 0x812432a

/* APSystem::DB_UpdateActionPoint::dispatch(int, int, Stream*) */

bool __thiscall
APSystem::DB_UpdateActionPoint::dispatch
          (DB_UpdateActionPoint *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  bool local_11;
  _SIG_LOAD_ACTION_POINT *local_10;
  
  local_11 = false;
  Stream::operator>>(param_3,&local_11);
  local_10 = Stream::GetOutBuffer<APSystem::_SIG_LOAD_ACTION_POINT>(param_3);
  bVar1 = local_10 != (_SIG_LOAD_ACTION_POINT *)0x0;
  if (bVar1) {
    Update(this,local_11,local_10);
  }
  return bVar1;
}

```

---

## makeRequest

```asm
// === 0812431c APSystem::DB_UpdateActionPoint::makeRequest  [0x0812431c-0x8124329] ===
 812431c:	55                   	push   %ebp
 812431d:	89 e5                	mov    %esp,%ebp
 812431f:	83 ec 14             	sub    $0x14,%esp
 8124322:	8b 45 10             	mov    0x10(%ebp),%eax
 8124325:	88 45 ec             	mov    %al,-0x14(%ebp)
 8124328:	c9                   	leave
 8124329:	c3                   	ret

```

```c
// APSystem::DB_UpdateActionPoint::makeRequest @ 0x812431c

/* APSystem::DB_UpdateActionPoint::makeRequest(int, APSystem::_SIG_LOAD_ACTION_POINT const&, bool)
    */

void APSystem::DB_UpdateActionPoint::makeRequest
               (int param_1,_SIG_LOAD_ACTION_POINT *param_2,bool param_3)

{
  return;
}

```

