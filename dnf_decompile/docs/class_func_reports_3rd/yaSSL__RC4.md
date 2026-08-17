# yaSSL__RC4

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## RC4

```asm
// === 08798690 yaSSL::RC4::RC4  [0x08798690-0x87986df] ===
 8798690:	55                   	push   %ebp
 8798691:	89 e5                	mov    %esp,%ebp
 8798693:	83 ec 18             	sub    $0x18,%esp
 8798696:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8798699:	e8 5a a7 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879869e:	81 c3 fa 44 bd 00    	add    $0xbd44fa,%ebx
 87986a4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87986a7:	8b 75 08             	mov    0x8(%ebp),%esi
 87986aa:	8b 83 3c fb ff ff    	mov    -0x4c4(%ebx),%eax
 87986b0:	83 c0 08             	add    $0x8,%eax
 87986b3:	89 06                	mov    %eax,(%esi)
 87986b5:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87986ba:	c7 04 24 04 02 00 00 	movl   $0x204,(%esp)
 87986c1:	e8 da 85 fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87986c6:	89 46 04             	mov    %eax,0x4(%esi)
 87986c9:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87986cc:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87986cf:	89 ec                	mov    %ebp,%esp
 87986d1:	5d                   	pop    %ebp
 87986d2:	c3                   	ret
 87986d3:	90                   	nop
 87986d4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87986da:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::RC4::RC4 @ 0x8798690

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RC4::RC4() */

void __thiscall yaSSL::RC4::RC4(RC4 *this)

{
  void *pvVar1;
  
  *(undefined **)this = PTR_vtable_0936c6d4 + 8;
  pvVar1 = operator_new(0x204,0);
  *(void **)(this + 4) = pvVar1;
  return;
}

```

---

## decrypt

```asm
// === 08799200 yaSSL::RC4::decrypt  [0x08799200-0x879923f] ===
 8799200:	55                   	push   %ebp
 8799201:	89 e5                	mov    %esp,%ebp
 8799203:	53                   	push   %ebx
 8799204:	83 ec 14             	sub    $0x14,%esp
 8799207:	8b 45 14             	mov    0x14(%ebp),%eax
 879920a:	e8 e9 9b f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879920f:	81 c3 89 39 bd 00    	add    $0xbd3989,%ebx
 8799215:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8799219:	8b 45 10             	mov    0x10(%ebp),%eax
 879921c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8799220:	8b 45 0c             	mov    0xc(%ebp),%eax
 8799223:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799227:	8b 45 08             	mov    0x8(%ebp),%eax
 879922a:	8b 40 04             	mov    0x4(%eax),%eax
 879922d:	05 02 01 00 00       	add    $0x102,%eax
 8799232:	89 04 24             	mov    %eax,(%esp)
 8799235:	e8 e6 c7 00 00       	call   87a5a20 <_ZN8TaoCrypt4ARC47ProcessEPhPKhj>
 879923a:	83 c4 14             	add    $0x14,%esp
 879923d:	5b                   	pop    %ebx
 879923e:	5d                   	pop    %ebp
 879923f:	c3                   	ret

```

```c
// yaSSL::RC4::decrypt @ 0x8799200

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RC4::decrypt(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall yaSSL::RC4::decrypt(RC4 *this,uchar *param_1,uchar *param_2,uint param_3)

{
  TaoCrypt::ARC4::Process((ARC4 *)(*(int *)(this + 4) + 0x102),param_1,param_2,param_3);
  return;
}

```

---

## encrypt

```asm
// === 08799240 yaSSL::RC4::encrypt  [0x08799240-0x879927f] ===
 8799240:	55                   	push   %ebp
 8799241:	89 e5                	mov    %esp,%ebp
 8799243:	53                   	push   %ebx
 8799244:	83 ec 14             	sub    $0x14,%esp
 8799247:	8b 45 14             	mov    0x14(%ebp),%eax
 879924a:	e8 a9 9b f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879924f:	81 c3 49 39 bd 00    	add    $0xbd3949,%ebx
 8799255:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8799259:	8b 45 10             	mov    0x10(%ebp),%eax
 879925c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8799260:	8b 45 0c             	mov    0xc(%ebp),%eax
 8799263:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799267:	8b 45 08             	mov    0x8(%ebp),%eax
 879926a:	8b 40 04             	mov    0x4(%eax),%eax
 879926d:	89 04 24             	mov    %eax,(%esp)
 8799270:	e8 ab c7 00 00       	call   87a5a20 <_ZN8TaoCrypt4ARC47ProcessEPhPKhj>
 8799275:	83 c4 14             	add    $0x14,%esp
 8799278:	5b                   	pop    %ebx
 8799279:	5d                   	pop    %ebp
 879927a:	c3                   	ret
 879927b:	90                   	nop
 879927c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::RC4::encrypt @ 0x8799240

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RC4::encrypt(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall yaSSL::RC4::encrypt(RC4 *this,uchar *param_1,uchar *param_2,uint param_3)

{
  TaoCrypt::ARC4::Process(*(ARC4 **)(this + 4),param_1,param_2,param_3);
  return;
}

```

---

## set_decryptKey

