# Cipher

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## AdjustDataSize

```asm
// === 080973c0 Cipher::AdjustDataSize  [0x080973c0-0x8097435] ===
 80973c0:	55                   	push   %ebp
 80973c1:	89 e5                	mov    %esp,%ebp
 80973c3:	83 ec 28             	sub    $0x28,%esp
 80973c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 80973c9:	89 04 24             	mov    %eax,(%esp)
 80973cc:	e8 8f fd ff ff       	call   8097160 <_Z13GetCryptoTypei>
 80973d1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80973d4:	8b 45 10             	mov    0x10(%ebp),%eax
 80973d7:	8b 00                	mov    (%eax),%eax
 80973d9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80973dc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80973df:	8b 55 08             	mov    0x8(%ebp),%edx
 80973e2:	83 c2 04             	add    $0x4,%edx
 80973e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 80973e9:	89 14 24             	mov    %edx,(%esp)
 80973ec:	e8 a7 04 00 00       	call   8097898 <_ZNKSt6vectorIP12ICryptoGraphSaIS1_EEixEj>
 80973f1:	8b 00                	mov    (%eax),%eax
 80973f3:	8b 10                	mov    (%eax),%edx
 80973f5:	83 c2 24             	add    $0x24,%edx
 80973f8:	8b 12                	mov    (%edx),%edx
 80973fa:	89 04 24             	mov    %eax,(%esp)
 80973fd:	ff d2                	call   *%edx
 80973ff:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8097402:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8097405:	89 c2                	mov    %eax,%edx
 8097407:	c1 fa 1f             	sar    $0x1f,%edx
 809740a:	f7 7d f4             	idivl  -0xc(%ebp)
 809740d:	89 d0                	mov    %edx,%eax
 809740f:	85 c0                	test   %eax,%eax
 8097411:	74 21                	je     8097434 <_ZNK6Cipher14AdjustDataSizeEiPi+0x74>
 8097413:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8097416:	89 c2                	mov    %eax,%edx
 8097418:	c1 fa 1f             	sar    $0x1f,%edx
 809741b:	f7 7d f4             	idivl  -0xc(%ebp)
 809741e:	89 d0                	mov    %edx,%eax
 8097420:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8097423:	89 d1                	mov    %edx,%ecx
 8097425:	29 c1                	sub    %eax,%ecx
 8097427:	89 c8                	mov    %ecx,%eax
 8097429:	01 45 f0             	add    %eax,-0x10(%ebp)
 809742c:	8b 45 10             	mov    0x10(%ebp),%eax
 809742f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8097432:	89 10                	mov    %edx,(%eax)
 8097434:	c9                   	leave
 8097435:	c3                   	ret

```

```c
// Cipher::AdjustDataSize @ 0x80973c0

/* Cipher::AdjustDataSize(int, int*) const */

void __thiscall Cipher::AdjustDataSize(Cipher *this,int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  uVar2 = GetCryptoType(param_1);
  iVar1 = *param_2;
  puVar3 = (undefined4 *)
           std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::operator[]
                     ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4),uVar2);
  iVar4 = (**(code **)(*(int *)*puVar3 + 0x24))((int *)*puVar3);
  if (iVar1 % iVar4 != 0) {
    *param_2 = iVar1 + (iVar4 - iVar1 % iVar4);
  }
  return;
}

```

---

## Cipher

