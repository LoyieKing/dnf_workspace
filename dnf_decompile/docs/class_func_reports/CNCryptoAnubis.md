# CNCryptoAnubis

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## CNCryptoAnubis

```asm
// === 08099264 CNCryptoAnubis::CNCryptoAnubis  [0x08099264-0x8099301] ===
 8099264:	55                   	push   %ebp
 8099265:	89 e5                	mov    %esp,%ebp
 8099267:	56                   	push   %esi
 8099268:	53                   	push   %ebx
 8099269:	83 ec 30             	sub    $0x30,%esp
 809926c:	8b 45 08             	mov    0x8(%ebp),%eax
 809926f:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 8099276:	00 
 8099277:	89 04 24             	mov    %eax,(%esp)
 809927a:	e8 71 4c 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809927f:	8b 45 08             	mov    0x8(%ebp),%eax
 8099282:	c7 00 88 36 b1 08    	movl   $0x8b13688,(%eax)
 8099288:	8b 45 08             	mov    0x8(%ebp),%eax
 809928b:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8099292:	c7 04 24 68 02 00 00 	movl   $0x268,(%esp)
 8099299:	e8 b2 b1 68 00       	call   8724450 <_Znwj>
 809929e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80992a1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80992a5:	74 53                	je     80992fa <_ZN14CNCryptoAnubisC1Ev+0x96>
 80992a7:	8b 45 08             	mov    0x8(%ebp),%eax
 80992aa:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80992ad:	89 50 08             	mov    %edx,0x8(%eax)
 80992b0:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 80992b7:	00 
 80992b8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80992bb:	89 04 24             	mov    %eax,(%esp)
 80992be:	e8 ef 53 00 00       	call   809e6b2 <_Z17GenerateRandomKeyPhi>
 80992c3:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 80992ca:	00 
 80992cb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80992ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 80992d2:	8b 45 08             	mov    0x8(%ebp),%eax
 80992d5:	89 04 24             	mov    %eax,(%esp)
 80992d8:	e8 df 00 00 00       	call   80993bc <_ZN14CNCryptoAnubis10InitializeEPKhi>
 80992dd:	eb 1b                	jmp    80992fa <_ZN14CNCryptoAnubisC1Ev+0x96>
 80992df:	89 d3                	mov    %edx,%ebx
 80992e1:	89 c6                	mov    %eax,%esi
 80992e3:	8b 45 08             	mov    0x8(%ebp),%eax
 80992e6:	89 04 24             	mov    %eax,(%esp)
 80992e9:	e8 1a 4c 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 80992ee:	89 f0                	mov    %esi,%eax
 80992f0:	89 da                	mov    %ebx,%edx
 80992f2:	89 04 24             	mov    %eax,(%esp)
 80992f5:	e8 56 a4 a4 00       	call   8ae3750 <_Unwind_Resume>
 80992fa:	83 c4 30             	add    $0x30,%esp
 80992fd:	5b                   	pop    %ebx
 80992fe:	5e                   	pop    %esi
 80992ff:	5d                   	pop    %ebp
 8099300:	c3                   	ret
 8099301:	90                   	nop

```

```c
// CNCryptoAnubis::CNCryptoAnubis @ 0x8099264

/* CNCryptoAnubis::CNCryptoAnubis() */

void __thiscall CNCryptoAnubis::CNCryptoAnubis(CNCryptoAnubis *this)

{
  uchar local_20 [16];
  void *local_10;
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,0xd);
  *(undefined ***)this = &PTR__CNCryptoAnubis_08b13688;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 08099299 to 080992dc has its CatchHandler @ 080992df */
  local_10 = operator_new(0x268);
  if (local_10 != (void *)0x0) {
    *(void **)(this + 8) = local_10;
    GenerateRandomKey(local_20,0x10);
    Initialize(this,local_20,0x10);
  }
  return;
}

```

---

## CNCryptoAnubis_08099378

```asm
// === 08099378 CNCryptoAnubis::CNCryptoAnubis  [0x08099378-0x809939b] ===
 8099378:	55                   	push   %ebp
 8099379:	89 e5                	mov    %esp,%ebp
 809937b:	83 ec 18             	sub    $0x18,%esp
 809937e:	8b 45 08             	mov    0x8(%ebp),%eax
 8099381:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 8099388:	00 
 8099389:	89 04 24             	mov    %eax,(%esp)
 809938c:	e8 5f 4b 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 8099391:	8b 45 08             	mov    0x8(%ebp),%eax
 8099394:	c7 00 88 36 b1 08    	movl   $0x8b13688,(%eax)
 809939a:	c9                   	leave
 809939b:	c3                   	ret

```

```c
// CNCryptoAnubis::CNCryptoAnubis @ 0x8099378

/* CNCryptoAnubis::CNCryptoAnubis(CNCryptoAnubis const&) */

void __thiscall CNCryptoAnubis::CNCryptoAnubis(CNCryptoAnubis *this,CNCryptoAnubis *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,0xd);
  *(undefined ***)this = &PTR__CNCryptoAnubis_08b13688;
  return;
}

```