```asm
// === 08799280 yaSSL::RC4::set_decryptKey  [0x08799280-0x87992bf] ===
 8799280:	55                   	push   %ebp
 8799281:	89 e5                	mov    %esp,%ebp
 8799283:	53                   	push   %ebx
 8799284:	83 ec 14             	sub    $0x14,%esp
 8799287:	8b 45 0c             	mov    0xc(%ebp),%eax
 879928a:	e8 69 9b f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879928f:	81 c3 09 39 bd 00    	add    $0xbd3909,%ebx
 8799295:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 879929c:	00 
 879929d:	89 44 24 04          	mov    %eax,0x4(%esp)
 87992a1:	8b 45 08             	mov    0x8(%ebp),%eax
 87992a4:	8b 40 04             	mov    0x4(%eax),%eax
 87992a7:	05 02 01 00 00       	add    $0x102,%eax
 87992ac:	89 04 24             	mov    %eax,(%esp)
 87992af:	e8 4c c6 00 00       	call   87a5900 <_ZN8TaoCrypt4ARC46SetKeyEPKhj>
 87992b4:	83 c4 14             	add    $0x14,%esp
 87992b7:	5b                   	pop    %ebx
 87992b8:	5d                   	pop    %ebp
 87992b9:	c3                   	ret
 87992ba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::RC4::set_decryptKey @ 0x8799280

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RC4::set_decryptKey(unsigned char const*, unsigned char const*) */

void yaSSL::RC4::set_decryptKey(uchar *param_1,uchar *param_2)

{
  TaoCrypt::ARC4::SetKey((ARC4 *)(*(int *)(param_1 + 4) + 0x102),param_2,0x10);
  return;
}

```

---

## set_encryptKey

```asm
// === 087992c0 yaSSL::RC4::set_encryptKey  [0x087992c0-0x87992ff] ===
 87992c0:	55                   	push   %ebp
 87992c1:	89 e5                	mov    %esp,%ebp
 87992c3:	53                   	push   %ebx
 87992c4:	83 ec 14             	sub    $0x14,%esp
 87992c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 87992ca:	e8 29 9b f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87992cf:	81 c3 c9 38 bd 00    	add    $0xbd38c9,%ebx
 87992d5:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 87992dc:	00 
 87992dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 87992e1:	8b 45 08             	mov    0x8(%ebp),%eax
 87992e4:	8b 40 04             	mov    0x4(%eax),%eax
 87992e7:	89 04 24             	mov    %eax,(%esp)
 87992ea:	e8 11 c6 00 00       	call   87a5900 <_ZN8TaoCrypt4ARC46SetKeyEPKhj>
 87992ef:	83 c4 14             	add    $0x14,%esp
 87992f2:	5b                   	pop    %ebx
 87992f3:	5d                   	pop    %ebp
 87992f4:	c3                   	ret
 87992f5:	90                   	nop
 87992f6:	8d 76 00             	lea    0x0(%esi),%esi
 87992f9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::RC4::set_encryptKey @ 0x87992c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RC4::set_encryptKey(unsigned char const*, unsigned char const*) */

void yaSSL::RC4::set_encryptKey(uchar *param_1,uchar *param_2)

{
  TaoCrypt::ARC4::SetKey(*(ARC4 **)(param_1 + 4),param_2,0x10);
  return;
}

```

---

## ~RC4

```asm
// === 087988d0 yaSSL::RC4::~RC4  [0x087988d0-0x879891f] ===
 87988d0:	55                   	push   %ebp
 87988d1:	89 e5                	mov    %esp,%ebp
 87988d3:	83 ec 18             	sub    $0x18,%esp
 87988d6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87988d9:	e8 1a a5 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87988de:	81 c3 ba 42 bd 00    	add    $0xbd42ba,%ebx
 87988e4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87988e7:	8b 75 08             	mov    0x8(%ebp),%esi
 87988ea:	8b 83 3c fb ff ff    	mov    -0x4c4(%ebx),%eax
 87988f0:	83 c0 08             	add    $0x8,%eax
 87988f3:	89 06                	mov    %eax,(%esi)
 87988f5:	8b 46 04             	mov    0x4(%esi),%eax
 87988f8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87988fd:	89 04 24             	mov    %eax,(%esp)
 8798900:	e8 1b 7f fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8798905:	8b 83 e0 fa ff ff    	mov    -0x520(%ebx),%eax
 879890b:	83 c0 08             	add    $0x8,%eax
 879890e:	89 06                	mov    %eax,(%esi)
 8798910:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8798913:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8798916:	89 ec                	mov    %ebp,%esp
 8798918:	5d                   	pop    %ebp
 8798919:	c3                   	ret
 879891a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::RC4::~RC4 @ 0x87988d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RC4::~RC4() */

void __thiscall yaSSL::RC4::~RC4(RC4 *this)

{
  *(undefined **)this = PTR_vtable_0936c6d4 + 8;
  operator_delete(*(undefined4 *)(this + 4),0);
  *(undefined **)this = PTR_vtable_0936c678 + 8;
  return;
}

```

---

## ~RC4_08798920

```asm
// === 08798920 yaSSL::RC4::~RC4  [0x08798920-0x879894f] ===
 8798920:	55                   	push   %ebp
 8798921:	89 e5                	mov    %esp,%ebp
 8798923:	53                   	push   %ebx
 8798924:	e8 cf a4 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8798929:	81 c3 6f 42 bd 00    	add    $0xbd426f,%ebx
 879892f:	83 ec 14             	sub    $0x14,%esp
 8798932:	8b 45 08             	mov    0x8(%ebp),%eax
 8798935:	89 04 24             	mov    %eax,(%esp)
 8798938:	e8 93 ff ff ff       	call   87988d0 <_ZN5yaSSL3RC4D1Ev>
 879893d:	83 c4 14             	add    $0x14,%esp
 8798940:	5b                   	pop    %ebx
 8798941:	5d                   	pop    %ebp
 8798942:	c3                   	ret
 8798943:	90                   	nop
 8798944:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 879894a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::RC4::~RC4 @ 0x8798920

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RC4::~RC4() */

void __thiscall yaSSL::RC4::~RC4(RC4 *this)

{
  ~RC4(this);
  return;
}

```

