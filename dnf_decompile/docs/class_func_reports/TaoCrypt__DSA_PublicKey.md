# TaoCrypt__DSA_PublicKey

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 15

---

## DSA_PublicKey

```asm
// === 08757490 TaoCrypt::DSA_PublicKey::DSA_PublicKey  [0x08757490-0x87574ff] ===
 8757490:	55                   	push   %ebp
 8757491:	89 e5                	mov    %esp,%ebp
 8757493:	83 ec 28             	sub    $0x28,%esp
 8757496:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8757499:	e8 5a b9 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875749e:	81 c3 fa 56 c1 00    	add    $0xc156fa,%ebx
 87574a4:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87574a7:	8b 75 08             	mov    0x8(%ebp),%esi
 87574aa:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87574ad:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87574b0:	89 34 24             	mov    %esi,(%esp)
 87574b3:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87574b7:	e8 b4 7d 00 00       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87574bc:	8d 47 10             	lea    0x10(%edi),%eax
 87574bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 87574c3:	8d 46 10             	lea    0x10(%esi),%eax
 87574c6:	89 04 24             	mov    %eax,(%esp)
 87574c9:	e8 a2 7d 00 00       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87574ce:	8d 47 20             	lea    0x20(%edi),%eax
 87574d1:	83 c7 30             	add    $0x30,%edi
 87574d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 87574d8:	8d 46 20             	lea    0x20(%esi),%eax
 87574db:	83 c6 30             	add    $0x30,%esi
 87574de:	89 04 24             	mov    %eax,(%esp)
 87574e1:	e8 8a 7d 00 00       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87574e6:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87574ea:	89 34 24             	mov    %esi,(%esp)
 87574ed:	e8 7e 7d 00 00       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87574f2:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87574f5:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87574f8:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87574fb:	89 ec                	mov    %ebp,%esp
 87574fd:	5d                   	pop    %ebp
 87574fe:	c3                   	ret
 87574ff:	90                   	nop

```

```c
// TaoCrypt::DSA_PublicKey::DSA_PublicKey @ 0x8757490

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PublicKey::DSA_PublicKey(TaoCrypt::DSA_PublicKey const&) */

void __thiscall TaoCrypt::DSA_PublicKey::DSA_PublicKey(DSA_PublicKey *this,DSA_PublicKey *param_1)

{
  Integer::Integer((Integer *)this,(Integer *)param_1);
  Integer::Integer((Integer *)(this + 0x10),(Integer *)(param_1 + 0x10));
  Integer::Integer((Integer *)(this + 0x20),(Integer *)(param_1 + 0x20));
  Integer::Integer((Integer *)(this + 0x30),(Integer *)(param_1 + 0x30));
  return;
}

```

---

## DSA_PublicKey_08757830

```asm
// === 08757830 TaoCrypt::DSA_PublicKey::DSA_PublicKey  [0x08757830-0x875788f] ===
 8757830:	55                   	push   %ebp
 8757831:	89 e5                	mov    %esp,%ebp
 8757833:	83 ec 18             	sub    $0x18,%esp
 8757836:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8757839:	e8 ba b5 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875783e:	81 c3 5a 53 c1 00    	add    $0xc1535a,%ebx
 8757844:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8757847:	8b 75 08             	mov    0x8(%ebp),%esi
 875784a:	89 34 24             	mov    %esi,(%esp)
 875784d:	e8 3e 7d 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8757852:	8d 46 10             	lea    0x10(%esi),%eax
 8757855:	89 04 24             	mov    %eax,(%esp)
 8757858:	e8 33 7d 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 875785d:	8d 46 20             	lea    0x20(%esi),%eax
 8757860:	89 04 24             	mov    %eax,(%esp)
 8757863:	e8 28 7d 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8757868:	8d 46 30             	lea    0x30(%esi),%eax
 875786b:	89 04 24             	mov    %eax,(%esp)
 875786e:	e8 1d 7d 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8757873:	8b 45 0c             	mov    0xc(%ebp),%eax
 8757876:	89 34 24             	mov    %esi,(%esp)
 8757879:	89 44 24 04          	mov    %eax,0x4(%esp)
 875787d:	e8 6e ff ff ff       	call   87577f0 <_ZN8TaoCrypt13DSA_PublicKey10InitializeERNS_6SourceE>
 8757882:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8757885:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8757888:	89 ec                	mov    %ebp,%esp
 875788a:	5d                   	pop    %ebp
 875788b:	c3                   	ret
 875788c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::DSA_PublicKey::DSA_PublicKey @ 0x8757830

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PublicKey::DSA_PublicKey(TaoCrypt::Source&) */

void __thiscall TaoCrypt::DSA_PublicKey::DSA_PublicKey(DSA_PublicKey *this,Source *param_1)

{
  Integer::Integer((Integer *)this);
  Integer::Integer((Integer *)(this + 0x10));
  Integer::Integer((Integer *)(this + 0x20));
  Integer::Integer((Integer *)(this + 0x30));
  Initialize(this,param_1);
  return;
}

```

