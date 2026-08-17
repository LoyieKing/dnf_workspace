# CSHA1

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## CSHA1

```asm
// === 08087d28 CSHA1::CSHA1  [0x08087d28-0x8087d4b] ===
 8087d28:	55                   	push   %ebp
 8087d29:	89 e5                	mov    %esp,%ebp
 8087d2b:	83 ec 18             	sub    $0x18,%esp
 8087d2e:	8b 45 08             	mov    0x8(%ebp),%eax
 8087d31:	83 e8 80             	sub    $0xffffff80,%eax
 8087d34:	89 c2                	mov    %eax,%edx
 8087d36:	8b 45 08             	mov    0x8(%ebp),%eax
 8087d39:	89 90 c0 00 00 00    	mov    %edx,0xc0(%eax)
 8087d3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8087d42:	89 04 24             	mov    %eax,(%esp)
 8087d45:	e8 16 00 00 00       	call   8087d60 <_ZN5CSHA15ResetEv>
 8087d4a:	c9                   	leave
 8087d4b:	c3                   	ret

```

```c
// CSHA1::CSHA1 @ 0x8087d28

/* CSHA1::CSHA1() */

void __thiscall CSHA1::CSHA1(CSHA1 *this)

{
  *(CSHA1 **)(this + 0xc0) = this + 0x80;
  Reset(this);
  return;
}

```

---

## Final

```asm
// === 0808a2d2 CSHA1::Final  [0x0808a2d2-0x808a3d7] ===
 808a2d2:	55                   	push   %ebp
 808a2d3:	89 e5                	mov    %esp,%ebp
 808a2d5:	56                   	push   %esi
 808a2d6:	53                   	push   %ebx
 808a2d7:	83 ec 20             	sub    $0x20,%esp
 808a2da:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 808a2e1:	eb 32                	jmp    808a315 <_ZN5CSHA15FinalEv+0x43>
 808a2e3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808a2e6:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 808a2ea:	0f 96 c2             	setbe  %dl
 808a2ed:	0f b6 ca             	movzbl %dl,%ecx
 808a2f0:	8b 55 08             	mov    0x8(%ebp),%edx
 808a2f3:	83 c1 04             	add    $0x4,%ecx
 808a2f6:	8b 5c 8a 04          	mov    0x4(%edx,%ecx,4),%ebx
 808a2fa:	8b 55 f4             	mov    -0xc(%ebp),%edx
 808a2fd:	f7 d2                	not    %edx
 808a2ff:	83 e2 03             	and    $0x3,%edx
 808a302:	c1 e2 03             	shl    $0x3,%edx
 808a305:	89 de                	mov    %ebx,%esi
 808a307:	89 d1                	mov    %edx,%ecx
 808a309:	d3 ee                	shr    %cl,%esi
 808a30b:	89 f2                	mov    %esi,%edx
 808a30d:	88 54 05 ec          	mov    %dl,-0x14(%ebp,%eax,1)
 808a311:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 808a315:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 808a319:	0f 96 c0             	setbe  %al
 808a31c:	84 c0                	test   %al,%al
 808a31e:	75 c3                	jne    808a2e3 <_ZN5CSHA15FinalEv+0x11>
 808a320:	b8 b0 1e af 08       	mov    $0x8af1eb0,%eax
 808a325:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 808a32c:	00 
 808a32d:	89 44 24 04          	mov    %eax,0x4(%esp)
 808a331:	8b 45 08             	mov    0x8(%ebp),%eax
 808a334:	89 04 24             	mov    %eax,(%esp)
 808a337:	e8 62 fe ff ff       	call   808a19e <_ZN5CSHA16UpdateEPKhj>
 808a33c:	eb 1c                	jmp    808a35a <_ZN5CSHA15FinalEv+0x88>
 808a33e:	b8 b2 1e af 08       	mov    $0x8af1eb2,%eax
 808a343:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 808a34a:	00 
 808a34b:	89 44 24 04          	mov    %eax,0x4(%esp)
 808a34f:	8b 45 08             	mov    0x8(%ebp),%eax
 808a352:	89 04 24             	mov    %eax,(%esp)
 808a355:	e8 44 fe ff ff       	call   808a19e <_ZN5CSHA16UpdateEPKhj>
 808a35a:	8b 45 08             	mov    0x8(%ebp),%eax
 808a35d:	8b 40 14             	mov    0x14(%eax),%eax
 808a360:	25 f8 01 00 00       	and    $0x1f8,%eax
 808a365:	3d c0 01 00 00       	cmp    $0x1c0,%eax
 808a36a:	0f 95 c0             	setne  %al
 808a36d:	84 c0                	test   %al,%al
 808a36f:	75 cd                	jne    808a33e <_ZN5CSHA15FinalEv+0x6c>
 808a371:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 808a378:	00 
 808a379:	8d 45 ec             	lea    -0x14(%ebp),%eax
 808a37c:	89 44 24 04          	mov    %eax,0x4(%esp)
 808a380:	8b 45 08             	mov    0x8(%ebp),%eax
 808a383:	89 04 24             	mov    %eax,(%esp)
 808a386:	e8 13 fe ff ff       	call   808a19e <_ZN5CSHA16UpdateEPKhj>
 808a38b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 808a392:	eb 31                	jmp    808a3c5 <_ZN5CSHA15FinalEv+0xf3>
 808a394:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808a397:	8b 55 f4             	mov    -0xc(%ebp),%edx
 808a39a:	89 d1                	mov    %edx,%ecx
 808a39c:	c1 e9 02             	shr    $0x2,%ecx
 808a39f:	8b 55 08             	mov    0x8(%ebp),%edx
 808a3a2:	8b 1c 8a             	mov    (%edx,%ecx,4),%ebx
 808a3a5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 808a3a8:	f7 d2                	not    %edx
 808a3aa:	83 e2 03             	and    $0x3,%edx
 808a3ad:	c1 e2 03             	shl    $0x3,%edx
 808a3b0:	89 de                	mov    %ebx,%esi
 808a3b2:	89 d1                	mov    %edx,%ecx
 808a3b4:	d3 ee                	shr    %cl,%esi
 808a3b6:	89 f2                	mov    %esi,%edx
 808a3b8:	89 d1                	mov    %edx,%ecx
 808a3ba:	8b 55 08             	mov    0x8(%ebp),%edx
 808a3bd:	88 4c 02 60          	mov    %cl,0x60(%edx,%eax,1)
 808a3c1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 808a3c5:	83 7d f4 13          	cmpl   $0x13,-0xc(%ebp)
 808a3c9:	0f 96 c0             	setbe  %al
 808a3cc:	84 c0                	test   %al,%al
 808a3ce:	75 c4                	jne    808a394 <_ZN5CSHA15FinalEv+0xc2>
 808a3d0:	83 c4 20             	add    $0x20,%esp
 808a3d3:	5b                   	pop    %ebx
 808a3d4:	5e                   	pop    %esi
 808a3d5:	5d                   	pop    %ebp
 808a3d6:	c3                   	ret
 808a3d7:	90                   	nop

```

```c
// CSHA1::Final @ 0x808a2d2

/* CSHA1::Final() */

void __thiscall CSHA1::Final(CSHA1 *this)

{
  uchar local_18 [8];
  uint local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    local_18[local_10] =
         (uchar)(*(uint *)(this + ((local_10 < 4) + 4) * 4 + 4) >> (sbyte)((~local_10 & 3) << 3));
  }
  Update(this,&DAT_08af1eb0,1);
  while ((*(uint *)(this + 0x14) & 0x1f8) != 0x1c0) {
    Update(this,"",1);
  }
  Update(this,local_18,8);
  for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
    this[local_10 + 0x60] =
         SUB41(*(uint *)(this + (local_10 & 0xfffffffc)) >> (sbyte)((~local_10 & 3) << 3),0);
  }
  return;
}

```

---

## GetHash

```asm
// === 0808a3d8 CSHA1::GetHash  [0x0808a3d8-0x808a40f] ===
 808a3d8:	55                   	push   %ebp
 808a3d9:	89 e5                	mov    %esp,%ebp
 808a3db:	83 ec 18             	sub    $0x18,%esp
 808a3de:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 808a3e2:	75 07                	jne    808a3eb <_ZNK5CSHA17GetHashEPh+0x13>
 808a3e4:	b8 00 00 00 00       	mov    $0x0,%eax
 808a3e9:	eb 22                	jmp    808a40d <_ZNK5CSHA17GetHashEPh+0x35>
 808a3eb:	8b 45 08             	mov    0x8(%ebp),%eax
 808a3ee:	83 c0 60             	add    $0x60,%eax
 808a3f1:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 808a3f8:	00 
 808a3f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 808a3fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 808a400:	89 04 24             	mov    %eax,(%esp)
 808a403:	e8 98 34 ff ff       	call   807d8a0 <memcpy@plt>
 808a408:	b8 01 00 00 00       	mov    $0x1,%eax
 808a40d:	c9                   	leave
 808a40e:	c3                   	ret
 808a40f:	90                   	nop

```

```c
// CSHA1::GetHash @ 0x808a3d8

/* CSHA1::GetHash(unsigned char*) const */

bool __thiscall CSHA1::GetHash(CSHA1 *this,uchar *param_1)

{
  if (param_1 != (uchar *)0x0) {
    memcpy(param_1,this + 0x60,0x14);
  }
  return param_1 != (uchar *)0x0;
}

```

---

## GetHexHash

```asm
// === 0808a410 CSHA1::GetHexHash  [0x0808a410-0x808a487] ===
 808a410:	55                   	push   %ebp
 808a411:	89 e5                	mov    %esp,%ebp
 808a413:	83 ec 28             	sub    $0x28,%esp
 808a416:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 808a41a:	75 07                	jne    808a423 <_ZN5CSHA110GetHexHashEPc+0x13>
 808a41c:	b8 00 00 00 00       	mov    $0x0,%eax
 808a421:	eb 61                	jmp    808a484 <_ZN5CSHA110GetHexHashEPc+0x74>
 808a423:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 808a42a:	eb 48                	jmp    808a474 <_ZN5CSHA110GetHexHashEPc+0x64>
 808a42c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808a42f:	8b 55 08             	mov    0x8(%ebp),%edx
 808a432:	0f b6 44 02 60       	movzbl 0x60(%edx,%eax,1),%eax
 808a437:	0f b6 c0             	movzbl %al,%eax
 808a43a:	89 44 24 08          	mov    %eax,0x8(%esp)
 808a43e:	c7 44 24 04 b4 1e af 	movl   $0x8af1eb4,0x4(%esp)
 808a445:	08 
 808a446:	8d 45 f1             	lea    -0xf(%ebp),%eax
 808a449:	89 04 24             	mov    %eax,(%esp)
 808a44c:	e8 ef 3f ff ff       	call   807e440 <sprintf@plt>
 808a451:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808a454:	01 c0                	add    %eax,%eax
 808a456:	03 45 0c             	add    0xc(%ebp),%eax
 808a459:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 808a460:	00 
 808a461:	8d 55 f1             	lea    -0xf(%ebp),%edx
 808a464:	89 54 24 04          	mov    %edx,0x4(%esp)
 808a468:	89 04 24             	mov    %eax,(%esp)
 808a46b:	e8 30 34 ff ff       	call   807d8a0 <memcpy@plt>
 808a470:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 808a474:	83 7d f4 13          	cmpl   $0x13,-0xc(%ebp)
 808a478:	0f 9e c0             	setle  %al
 808a47b:	84 c0                	test   %al,%al
 808a47d:	75 ad                	jne    808a42c <_ZN5CSHA110GetHexHashEPc+0x1c>
 808a47f:	b8 01 00 00 00       	mov    $0x1,%eax
 808a484:	c9                   	leave
 808a485:	c3                   	ret
 808a486:	90                   	nop
 808a487:	90                   	nop

```

```c
// CSHA1::GetHexHash @ 0x808a410

/* CSHA1::GetHexHash(char*) */

undefined4 __thiscall CSHA1::GetHexHash(CSHA1 *this,char *param_1)

{
  undefined4 uVar1;
  char local_13 [3];
  int local_10;
  
  if (param_1 == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
      sprintf(local_13,"%02X",(uint)(byte)this[local_10 + 0x60]);
      memcpy(param_1 + local_10 * 2,local_13,2);
    }
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## Reset

```asm
// === 08087d60 CSHA1::Reset  [0x08087d60-0x8087da9] ===
 8087d60:	55                   	push   %ebp
 8087d61:	89 e5                	mov    %esp,%ebp
 8087d63:	8b 45 08             	mov    0x8(%ebp),%eax
 8087d66:	c7 00 01 23 45 67    	movl   $0x67452301,(%eax)
 8087d6c:	8b 45 08             	mov    0x8(%ebp),%eax
 8087d6f:	c7 40 04 89 ab cd ef 	movl   $0xefcdab89,0x4(%eax)
 8087d76:	8b 45 08             	mov    0x8(%ebp),%eax
 8087d79:	c7 40 08 fe dc ba 98 	movl   $0x98badcfe,0x8(%eax)
 8087d80:	8b 45 08             	mov    0x8(%ebp),%eax
 8087d83:	c7 40 0c 76 54 32 10 	movl   $0x10325476,0xc(%eax)
 8087d8a:	8b 45 08             	mov    0x8(%ebp),%eax
 8087d8d:	c7 40 10 f0 e1 d2 c3 	movl   $0xc3d2e1f0,0x10(%eax)
 8087d94:	8b 45 08             	mov    0x8(%ebp),%eax
 8087d97:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 8087d9e:	8b 45 08             	mov    0x8(%ebp),%eax
 8087da1:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 8087da8:	5d                   	pop    %ebp
 8087da9:	c3                   	ret

```

```c
// CSHA1::Reset @ 0x8087d60

/* CSHA1::Reset() */

void __thiscall CSHA1::Reset(CSHA1 *this)

{
  *(undefined4 *)this = 0x67452301;
  *(undefined4 *)(this + 4) = 0xefcdab89;
  *(undefined4 *)(this + 8) = 0x98badcfe;
  *(undefined4 *)(this + 0xc) = 0x10325476;
  *(undefined4 *)(this + 0x10) = 0xc3d2e1f0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}

