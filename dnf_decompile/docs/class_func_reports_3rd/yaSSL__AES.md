# yaSSL__AES

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## AES

```asm
// === 087985e0 yaSSL::AES::AES  [0x087985e0-0x879868f] ===
 87985e0:	55                   	push   %ebp
 87985e1:	89 e5                	mov    %esp,%ebp
 87985e3:	56                   	push   %esi
 87985e4:	53                   	push   %ebx
 87985e5:	e8 0e a8 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87985ea:	81 c3 ae 45 bd 00    	add    $0xbd45ae,%ebx
 87985f0:	83 ec 10             	sub    $0x10,%esp
 87985f3:	8b 75 08             	mov    0x8(%ebp),%esi
 87985f6:	8b 83 68 fa ff ff    	mov    -0x598(%ebx),%eax
 87985fc:	83 c0 08             	add    $0x8,%eax
 87985ff:	89 06                	mov    %eax,(%esi)
 8798601:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8798606:	c7 04 24 5c 02 00 00 	movl   $0x25c,(%esp)
 879860d:	e8 8e 86 fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8798612:	8d 50 10             	lea    0x10(%eax),%edx
 8798615:	89 50 08             	mov    %edx,0x8(%eax)
 8798618:	8d 50 20             	lea    0x20(%eax),%edx
 879861b:	89 50 0c             	mov    %edx,0xc(%eax)
 879861e:	8b 93 54 ff ff ff    	mov    -0xac(%ebx),%edx
 8798624:	8d 88 3c 01 00 00    	lea    0x13c(%eax),%ecx
 879862a:	89 88 34 01 00 00    	mov    %ecx,0x134(%eax)
 8798630:	8d 88 4c 01 00 00    	lea    0x14c(%eax),%ecx
 8798636:	c7 40 04 10 00 00 00 	movl   $0x10,0x4(%eax)
 879863d:	c7 40 30 00 00 00 00 	movl   $0x0,0x30(%eax)
 8798644:	83 c2 08             	add    $0x8,%edx
 8798647:	89 10                	mov    %edx,(%eax)
 8798649:	89 90 2c 01 00 00    	mov    %edx,0x12c(%eax)
 879864f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8798652:	c7 40 34 01 00 00 00 	movl   $0x1,0x34(%eax)
 8798659:	c7 80 30 01 00 00 10 	movl   $0x10,0x130(%eax)
 8798660:	00 00 00 
 8798663:	89 88 38 01 00 00    	mov    %ecx,0x138(%eax)
 8798669:	c7 80 5c 01 00 00 01 	movl   $0x1,0x15c(%eax)
 8798670:	00 00 00 
 8798673:	c7 80 60 01 00 00 01 	movl   $0x1,0x160(%eax)
 879867a:	00 00 00 
 879867d:	89 90 58 02 00 00    	mov    %edx,0x258(%eax)
 8798683:	89 46 04             	mov    %eax,0x4(%esi)
 8798686:	83 c4 10             	add    $0x10,%esp
 8798689:	5b                   	pop    %ebx
 879868a:	5e                   	pop    %esi
 879868b:	5d                   	pop    %ebp
 879868c:	c3                   	ret
 879868d:	90                   	nop
 879868e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::AES::AES @ 0x87985e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::AES::AES(unsigned int) */

void __thiscall yaSSL::AES::AES(AES *this,uint param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  *(undefined **)this = PTR_vtable_0936c600 + 8;
  puVar2 = operator_new(0x25c,0);
  puVar2[2] = puVar2 + 4;
  puVar2[3] = puVar2 + 8;
  puVar1 = PTR_vtable_0936caec;
  puVar2[0x4d] = puVar2 + 0x4f;
  puVar2[1] = 0x10;
  puVar2[0xc] = 0;
  *puVar2 = puVar1 + 8;
  puVar2[0x4b] = puVar1 + 8;
  puVar2[0xd] = 1;
  puVar2[0x4c] = 0x10;
  puVar2[0x4e] = puVar2 + 0x53;
  puVar2[0x57] = 1;
  puVar2[0x58] = 1;
  puVar2[0x96] = param_1;
  *(undefined4 **)(this + 4) = puVar2;
  return;
}

```

---

## decrypt

