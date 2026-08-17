# yaSSL__DSS__DSSImpl

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## SetPrivate

```asm
// === 0879b400 yaSSL::DSS::DSSImpl::SetPrivate  [0x0879b400-0x879b55f] ===
 879b400:	55                   	push   %ebp
 879b401:	31 c0                	xor    %eax,%eax
 879b403:	89 e5                	mov    %esp,%ebp
 879b405:	57                   	push   %edi
 879b406:	56                   	push   %esi
 879b407:	53                   	push   %ebx
 879b408:	83 ec 7c             	sub    $0x7c,%esp
 879b40b:	8b 55 10             	mov    0x10(%ebp),%edx
 879b40e:	e8 e5 79 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879b413:	81 c3 85 17 bd 00    	add    $0xbd1785,%ebx
 879b419:	8b 75 08             	mov    0x8(%ebp),%esi
 879b41c:	85 d2                	test   %edx,%edx
 879b41e:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 879b421:	74 10                	je     879b433 <_ZN5yaSSL3DSS7DSSImpl10SetPrivateEPKhj+0x33>
 879b423:	89 14 24             	mov    %edx,(%esp)
 879b426:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879b42b:	e8 60 c3 fc ff       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 879b430:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 879b433:	89 54 24 08          	mov    %edx,0x8(%esp)
 879b437:	8b 55 0c             	mov    0xc(%ebp),%edx
 879b43a:	8d 7e 40             	lea    0x40(%esi),%edi
 879b43d:	89 45 d8             	mov    %eax,-0x28(%ebp)
 879b440:	89 04 24             	mov    %eax,(%esp)
 879b443:	89 54 24 04          	mov    %edx,0x4(%esp)
 879b447:	e8 54 24 8e ff       	call   807d8a0 <memcpy@plt>
 879b44c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 879b44f:	89 44 24 04          	mov    %eax,0x4(%esp)
 879b453:	89 3c 24             	mov    %edi,(%esp)
 879b456:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 879b45d:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 879b464:	e8 d7 c2 fb ff       	call   8757740 <_ZN8TaoCrypt14DSA_PrivateKey10InitializeERNS_6SourceE>
 879b469:	89 7c 24 04          	mov    %edi,0x4(%esp)
 879b46d:	8d 7d 94             	lea    -0x6c(%ebp),%edi
 879b470:	89 3c 24             	mov    %edi,(%esp)
 879b473:	e8 18 c0 fb ff       	call   8757490 <_ZN8TaoCrypt13DSA_PublicKeyC1ERKS0_>
 879b478:	89 7c 24 04          	mov    %edi,0x4(%esp)
 879b47c:	89 34 24             	mov    %esi,(%esp)
 879b47f:	e8 7c c4 fb ff       	call   8757900 <_ZN8TaoCrypt13DSA_PublicKeyaSERKS0_>
 879b484:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 879b487:	8b 75 c8             	mov    -0x38(%ebp),%esi
 879b48a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879b491:	00 
 879b492:	c1 e0 02             	shl    $0x2,%eax
 879b495:	89 34 24             	mov    %esi,(%esp)
 879b498:	89 44 24 08          	mov    %eax,0x8(%esp)
 879b49c:	e8 1f 28 8e ff       	call   807dcc0 <memset@plt>
 879b4a1:	89 34 24             	mov    %esi,(%esp)
 879b4a4:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879b4a9:	e8 72 c2 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879b4ae:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 879b4b1:	8b 75 b8             	mov    -0x48(%ebp),%esi
 879b4b4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879b4bb:	00 
 879b4bc:	c1 e0 02             	shl    $0x2,%eax
 879b4bf:	89 34 24             	mov    %esi,(%esp)
 879b4c2:	89 44 24 08          	mov    %eax,0x8(%esp)
 879b4c6:	e8 f5 27 8e ff       	call   807dcc0 <memset@plt>
 879b4cb:	89 34 24             	mov    %esi,(%esp)
 879b4ce:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879b4d3:	e8 48 c2 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879b4d8:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 879b4db:	8b 75 a8             	mov    -0x58(%ebp),%esi
 879b4de:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879b4e5:	00 
 879b4e6:	c1 e0 02             	shl    $0x2,%eax
 879b4e9:	89 34 24             	mov    %esi,(%esp)
 879b4ec:	89 44 24 08          	mov    %eax,0x8(%esp)
 879b4f0:	e8 cb 27 8e ff       	call   807dcc0 <memset@plt>
 879b4f5:	89 34 24             	mov    %esi,(%esp)
 879b4f8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879b4fd:	e8 1e c2 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879b502:	8b 45 94             	mov    -0x6c(%ebp),%eax
 879b505:	8b 75 98             	mov    -0x68(%ebp),%esi
 879b508:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879b50f:	00 
 879b510:	c1 e0 02             	shl    $0x2,%eax
 879b513:	89 34 24             	mov    %esi,(%esp)
 879b516:	89 44 24 08          	mov    %eax,0x8(%esp)
 879b51a:	e8 a1 27 8e ff       	call   807dcc0 <memset@plt>
 879b51f:	89 34 24             	mov    %esi,(%esp)
 879b522:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879b527:	e8 f4 c1 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879b52c:	8b 75 d8             	mov    -0x28(%ebp),%esi
 879b52f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 879b532:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879b539:	00 
 879b53a:	89 34 24             	mov    %esi,(%esp)
 879b53d:	89 44 24 08          	mov    %eax,0x8(%esp)
 879b541:	e8 7a 27 8e ff       	call   807dcc0 <memset@plt>
 879b546:	89 34 24             	mov    %esi,(%esp)
 879b549:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879b54e:	e8 cd c1 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879b553:	83 c4 7c             	add    $0x7c,%esp
 879b556:	5b                   	pop    %ebx
 879b557:	5e                   	pop    %esi
 879b558:	5f                   	pop    %edi
 879b559:	5d                   	pop    %ebp
 879b55a:	c3                   	ret
 879b55b:	90                   	nop
 879b55c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::DSS::DSSImpl::SetPrivate @ 0x879b400

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DSS::DSSImpl::SetPrivate(unsigned char const*, unsigned int) */

void __thiscall yaSSL::DSS::DSSImpl::SetPrivate(DSSImpl *this,uchar *param_1,uint param_2)

{
  void *pvVar1;
  uint in_stack_ffffff78;
  uint uVar2;
  int local_70;
  void *local_6c;
  int local_60;
  void *local_5c;
  int local_50;
  void *local_4c;
  int local_40;
  void *local_3c;
  uint local_30;
  void *local_2c;
  undefined4 local_24;
  undefined4 local_20;
  
  local_2c = (void *)0x0;
  local_30 = param_2;
  if (param_2 != 0) {
    local_2c = operator_new__(param_2,in_stack_ffffff78 & 0xffffff00);
  }
  memcpy(local_2c,param_1,local_30);
  local_24 = 0;
  local_20 = 0;
  TaoCrypt::DSA_PrivateKey::Initialize((DSA_PrivateKey *)(this + 0x40),(Source *)&local_30);
  TaoCrypt::DSA_PublicKey::DSA_PublicKey((DSA_PublicKey *)&local_70,(DSA_PublicKey *)(this + 0x40));
  TaoCrypt::DSA_PublicKey::operator=((DSA_PublicKey *)this,(DSA_PublicKey *)&local_70);
  uVar2 = 0;
  memset(local_3c,0,local_40 << 2);
  operator_delete__(local_3c,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_4c,0,local_50 << 2);
  operator_delete__(local_4c,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_5c,0,local_60 << 2);
  operator_delete__(local_5c,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_6c,0,local_70 << 2);
  operator_delete__(local_6c,uVar2 & 0xffffff00);
  pvVar1 = local_2c;
  uVar2 = 0;
  memset(local_2c,0,local_30);
  operator_delete__(pvVar1,uVar2 & 0xffffff00);
  return;
}

```

