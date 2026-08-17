# yaSSL__ClientDiffieHellmanPublic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## ClientDiffieHellmanPublic

```asm
// === 087469c0 yaSSL::ClientDiffieHellmanPublic::ClientDiffieHellmanPublic  [0x087469c0-0x87469ef] ===
 87469c0:	e8 ff db fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87469c5:	81 c1 d3 61 c2 00    	add    $0xc261d3,%ecx
 87469cb:	55                   	push   %ebp
 87469cc:	89 e5                	mov    %esp,%ebp
 87469ce:	8b 45 08             	mov    0x8(%ebp),%eax
 87469d1:	8b 91 24 fb ff ff    	mov    -0x4dc(%ecx),%edx
 87469d7:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 87469de:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87469e5:	83 c2 08             	add    $0x8,%edx
 87469e8:	89 10                	mov    %edx,(%eax)
 87469ea:	5d                   	pop    %ebp
 87469eb:	c3                   	ret
 87469ec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::ClientDiffieHellmanPublic::ClientDiffieHellmanPublic @ 0x87469c0

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::ClientDiffieHellmanPublic::ClientDiffieHellmanPublic() */

void __thiscall
yaSSL::ClientDiffieHellmanPublic::ClientDiffieHellmanPublic(ClientDiffieHellmanPublic *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0936c6bc;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined **)this = puVar1 + 8;
  return;
}

```

---

## alloc

```asm
// === 08747380 yaSSL::ClientDiffieHellmanPublic::alloc  [0x08747380-0x87473cf] ===
 8747380:	55                   	push   %ebp
 8747381:	89 e5                	mov    %esp,%ebp
 8747383:	83 ec 18             	sub    $0x18,%esp
 8747386:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8747389:	e8 6a ba fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874738e:	81 c3 0a 58 c2 00    	add    $0xc2580a,%ebx
 8747394:	80 7d 10 01          	cmpb   $0x1,0x10(%ebp)
 8747398:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874739b:	8b 75 08             	mov    0x8(%ebp),%esi
 874739e:	19 c0                	sbb    %eax,%eax
 87473a0:	f7 d0                	not    %eax
 87473a2:	83 e0 02             	and    $0x2,%eax
 87473a5:	03 45 0c             	add    0xc(%ebp),%eax
 87473a8:	89 46 08             	mov    %eax,0x8(%esi)
 87473ab:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87473b0:	8b 46 08             	mov    0x8(%esi),%eax
 87473b3:	89 04 24             	mov    %eax,(%esp)
 87473b6:	e8 95 af 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 87473bb:	89 46 0c             	mov    %eax,0xc(%esi)
 87473be:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87473c1:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87473c4:	89 ec                	mov    %ebp,%esp
 87473c6:	5d                   	pop    %ebp
 87473c7:	c3                   	ret
 87473c8:	90                   	nop
 87473c9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::ClientDiffieHellmanPublic::alloc @ 0x8747380

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientDiffieHellmanPublic::alloc(int, bool) */

void __thiscall
yaSSL::ClientDiffieHellmanPublic::alloc(ClientDiffieHellmanPublic *this,int param_1,bool param_2)

{
  void *pvVar1;
  
  *(uint *)(this + 8) = (~-(uint)!param_2 & 2) + param_1;
  pvVar1 = operator_new__(*(undefined4 *)(this + 8),0);
  *(void **)(this + 0xc) = pvVar1;
  return;
}

```

---

## build

