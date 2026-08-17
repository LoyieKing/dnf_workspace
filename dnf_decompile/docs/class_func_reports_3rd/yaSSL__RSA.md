# yaSSL__RSA

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## RSA

```asm
// === 0879b260 yaSSL::RSA::RSA  [0x0879b260-0x879b37f] ===
 879b260:	55                   	push   %ebp
 879b261:	89 e5                	mov    %esp,%ebp
 879b263:	57                   	push   %edi
 879b264:	56                   	push   %esi
 879b265:	53                   	push   %ebx
 879b266:	e8 8d 7b f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879b26b:	81 c3 2d 19 bd 00    	add    $0xbd192d,%ebx
 879b271:	83 ec 2c             	sub    $0x2c,%esp
 879b274:	8b 75 08             	mov    0x8(%ebp),%esi
 879b277:	8b 7d 10             	mov    0x10(%ebp),%edi
 879b27a:	0f b6 55 14          	movzbl 0x14(%ebp),%edx
 879b27e:	8b 83 ac fe ff ff    	mov    -0x154(%ebx),%eax
 879b284:	83 c0 08             	add    $0x8,%eax
 879b287:	89 06                	mov    %eax,(%esi)
 879b289:	88 55 e0             	mov    %dl,-0x20(%ebp)
 879b28c:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879b291:	c7 04 24 a0 00 00 00 	movl   $0xa0,(%esp)
 879b298:	e8 03 5a fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 879b29d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 879b2a0:	89 04 24             	mov    %eax,(%esp)
 879b2a3:	e8 e8 42 fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879b2a8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879b2ab:	83 c0 10             	add    $0x10,%eax
 879b2ae:	89 04 24             	mov    %eax,(%esp)
 879b2b1:	e8 da 42 fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879b2b6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879b2b9:	83 c0 20             	add    $0x20,%eax
 879b2bc:	89 04 24             	mov    %eax,(%esp)
 879b2bf:	e8 cc 42 fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879b2c4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879b2c7:	83 c0 30             	add    $0x30,%eax
 879b2ca:	89 04 24             	mov    %eax,(%esp)
 879b2cd:	e8 be 42 fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879b2d2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879b2d5:	83 c0 40             	add    $0x40,%eax
 879b2d8:	89 04 24             	mov    %eax,(%esp)
 879b2db:	e8 b0 42 fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879b2e0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879b2e3:	83 c0 50             	add    $0x50,%eax
 879b2e6:	89 04 24             	mov    %eax,(%esp)
 879b2e9:	e8 a2 42 fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879b2ee:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879b2f1:	83 c0 60             	add    $0x60,%eax
 879b2f4:	89 04 24             	mov    %eax,(%esp)
 879b2f7:	e8 94 42 fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879b2fc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879b2ff:	83 c0 70             	add    $0x70,%eax
 879b302:	89 04 24             	mov    %eax,(%esp)
 879b305:	e8 86 42 fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879b30a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879b30d:	83 e8 80             	sub    $0xffffff80,%eax
 879b310:	89 04 24             	mov    %eax,(%esp)
 879b313:	e8 78 42 fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879b318:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879b31b:	05 90 00 00 00       	add    $0x90,%eax
 879b320:	89 04 24             	mov    %eax,(%esp)
 879b323:	e8 68 42 fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879b328:	0f b6 55 e0          	movzbl -0x20(%ebp),%edx
 879b32c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879b32f:	84 d2                	test   %dl,%dl
 879b331:	89 46 04             	mov    %eax,0x4(%esi)
 879b334:	75 22                	jne    879b358 <_ZN5yaSSL3RSAC1EPKhjb+0xf8>
 879b336:	8b 45 0c             	mov    0xc(%ebp),%eax
 879b339:	89 7c 24 08          	mov    %edi,0x8(%esp)
 879b33d:	89 44 24 04          	mov    %eax,0x4(%esp)
 879b341:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879b344:	89 04 24             	mov    %eax,(%esp)
 879b347:	e8 64 fd ff ff       	call   879b0b0 <_ZN5yaSSL3RSA7RSAImpl10SetPrivateEPKhj>
 879b34c:	83 c4 2c             	add    $0x2c,%esp
 879b34f:	5b                   	pop    %ebx
 879b350:	5e                   	pop    %esi
 879b351:	5f                   	pop    %edi
 879b352:	5d                   	pop    %ebp
 879b353:	c3                   	ret
 879b354:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 879b358:	8b 45 0c             	mov    0xc(%ebp),%eax
 879b35b:	89 7c 24 08          	mov    %edi,0x8(%esp)
 879b35f:	89 44 24 04          	mov    %eax,0x4(%esp)
 879b363:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879b366:	89 04 24             	mov    %eax,(%esp)
 879b369:	e8 e2 f1 ff ff       	call   879a550 <_ZN5yaSSL3RSA7RSAImpl9SetPublicEPKhj>
 879b36e:	83 c4 2c             	add    $0x2c,%esp
 879b371:	5b                   	pop    %ebx
 879b372:	5e                   	pop    %esi
 879b373:	5f                   	pop    %edi
 879b374:	5d                   	pop    %ebp
 879b375:	c3                   	ret
 879b376:	8d 76 00             	lea    0x0(%esi),%esi
 879b379:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::RSA::RSA @ 0x879b260

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RSA::RSA(unsigned char const*, unsigned int, bool) */

void __thiscall yaSSL::RSA::RSA(RSA *this,uchar *param_1,uint param_2,bool param_3)

{
  Integer *this_00;
  uint in_stack_ffffffc8;
  
  *(undefined **)this = PTR_vtable_0936ca44 + 8;
  this_00 = operator_new(0xa0,in_stack_ffffffc8 & 0xffffff00);
  TaoCrypt::Integer::Integer(this_00);
  TaoCrypt::Integer::Integer(this_00 + 0x10);
  TaoCrypt::Integer::Integer(this_00 + 0x20);
  TaoCrypt::Integer::Integer(this_00 + 0x30);
  TaoCrypt::Integer::Integer(this_00 + 0x40);
  TaoCrypt::Integer::Integer(this_00 + 0x50);
  TaoCrypt::Integer::Integer(this_00 + 0x60);
  TaoCrypt::Integer::Integer(this_00 + 0x70);
  TaoCrypt::Integer::Integer(this_00 + 0x80);
  TaoCrypt::Integer::Integer(this_00 + 0x90);
  *(Integer **)(this + 4) = this_00;
  if (!param_3) {
    RSAImpl::SetPrivate((RSAImpl *)this_00,param_1,param_2);
    return;
  }
  RSAImpl::SetPublic((RSAImpl *)this_00,param_1,param_2);
  return;
}

```

