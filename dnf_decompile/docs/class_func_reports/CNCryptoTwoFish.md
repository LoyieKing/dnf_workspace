# CNCryptoTwoFish

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## CNCryptoTwoFish

```asm
// === 0809d328 CNCryptoTwoFish::CNCryptoTwoFish  [0x0809d328-0x809d3c5] ===
 809d328:	55                   	push   %ebp
 809d329:	89 e5                	mov    %esp,%ebp
 809d32b:	56                   	push   %esi
 809d32c:	53                   	push   %ebx
 809d32d:	83 ec 40             	sub    $0x40,%esp
 809d330:	8b 45 08             	mov    0x8(%ebp),%eax
 809d333:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 809d33a:	00 
 809d33b:	89 04 24             	mov    %eax,(%esp)
 809d33e:	e8 ad 0b 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809d343:	8b 45 08             	mov    0x8(%ebp),%eax
 809d346:	c7 00 08 3b b1 08    	movl   $0x8b13b08,(%eax)
 809d34c:	8b 45 08             	mov    0x8(%ebp),%eax
 809d34f:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809d356:	c7 04 24 a0 10 00 00 	movl   $0x10a0,(%esp)
 809d35d:	e8 ee 70 68 00       	call   8724450 <_Znwj>
 809d362:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809d365:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 809d369:	74 53                	je     809d3be <_ZN15CNCryptoTwoFishC1Ev+0x96>
 809d36b:	8b 45 08             	mov    0x8(%ebp),%eax
 809d36e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 809d371:	89 50 08             	mov    %edx,0x8(%eax)
 809d374:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 809d37b:	00 
 809d37c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 809d37f:	89 04 24             	mov    %eax,(%esp)
 809d382:	e8 2b 13 00 00       	call   809e6b2 <_Z17GenerateRandomKeyPhi>
 809d387:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 809d38e:	00 
 809d38f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 809d392:	89 44 24 04          	mov    %eax,0x4(%esp)
 809d396:	8b 45 08             	mov    0x8(%ebp),%eax
 809d399:	89 04 24             	mov    %eax,(%esp)
 809d39c:	e8 db 00 00 00       	call   809d47c <_ZN15CNCryptoTwoFish10InitializeEPKhi>
 809d3a1:	eb 1b                	jmp    809d3be <_ZN15CNCryptoTwoFishC1Ev+0x96>
 809d3a3:	89 d3                	mov    %edx,%ebx
 809d3a5:	89 c6                	mov    %eax,%esi
 809d3a7:	8b 45 08             	mov    0x8(%ebp),%eax
 809d3aa:	89 04 24             	mov    %eax,(%esp)
 809d3ad:	e8 56 0b 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809d3b2:	89 f0                	mov    %esi,%eax
 809d3b4:	89 da                	mov    %ebx,%edx
 809d3b6:	89 04 24             	mov    %eax,(%esp)
 809d3b9:	e8 92 63 a4 00       	call   8ae3750 <_Unwind_Resume>
 809d3be:	83 c4 40             	add    $0x40,%esp
 809d3c1:	5b                   	pop    %ebx
 809d3c2:	5e                   	pop    %esi
 809d3c3:	5d                   	pop    %ebp
 809d3c4:	c3                   	ret
 809d3c5:	90                   	nop

```

```c
// CNCryptoTwoFish::CNCryptoTwoFish @ 0x809d328

/* CNCryptoTwoFish::CNCryptoTwoFish() */

void __thiscall CNCryptoTwoFish::CNCryptoTwoFish(CNCryptoTwoFish *this)

{
  uchar local_30 [32];
  void *local_10;
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,4);
  *(undefined ***)this = &PTR__CNCryptoTwoFish_08b13b08;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 0809d35d to 0809d3a0 has its CatchHandler @ 0809d3a3 */
  local_10 = operator_new(0x10a0);
  if (local_10 != (void *)0x0) {
    *(void **)(this + 8) = local_10;
    GenerateRandomKey(local_30,0x20);
    Initialize(this,local_30,0x20);
  }
  return;
}

```

---

## CNCryptoTwoFish_0809d438

```asm
// === 0809d438 CNCryptoTwoFish::CNCryptoTwoFish  [0x0809d438-0x809d45b] ===
 809d438:	55                   	push   %ebp
 809d439:	89 e5                	mov    %esp,%ebp
 809d43b:	83 ec 18             	sub    $0x18,%esp
 809d43e:	8b 45 08             	mov    0x8(%ebp),%eax
 809d441:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 809d448:	00 
 809d449:	89 04 24             	mov    %eax,(%esp)
 809d44c:	e8 9f 0a 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809d451:	8b 45 08             	mov    0x8(%ebp),%eax
 809d454:	c7 00 08 3b b1 08    	movl   $0x8b13b08,(%eax)
 809d45a:	c9                   	leave
 809d45b:	c3                   	ret

```

```c
// CNCryptoTwoFish::CNCryptoTwoFish @ 0x809d438

/* CNCryptoTwoFish::CNCryptoTwoFish(CNCryptoTwoFish const&) */

void __thiscall CNCryptoTwoFish::CNCryptoTwoFish(CNCryptoTwoFish *this,CNCryptoTwoFish *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,4);
  *(undefined ***)this = &PTR__CNCryptoTwoFish_08b13b08;
  return;
}

```

