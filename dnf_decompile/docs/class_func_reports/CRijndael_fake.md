# CRijndael_fake

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## CRijndael_fake

```asm
// === 080b824c CRijndael_fake::CRijndael_fake  [0x080b824c-0x80b82c7] ===
 80b824c:	55                   	push   %ebp
 80b824d:	89 e5                	mov    %esp,%ebp
 80b824f:	56                   	push   %esi
 80b8250:	53                   	push   %ebx
 80b8251:	83 ec 20             	sub    $0x20,%esp
 80b8254:	8b 45 08             	mov    0x8(%ebp),%eax
 80b8257:	c7 00 a0 2f b2 08    	movl   $0x8b22fa0,(%eax)
 80b825d:	8b 45 08             	mov    0x8(%ebp),%eax
 80b8260:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 80b8267:	8b 45 08             	mov    0x8(%ebp),%eax
 80b826a:	c7 40 08 de bc 21 a3 	movl   $0xa321bcde,0x8(%eax)
 80b8271:	8b 45 08             	mov    0x8(%ebp),%eax
 80b8274:	8b 58 08             	mov    0x8(%eax),%ebx
 80b8277:	e8 24 5a fc ff       	call   807dca0 <rand@plt>
 80b827c:	89 c6                	mov    %eax,%esi
 80b827e:	c1 e6 10             	shl    $0x10,%esi
 80b8281:	e8 1a 5a fc ff       	call   807dca0 <rand@plt>
 80b8286:	09 f0                	or     %esi,%eax
 80b8288:	89 da                	mov    %ebx,%edx
 80b828a:	31 c2                	xor    %eax,%edx
 80b828c:	8b 45 08             	mov    0x8(%ebp),%eax
 80b828f:	89 50 08             	mov    %edx,0x8(%eax)
 80b8292:	c7 04 24 68 02 00 00 	movl   $0x268,(%esp)
 80b8299:	e8 b2 c1 66 00       	call   8724450 <_Znwj>
 80b829e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80b82a1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80b82a4:	8b 10                	mov    (%eax),%edx
 80b82a6:	8b 45 08             	mov    0x8(%ebp),%eax
 80b82a9:	89 50 04             	mov    %edx,0x4(%eax)
 80b82ac:	8b 45 08             	mov    0x8(%ebp),%eax
 80b82af:	8b 50 04             	mov    0x4(%eax),%edx
 80b82b2:	8b 45 08             	mov    0x8(%ebp),%eax
 80b82b5:	8b 40 08             	mov    0x8(%eax),%eax
 80b82b8:	31 c2                	xor    %eax,%edx
 80b82ba:	8b 45 08             	mov    0x8(%ebp),%eax
 80b82bd:	89 50 04             	mov    %edx,0x4(%eax)
 80b82c0:	83 c4 20             	add    $0x20,%esp
 80b82c3:	5b                   	pop    %ebx
 80b82c4:	5e                   	pop    %esi
 80b82c5:	5d                   	pop    %ebp
 80b82c6:	c3                   	ret
 80b82c7:	90                   	nop

```

```c
// CRijndael_fake::CRijndael_fake @ 0x80b824c

/* CRijndael_fake::CRijndael_fake() */

void __thiscall CRijndael_fake::CRijndael_fake(CRijndael_fake *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  
  *(undefined ***)this = &PTR__CRijndael_fake_08b22fa0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0xa321bcde;
  uVar1 = *(uint *)(this + 8);
  iVar2 = rand();
  uVar3 = rand();
  *(uint *)(this + 8) = uVar1 ^ (uVar3 | iVar2 << 0x10);
  pvVar4 = operator_new(0x268);
  *(void **)(this + 4) = pvVar4;
  *(uint *)(this + 4) = *(uint *)(this + 4) ^ *(uint *)(this + 8);
  return;
}

```

---

## Decrypt

