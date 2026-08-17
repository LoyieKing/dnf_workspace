# yaSSL__DiffieHellman

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## DiffieHellman

```asm
// === 0879a010 yaSSL::DiffieHellman::DiffieHellman  [0x0879a010-0x879a10f] ===
 879a010:	55                   	push   %ebp
 879a011:	89 e5                	mov    %esp,%ebp
 879a013:	57                   	push   %edi
 879a014:	56                   	push   %esi
 879a015:	53                   	push   %ebx
 879a016:	83 ec 2c             	sub    $0x2c,%esp
 879a019:	8b 75 08             	mov    0x8(%ebp),%esi
 879a01c:	e8 d7 8d f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879a021:	81 c3 77 2b bd 00    	add    $0xbd2b77,%ebx
 879a027:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879a02c:	c7 04 24 30 00 00 00 	movl   $0x30,(%esp)
 879a033:	e8 68 6c fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 879a038:	8b 55 14             	mov    0x14(%ebp),%edx
 879a03b:	8b 12                	mov    (%edx),%edx
 879a03d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 879a040:	89 04 24             	mov    %eax,(%esp)
 879a043:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 879a046:	e8 45 55 fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879a04b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 879a04e:	8d 78 10             	lea    0x10(%eax),%edi
 879a051:	89 3c 24             	mov    %edi,(%esp)
 879a054:	e8 37 55 fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879a059:	8b 45 e0             	mov    -0x20(%ebp),%eax
 879a05c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 879a05f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 879a062:	89 06                	mov    %eax,(%esi)
 879a064:	89 50 20             	mov    %edx,0x20(%eax)
 879a067:	8b 55 10             	mov    0x10(%ebp),%edx
 879a06a:	8b 09                	mov    (%ecx),%ecx
 879a06c:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 879a073:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 879a07a:	8b 12                	mov    (%edx),%edx
 879a07c:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 879a083:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879a087:	89 04 24             	mov    %eax,(%esp)
 879a08a:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 879a08d:	e8 ce 63 fc ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 879a092:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 879a095:	89 3c 24             	mov    %edi,(%esp)
 879a098:	89 54 24 04          	mov    %edx,0x4(%esp)
 879a09c:	e8 bf 63 fc ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 879a0a1:	8b 06                	mov    (%esi),%eax
 879a0a3:	89 04 24             	mov    %eax,(%esp)
 879a0a6:	e8 85 4b fc ff       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 879a0ab:	8b 3e                	mov    (%esi),%edi
 879a0ad:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879a0b2:	89 04 24             	mov    %eax,(%esp)
 879a0b5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 879a0b8:	e8 93 82 fb ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 879a0bd:	89 47 24             	mov    %eax,0x24(%edi)
 879a0c0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 879a0c3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879a0c8:	89 14 24             	mov    %edx,(%esp)
 879a0cb:	e8 80 82 fb ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 879a0d0:	89 47 28             	mov    %eax,0x28(%edi)
 879a0d3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 879a0d6:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879a0db:	89 14 24             	mov    %edx,(%esp)
 879a0de:	e8 6d 82 fb ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 879a0e3:	89 47 2c             	mov    %eax,0x2c(%edi)
 879a0e6:	8b 06                	mov    (%esi),%eax
 879a0e8:	8b 50 24             	mov    0x24(%eax),%edx
 879a0eb:	89 54 24 0c          	mov    %edx,0xc(%esp)
 879a0ef:	8b 50 28             	mov    0x28(%eax),%edx
 879a0f2:	89 54 24 08          	mov    %edx,0x8(%esp)
 879a0f6:	8b 50 20             	mov    0x20(%eax),%edx
 879a0f9:	89 04 24             	mov    %eax,(%esp)
 879a0fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 879a100:	e8 6b eb 00 00       	call   87a8c70 <_ZN8TaoCrypt2DH15GenerateKeyPairERNS_21RandomNumberGeneratorEPhS3_>
 879a105:	83 c4 2c             	add    $0x2c,%esp
 879a108:	5b                   	pop    %ebx
 879a109:	5e                   	pop    %esi
 879a10a:	5f                   	pop    %edi
 879a10b:	5d                   	pop    %ebp
 879a10c:	c3                   	ret
 879a10d:	90                   	nop
 879a10e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::DiffieHellman::DiffieHellman @ 0x879a010

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DiffieHellman::DiffieHellman(yaSSL::Integer const&, yaSSL::Integer const&,
   yaSSL::RandomPool const&) */

void __thiscall
yaSSL::DiffieHellman::DiffieHellman
          (DiffieHellman *this,Integer *param_1,Integer *param_2,RandomPool *param_3)

{
  Integer *pIVar1;
  int iVar2;
  DH *this_00;
  Integer *this_01;
  undefined4 uVar3;
  void *pvVar4;
  uint in_stack_ffffffc8;
  Integer *pIVar5;
  uint uVar6;
  
  this_01 = operator_new(0x30,in_stack_ffffffc8 & 0xffffff00);
  uVar3 = *(undefined4 *)param_3;
  TaoCrypt::Integer::Integer(this_01);
  TaoCrypt::Integer::Integer(this_01 + 0x10);
  *(Integer **)this = this_01;
  *(undefined4 *)(this_01 + 0x20) = uVar3;
  pIVar1 = *(Integer **)param_1;
  *(undefined4 *)(this_01 + 0x24) = 0;
  *(undefined4 *)(this_01 + 0x28) = 0;
  pIVar5 = *(Integer **)param_2;
  *(undefined4 *)(this_01 + 0x2c) = 0;
  TaoCrypt::Integer::operator=(this_01,pIVar1);
  TaoCrypt::Integer::operator=(this_01 + 0x10,pIVar5);
  uVar3 = TaoCrypt::Integer::ByteCount(*(Integer **)this);
  iVar2 = *(int *)this;
  uVar6 = (uint)pIVar5 & 0xffffff00;
  pvVar4 = operator_new__(uVar3,uVar6);
  *(void **)(iVar2 + 0x24) = pvVar4;
  uVar6 = uVar6 & 0xffffff00;
  pvVar4 = operator_new__(uVar3,uVar6);
  *(void **)(iVar2 + 0x28) = pvVar4;
  pvVar4 = operator_new__(uVar3,uVar6 & 0xffffff00);
  *(void **)(iVar2 + 0x2c) = pvVar4;
  this_00 = *(DH **)this;
  TaoCrypt::DH::GenerateKeyPair
            (this_00,*(RandomNumberGenerator **)(this_00 + 0x20),*(uchar **)(this_00 + 0x28),
             *(uchar **)(this_00 + 0x24));
  return;
}

```