---

## GetModulus

```asm
// === 087573d0 TaoCrypt::DSA_PublicKey::GetModulus  [0x087573d0-0x87573df] ===
 87573d0:	55                   	push   %ebp
 87573d1:	89 e5                	mov    %esp,%ebp
 87573d3:	8b 45 08             	mov    0x8(%ebp),%eax
 87573d6:	5d                   	pop    %ebp
 87573d7:	c3                   	ret
 87573d8:	90                   	nop
 87573d9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::DSA_PublicKey::GetModulus @ 0x87573d0

/* TaoCrypt::DSA_PublicKey::GetModulus() const */

DSA_PublicKey * __thiscall TaoCrypt::DSA_PublicKey::GetModulus(DSA_PublicKey *this)

{
  return this;
}

```

---

## GetPublicPart

```asm
// === 08757400 TaoCrypt::DSA_PublicKey::GetPublicPart  [0x08757400-0x875740f] ===
 8757400:	55                   	push   %ebp
 8757401:	89 e5                	mov    %esp,%ebp
 8757403:	8b 45 08             	mov    0x8(%ebp),%eax
 8757406:	5d                   	pop    %ebp
 8757407:	83 c0 30             	add    $0x30,%eax
 875740a:	c3                   	ret
 875740b:	90                   	nop
 875740c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::DSA_PublicKey::GetPublicPart @ 0x8757400

/* TaoCrypt::DSA_PublicKey::GetPublicPart() const */

DSA_PublicKey * __thiscall TaoCrypt::DSA_PublicKey::GetPublicPart(DSA_PublicKey *this)

{
  return this + 0x30;
}

```

---

## GetSubGroupGenerator

```asm
// === 087573f0 TaoCrypt::DSA_PublicKey::GetSubGroupGenerator  [0x087573f0-0x87573ff] ===
 87573f0:	55                   	push   %ebp
 87573f1:	89 e5                	mov    %esp,%ebp
 87573f3:	8b 45 08             	mov    0x8(%ebp),%eax
 87573f6:	5d                   	pop    %ebp
 87573f7:	83 c0 20             	add    $0x20,%eax
 87573fa:	c3                   	ret
 87573fb:	90                   	nop
 87573fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::DSA_PublicKey::GetSubGroupGenerator @ 0x87573f0

/* TaoCrypt::DSA_PublicKey::GetSubGroupGenerator() const */

DSA_PublicKey * __thiscall TaoCrypt::DSA_PublicKey::GetSubGroupGenerator(DSA_PublicKey *this)

{
  return this + 0x20;
}

```

---

## GetSubGroupOrder

```asm
// === 087573e0 TaoCrypt::DSA_PublicKey::GetSubGroupOrder  [0x087573e0-0x87573ef] ===
 87573e0:	55                   	push   %ebp
 87573e1:	89 e5                	mov    %esp,%ebp
 87573e3:	8b 45 08             	mov    0x8(%ebp),%eax
 87573e6:	5d                   	pop    %ebp
 87573e7:	83 c0 10             	add    $0x10,%eax
 87573ea:	c3                   	ret
 87573eb:	90                   	nop
 87573ec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::DSA_PublicKey::GetSubGroupOrder @ 0x87573e0

/* TaoCrypt::DSA_PublicKey::GetSubGroupOrder() const */

DSA_PublicKey * __thiscall TaoCrypt::DSA_PublicKey::GetSubGroupOrder(DSA_PublicKey *this)

{
  return this + 0x10;
}

```