```asm
// === 0874b260 yaSSL::ClientDiffieHellmanPublic::build  [0x0874b260-0x874b37f] ===
 874b260:	55                   	push   %ebp
 874b261:	89 e5                	mov    %esp,%ebp
 874b263:	57                   	push   %edi
 874b264:	56                   	push   %esi
 874b265:	53                   	push   %ebx
 874b266:	e8 8d 7b fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874b26b:	81 c3 2d 19 c2 00    	add    $0xc2192d,%ebx
 874b271:	83 ec 3c             	sub    $0x3c,%esp
 874b274:	8b 45 0c             	mov    0xc(%ebp),%eax
 874b277:	8d 75 e4             	lea    -0x1c(%ebp),%esi
 874b27a:	89 04 24             	mov    %eax,(%esp)
 874b27d:	e8 2e 30 00 00       	call   874e2b0 <_ZN5yaSSL3SSL9useCryptoEv>
 874b282:	89 04 24             	mov    %eax,(%esp)
 874b285:	e8 36 35 00 00       	call   874e7c0 <_ZN5yaSSL6Crypto6use_dhEv>
 874b28a:	89 34 24             	mov    %esi,(%esp)
 874b28d:	89 44 24 04          	mov    %eax,0x4(%esp)
 874b291:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 874b294:	e8 47 f1 04 00       	call   879a3e0 <_ZN5yaSSL13DiffieHellmanC1ERKS0_>
 874b299:	89 34 24             	mov    %esi,(%esp)
 874b29c:	e8 7f db 04 00       	call   8798e20 <_ZNK5yaSSL13DiffieHellman19get_agreedKeyLengthEv>
 874b2a1:	8b 4d 08             	mov    0x8(%ebp),%ecx
 874b2a4:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 874b2ab:	00 
 874b2ac:	89 0c 24             	mov    %ecx,(%esp)
 874b2af:	89 c7                	mov    %eax,%edi
 874b2b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 874b2b5:	e8 c6 c0 ff ff       	call   8747380 <_ZN5yaSSL25ClientDiffieHellmanPublic5allocEib>
 874b2ba:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 874b2bd:	89 14 24             	mov    %edx,(%esp)
 874b2c0:	e8 0b d3 04 00       	call   87985d0 <_ZNK5yaSSL13DiffieHellman13get_publicKeyEv>
 874b2c5:	89 7c 24 08          	mov    %edi,0x8(%esp)
 874b2c9:	89 34 24             	mov    %esi,(%esp)
 874b2cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 874b2d0:	e8 db db 04 00       	call   8798eb0 <_ZN5yaSSL13DiffieHellman13makeAgreementEPKhj>
 874b2d5:	8b 55 08             	mov    0x8(%ebp),%edx
 874b2d8:	8b 42 0c             	mov    0xc(%edx),%eax
 874b2db:	89 44 24 04          	mov    %eax,0x4(%esp)
 874b2df:	0f b7 c7             	movzwl %di,%eax
 874b2e2:	89 04 24             	mov    %eax,(%esp)
 874b2e5:	e8 e6 2a 00 00       	call   874ddd0 <_ZN5yaSSL6c16toaEtPh>
 874b2ea:	89 34 24             	mov    %esi,(%esp)
 874b2ed:	e8 de d2 04 00       	call   87985d0 <_ZNK5yaSSL13DiffieHellman13get_publicKeyEv>
 874b2f2:	8b 4d 08             	mov    0x8(%ebp),%ecx
 874b2f5:	8b 51 0c             	mov    0xc(%ecx),%edx
 874b2f8:	89 7c 24 08          	mov    %edi,0x8(%esp)
 874b2fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 874b300:	83 c2 02             	add    $0x2,%edx
 874b303:	89 14 24             	mov    %edx,(%esp)
 874b306:	e8 95 25 93 ff       	call   807d8a0 <memcpy@plt>
 874b30b:	89 34 24             	mov    %esi,(%esp)
 874b30e:	e8 ad d2 04 00       	call   87985c0 <_ZNK5yaSSL13DiffieHellman13get_agreedKeyEv>
 874b313:	80 38 00             	cmpb   $0x0,(%eax)
 874b316:	74 30                	je     874b348 <_ZN5yaSSL25ClientDiffieHellmanPublic5buildERNS_3SSLE+0xe8>
 874b318:	89 34 24             	mov    %esi,(%esp)
 874b31b:	e8 a0 d2 04 00       	call   87985c0 <_ZNK5yaSSL13DiffieHellman13get_agreedKeyEv>
 874b320:	8b 55 0c             	mov    0xc(%ebp),%edx
 874b323:	89 7c 24 08          	mov    %edi,0x8(%esp)
 874b327:	89 14 24             	mov    %edx,(%esp)
 874b32a:	89 44 24 04          	mov    %eax,0x4(%esp)
 874b32e:	e8 dd 53 00 00       	call   8750710 <_ZN5yaSSL3SSL13set_preMasterEPKhj>
 874b333:	89 34 24             	mov    %esi,(%esp)
 874b336:	e8 b5 fb 04 00       	call   879aef0 <_ZN5yaSSL13DiffieHellmanD1Ev>
 874b33b:	83 c4 3c             	add    $0x3c,%esp
 874b33e:	5b                   	pop    %ebx
 874b33f:	5e                   	pop    %esi
 874b340:	5f                   	pop    %edi
 874b341:	5d                   	pop    %ebp
 874b342:	c3                   	ret
 874b343:	90                   	nop
 874b344:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874b348:	89 34 24             	mov    %esi,(%esp)
 874b34b:	83 ef 01             	sub    $0x1,%edi
 874b34e:	e8 6d d2 04 00       	call   87985c0 <_ZNK5yaSSL13DiffieHellman13get_agreedKeyEv>
 874b353:	89 7c 24 08          	mov    %edi,0x8(%esp)
 874b357:	83 c0 01             	add    $0x1,%eax
 874b35a:	89 44 24 04          	mov    %eax,0x4(%esp)
 874b35e:	8b 45 0c             	mov    0xc(%ebp),%eax
 874b361:	89 04 24             	mov    %eax,(%esp)
 874b364:	e8 a7 53 00 00       	call   8750710 <_ZN5yaSSL3SSL13set_preMasterEPKhj>
 874b369:	89 34 24             	mov    %esi,(%esp)
 874b36c:	e8 7f fb 04 00       	call   879aef0 <_ZN5yaSSL13DiffieHellmanD1Ev>
 874b371:	83 c4 3c             	add    $0x3c,%esp
 874b374:	5b                   	pop    %ebx
 874b375:	5e                   	pop    %esi
 874b376:	5f                   	pop    %edi
 874b377:	5d                   	pop    %ebp
 874b378:	c3                   	ret
 874b379:	90                   	nop
 874b37a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ClientDiffieHellmanPublic::build @ 0x874b260

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientDiffieHellmanPublic::build(yaSSL::SSL&) */

void __thiscall
yaSSL::ClientDiffieHellmanPublic::build(ClientDiffieHellmanPublic *this,SSL *param_1)

{
  Crypto *this_00;
  DiffieHellman *this_01;
  uint __n;
  uchar *puVar1;
  void *__src;
  char *pcVar2;
  int iVar3;
  DiffieHellman local_20 [12];
  undefined4 uStack_14;
  
  uStack_14 = 0x874b26b;
  this_00 = (Crypto *)SSL::useCrypto(param_1);
  this_01 = (DiffieHellman *)Crypto::use_dh(this_00);
  DiffieHellman::DiffieHellman(local_20,this_01);
  __n = DiffieHellman::get_agreedKeyLength(local_20);
  alloc(this,__n,true);
  puVar1 = (uchar *)DiffieHellman::get_publicKey(this_01);
  DiffieHellman::makeAgreement(local_20,puVar1,__n);
  c16toa((ushort)__n,*(uchar **)(this + 0xc));
  __src = (void *)DiffieHellman::get_publicKey(local_20);
  memcpy((void *)(*(int *)(this + 0xc) + 2),__src,__n);
  pcVar2 = (char *)DiffieHellman::get_agreedKey(local_20);
  if (*pcVar2 != '\0') {
    puVar1 = (uchar *)DiffieHellman::get_agreedKey(local_20);
    SSL::set_preMaster(param_1,puVar1,__n);
    DiffieHellman::~DiffieHellman(local_20);
    return;
  }
  iVar3 = DiffieHellman::get_agreedKey(local_20);
  SSL::set_preMaster(param_1,(uchar *)(iVar3 + 1),__n - 1);
  DiffieHellman::~DiffieHellman(local_20);
  return;
}

```