---

## decrypt

```asm
// === 0879bc60 yaSSL::RSA::decrypt  [0x0879bc60-0x879bcaf] ===
 879bc60:	55                   	push   %ebp
 879bc61:	89 e5                	mov    %esp,%ebp
 879bc63:	53                   	push   %ebx
 879bc64:	83 ec 34             	sub    $0x34,%esp
 879bc67:	8b 45 08             	mov    0x8(%ebp),%eax
 879bc6a:	e8 89 71 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879bc6f:	81 c3 29 0f bd 00    	add    $0xbd0f29,%ebx
 879bc75:	8b 40 04             	mov    0x4(%eax),%eax
 879bc78:	83 c0 20             	add    $0x20,%eax
 879bc7b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 879bc7e:	8b 45 18             	mov    0x18(%ebp),%eax
 879bc81:	8b 00                	mov    (%eax),%eax
 879bc83:	89 44 24 10          	mov    %eax,0x10(%esp)
 879bc87:	8b 45 0c             	mov    0xc(%ebp),%eax
 879bc8a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 879bc8e:	8b 45 14             	mov    0x14(%ebp),%eax
 879bc91:	89 44 24 08          	mov    %eax,0x8(%esp)
 879bc95:	8b 45 10             	mov    0x10(%ebp),%eax
 879bc98:	89 44 24 04          	mov    %eax,0x4(%esp)
 879bc9c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 879bc9f:	89 04 24             	mov    %eax,(%esp)
 879bca2:	e8 99 0e 00 00       	call   879cb40 <_ZN8TaoCrypt13RSA_DecryptorINS_14RSA_BlockType2EE7DecryptEPKhjPhRNS_21RandomNumberGeneratorE>
 879bca7:	83 c4 34             	add    $0x34,%esp
 879bcaa:	5b                   	pop    %ebx
 879bcab:	5d                   	pop    %ebp
 879bcac:	c3                   	ret
 879bcad:	8d 76 00             	lea    0x0(%esi),%esi

```

