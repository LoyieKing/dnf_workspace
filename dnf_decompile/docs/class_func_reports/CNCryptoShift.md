# CNCryptoShift

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## CNCryptoShift

```asm
// === 0809c442 CNCryptoShift::CNCryptoShift  [0x0809c442-0x809c479] ===
 809c442:	55                   	push   %ebp
 809c443:	89 e5                	mov    %esp,%ebp
 809c445:	83 ec 18             	sub    $0x18,%esp
 809c448:	8b 45 08             	mov    0x8(%ebp),%eax
 809c44b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 809c452:	00 
 809c453:	89 04 24             	mov    %eax,(%esp)
 809c456:	e8 95 1a 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809c45b:	8b 45 08             	mov    0x8(%ebp),%eax
 809c45e:	c7 00 e8 39 b1 08    	movl   $0x8b139e8,(%eax)
 809c464:	8b 45 08             	mov    0x8(%ebp),%eax
 809c467:	c7 40 08 07 00 00 00 	movl   $0x7,0x8(%eax)
 809c46e:	8b 45 08             	mov    0x8(%ebp),%eax
 809c471:	c7 40 0c 9c 4e 3b 1d 	movl   $0x1d3b4e9c,0xc(%eax)
 809c478:	c9                   	leave
 809c479:	c3                   	ret

```

```c
// CNCryptoShift::CNCryptoShift @ 0x809c442

/* CNCryptoShift::CNCryptoShift() */

void __thiscall CNCryptoShift::CNCryptoShift(CNCryptoShift *this)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,0);
  *(undefined ***)this = &PTR__CNCryptoShift_08b139e8;
  *(undefined4 *)(this + 8) = 7;
  *(undefined4 *)(this + 0xc) = 0x1d3b4e9c;
  return;
}

```

---

## CNCryptoShift_0809c4c8

```asm
// === 0809c4c8 CNCryptoShift::CNCryptoShift  [0x0809c4c8-0x809c4eb] ===
 809c4c8:	55                   	push   %ebp
 809c4c9:	89 e5                	mov    %esp,%ebp
 809c4cb:	83 ec 18             	sub    $0x18,%esp
 809c4ce:	8b 45 08             	mov    0x8(%ebp),%eax
 809c4d1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 809c4d8:	00 
 809c4d9:	89 04 24             	mov    %eax,(%esp)
 809c4dc:	e8 0f 1a 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809c4e1:	8b 45 08             	mov    0x8(%ebp),%eax
 809c4e4:	c7 00 e8 39 b1 08    	movl   $0x8b139e8,(%eax)
 809c4ea:	c9                   	leave
 809c4eb:	c3                   	ret

```

```c
// CNCryptoShift::CNCryptoShift @ 0x809c4c8

/* CNCryptoShift::CNCryptoShift(CNCryptoShift const&) */

void __thiscall CNCryptoShift::CNCryptoShift(CNCryptoShift *this,CNCryptoShift *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,0);
  *(undefined ***)this = &PTR__CNCryptoShift_08b139e8;
  return;
}

```

---

## Decrypt