---

## get_clientKey

```asm
// === 08746a00 yaSSL::ClientDiffieHellmanPublic::get_clientKey  [0x08746a00-0x8746a0f] ===
 8746a00:	55                   	push   %ebp
 8746a01:	89 e5                	mov    %esp,%ebp
 8746a03:	8b 45 08             	mov    0x8(%ebp),%eax
 8746a06:	5d                   	pop    %ebp
 8746a07:	8b 40 0c             	mov    0xc(%eax),%eax
 8746a0a:	c3                   	ret
 8746a0b:	90                   	nop
 8746a0c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::ClientDiffieHellmanPublic::get_clientKey @ 0x8746a00

/* yaSSL::ClientDiffieHellmanPublic::get_clientKey() const */

undefined4 __thiscall
yaSSL::ClientDiffieHellmanPublic::get_clientKey(ClientDiffieHellmanPublic *this)

{
  return *(undefined4 *)(this + 0xc);
}

```

---

## get_length

```asm
// === 087469f0 yaSSL::ClientDiffieHellmanPublic::get_length  [0x087469f0-0x87469ff] ===
 87469f0:	55                   	push   %ebp
 87469f1:	89 e5                	mov    %esp,%ebp
 87469f3:	8b 45 08             	mov    0x8(%ebp),%eax
 87469f6:	5d                   	pop    %ebp
 87469f7:	8b 40 08             	mov    0x8(%eax),%eax
 87469fa:	c3                   	ret
 87469fb:	90                   	nop
 87469fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::ClientDiffieHellmanPublic::get_length @ 0x87469f0

/* yaSSL::ClientDiffieHellmanPublic::get_length() const */

undefined4 __thiscall yaSSL::ClientDiffieHellmanPublic::get_length(ClientDiffieHellmanPublic *this)

{
  return *(undefined4 *)(this + 8);
}

```