```asm
// === 08097196 Cipher::Cipher  [0x08097196-0x809724b] ===
 8097196:	55                   	push   %ebp
 8097197:	89 e5                	mov    %esp,%ebp
 8097199:	56                   	push   %esi
 809719a:	53                   	push   %ebx
 809719b:	83 ec 20             	sub    $0x20,%esp
 809719e:	8b 45 08             	mov    0x8(%ebp),%eax
 80971a1:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 80971a7:	8b 45 08             	mov    0x8(%ebp),%eax
 80971aa:	83 c0 04             	add    $0x4,%eax
 80971ad:	89 04 24             	mov    %eax,(%esp)
 80971b0:	e8 ab 04 00 00       	call   8097660 <_ZNSt6vectorIP12ICryptoGraphSaIS1_EEC1Ev>
 80971b5:	8b 45 08             	mov    0x8(%ebp),%eax
 80971b8:	83 c0 04             	add    $0x4,%eax
 80971bb:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 80971c2:	00 
 80971c3:	89 04 24             	mov    %eax,(%esp)
 80971c6:	e8 07 05 00 00       	call   80976d2 <_ZNSt6vectorIP12ICryptoGraphSaIS1_EE7reserveEj>
 80971cb:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80971d2:	eb 46                	jmp    809721a <_ZN6CipherC1Ev+0x84>
 80971d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80971d7:	89 04 24             	mov    %eax,(%esp)
 80971da:	e8 b1 6d 00 00       	call   809df90 <_Z17CreateCryptoGraph17CRYPTO_GRAPH_TYPE>
 80971df:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80971e2:	8b 45 08             	mov    0x8(%ebp),%eax
 80971e5:	8d 50 04             	lea    0x4(%eax),%edx
 80971e8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80971eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 80971ef:	89 14 24             	mov    %edx,(%esp)
 80971f2:	e8 ff 05 00 00       	call   80977f6 <_ZNSt6vectorIP12ICryptoGraphSaIS1_EE9push_backERKS1_>
 80971f7:	8b 45 08             	mov    0x8(%ebp),%eax
 80971fa:	8b 18                	mov    (%eax),%ebx
 80971fc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80971ff:	8b 00                	mov    (%eax),%eax
 8097201:	83 c0 20             	add    $0x20,%eax
 8097204:	8b 10                	mov    (%eax),%edx
 8097206:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8097209:	89 04 24             	mov    %eax,(%esp)
 809720c:	ff d2                	call   *%edx
 809720e:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 8097211:	8b 45 08             	mov    0x8(%ebp),%eax
 8097214:	89 10                	mov    %edx,(%eax)
 8097216:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809721a:	83 7d f4 0d          	cmpl   $0xd,-0xc(%ebp)
 809721e:	0f 9e c0             	setle  %al
 8097221:	84 c0                	test   %al,%al
 8097223:	75 af                	jne    80971d4 <_ZN6CipherC1Ev+0x3e>
 8097225:	eb 1e                	jmp    8097245 <_ZN6CipherC1Ev+0xaf>
 8097227:	89 d3                	mov    %edx,%ebx
 8097229:	89 c6                	mov    %eax,%esi
 809722b:	8b 45 08             	mov    0x8(%ebp),%eax
 809722e:	83 c0 04             	add    $0x4,%eax
 8097231:	89 04 24             	mov    %eax,(%esp)
 8097234:	e8 3b 04 00 00       	call   8097674 <_ZNSt6vectorIP12ICryptoGraphSaIS1_EED1Ev>
 8097239:	89 f0                	mov    %esi,%eax
 809723b:	89 da                	mov    %ebx,%edx
 809723d:	89 04 24             	mov    %eax,(%esp)
 8097240:	e8 0b c5 a4 00       	call   8ae3750 <_Unwind_Resume>
 8097245:	83 c4 20             	add    $0x20,%esp
 8097248:	5b                   	pop    %ebx
 8097249:	5e                   	pop    %esi
 809724a:	5d                   	pop    %ebp
 809724b:	c3                   	ret

```

```c
// Cipher::Cipher @ 0x8097196

/* Cipher::Cipher() */

void __thiscall Cipher::Cipher(Cipher *this)

{
  int iVar1;
  int iVar2;
  ICryptoGraph *local_14;
  int local_10;
  
  *(undefined4 *)this = 0;
  std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::vector
            ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4));
                    /* try { // try from 080971c6 to 0809720d has its CatchHandler @ 08097227 */
  std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::reserve
            ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4),0xe);
  for (local_10 = 0; local_10 < 0xe; local_10 = local_10 + 1) {
    local_14 = (ICryptoGraph *)CreateCryptoGraph(local_10);
    std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::push_back
              ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4),&local_14);
    iVar1 = *(int *)this;
    iVar2 = (**(code **)(*(int *)local_14 + 0x20))(local_14);
    *(int *)this = iVar1 + iVar2;
  }
  return;
}

```