```asm
// === 0809c5fe CNCryptoShift::Decrypt  [0x0809c5fe-0x809c6c7] ===
 809c5fe:	55                   	push   %ebp
 809c5ff:	89 e5                	mov    %esp,%ebp
 809c601:	83 ec 38             	sub    $0x38,%esp
 809c604:	8b 45 08             	mov    0x8(%ebp),%eax
 809c607:	8b 40 08             	mov    0x8(%eax),%eax
 809c60a:	83 f8 1f             	cmp    $0x1f,%eax
 809c60d:	76 0a                	jbe    809c619 <_ZN13CNCryptoShift7DecryptEPhi+0x1b>
 809c60f:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809c614:	e9 ac 00 00 00       	jmp    809c6c5 <_ZN13CNCryptoShift7DecryptEPhi+0xc7>
 809c619:	8b 45 08             	mov    0x8(%ebp),%eax
 809c61c:	8b 00                	mov    (%eax),%eax
 809c61e:	83 c0 24             	add    $0x24,%eax
 809c621:	8b 10                	mov    (%eax),%edx
 809c623:	8b 45 08             	mov    0x8(%ebp),%eax
 809c626:	89 04 24             	mov    %eax,(%esp)
 809c629:	ff d2                	call   *%edx
 809c62b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809c62e:	8b 55 10             	mov    0x10(%ebp),%edx
 809c631:	89 d0                	mov    %edx,%eax
 809c633:	c1 fa 1f             	sar    $0x1f,%edx
 809c636:	f7 7d e0             	idivl  -0x20(%ebp)
 809c639:	89 d0                	mov    %edx,%eax
 809c63b:	85 c0                	test   %eax,%eax
 809c63d:	0f 95 c0             	setne  %al
 809c640:	84 c0                	test   %al,%al
 809c642:	74 07                	je     809c64b <_ZN13CNCryptoShift7DecryptEPhi+0x4d>
 809c644:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809c649:	eb 7a                	jmp    809c6c5 <_ZN13CNCryptoShift7DecryptEPhi+0xc7>
 809c64b:	8b 45 0c             	mov    0xc(%ebp),%eax
 809c64e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 809c651:	8b 45 08             	mov    0x8(%ebp),%eax
 809c654:	8b 00                	mov    (%eax),%eax
 809c656:	83 c0 24             	add    $0x24,%eax
 809c659:	8b 10                	mov    (%eax),%edx
 809c65b:	8b 45 08             	mov    0x8(%ebp),%eax
 809c65e:	89 04 24             	mov    %eax,(%esp)
 809c661:	ff d2                	call   *%edx
 809c663:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809c666:	8b 45 10             	mov    0x10(%ebp),%eax
 809c669:	89 c2                	mov    %eax,%edx
 809c66b:	c1 fa 1f             	sar    $0x1f,%edx
 809c66e:	f7 7d e4             	idivl  -0x1c(%ebp)
 809c671:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809c674:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809c67b:	eb 36                	jmp    809c6b3 <_ZN13CNCryptoShift7DecryptEPhi+0xb5>
 809c67d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 809c680:	8b 00                	mov    (%eax),%eax
 809c682:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809c685:	8b 45 08             	mov    0x8(%ebp),%eax
 809c688:	8b 40 0c             	mov    0xc(%eax),%eax
 809c68b:	31 45 ec             	xor    %eax,-0x14(%ebp)
 809c68e:	8b 45 08             	mov    0x8(%ebp),%eax
 809c691:	8b 40 08             	mov    0x8(%eax),%eax
 809c694:	89 44 24 04          	mov    %eax,0x4(%esp)
 809c698:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809c69b:	89 04 24             	mov    %eax,(%esp)
 809c69e:	e8 75 fd ff ff       	call   809c418 <_ZL3ROLji>
 809c6a3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 809c6a6:	8b 55 ec             	mov    -0x14(%ebp),%edx
 809c6a9:	89 10                	mov    %edx,(%eax)
 809c6ab:	83 45 e8 04          	addl   $0x4,-0x18(%ebp)
 809c6af:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809c6b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809c6b6:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809c6b9:	0f 9c c0             	setl   %al
 809c6bc:	84 c0                	test   %al,%al
 809c6be:	75 bd                	jne    809c67d <_ZN13CNCryptoShift7DecryptEPhi+0x7f>
 809c6c0:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809c6c5:	c9                   	leave
 809c6c6:	c3                   	ret
 809c6c7:	90                   	nop

```

```c
// CNCryptoShift::Decrypt @ 0x809c5fe

/* CNCryptoShift::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoShift::Decrypt(CNCryptoShift *this,uchar *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *local_1c;
  int local_10;
  
  if (*(uint *)(this + 8) < 0x20) {
    iVar4 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar4 == 0) {
      local_1c = (uint *)param_1;
      iVar4 = (**(code **)(*(int *)this + 0x24))(this);
      for (local_10 = 0; local_10 < param_2 / iVar4; local_10 = local_10 + 1) {
        uVar1 = *local_1c;
        uVar2 = *(uint *)(this + 0xc);
        ROL(uVar1 ^ uVar2,*(int *)(this + 8));
        *local_1c = uVar1 ^ uVar2;
        local_1c = local_1c + 1;
      }
      uVar3 = 0x6fffffff;
    }
    else {
      uVar3 = 0x70000006;
    }
  }
  else {
    uVar3 = 0x7000000c;
  }
  return uVar3;
}

```