---

## read

```asm
// === 0874afa0 yaSSL::ClientDiffieHellmanPublic::read  [0x0874afa0-0x874b0cf] ===
 874afa0:	55                   	push   %ebp
 874afa1:	89 e5                	mov    %esp,%ebp
 874afa3:	57                   	push   %edi
 874afa4:	56                   	push   %esi
 874afa5:	53                   	push   %ebx
 874afa6:	e8 4d 7e fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874afab:	81 c3 ed 1b c2 00    	add    $0xc21bed,%ebx
 874afb1:	83 ec 2c             	sub    $0x2c,%esp
 874afb4:	8b 45 0c             	mov    0xc(%ebp),%eax
 874afb7:	8b 7d 08             	mov    0x8(%ebp),%edi
 874afba:	89 04 24             	mov    %eax,(%esp)
 874afbd:	e8 ee 32 00 00       	call   874e2b0 <_ZN5yaSSL3SSL9useCryptoEv>
 874afc2:	89 04 24             	mov    %eax,(%esp)
 874afc5:	e8 f6 37 00 00       	call   874e7c0 <_ZN5yaSSL6Crypto6use_dhEv>
 874afca:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 874afd1:	fe 
 874afd2:	89 c6                	mov    %eax,%esi
 874afd4:	8b 45 10             	mov    0x10(%ebp),%eax
 874afd7:	89 04 24             	mov    %eax,(%esp)
 874afda:	e8 41 be 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 874afdf:	0f b6 00             	movzbl (%eax),%eax
 874afe2:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 874afe9:	fe 
 874afea:	88 45 e4             	mov    %al,-0x1c(%ebp)
 874afed:	8b 45 10             	mov    0x10(%ebp),%eax
 874aff0:	89 04 24             	mov    %eax,(%esp)
 874aff3:	e8 28 be 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 874aff8:	0f b6 00             	movzbl (%eax),%eax
 874affb:	88 45 e5             	mov    %al,-0x1b(%ebp)
 874affe:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 874b001:	89 44 24 04          	mov    %eax,0x4(%esp)
 874b005:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 874b008:	89 04 24             	mov    %eax,(%esp)
 874b00b:	e8 80 2d 00 00       	call   874dd90 <_ZN5yaSSL5ato16EPKhRt>
 874b010:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 874b014:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 874b01b:	00 
 874b01c:	89 3c 24             	mov    %edi,(%esp)
 874b01f:	89 44 24 04          	mov    %eax,0x4(%esp)
 874b023:	e8 58 c3 ff ff       	call   8747380 <_ZN5yaSSL25ClientDiffieHellmanPublic5allocEib>
 874b028:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 874b02c:	89 44 24 08          	mov    %eax,0x8(%esp)
 874b030:	8b 47 0c             	mov    0xc(%edi),%eax
 874b033:	89 44 24 04          	mov    %eax,0x4(%esp)
 874b037:	8b 45 10             	mov    0x10(%ebp),%eax
 874b03a:	89 04 24             	mov    %eax,(%esp)
 874b03d:	e8 fe bf 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 874b042:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 874b046:	89 44 24 08          	mov    %eax,0x8(%esp)
 874b04a:	8b 47 0c             	mov    0xc(%edi),%eax
 874b04d:	89 34 24             	mov    %esi,(%esp)
 874b050:	89 44 24 04          	mov    %eax,0x4(%esp)
 874b054:	e8 57 de 04 00       	call   8798eb0 <_ZN5yaSSL13DiffieHellman13makeAgreementEPKhj>
 874b059:	89 34 24             	mov    %esi,(%esp)
 874b05c:	e8 5f d5 04 00       	call   87985c0 <_ZNK5yaSSL13DiffieHellman13get_agreedKeyEv>
 874b061:	80 38 00             	cmpb   $0x0,(%eax)
 874b064:	74 3a                	je     874b0a0 <_ZN5yaSSL25ClientDiffieHellmanPublic4readERNS_3SSLERNS_12input_bufferE+0x100>
 874b066:	89 34 24             	mov    %esi,(%esp)
 874b069:	e8 b2 dd 04 00       	call   8798e20 <_ZNK5yaSSL13DiffieHellman19get_agreedKeyLengthEv>
 874b06e:	89 34 24             	mov    %esi,(%esp)
 874b071:	89 c7                	mov    %eax,%edi
 874b073:	e8 48 d5 04 00       	call   87985c0 <_ZNK5yaSSL13DiffieHellman13get_agreedKeyEv>
 874b078:	89 7c 24 08          	mov    %edi,0x8(%esp)
 874b07c:	89 44 24 04          	mov    %eax,0x4(%esp)
 874b080:	8b 45 0c             	mov    0xc(%ebp),%eax
 874b083:	89 04 24             	mov    %eax,(%esp)
 874b086:	e8 85 56 00 00       	call   8750710 <_ZN5yaSSL3SSL13set_preMasterEPKhj>
 874b08b:	8b 45 0c             	mov    0xc(%ebp),%eax
 874b08e:	89 04 24             	mov    %eax,(%esp)
 874b091:	e8 2a 51 00 00       	call   87501c0 <_ZN5yaSSL3SSL16makeMasterSecretEv>
 874b096:	83 c4 2c             	add    $0x2c,%esp
 874b099:	5b                   	pop    %ebx
 874b09a:	5e                   	pop    %esi
 874b09b:	5f                   	pop    %edi
 874b09c:	5d                   	pop    %ebp
 874b09d:	c3                   	ret
 874b09e:	66 90                	xchg   %ax,%ax
 874b0a0:	89 34 24             	mov    %esi,(%esp)
 874b0a3:	e8 78 dd 04 00       	call   8798e20 <_ZNK5yaSSL13DiffieHellman19get_agreedKeyLengthEv>
 874b0a8:	89 34 24             	mov    %esi,(%esp)
 874b0ab:	89 c7                	mov    %eax,%edi
 874b0ad:	e8 0e d5 04 00       	call   87985c0 <_ZNK5yaSSL13DiffieHellman13get_agreedKeyEv>
 874b0b2:	83 ef 01             	sub    $0x1,%edi
 874b0b5:	89 7c 24 08          	mov    %edi,0x8(%esp)
 874b0b9:	83 c0 01             	add    $0x1,%eax
 874b0bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 874b0c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 874b0c3:	89 04 24             	mov    %eax,(%esp)
 874b0c6:	e8 45 56 00 00       	call   8750710 <_ZN5yaSSL3SSL13set_preMasterEPKhj>
 874b0cb:	eb be                	jmp    874b08b <_ZN5yaSSL25ClientDiffieHellmanPublic4readERNS_3SSLERNS_12input_bufferE+0xeb>
 874b0cd:	90                   	nop
 874b0ce:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::ClientDiffieHellmanPublic::read @ 0x874afa0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientDiffieHellmanPublic::read(yaSSL::SSL&, yaSSL::input_buffer&) */

void __thiscall
yaSSL::ClientDiffieHellmanPublic::read
          (ClientDiffieHellmanPublic *this,SSL *param_1,input_buffer *param_2)

{
  Crypto *this_00;
  DiffieHellman *this_01;
  uchar *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uchar local_20;
  undefined1 local_1f;
  ushort local_1e [5];
  undefined4 uStack_14;
  
  uStack_14 = 0x874afab;
  this_00 = (Crypto *)SSL::useCrypto(param_1);
  this_01 = (DiffieHellman *)Crypto::use_dh(this_00);
  puVar1 = (uchar *)input_buffer::operator[]((uint)param_2);
  local_20 = *puVar1;
  puVar2 = (undefined1 *)input_buffer::operator[]((uint)param_2);
  local_1f = *puVar2;
  ato16(&local_20,local_1e);
  alloc(this,(uint)local_1e[0],false);
  input_buffer::read(param_2,*(uchar **)(this + 0xc),(uint)local_1e[0]);
  DiffieHellman::makeAgreement(this_01,*(uchar **)(this + 0xc),(uint)local_1e[0]);
  pcVar3 = (char *)DiffieHellman::get_agreedKey(this_01);
  if (*pcVar3 == '\0') {
    iVar5 = DiffieHellman::get_agreedKeyLength(this_01);
    iVar6 = DiffieHellman::get_agreedKey(this_01);
    SSL::set_preMaster(param_1,(uchar *)(iVar6 + 1),iVar5 - 1);
  }
  else {
    uVar4 = DiffieHellman::get_agreedKeyLength(this_01);
    puVar1 = (uchar *)DiffieHellman::get_agreedKey(this_01);
    SSL::set_preMaster(param_1,puVar1,uVar4);
  }
  SSL::makeMasterSecret(param_1);
  return;
}

```