---

## Decrypt

```asm
// === 0809d5fc CNCryptoTwoFish::Decrypt  [0x0809d5fc-0x809d6d3] ===
 809d5fc:	55                   	push   %ebp
 809d5fd:	89 e5                	mov    %esp,%ebp
 809d5ff:	83 ec 38             	sub    $0x38,%esp
 809d602:	8b 45 08             	mov    0x8(%ebp),%eax
 809d605:	8b 40 08             	mov    0x8(%eax),%eax
 809d608:	85 c0                	test   %eax,%eax
 809d60a:	75 0a                	jne    809d616 <_ZN15CNCryptoTwoFish7DecryptEPhi+0x1a>
 809d60c:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809d611:	e9 bb 00 00 00       	jmp    809d6d1 <_ZN15CNCryptoTwoFish7DecryptEPhi+0xd5>
 809d616:	8b 45 08             	mov    0x8(%ebp),%eax
 809d619:	8b 00                	mov    (%eax),%eax
 809d61b:	83 c0 24             	add    $0x24,%eax
 809d61e:	8b 10                	mov    (%eax),%edx
 809d620:	8b 45 08             	mov    0x8(%ebp),%eax
 809d623:	89 04 24             	mov    %eax,(%esp)
 809d626:	ff d2                	call   *%edx
 809d628:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809d62b:	8b 55 10             	mov    0x10(%ebp),%edx
 809d62e:	89 d0                	mov    %edx,%eax
 809d630:	c1 fa 1f             	sar    $0x1f,%edx
 809d633:	f7 7d e0             	idivl  -0x20(%ebp)
 809d636:	89 d0                	mov    %edx,%eax
 809d638:	85 c0                	test   %eax,%eax
 809d63a:	0f 95 c0             	setne  %al
 809d63d:	84 c0                	test   %al,%al
 809d63f:	74 0a                	je     809d64b <_ZN15CNCryptoTwoFish7DecryptEPhi+0x4f>
 809d641:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809d646:	e9 86 00 00 00       	jmp    809d6d1 <_ZN15CNCryptoTwoFish7DecryptEPhi+0xd5>
 809d64b:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 809d64f:	7f 07                	jg     809d658 <_ZN15CNCryptoTwoFish7DecryptEPhi+0x5c>
 809d651:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809d656:	eb 79                	jmp    809d6d1 <_ZN15CNCryptoTwoFish7DecryptEPhi+0xd5>
 809d658:	8b 45 08             	mov    0x8(%ebp),%eax
 809d65b:	8b 40 08             	mov    0x8(%eax),%eax
 809d65e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809d661:	8b 45 08             	mov    0x8(%ebp),%eax
 809d664:	8b 00                	mov    (%eax),%eax
 809d666:	83 c0 24             	add    $0x24,%eax
 809d669:	8b 10                	mov    (%eax),%edx
 809d66b:	8b 45 08             	mov    0x8(%ebp),%eax
 809d66e:	89 04 24             	mov    %eax,(%esp)
 809d671:	ff d2                	call   *%edx
 809d673:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809d676:	8b 45 10             	mov    0x10(%ebp),%eax
 809d679:	89 c2                	mov    %eax,%edx
 809d67b:	c1 fa 1f             	sar    $0x1f,%edx
 809d67e:	f7 7d e4             	idivl  -0x1c(%ebp)
 809d681:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809d684:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809d68b:	eb 32                	jmp    809d6bf <_ZN15CNCryptoTwoFish7DecryptEPhi+0xc3>
 809d68d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809d690:	89 44 24 08          	mov    %eax,0x8(%esp)
 809d694:	8b 45 0c             	mov    0xc(%ebp),%eax
 809d697:	89 44 24 04          	mov    %eax,0x4(%esp)
 809d69b:	8b 45 0c             	mov    0xc(%ebp),%eax
 809d69e:	89 04 24             	mov    %eax,(%esp)
 809d6a1:	e8 4f 7c 02 00       	call   80c52f5 <_Z19twofish_ecb_decryptPKhPhP13symmetric_key>
 809d6a6:	8b 45 08             	mov    0x8(%ebp),%eax
 809d6a9:	8b 00                	mov    (%eax),%eax
 809d6ab:	83 c0 24             	add    $0x24,%eax
 809d6ae:	8b 10                	mov    (%eax),%edx
 809d6b0:	8b 45 08             	mov    0x8(%ebp),%eax
 809d6b3:	89 04 24             	mov    %eax,(%esp)
 809d6b6:	ff d2                	call   *%edx
 809d6b8:	01 45 0c             	add    %eax,0xc(%ebp)
 809d6bb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809d6bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809d6c2:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809d6c5:	0f 9c c0             	setl   %al
 809d6c8:	84 c0                	test   %al,%al
 809d6ca:	75 c1                	jne    809d68d <_ZN15CNCryptoTwoFish7DecryptEPhi+0x91>
 809d6cc:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809d6d1:	c9                   	leave
 809d6d2:	c3                   	ret
 809d6d3:	90                   	nop

```