---

## Decrypt_0809c7b0

```asm
// === 0809c7b0 CNCryptoShift::Decrypt  [0x0809c7b0-0x809c897] ===
 809c7b0:	55                   	push   %ebp
 809c7b1:	89 e5                	mov    %esp,%ebp
 809c7b3:	83 ec 48             	sub    $0x48,%esp
 809c7b6:	8b 45 08             	mov    0x8(%ebp),%eax
 809c7b9:	8b 40 08             	mov    0x8(%eax),%eax
 809c7bc:	83 f8 1f             	cmp    $0x1f,%eax
 809c7bf:	76 0a                	jbe    809c7cb <_ZN13CNCryptoShift7DecryptEPKhiPhi+0x1b>
 809c7c1:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809c7c6:	e9 cb 00 00 00       	jmp    809c896 <_ZN13CNCryptoShift7DecryptEPKhiPhi+0xe6>
 809c7cb:	8b 45 08             	mov    0x8(%ebp),%eax
 809c7ce:	8b 00                	mov    (%eax),%eax
 809c7d0:	83 c0 24             	add    $0x24,%eax
 809c7d3:	8b 10                	mov    (%eax),%edx
 809c7d5:	8b 45 08             	mov    0x8(%ebp),%eax
 809c7d8:	89 04 24             	mov    %eax,(%esp)
 809c7db:	ff d2                	call   *%edx
 809c7dd:	89 45 d0             	mov    %eax,-0x30(%ebp)
 809c7e0:	8b 55 10             	mov    0x10(%ebp),%edx
 809c7e3:	89 d0                	mov    %edx,%eax
 809c7e5:	c1 fa 1f             	sar    $0x1f,%edx
 809c7e8:	f7 7d d0             	idivl  -0x30(%ebp)
 809c7eb:	89 d0                	mov    %edx,%eax
 809c7ed:	85 c0                	test   %eax,%eax
 809c7ef:	0f 95 c0             	setne  %al
 809c7f2:	84 c0                	test   %al,%al
 809c7f4:	74 0a                	je     809c800 <_ZN13CNCryptoShift7DecryptEPKhiPhi+0x50>
 809c7f6:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809c7fb:	e9 96 00 00 00       	jmp    809c896 <_ZN13CNCryptoShift7DecryptEPKhiPhi+0xe6>
 809c800:	8b 45 10             	mov    0x10(%ebp),%eax
 809c803:	3b 45 18             	cmp    0x18(%ebp),%eax
 809c806:	7e 0a                	jle    809c812 <_ZN13CNCryptoShift7DecryptEPKhiPhi+0x62>
 809c808:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809c80d:	e9 84 00 00 00       	jmp    809c896 <_ZN13CNCryptoShift7DecryptEPKhiPhi+0xe6>
 809c812:	8b 45 0c             	mov    0xc(%ebp),%eax
 809c815:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809c818:	8b 45 14             	mov    0x14(%ebp),%eax
 809c81b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 809c81e:	8b 45 08             	mov    0x8(%ebp),%eax
 809c821:	8b 00                	mov    (%eax),%eax
 809c823:	83 c0 24             	add    $0x24,%eax
 809c826:	8b 10                	mov    (%eax),%edx
 809c828:	8b 45 08             	mov    0x8(%ebp),%eax
 809c82b:	89 04 24             	mov    %eax,(%esp)
 809c82e:	ff d2                	call   *%edx
 809c830:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 809c833:	8b 45 10             	mov    0x10(%ebp),%eax
 809c836:	89 c2                	mov    %eax,%edx
 809c838:	c1 fa 1f             	sar    $0x1f,%edx
 809c83b:	f7 7d d4             	idivl  -0x2c(%ebp)
 809c83e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809c841:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809c848:	eb 3a                	jmp    809c884 <_ZN13CNCryptoShift7DecryptEPKhiPhi+0xd4>
 809c84a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 809c84d:	8b 00                	mov    (%eax),%eax
 809c84f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809c852:	83 45 e4 04          	addl   $0x4,-0x1c(%ebp)
 809c856:	8b 45 08             	mov    0x8(%ebp),%eax
 809c859:	8b 40 0c             	mov    0xc(%eax),%eax
 809c85c:	31 45 ec             	xor    %eax,-0x14(%ebp)
 809c85f:	8b 45 08             	mov    0x8(%ebp),%eax
 809c862:	8b 40 08             	mov    0x8(%eax),%eax
 809c865:	89 44 24 04          	mov    %eax,0x4(%esp)
 809c869:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809c86c:	89 04 24             	mov    %eax,(%esp)
 809c86f:	e8 a4 fb ff ff       	call   809c418 <_ZL3ROLji>
 809c874:	8b 45 e8             	mov    -0x18(%ebp),%eax
 809c877:	8b 55 ec             	mov    -0x14(%ebp),%edx
 809c87a:	89 10                	mov    %edx,(%eax)
 809c87c:	83 45 e8 04          	addl   $0x4,-0x18(%ebp)
 809c880:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809c884:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809c887:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809c88a:	0f 9c c0             	setl   %al
 809c88d:	84 c0                	test   %al,%al
 809c88f:	75 b9                	jne    809c84a <_ZN13CNCryptoShift7DecryptEPKhiPhi+0x9a>
 809c891:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809c896:	c9                   	leave
 809c897:	c3                   	ret

```

