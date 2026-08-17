# TaoCrypt__DSA_PrivateKey

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## DSA_PrivateKey

```asm
// === 08757780 TaoCrypt::DSA_PrivateKey::DSA_PrivateKey  [0x08757780-0x87577ef] ===
 8757780:	55                   	push   %ebp
 8757781:	89 e5                	mov    %esp,%ebp
 8757783:	83 ec 18             	sub    $0x18,%esp
 8757786:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8757789:	e8 6a b6 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875778e:	81 c3 0a 54 c1 00    	add    $0xc1540a,%ebx
 8757794:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8757797:	8b 75 08             	mov    0x8(%ebp),%esi
 875779a:	89 34 24             	mov    %esi,(%esp)
 875779d:	e8 ee 7d 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 87577a2:	8d 46 10             	lea    0x10(%esi),%eax
 87577a5:	89 04 24             	mov    %eax,(%esp)
 87577a8:	e8 e3 7d 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 87577ad:	8d 46 20             	lea    0x20(%esi),%eax
 87577b0:	89 04 24             	mov    %eax,(%esp)
 87577b3:	e8 d8 7d 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 87577b8:	8d 46 30             	lea    0x30(%esi),%eax
 87577bb:	89 04 24             	mov    %eax,(%esp)
 87577be:	e8 cd 7d 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 87577c3:	8d 46 40             	lea    0x40(%esi),%eax
 87577c6:	89 04 24             	mov    %eax,(%esp)
 87577c9:	e8 c2 7d 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 87577ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 87577d1:	89 34 24             	mov    %esi,(%esp)
 87577d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 87577d8:	e8 63 ff ff ff       	call   8757740 <_ZN8TaoCrypt14DSA_PrivateKey10InitializeERNS_6SourceE>
 87577dd:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87577e0:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87577e3:	89 ec                	mov    %ebp,%esp
 87577e5:	5d                   	pop    %ebp
 87577e6:	c3                   	ret
 87577e7:	90                   	nop
 87577e8:	90                   	nop
 87577e9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::DSA_PrivateKey::DSA_PrivateKey @ 0x8757780

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PrivateKey::DSA_PrivateKey(TaoCrypt::Source&) */

void __thiscall TaoCrypt::DSA_PrivateKey::DSA_PrivateKey(DSA_PrivateKey *this,Source *param_1)

{
  Integer::Integer((Integer *)this);
  Integer::Integer((Integer *)(this + 0x10));
  Integer::Integer((Integer *)(this + 0x20));
  Integer::Integer((Integer *)(this + 0x30));
  Integer::Integer((Integer *)(this + 0x40));
  Initialize(this,param_1);
  return;
}

```

---

## GetPrivatePart

```asm
// === 08757410 TaoCrypt::DSA_PrivateKey::GetPrivatePart  [0x08757410-0x875741f] ===
 8757410:	55                   	push   %ebp
 8757411:	89 e5                	mov    %esp,%ebp
 8757413:	8b 45 08             	mov    0x8(%ebp),%eax
 8757416:	5d                   	pop    %ebp
 8757417:	83 c0 40             	add    $0x40,%eax
 875741a:	c3                   	ret
 875741b:	90                   	nop
 875741c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::DSA_PrivateKey::GetPrivatePart @ 0x8757410

/* TaoCrypt::DSA_PrivateKey::GetPrivatePart() const */

DSA_PrivateKey * __thiscall TaoCrypt::DSA_PrivateKey::GetPrivatePart(DSA_PrivateKey *this)

{
  return this + 0x40;
}

```

---

## Initialize

