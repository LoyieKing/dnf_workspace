# COpensslRSA

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## COpensslRSA

```asm
// === 0816c238 COpensslRSA::COpensslRSA  [0x0816c238-0x816c245] ===
 816c238:	55                   	push   %ebp
 816c239:	89 e5                	mov    %esp,%ebp
 816c23b:	8b 45 08             	mov    0x8(%ebp),%eax
 816c23e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 816c244:	5d                   	pop    %ebp
 816c245:	c3                   	ret

```

```c
// COpensslRSA::COpensslRSA @ 0x816c238

/* COpensslRSA::COpensslRSA() */

void __thiscall COpensslRSA::COpensslRSA(COpensslRSA *this)

{
  *(undefined4 *)this = 0;
  return;
}

```

---

## Decrypt

```asm
// === 0816c532 COpensslRSA::Decrypt  [0x0816c532-0x816c6b8] ===
 816c532:	55                   	push   %ebp
 816c533:	89 e5                	mov    %esp,%ebp
 816c535:	57                   	push   %edi
 816c536:	56                   	push   %esi
 816c537:	53                   	push   %ebx
 816c538:	83 ec 4c             	sub    $0x4c,%esp
 816c53b:	8b 45 08             	mov    0x8(%ebp),%eax
 816c53e:	8b 00                	mov    (%eax),%eax
 816c540:	89 04 24             	mov    %eax,(%esp)
 816c543:	e8 98 ed 67 00       	call   87eb2e0 <RSA_size>
 816c548:	89 45 d8             	mov    %eax,-0x28(%ebp)
 816c54b:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 816c552:	8b 45 dc             	mov    -0x24(%ebp),%eax
 816c555:	8b 55 10             	mov    0x10(%ebp),%edx
 816c558:	89 d1                	mov    %edx,%ecx
 816c55a:	29 c1                	sub    %eax,%ecx
 816c55c:	89 c8                	mov    %ecx,%eax
 816c55e:	8b 55 d8             	mov    -0x28(%ebp),%edx
 816c561:	39 d0                	cmp    %edx,%eax
 816c563:	7e 02                	jle    816c567 <_ZN11COpensslRSA7DecryptEPKciRSt6vectorIhSaIhEE+0x35>
 816c565:	89 d0                	mov    %edx,%eax
 816c567:	89 45 e0             	mov    %eax,-0x20(%ebp)
 816c56a:	e9 29 01 00 00       	jmp    816c698 <_ZN11COpensslRSA7DecryptEPKciRSt6vectorIhSaIhEE+0x166>
 816c56f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 816c572:	89 04 24             	mov    %eax,(%esp)
 816c575:	e8 98 87 f7 ff       	call   80e4d12 <_ZNSt6vectorIhSaIhEEC1Ev>
 816c57a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 816c57d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 816c584:	00 
 816c585:	89 44 24 04          	mov    %eax,0x4(%esp)
 816c589:	8d 45 c8             	lea    -0x38(%ebp),%eax
 816c58c:	89 04 24             	mov    %eax,(%esp)
 816c58f:	e8 3e 02 00 00       	call   816c7d2 <_ZNSt6vectorIhSaIhEE6resizeEjh>
 816c594:	8b 45 08             	mov    0x8(%ebp),%eax
 816c597:	8b 18                	mov    (%eax),%ebx
 816c599:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 816c5a0:	00 
 816c5a1:	8d 45 c8             	lea    -0x38(%ebp),%eax
 816c5a4:	89 04 24             	mov    %eax,(%esp)
 816c5a7:	e8 04 88 f7 ff       	call   80e4db0 <_ZNSt6vectorIhSaIhEEixEj>
 816c5ac:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 816c5af:	8b 55 dc             	mov    -0x24(%ebp),%edx
 816c5b2:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 816c5b5:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 816c5bc:	00 
 816c5bd:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 816c5c1:	89 44 24 08          	mov    %eax,0x8(%esp)
 816c5c5:	89 54 24 04          	mov    %edx,0x4(%esp)
 816c5c9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 816c5cc:	89 04 24             	mov    %eax,(%esp)
 816c5cf:	e8 8c e9 67 00       	call   87eaf60 <RSA_public_decrypt>
 816c5d4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 816c5d7:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 816c5db:	7f 0f                	jg     816c5ec <_ZN11COpensslRSA7DecryptEPKciRSt6vectorIhSaIhEE+0xba>
 816c5dd:	be 00 00 00 00       	mov    $0x0,%esi
 816c5e2:	bb 00 00 00 00       	mov    $0x0,%ebx
 816c5e7:	e9 9d 00 00 00       	jmp    816c689 <_ZN11COpensslRSA7DecryptEPKciRSt6vectorIhSaIhEE+0x157>
 816c5ec:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 816c5f3:	00 
 816c5f4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 816c5f7:	89 04 24             	mov    %eax,(%esp)
 816c5fa:	e8 b1 87 f7 ff       	call   80e4db0 <_ZNSt6vectorIhSaIhEEixEj>
 816c5ff:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 816c602:	8d 3c 10             	lea    (%eax,%edx,1),%edi
 816c605:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 816c60c:	00 
 816c60d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 816c610:	89 04 24             	mov    %eax,(%esp)
 816c613:	e8 98 87 f7 ff       	call   80e4db0 <_ZNSt6vectorIhSaIhEEixEj>
 816c618:	89 c3                	mov    %eax,%ebx
 816c61a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816c61d:	8b 55 14             	mov    0x14(%ebp),%edx
 816c620:	89 54 24 04          	mov    %edx,0x4(%esp)
 816c624:	89 04 24             	mov    %eax,(%esp)
 816c627:	e8 c6 29 f1 ff       	call   807eff2 <_ZNSt6vectorIhSaIhEE3endEv>
 816c62c:	83 ec 04             	sub    $0x4,%esp
 816c62f:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 816c633:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 816c637:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 816c63a:	89 44 24 04          	mov    %eax,0x4(%esp)
 816c63e:	8b 45 14             	mov    0x14(%ebp),%eax
 816c641:	89 04 24             	mov    %eax,(%esp)
 816c644:	e8 0d 02 00 00       	call   816c856 <_ZNSt6vectorIhSaIhEE6insertIPhEEvN9__gnu_cxx17__normal_iteratorIS3_S1_EET_S7_>
 816c649:	8b 45 e0             	mov    -0x20(%ebp),%eax
 816c64c:	01 45 dc             	add    %eax,-0x24(%ebp)
 816c64f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 816c652:	8b 55 10             	mov    0x10(%ebp),%edx
 816c655:	89 d1                	mov    %edx,%ecx
 816c657:	29 c1                	sub    %eax,%ecx
 816c659:	89 c8                	mov    %ecx,%eax
 816c65b:	8b 55 d8             	mov    -0x28(%ebp),%edx
 816c65e:	39 d0                	cmp    %edx,%eax
 816c660:	7e 02                	jle    816c664 <_ZN11COpensslRSA7DecryptEPKciRSt6vectorIhSaIhEE+0x132>
 816c662:	89 d0                	mov    %edx,%eax
 816c664:	89 45 e0             	mov    %eax,-0x20(%ebp)
 816c667:	bb 01 00 00 00       	mov    $0x1,%ebx
 816c66c:	eb 1b                	jmp    816c689 <_ZN11COpensslRSA7DecryptEPKciRSt6vectorIhSaIhEE+0x157>
 816c66e:	89 d3                	mov    %edx,%ebx
 816c670:	89 c6                	mov    %eax,%esi
 816c672:	8d 45 c8             	lea    -0x38(%ebp),%eax
 816c675:	89 04 24             	mov    %eax,(%esp)
 816c678:	e8 a9 86 f7 ff       	call   80e4d26 <_ZNSt6vectorIhSaIhEED1Ev>
 816c67d:	89 f0                	mov    %esi,%eax
 816c67f:	89 da                	mov    %ebx,%edx
 816c681:	89 04 24             	mov    %eax,(%esp)
 816c684:	e8 c7 70 97 00       	call   8ae3750 <_Unwind_Resume>
 816c689:	8d 45 c8             	lea    -0x38(%ebp),%eax
 816c68c:	89 04 24             	mov    %eax,(%esp)
 816c68f:	e8 92 86 f7 ff       	call   80e4d26 <_ZNSt6vectorIhSaIhEED1Ev>
 816c694:	85 db                	test   %ebx,%ebx
 816c696:	74 14                	je     816c6ac <_ZN11COpensslRSA7DecryptEPKciRSt6vectorIhSaIhEE+0x17a>
 816c698:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 816c69c:	0f 9f c0             	setg   %al
 816c69f:	84 c0                	test   %al,%al
 816c6a1:	0f 85 c8 fe ff ff    	jne    816c56f <_ZN11COpensslRSA7DecryptEPKciRSt6vectorIhSaIhEE+0x3d>
 816c6a7:	be 01 00 00 00       	mov    $0x1,%esi
 816c6ac:	89 f0                	mov    %esi,%eax
 816c6ae:	8d 65 f4             	lea    -0xc(%ebp),%esp
 816c6b1:	83 c4 00             	add    $0x0,%esp
 816c6b4:	5b                   	pop    %ebx
 816c6b5:	5e                   	pop    %esi
 816c6b6:	5f                   	pop    %edi
 816c6b7:	5d                   	pop    %ebp
 816c6b8:	c3                   	ret

```

