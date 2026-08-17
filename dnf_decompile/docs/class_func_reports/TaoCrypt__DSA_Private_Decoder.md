# TaoCrypt__DSA_Private_Decoder

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## Decode

```asm
// === 087559d0 TaoCrypt::DSA_Private_Decoder::Decode  [0x087559d0-0x8755bbf] ===
 87559d0:	55                   	push   %ebp
 87559d1:	89 e5                	mov    %esp,%ebp
 87559d3:	57                   	push   %edi
 87559d4:	56                   	push   %esi
 87559d5:	53                   	push   %ebx
 87559d6:	83 ec 7c             	sub    $0x7c,%esp
 87559d9:	8b 75 08             	mov    0x8(%ebp),%esi
 87559dc:	e8 17 d4 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87559e1:	81 c3 b7 71 c1 00    	add    $0xc171b7,%ebx
 87559e7:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87559ea:	8b 06                	mov    (%esi),%eax
 87559ec:	89 34 24             	mov    %esi,(%esp)
 87559ef:	ff 50 08             	call   *0x8(%eax)
 87559f2:	8b 46 04             	mov    0x4(%esi),%eax
 87559f5:	8b 48 10             	mov    0x10(%eax),%ecx
 87559f8:	85 c9                	test   %ecx,%ecx
 87559fa:	0f 85 b7 01 00 00    	jne    8755bb7 <_ZN8TaoCrypt19DSA_Private_Decoder6DecodeERNS_14DSA_PrivateKeyE+0x1e7>
 8755a00:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8755a03:	89 04 24             	mov    %eax,(%esp)
 8755a06:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8755a09:	e8 82 9b 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8755a0e:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8755a11:	89 34 24             	mov    %esi,(%esp)
 8755a14:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755a18:	e8 83 ea ff ff       	call   87544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>
 8755a1d:	89 3c 24             	mov    %edi,(%esp)
 8755a20:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755a24:	e8 17 1c 00 00       	call   8757640 <_ZN8TaoCrypt13DSA_PublicKey10SetModulusERKNS_7IntegerE>
 8755a29:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8755a2c:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8755a2f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8755a36:	00 
 8755a37:	c1 e0 02             	shl    $0x2,%eax
 8755a3a:	89 14 24             	mov    %edx,(%esp)
 8755a3d:	89 55 94             	mov    %edx,-0x6c(%ebp)
 8755a40:	89 44 24 08          	mov    %eax,0x8(%esp)
 8755a44:	e8 77 82 92 ff       	call   807dcc0 <memset@plt>
 8755a49:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8755a4c:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8755a51:	89 14 24             	mov    %edx,(%esp)
 8755a54:	e8 c7 1c 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8755a59:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8755a5c:	89 04 24             	mov    %eax,(%esp)
 8755a5f:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8755a62:	e8 29 9b 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8755a67:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8755a6a:	89 34 24             	mov    %esi,(%esp)
 8755a6d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755a71:	e8 2a ea ff ff       	call   87544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>
 8755a76:	89 3c 24             	mov    %edi,(%esp)
 8755a79:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755a7d:	e8 8e 1b 00 00       	call   8757610 <_ZN8TaoCrypt13DSA_PublicKey16SetSubGroupOrderERKNS_7IntegerE>
 8755a82:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8755a85:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8755a88:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8755a8f:	00 
 8755a90:	c1 e0 02             	shl    $0x2,%eax
 8755a93:	89 14 24             	mov    %edx,(%esp)
 8755a96:	89 55 94             	mov    %edx,-0x6c(%ebp)
 8755a99:	89 44 24 08          	mov    %eax,0x8(%esp)
 8755a9d:	e8 1e 82 92 ff       	call   807dcc0 <memset@plt>
 8755aa2:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8755aa5:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8755aaa:	89 14 24             	mov    %edx,(%esp)
 8755aad:	e8 6e 1c 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8755ab2:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8755ab5:	89 04 24             	mov    %eax,(%esp)
 8755ab8:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8755abb:	e8 d0 9a 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8755ac0:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8755ac3:	89 34 24             	mov    %esi,(%esp)
 8755ac6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755aca:	e8 d1 e9 ff ff       	call   87544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>
 8755acf:	89 3c 24             	mov    %edi,(%esp)
 8755ad2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755ad6:	e8 05 1b 00 00       	call   87575e0 <_ZN8TaoCrypt13DSA_PublicKey20SetSubGroupGeneratorERKNS_7IntegerE>
 8755adb:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8755ade:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8755ae1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8755ae8:	00 
 8755ae9:	c1 e0 02             	shl    $0x2,%eax
 8755aec:	89 14 24             	mov    %edx,(%esp)
 8755aef:	89 55 94             	mov    %edx,-0x6c(%ebp)
 8755af2:	89 44 24 08          	mov    %eax,0x8(%esp)
 8755af6:	e8 c5 81 92 ff       	call   807dcc0 <memset@plt>
 8755afb:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8755afe:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8755b03:	89 14 24             	mov    %edx,(%esp)
 8755b06:	e8 15 1c 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8755b0b:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8755b0e:	89 04 24             	mov    %eax,(%esp)
 8755b11:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8755b14:	e8 77 9a 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8755b19:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8755b1c:	89 34 24             	mov    %esi,(%esp)
 8755b1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755b23:	e8 78 e9 ff ff       	call   87544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>
 8755b28:	89 3c 24             	mov    %edi,(%esp)
 8755b2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755b2f:	e8 7c 1a 00 00       	call   87575b0 <_ZN8TaoCrypt13DSA_PublicKey13SetPublicPartERKNS_7IntegerE>
 8755b34:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8755b37:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8755b3a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8755b41:	00 
 8755b42:	c1 e0 02             	shl    $0x2,%eax
 8755b45:	89 14 24             	mov    %edx,(%esp)
 8755b48:	89 55 94             	mov    %edx,-0x6c(%ebp)
 8755b4b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8755b4f:	e8 6c 81 92 ff       	call   807dcc0 <memset@plt>
 8755b54:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8755b57:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8755b5c:	89 14 24             	mov    %edx,(%esp)
 8755b5f:	e8 bc 1b 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8755b64:	8d 45 98             	lea    -0x68(%ebp),%eax
 8755b67:	89 04 24             	mov    %eax,(%esp)
 8755b6a:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8755b6d:	e8 1e 9a 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8755b72:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8755b75:	89 34 24             	mov    %esi,(%esp)
 8755b78:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755b7c:	e8 1f e9 ff ff       	call   87544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>
 8755b81:	89 3c 24             	mov    %edi,(%esp)
 8755b84:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755b88:	e8 f3 19 00 00       	call   8757580 <_ZN8TaoCrypt14DSA_PrivateKey14SetPrivatePartERKNS_7IntegerE>
 8755b8d:	8b 45 98             	mov    -0x68(%ebp),%eax
 8755b90:	8b 75 9c             	mov    -0x64(%ebp),%esi
 8755b93:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8755b9a:	00 
 8755b9b:	c1 e0 02             	shl    $0x2,%eax
 8755b9e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8755ba2:	89 34 24             	mov    %esi,(%esp)
 8755ba5:	e8 16 81 92 ff       	call   807dcc0 <memset@plt>
 8755baa:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8755baf:	89 34 24             	mov    %esi,(%esp)
 8755bb2:	e8 69 1b 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8755bb7:	83 c4 7c             	add    $0x7c,%esp
 8755bba:	5b                   	pop    %ebx
 8755bbb:	5e                   	pop    %esi
 8755bbc:	5f                   	pop    %edi
 8755bbd:	5d                   	pop    %ebp
 8755bbe:	c3                   	ret
 8755bbf:	90                   	nop

```