```c
// CNCryptoTwoFish::Decrypt @ 0x809d5fc

/* CNCryptoTwoFish::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoTwoFish::Decrypt(CNCryptoTwoFish *this,uchar *param_1,int param_2)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      if (param_2 < 1) {
        uVar2 = 0x7000000a;
      }
      else {
        psVar1 = *(symmetric_key **)(this + 8);
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          twofish_ecb_decrypt(param_1,param_1,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x70000006;
    }
  }
  return uVar2;
}

```

---

## Decrypt_0809d7c6

```asm
// === 0809d7c6 CNCryptoTwoFish::Decrypt  [0x0809d7c6-0x809d8b7] ===
 809d7c6:	55                   	push   %ebp
 809d7c7:	89 e5                	mov    %esp,%ebp
 809d7c9:	83 ec 38             	sub    $0x38,%esp
 809d7cc:	8b 45 08             	mov    0x8(%ebp),%eax
 809d7cf:	8b 40 08             	mov    0x8(%eax),%eax
 809d7d2:	85 c0                	test   %eax,%eax
 809d7d4:	75 0a                	jne    809d7e0 <_ZN15CNCryptoTwoFish7DecryptEPKhiPhi+0x1a>
 809d7d6:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809d7db:	e9 d5 00 00 00       	jmp    809d8b5 <_ZN15CNCryptoTwoFish7DecryptEPKhiPhi+0xef>
 809d7e0:	8b 45 08             	mov    0x8(%ebp),%eax
 809d7e3:	8b 00                	mov    (%eax),%eax
 809d7e5:	83 c0 24             	add    $0x24,%eax
 809d7e8:	8b 10                	mov    (%eax),%edx
 809d7ea:	8b 45 08             	mov    0x8(%ebp),%eax
 809d7ed:	89 04 24             	mov    %eax,(%esp)
 809d7f0:	ff d2                	call   *%edx
 809d7f2:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809d7f5:	8b 55 10             	mov    0x10(%ebp),%edx
 809d7f8:	89 d0                	mov    %edx,%eax
 809d7fa:	c1 fa 1f             	sar    $0x1f,%edx
 809d7fd:	f7 7d e0             	idivl  -0x20(%ebp)
 809d800:	89 d0                	mov    %edx,%eax
 809d802:	85 c0                	test   %eax,%eax
 809d804:	0f 95 c0             	setne  %al
 809d807:	84 c0                	test   %al,%al
 809d809:	74 0a                	je     809d815 <_ZN15CNCryptoTwoFish7DecryptEPKhiPhi+0x4f>
 809d80b:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809d810:	e9 a0 00 00 00       	jmp    809d8b5 <_ZN15CNCryptoTwoFish7DecryptEPKhiPhi+0xef>
 809d815:	8b 45 10             	mov    0x10(%ebp),%eax
 809d818:	3b 45 18             	cmp    0x18(%ebp),%eax
 809d81b:	7e 0a                	jle    809d827 <_ZN15CNCryptoTwoFish7DecryptEPKhiPhi+0x61>
 809d81d:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809d822:	e9 8e 00 00 00       	jmp    809d8b5 <_ZN15CNCryptoTwoFish7DecryptEPKhiPhi+0xef>
 809d827:	8b 45 08             	mov    0x8(%ebp),%eax
 809d82a:	8b 40 08             	mov    0x8(%eax),%eax
 809d82d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809d830:	8b 45 08             	mov    0x8(%ebp),%eax
 809d833:	8b 00                	mov    (%eax),%eax
 809d835:	83 c0 24             	add    $0x24,%eax
 809d838:	8b 10                	mov    (%eax),%edx
 809d83a:	8b 45 08             	mov    0x8(%ebp),%eax
 809d83d:	89 04 24             	mov    %eax,(%esp)
 809d840:	ff d2                	call   *%edx
 809d842:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809d845:	8b 45 10             	mov    0x10(%ebp),%eax
 809d848:	89 c2                	mov    %eax,%edx
 809d84a:	c1 fa 1f             	sar    $0x1f,%edx
 809d84d:	f7 7d e4             	idivl  -0x1c(%ebp)
 809d850:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809d853:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809d85a:	eb 47                	jmp    809d8a3 <_ZN15CNCryptoTwoFish7DecryptEPKhiPhi+0xdd>
 809d85c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809d85f:	89 44 24 08          	mov    %eax,0x8(%esp)
 809d863:	8b 45 14             	mov    0x14(%ebp),%eax
 809d866:	89 44 24 04          	mov    %eax,0x4(%esp)
 809d86a:	8b 45 0c             	mov    0xc(%ebp),%eax
 809d86d:	89 04 24             	mov    %eax,(%esp)
 809d870:	e8 80 7a 02 00       	call   80c52f5 <_Z19twofish_ecb_decryptPKhPhP13symmetric_key>
 809d875:	8b 45 08             	mov    0x8(%ebp),%eax
 809d878:	8b 00                	mov    (%eax),%eax
 809d87a:	83 c0 24             	add    $0x24,%eax
 809d87d:	8b 10                	mov    (%eax),%edx
 809d87f:	8b 45 08             	mov    0x8(%ebp),%eax
 809d882:	89 04 24             	mov    %eax,(%esp)
 809d885:	ff d2                	call   *%edx
 809d887:	01 45 14             	add    %eax,0x14(%ebp)
 809d88a:	8b 45 08             	mov    0x8(%ebp),%eax
 809d88d:	8b 00                	mov    (%eax),%eax
 809d88f:	83 c0 24             	add    $0x24,%eax
 809d892:	8b 10                	mov    (%eax),%edx
 809d894:	8b 45 08             	mov    0x8(%ebp),%eax
 809d897:	89 04 24             	mov    %eax,(%esp)
 809d89a:	ff d2                	call   *%edx
 809d89c:	01 45 0c             	add    %eax,0xc(%ebp)
 809d89f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809d8a3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809d8a6:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809d8a9:	0f 9c c0             	setl   %al
 809d8ac:	84 c0                	test   %al,%al
 809d8ae:	75 ac                	jne    809d85c <_ZN15CNCryptoTwoFish7DecryptEPKhiPhi+0x96>
 809d8b0:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809d8b5:	c9                   	leave
 809d8b6:	c3                   	ret
 809d8b7:	90                   	nop

```