```c
// yaSSL::RSA::decrypt @ 0x879bc60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RSA::decrypt(unsigned char*, unsigned char const*, unsigned int, yaSSL::RandomPool const&)
    */

void __thiscall
yaSSL::RSA::decrypt(RSA *this,uchar *param_1,uchar *param_2,uint param_3,RandomPool *param_4)

{
  int local_14 [3];
  
  local_14[0] = *(int *)(this + 4) + 0x20;
  TaoCrypt::RSA_Decryptor<TaoCrypt::RSA_BlockType2>::Decrypt
            ((RSA_Decryptor<TaoCrypt::RSA_BlockType2> *)local_14,param_2,param_3,param_1,
             *(RandomNumberGenerator **)param_4);
  return;
}

```

---

## encrypt

```asm
// === 0879ab60 yaSSL::RSA::encrypt  [0x0879ab60-0x879abaf] ===
 879ab60:	55                   	push   %ebp
 879ab61:	89 e5                	mov    %esp,%ebp
 879ab63:	53                   	push   %ebx
 879ab64:	83 ec 34             	sub    $0x34,%esp
 879ab67:	8b 45 08             	mov    0x8(%ebp),%eax
 879ab6a:	e8 89 82 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879ab6f:	81 c3 29 20 bd 00    	add    $0xbd2029,%ebx
 879ab75:	8b 40 04             	mov    0x4(%eax),%eax
 879ab78:	89 45 f0             	mov    %eax,-0x10(%ebp)
 879ab7b:	8b 45 18             	mov    0x18(%ebp),%eax
 879ab7e:	8b 00                	mov    (%eax),%eax
 879ab80:	89 44 24 10          	mov    %eax,0x10(%esp)
 879ab84:	8b 45 0c             	mov    0xc(%ebp),%eax
 879ab87:	89 44 24 0c          	mov    %eax,0xc(%esp)
 879ab8b:	8b 45 14             	mov    0x14(%ebp),%eax
 879ab8e:	89 44 24 08          	mov    %eax,0x8(%esp)
 879ab92:	8b 45 10             	mov    0x10(%ebp),%eax
 879ab95:	89 44 24 04          	mov    %eax,0x4(%esp)
 879ab99:	8d 45 f0             	lea    -0x10(%ebp),%eax
 879ab9c:	89 04 24             	mov    %eax,(%esp)
 879ab9f:	e8 1c 1c 00 00       	call   879c7c0 <_ZN8TaoCrypt13RSA_EncryptorINS_14RSA_BlockType2EE7EncryptEPKhjPhRNS_21RandomNumberGeneratorE>
 879aba4:	83 c4 34             	add    $0x34,%esp
 879aba7:	5b                   	pop    %ebx
 879aba8:	5d                   	pop    %ebp
 879aba9:	c3                   	ret
 879abaa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::RSA::encrypt @ 0x879ab60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RSA::encrypt(unsigned char*, unsigned char const*, unsigned int, yaSSL::RandomPool const&)
    */

void __thiscall
yaSSL::RSA::encrypt(RSA *this,uchar *param_1,uchar *param_2,uint param_3,RandomPool *param_4)

{
  undefined4 local_14 [3];
  
  local_14[0] = *(undefined4 *)(this + 4);
  TaoCrypt::RSA_Encryptor<TaoCrypt::RSA_BlockType2>::Encrypt
            ((RSA_Encryptor<TaoCrypt::RSA_BlockType2> *)local_14,param_2,param_3,param_1,
             *(RandomNumberGenerator **)param_4);
  return;
}

```

---

## get_cipherLength

```asm
// === 08798e50 yaSSL::RSA::get_cipherLength  [0x08798e50-0x8798e7f] ===
 8798e50:	55                   	push   %ebp
 8798e51:	89 e5                	mov    %esp,%ebp
 8798e53:	53                   	push   %ebx
 8798e54:	83 ec 14             	sub    $0x14,%esp
 8798e57:	8b 45 08             	mov    0x8(%ebp),%eax
 8798e5a:	e8 99 9f f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8798e5f:	81 c3 39 3d bd 00    	add    $0xbd3d39,%ebx
 8798e65:	8b 40 04             	mov    0x4(%eax),%eax
 8798e68:	89 04 24             	mov    %eax,(%esp)
 8798e6b:	e8 c0 5d fc ff       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 8798e70:	83 c4 14             	add    $0x14,%esp
 8798e73:	5b                   	pop    %ebx
 8798e74:	5d                   	pop    %ebp
 8798e75:	c3                   	ret
 8798e76:	8d 76 00             	lea    0x0(%esi),%esi
 8798e79:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::RSA::get_cipherLength @ 0x8798e50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RSA::get_cipherLength() const */

void __thiscall yaSSL::RSA::get_cipherLength(RSA *this)

{
  TaoCrypt::Integer::ByteCount(*(Integer **)(this + 4));
  return;
}

```