```asm
// === 08799090 yaSSL::AES::decrypt  [0x08799090-0x87990cf] ===
 8799090:	55                   	push   %ebp
 8799091:	89 e5                	mov    %esp,%ebp
 8799093:	53                   	push   %ebx
 8799094:	83 ec 14             	sub    $0x14,%esp
 8799097:	8b 45 14             	mov    0x14(%ebp),%eax
 879909a:	e8 59 9d f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879909f:	81 c3 f9 3a bd 00    	add    $0xbd3af9,%ebx
 87990a5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87990a9:	8b 45 10             	mov    0x10(%ebp),%eax
 87990ac:	89 44 24 08          	mov    %eax,0x8(%esp)
 87990b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 87990b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 87990b7:	8b 45 08             	mov    0x8(%ebp),%eax
 87990ba:	8b 40 04             	mov    0x4(%eax),%eax
 87990bd:	05 2c 01 00 00       	add    $0x12c,%eax
 87990c2:	89 04 24             	mov    %eax,(%esp)
 87990c5:	e8 86 a8 00 00       	call   87a3950 <_ZN8TaoCrypt3AES7ProcessEPhPKhj>
 87990ca:	83 c4 14             	add    $0x14,%esp
 87990cd:	5b                   	pop    %ebx
 87990ce:	5d                   	pop    %ebp
 87990cf:	c3                   	ret

```

```c
// yaSSL::AES::decrypt @ 0x8799090

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::AES::decrypt(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall yaSSL::AES::decrypt(AES *this,uchar *param_1,uchar *param_2,uint param_3)

{
  TaoCrypt::AES::Process((AES *)(*(int *)(this + 4) + 300),param_1,param_2,param_3);
  return;
}

```

---

## encrypt

```asm
// === 087990d0 yaSSL::AES::encrypt  [0x087990d0-0x879910f] ===
 87990d0:	55                   	push   %ebp
 87990d1:	89 e5                	mov    %esp,%ebp
 87990d3:	53                   	push   %ebx
 87990d4:	83 ec 14             	sub    $0x14,%esp
 87990d7:	8b 45 14             	mov    0x14(%ebp),%eax
 87990da:	e8 19 9d f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87990df:	81 c3 b9 3a bd 00    	add    $0xbd3ab9,%ebx
 87990e5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87990e9:	8b 45 10             	mov    0x10(%ebp),%eax
 87990ec:	89 44 24 08          	mov    %eax,0x8(%esp)
 87990f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 87990f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 87990f7:	8b 45 08             	mov    0x8(%ebp),%eax
 87990fa:	8b 40 04             	mov    0x4(%eax),%eax
 87990fd:	89 04 24             	mov    %eax,(%esp)
 8799100:	e8 4b a8 00 00       	call   87a3950 <_ZN8TaoCrypt3AES7ProcessEPhPKhj>
 8799105:	83 c4 14             	add    $0x14,%esp
 8799108:	5b                   	pop    %ebx
 8799109:	5d                   	pop    %ebp
 879910a:	c3                   	ret
 879910b:	90                   	nop
 879910c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::AES::encrypt @ 0x87990d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::AES::encrypt(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall yaSSL::AES::encrypt(AES *this,uchar *param_1,uchar *param_2,uint param_3)

{
  TaoCrypt::AES::Process(*(AES **)(this + 4),param_1,param_2,param_3);
  return;
}

```

---

## get_keySize

```asm
// === 08798590 yaSSL::AES::get_keySize  [0x08798590-0x87985af] ===
 8798590:	55                   	push   %ebp
 8798591:	89 e5                	mov    %esp,%ebp
 8798593:	8b 45 08             	mov    0x8(%ebp),%eax
 8798596:	5d                   	pop    %ebp
 8798597:	8b 40 04             	mov    0x4(%eax),%eax
 879859a:	8b 80 58 02 00 00    	mov    0x258(%eax),%eax
 87985a0:	c3                   	ret
 87985a1:	90                   	nop
 87985a2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87985a9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::AES::get_keySize @ 0x8798590

/* yaSSL::AES::get_keySize() const */

undefined4 __thiscall yaSSL::AES::get_keySize(AES *this)

{
  return *(undefined4 *)(*(int *)(this + 4) + 600);
}

```

---

## set_decryptKey