```c
// CNCryptoTwoFish::Decrypt @ 0x809d7c6

/* CNCryptoTwoFish::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoTwoFish::Decrypt
          (CNCryptoTwoFish *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      if (param_4 < param_2) {
        uVar2 = 0x7000000a;
      }
      else {
        psVar1 = *(symmetric_key **)(this + 8);
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          twofish_ecb_decrypt(param_1,param_3,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_3 = param_3 + iVar4;
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x70000006;
    }
  }
  return uVar2;
}

```

---

## Encrypt

```asm
// === 0809d524 CNCryptoTwoFish::Encrypt  [0x0809d524-0x809d5fb] ===
 809d524:	55                   	push   %ebp
 809d525:	89 e5                	mov    %esp,%ebp
 809d527:	83 ec 38             	sub    $0x38,%esp
 809d52a:	8b 45 08             	mov    0x8(%ebp),%eax
 809d52d:	8b 40 08             	mov    0x8(%eax),%eax
 809d530:	85 c0                	test   %eax,%eax
 809d532:	75 0a                	jne    809d53e <_ZN15CNCryptoTwoFish7EncryptEPhi+0x1a>
 809d534:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809d539:	e9 bb 00 00 00       	jmp    809d5f9 <_ZN15CNCryptoTwoFish7EncryptEPhi+0xd5>
 809d53e:	8b 45 08             	mov    0x8(%ebp),%eax
 809d541:	8b 00                	mov    (%eax),%eax
 809d543:	83 c0 24             	add    $0x24,%eax
 809d546:	8b 10                	mov    (%eax),%edx
 809d548:	8b 45 08             	mov    0x8(%ebp),%eax
 809d54b:	89 04 24             	mov    %eax,(%esp)
 809d54e:	ff d2                	call   *%edx
 809d550:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809d553:	8b 55 10             	mov    0x10(%ebp),%edx
 809d556:	89 d0                	mov    %edx,%eax
 809d558:	c1 fa 1f             	sar    $0x1f,%edx
 809d55b:	f7 7d e0             	idivl  -0x20(%ebp)
 809d55e:	89 d0                	mov    %edx,%eax
 809d560:	85 c0                	test   %eax,%eax
 809d562:	0f 95 c0             	setne  %al
 809d565:	84 c0                	test   %al,%al
 809d567:	74 0a                	je     809d573 <_ZN15CNCryptoTwoFish7EncryptEPhi+0x4f>
 809d569:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809d56e:	e9 86 00 00 00       	jmp    809d5f9 <_ZN15CNCryptoTwoFish7EncryptEPhi+0xd5>
 809d573:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 809d577:	7f 07                	jg     809d580 <_ZN15CNCryptoTwoFish7EncryptEPhi+0x5c>
 809d579:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809d57e:	eb 79                	jmp    809d5f9 <_ZN15CNCryptoTwoFish7EncryptEPhi+0xd5>
 809d580:	8b 45 08             	mov    0x8(%ebp),%eax
 809d583:	8b 40 08             	mov    0x8(%eax),%eax
 809d586:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809d589:	8b 45 08             	mov    0x8(%ebp),%eax
 809d58c:	8b 00                	mov    (%eax),%eax
 809d58e:	83 c0 24             	add    $0x24,%eax
 809d591:	8b 10                	mov    (%eax),%edx
 809d593:	8b 45 08             	mov    0x8(%ebp),%eax
 809d596:	89 04 24             	mov    %eax,(%esp)
 809d599:	ff d2                	call   *%edx
 809d59b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809d59e:	8b 45 10             	mov    0x10(%ebp),%eax
 809d5a1:	89 c2                	mov    %eax,%edx
 809d5a3:	c1 fa 1f             	sar    $0x1f,%edx
 809d5a6:	f7 7d e4             	idivl  -0x1c(%ebp)
 809d5a9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809d5ac:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809d5b3:	eb 32                	jmp    809d5e7 <_ZN15CNCryptoTwoFish7EncryptEPhi+0xc3>
 809d5b5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809d5b8:	89 44 24 08          	mov    %eax,0x8(%esp)
 809d5bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 809d5bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 809d5c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 809d5c6:	89 04 24             	mov    %eax,(%esp)
 809d5c9:	e8 7a 78 02 00       	call   80c4e48 <_Z19twofish_ecb_encryptPKhPhP13symmetric_key>
 809d5ce:	8b 45 08             	mov    0x8(%ebp),%eax
 809d5d1:	8b 00                	mov    (%eax),%eax
 809d5d3:	83 c0 24             	add    $0x24,%eax
 809d5d6:	8b 10                	mov    (%eax),%edx
 809d5d8:	8b 45 08             	mov    0x8(%ebp),%eax
 809d5db:	89 04 24             	mov    %eax,(%esp)
 809d5de:	ff d2                	call   *%edx
 809d5e0:	01 45 0c             	add    %eax,0xc(%ebp)
 809d5e3:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809d5e7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809d5ea:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809d5ed:	0f 9c c0             	setl   %al
 809d5f0:	84 c0                	test   %al,%al
 809d5f2:	75 c1                	jne    809d5b5 <_ZN15CNCryptoTwoFish7EncryptEPhi+0x91>
 809d5f4:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809d5f9:	c9                   	leave
 809d5fa:	c3                   	ret
 809d5fb:	90                   	nop

```