---

## Cipher_080972e8

```asm
// === 080972e8 Cipher::Cipher  [0x080972e8-0x80972fd] ===
 80972e8:	55                   	push   %ebp
 80972e9:	89 e5                	mov    %esp,%ebp
 80972eb:	83 ec 18             	sub    $0x18,%esp
 80972ee:	8b 45 08             	mov    0x8(%ebp),%eax
 80972f1:	83 c0 04             	add    $0x4,%eax
 80972f4:	89 04 24             	mov    %eax,(%esp)
 80972f7:	e8 64 03 00 00       	call   8097660 <_ZNSt6vectorIP12ICryptoGraphSaIS1_EEC1Ev>
 80972fc:	c9                   	leave
 80972fd:	c3                   	ret

```

```c
// Cipher::Cipher @ 0x80972e8

/* Cipher::Cipher(Cipher const&) */

void __thiscall Cipher::Cipher(Cipher *this,Cipher *param_1)

{
  std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::vector
            ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4));
  return;
}

```

---

## Decrypt

```asm
// === 0809751e Cipher::Decrypt  [0x0809751e-0x80975d3] ===
 809751e:	55                   	push   %ebp
 809751f:	89 e5                	mov    %esp,%ebp
 8097521:	83 ec 38             	sub    $0x38,%esp
 8097524:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8097528:	7f 13                	jg     809753d <_ZN6Cipher7DecryptEiPKhiPhPi+0x1f>
 809752a:	8b 45 1c             	mov    0x1c(%ebp),%eax
 809752d:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8097533:	b8 01 00 00 00       	mov    $0x1,%eax
 8097538:	e9 95 00 00 00       	jmp    80975d2 <_ZN6Cipher7DecryptEiPKhiPhPi+0xb4>
 809753d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8097540:	89 04 24             	mov    %eax,(%esp)
 8097543:	e8 18 fc ff ff       	call   8097160 <_Z13GetCryptoTypei>
 8097548:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809754b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 809754e:	8b 55 08             	mov    0x8(%ebp),%edx
 8097551:	83 c2 04             	add    $0x4,%edx
 8097554:	89 44 24 04          	mov    %eax,0x4(%esp)
 8097558:	89 14 24             	mov    %edx,(%esp)
 809755b:	e8 0a 03 00 00       	call   809786a <_ZNSt6vectorIP12ICryptoGraphSaIS1_EEixEj>
 8097560:	8b 00                	mov    (%eax),%eax
 8097562:	8b 10                	mov    (%eax),%edx
 8097564:	83 c2 24             	add    $0x24,%edx
 8097567:	8b 12                	mov    (%edx),%edx
 8097569:	89 04 24             	mov    %eax,(%esp)
 809756c:	ff d2                	call   *%edx
 809756e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8097571:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8097574:	8b 55 08             	mov    0x8(%ebp),%edx
 8097577:	83 c2 04             	add    $0x4,%edx
 809757a:	89 44 24 04          	mov    %eax,0x4(%esp)
 809757e:	89 14 24             	mov    %edx,(%esp)
 8097581:	e8 e4 02 00 00       	call   809786a <_ZNSt6vectorIP12ICryptoGraphSaIS1_EEixEj>
 8097586:	8b 00                	mov    (%eax),%eax
 8097588:	8b 10                	mov    (%eax),%edx
 809758a:	83 c2 1c             	add    $0x1c,%edx
 809758d:	8b 0a                	mov    (%edx),%ecx
 809758f:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8097592:	8b 12                	mov    (%edx),%edx
 8097594:	89 54 24 10          	mov    %edx,0x10(%esp)
 8097598:	8b 55 18             	mov    0x18(%ebp),%edx
 809759b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 809759f:	8b 55 14             	mov    0x14(%ebp),%edx
 80975a2:	89 54 24 08          	mov    %edx,0x8(%esp)
 80975a6:	8b 55 10             	mov    0x10(%ebp),%edx
 80975a9:	89 54 24 04          	mov    %edx,0x4(%esp)
 80975ad:	89 04 24             	mov    %eax,(%esp)
 80975b0:	ff d1                	call   *%ecx
 80975b2:	3d ff ff ff 6f       	cmp    $0x6fffffff,%eax
 80975b7:	0f 94 c0             	sete   %al
 80975ba:	84 c0                	test   %al,%al
 80975bc:	74 0f                	je     80975cd <_ZN6Cipher7DecryptEiPKhiPhPi+0xaf>
 80975be:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80975c1:	8b 55 14             	mov    0x14(%ebp),%edx
 80975c4:	89 10                	mov    %edx,(%eax)
 80975c6:	b8 01 00 00 00       	mov    $0x1,%eax
 80975cb:	eb 05                	jmp    80975d2 <_ZN6Cipher7DecryptEiPKhiPhPi+0xb4>
 80975cd:	b8 00 00 00 00       	mov    $0x0,%eax
 80975d2:	c9                   	leave
 80975d3:	c3                   	ret

```

