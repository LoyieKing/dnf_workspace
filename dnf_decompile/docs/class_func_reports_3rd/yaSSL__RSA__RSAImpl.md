# yaSSL__RSA__RSAImpl

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## SetPrivate

```asm
// === 0879b0b0 yaSSL::RSA::RSAImpl::SetPrivate  [0x0879b0b0-0x879b25f] ===
 879b0b0:	55                   	push   %ebp
 879b0b1:	31 c0                	xor    %eax,%eax
 879b0b3:	89 e5                	mov    %esp,%ebp
 879b0b5:	57                   	push   %edi
 879b0b6:	56                   	push   %esi
 879b0b7:	53                   	push   %ebx
 879b0b8:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 879b0be:	8b 55 10             	mov    0x10(%ebp),%edx
 879b0c1:	e8 32 7d f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879b0c6:	81 c3 d2 1a bd 00    	add    $0xbd1ad2,%ebx
 879b0cc:	8b 75 08             	mov    0x8(%ebp),%esi
 879b0cf:	85 d2                	test   %edx,%edx
 879b0d1:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 879b0d4:	74 10                	je     879b0e6 <_ZN5yaSSL3RSA7RSAImpl10SetPrivateEPKhj+0x36>
 879b0d6:	89 14 24             	mov    %edx,(%esp)
 879b0d9:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879b0de:	e8 ad c6 fc ff       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 879b0e3:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 879b0e6:	89 54 24 08          	mov    %edx,0x8(%esp)
 879b0ea:	8b 55 0c             	mov    0xc(%ebp),%edx
 879b0ed:	8d 7e 20             	lea    0x20(%esi),%edi
 879b0f0:	89 45 d8             	mov    %eax,-0x28(%ebp)
 879b0f3:	89 04 24             	mov    %eax,(%esp)
 879b0f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 879b0fa:	e8 a1 27 8e ff       	call   807d8a0 <memcpy@plt>
 879b0ff:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 879b102:	89 44 24 04          	mov    %eax,0x4(%esp)
 879b106:	89 3c 24             	mov    %edi,(%esp)
 879b109:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 879b110:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 879b117:	e8 84 cb fc ff       	call   8767ca0 <_ZN8TaoCrypt14RSA_PrivateKey10InitializeERNS_6SourceE>
 879b11c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 879b11f:	89 04 24             	mov    %eax,(%esp)
 879b122:	89 45 84             	mov    %eax,-0x7c(%ebp)
 879b125:	89 7c 24 04          	mov    %edi,0x4(%esp)
 879b129:	8d 7d c4             	lea    -0x3c(%ebp),%edi
 879b12c:	e8 3f 41 fc ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 879b131:	8d 56 30             	lea    0x30(%esi),%edx
 879b134:	89 54 24 04          	mov    %edx,0x4(%esp)
 879b138:	89 3c 24             	mov    %edi,(%esp)
 879b13b:	e8 30 41 fc ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 879b140:	8b 45 84             	mov    -0x7c(%ebp),%eax
 879b143:	89 44 24 04          	mov    %eax,0x4(%esp)
 879b147:	8d 45 94             	lea    -0x6c(%ebp),%eax
 879b14a:	89 04 24             	mov    %eax,(%esp)
 879b14d:	89 45 84             	mov    %eax,-0x7c(%ebp)
 879b150:	e8 1b 41 fc ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 879b155:	89 7c 24 04          	mov    %edi,0x4(%esp)
 879b159:	8d 7d a4             	lea    -0x5c(%ebp),%edi
 879b15c:	89 3c 24             	mov    %edi,(%esp)
 879b15f:	e8 0c 41 fc ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 879b164:	8b 45 84             	mov    -0x7c(%ebp),%eax
 879b167:	89 34 24             	mov    %esi,(%esp)
 879b16a:	83 c6 10             	add    $0x10,%esi
 879b16d:	89 44 24 04          	mov    %eax,0x4(%esp)
 879b171:	e8 1a 24 fc ff       	call   875d590 <_ZN8TaoCrypt7Integer4SwapERS0_>
 879b176:	89 7c 24 04          	mov    %edi,0x4(%esp)
 879b17a:	89 34 24             	mov    %esi,(%esp)
 879b17d:	e8 0e 24 fc ff       	call   875d590 <_ZN8TaoCrypt7Integer4SwapERS0_>
 879b182:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 879b185:	8b 75 a8             	mov    -0x58(%ebp),%esi
 879b188:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879b18f:	00 
 879b190:	c1 e0 02             	shl    $0x2,%eax
 879b193:	89 34 24             	mov    %esi,(%esp)
 879b196:	89 44 24 08          	mov    %eax,0x8(%esp)
 879b19a:	e8 21 2b 8e ff       	call   807dcc0 <memset@plt>
 879b19f:	89 34 24             	mov    %esi,(%esp)
 879b1a2:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879b1a7:	e8 74 c5 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879b1ac:	8b 45 94             	mov    -0x6c(%ebp),%eax
 879b1af:	8b 75 98             	mov    -0x68(%ebp),%esi
 879b1b2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879b1b9:	00 
 879b1ba:	c1 e0 02             	shl    $0x2,%eax
 879b1bd:	89 34 24             	mov    %esi,(%esp)
 879b1c0:	89 44 24 08          	mov    %eax,0x8(%esp)
 879b1c4:	e8 f7 2a 8e ff       	call   807dcc0 <memset@plt>
 879b1c9:	89 34 24             	mov    %esi,(%esp)
 879b1cc:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879b1d1:	e8 4a c5 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879b1d6:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 879b1d9:	8b 75 c8             	mov    -0x38(%ebp),%esi
 879b1dc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879b1e3:	00 
 879b1e4:	c1 e0 02             	shl    $0x2,%eax
 879b1e7:	89 34 24             	mov    %esi,(%esp)
 879b1ea:	89 44 24 08          	mov    %eax,0x8(%esp)
 879b1ee:	e8 cd 2a 8e ff       	call   807dcc0 <memset@plt>
 879b1f3:	89 34 24             	mov    %esi,(%esp)
 879b1f6:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879b1fb:	e8 20 c5 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879b200:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 879b203:	8b 75 b8             	mov    -0x48(%ebp),%esi
 879b206:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879b20d:	00 
 879b20e:	c1 e0 02             	shl    $0x2,%eax
 879b211:	89 34 24             	mov    %esi,(%esp)
 879b214:	89 44 24 08          	mov    %eax,0x8(%esp)
 879b218:	e8 a3 2a 8e ff       	call   807dcc0 <memset@plt>
 879b21d:	89 34 24             	mov    %esi,(%esp)
 879b220:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879b225:	e8 f6 c4 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879b22a:	8b 75 d8             	mov    -0x28(%ebp),%esi
 879b22d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 879b230:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879b237:	00 
 879b238:	89 34 24             	mov    %esi,(%esp)
 879b23b:	89 44 24 08          	mov    %eax,0x8(%esp)
 879b23f:	e8 7c 2a 8e ff       	call   807dcc0 <memset@plt>
 879b244:	89 34 24             	mov    %esi,(%esp)
 879b247:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879b24c:	e8 cf c4 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879b251:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 879b257:	5b                   	pop    %ebx
 879b258:	5e                   	pop    %esi
 879b259:	5f                   	pop    %edi
 879b25a:	5d                   	pop    %ebp
 879b25b:	c3                   	ret
 879b25c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::RSA::RSAImpl::SetPrivate @ 0x879b0b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RSA::RSAImpl::SetPrivate(unsigned char const*, unsigned int) */

void __thiscall yaSSL::RSA::RSAImpl::SetPrivate(RSAImpl *this,uchar *param_1,uint param_2)

{
  void *pvVar1;
  uint in_stack_ffffff68;
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
    local_2c = operator_new__(param_2,in_stack_ffffff68 & 0xffffff00);
  }
  memcpy(local_2c,param_1,local_30);
  local_24 = 0;
  local_20 = 0;
  TaoCrypt::RSA_PrivateKey::Initialize((RSA_PrivateKey *)(this + 0x20),(Source *)&local_30);
  TaoCrypt::Integer::Integer((Integer *)&local_50,(Integer *)(this + 0x20));
  TaoCrypt::Integer::Integer((Integer *)&local_40,(Integer *)(this + 0x30));
  TaoCrypt::Integer::Integer((Integer *)&local_70,(Integer *)&local_50);
  TaoCrypt::Integer::Integer((Integer *)&local_60,(Integer *)&local_40);
  TaoCrypt::Integer::Swap((Integer *)this,(Integer *)&local_70);
  TaoCrypt::Integer::Swap((Integer *)(this + 0x10),(Integer *)&local_60);
  uVar2 = 0;
  memset(local_5c,0,local_60 << 2);
  operator_delete__(local_5c,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_6c,0,local_70 << 2);
  operator_delete__(local_6c,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_3c,0,local_40 << 2);
  operator_delete__(local_3c,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_4c,0,local_50 << 2);
  operator_delete__(local_4c,uVar2 & 0xffffff00);
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
// === 0879a550 yaSSL::RSA::RSAImpl::SetPublic  [0x0879a550-0x879a5ef] ===
 879a550:	55                   	push   %ebp
 879a551:	31 c0                	xor    %eax,%eax
 879a553:	89 e5                	mov    %esp,%ebp
 879a555:	56                   	push   %esi
 879a556:	53                   	push   %ebx
 879a557:	83 ec 30             	sub    $0x30,%esp
 879a55a:	8b 55 10             	mov    0x10(%ebp),%edx
 879a55d:	e8 96 88 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879a562:	81 c3 36 26 bd 00    	add    $0xbd2636,%ebx
 879a568:	85 d2                	test   %edx,%edx
 879a56a:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 879a56d:	74 10                	je     879a57f <_ZN5yaSSL3RSA7RSAImpl9SetPublicEPKhj+0x2f>
 879a56f:	89 14 24             	mov    %edx,(%esp)
 879a572:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879a577:	e8 14 d2 fc ff       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 879a57c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 879a57f:	89 54 24 08          	mov    %edx,0x8(%esp)
 879a583:	8b 55 0c             	mov    0xc(%ebp),%edx
 879a586:	89 45 e8             	mov    %eax,-0x18(%ebp)
 879a589:	89 04 24             	mov    %eax,(%esp)
 879a58c:	89 54 24 04          	mov    %edx,0x4(%esp)
 879a590:	e8 0b 33 8e ff       	call   807d8a0 <memcpy@plt>
 879a595:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 879a598:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a59c:	8b 45 08             	mov    0x8(%ebp),%eax
 879a59f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 879a5a6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 879a5ad:	89 04 24             	mov    %eax,(%esp)
 879a5b0:	e8 bb d7 fc ff       	call   8767d70 <_ZN8TaoCrypt13RSA_PublicKey10InitializeERNS_6SourceE>
 879a5b5:	8b 75 e8             	mov    -0x18(%ebp),%esi
 879a5b8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879a5bb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879a5c2:	00 
 879a5c3:	89 34 24             	mov    %esi,(%esp)
 879a5c6:	89 44 24 08          	mov    %eax,0x8(%esp)
 879a5ca:	e8 f1 36 8e ff       	call   807dcc0 <memset@plt>
 879a5cf:	89 34 24             	mov    %esi,(%esp)
 879a5d2:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879a5d7:	e8 44 d1 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879a5dc:	83 c4 30             	add    $0x30,%esp
 879a5df:	5b                   	pop    %ebx
 879a5e0:	5e                   	pop    %esi
 879a5e1:	5d                   	pop    %ebp
 879a5e2:	c3                   	ret
 879a5e3:	90                   	nop
 879a5e4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 879a5ea:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::RSA::RSAImpl::SetPublic @ 0x879a550

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RSA::RSAImpl::SetPublic(unsigned char const*, unsigned int) */

void __thiscall yaSSL::RSA::RSAImpl::SetPublic(RSAImpl *this,uchar *param_1,uint param_2)

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
  TaoCrypt::RSA_PublicKey::Initialize((RSA_PublicKey *)this,(Source *)&local_20);
  pvVar1 = local_1c;
  uVar2 = 0;
  memset(local_1c,0,local_20);
  operator_delete__(pvVar1,uVar2 & 0xffffff00);
  return;
}

```

