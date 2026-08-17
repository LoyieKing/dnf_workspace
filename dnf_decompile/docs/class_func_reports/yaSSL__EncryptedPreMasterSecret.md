# yaSSL__EncryptedPreMasterSecret

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## EncryptedPreMasterSecret

```asm
// === 08746970 yaSSL::EncryptedPreMasterSecret::EncryptedPreMasterSecret  [0x08746970-0x874699f] ===
 8746970:	e8 4f dc fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8746975:	81 c1 23 62 c2 00    	add    $0xc26223,%ecx
 874697b:	55                   	push   %ebp
 874697c:	89 e5                	mov    %esp,%ebp
 874697e:	8b 45 08             	mov    0x8(%ebp),%eax
 8746981:	8b 91 e4 ff ff ff    	mov    -0x1c(%ecx),%edx
 8746987:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 874698e:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8746995:	83 c2 08             	add    $0x8,%edx
 8746998:	89 10                	mov    %edx,(%eax)
 874699a:	5d                   	pop    %ebp
 874699b:	c3                   	ret
 874699c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::EncryptedPreMasterSecret::EncryptedPreMasterSecret @ 0x8746970

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::EncryptedPreMasterSecret::EncryptedPreMasterSecret() */

void __thiscall
yaSSL::EncryptedPreMasterSecret::EncryptedPreMasterSecret(EncryptedPreMasterSecret *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0936cb7c;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)this = puVar1 + 8;
  return;
}

```

---

## alloc

```asm
// === 087473d0 yaSSL::EncryptedPreMasterSecret::alloc  [0x087473d0-0x874740f] ===
 87473d0:	55                   	push   %ebp
 87473d1:	89 e5                	mov    %esp,%ebp
 87473d3:	83 ec 18             	sub    $0x18,%esp
 87473d6:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87473d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 87473dc:	8b 75 08             	mov    0x8(%ebp),%esi
 87473df:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87473e2:	e8 11 ba fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87473e7:	81 c3 b1 57 c2 00    	add    $0xc257b1,%ebx
 87473ed:	89 46 08             	mov    %eax,0x8(%esi)
 87473f0:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87473f5:	89 04 24             	mov    %eax,(%esp)
 87473f8:	e8 53 af 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 87473fd:	89 46 04             	mov    %eax,0x4(%esi)
 8747400:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8747403:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8747406:	89 ec                	mov    %ebp,%esp
 8747408:	5d                   	pop    %ebp
 8747409:	c3                   	ret
 874740a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::EncryptedPreMasterSecret::alloc @ 0x87473d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::EncryptedPreMasterSecret::alloc(int) */

void __thiscall yaSSL::EncryptedPreMasterSecret::alloc(EncryptedPreMasterSecret *this,int param_1)

{
  void *pvVar1;
  
  *(int *)(this + 8) = param_1;
  pvVar1 = operator_new__(param_1,0);
  *(void **)(this + 4) = pvVar1;
  return;
}

```

---

## build