---

## Initialize

```asm
// === 08757670 TaoCrypt::DSA_PublicKey::Initialize  [0x08757670-0x87576df] ===
 8757670:	55                   	push   %ebp
 8757671:	89 e5                	mov    %esp,%ebp
 8757673:	83 ec 18             	sub    $0x18,%esp
 8757676:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8757679:	8b 45 0c             	mov    0xc(%ebp),%eax
 875767c:	e8 77 b7 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8757681:	81 c3 17 55 c1 00    	add    $0xc15517,%ebx
 8757687:	89 75 fc             	mov    %esi,-0x4(%ebp)
 875768a:	8b 75 08             	mov    0x8(%ebp),%esi
 875768d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8757691:	89 34 24             	mov    %esi,(%esp)
 8757694:	e8 c7 8d 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8757699:	8b 45 10             	mov    0x10(%ebp),%eax
 875769c:	89 44 24 04          	mov    %eax,0x4(%esp)
 87576a0:	8d 46 10             	lea    0x10(%esi),%eax
 87576a3:	89 04 24             	mov    %eax,(%esp)
 87576a6:	e8 b5 8d 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87576ab:	8b 45 14             	mov    0x14(%ebp),%eax
 87576ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 87576b2:	8d 46 20             	lea    0x20(%esi),%eax
 87576b5:	83 c6 30             	add    $0x30,%esi
 87576b8:	89 04 24             	mov    %eax,(%esp)
 87576bb:	e8 a0 8d 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87576c0:	8b 45 18             	mov    0x18(%ebp),%eax
 87576c3:	89 34 24             	mov    %esi,(%esp)
 87576c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 87576ca:	e8 91 8d 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87576cf:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87576d2:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87576d5:	89 ec                	mov    %ebp,%esp
 87576d7:	5d                   	pop    %ebp
 87576d8:	c3                   	ret
 87576d9:	90                   	nop
 87576da:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::DSA_PublicKey::Initialize @ 0x8757670

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PublicKey::Initialize(TaoCrypt::Integer const&, TaoCrypt::Integer const&,
   TaoCrypt::Integer const&, TaoCrypt::Integer const&) */

void __thiscall
TaoCrypt::DSA_PublicKey::Initialize
          (DSA_PublicKey *this,Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4)

{
  Integer::operator=((Integer *)this,param_1);
  Integer::operator=((Integer *)(this + 0x10),param_2);
  Integer::operator=((Integer *)(this + 0x20),param_3);
  Integer::operator=((Integer *)(this + 0x30),param_4);
  return;
}

```

---

## Initialize_087577f0

```asm
// === 087577f0 TaoCrypt::DSA_PublicKey::Initialize  [0x087577f0-0x875782f] ===
 87577f0:	55                   	push   %ebp
 87577f1:	89 e5                	mov    %esp,%ebp
 87577f3:	53                   	push   %ebx
 87577f4:	e8 ff b5 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87577f9:	81 c3 9f 53 c1 00    	add    $0xc1539f,%ebx
 87577ff:	83 ec 24             	sub    $0x24,%esp
 8757802:	8b 45 0c             	mov    0xc(%ebp),%eax
 8757805:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8757808:	8b 83 d0 fa ff ff    	mov    -0x530(%ebx),%eax
 875780e:	83 c0 08             	add    $0x8,%eax
 8757811:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8757814:	8b 45 08             	mov    0x8(%ebp),%eax
 8757817:	89 44 24 04          	mov    %eax,0x4(%esp)
 875781b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 875781e:	89 04 24             	mov    %eax,(%esp)
 8757821:	e8 fa de ff ff       	call   8755720 <_ZN8TaoCrypt18DSA_Public_Decoder6DecodeERNS_13DSA_PublicKeyE>
 8757826:	83 c4 24             	add    $0x24,%esp
 8757829:	5b                   	pop    %ebx
 875782a:	5d                   	pop    %ebp
 875782b:	c3                   	ret
 875782c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::DSA_PublicKey::Initialize @ 0x87577f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PublicKey::Initialize(TaoCrypt::Source&) */

void __thiscall TaoCrypt::DSA_PublicKey::Initialize(DSA_PublicKey *this,Source *param_1)

{
  undefined *local_14;
  Source *local_10;
  undefined4 uStack_c;
  
  uStack_c = 0x87577f9;
  local_10 = param_1;
  local_14 = PTR_vtable_0936c668 + 8;
  DSA_Public_Decoder::Decode((DSA_Public_Decoder *)&local_14,this);
  return;
}

```