```asm
// === 080b8436 CRijndael_fake::Decrypt  [0x080b8436-0x80b84a5] ===
 80b8436:	55                   	push   %ebp
 80b8437:	89 e5                	mov    %esp,%ebp
 80b8439:	83 ec 28             	sub    $0x28,%esp
 80b843c:	8b 45 08             	mov    0x8(%ebp),%eax
 80b843f:	8b 40 04             	mov    0x4(%eax),%eax
 80b8442:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80b8445:	8b 45 08             	mov    0x8(%ebp),%eax
 80b8448:	8b 50 08             	mov    0x8(%eax),%edx
 80b844b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80b844e:	31 d0                	xor    %edx,%eax
 80b8450:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80b8453:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80b8456:	8b 00                	mov    (%eax),%eax
 80b8458:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80b845b:	8b 45 14             	mov    0x14(%ebp),%eax
 80b845e:	c1 e8 04             	shr    $0x4,%eax
 80b8461:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80b8464:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80b846b:	eb 25                	jmp    80b8492 <_ZN14CRijndael_fake7DecryptEPKcPcj+0x5c>
 80b846d:	8b 55 10             	mov    0x10(%ebp),%edx
 80b8470:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b8473:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 80b8476:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 80b847a:	89 54 24 04          	mov    %edx,0x4(%esp)
 80b847e:	89 04 24             	mov    %eax,(%esp)
 80b8481:	e8 9c ce fe ff       	call   80a5322 <_Z18anubis_ecb_decryptPKhPhP13symmetric_key>
 80b8486:	83 45 0c 10          	addl   $0x10,0xc(%ebp)
 80b848a:	83 45 10 10          	addl   $0x10,0x10(%ebp)
 80b848e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80b8492:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80b8495:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 80b8498:	0f 9c c0             	setl   %al
 80b849b:	84 c0                	test   %al,%al
 80b849d:	75 ce                	jne    80b846d <_ZN14CRijndael_fake7DecryptEPKcPcj+0x37>
 80b849f:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80b84a4:	c9                   	leave
 80b84a5:	c3                   	ret

```

```c
// CRijndael_fake::Decrypt @ 0x80b8436

/* CRijndael_fake::Decrypt(char const*, char*, unsigned int) */

undefined4 __thiscall
CRijndael_fake::Decrypt(CRijndael_fake *this,char *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int local_10;
  
  uVar1 = *(uint *)(this + 4);
  uVar2 = *(uint *)(this + 8);
  for (local_10 = 0; local_10 < (int)(param_3 >> 4); local_10 = local_10 + 1) {
    anubis_ecb_decrypt((uchar *)param_1,(uchar *)param_2,(symmetric_key *)(uVar1 ^ uVar2));
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 0x6fffffff;
}

```

---

## Encrypt

```asm
// === 080b83c6 CRijndael_fake::Encrypt  [0x080b83c6-0x80b8435] ===
 80b83c6:	55                   	push   %ebp
 80b83c7:	89 e5                	mov    %esp,%ebp
 80b83c9:	83 ec 28             	sub    $0x28,%esp
 80b83cc:	8b 45 08             	mov    0x8(%ebp),%eax
 80b83cf:	8b 40 04             	mov    0x4(%eax),%eax
 80b83d2:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80b83d5:	8b 45 08             	mov    0x8(%ebp),%eax
 80b83d8:	8b 50 08             	mov    0x8(%eax),%edx
 80b83db:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80b83de:	31 d0                	xor    %edx,%eax
 80b83e0:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80b83e3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80b83e6:	8b 00                	mov    (%eax),%eax
 80b83e8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80b83eb:	8b 45 14             	mov    0x14(%ebp),%eax
 80b83ee:	c1 e8 04             	shr    $0x4,%eax
 80b83f1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80b83f4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80b83fb:	eb 25                	jmp    80b8422 <_ZN14CRijndael_fake7EncryptEPKcPcj+0x5c>
 80b83fd:	8b 55 10             	mov    0x10(%ebp),%edx
 80b8400:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b8403:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 80b8406:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 80b840a:	89 54 24 04          	mov    %edx,0x4(%esp)
 80b840e:	89 04 24             	mov    %eax,(%esp)
 80b8411:	e8 d9 ce fe ff       	call   80a52ef <_Z18anubis_ecb_encryptPKhPhP13symmetric_key>
 80b8416:	83 45 0c 10          	addl   $0x10,0xc(%ebp)
 80b841a:	83 45 10 10          	addl   $0x10,0x10(%ebp)
 80b841e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80b8422:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80b8425:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 80b8428:	0f 9c c0             	setl   %al
 80b842b:	84 c0                	test   %al,%al
 80b842d:	75 ce                	jne    80b83fd <_ZN14CRijndael_fake7EncryptEPKcPcj+0x37>
 80b842f:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80b8434:	c9                   	leave
 80b8435:	c3                   	ret

```