```c
// COpensslRSA::Decrypt @ 0x816c532

/* COpensslRSA::Decrypt(char const*, int, std::vector<unsigned char, std::allocator<unsigned char>
   >&) */

undefined4 __thiscall
COpensslRSA::Decrypt(COpensslRSA *this,char *param_1,int param_2,vector *param_3)

{
  RSA *rsa;
  bool bVar1;
  uchar *to;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  vector<unsigned_char,std::allocator<unsigned_char>> local_3c [12];
  undefined4 local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  
  local_2c = RSA_size(*(RSA **)this);
  local_28 = 0;
  local_24 = param_2;
  if ((int)local_2c < param_2) {
    local_24 = local_2c;
  }
  do {
    if ((int)local_24 < 1) {
      return 1;
    }
    std::vector<unsigned_char,std::allocator<unsigned_char>>::vector(local_3c);
                    /* try { // try from 0816c58f to 0816c648 has its CatchHandler @ 0816c66e */
    std::vector<unsigned_char,std::allocator<unsigned_char>>::resize(local_3c,local_2c,'\0');
    rsa = *(RSA **)this;
    to = (uchar *)std::vector<unsigned_char,std::allocator<unsigned_char>>::operator[](local_3c,0);
    local_20 = RSA_public_decrypt(local_24,(uchar *)(param_1 + local_28),to,rsa,1);
    if (local_20 < 1) {
      unaff_ESI = 0;
      bVar1 = false;
    }
    else {
      iVar2 = std::vector<unsigned_char,std::allocator<unsigned_char>>::operator[](local_3c,0);
      iVar2 = iVar2 + local_20;
      uVar3 = std::vector<unsigned_char,std::allocator<unsigned_char>>::operator[](local_3c,0);
      std::vector<unsigned_char,std::allocator<unsigned_char>>::end();
      std::vector<unsigned_char,std::allocator<unsigned_char>>::insert<unsigned_char*>
                (param_3,param_3,local_30,uVar3,iVar2);
      local_28 = local_28 + local_24;
      local_24 = param_2 - local_28;
      if ((int)local_2c < param_2 - local_28) {
        local_24 = local_2c;
      }
      bVar1 = true;
    }
    std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector(local_3c);
  } while (bVar1);
  return unaff_ESI;
}

```

