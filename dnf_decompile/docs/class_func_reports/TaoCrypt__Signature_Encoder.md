# TaoCrypt__Signature_Encoder

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## SetDigest

```asm
// === 08753c50 TaoCrypt::Signature_Encoder::SetDigest  [0x08753c50-0x8753c9f] ===
 8753c50:	55                   	push   %ebp
 8753c51:	89 e5                	mov    %esp,%ebp
 8753c53:	83 ec 18             	sub    $0x18,%esp
 8753c56:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8753c59:	8b 75 10             	mov    0x10(%ebp),%esi
 8753c5c:	8b 45 14             	mov    0x14(%ebp),%eax
 8753c5f:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8753c62:	e8 91 f1 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8753c67:	81 c3 31 8f c1 00    	add    $0xc18f31,%ebx
 8753c6d:	89 f2                	mov    %esi,%edx
 8753c6f:	c6 00 04             	movb   $0x4,(%eax)
 8753c72:	88 50 01             	mov    %dl,0x1(%eax)
 8753c75:	8b 55 0c             	mov    0xc(%ebp),%edx
 8753c78:	83 c0 02             	add    $0x2,%eax
 8753c7b:	89 74 24 08          	mov    %esi,0x8(%esp)
 8753c7f:	89 04 24             	mov    %eax,(%esp)
 8753c82:	89 54 24 04          	mov    %edx,0x4(%esp)
 8753c86:	e8 15 9c 92 ff       	call   807d8a0 <memcpy@plt>
 8753c8b:	8d 46 02             	lea    0x2(%esi),%eax
 8753c8e:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8753c91:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8753c94:	89 ec                	mov    %ebp,%esp
 8753c96:	5d                   	pop    %ebp
 8753c97:	c3                   	ret
 8753c98:	90                   	nop
 8753c99:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::Signature_Encoder::SetDigest @ 0x8753c50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Signature_Encoder::SetDigest(unsigned char const*, unsigned int, unsigned char*) */

int __thiscall
TaoCrypt::Signature_Encoder::SetDigest
          (Signature_Encoder *this,uchar *param_1,uint param_2,uchar *param_3)

{
  *param_3 = '\x04';
  param_3[1] = (uchar)param_2;
  memcpy(param_3 + 2,param_1,param_2);
  return param_2 + 2;
}

```

---

## Signature_Encoder