```c
// CRijndael_fake::Encrypt @ 0x80b83c6

/* CRijndael_fake::Encrypt(char const*, char*, unsigned int) */

undefined4 __thiscall
CRijndael_fake::Encrypt(CRijndael_fake *this,char *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int local_10;
  
  uVar1 = *(uint *)(this + 4);
  uVar2 = *(uint *)(this + 8);
  for (local_10 = 0; local_10 < (int)(param_3 >> 4); local_10 = local_10 + 1) {
    anubis_ecb_encrypt((uchar *)param_1,(uchar *)param_2,(symmetric_key *)(uVar1 ^ uVar2));
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 0x6fffffff;
}

```

---

## GetBlockSize

```asm
// === 080b851c CRijndael_fake::GetBlockSize  [0x080b851c-0x80b8527] ===
 80b851c:	55                   	push   %ebp
 80b851d:	89 e5                	mov    %esp,%ebp
 80b851f:	b8 10 00 00 00       	mov    $0x10,%eax
 80b8524:	5d                   	pop    %ebp
 80b8525:	c3                   	ret
 80b8526:	90                   	nop
 80b8527:	90                   	nop

```

```c
// CRijndael_fake::GetBlockSize @ 0x80b851c

/* CRijndael_fake::GetBlockSize() const */

undefined4 CRijndael_fake::GetBlockSize(void)

{
  return 0x10;
}

```

---

## Initialize

```asm
// === 080b8340 CRijndael_fake::Initialize  [0x080b8340-0x80b83c5] ===
 80b8340:	55                   	push   %ebp
 80b8341:	89 e5                	mov    %esp,%ebp
 80b8343:	83 ec 28             	sub    $0x28,%esp
 80b8346:	83 7d 10 0f          	cmpl   $0xf,0x10(%ebp)
 80b834a:	7f 07                	jg     80b8353 <_ZN14CRijndael_fake10InitializeEPKciS1_iiii+0x13>
 80b834c:	b8 02 00 00 70       	mov    $0x70000002,%eax
 80b8351:	eb 70                	jmp    80b83c3 <_ZN14CRijndael_fake10InitializeEPKciS1_iiii+0x83>
 80b8353:	8b 45 08             	mov    0x8(%ebp),%eax
 80b8356:	8b 40 04             	mov    0x4(%eax),%eax
 80b8359:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80b835c:	8b 45 08             	mov    0x8(%ebp),%eax
 80b835f:	8b 50 08             	mov    0x8(%eax),%edx
 80b8362:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b8365:	31 d0                	xor    %edx,%eax
 80b8367:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80b836a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80b836d:	8b 00                	mov    (%eax),%eax
 80b836f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80b8372:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b8375:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80b8378:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80b837c:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 80b8383:	00 
 80b8384:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 80b838b:	00 
 80b838c:	89 04 24             	mov    %eax,(%esp)
 80b838f:	e8 dd ca fe ff       	call   80a4e71 <_Z12anubis_setupPKhiiP13symmetric_key>
 80b8394:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80b8397:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80b839b:	75 07                	jne    80b83a4 <_ZN14CRijndael_fake10InitializeEPKciS1_iiii+0x64>
 80b839d:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80b83a2:	eb 1f                	jmp    80b83c3 <_ZN14CRijndael_fake10InitializeEPKciS1_iiii+0x83>
 80b83a4:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 80b83a8:	75 07                	jne    80b83b1 <_ZN14CRijndael_fake10InitializeEPKciS1_iiii+0x71>
 80b83aa:	b8 1a 00 00 70       	mov    $0x7000001a,%eax
 80b83af:	eb 12                	jmp    80b83c3 <_ZN14CRijndael_fake10InitializeEPKciS1_iiii+0x83>
 80b83b1:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 80b83b5:	75 07                	jne    80b83be <_ZN14CRijndael_fake10InitializeEPKciS1_iiii+0x7e>
 80b83b7:	b8 02 00 00 70       	mov    $0x70000002,%eax
 80b83bc:	eb 05                	jmp    80b83c3 <_ZN14CRijndael_fake10InitializeEPKciS1_iiii+0x83>
 80b83be:	b8 00 00 00 70       	mov    $0x70000000,%eax
 80b83c3:	c9                   	leave
 80b83c4:	c3                   	ret
 80b83c5:	90                   	nop

```