---

## DiffieHellman_0879a3e0

```asm
// === 0879a3e0 yaSSL::DiffieHellman::DiffieHellman  [0x0879a3e0-0x879a4af] ===
 879a3e0:	55                   	push   %ebp
 879a3e1:	89 e5                	mov    %esp,%ebp
 879a3e3:	57                   	push   %edi
 879a3e4:	56                   	push   %esi
 879a3e5:	53                   	push   %ebx
 879a3e6:	83 ec 1c             	sub    $0x1c,%esp
 879a3e9:	e8 0a 8a f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879a3ee:	81 c3 aa 27 bd 00    	add    $0xbd27aa,%ebx
 879a3f4:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879a3f9:	c7 04 24 30 00 00 00 	movl   $0x30,(%esp)
 879a400:	e8 9b 68 fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 879a405:	89 c6                	mov    %eax,%esi
 879a407:	8b 45 0c             	mov    0xc(%ebp),%eax
 879a40a:	8b 38                	mov    (%eax),%edi
 879a40c:	89 34 24             	mov    %esi,(%esp)
 879a40f:	89 7c 24 04          	mov    %edi,0x4(%esp)
 879a413:	e8 58 4e fc ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 879a418:	8d 47 10             	lea    0x10(%edi),%eax
 879a41b:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a41f:	8d 46 10             	lea    0x10(%esi),%eax
 879a422:	89 04 24             	mov    %eax,(%esp)
 879a425:	e8 46 4e fc ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 879a42a:	8b 47 20             	mov    0x20(%edi),%eax
 879a42d:	c7 46 24 00 00 00 00 	movl   $0x0,0x24(%esi)
 879a434:	c7 46 28 00 00 00 00 	movl   $0x0,0x28(%esi)
 879a43b:	c7 46 2c 00 00 00 00 	movl   $0x0,0x2c(%esi)
 879a442:	89 46 20             	mov    %eax,0x20(%esi)
 879a445:	89 34 24             	mov    %esi,(%esp)
 879a448:	e8 e3 47 fc ff       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 879a44d:	89 c7                	mov    %eax,%edi
 879a44f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879a454:	89 04 24             	mov    %eax,(%esp)
 879a457:	e8 f4 7e fb ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 879a45c:	89 46 24             	mov    %eax,0x24(%esi)
 879a45f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879a464:	89 3c 24             	mov    %edi,(%esp)
 879a467:	e8 e4 7e fb ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 879a46c:	89 46 28             	mov    %eax,0x28(%esi)
 879a46f:	89 3c 24             	mov    %edi,(%esp)
 879a472:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879a477:	e8 d4 7e fb ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 879a47c:	89 46 2c             	mov    %eax,0x2c(%esi)
 879a47f:	8b 45 08             	mov    0x8(%ebp),%eax
 879a482:	89 30                	mov    %esi,(%eax)
 879a484:	8b 46 24             	mov    0x24(%esi),%eax
 879a487:	89 44 24 0c          	mov    %eax,0xc(%esp)
 879a48b:	8b 46 28             	mov    0x28(%esi),%eax
 879a48e:	89 44 24 08          	mov    %eax,0x8(%esp)
 879a492:	8b 46 20             	mov    0x20(%esi),%eax
 879a495:	89 34 24             	mov    %esi,(%esp)
 879a498:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a49c:	e8 cf e7 00 00       	call   87a8c70 <_ZN8TaoCrypt2DH15GenerateKeyPairERNS_21RandomNumberGeneratorEPhS3_>
 879a4a1:	83 c4 1c             	add    $0x1c,%esp
 879a4a4:	5b                   	pop    %ebx
 879a4a5:	5e                   	pop    %esi
 879a4a6:	5f                   	pop    %edi
 879a4a7:	5d                   	pop    %ebp
 879a4a8:	c3                   	ret
 879a4a9:	90                   	nop
 879a4aa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::DiffieHellman::DiffieHellman @ 0x879a3e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DiffieHellman::DiffieHellman(yaSSL::DiffieHellman const&) */

void __thiscall yaSSL::DiffieHellman::DiffieHellman(DiffieHellman *this,DiffieHellman *param_1)

{
  Integer *pIVar1;
  Integer *this_00;
  undefined4 uVar2;
  void *pvVar3;
  uint in_stack_ffffffd8;
  Integer *pIVar4;
  uint uVar5;
  
  this_00 = operator_new(0x30,in_stack_ffffffd8 & 0xffffff00);
  pIVar1 = *(Integer **)param_1;
  TaoCrypt::Integer::Integer(this_00,pIVar1);
  pIVar4 = pIVar1 + 0x10;
  TaoCrypt::Integer::Integer(this_00 + 0x10,pIVar4);
  uVar2 = *(undefined4 *)(pIVar1 + 0x20);
  *(undefined4 *)(this_00 + 0x24) = 0;
  *(undefined4 *)(this_00 + 0x28) = 0;
  *(undefined4 *)(this_00 + 0x2c) = 0;
  *(undefined4 *)(this_00 + 0x20) = uVar2;
  uVar2 = TaoCrypt::Integer::ByteCount(this_00);
  uVar5 = (uint)pIVar4 & 0xffffff00;
  pvVar3 = operator_new__(uVar2,uVar5);
  *(void **)(this_00 + 0x24) = pvVar3;
  uVar5 = uVar5 & 0xffffff00;
  pvVar3 = operator_new__(uVar2,uVar5);
  *(void **)(this_00 + 0x28) = pvVar3;
  pvVar3 = operator_new__(uVar2,uVar5 & 0xffffff00);
  *(void **)(this_00 + 0x2c) = pvVar3;
  *(Integer **)this = this_00;
  TaoCrypt::DH::GenerateKeyPair
            ((DH *)this_00,*(RandomNumberGenerator **)(this_00 + 0x20),*(uchar **)(this_00 + 0x28),
             *(uchar **)(this_00 + 0x24));
  return;
}

```