```asm
// === 087576e0 TaoCrypt::DSA_PrivateKey::Initialize  [0x087576e0-0x875773f] ===
 87576e0:	55                   	push   %ebp
 87576e1:	89 e5                	mov    %esp,%ebp
 87576e3:	83 ec 28             	sub    $0x28,%esp
 87576e6:	8b 45 18             	mov    0x18(%ebp),%eax
 87576e9:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87576ec:	e8 07 b7 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87576f1:	81 c3 a7 54 c1 00    	add    $0xc154a7,%ebx
 87576f7:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87576fa:	8b 75 08             	mov    0x8(%ebp),%esi
 87576fd:	89 44 24 10          	mov    %eax,0x10(%esp)
 8757701:	8b 45 14             	mov    0x14(%ebp),%eax
 8757704:	89 34 24             	mov    %esi,(%esp)
 8757707:	83 c6 40             	add    $0x40,%esi
 875770a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875770e:	8b 45 10             	mov    0x10(%ebp),%eax
 8757711:	89 44 24 08          	mov    %eax,0x8(%esp)
 8757715:	8b 45 0c             	mov    0xc(%ebp),%eax
 8757718:	89 44 24 04          	mov    %eax,0x4(%esp)
 875771c:	e8 4f ff ff ff       	call   8757670 <_ZN8TaoCrypt13DSA_PublicKey10InitializeERKNS_7IntegerES3_S3_S3_>
 8757721:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8757724:	89 34 24             	mov    %esi,(%esp)
 8757727:	89 44 24 04          	mov    %eax,0x4(%esp)
 875772b:	e8 30 8d 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8757730:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8757733:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8757736:	89 ec                	mov    %ebp,%esp
 8757738:	5d                   	pop    %ebp
 8757739:	c3                   	ret
 875773a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::DSA_PrivateKey::Initialize @ 0x87576e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PrivateKey::Initialize(TaoCrypt::Integer const&, TaoCrypt::Integer const&,
   TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&) */

void __thiscall
TaoCrypt::DSA_PrivateKey::Initialize
          (DSA_PrivateKey *this,Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4,
          Integer *param_5)

{
  DSA_PublicKey::Initialize((DSA_PublicKey *)this,param_1,param_2,param_3,param_4);
  Integer::operator=((Integer *)(this + 0x40),param_5);
  return;
}

```

---

## Initialize_08757740

```asm
// === 08757740 TaoCrypt::DSA_PrivateKey::Initialize  [0x08757740-0x875777f] ===
 8757740:	55                   	push   %ebp
 8757741:	89 e5                	mov    %esp,%ebp
 8757743:	53                   	push   %ebx
 8757744:	e8 af b6 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8757749:	81 c3 4f 54 c1 00    	add    $0xc1544f,%ebx
 875774f:	83 ec 24             	sub    $0x24,%esp
 8757752:	8b 45 0c             	mov    0xc(%ebp),%eax
 8757755:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8757758:	8b 83 20 ff ff ff    	mov    -0xe0(%ebx),%eax
 875775e:	83 c0 08             	add    $0x8,%eax
 8757761:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8757764:	8b 45 08             	mov    0x8(%ebp),%eax
 8757767:	89 44 24 04          	mov    %eax,0x4(%esp)
 875776b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 875776e:	89 04 24             	mov    %eax,(%esp)
 8757771:	e8 5a e2 ff ff       	call   87559d0 <_ZN8TaoCrypt19DSA_Private_Decoder6DecodeERNS_14DSA_PrivateKeyE>
 8757776:	83 c4 24             	add    $0x24,%esp
 8757779:	5b                   	pop    %ebx
 875777a:	5d                   	pop    %ebp
 875777b:	c3                   	ret
 875777c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::DSA_PrivateKey::Initialize @ 0x8757740

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PrivateKey::Initialize(TaoCrypt::Source&) */

void __thiscall TaoCrypt::DSA_PrivateKey::Initialize(DSA_PrivateKey *this,Source *param_1)

{
  undefined *local_14;
  Source *local_10;
  undefined4 uStack_c;
  
  uStack_c = 0x8757749;
  local_10 = param_1;
  local_14 = PTR_vtable_0936cab8 + 8;
  DSA_Private_Decoder::Decode((DSA_Private_Decoder *)&local_14,this);
  return;
}

```

---

## SetPrivatePart

```asm
// === 08757580 TaoCrypt::DSA_PrivateKey::SetPrivatePart  [0x08757580-0x87575af] ===
 8757580:	55                   	push   %ebp
 8757581:	89 e5                	mov    %esp,%ebp
 8757583:	53                   	push   %ebx
 8757584:	83 ec 14             	sub    $0x14,%esp
 8757587:	8b 45 0c             	mov    0xc(%ebp),%eax
 875758a:	e8 69 b8 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875758f:	81 c3 09 56 c1 00    	add    $0xc15609,%ebx
 8757595:	89 44 24 04          	mov    %eax,0x4(%esp)
 8757599:	8b 45 08             	mov    0x8(%ebp),%eax
 875759c:	83 c0 40             	add    $0x40,%eax
 875759f:	89 04 24             	mov    %eax,(%esp)
 87575a2:	e8 b9 8e 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87575a7:	83 c4 14             	add    $0x14,%esp
 87575aa:	5b                   	pop    %ebx
 87575ab:	5d                   	pop    %ebp
 87575ac:	c3                   	ret
 87575ad:	90                   	nop
 87575ae:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::DSA_PrivateKey::SetPrivatePart @ 0x8757580

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PrivateKey::SetPrivatePart(TaoCrypt::Integer const&) */

void __thiscall TaoCrypt::DSA_PrivateKey::SetPrivatePart(DSA_PrivateKey *this,Integer *param_1)

{
  Integer::operator=((Integer *)(this + 0x40),param_1);
  return;
}

```