---

## Decrypt

```asm
// === 0809953c CNCryptoAnubis::Decrypt  [0x0809953c-0x8099613] ===
 809953c:	55                   	push   %ebp
 809953d:	89 e5                	mov    %esp,%ebp
 809953f:	83 ec 38             	sub    $0x38,%esp
 8099542:	8b 45 08             	mov    0x8(%ebp),%eax
 8099545:	8b 40 08             	mov    0x8(%eax),%eax
 8099548:	85 c0                	test   %eax,%eax
 809954a:	75 0a                	jne    8099556 <_ZN14CNCryptoAnubis7DecryptEPhi+0x1a>
 809954c:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 8099551:	e9 bb 00 00 00       	jmp    8099611 <_ZN14CNCryptoAnubis7DecryptEPhi+0xd5>
 8099556:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 809955a:	7f 0a                	jg     8099566 <_ZN14CNCryptoAnubis7DecryptEPhi+0x2a>
 809955c:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 8099561:	e9 ab 00 00 00       	jmp    8099611 <_ZN14CNCryptoAnubis7DecryptEPhi+0xd5>
 8099566:	8b 45 08             	mov    0x8(%ebp),%eax
 8099569:	8b 00                	mov    (%eax),%eax
 809956b:	83 c0 24             	add    $0x24,%eax
 809956e:	8b 10                	mov    (%eax),%edx
 8099570:	8b 45 08             	mov    0x8(%ebp),%eax
 8099573:	89 04 24             	mov    %eax,(%esp)
 8099576:	ff d2                	call   *%edx
 8099578:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809957b:	8b 55 10             	mov    0x10(%ebp),%edx
 809957e:	89 d0                	mov    %edx,%eax
 8099580:	c1 fa 1f             	sar    $0x1f,%edx
 8099583:	f7 7d e0             	idivl  -0x20(%ebp)
 8099586:	89 d0                	mov    %edx,%eax
 8099588:	85 c0                	test   %eax,%eax
 809958a:	0f 95 c0             	setne  %al
 809958d:	84 c0                	test   %al,%al
 809958f:	74 07                	je     8099598 <_ZN14CNCryptoAnubis7DecryptEPhi+0x5c>
 8099591:	b8 06 00 00 70       	mov    $0x70000006,%eax
 8099596:	eb 79                	jmp    8099611 <_ZN14CNCryptoAnubis7DecryptEPhi+0xd5>
 8099598:	8b 45 08             	mov    0x8(%ebp),%eax
 809959b:	8b 40 08             	mov    0x8(%eax),%eax
 809959e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80995a1:	8b 45 08             	mov    0x8(%ebp),%eax
 80995a4:	8b 00                	mov    (%eax),%eax
 80995a6:	83 c0 24             	add    $0x24,%eax
 80995a9:	8b 10                	mov    (%eax),%edx
 80995ab:	8b 45 08             	mov    0x8(%ebp),%eax
 80995ae:	89 04 24             	mov    %eax,(%esp)
 80995b1:	ff d2                	call   *%edx
 80995b3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80995b6:	8b 45 10             	mov    0x10(%ebp),%eax
 80995b9:	89 c2                	mov    %eax,%edx
 80995bb:	c1 fa 1f             	sar    $0x1f,%edx
 80995be:	f7 7d e4             	idivl  -0x1c(%ebp)
 80995c1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80995c4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80995cb:	eb 32                	jmp    80995ff <_ZN14CNCryptoAnubis7DecryptEPhi+0xc3>
 80995cd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80995d0:	89 44 24 08          	mov    %eax,0x8(%esp)
 80995d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 80995d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 80995db:	8b 45 0c             	mov    0xc(%ebp),%eax
 80995de:	89 04 24             	mov    %eax,(%esp)
 80995e1:	e8 3c bd 00 00       	call   80a5322 <_Z18anubis_ecb_decryptPKhPhP13symmetric_key>
 80995e6:	8b 45 08             	mov    0x8(%ebp),%eax
 80995e9:	8b 00                	mov    (%eax),%eax
 80995eb:	83 c0 24             	add    $0x24,%eax
 80995ee:	8b 10                	mov    (%eax),%edx
 80995f0:	8b 45 08             	mov    0x8(%ebp),%eax
 80995f3:	89 04 24             	mov    %eax,(%esp)
 80995f6:	ff d2                	call   *%edx
 80995f8:	01 45 0c             	add    %eax,0xc(%ebp)
 80995fb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80995ff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8099602:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8099605:	0f 9c c0             	setl   %al
 8099608:	84 c0                	test   %al,%al
 809960a:	75 c1                	jne    80995cd <_ZN14CNCryptoAnubis7DecryptEPhi+0x91>
 809960c:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 8099611:	c9                   	leave
 8099612:	c3                   	ret
 8099613:	90                   	nop

```