```c
// CNCryptoShift::Decrypt @ 0x809c7b0

/* CNCryptoShift::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoShift::Decrypt(CNCryptoShift *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *local_20;
  uint *local_1c;
  int local_10;
  
  if (*(uint *)(this + 8) < 0x20) {
    iVar4 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar4 == 0) {
      if (param_4 < param_2) {
        uVar3 = 0x7000000a;
      }
      else {
        local_20 = (uint *)param_1;
        local_1c = (uint *)param_3;
        iVar4 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar4; local_10 = local_10 + 1) {
          uVar1 = *local_20;
          local_20 = local_20 + 1;
          uVar2 = *(uint *)(this + 0xc);
          ROL(uVar1 ^ uVar2,*(int *)(this + 8));
          *local_1c = uVar1 ^ uVar2;
          local_1c = local_1c + 1;
        }
        uVar3 = 0x6fffffff;
      }
    }
    else {
      uVar3 = 0x70000006;
    }
  }
  else {
    uVar3 = 0x7000000c;
  }
  return uVar3;
}

```

---

## Encrypt

```asm
// === 0809c534 CNCryptoShift::Encrypt  [0x0809c534-0x809c5fd] ===
 809c534:	55                   	push   %ebp
 809c535:	89 e5                	mov    %esp,%ebp
 809c537:	83 ec 38             	sub    $0x38,%esp
 809c53a:	8b 45 08             	mov    0x8(%ebp),%eax
 809c53d:	8b 40 08             	mov    0x8(%eax),%eax
 809c540:	83 f8 1f             	cmp    $0x1f,%eax
 809c543:	76 0a                	jbe    809c54f <_ZN13CNCryptoShift7EncryptEPhi+0x1b>
 809c545:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809c54a:	e9 ac 00 00 00       	jmp    809c5fb <_ZN13CNCryptoShift7EncryptEPhi+0xc7>
 809c54f:	8b 45 08             	mov    0x8(%ebp),%eax
 809c552:	8b 00                	mov    (%eax),%eax
 809c554:	83 c0 24             	add    $0x24,%eax
 809c557:	8b 10                	mov    (%eax),%edx
 809c559:	8b 45 08             	mov    0x8(%ebp),%eax
 809c55c:	89 04 24             	mov    %eax,(%esp)
 809c55f:	ff d2                	call   *%edx
 809c561:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809c564:	8b 55 10             	mov    0x10(%ebp),%edx
 809c567:	89 d0                	mov    %edx,%eax
 809c569:	c1 fa 1f             	sar    $0x1f,%edx
 809c56c:	f7 7d e0             	idivl  -0x20(%ebp)
 809c56f:	89 d0                	mov    %edx,%eax
 809c571:	85 c0                	test   %eax,%eax
 809c573:	0f 95 c0             	setne  %al
 809c576:	84 c0                	test   %al,%al
 809c578:	74 07                	je     809c581 <_ZN13CNCryptoShift7EncryptEPhi+0x4d>
 809c57a:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809c57f:	eb 7a                	jmp    809c5fb <_ZN13CNCryptoShift7EncryptEPhi+0xc7>
 809c581:	8b 45 0c             	mov    0xc(%ebp),%eax
 809c584:	89 45 e8             	mov    %eax,-0x18(%ebp)
 809c587:	8b 45 08             	mov    0x8(%ebp),%eax
 809c58a:	8b 00                	mov    (%eax),%eax
 809c58c:	83 c0 24             	add    $0x24,%eax
 809c58f:	8b 10                	mov    (%eax),%edx
 809c591:	8b 45 08             	mov    0x8(%ebp),%eax
 809c594:	89 04 24             	mov    %eax,(%esp)
 809c597:	ff d2                	call   *%edx
 809c599:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809c59c:	8b 45 10             	mov    0x10(%ebp),%eax
 809c59f:	89 c2                	mov    %eax,%edx
 809c5a1:	c1 fa 1f             	sar    $0x1f,%edx
 809c5a4:	f7 7d e4             	idivl  -0x1c(%ebp)
 809c5a7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809c5aa:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809c5b1:	eb 36                	jmp    809c5e9 <_ZN13CNCryptoShift7EncryptEPhi+0xb5>
 809c5b3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 809c5b6:	8b 00                	mov    (%eax),%eax
 809c5b8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809c5bb:	8b 45 08             	mov    0x8(%ebp),%eax
 809c5be:	8b 40 08             	mov    0x8(%eax),%eax
 809c5c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 809c5c5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809c5c8:	89 04 24             	mov    %eax,(%esp)
 809c5cb:	e8 5d fe ff ff       	call   809c42d <_ZL3RORji>
 809c5d0:	8b 45 08             	mov    0x8(%ebp),%eax
 809c5d3:	8b 40 0c             	mov    0xc(%eax),%eax
 809c5d6:	31 45 ec             	xor    %eax,-0x14(%ebp)
 809c5d9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 809c5dc:	8b 55 ec             	mov    -0x14(%ebp),%edx
 809c5df:	89 10                	mov    %edx,(%eax)
 809c5e1:	83 45 e8 04          	addl   $0x4,-0x18(%ebp)
 809c5e5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809c5e9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809c5ec:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809c5ef:	0f 9c c0             	setl   %al
 809c5f2:	84 c0                	test   %al,%al
 809c5f4:	75 bd                	jne    809c5b3 <_ZN13CNCryptoShift7EncryptEPhi+0x7f>
 809c5f6:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809c5fb:	c9                   	leave
 809c5fc:	c3                   	ret
 809c5fd:	90                   	nop

```