---

## get_signatureLength

```asm
// === 08798e80 yaSSL::RSA::get_signatureLength  [0x08798e80-0x8798eaf] ===
 8798e80:	55                   	push   %ebp
 8798e81:	89 e5                	mov    %esp,%ebp
 8798e83:	53                   	push   %ebx
 8798e84:	e8 6f 9f f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8798e89:	81 c3 0f 3d bd 00    	add    $0xbd3d0f,%ebx
 8798e8f:	83 ec 14             	sub    $0x14,%esp
 8798e92:	8b 45 08             	mov    0x8(%ebp),%eax
 8798e95:	89 04 24             	mov    %eax,(%esp)
 8798e98:	e8 b3 ff ff ff       	call   8798e50 <_ZNK5yaSSL3RSA16get_cipherLengthEv>
 8798e9d:	83 c4 14             	add    $0x14,%esp
 8798ea0:	5b                   	pop    %ebx
 8798ea1:	5d                   	pop    %ebp
 8798ea2:	c3                   	ret
 8798ea3:	90                   	nop
 8798ea4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8798eaa:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::RSA::get_signatureLength @ 0x8798e80

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RSA::get_signatureLength() const */

void __thiscall yaSSL::RSA::get_signatureLength(RSA *this)

{
  get_cipherLength(this);
  return;
}

```

---

## sign