```c
// CNCryptoAnubis::Decrypt @ 0x809953c

/* CNCryptoAnubis::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoAnubis::Decrypt(CNCryptoAnubis *this,uchar *param_1,int param_2)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else if (param_2 < 1) {
    uVar2 = 0x7000000a;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      psVar1 = *(symmetric_key **)(this + 8);
      iVar3 = (**(code **)(*(int *)this + 0x24))(this);
      for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
        anubis_ecb_decrypt(param_1,param_1,psVar1);
        iVar4 = (**(code **)(*(int *)this + 0x24))(this);
        param_1 = param_1 + iVar4;
      }
      uVar2 = 0x6fffffff;
    }
    else {
      uVar2 = 0x70000006;
    }
  }
  return uVar2;
}

```

---

## Decrypt_08099706

```asm
// === 08099706 CNCryptoAnubis::Decrypt  [0x08099706-0x80997f7] ===
 8099706:	55                   	push   %ebp
 8099707:	89 e5                	mov    %esp,%ebp
 8099709:	83 ec 38             	sub    $0x38,%esp
 809970c:	8b 45 08             	mov    0x8(%ebp),%eax
 809970f:	8b 40 08             	mov    0x8(%eax),%eax
 8099712:	85 c0                	test   %eax,%eax
 8099714:	75 0a                	jne    8099720 <_ZN14CNCryptoAnubis7DecryptEPKhiPhi+0x1a>
 8099716:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809971b:	e9 d5 00 00 00       	jmp    80997f5 <_ZN14CNCryptoAnubis7DecryptEPKhiPhi+0xef>
 8099720:	8b 45 08             	mov    0x8(%ebp),%eax
 8099723:	8b 00                	mov    (%eax),%eax
 8099725:	83 c0 24             	add    $0x24,%eax
 8099728:	8b 10                	mov    (%eax),%edx
 809972a:	8b 45 08             	mov    0x8(%ebp),%eax
 809972d:	89 04 24             	mov    %eax,(%esp)
 8099730:	ff d2                	call   *%edx
 8099732:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8099735:	8b 55 10             	mov    0x10(%ebp),%edx
 8099738:	89 d0                	mov    %edx,%eax
 809973a:	c1 fa 1f             	sar    $0x1f,%edx
 809973d:	f7 7d e0             	idivl  -0x20(%ebp)
 8099740:	89 d0                	mov    %edx,%eax
 8099742:	85 c0                	test   %eax,%eax
 8099744:	0f 95 c0             	setne  %al
 8099747:	84 c0                	test   %al,%al
 8099749:	74 0a                	je     8099755 <_ZN14CNCryptoAnubis7DecryptEPKhiPhi+0x4f>
 809974b:	b8 06 00 00 70       	mov    $0x70000006,%eax
 8099750:	e9 a0 00 00 00       	jmp    80997f5 <_ZN14CNCryptoAnubis7DecryptEPKhiPhi+0xef>
 8099755:	8b 45 10             	mov    0x10(%ebp),%eax
 8099758:	3b 45 18             	cmp    0x18(%ebp),%eax
 809975b:	7e 0a                	jle    8099767 <_ZN14CNCryptoAnubis7DecryptEPKhiPhi+0x61>
 809975d:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 8099762:	e9 8e 00 00 00       	jmp    80997f5 <_ZN14CNCryptoAnubis7DecryptEPKhiPhi+0xef>
 8099767:	8b 45 08             	mov    0x8(%ebp),%eax
 809976a:	8b 40 08             	mov    0x8(%eax),%eax
 809976d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8099770:	8b 45 08             	mov    0x8(%ebp),%eax
 8099773:	8b 00                	mov    (%eax),%eax
 8099775:	83 c0 24             	add    $0x24,%eax
 8099778:	8b 10                	mov    (%eax),%edx
 809977a:	8b 45 08             	mov    0x8(%ebp),%eax
 809977d:	89 04 24             	mov    %eax,(%esp)
 8099780:	ff d2                	call   *%edx
 8099782:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8099785:	8b 45 10             	mov    0x10(%ebp),%eax
 8099788:	89 c2                	mov    %eax,%edx
 809978a:	c1 fa 1f             	sar    $0x1f,%edx
 809978d:	f7 7d e4             	idivl  -0x1c(%ebp)
 8099790:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8099793:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809979a:	eb 47                	jmp    80997e3 <_ZN14CNCryptoAnubis7DecryptEPKhiPhi+0xdd>
 809979c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809979f:	89 44 24 08          	mov    %eax,0x8(%esp)
 80997a3:	8b 45 14             	mov    0x14(%ebp),%eax
 80997a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 80997aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 80997ad:	89 04 24             	mov    %eax,(%esp)
 80997b0:	e8 6d bb 00 00       	call   80a5322 <_Z18anubis_ecb_decryptPKhPhP13symmetric_key>
 80997b5:	8b 45 08             	mov    0x8(%ebp),%eax
 80997b8:	8b 00                	mov    (%eax),%eax
 80997ba:	83 c0 24             	add    $0x24,%eax
 80997bd:	8b 10                	mov    (%eax),%edx
 80997bf:	8b 45 08             	mov    0x8(%ebp),%eax
 80997c2:	89 04 24             	mov    %eax,(%esp)
 80997c5:	ff d2                	call   *%edx
 80997c7:	01 45 0c             	add    %eax,0xc(%ebp)
 80997ca:	8b 45 08             	mov    0x8(%ebp),%eax
 80997cd:	8b 00                	mov    (%eax),%eax
 80997cf:	83 c0 24             	add    $0x24,%eax
 80997d2:	8b 10                	mov    (%eax),%edx
 80997d4:	8b 45 08             	mov    0x8(%ebp),%eax
 80997d7:	89 04 24             	mov    %eax,(%esp)
 80997da:	ff d2                	call   *%edx
 80997dc:	01 45 14             	add    %eax,0x14(%ebp)
 80997df:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80997e3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80997e6:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 80997e9:	0f 9c c0             	setl   %al
 80997ec:	84 c0                	test   %al,%al
 80997ee:	75 ac                	jne    809979c <_ZN14CNCryptoAnubis7DecryptEPKhiPhi+0x96>
 80997f0:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80997f5:	c9                   	leave
 80997f6:	c3                   	ret
 80997f7:	90                   	nop

```

