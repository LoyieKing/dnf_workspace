# TaoCrypt__DSA_Public_Decoder

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## Decode

```asm
// === 08755720 TaoCrypt::DSA_Public_Decoder::Decode  [0x08755720-0x87558cf] ===
 8755720:	55                   	push   %ebp
 8755721:	89 e5                	mov    %esp,%ebp
 8755723:	83 ec 78             	sub    $0x78,%esp
 8755726:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8755729:	8b 75 08             	mov    0x8(%ebp),%esi
 875572c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 875572f:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8755732:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8755735:	e8 be d6 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875573a:	81 c3 5e 74 c1 00    	add    $0xc1745e,%ebx
 8755740:	8b 06                	mov    (%esi),%eax
 8755742:	89 34 24             	mov    %esi,(%esp)
 8755745:	ff 50 08             	call   *0x8(%eax)
 8755748:	8b 46 04             	mov    0x4(%esi),%eax
 875574b:	8b 40 10             	mov    0x10(%eax),%eax
 875574e:	85 c0                	test   %eax,%eax
 8755750:	0f 85 5e 01 00 00    	jne    87558b4 <_ZN8TaoCrypt18DSA_Public_Decoder6DecodeERNS_13DSA_PublicKeyE+0x194>
 8755756:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8755759:	89 04 24             	mov    %eax,(%esp)
 875575c:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 875575f:	e8 2c 9e 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8755764:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8755767:	89 34 24             	mov    %esi,(%esp)
 875576a:	89 44 24 04          	mov    %eax,0x4(%esp)
 875576e:	e8 2d ed ff ff       	call   87544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>
 8755773:	89 3c 24             	mov    %edi,(%esp)
 8755776:	89 44 24 04          	mov    %eax,0x4(%esp)
 875577a:	e8 c1 1e 00 00       	call   8757640 <_ZN8TaoCrypt13DSA_PublicKey10SetModulusERKNS_7IntegerE>
 875577f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8755782:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8755785:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875578c:	00 
 875578d:	c1 e0 02             	shl    $0x2,%eax
 8755790:	89 14 24             	mov    %edx,(%esp)
 8755793:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 8755796:	89 44 24 08          	mov    %eax,0x8(%esp)
 875579a:	e8 21 85 92 ff       	call   807dcc0 <memset@plt>
 875579f:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 87557a2:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87557a7:	89 14 24             	mov    %edx,(%esp)
 87557aa:	e8 71 1f 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87557af:	8d 45 c8             	lea    -0x38(%ebp),%eax
 87557b2:	89 04 24             	mov    %eax,(%esp)
 87557b5:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 87557b8:	e8 d3 9d 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 87557bd:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 87557c0:	89 34 24             	mov    %esi,(%esp)
 87557c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 87557c7:	e8 d4 ec ff ff       	call   87544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>
 87557cc:	89 3c 24             	mov    %edi,(%esp)
 87557cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 87557d3:	e8 38 1e 00 00       	call   8757610 <_ZN8TaoCrypt13DSA_PublicKey16SetSubGroupOrderERKNS_7IntegerE>
 87557d8:	8b 45 c8             	mov    -0x38(%ebp),%eax
 87557db:	8b 55 cc             	mov    -0x34(%ebp),%edx
 87557de:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87557e5:	00 
 87557e6:	c1 e0 02             	shl    $0x2,%eax
 87557e9:	89 14 24             	mov    %edx,(%esp)
 87557ec:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 87557ef:	89 44 24 08          	mov    %eax,0x8(%esp)
 87557f3:	e8 c8 84 92 ff       	call   807dcc0 <memset@plt>
 87557f8:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 87557fb:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8755800:	89 14 24             	mov    %edx,(%esp)
 8755803:	e8 18 1f 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8755808:	8d 45 b8             	lea    -0x48(%ebp),%eax
 875580b:	89 04 24             	mov    %eax,(%esp)
 875580e:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8755811:	e8 7a 9d 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8755816:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8755819:	89 34 24             	mov    %esi,(%esp)
 875581c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755820:	e8 7b ec ff ff       	call   87544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>
 8755825:	89 3c 24             	mov    %edi,(%esp)
 8755828:	89 44 24 04          	mov    %eax,0x4(%esp)
 875582c:	e8 af 1d 00 00       	call   87575e0 <_ZN8TaoCrypt13DSA_PublicKey20SetSubGroupGeneratorERKNS_7IntegerE>
 8755831:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8755834:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8755837:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875583e:	00 
 875583f:	c1 e0 02             	shl    $0x2,%eax
 8755842:	89 14 24             	mov    %edx,(%esp)
 8755845:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 8755848:	89 44 24 08          	mov    %eax,0x8(%esp)
 875584c:	e8 6f 84 92 ff       	call   807dcc0 <memset@plt>
 8755851:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 8755854:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8755859:	89 14 24             	mov    %edx,(%esp)
 875585c:	e8 bf 1e 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8755861:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8755864:	89 04 24             	mov    %eax,(%esp)
 8755867:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 875586a:	e8 21 9d 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 875586f:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8755872:	89 34 24             	mov    %esi,(%esp)
 8755875:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755879:	e8 22 ec ff ff       	call   87544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>
 875587e:	89 3c 24             	mov    %edi,(%esp)
 8755881:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755885:	e8 26 1d 00 00       	call   87575b0 <_ZN8TaoCrypt13DSA_PublicKey13SetPublicPartERKNS_7IntegerE>
 875588a:	8b 45 a8             	mov    -0x58(%ebp),%eax
 875588d:	8b 75 ac             	mov    -0x54(%ebp),%esi
 8755890:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8755897:	00 
 8755898:	c1 e0 02             	shl    $0x2,%eax
 875589b:	89 44 24 08          	mov    %eax,0x8(%esp)
 875589f:	89 34 24             	mov    %esi,(%esp)
 87558a2:	e8 19 84 92 ff       	call   807dcc0 <memset@plt>
 87558a7:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87558ac:	89 34 24             	mov    %esi,(%esp)
 87558af:	e8 6c 1e 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87558b4:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87558b7:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87558ba:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87558bd:	89 ec                	mov    %ebp,%esp
 87558bf:	5d                   	pop    %ebp
 87558c0:	c3                   	ret
 87558c1:	90                   	nop
 87558c2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87558c9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::DSA_Public_Decoder::Decode @ 0x8755720

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_Public_Decoder::Decode(TaoCrypt::DSA_PublicKey&) */

void __thiscall
TaoCrypt::DSA_Public_Decoder::Decode(DSA_Public_Decoder *this,DSA_PublicKey *param_1)

{
  Integer *pIVar1;
  uint uVar2;
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  (**(code **)(*(int *)this + 8))(this);
  if (*(int *)(*(int *)(this + 4) + 0x10) == 0) {
    Integer::Integer((Integer *)&local_2c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_2c);
    DSA_PublicKey::SetModulus(param_1,pIVar1);
    uVar2 = 0;
    memset(local_28,0,local_2c << 2);
    operator_delete__(local_28,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_3c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_3c);
    DSA_PublicKey::SetSubGroupOrder(param_1,pIVar1);
    uVar2 = 0;
    memset(local_38,0,local_3c << 2);
    operator_delete__(local_38,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_4c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_4c);
    DSA_PublicKey::SetSubGroupGenerator(param_1,pIVar1);
    uVar2 = 0;
    memset(local_48,0,local_4c << 2);
    operator_delete__(local_48,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_5c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_5c);
    DSA_PublicKey::SetPublicPart(param_1,pIVar1);
    uVar2 = 0;
    memset(local_58,0,local_5c << 2);
    operator_delete__(local_58,uVar2 & 0xffffff00);
  }
  return;
}

```