---

## DiffieHellman_0879a980

```asm
// === 0879a980 yaSSL::DiffieHellman::DiffieHellman  [0x0879a980-0x879aadf] ===
 879a980:	55                   	push   %ebp
 879a981:	89 e5                	mov    %esp,%ebp
 879a983:	57                   	push   %edi
 879a984:	56                   	push   %esi
 879a985:	53                   	push   %ebx
 879a986:	83 ec 4c             	sub    $0x4c,%esp
 879a989:	8b 75 08             	mov    0x8(%ebp),%esi
 879a98c:	e8 67 84 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879a991:	81 c3 07 22 bd 00    	add    $0xbd2207,%ebx
 879a997:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879a99c:	c7 04 24 30 00 00 00 	movl   $0x30,(%esp)
 879a9a3:	e8 f8 62 fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 879a9a8:	89 c7                	mov    %eax,%edi
 879a9aa:	8b 45 24             	mov    0x24(%ebp),%eax
 879a9ad:	8b 00                	mov    (%eax),%eax
 879a9af:	89 3c 24             	mov    %edi,(%esp)
 879a9b2:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 879a9b5:	e8 d6 4b fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879a9ba:	8d 57 10             	lea    0x10(%edi),%edx
 879a9bd:	89 14 24             	mov    %edx,(%esp)
 879a9c0:	e8 cb 4b fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879a9c5:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 879a9c8:	8d 55 d8             	lea    -0x28(%ebp),%edx
 879a9cb:	89 3e                	mov    %edi,(%esi)
 879a9cd:	c7 47 24 00 00 00 00 	movl   $0x0,0x24(%edi)
 879a9d4:	c7 47 28 00 00 00 00 	movl   $0x0,0x28(%edi)
 879a9db:	89 47 20             	mov    %eax,0x20(%edi)
 879a9de:	8b 45 18             	mov    0x18(%ebp),%eax
 879a9e1:	c7 47 2c 00 00 00 00 	movl   $0x0,0x2c(%edi)
 879a9e8:	89 55 c0             	mov    %edx,-0x40(%ebp)
 879a9eb:	89 14 24             	mov    %edx,(%esp)
 879a9ee:	89 44 24 08          	mov    %eax,0x8(%esp)
 879a9f2:	8b 45 14             	mov    0x14(%ebp),%eax
 879a9f5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 879a9fc:	00 
 879a9fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 879aa01:	e8 fa 68 fc ff       	call   8761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>
 879aa06:	8b 45 10             	mov    0x10(%ebp),%eax
 879aa09:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 879aa10:	00 
 879aa11:	89 44 24 08          	mov    %eax,0x8(%esp)
 879aa15:	8b 45 0c             	mov    0xc(%ebp),%eax
 879aa18:	89 44 24 04          	mov    %eax,0x4(%esp)
 879aa1c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 879aa1f:	89 04 24             	mov    %eax,(%esp)
 879aa22:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 879aa25:	e8 d6 68 fc ff       	call   8761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>
 879aa2a:	8b 3e                	mov    (%esi),%edi
 879aa2c:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 879aa2f:	89 3c 24             	mov    %edi,(%esp)
 879aa32:	83 c7 10             	add    $0x10,%edi
 879aa35:	89 44 24 04          	mov    %eax,0x4(%esp)
 879aa39:	e8 22 5a fc ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 879aa3e:	8b 55 c0             	mov    -0x40(%ebp),%edx
 879aa41:	89 3c 24             	mov    %edi,(%esp)
 879aa44:	89 54 24 04          	mov    %edx,0x4(%esp)
 879aa48:	e8 13 5a fc ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 879aa4d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 879aa50:	8b 7d cc             	mov    -0x34(%ebp),%edi
 879aa53:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879aa5a:	00 
 879aa5b:	c1 e0 02             	shl    $0x2,%eax
 879aa5e:	89 3c 24             	mov    %edi,(%esp)
 879aa61:	89 44 24 08          	mov    %eax,0x8(%esp)
 879aa65:	e8 56 32 8e ff       	call   807dcc0 <memset@plt>
 879aa6a:	89 3c 24             	mov    %edi,(%esp)
 879aa6d:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879aa72:	e8 a9 cc fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879aa77:	8b 45 d8             	mov    -0x28(%ebp),%eax
 879aa7a:	8b 7d dc             	mov    -0x24(%ebp),%edi
 879aa7d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879aa84:	00 
 879aa85:	c1 e0 02             	shl    $0x2,%eax
 879aa88:	89 44 24 08          	mov    %eax,0x8(%esp)
 879aa8c:	89 3c 24             	mov    %edi,(%esp)
 879aa8f:	e8 2c 32 8e ff       	call   807dcc0 <memset@plt>
 879aa94:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879aa99:	89 3c 24             	mov    %edi,(%esp)
 879aa9c:	e8 7f cc fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879aaa1:	8b 45 20             	mov    0x20(%ebp),%eax
 879aaa4:	8b 3e                	mov    (%esi),%edi
 879aaa6:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879aaab:	89 04 24             	mov    %eax,(%esp)
 879aaae:	e8 9d 78 fb ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 879aab3:	8b 55 20             	mov    0x20(%ebp),%edx
 879aab6:	89 47 24             	mov    %eax,0x24(%edi)
 879aab9:	8b 06                	mov    (%esi),%eax
 879aabb:	8b 40 24             	mov    0x24(%eax),%eax
 879aabe:	89 54 24 08          	mov    %edx,0x8(%esp)
 879aac2:	8b 55 1c             	mov    0x1c(%ebp),%edx
 879aac5:	89 04 24             	mov    %eax,(%esp)
 879aac8:	89 54 24 04          	mov    %edx,0x4(%esp)
 879aacc:	e8 cf 2d 8e ff       	call   807d8a0 <memcpy@plt>
 879aad1:	83 c4 4c             	add    $0x4c,%esp
 879aad4:	5b                   	pop    %ebx
 879aad5:	5e                   	pop    %esi
 879aad6:	5f                   	pop    %edi
 879aad7:	5d                   	pop    %ebp
 879aad8:	c3                   	ret
 879aad9:	90                   	nop
 879aada:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::DiffieHellman::DiffieHellman @ 0x879a980

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DiffieHellman::DiffieHellman(unsigned char const*, unsigned int, unsigned char const*,
   unsigned int, unsigned char const*, unsigned int, yaSSL::RandomPool const&) */

void __thiscall
yaSSL::DiffieHellman::DiffieHellman
          (DiffieHellman *this,uchar *param_1,uint param_2,uchar *param_3,uint param_4,
          uchar *param_5,uint param_6,RandomPool *param_7)

{
  undefined4 uVar1;
  int iVar2;
  Integer *pIVar3;
  void *pvVar4;
  uint in_stack_ffffffa8;
  uint uVar5;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  pIVar3 = operator_new(0x30,in_stack_ffffffa8 & 0xffffff00);
  uVar1 = *(undefined4 *)param_7;
  TaoCrypt::Integer::Integer(pIVar3);
  TaoCrypt::Integer::Integer(pIVar3 + 0x10);
  *(Integer **)this = pIVar3;
  *(undefined4 *)(pIVar3 + 0x24) = 0;
  *(undefined4 *)(pIVar3 + 0x28) = 0;
  *(undefined4 *)(pIVar3 + 0x20) = uVar1;
  *(undefined4 *)(pIVar3 + 0x2c) = 0;
  TaoCrypt::Integer::Integer((Integer *)&local_2c,param_3,param_4,0);
  TaoCrypt::Integer::Integer((Integer *)&local_3c,param_1,param_2,0);
  pIVar3 = *(Integer **)this;
  TaoCrypt::Integer::operator=(pIVar3,(Integer *)&local_3c);
  TaoCrypt::Integer::operator=(pIVar3 + 0x10,(Integer *)&local_2c);
  uVar5 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar5 & 0xffffff00);
  uVar5 = 0;
  memset(local_28,0,local_2c << 2);
  uVar5 = uVar5 & 0xffffff00;
  operator_delete__(local_28,uVar5);
  iVar2 = *(int *)this;
  pvVar4 = operator_new__(param_6,uVar5 & 0xffffff00);
  *(void **)(iVar2 + 0x24) = pvVar4;
  memcpy(*(void **)(*(int *)this + 0x24),param_5,param_6);
  return;
}

```