```asm
// === 0874b380 yaSSL::EncryptedPreMasterSecret::build  [0x0874b380-0x874b51f] ===
 874b380:	55                   	push   %ebp
 874b381:	b9 0c 00 00 00       	mov    $0xc,%ecx
 874b386:	89 e5                	mov    %esp,%ebp
 874b388:	57                   	push   %edi
 874b389:	56                   	push   %esi
 874b38a:	53                   	push   %ebx
 874b38b:	8d 45 ac             	lea    -0x54(%ebp),%eax
 874b38e:	83 ec 7c             	sub    $0x7c,%esp
 874b391:	8b 75 0c             	mov    0xc(%ebp),%esi
 874b394:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 874b397:	8b 7d a4             	mov    -0x5c(%ebp),%edi
 874b39a:	31 c0                	xor    %eax,%eax
 874b39c:	e8 57 7a fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874b3a1:	81 c3 f7 17 c2 00    	add    $0xc217f7,%ebx
 874b3a7:	f3 ab                	rep stos %eax,%es:(%edi)
 874b3a9:	89 34 24             	mov    %esi,(%esp)
 874b3ac:	e8 af 2c 00 00       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 874b3b1:	89 04 24             	mov    %eax,(%esp)
 874b3b4:	e8 c7 33 00 00       	call   874e780 <_ZNK5yaSSL6Crypto10get_randomEv>
 874b3b9:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 874b3bc:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 874b3c3:	00 
 874b3c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 874b3c8:	89 04 24             	mov    %eax,(%esp)
 874b3cb:	e8 f0 db 04 00       	call   8798fc0 <_ZNK5yaSSL10RandomPool4FillEPhj>
 874b3d0:	89 34 24             	mov    %esi,(%esp)
 874b3d3:	e8 98 2c 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 874b3d8:	89 04 24             	mov    %eax,(%esp)
 874b3db:	e8 80 35 00 00       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 874b3e0:	0f b6 90 31 01 00 00 	movzbl 0x131(%eax),%edx
 874b3e7:	0f b6 80 30 01 00 00 	movzbl 0x130(%eax),%eax
 874b3ee:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 874b3f5:	00 
 874b3f6:	89 34 24             	mov    %esi,(%esp)
 874b3f9:	88 55 ad             	mov    %dl,-0x53(%ebp)
 874b3fc:	88 45 ac             	mov    %al,-0x54(%ebp)
 874b3ff:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 874b402:	89 44 24 04          	mov    %eax,0x4(%esp)
 874b406:	e8 05 53 00 00       	call   8750710 <_ZN5yaSSL3SSL13set_preMasterEPKhj>
 874b40b:	89 34 24             	mov    %esi,(%esp)
 874b40e:	e8 4d 2c 00 00       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 874b413:	89 04 24             	mov    %eax,(%esp)
 874b416:	e8 75 33 00 00       	call   874e790 <_ZNK5yaSSL6Crypto15get_certManagerEv>
 874b41b:	89 c7                	mov    %eax,%edi
 874b41d:	89 04 24             	mov    %eax,(%esp)
 874b420:	e8 9b c3 04 00       	call   87977c0 <_ZNK5yaSSL11CertManager17get_peerKeyLengthEv>
 874b425:	89 3c 24             	mov    %edi,(%esp)
 874b428:	8d 7d dc             	lea    -0x24(%ebp),%edi
 874b42b:	89 45 98             	mov    %eax,-0x68(%ebp)
 874b42e:	e8 ed c3 04 00       	call   8797820 <_ZNK5yaSSL11CertManager11get_peerKeyEv>
 874b433:	8b 55 98             	mov    -0x68(%ebp),%edx
 874b436:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 874b43d:	00 
 874b43e:	89 3c 24             	mov    %edi,(%esp)
 874b441:	89 54 24 08          	mov    %edx,0x8(%esp)
 874b445:	89 44 24 04          	mov    %eax,0x4(%esp)
 874b449:	e8 12 fe 04 00       	call   879b260 <_ZN5yaSSL3RSAC1EPKhjb>
 874b44e:	89 34 24             	mov    %esi,(%esp)
 874b451:	e8 4a 35 00 00       	call   874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>
 874b456:	89 3c 24             	mov    %edi,(%esp)
 874b459:	88 45 98             	mov    %al,-0x68(%ebp)
 874b45c:	e8 ef d9 04 00       	call   8798e50 <_ZNK5yaSSL3RSA16get_cipherLengthEv>
 874b461:	0f b6 55 98          	movzbl -0x68(%ebp),%edx
 874b465:	84 d2                	test   %dl,%dl
 874b467:	0f 84 93 00 00 00    	je     874b500 <_ZN5yaSSL24EncryptedPreMasterSecret5buildERNS_3SSLE+0x180>
 874b46d:	8b 55 08             	mov    0x8(%ebp),%edx
 874b470:	83 c0 02             	add    $0x2,%eax
 874b473:	89 44 24 04          	mov    %eax,0x4(%esp)
 874b477:	89 14 24             	mov    %edx,(%esp)
 874b47a:	e8 51 bf ff ff       	call   87473d0 <_ZN5yaSSL24EncryptedPreMasterSecret5allocEi>
 874b47f:	8b 45 08             	mov    0x8(%ebp),%eax
 874b482:	8b 40 04             	mov    0x4(%eax),%eax
 874b485:	89 3c 24             	mov    %edi,(%esp)
 874b488:	89 45 9c             	mov    %eax,-0x64(%ebp)
 874b48b:	e8 c0 d9 04 00       	call   8798e50 <_ZNK5yaSSL3RSA16get_cipherLengthEv>
 874b490:	8d 55 e6             	lea    -0x1a(%ebp),%edx
 874b493:	89 54 24 04          	mov    %edx,0x4(%esp)
 874b497:	0f b7 c0             	movzwl %ax,%eax
 874b49a:	89 04 24             	mov    %eax,(%esp)
 874b49d:	e8 2e 29 00 00       	call   874ddd0 <_ZN5yaSSL6c16toaEtPh>
 874b4a2:	8b 55 08             	mov    0x8(%ebp),%edx
 874b4a5:	8b 42 04             	mov    0x4(%edx),%eax
 874b4a8:	0f b7 55 e6          	movzwl -0x1a(%ebp),%edx
 874b4ac:	66 89 10             	mov    %dx,(%eax)
 874b4af:	8b 45 9c             	mov    -0x64(%ebp),%eax
 874b4b2:	83 c0 02             	add    $0x2,%eax
 874b4b5:	89 45 a0             	mov    %eax,-0x60(%ebp)
 874b4b8:	89 34 24             	mov    %esi,(%esp)
 874b4bb:	e8 a0 2b 00 00       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 874b4c0:	89 04 24             	mov    %eax,(%esp)
 874b4c3:	e8 b8 32 00 00       	call   874e780 <_ZNK5yaSSL6Crypto10get_randomEv>
 874b4c8:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 874b4cb:	89 3c 24             	mov    %edi,(%esp)
 874b4ce:	c7 44 24 0c 30 00 00 	movl   $0x30,0xc(%esp)
 874b4d5:	00 
 874b4d6:	89 54 24 08          	mov    %edx,0x8(%esp)
 874b4da:	89 44 24 10          	mov    %eax,0x10(%esp)
 874b4de:	8b 45 a0             	mov    -0x60(%ebp),%eax
 874b4e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 874b4e5:	e8 76 f6 04 00       	call   879ab60 <_ZN5yaSSL3RSA7encryptEPhPKhjRKNS_10RandomPoolE>
 874b4ea:	89 3c 24             	mov    %edi,(%esp)
 874b4ed:	e8 8e fe 04 00       	call   879b380 <_ZN5yaSSL3RSAD1Ev>
 874b4f2:	83 c4 7c             	add    $0x7c,%esp
 874b4f5:	5b                   	pop    %ebx
 874b4f6:	5e                   	pop    %esi
 874b4f7:	5f                   	pop    %edi
 874b4f8:	5d                   	pop    %ebp
 874b4f9:	c3                   	ret
 874b4fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874b500:	8b 55 08             	mov    0x8(%ebp),%edx
 874b503:	89 44 24 04          	mov    %eax,0x4(%esp)
 874b507:	89 14 24             	mov    %edx,(%esp)
 874b50a:	e8 c1 be ff ff       	call   87473d0 <_ZN5yaSSL24EncryptedPreMasterSecret5allocEi>
 874b50f:	8b 45 08             	mov    0x8(%ebp),%eax
 874b512:	8b 40 04             	mov    0x4(%eax),%eax
 874b515:	89 45 a0             	mov    %eax,-0x60(%ebp)
 874b518:	eb 9e                	jmp    874b4b8 <_ZN5yaSSL24EncryptedPreMasterSecret5buildERNS_3SSLE+0x138>
 874b51a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::EncryptedPreMasterSecret::build @ 0x874b380

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::EncryptedPreMasterSecret::build(yaSSL::SSL&) */

void __thiscall yaSSL::EncryptedPreMasterSecret::build(EncryptedPreMasterSecret *this,SSL *param_1)

{
  char cVar1;
  ushort uVar2;
  Crypto *pCVar3;
  RandomPool *pRVar4;
  Security *this_00;
  CertManager *this_01;
  uint uVar5;
  uchar *puVar6;
  int iVar7;
  uchar *local_64;
  uchar local_58;
  undefined1 local_57;
  RSA local_28 [10];
  undefined2 local_1e [7];
  
  puVar6 = &local_58;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    puVar6 = puVar6 + 4;
  }
  pCVar3 = (Crypto *)SSL::getCrypto(param_1);
  pRVar4 = (RandomPool *)Crypto::get_random(pCVar3);
  RandomPool::Fill(pRVar4,&local_58,0x30);
  this_00 = (Security *)SSL::getSecurity(param_1);
  iVar7 = Security::get_connection(this_00);
  local_57 = *(undefined1 *)(iVar7 + 0x131);
  local_58 = *(uchar *)(iVar7 + 0x130);
  SSL::set_preMaster(param_1,&local_58,0x30);
  pCVar3 = (Crypto *)SSL::getCrypto(param_1);
  this_01 = (CertManager *)Crypto::get_certManager(pCVar3);
  uVar5 = CertManager::get_peerKeyLength(this_01);
  puVar6 = (uchar *)CertManager::get_peerKey(this_01);
  RSA::RSA(local_28,puVar6,uVar5,true);
  cVar1 = SSL::isTLS(param_1);
  iVar7 = RSA::get_cipherLength(local_28);
  if (cVar1 == '\0') {
    alloc(this,iVar7);
    local_64 = *(uchar **)(this + 4);
  }
  else {
    alloc(this,iVar7 + 2);
    iVar7 = *(int *)(this + 4);
    uVar2 = RSA::get_cipherLength(local_28);
    c16toa(uVar2,(uchar *)local_1e);
    **(undefined2 **)(this + 4) = local_1e[0];
    local_64 = (uchar *)(iVar7 + 2);
  }
  pCVar3 = (Crypto *)SSL::getCrypto(param_1);
  pRVar4 = (RandomPool *)Crypto::get_random(pCVar3);
  RSA::encrypt(local_28,local_64,&local_58,0x30,pRVar4);
  RSA::~RSA(local_28);
  return;
}

```

