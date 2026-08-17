# yaSSL__HMAC_RMD

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## HMAC_RMD

```asm
// === 08799740 yaSSL::HMAC_RMD::HMAC_RMD  [0x08799740-0x879988f] ===
 8799740:	55                   	push   %ebp
 8799741:	89 e5                	mov    %esp,%ebp
 8799743:	57                   	push   %edi
 8799744:	56                   	push   %esi
 8799745:	53                   	push   %ebx
 8799746:	e8 ad 96 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879974b:	81 c3 4d 34 bd 00    	add    $0xbd344d,%ebx
 8799751:	83 ec 2c             	sub    $0x2c,%esp
 8799754:	8b 55 08             	mov    0x8(%ebp),%edx
 8799757:	8b 7d 10             	mov    0x10(%ebp),%edi
 879975a:	8b 83 f8 fb ff ff    	mov    -0x408(%ebx),%eax
 8799760:	83 c0 08             	add    $0x8,%eax
 8799763:	89 02                	mov    %eax,(%edx)
 8799765:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8799768:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879976d:	c7 04 24 14 01 00 00 	movl   $0x114,(%esp)
 8799774:	e8 27 75 fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8799779:	89 c6                	mov    %eax,%esi
 879977b:	8d 80 80 00 00 00    	lea    0x80(%eax),%eax
 8799781:	89 06                	mov    %eax,(%esi)
 8799783:	8d 86 c0 00 00 00    	lea    0xc0(%esi),%eax
 8799789:	89 46 04             	mov    %eax,0x4(%esi)
 879978c:	8d 86 00 01 00 00    	lea    0x100(%esi),%eax
 8799792:	89 46 08             	mov    %eax,0x8(%esi)
 8799795:	8d 46 10             	lea    0x10(%esi),%eax
 8799798:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 879979b:	89 04 24             	mov    %eax,(%esp)
 879979e:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 87997a5:	00 
 87997a6:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 87997ad:	00 
 87997ae:	e8 1d f4 fb ff       	call   8758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>
 87997b3:	8b 83 30 fa ff ff    	mov    -0x5d0(%ebx),%eax
 87997b9:	83 c0 08             	add    $0x8,%eax
 87997bc:	89 46 10             	mov    %eax,0x10(%esi)
 87997bf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87997c2:	89 04 24             	mov    %eax,(%esp)
 87997c5:	e8 16 f5 00 00       	call   87a8ce0 <_ZN8TaoCrypt9RIPEMD1604InitEv>
 87997ca:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87997cd:	89 04 24             	mov    %eax,(%esp)
 87997d0:	e8 0b f5 00 00       	call   87a8ce0 <_ZN8TaoCrypt9RIPEMD1604InitEv>
 87997d5:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87997d8:	c6 46 0c 00          	movb   $0x0,0xc(%esi)
 87997dc:	89 72 04             	mov    %esi,0x4(%edx)
 87997df:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87997e2:	89 14 24             	mov    %edx,(%esp)
 87997e5:	e8 f6 f4 00 00       	call   87a8ce0 <_ZN8TaoCrypt9RIPEMD1604InitEv>
 87997ea:	83 ff 40             	cmp    $0x40,%edi
 87997ed:	c6 46 0c 00          	movb   $0x0,0xc(%esi)
 87997f1:	77 5b                	ja     879984e <_ZN5yaSSL8HMAC_RMDC1EPKhj+0x10e>
 87997f3:	8b 06                	mov    (%esi),%eax
 87997f5:	8b 55 0c             	mov    0xc(%ebp),%edx
 87997f8:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87997fc:	89 04 24             	mov    %eax,(%esp)
 87997ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 8799803:	e8 98 40 8e ff       	call   807d8a0 <memcpy@plt>
 8799808:	b8 40 00 00 00       	mov    $0x40,%eax
 879980d:	29 f8                	sub    %edi,%eax
 879980f:	03 3e                	add    (%esi),%edi
 8799811:	89 44 24 08          	mov    %eax,0x8(%esp)
 8799815:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879981c:	00 
 879981d:	89 3c 24             	mov    %edi,(%esp)
 8799820:	e8 9b 44 8e ff       	call   807dcc0 <memset@plt>
 8799825:	31 c0                	xor    %eax,%eax
 8799827:	90                   	nop
 8799828:	8b 16                	mov    (%esi),%edx
 879982a:	8b 4e 04             	mov    0x4(%esi),%ecx
 879982d:	0f b6 14 02          	movzbl (%edx,%eax,1),%edx
 8799831:	83 f2 5c             	xor    $0x5c,%edx
 8799834:	88 14 01             	mov    %dl,(%ecx,%eax,1)
 8799837:	8b 16                	mov    (%esi),%edx
 8799839:	01 c2                	add    %eax,%edx
 879983b:	83 c0 01             	add    $0x1,%eax
 879983e:	80 32 36             	xorb   $0x36,(%edx)
 8799841:	83 f8 40             	cmp    $0x40,%eax
 8799844:	75 e2                	jne    8799828 <_ZN5yaSSL8HMAC_RMDC1EPKhj+0xe8>
 8799846:	83 c4 2c             	add    $0x2c,%esp
 8799849:	5b                   	pop    %ebx
 879984a:	5e                   	pop    %esi
 879984b:	5f                   	pop    %edi
 879984c:	5d                   	pop    %ebp
 879984d:	c3                   	ret
 879984e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8799851:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8799854:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8799858:	bf 14 00 00 00       	mov    $0x14,%edi
 879985d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799861:	89 14 24             	mov    %edx,(%esp)
 8799864:	e8 77 1b 01 00       	call   87ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>
 8799869:	8b 06                	mov    (%esi),%eax
 879986b:	89 44 24 04          	mov    %eax,0x4(%esp)
 879986f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8799872:	89 04 24             	mov    %eax,(%esp)
 8799875:	e8 16 f5 fb ff       	call   8758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>
 879987a:	b8 2c 00 00 00       	mov    $0x2c,%eax
 879987f:	eb 8e                	jmp    879980f <_ZN5yaSSL8HMAC_RMDC1EPKhj+0xcf>
 8799881:	90                   	nop
 8799882:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8799889:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::HMAC_RMD::HMAC_RMD @ 0x8799740

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_RMD::HMAC_RMD(unsigned char const*, unsigned int) */

void __thiscall yaSSL::HMAC_RMD::HMAC_RMD(HMAC_RMD *this,uchar *param_1,uint param_2)

{
  HASHwithTransform *this_00;
  int *piVar1;
  size_t __n;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint in_stack_ffffffc8;
  
  *(undefined **)this = PTR_vtable_0936c790 + 8;
  piVar1 = operator_new(0x114,in_stack_ffffffc8 & 0xffffff00);
  *piVar1 = (int)(piVar1 + 0x20);
  piVar1[1] = (int)(piVar1 + 0x30);
  piVar1[2] = (int)(piVar1 + 0x40);
  this_00 = (HASHwithTransform *)(piVar1 + 4);
  TaoCrypt::HASHwithTransform::HASHwithTransform(this_00,5,0x40);
  piVar1[4] = (int)(PTR_vtable_0936c5c8 + 8);
  TaoCrypt::RIPEMD160::Init((RIPEMD160 *)this_00);
  TaoCrypt::RIPEMD160::Init((RIPEMD160 *)this_00);
  *(undefined1 *)(piVar1 + 3) = 0;
  *(int **)(this + 4) = piVar1;
  TaoCrypt::RIPEMD160::Init((RIPEMD160 *)this_00);
  *(undefined1 *)(piVar1 + 3) = 0;
  if (param_2 < 0x41) {
    memcpy((void *)*piVar1,param_1,param_2);
    __n = 0x40 - param_2;
    uVar4 = param_2;
  }
  else {
    uVar4 = 0x14;
    TaoCrypt::RIPEMD160::Update((RIPEMD160 *)this_00,param_1,param_2);
    TaoCrypt::HASHwithTransform::Final(this_00,(uchar *)*piVar1);
    __n = 0x2c;
  }
  memset((void *)(uVar4 + *piVar1),0,__n);
  iVar2 = 0;
  do {
    *(byte *)(piVar1[1] + iVar2) = *(byte *)(*piVar1 + iVar2) ^ 0x5c;
    pbVar3 = (byte *)(*piVar1 + iVar2);
    iVar2 = iVar2 + 1;
    *pbVar3 = *pbVar3 ^ 0x36;
  } while (iVar2 != 0x40);
  return;
}

```