---

## get_agreedKey

```asm
// === 087985c0 yaSSL::DiffieHellman::get_agreedKey  [0x087985c0-0x87985cf] ===
 87985c0:	55                   	push   %ebp
 87985c1:	89 e5                	mov    %esp,%ebp
 87985c3:	8b 45 08             	mov    0x8(%ebp),%eax
 87985c6:	5d                   	pop    %ebp
 87985c7:	8b 00                	mov    (%eax),%eax
 87985c9:	8b 40 2c             	mov    0x2c(%eax),%eax
 87985cc:	c3                   	ret
 87985cd:	90                   	nop
 87985ce:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::DiffieHellman::get_agreedKey @ 0x87985c0

/* yaSSL::DiffieHellman::get_agreedKey() const */

undefined4 __thiscall yaSSL::DiffieHellman::get_agreedKey(DiffieHellman *this)

{
  return *(undefined4 *)(*(int *)this + 0x2c);
}

```

---

## get_agreedKeyLength

```asm
// === 08798e20 yaSSL::DiffieHellman::get_agreedKeyLength  [0x08798e20-0x8798e4f] ===
 8798e20:	55                   	push   %ebp
 8798e21:	89 e5                	mov    %esp,%ebp
 8798e23:	53                   	push   %ebx
 8798e24:	83 ec 14             	sub    $0x14,%esp
 8798e27:	8b 45 08             	mov    0x8(%ebp),%eax
 8798e2a:	e8 c9 9f f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8798e2f:	81 c3 69 3d bd 00    	add    $0xbd3d69,%ebx
 8798e35:	8b 00                	mov    (%eax),%eax
 8798e37:	89 04 24             	mov    %eax,(%esp)
 8798e3a:	e8 f1 5d fc ff       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 8798e3f:	83 c4 14             	add    $0x14,%esp
 8798e42:	5b                   	pop    %ebx
 8798e43:	5d                   	pop    %ebp
 8798e44:	c3                   	ret
 8798e45:	90                   	nop
 8798e46:	8d 76 00             	lea    0x0(%esi),%esi
 8798e49:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::DiffieHellman::get_agreedKeyLength @ 0x8798e20

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DiffieHellman::get_agreedKeyLength() const */

void __thiscall yaSSL::DiffieHellman::get_agreedKeyLength(DiffieHellman *this)

{
  TaoCrypt::Integer::ByteCount(*(Integer **)this);
  return;
}

```

---

## get_parms