```asm
// === 08799110 yaSSL::AES::set_decryptKey  [0x08799110-0x879918f] ===
 8799110:	55                   	push   %ebp
 8799111:	89 e5                	mov    %esp,%ebp
 8799113:	83 ec 28             	sub    $0x28,%esp
 8799116:	8b 45 08             	mov    0x8(%ebp),%eax
 8799119:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879911c:	89 75 f8             	mov    %esi,-0x8(%ebp)
 879911f:	8b 75 10             	mov    0x10(%ebp),%esi
 8799122:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8799125:	8b 78 04             	mov    0x4(%eax),%edi
 8799128:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 879912f:	00 
 8799130:	e8 c3 9c f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8799135:	81 c3 63 3a bd 00    	add    $0xbd3a63,%ebx
 879913b:	8b 87 58 02 00 00    	mov    0x258(%edi),%eax
 8799141:	89 44 24 08          	mov    %eax,0x8(%esp)
 8799145:	8b 45 0c             	mov    0xc(%ebp),%eax
 8799148:	89 44 24 04          	mov    %eax,0x4(%esp)
 879914c:	8d 87 2c 01 00 00    	lea    0x12c(%edi),%eax
 8799152:	89 04 24             	mov    %eax,(%esp)
 8799155:	e8 f6 8b 00 00       	call   87a1d50 <_ZN8TaoCrypt3AES6SetKeyEPKhjNS_9CipherDirE>
 879915a:	8b 16                	mov    (%esi),%edx
 879915c:	8d 87 3c 01 00 00    	lea    0x13c(%edi),%eax
 8799162:	89 97 3c 01 00 00    	mov    %edx,0x13c(%edi)
 8799168:	8b 56 04             	mov    0x4(%esi),%edx
 879916b:	89 50 04             	mov    %edx,0x4(%eax)
 879916e:	8b 56 08             	mov    0x8(%esi),%edx
 8799171:	89 50 08             	mov    %edx,0x8(%eax)
 8799174:	8b 56 0c             	mov    0xc(%esi),%edx
 8799177:	89 50 0c             	mov    %edx,0xc(%eax)
 879917a:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879917d:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8799180:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8799183:	89 ec                	mov    %ebp,%esp
 8799185:	5d                   	pop    %ebp
 8799186:	c3                   	ret
 8799187:	90                   	nop
 8799188:	90                   	nop
 8799189:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::AES::set_decryptKey @ 0x8799110

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::AES::set_decryptKey(unsigned char const*, unsigned char const*) */

void __thiscall yaSSL::AES::set_decryptKey(AES *this,uchar *param_1,uchar *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 4);
  TaoCrypt::AES::SetKey(iVar1 + 300,param_1,*(undefined4 *)(iVar1 + 600),1);
  *(undefined4 *)(iVar1 + 0x13c) = *(undefined4 *)param_2;
  *(undefined4 *)(iVar1 + 0x140) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(iVar1 + 0x144) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(iVar1 + 0x148) = *(undefined4 *)(param_2 + 0xc);
  return;
}

```

---

## set_encryptKey

```asm
// === 08799190 yaSSL::AES::set_encryptKey  [0x08799190-0x87991ff] ===
 8799190:	55                   	push   %ebp
 8799191:	89 e5                	mov    %esp,%ebp
 8799193:	83 ec 28             	sub    $0x28,%esp
 8799196:	8b 45 08             	mov    0x8(%ebp),%eax
 8799199:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879919c:	89 75 f8             	mov    %esi,-0x8(%ebp)
 879919f:	8b 75 10             	mov    0x10(%ebp),%esi
 87991a2:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87991a5:	8b 78 04             	mov    0x4(%eax),%edi
 87991a8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87991af:	00 
 87991b0:	e8 43 9c f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87991b5:	81 c3 e3 39 bd 00    	add    $0xbd39e3,%ebx
 87991bb:	8b 87 58 02 00 00    	mov    0x258(%edi),%eax
 87991c1:	89 3c 24             	mov    %edi,(%esp)
 87991c4:	89 44 24 08          	mov    %eax,0x8(%esp)
 87991c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 87991cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 87991cf:	e8 7c 8b 00 00       	call   87a1d50 <_ZN8TaoCrypt3AES6SetKeyEPKhjNS_9CipherDirE>
 87991d4:	8b 16                	mov    (%esi),%edx
 87991d6:	8d 47 10             	lea    0x10(%edi),%eax
 87991d9:	89 57 10             	mov    %edx,0x10(%edi)
 87991dc:	8b 56 04             	mov    0x4(%esi),%edx
 87991df:	89 50 04             	mov    %edx,0x4(%eax)
 87991e2:	8b 56 08             	mov    0x8(%esi),%edx
 87991e5:	89 50 08             	mov    %edx,0x8(%eax)
 87991e8:	8b 56 0c             	mov    0xc(%esi),%edx
 87991eb:	89 50 0c             	mov    %edx,0xc(%eax)
 87991ee:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87991f1:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87991f4:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87991f7:	89 ec                	mov    %ebp,%esp
 87991f9:	5d                   	pop    %ebp
 87991fa:	c3                   	ret
 87991fb:	90                   	nop
 87991fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::AES::set_encryptKey @ 0x8799190

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::AES::set_encryptKey(unsigned char const*, unsigned char const*) */

void __thiscall yaSSL::AES::set_encryptKey(AES *this,uchar *param_1,uchar *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 4);
  TaoCrypt::AES::SetKey(iVar1,param_1,*(undefined4 *)(iVar1 + 600),0);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)param_2;
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_2 + 0xc);
  return;
}

```