---

## Encrypt

```asm
// === 0816c3a2 COpensslRSA::Encrypt  [0x0816c3a2-0x816c531] ===
 816c3a2:	55                   	push   %ebp
 816c3a3:	89 e5                	mov    %esp,%ebp
 816c3a5:	57                   	push   %edi
 816c3a6:	56                   	push   %esi
 816c3a7:	53                   	push   %ebx
 816c3a8:	83 ec 5c             	sub    $0x5c,%esp
 816c3ab:	8b 45 08             	mov    0x8(%ebp),%eax
 816c3ae:	8b 00                	mov    (%eax),%eax
 816c3b0:	89 04 24             	mov    %eax,(%esp)
 816c3b3:	e8 28 ef 67 00       	call   87eb2e0 <RSA_size>
 816c3b8:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 816c3bb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 816c3be:	83 e8 0c             	sub    $0xc,%eax
 816c3c1:	89 45 d8             	mov    %eax,-0x28(%ebp)
 816c3c4:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 816c3cb:	8b 45 dc             	mov    -0x24(%ebp),%eax
 816c3ce:	8b 55 10             	mov    0x10(%ebp),%edx
 816c3d1:	89 d1                	mov    %edx,%ecx
 816c3d3:	29 c1                	sub    %eax,%ecx
 816c3d5:	89 c8                	mov    %ecx,%eax
 816c3d7:	8b 55 d8             	mov    -0x28(%ebp),%edx
 816c3da:	39 d0                	cmp    %edx,%eax
 816c3dc:	7e 02                	jle    816c3e0 <_ZN11COpensslRSA7EncryptEPKciRSt6vectorIhSaIhEE+0x3e>
 816c3de:	89 d0                	mov    %edx,%eax
 816c3e0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 816c3e3:	e9 29 01 00 00       	jmp    816c511 <_ZN11COpensslRSA7EncryptEPKciRSt6vectorIhSaIhEE+0x16f>
 816c3e8:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 816c3eb:	89 04 24             	mov    %eax,(%esp)
 816c3ee:	e8 1f 89 f7 ff       	call   80e4d12 <_ZNSt6vectorIhSaIhEEC1Ev>
 816c3f3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 816c3f6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 816c3fd:	00 
 816c3fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 816c402:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 816c405:	89 04 24             	mov    %eax,(%esp)
 816c408:	e8 c5 03 00 00       	call   816c7d2 <_ZNSt6vectorIhSaIhEE6resizeEjh>
 816c40d:	8b 45 08             	mov    0x8(%ebp),%eax
 816c410:	8b 18                	mov    (%eax),%ebx
 816c412:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 816c419:	00 
 816c41a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 816c41d:	89 04 24             	mov    %eax,(%esp)
 816c420:	e8 8b 89 f7 ff       	call   80e4db0 <_ZNSt6vectorIhSaIhEEixEj>
 816c425:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 816c428:	8b 55 dc             	mov    -0x24(%ebp),%edx
 816c42b:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 816c42e:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 816c435:	00 
 816c436:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 816c43a:	89 44 24 08          	mov    %eax,0x8(%esp)
 816c43e:	89 54 24 04          	mov    %edx,0x4(%esp)
 816c442:	8b 45 e0             	mov    -0x20(%ebp),%eax
 816c445:	89 04 24             	mov    %eax,(%esp)
 816c448:	e8 f3 ea 67 00       	call   87eaf40 <RSA_private_encrypt>
 816c44d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 816c450:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 816c454:	7f 0f                	jg     816c465 <_ZN11COpensslRSA7EncryptEPKciRSt6vectorIhSaIhEE+0xc3>
 816c456:	be 00 00 00 00       	mov    $0x0,%esi
 816c45b:	bb 00 00 00 00       	mov    $0x0,%ebx
 816c460:	e9 9d 00 00 00       	jmp    816c502 <_ZN11COpensslRSA7EncryptEPKciRSt6vectorIhSaIhEE+0x160>
 816c465:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 816c46c:	00 
 816c46d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 816c470:	89 04 24             	mov    %eax,(%esp)
 816c473:	e8 38 89 f7 ff       	call   80e4db0 <_ZNSt6vectorIhSaIhEEixEj>
 816c478:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 816c47b:	8d 3c 10             	lea    (%eax,%edx,1),%edi
 816c47e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 816c485:	00 
 816c486:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 816c489:	89 04 24             	mov    %eax,(%esp)
 816c48c:	e8 1f 89 f7 ff       	call   80e4db0 <_ZNSt6vectorIhSaIhEEixEj>
 816c491:	89 c3                	mov    %eax,%ebx
 816c493:	8d 45 d0             	lea    -0x30(%ebp),%eax
 816c496:	8b 55 14             	mov    0x14(%ebp),%edx
 816c499:	89 54 24 04          	mov    %edx,0x4(%esp)
 816c49d:	89 04 24             	mov    %eax,(%esp)
 816c4a0:	e8 4d 2b f1 ff       	call   807eff2 <_ZNSt6vectorIhSaIhEE3endEv>
 816c4a5:	83 ec 04             	sub    $0x4,%esp
 816c4a8:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 816c4ac:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 816c4b0:	8b 45 d0             	mov    -0x30(%ebp),%eax
 816c4b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 816c4b7:	8b 45 14             	mov    0x14(%ebp),%eax
 816c4ba:	89 04 24             	mov    %eax,(%esp)
 816c4bd:	e8 94 03 00 00       	call   816c856 <_ZNSt6vectorIhSaIhEE6insertIPhEEvN9__gnu_cxx17__normal_iteratorIS3_S1_EET_S7_>
 816c4c2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 816c4c5:	01 45 dc             	add    %eax,-0x24(%ebp)
 816c4c8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 816c4cb:	8b 55 10             	mov    0x10(%ebp),%edx
 816c4ce:	89 d1                	mov    %edx,%ecx
 816c4d0:	29 c1                	sub    %eax,%ecx
 816c4d2:	89 c8                	mov    %ecx,%eax
 816c4d4:	8b 55 d8             	mov    -0x28(%ebp),%edx
 816c4d7:	39 d0                	cmp    %edx,%eax
 816c4d9:	7e 02                	jle    816c4dd <_ZN11COpensslRSA7EncryptEPKciRSt6vectorIhSaIhEE+0x13b>
 816c4db:	89 d0                	mov    %edx,%eax
 816c4dd:	89 45 e0             	mov    %eax,-0x20(%ebp)
 816c4e0:	bb 01 00 00 00       	mov    $0x1,%ebx
 816c4e5:	eb 1b                	jmp    816c502 <_ZN11COpensslRSA7EncryptEPKciRSt6vectorIhSaIhEE+0x160>
 816c4e7:	89 d3                	mov    %edx,%ebx
 816c4e9:	89 c6                	mov    %eax,%esi
 816c4eb:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 816c4ee:	89 04 24             	mov    %eax,(%esp)
 816c4f1:	e8 30 88 f7 ff       	call   80e4d26 <_ZNSt6vectorIhSaIhEED1Ev>
 816c4f6:	89 f0                	mov    %esi,%eax
 816c4f8:	89 da                	mov    %ebx,%edx
 816c4fa:	89 04 24             	mov    %eax,(%esp)
 816c4fd:	e8 4e 72 97 00       	call   8ae3750 <_Unwind_Resume>
 816c502:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 816c505:	89 04 24             	mov    %eax,(%esp)
 816c508:	e8 19 88 f7 ff       	call   80e4d26 <_ZNSt6vectorIhSaIhEED1Ev>
 816c50d:	85 db                	test   %ebx,%ebx
 816c50f:	74 14                	je     816c525 <_ZN11COpensslRSA7EncryptEPKciRSt6vectorIhSaIhEE+0x183>
 816c511:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 816c515:	0f 9f c0             	setg   %al
 816c518:	84 c0                	test   %al,%al
 816c51a:	0f 85 c8 fe ff ff    	jne    816c3e8 <_ZN11COpensslRSA7EncryptEPKciRSt6vectorIhSaIhEE+0x46>
 816c520:	be 01 00 00 00       	mov    $0x1,%esi
 816c525:	89 f0                	mov    %esi,%eax
 816c527:	8d 65 f4             	lea    -0xc(%ebp),%esp
 816c52a:	83 c4 00             	add    $0x0,%esp
 816c52d:	5b                   	pop    %ebx
 816c52e:	5e                   	pop    %esi
 816c52f:	5f                   	pop    %edi
 816c530:	5d                   	pop    %ebp
 816c531:	c3                   	ret

```