```

---

## Transform

```asm
// === 08087daa CSHA1::Transform  [0x08087daa-0x808a19d] ===
 8087daa:	55                   	push   %ebp
 8087dab:	89 e5                	mov    %esp,%ebp
 8087dad:	53                   	push   %ebx
 8087dae:	83 ec 34             	sub    $0x34,%esp
 8087db1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8087db4:	8b 00                	mov    (%eax),%eax
 8087db6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8087db9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8087dbc:	83 c0 04             	add    $0x4,%eax
 8087dbf:	8b 00                	mov    (%eax),%eax
 8087dc1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8087dc4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8087dc7:	83 c0 08             	add    $0x8,%eax
 8087dca:	8b 00                	mov    (%eax),%eax
 8087dcc:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8087dcf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8087dd2:	83 c0 0c             	add    $0xc,%eax
 8087dd5:	8b 00                	mov    (%eax),%eax
 8087dd7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8087dda:	8b 45 0c             	mov    0xc(%ebp),%eax
 8087ddd:	83 c0 10             	add    $0x10,%eax
 8087de0:	8b 00                	mov    (%eax),%eax
 8087de2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8087de5:	8b 45 08             	mov    0x8(%ebp),%eax
 8087de8:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8087dee:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 8087df5:	00 
 8087df6:	8b 55 10             	mov    0x10(%ebp),%edx
 8087df9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8087dfd:	89 04 24             	mov    %eax,(%esp)
 8087e00:	e8 9b 5a ff ff       	call   807d8a0 <memcpy@plt>
 8087e05:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8087e08:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8087e0b:	31 d0                	xor    %edx,%eax
 8087e0d:	23 45 e8             	and    -0x18(%ebp),%eax
 8087e10:	89 c1                	mov    %eax,%ecx
 8087e12:	33 4d f0             	xor    -0x10(%ebp),%ecx
 8087e15:	8b 45 08             	mov    0x8(%ebp),%eax
 8087e18:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8087e1e:	8b 55 08             	mov    0x8(%ebp),%edx
 8087e21:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8087e27:	8b 12                	mov    (%edx),%edx
 8087e29:	c1 ca 08             	ror    $0x8,%edx
 8087e2c:	89 d3                	mov    %edx,%ebx
 8087e2e:	81 e3 00 ff 00 ff    	and    $0xff00ff00,%ebx
 8087e34:	8b 55 08             	mov    0x8(%ebp),%edx
 8087e37:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8087e3d:	8b 12                	mov    (%edx),%edx
 8087e3f:	c1 ca 18             	ror    $0x18,%edx
 8087e42:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 8087e48:	09 da                	or     %ebx,%edx
 8087e4a:	89 10                	mov    %edx,(%eax)
 8087e4c:	8b 00                	mov    (%eax),%eax
 8087e4e:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8087e51:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8087e54:	c1 c8 1b             	ror    $0x1b,%eax
 8087e57:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8087e5a:	03 45 f4             	add    -0xc(%ebp),%eax
 8087e5d:	05 99 79 82 5a       	add    $0x5a827999,%eax
 8087e62:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8087e65:	c1 4d e8 02          	rorl   $0x2,-0x18(%ebp)
 8087e69:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8087e6c:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8087e6f:	31 d0                	xor    %edx,%eax
 8087e71:	23 45 e4             	and    -0x1c(%ebp),%eax
 8087e74:	89 c1                	mov    %eax,%ecx
 8087e76:	33 4d ec             	xor    -0x14(%ebp),%ecx
 8087e79:	8b 45 08             	mov    0x8(%ebp),%eax
 8087e7c:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8087e82:	8b 55 08             	mov    0x8(%ebp),%edx
 8087e85:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8087e8b:	8b 52 04             	mov    0x4(%edx),%edx
 8087e8e:	c1 ca 08             	ror    $0x8,%edx
 8087e91:	89 d3                	mov    %edx,%ebx
 8087e93:	81 e3 00 ff 00 ff    	and    $0xff00ff00,%ebx
 8087e99:	8b 55 08             	mov    0x8(%ebp),%edx
 8087e9c:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8087ea2:	8b 52 04             	mov    0x4(%edx),%edx
 8087ea5:	c1 ca 18             	ror    $0x18,%edx
 8087ea8:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 8087eae:	09 da                	or     %ebx,%edx
 8087eb0:	89 50 04             	mov    %edx,0x4(%eax)
 8087eb3:	8b 40 04             	mov    0x4(%eax),%eax
 8087eb6:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8087eb9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8087ebc:	c1 c8 1b             	ror    $0x1b,%eax
 8087ebf:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8087ec2:	03 45 f0             	add    -0x10(%ebp),%eax
 8087ec5:	05 99 79 82 5a       	add    $0x5a827999,%eax
 8087eca:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8087ecd:	c1 4d e4 02          	rorl   $0x2,-0x1c(%ebp)
 8087ed1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8087ed4:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8087ed7:	31 d0                	xor    %edx,%eax
 8087ed9:	23 45 f4             	and    -0xc(%ebp),%eax
 8087edc:	89 c1                	mov    %eax,%ecx
 8087ede:	33 4d e8             	xor    -0x18(%ebp),%ecx
 8087ee1:	8b 45 08             	mov    0x8(%ebp),%eax
 8087ee4:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8087eea:	8b 55 08             	mov    0x8(%ebp),%edx
 8087eed:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8087ef3:	8b 52 08             	mov    0x8(%edx),%edx
 8087ef6:	c1 ca 08             	ror    $0x8,%edx
 8087ef9:	89 d3                	mov    %edx,%ebx
 8087efb:	81 e3 00 ff 00 ff    	and    $0xff00ff00,%ebx
 8087f01:	8b 55 08             	mov    0x8(%ebp),%edx
 8087f04:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8087f0a:	8b 52 08             	mov    0x8(%edx),%edx
 8087f0d:	c1 ca 18             	ror    $0x18,%edx
 8087f10:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 8087f16:	09 da                	or     %ebx,%edx
 8087f18:	89 50 08             	mov    %edx,0x8(%eax)
 8087f1b:	8b 40 08             	mov    0x8(%eax),%eax
 8087f1e:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8087f21:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8087f24:	c1 c8 1b             	ror    $0x1b,%eax
 8087f27:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8087f2a:	03 45 ec             	add    -0x14(%ebp),%eax
 8087f2d:	05 99 79 82 5a       	add    $0x5a827999,%eax
 8087f32:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8087f35:	c1 4d f4 02          	rorl   $0x2,-0xc(%ebp)
 8087f39:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8087f3c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8087f3f:	31 d0                	xor    %edx,%eax
 8087f41:	23 45 f0             	and    -0x10(%ebp),%eax
 8087f44:	89 c1                	mov    %eax,%ecx
 8087f46:	33 4d e4             	xor    -0x1c(%ebp),%ecx
 8087f49:	8b 45 08             	mov    0x8(%ebp),%eax
 8087f4c:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8087f52:	8b 55 08             	mov    0x8(%ebp),%edx
 8087f55:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8087f5b:	8b 52 0c             	mov    0xc(%edx),%edx
 8087f5e:	c1 ca 08             	ror    $0x8,%edx
 8087f61:	89 d3                	mov    %edx,%ebx
 8087f63:	81 e3 00 ff 00 ff    	and    $0xff00ff00,%ebx
 8087f69:	8b 55 08             	mov    0x8(%ebp),%edx
 8087f6c:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8087f72:	8b 52 0c             	mov    0xc(%edx),%edx
 8087f75:	c1 ca 18             	ror    $0x18,%edx
 8087f78:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 8087f7e:	09 da                	or     %ebx,%edx
 8087f80:	89 50 0c             	mov    %edx,0xc(%eax)
 8087f83:	8b 40 0c             	mov    0xc(%eax),%eax
 8087f86:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8087f89:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8087f8c:	c1 c8 1b             	ror    $0x1b,%eax
 8087f8f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8087f92:	03 45 e8             	add    -0x18(%ebp),%eax
 8087f95:	05 99 79 82 5a       	add    $0x5a827999,%eax
 8087f9a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8087f9d:	c1 4d f0 02          	rorl   $0x2,-0x10(%ebp)
 8087fa1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8087fa4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8087fa7:	31 d0                	xor    %edx,%eax
 8087fa9:	23 45 ec             	and    -0x14(%ebp),%eax
 8087fac:	89 c1                	mov    %eax,%ecx
 8087fae:	33 4d f4             	xor    -0xc(%ebp),%ecx
 8087fb1:	8b 45 08             	mov    0x8(%ebp),%eax
 8087fb4:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8087fba:	8b 55 08             	mov    0x8(%ebp),%edx
 8087fbd:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8087fc3:	8b 52 10             	mov    0x10(%edx),%edx
 8087fc6:	c1 ca 08             	ror    $0x8,%edx
 8087fc9:	89 d3                	mov    %edx,%ebx
 8087fcb:	81 e3 00 ff 00 ff    	and    $0xff00ff00,%ebx
 8087fd1:	8b 55 08             	mov    0x8(%ebp),%edx
 8087fd4:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8087fda:	8b 52 10             	mov    0x10(%edx),%edx
 8087fdd:	c1 ca 18             	ror    $0x18,%edx
 8087fe0:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 8087fe6:	09 da                	or     %ebx,%edx
 8087fe8:	89 50 10             	mov    %edx,0x10(%eax)
 8087feb:	8b 40 10             	mov    0x10(%eax),%eax
 8087fee:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8087ff1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8087ff4:	c1 c8 1b             	ror    $0x1b,%eax
 8087ff7:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8087ffa:	03 45 e4             	add    -0x1c(%ebp),%eax
 8087ffd:	05 99 79 82 5a       	add    $0x5a827999,%eax
 8088002:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8088005:	c1 4d ec 02          	rorl   $0x2,-0x14(%ebp)
 8088009:	8b 45 f0             	mov    -0x10(%ebp),%eax
 808800c:	8b 55 ec             	mov    -0x14(%ebp),%edx
 808800f:	31 d0                	xor    %edx,%eax
 8088011:	23 45 e8             	and    -0x18(%ebp),%eax
 8088014:	89 c1                	mov    %eax,%ecx
 8088016:	33 4d f0             	xor    -0x10(%ebp),%ecx
 8088019:	8b 45 08             	mov    0x8(%ebp),%eax
 808801c:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8088022:	8b 55 08             	mov    0x8(%ebp),%edx
 8088025:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808802b:	8b 52 14             	mov    0x14(%edx),%edx
 808802e:	c1 ca 08             	ror    $0x8,%edx
 8088031:	89 d3                	mov    %edx,%ebx
 8088033:	81 e3 00 ff 00 ff    	and    $0xff00ff00,%ebx
 8088039:	8b 55 08             	mov    0x8(%ebp),%edx
 808803c:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088042:	8b 52 14             	mov    0x14(%edx),%edx
 8088045:	c1 ca 18             	ror    $0x18,%edx
 8088048:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 808804e:	09 da                	or     %ebx,%edx
 8088050:	89 50 14             	mov    %edx,0x14(%eax)
 8088053:	8b 40 14             	mov    0x14(%eax),%eax
 8088056:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088059:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 808805c:	c1 c8 1b             	ror    $0x1b,%eax
 808805f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8088062:	03 45 f4             	add    -0xc(%ebp),%eax
 8088065:	05 99 79 82 5a       	add    $0x5a827999,%eax
 808806a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 808806d:	c1 4d e8 02          	rorl   $0x2,-0x18(%ebp)
 8088071:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8088074:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8088077:	31 d0                	xor    %edx,%eax
 8088079:	23 45 e4             	and    -0x1c(%ebp),%eax
 808807c:	89 c1                	mov    %eax,%ecx
 808807e:	33 4d ec             	xor    -0x14(%ebp),%ecx
 8088081:	8b 45 08             	mov    0x8(%ebp),%eax
 8088084:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 808808a:	8b 55 08             	mov    0x8(%ebp),%edx
 808808d:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088093:	8b 52 18             	mov    0x18(%edx),%edx
 8088096:	c1 ca 08             	ror    $0x8,%edx
 8088099:	89 d3                	mov    %edx,%ebx
 808809b:	81 e3 00 ff 00 ff    	and    $0xff00ff00,%ebx
 80880a1:	8b 55 08             	mov    0x8(%ebp),%edx
 80880a4:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80880aa:	8b 52 18             	mov    0x18(%edx),%edx
 80880ad:	c1 ca 18             	ror    $0x18,%edx
 80880b0:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 80880b6:	09 da                	or     %ebx,%edx
 80880b8:	89 50 18             	mov    %edx,0x18(%eax)
 80880bb:	8b 40 18             	mov    0x18(%eax),%eax
 80880be:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 80880c1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80880c4:	c1 c8 1b             	ror    $0x1b,%eax
 80880c7:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80880ca:	03 45 f0             	add    -0x10(%ebp),%eax
 80880cd:	05 99 79 82 5a       	add    $0x5a827999,%eax
 80880d2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80880d5:	c1 4d e4 02          	rorl   $0x2,-0x1c(%ebp)
 80880d9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80880dc:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80880df:	31 d0                	xor    %edx,%eax
 80880e1:	23 45 f4             	and    -0xc(%ebp),%eax
 80880e4:	89 c1                	mov    %eax,%ecx
 80880e6:	33 4d e8             	xor    -0x18(%ebp),%ecx
 80880e9:	8b 45 08             	mov    0x8(%ebp),%eax
 80880ec:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 80880f2:	8b 55 08             	mov    0x8(%ebp),%edx
 80880f5:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80880fb:	8b 52 1c             	mov    0x1c(%edx),%edx
 80880fe:	c1 ca 08             	ror    $0x8,%edx
 8088101:	89 d3                	mov    %edx,%ebx
 8088103:	81 e3 00 ff 00 ff    	and    $0xff00ff00,%ebx
 8088109:	8b 55 08             	mov    0x8(%ebp),%edx
 808810c:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088112:	8b 52 1c             	mov    0x1c(%edx),%edx
 8088115:	c1 ca 18             	ror    $0x18,%edx
 8088118:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 808811e:	09 da                	or     %ebx,%edx
 8088120:	89 50 1c             	mov    %edx,0x1c(%eax)
 8088123:	8b 40 1c             	mov    0x1c(%eax),%eax
 8088126:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088129:	8b 45 f0             	mov    -0x10(%ebp),%eax
 808812c:	c1 c8 1b             	ror    $0x1b,%eax
 808812f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8088132:	03 45 ec             	add    -0x14(%ebp),%eax
 8088135:	05 99 79 82 5a       	add    $0x5a827999,%eax
 808813a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 808813d:	c1 4d f4 02          	rorl   $0x2,-0xc(%ebp)
 8088141:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8088144:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8088147:	31 d0                	xor    %edx,%eax
 8088149:	23 45 f0             	and    -0x10(%ebp),%eax
 808814c:	89 c1                	mov    %eax,%ecx
 808814e:	33 4d e4             	xor    -0x1c(%ebp),%ecx
 8088151:	8b 45 08             	mov    0x8(%ebp),%eax
 8088154:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 808815a:	8b 55 08             	mov    0x8(%ebp),%edx
 808815d:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088163:	8b 52 20             	mov    0x20(%edx),%edx
 8088166:	c1 ca 08             	ror    $0x8,%edx
 8088169:	89 d3                	mov    %edx,%ebx
 808816b:	81 e3 00 ff 00 ff    	and    $0xff00ff00,%ebx
 8088171:	8b 55 08             	mov    0x8(%ebp),%edx
 8088174:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808817a:	8b 52 20             	mov    0x20(%edx),%edx
 808817d:	c1 ca 18             	ror    $0x18,%edx
 8088180:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 8088186:	09 da                	or     %ebx,%edx
 8088188:	89 50 20             	mov    %edx,0x20(%eax)
 808818b:	8b 40 20             	mov    0x20(%eax),%eax
 808818e:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088191:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8088194:	c1 c8 1b             	ror    $0x1b,%eax
 8088197:	8d 04 02             	lea    (%edx,%eax,1),%eax
 808819a:	03 45 e8             	add    -0x18(%ebp),%eax
 808819d:	05 99 79 82 5a       	add    $0x5a827999,%eax
 80881a2:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80881a5:	c1 4d f0 02          	rorl   $0x2,-0x10(%ebp)
 80881a9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80881ac:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80881af:	31 d0                	xor    %edx,%eax
 80881b1:	23 45 ec             	and    -0x14(%ebp),%eax
 80881b4:	89 c1                	mov    %eax,%ecx
 80881b6:	33 4d f4             	xor    -0xc(%ebp),%ecx
 80881b9:	8b 45 08             	mov    0x8(%ebp),%eax
 80881bc:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 80881c2:	8b 55 08             	mov    0x8(%ebp),%edx
 80881c5:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80881cb:	8b 52 24             	mov    0x24(%edx),%edx
 80881ce:	c1 ca 08             	ror    $0x8,%edx
 80881d1:	89 d3                	mov    %edx,%ebx
 80881d3:	81 e3 00 ff 00 ff    	and    $0xff00ff00,%ebx
 80881d9:	8b 55 08             	mov    0x8(%ebp),%edx
 80881dc:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80881e2:	8b 52 24             	mov    0x24(%edx),%edx
 80881e5:	c1 ca 18             	ror    $0x18,%edx
 80881e8:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 80881ee:	09 da                	or     %ebx,%edx
 80881f0:	89 50 24             	mov    %edx,0x24(%eax)
 80881f3:	8b 40 24             	mov    0x24(%eax),%eax
 80881f6:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 80881f9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80881fc:	c1 c8 1b             	ror    $0x1b,%eax
 80881ff:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8088202:	03 45 e4             	add    -0x1c(%ebp),%eax
 8088205:	05 99 79 82 5a       	add    $0x5a827999,%eax
 808820a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 808820d:	c1 4d ec 02          	rorl   $0x2,-0x14(%ebp)
 8088211:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8088214:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8088217:	31 d0                	xor    %edx,%eax
 8088219:	23 45 e8             	and    -0x18(%ebp),%eax
 808821c:	89 c1                	mov    %eax,%ecx
 808821e:	33 4d f0             	xor    -0x10(%ebp),%ecx
 8088221:	8b 45 08             	mov    0x8(%ebp),%eax
 8088224:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 808822a:	8b 55 08             	mov    0x8(%ebp),%edx
 808822d:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088233:	8b 52 28             	mov    0x28(%edx),%edx
 8088236:	c1 ca 08             	ror    $0x8,%edx
 8088239:	89 d3                	mov    %edx,%ebx
 808823b:	81 e3 00 ff 00 ff    	and    $0xff00ff00,%ebx
 8088241:	8b 55 08             	mov    0x8(%ebp),%edx
 8088244:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808824a:	8b 52 28             	mov    0x28(%edx),%edx
 808824d:	c1 ca 18             	ror    $0x18,%edx
 8088250:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 8088256:	09 da                	or     %ebx,%edx
 8088258:	89 50 28             	mov    %edx,0x28(%eax)
 808825b:	8b 40 28             	mov    0x28(%eax),%eax
 808825e:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088261:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8088264:	c1 c8 1b             	ror    $0x1b,%eax
 8088267:	8d 04 02             	lea    (%edx,%eax,1),%eax
 808826a:	03 45 f4             	add    -0xc(%ebp),%eax
 808826d:	05 99 79 82 5a       	add    $0x5a827999,%eax
 8088272:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8088275:	c1 4d e8 02          	rorl   $0x2,-0x18(%ebp)
 8088279:	8b 45 ec             	mov    -0x14(%ebp),%eax
 808827c:	8b 55 e8             	mov    -0x18(%ebp),%edx
 808827f:	31 d0                	xor    %edx,%eax
 8088281:	23 45 e4             	and    -0x1c(%ebp),%eax
 8088284:	89 c1                	mov    %eax,%ecx
 8088286:	33 4d ec             	xor    -0x14(%ebp),%ecx
 8088289:	8b 45 08             	mov    0x8(%ebp),%eax
 808828c:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8088292:	8b 55 08             	mov    0x8(%ebp),%edx
 8088295:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808829b:	8b 52 2c             	mov    0x2c(%edx),%edx
 808829e:	c1 ca 08             	ror    $0x8,%edx
 80882a1:	89 d3                	mov    %edx,%ebx
 80882a3:	81 e3 00 ff 00 ff    	and    $0xff00ff00,%ebx
 80882a9:	8b 55 08             	mov    0x8(%ebp),%edx
 80882ac:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80882b2:	8b 52 2c             	mov    0x2c(%edx),%edx
 80882b5:	c1 ca 18             	ror    $0x18,%edx
 80882b8:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 80882be:	09 da                	or     %ebx,%edx
 80882c0:	89 50 2c             	mov    %edx,0x2c(%eax)
 80882c3:	8b 40 2c             	mov    0x2c(%eax),%eax
 80882c6:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 80882c9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80882cc:	c1 c8 1b             	ror    $0x1b,%eax
 80882cf:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80882d2:	03 45 f0             	add    -0x10(%ebp),%eax
 80882d5:	05 99 79 82 5a       	add    $0x5a827999,%eax
 80882da:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80882dd:	c1 4d e4 02          	rorl   $0x2,-0x1c(%ebp)
 80882e1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80882e4:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80882e7:	31 d0                	xor    %edx,%eax
 80882e9:	23 45 f4             	and    -0xc(%ebp),%eax
 80882ec:	89 c1                	mov    %eax,%ecx
 80882ee:	33 4d e8             	xor    -0x18(%ebp),%ecx
 80882f1:	8b 45 08             	mov    0x8(%ebp),%eax
 80882f4:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 80882fa:	8b 55 08             	mov    0x8(%ebp),%edx
 80882fd:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088303:	8b 52 30             	mov    0x30(%edx),%edx
 8088306:	c1 ca 08             	ror    $0x8,%edx
 8088309:	89 d3                	mov    %edx,%ebx
 808830b:	81 e3 00 ff 00 ff    	and    $0xff00ff00,%ebx
 8088311:	8b 55 08             	mov    0x8(%ebp),%edx
 8088314:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808831a:	8b 52 30             	mov    0x30(%edx),%edx
 808831d:	c1 ca 18             	ror    $0x18,%edx
 8088320:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 8088326:	09 da                	or     %ebx,%edx
 8088328:	89 50 30             	mov    %edx,0x30(%eax)
 808832b:	8b 40 30             	mov    0x30(%eax),%eax
 808832e:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088331:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8088334:	c1 c8 1b             	ror    $0x1b,%eax
 8088337:	8d 04 02             	lea    (%edx,%eax,1),%eax
 808833a:	03 45 ec             	add    -0x14(%ebp),%eax
 808833d:	05 99 79 82 5a       	add    $0x5a827999,%eax
 8088342:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8088345:	c1 4d f4 02          	rorl   $0x2,-0xc(%ebp)
 8088349:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 808834c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 808834f:	31 d0                	xor    %edx,%eax
 8088351:	23 45 f0             	and    -0x10(%ebp),%eax
 8088354:	89 c1                	mov    %eax,%ecx
 8088356:	33 4d e4             	xor    -0x1c(%ebp),%ecx
 8088359:	8b 45 08             	mov    0x8(%ebp),%eax
 808835c:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8088362:	8b 55 08             	mov    0x8(%ebp),%edx
 8088365:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808836b:	8b 52 34             	mov    0x34(%edx),%edx
 808836e:	c1 ca 08             	ror    $0x8,%edx
 8088371:	89 d3                	mov    %edx,%ebx
 8088373:	81 e3 00 ff 00 ff    	and    $0xff00ff00,%ebx
 8088379:	8b 55 08             	mov    0x8(%ebp),%edx
 808837c:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088382:	8b 52 34             	mov    0x34(%edx),%edx
 8088385:	c1 ca 18             	ror    $0x18,%edx
 8088388:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 808838e:	09 da                	or     %ebx,%edx
 8088390:	89 50 34             	mov    %edx,0x34(%eax)
 8088393:	8b 40 34             	mov    0x34(%eax),%eax
 8088396:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088399:	8b 45 ec             	mov    -0x14(%ebp),%eax
 808839c:	c1 c8 1b             	ror    $0x1b,%eax
 808839f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80883a2:	03 45 e8             	add    -0x18(%ebp),%eax
 80883a5:	05 99 79 82 5a       	add    $0x5a827999,%eax
 80883aa:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80883ad:	c1 4d f0 02          	rorl   $0x2,-0x10(%ebp)
 80883b1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80883b4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80883b7:	31 d0                	xor    %edx,%eax
 80883b9:	23 45 ec             	and    -0x14(%ebp),%eax
 80883bc:	89 c1                	mov    %eax,%ecx
 80883be:	33 4d f4             	xor    -0xc(%ebp),%ecx
 80883c1:	8b 45 08             	mov    0x8(%ebp),%eax
 80883c4:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 80883ca:	8b 55 08             	mov    0x8(%ebp),%edx
 80883cd:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80883d3:	8b 52 38             	mov    0x38(%edx),%edx
 80883d6:	c1 ca 08             	ror    $0x8,%edx
 80883d9:	89 d3                	mov    %edx,%ebx
 80883db:	81 e3 00 ff 00 ff    	and    $0xff00ff00,%ebx
 80883e1:	8b 55 08             	mov    0x8(%ebp),%edx
 80883e4:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80883ea:	8b 52 38             	mov    0x38(%edx),%edx
 80883ed:	c1 ca 18             	ror    $0x18,%edx
 80883f0:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 80883f6:	09 da                	or     %ebx,%edx
 80883f8:	89 50 38             	mov    %edx,0x38(%eax)
 80883fb:	8b 40 38             	mov    0x38(%eax),%eax
 80883fe:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088401:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8088404:	c1 c8 1b             	ror    $0x1b,%eax
 8088407:	8d 04 02             	lea    (%edx,%eax,1),%eax
 808840a:	03 45 e4             	add    -0x1c(%ebp),%eax
 808840d:	05 99 79 82 5a       	add    $0x5a827999,%eax
 8088412:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8088415:	c1 4d ec 02          	rorl   $0x2,-0x14(%ebp)
 8088419:	8b 45 f0             	mov    -0x10(%ebp),%eax
 808841c:	8b 55 ec             	mov    -0x14(%ebp),%edx
 808841f:	31 d0                	xor    %edx,%eax
 8088421:	23 45 e8             	and    -0x18(%ebp),%eax
 8088424:	89 c1                	mov    %eax,%ecx
 8088426:	33 4d f0             	xor    -0x10(%ebp),%ecx
 8088429:	8b 45 08             	mov    0x8(%ebp),%eax
 808842c:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8088432:	8b 55 08             	mov    0x8(%ebp),%edx
 8088435:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808843b:	8b 52 3c             	mov    0x3c(%edx),%edx
 808843e:	c1 ca 08             	ror    $0x8,%edx
 8088441:	89 d3                	mov    %edx,%ebx
 8088443:	81 e3 00 ff 00 ff    	and    $0xff00ff00,%ebx
 8088449:	8b 55 08             	mov    0x8(%ebp),%edx
 808844c:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088452:	8b 52 3c             	mov    0x3c(%edx),%edx
 8088455:	c1 ca 18             	ror    $0x18,%edx
 8088458:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 808845e:	09 da                	or     %ebx,%edx
 8088460:	89 50 3c             	mov    %edx,0x3c(%eax)
 8088463:	8b 40 3c             	mov    0x3c(%eax),%eax
 8088466:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088469:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 808846c:	c1 c8 1b             	ror    $0x1b,%eax
 808846f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8088472:	03 45 f4             	add    -0xc(%ebp),%eax
 8088475:	05 99 79 82 5a       	add    $0x5a827999,%eax
 808847a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 808847d:	c1 4d e8 02          	rorl   $0x2,-0x18(%ebp)
 8088481:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8088484:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8088487:	31 d0                	xor    %edx,%eax
 8088489:	23 45 e4             	and    -0x1c(%ebp),%eax
 808848c:	89 c1                	mov    %eax,%ecx
 808848e:	33 4d ec             	xor    -0x14(%ebp),%ecx
 8088491:	8b 45 08             	mov    0x8(%ebp),%eax
 8088494:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 808849a:	8b 55 08             	mov    0x8(%ebp),%edx
 808849d:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80884a3:	8b 5a 34             	mov    0x34(%edx),%ebx
 80884a6:	8b 55 08             	mov    0x8(%ebp),%edx
 80884a9:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80884af:	8b 52 20             	mov    0x20(%edx),%edx
 80884b2:	31 d3                	xor    %edx,%ebx
 80884b4:	8b 55 08             	mov    0x8(%ebp),%edx
 80884b7:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80884bd:	8b 52 08             	mov    0x8(%edx),%edx
 80884c0:	31 d3                	xor    %edx,%ebx
 80884c2:	8b 55 08             	mov    0x8(%ebp),%edx
 80884c5:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80884cb:	8b 12                	mov    (%edx),%edx
 80884cd:	31 da                	xor    %ebx,%edx
 80884cf:	c1 ca 1f             	ror    $0x1f,%edx
 80884d2:	89 10                	mov    %edx,(%eax)
 80884d4:	8b 00                	mov    (%eax),%eax
 80884d6:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 80884d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80884dc:	c1 c8 1b             	ror    $0x1b,%eax
 80884df:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80884e2:	03 45 f0             	add    -0x10(%ebp),%eax
 80884e5:	05 99 79 82 5a       	add    $0x5a827999,%eax
 80884ea:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80884ed:	c1 4d e4 02          	rorl   $0x2,-0x1c(%ebp)
 80884f1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80884f4:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80884f7:	31 d0                	xor    %edx,%eax
 80884f9:	23 45 f4             	and    -0xc(%ebp),%eax
 80884fc:	89 c1                	mov    %eax,%ecx
 80884fe:	33 4d e8             	xor    -0x18(%ebp),%ecx
 8088501:	8b 45 08             	mov    0x8(%ebp),%eax
 8088504:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 808850a:	8b 55 08             	mov    0x8(%ebp),%edx
 808850d:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088513:	8b 5a 38             	mov    0x38(%edx),%ebx
 8088516:	8b 55 08             	mov    0x8(%ebp),%edx
 8088519:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808851f:	8b 52 24             	mov    0x24(%edx),%edx
 8088522:	31 d3                	xor    %edx,%ebx
 8088524:	8b 55 08             	mov    0x8(%ebp),%edx
 8088527:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808852d:	8b 52 0c             	mov    0xc(%edx),%edx
 8088530:	31 d3                	xor    %edx,%ebx
 8088532:	8b 55 08             	mov    0x8(%ebp),%edx
 8088535:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808853b:	8b 52 04             	mov    0x4(%edx),%edx
 808853e:	31 da                	xor    %ebx,%edx
 8088540:	c1 ca 1f             	ror    $0x1f,%edx
 8088543:	89 50 04             	mov    %edx,0x4(%eax)
 8088546:	8b 40 04             	mov    0x4(%eax),%eax
 8088549:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 808854c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 808854f:	c1 c8 1b             	ror    $0x1b,%eax
 8088552:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8088555:	03 45 ec             	add    -0x14(%ebp),%eax
 8088558:	05 99 79 82 5a       	add    $0x5a827999,%eax
 808855d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8088560:	c1 4d f4 02          	rorl   $0x2,-0xc(%ebp)
 8088564:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8088567:	8b 55 f4             	mov    -0xc(%ebp),%edx
 808856a:	31 d0                	xor    %edx,%eax
 808856c:	23 45 f0             	and    -0x10(%ebp),%eax
 808856f:	89 c1                	mov    %eax,%ecx
 8088571:	33 4d e4             	xor    -0x1c(%ebp),%ecx
 8088574:	8b 45 08             	mov    0x8(%ebp),%eax
 8088577:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 808857d:	8b 55 08             	mov    0x8(%ebp),%edx
 8088580:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088586:	8b 5a 3c             	mov    0x3c(%edx),%ebx
 8088589:	8b 55 08             	mov    0x8(%ebp),%edx
 808858c:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088592:	8b 52 28             	mov    0x28(%edx),%edx
 8088595:	31 d3                	xor    %edx,%ebx
 8088597:	8b 55 08             	mov    0x8(%ebp),%edx
 808859a:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80885a0:	8b 52 10             	mov    0x10(%edx),%edx
 80885a3:	31 d3                	xor    %edx,%ebx
 80885a5:	8b 55 08             	mov    0x8(%ebp),%edx
 80885a8:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80885ae:	8b 52 08             	mov    0x8(%edx),%edx
 80885b1:	31 da                	xor    %ebx,%edx
 80885b3:	c1 ca 1f             	ror    $0x1f,%edx
 80885b6:	89 50 08             	mov    %edx,0x8(%eax)
 80885b9:	8b 40 08             	mov    0x8(%eax),%eax
 80885bc:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 80885bf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80885c2:	c1 c8 1b             	ror    $0x1b,%eax
 80885c5:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80885c8:	03 45 e8             	add    -0x18(%ebp),%eax
 80885cb:	05 99 79 82 5a       	add    $0x5a827999,%eax
 80885d0:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80885d3:	c1 4d f0 02          	rorl   $0x2,-0x10(%ebp)
 80885d7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80885da:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80885dd:	31 d0                	xor    %edx,%eax
 80885df:	23 45 ec             	and    -0x14(%ebp),%eax
 80885e2:	89 c1                	mov    %eax,%ecx
 80885e4:	33 4d f4             	xor    -0xc(%ebp),%ecx
 80885e7:	8b 45 08             	mov    0x8(%ebp),%eax
 80885ea:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 80885f0:	8b 55 08             	mov    0x8(%ebp),%edx
 80885f3:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80885f9:	8b 1a                	mov    (%edx),%ebx
 80885fb:	8b 55 08             	mov    0x8(%ebp),%edx
 80885fe:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088604:	8b 52 2c             	mov    0x2c(%edx),%edx
 8088607:	31 d3                	xor    %edx,%ebx
 8088609:	8b 55 08             	mov    0x8(%ebp),%edx
 808860c:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088612:	8b 52 14             	mov    0x14(%edx),%edx
 8088615:	31 d3                	xor    %edx,%ebx
 8088617:	8b 55 08             	mov    0x8(%ebp),%edx
 808861a:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088620:	8b 52 0c             	mov    0xc(%edx),%edx
 8088623:	31 da                	xor    %ebx,%edx
 8088625:	c1 ca 1f             	ror    $0x1f,%edx
 8088628:	89 50 0c             	mov    %edx,0xc(%eax)
 808862b:	8b 40 0c             	mov    0xc(%eax),%eax
 808862e:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088631:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8088634:	c1 c8 1b             	ror    $0x1b,%eax
 8088637:	8d 04 02             	lea    (%edx,%eax,1),%eax
 808863a:	03 45 e4             	add    -0x1c(%ebp),%eax
 808863d:	05 99 79 82 5a       	add    $0x5a827999,%eax
 8088642:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8088645:	c1 4d ec 02          	rorl   $0x2,-0x14(%ebp)
 8088649:	8b 45 ec             	mov    -0x14(%ebp),%eax
 808864c:	8b 55 e8             	mov    -0x18(%ebp),%edx
 808864f:	31 d0                	xor    %edx,%eax
 8088651:	89 c1                	mov    %eax,%ecx
 8088653:	33 4d f0             	xor    -0x10(%ebp),%ecx
 8088656:	8b 45 08             	mov    0x8(%ebp),%eax
 8088659:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 808865f:	8b 55 08             	mov    0x8(%ebp),%edx
 8088662:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088668:	8b 5a 04             	mov    0x4(%edx),%ebx
 808866b:	8b 55 08             	mov    0x8(%ebp),%edx
 808866e:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088674:	8b 52 30             	mov    0x30(%edx),%edx
 8088677:	31 d3                	xor    %edx,%ebx
 8088679:	8b 55 08             	mov    0x8(%ebp),%edx
 808867c:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088682:	8b 52 18             	mov    0x18(%edx),%edx
 8088685:	31 d3                	xor    %edx,%ebx
 8088687:	8b 55 08             	mov    0x8(%ebp),%edx
 808868a:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088690:	8b 52 10             	mov    0x10(%edx),%edx
 8088693:	31 da                	xor    %ebx,%edx
 8088695:	c1 ca 1f             	ror    $0x1f,%edx
 8088698:	89 50 10             	mov    %edx,0x10(%eax)
 808869b:	8b 40 10             	mov    0x10(%eax),%eax
 808869e:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 80886a1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80886a4:	c1 c8 1b             	ror    $0x1b,%eax
 80886a7:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80886aa:	03 45 f4             	add    -0xc(%ebp),%eax
 80886ad:	05 a1 eb d9 6e       	add    $0x6ed9eba1,%eax
 80886b2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80886b5:	c1 4d e8 02          	rorl   $0x2,-0x18(%ebp)
 80886b9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80886bc:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80886bf:	31 d0                	xor    %edx,%eax
 80886c1:	89 c1                	mov    %eax,%ecx
 80886c3:	33 4d ec             	xor    -0x14(%ebp),%ecx
 80886c6:	8b 45 08             	mov    0x8(%ebp),%eax
 80886c9:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 80886cf:	8b 55 08             	mov    0x8(%ebp),%edx
 80886d2:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80886d8:	8b 5a 08             	mov    0x8(%edx),%ebx
 80886db:	8b 55 08             	mov    0x8(%ebp),%edx
 80886de:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80886e4:	8b 52 34             	mov    0x34(%edx),%edx
 80886e7:	31 d3                	xor    %edx,%ebx
 80886e9:	8b 55 08             	mov    0x8(%ebp),%edx
 80886ec:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80886f2:	8b 52 1c             	mov    0x1c(%edx),%edx
 80886f5:	31 d3                	xor    %edx,%ebx
 80886f7:	8b 55 08             	mov    0x8(%ebp),%edx
 80886fa:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088700:	8b 52 14             	mov    0x14(%edx),%edx
 8088703:	31 da                	xor    %ebx,%edx
 8088705:	c1 ca 1f             	ror    $0x1f,%edx
 8088708:	89 50 14             	mov    %edx,0x14(%eax)
 808870b:	8b 40 14             	mov    0x14(%eax),%eax
 808870e:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088711:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8088714:	c1 c8 1b             	ror    $0x1b,%eax
 8088717:	8d 04 02             	lea    (%edx,%eax,1),%eax
 808871a:	03 45 f0             	add    -0x10(%ebp),%eax
 808871d:	05 a1 eb d9 6e       	add    $0x6ed9eba1,%eax
 8088722:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8088725:	c1 4d e4 02          	rorl   $0x2,-0x1c(%ebp)
 8088729:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 808872c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 808872f:	31 d0                	xor    %edx,%eax
 8088731:	89 c1                	mov    %eax,%ecx
 8088733:	33 4d e8             	xor    -0x18(%ebp),%ecx
 8088736:	8b 45 08             	mov    0x8(%ebp),%eax
 8088739:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 808873f:	8b 55 08             	mov    0x8(%ebp),%edx
 8088742:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088748:	8b 5a 0c             	mov    0xc(%edx),%ebx
 808874b:	8b 55 08             	mov    0x8(%ebp),%edx
 808874e:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088754:	8b 52 38             	mov    0x38(%edx),%edx
 8088757:	31 d3                	xor    %edx,%ebx
 8088759:	8b 55 08             	mov    0x8(%ebp),%edx
 808875c:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088762:	8b 52 20             	mov    0x20(%edx),%edx
 8088765:	31 d3                	xor    %edx,%ebx
 8088767:	8b 55 08             	mov    0x8(%ebp),%edx
 808876a:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088770:	8b 52 18             	mov    0x18(%edx),%edx
 8088773:	31 da                	xor    %ebx,%edx
 8088775:	c1 ca 1f             	ror    $0x1f,%edx
 8088778:	89 50 18             	mov    %edx,0x18(%eax)
 808877b:	8b 40 18             	mov    0x18(%eax),%eax
 808877e:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088781:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8088784:	c1 c8 1b             	ror    $0x1b,%eax
 8088787:	8d 04 02             	lea    (%edx,%eax,1),%eax
 808878a:	03 45 ec             	add    -0x14(%ebp),%eax
 808878d:	05 a1 eb d9 6e       	add    $0x6ed9eba1,%eax
 8088792:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8088795:	c1 4d f4 02          	rorl   $0x2,-0xc(%ebp)
 8088799:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808879c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 808879f:	31 d0                	xor    %edx,%eax
 80887a1:	89 c1                	mov    %eax,%ecx
 80887a3:	33 4d e4             	xor    -0x1c(%ebp),%ecx
 80887a6:	8b 45 08             	mov    0x8(%ebp),%eax
 80887a9:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 80887af:	8b 55 08             	mov    0x8(%ebp),%edx
 80887b2:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80887b8:	8b 5a 10             	mov    0x10(%edx),%ebx
 80887bb:	8b 55 08             	mov    0x8(%ebp),%edx
 80887be:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80887c4:	8b 52 3c             	mov    0x3c(%edx),%edx
 80887c7:	31 d3                	xor    %edx,%ebx
 80887c9:	8b 55 08             	mov    0x8(%ebp),%edx
 80887cc:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80887d2:	8b 52 24             	mov    0x24(%edx),%edx
 80887d5:	31 d3                	xor    %edx,%ebx
 80887d7:	8b 55 08             	mov    0x8(%ebp),%edx
 80887da:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80887e0:	8b 52 1c             	mov    0x1c(%edx),%edx
 80887e3:	31 da                	xor    %ebx,%edx
 80887e5:	c1 ca 1f             	ror    $0x1f,%edx
 80887e8:	89 50 1c             	mov    %edx,0x1c(%eax)
 80887eb:	8b 40 1c             	mov    0x1c(%eax),%eax
 80887ee:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 80887f1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80887f4:	c1 c8 1b             	ror    $0x1b,%eax
 80887f7:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80887fa:	03 45 e8             	add    -0x18(%ebp),%eax
 80887fd:	05 a1 eb d9 6e       	add    $0x6ed9eba1,%eax
 8088802:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8088805:	c1 4d f0 02          	rorl   $0x2,-0x10(%ebp)
 8088809:	8b 45 f0             	mov    -0x10(%ebp),%eax
 808880c:	8b 55 ec             	mov    -0x14(%ebp),%edx
 808880f:	31 d0                	xor    %edx,%eax
 8088811:	89 c1                	mov    %eax,%ecx
 8088813:	33 4d f4             	xor    -0xc(%ebp),%ecx
 8088816:	8b 45 08             	mov    0x8(%ebp),%eax
 8088819:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 808881f:	8b 55 08             	mov    0x8(%ebp),%edx
 8088822:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088828:	8b 5a 14             	mov    0x14(%edx),%ebx
 808882b:	8b 55 08             	mov    0x8(%ebp),%edx
 808882e:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088834:	8b 12                	mov    (%edx),%edx
 8088836:	31 d3                	xor    %edx,%ebx
 8088838:	8b 55 08             	mov    0x8(%ebp),%edx
 808883b:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088841:	8b 52 28             	mov    0x28(%edx),%edx
 8088844:	31 d3                	xor    %edx,%ebx
 8088846:	8b 55 08             	mov    0x8(%ebp),%edx
 8088849:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808884f:	8b 52 20             	mov    0x20(%edx),%edx
 8088852:	31 da                	xor    %ebx,%edx
 8088854:	c1 ca 1f             	ror    $0x1f,%edx
 8088857:	89 50 20             	mov    %edx,0x20(%eax)
 808885a:	8b 40 20             	mov    0x20(%eax),%eax
 808885d:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088860:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8088863:	c1 c8 1b             	ror    $0x1b,%eax
 8088866:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8088869:	03 45 e4             	add    -0x1c(%ebp),%eax
 808886c:	05 a1 eb d9 6e       	add    $0x6ed9eba1,%eax
 8088871:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8088874:	c1 4d ec 02          	rorl   $0x2,-0x14(%ebp)
 8088878:	8b 45 ec             	mov    -0x14(%ebp),%eax
 808887b:	8b 55 e8             	mov    -0x18(%ebp),%edx
 808887e:	31 d0                	xor    %edx,%eax
 8088880:	89 c1                	mov    %eax,%ecx
 8088882:	33 4d f0             	xor    -0x10(%ebp),%ecx
 8088885:	8b 45 08             	mov    0x8(%ebp),%eax
 8088888:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 808888e:	8b 55 08             	mov    0x8(%ebp),%edx
 8088891:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088897:	8b 5a 18             	mov    0x18(%edx),%ebx
 808889a:	8b 55 08             	mov    0x8(%ebp),%edx
 808889d:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80888a3:	8b 52 04             	mov    0x4(%edx),%edx
 80888a6:	31 d3                	xor    %edx,%ebx
 80888a8:	8b 55 08             	mov    0x8(%ebp),%edx
 80888ab:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80888b1:	8b 52 2c             	mov    0x2c(%edx),%edx
 80888b4:	31 d3                	xor    %edx,%ebx
 80888b6:	8b 55 08             	mov    0x8(%ebp),%edx
 80888b9:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80888bf:	8b 52 24             	mov    0x24(%edx),%edx
 80888c2:	31 da                	xor    %ebx,%edx
 80888c4:	c1 ca 1f             	ror    $0x1f,%edx
 80888c7:	89 50 24             	mov    %edx,0x24(%eax)
 80888ca:	8b 40 24             	mov    0x24(%eax),%eax
 80888cd:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 80888d0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80888d3:	c1 c8 1b             	ror    $0x1b,%eax
 80888d6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80888d9:	03 45 f4             	add    -0xc(%ebp),%eax
 80888dc:	05 a1 eb d9 6e       	add    $0x6ed9eba1,%eax
 80888e1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80888e4:	c1 4d e8 02          	rorl   $0x2,-0x18(%ebp)
 80888e8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80888eb:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80888ee:	31 d0                	xor    %edx,%eax
 80888f0:	89 c1                	mov    %eax,%ecx
 80888f2:	33 4d ec             	xor    -0x14(%ebp),%ecx
 80888f5:	8b 45 08             	mov    0x8(%ebp),%eax
 80888f8:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 80888fe:	8b 55 08             	mov    0x8(%ebp),%edx
 8088901:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088907:	8b 5a 1c             	mov    0x1c(%edx),%ebx
 808890a:	8b 55 08             	mov    0x8(%ebp),%edx
 808890d:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088913:	8b 52 08             	mov    0x8(%edx),%edx
 8088916:	31 d3                	xor    %edx,%ebx
 8088918:	8b 55 08             	mov    0x8(%ebp),%edx
 808891b:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088921:	8b 52 30             	mov    0x30(%edx),%edx
 8088924:	31 d3                	xor    %edx,%ebx
 8088926:	8b 55 08             	mov    0x8(%ebp),%edx
 8088929:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808892f:	8b 52 28             	mov    0x28(%edx),%edx
 8088932:	31 da                	xor    %ebx,%edx
 8088934:	c1 ca 1f             	ror    $0x1f,%edx
 8088937:	89 50 28             	mov    %edx,0x28(%eax)
 808893a:	8b 40 28             	mov    0x28(%eax),%eax
 808893d:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088940:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8088943:	c1 c8 1b             	ror    $0x1b,%eax
 8088946:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8088949:	03 45 f0             	add    -0x10(%ebp),%eax
 808894c:	05 a1 eb d9 6e       	add    $0x6ed9eba1,%eax
 8088951:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8088954:	c1 4d e4 02          	rorl   $0x2,-0x1c(%ebp)
 8088958:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 808895b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 808895e:	31 d0                	xor    %edx,%eax
 8088960:	89 c1                	mov    %eax,%ecx
 8088962:	33 4d e8             	xor    -0x18(%ebp),%ecx
 8088965:	8b 45 08             	mov    0x8(%ebp),%eax
 8088968:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 808896e:	8b 55 08             	mov    0x8(%ebp),%edx
 8088971:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088977:	8b 5a 20             	mov    0x20(%edx),%ebx
 808897a:	8b 55 08             	mov    0x8(%ebp),%edx
 808897d:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088983:	8b 52 0c             	mov    0xc(%edx),%edx
 8088986:	31 d3                	xor    %edx,%ebx
 8088988:	8b 55 08             	mov    0x8(%ebp),%edx
 808898b:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088991:	8b 52 34             	mov    0x34(%edx),%edx
 8088994:	31 d3                	xor    %edx,%ebx
 8088996:	8b 55 08             	mov    0x8(%ebp),%edx
 8088999:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808899f:	8b 52 2c             	mov    0x2c(%edx),%edx
 80889a2:	31 da                	xor    %ebx,%edx
 80889a4:	c1 ca 1f             	ror    $0x1f,%edx
 80889a7:	89 50 2c             	mov    %edx,0x2c(%eax)
 80889aa:	8b 40 2c             	mov    0x2c(%eax),%eax
 80889ad:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 80889b0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80889b3:	c1 c8 1b             	ror    $0x1b,%eax
 80889b6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80889b9:	03 45 ec             	add    -0x14(%ebp),%eax
 80889bc:	05 a1 eb d9 6e       	add    $0x6ed9eba1,%eax
 80889c1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80889c4:	c1 4d f4 02          	rorl   $0x2,-0xc(%ebp)
 80889c8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80889cb:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80889ce:	31 d0                	xor    %edx,%eax
 80889d0:	89 c1                	mov    %eax,%ecx
 80889d2:	33 4d e4             	xor    -0x1c(%ebp),%ecx
 80889d5:	8b 45 08             	mov    0x8(%ebp),%eax
 80889d8:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 80889de:	8b 55 08             	mov    0x8(%ebp),%edx
 80889e1:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80889e7:	8b 5a 24             	mov    0x24(%edx),%ebx
 80889ea:	8b 55 08             	mov    0x8(%ebp),%edx
 80889ed:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80889f3:	8b 52 10             	mov    0x10(%edx),%edx
 80889f6:	31 d3                	xor    %edx,%ebx
 80889f8:	8b 55 08             	mov    0x8(%ebp),%edx
 80889fb:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088a01:	8b 52 38             	mov    0x38(%edx),%edx
 8088a04:	31 d3                	xor    %edx,%ebx
 8088a06:	8b 55 08             	mov    0x8(%ebp),%edx
 8088a09:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088a0f:	8b 52 30             	mov    0x30(%edx),%edx
 8088a12:	31 da                	xor    %ebx,%edx
 8088a14:	c1 ca 1f             	ror    $0x1f,%edx
 8088a17:	89 50 30             	mov    %edx,0x30(%eax)
 8088a1a:	8b 40 30             	mov    0x30(%eax),%eax
 8088a1d:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088a20:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8088a23:	c1 c8 1b             	ror    $0x1b,%eax
 8088a26:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8088a29:	03 45 e8             	add    -0x18(%ebp),%eax
 8088a2c:	05 a1 eb d9 6e       	add    $0x6ed9eba1,%eax
 8088a31:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8088a34:	c1 4d f0 02          	rorl   $0x2,-0x10(%ebp)
 8088a38:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8088a3b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8088a3e:	31 d0                	xor    %edx,%eax
 8088a40:	89 c1                	mov    %eax,%ecx
 8088a42:	33 4d f4             	xor    -0xc(%ebp),%ecx
 8088a45:	8b 45 08             	mov    0x8(%ebp),%eax
 8088a48:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8088a4e:	8b 55 08             	mov    0x8(%ebp),%edx
 8088a51:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088a57:	8b 5a 28             	mov    0x28(%edx),%ebx
 8088a5a:	8b 55 08             	mov    0x8(%ebp),%edx
 8088a5d:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088a63:	8b 52 14             	mov    0x14(%edx),%edx
 8088a66:	31 d3                	xor    %edx,%ebx
 8088a68:	8b 55 08             	mov    0x8(%ebp),%edx
 8088a6b:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088a71:	8b 52 3c             	mov    0x3c(%edx),%edx
 8088a74:	31 d3                	xor    %edx,%ebx
 8088a76:	8b 55 08             	mov    0x8(%ebp),%edx
 8088a79:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088a7f:	8b 52 34             	mov    0x34(%edx),%edx
 8088a82:	31 da                	xor    %ebx,%edx
 8088a84:	c1 ca 1f             	ror    $0x1f,%edx
 8088a87:	89 50 34             	mov    %edx,0x34(%eax)
 8088a8a:	8b 40 34             	mov    0x34(%eax),%eax
 8088a8d:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088a90:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8088a93:	c1 c8 1b             	ror    $0x1b,%eax
 8088a96:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8088a99:	03 45 e4             	add    -0x1c(%ebp),%eax
 8088a9c:	05 a1 eb d9 6e       	add    $0x6ed9eba1,%eax
 8088aa1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8088aa4:	c1 4d ec 02          	rorl   $0x2,-0x14(%ebp)
 8088aa8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8088aab:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8088aae:	31 d0                	xor    %edx,%eax
 8088ab0:	89 c1                	mov    %eax,%ecx
 8088ab2:	33 4d f0             	xor    -0x10(%ebp),%ecx
 8088ab5:	8b 45 08             	mov    0x8(%ebp),%eax
 8088ab8:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8088abe:	8b 55 08             	mov    0x8(%ebp),%edx
 8088ac1:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088ac7:	8b 5a 2c             	mov    0x2c(%edx),%ebx
 8088aca:	8b 55 08             	mov    0x8(%ebp),%edx
 8088acd:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088ad3:	8b 52 18             	mov    0x18(%edx),%edx
 8088ad6:	31 d3                	xor    %edx,%ebx
 8088ad8:	8b 55 08             	mov    0x8(%ebp),%edx
 8088adb:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088ae1:	8b 12                	mov    (%edx),%edx
 8088ae3:	31 d3                	xor    %edx,%ebx
 8088ae5:	8b 55 08             	mov    0x8(%ebp),%edx
 8088ae8:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088aee:	8b 52 38             	mov    0x38(%edx),%edx
 8088af1:	31 da                	xor    %ebx,%edx
 8088af3:	c1 ca 1f             	ror    $0x1f,%edx
 8088af6:	89 50 38             	mov    %edx,0x38(%eax)
 8088af9:	8b 40 38             	mov    0x38(%eax),%eax
 8088afc:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088aff:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8088b02:	c1 c8 1b             	ror    $0x1b,%eax
 8088b05:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8088b08:	03 45 f4             	add    -0xc(%ebp),%eax
 8088b0b:	05 a1 eb d9 6e       	add    $0x6ed9eba1,%eax
 8088b10:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8088b13:	c1 4d e8 02          	rorl   $0x2,-0x18(%ebp)
 8088b17:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8088b1a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8088b1d:	31 d0                	xor    %edx,%eax
 8088b1f:	89 c1                	mov    %eax,%ecx
 8088b21:	33 4d ec             	xor    -0x14(%ebp),%ecx
 8088b24:	8b 45 08             	mov    0x8(%ebp),%eax
 8088b27:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8088b2d:	8b 55 08             	mov    0x8(%ebp),%edx
 8088b30:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088b36:	8b 5a 30             	mov    0x30(%edx),%ebx
 8088b39:	8b 55 08             	mov    0x8(%ebp),%edx
 8088b3c:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088b42:	8b 52 1c             	mov    0x1c(%edx),%edx
 8088b45:	31 d3                	xor    %edx,%ebx
 8088b47:	8b 55 08             	mov    0x8(%ebp),%edx
 8088b4a:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088b50:	8b 52 04             	mov    0x4(%edx),%edx
 8088b53:	31 d3                	xor    %edx,%ebx
 8088b55:	8b 55 08             	mov    0x8(%ebp),%edx
 8088b58:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088b5e:	8b 52 3c             	mov    0x3c(%edx),%edx
 8088b61:	31 da                	xor    %ebx,%edx
 8088b63:	c1 ca 1f             	ror    $0x1f,%edx
 8088b66:	89 50 3c             	mov    %edx,0x3c(%eax)
 8088b69:	8b 40 3c             	mov    0x3c(%eax),%eax
 8088b6c:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088b6f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8088b72:	c1 c8 1b             	ror    $0x1b,%eax
 8088b75:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8088b78:	03 45 f0             	add    -0x10(%ebp),%eax
 8088b7b:	05 a1 eb d9 6e       	add    $0x6ed9eba1,%eax
 8088b80:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8088b83:	c1 4d e4 02          	rorl   $0x2,-0x1c(%ebp)
 8088b87:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8088b8a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8088b8d:	31 d0                	xor    %edx,%eax
 8088b8f:	89 c1                	mov    %eax,%ecx
 8088b91:	33 4d e8             	xor    -0x18(%ebp),%ecx
 8088b94:	8b 45 08             	mov    0x8(%ebp),%eax
 8088b97:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8088b9d:	8b 55 08             	mov    0x8(%ebp),%edx
 8088ba0:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088ba6:	8b 5a 34             	mov    0x34(%edx),%ebx
 8088ba9:	8b 55 08             	mov    0x8(%ebp),%edx
 8088bac:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088bb2:	8b 52 20             	mov    0x20(%edx),%edx
 8088bb5:	31 d3                	xor    %edx,%ebx
 8088bb7:	8b 55 08             	mov    0x8(%ebp),%edx
 8088bba:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088bc0:	8b 52 08             	mov    0x8(%edx),%edx
 8088bc3:	31 d3                	xor    %edx,%ebx
 8088bc5:	8b 55 08             	mov    0x8(%ebp),%edx
 8088bc8:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088bce:	8b 12                	mov    (%edx),%edx
 8088bd0:	31 da                	xor    %ebx,%edx
 8088bd2:	c1 ca 1f             	ror    $0x1f,%edx
 8088bd5:	89 10                	mov    %edx,(%eax)
 8088bd7:	8b 00                	mov    (%eax),%eax
 8088bd9:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088bdc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8088bdf:	c1 c8 1b             	ror    $0x1b,%eax
 8088be2:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8088be5:	03 45 ec             	add    -0x14(%ebp),%eax
 8088be8:	05 a1 eb d9 6e       	add    $0x6ed9eba1,%eax
 8088bed:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8088bf0:	c1 4d f4 02          	rorl   $0x2,-0xc(%ebp)
 8088bf4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8088bf7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8088bfa:	31 d0                	xor    %edx,%eax
 8088bfc:	89 c1                	mov    %eax,%ecx
 8088bfe:	33 4d e4             	xor    -0x1c(%ebp),%ecx
 8088c01:	8b 45 08             	mov    0x8(%ebp),%eax
 8088c04:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8088c0a:	8b 55 08             	mov    0x8(%ebp),%edx
 8088c0d:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088c13:	8b 5a 38             	mov    0x38(%edx),%ebx
 8088c16:	8b 55 08             	mov    0x8(%ebp),%edx
 8088c19:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088c1f:	8b 52 24             	mov    0x24(%edx),%edx
 8088c22:	31 d3                	xor    %edx,%ebx
 8088c24:	8b 55 08             	mov    0x8(%ebp),%edx
 8088c27:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088c2d:	8b 52 0c             	mov    0xc(%edx),%edx
 8088c30:	31 d3                	xor    %edx,%ebx
 8088c32:	8b 55 08             	mov    0x8(%ebp),%edx
 8088c35:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088c3b:	8b 52 04             	mov    0x4(%edx),%edx
 8088c3e:	31 da                	xor    %ebx,%edx
 8088c40:	c1 ca 1f             	ror    $0x1f,%edx
 8088c43:	89 50 04             	mov    %edx,0x4(%eax)
 8088c46:	8b 40 04             	mov    0x4(%eax),%eax
 8088c49:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088c4c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8088c4f:	c1 c8 1b             	ror    $0x1b,%eax
 8088c52:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8088c55:	03 45 e8             	add    -0x18(%ebp),%eax
 8088c58:	05 a1 eb d9 6e       	add    $0x6ed9eba1,%eax
 8088c5d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8088c60:	c1 4d f0 02          	rorl   $0x2,-0x10(%ebp)
 8088c64:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8088c67:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8088c6a:	31 d0                	xor    %edx,%eax
 8088c6c:	89 c1                	mov    %eax,%ecx
 8088c6e:	33 4d f4             	xor    -0xc(%ebp),%ecx
 8088c71:	8b 45 08             	mov    0x8(%ebp),%eax
 8088c74:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8088c7a:	8b 55 08             	mov    0x8(%ebp),%edx
 8088c7d:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088c83:	8b 5a 3c             	mov    0x3c(%edx),%ebx
 8088c86:	8b 55 08             	mov    0x8(%ebp),%edx
 8088c89:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088c8f:	8b 52 28             	mov    0x28(%edx),%edx
 8088c92:	31 d3                	xor    %edx,%ebx
 8088c94:	8b 55 08             	mov    0x8(%ebp),%edx
 8088c97:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088c9d:	8b 52 10             	mov    0x10(%edx),%edx
 8088ca0:	31 d3                	xor    %edx,%ebx
 8088ca2:	8b 55 08             	mov    0x8(%ebp),%edx
 8088ca5:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088cab:	8b 52 08             	mov    0x8(%edx),%edx
 8088cae:	31 da                	xor    %ebx,%edx
 8088cb0:	c1 ca 1f             	ror    $0x1f,%edx
 8088cb3:	89 50 08             	mov    %edx,0x8(%eax)
 8088cb6:	8b 40 08             	mov    0x8(%eax),%eax
 8088cb9:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088cbc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8088cbf:	c1 c8 1b             	ror    $0x1b,%eax
 8088cc2:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8088cc5:	03 45 e4             	add    -0x1c(%ebp),%eax
 8088cc8:	05 a1 eb d9 6e       	add    $0x6ed9eba1,%eax
 8088ccd:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8088cd0:	c1 4d ec 02          	rorl   $0x2,-0x14(%ebp)
 8088cd4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8088cd7:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8088cda:	31 d0                	xor    %edx,%eax
 8088cdc:	89 c1                	mov    %eax,%ecx
 8088cde:	33 4d f0             	xor    -0x10(%ebp),%ecx
 8088ce1:	8b 45 08             	mov    0x8(%ebp),%eax
 8088ce4:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8088cea:	8b 55 08             	mov    0x8(%ebp),%edx
 8088ced:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088cf3:	8b 1a                	mov    (%edx),%ebx
 8088cf5:	8b 55 08             	mov    0x8(%ebp),%edx
 8088cf8:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088cfe:	8b 52 2c             	mov    0x2c(%edx),%edx
 8088d01:	31 d3                	xor    %edx,%ebx
 8088d03:	8b 55 08             	mov    0x8(%ebp),%edx
 8088d06:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088d0c:	8b 52 14             	mov    0x14(%edx),%edx
 8088d0f:	31 d3                	xor    %edx,%ebx
 8088d11:	8b 55 08             	mov    0x8(%ebp),%edx
 8088d14:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088d1a:	8b 52 0c             	mov    0xc(%edx),%edx
 8088d1d:	31 da                	xor    %ebx,%edx
 8088d1f:	c1 ca 1f             	ror    $0x1f,%edx
 8088d22:	89 50 0c             	mov    %edx,0xc(%eax)
 8088d25:	8b 40 0c             	mov    0xc(%eax),%eax
 8088d28:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088d2b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8088d2e:	c1 c8 1b             	ror    $0x1b,%eax
 8088d31:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8088d34:	03 45 f4             	add    -0xc(%ebp),%eax
 8088d37:	05 a1 eb d9 6e       	add    $0x6ed9eba1,%eax
 8088d3c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8088d3f:	c1 4d e8 02          	rorl   $0x2,-0x18(%ebp)
 8088d43:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8088d46:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8088d49:	31 d0                	xor    %edx,%eax
 8088d4b:	89 c1                	mov    %eax,%ecx
 8088d4d:	33 4d ec             	xor    -0x14(%ebp),%ecx
 8088d50:	8b 45 08             	mov    0x8(%ebp),%eax
 8088d53:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8088d59:	8b 55 08             	mov    0x8(%ebp),%edx
 8088d5c:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088d62:	8b 5a 04             	mov    0x4(%edx),%ebx
 8088d65:	8b 55 08             	mov    0x8(%ebp),%edx
 8088d68:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088d6e:	8b 52 30             	mov    0x30(%edx),%edx
 8088d71:	31 d3                	xor    %edx,%ebx
 8088d73:	8b 55 08             	mov    0x8(%ebp),%edx
 8088d76:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088d7c:	8b 52 18             	mov    0x18(%edx),%edx
 8088d7f:	31 d3                	xor    %edx,%ebx
 8088d81:	8b 55 08             	mov    0x8(%ebp),%edx
 8088d84:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088d8a:	8b 52 10             	mov    0x10(%edx),%edx
 8088d8d:	31 da                	xor    %ebx,%edx
 8088d8f:	c1 ca 1f             	ror    $0x1f,%edx
 8088d92:	89 50 10             	mov    %edx,0x10(%eax)
 8088d95:	8b 40 10             	mov    0x10(%eax),%eax
 8088d98:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088d9b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8088d9e:	c1 c8 1b             	ror    $0x1b,%eax
 8088da1:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8088da4:	03 45 f0             	add    -0x10(%ebp),%eax
 8088da7:	05 a1 eb d9 6e       	add    $0x6ed9eba1,%eax
 8088dac:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8088daf:	c1 4d e4 02          	rorl   $0x2,-0x1c(%ebp)
 8088db3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8088db6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8088db9:	31 d0                	xor    %edx,%eax
 8088dbb:	89 c1                	mov    %eax,%ecx
 8088dbd:	33 4d e8             	xor    -0x18(%ebp),%ecx
 8088dc0:	8b 45 08             	mov    0x8(%ebp),%eax
 8088dc3:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8088dc9:	8b 55 08             	mov    0x8(%ebp),%edx
 8088dcc:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088dd2:	8b 5a 08             	mov    0x8(%edx),%ebx
 8088dd5:	8b 55 08             	mov    0x8(%ebp),%edx
 8088dd8:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088dde:	8b 52 34             	mov    0x34(%edx),%edx
 8088de1:	31 d3                	xor    %edx,%ebx
 8088de3:	8b 55 08             	mov    0x8(%ebp),%edx
 8088de6:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088dec:	8b 52 1c             	mov    0x1c(%edx),%edx
 8088def:	31 d3                	xor    %edx,%ebx
 8088df1:	8b 55 08             	mov    0x8(%ebp),%edx
 8088df4:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088dfa:	8b 52 14             	mov    0x14(%edx),%edx
 8088dfd:	31 da                	xor    %ebx,%edx
 8088dff:	c1 ca 1f             	ror    $0x1f,%edx
 8088e02:	89 50 14             	mov    %edx,0x14(%eax)
 8088e05:	8b 40 14             	mov    0x14(%eax),%eax
 8088e08:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088e0b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8088e0e:	c1 c8 1b             	ror    $0x1b,%eax
 8088e11:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8088e14:	03 45 ec             	add    -0x14(%ebp),%eax
 8088e17:	05 a1 eb d9 6e       	add    $0x6ed9eba1,%eax
 8088e1c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8088e1f:	c1 4d f4 02          	rorl   $0x2,-0xc(%ebp)
 8088e23:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8088e26:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8088e29:	31 d0                	xor    %edx,%eax
 8088e2b:	89 c1                	mov    %eax,%ecx
 8088e2d:	33 4d e4             	xor    -0x1c(%ebp),%ecx
 8088e30:	8b 45 08             	mov    0x8(%ebp),%eax
 8088e33:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8088e39:	8b 55 08             	mov    0x8(%ebp),%edx
 8088e3c:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088e42:	8b 5a 0c             	mov    0xc(%edx),%ebx
 8088e45:	8b 55 08             	mov    0x8(%ebp),%edx
 8088e48:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088e4e:	8b 52 38             	mov    0x38(%edx),%edx
 8088e51:	31 d3                	xor    %edx,%ebx
 8088e53:	8b 55 08             	mov    0x8(%ebp),%edx
 8088e56:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088e5c:	8b 52 20             	mov    0x20(%edx),%edx
 8088e5f:	31 d3                	xor    %edx,%ebx
 8088e61:	8b 55 08             	mov    0x8(%ebp),%edx
 8088e64:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088e6a:	8b 52 18             	mov    0x18(%edx),%edx
 8088e6d:	31 da                	xor    %ebx,%edx
 8088e6f:	c1 ca 1f             	ror    $0x1f,%edx
 8088e72:	89 50 18             	mov    %edx,0x18(%eax)
 8088e75:	8b 40 18             	mov    0x18(%eax),%eax
 8088e78:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088e7b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8088e7e:	c1 c8 1b             	ror    $0x1b,%eax
 8088e81:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8088e84:	03 45 e8             	add    -0x18(%ebp),%eax
 8088e87:	05 a1 eb d9 6e       	add    $0x6ed9eba1,%eax
 8088e8c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8088e8f:	c1 4d f0 02          	rorl   $0x2,-0x10(%ebp)
 8088e93:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8088e96:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8088e99:	31 d0                	xor    %edx,%eax
 8088e9b:	89 c1                	mov    %eax,%ecx
 8088e9d:	33 4d f4             	xor    -0xc(%ebp),%ecx
 8088ea0:	8b 45 08             	mov    0x8(%ebp),%eax
 8088ea3:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8088ea9:	8b 55 08             	mov    0x8(%ebp),%edx
 8088eac:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088eb2:	8b 5a 10             	mov    0x10(%edx),%ebx
 8088eb5:	8b 55 08             	mov    0x8(%ebp),%edx
 8088eb8:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088ebe:	8b 52 3c             	mov    0x3c(%edx),%edx
 8088ec1:	31 d3                	xor    %edx,%ebx
 8088ec3:	8b 55 08             	mov    0x8(%ebp),%edx
 8088ec6:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088ecc:	8b 52 24             	mov    0x24(%edx),%edx
 8088ecf:	31 d3                	xor    %edx,%ebx
 8088ed1:	8b 55 08             	mov    0x8(%ebp),%edx
 8088ed4:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088eda:	8b 52 1c             	mov    0x1c(%edx),%edx
 8088edd:	31 da                	xor    %ebx,%edx
 8088edf:	c1 ca 1f             	ror    $0x1f,%edx
 8088ee2:	89 50 1c             	mov    %edx,0x1c(%eax)
 8088ee5:	8b 40 1c             	mov    0x1c(%eax),%eax
 8088ee8:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8088eeb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8088eee:	c1 c8 1b             	ror    $0x1b,%eax
 8088ef1:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8088ef4:	03 45 e4             	add    -0x1c(%ebp),%eax
 8088ef7:	05 a1 eb d9 6e       	add    $0x6ed9eba1,%eax
 8088efc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8088eff:	c1 4d ec 02          	rorl   $0x2,-0x14(%ebp)
 8088f03:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8088f06:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8088f09:	09 d0                	or     %edx,%eax
 8088f0b:	23 45 f0             	and    -0x10(%ebp),%eax
 8088f0e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8088f11:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 8088f14:	21 ca                	and    %ecx,%edx
 8088f16:	89 c3                	mov    %eax,%ebx
 8088f18:	09 d3                	or     %edx,%ebx
 8088f1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8088f1d:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8088f23:	8b 55 08             	mov    0x8(%ebp),%edx
 8088f26:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088f2c:	8b 4a 14             	mov    0x14(%edx),%ecx
 8088f2f:	8b 55 08             	mov    0x8(%ebp),%edx
 8088f32:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088f38:	8b 12                	mov    (%edx),%edx
 8088f3a:	31 d1                	xor    %edx,%ecx
 8088f3c:	8b 55 08             	mov    0x8(%ebp),%edx
 8088f3f:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088f45:	8b 52 28             	mov    0x28(%edx),%edx
 8088f48:	31 d1                	xor    %edx,%ecx
 8088f4a:	8b 55 08             	mov    0x8(%ebp),%edx
 8088f4d:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088f53:	8b 52 20             	mov    0x20(%edx),%edx
 8088f56:	31 ca                	xor    %ecx,%edx
 8088f58:	c1 ca 1f             	ror    $0x1f,%edx
 8088f5b:	89 50 20             	mov    %edx,0x20(%eax)
 8088f5e:	8b 40 20             	mov    0x20(%eax),%eax
 8088f61:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 8088f64:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8088f67:	c1 c8 1b             	ror    $0x1b,%eax
 8088f6a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8088f6d:	03 45 f4             	add    -0xc(%ebp),%eax
 8088f70:	2d 24 43 e4 70       	sub    $0x70e44324,%eax
 8088f75:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8088f78:	c1 4d e8 02          	rorl   $0x2,-0x18(%ebp)
 8088f7c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8088f7f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8088f82:	09 d0                	or     %edx,%eax
 8088f84:	23 45 ec             	and    -0x14(%ebp),%eax
 8088f87:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8088f8a:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8088f8d:	21 ca                	and    %ecx,%edx
 8088f8f:	89 c3                	mov    %eax,%ebx
 8088f91:	09 d3                	or     %edx,%ebx
 8088f93:	8b 45 08             	mov    0x8(%ebp),%eax
 8088f96:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8088f9c:	8b 55 08             	mov    0x8(%ebp),%edx
 8088f9f:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088fa5:	8b 4a 18             	mov    0x18(%edx),%ecx
 8088fa8:	8b 55 08             	mov    0x8(%ebp),%edx
 8088fab:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088fb1:	8b 52 04             	mov    0x4(%edx),%edx
 8088fb4:	31 d1                	xor    %edx,%ecx
 8088fb6:	8b 55 08             	mov    0x8(%ebp),%edx
 8088fb9:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088fbf:	8b 52 2c             	mov    0x2c(%edx),%edx
 8088fc2:	31 d1                	xor    %edx,%ecx
 8088fc4:	8b 55 08             	mov    0x8(%ebp),%edx
 8088fc7:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8088fcd:	8b 52 24             	mov    0x24(%edx),%edx
 8088fd0:	31 ca                	xor    %ecx,%edx
 8088fd2:	c1 ca 1f             	ror    $0x1f,%edx
 8088fd5:	89 50 24             	mov    %edx,0x24(%eax)
 8088fd8:	8b 40 24             	mov    0x24(%eax),%eax
 8088fdb:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 8088fde:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8088fe1:	c1 c8 1b             	ror    $0x1b,%eax
 8088fe4:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8088fe7:	03 45 f0             	add    -0x10(%ebp),%eax
 8088fea:	2d 24 43 e4 70       	sub    $0x70e44324,%eax
 8088fef:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8088ff2:	c1 4d e4 02          	rorl   $0x2,-0x1c(%ebp)
 8088ff6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8088ff9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8088ffc:	09 d0                	or     %edx,%eax
 8088ffe:	23 45 e8             	and    -0x18(%ebp),%eax
 8089001:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8089004:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8089007:	21 ca                	and    %ecx,%edx
 8089009:	89 c3                	mov    %eax,%ebx
 808900b:	09 d3                	or     %edx,%ebx
 808900d:	8b 45 08             	mov    0x8(%ebp),%eax
 8089010:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8089016:	8b 55 08             	mov    0x8(%ebp),%edx
 8089019:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808901f:	8b 4a 1c             	mov    0x1c(%edx),%ecx
 8089022:	8b 55 08             	mov    0x8(%ebp),%edx
 8089025:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808902b:	8b 52 08             	mov    0x8(%edx),%edx
 808902e:	31 d1                	xor    %edx,%ecx
 8089030:	8b 55 08             	mov    0x8(%ebp),%edx
 8089033:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089039:	8b 52 30             	mov    0x30(%edx),%edx
 808903c:	31 d1                	xor    %edx,%ecx
 808903e:	8b 55 08             	mov    0x8(%ebp),%edx
 8089041:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089047:	8b 52 28             	mov    0x28(%edx),%edx
 808904a:	31 ca                	xor    %ecx,%edx
 808904c:	c1 ca 1f             	ror    $0x1f,%edx
 808904f:	89 50 28             	mov    %edx,0x28(%eax)
 8089052:	8b 40 28             	mov    0x28(%eax),%eax
 8089055:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 8089058:	8b 45 f0             	mov    -0x10(%ebp),%eax
 808905b:	c1 c8 1b             	ror    $0x1b,%eax
 808905e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089061:	03 45 ec             	add    -0x14(%ebp),%eax
 8089064:	2d 24 43 e4 70       	sub    $0x70e44324,%eax
 8089069:	89 45 ec             	mov    %eax,-0x14(%ebp)
 808906c:	c1 4d f4 02          	rorl   $0x2,-0xc(%ebp)
 8089070:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8089073:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8089076:	09 d0                	or     %edx,%eax
 8089078:	23 45 e4             	and    -0x1c(%ebp),%eax
 808907b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 808907e:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8089081:	21 ca                	and    %ecx,%edx
 8089083:	89 c3                	mov    %eax,%ebx
 8089085:	09 d3                	or     %edx,%ebx
 8089087:	8b 45 08             	mov    0x8(%ebp),%eax
 808908a:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8089090:	8b 55 08             	mov    0x8(%ebp),%edx
 8089093:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089099:	8b 4a 20             	mov    0x20(%edx),%ecx
 808909c:	8b 55 08             	mov    0x8(%ebp),%edx
 808909f:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80890a5:	8b 52 0c             	mov    0xc(%edx),%edx
 80890a8:	31 d1                	xor    %edx,%ecx
 80890aa:	8b 55 08             	mov    0x8(%ebp),%edx
 80890ad:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80890b3:	8b 52 34             	mov    0x34(%edx),%edx
 80890b6:	31 d1                	xor    %edx,%ecx
 80890b8:	8b 55 08             	mov    0x8(%ebp),%edx
 80890bb:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80890c1:	8b 52 2c             	mov    0x2c(%edx),%edx
 80890c4:	31 ca                	xor    %ecx,%edx
 80890c6:	c1 ca 1f             	ror    $0x1f,%edx
 80890c9:	89 50 2c             	mov    %edx,0x2c(%eax)
 80890cc:	8b 40 2c             	mov    0x2c(%eax),%eax
 80890cf:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80890d2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80890d5:	c1 c8 1b             	ror    $0x1b,%eax
 80890d8:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80890db:	03 45 e8             	add    -0x18(%ebp),%eax
 80890de:	2d 24 43 e4 70       	sub    $0x70e44324,%eax
 80890e3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80890e6:	c1 4d f0 02          	rorl   $0x2,-0x10(%ebp)
 80890ea:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80890ed:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80890f0:	09 d0                	or     %edx,%eax
 80890f2:	23 45 f4             	and    -0xc(%ebp),%eax
 80890f5:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80890f8:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 80890fb:	21 ca                	and    %ecx,%edx
 80890fd:	89 c3                	mov    %eax,%ebx
 80890ff:	09 d3                	or     %edx,%ebx
 8089101:	8b 45 08             	mov    0x8(%ebp),%eax
 8089104:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 808910a:	8b 55 08             	mov    0x8(%ebp),%edx
 808910d:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089113:	8b 4a 24             	mov    0x24(%edx),%ecx
 8089116:	8b 55 08             	mov    0x8(%ebp),%edx
 8089119:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808911f:	8b 52 10             	mov    0x10(%edx),%edx
 8089122:	31 d1                	xor    %edx,%ecx
 8089124:	8b 55 08             	mov    0x8(%ebp),%edx
 8089127:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808912d:	8b 52 38             	mov    0x38(%edx),%edx
 8089130:	31 d1                	xor    %edx,%ecx
 8089132:	8b 55 08             	mov    0x8(%ebp),%edx
 8089135:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808913b:	8b 52 30             	mov    0x30(%edx),%edx
 808913e:	31 ca                	xor    %ecx,%edx
 8089140:	c1 ca 1f             	ror    $0x1f,%edx
 8089143:	89 50 30             	mov    %edx,0x30(%eax)
 8089146:	8b 40 30             	mov    0x30(%eax),%eax
 8089149:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 808914c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 808914f:	c1 c8 1b             	ror    $0x1b,%eax
 8089152:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089155:	03 45 e4             	add    -0x1c(%ebp),%eax
 8089158:	2d 24 43 e4 70       	sub    $0x70e44324,%eax
 808915d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8089160:	c1 4d ec 02          	rorl   $0x2,-0x14(%ebp)
 8089164:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8089167:	8b 55 e8             	mov    -0x18(%ebp),%edx
 808916a:	09 d0                	or     %edx,%eax
 808916c:	23 45 f0             	and    -0x10(%ebp),%eax
 808916f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8089172:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 8089175:	21 ca                	and    %ecx,%edx
 8089177:	89 c3                	mov    %eax,%ebx
 8089179:	09 d3                	or     %edx,%ebx
 808917b:	8b 45 08             	mov    0x8(%ebp),%eax
 808917e:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8089184:	8b 55 08             	mov    0x8(%ebp),%edx
 8089187:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808918d:	8b 4a 28             	mov    0x28(%edx),%ecx
 8089190:	8b 55 08             	mov    0x8(%ebp),%edx
 8089193:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089199:	8b 52 14             	mov    0x14(%edx),%edx
 808919c:	31 d1                	xor    %edx,%ecx
 808919e:	8b 55 08             	mov    0x8(%ebp),%edx
 80891a1:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80891a7:	8b 52 3c             	mov    0x3c(%edx),%edx
 80891aa:	31 d1                	xor    %edx,%ecx
 80891ac:	8b 55 08             	mov    0x8(%ebp),%edx
 80891af:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80891b5:	8b 52 34             	mov    0x34(%edx),%edx
 80891b8:	31 ca                	xor    %ecx,%edx
 80891ba:	c1 ca 1f             	ror    $0x1f,%edx
 80891bd:	89 50 34             	mov    %edx,0x34(%eax)
 80891c0:	8b 40 34             	mov    0x34(%eax),%eax
 80891c3:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80891c6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80891c9:	c1 c8 1b             	ror    $0x1b,%eax
 80891cc:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80891cf:	03 45 f4             	add    -0xc(%ebp),%eax
 80891d2:	2d 24 43 e4 70       	sub    $0x70e44324,%eax
 80891d7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80891da:	c1 4d e8 02          	rorl   $0x2,-0x18(%ebp)
 80891de:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80891e1:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80891e4:	09 d0                	or     %edx,%eax
 80891e6:	23 45 ec             	and    -0x14(%ebp),%eax
 80891e9:	8b 55 e8             	mov    -0x18(%ebp),%edx
 80891ec:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 80891ef:	21 ca                	and    %ecx,%edx
 80891f1:	89 c3                	mov    %eax,%ebx
 80891f3:	09 d3                	or     %edx,%ebx
 80891f5:	8b 45 08             	mov    0x8(%ebp),%eax
 80891f8:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 80891fe:	8b 55 08             	mov    0x8(%ebp),%edx
 8089201:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089207:	8b 4a 2c             	mov    0x2c(%edx),%ecx
 808920a:	8b 55 08             	mov    0x8(%ebp),%edx
 808920d:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089213:	8b 52 18             	mov    0x18(%edx),%edx
 8089216:	31 d1                	xor    %edx,%ecx
 8089218:	8b 55 08             	mov    0x8(%ebp),%edx
 808921b:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089221:	8b 12                	mov    (%edx),%edx
 8089223:	31 d1                	xor    %edx,%ecx
 8089225:	8b 55 08             	mov    0x8(%ebp),%edx
 8089228:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808922e:	8b 52 38             	mov    0x38(%edx),%edx
 8089231:	31 ca                	xor    %ecx,%edx
 8089233:	c1 ca 1f             	ror    $0x1f,%edx
 8089236:	89 50 38             	mov    %edx,0x38(%eax)
 8089239:	8b 40 38             	mov    0x38(%eax),%eax
 808923c:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 808923f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8089242:	c1 c8 1b             	ror    $0x1b,%eax
 8089245:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089248:	03 45 f0             	add    -0x10(%ebp),%eax
 808924b:	2d 24 43 e4 70       	sub    $0x70e44324,%eax
 8089250:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8089253:	c1 4d e4 02          	rorl   $0x2,-0x1c(%ebp)
 8089257:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 808925a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 808925d:	09 d0                	or     %edx,%eax
 808925f:	23 45 e8             	and    -0x18(%ebp),%eax
 8089262:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8089265:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8089268:	21 ca                	and    %ecx,%edx
 808926a:	89 c3                	mov    %eax,%ebx
 808926c:	09 d3                	or     %edx,%ebx
 808926e:	8b 45 08             	mov    0x8(%ebp),%eax
 8089271:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8089277:	8b 55 08             	mov    0x8(%ebp),%edx
 808927a:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089280:	8b 4a 30             	mov    0x30(%edx),%ecx
 8089283:	8b 55 08             	mov    0x8(%ebp),%edx
 8089286:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808928c:	8b 52 1c             	mov    0x1c(%edx),%edx
 808928f:	31 d1                	xor    %edx,%ecx
 8089291:	8b 55 08             	mov    0x8(%ebp),%edx
 8089294:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808929a:	8b 52 04             	mov    0x4(%edx),%edx
 808929d:	31 d1                	xor    %edx,%ecx
 808929f:	8b 55 08             	mov    0x8(%ebp),%edx
 80892a2:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80892a8:	8b 52 3c             	mov    0x3c(%edx),%edx
 80892ab:	31 ca                	xor    %ecx,%edx
 80892ad:	c1 ca 1f             	ror    $0x1f,%edx
 80892b0:	89 50 3c             	mov    %edx,0x3c(%eax)
 80892b3:	8b 40 3c             	mov    0x3c(%eax),%eax
 80892b6:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80892b9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80892bc:	c1 c8 1b             	ror    $0x1b,%eax
 80892bf:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80892c2:	03 45 ec             	add    -0x14(%ebp),%eax
 80892c5:	2d 24 43 e4 70       	sub    $0x70e44324,%eax
 80892ca:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80892cd:	c1 4d f4 02          	rorl   $0x2,-0xc(%ebp)
 80892d1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80892d4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80892d7:	09 d0                	or     %edx,%eax
 80892d9:	23 45 e4             	and    -0x1c(%ebp),%eax
 80892dc:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80892df:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 80892e2:	21 ca                	and    %ecx,%edx
 80892e4:	89 c3                	mov    %eax,%ebx
 80892e6:	09 d3                	or     %edx,%ebx
 80892e8:	8b 45 08             	mov    0x8(%ebp),%eax
 80892eb:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 80892f1:	8b 55 08             	mov    0x8(%ebp),%edx
 80892f4:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80892fa:	8b 4a 34             	mov    0x34(%edx),%ecx
 80892fd:	8b 55 08             	mov    0x8(%ebp),%edx
 8089300:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089306:	8b 52 20             	mov    0x20(%edx),%edx
 8089309:	31 d1                	xor    %edx,%ecx
 808930b:	8b 55 08             	mov    0x8(%ebp),%edx
 808930e:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089314:	8b 52 08             	mov    0x8(%edx),%edx
 8089317:	31 d1                	xor    %edx,%ecx
 8089319:	8b 55 08             	mov    0x8(%ebp),%edx
 808931c:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089322:	8b 12                	mov    (%edx),%edx
 8089324:	31 ca                	xor    %ecx,%edx
 8089326:	c1 ca 1f             	ror    $0x1f,%edx
 8089329:	89 10                	mov    %edx,(%eax)
 808932b:	8b 00                	mov    (%eax),%eax
 808932d:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 8089330:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8089333:	c1 c8 1b             	ror    $0x1b,%eax
 8089336:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089339:	03 45 e8             	add    -0x18(%ebp),%eax
 808933c:	2d 24 43 e4 70       	sub    $0x70e44324,%eax
 8089341:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8089344:	c1 4d f0 02          	rorl   $0x2,-0x10(%ebp)
 8089348:	8b 45 f0             	mov    -0x10(%ebp),%eax
 808934b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 808934e:	09 d0                	or     %edx,%eax
 8089350:	23 45 f4             	and    -0xc(%ebp),%eax
 8089353:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8089356:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 8089359:	21 ca                	and    %ecx,%edx
 808935b:	89 c3                	mov    %eax,%ebx
 808935d:	09 d3                	or     %edx,%ebx
 808935f:	8b 45 08             	mov    0x8(%ebp),%eax
 8089362:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8089368:	8b 55 08             	mov    0x8(%ebp),%edx
 808936b:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089371:	8b 4a 38             	mov    0x38(%edx),%ecx
 8089374:	8b 55 08             	mov    0x8(%ebp),%edx
 8089377:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808937d:	8b 52 24             	mov    0x24(%edx),%edx
 8089380:	31 d1                	xor    %edx,%ecx
 8089382:	8b 55 08             	mov    0x8(%ebp),%edx
 8089385:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808938b:	8b 52 0c             	mov    0xc(%edx),%edx
 808938e:	31 d1                	xor    %edx,%ecx
 8089390:	8b 55 08             	mov    0x8(%ebp),%edx
 8089393:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089399:	8b 52 04             	mov    0x4(%edx),%edx
 808939c:	31 ca                	xor    %ecx,%edx
 808939e:	c1 ca 1f             	ror    $0x1f,%edx
 80893a1:	89 50 04             	mov    %edx,0x4(%eax)
 80893a4:	8b 40 04             	mov    0x4(%eax),%eax
 80893a7:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80893aa:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80893ad:	c1 c8 1b             	ror    $0x1b,%eax
 80893b0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80893b3:	03 45 e4             	add    -0x1c(%ebp),%eax
 80893b6:	2d 24 43 e4 70       	sub    $0x70e44324,%eax
 80893bb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80893be:	c1 4d ec 02          	rorl   $0x2,-0x14(%ebp)
 80893c2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80893c5:	8b 55 e8             	mov    -0x18(%ebp),%edx
 80893c8:	09 d0                	or     %edx,%eax
 80893ca:	23 45 f0             	and    -0x10(%ebp),%eax
 80893cd:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80893d0:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 80893d3:	21 ca                	and    %ecx,%edx
 80893d5:	89 c3                	mov    %eax,%ebx
 80893d7:	09 d3                	or     %edx,%ebx
 80893d9:	8b 45 08             	mov    0x8(%ebp),%eax
 80893dc:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 80893e2:	8b 55 08             	mov    0x8(%ebp),%edx
 80893e5:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80893eb:	8b 4a 3c             	mov    0x3c(%edx),%ecx
 80893ee:	8b 55 08             	mov    0x8(%ebp),%edx
 80893f1:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80893f7:	8b 52 28             	mov    0x28(%edx),%edx
 80893fa:	31 d1                	xor    %edx,%ecx
 80893fc:	8b 55 08             	mov    0x8(%ebp),%edx
 80893ff:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089405:	8b 52 10             	mov    0x10(%edx),%edx
 8089408:	31 d1                	xor    %edx,%ecx
 808940a:	8b 55 08             	mov    0x8(%ebp),%edx
 808940d:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089413:	8b 52 08             	mov    0x8(%edx),%edx
 8089416:	31 ca                	xor    %ecx,%edx
 8089418:	c1 ca 1f             	ror    $0x1f,%edx
 808941b:	89 50 08             	mov    %edx,0x8(%eax)
 808941e:	8b 40 08             	mov    0x8(%eax),%eax
 8089421:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 8089424:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8089427:	c1 c8 1b             	ror    $0x1b,%eax
 808942a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 808942d:	03 45 f4             	add    -0xc(%ebp),%eax
 8089430:	2d 24 43 e4 70       	sub    $0x70e44324,%eax
 8089435:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8089438:	c1 4d e8 02          	rorl   $0x2,-0x18(%ebp)
 808943c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 808943f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8089442:	09 d0                	or     %edx,%eax
 8089444:	23 45 ec             	and    -0x14(%ebp),%eax
 8089447:	8b 55 e8             	mov    -0x18(%ebp),%edx
 808944a:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 808944d:	21 ca                	and    %ecx,%edx
 808944f:	89 c3                	mov    %eax,%ebx
 8089451:	09 d3                	or     %edx,%ebx
 8089453:	8b 45 08             	mov    0x8(%ebp),%eax
 8089456:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 808945c:	8b 55 08             	mov    0x8(%ebp),%edx
 808945f:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089465:	8b 0a                	mov    (%edx),%ecx
 8089467:	8b 55 08             	mov    0x8(%ebp),%edx
 808946a:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089470:	8b 52 2c             	mov    0x2c(%edx),%edx
 8089473:	31 d1                	xor    %edx,%ecx
 8089475:	8b 55 08             	mov    0x8(%ebp),%edx
 8089478:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808947e:	8b 52 14             	mov    0x14(%edx),%edx
 8089481:	31 d1                	xor    %edx,%ecx
 8089483:	8b 55 08             	mov    0x8(%ebp),%edx
 8089486:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808948c:	8b 52 0c             	mov    0xc(%edx),%edx
 808948f:	31 ca                	xor    %ecx,%edx
 8089491:	c1 ca 1f             	ror    $0x1f,%edx
 8089494:	89 50 0c             	mov    %edx,0xc(%eax)
 8089497:	8b 40 0c             	mov    0xc(%eax),%eax
 808949a:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 808949d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80894a0:	c1 c8 1b             	ror    $0x1b,%eax
 80894a3:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80894a6:	03 45 f0             	add    -0x10(%ebp),%eax
 80894a9:	2d 24 43 e4 70       	sub    $0x70e44324,%eax
 80894ae:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80894b1:	c1 4d e4 02          	rorl   $0x2,-0x1c(%ebp)
 80894b5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80894b8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80894bb:	09 d0                	or     %edx,%eax
 80894bd:	23 45 e8             	and    -0x18(%ebp),%eax
 80894c0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80894c3:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 80894c6:	21 ca                	and    %ecx,%edx
 80894c8:	89 c3                	mov    %eax,%ebx
 80894ca:	09 d3                	or     %edx,%ebx
 80894cc:	8b 45 08             	mov    0x8(%ebp),%eax
 80894cf:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 80894d5:	8b 55 08             	mov    0x8(%ebp),%edx
 80894d8:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80894de:	8b 4a 04             	mov    0x4(%edx),%ecx
 80894e1:	8b 55 08             	mov    0x8(%ebp),%edx
 80894e4:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80894ea:	8b 52 30             	mov    0x30(%edx),%edx
 80894ed:	31 d1                	xor    %edx,%ecx
 80894ef:	8b 55 08             	mov    0x8(%ebp),%edx
 80894f2:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80894f8:	8b 52 18             	mov    0x18(%edx),%edx
 80894fb:	31 d1                	xor    %edx,%ecx
 80894fd:	8b 55 08             	mov    0x8(%ebp),%edx
 8089500:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089506:	8b 52 10             	mov    0x10(%edx),%edx
 8089509:	31 ca                	xor    %ecx,%edx
 808950b:	c1 ca 1f             	ror    $0x1f,%edx
 808950e:	89 50 10             	mov    %edx,0x10(%eax)
 8089511:	8b 40 10             	mov    0x10(%eax),%eax
 8089514:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 8089517:	8b 45 f0             	mov    -0x10(%ebp),%eax
 808951a:	c1 c8 1b             	ror    $0x1b,%eax
 808951d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089520:	03 45 ec             	add    -0x14(%ebp),%eax
 8089523:	2d 24 43 e4 70       	sub    $0x70e44324,%eax
 8089528:	89 45 ec             	mov    %eax,-0x14(%ebp)
 808952b:	c1 4d f4 02          	rorl   $0x2,-0xc(%ebp)
 808952f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8089532:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8089535:	09 d0                	or     %edx,%eax
 8089537:	23 45 e4             	and    -0x1c(%ebp),%eax
 808953a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 808953d:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8089540:	21 ca                	and    %ecx,%edx
 8089542:	89 c3                	mov    %eax,%ebx
 8089544:	09 d3                	or     %edx,%ebx
 8089546:	8b 45 08             	mov    0x8(%ebp),%eax
 8089549:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 808954f:	8b 55 08             	mov    0x8(%ebp),%edx
 8089552:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089558:	8b 4a 08             	mov    0x8(%edx),%ecx
 808955b:	8b 55 08             	mov    0x8(%ebp),%edx
 808955e:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089564:	8b 52 34             	mov    0x34(%edx),%edx
 8089567:	31 d1                	xor    %edx,%ecx
 8089569:	8b 55 08             	mov    0x8(%ebp),%edx
 808956c:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089572:	8b 52 1c             	mov    0x1c(%edx),%edx
 8089575:	31 d1                	xor    %edx,%ecx
 8089577:	8b 55 08             	mov    0x8(%ebp),%edx
 808957a:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089580:	8b 52 14             	mov    0x14(%edx),%edx
 8089583:	31 ca                	xor    %ecx,%edx
 8089585:	c1 ca 1f             	ror    $0x1f,%edx
 8089588:	89 50 14             	mov    %edx,0x14(%eax)
 808958b:	8b 40 14             	mov    0x14(%eax),%eax
 808958e:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 8089591:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8089594:	c1 c8 1b             	ror    $0x1b,%eax
 8089597:	8d 04 02             	lea    (%edx,%eax,1),%eax
 808959a:	03 45 e8             	add    -0x18(%ebp),%eax
 808959d:	2d 24 43 e4 70       	sub    $0x70e44324,%eax
 80895a2:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80895a5:	c1 4d f0 02          	rorl   $0x2,-0x10(%ebp)
 80895a9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80895ac:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80895af:	09 d0                	or     %edx,%eax
 80895b1:	23 45 f4             	and    -0xc(%ebp),%eax
 80895b4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80895b7:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 80895ba:	21 ca                	and    %ecx,%edx
 80895bc:	89 c3                	mov    %eax,%ebx
 80895be:	09 d3                	or     %edx,%ebx
 80895c0:	8b 45 08             	mov    0x8(%ebp),%eax
 80895c3:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 80895c9:	8b 55 08             	mov    0x8(%ebp),%edx
 80895cc:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80895d2:	8b 4a 0c             	mov    0xc(%edx),%ecx
 80895d5:	8b 55 08             	mov    0x8(%ebp),%edx
 80895d8:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80895de:	8b 52 38             	mov    0x38(%edx),%edx
 80895e1:	31 d1                	xor    %edx,%ecx
 80895e3:	8b 55 08             	mov    0x8(%ebp),%edx
 80895e6:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80895ec:	8b 52 20             	mov    0x20(%edx),%edx
 80895ef:	31 d1                	xor    %edx,%ecx
 80895f1:	8b 55 08             	mov    0x8(%ebp),%edx
 80895f4:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80895fa:	8b 52 18             	mov    0x18(%edx),%edx
 80895fd:	31 ca                	xor    %ecx,%edx
 80895ff:	c1 ca 1f             	ror    $0x1f,%edx
 8089602:	89 50 18             	mov    %edx,0x18(%eax)
 8089605:	8b 40 18             	mov    0x18(%eax),%eax
 8089608:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 808960b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 808960e:	c1 c8 1b             	ror    $0x1b,%eax
 8089611:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089614:	03 45 e4             	add    -0x1c(%ebp),%eax
 8089617:	2d 24 43 e4 70       	sub    $0x70e44324,%eax
 808961c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 808961f:	c1 4d ec 02          	rorl   $0x2,-0x14(%ebp)
 8089623:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8089626:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8089629:	09 d0                	or     %edx,%eax
 808962b:	23 45 f0             	and    -0x10(%ebp),%eax
 808962e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8089631:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 8089634:	21 ca                	and    %ecx,%edx
 8089636:	89 c3                	mov    %eax,%ebx
 8089638:	09 d3                	or     %edx,%ebx
 808963a:	8b 45 08             	mov    0x8(%ebp),%eax
 808963d:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8089643:	8b 55 08             	mov    0x8(%ebp),%edx
 8089646:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808964c:	8b 4a 10             	mov    0x10(%edx),%ecx
 808964f:	8b 55 08             	mov    0x8(%ebp),%edx
 8089652:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089658:	8b 52 3c             	mov    0x3c(%edx),%edx
 808965b:	31 d1                	xor    %edx,%ecx
 808965d:	8b 55 08             	mov    0x8(%ebp),%edx
 8089660:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089666:	8b 52 24             	mov    0x24(%edx),%edx
 8089669:	31 d1                	xor    %edx,%ecx
 808966b:	8b 55 08             	mov    0x8(%ebp),%edx
 808966e:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089674:	8b 52 1c             	mov    0x1c(%edx),%edx
 8089677:	31 ca                	xor    %ecx,%edx
 8089679:	c1 ca 1f             	ror    $0x1f,%edx
 808967c:	89 50 1c             	mov    %edx,0x1c(%eax)
 808967f:	8b 40 1c             	mov    0x1c(%eax),%eax
 8089682:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 8089685:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8089688:	c1 c8 1b             	ror    $0x1b,%eax
 808968b:	8d 04 02             	lea    (%edx,%eax,1),%eax
 808968e:	03 45 f4             	add    -0xc(%ebp),%eax
 8089691:	2d 24 43 e4 70       	sub    $0x70e44324,%eax
 8089696:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8089699:	c1 4d e8 02          	rorl   $0x2,-0x18(%ebp)
 808969d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80896a0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80896a3:	09 d0                	or     %edx,%eax
 80896a5:	23 45 ec             	and    -0x14(%ebp),%eax
 80896a8:	8b 55 e8             	mov    -0x18(%ebp),%edx
 80896ab:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 80896ae:	21 ca                	and    %ecx,%edx
 80896b0:	89 c3                	mov    %eax,%ebx
 80896b2:	09 d3                	or     %edx,%ebx
 80896b4:	8b 45 08             	mov    0x8(%ebp),%eax
 80896b7:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 80896bd:	8b 55 08             	mov    0x8(%ebp),%edx
 80896c0:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80896c6:	8b 4a 14             	mov    0x14(%edx),%ecx
 80896c9:	8b 55 08             	mov    0x8(%ebp),%edx
 80896cc:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80896d2:	8b 12                	mov    (%edx),%edx
 80896d4:	31 d1                	xor    %edx,%ecx
 80896d6:	8b 55 08             	mov    0x8(%ebp),%edx
 80896d9:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80896df:	8b 52 28             	mov    0x28(%edx),%edx
 80896e2:	31 d1                	xor    %edx,%ecx
 80896e4:	8b 55 08             	mov    0x8(%ebp),%edx
 80896e7:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80896ed:	8b 52 20             	mov    0x20(%edx),%edx
 80896f0:	31 ca                	xor    %ecx,%edx
 80896f2:	c1 ca 1f             	ror    $0x1f,%edx
 80896f5:	89 50 20             	mov    %edx,0x20(%eax)
 80896f8:	8b 40 20             	mov    0x20(%eax),%eax
 80896fb:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80896fe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8089701:	c1 c8 1b             	ror    $0x1b,%eax
 8089704:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089707:	03 45 f0             	add    -0x10(%ebp),%eax
 808970a:	2d 24 43 e4 70       	sub    $0x70e44324,%eax
 808970f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8089712:	c1 4d e4 02          	rorl   $0x2,-0x1c(%ebp)
 8089716:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8089719:	8b 55 f4             	mov    -0xc(%ebp),%edx
 808971c:	09 d0                	or     %edx,%eax
 808971e:	23 45 e8             	and    -0x18(%ebp),%eax
 8089721:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8089724:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8089727:	21 ca                	and    %ecx,%edx
 8089729:	89 c3                	mov    %eax,%ebx
 808972b:	09 d3                	or     %edx,%ebx
 808972d:	8b 45 08             	mov    0x8(%ebp),%eax
 8089730:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8089736:	8b 55 08             	mov    0x8(%ebp),%edx
 8089739:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808973f:	8b 4a 18             	mov    0x18(%edx),%ecx
 8089742:	8b 55 08             	mov    0x8(%ebp),%edx
 8089745:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808974b:	8b 52 04             	mov    0x4(%edx),%edx
 808974e:	31 d1                	xor    %edx,%ecx
 8089750:	8b 55 08             	mov    0x8(%ebp),%edx
 8089753:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089759:	8b 52 2c             	mov    0x2c(%edx),%edx
 808975c:	31 d1                	xor    %edx,%ecx
 808975e:	8b 55 08             	mov    0x8(%ebp),%edx
 8089761:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089767:	8b 52 24             	mov    0x24(%edx),%edx
 808976a:	31 ca                	xor    %ecx,%edx
 808976c:	c1 ca 1f             	ror    $0x1f,%edx
 808976f:	89 50 24             	mov    %edx,0x24(%eax)
 8089772:	8b 40 24             	mov    0x24(%eax),%eax
 8089775:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 8089778:	8b 45 f0             	mov    -0x10(%ebp),%eax
 808977b:	c1 c8 1b             	ror    $0x1b,%eax
 808977e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089781:	03 45 ec             	add    -0x14(%ebp),%eax
 8089784:	2d 24 43 e4 70       	sub    $0x70e44324,%eax
 8089789:	89 45 ec             	mov    %eax,-0x14(%ebp)
 808978c:	c1 4d f4 02          	rorl   $0x2,-0xc(%ebp)
 8089790:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8089793:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8089796:	09 d0                	or     %edx,%eax
 8089798:	23 45 e4             	and    -0x1c(%ebp),%eax
 808979b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 808979e:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 80897a1:	21 ca                	and    %ecx,%edx
 80897a3:	89 c3                	mov    %eax,%ebx
 80897a5:	09 d3                	or     %edx,%ebx
 80897a7:	8b 45 08             	mov    0x8(%ebp),%eax
 80897aa:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 80897b0:	8b 55 08             	mov    0x8(%ebp),%edx
 80897b3:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80897b9:	8b 4a 1c             	mov    0x1c(%edx),%ecx
 80897bc:	8b 55 08             	mov    0x8(%ebp),%edx
 80897bf:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80897c5:	8b 52 08             	mov    0x8(%edx),%edx
 80897c8:	31 d1                	xor    %edx,%ecx
 80897ca:	8b 55 08             	mov    0x8(%ebp),%edx
 80897cd:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80897d3:	8b 52 30             	mov    0x30(%edx),%edx
 80897d6:	31 d1                	xor    %edx,%ecx
 80897d8:	8b 55 08             	mov    0x8(%ebp),%edx
 80897db:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80897e1:	8b 52 28             	mov    0x28(%edx),%edx
 80897e4:	31 ca                	xor    %ecx,%edx
 80897e6:	c1 ca 1f             	ror    $0x1f,%edx
 80897e9:	89 50 28             	mov    %edx,0x28(%eax)
 80897ec:	8b 40 28             	mov    0x28(%eax),%eax
 80897ef:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 80897f2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80897f5:	c1 c8 1b             	ror    $0x1b,%eax
 80897f8:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80897fb:	03 45 e8             	add    -0x18(%ebp),%eax
 80897fe:	2d 24 43 e4 70       	sub    $0x70e44324,%eax
 8089803:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8089806:	c1 4d f0 02          	rorl   $0x2,-0x10(%ebp)
 808980a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 808980d:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8089810:	09 d0                	or     %edx,%eax
 8089812:	23 45 f4             	and    -0xc(%ebp),%eax
 8089815:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8089818:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 808981b:	21 ca                	and    %ecx,%edx
 808981d:	89 c3                	mov    %eax,%ebx
 808981f:	09 d3                	or     %edx,%ebx
 8089821:	8b 45 08             	mov    0x8(%ebp),%eax
 8089824:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 808982a:	8b 55 08             	mov    0x8(%ebp),%edx
 808982d:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089833:	8b 4a 20             	mov    0x20(%edx),%ecx
 8089836:	8b 55 08             	mov    0x8(%ebp),%edx
 8089839:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808983f:	8b 52 0c             	mov    0xc(%edx),%edx
 8089842:	31 d1                	xor    %edx,%ecx
 8089844:	8b 55 08             	mov    0x8(%ebp),%edx
 8089847:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808984d:	8b 52 34             	mov    0x34(%edx),%edx
 8089850:	31 d1                	xor    %edx,%ecx
 8089852:	8b 55 08             	mov    0x8(%ebp),%edx
 8089855:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808985b:	8b 52 2c             	mov    0x2c(%edx),%edx
 808985e:	31 ca                	xor    %ecx,%edx
 8089860:	c1 ca 1f             	ror    $0x1f,%edx
 8089863:	89 50 2c             	mov    %edx,0x2c(%eax)
 8089866:	8b 40 2c             	mov    0x2c(%eax),%eax
 8089869:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 808986c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 808986f:	c1 c8 1b             	ror    $0x1b,%eax
 8089872:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089875:	03 45 e4             	add    -0x1c(%ebp),%eax
 8089878:	2d 24 43 e4 70       	sub    $0x70e44324,%eax
 808987d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8089880:	c1 4d ec 02          	rorl   $0x2,-0x14(%ebp)
 8089884:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8089887:	8b 55 e8             	mov    -0x18(%ebp),%edx
 808988a:	31 d0                	xor    %edx,%eax
 808988c:	89 c1                	mov    %eax,%ecx
 808988e:	33 4d f0             	xor    -0x10(%ebp),%ecx
 8089891:	8b 45 08             	mov    0x8(%ebp),%eax
 8089894:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 808989a:	8b 55 08             	mov    0x8(%ebp),%edx
 808989d:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80898a3:	8b 5a 24             	mov    0x24(%edx),%ebx
 80898a6:	8b 55 08             	mov    0x8(%ebp),%edx
 80898a9:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80898af:	8b 52 10             	mov    0x10(%edx),%edx
 80898b2:	31 d3                	xor    %edx,%ebx
 80898b4:	8b 55 08             	mov    0x8(%ebp),%edx
 80898b7:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80898bd:	8b 52 38             	mov    0x38(%edx),%edx
 80898c0:	31 d3                	xor    %edx,%ebx
 80898c2:	8b 55 08             	mov    0x8(%ebp),%edx
 80898c5:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80898cb:	8b 52 30             	mov    0x30(%edx),%edx
 80898ce:	31 da                	xor    %ebx,%edx
 80898d0:	c1 ca 1f             	ror    $0x1f,%edx
 80898d3:	89 50 30             	mov    %edx,0x30(%eax)
 80898d6:	8b 40 30             	mov    0x30(%eax),%eax
 80898d9:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 80898dc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80898df:	c1 c8 1b             	ror    $0x1b,%eax
 80898e2:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80898e5:	03 45 f4             	add    -0xc(%ebp),%eax
 80898e8:	2d 2a 3e 9d 35       	sub    $0x359d3e2a,%eax
 80898ed:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80898f0:	c1 4d e8 02          	rorl   $0x2,-0x18(%ebp)
 80898f4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80898f7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80898fa:	31 d0                	xor    %edx,%eax
 80898fc:	89 c1                	mov    %eax,%ecx
 80898fe:	33 4d ec             	xor    -0x14(%ebp),%ecx
 8089901:	8b 45 08             	mov    0x8(%ebp),%eax
 8089904:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 808990a:	8b 55 08             	mov    0x8(%ebp),%edx
 808990d:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089913:	8b 5a 28             	mov    0x28(%edx),%ebx
 8089916:	8b 55 08             	mov    0x8(%ebp),%edx
 8089919:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808991f:	8b 52 14             	mov    0x14(%edx),%edx
 8089922:	31 d3                	xor    %edx,%ebx
 8089924:	8b 55 08             	mov    0x8(%ebp),%edx
 8089927:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808992d:	8b 52 3c             	mov    0x3c(%edx),%edx
 8089930:	31 d3                	xor    %edx,%ebx
 8089932:	8b 55 08             	mov    0x8(%ebp),%edx
 8089935:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808993b:	8b 52 34             	mov    0x34(%edx),%edx
 808993e:	31 da                	xor    %ebx,%edx
 8089940:	c1 ca 1f             	ror    $0x1f,%edx
 8089943:	89 50 34             	mov    %edx,0x34(%eax)
 8089946:	8b 40 34             	mov    0x34(%eax),%eax
 8089949:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 808994c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808994f:	c1 c8 1b             	ror    $0x1b,%eax
 8089952:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089955:	03 45 f0             	add    -0x10(%ebp),%eax
 8089958:	2d 2a 3e 9d 35       	sub    $0x359d3e2a,%eax
 808995d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8089960:	c1 4d e4 02          	rorl   $0x2,-0x1c(%ebp)
 8089964:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8089967:	8b 55 f4             	mov    -0xc(%ebp),%edx
 808996a:	31 d0                	xor    %edx,%eax
 808996c:	89 c1                	mov    %eax,%ecx
 808996e:	33 4d e8             	xor    -0x18(%ebp),%ecx
 8089971:	8b 45 08             	mov    0x8(%ebp),%eax
 8089974:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 808997a:	8b 55 08             	mov    0x8(%ebp),%edx
 808997d:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089983:	8b 5a 2c             	mov    0x2c(%edx),%ebx
 8089986:	8b 55 08             	mov    0x8(%ebp),%edx
 8089989:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808998f:	8b 52 18             	mov    0x18(%edx),%edx
 8089992:	31 d3                	xor    %edx,%ebx
 8089994:	8b 55 08             	mov    0x8(%ebp),%edx
 8089997:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808999d:	8b 12                	mov    (%edx),%edx
 808999f:	31 d3                	xor    %edx,%ebx
 80899a1:	8b 55 08             	mov    0x8(%ebp),%edx
 80899a4:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80899aa:	8b 52 38             	mov    0x38(%edx),%edx
 80899ad:	31 da                	xor    %ebx,%edx
 80899af:	c1 ca 1f             	ror    $0x1f,%edx
 80899b2:	89 50 38             	mov    %edx,0x38(%eax)
 80899b5:	8b 40 38             	mov    0x38(%eax),%eax
 80899b8:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 80899bb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80899be:	c1 c8 1b             	ror    $0x1b,%eax
 80899c1:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80899c4:	03 45 ec             	add    -0x14(%ebp),%eax
 80899c7:	2d 2a 3e 9d 35       	sub    $0x359d3e2a,%eax
 80899cc:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80899cf:	c1 4d f4 02          	rorl   $0x2,-0xc(%ebp)
 80899d3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80899d6:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80899d9:	31 d0                	xor    %edx,%eax
 80899db:	89 c1                	mov    %eax,%ecx
 80899dd:	33 4d e4             	xor    -0x1c(%ebp),%ecx
 80899e0:	8b 45 08             	mov    0x8(%ebp),%eax
 80899e3:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 80899e9:	8b 55 08             	mov    0x8(%ebp),%edx
 80899ec:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80899f2:	8b 5a 30             	mov    0x30(%edx),%ebx
 80899f5:	8b 55 08             	mov    0x8(%ebp),%edx
 80899f8:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 80899fe:	8b 52 1c             	mov    0x1c(%edx),%edx
 8089a01:	31 d3                	xor    %edx,%ebx
 8089a03:	8b 55 08             	mov    0x8(%ebp),%edx
 8089a06:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089a0c:	8b 52 04             	mov    0x4(%edx),%edx
 8089a0f:	31 d3                	xor    %edx,%ebx
 8089a11:	8b 55 08             	mov    0x8(%ebp),%edx
 8089a14:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089a1a:	8b 52 3c             	mov    0x3c(%edx),%edx
 8089a1d:	31 da                	xor    %ebx,%edx
 8089a1f:	c1 ca 1f             	ror    $0x1f,%edx
 8089a22:	89 50 3c             	mov    %edx,0x3c(%eax)
 8089a25:	8b 40 3c             	mov    0x3c(%eax),%eax
 8089a28:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8089a2b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8089a2e:	c1 c8 1b             	ror    $0x1b,%eax
 8089a31:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089a34:	03 45 e8             	add    -0x18(%ebp),%eax
 8089a37:	2d 2a 3e 9d 35       	sub    $0x359d3e2a,%eax
 8089a3c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8089a3f:	c1 4d f0 02          	rorl   $0x2,-0x10(%ebp)
 8089a43:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8089a46:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8089a49:	31 d0                	xor    %edx,%eax
 8089a4b:	89 c1                	mov    %eax,%ecx
 8089a4d:	33 4d f4             	xor    -0xc(%ebp),%ecx
 8089a50:	8b 45 08             	mov    0x8(%ebp),%eax
 8089a53:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8089a59:	8b 55 08             	mov    0x8(%ebp),%edx
 8089a5c:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089a62:	8b 5a 34             	mov    0x34(%edx),%ebx
 8089a65:	8b 55 08             	mov    0x8(%ebp),%edx
 8089a68:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089a6e:	8b 52 20             	mov    0x20(%edx),%edx
 8089a71:	31 d3                	xor    %edx,%ebx
 8089a73:	8b 55 08             	mov    0x8(%ebp),%edx
 8089a76:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089a7c:	8b 52 08             	mov    0x8(%edx),%edx
 8089a7f:	31 d3                	xor    %edx,%ebx
 8089a81:	8b 55 08             	mov    0x8(%ebp),%edx
 8089a84:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089a8a:	8b 12                	mov    (%edx),%edx
 8089a8c:	31 da                	xor    %ebx,%edx
 8089a8e:	c1 ca 1f             	ror    $0x1f,%edx
 8089a91:	89 10                	mov    %edx,(%eax)
 8089a93:	8b 00                	mov    (%eax),%eax
 8089a95:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8089a98:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8089a9b:	c1 c8 1b             	ror    $0x1b,%eax
 8089a9e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089aa1:	03 45 e4             	add    -0x1c(%ebp),%eax
 8089aa4:	2d 2a 3e 9d 35       	sub    $0x359d3e2a,%eax
 8089aa9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8089aac:	c1 4d ec 02          	rorl   $0x2,-0x14(%ebp)
 8089ab0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8089ab3:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8089ab6:	31 d0                	xor    %edx,%eax
 8089ab8:	89 c1                	mov    %eax,%ecx
 8089aba:	33 4d f0             	xor    -0x10(%ebp),%ecx
 8089abd:	8b 45 08             	mov    0x8(%ebp),%eax
 8089ac0:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8089ac6:	8b 55 08             	mov    0x8(%ebp),%edx
 8089ac9:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089acf:	8b 5a 38             	mov    0x38(%edx),%ebx
 8089ad2:	8b 55 08             	mov    0x8(%ebp),%edx
 8089ad5:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089adb:	8b 52 24             	mov    0x24(%edx),%edx
 8089ade:	31 d3                	xor    %edx,%ebx
 8089ae0:	8b 55 08             	mov    0x8(%ebp),%edx
 8089ae3:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089ae9:	8b 52 0c             	mov    0xc(%edx),%edx
 8089aec:	31 d3                	xor    %edx,%ebx
 8089aee:	8b 55 08             	mov    0x8(%ebp),%edx
 8089af1:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089af7:	8b 52 04             	mov    0x4(%edx),%edx
 8089afa:	31 da                	xor    %ebx,%edx
 8089afc:	c1 ca 1f             	ror    $0x1f,%edx
 8089aff:	89 50 04             	mov    %edx,0x4(%eax)
 8089b02:	8b 40 04             	mov    0x4(%eax),%eax
 8089b05:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8089b08:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8089b0b:	c1 c8 1b             	ror    $0x1b,%eax
 8089b0e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089b11:	03 45 f4             	add    -0xc(%ebp),%eax
 8089b14:	2d 2a 3e 9d 35       	sub    $0x359d3e2a,%eax
 8089b19:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8089b1c:	c1 4d e8 02          	rorl   $0x2,-0x18(%ebp)
 8089b20:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8089b23:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8089b26:	31 d0                	xor    %edx,%eax
 8089b28:	89 c1                	mov    %eax,%ecx
 8089b2a:	33 4d ec             	xor    -0x14(%ebp),%ecx
 8089b2d:	8b 45 08             	mov    0x8(%ebp),%eax
 8089b30:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8089b36:	8b 55 08             	mov    0x8(%ebp),%edx
 8089b39:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089b3f:	8b 5a 3c             	mov    0x3c(%edx),%ebx
 8089b42:	8b 55 08             	mov    0x8(%ebp),%edx
 8089b45:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089b4b:	8b 52 28             	mov    0x28(%edx),%edx
 8089b4e:	31 d3                	xor    %edx,%ebx
 8089b50:	8b 55 08             	mov    0x8(%ebp),%edx
 8089b53:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089b59:	8b 52 10             	mov    0x10(%edx),%edx
 8089b5c:	31 d3                	xor    %edx,%ebx
 8089b5e:	8b 55 08             	mov    0x8(%ebp),%edx
 8089b61:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089b67:	8b 52 08             	mov    0x8(%edx),%edx
 8089b6a:	31 da                	xor    %ebx,%edx
 8089b6c:	c1 ca 1f             	ror    $0x1f,%edx
 8089b6f:	89 50 08             	mov    %edx,0x8(%eax)
 8089b72:	8b 40 08             	mov    0x8(%eax),%eax
 8089b75:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8089b78:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8089b7b:	c1 c8 1b             	ror    $0x1b,%eax
 8089b7e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089b81:	03 45 f0             	add    -0x10(%ebp),%eax
 8089b84:	2d 2a 3e 9d 35       	sub    $0x359d3e2a,%eax
 8089b89:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8089b8c:	c1 4d e4 02          	rorl   $0x2,-0x1c(%ebp)
 8089b90:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8089b93:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8089b96:	31 d0                	xor    %edx,%eax
 8089b98:	89 c1                	mov    %eax,%ecx
 8089b9a:	33 4d e8             	xor    -0x18(%ebp),%ecx
 8089b9d:	8b 45 08             	mov    0x8(%ebp),%eax
 8089ba0:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8089ba6:	8b 55 08             	mov    0x8(%ebp),%edx
 8089ba9:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089baf:	8b 1a                	mov    (%edx),%ebx
 8089bb1:	8b 55 08             	mov    0x8(%ebp),%edx
 8089bb4:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089bba:	8b 52 2c             	mov    0x2c(%edx),%edx
 8089bbd:	31 d3                	xor    %edx,%ebx
 8089bbf:	8b 55 08             	mov    0x8(%ebp),%edx
 8089bc2:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089bc8:	8b 52 14             	mov    0x14(%edx),%edx
 8089bcb:	31 d3                	xor    %edx,%ebx
 8089bcd:	8b 55 08             	mov    0x8(%ebp),%edx
 8089bd0:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089bd6:	8b 52 0c             	mov    0xc(%edx),%edx
 8089bd9:	31 da                	xor    %ebx,%edx
 8089bdb:	c1 ca 1f             	ror    $0x1f,%edx
 8089bde:	89 50 0c             	mov    %edx,0xc(%eax)
 8089be1:	8b 40 0c             	mov    0xc(%eax),%eax
 8089be4:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8089be7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8089bea:	c1 c8 1b             	ror    $0x1b,%eax
 8089bed:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089bf0:	03 45 ec             	add    -0x14(%ebp),%eax
 8089bf3:	2d 2a 3e 9d 35       	sub    $0x359d3e2a,%eax
 8089bf8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8089bfb:	c1 4d f4 02          	rorl   $0x2,-0xc(%ebp)
 8089bff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8089c02:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8089c05:	31 d0                	xor    %edx,%eax
 8089c07:	89 c1                	mov    %eax,%ecx
 8089c09:	33 4d e4             	xor    -0x1c(%ebp),%ecx
 8089c0c:	8b 45 08             	mov    0x8(%ebp),%eax
 8089c0f:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8089c15:	8b 55 08             	mov    0x8(%ebp),%edx
 8089c18:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089c1e:	8b 5a 04             	mov    0x4(%edx),%ebx
 8089c21:	8b 55 08             	mov    0x8(%ebp),%edx
 8089c24:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089c2a:	8b 52 30             	mov    0x30(%edx),%edx
 8089c2d:	31 d3                	xor    %edx,%ebx
 8089c2f:	8b 55 08             	mov    0x8(%ebp),%edx
 8089c32:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089c38:	8b 52 18             	mov    0x18(%edx),%edx
 8089c3b:	31 d3                	xor    %edx,%ebx
 8089c3d:	8b 55 08             	mov    0x8(%ebp),%edx
 8089c40:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089c46:	8b 52 10             	mov    0x10(%edx),%edx
 8089c49:	31 da                	xor    %ebx,%edx
 8089c4b:	c1 ca 1f             	ror    $0x1f,%edx
 8089c4e:	89 50 10             	mov    %edx,0x10(%eax)
 8089c51:	8b 40 10             	mov    0x10(%eax),%eax
 8089c54:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8089c57:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8089c5a:	c1 c8 1b             	ror    $0x1b,%eax
 8089c5d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089c60:	03 45 e8             	add    -0x18(%ebp),%eax
 8089c63:	2d 2a 3e 9d 35       	sub    $0x359d3e2a,%eax
 8089c68:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8089c6b:	c1 4d f0 02          	rorl   $0x2,-0x10(%ebp)
 8089c6f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8089c72:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8089c75:	31 d0                	xor    %edx,%eax
 8089c77:	89 c1                	mov    %eax,%ecx
 8089c79:	33 4d f4             	xor    -0xc(%ebp),%ecx
 8089c7c:	8b 45 08             	mov    0x8(%ebp),%eax
 8089c7f:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8089c85:	8b 55 08             	mov    0x8(%ebp),%edx
 8089c88:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089c8e:	8b 5a 08             	mov    0x8(%edx),%ebx
 8089c91:	8b 55 08             	mov    0x8(%ebp),%edx
 8089c94:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089c9a:	8b 52 34             	mov    0x34(%edx),%edx
 8089c9d:	31 d3                	xor    %edx,%ebx
 8089c9f:	8b 55 08             	mov    0x8(%ebp),%edx
 8089ca2:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089ca8:	8b 52 1c             	mov    0x1c(%edx),%edx
 8089cab:	31 d3                	xor    %edx,%ebx
 8089cad:	8b 55 08             	mov    0x8(%ebp),%edx
 8089cb0:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089cb6:	8b 52 14             	mov    0x14(%edx),%edx
 8089cb9:	31 da                	xor    %ebx,%edx
 8089cbb:	c1 ca 1f             	ror    $0x1f,%edx
 8089cbe:	89 50 14             	mov    %edx,0x14(%eax)
 8089cc1:	8b 40 14             	mov    0x14(%eax),%eax
 8089cc4:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8089cc7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8089cca:	c1 c8 1b             	ror    $0x1b,%eax
 8089ccd:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089cd0:	03 45 e4             	add    -0x1c(%ebp),%eax
 8089cd3:	2d 2a 3e 9d 35       	sub    $0x359d3e2a,%eax
 8089cd8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8089cdb:	c1 4d ec 02          	rorl   $0x2,-0x14(%ebp)
 8089cdf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8089ce2:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8089ce5:	31 d0                	xor    %edx,%eax
 8089ce7:	89 c1                	mov    %eax,%ecx
 8089ce9:	33 4d f0             	xor    -0x10(%ebp),%ecx
 8089cec:	8b 45 08             	mov    0x8(%ebp),%eax
 8089cef:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8089cf5:	8b 55 08             	mov    0x8(%ebp),%edx
 8089cf8:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089cfe:	8b 5a 0c             	mov    0xc(%edx),%ebx
 8089d01:	8b 55 08             	mov    0x8(%ebp),%edx
 8089d04:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089d0a:	8b 52 38             	mov    0x38(%edx),%edx
 8089d0d:	31 d3                	xor    %edx,%ebx
 8089d0f:	8b 55 08             	mov    0x8(%ebp),%edx
 8089d12:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089d18:	8b 52 20             	mov    0x20(%edx),%edx
 8089d1b:	31 d3                	xor    %edx,%ebx
 8089d1d:	8b 55 08             	mov    0x8(%ebp),%edx
 8089d20:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089d26:	8b 52 18             	mov    0x18(%edx),%edx
 8089d29:	31 da                	xor    %ebx,%edx
 8089d2b:	c1 ca 1f             	ror    $0x1f,%edx
 8089d2e:	89 50 18             	mov    %edx,0x18(%eax)
 8089d31:	8b 40 18             	mov    0x18(%eax),%eax
 8089d34:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8089d37:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8089d3a:	c1 c8 1b             	ror    $0x1b,%eax
 8089d3d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089d40:	03 45 f4             	add    -0xc(%ebp),%eax
 8089d43:	2d 2a 3e 9d 35       	sub    $0x359d3e2a,%eax
 8089d48:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8089d4b:	c1 4d e8 02          	rorl   $0x2,-0x18(%ebp)
 8089d4f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8089d52:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8089d55:	31 d0                	xor    %edx,%eax
 8089d57:	89 c1                	mov    %eax,%ecx
 8089d59:	33 4d ec             	xor    -0x14(%ebp),%ecx
 8089d5c:	8b 45 08             	mov    0x8(%ebp),%eax
 8089d5f:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8089d65:	8b 55 08             	mov    0x8(%ebp),%edx
 8089d68:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089d6e:	8b 5a 10             	mov    0x10(%edx),%ebx
 8089d71:	8b 55 08             	mov    0x8(%ebp),%edx
 8089d74:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089d7a:	8b 52 3c             	mov    0x3c(%edx),%edx
 8089d7d:	31 d3                	xor    %edx,%ebx
 8089d7f:	8b 55 08             	mov    0x8(%ebp),%edx
 8089d82:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089d88:	8b 52 24             	mov    0x24(%edx),%edx
 8089d8b:	31 d3                	xor    %edx,%ebx
 8089d8d:	8b 55 08             	mov    0x8(%ebp),%edx
 8089d90:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089d96:	8b 52 1c             	mov    0x1c(%edx),%edx
 8089d99:	31 da                	xor    %ebx,%edx
 8089d9b:	c1 ca 1f             	ror    $0x1f,%edx
 8089d9e:	89 50 1c             	mov    %edx,0x1c(%eax)
 8089da1:	8b 40 1c             	mov    0x1c(%eax),%eax
 8089da4:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8089da7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8089daa:	c1 c8 1b             	ror    $0x1b,%eax
 8089dad:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089db0:	03 45 f0             	add    -0x10(%ebp),%eax
 8089db3:	2d 2a 3e 9d 35       	sub    $0x359d3e2a,%eax
 8089db8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8089dbb:	c1 4d e4 02          	rorl   $0x2,-0x1c(%ebp)
 8089dbf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8089dc2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8089dc5:	31 d0                	xor    %edx,%eax
 8089dc7:	89 c1                	mov    %eax,%ecx
 8089dc9:	33 4d e8             	xor    -0x18(%ebp),%ecx
 8089dcc:	8b 45 08             	mov    0x8(%ebp),%eax
 8089dcf:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8089dd5:	8b 55 08             	mov    0x8(%ebp),%edx
 8089dd8:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089dde:	8b 5a 14             	mov    0x14(%edx),%ebx
 8089de1:	8b 55 08             	mov    0x8(%ebp),%edx
 8089de4:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089dea:	8b 12                	mov    (%edx),%edx
 8089dec:	31 d3                	xor    %edx,%ebx
 8089dee:	8b 55 08             	mov    0x8(%ebp),%edx
 8089df1:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089df7:	8b 52 28             	mov    0x28(%edx),%edx
 8089dfa:	31 d3                	xor    %edx,%ebx
 8089dfc:	8b 55 08             	mov    0x8(%ebp),%edx
 8089dff:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089e05:	8b 52 20             	mov    0x20(%edx),%edx
 8089e08:	31 da                	xor    %ebx,%edx
 8089e0a:	c1 ca 1f             	ror    $0x1f,%edx
 8089e0d:	89 50 20             	mov    %edx,0x20(%eax)
 8089e10:	8b 40 20             	mov    0x20(%eax),%eax
 8089e13:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8089e16:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8089e19:	c1 c8 1b             	ror    $0x1b,%eax
 8089e1c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089e1f:	03 45 ec             	add    -0x14(%ebp),%eax
 8089e22:	2d 2a 3e 9d 35       	sub    $0x359d3e2a,%eax
 8089e27:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8089e2a:	c1 4d f4 02          	rorl   $0x2,-0xc(%ebp)
 8089e2e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8089e31:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8089e34:	31 d0                	xor    %edx,%eax
 8089e36:	89 c1                	mov    %eax,%ecx
 8089e38:	33 4d e4             	xor    -0x1c(%ebp),%ecx
 8089e3b:	8b 45 08             	mov    0x8(%ebp),%eax
 8089e3e:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8089e44:	8b 55 08             	mov    0x8(%ebp),%edx
 8089e47:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089e4d:	8b 5a 18             	mov    0x18(%edx),%ebx
 8089e50:	8b 55 08             	mov    0x8(%ebp),%edx
 8089e53:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089e59:	8b 52 04             	mov    0x4(%edx),%edx
 8089e5c:	31 d3                	xor    %edx,%ebx
 8089e5e:	8b 55 08             	mov    0x8(%ebp),%edx
 8089e61:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089e67:	8b 52 2c             	mov    0x2c(%edx),%edx
 8089e6a:	31 d3                	xor    %edx,%ebx
 8089e6c:	8b 55 08             	mov    0x8(%ebp),%edx
 8089e6f:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089e75:	8b 52 24             	mov    0x24(%edx),%edx
 8089e78:	31 da                	xor    %ebx,%edx
 8089e7a:	c1 ca 1f             	ror    $0x1f,%edx
 8089e7d:	89 50 24             	mov    %edx,0x24(%eax)
 8089e80:	8b 40 24             	mov    0x24(%eax),%eax
 8089e83:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8089e86:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8089e89:	c1 c8 1b             	ror    $0x1b,%eax
 8089e8c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089e8f:	03 45 e8             	add    -0x18(%ebp),%eax
 8089e92:	2d 2a 3e 9d 35       	sub    $0x359d3e2a,%eax
 8089e97:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8089e9a:	c1 4d f0 02          	rorl   $0x2,-0x10(%ebp)
 8089e9e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8089ea1:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8089ea4:	31 d0                	xor    %edx,%eax
 8089ea6:	89 c1                	mov    %eax,%ecx
 8089ea8:	33 4d f4             	xor    -0xc(%ebp),%ecx
 8089eab:	8b 45 08             	mov    0x8(%ebp),%eax
 8089eae:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8089eb4:	8b 55 08             	mov    0x8(%ebp),%edx
 8089eb7:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089ebd:	8b 5a 1c             	mov    0x1c(%edx),%ebx
 8089ec0:	8b 55 08             	mov    0x8(%ebp),%edx
 8089ec3:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089ec9:	8b 52 08             	mov    0x8(%edx),%edx
 8089ecc:	31 d3                	xor    %edx,%ebx
 8089ece:	8b 55 08             	mov    0x8(%ebp),%edx
 8089ed1:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089ed7:	8b 52 30             	mov    0x30(%edx),%edx
 8089eda:	31 d3                	xor    %edx,%ebx
 8089edc:	8b 55 08             	mov    0x8(%ebp),%edx
 8089edf:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089ee5:	8b 52 28             	mov    0x28(%edx),%edx
 8089ee8:	31 da                	xor    %ebx,%edx
 8089eea:	c1 ca 1f             	ror    $0x1f,%edx
 8089eed:	89 50 28             	mov    %edx,0x28(%eax)
 8089ef0:	8b 40 28             	mov    0x28(%eax),%eax
 8089ef3:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8089ef6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8089ef9:	c1 c8 1b             	ror    $0x1b,%eax
 8089efc:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089eff:	03 45 e4             	add    -0x1c(%ebp),%eax
 8089f02:	2d 2a 3e 9d 35       	sub    $0x359d3e2a,%eax
 8089f07:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8089f0a:	c1 4d ec 02          	rorl   $0x2,-0x14(%ebp)
 8089f0e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8089f11:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8089f14:	31 d0                	xor    %edx,%eax
 8089f16:	89 c1                	mov    %eax,%ecx
 8089f18:	33 4d f0             	xor    -0x10(%ebp),%ecx
 8089f1b:	8b 45 08             	mov    0x8(%ebp),%eax
 8089f1e:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8089f24:	8b 55 08             	mov    0x8(%ebp),%edx
 8089f27:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089f2d:	8b 5a 20             	mov    0x20(%edx),%ebx
 8089f30:	8b 55 08             	mov    0x8(%ebp),%edx
 8089f33:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089f39:	8b 52 0c             	mov    0xc(%edx),%edx
 8089f3c:	31 d3                	xor    %edx,%ebx
 8089f3e:	8b 55 08             	mov    0x8(%ebp),%edx
 8089f41:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089f47:	8b 52 34             	mov    0x34(%edx),%edx
 8089f4a:	31 d3                	xor    %edx,%ebx
 8089f4c:	8b 55 08             	mov    0x8(%ebp),%edx
 8089f4f:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089f55:	8b 52 2c             	mov    0x2c(%edx),%edx
 8089f58:	31 da                	xor    %ebx,%edx
 8089f5a:	c1 ca 1f             	ror    $0x1f,%edx
 8089f5d:	89 50 2c             	mov    %edx,0x2c(%eax)
 8089f60:	8b 40 2c             	mov    0x2c(%eax),%eax
 8089f63:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8089f66:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8089f69:	c1 c8 1b             	ror    $0x1b,%eax
 8089f6c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089f6f:	03 45 f4             	add    -0xc(%ebp),%eax
 8089f72:	2d 2a 3e 9d 35       	sub    $0x359d3e2a,%eax
 8089f77:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8089f7a:	c1 4d e8 02          	rorl   $0x2,-0x18(%ebp)
 8089f7e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8089f81:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8089f84:	31 d0                	xor    %edx,%eax
 8089f86:	89 c1                	mov    %eax,%ecx
 8089f88:	33 4d ec             	xor    -0x14(%ebp),%ecx
 8089f8b:	8b 45 08             	mov    0x8(%ebp),%eax
 8089f8e:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8089f94:	8b 55 08             	mov    0x8(%ebp),%edx
 8089f97:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089f9d:	8b 5a 24             	mov    0x24(%edx),%ebx
 8089fa0:	8b 55 08             	mov    0x8(%ebp),%edx
 8089fa3:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089fa9:	8b 52 10             	mov    0x10(%edx),%edx
 8089fac:	31 d3                	xor    %edx,%ebx
 8089fae:	8b 55 08             	mov    0x8(%ebp),%edx
 8089fb1:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089fb7:	8b 52 38             	mov    0x38(%edx),%edx
 8089fba:	31 d3                	xor    %edx,%ebx
 8089fbc:	8b 55 08             	mov    0x8(%ebp),%edx
 8089fbf:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 8089fc5:	8b 52 30             	mov    0x30(%edx),%edx
 8089fc8:	31 da                	xor    %ebx,%edx
 8089fca:	c1 ca 1f             	ror    $0x1f,%edx
 8089fcd:	89 50 30             	mov    %edx,0x30(%eax)
 8089fd0:	8b 40 30             	mov    0x30(%eax),%eax
 8089fd3:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8089fd6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8089fd9:	c1 c8 1b             	ror    $0x1b,%eax
 8089fdc:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8089fdf:	03 45 f0             	add    -0x10(%ebp),%eax
 8089fe2:	2d 2a 3e 9d 35       	sub    $0x359d3e2a,%eax
 8089fe7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8089fea:	c1 4d e4 02          	rorl   $0x2,-0x1c(%ebp)
 8089fee:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8089ff1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8089ff4:	31 d0                	xor    %edx,%eax
 8089ff6:	89 c1                	mov    %eax,%ecx
 8089ff8:	33 4d e8             	xor    -0x18(%ebp),%ecx
 8089ffb:	8b 45 08             	mov    0x8(%ebp),%eax
 8089ffe:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 808a004:	8b 55 08             	mov    0x8(%ebp),%edx
 808a007:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808a00d:	8b 5a 28             	mov    0x28(%edx),%ebx
 808a010:	8b 55 08             	mov    0x8(%ebp),%edx
 808a013:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808a019:	8b 52 14             	mov    0x14(%edx),%edx
 808a01c:	31 d3                	xor    %edx,%ebx
 808a01e:	8b 55 08             	mov    0x8(%ebp),%edx
 808a021:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808a027:	8b 52 3c             	mov    0x3c(%edx),%edx
 808a02a:	31 d3                	xor    %edx,%ebx
 808a02c:	8b 55 08             	mov    0x8(%ebp),%edx
 808a02f:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808a035:	8b 52 34             	mov    0x34(%edx),%edx
 808a038:	31 da                	xor    %ebx,%edx
 808a03a:	c1 ca 1f             	ror    $0x1f,%edx
 808a03d:	89 50 34             	mov    %edx,0x34(%eax)
 808a040:	8b 40 34             	mov    0x34(%eax),%eax
 808a043:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 808a046:	8b 45 f0             	mov    -0x10(%ebp),%eax
 808a049:	c1 c8 1b             	ror    $0x1b,%eax
 808a04c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 808a04f:	03 45 ec             	add    -0x14(%ebp),%eax
 808a052:	2d 2a 3e 9d 35       	sub    $0x359d3e2a,%eax
 808a057:	89 45 ec             	mov    %eax,-0x14(%ebp)
 808a05a:	c1 4d f4 02          	rorl   $0x2,-0xc(%ebp)
 808a05e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808a061:	8b 55 f0             	mov    -0x10(%ebp),%edx
 808a064:	31 d0                	xor    %edx,%eax
 808a066:	89 c1                	mov    %eax,%ecx
 808a068:	33 4d e4             	xor    -0x1c(%ebp),%ecx
 808a06b:	8b 45 08             	mov    0x8(%ebp),%eax
 808a06e:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 808a074:	8b 55 08             	mov    0x8(%ebp),%edx
 808a077:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808a07d:	8b 5a 2c             	mov    0x2c(%edx),%ebx
 808a080:	8b 55 08             	mov    0x8(%ebp),%edx
 808a083:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808a089:	8b 52 18             	mov    0x18(%edx),%edx
 808a08c:	31 d3                	xor    %edx,%ebx
 808a08e:	8b 55 08             	mov    0x8(%ebp),%edx
 808a091:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808a097:	8b 12                	mov    (%edx),%edx
 808a099:	31 d3                	xor    %edx,%ebx
 808a09b:	8b 55 08             	mov    0x8(%ebp),%edx
 808a09e:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808a0a4:	8b 52 38             	mov    0x38(%edx),%edx
 808a0a7:	31 da                	xor    %ebx,%edx
 808a0a9:	c1 ca 1f             	ror    $0x1f,%edx
 808a0ac:	89 50 38             	mov    %edx,0x38(%eax)
 808a0af:	8b 40 38             	mov    0x38(%eax),%eax
 808a0b2:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 808a0b5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 808a0b8:	c1 c8 1b             	ror    $0x1b,%eax
 808a0bb:	8d 04 02             	lea    (%edx,%eax,1),%eax
 808a0be:	03 45 e8             	add    -0x18(%ebp),%eax
 808a0c1:	2d 2a 3e 9d 35       	sub    $0x359d3e2a,%eax
 808a0c6:	89 45 e8             	mov    %eax,-0x18(%ebp)
 808a0c9:	c1 4d f0 02          	rorl   $0x2,-0x10(%ebp)
 808a0cd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 808a0d0:	8b 55 ec             	mov    -0x14(%ebp),%edx
 808a0d3:	31 d0                	xor    %edx,%eax
 808a0d5:	89 c1                	mov    %eax,%ecx
 808a0d7:	33 4d f4             	xor    -0xc(%ebp),%ecx
 808a0da:	8b 45 08             	mov    0x8(%ebp),%eax
 808a0dd:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 808a0e3:	8b 55 08             	mov    0x8(%ebp),%edx
 808a0e6:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808a0ec:	8b 5a 30             	mov    0x30(%edx),%ebx
 808a0ef:	8b 55 08             	mov    0x8(%ebp),%edx
 808a0f2:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808a0f8:	8b 52 1c             	mov    0x1c(%edx),%edx
 808a0fb:	31 d3                	xor    %edx,%ebx
 808a0fd:	8b 55 08             	mov    0x8(%ebp),%edx
 808a100:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808a106:	8b 52 04             	mov    0x4(%edx),%edx
 808a109:	31 d3                	xor    %edx,%ebx
 808a10b:	8b 55 08             	mov    0x8(%ebp),%edx
 808a10e:	8b 92 c0 00 00 00    	mov    0xc0(%edx),%edx
 808a114:	8b 52 3c             	mov    0x3c(%edx),%edx
 808a117:	31 da                	xor    %ebx,%edx
 808a119:	c1 ca 1f             	ror    $0x1f,%edx
 808a11c:	89 50 3c             	mov    %edx,0x3c(%eax)
 808a11f:	8b 40 3c             	mov    0x3c(%eax),%eax
 808a122:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 808a125:	8b 45 e8             	mov    -0x18(%ebp),%eax
 808a128:	c1 c8 1b             	ror    $0x1b,%eax
 808a12b:	8d 04 02             	lea    (%edx,%eax,1),%eax
 808a12e:	03 45 e4             	add    -0x1c(%ebp),%eax
 808a131:	2d 2a 3e 9d 35       	sub    $0x359d3e2a,%eax
 808a136:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 808a139:	c1 4d ec 02          	rorl   $0x2,-0x14(%ebp)
 808a13d:	8b 45 0c             	mov    0xc(%ebp),%eax
 808a140:	8b 00                	mov    (%eax),%eax
 808a142:	89 c2                	mov    %eax,%edx
 808a144:	03 55 e4             	add    -0x1c(%ebp),%edx
 808a147:	8b 45 0c             	mov    0xc(%ebp),%eax
 808a14a:	89 10                	mov    %edx,(%eax)
 808a14c:	8b 45 0c             	mov    0xc(%ebp),%eax
 808a14f:	8d 50 04             	lea    0x4(%eax),%edx
 808a152:	8b 45 0c             	mov    0xc(%ebp),%eax
 808a155:	83 c0 04             	add    $0x4,%eax
 808a158:	8b 00                	mov    (%eax),%eax
 808a15a:	03 45 e8             	add    -0x18(%ebp),%eax
 808a15d:	89 02                	mov    %eax,(%edx)
 808a15f:	8b 45 0c             	mov    0xc(%ebp),%eax
 808a162:	8d 50 08             	lea    0x8(%eax),%edx
 808a165:	8b 45 0c             	mov    0xc(%ebp),%eax
 808a168:	83 c0 08             	add    $0x8,%eax
 808a16b:	8b 00                	mov    (%eax),%eax
 808a16d:	03 45 ec             	add    -0x14(%ebp),%eax
 808a170:	89 02                	mov    %eax,(%edx)
 808a172:	8b 45 0c             	mov    0xc(%ebp),%eax
 808a175:	8d 50 0c             	lea    0xc(%eax),%edx
 808a178:	8b 45 0c             	mov    0xc(%ebp),%eax
 808a17b:	83 c0 0c             	add    $0xc,%eax
 808a17e:	8b 00                	mov    (%eax),%eax
 808a180:	03 45 f0             	add    -0x10(%ebp),%eax
 808a183:	89 02                	mov    %eax,(%edx)
 808a185:	8b 45 0c             	mov    0xc(%ebp),%eax
 808a188:	8d 50 10             	lea    0x10(%eax),%edx
 808a18b:	8b 45 0c             	mov    0xc(%ebp),%eax
 808a18e:	83 c0 10             	add    $0x10,%eax
 808a191:	8b 00                	mov    (%eax),%eax
 808a193:	03 45 f4             	add    -0xc(%ebp),%eax
 808a196:	89 02                	mov    %eax,(%edx)
 808a198:	83 c4 34             	add    $0x34,%esp
 808a19b:	5b                   	pop    %ebx
 808a19c:	5d                   	pop    %ebp
 808a19d:	c3                   	ret