---

## ~ClientDiffieHellmanPublic

```asm
// === 0874ba40 yaSSL::ClientDiffieHellmanPublic::~ClientDiffieHellmanPublic  [0x0874ba40-0x874ba8f] ===
 874ba40:	55                   	push   %ebp
 874ba41:	89 e5                	mov    %esp,%ebp
 874ba43:	83 ec 18             	sub    $0x18,%esp
 874ba46:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 874ba49:	e8 aa 73 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874ba4e:	81 c3 4a 11 c2 00    	add    $0xc2114a,%ebx
 874ba54:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874ba57:	8b 75 08             	mov    0x8(%ebp),%esi
 874ba5a:	8b 83 24 fb ff ff    	mov    -0x4dc(%ebx),%eax
 874ba60:	83 c0 08             	add    $0x8,%eax
 874ba63:	89 06                	mov    %eax,(%esi)
 874ba65:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874ba6a:	8b 46 0c             	mov    0xc(%esi),%eax
 874ba6d:	89 04 24             	mov    %eax,(%esp)
 874ba70:	e8 7b 4e 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874ba75:	8b 83 e8 ff ff ff    	mov    -0x18(%ebx),%eax
 874ba7b:	83 c0 08             	add    $0x8,%eax
 874ba7e:	89 06                	mov    %eax,(%esi)
 874ba80:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 874ba83:	8b 75 fc             	mov    -0x4(%ebp),%esi
 874ba86:	89 ec                	mov    %ebp,%esp
 874ba88:	5d                   	pop    %ebp
 874ba89:	c3                   	ret
 874ba8a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ClientDiffieHellmanPublic::~ClientDiffieHellmanPublic @ 0x874ba40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientDiffieHellmanPublic::~ClientDiffieHellmanPublic() */

void __thiscall
yaSSL::ClientDiffieHellmanPublic::~ClientDiffieHellmanPublic(ClientDiffieHellmanPublic *this)

{
  *(undefined **)this = PTR_vtable_0936c6bc + 8;
  operator_delete__(*(undefined4 *)(this + 0xc),0);
  *(undefined **)this = PTR_vtable_0936cb80 + 8;
  return;
}

```