```c
// CNCryptoShift::Encrypt @ 0x809c534

/* CNCryptoShift::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoShift::Encrypt(CNCryptoShift *this,uchar *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *local_1c;
  int local_10;
  
  if (*(uint *)(this + 8) < 0x20) {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      local_1c = (uint *)param_1;
      iVar3 = (**(code **)(*(int *)this + 0x24))(this);
      for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
        uVar1 = *local_1c;
        ROR(uVar1,*(int *)(this + 8));
        *local_1c = uVar1 ^ *(uint *)(this + 0xc);
        local_1c = local_1c + 1;
      }
      uVar2 = 0x6fffffff;
    }
    else {
      uVar2 = 0x70000006;
    }
  }
  else {
    uVar2 = 0x7000000c;
  }
  return uVar2;
}

```

---

## Encrypt_0809c6c8

```asm
// === 0809c6c8 CNCryptoShift::Encrypt  [0x0809c6c8-0x809c7af] ===
 809c6c8:	55                   	push   %ebp
 809c6c9:	89 e5                	mov    %esp,%ebp
 809c6cb:	83 ec 48             	sub    $0x48,%esp
 809c6ce:	8b 45 08             	mov    0x8(%ebp),%eax
 809c6d1:	8b 40 08             	mov    0x8(%eax),%eax
 809c6d4:	83 f8 1f             	cmp    $0x1f,%eax
 809c6d7:	76 0a                	jbe    809c6e3 <_ZN13CNCryptoShift7EncryptEPKhiPhi+0x1b>
 809c6d9:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809c6de:	e9 cb 00 00 00       	jmp    809c7ae <_ZN13CNCryptoShift7EncryptEPKhiPhi+0xe6>
 809c6e3:	8b 45 08             	mov    0x8(%ebp),%eax
 809c6e6:	8b 00                	mov    (%eax),%eax
 809c6e8:	83 c0 24             	add    $0x24,%eax
 809c6eb:	8b 10                	mov    (%eax),%edx
 809c6ed:	8b 45 08             	mov    0x8(%ebp),%eax
 809c6f0:	89 04 24             	mov    %eax,(%esp)
 809c6f3:	ff d2                	call   *%edx
 809c6f5:	89 45 d0             	mov    %eax,-0x30(%ebp)
 809c6f8:	8b 55 10             	mov    0x10(%ebp),%edx
 809c6fb:	89 d0                	mov    %edx,%eax
 809c6fd:	c1 fa 1f             	sar    $0x1f,%edx
 809c700:	f7 7d d0             	idivl  -0x30(%ebp)
 809c703:	89 d0                	mov    %edx,%eax
 809c705:	85 c0                	test   %eax,%eax
 809c707:	0f 95 c0             	setne  %al
 809c70a:	84 c0                	test   %al,%al
 809c70c:	74 0a                	je     809c718 <_ZN13CNCryptoShift7EncryptEPKhiPhi+0x50>
 809c70e:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809c713:	e9 96 00 00 00       	jmp    809c7ae <_ZN13CNCryptoShift7EncryptEPKhiPhi+0xe6>
 809c718:	8b 45 10             	mov    0x10(%ebp),%eax
 809c71b:	3b 45 18             	cmp    0x18(%ebp),%eax
 809c71e:	7e 0a                	jle    809c72a <_ZN13CNCryptoShift7EncryptEPKhiPhi+0x62>
 809c720:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809c725:	e9 84 00 00 00       	jmp    809c7ae <_ZN13CNCryptoShift7EncryptEPKhiPhi+0xe6>
 809c72a:	8b 45 0c             	mov    0xc(%ebp),%eax
 809c72d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809c730:	8b 45 14             	mov    0x14(%ebp),%eax
 809c733:	89 45 e8             	mov    %eax,-0x18(%ebp)
 809c736:	8b 45 08             	mov    0x8(%ebp),%eax
 809c739:	8b 00                	mov    (%eax),%eax
 809c73b:	83 c0 24             	add    $0x24,%eax
 809c73e:	8b 10                	mov    (%eax),%edx
 809c740:	8b 45 08             	mov    0x8(%ebp),%eax
 809c743:	89 04 24             	mov    %eax,(%esp)
 809c746:	ff d2                	call   *%edx
 809c748:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 809c74b:	8b 45 10             	mov    0x10(%ebp),%eax
 809c74e:	89 c2                	mov    %eax,%edx
 809c750:	c1 fa 1f             	sar    $0x1f,%edx
 809c753:	f7 7d d4             	idivl  -0x2c(%ebp)
 809c756:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809c759:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809c760:	eb 3a                	jmp    809c79c <_ZN13CNCryptoShift7EncryptEPKhiPhi+0xd4>
 809c762:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 809c765:	8b 00                	mov    (%eax),%eax
 809c767:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809c76a:	83 45 e4 04          	addl   $0x4,-0x1c(%ebp)
 809c76e:	8b 45 08             	mov    0x8(%ebp),%eax
 809c771:	8b 40 08             	mov    0x8(%eax),%eax
 809c774:	89 44 24 04          	mov    %eax,0x4(%esp)
 809c778:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809c77b:	89 04 24             	mov    %eax,(%esp)
 809c77e:	e8 aa fc ff ff       	call   809c42d <_ZL3RORji>
 809c783:	8b 45 08             	mov    0x8(%ebp),%eax
 809c786:	8b 40 0c             	mov    0xc(%eax),%eax
 809c789:	31 45 ec             	xor    %eax,-0x14(%ebp)
 809c78c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 809c78f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 809c792:	89 10                	mov    %edx,(%eax)
 809c794:	83 45 e8 04          	addl   $0x4,-0x18(%ebp)
 809c798:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809c79c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809c79f:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809c7a2:	0f 9c c0             	setl   %al
 809c7a5:	84 c0                	test   %al,%al
 809c7a7:	75 b9                	jne    809c762 <_ZN13CNCryptoShift7EncryptEPKhiPhi+0x9a>
 809c7a9:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809c7ae:	c9                   	leave
 809c7af:	c3                   	ret

```