```asm
// === 0879afc0 yaSSL::RSA::sign  [0x0879afc0-0x879b0af] ===
 879afc0:	55                   	push   %ebp
 879afc1:	89 e5                	mov    %esp,%ebp
 879afc3:	57                   	push   %edi
 879afc4:	56                   	push   %esi
 879afc5:	53                   	push   %ebx
 879afc6:	83 ec 6c             	sub    $0x6c,%esp
 879afc9:	8b 45 08             	mov    0x8(%ebp),%eax
 879afcc:	e8 27 7e f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879afd1:	81 c3 c7 1b bd 00    	add    $0xbd1bc7,%ebx
 879afd7:	8d 75 c0             	lea    -0x40(%ebp),%esi
 879afda:	8d 7d d0             	lea    -0x30(%ebp),%edi
 879afdd:	8b 40 04             	mov    0x4(%eax),%eax
 879afe0:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 879afe3:	8b 45 18             	mov    0x18(%ebp),%eax
 879afe6:	8b 10                	mov    (%eax),%edx
 879afe8:	89 34 24             	mov    %esi,(%esp)
 879afeb:	89 55 b0             	mov    %edx,-0x50(%ebp)
 879afee:	e8 9d 45 fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879aff3:	89 3c 24             	mov    %edi,(%esp)
 879aff6:	e8 95 45 fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879affb:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 879affe:	89 34 24             	mov    %esi,(%esp)
 879b001:	83 c0 20             	add    $0x20,%eax
 879b004:	89 44 24 04          	mov    %eax,0x4(%esp)
 879b008:	e8 53 54 fc ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 879b00d:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 879b010:	89 3c 24             	mov    %edi,(%esp)
 879b013:	83 c0 40             	add    $0x40,%eax
 879b016:	89 44 24 04          	mov    %eax,0x4(%esp)
 879b01a:	e8 41 54 fc ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 879b01f:	8b 45 0c             	mov    0xc(%ebp),%eax
 879b022:	8b 55 b0             	mov    -0x50(%ebp),%edx
 879b025:	89 75 e0             	mov    %esi,-0x20(%ebp)
 879b028:	89 44 24 0c          	mov    %eax,0xc(%esp)
 879b02c:	8b 45 14             	mov    0x14(%ebp),%eax
 879b02f:	89 54 24 10          	mov    %edx,0x10(%esp)
 879b033:	89 44 24 08          	mov    %eax,0x8(%esp)
 879b037:	8b 45 10             	mov    0x10(%ebp),%eax
 879b03a:	89 44 24 04          	mov    %eax,0x4(%esp)
 879b03e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 879b041:	89 04 24             	mov    %eax,(%esp)
 879b044:	e8 e7 15 00 00       	call   879c630 <_ZN8TaoCrypt13RSA_EncryptorINS_14RSA_BlockType1EE7EncryptEPKhjPhRNS_21RandomNumberGeneratorE>
 879b049:	8b 45 d0             	mov    -0x30(%ebp),%eax
 879b04c:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 879b04f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879b056:	00 
 879b057:	c1 e0 02             	shl    $0x2,%eax
 879b05a:	89 34 24             	mov    %esi,(%esp)
 879b05d:	89 44 24 08          	mov    %eax,0x8(%esp)
 879b061:	e8 5a 2c 8e ff       	call   807dcc0 <memset@plt>
 879b066:	89 34 24             	mov    %esi,(%esp)
 879b069:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879b06e:	e8 ad c6 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879b073:	8b 45 c0             	mov    -0x40(%ebp),%eax
 879b076:	8b 75 c4             	mov    -0x3c(%ebp),%esi
 879b079:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879b080:	00 
 879b081:	c1 e0 02             	shl    $0x2,%eax
 879b084:	89 34 24             	mov    %esi,(%esp)
 879b087:	89 44 24 08          	mov    %eax,0x8(%esp)
 879b08b:	e8 30 2c 8e ff       	call   807dcc0 <memset@plt>
 879b090:	89 34 24             	mov    %esi,(%esp)
 879b093:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879b098:	e8 83 c6 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879b09d:	83 c4 6c             	add    $0x6c,%esp
 879b0a0:	5b                   	pop    %ebx
 879b0a1:	5e                   	pop    %esi
 879b0a2:	5f                   	pop    %edi
 879b0a3:	5d                   	pop    %ebp
 879b0a4:	c3                   	ret
 879b0a5:	90                   	nop
 879b0a6:	8d 76 00             	lea    0x0(%esi),%esi
 879b0a9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::RSA::sign @ 0x879afc0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RSA::sign(unsigned char*, unsigned char const*, unsigned int, yaSSL::RandomPool const&) */

void __thiscall
yaSSL::RSA::sign(RSA *this,uchar *param_1,uchar *param_2,uint param_3,RandomPool *param_4)

{
  int iVar1;
  RandomNumberGenerator *pRVar2;
  uint uVar3;
  int local_44;
  void *local_40;
  int local_34;
  void *local_30;
  Integer *local_24 [5];
  
  iVar1 = *(int *)(this + 4);
  pRVar2 = *(RandomNumberGenerator **)param_4;
  TaoCrypt::Integer::Integer((Integer *)&local_44);
  TaoCrypt::Integer::Integer((Integer *)&local_34);
  TaoCrypt::Integer::operator=((Integer *)&local_44,(Integer *)(iVar1 + 0x20));
  TaoCrypt::Integer::operator=((Integer *)&local_34,(Integer *)(iVar1 + 0x40));
  local_24[0] = (Integer *)&local_44;
  TaoCrypt::RSA_Encryptor<TaoCrypt::RSA_BlockType1>::Encrypt
            ((RSA_Encryptor<TaoCrypt::RSA_BlockType1> *)local_24,param_2,param_3,param_1,pRVar2);
  uVar3 = 0;
  memset(local_30,0,local_34 << 2);
  operator_delete__(local_30,uVar3 & 0xffffff00);
  uVar3 = 0;
  memset(local_40,0,local_44 << 2);
  operator_delete__(local_40,uVar3 & 0xffffff00);
  return;
}

```

---

## verify

```asm
// === 0879a7d0 yaSSL::RSA::verify  [0x0879a7d0-0x879a81f] ===
 879a7d0:	55                   	push   %ebp
 879a7d1:	89 e5                	mov    %esp,%ebp
 879a7d3:	53                   	push   %ebx
 879a7d4:	83 ec 24             	sub    $0x24,%esp
 879a7d7:	8b 45 08             	mov    0x8(%ebp),%eax
 879a7da:	e8 19 86 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879a7df:	81 c3 b9 23 bd 00    	add    $0xbd23b9,%ebx
 879a7e5:	8b 40 04             	mov    0x4(%eax),%eax
 879a7e8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 879a7eb:	8b 45 14             	mov    0x14(%ebp),%eax
 879a7ee:	89 44 24 0c          	mov    %eax,0xc(%esp)
 879a7f2:	8b 45 10             	mov    0x10(%ebp),%eax
 879a7f5:	89 44 24 08          	mov    %eax,0x8(%esp)
 879a7f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 879a7fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a800:	8d 45 f0             	lea    -0x10(%ebp),%eax
 879a803:	89 04 24             	mov    %eax,(%esp)
 879a806:	e8 05 c3 fb ff       	call   8756b10 <_ZN8TaoCrypt13RSA_EncryptorINS_14RSA_BlockType2EE10SSL_VerifyEPKhjS4_>
 879a80b:	83 c4 24             	add    $0x24,%esp
 879a80e:	5b                   	pop    %ebx
 879a80f:	5d                   	pop    %ebp
 879a810:	c3                   	ret
 879a811:	90                   	nop
 879a812:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 879a819:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::RSA::verify @ 0x879a7d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RSA::verify(unsigned char const*, unsigned int, unsigned char const*, unsigned int) */

void yaSSL::RSA::verify(uchar *param_1,uint param_2,uchar *param_3,uint param_4)

{
  undefined4 local_14 [3];
  
  local_14[0] = *(undefined4 *)(param_1 + 4);
  TaoCrypt::RSA_Encryptor<TaoCrypt::RSA_BlockType2>::SSL_Verify
            ((RSA_Encryptor<TaoCrypt::RSA_BlockType2> *)local_14,(uchar *)param_2,(uint)param_3,
             (uchar *)param_4);
  return;
}

```