---

## get_clientKey

```asm
// === 087469b0 yaSSL::EncryptedPreMasterSecret::get_clientKey  [0x087469b0-0x87469bf] ===
 87469b0:	55                   	push   %ebp
 87469b1:	89 e5                	mov    %esp,%ebp
 87469b3:	8b 45 08             	mov    0x8(%ebp),%eax
 87469b6:	5d                   	pop    %ebp
 87469b7:	8b 40 04             	mov    0x4(%eax),%eax
 87469ba:	c3                   	ret
 87469bb:	90                   	nop
 87469bc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::EncryptedPreMasterSecret::get_clientKey @ 0x87469b0

/* yaSSL::EncryptedPreMasterSecret::get_clientKey() const */

undefined4 __thiscall yaSSL::EncryptedPreMasterSecret::get_clientKey(EncryptedPreMasterSecret *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## get_length

```asm
// === 087469a0 yaSSL::EncryptedPreMasterSecret::get_length  [0x087469a0-0x87469af] ===
 87469a0:	55                   	push   %ebp
 87469a1:	89 e5                	mov    %esp,%ebp
 87469a3:	8b 45 08             	mov    0x8(%ebp),%eax
 87469a6:	5d                   	pop    %ebp
 87469a7:	8b 40 08             	mov    0x8(%eax),%eax
 87469aa:	c3                   	ret
 87469ab:	90                   	nop
 87469ac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::EncryptedPreMasterSecret::get_length @ 0x87469a0