```c
// CNCryptoShift::Encrypt @ 0x809c6c8

/* CNCryptoShift::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoShift::Encrypt(CNCryptoShift *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *local_20;
  uint *local_1c;
  int local_10;
  
  if (*(uint *)(this + 8) < 0x20) {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      if (param_4 < param_2) {
        uVar2 = 0x7000000a;
      }
      else {
        local_20 = (uint *)param_1;
        local_1c = (uint *)param_3;
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          uVar1 = *local_20;
          local_20 = local_20 + 1;
          ROR(uVar1,*(int *)(this + 8));
          *local_1c = uVar1 ^ *(uint *)(this + 0xc);
          local_1c = local_1c + 1;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x70000006;
    }
  }
  else {
    uVar2 = 0x7000000c;
  }
  return uVar2;
}

```

---

## GetBlockSize

```asm
// === 0809c8a2 CNCryptoShift::GetBlockSize  [0x0809c8a2-0x809c8ab] ===
 809c8a2:	55                   	push   %ebp
 809c8a3:	89 e5                	mov    %esp,%ebp
 809c8a5:	b8 04 00 00 00       	mov    $0x4,%eax
 809c8aa:	5d                   	pop    %ebp
 809c8ab:	c3                   	ret

```

```c
// CNCryptoShift::GetBlockSize @ 0x809c8a2

/* CNCryptoShift::GetBlockSize() const */

undefined4 CNCryptoShift::GetBlockSize(void)

{
  return 4;
}

```

