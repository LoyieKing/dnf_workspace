# TaoCrypt__RSA_PublicKey

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## ApplyFunction

```asm
// === 08767e00 TaoCrypt::RSA_PublicKey::ApplyFunction  [0x08767e00-0x8767e4f] ===
 8767e00:	55                   	push   %ebp
 8767e01:	89 e5                	mov    %esp,%ebp
 8767e03:	83 ec 18             	sub    $0x18,%esp
 8767e06:	8b 45 0c             	mov    0xc(%ebp),%eax
 8767e09:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8767e0c:	e8 e7 af fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8767e11:	81 c3 87 4d c0 00    	add    $0xc04d87,%ebx
 8767e17:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8767e1a:	8b 75 08             	mov    0x8(%ebp),%esi
 8767e1d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8767e21:	83 c0 10             	add    $0x10,%eax
 8767e24:	89 44 24 08          	mov    %eax,0x8(%esp)
 8767e28:	8b 45 10             	mov    0x10(%ebp),%eax
 8767e2b:	89 34 24             	mov    %esi,(%esp)
 8767e2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8767e32:	e8 f9 77 ff ff       	call   875f630 <_ZN8TaoCrypt13a_exp_b_mod_cERKNS_7IntegerES2_S2_>
 8767e37:	89 f0                	mov    %esi,%eax
 8767e39:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8767e3c:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8767e3f:	83 ec 04             	sub    $0x4,%esp
 8767e42:	89 ec                	mov    %ebp,%esp
 8767e44:	5d                   	pop    %ebp
 8767e45:	c2 04 00             	ret    $0x4
 8767e48:	90                   	nop
 8767e49:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::RSA_PublicKey::ApplyFunction @ 0x8767e00

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_PublicKey::ApplyFunction(TaoCrypt::Integer const&) const */

Integer * TaoCrypt::RSA_PublicKey::ApplyFunction(Integer *param_1)

{
  Integer *in_stack_00000008;
  Integer *in_stack_0000000c;
  
  a_exp_b_mod_c((TaoCrypt *)param_1,in_stack_0000000c,in_stack_00000008 + 0x10,in_stack_00000008);
  return param_1;
}

```

---

## Initialize

```asm
// === 08767d70 TaoCrypt::RSA_PublicKey::Initialize  [0x08767d70-0x8767daf] ===
 8767d70:	55                   	push   %ebp
 8767d71:	89 e5                	mov    %esp,%ebp
 8767d73:	53                   	push   %ebx
 8767d74:	e8 7f b0 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8767d79:	81 c3 1f 4e c0 00    	add    $0xc04e1f,%ebx
 8767d7f:	83 ec 24             	sub    $0x24,%esp
 8767d82:	8b 45 0c             	mov    0xc(%ebp),%eax
 8767d85:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8767d88:	8b 83 fc ff ff ff    	mov    -0x4(%ebx),%eax
 8767d8e:	83 c0 08             	add    $0x8,%eax
 8767d91:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8767d94:	8b 45 08             	mov    0x8(%ebp),%eax
 8767d97:	89 44 24 04          	mov    %eax,0x4(%esp)
 8767d9b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8767d9e:	89 04 24             	mov    %eax,(%esp)
 8767da1:	e8 2a db fe ff       	call   87558d0 <_ZN8TaoCrypt18RSA_Public_Decoder6DecodeERNS_13RSA_PublicKeyE>
 8767da6:	83 c4 24             	add    $0x24,%esp
 8767da9:	5b                   	pop    %ebx
 8767daa:	5d                   	pop    %ebp
 8767dab:	c3                   	ret
 8767dac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::RSA_PublicKey::Initialize @ 0x8767d70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_PublicKey::Initialize(TaoCrypt::Source&) */

void __thiscall TaoCrypt::RSA_PublicKey::Initialize(RSA_PublicKey *this,Source *param_1)

{
  undefined *local_14;
  Source *local_10;
  undefined4 uStack_c;
  
  uStack_c = 0x8767d79;
  local_10 = param_1;
  local_14 = PTR_vtable_0936cb94 + 8;
  RSA_Public_Decoder::Decode((RSA_Public_Decoder *)&local_14,this);
  return;
}

```

---

## RSA_PublicKey

```asm
// === 08767db0 TaoCrypt::RSA_PublicKey::RSA_PublicKey  [0x08767db0-0x8767dff] ===
 8767db0:	55                   	push   %ebp
 8767db1:	89 e5                	mov    %esp,%ebp
 8767db3:	83 ec 18             	sub    $0x18,%esp
 8767db6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8767db9:	e8 3a b0 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8767dbe:	81 c3 da 4d c0 00    	add    $0xc04dda,%ebx
 8767dc4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8767dc7:	8b 75 08             	mov    0x8(%ebp),%esi
 8767dca:	89 34 24             	mov    %esi,(%esp)
 8767dcd:	e8 be 77 ff ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8767dd2:	8d 46 10             	lea    0x10(%esi),%eax
 8767dd5:	89 04 24             	mov    %eax,(%esp)
 8767dd8:	e8 b3 77 ff ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8767ddd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8767de0:	89 34 24             	mov    %esi,(%esp)
 8767de3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8767de7:	e8 84 ff ff ff       	call   8767d70 <_ZN8TaoCrypt13RSA_PublicKey10InitializeERNS_6SourceE>
 8767dec:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8767def:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8767df2:	89 ec                	mov    %ebp,%esp
 8767df4:	5d                   	pop    %ebp
 8767df5:	c3                   	ret
 8767df6:	8d 76 00             	lea    0x0(%esi),%esi
 8767df9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::RSA_PublicKey::RSA_PublicKey @ 0x8767db0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_PublicKey::RSA_PublicKey(TaoCrypt::Source&) */

void __thiscall TaoCrypt::RSA_PublicKey::RSA_PublicKey(RSA_PublicKey *this,Source *param_1)

{
  Integer::Integer((Integer *)this);
  Integer::Integer((Integer *)(this + 0x10));
  Initialize(this,param_1);
  return;
}

```