```c
// COpensslRSA::Encrypt @ 0x816c3a2

/* COpensslRSA::Encrypt(char const*, int, std::vector<unsigned char, std::allocator<unsigned char>
   >&) */

undefined4 __thiscall
COpensslRSA::Encrypt(COpensslRSA *this,char *param_1,int param_2,vector *param_3)

{
  RSA *rsa;
  bool bVar1;
  uchar *to;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  vector<unsigned_char,std::allocator<unsigned_char>> local_40 [12];
  undefined4 local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_30 = RSA_size(*(RSA **)this);
  local_2c = local_30 - 0xc;
  local_28 = 0;
  local_24 = param_2;
  if (local_2c < param_2) {
    local_24 = local_2c;
  }
  do {
    if (local_24 < 1) {
      return 1;
    }
    std::vector<unsigned_char,std::allocator<unsigned_char>>::vector(local_40);
                    /* try { // try from 0816c408 to 0816c4c1 has its CatchHandler @ 0816c4e7 */
    std::vector<unsigned_char,std::allocator<unsigned_char>>::resize(local_40,local_30,'\0');
    rsa = *(RSA **)this;
    to = (uchar *)std::vector<unsigned_char,std::allocator<unsigned_char>>::operator[](local_40,0);
    local_20 = RSA_private_encrypt(local_24,(uchar *)(param_1 + local_28),to,rsa,1);
    if (local_20 < 1) {
      unaff_ESI = 0;
      bVar1 = false;
    }
    else {
      iVar2 = std::vector<unsigned_char,std::allocator<unsigned_char>>::operator[](local_40,0);
      iVar2 = iVar2 + local_20;
      uVar3 = std::vector<unsigned_char,std::allocator<unsigned_char>>::operator[](local_40,0);
      std::vector<unsigned_char,std::allocator<unsigned_char>>::end();
      std::vector<unsigned_char,std::allocator<unsigned_char>>::insert<unsigned_char*>
                (param_3,param_3,local_34,uVar3,iVar2);
      local_28 = local_28 + local_24;
      local_24 = param_2 - local_28;
      if (local_2c < param_2 - local_28) {
        local_24 = local_2c;
      }
      bVar1 = true;
    }
    std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector(local_40);
  } while (bVar1);
  return unaff_ESI;
}

```

