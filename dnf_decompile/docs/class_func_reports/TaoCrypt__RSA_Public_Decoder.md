# TaoCrypt__RSA_Public_Decoder

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## Decode

```asm
// === 087558d0 TaoCrypt::RSA_Public_Decoder::Decode  [0x087558d0-0x87559cf] ===
 87558d0:	55                   	push   %ebp
 87558d1:	89 e5                	mov    %esp,%ebp
 87558d3:	83 ec 58             	sub    $0x58,%esp
 87558d6:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87558d9:	8b 75 08             	mov    0x8(%ebp),%esi
 87558dc:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87558df:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87558e2:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87558e5:	e8 0e d5 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87558ea:	81 c3 ae 72 c1 00    	add    $0xc172ae,%ebx
 87558f0:	8b 06                	mov    (%esi),%eax
 87558f2:	89 34 24             	mov    %esi,(%esp)
 87558f5:	ff 50 08             	call   *0x8(%eax)
 87558f8:	8b 46 04             	mov    0x4(%esi),%eax
 87558fb:	8b 50 10             	mov    0x10(%eax),%edx
 87558fe:	85 d2                	test   %edx,%edx
 8755900:	0f 85 af 00 00 00    	jne    87559b5 <_ZN8TaoCrypt18RSA_Public_Decoder6DecodeERNS_13RSA_PublicKeyE+0xe5>
 8755906:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8755909:	89 04 24             	mov    %eax,(%esp)
 875590c:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 875590f:	e8 7c 9c 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8755914:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8755917:	89 34 24             	mov    %esi,(%esp)
 875591a:	89 44 24 04          	mov    %eax,0x4(%esp)
 875591e:	e8 7d eb ff ff       	call   87544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>
 8755923:	89 3c 24             	mov    %edi,(%esp)
 8755926:	83 c7 10             	add    $0x10,%edi
 8755929:	89 44 24 04          	mov    %eax,0x4(%esp)
 875592d:	e8 2e ab 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8755932:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8755935:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8755938:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875593f:	00 
 8755940:	c1 e0 02             	shl    $0x2,%eax
 8755943:	89 14 24             	mov    %edx,(%esp)
 8755946:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 8755949:	89 44 24 08          	mov    %eax,0x8(%esp)
 875594d:	e8 6e 83 92 ff       	call   807dcc0 <memset@plt>
 8755952:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8755955:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875595a:	89 14 24             	mov    %edx,(%esp)
 875595d:	e8 be 1d 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8755962:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8755965:	89 04 24             	mov    %eax,(%esp)
 8755968:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 875596b:	e8 20 9c 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8755970:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8755973:	89 34 24             	mov    %esi,(%esp)
 8755976:	89 44 24 04          	mov    %eax,0x4(%esp)
 875597a:	e8 21 eb ff ff       	call   87544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>
 875597f:	89 3c 24             	mov    %edi,(%esp)
 8755982:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755986:	e8 d5 aa 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 875598b:	8b 45 c8             	mov    -0x38(%ebp),%eax
 875598e:	8b 75 cc             	mov    -0x34(%ebp),%esi
 8755991:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8755998:	00 
 8755999:	c1 e0 02             	shl    $0x2,%eax
 875599c:	89 44 24 08          	mov    %eax,0x8(%esp)
 87559a0:	89 34 24             	mov    %esi,(%esp)
 87559a3:	e8 18 83 92 ff       	call   807dcc0 <memset@plt>
 87559a8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87559ad:	89 34 24             	mov    %esi,(%esp)
 87559b0:	e8 6b 1d 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87559b5:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87559b8:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87559bb:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87559be:	89 ec                	mov    %ebp,%esp
 87559c0:	5d                   	pop    %ebp
 87559c1:	c3                   	ret
 87559c2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87559c9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::RSA_Public_Decoder::Decode @ 0x87558d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_Public_Decoder::Decode(TaoCrypt::RSA_PublicKey&) */

void __thiscall
TaoCrypt::RSA_Public_Decoder::Decode(RSA_Public_Decoder *this,RSA_PublicKey *param_1)

{
  Integer *pIVar1;
  uint uVar2;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  (**(code **)(*(int *)this + 8))(this);
  if (*(int *)(*(int *)(this + 4) + 0x10) == 0) {
    Integer::Integer((Integer *)&local_2c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_2c);
    Integer::operator=((Integer *)param_1,pIVar1);
    uVar2 = 0;
    memset(local_28,0,local_2c << 2);
    operator_delete__(local_28,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_3c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_3c);
    Integer::operator=((Integer *)(param_1 + 0x10),pIVar1);
    uVar2 = 0;
    memset(local_38,0,local_3c << 2);
    operator_delete__(local_38,uVar2 & 0xffffff00);
  }
  return;
}

```

---

## ReadHeader

```asm
// === 087539a0 TaoCrypt::RSA_Public_Decoder::ReadHeader  [0x087539a0-0x87539cf] ===
 87539a0:	55                   	push   %ebp
 87539a1:	89 e5                	mov    %esp,%ebp
 87539a3:	53                   	push   %ebx
 87539a4:	e8 4f f4 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87539a9:	81 c3 ef 91 c1 00    	add    $0xc191ef,%ebx
 87539af:	83 ec 14             	sub    $0x14,%esp
 87539b2:	8b 45 08             	mov    0x8(%ebp),%eax
 87539b5:	89 04 24             	mov    %eax,(%esp)
 87539b8:	e8 d3 fd ff ff       	call   8753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>
 87539bd:	83 c4 14             	add    $0x14,%esp
 87539c0:	5b                   	pop    %ebx
 87539c1:	5d                   	pop    %ebp
 87539c2:	c3                   	ret
 87539c3:	90                   	nop
 87539c4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87539ca:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::RSA_Public_Decoder::ReadHeader @ 0x87539a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_Public_Decoder::ReadHeader() */

void __thiscall TaoCrypt::RSA_Public_Decoder::ReadHeader(RSA_Public_Decoder *this)

{
  BER_Decoder::GetSequence((BER_Decoder *)this);
  return;
}

```