```c
// CNCryptoAnubis::Decrypt @ 0x8099706

/* CNCryptoAnubis::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoAnubis::Decrypt(CNCryptoAnubis *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
          anubis_ecb_decrypt(param_1,param_3,psVar1);
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

## Encrypt

```asm
// === 08099464 CNCryptoAnubis::Encrypt  [0x08099464-0x809953b] ===
 8099464:	55                   	push   %ebp
 8099465:	89 e5                	mov    %esp,%ebp
 8099467:	83 ec 38             	sub    $0x38,%esp
 809946a:	8b 45 08             	mov    0x8(%ebp),%eax
 809946d:	8b 40 08             	mov    0x8(%eax),%eax
 8099470:	85 c0                	test   %eax,%eax
 8099472:	75 0a                	jne    809947e <_ZN14CNCryptoAnubis7EncryptEPhi+0x1a>
 8099474:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 8099479:	e9 bb 00 00 00       	jmp    8099539 <_ZN14CNCryptoAnubis7EncryptEPhi+0xd5>
 809947e:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8099482:	7f 0a                	jg     809948e <_ZN14CNCryptoAnubis7EncryptEPhi+0x2a>
 8099484:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 8099489:	e9 ab 00 00 00       	jmp    8099539 <_ZN14CNCryptoAnubis7EncryptEPhi+0xd5>
 809948e:	8b 45 08             	mov    0x8(%ebp),%eax
 8099491:	8b 00                	mov    (%eax),%eax
 8099493:	83 c0 24             	add    $0x24,%eax
 8099496:	8b 10                	mov    (%eax),%edx
 8099498:	8b 45 08             	mov    0x8(%ebp),%eax
 809949b:	89 04 24             	mov    %eax,(%esp)
 809949e:	ff d2                	call   *%edx
 80994a0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80994a3:	8b 55 10             	mov    0x10(%ebp),%edx
 80994a6:	89 d0                	mov    %edx,%eax
 80994a8:	c1 fa 1f             	sar    $0x1f,%edx
 80994ab:	f7 7d e0             	idivl  -0x20(%ebp)
 80994ae:	89 d0                	mov    %edx,%eax
 80994b0:	85 c0                	test   %eax,%eax
 80994b2:	0f 95 c0             	setne  %al
 80994b5:	84 c0                	test   %al,%al
 80994b7:	74 07                	je     80994c0 <_ZN14CNCryptoAnubis7EncryptEPhi+0x5c>
 80994b9:	b8 06 00 00 70       	mov    $0x70000006,%eax
 80994be:	eb 79                	jmp    8099539 <_ZN14CNCryptoAnubis7EncryptEPhi+0xd5>
 80994c0:	8b 45 08             	mov    0x8(%ebp),%eax
 80994c3:	8b 40 08             	mov    0x8(%eax),%eax
 80994c6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80994c9:	8b 45 08             	mov    0x8(%ebp),%eax
 80994cc:	8b 00                	mov    (%eax),%eax
 80994ce:	83 c0 24             	add    $0x24,%eax
 80994d1:	8b 10                	mov    (%eax),%edx
 80994d3:	8b 45 08             	mov    0x8(%ebp),%eax
 80994d6:	89 04 24             	mov    %eax,(%esp)
 80994d9:	ff d2                	call   *%edx
 80994db:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80994de:	8b 45 10             	mov    0x10(%ebp),%eax
 80994e1:	89 c2                	mov    %eax,%edx
 80994e3:	c1 fa 1f             	sar    $0x1f,%edx
 80994e6:	f7 7d e4             	idivl  -0x1c(%ebp)
 80994e9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80994ec:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80994f3:	eb 32                	jmp    8099527 <_ZN14CNCryptoAnubis7EncryptEPhi+0xc3>
 80994f5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80994f8:	89 44 24 08          	mov    %eax,0x8(%esp)
 80994fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 80994ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8099503:	8b 45 0c             	mov    0xc(%ebp),%eax
 8099506:	89 04 24             	mov    %eax,(%esp)
 8099509:	e8 e1 bd 00 00       	call   80a52ef <_Z18anubis_ecb_encryptPKhPhP13symmetric_key>
 809950e:	8b 45 08             	mov    0x8(%ebp),%eax
 8099511:	8b 00                	mov    (%eax),%eax
 8099513:	83 c0 24             	add    $0x24,%eax
 8099516:	8b 10                	mov    (%eax),%edx
 8099518:	8b 45 08             	mov    0x8(%ebp),%eax
 809951b:	89 04 24             	mov    %eax,(%esp)
 809951e:	ff d2                	call   *%edx
 8099520:	01 45 0c             	add    %eax,0xc(%ebp)
 8099523:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8099527:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809952a:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809952d:	0f 9c c0             	setl   %al
 8099530:	84 c0                	test   %al,%al
 8099532:	75 c1                	jne    80994f5 <_ZN14CNCryptoAnubis7EncryptEPhi+0x91>
 8099534:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 8099539:	c9                   	leave
 809953a:	c3                   	ret
 809953b:	90                   	nop

