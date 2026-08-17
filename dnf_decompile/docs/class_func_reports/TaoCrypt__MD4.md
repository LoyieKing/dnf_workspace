# TaoCrypt__MD4

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## Init

```asm
// === 08765990 TaoCrypt::MD4::Init  [0x08765990-0x87659cf] ===
 8765990:	55                   	push   %ebp
 8765991:	89 e5                	mov    %esp,%ebp
 8765993:	8b 45 08             	mov    0x8(%ebp),%eax
 8765996:	c7 40 10 01 23 45 67 	movl   $0x67452301,0x10(%eax)
 876599d:	c7 40 14 89 ab cd ef 	movl   $0xefcdab89,0x14(%eax)
 87659a4:	c7 40 18 fe dc ba 98 	movl   $0x98badcfe,0x18(%eax)
 87659ab:	c7 40 1c 76 54 32 10 	movl   $0x10325476,0x1c(%eax)
 87659b2:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 87659b9:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 87659c0:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87659c7:	5d                   	pop    %ebp
 87659c8:	c3                   	ret
 87659c9:	90                   	nop
 87659ca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::MD4::Init @ 0x8765990

/* TaoCrypt::MD4::Init() */

void __thiscall TaoCrypt::MD4::Init(MD4 *this)

{
  *(undefined4 *)(this + 0x10) = 0x67452301;
  *(undefined4 *)(this + 0x14) = 0xefcdab89;
  *(undefined4 *)(this + 0x18) = 0x98badcfe;
  *(undefined4 *)(this + 0x1c) = 0x10325476;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

```

---

## MD4

```asm
// === 08766010 TaoCrypt::MD4::MD4  [0x08766010-0x87660ef] ===
 8766010:	55                   	push   %ebp
 8766011:	89 e5                	mov    %esp,%ebp
 8766013:	57                   	push   %edi
 8766014:	56                   	push   %esi
 8766015:	53                   	push   %ebx
 8766016:	e8 dd cd fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876601b:	81 c3 7d 6b c0 00    	add    $0xc06b7d,%ebx
 8766021:	83 ec 1c             	sub    $0x1c,%esp
 8766024:	8b 75 08             	mov    0x8(%ebp),%esi
 8766027:	8b 7d 0c             	mov    0xc(%ebp),%edi
 876602a:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 8766031:	00 
 8766032:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8766039:	00 
 876603a:	89 34 24             	mov    %esi,(%esp)
 876603d:	e8 8e 2b ff ff       	call   8758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>
 8766042:	8b 83 00 fa ff ff    	mov    -0x600(%ebx),%eax
 8766048:	8d 57 10             	lea    0x10(%edi),%edx
 876604b:	8b 4f 10             	mov    0x10(%edi),%ecx
 876604e:	83 c0 08             	add    $0x8,%eax
 8766051:	89 06                	mov    %eax,(%esi)
 8766053:	8b 47 04             	mov    0x4(%edi),%eax
 8766056:	89 4e 10             	mov    %ecx,0x10(%esi)
 8766059:	8b 4a 04             	mov    0x4(%edx),%ecx
 876605c:	89 46 04             	mov    %eax,0x4(%esi)
 876605f:	8b 47 08             	mov    0x8(%edi),%eax
 8766062:	89 46 08             	mov    %eax,0x8(%esi)
 8766065:	8b 47 0c             	mov    0xc(%edi),%eax
 8766068:	89 46 0c             	mov    %eax,0xc(%esi)
 876606b:	8d 46 10             	lea    0x10(%esi),%eax
 876606e:	89 48 04             	mov    %ecx,0x4(%eax)
 8766071:	8b 4a 08             	mov    0x8(%edx),%ecx
 8766074:	89 48 08             	mov    %ecx,0x8(%eax)
 8766077:	8b 52 0c             	mov    0xc(%edx),%edx
 876607a:	8b 4f 30             	mov    0x30(%edi),%ecx
 876607d:	89 50 0c             	mov    %edx,0xc(%eax)
 8766080:	8d 57 30             	lea    0x30(%edi),%edx
 8766083:	89 4e 30             	mov    %ecx,0x30(%esi)
 8766086:	8b 4a 04             	mov    0x4(%edx),%ecx
 8766089:	8d 46 30             	lea    0x30(%esi),%eax
 876608c:	89 48 04             	mov    %ecx,0x4(%eax)
 876608f:	8b 4a 08             	mov    0x8(%edx),%ecx
 8766092:	89 48 08             	mov    %ecx,0x8(%eax)
 8766095:	8b 4a 0c             	mov    0xc(%edx),%ecx
 8766098:	89 48 0c             	mov    %ecx,0xc(%eax)
 876609b:	8b 4a 10             	mov    0x10(%edx),%ecx
 876609e:	89 48 10             	mov    %ecx,0x10(%eax)
 87660a1:	8b 4a 14             	mov    0x14(%edx),%ecx
 87660a4:	89 48 14             	mov    %ecx,0x14(%eax)
 87660a7:	8b 4a 18             	mov    0x18(%edx),%ecx
 87660aa:	89 48 18             	mov    %ecx,0x18(%eax)
 87660ad:	8b 4a 1c             	mov    0x1c(%edx),%ecx
 87660b0:	89 48 1c             	mov    %ecx,0x1c(%eax)
 87660b3:	8b 4a 20             	mov    0x20(%edx),%ecx
 87660b6:	89 48 20             	mov    %ecx,0x20(%eax)
 87660b9:	8b 4a 24             	mov    0x24(%edx),%ecx
 87660bc:	89 48 24             	mov    %ecx,0x24(%eax)
 87660bf:	8b 4a 28             	mov    0x28(%edx),%ecx
 87660c2:	89 48 28             	mov    %ecx,0x28(%eax)
 87660c5:	8b 4a 2c             	mov    0x2c(%edx),%ecx
 87660c8:	89 48 2c             	mov    %ecx,0x2c(%eax)
 87660cb:	8b 4a 30             	mov    0x30(%edx),%ecx
 87660ce:	89 48 30             	mov    %ecx,0x30(%eax)
 87660d1:	8b 4a 34             	mov    0x34(%edx),%ecx
 87660d4:	89 48 34             	mov    %ecx,0x34(%eax)
 87660d7:	8b 4a 38             	mov    0x38(%edx),%ecx
 87660da:	89 48 38             	mov    %ecx,0x38(%eax)
 87660dd:	8b 52 3c             	mov    0x3c(%edx),%edx
 87660e0:	89 50 3c             	mov    %edx,0x3c(%eax)
 87660e3:	83 c4 1c             	add    $0x1c,%esp
 87660e6:	5b                   	pop    %ebx
 87660e7:	5e                   	pop    %esi
 87660e8:	5f                   	pop    %edi
 87660e9:	5d                   	pop    %ebp
 87660ea:	c3                   	ret
 87660eb:	90                   	nop
 87660ec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::MD4::MD4 @ 0x8766010

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MD4::MD4(TaoCrypt::MD4 const&) */

void __thiscall TaoCrypt::MD4::MD4(MD4 *this,MD4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  HASHwithTransform::HASHwithTransform((HASHwithTransform *)this,4,0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined **)this = PTR_vtable_0936c598 + 8;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  return;
}

```

---

## Swap