---

## ~ClientDiffieHellmanPublic_0874ba90

```asm
// === 0874ba90 yaSSL::ClientDiffieHellmanPublic::~ClientDiffieHellmanPublic  [0x0874ba90-0x874babf] ===
 874ba90:	55                   	push   %ebp
 874ba91:	89 e5                	mov    %esp,%ebp
 874ba93:	53                   	push   %ebx
 874ba94:	e8 5f 73 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874ba99:	81 c3 ff 10 c2 00    	add    $0xc210ff,%ebx
 874ba9f:	83 ec 14             	sub    $0x14,%esp
 874baa2:	8b 45 08             	mov    0x8(%ebp),%eax
 874baa5:	89 04 24             	mov    %eax,(%esp)
 874baa8:	e8 93 ff ff ff       	call   874ba40 <_ZN5yaSSL25ClientDiffieHellmanPublicD1Ev>
 874baad:	83 c4 14             	add    $0x14,%esp
 874bab0:	5b                   	pop    %ebx
 874bab1:	5d                   	pop    %ebp
 874bab2:	c3                   	ret
 874bab3:	90                   	nop
 874bab4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874baba:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::ClientDiffieHellmanPublic::~ClientDiffieHellmanPublic @ 0x874ba90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientDiffieHellmanPublic::~ClientDiffieHellmanPublic() */

void __thiscall
yaSSL::ClientDiffieHellmanPublic::~ClientDiffieHellmanPublic(ClientDiffieHellmanPublic *this)

{
  ~ClientDiffieHellmanPublic(this);
  return;
}

```