---

## SetPublic

```asm
// === 0879a4b0 yaSSL::DSS::DSSImpl::SetPublic  [0x0879a4b0-0x879a54f] ===
 879a4b0:	55                   	push   %ebp
 879a4b1:	31 c0                	xor    %eax,%eax
 879a4b3:	89 e5                	mov    %esp,%ebp
 879a4b5:	56                   	push   %esi
 879a4b6:	53                   	push   %ebx
 879a4b7:	83 ec 30             	sub    $0x30,%esp
 879a4ba:	8b 55 10             	mov    0x10(%ebp),%edx
 879a4bd:	e8 36 89 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879a4c2:	81 c3 d6 26 bd 00    	add    $0xbd26d6,%ebx
 879a4c8:	85 d2                	test   %edx,%edx
 879a4ca:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 879a4cd:	74 10                	je     879a4df <_ZN5yaSSL3DSS7DSSImpl9SetPublicEPKhj+0x2f>
 879a4cf:	89 14 24             	mov    %edx,(%esp)
 879a4d2:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879a4d7:	e8 b4 d2 fc ff       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 879a4dc:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 879a4df:	89 54 24 08          	mov    %edx,0x8(%esp)
 879a4e3:	8b 55 0c             	mov    0xc(%ebp),%edx
 879a4e6:	89 45 e8             	mov    %eax,-0x18(%ebp)
 879a4e9:	89 04 24             	mov    %eax,(%esp)
 879a4ec:	89 54 24 04          	mov    %edx,0x4(%esp)
 879a4f0:	e8 ab 33 8e ff       	call   807d8a0 <memcpy@plt>
 879a4f5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 879a4f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a4fc:	8b 45 08             	mov    0x8(%ebp),%eax
 879a4ff:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 879a506:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 879a50d:	89 04 24             	mov    %eax,(%esp)
 879a510:	e8 db d2 fb ff       	call   87577f0 <_ZN8TaoCrypt13DSA_PublicKey10InitializeERNS_6SourceE>
 879a515:	8b 75 e8             	mov    -0x18(%ebp),%esi
 879a518:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879a51b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879a522:	00 
 879a523:	89 34 24             	mov    %esi,(%esp)
 879a526:	89 44 24 08          	mov    %eax,0x8(%esp)
 879a52a:	e8 91 37 8e ff       	call   807dcc0 <memset@plt>
 879a52f:	89 34 24             	mov    %esi,(%esp)
 879a532:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879a537:	e8 e4 d1 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879a53c:	83 c4 30             	add    $0x30,%esp
 879a53f:	5b                   	pop    %ebx
 879a540:	5e                   	pop    %esi
 879a541:	5d                   	pop    %ebp
 879a542:	c3                   	ret
 879a543:	90                   	nop
 879a544:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 879a54a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::DSS::DSSImpl::SetPublic @ 0x879a4b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DSS::DSSImpl::SetPublic(unsigned char const*, unsigned int) */

void __thiscall yaSSL::DSS::DSSImpl::SetPublic(DSSImpl *this,uchar *param_1,uint param_2)

{
  void *pvVar1;
  uint in_stack_ffffffc8;
  uint uVar2;
  uint local_20;
  void *local_1c;
  undefined4 local_14;
  undefined4 local_10;
  
  local_1c = (void *)0x0;
  local_20 = param_2;
  if (param_2 != 0) {
    local_1c = operator_new__(param_2,in_stack_ffffffc8 & 0xffffff00);
  }
  memcpy(local_1c,param_1,local_20);
  local_14 = 0;
  local_10 = 0;
  TaoCrypt::DSA_PublicKey::Initialize((DSA_PublicKey *)this,(Source *)&local_20);
  pvVar1 = local_1c;
  uVar2 = 0;
  memset(local_1c,0,local_20);
  operator_delete__(pvVar1,uVar2 & 0xffffff00);
  return;
}

```