```c
// CRijndael_fake::Initialize @ 0x80b8340

/* CRijndael_fake::Initialize(char const*, int, char const*, int, int, int, int) */

undefined4
CRijndael_fake::Initialize
          (char *param_1,int param_2,char *param_3,int param_4,int param_5,int param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((int)param_3 < 0x10) {
    uVar1 = 0x70000002;
  }
  else {
    iVar2 = anubis_setup((uchar *)param_2,0x10,0xc,
                         (symmetric_key *)(*(uint *)(param_1 + 4) ^ *(uint *)(param_1 + 8)));
    if (iVar2 == 0) {
      uVar1 = 0x6fffffff;
    }
    else if (iVar2 == 4) {
      uVar1 = 0x7000001a;
    }
    else if (iVar2 == 3) {
      uVar1 = 0x70000002;
    }
    else {
      uVar1 = 0x70000000;
    }
  }
  return uVar1;
}

```

---

## Pad

```asm
// === 080b84a6 CRijndael_fake::Pad  [0x080b84a6-0x80b851b] ===
 80b84a6:	55                   	push   %ebp
 80b84a7:	89 e5                	mov    %esp,%ebp
 80b84a9:	83 ec 38             	sub    $0x38,%esp
 80b84ac:	8b 45 08             	mov    0x8(%ebp),%eax
 80b84af:	89 04 24             	mov    %eax,(%esp)
 80b84b2:	e8 65 00 00 00       	call   80b851c <_ZNK14CRijndael_fake12GetBlockSizeEv>
 80b84b7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80b84ba:	8b 55 10             	mov    0x10(%ebp),%edx
 80b84bd:	89 d0                	mov    %edx,%eax
 80b84bf:	c1 fa 1f             	sar    $0x1f,%edx
 80b84c2:	f7 7d e4             	idivl  -0x1c(%ebp)
 80b84c5:	89 55 e8             	mov    %edx,-0x18(%ebp)
 80b84c8:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 80b84cc:	74 49                	je     80b8517 <_ZN14CRijndael_fake3PadEPciPj+0x71>
 80b84ce:	8b 45 08             	mov    0x8(%ebp),%eax
 80b84d1:	89 04 24             	mov    %eax,(%esp)
 80b84d4:	e8 43 00 00 00       	call   80b851c <_ZNK14CRijndael_fake12GetBlockSizeEv>
 80b84d9:	2b 45 e8             	sub    -0x18(%ebp),%eax
 80b84dc:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80b84df:	8b 45 10             	mov    0x10(%ebp),%eax
 80b84e2:	03 45 0c             	add    0xc(%ebp),%eax
 80b84e5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80b84e8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80b84ef:	eb 0e                	jmp    80b84ff <_ZN14CRijndael_fake3PadEPciPj+0x59>
 80b84f1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80b84f4:	c6 00 00             	movb   $0x0,(%eax)
 80b84f7:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80b84fb:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80b84ff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80b8502:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 80b8505:	0f 9c c0             	setl   %al
 80b8508:	84 c0                	test   %al,%al
 80b850a:	75 e5                	jne    80b84f1 <_ZN14CRijndael_fake3PadEPciPj+0x4b>
 80b850c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b850f:	8b 55 10             	mov    0x10(%ebp),%edx
 80b8512:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80b8515:	eb 03                	jmp    80b851a <_ZN14CRijndael_fake3PadEPciPj+0x74>
 80b8517:	8b 45 10             	mov    0x10(%ebp),%eax
 80b851a:	c9                   	leave
 80b851b:	c3                   	ret

```