---

## get_digest

```asm
// === 08799570 yaSSL::HMAC_RMD::get_digest  [0x08799570-0x879965f] ===
 8799570:	55                   	push   %ebp
 8799571:	89 e5                	mov    %esp,%ebp
 8799573:	83 ec 38             	sub    $0x38,%esp
 8799576:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8799579:	8b 7d 08             	mov    0x8(%ebp),%edi
 879957c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879957f:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8799582:	e8 71 98 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8799587:	81 c3 11 36 bd 00    	add    $0xbd3611,%ebx
 879958d:	8b 77 04             	mov    0x4(%edi),%esi
 8799590:	80 7e 0c 00          	cmpb   $0x0,0xc(%esi)
 8799594:	8d 46 10             	lea    0x10(%esi),%eax
 8799597:	75 20                	jne    87995b9 <_ZN5yaSSL8HMAC_RMD10get_digestEPhPKhj+0x49>
 8799599:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 87995a0:	00 
 87995a1:	8b 16                	mov    (%esi),%edx
 87995a3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87995a6:	89 04 24             	mov    %eax,(%esp)
 87995a9:	89 54 24 04          	mov    %edx,0x4(%esp)
 87995ad:	e8 2e 1e 01 00       	call   87ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>
 87995b2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87995b5:	c6 46 0c 01          	movb   $0x1,0xc(%esi)
 87995b9:	8b 55 14             	mov    0x14(%ebp),%edx
 87995bc:	89 04 24             	mov    %eax,(%esp)
 87995bf:	89 54 24 08          	mov    %edx,0x8(%esp)
 87995c3:	8b 55 10             	mov    0x10(%ebp),%edx
 87995c6:	89 54 24 04          	mov    %edx,0x4(%esp)
 87995ca:	e8 11 1e 01 00       	call   87ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>
 87995cf:	8b 77 04             	mov    0x4(%edi),%esi
 87995d2:	80 7e 0c 00          	cmpb   $0x0,0xc(%esi)
 87995d6:	8d 7e 10             	lea    0x10(%esi),%edi
 87995d9:	75 1a                	jne    87995f5 <_ZN5yaSSL8HMAC_RMD10get_digestEPhPKhj+0x85>
 87995db:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 87995e2:	00 
 87995e3:	8b 06                	mov    (%esi),%eax
 87995e5:	89 3c 24             	mov    %edi,(%esp)
 87995e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 87995ec:	e8 ef 1d 01 00       	call   87ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>
 87995f1:	c6 46 0c 01          	movb   $0x1,0xc(%esi)
 87995f5:	8b 46 08             	mov    0x8(%esi),%eax
 87995f8:	89 3c 24             	mov    %edi,(%esp)
 87995fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 87995ff:	e8 8c f7 fb ff       	call   8758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>
 8799604:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 879960b:	00 
 879960c:	8b 46 04             	mov    0x4(%esi),%eax
 879960f:	89 3c 24             	mov    %edi,(%esp)
 8799612:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799616:	e8 c5 1d 01 00       	call   87ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>
 879961b:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8799622:	00 
 8799623:	8b 46 08             	mov    0x8(%esi),%eax
 8799626:	89 3c 24             	mov    %edi,(%esp)
 8799629:	89 44 24 04          	mov    %eax,0x4(%esp)
 879962d:	e8 ae 1d 01 00       	call   87ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>
 8799632:	8b 45 0c             	mov    0xc(%ebp),%eax
 8799635:	89 3c 24             	mov    %edi,(%esp)
 8799638:	89 44 24 04          	mov    %eax,0x4(%esp)
 879963c:	e8 4f f7 fb ff       	call   8758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>
 8799641:	c6 46 0c 00          	movb   $0x0,0xc(%esi)
 8799645:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8799648:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879964b:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879964e:	89 ec                	mov    %ebp,%esp
 8799650:	5d                   	pop    %ebp
 8799651:	c3                   	ret
 8799652:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8799659:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::HMAC_RMD::get_digest @ 0x8799570

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_RMD::get_digest(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall
yaSSL::HMAC_RMD::get_digest(HMAC_RMD *this,uchar *param_1,uchar *param_2,uint param_3)

{
  RIPEMD160 *this_00;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (*(char *)(puVar1 + 3) == '\0') {
    TaoCrypt::RIPEMD160::Update((RIPEMD160 *)(puVar1 + 4),(uchar *)*puVar1,0x40);
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  TaoCrypt::RIPEMD160::Update((RIPEMD160 *)(puVar1 + 4),param_2,param_3);
  puVar1 = *(undefined4 **)(this + 4);
  this_00 = (RIPEMD160 *)(puVar1 + 4);
  if (*(char *)(puVar1 + 3) == '\0') {
    TaoCrypt::RIPEMD160::Update(this_00,(uchar *)*puVar1,0x40);
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  TaoCrypt::HASHwithTransform::Final((HASHwithTransform *)this_00,(uchar *)puVar1[2]);
  TaoCrypt::RIPEMD160::Update(this_00,(uchar *)puVar1[1],0x40);
  TaoCrypt::RIPEMD160::Update(this_00,(uchar *)puVar1[2],0x14);
  TaoCrypt::HASHwithTransform::Final((HASHwithTransform *)this_00,param_1);
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}

```