---

## Init

```asm
// === 0816c26e COpensslRSA::Init  [0x0816c26e-0x816c289] ===
 816c26e:	55                   	push   %ebp
 816c26f:	89 e5                	mov    %esp,%ebp
 816c271:	83 ec 18             	sub    $0x18,%esp
 816c274:	c7 44 24 04 61 13 b8 	movl   $0x8b81361,0x4(%esp)
 816c27b:	08 
 816c27c:	8b 45 08             	mov    0x8(%ebp),%eax
 816c27f:	89 04 24             	mov    %eax,(%esp)
 816c282:	e8 03 00 00 00       	call   816c28a <_ZN11COpensslRSA4InitEPKc>
 816c287:	c9                   	leave
 816c288:	c3                   	ret
 816c289:	90                   	nop

```

```c
// COpensslRSA::Init @ 0x816c26e

/* COpensslRSA::Init() */

void __thiscall COpensslRSA::Init(COpensslRSA *this)

{
  Init(this,"publickey.pem");
  return;
}

```

---

## Init_0816c28a

```asm
// === 0816c28a COpensslRSA::Init  [0x0816c28a-0x816c3a1] ===
 816c28a:	55                   	push   %ebp
 816c28b:	89 e5                	mov    %esp,%ebp
 816c28d:	56                   	push   %esi
 816c28e:	53                   	push   %ebx
 816c28f:	83 ec 20             	sub    $0x20,%esp
 816c292:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 816c296:	75 0a                	jne    816c2a2 <_ZN11COpensslRSA4InitEPKc+0x18>
 816c298:	b8 00 00 00 00       	mov    $0x0,%eax
 816c29d:	e9 f6 00 00 00       	jmp    816c398 <_ZN11COpensslRSA4InitEPKc+0x10e>
 816c2a2:	e8 19 04 68 00       	call   87ec6c0 <BIO_s_file>
 816c2a7:	89 04 24             	mov    %eax,(%esp)
 816c2aa:	e8 e1 01 68 00       	call   87ec490 <BIO_new>
 816c2af:	89 45 f4             	mov    %eax,-0xc(%ebp)
 816c2b2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 816c2b5:	89 04 24             	mov    %eax,(%esp)
 816c2b8:	e8 58 04 00 00       	call   816c715 <_Z12GetAppFolderv>
 816c2bd:	83 ec 04             	sub    $0x4,%esp
 816c2c0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816c2c3:	8b 55 0c             	mov    0xc(%ebp),%edx
 816c2c6:	89 54 24 08          	mov    %edx,0x8(%esp)
 816c2ca:	8d 55 f0             	lea    -0x10(%ebp),%edx
 816c2cd:	89 54 24 04          	mov    %edx,0x4(%esp)
 816c2d1:	89 04 24             	mov    %eax,(%esp)
 816c2d4:	e8 a0 04 00 00       	call   816c779 <_ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_ERKS6_PKS3_>
 816c2d9:	83 ec 04             	sub    $0x4,%esp
 816c2dc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816c2df:	89 04 24             	mov    %eax,(%esp)
 816c2e2:	e8 09 a2 59 00       	call   87064f0 <_ZNKSs5c_strEv>
 816c2e7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 816c2eb:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 816c2f2:	00 
 816c2f3:	c7 44 24 04 6c 00 00 	movl   $0x6c,0x4(%esp)
 816c2fa:	00 
 816c2fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816c2fe:	89 04 24             	mov    %eax,(%esp)
 816c301:	e8 4a f7 67 00       	call   87eba50 <BIO_ctrl>
 816c306:	eb 15                	jmp    816c31d <_ZN11COpensslRSA4InitEPKc+0x93>
 816c308:	89 d3                	mov    %edx,%ebx
 816c30a:	89 c6                	mov    %eax,%esi
 816c30c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816c30f:	89 04 24             	mov    %eax,(%esp)
 816c312:	e8 c9 b8 59 00       	call   8707be0 <_ZNSsD1Ev>
 816c317:	89 f0                	mov    %esi,%eax
 816c319:	89 da                	mov    %ebx,%edx
 816c31b:	eb 0d                	jmp    816c32a <_ZN11COpensslRSA4InitEPKc+0xa0>
 816c31d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816c320:	89 04 24             	mov    %eax,(%esp)
 816c323:	e8 b8 b8 59 00       	call   8707be0 <_ZNSsD1Ev>
 816c328:	eb 1b                	jmp    816c345 <_ZN11COpensslRSA4InitEPKc+0xbb>
 816c32a:	89 d3                	mov    %edx,%ebx
 816c32c:	89 c6                	mov    %eax,%esi
 816c32e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 816c331:	89 04 24             	mov    %eax,(%esp)
 816c334:	e8 a7 b8 59 00       	call   8707be0 <_ZNSsD1Ev>
 816c339:	89 f0                	mov    %esi,%eax
 816c33b:	89 da                	mov    %ebx,%edx
 816c33d:	89 04 24             	mov    %eax,(%esp)
 816c340:	e8 0b 74 97 00       	call   8ae3750 <_Unwind_Resume>
 816c345:	8d 45 f0             	lea    -0x10(%ebp),%eax
 816c348:	89 04 24             	mov    %eax,(%esp)
 816c34b:	e8 90 b8 59 00       	call   8707be0 <_ZNSsD1Ev>
 816c350:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 816c357:	00 
 816c358:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 816c35f:	00 
 816c360:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 816c367:	00 
 816c368:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816c36b:	89 04 24             	mov    %eax,(%esp)
 816c36e:	e8 ad 43 68 00       	call   87f0720 <PEM_read_bio_RSA_PUBKEY>
 816c373:	8b 55 08             	mov    0x8(%ebp),%edx
 816c376:	89 02                	mov    %eax,(%edx)
 816c378:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816c37b:	89 04 24             	mov    %eax,(%esp)
 816c37e:	e8 9d ff 67 00       	call   87ec320 <BIO_free_all>
 816c383:	8b 45 08             	mov    0x8(%ebp),%eax
 816c386:	8b 00                	mov    (%eax),%eax
 816c388:	85 c0                	test   %eax,%eax
 816c38a:	75 07                	jne    816c393 <_ZN11COpensslRSA4InitEPKc+0x109>
 816c38c:	b8 00 00 00 00       	mov    $0x0,%eax
 816c391:	eb 05                	jmp    816c398 <_ZN11COpensslRSA4InitEPKc+0x10e>
 816c393:	b8 01 00 00 00       	mov    $0x1,%eax
 816c398:	8d 65 f8             	lea    -0x8(%ebp),%esp
 816c39b:	83 c4 00             	add    $0x0,%esp
 816c39e:	5b                   	pop    %ebx
 816c39f:	5e                   	pop    %esi
 816c3a0:	5d                   	pop    %ebp
 816c3a1:	c3                   	ret

```