```asm
// === 087552e0 TaoCrypt::Signature_Encoder::Signature_Encoder  [0x087552e0-0x875549f] ===
 87552e0:	55                   	push   %ebp
 87552e1:	89 e5                	mov    %esp,%ebp
 87552e3:	57                   	push   %edi
 87552e4:	56                   	push   %esi
 87552e5:	53                   	push   %ebx
 87552e6:	e8 0d db fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87552eb:	81 c3 ad 78 c1 00    	add    $0xc178ad,%ebx
 87552f1:	83 ec 7c             	sub    $0x7c,%esp
 87552f4:	8b 55 08             	mov    0x8(%ebp),%edx
 87552f7:	8b 75 18             	mov    0x18(%ebp),%esi
 87552fa:	c7 42 04 00 00 00 00 	movl   $0x0,0x4(%edx)
 8755301:	89 55 98             	mov    %edx,-0x68(%ebp)
 8755304:	8b 83 5c fd ff ff    	mov    -0x2a4(%ebx),%eax
 875530a:	83 c0 08             	add    $0x8,%eax
 875530d:	89 02                	mov    %eax,(%edx)
 875530f:	8d 45 ba             	lea    -0x46(%ebp),%eax
 8755312:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8755315:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8755319:	8b 45 10             	mov    0x10(%ebp),%eax
 875531c:	89 14 24             	mov    %edx,(%esp)
 875531f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8755323:	8b 45 0c             	mov    0xc(%ebp),%eax
 8755326:	89 44 24 04          	mov    %eax,0x4(%esp)
 875532a:	e8 21 e9 ff ff       	call   8753c50 <_ZN8TaoCrypt17Signature_Encoder9SetDigestEPKhjPh>
 875532f:	8b 55 98             	mov    -0x68(%ebp),%edx
 8755332:	8d 4d d3             	lea    -0x2d(%ebp),%ecx
 8755335:	89 4d a4             	mov    %ecx,-0x5c(%ebp)
 8755338:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875533c:	89 14 24             	mov    %edx,(%esp)
 875533f:	89 c7                	mov    %eax,%edi
 8755341:	8b 45 14             	mov    0x14(%ebp),%eax
 8755344:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755348:	e8 b3 f3 ff ff       	call   8754700 <_ZN8TaoCrypt11DER_Encoder9SetAlgoIDENS_8HashTypeEPh>
 875534d:	89 c1                	mov    %eax,%ecx
 875534f:	01 f9                	add    %edi,%ecx
 8755351:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8755354:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 8755357:	89 0c 24             	mov    %ecx,(%esp)
 875535a:	89 4d 94             	mov    %ecx,-0x6c(%ebp)
 875535d:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8755360:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755364:	e8 07 f2 ff ff       	call   8754570 <_ZN8TaoCrypt11SetSequenceEjPh>
 8755369:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 875536c:	89 c2                	mov    %eax,%edx
 875536e:	01 c1                	add    %eax,%ecx
 8755370:	8b 06                	mov    (%esi),%eax
 8755372:	39 c1                	cmp    %eax,%ecx
 8755374:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8755377:	77 6f                	ja     87553e8 <_ZN8TaoCrypt17Signature_EncoderC1EPKhjNS_8HashTypeERNS_6SourceE+0x108>
 8755379:	8b 46 04             	mov    0x4(%esi),%eax
 875537c:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 875537f:	03 46 0c             	add    0xc(%esi),%eax
 8755382:	89 55 98             	mov    %edx,-0x68(%ebp)
 8755385:	89 54 24 08          	mov    %edx,0x8(%esp)
 8755389:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875538d:	89 04 24             	mov    %eax,(%esp)
 8755390:	e8 0b 85 92 ff       	call   807d8a0 <memcpy@plt>
 8755395:	8b 55 98             	mov    -0x68(%ebp),%edx
 8755398:	03 56 0c             	add    0xc(%esi),%edx
 875539b:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 875539e:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 87553a1:	89 56 0c             	mov    %edx,0xc(%esi)
 87553a4:	03 56 04             	add    0x4(%esi),%edx
 87553a7:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87553ab:	89 44 24 08          	mov    %eax,0x8(%esp)
 87553af:	89 14 24             	mov    %edx,(%esp)
 87553b2:	e8 e9 84 92 ff       	call   807d8a0 <memcpy@plt>
 87553b7:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 87553ba:	03 46 0c             	add    0xc(%esi),%eax
 87553bd:	8b 55 a8             	mov    -0x58(%ebp),%edx
 87553c0:	89 46 0c             	mov    %eax,0xc(%esi)
 87553c3:	03 46 04             	add    0x4(%esi),%eax
 87553c6:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87553ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 87553ce:	89 04 24             	mov    %eax,(%esp)
 87553d1:	e8 ca 84 92 ff       	call   807d8a0 <memcpy@plt>
 87553d6:	01 7e 0c             	add    %edi,0xc(%esi)
 87553d9:	83 c4 7c             	add    $0x7c,%esp
 87553dc:	5b                   	pop    %ebx
 87553dd:	5e                   	pop    %esi
 87553de:	5f                   	pop    %edi
 87553df:	5d                   	pop    %ebp
 87553e0:	c3                   	ret
 87553e1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87553e8:	8b 46 04             	mov    0x4(%esi),%eax
 87553eb:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 87553f2:	89 45 9c             	mov    %eax,-0x64(%ebp)
 87553f5:	31 c0                	xor    %eax,%eax
 87553f7:	85 c9                	test   %ecx,%ecx
 87553f9:	75 7d                	jne    8755478 <_ZN8TaoCrypt17Signature_EncoderC1EPKhjNS_8HashTypeERNS_6SourceE+0x198>
 87553fb:	89 44 24 08          	mov    %eax,0x8(%esp)
 87553ff:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8755402:	89 55 98             	mov    %edx,-0x68(%ebp)
 8755405:	89 4d 94             	mov    %ecx,-0x6c(%ebp)
 8755408:	89 44 24 04          	mov    %eax,0x4(%esp)
 875540c:	8b 45 a0             	mov    -0x60(%ebp),%eax
 875540f:	89 04 24             	mov    %eax,(%esp)
 8755412:	e8 89 84 92 ff       	call   807d8a0 <memcpy@plt>
 8755417:	8b 45 b0             	mov    -0x50(%ebp),%eax
 875541a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8755421:	00 
 8755422:	89 44 24 08          	mov    %eax,0x8(%esp)
 8755426:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8755429:	89 04 24             	mov    %eax,(%esp)
 875542c:	e8 8f 88 92 ff       	call   807dcc0 <memset@plt>
 8755431:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8755434:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8755439:	89 04 24             	mov    %eax,(%esp)
 875543c:	e8 df 22 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8755441:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8755444:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 8755447:	89 46 04             	mov    %eax,0x4(%esi)
 875544a:	89 c8                	mov    %ecx,%eax
 875544c:	2b 06                	sub    (%esi),%eax
 875544e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8755452:	8b 06                	mov    (%esi),%eax
 8755454:	03 45 a0             	add    -0x60(%ebp),%eax
 8755457:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875545e:	00 
 875545f:	89 04 24             	mov    %eax,(%esp)
 8755462:	e8 59 88 92 ff       	call   807dcc0 <memset@plt>
 8755467:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 875546a:	8b 55 98             	mov    -0x68(%ebp),%edx
 875546d:	89 0e                	mov    %ecx,(%esi)
 875546f:	e9 05 ff ff ff       	jmp    8755379 <_ZN8TaoCrypt17Signature_EncoderC1EPKhjNS_8HashTypeERNS_6SourceE+0x99>
 8755474:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8755478:	89 0c 24             	mov    %ecx,(%esp)
 875547b:	89 55 98             	mov    %edx,-0x68(%ebp)
 875547e:	89 4d 94             	mov    %ecx,-0x6c(%ebp)
 8755481:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8755486:	e8 05 23 01 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 875548b:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 875548e:	8b 55 98             	mov    -0x68(%ebp),%edx
 8755491:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8755494:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8755497:	e9 5f ff ff ff       	jmp    87553fb <_ZN8TaoCrypt17Signature_EncoderC1EPKhjNS_8HashTypeERNS_6SourceE+0x11b>
 875549c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::Signature_Encoder::Signature_Encoder @ 0x87552e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Signature_Encoder::Signature_Encoder(unsigned char const*, unsigned int,
   TaoCrypt::HashType, TaoCrypt::Source&) */

void __thiscall
TaoCrypt::Signature_Encoder::Signature_Encoder
          (Signature_Encoder *this,uchar *param_1,uint param_2,undefined4 param_4,uint *param_5)

{
  uint uVar1;
  void *__src;
  size_t __n;
  size_t __n_00;
  size_t __n_01;
  size_t __n_02;
  uint uVar2;
  uchar *puVar3;
  uint uVar4;
  void *local_64;
  uchar local_4a [25];
  undefined1 local_31 [16];
  uchar local_21 [13];
  undefined4 uStack_14;
  
  uStack_14 = 0x87552eb;
  *(undefined4 *)(this + 4) = 0;
  *(undefined **)this = PTR_vtable_0936c8f4 + 8;
  __n = SetDigest(this,param_1,param_2,local_4a);
  __n_00 = DER_Encoder::SetAlgoID((DER_Encoder *)this,param_4,local_31);
  puVar3 = local_21;
  __n_01 = SetSequence(__n_00 + __n,local_21);
  uVar2 = __n_00 + __n + __n_01;
  uVar1 = *param_5;
  if (uVar1 < uVar2) {
    __src = (void *)param_5[1];
    local_64 = (void *)0x0;
    __n_02 = 0;
    if (uVar2 != 0) {
      local_64 = operator_new__(uVar2,(uint)puVar3 & 0xffffff00);
      __n_02 = uVar1;
    }
    memcpy(local_64,__src,__n_02);
    uVar4 = 0;
    memset(__src,0,uVar1);
    operator_delete__(__src,uVar4 & 0xffffff00);
    param_5[1] = (uint)local_64;
    memset((void *)(*param_5 + (int)local_64),0,uVar2 - *param_5);
    *param_5 = uVar2;
  }
  memcpy((void *)(param_5[1] + param_5[3]),local_21,__n_01);
  uVar1 = param_5[3];
  param_5[3] = __n_01 + uVar1;
  memcpy((void *)(__n_01 + uVar1 + param_5[1]),local_31,__n_00);
  uVar1 = param_5[3];
  param_5[3] = __n_00 + uVar1;
  memcpy((void *)(__n_00 + uVar1 + param_5[1]),local_4a,__n);
  param_5[3] = param_5[3] + __n;
  return;
}

```