---

## get_digestSize

```asm
// === 08798570 yaSSL::HMAC_RMD::get_digestSize  [0x08798570-0x879857f] ===
 8798570:	55                   	push   %ebp
 8798571:	b8 14 00 00 00       	mov    $0x14,%eax
 8798576:	89 e5                	mov    %esp,%ebp
 8798578:	5d                   	pop    %ebp
 8798579:	c3                   	ret
 879857a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::HMAC_RMD::get_digestSize @ 0x8798570

/* yaSSL::HMAC_RMD::get_digestSize() const */

undefined4 yaSSL::HMAC_RMD::get_digestSize(void)

{
  return 0x14;
}

```

---

## get_digest_0879a5f0

```asm
// === 0879a5f0 yaSSL::HMAC_RMD::get_digest  [0x0879a5f0-0x879a68f] ===
 879a5f0:	55                   	push   %ebp
 879a5f1:	89 e5                	mov    %esp,%ebp
 879a5f3:	83 ec 28             	sub    $0x28,%esp
 879a5f6:	8b 45 08             	mov    0x8(%ebp),%eax
 879a5f9:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879a5fc:	89 7d fc             	mov    %edi,-0x4(%ebp)
 879a5ff:	89 75 f8             	mov    %esi,-0x8(%ebp)
 879a602:	8b 70 04             	mov    0x4(%eax),%esi
 879a605:	e8 ee 87 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879a60a:	81 c3 8e 25 bd 00    	add    $0xbd258e,%ebx
 879a610:	80 7e 0c 00          	cmpb   $0x0,0xc(%esi)
 879a614:	8d 7e 10             	lea    0x10(%esi),%edi
 879a617:	75 1a                	jne    879a633 <_ZN5yaSSL8HMAC_RMD10get_digestEPh+0x43>
 879a619:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 879a620:	00 
 879a621:	8b 06                	mov    (%esi),%eax
 879a623:	89 3c 24             	mov    %edi,(%esp)
 879a626:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a62a:	e8 b1 0d 01 00       	call   87ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>
 879a62f:	c6 46 0c 01          	movb   $0x1,0xc(%esi)
 879a633:	8b 46 08             	mov    0x8(%esi),%eax
 879a636:	89 3c 24             	mov    %edi,(%esp)
 879a639:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a63d:	e8 4e e7 fb ff       	call   8758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>
 879a642:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 879a649:	00 
 879a64a:	8b 46 04             	mov    0x4(%esi),%eax
 879a64d:	89 3c 24             	mov    %edi,(%esp)
 879a650:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a654:	e8 87 0d 01 00       	call   87ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>
 879a659:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 879a660:	00 
 879a661:	8b 46 08             	mov    0x8(%esi),%eax
 879a664:	89 3c 24             	mov    %edi,(%esp)
 879a667:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a66b:	e8 70 0d 01 00       	call   87ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>
 879a670:	8b 45 0c             	mov    0xc(%ebp),%eax
 879a673:	89 3c 24             	mov    %edi,(%esp)
 879a676:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a67a:	e8 11 e7 fb ff       	call   8758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>
 879a67f:	c6 46 0c 00          	movb   $0x0,0xc(%esi)
 879a683:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879a686:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879a689:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879a68c:	89 ec                	mov    %ebp,%esp
 879a68e:	5d                   	pop    %ebp
 879a68f:	c3                   	ret

```