```c
// COpensslRSA::Init @ 0x816c28a

/* COpensslRSA::Init(char const*) */

undefined4 __thiscall COpensslRSA::Init(COpensslRSA *this,char *param_1)

{
  undefined4 uVar1;
  BIO_METHOD *type;
  void *parg;
  RSA *pRVar2;
  string local_18;
  string local_14;
  BIO *local_10;
  
  if (param_1 == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    type = BIO_s_file();
    local_10 = BIO_new(type);
    GetAppFolder();
                    /* try { // try from 0816c2d4 to 0816c2d8 has its CatchHandler @ 0816c32a */
    std::operator+(&local_18,&local_14,param_1);
                    /* try { // try from 0816c2e2 to 0816c305 has its CatchHandler @ 0816c308 */
    parg = (void *)std::string::c_str((string *)&local_18);
    BIO_ctrl(local_10,0x6c,3,parg);
                    /* try { // try from 0816c323 to 0816c327 has its CatchHandler @ 0816c32a */
    std::string::~string((string *)&local_18);
    std::string::~string((string *)&local_14);
    pRVar2 = PEM_read_bio_RSA_PUBKEY(local_10,(RSA **)0x0,(undefined1 *)0x0,(void *)0x0);
    *(RSA **)this = pRVar2;
    BIO_free_all(local_10);
    if (*(int *)this == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

```