```asm
// === 08765f50 TaoCrypt::MD4::Swap  [0x08765f50-0x876600f] ===
 8765f50:	55                   	push   %ebp
 8765f51:	89 e5                	mov    %esp,%ebp
 8765f53:	57                   	push   %edi
 8765f54:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8765f57:	56                   	push   %esi
 8765f58:	8b 75 0c             	mov    0xc(%ebp),%esi
 8765f5b:	8b 41 08             	mov    0x8(%ecx),%eax
 8765f5e:	8b 56 08             	mov    0x8(%esi),%edx
 8765f61:	8b 7e 10             	mov    0x10(%esi),%edi
 8765f64:	89 51 08             	mov    %edx,0x8(%ecx)
 8765f67:	8b 56 0c             	mov    0xc(%esi),%edx
 8765f6a:	89 46 08             	mov    %eax,0x8(%esi)
 8765f6d:	8b 41 0c             	mov    0xc(%ecx),%eax
 8765f70:	89 79 10             	mov    %edi,0x10(%ecx)
 8765f73:	89 51 0c             	mov    %edx,0xc(%ecx)
 8765f76:	8b 56 04             	mov    0x4(%esi),%edx
 8765f79:	89 46 0c             	mov    %eax,0xc(%esi)
 8765f7c:	8b 41 04             	mov    0x4(%ecx),%eax
 8765f7f:	89 51 04             	mov    %edx,0x4(%ecx)
 8765f82:	8d 56 10             	lea    0x10(%esi),%edx
 8765f85:	8b 7a 04             	mov    0x4(%edx),%edi
 8765f88:	89 46 04             	mov    %eax,0x4(%esi)
 8765f8b:	8d 41 10             	lea    0x10(%ecx),%eax
 8765f8e:	89 78 04             	mov    %edi,0x4(%eax)
 8765f91:	8b 7a 08             	mov    0x8(%edx),%edi
 8765f94:	89 78 08             	mov    %edi,0x8(%eax)
 8765f97:	8b 52 0c             	mov    0xc(%edx),%edx
 8765f9a:	89 50 0c             	mov    %edx,0xc(%eax)
 8765f9d:	8d 56 30             	lea    0x30(%esi),%edx
 8765fa0:	8b 76 30             	mov    0x30(%esi),%esi
 8765fa3:	8d 41 30             	lea    0x30(%ecx),%eax
 8765fa6:	89 71 30             	mov    %esi,0x30(%ecx)
 8765fa9:	8b 4a 04             	mov    0x4(%edx),%ecx
 8765fac:	89 48 04             	mov    %ecx,0x4(%eax)
 8765faf:	8b 4a 08             	mov    0x8(%edx),%ecx
 8765fb2:	89 48 08             	mov    %ecx,0x8(%eax)
 8765fb5:	8b 4a 0c             	mov    0xc(%edx),%ecx
 8765fb8:	89 48 0c             	mov    %ecx,0xc(%eax)
 8765fbb:	8b 4a 10             	mov    0x10(%edx),%ecx
 8765fbe:	89 48 10             	mov    %ecx,0x10(%eax)
 8765fc1:	8b 4a 14             	mov    0x14(%edx),%ecx
 8765fc4:	89 48 14             	mov    %ecx,0x14(%eax)
 8765fc7:	8b 4a 18             	mov    0x18(%edx),%ecx
 8765fca:	89 48 18             	mov    %ecx,0x18(%eax)
 8765fcd:	8b 4a 1c             	mov    0x1c(%edx),%ecx
 8765fd0:	89 48 1c             	mov    %ecx,0x1c(%eax)
 8765fd3:	8b 4a 20             	mov    0x20(%edx),%ecx
 8765fd6:	89 48 20             	mov    %ecx,0x20(%eax)
 8765fd9:	8b 4a 24             	mov    0x24(%edx),%ecx
 8765fdc:	89 48 24             	mov    %ecx,0x24(%eax)
 8765fdf:	8b 4a 28             	mov    0x28(%edx),%ecx
 8765fe2:	89 48 28             	mov    %ecx,0x28(%eax)
 8765fe5:	8b 4a 2c             	mov    0x2c(%edx),%ecx
 8765fe8:	89 48 2c             	mov    %ecx,0x2c(%eax)
 8765feb:	8b 4a 30             	mov    0x30(%edx),%ecx
 8765fee:	89 48 30             	mov    %ecx,0x30(%eax)
 8765ff1:	8b 4a 34             	mov    0x34(%edx),%ecx
 8765ff4:	89 48 34             	mov    %ecx,0x34(%eax)
 8765ff7:	8b 4a 38             	mov    0x38(%edx),%ecx
 8765ffa:	89 48 38             	mov    %ecx,0x38(%eax)
 8765ffd:	8b 52 3c             	mov    0x3c(%edx),%edx
 8766000:	89 50 3c             	mov    %edx,0x3c(%eax)
 8766003:	5e                   	pop    %esi
 8766004:	5f                   	pop    %edi
 8766005:	5d                   	pop    %ebp
 8766006:	c3                   	ret
 8766007:	90                   	nop
 8766008:	90                   	nop
 8766009:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::MD4::Swap @ 0x8765f50

/* TaoCrypt::MD4::Swap(TaoCrypt::MD4&) */

void __thiscall TaoCrypt::MD4::Swap(MD4 *this,MD4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(this + 8);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = *(undefined4 *)(this + 4);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  return;
}

```

---

## Transform