```asm
// === 0879ac80 yaSSL::DiffieHellman::get_parms  [0x0879ac80-0x879ad8f] ===
 879ac80:	55                   	push   %ebp
 879ac81:	89 e5                	mov    %esp,%ebp
 879ac83:	57                   	push   %edi
 879ac84:	56                   	push   %esi
 879ac85:	53                   	push   %ebx
 879ac86:	83 ec 4c             	sub    $0x4c,%esp
 879ac89:	8b 75 08             	mov    0x8(%ebp),%esi
 879ac8c:	e8 67 81 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879ac91:	81 c3 07 1f bd 00    	add    $0xbd1f07,%ebx
 879ac97:	8d 55 d8             	lea    -0x28(%ebp),%edx
 879ac9a:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 879ac9d:	8d 7d c8             	lea    -0x38(%ebp),%edi
 879aca0:	8b 06                	mov    (%esi),%eax
 879aca2:	89 14 24             	mov    %edx,(%esp)
 879aca5:	89 44 24 04          	mov    %eax,0x4(%esp)
 879aca9:	e8 c2 45 fc ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 879acae:	8b 06                	mov    (%esi),%eax
 879acb0:	89 3c 24             	mov    %edi,(%esp)
 879acb3:	83 c0 10             	add    $0x10,%eax
 879acb6:	89 44 24 04          	mov    %eax,0x4(%esp)
 879acba:	e8 b1 45 fc ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 879acbf:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 879acc2:	89 14 24             	mov    %edx,(%esp)
 879acc5:	e8 66 3f fc ff       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 879acca:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 879accd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 879acd4:	00 
 879acd5:	89 14 24             	mov    %edx,(%esp)
 879acd8:	89 44 24 08          	mov    %eax,0x8(%esp)
 879acdc:	8b 45 0c             	mov    0xc(%ebp),%eax
 879acdf:	89 44 24 04          	mov    %eax,0x4(%esp)
 879ace3:	e8 28 62 fc ff       	call   8760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>
 879ace8:	89 3c 24             	mov    %edi,(%esp)
 879aceb:	e8 40 3f fc ff       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 879acf0:	89 3c 24             	mov    %edi,(%esp)
 879acf3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 879acfa:	00 
 879acfb:	89 44 24 08          	mov    %eax,0x8(%esp)
 879acff:	8b 45 10             	mov    0x10(%ebp),%eax
 879ad02:	89 44 24 04          	mov    %eax,0x4(%esp)
 879ad06:	e8 05 62 fc ff       	call   8760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>
 879ad0b:	8b 06                	mov    (%esi),%eax
 879ad0d:	89 04 24             	mov    %eax,(%esp)
 879ad10:	e8 1b 3f fc ff       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 879ad15:	8b 16                	mov    (%esi),%edx
 879ad17:	8b 52 24             	mov    0x24(%edx),%edx
 879ad1a:	89 44 24 08          	mov    %eax,0x8(%esp)
 879ad1e:	8b 45 14             	mov    0x14(%ebp),%eax
 879ad21:	89 54 24 04          	mov    %edx,0x4(%esp)
 879ad25:	89 04 24             	mov    %eax,(%esp)
 879ad28:	e8 73 2b 8e ff       	call   807d8a0 <memcpy@plt>
 879ad2d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 879ad30:	8b 75 cc             	mov    -0x34(%ebp),%esi
 879ad33:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879ad3a:	00 
 879ad3b:	c1 e0 02             	shl    $0x2,%eax
 879ad3e:	89 34 24             	mov    %esi,(%esp)
 879ad41:	89 44 24 08          	mov    %eax,0x8(%esp)
 879ad45:	e8 76 2f 8e ff       	call   807dcc0 <memset@plt>
 879ad4a:	89 34 24             	mov    %esi,(%esp)
 879ad4d:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879ad52:	e8 c9 c9 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879ad57:	8b 45 d8             	mov    -0x28(%ebp),%eax
 879ad5a:	8b 75 dc             	mov    -0x24(%ebp),%esi
 879ad5d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879ad64:	00 
 879ad65:	c1 e0 02             	shl    $0x2,%eax
 879ad68:	89 34 24             	mov    %esi,(%esp)
 879ad6b:	89 44 24 08          	mov    %eax,0x8(%esp)
 879ad6f:	e8 4c 2f 8e ff       	call   807dcc0 <memset@plt>
 879ad74:	89 34 24             	mov    %esi,(%esp)
 879ad77:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879ad7c:	e8 9f c9 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879ad81:	83 c4 4c             	add    $0x4c,%esp
 879ad84:	5b                   	pop    %ebx
 879ad85:	5e                   	pop    %esi
 879ad86:	5f                   	pop    %edi
 879ad87:	5d                   	pop    %ebp
 879ad88:	c3                   	ret
 879ad89:	90                   	nop
 879ad8a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::DiffieHellman::get_parms @ 0x879ac80

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DiffieHellman::get_parms(unsigned char*, unsigned char*, unsigned char*) const */

void __thiscall
yaSSL::DiffieHellman::get_parms(DiffieHellman *this,uchar *param_1,uchar *param_2,uchar *param_3)

{
  undefined4 uVar1;
  size_t __n;
  uint uVar2;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  TaoCrypt::Integer::Integer((Integer *)&local_2c,*(Integer **)this);
  TaoCrypt::Integer::Integer((Integer *)&local_3c,(Integer *)(*(int *)this + 0x10));
  uVar1 = TaoCrypt::Integer::ByteCount((Integer *)&local_2c);
  TaoCrypt::Integer::Encode((Integer *)&local_2c,param_1,uVar1,0);
  uVar1 = TaoCrypt::Integer::ByteCount((Integer *)&local_3c);
  TaoCrypt::Integer::Encode((Integer *)&local_3c,param_2,uVar1,0);
  __n = TaoCrypt::Integer::ByteCount(*(Integer **)this);
  memcpy(param_3,*(void **)(*(int *)this + 0x24),__n);
  uVar2 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar2 & 0xffffff00);
  return;
}

```

---

## get_publicKey