---

## ~COpensslRSA

```asm
// === 0816c246 COpensslRSA::~COpensslRSA  [0x0816c246-0x816c26d] ===
 816c246:	55                   	push   %ebp
 816c247:	89 e5                	mov    %esp,%ebp
 816c249:	83 ec 18             	sub    $0x18,%esp
 816c24c:	8b 45 08             	mov    0x8(%ebp),%eax
 816c24f:	8b 00                	mov    (%eax),%eax
 816c251:	85 c0                	test   %eax,%eax
 816c253:	74 16                	je     816c26b <_ZN11COpensslRSAD1Ev+0x25>
 816c255:	8b 45 08             	mov    0x8(%ebp),%eax
 816c258:	8b 00                	mov    (%eax),%eax
 816c25a:	89 04 24             	mov    %eax,(%esp)
 816c25d:	e8 ee e8 67 00       	call   87eab50 <RSA_free>
 816c262:	8b 45 08             	mov    0x8(%ebp),%eax
 816c265:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 816c26b:	c9                   	leave
 816c26c:	c3                   	ret
 816c26d:	90                   	nop

```

```c
// COpensslRSA::~COpensslRSA @ 0x816c246

/* COpensslRSA::~COpensslRSA() */

void __thiscall COpensslRSA::~COpensslRSA(COpensslRSA *this)

{
  if (*(int *)this != 0) {
    RSA_free(*(RSA **)this);
    *(undefined4 *)this = 0;
  }
  return;
}

```