```asm
// === 087659d0 TaoCrypt::MD4::Transform  [0x087659d0-0x8765f4f] ===
 87659d0:	55                   	push   %ebp
 87659d1:	89 e5                	mov    %esp,%ebp
 87659d3:	57                   	push   %edi
 87659d4:	56                   	push   %esi
 87659d5:	83 ec 1c             	sub    $0x1c,%esp
 87659d8:	8b 45 08             	mov    0x8(%ebp),%eax
 87659db:	8b 70 1c             	mov    0x1c(%eax),%esi
 87659de:	8b 50 18             	mov    0x18(%eax),%edx
 87659e1:	8b 78 30             	mov    0x30(%eax),%edi
 87659e4:	03 78 10             	add    0x10(%eax),%edi
 87659e7:	89 f1                	mov    %esi,%ecx
 87659e9:	31 d1                	xor    %edx,%ecx
 87659eb:	23 48 14             	and    0x14(%eax),%ecx
 87659ee:	31 f1                	xor    %esi,%ecx
 87659f0:	01 f9                	add    %edi,%ecx
 87659f2:	8b 78 14             	mov    0x14(%eax),%edi
 87659f5:	c1 c9 1d             	ror    $0x1d,%ecx
 87659f8:	03 70 34             	add    0x34(%eax),%esi
 87659fb:	31 d7                	xor    %edx,%edi
 87659fd:	21 cf                	and    %ecx,%edi
 87659ff:	31 d7                	xor    %edx,%edi
 8765a01:	01 f7                	add    %esi,%edi
 8765a03:	8b 70 14             	mov    0x14(%eax),%esi
 8765a06:	c1 cf 19             	ror    $0x19,%edi
 8765a09:	03 50 38             	add    0x38(%eax),%edx
 8765a0c:	31 ce                	xor    %ecx,%esi
 8765a0e:	21 fe                	and    %edi,%esi
 8765a10:	33 70 14             	xor    0x14(%eax),%esi
 8765a13:	01 d6                	add    %edx,%esi
 8765a15:	8b 50 14             	mov    0x14(%eax),%edx
 8765a18:	03 50 3c             	add    0x3c(%eax),%edx
 8765a1b:	c1 ce 15             	ror    $0x15,%esi
 8765a1e:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8765a21:	89 fa                	mov    %edi,%edx
 8765a23:	31 ca                	xor    %ecx,%edx
 8765a25:	21 f2                	and    %esi,%edx
 8765a27:	31 ca                	xor    %ecx,%edx
 8765a29:	03 55 f4             	add    -0xc(%ebp),%edx
 8765a2c:	c1 ca 0d             	ror    $0xd,%edx
 8765a2f:	89 55 f0             	mov    %edx,-0x10(%ebp)
 8765a32:	8b 50 40             	mov    0x40(%eax),%edx
 8765a35:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8765a38:	89 f1                	mov    %esi,%ecx
 8765a3a:	31 f9                	xor    %edi,%ecx
 8765a3c:	23 4d f0             	and    -0x10(%ebp),%ecx
 8765a3f:	31 f9                	xor    %edi,%ecx
 8765a41:	01 d1                	add    %edx,%ecx
 8765a43:	8b 50 44             	mov    0x44(%eax),%edx
 8765a46:	c1 c9 1d             	ror    $0x1d,%ecx
 8765a49:	8d 14 17             	lea    (%edi,%edx,1),%edx
 8765a4c:	8b 7d f0             	mov    -0x10(%ebp),%edi
 8765a4f:	31 f7                	xor    %esi,%edi
 8765a51:	21 cf                	and    %ecx,%edi
 8765a53:	31 f7                	xor    %esi,%edi
 8765a55:	01 d7                	add    %edx,%edi
 8765a57:	8b 50 48             	mov    0x48(%eax),%edx
 8765a5a:	c1 cf 19             	ror    $0x19,%edi
 8765a5d:	8d 14 16             	lea    (%esi,%edx,1),%edx
 8765a60:	8b 75 f0             	mov    -0x10(%ebp),%esi
 8765a63:	31 ce                	xor    %ecx,%esi
 8765a65:	21 fe                	and    %edi,%esi
 8765a67:	33 75 f0             	xor    -0x10(%ebp),%esi
 8765a6a:	01 d6                	add    %edx,%esi
 8765a6c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8765a6f:	03 50 4c             	add    0x4c(%eax),%edx
 8765a72:	c1 ce 15             	ror    $0x15,%esi
 8765a75:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8765a78:	89 fa                	mov    %edi,%edx
 8765a7a:	31 ca                	xor    %ecx,%edx
 8765a7c:	21 f2                	and    %esi,%edx
 8765a7e:	31 ca                	xor    %ecx,%edx
 8765a80:	03 55 f4             	add    -0xc(%ebp),%edx
 8765a83:	c1 ca 0d             	ror    $0xd,%edx
 8765a86:	89 55 f0             	mov    %edx,-0x10(%ebp)
 8765a89:	8b 50 50             	mov    0x50(%eax),%edx
 8765a8c:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8765a8f:	89 f1                	mov    %esi,%ecx
 8765a91:	31 f9                	xor    %edi,%ecx
 8765a93:	23 4d f0             	and    -0x10(%ebp),%ecx
 8765a96:	31 f9                	xor    %edi,%ecx
 8765a98:	01 d1                	add    %edx,%ecx
 8765a9a:	8b 50 54             	mov    0x54(%eax),%edx
 8765a9d:	c1 c9 1d             	ror    $0x1d,%ecx
 8765aa0:	8d 14 17             	lea    (%edi,%edx,1),%edx
 8765aa3:	8b 7d f0             	mov    -0x10(%ebp),%edi
 8765aa6:	31 f7                	xor    %esi,%edi
 8765aa8:	21 cf                	and    %ecx,%edi
 8765aaa:	31 f7                	xor    %esi,%edi
 8765aac:	01 d7                	add    %edx,%edi
 8765aae:	8b 50 58             	mov    0x58(%eax),%edx
 8765ab1:	c1 cf 19             	ror    $0x19,%edi
 8765ab4:	8d 14 16             	lea    (%esi,%edx,1),%edx
 8765ab7:	8b 75 f0             	mov    -0x10(%ebp),%esi
 8765aba:	31 ce                	xor    %ecx,%esi
 8765abc:	21 fe                	and    %edi,%esi
 8765abe:	33 75 f0             	xor    -0x10(%ebp),%esi
 8765ac1:	01 d6                	add    %edx,%esi
 8765ac3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8765ac6:	03 50 5c             	add    0x5c(%eax),%edx
 8765ac9:	c1 ce 15             	ror    $0x15,%esi
 8765acc:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8765acf:	89 fa                	mov    %edi,%edx
 8765ad1:	31 ca                	xor    %ecx,%edx
 8765ad3:	21 f2                	and    %esi,%edx
 8765ad5:	31 ca                	xor    %ecx,%edx
 8765ad7:	03 55 f4             	add    -0xc(%ebp),%edx
 8765ada:	c1 ca 0d             	ror    $0xd,%edx
 8765add:	89 55 f0             	mov    %edx,-0x10(%ebp)
 8765ae0:	8b 50 60             	mov    0x60(%eax),%edx
 8765ae3:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8765ae6:	89 f1                	mov    %esi,%ecx
 8765ae8:	31 f9                	xor    %edi,%ecx
 8765aea:	23 4d f0             	and    -0x10(%ebp),%ecx
 8765aed:	31 f9                	xor    %edi,%ecx
 8765aef:	01 d1                	add    %edx,%ecx
 8765af1:	8b 50 64             	mov    0x64(%eax),%edx
 8765af4:	c1 c9 1d             	ror    $0x1d,%ecx
 8765af7:	89 4d ec             	mov    %ecx,-0x14(%ebp)
 8765afa:	8d 14 17             	lea    (%edi,%edx,1),%edx
 8765afd:	8b 7d f0             	mov    -0x10(%ebp),%edi
 8765b00:	31 f7                	xor    %esi,%edi
 8765b02:	21 cf                	and    %ecx,%edi
 8765b04:	31 f7                	xor    %esi,%edi
 8765b06:	01 d7                	add    %edx,%edi
 8765b08:	8b 50 68             	mov    0x68(%eax),%edx
 8765b0b:	c1 cf 19             	ror    $0x19,%edi
 8765b0e:	89 7d e8             	mov    %edi,-0x18(%ebp)
 8765b11:	8d 14 16             	lea    (%esi,%edx,1),%edx
 8765b14:	8b 75 f0             	mov    -0x10(%ebp),%esi
 8765b17:	31 ce                	xor    %ecx,%esi
 8765b19:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8765b1c:	21 fe                	and    %edi,%esi
 8765b1e:	33 75 f0             	xor    -0x10(%ebp),%esi
 8765b21:	03 48 6c             	add    0x6c(%eax),%ecx
 8765b24:	01 d6                	add    %edx,%esi
 8765b26:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8765b29:	c1 ce 15             	ror    $0x15,%esi
 8765b2c:	31 fa                	xor    %edi,%edx
 8765b2e:	8b 7d ec             	mov    -0x14(%ebp),%edi
 8765b31:	21 f2                	and    %esi,%edx
 8765b33:	33 55 ec             	xor    -0x14(%ebp),%edx
 8765b36:	01 ca                	add    %ecx,%edx
 8765b38:	8b 48 30             	mov    0x30(%eax),%ecx
 8765b3b:	c1 ca 0d             	ror    $0xd,%edx
 8765b3e:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8765b41:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8765b44:	8d 8c 0f 99 79 82 5a 	lea    0x5a827999(%edi,%ecx,1),%ecx
 8765b4b:	8b 7d e8             	mov    -0x18(%ebp),%edi
 8765b4e:	09 f2                	or     %esi,%edx
 8765b50:	23 55 f4             	and    -0xc(%ebp),%edx
 8765b53:	21 f7                	and    %esi,%edi
 8765b55:	09 fa                	or     %edi,%edx
 8765b57:	8b 78 40             	mov    0x40(%eax),%edi
 8765b5a:	01 ca                	add    %ecx,%edx
 8765b5c:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8765b5f:	c1 ca 1d             	ror    $0x1d,%edx
 8765b62:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8765b65:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8765b68:	21 f1                	and    %esi,%ecx
 8765b6a:	8d bc 3a 99 79 82 5a 	lea    0x5a827999(%edx,%edi,1),%edi
 8765b71:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8765b74:	09 f2                	or     %esi,%edx
 8765b76:	23 55 e4             	and    -0x1c(%ebp),%edx
 8765b79:	09 ca                	or     %ecx,%edx
 8765b7b:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8765b7e:	8d 3c 3a             	lea    (%edx,%edi,1),%edi
 8765b81:	8b 50 50             	mov    0x50(%eax),%edx
 8765b84:	c1 cf 1b             	ror    $0x1b,%edi
 8765b87:	8d b4 16 99 79 82 5a 	lea    0x5a827999(%esi,%edx,1),%esi
 8765b8e:	8b 50 60             	mov    0x60(%eax),%edx
 8765b91:	89 75 f0             	mov    %esi,-0x10(%ebp)
 8765b94:	8b 75 f4             	mov    -0xc(%ebp),%esi
 8765b97:	0b 75 e4             	or     -0x1c(%ebp),%esi
 8765b9a:	23 4d e4             	and    -0x1c(%ebp),%ecx
 8765b9d:	21 fe                	and    %edi,%esi
 8765b9f:	09 ce                	or     %ecx,%esi
 8765ba1:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8765ba4:	03 75 f0             	add    -0x10(%ebp),%esi
 8765ba7:	8d 94 11 99 79 82 5a 	lea    0x5a827999(%ecx,%edx,1),%edx
 8765bae:	89 55 f0             	mov    %edx,-0x10(%ebp)
 8765bb1:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8765bb4:	c1 ce 17             	ror    $0x17,%esi
 8765bb7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8765bba:	09 f9                	or     %edi,%ecx
 8765bbc:	21 fa                	and    %edi,%edx
 8765bbe:	21 f1                	and    %esi,%ecx
 8765bc0:	09 d1                	or     %edx,%ecx
 8765bc2:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8765bc5:	03 4d f0             	add    -0x10(%ebp),%ecx
 8765bc8:	c1 c9 13             	ror    $0x13,%ecx
 8765bcb:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 8765bce:	8b 48 34             	mov    0x34(%eax),%ecx
 8765bd1:	8d 8c 0a 99 79 82 5a 	lea    0x5a827999(%edx,%ecx,1),%ecx
 8765bd8:	89 f2                	mov    %esi,%edx
 8765bda:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 8765bdd:	89 f1                	mov    %esi,%ecx
 8765bdf:	21 fa                	and    %edi,%edx
 8765be1:	09 f9                	or     %edi,%ecx
 8765be3:	23 4d f4             	and    -0xc(%ebp),%ecx
 8765be6:	09 d1                	or     %edx,%ecx
 8765be8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8765beb:	03 4d f0             	add    -0x10(%ebp),%ecx
 8765bee:	c1 c9 1d             	ror    $0x1d,%ecx
 8765bf1:	21 f2                	and    %esi,%edx
 8765bf3:	89 4d e8             	mov    %ecx,-0x18(%ebp)
 8765bf6:	8b 48 44             	mov    0x44(%eax),%ecx
 8765bf9:	8d bc 0f 99 79 82 5a 	lea    0x5a827999(%edi,%ecx,1),%edi
 8765c00:	8b 48 54             	mov    0x54(%eax),%ecx
 8765c03:	89 7d f0             	mov    %edi,-0x10(%ebp)
 8765c06:	8b 7d f4             	mov    -0xc(%ebp),%edi
 8765c09:	09 f7                	or     %esi,%edi
 8765c0b:	23 7d e8             	and    -0x18(%ebp),%edi
 8765c0e:	8d b4 0e 99 79 82 5a 	lea    0x5a827999(%esi,%ecx,1),%esi
 8765c15:	8b 48 64             	mov    0x64(%eax),%ecx
 8765c18:	09 d7                	or     %edx,%edi
 8765c1a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8765c1d:	03 7d f0             	add    -0x10(%ebp),%edi
 8765c20:	89 75 f0             	mov    %esi,-0x10(%ebp)
 8765c23:	8b 75 f4             	mov    -0xc(%ebp),%esi
 8765c26:	0b 75 e8             	or     -0x18(%ebp),%esi
 8765c29:	23 55 e8             	and    -0x18(%ebp),%edx
 8765c2c:	c1 cf 1b             	ror    $0x1b,%edi
 8765c2f:	21 fe                	and    %edi,%esi
 8765c31:	09 d6                	or     %edx,%esi
 8765c33:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8765c36:	03 75 f0             	add    -0x10(%ebp),%esi
 8765c39:	8d 8c 0a 99 79 82 5a 	lea    0x5a827999(%edx,%ecx,1),%ecx
 8765c40:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8765c43:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 8765c46:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 8765c49:	c1 ce 17             	ror    $0x17,%esi
 8765c4c:	21 fa                	and    %edi,%edx
 8765c4e:	09 f9                	or     %edi,%ecx
 8765c50:	21 f1                	and    %esi,%ecx
 8765c52:	09 d1                	or     %edx,%ecx
 8765c54:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8765c57:	03 4d f0             	add    -0x10(%ebp),%ecx
 8765c5a:	c1 c9 13             	ror    $0x13,%ecx
 8765c5d:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 8765c60:	8b 48 38             	mov    0x38(%eax),%ecx
 8765c63:	8d 8c 0a 99 79 82 5a 	lea    0x5a827999(%edx,%ecx,1),%ecx
 8765c6a:	89 f2                	mov    %esi,%edx
 8765c6c:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 8765c6f:	89 f1                	mov    %esi,%ecx
 8765c71:	21 fa                	and    %edi,%edx
 8765c73:	09 f9                	or     %edi,%ecx
 8765c75:	23 4d f4             	and    -0xc(%ebp),%ecx
 8765c78:	09 d1                	or     %edx,%ecx
 8765c7a:	03 4d f0             	add    -0x10(%ebp),%ecx
 8765c7d:	c1 c9 1d             	ror    $0x1d,%ecx
 8765c80:	89 4d e8             	mov    %ecx,-0x18(%ebp)
 8765c83:	8b 48 48             	mov    0x48(%eax),%ecx
 8765c86:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8765c89:	8d bc 0f 99 79 82 5a 	lea    0x5a827999(%edi,%ecx,1),%edi
 8765c90:	8b 48 58             	mov    0x58(%eax),%ecx
 8765c93:	89 7d f0             	mov    %edi,-0x10(%ebp)
 8765c96:	8b 7d f4             	mov    -0xc(%ebp),%edi
 8765c99:	21 f2                	and    %esi,%edx
 8765c9b:	09 f7                	or     %esi,%edi
 8765c9d:	23 7d e8             	and    -0x18(%ebp),%edi
 8765ca0:	8d b4 0e 99 79 82 5a 	lea    0x5a827999(%esi,%ecx,1),%esi
 8765ca7:	8b 48 68             	mov    0x68(%eax),%ecx
 8765caa:	09 d7                	or     %edx,%edi
 8765cac:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8765caf:	03 7d f0             	add    -0x10(%ebp),%edi
 8765cb2:	89 75 f0             	mov    %esi,-0x10(%ebp)
 8765cb5:	8b 75 f4             	mov    -0xc(%ebp),%esi
 8765cb8:	0b 75 e8             	or     -0x18(%ebp),%esi
 8765cbb:	23 55 e8             	and    -0x18(%ebp),%edx
 8765cbe:	c1 cf 1b             	ror    $0x1b,%edi
 8765cc1:	21 fe                	and    %edi,%esi
 8765cc3:	09 d6                	or     %edx,%esi
 8765cc5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8765cc8:	03 75 f0             	add    -0x10(%ebp),%esi
 8765ccb:	8d 8c 0a 99 79 82 5a 	lea    0x5a827999(%edx,%ecx,1),%ecx
 8765cd2:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8765cd5:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 8765cd8:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 8765cdb:	c1 ce 17             	ror    $0x17,%esi
 8765cde:	21 fa                	and    %edi,%edx
 8765ce0:	09 f9                	or     %edi,%ecx
 8765ce2:	21 f1                	and    %esi,%ecx
 8765ce4:	09 d1                	or     %edx,%ecx
 8765ce6:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8765ce9:	03 4d f0             	add    -0x10(%ebp),%ecx
 8765cec:	c1 c9 13             	ror    $0x13,%ecx
 8765cef:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 8765cf2:	8b 48 3c             	mov    0x3c(%eax),%ecx
 8765cf5:	8d 8c 0a 99 79 82 5a 	lea    0x5a827999(%edx,%ecx,1),%ecx
 8765cfc:	89 f2                	mov    %esi,%edx
 8765cfe:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 8765d01:	89 f1                	mov    %esi,%ecx
 8765d03:	21 fa                	and    %edi,%edx
 8765d05:	09 f9                	or     %edi,%ecx
 8765d07:	23 4d f4             	and    -0xc(%ebp),%ecx
 8765d0a:	09 d1                	or     %edx,%ecx
 8765d0c:	8b 50 4c             	mov    0x4c(%eax),%edx
 8765d0f:	03 4d f0             	add    -0x10(%ebp),%ecx
 8765d12:	8d bc 17 99 79 82 5a 	lea    0x5a827999(%edi,%edx,1),%edi
 8765d19:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8765d1c:	89 7d f0             	mov    %edi,-0x10(%ebp)
 8765d1f:	8b 7d f4             	mov    -0xc(%ebp),%edi
 8765d22:	c1 c9 1d             	ror    $0x1d,%ecx
 8765d25:	09 f7                	or     %esi,%edi
 8765d27:	21 f2                	and    %esi,%edx
 8765d29:	21 cf                	and    %ecx,%edi
 8765d2b:	09 d7                	or     %edx,%edi
 8765d2d:	8b 50 5c             	mov    0x5c(%eax),%edx
 8765d30:	03 7d f0             	add    -0x10(%ebp),%edi
 8765d33:	8d b4 16 99 79 82 5a 	lea    0x5a827999(%esi,%edx,1),%esi
 8765d3a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8765d3d:	89 75 f0             	mov    %esi,-0x10(%ebp)
 8765d40:	8b 75 f4             	mov    -0xc(%ebp),%esi
 8765d43:	c1 cf 1b             	ror    $0x1b,%edi
 8765d46:	21 ca                	and    %ecx,%edx
 8765d48:	09 ce                	or     %ecx,%esi
 8765d4a:	21 fe                	and    %edi,%esi
 8765d4c:	09 d6                	or     %edx,%esi
 8765d4e:	03 75 f0             	add    -0x10(%ebp),%esi
 8765d51:	c1 ce 17             	ror    $0x17,%esi
 8765d54:	89 75 e8             	mov    %esi,-0x18(%ebp)
 8765d57:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8765d5a:	8b 70 6c             	mov    0x6c(%eax),%esi
 8765d5d:	8d b4 32 99 79 82 5a 	lea    0x5a827999(%edx,%esi,1),%esi
 8765d64:	89 fa                	mov    %edi,%edx
 8765d66:	89 75 f0             	mov    %esi,-0x10(%ebp)
 8765d69:	89 fe                	mov    %edi,%esi
 8765d6b:	21 ca                	and    %ecx,%edx
 8765d6d:	09 ce                	or     %ecx,%esi
 8765d6f:	23 75 e8             	and    -0x18(%ebp),%esi
 8765d72:	09 d6                	or     %edx,%esi
 8765d74:	03 75 f0             	add    -0x10(%ebp),%esi
 8765d77:	c1 ce 13             	ror    $0x13,%esi
 8765d7a:	89 75 f4             	mov    %esi,-0xc(%ebp)
 8765d7d:	8b 70 30             	mov    0x30(%eax),%esi
 8765d80:	8d 94 31 a1 eb d9 6e 	lea    0x6ed9eba1(%ecx,%esi,1),%edx
 8765d87:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 8765d8a:	8b 70 40             	mov    0x40(%eax),%esi
 8765d8d:	31 f9                	xor    %edi,%ecx
 8765d8f:	33 4d f4             	xor    -0xc(%ebp),%ecx
 8765d92:	01 d1                	add    %edx,%ecx
 8765d94:	c1 c9 1d             	ror    $0x1d,%ecx
 8765d97:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 8765d9a:	8b 48 50             	mov    0x50(%eax),%ecx
 8765d9d:	8d 94 0f a1 eb d9 6e 	lea    0x6ed9eba1(%edi,%ecx,1),%edx
 8765da4:	8b 7d f4             	mov    -0xc(%ebp),%edi
 8765da7:	33 7d e8             	xor    -0x18(%ebp),%edi
 8765daa:	33 7d f0             	xor    -0x10(%ebp),%edi
 8765dad:	01 d7                	add    %edx,%edi
 8765daf:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8765db2:	c1 cf 17             	ror    $0x17,%edi
 8765db5:	8d 8c 32 a1 eb d9 6e 	lea    0x6ed9eba1(%edx,%esi,1),%ecx
 8765dbc:	8b 75 f4             	mov    -0xc(%ebp),%esi
 8765dbf:	33 75 f0             	xor    -0x10(%ebp),%esi
 8765dc2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8765dc5:	31 fe                	xor    %edi,%esi
 8765dc7:	01 ce                	add    %ecx,%esi
 8765dc9:	8b 48 60             	mov    0x60(%eax),%ecx
 8765dcc:	c1 ce 15             	ror    $0x15,%esi
 8765dcf:	8d 8c 0a a1 eb d9 6e 	lea    0x6ed9eba1(%edx,%ecx,1),%ecx
 8765dd6:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8765dd9:	31 fa                	xor    %edi,%edx
 8765ddb:	31 f2                	xor    %esi,%edx
 8765ddd:	01 ca                	add    %ecx,%edx
 8765ddf:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8765de2:	c1 ca 11             	ror    $0x11,%edx
 8765de5:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8765de8:	8b 50 38             	mov    0x38(%eax),%edx
 8765deb:	8d 94 11 a1 eb d9 6e 	lea    0x6ed9eba1(%ecx,%edx,1),%edx
 8765df2:	89 f1                	mov    %esi,%ecx
 8765df4:	31 f9                	xor    %edi,%ecx
 8765df6:	33 4d f4             	xor    -0xc(%ebp),%ecx
 8765df9:	01 d1                	add    %edx,%ecx
 8765dfb:	8b 50 48             	mov    0x48(%eax),%edx
 8765dfe:	c1 c9 1d             	ror    $0x1d,%ecx
 8765e01:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 8765e04:	8b 48 58             	mov    0x58(%eax),%ecx
 8765e07:	8d bc 0f a1 eb d9 6e 	lea    0x6ed9eba1(%edi,%ecx,1),%edi
 8765e0e:	8b 48 68             	mov    0x68(%eax),%ecx
 8765e11:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 8765e14:	8b 7d f4             	mov    -0xc(%ebp),%edi
 8765e17:	31 f7                	xor    %esi,%edi
 8765e19:	8d b4 16 a1 eb d9 6e 	lea    0x6ed9eba1(%esi,%edx,1),%esi
 8765e20:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8765e23:	33 7d f0             	xor    -0x10(%ebp),%edi
 8765e26:	03 7d e4             	add    -0x1c(%ebp),%edi
 8765e29:	89 75 e4             	mov    %esi,-0x1c(%ebp)
 8765e2c:	8b 75 f4             	mov    -0xc(%ebp),%esi
 8765e2f:	33 75 f0             	xor    -0x10(%ebp),%esi
 8765e32:	c1 cf 17             	ror    $0x17,%edi
 8765e35:	8d 8c 0a a1 eb d9 6e 	lea    0x6ed9eba1(%edx,%ecx,1),%ecx
 8765e3c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8765e3f:	31 fe                	xor    %edi,%esi
 8765e41:	03 75 e4             	add    -0x1c(%ebp),%esi
 8765e44:	31 fa                	xor    %edi,%edx
 8765e46:	c1 ce 15             	ror    $0x15,%esi
 8765e49:	31 f2                	xor    %esi,%edx
 8765e4b:	01 ca                	add    %ecx,%edx
 8765e4d:	c1 ca 11             	ror    $0x11,%edx
 8765e50:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8765e53:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8765e56:	8b 50 34             	mov    0x34(%eax),%edx
 8765e59:	8d 94 11 a1 eb d9 6e 	lea    0x6ed9eba1(%ecx,%edx,1),%edx
 8765e60:	89 f1                	mov    %esi,%ecx
 8765e62:	31 f9                	xor    %edi,%ecx
 8765e64:	33 4d f4             	xor    -0xc(%ebp),%ecx
 8765e67:	01 d1                	add    %edx,%ecx
 8765e69:	8b 50 44             	mov    0x44(%eax),%edx
 8765e6c:	c1 c9 1d             	ror    $0x1d,%ecx
 8765e6f:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 8765e72:	8b 48 54             	mov    0x54(%eax),%ecx
 8765e75:	8d bc 0f a1 eb d9 6e 	lea    0x6ed9eba1(%edi,%ecx,1),%edi
 8765e7c:	8b 48 64             	mov    0x64(%eax),%ecx
 8765e7f:	89 7d e8             	mov    %edi,-0x18(%ebp)
 8765e82:	8b 7d f4             	mov    -0xc(%ebp),%edi
 8765e85:	31 f7                	xor    %esi,%edi
 8765e87:	8d b4 16 a1 eb d9 6e 	lea    0x6ed9eba1(%esi,%edx,1),%esi
 8765e8e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8765e91:	33 7d f0             	xor    -0x10(%ebp),%edi
 8765e94:	03 7d e8             	add    -0x18(%ebp),%edi
 8765e97:	89 75 e8             	mov    %esi,-0x18(%ebp)
 8765e9a:	8b 75 f4             	mov    -0xc(%ebp),%esi
 8765e9d:	33 75 f0             	xor    -0x10(%ebp),%esi
 8765ea0:	c1 cf 17             	ror    $0x17,%edi
 8765ea3:	8d 8c 0a a1 eb d9 6e 	lea    0x6ed9eba1(%edx,%ecx,1),%ecx
 8765eaa:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8765ead:	31 fe                	xor    %edi,%esi
 8765eaf:	03 75 e8             	add    -0x18(%ebp),%esi
 8765eb2:	31 fa                	xor    %edi,%edx
 8765eb4:	c1 ce 15             	ror    $0x15,%esi
 8765eb7:	31 f2                	xor    %esi,%edx
 8765eb9:	01 ca                	add    %ecx,%edx
 8765ebb:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8765ebe:	c1 ca 11             	ror    $0x11,%edx
 8765ec1:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8765ec4:	8b 50 3c             	mov    0x3c(%eax),%edx
 8765ec7:	8d 94 11 a1 eb d9 6e 	lea    0x6ed9eba1(%ecx,%edx,1),%edx
 8765ece:	89 f1                	mov    %esi,%ecx
 8765ed0:	31 f9                	xor    %edi,%ecx
 8765ed2:	33 4d f4             	xor    -0xc(%ebp),%ecx
 8765ed5:	01 d1                	add    %edx,%ecx
 8765ed7:	8b 50 5c             	mov    0x5c(%eax),%edx
 8765eda:	c1 c9 1d             	ror    $0x1d,%ecx
 8765edd:	8d bc 17 a1 eb d9 6e 	lea    0x6ed9eba1(%edi,%edx,1),%edi
 8765ee4:	8b 50 4c             	mov    0x4c(%eax),%edx
 8765ee7:	89 7d e8             	mov    %edi,-0x18(%ebp)
 8765eea:	8b 7d f4             	mov    -0xc(%ebp),%edi
 8765eed:	31 f7                	xor    %esi,%edi
 8765eef:	8d b4 16 a1 eb d9 6e 	lea    0x6ed9eba1(%esi,%edx,1),%esi
 8765ef6:	31 cf                	xor    %ecx,%edi
 8765ef8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8765efb:	03 7d e8             	add    -0x18(%ebp),%edi
 8765efe:	89 75 e8             	mov    %esi,-0x18(%ebp)
 8765f01:	8b 75 f4             	mov    -0xc(%ebp),%esi
 8765f04:	c1 cf 17             	ror    $0x17,%edi
 8765f07:	31 ce                	xor    %ecx,%esi
 8765f09:	31 fe                	xor    %edi,%esi
 8765f0b:	03 75 e8             	add    -0x18(%ebp),%esi
 8765f0e:	c1 ce 15             	ror    $0x15,%esi
 8765f11:	89 75 f0             	mov    %esi,-0x10(%ebp)
 8765f14:	8b 70 6c             	mov    0x6c(%eax),%esi
 8765f17:	8d b4 32 a1 eb d9 6e 	lea    0x6ed9eba1(%edx,%esi,1),%esi
 8765f1e:	89 fa                	mov    %edi,%edx
 8765f20:	31 ca                	xor    %ecx,%edx
 8765f22:	33 55 f0             	xor    -0x10(%ebp),%edx
 8765f25:	03 48 10             	add    0x10(%eax),%ecx
 8765f28:	01 f2                	add    %esi,%edx
 8765f2a:	89 48 10             	mov    %ecx,0x10(%eax)
 8765f2d:	c1 ca 11             	ror    $0x11,%edx
 8765f30:	01 50 14             	add    %edx,0x14(%eax)
 8765f33:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8765f36:	01 50 18             	add    %edx,0x18(%eax)
 8765f39:	01 78 1c             	add    %edi,0x1c(%eax)
 8765f3c:	83 c4 1c             	add    $0x1c,%esp
 8765f3f:	5e                   	pop    %esi
 8765f40:	5f                   	pop    %edi
 8765f41:	5d                   	pop    %ebp
 8765f42:	c3                   	ret
 8765f43:	90                   	nop
 8765f44:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8765f4a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::MD4::Transform @ 0x87659d0

/* TaoCrypt::MD4::Transform() */

void __thiscall TaoCrypt::MD4::Transform(MD4 *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(this + 0x1c);
  uVar2 = *(uint *)(this + 0x18);
  uVar1 = ((uVar4 ^ uVar2) & *(uint *)(this + 0x14) ^ uVar4) +
          *(int *)(this + 0x30) + *(int *)(this + 0x10);
  uVar1 = uVar1 >> 0x1d | uVar1 * 8;
  uVar4 = ((*(uint *)(this + 0x14) ^ uVar2) & uVar1 ^ uVar2) + uVar4 + *(int *)(this + 0x34);
  uVar5 = uVar4 >> 0x19 | uVar4 * 0x80;
  uVar4 = ((*(uint *)(this + 0x14) ^ uVar1) & uVar5 ^ *(uint *)(this + 0x14)) +
          uVar2 + *(int *)(this + 0x38);
  uVar3 = uVar4 >> 0x15 | uVar4 * 0x800;
  uVar4 = ((uVar5 ^ uVar1) & uVar3 ^ uVar1) + *(int *)(this + 0x14) + *(int *)(this + 0x3c);
  uVar2 = uVar4 >> 0xd | uVar4 * 0x80000;
  uVar4 = ((uVar3 ^ uVar5) & uVar2 ^ uVar5) + uVar1 + *(int *)(this + 0x40);
  uVar4 = uVar4 >> 0x1d | uVar4 * 8;
  uVar1 = ((uVar2 ^ uVar3) & uVar4 ^ uVar3) + uVar5 + *(int *)(this + 0x44);
  uVar5 = uVar1 >> 0x19 | uVar1 * 0x80;
  uVar1 = ((uVar2 ^ uVar4) & uVar5 ^ uVar2) + uVar3 + *(int *)(this + 0x48);
  uVar1 = uVar1 >> 0x15 | uVar1 * 0x800;
  uVar2 = ((uVar5 ^ uVar4) & uVar1 ^ uVar4) + uVar2 + *(int *)(this + 0x4c);
  uVar2 = uVar2 >> 0xd | uVar2 * 0x80000;
  uVar4 = ((uVar1 ^ uVar5) & uVar2 ^ uVar5) + uVar4 + *(int *)(this + 0x50);
  uVar4 = uVar4 >> 0x1d | uVar4 * 8;
  uVar3 = ((uVar2 ^ uVar1) & uVar4 ^ uVar1) + uVar5 + *(int *)(this + 0x54);
  uVar3 = uVar3 >> 0x19 | uVar3 * 0x80;
  uVar1 = ((uVar2 ^ uVar4) & uVar3 ^ uVar2) + uVar1 + *(int *)(this + 0x58);
  uVar1 = uVar1 >> 0x15 | uVar1 * 0x800;
  uVar2 = ((uVar3 ^ uVar4) & uVar1 ^ uVar4) + uVar2 + *(int *)(this + 0x5c);
  uVar2 = uVar2 >> 0xd | uVar2 * 0x80000;
  uVar4 = ((uVar1 ^ uVar3) & uVar2 ^ uVar3) + uVar4 + *(int *)(this + 0x60);
  uVar4 = uVar4 >> 0x1d | uVar4 * 8;
  uVar3 = ((uVar2 ^ uVar1) & uVar4 ^ uVar1) + uVar3 + *(int *)(this + 100);
  uVar5 = uVar3 >> 0x19 | uVar3 * 0x80;
  uVar1 = ((uVar2 ^ uVar4) & uVar5 ^ uVar2) + uVar1 + *(int *)(this + 0x68);
  uVar3 = uVar1 >> 0x15 | uVar1 * 0x800;
  uVar2 = ((uVar4 ^ uVar5) & uVar3 ^ uVar4) + uVar2 + *(int *)(this + 0x6c);
  uVar2 = uVar2 >> 0xd | uVar2 * 0x80000;
  uVar4 = ((uVar5 | uVar3) & uVar2 | uVar5 & uVar3) + uVar4 + 0x5a827999 + *(int *)(this + 0x30);
  uVar1 = uVar4 >> 0x1d | uVar4 * 8;
  uVar4 = ((uVar2 | uVar3) & uVar1 | uVar2 & uVar3) + uVar5 + 0x5a827999 + *(int *)(this + 0x40);
  uVar5 = uVar4 >> 0x1b | uVar4 * 0x20;
  uVar4 = ((uVar2 | uVar1) & uVar5 | uVar2 & uVar1) + uVar3 + 0x5a827999 + *(int *)(this + 0x50);
  uVar3 = uVar4 >> 0x17 | uVar4 * 0x200;
  uVar4 = ((uVar1 | uVar5) & uVar3 | uVar1 & uVar5) + uVar2 + 0x5a827999 + *(int *)(this + 0x60);
  uVar4 = uVar4 >> 0x13 | uVar4 * 0x2000;
  uVar2 = ((uVar3 | uVar5) & uVar4 | uVar3 & uVar5) + uVar1 + 0x5a827999 + *(int *)(this + 0x34);
  uVar2 = uVar2 >> 0x1d | uVar2 * 8;
  uVar1 = ((uVar4 | uVar3) & uVar2 | uVar4 & uVar3) + uVar5 + 0x5a827999 + *(int *)(this + 0x44);
  uVar5 = uVar1 >> 0x1b | uVar1 * 0x20;
  uVar1 = ((uVar4 | uVar2) & uVar5 | uVar4 & uVar2) + uVar3 + 0x5a827999 + *(int *)(this + 0x54);
  uVar1 = uVar1 >> 0x17 | uVar1 * 0x200;
  uVar4 = ((uVar2 | uVar5) & uVar1 | uVar2 & uVar5) + uVar4 + 0x5a827999 + *(int *)(this + 100);
  uVar4 = uVar4 >> 0x13 | uVar4 * 0x2000;
  uVar2 = ((uVar1 | uVar5) & uVar4 | uVar1 & uVar5) + uVar2 + 0x5a827999 + *(int *)(this + 0x38);
  uVar2 = uVar2 >> 0x1d | uVar2 * 8;
  uVar3 = ((uVar4 | uVar1) & uVar2 | uVar4 & uVar1) + uVar5 + 0x5a827999 + *(int *)(this + 0x48);
  uVar3 = uVar3 >> 0x1b | uVar3 * 0x20;
  uVar1 = ((uVar4 | uVar2) & uVar3 | uVar4 & uVar2) + uVar1 + 0x5a827999 + *(int *)(this + 0x58);
  uVar1 = uVar1 >> 0x17 | uVar1 * 0x200;
  uVar4 = ((uVar2 | uVar3) & uVar1 | uVar2 & uVar3) + uVar4 + 0x5a827999 + *(int *)(this + 0x68);
  uVar4 = uVar4 >> 0x13 | uVar4 * 0x2000;
  uVar2 = ((uVar1 | uVar3) & uVar4 | uVar1 & uVar3) + uVar2 + 0x5a827999 + *(int *)(this + 0x3c);
  uVar2 = uVar2 >> 0x1d | uVar2 * 8;
  uVar3 = ((uVar4 | uVar1) & uVar2 | uVar4 & uVar1) + uVar3 + 0x5a827999 + *(int *)(this + 0x4c);
  uVar5 = uVar3 >> 0x1b | uVar3 * 0x20;
  uVar1 = ((uVar4 | uVar2) & uVar5 | uVar4 & uVar2) + uVar1 + 0x5a827999 + *(int *)(this + 0x5c);
  uVar1 = uVar1 >> 0x17 | uVar1 * 0x200;
  uVar4 = ((uVar5 | uVar2) & uVar1 | uVar5 & uVar2) + uVar4 + 0x5a827999 + *(int *)(this + 0x6c);
  uVar3 = uVar4 >> 0x13 | uVar4 * 0x2000;
  uVar4 = (uVar1 ^ uVar5 ^ uVar3) + uVar2 + 0x6ed9eba1 + *(int *)(this + 0x30);
  uVar4 = uVar4 >> 0x1d | uVar4 * 8;
  uVar2 = (uVar3 ^ uVar1 ^ uVar4) + uVar5 + 0x6ed9eba1 + *(int *)(this + 0x50);
  uVar5 = uVar2 >> 0x17 | uVar2 * 0x200;
  uVar2 = (uVar3 ^ uVar4 ^ uVar5) + uVar1 + 0x6ed9eba1 + *(int *)(this + 0x40);
  uVar1 = uVar2 >> 0x15 | uVar2 * 0x800;
  uVar2 = (uVar4 ^ uVar5 ^ uVar1) + uVar3 + 0x6ed9eba1 + *(int *)(this + 0x60);
  uVar2 = uVar2 >> 0x11 | uVar2 * 0x8000;
  uVar4 = (uVar1 ^ uVar5 ^ uVar2) + uVar4 + 0x6ed9eba1 + *(int *)(this + 0x38);
  uVar4 = uVar4 >> 0x1d | uVar4 * 8;
  uVar3 = (uVar2 ^ uVar1 ^ uVar4) + uVar5 + 0x6ed9eba1 + *(int *)(this + 0x58);
  uVar3 = uVar3 >> 0x17 | uVar3 * 0x200;
  uVar1 = (uVar2 ^ uVar4 ^ uVar3) + uVar1 + 0x6ed9eba1 + *(int *)(this + 0x48);
  uVar1 = uVar1 >> 0x15 | uVar1 * 0x800;
  uVar2 = (uVar4 ^ uVar3 ^ uVar1) + uVar2 + 0x6ed9eba1 + *(int *)(this + 0x68);
  uVar2 = uVar2 >> 0x11 | uVar2 * 0x8000;
  uVar4 = (uVar1 ^ uVar3 ^ uVar2) + uVar4 + 0x6ed9eba1 + *(int *)(this + 0x34);
  uVar4 = uVar4 >> 0x1d | uVar4 * 8;
  uVar3 = (uVar2 ^ uVar1 ^ uVar4) + uVar3 + 0x6ed9eba1 + *(int *)(this + 0x54);
  uVar3 = uVar3 >> 0x17 | uVar3 * 0x200;
  uVar1 = (uVar2 ^ uVar4 ^ uVar3) + uVar1 + 0x6ed9eba1 + *(int *)(this + 0x44);
  uVar1 = uVar1 >> 0x15 | uVar1 * 0x800;
  uVar2 = (uVar4 ^ uVar3 ^ uVar1) + uVar2 + 0x6ed9eba1 + *(int *)(this + 100);
  uVar2 = uVar2 >> 0x11 | uVar2 * 0x8000;
  uVar4 = (uVar1 ^ uVar3 ^ uVar2) + uVar4 + 0x6ed9eba1 + *(int *)(this + 0x3c);
  uVar4 = uVar4 >> 0x1d | uVar4 * 8;
  uVar3 = (uVar2 ^ uVar1 ^ uVar4) + uVar3 + 0x6ed9eba1 + *(int *)(this + 0x5c);
  uVar3 = uVar3 >> 0x17 | uVar3 * 0x200;
  uVar1 = (uVar2 ^ uVar4 ^ uVar3) + uVar1 + 0x6ed9eba1 + *(int *)(this + 0x4c);
  uVar1 = uVar1 >> 0x15 | uVar1 * 0x800;
  uVar2 = (uVar3 ^ uVar4 ^ uVar1) + uVar2 + 0x6ed9eba1 + *(int *)(this + 0x6c);
  *(uint *)(this + 0x10) = uVar4 + *(int *)(this + 0x10);
  *(uint *)(this + 0x14) = *(int *)(this + 0x14) + (uVar2 >> 0x11 | uVar2 * 0x8000);
  *(uint *)(this + 0x18) = *(int *)(this + 0x18) + uVar1;
  *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar3;
  return;
}

```