```c
// yaSSL::HMAC_RMD::get_digest @ 0x879a5f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_RMD::get_digest(unsigned char*) */

void __thiscall yaSSL::HMAC_RMD::get_digest(HMAC_RMD *this,uchar *param_1)

{
  RIPEMD160 *this_00;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  this_00 = (RIPEMD160 *)(puVar1 + 4);
  if (*(char *)(puVar1 + 3) == '\0') {
    TaoCrypt::RIPEMD160::Update(this_00,(uchar *)*puVar1,0x40);
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  TaoCrypt::HASHwithTransform::Final((HASHwithTransform *)this_00,(uchar *)puVar1[2]);
  TaoCrypt::RIPEMD160::Update(this_00,(uchar *)puVar1[1],0x40);
  TaoCrypt::RIPEMD160::Update(this_00,(uchar *)puVar1[2],0x14);
  TaoCrypt::HASHwithTransform::Final((HASHwithTransform *)this_00,param_1);
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}

```

---

## get_padSize

```asm
// === 08798580 yaSSL::HMAC_RMD::get_padSize  [0x08798580-0x879858f] ===
 8798580:	55                   	push   %ebp
 8798581:	b8 2c 00 00 00       	mov    $0x2c,%eax
 8798586:	89 e5                	mov    %esp,%ebp
 8798588:	5d                   	pop    %ebp
 8798589:	c3                   	ret
 879858a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::HMAC_RMD::get_padSize @ 0x8798580

/* yaSSL::HMAC_RMD::get_padSize() const */

undefined4 yaSSL::HMAC_RMD::get_padSize(void)

{
  return 0x2c;
}

```