/* yaSSL::EncryptedPreMasterSecret::get_length() const */

undefined4 __thiscall yaSSL::EncryptedPreMasterSecret::get_length(EncryptedPreMasterSecret *this)

{
  return *(undefined4 *)(this + 8);
}

```

---

## read

```asm
// === 0874b0d0 yaSSL::EncryptedPreMasterSecret::read  [0x0874b0d0-0x874b25f] ===
 874b0d0:	55                   	push   %ebp
 874b0d1:	89 e5                	mov    %esp,%ebp
 874b0d3:	57                   	push   %edi
 874b0d4:	56                   	push   %esi
 874b0d5:	53                   	push   %ebx
 874b0d6:	e8 1d 7d fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874b0db:	81 c3 bd 1a c2 00    	add    $0xc21abd,%ebx
 874b0e1:	83 ec 7c             	sub    $0x7c,%esp
 874b0e4:	8b 75 0c             	mov    0xc(%ebp),%esi
 874b0e7:	8b 7d 08             	mov    0x8(%ebp),%edi
 874b0ea:	89 34 24             	mov    %esi,(%esp)
 874b0ed:	e8 6e 2f 00 00       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 874b0f2:	89 04 24             	mov    %eax,(%esp)
 874b0f5:	e8 96 36 00 00       	call   874e790 <_ZNK5yaSSL6Crypto15get_certManagerEv>
 874b0fa:	89 04 24             	mov    %eax,(%esp)
 874b0fd:	89 45 a0             	mov    %eax,-0x60(%ebp)
 874b100:	e8 8b c6 04 00       	call   8797790 <_ZNK5yaSSL11CertManager20get_privateKeyLengthEv>
 874b105:	8b 55 a0             	mov    -0x60(%ebp),%edx
 874b108:	89 14 24             	mov    %edx,(%esp)
 874b10b:	89 45 a0             	mov    %eax,-0x60(%ebp)
 874b10e:	e8 dd c6 04 00       	call   87977f0 <_ZNK5yaSSL11CertManager14get_privateKeyEv>
 874b113:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 874b116:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 874b11d:	00 
 874b11e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 874b122:	89 44 24 04          	mov    %eax,0x4(%esp)
 874b126:	8d 45 dc             	lea    -0x24(%ebp),%eax
 874b129:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 874b12c:	89 04 24             	mov    %eax,(%esp)
 874b12f:	e8 2c 01 05 00       	call   879b260 <_ZN5yaSSL3RSAC1EPKhjb>
 874b134:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 874b137:	89 14 24             	mov    %edx,(%esp)
 874b13a:	e8 11 dd 04 00       	call   8798e50 <_ZNK5yaSSL3RSA16get_cipherLengthEv>
 874b13f:	89 34 24             	mov    %esi,(%esp)
 874b142:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 874b146:	e8 55 38 00 00       	call   874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>
 874b14b:	84 c0                	test   %al,%al
 874b14d:	0f 85 cd 00 00 00    	jne    874b220 <_ZN5yaSSL24EncryptedPreMasterSecret4readERNS_3SSLERNS_12input_bufferE+0x150>
 874b153:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 874b157:	89 3c 24             	mov    %edi,(%esp)
 874b15a:	89 44 24 04          	mov    %eax,0x4(%esp)
 874b15e:	e8 6d c2 ff ff       	call   87473d0 <_ZN5yaSSL24EncryptedPreMasterSecret5allocEi>
 874b163:	8b 47 08             	mov    0x8(%edi),%eax
 874b166:	89 44 24 08          	mov    %eax,0x8(%esp)
 874b16a:	8b 47 04             	mov    0x4(%edi),%eax
 874b16d:	89 44 24 04          	mov    %eax,0x4(%esp)
 874b171:	8b 45 10             	mov    0x10(%ebp),%eax
 874b174:	89 04 24             	mov    %eax,(%esp)
 874b177:	e8 c4 be 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 874b17c:	89 34 24             	mov    %esi,(%esp)
 874b17f:	e8 dc 2e 00 00       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 874b184:	89 04 24             	mov    %eax,(%esp)
 874b187:	e8 f4 35 00 00       	call   874e780 <_ZNK5yaSSL6Crypto10get_randomEv>
 874b18c:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 874b18f:	89 44 24 10          	mov    %eax,0x10(%esp)
 874b193:	8b 47 08             	mov    0x8(%edi),%eax
 874b196:	89 44 24 0c          	mov    %eax,0xc(%esp)
 874b19a:	8b 47 04             	mov    0x4(%edi),%eax
 874b19d:	8d 7d ac             	lea    -0x54(%ebp),%edi
 874b1a0:	89 14 24             	mov    %edx,(%esp)
 874b1a3:	89 7c 24 04          	mov    %edi,0x4(%esp)
 874b1a7:	89 44 24 08          	mov    %eax,0x8(%esp)
 874b1ab:	e8 b0 0a 05 00       	call   879bc60 <_ZN5yaSSL3RSA7decryptEPhPKhjRKNS_10RandomPoolE>
 874b1b0:	89 34 24             	mov    %esi,(%esp)
 874b1b3:	e8 b8 2e 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 874b1b8:	89 04 24             	mov    %eax,(%esp)
 874b1bb:	e8 a0 37 00 00       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 874b1c0:	0f b6 4d ac          	movzbl -0x54(%ebp),%ecx
 874b1c4:	3a 88 30 01 00 00    	cmp    0x130(%eax),%cl
 874b1ca:	0f b6 90 31 01 00 00 	movzbl 0x131(%eax),%edx
 874b1d1:	74 45                	je     874b218 <_ZN5yaSSL24EncryptedPreMasterSecret4readERNS_3SSLERNS_12input_bufferE+0x148>
 874b1d3:	c7 44 24 04 78 00 00 	movl   $0x78,0x4(%esp)
 874b1da:	00 
 874b1db:	89 34 24             	mov    %esi,(%esp)
 874b1de:	e8 ed 2d 00 00       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 874b1e3:	89 7c 24 04          	mov    %edi,0x4(%esp)
 874b1e7:	89 34 24             	mov    %esi,(%esp)
 874b1ea:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 874b1f1:	00 
 874b1f2:	e8 19 55 00 00       	call   8750710 <_ZN5yaSSL3SSL13set_preMasterEPKhj>
 874b1f7:	89 34 24             	mov    %esi,(%esp)
 874b1fa:	e8 c1 4f 00 00       	call   87501c0 <_ZN5yaSSL3SSL16makeMasterSecretEv>
 874b1ff:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 874b202:	89 04 24             	mov    %eax,(%esp)
 874b205:	e8 76 01 05 00       	call   879b380 <_ZN5yaSSL3RSAD1Ev>
 874b20a:	83 c4 7c             	add    $0x7c,%esp
 874b20d:	5b                   	pop    %ebx
 874b20e:	5e                   	pop    %esi
 874b20f:	5f                   	pop    %edi
 874b210:	5d                   	pop    %ebp
 874b211:	c3                   	ret
 874b212:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874b218:	38 55 ad             	cmp    %dl,-0x53(%ebp)
 874b21b:	75 b6                	jne    874b1d3 <_ZN5yaSSL24EncryptedPreMasterSecret4readERNS_3SSLERNS_12input_bufferE+0x103>
 874b21d:	eb c4                	jmp    874b1e3 <_ZN5yaSSL24EncryptedPreMasterSecret4readERNS_3SSLERNS_12input_bufferE+0x113>
 874b21f:	90                   	nop
 874b220:	8b 55 10             	mov    0x10(%ebp),%edx
 874b223:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 874b226:	89 44 24 04          	mov    %eax,0x4(%esp)
 874b22a:	89 45 a0             	mov    %eax,-0x60(%ebp)
 874b22d:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 874b234:	00 
 874b235:	89 14 24             	mov    %edx,(%esp)
 874b238:	e8 03 be 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 874b23d:	8b 45 a0             	mov    -0x60(%ebp),%eax
 874b240:	8d 55 e6             	lea    -0x1a(%ebp),%edx
 874b243:	89 54 24 04          	mov    %edx,0x4(%esp)
 874b247:	89 04 24             	mov    %eax,(%esp)
 874b24a:	e8 41 2b 00 00       	call   874dd90 <_ZN5yaSSL5ato16EPKhRt>
 874b24f:	e9 ff fe ff ff       	jmp    874b153 <_ZN5yaSSL24EncryptedPreMasterSecret4readERNS_3SSLERNS_12input_bufferE+0x83>
 874b254:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874b25a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::EncryptedPreMasterSecret::read @ 0x874b0d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::EncryptedPreMasterSecret::read(yaSSL::SSL&, yaSSL::input_buffer&) */