---

## GetKeySize

```asm
// === 0809c898 CNCryptoShift::GetKeySize  [0x0809c898-0x809c8a1] ===
 809c898:	55                   	push   %ebp
 809c899:	89 e5                	mov    %esp,%ebp
 809c89b:	b8 08 00 00 00       	mov    $0x8,%eax
 809c8a0:	5d                   	pop    %ebp
 809c8a1:	c3                   	ret

```

```c
// CNCryptoShift::GetKeySize @ 0x809c898

/* CNCryptoShift::GetKeySize() const */

undefined4 CNCryptoShift::GetKeySize(void)

{
  return 8;
}

```

---

## Initialize

```asm
// === 0809c4fe CNCryptoShift::Initialize  [0x0809c4fe-0x809c533] ===
 809c4fe:	55                   	push   %ebp
 809c4ff:	89 e5                	mov    %esp,%ebp
 809c501:	83 7d 10 07          	cmpl   $0x7,0x10(%ebp)
 809c505:	7f 07                	jg     809c50e <_ZN13CNCryptoShift10InitializeEPKhi+0x10>
 809c507:	b8 00 00 00 00       	mov    $0x0,%eax
 809c50c:	eb 24                	jmp    809c532 <_ZN13CNCryptoShift10InitializeEPKhi+0x34>
 809c50e:	8b 45 0c             	mov    0xc(%ebp),%eax
 809c511:	8b 00                	mov    (%eax),%eax
 809c513:	89 c2                	mov    %eax,%edx
 809c515:	83 e2 1f             	and    $0x1f,%edx
 809c518:	8b 45 08             	mov    0x8(%ebp),%eax
 809c51b:	89 50 08             	mov    %edx,0x8(%eax)
 809c51e:	83 45 0c 04          	addl   $0x4,0xc(%ebp)
 809c522:	8b 45 0c             	mov    0xc(%ebp),%eax
 809c525:	8b 10                	mov    (%eax),%edx
 809c527:	8b 45 08             	mov    0x8(%ebp),%eax
 809c52a:	89 50 0c             	mov    %edx,0xc(%eax)
 809c52d:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809c532:	5d                   	pop    %ebp
 809c533:	c3                   	ret

```

```c
// CNCryptoShift::Initialize @ 0x809c4fe

/* CNCryptoShift::Initialize(unsigned char const*, int) */

undefined4 __thiscall CNCryptoShift::Initialize(CNCryptoShift *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 8) {
    uVar1 = 0;
  }
  else {
    *(uint *)(this + 8) = *(uint *)param_1 & 0x1f;
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 4);
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}

```

---

## SetMode