```asm
// === 087985d0 yaSSL::DiffieHellman::get_publicKey  [0x087985d0-0x87985df] ===
 87985d0:	55                   	push   %ebp
 87985d1:	89 e5                	mov    %esp,%ebp
 87985d3:	8b 45 08             	mov    0x8(%ebp),%eax
 87985d6:	5d                   	pop    %ebp
 87985d7:	8b 00                	mov    (%eax),%eax
 87985d9:	8b 40 24             	mov    0x24(%eax),%eax
 87985dc:	c3                   	ret
 87985dd:	90                   	nop
 87985de:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::DiffieHellman::get_publicKey @ 0x87985d0

/* yaSSL::DiffieHellman::get_publicKey() const */

undefined4 __thiscall yaSSL::DiffieHellman::get_publicKey(DiffieHellman *this)

{
  return *(undefined4 *)(*(int *)this + 0x24);
}

```

---

## makeAgreement

```asm
// === 08798eb0 yaSSL::DiffieHellman::makeAgreement  [0x08798eb0-0x8798eff] ===
 8798eb0:	55                   	push   %ebp
 8798eb1:	89 e5                	mov    %esp,%ebp
 8798eb3:	53                   	push   %ebx
 8798eb4:	83 ec 24             	sub    $0x24,%esp
 8798eb7:	8b 55 10             	mov    0x10(%ebp),%edx
 8798eba:	8b 45 08             	mov    0x8(%ebp),%eax
 8798ebd:	e8 36 9f f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8798ec2:	81 c3 d6 3c bd 00    	add    $0xbd3cd6,%ebx
 8798ec8:	8b 00                	mov    (%eax),%eax
 8798eca:	89 54 24 10          	mov    %edx,0x10(%esp)
 8798ece:	8b 55 0c             	mov    0xc(%ebp),%edx
 8798ed1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8798ed5:	8b 50 28             	mov    0x28(%eax),%edx
 8798ed8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8798edc:	8b 50 2c             	mov    0x2c(%eax),%edx
 8798edf:	89 04 24             	mov    %eax,(%esp)
 8798ee2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8798ee6:	e8 35 f9 00 00       	call   87a8820 <_ZN8TaoCrypt2DH5AgreeEPhPKhS3_j>
 8798eeb:	83 c4 24             	add    $0x24,%esp
 8798eee:	5b                   	pop    %ebx
 8798eef:	5d                   	pop    %ebp
 8798ef0:	c3                   	ret
 8798ef1:	90                   	nop
 8798ef2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8798ef9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::DiffieHellman::makeAgreement @ 0x8798eb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DiffieHellman::makeAgreement(unsigned char const*, unsigned int) */

void __thiscall yaSSL::DiffieHellman::makeAgreement(DiffieHellman *this,uchar *param_1,uint param_2)

{
  DH *this_00;
  
  this_00 = *(DH **)this;
  TaoCrypt::DH::Agree(this_00,*(uchar **)(this_00 + 0x2c),*(uchar **)(this_00 + 0x28),param_1,
                      param_2);
  return;
}

```

---

## operator=

```asm
// === 0879ad90 yaSSL::DiffieHellman::operator=  [0x0879ad90-0x879ae7f] ===
 879ad90:	55                   	push   %ebp
 879ad91:	89 e5                	mov    %esp,%ebp
 879ad93:	57                   	push   %edi
 879ad94:	56                   	push   %esi
 879ad95:	53                   	push   %ebx
 879ad96:	83 ec 4c             	sub    $0x4c,%esp
 879ad99:	8b 45 0c             	mov    0xc(%ebp),%eax
 879ad9c:	e8 57 80 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879ada1:	81 c3 f7 1d bd 00    	add    $0xbd1df7,%ebx
 879ada7:	8b 75 08             	mov    0x8(%ebp),%esi
 879adaa:	8d 55 c8             	lea    -0x38(%ebp),%edx
 879adad:	89 55 c0             	mov    %edx,-0x40(%ebp)
 879adb0:	8b 00                	mov    (%eax),%eax
 879adb2:	8b 3e                	mov    (%esi),%edi
 879adb4:	89 14 24             	mov    %edx,(%esp)
 879adb7:	89 44 24 04          	mov    %eax,0x4(%esp)
 879adbb:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 879adbe:	e8 ad 44 fc ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 879adc3:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 879adc6:	83 c0 10             	add    $0x10,%eax
 879adc9:	89 44 24 04          	mov    %eax,0x4(%esp)
 879adcd:	8d 45 d8             	lea    -0x28(%ebp),%eax
 879add0:	89 04 24             	mov    %eax,(%esp)
 879add3:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 879add6:	e8 95 44 fc ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 879addb:	8b 55 c0             	mov    -0x40(%ebp),%edx
 879adde:	89 3c 24             	mov    %edi,(%esp)
 879ade1:	83 c7 10             	add    $0x10,%edi
 879ade4:	89 54 24 04          	mov    %edx,0x4(%esp)
 879ade8:	e8 a3 27 fc ff       	call   875d590 <_ZN8TaoCrypt7Integer4SwapERS0_>
 879aded:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 879adf0:	89 3c 24             	mov    %edi,(%esp)
 879adf3:	89 44 24 04          	mov    %eax,0x4(%esp)
 879adf7:	e8 94 27 fc ff       	call   875d590 <_ZN8TaoCrypt7Integer4SwapERS0_>
 879adfc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 879adff:	8b 7d dc             	mov    -0x24(%ebp),%edi
 879ae02:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879ae09:	00 
 879ae0a:	c1 e0 02             	shl    $0x2,%eax
 879ae0d:	89 3c 24             	mov    %edi,(%esp)
 879ae10:	89 44 24 08          	mov    %eax,0x8(%esp)
 879ae14:	e8 a7 2e 8e ff       	call   807dcc0 <memset@plt>
 879ae19:	89 3c 24             	mov    %edi,(%esp)
 879ae1c:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879ae21:	e8 fa c8 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879ae26:	8b 45 c8             	mov    -0x38(%ebp),%eax
 879ae29:	8b 7d cc             	mov    -0x34(%ebp),%edi
 879ae2c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879ae33:	00 
 879ae34:	c1 e0 02             	shl    $0x2,%eax
 879ae37:	89 3c 24             	mov    %edi,(%esp)
 879ae3a:	89 44 24 08          	mov    %eax,0x8(%esp)
 879ae3e:	e8 7d 2e 8e ff       	call   807dcc0 <memset@plt>
 879ae43:	89 3c 24             	mov    %edi,(%esp)
 879ae46:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879ae4b:	e8 d0 c8 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879ae50:	8b 06                	mov    (%esi),%eax
 879ae52:	8b 50 24             	mov    0x24(%eax),%edx
 879ae55:	89 54 24 0c          	mov    %edx,0xc(%esp)
 879ae59:	8b 50 28             	mov    0x28(%eax),%edx
 879ae5c:	89 54 24 08          	mov    %edx,0x8(%esp)
 879ae60:	8b 50 20             	mov    0x20(%eax),%edx
 879ae63:	89 04 24             	mov    %eax,(%esp)
 879ae66:	89 54 24 04          	mov    %edx,0x4(%esp)
 879ae6a:	e8 01 de 00 00       	call   87a8c70 <_ZN8TaoCrypt2DH15GenerateKeyPairERNS_21RandomNumberGeneratorEPhS3_>
 879ae6f:	83 c4 4c             	add    $0x4c,%esp
 879ae72:	89 f0                	mov    %esi,%eax
 879ae74:	5b                   	pop    %ebx
 879ae75:	5e                   	pop    %esi
 879ae76:	5f                   	pop    %edi
 879ae77:	5d                   	pop    %ebp
 879ae78:	c3                   	ret
 879ae79:	90                   	nop
 879ae7a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::DiffieHellman::operator= @ 0x879ad90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DiffieHellman::TEMPNAMEPLACEHOLDERVALUE(yaSSL::DiffieHellman const&) */

DiffieHellman * __thiscall
yaSSL::DiffieHellman::operator=(DiffieHellman *this,DiffieHellman *param_1)

{
  Integer *pIVar1;
  Integer *this_00;
  DH *this_01;
  uint uVar2;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  pIVar1 = *(Integer **)param_1;
  this_00 = *(Integer **)this;
  TaoCrypt::Integer::Integer((Integer *)&local_3c,pIVar1);
  TaoCrypt::Integer::Integer((Integer *)&local_2c,pIVar1 + 0x10);
  TaoCrypt::Integer::Swap(this_00,(Integer *)&local_3c);
  TaoCrypt::Integer::Swap(this_00 + 0x10,(Integer *)&local_2c);
  uVar2 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar2 & 0xffffff00);
  this_01 = *(DH **)this;
  TaoCrypt::DH::GenerateKeyPair
            (this_01,*(RandomNumberGenerator **)(this_01 + 0x20),*(uchar **)(this_01 + 0x28),
             *(uchar **)(this_01 + 0x24));
  return this;
}

```