```

```c
// CNCryptoAnubis::Encrypt @ 0x8099464

/* CNCryptoAnubis::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoAnubis::Encrypt(CNCryptoAnubis *this,uchar *param_1,int param_2)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else if (param_2 < 1) {
    uVar2 = 0x7000000a;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      psVar1 = *(symmetric_key **)(this + 8);
      iVar3 = (**(code **)(*(int *)this + 0x24))(this);
      for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
        anubis_ecb_encrypt(param_1,param_1,psVar1);
        iVar4 = (**(code **)(*(int *)this + 0x24))(this);
        param_1 = param_1 + iVar4;
      }
      uVar2 = 0x6fffffff;
    }
    else {
      uVar2 = 0x70000006;
    }
  }
  return uVar2;
}

```

---

## Encrypt_08099614

```asm
// === 08099614 CNCryptoAnubis::Encrypt  [0x08099614-0x8099705] ===
 8099614:	55                   	push   %ebp
 8099615:	89 e5                	mov    %esp,%ebp
 8099617:	83 ec 38             	sub    $0x38,%esp
 809961a:	8b 45 08             	mov    0x8(%ebp),%eax
 809961d:	8b 40 08             	mov    0x8(%eax),%eax
 8099620:	85 c0                	test   %eax,%eax
 8099622:	75 0a                	jne    809962e <_ZN14CNCryptoAnubis7EncryptEPKhiPhi+0x1a>
 8099624:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 8099629:	e9 d5 00 00 00       	jmp    8099703 <_ZN14CNCryptoAnubis7EncryptEPKhiPhi+0xef>
 809962e:	8b 45 08             	mov    0x8(%ebp),%eax
 8099631:	8b 00                	mov    (%eax),%eax
 8099633:	83 c0 24             	add    $0x24,%eax
 8099636:	8b 10                	mov    (%eax),%edx
 8099638:	8b 45 08             	mov    0x8(%ebp),%eax
 809963b:	89 04 24             	mov    %eax,(%esp)
 809963e:	ff d2                	call   *%edx
 8099640:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8099643:	8b 55 10             	mov    0x10(%ebp),%edx
 8099646:	89 d0                	mov    %edx,%eax
 8099648:	c1 fa 1f             	sar    $0x1f,%edx
 809964b:	f7 7d e0             	idivl  -0x20(%ebp)
 809964e:	89 d0                	mov    %edx,%eax
 8099650:	85 c0                	test   %eax,%eax
 8099652:	0f 95 c0             	setne  %al
 8099655:	84 c0                	test   %al,%al
 8099657:	74 0a                	je     8099663 <_ZN14CNCryptoAnubis7EncryptEPKhiPhi+0x4f>
 8099659:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809965e:	e9 a0 00 00 00       	jmp    8099703 <_ZN14CNCryptoAnubis7EncryptEPKhiPhi+0xef>
 8099663:	8b 45 10             	mov    0x10(%ebp),%eax
 8099666:	3b 45 18             	cmp    0x18(%ebp),%eax
 8099669:	7e 0a                	jle    8099675 <_ZN14CNCryptoAnubis7EncryptEPKhiPhi+0x61>
 809966b:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 8099670:	e9 8e 00 00 00       	jmp    8099703 <_ZN14CNCryptoAnubis7EncryptEPKhiPhi+0xef>
 8099675:	8b 45 08             	mov    0x8(%ebp),%eax
 8099678:	8b 40 08             	mov    0x8(%eax),%eax
 809967b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809967e:	8b 45 08             	mov    0x8(%ebp),%eax
 8099681:	8b 00                	mov    (%eax),%eax
 8099683:	83 c0 24             	add    $0x24,%eax
 8099686:	8b 10                	mov    (%eax),%edx
 8099688:	8b 45 08             	mov    0x8(%ebp),%eax
 809968b:	89 04 24             	mov    %eax,(%esp)
 809968e:	ff d2                	call   *%edx
 8099690:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8099693:	8b 45 10             	mov    0x10(%ebp),%eax
 8099696:	89 c2                	mov    %eax,%edx
 8099698:	c1 fa 1f             	sar    $0x1f,%edx
 809969b:	f7 7d e4             	idivl  -0x1c(%ebp)
 809969e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80996a1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80996a8:	eb 47                	jmp    80996f1 <_ZN14CNCryptoAnubis7EncryptEPKhiPhi+0xdd>
 80996aa:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80996ad:	89 44 24 08          	mov    %eax,0x8(%esp)
 80996b1:	8b 45 14             	mov    0x14(%ebp),%eax
 80996b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 80996b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 80996bb:	89 04 24             	mov    %eax,(%esp)
 80996be:	e8 2c bc 00 00       	call   80a52ef <_Z18anubis_ecb_encryptPKhPhP13symmetric_key>
 80996c3:	8b 45 08             	mov    0x8(%ebp),%eax
 80996c6:	8b 00                	mov    (%eax),%eax
 80996c8:	83 c0 24             	add    $0x24,%eax
 80996cb:	8b 10                	mov    (%eax),%edx
 80996cd:	8b 45 08             	mov    0x8(%ebp),%eax
 80996d0:	89 04 24             	mov    %eax,(%esp)
 80996d3:	ff d2                	call   *%edx
 80996d5:	01 45 0c             	add    %eax,0xc(%ebp)
 80996d8:	8b 45 08             	mov    0x8(%ebp),%eax
 80996db:	8b 00                	mov    (%eax),%eax
 80996dd:	83 c0 24             	add    $0x24,%eax
 80996e0:	8b 10                	mov    (%eax),%edx
 80996e2:	8b 45 08             	mov    0x8(%ebp),%eax
 80996e5:	89 04 24             	mov    %eax,(%esp)
 80996e8:	ff d2                	call   *%edx
 80996ea:	01 45 14             	add    %eax,0x14(%ebp)
 80996ed:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80996f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80996f4:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 80996f7:	0f 9c c0             	setl   %al
 80996fa:	84 c0                	test   %al,%al
 80996fc:	75 ac                	jne    80996aa <_ZN14CNCryptoAnubis7EncryptEPKhiPhi+0x96>
 80996fe:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 8099703:	c9                   	leave
 8099704:	c3                   	ret
 8099705:	90                   	nop

```

```c
// CNCryptoAnubis::Encrypt @ 0x8099614

/* CNCryptoAnubis::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoAnubis::Encrypt(CNCryptoAnubis *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
          anubis_ecb_encrypt(param_1,param_3,psVar1);
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
// === 08099802 CNCryptoAnubis::GetBlockSize  [0x08099802-0x809980b] ===
 8099802:	55                   	push   %ebp
 8099803:	89 e5                	mov    %esp,%ebp
 8099805:	b8 10 00 00 00       	mov    $0x10,%eax
 809980a:	5d                   	pop    %ebp
 809980b:	c3                   	ret

```

```c
// CNCryptoAnubis::GetBlockSize @ 0x8099802

/* CNCryptoAnubis::GetBlockSize() const */