```c
// Cipher::Decrypt @ 0x809751e

/* Cipher::Decrypt(int, unsigned char const*, int, unsigned char*, int*) */

undefined4 __thiscall
Cipher::Decrypt(Cipher *this,int param_1,uchar *param_2,int param_3,uchar *param_4,int *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_3 < 1) {
    *param_5 = 0;
    uVar1 = 1;
  }
  else {
    uVar2 = GetCryptoType(param_1);
    puVar3 = (undefined4 *)
             std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::operator[]
                       ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4),uVar2);
    (**(code **)(*(int *)*puVar3 + 0x24))((int *)*puVar3);
    puVar3 = (undefined4 *)
             std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::operator[]
                       ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4),uVar2);
    iVar4 = (**(code **)(*(int *)*puVar3 + 0x1c))((int *)*puVar3,param_2,param_3,param_4,*param_5);
    if (iVar4 == 0x6fffffff) {
      *param_5 = param_3;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

---

## Encrypt

```asm
// === 08097436 Cipher::Encrypt  [0x08097436-0x809751d] ===
 8097436:	55                   	push   %ebp
 8097437:	89 e5                	mov    %esp,%ebp
 8097439:	83 ec 38             	sub    $0x38,%esp
 809743c:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8097440:	7f 13                	jg     8097455 <_ZN6Cipher7EncryptEiPKhiPhPi+0x1f>
 8097442:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8097445:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 809744b:	b8 01 00 00 00       	mov    $0x1,%eax
 8097450:	e9 c7 00 00 00       	jmp    809751c <_ZN6Cipher7EncryptEiPKhiPhPi+0xe6>
 8097455:	8b 45 0c             	mov    0xc(%ebp),%eax
 8097458:	89 04 24             	mov    %eax,(%esp)
 809745b:	e8 00 fd ff ff       	call   8097160 <_Z13GetCryptoTypei>
 8097460:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8097463:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8097466:	8b 00                	mov    (%eax),%eax
 8097468:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809746b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809746e:	8b 55 08             	mov    0x8(%ebp),%edx
 8097471:	83 c2 04             	add    $0x4,%edx
 8097474:	89 44 24 04          	mov    %eax,0x4(%esp)
 8097478:	89 14 24             	mov    %edx,(%esp)
 809747b:	e8 ea 03 00 00       	call   809786a <_ZNSt6vectorIP12ICryptoGraphSaIS1_EEixEj>
 8097480:	8b 00                	mov    (%eax),%eax
 8097482:	8b 10                	mov    (%eax),%edx
 8097484:	83 c2 24             	add    $0x24,%edx
 8097487:	8b 12                	mov    (%edx),%edx
 8097489:	89 04 24             	mov    %eax,(%esp)
 809748c:	ff d2                	call   *%edx
 809748e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8097491:	8b 45 14             	mov    0x14(%ebp),%eax
 8097494:	89 c2                	mov    %eax,%edx
 8097496:	c1 fa 1f             	sar    $0x1f,%edx
 8097499:	f7 7d f4             	idivl  -0xc(%ebp)
 809749c:	89 d0                	mov    %edx,%eax
 809749e:	85 c0                	test   %eax,%eax
 80974a0:	74 19                	je     80974bb <_ZN6Cipher7EncryptEiPKhiPhPi+0x85>
 80974a2:	8b 45 14             	mov    0x14(%ebp),%eax
 80974a5:	89 c2                	mov    %eax,%edx
 80974a7:	c1 fa 1f             	sar    $0x1f,%edx
 80974aa:	f7 7d f4             	idivl  -0xc(%ebp)
 80974ad:	89 d0                	mov    %edx,%eax
 80974af:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80974b2:	89 d1                	mov    %edx,%ecx
 80974b4:	29 c1                	sub    %eax,%ecx
 80974b6:	89 c8                	mov    %ecx,%eax
 80974b8:	01 45 14             	add    %eax,0x14(%ebp)
 80974bb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80974be:	8b 55 08             	mov    0x8(%ebp),%edx
 80974c1:	83 c2 04             	add    $0x4,%edx
 80974c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 80974c8:	89 14 24             	mov    %edx,(%esp)
 80974cb:	e8 9a 03 00 00       	call   809786a <_ZNSt6vectorIP12ICryptoGraphSaIS1_EEixEj>
 80974d0:	8b 00                	mov    (%eax),%eax
 80974d2:	8b 10                	mov    (%eax),%edx
 80974d4:	83 c2 18             	add    $0x18,%edx
 80974d7:	8b 0a                	mov    (%edx),%ecx
 80974d9:	8b 55 1c             	mov    0x1c(%ebp),%edx
 80974dc:	8b 12                	mov    (%edx),%edx
 80974de:	89 54 24 10          	mov    %edx,0x10(%esp)
 80974e2:	8b 55 18             	mov    0x18(%ebp),%edx
 80974e5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80974e9:	8b 55 14             	mov    0x14(%ebp),%edx
 80974ec:	89 54 24 08          	mov    %edx,0x8(%esp)
 80974f0:	8b 55 10             	mov    0x10(%ebp),%edx
 80974f3:	89 54 24 04          	mov    %edx,0x4(%esp)
 80974f7:	89 04 24             	mov    %eax,(%esp)
 80974fa:	ff d1                	call   *%ecx
 80974fc:	3d ff ff ff 6f       	cmp    $0x6fffffff,%eax
 8097501:	0f 94 c0             	sete   %al
 8097504:	84 c0                	test   %al,%al
 8097506:	74 0f                	je     8097517 <_ZN6Cipher7EncryptEiPKhiPhPi+0xe1>
 8097508:	8b 45 1c             	mov    0x1c(%ebp),%eax
 809750b:	8b 55 14             	mov    0x14(%ebp),%edx
 809750e:	89 10                	mov    %edx,(%eax)
 8097510:	b8 01 00 00 00       	mov    $0x1,%eax
 8097515:	eb 05                	jmp    809751c <_ZN6Cipher7EncryptEiPKhiPhPi+0xe6>
 8097517:	b8 00 00 00 00       	mov    $0x0,%eax
 809751c:	c9                   	leave
 809751d:	c3                   	ret