void __thiscall
yaSSL::EncryptedPreMasterSecret::read
          (EncryptedPreMasterSecret *this,SSL *param_1,input_buffer *param_2)

{
  char cVar1;
  Crypto *pCVar2;
  CertManager *this_00;
  uint uVar3;
  uchar *puVar4;
  RandomPool *pRVar5;
  Security *this_01;
  int iVar6;
  uchar local_58;
  char local_57;
  RSA local_28 [8];
  uchar local_20 [2];
  ushort local_1e [5];
  undefined4 uStack_14;
  
  uStack_14 = 0x874b0db;
  pCVar2 = (Crypto *)SSL::getCrypto(param_1);
  this_00 = (CertManager *)Crypto::get_certManager(pCVar2);
  uVar3 = CertManager::get_privateKeyLength(this_00);
  puVar4 = (uchar *)CertManager::get_privateKey(this_00);
  RSA::RSA(local_28,puVar4,uVar3,false);
  local_1e[0] = RSA::get_cipherLength(local_28);
  cVar1 = SSL::isTLS(param_1);
  if (cVar1 != '\0') {
    input_buffer::read(param_2,local_20,2);
    ato16(local_20,local_1e);
  }
  alloc(this,(uint)local_1e[0]);
  input_buffer::read(param_2,*(uchar **)(this + 4),*(uint *)(this + 8));
  pCVar2 = (Crypto *)SSL::getCrypto(param_1);
  pRVar5 = (RandomPool *)Crypto::get_random(pCVar2);
  RSA::decrypt(local_28,&local_58,*(uchar **)(this + 4),*(uint *)(this + 8),pRVar5);
  this_01 = (Security *)SSL::getSecurity(param_1);
  iVar6 = Security::get_connection(this_01);
  if ((local_58 != *(uchar *)(iVar6 + 0x130)) || (local_57 != *(char *)(iVar6 + 0x131))) {
    SSL::SetError(param_1,0x78);
  }
  SSL::set_preMaster(param_1,&local_58,0x30);
  SSL::makeMasterSecret(param_1);
  RSA::~RSA(local_28);
  return;
}