---

## SetModulus

```asm
// === 08757640 TaoCrypt::DSA_PublicKey::SetModulus  [0x08757640-0x875766f] ===
 8757640:	55                   	push   %ebp
 8757641:	89 e5                	mov    %esp,%ebp
 8757643:	53                   	push   %ebx
 8757644:	83 ec 14             	sub    $0x14,%esp
 8757647:	8b 45 0c             	mov    0xc(%ebp),%eax
 875764a:	e8 a9 b7 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875764f:	81 c3 49 55 c1 00    	add    $0xc15549,%ebx
 8757655:	89 44 24 04          	mov    %eax,0x4(%esp)
 8757659:	8b 45 08             	mov    0x8(%ebp),%eax
 875765c:	89 04 24             	mov    %eax,(%esp)
 875765f:	e8 fc 8d 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8757664:	83 c4 14             	add    $0x14,%esp
 8757667:	5b                   	pop    %ebx
 8757668:	5d                   	pop    %ebp
 8757669:	c3                   	ret
 875766a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::DSA_PublicKey::SetModulus @ 0x8757640

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PublicKey::SetModulus(TaoCrypt::Integer const&) */

void __thiscall TaoCrypt::DSA_PublicKey::SetModulus(DSA_PublicKey *this,Integer *param_1)

{
  Integer::operator=((Integer *)this,param_1);
  return;
}

```

---

## SetPublicPart

```asm
// === 087575b0 TaoCrypt::DSA_PublicKey::SetPublicPart  [0x087575b0-0x87575df] ===
 87575b0:	55                   	push   %ebp
 87575b1:	89 e5                	mov    %esp,%ebp
 87575b3:	53                   	push   %ebx
 87575b4:	83 ec 14             	sub    $0x14,%esp
 87575b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 87575ba:	e8 39 b8 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87575bf:	81 c3 d9 55 c1 00    	add    $0xc155d9,%ebx
 87575c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 87575c9:	8b 45 08             	mov    0x8(%ebp),%eax
 87575cc:	83 c0 30             	add    $0x30,%eax
 87575cf:	89 04 24             	mov    %eax,(%esp)
 87575d2:	e8 89 8e 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87575d7:	83 c4 14             	add    $0x14,%esp
 87575da:	5b                   	pop    %ebx
 87575db:	5d                   	pop    %ebp
 87575dc:	c3                   	ret
 87575dd:	90                   	nop
 87575de:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::DSA_PublicKey::SetPublicPart @ 0x87575b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PublicKey::SetPublicPart(TaoCrypt::Integer const&) */

void __thiscall TaoCrypt::DSA_PublicKey::SetPublicPart(DSA_PublicKey *this,Integer *param_1)

{
  Integer::operator=((Integer *)(this + 0x30),param_1);
  return;
}

```

---

## SetSubGroupGenerator