```

```c
// CSHA1::Transform @ 0x8087daa

/* CSHA1::Transform(unsigned int*, unsigned char const*) */

void __thiscall CSHA1::Transform(CSHA1 *this,uint *param_1,uchar *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar7 = param_1[3];
  uVar6 = param_1[4];
  memcpy(*(void **)(this + 0xc0),param_2,0x40);
  puVar4 = *(uint **)(this + 0xc0);
  *puVar4 = **(uint **)(this + 0xc0) >> 0x18 | (**(uint **)(this + 0xc0) & 0xff00) << 8 |
            **(uint **)(this + 0xc0) >> 8 & 0xff00ff00 | **(uint **)(this + 0xc0) << 0x18;
  uVar6 = ((uVar7 ^ uVar3) & uVar2 ^ uVar7) + *puVar4 + (uVar1 >> 0x1b | uVar1 << 5) + uVar6 +
          0x5a827999;
  uVar2 = uVar2 >> 2 | uVar2 << 0x1e;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 4) =
       *(uint *)(*(int *)(this + 0xc0) + 4) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 4) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 4) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 4) << 0x18;
  uVar7 = ((uVar3 ^ uVar2) & uVar1 ^ uVar3) + *(int *)(iVar5 + 4) + (uVar6 >> 0x1b | uVar6 * 0x20) +
          uVar7 + 0x5a827999;
  uVar1 = uVar1 >> 2 | uVar1 << 0x1e;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 8) =
       *(uint *)(*(int *)(this + 0xc0) + 8) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 8) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 8) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 8) << 0x18;
  uVar8 = ((uVar2 ^ uVar1) & uVar6 ^ uVar2) + *(int *)(iVar5 + 8) + (uVar7 >> 0x1b | uVar7 * 0x20) +
          uVar3 + 0x5a827999;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0xc) =
       *(uint *)(*(int *)(this + 0xc0) + 0xc) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0xc) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0xc) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0xc) << 0x18;
  uVar6 = ((uVar1 ^ uVar3) & uVar7 ^ uVar1) + *(int *)(iVar5 + 0xc) + (uVar8 >> 0x1b | uVar8 * 0x20)
          + uVar2 + 0x5a827999;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x10) =
       *(uint *)(*(int *)(this + 0xc0) + 0x10) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x10) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x10) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x10) << 0x18;
  uVar7 = ((uVar3 ^ uVar2) & uVar8 ^ uVar3) + *(int *)(iVar5 + 0x10) +
          (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1 + 0x5a827999;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x14) =
       *(uint *)(*(int *)(this + 0xc0) + 0x14) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x14) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x14) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x14) << 0x18;
  uVar8 = ((uVar2 ^ uVar1) & uVar6 ^ uVar2) + *(int *)(iVar5 + 0x14) +
          (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3 + 0x5a827999;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x18) =
       *(uint *)(*(int *)(this + 0xc0) + 0x18) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x18) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x18) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x18) << 0x18;
  uVar6 = ((uVar1 ^ uVar3) & uVar7 ^ uVar1) + *(int *)(iVar5 + 0x18) +
          (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2 + 0x5a827999;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x1c) =
       *(uint *)(*(int *)(this + 0xc0) + 0x1c) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x1c) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x1c) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x1c) << 0x18;
  uVar7 = ((uVar3 ^ uVar2) & uVar8 ^ uVar3) + *(int *)(iVar5 + 0x1c) +
          (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1 + 0x5a827999;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x20) =
       *(uint *)(*(int *)(this + 0xc0) + 0x20) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x20) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x20) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x20) << 0x18;
  uVar8 = ((uVar2 ^ uVar1) & uVar6 ^ uVar2) + *(int *)(iVar5 + 0x20) +
          (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3 + 0x5a827999;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x24) =
       *(uint *)(*(int *)(this + 0xc0) + 0x24) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x24) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x24) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x24) << 0x18;
  uVar6 = ((uVar1 ^ uVar3) & uVar7 ^ uVar1) + *(int *)(iVar5 + 0x24) +
          (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2 + 0x5a827999;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x28) =
       *(uint *)(*(int *)(this + 0xc0) + 0x28) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x28) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x28) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x28) << 0x18;
  uVar7 = ((uVar3 ^ uVar2) & uVar8 ^ uVar3) + *(int *)(iVar5 + 0x28) +
          (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1 + 0x5a827999;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x2c) =
       *(uint *)(*(int *)(this + 0xc0) + 0x2c) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x2c) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x2c) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x2c) << 0x18;
  uVar8 = ((uVar2 ^ uVar1) & uVar6 ^ uVar2) + *(int *)(iVar5 + 0x2c) +
          (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3 + 0x5a827999;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x30) =
       *(uint *)(*(int *)(this + 0xc0) + 0x30) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x30) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x30) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x30) << 0x18;
  uVar6 = ((uVar1 ^ uVar3) & uVar7 ^ uVar1) + *(int *)(iVar5 + 0x30) +
          (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2 + 0x5a827999;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x34) =
       *(uint *)(*(int *)(this + 0xc0) + 0x34) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x34) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x34) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x34) << 0x18;
  uVar7 = ((uVar3 ^ uVar2) & uVar8 ^ uVar3) + *(int *)(iVar5 + 0x34) +
          (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1 + 0x5a827999;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x38) =
       *(uint *)(*(int *)(this + 0xc0) + 0x38) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x38) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x38) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x38) << 0x18;
  uVar8 = ((uVar2 ^ uVar1) & uVar6 ^ uVar2) + *(int *)(iVar5 + 0x38) +
          (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3 + 0x5a827999;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x3c) =
       *(uint *)(*(int *)(this + 0xc0) + 0x3c) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x3c) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x3c) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x3c) << 0x18;
  uVar6 = ((uVar1 ^ uVar3) & uVar7 ^ uVar1) + *(int *)(iVar5 + 0x3c) +
          (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2 + 0x5a827999;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  puVar4 = *(uint **)(this + 0xc0);
  uVar7 = **(uint **)(this + 0xc0) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x34) ^ *(uint *)(*(int *)(this + 0xc0) + 0x20) ^
          *(uint *)(*(int *)(this + 0xc0) + 8);
  *puVar4 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = ((uVar3 ^ uVar2) & uVar8 ^ uVar3) + *puVar4 + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1 +
          0x5a827999;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 4) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x38) ^ *(uint *)(*(int *)(this + 0xc0) + 0x24) ^
          *(uint *)(*(int *)(this + 0xc0) + 0xc);
  *(uint *)(iVar5 + 4) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = ((uVar2 ^ uVar1) & uVar6 ^ uVar2) + *(int *)(iVar5 + 4) + (uVar7 >> 0x1b | uVar7 * 0x20) +
          uVar3 + 0x5a827999;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 8) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^ *(uint *)(*(int *)(this + 0xc0) + 0x28) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x10);
  *(uint *)(iVar5 + 8) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = ((uVar1 ^ uVar3) & uVar7 ^ uVar1) + *(int *)(iVar5 + 8) + (uVar8 >> 0x1b | uVar8 * 0x20) +
          uVar2 + 0x5a827999;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0xc) ^
          **(uint **)(this + 0xc0) ^ *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x14);
  *(uint *)(iVar5 + 0xc) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = ((uVar3 ^ uVar2) & uVar8 ^ uVar3) + *(int *)(iVar5 + 0xc) + (uVar6 >> 0x1b | uVar6 * 0x20)
          + uVar1 + 0x5a827999;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x10) ^
          *(uint *)(*(int *)(this + 0xc0) + 4) ^ *(uint *)(*(int *)(this + 0xc0) + 0x30) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x18);
  *(uint *)(iVar5 + 0x10) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 0x10) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3
          + 0x6ed9eba1;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x14) ^
          *(uint *)(*(int *)(this + 0xc0) + 8) ^ *(uint *)(*(int *)(this + 0xc0) + 0x34) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x1c);
  *(uint *)(iVar5 + 0x14) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x14) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0x6ed9eba1;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x18) ^
          *(uint *)(*(int *)(this + 0xc0) + 0xc) ^ *(uint *)(*(int *)(this + 0xc0) + 0x38) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x20);
  *(uint *)(iVar5 + 0x18) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 0x18) + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1
          + 0x6ed9eba1;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x10) ^ *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x24);
  *(uint *)(iVar5 + 0x1c) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 0x1c) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3
          + 0x6ed9eba1;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x20) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x14) ^ **(uint **)(this + 0xc0) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x28);
  *(uint *)(iVar5 + 0x20) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x20) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0x6ed9eba1;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x24) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x18) ^ *(uint *)(*(int *)(this + 0xc0) + 4) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x2c);
  *(uint *)(iVar5 + 0x24) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 0x24) + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1
          + 0x6ed9eba1;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x28) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^ *(uint *)(*(int *)(this + 0xc0) + 8) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x30);
  *(uint *)(iVar5 + 0x28) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 0x28) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3
          + 0x6ed9eba1;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x20) ^ *(uint *)(*(int *)(this + 0xc0) + 0xc) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x34);
  *(uint *)(iVar5 + 0x2c) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x2c) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0x6ed9eba1;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x30) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x24) ^ *(uint *)(*(int *)(this + 0xc0) + 0x10) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x38);
  *(uint *)(iVar5 + 0x30) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 0x30) + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1
          + 0x6ed9eba1;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x34) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x28) ^ *(uint *)(*(int *)(this + 0xc0) + 0x14) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x3c);
  *(uint *)(iVar5 + 0x34) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 0x34) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3
          + 0x6ed9eba1;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x38) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^ *(uint *)(*(int *)(this + 0xc0) + 0x18) ^
          **(uint **)(this + 0xc0);
  *(uint *)(iVar5 + 0x38) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x38) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0x6ed9eba1;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x30) ^ *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^
          *(uint *)(*(int *)(this + 0xc0) + 4);
  *(uint *)(iVar5 + 0x3c) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 0x3c) + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1
          + 0x6ed9eba1;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  puVar4 = *(uint **)(this + 0xc0);
  uVar8 = **(uint **)(this + 0xc0) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x34) ^ *(uint *)(*(int *)(this + 0xc0) + 0x20) ^
          *(uint *)(*(int *)(this + 0xc0) + 8);
  *puVar4 = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *puVar4 + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3 + 0x6ed9eba1;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 4) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x38) ^ *(uint *)(*(int *)(this + 0xc0) + 0x24) ^
          *(uint *)(*(int *)(this + 0xc0) + 0xc);
  *(uint *)(iVar5 + 4) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 4) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2 +
          0x6ed9eba1;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 8) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^ *(uint *)(*(int *)(this + 0xc0) + 0x28) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x10);
  *(uint *)(iVar5 + 8) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 8) + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1 +
          0x6ed9eba1;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0xc) ^
          **(uint **)(this + 0xc0) ^ *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x14);
  *(uint *)(iVar5 + 0xc) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 0xc) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3 +
          0x6ed9eba1;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x10) ^
          *(uint *)(*(int *)(this + 0xc0) + 4) ^ *(uint *)(*(int *)(this + 0xc0) + 0x30) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x18);
  *(uint *)(iVar5 + 0x10) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x10) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0x6ed9eba1;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x14) ^
          *(uint *)(*(int *)(this + 0xc0) + 8) ^ *(uint *)(*(int *)(this + 0xc0) + 0x34) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x1c);
  *(uint *)(iVar5 + 0x14) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 0x14) + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1
          + 0x6ed9eba1;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x18) ^
          *(uint *)(*(int *)(this + 0xc0) + 0xc) ^ *(uint *)(*(int *)(this + 0xc0) + 0x38) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x20);
  *(uint *)(iVar5 + 0x18) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 0x18) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3
          + 0x6ed9eba1;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x10) ^ *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x24);
  *(uint *)(iVar5 + 0x1c) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x1c) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0x6ed9eba1;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x20) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x14) ^ **(uint **)(this + 0xc0) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x28);
  *(uint *)(iVar5 + 0x20) = uVar7 >> 0x1f | uVar7 << 1;
  iVar9 = ((uVar2 | uVar8) & uVar3 | uVar2 & uVar8) + *(int *)(iVar5 + 0x20) +
          (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1;
  uVar7 = iVar9 + 0x8f1bbcdc;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x24) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x18) ^ *(uint *)(*(int *)(this + 0xc0) + 4) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x2c);
  *(uint *)(iVar5 + 0x24) = uVar8 >> 0x1f | uVar8 << 1;
  iVar10 = ((uVar1 | uVar6) & uVar2 | uVar1 & uVar6) + *(int *)(iVar5 + 0x24) +
           (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3;
  uVar8 = iVar10 + 0x8f1bbcdc;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x28) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^ *(uint *)(*(int *)(this + 0xc0) + 8) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x30);
  *(uint *)(iVar5 + 0x28) = uVar6 >> 0x1f | uVar6 << 1;
  iVar11 = ((uVar3 | uVar7) & uVar1 | uVar3 & uVar7) + *(int *)(iVar5 + 0x28) +
           (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2;
  uVar6 = iVar11 + 0x8f1bbcdc;
  uVar2 = uVar7 >> 2 | iVar9 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x20) ^ *(uint *)(*(int *)(this + 0xc0) + 0xc) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x34);
  *(uint *)(iVar5 + 0x2c) = uVar7 >> 0x1f | uVar7 << 1;
  iVar9 = ((uVar2 | uVar8) & uVar3 | uVar2 & uVar8) + *(int *)(iVar5 + 0x2c) +
          (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1;
  uVar7 = iVar9 + 0x8f1bbcdc;
  uVar1 = uVar8 >> 2 | iVar10 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x30) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x24) ^ *(uint *)(*(int *)(this + 0xc0) + 0x10) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x38);
  *(uint *)(iVar5 + 0x30) = uVar8 >> 0x1f | uVar8 << 1;
  iVar10 = ((uVar1 | uVar6) & uVar2 | uVar1 & uVar6) + *(int *)(iVar5 + 0x30) +
           (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3;
  uVar8 = iVar10 + 0x8f1bbcdc;
  uVar3 = uVar6 >> 2 | iVar11 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x34) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x28) ^ *(uint *)(*(int *)(this + 0xc0) + 0x14) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x3c);
  *(uint *)(iVar5 + 0x34) = uVar6 >> 0x1f | uVar6 << 1;
  iVar11 = ((uVar3 | uVar7) & uVar1 | uVar3 & uVar7) + *(int *)(iVar5 + 0x34) +
           (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2;
  uVar6 = iVar11 + 0x8f1bbcdc;
  uVar2 = uVar7 >> 2 | iVar9 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x38) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^ *(uint *)(*(int *)(this + 0xc0) + 0x18) ^
          **(uint **)(this + 0xc0);
  *(uint *)(iVar5 + 0x38) = uVar7 >> 0x1f | uVar7 << 1;
  iVar9 = ((uVar2 | uVar8) & uVar3 | uVar2 & uVar8) + *(int *)(iVar5 + 0x38) +
          (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1;
  uVar7 = iVar9 + 0x8f1bbcdc;
  uVar1 = uVar8 >> 2 | iVar10 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x30) ^ *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^
          *(uint *)(*(int *)(this + 0xc0) + 4);
  *(uint *)(iVar5 + 0x3c) = uVar8 >> 0x1f | uVar8 << 1;
  iVar10 = ((uVar1 | uVar6) & uVar2 | uVar1 & uVar6) + *(int *)(iVar5 + 0x3c) +
           (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3;
  uVar8 = iVar10 + 0x8f1bbcdc;
  uVar3 = uVar6 >> 2 | iVar11 * 0x40000000;
  puVar4 = *(uint **)(this + 0xc0);
  uVar6 = **(uint **)(this + 0xc0) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x34) ^ *(uint *)(*(int *)(this + 0xc0) + 0x20) ^
          *(uint *)(*(int *)(this + 0xc0) + 8);
  *puVar4 = uVar6 >> 0x1f | uVar6 << 1;
  iVar11 = ((uVar3 | uVar7) & uVar1 | uVar3 & uVar7) + *puVar4 + (uVar8 >> 0x1b | uVar8 * 0x20) +
           uVar2;
  uVar6 = iVar11 + 0x8f1bbcdc;
  uVar2 = uVar7 >> 2 | iVar9 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 4) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x38) ^ *(uint *)(*(int *)(this + 0xc0) + 0x24) ^
          *(uint *)(*(int *)(this + 0xc0) + 0xc);
  *(uint *)(iVar5 + 4) = uVar7 >> 0x1f | uVar7 << 1;
  iVar9 = ((uVar2 | uVar8) & uVar3 | uVar2 & uVar8) + *(int *)(iVar5 + 4) +
          (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1;
  uVar7 = iVar9 + 0x8f1bbcdc;
  uVar1 = uVar8 >> 2 | iVar10 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 8) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^ *(uint *)(*(int *)(this + 0xc0) + 0x28) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x10);
  *(uint *)(iVar5 + 8) = uVar8 >> 0x1f | uVar8 << 1;
  iVar10 = ((uVar1 | uVar6) & uVar2 | uVar1 & uVar6) + *(int *)(iVar5 + 8) +
           (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3;
  uVar8 = iVar10 + 0x8f1bbcdc;
  uVar3 = uVar6 >> 2 | iVar11 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0xc) ^
          **(uint **)(this + 0xc0) ^ *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x14);
  *(uint *)(iVar5 + 0xc) = uVar6 >> 0x1f | uVar6 << 1;
  iVar11 = ((uVar3 | uVar7) & uVar1 | uVar3 & uVar7) + *(int *)(iVar5 + 0xc) +
           (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2;
  uVar6 = iVar11 + 0x8f1bbcdc;
  uVar2 = uVar7 >> 2 | iVar9 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x10) ^
          *(uint *)(*(int *)(this + 0xc0) + 4) ^ *(uint *)(*(int *)(this + 0xc0) + 0x30) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x18);
  *(uint *)(iVar5 + 0x10) = uVar7 >> 0x1f | uVar7 << 1;
  iVar9 = ((uVar2 | uVar8) & uVar3 | uVar2 & uVar8) + *(int *)(iVar5 + 0x10) +
          (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1;
  uVar7 = iVar9 + 0x8f1bbcdc;
  uVar1 = uVar8 >> 2 | iVar10 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x14) ^
          *(uint *)(*(int *)(this + 0xc0) + 8) ^ *(uint *)(*(int *)(this + 0xc0) + 0x34) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x1c);
  *(uint *)(iVar5 + 0x14) = uVar8 >> 0x1f | uVar8 << 1;
  iVar10 = ((uVar1 | uVar6) & uVar2 | uVar1 & uVar6) + *(int *)(iVar5 + 0x14) +
           (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3;
  uVar8 = iVar10 + 0x8f1bbcdc;
  uVar3 = uVar6 >> 2 | iVar11 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x18) ^
          *(uint *)(*(int *)(this + 0xc0) + 0xc) ^ *(uint *)(*(int *)(this + 0xc0) + 0x38) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x20);
  *(uint *)(iVar5 + 0x18) = uVar6 >> 0x1f | uVar6 << 1;
  iVar11 = ((uVar3 | uVar7) & uVar1 | uVar3 & uVar7) + *(int *)(iVar5 + 0x18) +
           (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2;
  uVar6 = iVar11 + 0x8f1bbcdc;
  uVar2 = uVar7 >> 2 | iVar9 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x10) ^ *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x24);
  *(uint *)(iVar5 + 0x1c) = uVar7 >> 0x1f | uVar7 << 1;
  iVar9 = ((uVar2 | uVar8) & uVar3 | uVar2 & uVar8) + *(int *)(iVar5 + 0x1c) +
          (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1;
  uVar7 = iVar9 + 0x8f1bbcdc;
  uVar1 = uVar8 >> 2 | iVar10 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x20) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x14) ^ **(uint **)(this + 0xc0) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x28);
  *(uint *)(iVar5 + 0x20) = uVar8 >> 0x1f | uVar8 << 1;
  iVar10 = ((uVar1 | uVar6) & uVar2 | uVar1 & uVar6) + *(int *)(iVar5 + 0x20) +
           (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3;
  uVar8 = iVar10 + 0x8f1bbcdc;
  uVar3 = uVar6 >> 2 | iVar11 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x24) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x18) ^ *(uint *)(*(int *)(this + 0xc0) + 4) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x2c);
  *(uint *)(iVar5 + 0x24) = uVar6 >> 0x1f | uVar6 << 1;
  iVar11 = ((uVar3 | uVar7) & uVar1 | uVar3 & uVar7) + *(int *)(iVar5 + 0x24) +
           (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2;
  uVar6 = iVar11 + 0x8f1bbcdc;
  uVar2 = uVar7 >> 2 | iVar9 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x28) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^ *(uint *)(*(int *)(this + 0xc0) + 8) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x30);
  *(uint *)(iVar5 + 0x28) = uVar7 >> 0x1f | uVar7 << 1;
  iVar9 = ((uVar2 | uVar8) & uVar3 | uVar2 & uVar8) + *(int *)(iVar5 + 0x28) +
          (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1;
  uVar7 = iVar9 + 0x8f1bbcdc;
  uVar1 = uVar8 >> 2 | iVar10 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x20) ^ *(uint *)(*(int *)(this + 0xc0) + 0xc) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x34);
  *(uint *)(iVar5 + 0x2c) = uVar8 >> 0x1f | uVar8 << 1;
  iVar10 = ((uVar1 | uVar6) & uVar2 | uVar1 & uVar6) + *(int *)(iVar5 + 0x2c) +
           (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3;
  uVar8 = iVar10 + 0x8f1bbcdc;
  uVar3 = uVar6 >> 2 | iVar11 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x30) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x24) ^ *(uint *)(*(int *)(this + 0xc0) + 0x10) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x38);
  *(uint *)(iVar5 + 0x30) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x30) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0xca62c1d6;
  uVar2 = uVar7 >> 2 | iVar9 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x34) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x28) ^ *(uint *)(*(int *)(this + 0xc0) + 0x14) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x3c);
  *(uint *)(iVar5 + 0x34) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 0x34) + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1
          + 0xca62c1d6;
  uVar1 = uVar8 >> 2 | iVar10 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x38) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^ *(uint *)(*(int *)(this + 0xc0) + 0x18) ^
          **(uint **)(this + 0xc0);
  *(uint *)(iVar5 + 0x38) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 0x38) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3
          + 0xca62c1d6;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x30) ^ *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^
          *(uint *)(*(int *)(this + 0xc0) + 4);
  *(uint *)(iVar5 + 0x3c) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x3c) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0xca62c1d6;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  puVar4 = *(uint **)(this + 0xc0);
  uVar7 = **(uint **)(this + 0xc0) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x34) ^ *(uint *)(*(int *)(this + 0xc0) + 0x20) ^
          *(uint *)(*(int *)(this + 0xc0) + 8);
  *puVar4 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *puVar4 + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1 + 0xca62c1d6;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 4) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x38) ^ *(uint *)(*(int *)(this + 0xc0) + 0x24) ^
          *(uint *)(*(int *)(this + 0xc0) + 0xc);
  *(uint *)(iVar5 + 4) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 4) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3 +
          0xca62c1d6;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 8) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^ *(uint *)(*(int *)(this + 0xc0) + 0x28) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x10);
  *(uint *)(iVar5 + 8) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 8) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2 +
          0xca62c1d6;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0xc) ^
          **(uint **)(this + 0xc0) ^ *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x14);
  *(uint *)(iVar5 + 0xc) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 0xc) + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1 +
          0xca62c1d6;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x10) ^
          *(uint *)(*(int *)(this + 0xc0) + 4) ^ *(uint *)(*(int *)(this + 0xc0) + 0x30) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x18);
  *(uint *)(iVar5 + 0x10) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 0x10) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3
          + 0xca62c1d6;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x14) ^
          *(uint *)(*(int *)(this + 0xc0) + 8) ^ *(uint *)(*(int *)(this + 0xc0) + 0x34) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x1c);
  *(uint *)(iVar5 + 0x14) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x14) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0xca62c1d6;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x18) ^
          *(uint *)(*(int *)(this + 0xc0) + 0xc) ^ *(uint *)(*(int *)(this + 0xc0) + 0x38) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x20);
  *(uint *)(iVar5 + 0x18) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 0x18) + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1
          + 0xca62c1d6;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x10) ^ *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x24);
  *(uint *)(iVar5 + 0x1c) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 0x1c) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3
          + 0xca62c1d6;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x20) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x14) ^ **(uint **)(this + 0xc0) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x28);
  *(uint *)(iVar5 + 0x20) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x20) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0xca62c1d6;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x24) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x18) ^ *(uint *)(*(int *)(this + 0xc0) + 4) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x2c);
  *(uint *)(iVar5 + 0x24) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 0x24) + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1
          + 0xca62c1d6;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x28) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^ *(uint *)(*(int *)(this + 0xc0) + 8) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x30);
  *(uint *)(iVar5 + 0x28) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 0x28) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3
          + 0xca62c1d6;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x20) ^ *(uint *)(*(int *)(this + 0xc0) + 0xc) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x34);
  *(uint *)(iVar5 + 0x2c) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x2c) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0xca62c1d6;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x30) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x24) ^ *(uint *)(*(int *)(this + 0xc0) + 0x10) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x38);
  *(uint *)(iVar5 + 0x30) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 0x30) + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1
          + 0xca62c1d6;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x34) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x28) ^ *(uint *)(*(int *)(this + 0xc0) + 0x14) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x3c);
  *(uint *)(iVar5 + 0x34) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 0x34) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3
          + 0xca62c1d6;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x38) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^ *(uint *)(*(int *)(this + 0xc0) + 0x18) ^
          **(uint **)(this + 0xc0);
  *(uint *)(iVar5 + 0x38) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x38) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0xca62c1d6;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x30) ^ *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^
          *(uint *)(*(int *)(this + 0xc0) + 4);
  *(uint *)(iVar5 + 0x3c) = uVar7 >> 0x1f | uVar7 << 1;
  *param_1 = *param_1 +
             (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 0x3c) + (uVar6 >> 0x1b | uVar6 * 0x20) +
             uVar1 + -0x359d3e2a;
  param_1[1] = param_1[1] + uVar6;
  param_1[2] = param_1[2] + (uVar8 >> 2 | uVar8 * 0x40000000);
  param_1[3] = param_1[3] + uVar2;
  param_1[4] = param_1[4] + uVar3;
  return;
}