```c
// CNCryptoTwoFish::Encrypt @ 0x809d524

/* CNCryptoTwoFish::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoTwoFish::Encrypt(CNCryptoTwoFish *this,uchar *param_1,int param_2)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      if (param_2 < 1) {
        uVar2 = 0x7000000a;
      }
      else {
        psVar1 = *(symmetric_key **)(this + 8);
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          twofish_ecb_encrypt(param_1,param_1,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x70000006;
    }
  }
  return uVar2;
}

```

---

## Encrypt_0809d6d4

```asm
// === 0809d6d4 CNCryptoTwoFish::Encrypt  [0x0809d6d4-0x809d7c5] ===
 809d6d4:	55                   	push   %ebp
 809d6d5:	89 e5                	mov    %esp,%ebp
 809d6d7:	83 ec 38             	sub    $0x38,%esp
 809d6da:	8b 45 08             	mov    0x8(%ebp),%eax
 809d6dd:	8b 40 08             	mov    0x8(%eax),%eax
 809d6e0:	85 c0                	test   %eax,%eax
 809d6e2:	75 0a                	jne    809d6ee <_ZN15CNCryptoTwoFish7EncryptEPKhiPhi+0x1a>
 809d6e4:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809d6e9:	e9 d5 00 00 00       	jmp    809d7c3 <_ZN15CNCryptoTwoFish7EncryptEPKhiPhi+0xef>
 809d6ee:	8b 45 08             	mov    0x8(%ebp),%eax
 809d6f1:	8b 00                	mov    (%eax),%eax
 809d6f3:	83 c0 24             	add    $0x24,%eax
 809d6f6:	8b 10                	mov    (%eax),%edx
 809d6f8:	8b 45 08             	mov    0x8(%ebp),%eax
 809d6fb:	89 04 24             	mov    %eax,(%esp)
 809d6fe:	ff d2                	call   *%edx
 809d700:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809d703:	8b 55 10             	mov    0x10(%ebp),%edx
 809d706:	89 d0                	mov    %edx,%eax
 809d708:	c1 fa 1f             	sar    $0x1f,%edx
 809d70b:	f7 7d e0             	idivl  -0x20(%ebp)
 809d70e:	89 d0                	mov    %edx,%eax
 809d710:	85 c0                	test   %eax,%eax
 809d712:	0f 95 c0             	setne  %al
 809d715:	84 c0                	test   %al,%al
 809d717:	74 0a                	je     809d723 <_ZN15CNCryptoTwoFish7EncryptEPKhiPhi+0x4f>
 809d719:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809d71e:	e9 a0 00 00 00       	jmp    809d7c3 <_ZN15CNCryptoTwoFish7EncryptEPKhiPhi+0xef>
 809d723:	8b 45 10             	mov    0x10(%ebp),%eax
 809d726:	3b 45 18             	cmp    0x18(%ebp),%eax
 809d729:	7e 0a                	jle    809d735 <_ZN15CNCryptoTwoFish7EncryptEPKhiPhi+0x61>
 809d72b:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809d730:	e9 8e 00 00 00       	jmp    809d7c3 <_ZN15CNCryptoTwoFish7EncryptEPKhiPhi+0xef>
 809d735:	8b 45 08             	mov    0x8(%ebp),%eax
 809d738:	8b 40 08             	mov    0x8(%eax),%eax
 809d73b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809d73e:	8b 45 08             	mov    0x8(%ebp),%eax
 809d741:	8b 00                	mov    (%eax),%eax
 809d743:	83 c0 24             	add    $0x24,%eax
 809d746:	8b 10                	mov    (%eax),%edx
 809d748:	8b 45 08             	mov    0x8(%ebp),%eax
 809d74b:	89 04 24             	mov    %eax,(%esp)
 809d74e:	ff d2                	call   *%edx
 809d750:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809d753:	8b 45 10             	mov    0x10(%ebp),%eax
 809d756:	89 c2                	mov    %eax,%edx
 809d758:	c1 fa 1f             	sar    $0x1f,%edx
 809d75b:	f7 7d e4             	idivl  -0x1c(%ebp)
 809d75e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809d761:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809d768:	eb 47                	jmp    809d7b1 <_ZN15CNCryptoTwoFish7EncryptEPKhiPhi+0xdd>
 809d76a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809d76d:	89 44 24 08          	mov    %eax,0x8(%esp)
 809d771:	8b 45 14             	mov    0x14(%ebp),%eax
 809d774:	89 44 24 04          	mov    %eax,0x4(%esp)
 809d778:	8b 45 0c             	mov    0xc(%ebp),%eax
 809d77b:	89 04 24             	mov    %eax,(%esp)
 809d77e:	e8 c5 76 02 00       	call   80c4e48 <_Z19twofish_ecb_encryptPKhPhP13symmetric_key>
 809d783:	8b 45 08             	mov    0x8(%ebp),%eax
 809d786:	8b 00                	mov    (%eax),%eax
 809d788:	83 c0 24             	add    $0x24,%eax
 809d78b:	8b 10                	mov    (%eax),%edx
 809d78d:	8b 45 08             	mov    0x8(%ebp),%eax
 809d790:	89 04 24             	mov    %eax,(%esp)
 809d793:	ff d2                	call   *%edx
 809d795:	01 45 0c             	add    %eax,0xc(%ebp)
 809d798:	8b 45 08             	mov    0x8(%ebp),%eax
 809d79b:	8b 00                	mov    (%eax),%eax
 809d79d:	83 c0 24             	add    $0x24,%eax
 809d7a0:	8b 10                	mov    (%eax),%edx
 809d7a2:	8b 45 08             	mov    0x8(%ebp),%eax
 809d7a5:	89 04 24             	mov    %eax,(%esp)
 809d7a8:	ff d2                	call   *%edx
 809d7aa:	01 45 14             	add    %eax,0x14(%ebp)
 809d7ad:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809d7b1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809d7b4:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809d7b7:	0f 9c c0             	setl   %al
 809d7ba:	84 c0                	test   %al,%al
 809d7bc:	75 ac                	jne    809d76a <_ZN15CNCryptoTwoFish7EncryptEPKhiPhi+0x96>
 809d7be:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809d7c3:	c9                   	leave
 809d7c4:	c3                   	ret
 809d7c5:	90                   	nop

```