```asm
// === 087575e0 TaoCrypt::DSA_PublicKey::SetSubGroupGenerator  [0x087575e0-0x875760f] ===
 87575e0:	55                   	push   %ebp
 87575e1:	89 e5                	mov    %esp,%ebp
 87575e3:	53                   	push   %ebx
 87575e4:	83 ec 14             	sub    $0x14,%esp
 87575e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 87575ea:	e8 09 b8 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87575ef:	81 c3 a9 55 c1 00    	add    $0xc155a9,%ebx
 87575f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 87575f9:	8b 45 08             	mov    0x8(%ebp),%eax
 87575fc:	83 c0 20             	add    $0x20,%eax
 87575ff:	89 04 24             	mov    %eax,(%esp)
 8757602:	e8 59 8e 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8757607:	83 c4 14             	add    $0x14,%esp
 875760a:	5b                   	pop    %ebx
 875760b:	5d                   	pop    %ebp
 875760c:	c3                   	ret
 875760d:	90                   	nop
 875760e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::DSA_PublicKey::SetSubGroupGenerator @ 0x87575e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PublicKey::SetSubGroupGenerator(TaoCrypt::Integer const&) */

void __thiscall TaoCrypt::DSA_PublicKey::SetSubGroupGenerator(DSA_PublicKey *this,Integer *param_1)

{
  Integer::operator=((Integer *)(this + 0x20),param_1);
  return;
}

```

---

## SetSubGroupOrder

```asm
// === 08757610 TaoCrypt::DSA_PublicKey::SetSubGroupOrder  [0x08757610-0x875763f] ===
 8757610:	55                   	push   %ebp
 8757611:	89 e5                	mov    %esp,%ebp
 8757613:	53                   	push   %ebx
 8757614:	83 ec 14             	sub    $0x14,%esp
 8757617:	8b 45 0c             	mov    0xc(%ebp),%eax
 875761a:	e8 d9 b7 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875761f:	81 c3 79 55 c1 00    	add    $0xc15579,%ebx
 8757625:	89 44 24 04          	mov    %eax,0x4(%esp)
 8757629:	8b 45 08             	mov    0x8(%ebp),%eax
 875762c:	83 c0 10             	add    $0x10,%eax
 875762f:	89 04 24             	mov    %eax,(%esp)
 8757632:	e8 29 8e 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8757637:	83 c4 14             	add    $0x14,%esp
 875763a:	5b                   	pop    %ebx
 875763b:	5d                   	pop    %ebp
 875763c:	c3                   	ret
 875763d:	90                   	nop
 875763e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::DSA_PublicKey::SetSubGroupOrder @ 0x8757610

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PublicKey::SetSubGroupOrder(TaoCrypt::Integer const&) */

void __thiscall TaoCrypt::DSA_PublicKey::SetSubGroupOrder(DSA_PublicKey *this,Integer *param_1)

{
  Integer::operator=((Integer *)(this + 0x10),param_1);
  return;
}

```

---

## SignatureLength

```asm
// === 08757460 TaoCrypt::DSA_PublicKey::SignatureLength  [0x08757460-0x875748f] ===
 8757460:	55                   	push   %ebp
 8757461:	89 e5                	mov    %esp,%ebp
 8757463:	53                   	push   %ebx
 8757464:	e8 8f b9 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8757469:	81 c3 2f 57 c1 00    	add    $0xc1572f,%ebx
 875746f:	83 ec 14             	sub    $0x14,%esp
 8757472:	8b 45 08             	mov    0x8(%ebp),%eax
 8757475:	89 04 24             	mov    %eax,(%esp)
 8757478:	e8 63 ff ff ff       	call   87573e0 <_ZNK8TaoCrypt13DSA_PublicKey16GetSubGroupOrderEv>
 875747d:	89 04 24             	mov    %eax,(%esp)
 8757480:	e8 ab 77 00 00       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 8757485:	83 c4 14             	add    $0x14,%esp
 8757488:	5b                   	pop    %ebx
 8757489:	5d                   	pop    %ebp
 875748a:	01 c0                	add    %eax,%eax
 875748c:	c3                   	ret
 875748d:	90                   	nop
 875748e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::DSA_PublicKey::SignatureLength @ 0x8757460

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PublicKey::SignatureLength() const */

int __thiscall TaoCrypt::DSA_PublicKey::SignatureLength(DSA_PublicKey *this)

{
  Integer *this_00;
  int iVar1;
  
  this_00 = (Integer *)GetSubGroupOrder(this);
  iVar1 = Integer::ByteCount(this_00);
  return iVar1 * 2;
}

```