```

---

## Update

```asm
// === 0808a19e CSHA1::Update  [0x0808a19e-0x808a2d1] ===
 808a19e:	55                   	push   %ebp
 808a19f:	89 e5                	mov    %esp,%ebp
 808a1a1:	83 ec 28             	sub    $0x28,%esp
 808a1a4:	8b 45 08             	mov    0x8(%ebp),%eax
 808a1a7:	8b 40 14             	mov    0x14(%eax),%eax
 808a1aa:	c1 e8 03             	shr    $0x3,%eax
 808a1ad:	83 e0 3f             	and    $0x3f,%eax
 808a1b0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 808a1b3:	8b 45 08             	mov    0x8(%ebp),%eax
 808a1b6:	8b 40 14             	mov    0x14(%eax),%eax
 808a1b9:	8b 55 10             	mov    0x10(%ebp),%edx
 808a1bc:	c1 e2 03             	shl    $0x3,%edx
 808a1bf:	8d 14 10             	lea    (%eax,%edx,1),%edx
 808a1c2:	8b 45 08             	mov    0x8(%ebp),%eax
 808a1c5:	89 50 14             	mov    %edx,0x14(%eax)
 808a1c8:	8b 45 08             	mov    0x8(%ebp),%eax
 808a1cb:	8b 40 14             	mov    0x14(%eax),%eax
 808a1ce:	8b 55 10             	mov    0x10(%ebp),%edx
 808a1d1:	c1 e2 03             	shl    $0x3,%edx
 808a1d4:	39 d0                	cmp    %edx,%eax
 808a1d6:	0f 92 c0             	setb   %al
 808a1d9:	84 c0                	test   %al,%al
 808a1db:	74 0f                	je     808a1ec <_ZN5CSHA16UpdateEPKhj+0x4e>
 808a1dd:	8b 45 08             	mov    0x8(%ebp),%eax
 808a1e0:	8b 40 18             	mov    0x18(%eax),%eax
 808a1e3:	8d 50 01             	lea    0x1(%eax),%edx
 808a1e6:	8b 45 08             	mov    0x8(%ebp),%eax
 808a1e9:	89 50 18             	mov    %edx,0x18(%eax)
 808a1ec:	8b 45 08             	mov    0x8(%ebp),%eax
 808a1ef:	8b 40 18             	mov    0x18(%eax),%eax
 808a1f2:	8b 55 10             	mov    0x10(%ebp),%edx
 808a1f5:	c1 ea 1d             	shr    $0x1d,%edx
 808a1f8:	8d 14 10             	lea    (%eax,%edx,1),%edx
 808a1fb:	8b 45 08             	mov    0x8(%ebp),%eax
 808a1fe:	89 50 18             	mov    %edx,0x18(%eax)
 808a201:	8b 45 10             	mov    0x10(%ebp),%eax
 808a204:	8b 55 f0             	mov    -0x10(%ebp),%edx
 808a207:	8d 04 02             	lea    (%edx,%eax,1),%eax
 808a20a:	83 f8 3f             	cmp    $0x3f,%eax
 808a20d:	0f 86 83 00 00 00    	jbe    808a296 <_ZN5CSHA16UpdateEPKhj+0xf8>
 808a213:	b8 40 00 00 00       	mov    $0x40,%eax
 808a218:	2b 45 f0             	sub    -0x10(%ebp),%eax
 808a21b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 808a21e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 808a221:	83 c0 20             	add    $0x20,%eax
 808a224:	03 45 08             	add    0x8(%ebp),%eax
 808a227:	8b 55 f4             	mov    -0xc(%ebp),%edx
 808a22a:	89 54 24 08          	mov    %edx,0x8(%esp)
 808a22e:	8b 55 0c             	mov    0xc(%ebp),%edx
 808a231:	89 54 24 04          	mov    %edx,0x4(%esp)
 808a235:	89 04 24             	mov    %eax,(%esp)
 808a238:	e8 63 36 ff ff       	call   807d8a0 <memcpy@plt>
 808a23d:	8b 45 08             	mov    0x8(%ebp),%eax
 808a240:	8d 50 20             	lea    0x20(%eax),%edx
 808a243:	8b 45 08             	mov    0x8(%ebp),%eax
 808a246:	89 54 24 08          	mov    %edx,0x8(%esp)
 808a24a:	89 44 24 04          	mov    %eax,0x4(%esp)
 808a24e:	8b 45 08             	mov    0x8(%ebp),%eax
 808a251:	89 04 24             	mov    %eax,(%esp)
 808a254:	e8 51 db ff ff       	call   8087daa <_ZN5CSHA19TransformEPjPKh>
 808a259:	eb 22                	jmp    808a27d <_ZN5CSHA16UpdateEPKhj+0xdf>
 808a25b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808a25e:	8b 55 0c             	mov    0xc(%ebp),%edx
 808a261:	01 c2                	add    %eax,%edx
 808a263:	8b 45 08             	mov    0x8(%ebp),%eax
 808a266:	89 54 24 08          	mov    %edx,0x8(%esp)
 808a26a:	89 44 24 04          	mov    %eax,0x4(%esp)
 808a26e:	8b 45 08             	mov    0x8(%ebp),%eax
 808a271:	89 04 24             	mov    %eax,(%esp)
 808a274:	e8 31 db ff ff       	call   8087daa <_ZN5CSHA19TransformEPjPKh>
 808a279:	83 45 f4 40          	addl   $0x40,-0xc(%ebp)
 808a27d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808a280:	83 c0 3f             	add    $0x3f,%eax
 808a283:	3b 45 10             	cmp    0x10(%ebp),%eax
 808a286:	0f 92 c0             	setb   %al
 808a289:	84 c0                	test   %al,%al
 808a28b:	75 ce                	jne    808a25b <_ZN5CSHA16UpdateEPKhj+0xbd>
 808a28d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 808a294:	eb 07                	jmp    808a29d <_ZN5CSHA16UpdateEPKhj+0xff>
 808a296:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 808a29d:	8b 45 10             	mov    0x10(%ebp),%eax
 808a2a0:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 808a2a3:	74 2b                	je     808a2d0 <_ZN5CSHA16UpdateEPKhj+0x132>
 808a2a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808a2a8:	8b 55 10             	mov    0x10(%ebp),%edx
 808a2ab:	89 d1                	mov    %edx,%ecx
 808a2ad:	29 c1                	sub    %eax,%ecx
 808a2af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808a2b2:	8b 55 0c             	mov    0xc(%ebp),%edx
 808a2b5:	01 c2                	add    %eax,%edx
 808a2b7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 808a2ba:	83 c0 20             	add    $0x20,%eax
 808a2bd:	03 45 08             	add    0x8(%ebp),%eax
 808a2c0:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 808a2c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 808a2c8:	89 04 24             	mov    %eax,(%esp)
 808a2cb:	e8 d0 35 ff ff       	call   807d8a0 <memcpy@plt>
 808a2d0:	c9                   	leave
 808a2d1:	c3                   	ret