```c
// CNCryptoTwoFish::Encrypt @ 0x809d6d4

/* CNCryptoTwoFish::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoTwoFish::Encrypt
          (CNCryptoTwoFish *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      if (param_4 < param_2) {
        uVar2 = 0x7000000a;
      }
      else {
        psVar1 = *(symmetric_key **)(this + 8);
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          twofish_ecb_encrypt(param_1,param_3,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_3 = param_3 + iVar4;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x70000006;
    }
  }
  return uVar2;
}

```

---

## GetBlockSize

```asm
// === 0809d8c2 CNCryptoTwoFish::GetBlockSize  [0x0809d8c2-0x809d8cb] ===
 809d8c2:	55                   	push   %ebp
 809d8c3:	89 e5                	mov    %esp,%ebp
 809d8c5:	b8 10 00 00 00       	mov    $0x10,%eax
 809d8ca:	5d                   	pop    %ebp
 809d8cb:	c3                   	ret

```

```c
// CNCryptoTwoFish::GetBlockSize @ 0x809d8c2

/* CNCryptoTwoFish::GetBlockSize() const */

undefined4 CNCryptoTwoFish::GetBlockSize(void)

{
  return 0x10;
}

```

---

## GetKeySize

```asm
// === 0809d8b8 CNCryptoTwoFish::GetKeySize  [0x0809d8b8-0x809d8c1] ===
 809d8b8:	55                   	push   %ebp
 809d8b9:	89 e5                	mov    %esp,%ebp
 809d8bb:	b8 20 00 00 00       	mov    $0x20,%eax
 809d8c0:	5d                   	pop    %ebp
 809d8c1:	c3                   	ret

```

```c
// CNCryptoTwoFish::GetKeySize @ 0x809d8b8

/* CNCryptoTwoFish::GetKeySize() const */

undefined4 CNCryptoTwoFish::GetKeySize(void)

{
  return 0x20;
}

```

---

## Initialize