```asm
// === 0809c4f4 CNCryptoShift::SetMode  [0x0809c4f4-0x809c4fd] ===
 809c4f4:	55                   	push   %ebp
 809c4f5:	89 e5                	mov    %esp,%ebp
 809c4f7:	b8 17 00 00 70       	mov    $0x70000017,%eax
 809c4fc:	5d                   	pop    %ebp
 809c4fd:	c3                   	ret

```

```c
// CNCryptoShift::SetMode @ 0x809c4f4

/* CNCryptoShift::SetMode(CRYPTO_MODE_TYPE) */

undefined4 CNCryptoShift::SetMode(void)

{
  return 0x70000017;
}

```

---

## operator=

```asm
// === 0809c4ec CNCryptoShift::operator=  [0x0809c4ec-0x809c4f3] ===
 809c4ec:	55                   	push   %ebp
 809c4ed:	89 e5                	mov    %esp,%ebp
 809c4ef:	8b 45 08             	mov    0x8(%ebp),%eax
 809c4f2:	5d                   	pop    %ebp
 809c4f3:	c3                   	ret

```

```c
// CNCryptoShift::operator= @ 0x809c4ec

/* CNCryptoShift::TEMPNAMEPLACEHOLDERVALUE(CNCryptoShift const&) */

CNCryptoShift * __thiscall CNCryptoShift::operator=(CNCryptoShift *this,CNCryptoShift *param_1)

{
  return this;
}

```

---

## ~CNCryptoShift

```asm
// === 0809c47a CNCryptoShift::~CNCryptoShift  [0x0809c47a-0x809c4a9] ===
 809c47a:	55                   	push   %ebp
 809c47b:	89 e5                	mov    %esp,%ebp
 809c47d:	83 ec 18             	sub    $0x18,%esp
 809c480:	8b 45 08             	mov    0x8(%ebp),%eax
 809c483:	c7 00 e8 39 b1 08    	movl   $0x8b139e8,(%eax)
 809c489:	8b 45 08             	mov    0x8(%ebp),%eax
 809c48c:	89 04 24             	mov    %eax,(%esp)
 809c48f:	e8 74 1a 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809c494:	b8 00 00 00 00       	mov    $0x0,%eax
 809c499:	84 c0                	test   %al,%al
 809c49b:	74 0b                	je     809c4a8 <_ZN13CNCryptoShiftD1Ev+0x2e>
 809c49d:	8b 45 08             	mov    0x8(%ebp),%eax
 809c4a0:	89 04 24             	mov    %eax,(%esp)
 809c4a3:	e8 48 80 68 00       	call   87244f0 <_ZdlPv>
 809c4a8:	c9                   	leave
 809c4a9:	c3                   	ret

```

```c
// CNCryptoShift::~CNCryptoShift @ 0x809c47a

/* WARNING: Removing unreachable block (ram,0x0809c49d) */
/* CNCryptoShift::~CNCryptoShift() */

void __thiscall CNCryptoShift::~CNCryptoShift(CNCryptoShift *this)

{
  *(undefined ***)this = &PTR__CNCryptoShift_08b139e8;
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}

```

---

## ~CNCryptoShift_0809c4aa

```asm
// === 0809c4aa CNCryptoShift::~CNCryptoShift  [0x0809c4aa-0x809c4c7] ===
 809c4aa:	55                   	push   %ebp
 809c4ab:	89 e5                	mov    %esp,%ebp
 809c4ad:	83 ec 18             	sub    $0x18,%esp
 809c4b0:	8b 45 08             	mov    0x8(%ebp),%eax
 809c4b3:	89 04 24             	mov    %eax,(%esp)
 809c4b6:	e8 bf ff ff ff       	call   809c47a <_ZN13CNCryptoShiftD1Ev>
 809c4bb:	8b 45 08             	mov    0x8(%ebp),%eax
 809c4be:	89 04 24             	mov    %eax,(%esp)
 809c4c1:	e8 2a 80 68 00       	call   87244f0 <_ZdlPv>
 809c4c6:	c9                   	leave
 809c4c7:	c3                   	ret

```

```c
// CNCryptoShift::~CNCryptoShift @ 0x809c4aa

/* CNCryptoShift::~CNCryptoShift() */

void __thiscall CNCryptoShift::~CNCryptoShift(CNCryptoShift *this)

{
  ~CNCryptoShift(this);
  operator_delete(this);
  return;
}

```