```

```c
// Cipher::Encrypt @ 0x8097436

/* Cipher::Encrypt(int, unsigned char const*, int, unsigned char*, int*) */

undefined4 __thiscall
Cipher::Encrypt(Cipher *this,int param_1,uchar *param_2,int param_3,uchar *param_4,int *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_3 < 1) {
    *param_5 = 0;
    uVar1 = 1;
  }
  else {
    uVar2 = GetCryptoType(param_1);
    puVar3 = (undefined4 *)
             std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::operator[]
                       ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4),uVar2);
    iVar4 = (**(code **)(*(int *)*puVar3 + 0x24))((int *)*puVar3);
    if (param_3 % iVar4 != 0) {
      param_3 = param_3 + (iVar4 - param_3 % iVar4);
    }
    puVar3 = (undefined4 *)
             std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::operator[]
                       ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4),uVar2);
    iVar4 = (**(code **)(*(int *)*puVar3 + 0x18))((int *)*puVar3,param_2,param_3,param_4,*param_5);
    if (iVar4 == 0x6fffffff) {
      *param_5 = param_3;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

---

## GetOriginalKey

```asm
// === 080975de Cipher::GetOriginalKey  [0x080975de-0x8097603] ===
 80975de:	55                   	push   %ebp
 80975df:	89 e5                	mov    %esp,%ebp
 80975e1:	83 ec 18             	sub    $0x18,%esp
 80975e4:	8b 45 08             	mov    0x8(%ebp),%eax
 80975e7:	8b 00                	mov    (%eax),%eax
 80975e9:	8b 55 08             	mov    0x8(%ebp),%edx
 80975ec:	83 c2 10             	add    $0x10,%edx
 80975ef:	89 44 24 08          	mov    %eax,0x8(%esp)
 80975f3:	89 54 24 04          	mov    %edx,0x4(%esp)
 80975f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 80975fa:	89 04 24             	mov    %eax,(%esp)
 80975fd:	e8 9e 62 fe ff       	call   807d8a0 <memcpy@plt>
 8097602:	c9                   	leave
 8097603:	c3                   	ret

```

```c
// Cipher::GetOriginalKey @ 0x80975de

/* Cipher::GetOriginalKey(unsigned char*) */

void __thiscall Cipher::GetOriginalKey(Cipher *this,uchar *param_1)

{
  memcpy(param_1,this + 0x10,*(size_t *)this);
  return;
}

```

---

## GetTotalKeyLength

```asm
// === 080975d4 Cipher::GetTotalKeyLength  [0x080975d4-0x80975dd] ===
 80975d4:	55                   	push   %ebp
 80975d5:	89 e5                	mov    %esp,%ebp
 80975d7:	8b 45 08             	mov    0x8(%ebp),%eax
 80975da:	8b 00                	mov    (%eax),%eax
 80975dc:	5d                   	pop    %ebp
 80975dd:	c3                   	ret

```

```c
// Cipher::GetTotalKeyLength @ 0x80975d4

/* Cipher::GetTotalKeyLength() const */

undefined4 __thiscall Cipher::GetTotalKeyLength(Cipher *this)

{
  return *(undefined4 *)this;
}

```

---

## Initialize

```asm
// === 08097306 Cipher::Initialize  [0x08097306-0x80973bf] ===
 8097306:	55                   	push   %ebp
 8097307:	89 e5                	mov    %esp,%ebp
 8097309:	83 ec 28             	sub    $0x28,%esp
 809730c:	8b 45 10             	mov    0x10(%ebp),%eax
 809730f:	8b 55 08             	mov    0x8(%ebp),%edx
 8097312:	83 c2 10             	add    $0x10,%edx
 8097315:	89 44 24 08          	mov    %eax,0x8(%esp)
 8097319:	8b 45 0c             	mov    0xc(%ebp),%eax
 809731c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8097320:	89 14 24             	mov    %edx,(%esp)
 8097323:	e8 78 65 fe ff       	call   807d8a0 <memcpy@plt>
 8097328:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 809732f:	eb 78                	jmp    80973a9 <_ZN6Cipher10InitializeEPKhi+0xa3>
 8097331:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8097334:	8b 55 08             	mov    0x8(%ebp),%edx
 8097337:	83 c2 04             	add    $0x4,%edx
 809733a:	89 44 24 04          	mov    %eax,0x4(%esp)
 809733e:	89 14 24             	mov    %edx,(%esp)
 8097341:	e8 24 05 00 00       	call   809786a <_ZNSt6vectorIP12ICryptoGraphSaIS1_EEixEj>
 8097346:	8b 00                	mov    (%eax),%eax
 8097348:	8b 10                	mov    (%eax),%edx
 809734a:	83 c2 20             	add    $0x20,%edx
 809734d:	8b 12                	mov    (%edx),%edx
 809734f:	89 04 24             	mov    %eax,(%esp)
 8097352:	ff d2                	call   *%edx
 8097354:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8097357:	8b 45 10             	mov    0x10(%ebp),%eax
 809735a:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 809735d:	7c 43                	jl     80973a2 <_ZN6Cipher10InitializeEPKhi+0x9c>
 809735f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8097362:	8b 55 08             	mov    0x8(%ebp),%edx
 8097365:	83 c2 04             	add    $0x4,%edx
 8097368:	89 44 24 04          	mov    %eax,0x4(%esp)
 809736c:	89 14 24             	mov    %edx,(%esp)
 809736f:	e8 f6 04 00 00       	call   809786a <_ZNSt6vectorIP12ICryptoGraphSaIS1_EEixEj>
 8097374:	8b 00                	mov    (%eax),%eax
 8097376:	8b 10                	mov    (%eax),%edx
 8097378:	83 c2 0c             	add    $0xc,%edx
 809737b:	8b 0a                	mov    (%edx),%ecx
 809737d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8097380:	89 54 24 08          	mov    %edx,0x8(%esp)
 8097384:	8b 55 0c             	mov    0xc(%ebp),%edx
 8097387:	89 54 24 04          	mov    %edx,0x4(%esp)
 809738b:	89 04 24             	mov    %eax,(%esp)
 809738e:	ff d1                	call   *%ecx
 8097390:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8097393:	01 45 0c             	add    %eax,0xc(%ebp)
 8097396:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8097399:	29 45 10             	sub    %eax,0x10(%ebp)
 809739c:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80973a0:	eb 07                	jmp    80973a9 <_ZN6Cipher10InitializeEPKhi+0xa3>
 80973a2:	b8 00 00 00 00       	mov    $0x0,%eax
 80973a7:	eb 14                	jmp    80973bd <_ZN6Cipher10InitializeEPKhi+0xb7>
 80973a9:	83 7d f0 0d          	cmpl   $0xd,-0x10(%ebp)
 80973ad:	0f 9e c0             	setle  %al
 80973b0:	84 c0                	test   %al,%al
 80973b2:	0f 85 79 ff ff ff    	jne    8097331 <_ZN6Cipher10InitializeEPKhi+0x2b>
 80973b8:	b8 01 00 00 00       	mov    $0x1,%eax
 80973bd:	c9                   	leave
 80973be:	c3                   	ret
 80973bf:	90                   	nop

```

```c
// Cipher::Initialize @ 0x8097306

/* Cipher::Initialize(unsigned char const*, int) */

undefined4 __thiscall Cipher::Initialize(Cipher *this,uchar *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint local_14;
  
  memcpy(this + 0x10,param_1,param_2);
  local_14 = 0;
  while( true ) {
    if (0xd < (int)local_14) {
      return 1;
    }
    puVar1 = (undefined4 *)
             std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::operator[]
                       ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4),local_14);
    iVar2 = (**(code **)(*(int *)*puVar1 + 0x20))((int *)*puVar1);
    if (param_2 < iVar2) break;
    puVar1 = (undefined4 *)
             std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::operator[]
                       ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4),local_14);
    (**(code **)(*(int *)*puVar1 + 0xc))((int *)*puVar1,param_1,iVar2);
    param_1 = param_1 + iVar2;
    param_2 = param_2 - iVar2;
    local_14 = local_14 + 1;
  }
  return 0;
}

```

---

## operator=

```asm
// === 080972fe Cipher::operator=  [0x080972fe-0x8097305] ===
 80972fe:	55                   	push   %ebp
 80972ff:	89 e5                	mov    %esp,%ebp
 8097301:	8b 45 08             	mov    0x8(%ebp),%eax
 8097304:	5d                   	pop    %ebp
 8097305:	c3                   	ret

```

```c
// Cipher::operator= @ 0x80972fe

/* Cipher::TEMPNAMEPLACEHOLDERVALUE(Cipher const&) */

Cipher * __thiscall Cipher::operator=(Cipher *this,Cipher *param_1)

{
  return this;
}

```

---

## ~Cipher

```asm
// === 0809724c Cipher::~Cipher  [0x0809724c-0x80972e7] ===
 809724c:	55                   	push   %ebp
 809724d:	89 e5                	mov    %esp,%ebp
 809724f:	56                   	push   %esi
 8097250:	53                   	push   %ebx
 8097251:	83 ec 20             	sub    $0x20,%esp
 8097254:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809725b:	eb 3c                	jmp    8097299 <_ZN6CipherD1Ev+0x4d>
 809725d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8097260:	8b 55 08             	mov    0x8(%ebp),%edx
 8097263:	83 c2 04             	add    $0x4,%edx
 8097266:	89 44 24 04          	mov    %eax,0x4(%esp)
 809726a:	89 14 24             	mov    %edx,(%esp)
 809726d:	e8 f8 05 00 00       	call   809786a <_ZNSt6vectorIP12ICryptoGraphSaIS1_EEixEj>
 8097272:	89 04 24             	mov    %eax,(%esp)
 8097275:	e8 56 70 00 00       	call   809e2d0 <_Z18DestroyCryptoGraphRP12ICryptoGraph>
 809727a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809727d:	8b 55 08             	mov    0x8(%ebp),%edx
 8097280:	83 c2 04             	add    $0x4,%edx
 8097283:	89 44 24 04          	mov    %eax,0x4(%esp)
 8097287:	89 14 24             	mov    %edx,(%esp)
 809728a:	e8 db 05 00 00       	call   809786a <_ZNSt6vectorIP12ICryptoGraphSaIS1_EEixEj>
 809728f:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8097295:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8097299:	83 7d f4 0d          	cmpl   $0xd,-0xc(%ebp)
 809729d:	0f 9e c0             	setle  %al
 80972a0:	84 c0                	test   %al,%al
 80972a2:	75 b9                	jne    809725d <_ZN6CipherD1Ev+0x11>
 80972a4:	8b 45 08             	mov    0x8(%ebp),%eax
 80972a7:	83 c0 04             	add    $0x4,%eax
 80972aa:	89 04 24             	mov    %eax,(%esp)
 80972ad:	e8 ca 05 00 00       	call   809787c <_ZNSt6vectorIP12ICryptoGraphSaIS1_EE5clearEv>
 80972b2:	eb 1e                	jmp    80972d2 <_ZN6CipherD1Ev+0x86>
 80972b4:	89 d3                	mov    %edx,%ebx
 80972b6:	89 c6                	mov    %eax,%esi
 80972b8:	8b 45 08             	mov    0x8(%ebp),%eax
 80972bb:	83 c0 04             	add    $0x4,%eax
 80972be:	89 04 24             	mov    %eax,(%esp)
 80972c1:	e8 ae 03 00 00       	call   8097674 <_ZNSt6vectorIP12ICryptoGraphSaIS1_EED1Ev>
 80972c6:	89 f0                	mov    %esi,%eax
 80972c8:	89 da                	mov    %ebx,%edx
 80972ca:	89 04 24             	mov    %eax,(%esp)
 80972cd:	e8 7e c4 a4 00       	call   8ae3750 <_Unwind_Resume>
 80972d2:	8b 45 08             	mov    0x8(%ebp),%eax
 80972d5:	83 c0 04             	add    $0x4,%eax
 80972d8:	89 04 24             	mov    %eax,(%esp)
 80972db:	e8 94 03 00 00       	call   8097674 <_ZNSt6vectorIP12ICryptoGraphSaIS1_EED1Ev>
 80972e0:	83 c4 20             	add    $0x20,%esp
 80972e3:	5b                   	pop    %ebx
 80972e4:	5e                   	pop    %esi
 80972e5:	5d                   	pop    %ebp
 80972e6:	c3                   	ret
 80972e7:	90                   	nop

```

```c
// Cipher::~Cipher @ 0x809724c

/* Cipher::~Cipher() */

void __thiscall Cipher::~Cipher(Cipher *this)

{
  ICryptoGraph **ppIVar1;
  undefined4 *puVar2;
  uint local_10;
  
  for (local_10 = 0; (int)local_10 < 0xe; local_10 = local_10 + 1) {
    ppIVar1 = (ICryptoGraph **)
              std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::operator[]
                        ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4),local_10)
    ;
                    /* try { // try from 08097275 to 080972b1 has its CatchHandler @ 080972b4 */
    DestroyCryptoGraph(ppIVar1);
    puVar2 = (undefined4 *)
             std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::operator[]
                       ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4),local_10);
    *puVar2 = 0;
  }
  std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::clear
            ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4));
  std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::~vector
            ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4));
  return;
}

```