undefined4 CNCryptoAnubis::GetBlockSize(void)

{
  return 0x10;
}

```

---

## GetKeySize

```asm
// === 080997f8 CNCryptoAnubis::GetKeySize  [0x080997f8-0x8099801] ===
 80997f8:	55                   	push   %ebp
 80997f9:	89 e5                	mov    %esp,%ebp
 80997fb:	b8 10 00 00 00       	mov    $0x10,%eax
 8099800:	5d                   	pop    %ebp
 8099801:	c3                   	ret

```

```c
// CNCryptoAnubis::GetKeySize @ 0x80997f8

/* CNCryptoAnubis::GetKeySize() const */

undefined4 CNCryptoAnubis::GetKeySize(void)

{
  return 0x10;
}

```

---

## Initialize

```asm
// === 080993bc CNCryptoAnubis::Initialize  [0x080993bc-0x8099463] ===
 80993bc:	55                   	push   %ebp
 80993bd:	89 e5                	mov    %esp,%ebp
 80993bf:	83 ec 28             	sub    $0x28,%esp
 80993c2:	8b 45 08             	mov    0x8(%ebp),%eax
 80993c5:	8b 40 08             	mov    0x8(%eax),%eax
 80993c8:	85 c0                	test   %eax,%eax
 80993ca:	75 0a                	jne    80993d6 <_ZN14CNCryptoAnubis10InitializeEPKhi+0x1a>
 80993cc:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 80993d1:	e9 8b 00 00 00       	jmp    8099461 <_ZN14CNCryptoAnubis10InitializeEPKhi+0xa5>
 80993d6:	8b 45 08             	mov    0x8(%ebp),%eax
 80993d9:	8b 00                	mov    (%eax),%eax
 80993db:	83 c0 20             	add    $0x20,%eax
 80993de:	8b 10                	mov    (%eax),%edx
 80993e0:	8b 45 08             	mov    0x8(%ebp),%eax
 80993e3:	89 04 24             	mov    %eax,(%esp)
 80993e6:	ff d2                	call   *%edx
 80993e8:	3b 45 10             	cmp    0x10(%ebp),%eax
 80993eb:	0f 9f c0             	setg   %al
 80993ee:	84 c0                	test   %al,%al
 80993f0:	74 07                	je     80993f9 <_ZN14CNCryptoAnubis10InitializeEPKhi+0x3d>
 80993f2:	b8 02 00 00 70       	mov    $0x70000002,%eax
 80993f7:	eb 68                	jmp    8099461 <_ZN14CNCryptoAnubis10InitializeEPKhi+0xa5>
 80993f9:	8b 45 08             	mov    0x8(%ebp),%eax
 80993fc:	8b 40 08             	mov    0x8(%eax),%eax
 80993ff:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8099402:	8b 45 08             	mov    0x8(%ebp),%eax
 8099405:	8b 00                	mov    (%eax),%eax
 8099407:	83 c0 20             	add    $0x20,%eax
 809940a:	8b 10                	mov    (%eax),%edx
 809940c:	8b 45 08             	mov    0x8(%ebp),%eax
 809940f:	89 04 24             	mov    %eax,(%esp)
 8099412:	ff d2                	call   *%edx
 8099414:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8099417:	89 54 24 0c          	mov    %edx,0xc(%esp)
 809941b:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8099422:	00 
 8099423:	89 44 24 04          	mov    %eax,0x4(%esp)
 8099427:	8b 45 0c             	mov    0xc(%ebp),%eax
 809942a:	89 04 24             	mov    %eax,(%esp)
 809942d:	e8 3f ba 00 00       	call   80a4e71 <_Z12anubis_setupPKhiiP13symmetric_key>
 8099432:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8099435:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8099439:	75 07                	jne    8099442 <_ZN14CNCryptoAnubis10InitializeEPKhi+0x86>
 809943b:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 8099440:	eb 1f                	jmp    8099461 <_ZN14CNCryptoAnubis10InitializeEPKhi+0xa5>
 8099442:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 8099446:	75 07                	jne    809944f <_ZN14CNCryptoAnubis10InitializeEPKhi+0x93>
 8099448:	b8 1a 00 00 70       	mov    $0x7000001a,%eax
 809944d:	eb 12                	jmp    8099461 <_ZN14CNCryptoAnubis10InitializeEPKhi+0xa5>
 809944f:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8099453:	75 07                	jne    809945c <_ZN14CNCryptoAnubis10InitializeEPKhi+0xa0>
 8099455:	b8 02 00 00 70       	mov    $0x70000002,%eax
 809945a:	eb 05                	jmp    8099461 <_ZN14CNCryptoAnubis10InitializeEPKhi+0xa5>
 809945c:	b8 00 00 00 70       	mov    $0x70000000,%eax
 8099461:	c9                   	leave
 8099462:	c3                   	ret
 8099463:	90                   	nop