---

## Swap

```asm
// === 08757890 TaoCrypt::DSA_PublicKey::Swap  [0x08757890-0x87578ff] ===
 8757890:	55                   	push   %ebp
 8757891:	89 e5                	mov    %esp,%ebp
 8757893:	83 ec 28             	sub    $0x28,%esp
 8757896:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8757899:	e8 5a b5 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875789e:	81 c3 fa 52 c1 00    	add    $0xc152fa,%ebx
 87578a4:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87578a7:	8b 75 08             	mov    0x8(%ebp),%esi
 87578aa:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87578ad:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87578b0:	89 34 24             	mov    %esi,(%esp)
 87578b3:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87578b7:	e8 d4 5c 00 00       	call   875d590 <_ZN8TaoCrypt7Integer4SwapERS0_>
 87578bc:	8d 47 10             	lea    0x10(%edi),%eax
 87578bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 87578c3:	8d 46 10             	lea    0x10(%esi),%eax
 87578c6:	89 04 24             	mov    %eax,(%esp)
 87578c9:	e8 c2 5c 00 00       	call   875d590 <_ZN8TaoCrypt7Integer4SwapERS0_>
 87578ce:	8d 47 20             	lea    0x20(%edi),%eax
 87578d1:	83 c7 30             	add    $0x30,%edi
 87578d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 87578d8:	8d 46 20             	lea    0x20(%esi),%eax
 87578db:	83 c6 30             	add    $0x30,%esi
 87578de:	89 04 24             	mov    %eax,(%esp)
 87578e1:	e8 aa 5c 00 00       	call   875d590 <_ZN8TaoCrypt7Integer4SwapERS0_>
 87578e6:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87578ea:	89 34 24             	mov    %esi,(%esp)
 87578ed:	e8 9e 5c 00 00       	call   875d590 <_ZN8TaoCrypt7Integer4SwapERS0_>
 87578f2:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87578f5:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87578f8:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87578fb:	89 ec                	mov    %ebp,%esp
 87578fd:	5d                   	pop    %ebp
 87578fe:	c3                   	ret
 87578ff:	90                   	nop

```

```c
// TaoCrypt::DSA_PublicKey::Swap @ 0x8757890

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PublicKey::Swap(TaoCrypt::DSA_PublicKey&) */

void __thiscall TaoCrypt::DSA_PublicKey::Swap(DSA_PublicKey *this,DSA_PublicKey *param_1)

{
  Integer::Swap((Integer *)this,(Integer *)param_1);
  Integer::Swap((Integer *)(this + 0x10),(Integer *)(param_1 + 0x10));
  Integer::Swap((Integer *)(this + 0x20),(Integer *)(param_1 + 0x20));
  Integer::Swap((Integer *)(this + 0x30),(Integer *)(param_1 + 0x30));
  return;
}

```

---

## operator=