```asm
// === 0809d47c CNCryptoTwoFish::Initialize  [0x0809d47c-0x809d523] ===
 809d47c:	55                   	push   %ebp
 809d47d:	89 e5                	mov    %esp,%ebp
 809d47f:	83 ec 28             	sub    $0x28,%esp
 809d482:	8b 45 08             	mov    0x8(%ebp),%eax
 809d485:	8b 40 08             	mov    0x8(%eax),%eax
 809d488:	85 c0                	test   %eax,%eax
 809d48a:	75 0a                	jne    809d496 <_ZN15CNCryptoTwoFish10InitializeEPKhi+0x1a>
 809d48c:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809d491:	e9 8b 00 00 00       	jmp    809d521 <_ZN15CNCryptoTwoFish10InitializeEPKhi+0xa5>
 809d496:	8b 45 08             	mov    0x8(%ebp),%eax
 809d499:	8b 00                	mov    (%eax),%eax
 809d49b:	83 c0 20             	add    $0x20,%eax
 809d49e:	8b 10                	mov    (%eax),%edx
 809d4a0:	8b 45 08             	mov    0x8(%ebp),%eax
 809d4a3:	89 04 24             	mov    %eax,(%esp)
 809d4a6:	ff d2                	call   *%edx
 809d4a8:	3b 45 10             	cmp    0x10(%ebp),%eax
 809d4ab:	0f 9f c0             	setg   %al
 809d4ae:	84 c0                	test   %al,%al
 809d4b0:	74 07                	je     809d4b9 <_ZN15CNCryptoTwoFish10InitializeEPKhi+0x3d>
 809d4b2:	b8 02 00 00 70       	mov    $0x70000002,%eax
 809d4b7:	eb 68                	jmp    809d521 <_ZN15CNCryptoTwoFish10InitializeEPKhi+0xa5>
 809d4b9:	8b 45 08             	mov    0x8(%ebp),%eax
 809d4bc:	8b 40 08             	mov    0x8(%eax),%eax
 809d4bf:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809d4c2:	8b 45 08             	mov    0x8(%ebp),%eax
 809d4c5:	8b 00                	mov    (%eax),%eax
 809d4c7:	83 c0 20             	add    $0x20,%eax
 809d4ca:	8b 10                	mov    (%eax),%edx
 809d4cc:	8b 45 08             	mov    0x8(%ebp),%eax
 809d4cf:	89 04 24             	mov    %eax,(%esp)
 809d4d2:	ff d2                	call   *%edx
 809d4d4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 809d4d7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 809d4db:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 809d4e2:	00 
 809d4e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 809d4e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 809d4ea:	89 04 24             	mov    %eax,(%esp)
 809d4ed:	e8 a2 74 02 00       	call   80c4994 <_Z13twofish_setupPKhiiP13symmetric_key>
 809d4f2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809d4f5:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 809d4f9:	75 07                	jne    809d502 <_ZN15CNCryptoTwoFish10InitializeEPKhi+0x86>
 809d4fb:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809d500:	eb 1f                	jmp    809d521 <_ZN15CNCryptoTwoFish10InitializeEPKhi+0xa5>
 809d502:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 809d506:	75 07                	jne    809d50f <_ZN15CNCryptoTwoFish10InitializeEPKhi+0x93>
 809d508:	b8 1a 00 00 70       	mov    $0x7000001a,%eax
 809d50d:	eb 12                	jmp    809d521 <_ZN15CNCryptoTwoFish10InitializeEPKhi+0xa5>
 809d50f:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 809d513:	75 07                	jne    809d51c <_ZN15CNCryptoTwoFish10InitializeEPKhi+0xa0>
 809d515:	b8 02 00 00 70       	mov    $0x70000002,%eax
 809d51a:	eb 05                	jmp    809d521 <_ZN15CNCryptoTwoFish10InitializeEPKhi+0xa5>
 809d51c:	b8 00 00 00 70       	mov    $0x70000000,%eax
 809d521:	c9                   	leave
 809d522:	c3                   	ret
 809d523:	90                   	nop

```

```c
// CNCryptoTwoFish::Initialize @ 0x809d47c

/* CNCryptoTwoFish::Initialize(unsigned char const*, int) */

undefined4 __thiscall CNCryptoTwoFish::Initialize(CNCryptoTwoFish *this,uchar *param_1,int param_2)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x20))(this);
    if (param_2 < iVar3) {
      uVar2 = 0x70000002;
    }
    else {
      psVar1 = *(symmetric_key **)(this + 8);
      iVar3 = (**(code **)(*(int *)this + 0x20))(this);
      iVar3 = twofish_setup(param_1,iVar3,0x10,psVar1);
      if (iVar3 == 0) {
        uVar2 = 0x6fffffff;
      }
      else if (iVar3 == 4) {
        uVar2 = 0x7000001a;
      }
      else if (iVar3 == 3) {
        uVar2 = 0x70000002;
      }
      else {
        uVar2 = 0x70000000;
      }
    }
  }
  return uVar2;
}

```

---

## SetMode

```asm
// === 0809d464 CNCryptoTwoFish::SetMode  [0x0809d464-0x809d47b] ===
 809d464:	55                   	push   %ebp
 809d465:	89 e5                	mov    %esp,%ebp
 809d467:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 809d46b:	75 07                	jne    809d474 <_ZN15CNCryptoTwoFish7SetModeE16CRYPTO_MODE_TYPE+0x10>
 809d46d:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809d472:	eb 05                	jmp    809d479 <_ZN15CNCryptoTwoFish7SetModeE16CRYPTO_MODE_TYPE+0x15>
 809d474:	b8 17 00 00 70       	mov    $0x70000017,%eax
 809d479:	5d                   	pop    %ebp
 809d47a:	c3                   	ret
 809d47b:	90                   	nop

```