```

---

## ~EncryptedPreMasterSecret

```asm
// === 0874bac0 yaSSL::EncryptedPreMasterSecret::~EncryptedPreMasterSecret  [0x0874bac0-0x874bb0f] ===
 874bac0:	55                   	push   %ebp
 874bac1:	89 e5                	mov    %esp,%ebp
 874bac3:	83 ec 18             	sub    $0x18,%esp
 874bac6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 874bac9:	e8 2a 73 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874bace:	81 c3 ca 10 c2 00    	add    $0xc210ca,%ebx
 874bad4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874bad7:	8b 75 08             	mov    0x8(%ebp),%esi
 874bada:	8b 83 e4 ff ff ff    	mov    -0x1c(%ebx),%eax
 874bae0:	83 c0 08             	add    $0x8,%eax
 874bae3:	89 06                	mov    %eax,(%esi)
 874bae5:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874baea:	8b 46 04             	mov    0x4(%esi),%eax
 874baed:	89 04 24             	mov    %eax,(%esp)
 874baf0:	e8 fb 4d 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874baf5:	8b 83 e8 ff ff ff    	mov    -0x18(%ebx),%eax
 874bafb:	83 c0 08             	add    $0x8,%eax
 874bafe:	89 06                	mov    %eax,(%esi)
 874bb00:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 874bb03:	8b 75 fc             	mov    -0x4(%ebp),%esi
 874bb06:	89 ec                	mov    %ebp,%esp
 874bb08:	5d                   	pop    %ebp
 874bb09:	c3                   	ret
 874bb0a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::EncryptedPreMasterSecret::~EncryptedPreMasterSecret @ 0x874bac0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::EncryptedPreMasterSecret::~EncryptedPreMasterSecret() */