---

## ~RSA

```asm
// === 0879b380 yaSSL::RSA::~RSA  [0x0879b380-0x879b3cf] ===
 879b380:	55                   	push   %ebp
 879b381:	89 e5                	mov    %esp,%ebp
 879b383:	83 ec 18             	sub    $0x18,%esp
 879b386:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 879b389:	e8 6a 7a f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879b38e:	81 c3 0a 18 bd 00    	add    $0xbd180a,%ebx
 879b394:	89 75 fc             	mov    %esi,-0x4(%ebp)
 879b397:	8b 75 08             	mov    0x8(%ebp),%esi
 879b39a:	8b 83 ac fe ff ff    	mov    -0x154(%ebx),%eax
 879b3a0:	83 c0 08             	add    $0x8,%eax
 879b3a3:	89 06                	mov    %eax,(%esi)
 879b3a5:	8b 46 04             	mov    0x4(%esi),%eax
 879b3a8:	89 04 24             	mov    %eax,(%esp)
 879b3ab:	e8 a0 15 00 00       	call   879c950 <_ZN5yaSSL8ysDeleteINS_3RSA7RSAImplEEEvPT_>
 879b3b0:	8b 83 24 fd ff ff    	mov    -0x2dc(%ebx),%eax
 879b3b6:	83 c0 08             	add    $0x8,%eax
 879b3b9:	89 06                	mov    %eax,(%esi)
 879b3bb:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 879b3be:	8b 75 fc             	mov    -0x4(%ebp),%esi
 879b3c1:	89 ec                	mov    %ebp,%esp
 879b3c3:	5d                   	pop    %ebp
 879b3c4:	c3                   	ret
 879b3c5:	90                   	nop
 879b3c6:	8d 76 00             	lea    0x0(%esi),%esi
 879b3c9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::RSA::~RSA @ 0x879b380

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RSA::~RSA() */

void __thiscall yaSSL::RSA::~RSA(RSA *this)

{
  *(undefined **)this = PTR_vtable_0936ca44 + 8;
  ysDelete<yaSSL::RSA::RSAImpl>(*(RSAImpl **)(this + 4));
  *(undefined **)this = PTR_vtable_0936c8bc + 8;
  return;
}

```

---

## ~RSA_0879b3d0

```asm
// === 0879b3d0 yaSSL::RSA::~RSA  [0x0879b3d0-0x879b3ff] ===
 879b3d0:	55                   	push   %ebp
 879b3d1:	89 e5                	mov    %esp,%ebp
 879b3d3:	53                   	push   %ebx
 879b3d4:	e8 1f 7a f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879b3d9:	81 c3 bf 17 bd 00    	add    $0xbd17bf,%ebx
 879b3df:	83 ec 14             	sub    $0x14,%esp
 879b3e2:	8b 45 08             	mov    0x8(%ebp),%eax
 879b3e5:	89 04 24             	mov    %eax,(%esp)
 879b3e8:	e8 93 ff ff ff       	call   879b380 <_ZN5yaSSL3RSAD1Ev>
 879b3ed:	83 c4 14             	add    $0x14,%esp
 879b3f0:	5b                   	pop    %ebx
 879b3f1:	5d                   	pop    %ebp
 879b3f2:	c3                   	ret
 879b3f3:	90                   	nop
 879b3f4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 879b3fa:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::RSA::~RSA @ 0x879b3d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RSA::~RSA() */

void __thiscall yaSSL::RSA::~RSA(RSA *this)

{
  ~RSA(this);
  return;
}

```