---

## set_sizes

```asm
// === 0879abb0 yaSSL::DiffieHellman::set_sizes  [0x0879abb0-0x879ac7f] ===
 879abb0:	55                   	push   %ebp
 879abb1:	89 e5                	mov    %esp,%ebp
 879abb3:	57                   	push   %edi
 879abb4:	56                   	push   %esi
 879abb5:	53                   	push   %ebx
 879abb6:	83 ec 4c             	sub    $0x4c,%esp
 879abb9:	8b 75 08             	mov    0x8(%ebp),%esi
 879abbc:	e8 37 82 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879abc1:	81 c3 d7 1f bd 00    	add    $0xbd1fd7,%ebx
 879abc7:	8d 7d c8             	lea    -0x38(%ebp),%edi
 879abca:	8b 06                	mov    (%esi),%eax
 879abcc:	89 44 24 04          	mov    %eax,0x4(%esp)
 879abd0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 879abd3:	89 04 24             	mov    %eax,(%esp)
 879abd6:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 879abd9:	e8 92 46 fc ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 879abde:	8b 16                	mov    (%esi),%edx
 879abe0:	89 3c 24             	mov    %edi,(%esp)
 879abe3:	83 c2 10             	add    $0x10,%edx
 879abe6:	89 54 24 04          	mov    %edx,0x4(%esp)
 879abea:	e8 81 46 fc ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 879abef:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 879abf2:	89 04 24             	mov    %eax,(%esp)
 879abf5:	e8 36 40 fc ff       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 879abfa:	8b 55 0c             	mov    0xc(%ebp),%edx
 879abfd:	89 02                	mov    %eax,(%edx)
 879abff:	89 3c 24             	mov    %edi,(%esp)
 879ac02:	e8 29 40 fc ff       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 879ac07:	8b 55 10             	mov    0x10(%ebp),%edx
 879ac0a:	89 02                	mov    %eax,(%edx)
 879ac0c:	8b 06                	mov    (%esi),%eax
 879ac0e:	89 04 24             	mov    %eax,(%esp)
 879ac11:	e8 1a 40 fc ff       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 879ac16:	8b 55 14             	mov    0x14(%ebp),%edx
 879ac19:	8b 75 cc             	mov    -0x34(%ebp),%esi
 879ac1c:	89 02                	mov    %eax,(%edx)
 879ac1e:	8b 45 c8             	mov    -0x38(%ebp),%eax
 879ac21:	89 34 24             	mov    %esi,(%esp)
 879ac24:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879ac2b:	00 
 879ac2c:	c1 e0 02             	shl    $0x2,%eax
 879ac2f:	89 44 24 08          	mov    %eax,0x8(%esp)
 879ac33:	e8 88 30 8e ff       	call   807dcc0 <memset@plt>
 879ac38:	89 34 24             	mov    %esi,(%esp)
 879ac3b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879ac40:	e8 db ca fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879ac45:	8b 45 d8             	mov    -0x28(%ebp),%eax
 879ac48:	8b 75 dc             	mov    -0x24(%ebp),%esi
 879ac4b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879ac52:	00 
 879ac53:	c1 e0 02             	shl    $0x2,%eax
 879ac56:	89 34 24             	mov    %esi,(%esp)
 879ac59:	89 44 24 08          	mov    %eax,0x8(%esp)
 879ac5d:	e8 5e 30 8e ff       	call   807dcc0 <memset@plt>
 879ac62:	89 34 24             	mov    %esi,(%esp)
 879ac65:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879ac6a:	e8 b1 ca fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879ac6f:	83 c4 4c             	add    $0x4c,%esp
 879ac72:	5b                   	pop    %ebx
 879ac73:	5e                   	pop    %esi
 879ac74:	5f                   	pop    %edi
 879ac75:	5d                   	pop    %ebp
 879ac76:	c3                   	ret
 879ac77:	90                   	nop
 879ac78:	90                   	nop
 879ac79:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::DiffieHellman::set_sizes @ 0x879abb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DiffieHellman::set_sizes(int&, int&, int&) const */

void __thiscall
yaSSL::DiffieHellman::set_sizes(DiffieHellman *this,int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  TaoCrypt::Integer::Integer((Integer *)&local_2c,*(Integer **)this);
  TaoCrypt::Integer::Integer((Integer *)&local_3c,(Integer *)(*(int *)this + 0x10));
  iVar1 = TaoCrypt::Integer::ByteCount((Integer *)&local_2c);
  *param_1 = iVar1;
  iVar1 = TaoCrypt::Integer::ByteCount((Integer *)&local_3c);
  *param_2 = iVar1;
  iVar1 = TaoCrypt::Integer::ByteCount(*(Integer **)this);
  *param_3 = iVar1;
  uVar2 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar2 & 0xffffff00);
  return;
}

```