```asm
// === 08757900 TaoCrypt::DSA_PublicKey::operator=  [0x08757900-0x87579ef] ===
 8757900:	55                   	push   %ebp
 8757901:	89 e5                	mov    %esp,%ebp
 8757903:	57                   	push   %edi
 8757904:	56                   	push   %esi
 8757905:	53                   	push   %ebx
 8757906:	e8 ed b4 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875790b:	81 c3 8d 52 c1 00    	add    $0xc1528d,%ebx
 8757911:	83 ec 5c             	sub    $0x5c,%esp
 8757914:	8b 75 08             	mov    0x8(%ebp),%esi
 8757917:	8b 45 0c             	mov    0xc(%ebp),%eax
 875791a:	8d 7d a8             	lea    -0x58(%ebp),%edi
 875791d:	89 3c 24             	mov    %edi,(%esp)
 8757920:	89 44 24 04          	mov    %eax,0x4(%esp)
 8757924:	e8 67 fb ff ff       	call   8757490 <_ZN8TaoCrypt13DSA_PublicKeyC1ERKS0_>
 8757929:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875792d:	89 34 24             	mov    %esi,(%esp)
 8757930:	e8 5b ff ff ff       	call   8757890 <_ZN8TaoCrypt13DSA_PublicKey4SwapERS0_>
 8757935:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8757938:	8b 7d dc             	mov    -0x24(%ebp),%edi
 875793b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8757942:	00 
 8757943:	c1 e0 02             	shl    $0x2,%eax
 8757946:	89 3c 24             	mov    %edi,(%esp)
 8757949:	89 44 24 08          	mov    %eax,0x8(%esp)
 875794d:	e8 6e 63 92 ff       	call   807dcc0 <memset@plt>
 8757952:	89 3c 24             	mov    %edi,(%esp)
 8757955:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875795a:	e8 c1 fd 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 875795f:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8757962:	8b 7d cc             	mov    -0x34(%ebp),%edi
 8757965:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875796c:	00 
 875796d:	c1 e0 02             	shl    $0x2,%eax
 8757970:	89 3c 24             	mov    %edi,(%esp)
 8757973:	89 44 24 08          	mov    %eax,0x8(%esp)
 8757977:	e8 44 63 92 ff       	call   807dcc0 <memset@plt>
 875797c:	89 3c 24             	mov    %edi,(%esp)
 875797f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8757984:	e8 97 fd 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8757989:	8b 45 b8             	mov    -0x48(%ebp),%eax
 875798c:	8b 7d bc             	mov    -0x44(%ebp),%edi
 875798f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8757996:	00 
 8757997:	c1 e0 02             	shl    $0x2,%eax
 875799a:	89 3c 24             	mov    %edi,(%esp)
 875799d:	89 44 24 08          	mov    %eax,0x8(%esp)
 87579a1:	e8 1a 63 92 ff       	call   807dcc0 <memset@plt>
 87579a6:	89 3c 24             	mov    %edi,(%esp)
 87579a9:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87579ae:	e8 6d fd 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87579b3:	8b 45 a8             	mov    -0x58(%ebp),%eax
 87579b6:	8b 7d ac             	mov    -0x54(%ebp),%edi
 87579b9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87579c0:	00 
 87579c1:	c1 e0 02             	shl    $0x2,%eax
 87579c4:	89 3c 24             	mov    %edi,(%esp)
 87579c7:	89 44 24 08          	mov    %eax,0x8(%esp)
 87579cb:	e8 f0 62 92 ff       	call   807dcc0 <memset@plt>
 87579d0:	89 3c 24             	mov    %edi,(%esp)
 87579d3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87579d8:	e8 43 fd 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87579dd:	83 c4 5c             	add    $0x5c,%esp
 87579e0:	89 f0                	mov    %esi,%eax
 87579e2:	5b                   	pop    %ebx
 87579e3:	5e                   	pop    %esi
 87579e4:	5f                   	pop    %edi
 87579e5:	5d                   	pop    %ebp
 87579e6:	c3                   	ret
 87579e7:	90                   	nop
 87579e8:	90                   	nop
 87579e9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::DSA_PublicKey::operator= @ 0x8757900

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PublicKey::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::DSA_PublicKey const&) */

DSA_PublicKey * __thiscall
TaoCrypt::DSA_PublicKey::operator=(DSA_PublicKey *this,DSA_PublicKey *param_1)

{
  uint uVar1;
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x875790b;
  DSA_PublicKey((DSA_PublicKey *)&local_5c,param_1);
  Swap(this,(DSA_PublicKey *)&local_5c);
  uVar1 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar1 & 0xffffff00);
  uVar1 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar1 & 0xffffff00);
  uVar1 = 0;
  memset(local_48,0,local_4c << 2);
  operator_delete__(local_48,uVar1 & 0xffffff00);
  uVar1 = 0;
  memset(local_58,0,local_5c << 2);
  operator_delete__(local_58,uVar1 & 0xffffff00);
  return this;
}

```