void __thiscall
yaSSL::EncryptedPreMasterSecret::~EncryptedPreMasterSecret(EncryptedPreMasterSecret *this)

{
  *(undefined **)this = PTR_vtable_0936cb7c + 8;
  operator_delete__(*(undefined4 *)(this + 4),0);
  *(undefined **)this = PTR_vtable_0936cb80 + 8;
  return;
}

```

---

## ~EncryptedPreMasterSecret_0874bb10

```asm
// === 0874bb10 yaSSL::EncryptedPreMasterSecret::~EncryptedPreMasterSecret  [0x0874bb10-0x874bb3f] ===
 874bb10:	55                   	push   %ebp
 874bb11:	89 e5                	mov    %esp,%ebp
 874bb13:	53                   	push   %ebx
 874bb14:	e8 df 72 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874bb19:	81 c3 7f 10 c2 00    	add    $0xc2107f,%ebx
 874bb1f:	83 ec 14             	sub    $0x14,%esp
 874bb22:	8b 45 08             	mov    0x8(%ebp),%eax
 874bb25:	89 04 24             	mov    %eax,(%esp)
 874bb28:	e8 93 ff ff ff       	call   874bac0 <_ZN5yaSSL24EncryptedPreMasterSecretD1Ev>
 874bb2d:	83 c4 14             	add    $0x14,%esp
 874bb30:	5b                   	pop    %ebx
 874bb31:	5d                   	pop    %ebp
 874bb32:	c3                   	ret
 874bb33:	90                   	nop
 874bb34:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874bb3a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::EncryptedPreMasterSecret::~EncryptedPreMasterSecret @ 0x874bb10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::EncryptedPreMasterSecret::~EncryptedPreMasterSecret() */

void __thiscall
yaSSL::EncryptedPreMasterSecret::~EncryptedPreMasterSecret(EncryptedPreMasterSecret *this)

{
  ~EncryptedPreMasterSecret(this);
  return;
}

```