---

## ~AES

```asm
// === 08798840 yaSSL::AES::~AES  [0x08798840-0x879889f] ===
 8798840:	55                   	push   %ebp
 8798841:	89 e5                	mov    %esp,%ebp
 8798843:	83 ec 18             	sub    $0x18,%esp
 8798846:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8798849:	e8 aa a5 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879884e:	81 c3 4a 43 bd 00    	add    $0xbd434a,%ebx
 8798854:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8798857:	8b 75 08             	mov    0x8(%ebp),%esi
 879885a:	8b 83 68 fa ff ff    	mov    -0x598(%ebx),%eax
 8798860:	83 c0 08             	add    $0x8,%eax
 8798863:	89 06                	mov    %eax,(%esi)
 8798865:	8b 46 04             	mov    0x4(%esi),%eax
 8798868:	85 c0                	test   %eax,%eax
 879886a:	74 11                	je     879887d <_ZN5yaSSL3AESD1Ev+0x3d>
 879886c:	8b 93 8c fb ff ff    	mov    -0x474(%ebx),%edx
 8798872:	83 c2 08             	add    $0x8,%edx
 8798875:	89 90 2c 01 00 00    	mov    %edx,0x12c(%eax)
 879887b:	89 10                	mov    %edx,(%eax)
 879887d:	89 04 24             	mov    %eax,(%esp)
 8798880:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8798885:	e8 96 7f fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 879888a:	8b 83 e0 fa ff ff    	mov    -0x520(%ebx),%eax
 8798890:	83 c0 08             	add    $0x8,%eax
 8798893:	89 06                	mov    %eax,(%esi)
 8798895:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8798898:	8b 75 fc             	mov    -0x4(%ebp),%esi
 879889b:	89 ec                	mov    %ebp,%esp
 879889d:	5d                   	pop    %ebp
 879889e:	c3                   	ret
 879889f:	90                   	nop

```

```c
// yaSSL::AES::~AES @ 0x8798840

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::AES::~AES() */

void __thiscall yaSSL::AES::~AES(AES *this)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  *(undefined **)this = PTR_vtable_0936c600 + 8;
  puVar1 = *(undefined4 **)(this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = PTR_vtable_0936c724 + 8;
    puVar1[0x4b] = puVar2;
    *puVar1 = puVar2;
  }
  operator_delete(puVar1,0);
  *(undefined **)this = PTR_vtable_0936c678 + 8;
  return;
}

```

---

## ~AES_087988a0

```asm
// === 087988a0 yaSSL::AES::~AES  [0x087988a0-0x87988cf] ===
 87988a0:	55                   	push   %ebp
 87988a1:	89 e5                	mov    %esp,%ebp
 87988a3:	53                   	push   %ebx
 87988a4:	e8 4f a5 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87988a9:	81 c3 ef 42 bd 00    	add    $0xbd42ef,%ebx
 87988af:	83 ec 14             	sub    $0x14,%esp
 87988b2:	8b 45 08             	mov    0x8(%ebp),%eax
 87988b5:	89 04 24             	mov    %eax,(%esp)
 87988b8:	e8 83 ff ff ff       	call   8798840 <_ZN5yaSSL3AESD1Ev>
 87988bd:	83 c4 14             	add    $0x14,%esp
 87988c0:	5b                   	pop    %ebx
 87988c1:	5d                   	pop    %ebp
 87988c2:	c3                   	ret
 87988c3:	90                   	nop
 87988c4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87988ca:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::AES::~AES @ 0x87988a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::AES::~AES() */

void __thiscall yaSSL::AES::~AES(AES *this)

{
  ~AES(this);
  return;
}

```