```c
// TaoCrypt::DSA_Private_Decoder::Decode @ 0x87559d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_Private_Decoder::Decode(TaoCrypt::DSA_PrivateKey&) */

void __thiscall
TaoCrypt::DSA_Private_Decoder::Decode(DSA_Private_Decoder *this,DSA_PrivateKey *param_1)

{
  Integer *pIVar1;
  uint uVar2;
  int local_6c;
  void *local_68;
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
    DSA_PublicKey::SetModulus((DSA_PublicKey *)param_1,pIVar1);
    uVar2 = 0;
    memset(local_28,0,local_2c << 2);
    operator_delete__(local_28,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_3c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_3c);
    DSA_PublicKey::SetSubGroupOrder((DSA_PublicKey *)param_1,pIVar1);
    uVar2 = 0;
    memset(local_38,0,local_3c << 2);
    operator_delete__(local_38,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_4c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_4c);
    DSA_PublicKey::SetSubGroupGenerator((DSA_PublicKey *)param_1,pIVar1);
    uVar2 = 0;
    memset(local_48,0,local_4c << 2);
    operator_delete__(local_48,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_5c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_5c);
    DSA_PublicKey::SetPublicPart((DSA_PublicKey *)param_1,pIVar1);
    uVar2 = 0;
    memset(local_58,0,local_5c << 2);
    operator_delete__(local_58,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_6c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_6c);
    DSA_PrivateKey::SetPrivatePart(param_1,pIVar1);
    uVar2 = 0;
    memset(local_68,0,local_6c << 2);
    operator_delete__(local_68,uVar2 & 0xffffff00);
  }
  return;
}

```

---

## ReadHeader

```asm
// === 08753960 TaoCrypt::DSA_Private_Decoder::ReadHeader  [0x08753960-0x875399f] ===
 8753960:	55                   	push   %ebp
 8753961:	89 e5                	mov    %esp,%ebp
 8753963:	83 ec 18             	sub    $0x18,%esp
 8753966:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8753969:	e8 8a f4 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875396e:	81 c3 2a 92 c1 00    	add    $0xc1922a,%ebx
 8753974:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8753977:	8b 75 08             	mov    0x8(%ebp),%esi
 875397a:	89 34 24             	mov    %esi,(%esp)
 875397d:	e8 0e fe ff ff       	call   8753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>
 8753982:	89 34 24             	mov    %esi,(%esp)
 8753985:	e8 c6 fe ff ff       	call   8753850 <_ZN8TaoCrypt11BER_Decoder10GetVersionEv>
 875398a:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 875398d:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8753990:	89 ec                	mov    %ebp,%esp
 8753992:	5d                   	pop    %ebp
 8753993:	c3                   	ret
 8753994:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875399a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::DSA_Private_Decoder::ReadHeader @ 0x8753960

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_Private_Decoder::ReadHeader() */

void __thiscall TaoCrypt::DSA_Private_Decoder::ReadHeader(DSA_Private_Decoder *this)

{
  BER_Decoder::GetSequence((BER_Decoder *)this);
  BER_Decoder::GetVersion((BER_Decoder *)this);
  return;
}

```