```

```c
// CNCryptoAnubis::Initialize @ 0x80993bc

/* CNCryptoAnubis::Initialize(unsigned char const*, int) */

undefined4 __thiscall CNCryptoAnubis::Initialize(CNCryptoAnubis *this,uchar *param_1,int param_2)

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
      iVar3 = anubis_setup(param_1,iVar3,0xc,psVar1);
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
// === 080993a4 CNCryptoAnubis::SetMode  [0x080993a4-0x80993bb] ===
 80993a4:	55                   	push   %ebp
 80993a5:	89 e5                	mov    %esp,%ebp
 80993a7:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80993ab:	75 07                	jne    80993b4 <_ZN14CNCryptoAnubis7SetModeE16CRYPTO_MODE_TYPE+0x10>
 80993ad:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80993b2:	eb 05                	jmp    80993b9 <_ZN14CNCryptoAnubis7SetModeE16CRYPTO_MODE_TYPE+0x15>
 80993b4:	b8 17 00 00 70       	mov    $0x70000017,%eax
 80993b9:	5d                   	pop    %ebp
 80993ba:	c3                   	ret
 80993bb:	90                   	nop

```

```c
// CNCryptoAnubis::SetMode @ 0x80993a4

/* CNCryptoAnubis::SetMode(CRYPTO_MODE_TYPE) */