---

## update

```asm
// === 0879a370 yaSSL::HMAC_RMD::update  [0x0879a370-0x879a3df] ===
 879a370:	55                   	push   %ebp
 879a371:	89 e5                	mov    %esp,%ebp
 879a373:	83 ec 28             	sub    $0x28,%esp
 879a376:	8b 45 08             	mov    0x8(%ebp),%eax
 879a379:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879a37c:	89 7d fc             	mov    %edi,-0x4(%ebp)
 879a37f:	89 75 f8             	mov    %esi,-0x8(%ebp)
 879a382:	8b 70 04             	mov    0x4(%eax),%esi
 879a385:	e8 6e 8a f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879a38a:	81 c3 0e 28 bd 00    	add    $0xbd280e,%ebx
 879a390:	80 7e 0c 00          	cmpb   $0x0,0xc(%esi)
 879a394:	8d 7e 10             	lea    0x10(%esi),%edi
 879a397:	75 1a                	jne    879a3b3 <_ZN5yaSSL8HMAC_RMD6updateEPKhj+0x43>
 879a399:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 879a3a0:	00 
 879a3a1:	8b 06                	mov    (%esi),%eax
 879a3a3:	89 3c 24             	mov    %edi,(%esp)
 879a3a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a3aa:	e8 31 10 01 00       	call   87ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>
 879a3af:	c6 46 0c 01          	movb   $0x1,0xc(%esi)
 879a3b3:	8b 45 10             	mov    0x10(%ebp),%eax
 879a3b6:	89 3c 24             	mov    %edi,(%esp)
 879a3b9:	89 44 24 08          	mov    %eax,0x8(%esp)
 879a3bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 879a3c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a3c4:	e8 17 10 01 00       	call   87ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>
 879a3c9:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879a3cc:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879a3cf:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879a3d2:	89 ec                	mov    %ebp,%esp
 879a3d4:	5d                   	pop    %ebp
 879a3d5:	c3                   	ret
 879a3d6:	8d 76 00             	lea    0x0(%esi),%esi
 879a3d9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::HMAC_RMD::update @ 0x879a370

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_RMD::update(unsigned char const*, unsigned int) */

void __thiscall yaSSL::HMAC_RMD::update(HMAC_RMD *this,uchar *param_1,uint param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (*(char *)(puVar1 + 3) == '\0') {
    TaoCrypt::RIPEMD160::Update((RIPEMD160 *)(puVar1 + 4),(uchar *)*puVar1,0x40);
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  TaoCrypt::RIPEMD160::Update((RIPEMD160 *)(puVar1 + 4),param_1,param_2);
  return;
}

```