```

```c
// CSHA1::Update @ 0x808a19e

/* CSHA1::Update(unsigned char const*, unsigned int) */

void __thiscall CSHA1::Update(CSHA1 *this,uchar *param_1,uint param_2)

{
  uint local_14;
  size_t local_10;
  
  local_14 = *(uint *)(this + 0x14) >> 3 & 0x3f;
  *(uint *)(this + 0x14) = *(int *)(this + 0x14) + param_2 * 8;
  if (*(uint *)(this + 0x14) < param_2 << 3) {
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  }
  *(uint *)(this + 0x18) = *(int *)(this + 0x18) + (param_2 >> 0x1d);
  if (local_14 + param_2 < 0x40) {
    local_10 = 0;
  }
  else {
    local_10 = 0x40 - local_14;
    memcpy(this + local_14 + 0x20,param_1,local_10);
    Transform(this,(uint *)this,(uchar *)(this + 0x20));
    for (; local_10 + 0x3f < param_2; local_10 = local_10 + 0x40) {
      Transform(this,(uint *)this,param_1 + local_10);
    }
    local_14 = 0;
  }
  if (param_2 != local_10) {
    memcpy(this + local_14 + 0x20,param_1 + local_10,param_2 - local_10);
  }
  return;
}

```

---

## ~CSHA1

```asm
// === 08087d4c CSHA1::~CSHA1  [0x08087d4c-0x8087d5f] ===
 8087d4c:	55                   	push   %ebp
 8087d4d:	89 e5                	mov    %esp,%ebp
 8087d4f:	83 ec 18             	sub    $0x18,%esp
 8087d52:	8b 45 08             	mov    0x8(%ebp),%eax
 8087d55:	89 04 24             	mov    %eax,(%esp)
 8087d58:	e8 03 00 00 00       	call   8087d60 <_ZN5CSHA15ResetEv>
 8087d5d:	c9                   	leave
 8087d5e:	c3                   	ret
 8087d5f:	90                   	nop

```

```c
// CSHA1::~CSHA1 @ 0x8087d4c

/* CSHA1::~CSHA1() */

void __thiscall CSHA1::~CSHA1(CSHA1 *this)

{
  Reset(this);
  return;
}

```