```c
// CNCryptoTwoFish::SetMode @ 0x809d464

/* CNCryptoTwoFish::SetMode(CRYPTO_MODE_TYPE) */

undefined4 __thiscall CNCryptoTwoFish::SetMode(undefined4 this,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x6fffffff;
  }
  else {
    uVar1 = 0x70000017;
  }
  return uVar1;
}

```

---

## operator=

```asm
// === 0809d45c CNCryptoTwoFish::operator=  [0x0809d45c-0x809d463] ===
 809d45c:	55                   	push   %ebp
 809d45d:	89 e5                	mov    %esp,%ebp
 809d45f:	8b 45 08             	mov    0x8(%ebp),%eax
 809d462:	5d                   	pop    %ebp
 809d463:	c3                   	ret

```

```c
// CNCryptoTwoFish::operator= @ 0x809d45c

/* CNCryptoTwoFish::TEMPNAMEPLACEHOLDERVALUE(CNCryptoTwoFish const&) */

CNCryptoTwoFish * __thiscall
CNCryptoTwoFish::operator=(CNCryptoTwoFish *this,CNCryptoTwoFish *param_1)

{
  return this;
}

```

---

## ~CNCryptoTwoFish

```asm
// === 0809d3c6 CNCryptoTwoFish::~CNCryptoTwoFish  [0x0809d3c6-0x809d419] ===
 809d3c6:	55                   	push   %ebp
 809d3c7:	89 e5                	mov    %esp,%ebp
 809d3c9:	83 ec 28             	sub    $0x28,%esp
 809d3cc:	8b 45 08             	mov    0x8(%ebp),%eax
 809d3cf:	c7 00 08 3b b1 08    	movl   $0x8b13b08,(%eax)
 809d3d5:	8b 45 08             	mov    0x8(%ebp),%eax
 809d3d8:	8b 40 08             	mov    0x8(%eax),%eax
 809d3db:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809d3de:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 809d3e2:	74 15                	je     809d3f9 <_ZN15CNCryptoTwoFishD1Ev+0x33>
 809d3e4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809d3e7:	89 04 24             	mov    %eax,(%esp)
 809d3ea:	e8 01 71 68 00       	call   87244f0 <_ZdlPv>
 809d3ef:	8b 45 08             	mov    0x8(%ebp),%eax
 809d3f2:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809d3f9:	8b 45 08             	mov    0x8(%ebp),%eax
 809d3fc:	89 04 24             	mov    %eax,(%esp)
 809d3ff:	e8 04 0b 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809d404:	b8 00 00 00 00       	mov    $0x0,%eax
 809d409:	84 c0                	test   %al,%al
 809d40b:	74 0b                	je     809d418 <_ZN15CNCryptoTwoFishD1Ev+0x52>
 809d40d:	8b 45 08             	mov    0x8(%ebp),%eax
 809d410:	89 04 24             	mov    %eax,(%esp)
 809d413:	e8 d8 70 68 00       	call   87244f0 <_ZdlPv>
 809d418:	c9                   	leave
 809d419:	c3                   	ret

```

```c
// CNCryptoTwoFish::~CNCryptoTwoFish @ 0x809d3c6

/* WARNING: Removing unreachable block (ram,0x0809d40d) */
/* CNCryptoTwoFish::~CNCryptoTwoFish() */

void __thiscall CNCryptoTwoFish::~CNCryptoTwoFish(CNCryptoTwoFish *this)

{
  *(undefined ***)this = &PTR__CNCryptoTwoFish_08b13b08;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}

```

---

## ~CNCryptoTwoFish_0809d41a

```asm
// === 0809d41a CNCryptoTwoFish::~CNCryptoTwoFish  [0x0809d41a-0x809d437] ===
 809d41a:	55                   	push   %ebp
 809d41b:	89 e5                	mov    %esp,%ebp
 809d41d:	83 ec 18             	sub    $0x18,%esp
 809d420:	8b 45 08             	mov    0x8(%ebp),%eax
 809d423:	89 04 24             	mov    %eax,(%esp)
 809d426:	e8 9b ff ff ff       	call   809d3c6 <_ZN15CNCryptoTwoFishD1Ev>
 809d42b:	8b 45 08             	mov    0x8(%ebp),%eax
 809d42e:	89 04 24             	mov    %eax,(%esp)
 809d431:	e8 ba 70 68 00       	call   87244f0 <_ZdlPv>
 809d436:	c9                   	leave
 809d437:	c3                   	ret

```

```c
// CNCryptoTwoFish::~CNCryptoTwoFish @ 0x809d41a

/* CNCryptoTwoFish::~CNCryptoTwoFish() */

void __thiscall CNCryptoTwoFish::~CNCryptoTwoFish(CNCryptoTwoFish *this)

{
  ~CNCryptoTwoFish(this);
  operator_delete(this);
  return;
}

```