---

## ~HMAC_RMD

```asm
// === 08798a70 yaSSL::HMAC_RMD::~HMAC_RMD  [0x08798a70-0x8798acf] ===
 8798a70:	55                   	push   %ebp
 8798a71:	89 e5                	mov    %esp,%ebp
 8798a73:	83 ec 18             	sub    $0x18,%esp
 8798a76:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8798a79:	e8 7a a3 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8798a7e:	81 c3 1a 41 bd 00    	add    $0xbd411a,%ebx
 8798a84:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8798a87:	8b 75 08             	mov    0x8(%ebp),%esi
 8798a8a:	8b 83 f8 fb ff ff    	mov    -0x408(%ebx),%eax
 8798a90:	83 c0 08             	add    $0x8,%eax
 8798a93:	89 06                	mov    %eax,(%esi)
 8798a95:	8b 46 04             	mov    0x4(%esi),%eax
 8798a98:	85 c0                	test   %eax,%eax
 8798a9a:	74 0c                	je     8798aa8 <_ZN5yaSSL8HMAC_RMDD1Ev+0x38>
 8798a9c:	8b 93 c4 ff ff ff    	mov    -0x3c(%ebx),%edx
 8798aa2:	83 c2 08             	add    $0x8,%edx
 8798aa5:	89 50 10             	mov    %edx,0x10(%eax)
 8798aa8:	89 04 24             	mov    %eax,(%esp)
 8798aab:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8798ab0:	e8 6b 7d fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8798ab5:	8b 83 28 fb ff ff    	mov    -0x4d8(%ebx),%eax
 8798abb:	83 c0 08             	add    $0x8,%eax
 8798abe:	89 06                	mov    %eax,(%esi)
 8798ac0:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8798ac3:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8798ac6:	89 ec                	mov    %ebp,%esp
 8798ac8:	5d                   	pop    %ebp
 8798ac9:	c3                   	ret
 8798aca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::HMAC_RMD::~HMAC_RMD @ 0x8798a70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_RMD::~HMAC_RMD() */

void __thiscall yaSSL::HMAC_RMD::~HMAC_RMD(HMAC_RMD *this)

{
  int iVar1;
  
  *(undefined **)this = PTR_vtable_0936c790 + 8;
  iVar1 = *(int *)(this + 4);
  if (iVar1 != 0) {
    *(undefined **)(iVar1 + 0x10) = PTR_vtable_0936cb5c + 8;
  }
  operator_delete(iVar1,0);
  *(undefined **)this = PTR_vtable_0936c6c0 + 8;
  return;
}

```

---

## ~HMAC_RMD_08798ad0

```asm
// === 08798ad0 yaSSL::HMAC_RMD::~HMAC_RMD  [0x08798ad0-0x8798aff] ===
 8798ad0:	55                   	push   %ebp
 8798ad1:	89 e5                	mov    %esp,%ebp
 8798ad3:	53                   	push   %ebx
 8798ad4:	e8 1f a3 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8798ad9:	81 c3 bf 40 bd 00    	add    $0xbd40bf,%ebx
 8798adf:	83 ec 14             	sub    $0x14,%esp
 8798ae2:	8b 45 08             	mov    0x8(%ebp),%eax
 8798ae5:	89 04 24             	mov    %eax,(%esp)
 8798ae8:	e8 83 ff ff ff       	call   8798a70 <_ZN5yaSSL8HMAC_RMDD1Ev>
 8798aed:	83 c4 14             	add    $0x14,%esp
 8798af0:	5b                   	pop    %ebx
 8798af1:	5d                   	pop    %ebp
 8798af2:	c3                   	ret
 8798af3:	90                   	nop
 8798af4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8798afa:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::HMAC_RMD::~HMAC_RMD @ 0x8798ad0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_RMD::~HMAC_RMD() */

void __thiscall yaSSL::HMAC_RMD::~HMAC_RMD(HMAC_RMD *this)

{
  ~HMAC_RMD(this);
  return;
}

```