---

## ReadHeader

```asm
// === 087539d0 TaoCrypt::DSA_Public_Decoder::ReadHeader  [0x087539d0-0x87539ff] ===
 87539d0:	55                   	push   %ebp
 87539d1:	89 e5                	mov    %esp,%ebp
 87539d3:	53                   	push   %ebx
 87539d4:	e8 1f f4 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87539d9:	81 c3 bf 91 c1 00    	add    $0xc191bf,%ebx
 87539df:	83 ec 14             	sub    $0x14,%esp
 87539e2:	8b 45 08             	mov    0x8(%ebp),%eax
 87539e5:	89 04 24             	mov    %eax,(%esp)
 87539e8:	e8 a3 fd ff ff       	call   8753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>
 87539ed:	83 c4 14             	add    $0x14,%esp
 87539f0:	5b                   	pop    %ebx
 87539f1:	5d                   	pop    %ebp
 87539f2:	c3                   	ret
 87539f3:	90                   	nop
 87539f4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87539fa:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::DSA_Public_Decoder::ReadHeader @ 0x87539d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_Public_Decoder::ReadHeader() */

void __thiscall TaoCrypt::DSA_Public_Decoder::ReadHeader(DSA_Public_Decoder *this)

{
  BER_Decoder::GetSequence((BER_Decoder *)this);
  return;
}

```