---

## operator=

```asm
// === 087660f0 TaoCrypt::MD4::operator=  [0x087660f0-0x87661bf] ===
 87660f0:	55                   	push   %ebp
 87660f1:	89 e5                	mov    %esp,%ebp
 87660f3:	81 ec 98 00 00 00    	sub    $0x98,%esp
 87660f9:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87660fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 87660ff:	e8 f4 cc fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8766104:	81 c3 94 6a c0 00    	add    $0xc06a94,%ebx
 876610a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 876610d:	8b 75 08             	mov    0x8(%ebp),%esi
 8766110:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8766113:	8d bd 78 ff ff ff    	lea    -0x88(%ebp),%edi
 8766119:	89 44 24 04          	mov    %eax,0x4(%esp)
 876611d:	89 3c 24             	mov    %edi,(%esp)
 8766120:	e8 eb fe ff ff       	call   8766010 <_ZN8TaoCrypt3MD4C1ERKS0_>
 8766125:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8766129:	89 34 24             	mov    %esi,(%esp)
 876612c:	e8 1f fe ff ff       	call   8765f50 <_ZN8TaoCrypt3MD44SwapERS0_>
 8766131:	89 f0                	mov    %esi,%eax
 8766133:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8766136:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8766139:	8b 7d fc             	mov    -0x4(%ebp),%edi
 876613c:	89 ec                	mov    %ebp,%esp
 876613e:	5d                   	pop    %ebp
 876613f:	c3                   	ret

08766140 <_ZNK8TaoCrypt3MD412getByteOrderEv>:
 8766140:	55                   	push   %ebp
 8766141:	31 c0                	xor    %eax,%eax
 8766143:	89 e5                	mov    %esp,%ebp
 8766145:	5d                   	pop    %ebp
 8766146:	c3                   	ret
 8766147:	90                   	nop
 8766148:	90                   	nop
 8766149:	90                   	nop
 876614a:	90                   	nop
 876614b:	90                   	nop
 876614c:	90                   	nop
 876614d:	90                   	nop
 876614e:	90                   	nop
 876614f:	90                   	nop

08766150 <_ZNK8TaoCrypt3MD412getBlockSizeEv>:
 8766150:	55                   	push   %ebp
 8766151:	b8 40 00 00 00       	mov    $0x40,%eax
 8766156:	89 e5                	mov    %esp,%ebp
 8766158:	5d                   	pop    %ebp
 8766159:	c3                   	ret
 876615a:	90                   	nop
 876615b:	90                   	nop
 876615c:	90                   	nop
 876615d:	90                   	nop
 876615e:	90                   	nop
 876615f:	90                   	nop

08766160 <_ZNK8TaoCrypt3MD413getDigestSizeEv>:
 8766160:	55                   	push   %ebp
 8766161:	b8 10 00 00 00       	mov    $0x10,%eax
 8766166:	89 e5                	mov    %esp,%ebp
 8766168:	5d                   	pop    %ebp
 8766169:	c3                   	ret
 876616a:	90                   	nop
 876616b:	90                   	nop
 876616c:	90                   	nop
 876616d:	90                   	nop
 876616e:	90                   	nop
 876616f:	90                   	nop

08766170 <_ZNK8TaoCrypt3MD410getPadSizeEv>:
 8766170:	55                   	push   %ebp
 8766171:	b8 38 00 00 00       	mov    $0x38,%eax
 8766176:	89 e5                	mov    %esp,%ebp
 8766178:	5d                   	pop    %ebp
 8766179:	c3                   	ret
 876617a:	90                   	nop
 876617b:	90                   	nop
 876617c:	90                   	nop
 876617d:	90                   	nop
 876617e:	90                   	nop
 876617f:	90                   	nop

08766180 <_ZN8TaoCrypt3MD4D1Ev>:
 8766180:	e8 3f e4 fb ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8766185:	81 c1 13 6a c0 00    	add    $0xc06a13,%ecx
 876618b:	55                   	push   %ebp
 876618c:	89 e5                	mov    %esp,%ebp
 876618e:	8b 81 c4 ff ff ff    	mov    -0x3c(%ecx),%eax
 8766194:	8d 50 08             	lea    0x8(%eax),%edx
 8766197:	8b 45 08             	mov    0x8(%ebp),%eax
 876619a:	89 10                	mov    %edx,(%eax)
 876619c:	5d                   	pop    %ebp
 876619d:	c3                   	ret
 876619e:	90                   	nop
 876619f:	90                   	nop

087661a0 <_ZN8TaoCrypt3MD4D0Ev>:
 87661a0:	e8 1f e4 fb ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87661a5:	81 c1 f3 69 c0 00    	add    $0xc069f3,%ecx
 87661ab:	55                   	push   %ebp
 87661ac:	89 e5                	mov    %esp,%ebp
 87661ae:	8b 81 c4 ff ff ff    	mov    -0x3c(%ecx),%eax
 87661b4:	8d 50 08             	lea    0x8(%eax),%edx
 87661b7:	8b 45 08             	mov    0x8(%ebp),%eax
 87661ba:	89 10                	mov    %edx,(%eax)
 87661bc:	5d                   	pop    %ebp
 87661bd:	c3                   	ret
 87661be:	90                   	nop
 87661bf:	90                   	nop

```

```c
// TaoCrypt::MD4::operator= @ 0x87660f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MD4::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::MD4 const&) */

MD4 * __thiscall TaoCrypt::MD4::operator=(MD4 *this,MD4 *param_1)

{
  MD4 local_8c [124];
  
  MD4(local_8c,param_1);
  Swap(this,local_8c);
  return this;
}

```