undefined4 __thiscall CNCryptoAnubis::SetMode(undefined4 this,int param_2)

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
// === 0809939c CNCryptoAnubis::operator=  [0x0809939c-0x80993a3] ===
 809939c:	55                   	push   %ebp
 809939d:	89 e5                	mov    %esp,%ebp
 809939f:	8b 45 08             	mov    0x8(%ebp),%eax
 80993a2:	5d                   	pop    %ebp
 80993a3:	c3                   	ret

```

```c
// CNCryptoAnubis::operator= @ 0x809939c

/* CNCryptoAnubis::TEMPNAMEPLACEHOLDERVALUE(CNCryptoAnubis const&) */

CNCryptoAnubis * __thiscall CNCryptoAnubis::operator=(CNCryptoAnubis *this,CNCryptoAnubis *param_1)

{
  return this;
}

```

---

## ~CNCryptoAnubis

```asm
// === 08099302 CNCryptoAnubis::~CNCryptoAnubis  [0x08099302-0x8099359] ===
 8099302:	55                   	push   %ebp
 8099303:	89 e5                	mov    %esp,%ebp
 8099305:	83 ec 28             	sub    $0x28,%esp
 8099308:	8b 45 08             	mov    0x8(%ebp),%eax
 809930b:	c7 00 88 36 b1 08    	movl   $0x8b13688,(%eax)
 8099311:	8b 45 08             	mov    0x8(%ebp),%eax
 8099314:	8b 40 08             	mov    0x8(%eax),%eax
 8099317:	85 c0                	test   %eax,%eax
 8099319:	74 1e                	je     8099339 <_ZN14CNCryptoAnubisD1Ev+0x37>
 809931b:	8b 45 08             	mov    0x8(%ebp),%eax
 809931e:	8b 40 08             	mov    0x8(%eax),%eax
 8099321:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8099324:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8099327:	89 04 24             	mov    %eax,(%esp)
 809932a:	e8 c1 b1 68 00       	call   87244f0 <_ZdlPv>
 809932f:	8b 45 08             	mov    0x8(%ebp),%eax
 8099332:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8099339:	8b 45 08             	mov    0x8(%ebp),%eax
 809933c:	89 04 24             	mov    %eax,(%esp)
 809933f:	e8 c4 4b 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 8099344:	b8 00 00 00 00       	mov    $0x0,%eax
 8099349:	84 c0                	test   %al,%al
 809934b:	74 0b                	je     8099358 <_ZN14CNCryptoAnubisD1Ev+0x56>
 809934d:	8b 45 08             	mov    0x8(%ebp),%eax
 8099350:	89 04 24             	mov    %eax,(%esp)
 8099353:	e8 98 b1 68 00       	call   87244f0 <_ZdlPv>
 8099358:	c9                   	leave
 8099359:	c3                   	ret

```

```c
// CNCryptoAnubis::~CNCryptoAnubis @ 0x8099302

/* WARNING: Removing unreachable block (ram,0x0809934d) */
/* CNCryptoAnubis::~CNCryptoAnubis() */

void __thiscall CNCryptoAnubis::~CNCryptoAnubis(CNCryptoAnubis *this)

{
  *(undefined ***)this = &PTR__CNCryptoAnubis_08b13688;
  if (*(int *)(this + 8) != 0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}

```

---

## ~CNCryptoAnubis_0809935a

```asm
// === 0809935a CNCryptoAnubis::~CNCryptoAnubis  [0x0809935a-0x8099377] ===
 809935a:	55                   	push   %ebp
 809935b:	89 e5                	mov    %esp,%ebp
 809935d:	83 ec 18             	sub    $0x18,%esp
 8099360:	8b 45 08             	mov    0x8(%ebp),%eax
 8099363:	89 04 24             	mov    %eax,(%esp)
 8099366:	e8 97 ff ff ff       	call   8099302 <_ZN14CNCryptoAnubisD1Ev>
 809936b:	8b 45 08             	mov    0x8(%ebp),%eax
 809936e:	89 04 24             	mov    %eax,(%esp)
 8099371:	e8 7a b1 68 00       	call   87244f0 <_ZdlPv>
 8099376:	c9                   	leave
 8099377:	c3                   	ret

```

```c
// CNCryptoAnubis::~CNCryptoAnubis @ 0x809935a

/* CNCryptoAnubis::~CNCryptoAnubis() */

void __thiscall CNCryptoAnubis::~CNCryptoAnubis(CNCryptoAnubis *this)

{
  ~CNCryptoAnubis(this);
  operator_delete(this);
  return;
}

```