```c
// CRijndael_fake::Pad @ 0x80b84a6

/* CRijndael_fake::Pad(char*, int, unsigned int*) */

uint * CRijndael_fake::Pad(char *param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *local_14;
  int local_10;
  
  iVar1 = GetBlockSize();
  if ((int)param_3 % iVar1 != 0) {
    iVar2 = GetBlockSize();
    iVar2 = iVar2 - (int)param_3 % iVar1;
    local_14 = (undefined1 *)((int)param_3 + param_2);
    for (local_10 = 0; local_10 < iVar2; local_10 = local_10 + 1) {
      *local_14 = 0;
      local_14 = local_14 + 1;
    }
    param_3 = (uint *)((int)param_3 + iVar2);
  }
  return param_3;
}

```

---

## ~CRijndael_fake

```asm
// === 080b82c8 CRijndael_fake::~CRijndael_fake  [0x080b82c8-0x80b8321] ===
 80b82c8:	55                   	push   %ebp
 80b82c9:	89 e5                	mov    %esp,%ebp
 80b82cb:	83 ec 28             	sub    $0x28,%esp
 80b82ce:	8b 45 08             	mov    0x8(%ebp),%eax
 80b82d1:	c7 00 a0 2f b2 08    	movl   $0x8b22fa0,(%eax)
 80b82d7:	8b 45 08             	mov    0x8(%ebp),%eax
 80b82da:	8b 40 04             	mov    0x4(%eax),%eax
 80b82dd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80b82e0:	8b 45 08             	mov    0x8(%ebp),%eax
 80b82e3:	8b 50 08             	mov    0x8(%eax),%edx
 80b82e6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80b82e9:	31 d0                	xor    %edx,%eax
 80b82eb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80b82ee:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80b82f1:	8b 00                	mov    (%eax),%eax
 80b82f3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80b82f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80b82f9:	89 04 24             	mov    %eax,(%esp)
 80b82fc:	e8 ef c1 66 00       	call   87244f0 <_ZdlPv>
 80b8301:	8b 45 08             	mov    0x8(%ebp),%eax
 80b8304:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 80b830b:	b8 00 00 00 00       	mov    $0x0,%eax
 80b8310:	84 c0                	test   %al,%al
 80b8312:	74 0b                	je     80b831f <_ZN14CRijndael_fakeD1Ev+0x57>
 80b8314:	8b 45 08             	mov    0x8(%ebp),%eax
 80b8317:	89 04 24             	mov    %eax,(%esp)
 80b831a:	e8 d1 c1 66 00       	call   87244f0 <_ZdlPv>
 80b831f:	c9                   	leave
 80b8320:	c3                   	ret
 80b8321:	90                   	nop

```

```c
// CRijndael_fake::~CRijndael_fake @ 0x80b82c8

/* WARNING: Removing unreachable block (ram,0x080b8314) */
/* CRijndael_fake::~CRijndael_fake() */

void __thiscall CRijndael_fake::~CRijndael_fake(CRijndael_fake *this)

{
  *(undefined ***)this = &PTR__CRijndael_fake_08b22fa0;
  operator_delete((void *)(*(uint *)(this + 4) ^ *(uint *)(this + 8)));
  *(undefined4 *)(this + 4) = 0;
  return;
}

```

---

## ~CRijndael_fake_080b8322

```asm
// === 080b8322 CRijndael_fake::~CRijndael_fake  [0x080b8322-0x80b833f] ===
 80b8322:	55                   	push   %ebp
 80b8323:	89 e5                	mov    %esp,%ebp
 80b8325:	83 ec 18             	sub    $0x18,%esp
 80b8328:	8b 45 08             	mov    0x8(%ebp),%eax
 80b832b:	89 04 24             	mov    %eax,(%esp)
 80b832e:	e8 95 ff ff ff       	call   80b82c8 <_ZN14CRijndael_fakeD1Ev>
 80b8333:	8b 45 08             	mov    0x8(%ebp),%eax
 80b8336:	89 04 24             	mov    %eax,(%esp)
 80b8339:	e8 b2 c1 66 00       	call   87244f0 <_ZdlPv>
 80b833e:	c9                   	leave
 80b833f:	c3                   	ret

```

```c
// CRijndael_fake::~CRijndael_fake @ 0x80b8322

/* CRijndael_fake::~CRijndael_fake() */

void __thiscall CRijndael_fake::~CRijndael_fake(CRijndael_fake *this)

{
  ~CRijndael_fake(this);
  operator_delete(this);
  return;
}

```