---

## ~DiffieHellman

```asm
// === 0879aef0 yaSSL::DiffieHellman::~DiffieHellman  [0x0879aef0-0x879afbf] ===
 879aef0:	55                   	push   %ebp
 879aef1:	89 e5                	mov    %esp,%ebp
 879aef3:	83 ec 28             	sub    $0x28,%esp
 879aef6:	8b 45 08             	mov    0x8(%ebp),%eax
 879aef9:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879aefc:	89 75 f8             	mov    %esi,-0x8(%ebp)
 879aeff:	89 7d fc             	mov    %edi,-0x4(%ebp)
 879af02:	8b 30                	mov    (%eax),%esi
 879af04:	e8 ef 7e f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879af09:	81 c3 8f 1c bd 00    	add    $0xbd1c8f,%ebx
 879af0f:	85 f6                	test   %esi,%esi
 879af11:	0f 84 83 00 00 00    	je     879af9a <_ZN5yaSSL13DiffieHellmanD1Ev+0xaa>
 879af17:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879af1c:	8b 46 2c             	mov    0x2c(%esi),%eax
 879af1f:	89 04 24             	mov    %eax,(%esp)
 879af22:	e8 c9 59 fb ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 879af27:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879af2c:	8b 46 28             	mov    0x28(%esi),%eax
 879af2f:	89 04 24             	mov    %eax,(%esp)
 879af32:	e8 b9 59 fb ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 879af37:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879af3c:	8b 46 24             	mov    0x24(%esi),%eax
 879af3f:	89 04 24             	mov    %eax,(%esp)
 879af42:	e8 a9 59 fb ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 879af47:	8b 46 10             	mov    0x10(%esi),%eax
 879af4a:	8b 7e 14             	mov    0x14(%esi),%edi
 879af4d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879af54:	00 
 879af55:	c1 e0 02             	shl    $0x2,%eax
 879af58:	89 3c 24             	mov    %edi,(%esp)
 879af5b:	89 44 24 08          	mov    %eax,0x8(%esp)
 879af5f:	e8 5c 2d 8e ff       	call   807dcc0 <memset@plt>
 879af64:	89 3c 24             	mov    %edi,(%esp)
 879af67:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879af6c:	e8 af c7 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879af71:	8b 06                	mov    (%esi),%eax
 879af73:	8b 7e 04             	mov    0x4(%esi),%edi
 879af76:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879af7d:	00 
 879af7e:	c1 e0 02             	shl    $0x2,%eax
 879af81:	89 44 24 08          	mov    %eax,0x8(%esp)
 879af85:	89 3c 24             	mov    %edi,(%esp)
 879af88:	e8 33 2d 8e ff       	call   807dcc0 <memset@plt>
 879af8d:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879af92:	89 3c 24             	mov    %edi,(%esp)
 879af95:	e8 86 c7 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879af9a:	89 34 24             	mov    %esi,(%esp)
 879af9d:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879afa2:	e8 79 58 fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 879afa7:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879afaa:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879afad:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879afb0:	89 ec                	mov    %ebp,%esp
 879afb2:	5d                   	pop    %ebp
 879afb3:	c3                   	ret
 879afb4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 879afba:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::DiffieHellman::~DiffieHellman @ 0x879aef0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DiffieHellman::~DiffieHellman() */

void __thiscall yaSSL::DiffieHellman::~DiffieHellman(DiffieHellman *this)

{
  int *piVar1;
  void *pvVar2;
  uint in_stack_ffffffd8;
  uint uVar3;
  
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    uVar3 = in_stack_ffffffd8 & 0xffffff00;
    operator_delete__(piVar1[0xb],uVar3);
    uVar3 = uVar3 & 0xffffff00;
    operator_delete__(piVar1[10],uVar3);
    operator_delete__(piVar1[9],uVar3 & 0xffffff00);
    pvVar2 = (void *)piVar1[5];
    uVar3 = 0;
    memset(pvVar2,0,piVar1[4] << 2);
    operator_delete__(pvVar2,uVar3 & 0xffffff00);
    pvVar2 = (void *)piVar1[1];
    uVar3 = 0;
    memset(pvVar2,0,*piVar1 << 2);
    in_stack_ffffffd8 = uVar3 & 0xffffff00;
    operator_delete__(pvVar2,in_stack_ffffffd8);
  }
  operator_delete(piVar1,in_stack_ffffffd8 & 0xffffff00);
  return;
}

```

