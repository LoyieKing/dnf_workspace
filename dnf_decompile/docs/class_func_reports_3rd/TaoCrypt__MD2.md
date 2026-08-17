# TaoCrypt__MD2

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## Final

```asm
// === 08764f10 TaoCrypt::MD2::Final  [0x08764f10-0x876501f] ===
 8764f10:	55                   	push   %ebp
 8764f11:	b8 10 00 00 00       	mov    $0x10,%eax
 8764f16:	89 e5                	mov    %esp,%ebp
 8764f18:	57                   	push   %edi
 8764f19:	56                   	push   %esi
 8764f1a:	83 ec 40             	sub    $0x40,%esp
 8764f1d:	8b 55 08             	mov    0x8(%ebp),%edx
 8764f20:	8d 75 e8             	lea    -0x18(%ebp),%esi
 8764f23:	2b 42 28             	sub    0x28(%edx),%eax
 8764f26:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8764f29:	74 79                	je     8764fa4 <_ZN8TaoCrypt3MD25FinalEPh+0x94>
 8764f2b:	89 c1                	mov    %eax,%ecx
 8764f2d:	89 c7                	mov    %eax,%edi
 8764f2f:	c1 e9 02             	shr    $0x2,%ecx
 8764f32:	89 ca                	mov    %ecx,%edx
 8764f34:	c1 e2 02             	shl    $0x2,%edx
 8764f37:	83 f8 03             	cmp    $0x3,%eax
 8764f3a:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 8764f3d:	0f 86 c4 00 00 00    	jbe    8765007 <_ZN8TaoCrypt3MD25FinalEPh+0xf7>
 8764f43:	85 d2                	test   %edx,%edx
 8764f45:	0f 84 bc 00 00 00    	je     8765007 <_ZN8TaoCrypt3MD25FinalEPh+0xf7>
 8764f4b:	31 c9                	xor    %ecx,%ecx
 8764f4d:	8a 4d e4             	mov    -0x1c(%ebp),%cl
 8764f50:	0f b6 c0             	movzbl %al,%eax
 8764f53:	8a 6d e4             	mov    -0x1c(%ebp),%ch
 8764f56:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8764f59:	c1 e0 10             	shl    $0x10,%eax
 8764f5c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8764f5f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8764f62:	0f b7 c9             	movzwl %cx,%ecx
 8764f65:	0b 4d e0             	or     -0x20(%ebp),%ecx
 8764f68:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8764f6b:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8764f6e:	c1 e0 18             	shl    $0x18,%eax
 8764f71:	09 c1                	or     %eax,%ecx
 8764f73:	31 c0                	xor    %eax,%eax
 8764f75:	8d 76 00             	lea    0x0(%esi),%esi
 8764f78:	89 0c 86             	mov    %ecx,(%esi,%eax,4)
 8764f7b:	83 c0 01             	add    $0x1,%eax
 8764f7e:	39 c2                	cmp    %eax,%edx
 8764f80:	77 f6                	ja     8764f78 <_ZN8TaoCrypt3MD25FinalEPh+0x68>
 8764f82:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8764f85:	39 55 e4             	cmp    %edx,-0x1c(%ebp)
 8764f88:	74 1a                	je     8764fa4 <_ZN8TaoCrypt3MD25FinalEPh+0x94>
 8764f8a:	89 f9                	mov    %edi,%ecx
 8764f8c:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 8764f8f:	8d 04 16             	lea    (%esi,%edx,1),%eax
 8764f92:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8764f98:	83 c2 01             	add    $0x1,%edx
 8764f9b:	88 08                	mov    %cl,(%eax)
 8764f9d:	83 c0 01             	add    $0x1,%eax
 8764fa0:	39 d7                	cmp    %edx,%edi
 8764fa2:	77 f4                	ja     8764f98 <_ZN8TaoCrypt3MD25FinalEPh+0x88>
 8764fa4:	8b 55 08             	mov    0x8(%ebp),%edx
 8764fa7:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8764faa:	8b 02                	mov    (%edx),%eax
 8764fac:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8764fb0:	89 74 24 04          	mov    %esi,0x4(%esp)
 8764fb4:	89 14 24             	mov    %edx,(%esp)
 8764fb7:	ff 50 08             	call   *0x8(%eax)
 8764fba:	8b 55 08             	mov    0x8(%ebp),%edx
 8764fbd:	8b 02                	mov    (%edx),%eax
 8764fbf:	89 d1                	mov    %edx,%ecx
 8764fc1:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8764fc8:	00 
 8764fc9:	8b 52 14             	mov    0x14(%edx),%edx
 8764fcc:	89 0c 24             	mov    %ecx,(%esp)
 8764fcf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8764fd3:	ff 50 08             	call   *0x8(%eax)
 8764fd6:	8b 55 08             	mov    0x8(%ebp),%edx
 8764fd9:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8764fdc:	8b 42 08             	mov    0x8(%edx),%eax
 8764fdf:	8b 10                	mov    (%eax),%edx
 8764fe1:	89 11                	mov    %edx,(%ecx)
 8764fe3:	8b 50 04             	mov    0x4(%eax),%edx
 8764fe6:	89 51 04             	mov    %edx,0x4(%ecx)
 8764fe9:	8b 50 08             	mov    0x8(%eax),%edx
 8764fec:	89 51 08             	mov    %edx,0x8(%ecx)
 8764fef:	8b 40 0c             	mov    0xc(%eax),%eax
 8764ff2:	89 41 0c             	mov    %eax,0xc(%ecx)
 8764ff5:	8b 55 08             	mov    0x8(%ebp),%edx
 8764ff8:	8b 02                	mov    (%edx),%eax
 8764ffa:	89 14 24             	mov    %edx,(%esp)
 8764ffd:	ff 50 10             	call   *0x10(%eax)
 8765000:	83 c4 40             	add    $0x40,%esp
 8765003:	5e                   	pop    %esi
 8765004:	5f                   	pop    %edi
 8765005:	5d                   	pop    %ebp
 8765006:	c3                   	ret
 8765007:	31 d2                	xor    %edx,%edx
 8765009:	8d 75 e8             	lea    -0x18(%ebp),%esi
 876500c:	e9 79 ff ff ff       	jmp    8764f8a <_ZN8TaoCrypt3MD25FinalEPh+0x7a>
 8765011:	90                   	nop
 8765012:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8765019:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::MD2::Final @ 0x8764f10

/* TaoCrypt::MD2::Final(unsigned char*) */

void __thiscall TaoCrypt::MD2::Final(MD2 *this,uchar *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint local_1c [4];
  
  uVar2 = 0x10 - *(int *)(this + 0x28);
  if (uVar2 != 0) {
    uVar6 = uVar2 >> 2;
    uVar7 = uVar6 << 2;
    uVar5 = (undefined1)uVar2;
    if ((uVar2 < 4) || (uVar6 == 0)) {
      uVar7 = 0;
    }
    else {
      uVar3 = 0;
      do {
        local_1c[uVar3] =
             (uint)CONCAT11(uVar5,uVar5) | (uVar2 & 0xff) << 0x10 | (uVar2 & 0xff) << 0x18;
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar6);
      if (uVar2 == uVar7) goto LAB_08764fa4;
    }
    puVar4 = (undefined1 *)((int)local_1c + uVar7);
    do {
      uVar7 = uVar7 + 1;
      *puVar4 = uVar5;
      puVar4 = puVar4 + 1;
    } while (uVar7 < uVar2);
  }
LAB_08764fa4:
  (**(code **)(*(int *)this + 8))(this,local_1c,uVar2);
  (**(code **)(*(int *)this + 8))(this,*(undefined4 *)(this + 0x14),0x10);
  puVar1 = *(undefined4 **)(this + 8);
  *(undefined4 *)param_1 = *puVar1;
  *(undefined4 *)(param_1 + 4) = puVar1[1];
  *(undefined4 *)(param_1 + 8) = puVar1[2];
  *(undefined4 *)(param_1 + 0xc) = puVar1[3];
  (**(code **)(*(int *)this + 0x10))(this);
  return;
}

```

---

## Init

```asm
// === 08764e50 TaoCrypt::MD2::Init  [0x08764e50-0x8764f0f] ===
 8764e50:	55                   	push   %ebp
 8764e51:	89 e5                	mov    %esp,%ebp
 8764e53:	8b 55 08             	mov    0x8(%ebp),%edx
 8764e56:	57                   	push   %edi
 8764e57:	56                   	push   %esi
 8764e58:	be 30 00 00 00       	mov    $0x30,%esi
 8764e5d:	8b 7a 08             	mov    0x8(%edx),%edi
 8764e60:	f7 c7 01 00 00 00    	test   $0x1,%edi
 8764e66:	75 78                	jne    8764ee0 <_ZN8TaoCrypt3MD24InitEv+0x90>
 8764e68:	f7 c7 02 00 00 00    	test   $0x2,%edi
 8764e6e:	0f 85 84 00 00 00    	jne    8764ef8 <_ZN8TaoCrypt3MD24InitEv+0xa8>
 8764e74:	89 f1                	mov    %esi,%ecx
 8764e76:	31 c0                	xor    %eax,%eax
 8764e78:	c1 e9 02             	shr    $0x2,%ecx
 8764e7b:	f7 c6 02 00 00 00    	test   $0x2,%esi
 8764e81:	f3 ab                	rep stos %eax,%es:(%edi)
 8764e83:	74 08                	je     8764e8d <_ZN8TaoCrypt3MD24InitEv+0x3d>
 8764e85:	66 c7 07 00 00       	movw   $0x0,(%edi)
 8764e8a:	83 c7 02             	add    $0x2,%edi
 8764e8d:	83 e6 01             	and    $0x1,%esi
 8764e90:	74 03                	je     8764e95 <_ZN8TaoCrypt3MD24InitEv+0x45>
 8764e92:	c6 07 00             	movb   $0x0,(%edi)
 8764e95:	8b 42 14             	mov    0x14(%edx),%eax
 8764e98:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8764e9e:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8764ea5:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8764eac:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8764eb3:	8b 42 20             	mov    0x20(%edx),%eax
 8764eb6:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8764ebc:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8764ec3:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8764eca:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8764ed1:	c7 42 28 00 00 00 00 	movl   $0x0,0x28(%edx)
 8764ed8:	5e                   	pop    %esi
 8764ed9:	5f                   	pop    %edi
 8764eda:	5d                   	pop    %ebp
 8764edb:	c3                   	ret
 8764edc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8764ee0:	c6 07 00             	movb   $0x0,(%edi)
 8764ee3:	83 c7 01             	add    $0x1,%edi
 8764ee6:	66 be 2f 00          	mov    $0x2f,%si
 8764eea:	f7 c7 02 00 00 00    	test   $0x2,%edi
 8764ef0:	74 82                	je     8764e74 <_ZN8TaoCrypt3MD24InitEv+0x24>
 8764ef2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8764ef8:	66 c7 07 00 00       	movw   $0x0,(%edi)
 8764efd:	83 ee 02             	sub    $0x2,%esi
 8764f00:	83 c7 02             	add    $0x2,%edi
 8764f03:	e9 6c ff ff ff       	jmp    8764e74 <_ZN8TaoCrypt3MD24InitEv+0x24>
 8764f08:	90                   	nop
 8764f09:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::MD2::Init @ 0x8764e50

/* TaoCrypt::MD2::Init() */

void __thiscall TaoCrypt::MD2::Init(MD2 *this)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  uVar2 = 0x30;
  puVar3 = *(undefined4 **)(this + 8);
  bVar4 = ((uint)puVar3 & 1) != 0;
  if (bVar4) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    uVar2 = 0x2f;
  }
  if (((uint)puVar3 & 2) != 0) {
    *(undefined2 *)puVar3 = 0;
    uVar2 = uVar2 - 2;
    puVar3 = (undefined4 *)((int)puVar3 + 2);
  }
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if ((uVar2 & 2) != 0) {
    *(undefined2 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 2);
  }
  if (bVar4) {
    *(undefined1 *)puVar3 = 0;
  }
  puVar3 = *(undefined4 **)(this + 0x14);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3 = *(undefined4 **)(this + 0x20);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}

```

---

## MD2

```asm
// === 08765710 TaoCrypt::MD2::MD2  [0x08765710-0x876597f] ===
 8765710:	55                   	push   %ebp
 8765711:	89 e5                	mov    %esp,%ebp
 8765713:	56                   	push   %esi
 8765714:	53                   	push   %ebx
 8765715:	e8 de d6 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876571a:	81 c3 7e 74 c0 00    	add    $0xc0747e,%ebx
 8765720:	83 ec 10             	sub    $0x10,%esp
 8765723:	8b 75 08             	mov    0x8(%ebp),%esi
 8765726:	c7 46 04 30 00 00 00 	movl   $0x30,0x4(%esi)
 876572d:	8b 83 d8 fe ff ff    	mov    -0x128(%ebx),%eax
 8765733:	83 c0 08             	add    $0x8,%eax
 8765736:	89 06                	mov    %eax,(%esi)
 8765738:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876573d:	c7 04 24 30 00 00 00 	movl   $0x30,(%esp)
 8765744:	e8 47 20 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8765749:	8b 56 04             	mov    0x4(%esi),%edx
 876574c:	89 46 08             	mov    %eax,0x8(%esi)
 876574f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8765753:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 876575a:	00 
 876575b:	89 04 24             	mov    %eax,(%esp)
 876575e:	e8 5d 85 91 ff       	call   807dcc0 <memset@plt>
 8765763:	c7 46 10 10 00 00 00 	movl   $0x10,0x10(%esi)
 876576a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876576f:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 8765776:	e8 15 20 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 876577b:	8b 56 10             	mov    0x10(%esi),%edx
 876577e:	89 46 14             	mov    %eax,0x14(%esi)
 8765781:	89 54 24 08          	mov    %edx,0x8(%esp)
 8765785:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 876578c:	00 
 876578d:	89 04 24             	mov    %eax,(%esp)
 8765790:	e8 2b 85 91 ff       	call   807dcc0 <memset@plt>
 8765795:	c7 46 1c 10 00 00 00 	movl   $0x10,0x1c(%esi)
 876579c:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87657a1:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 87657a8:	e8 e3 1f 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 87657ad:	8b 56 1c             	mov    0x1c(%esi),%edx
 87657b0:	89 46 20             	mov    %eax,0x20(%esi)
 87657b3:	89 54 24 08          	mov    %edx,0x8(%esp)
 87657b7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87657be:	00 
 87657bf:	89 04 24             	mov    %eax,(%esp)
 87657c2:	e8 f9 84 91 ff       	call   807dcc0 <memset@plt>
 87657c7:	89 34 24             	mov    %esi,(%esp)
 87657ca:	e8 81 f6 ff ff       	call   8764e50 <_ZN8TaoCrypt3MD24InitEv>
 87657cf:	83 c4 10             	add    $0x10,%esp
 87657d2:	5b                   	pop    %ebx
 87657d3:	5e                   	pop    %esi
 87657d4:	5d                   	pop    %ebp
 87657d5:	c3                   	ret
 87657d6:	90                   	nop
 87657d7:	90                   	nop
 87657d8:	90                   	nop
 87657d9:	90                   	nop
 87657da:	90                   	nop
 87657db:	90                   	nop
 87657dc:	90                   	nop
 87657dd:	90                   	nop
 87657de:	90                   	nop
 87657df:	90                   	nop

087657e0 <_ZNK8TaoCrypt3MD212getBlockSizeEv>:
 87657e0:	55                   	push   %ebp
 87657e1:	b8 10 00 00 00       	mov    $0x10,%eax
 87657e6:	89 e5                	mov    %esp,%ebp
 87657e8:	5d                   	pop    %ebp
 87657e9:	c3                   	ret
 87657ea:	90                   	nop
 87657eb:	90                   	nop
 87657ec:	90                   	nop
 87657ed:	90                   	nop
 87657ee:	90                   	nop
 87657ef:	90                   	nop

087657f0 <_ZNK8TaoCrypt3MD213getDigestSizeEv>:
 87657f0:	55                   	push   %ebp
 87657f1:	b8 10 00 00 00       	mov    $0x10,%eax
 87657f6:	89 e5                	mov    %esp,%ebp
 87657f8:	5d                   	pop    %ebp
 87657f9:	c3                   	ret
 87657fa:	90                   	nop
 87657fb:	90                   	nop
 87657fc:	90                   	nop
 87657fd:	90                   	nop
 87657fe:	90                   	nop
 87657ff:	90                   	nop

08765800 <_ZN8TaoCrypt3MD2D1Ev>:
 8765800:	55                   	push   %ebp
 8765801:	89 e5                	mov    %esp,%ebp
 8765803:	83 ec 28             	sub    $0x28,%esp
 8765806:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8765809:	e8 ea d5 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876580e:	81 c3 8a 73 c0 00    	add    $0xc0738a,%ebx
 8765814:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8765817:	8b 75 08             	mov    0x8(%ebp),%esi
 876581a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 876581d:	8b 7e 20             	mov    0x20(%esi),%edi
 8765820:	8b 83 d8 fe ff ff    	mov    -0x128(%ebx),%eax
 8765826:	83 c0 08             	add    $0x8,%eax
 8765829:	89 06                	mov    %eax,(%esi)
 876582b:	8b 46 1c             	mov    0x1c(%esi),%eax
 876582e:	89 3c 24             	mov    %edi,(%esp)
 8765831:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8765838:	00 
 8765839:	89 44 24 08          	mov    %eax,0x8(%esp)
 876583d:	e8 7e 84 91 ff       	call   807dcc0 <memset@plt>
 8765842:	89 3c 24             	mov    %edi,(%esp)
 8765845:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876584a:	e8 d1 1e 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 876584f:	8b 7e 14             	mov    0x14(%esi),%edi
 8765852:	8b 46 10             	mov    0x10(%esi),%eax
 8765855:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 876585c:	00 
 876585d:	89 3c 24             	mov    %edi,(%esp)
 8765860:	89 44 24 08          	mov    %eax,0x8(%esp)
 8765864:	e8 57 84 91 ff       	call   807dcc0 <memset@plt>
 8765869:	89 3c 24             	mov    %edi,(%esp)
 876586c:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8765871:	e8 aa 1e 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8765876:	8b 7e 08             	mov    0x8(%esi),%edi
 8765879:	8b 46 04             	mov    0x4(%esi),%eax
 876587c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8765883:	00 
 8765884:	89 3c 24             	mov    %edi,(%esp)
 8765887:	89 44 24 08          	mov    %eax,0x8(%esp)
 876588b:	e8 30 84 91 ff       	call   807dcc0 <memset@plt>
 8765890:	89 3c 24             	mov    %edi,(%esp)
 8765893:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8765898:	e8 83 1e 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 876589d:	8b 83 c4 ff ff ff    	mov    -0x3c(%ebx),%eax
 87658a3:	83 c0 08             	add    $0x8,%eax
 87658a6:	89 06                	mov    %eax,(%esi)
 87658a8:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87658ab:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87658ae:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87658b1:	89 ec                	mov    %ebp,%esp
 87658b3:	5d                   	pop    %ebp
 87658b4:	c3                   	ret
 87658b5:	90                   	nop
 87658b6:	90                   	nop
 87658b7:	90                   	nop
 87658b8:	90                   	nop
 87658b9:	90                   	nop
 87658ba:	90                   	nop
 87658bb:	90                   	nop
 87658bc:	90                   	nop
 87658bd:	90                   	nop
 87658be:	90                   	nop
 87658bf:	90                   	nop

087658c0 <_ZN8TaoCrypt3MD2D0Ev>:
 87658c0:	55                   	push   %ebp
 87658c1:	89 e5                	mov    %esp,%ebp
 87658c3:	83 ec 28             	sub    $0x28,%esp
 87658c6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87658c9:	e8 2a d5 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87658ce:	81 c3 ca 72 c0 00    	add    $0xc072ca,%ebx
 87658d4:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87658d7:	8b 75 08             	mov    0x8(%ebp),%esi
 87658da:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87658dd:	8b 7e 20             	mov    0x20(%esi),%edi
 87658e0:	8b 83 d8 fe ff ff    	mov    -0x128(%ebx),%eax
 87658e6:	83 c0 08             	add    $0x8,%eax
 87658e9:	89 06                	mov    %eax,(%esi)
 87658eb:	8b 46 1c             	mov    0x1c(%esi),%eax
 87658ee:	89 3c 24             	mov    %edi,(%esp)
 87658f1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87658f8:	00 
 87658f9:	89 44 24 08          	mov    %eax,0x8(%esp)
 87658fd:	e8 be 83 91 ff       	call   807dcc0 <memset@plt>
 8765902:	89 3c 24             	mov    %edi,(%esp)
 8765905:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876590a:	e8 11 1e 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 876590f:	8b 7e 14             	mov    0x14(%esi),%edi
 8765912:	8b 46 10             	mov    0x10(%esi),%eax
 8765915:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 876591c:	00 
 876591d:	89 3c 24             	mov    %edi,(%esp)
 8765920:	89 44 24 08          	mov    %eax,0x8(%esp)
 8765924:	e8 97 83 91 ff       	call   807dcc0 <memset@plt>
 8765929:	89 3c 24             	mov    %edi,(%esp)
 876592c:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8765931:	e8 ea 1d 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8765936:	8b 7e 08             	mov    0x8(%esi),%edi
 8765939:	8b 46 04             	mov    0x4(%esi),%eax
 876593c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8765943:	00 
 8765944:	89 3c 24             	mov    %edi,(%esp)
 8765947:	89 44 24 08          	mov    %eax,0x8(%esp)
 876594b:	e8 70 83 91 ff       	call   807dcc0 <memset@plt>
 8765950:	89 3c 24             	mov    %edi,(%esp)
 8765953:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8765958:	e8 c3 1d 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 876595d:	8b 83 c4 ff ff ff    	mov    -0x3c(%ebx),%eax
 8765963:	83 c0 08             	add    $0x8,%eax
 8765966:	89 06                	mov    %eax,(%esi)
 8765968:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 876596b:	8b 75 f8             	mov    -0x8(%ebp),%esi
 876596e:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8765971:	89 ec                	mov    %ebp,%esp
 8765973:	5d                   	pop    %ebp
 8765974:	c3                   	ret
 8765975:	90                   	nop
 8765976:	90                   	nop
 8765977:	90                   	nop
 8765978:	90                   	nop
 8765979:	90                   	nop
 876597a:	90                   	nop
 876597b:	90                   	nop
 876597c:	90                   	nop
 876597d:	90                   	nop
 876597e:	90                   	nop
 876597f:	90                   	nop

```

```c
// TaoCrypt::MD2::MD2 @ 0x8765710

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MD2::MD2() */

void __thiscall TaoCrypt::MD2::MD2(MD2 *this)

{
  void *pvVar1;
  uint in_stack_ffffffe8;
  uint uVar2;
  
  *(undefined4 *)(this + 4) = 0x30;
  *(undefined **)this = PTR_vtable_0936ca70 + 8;
  pvVar1 = operator_new__(0x30,in_stack_ffffffe8 & 0xffffff00);
  *(void **)(this + 8) = pvVar1;
  uVar2 = 0;
  memset(pvVar1,0,*(size_t *)(this + 4));
  *(undefined4 *)(this + 0x10) = 0x10;
  pvVar1 = operator_new__(0x10,uVar2 & 0xffffff00);
  *(void **)(this + 0x14) = pvVar1;
  uVar2 = 0;
  memset(pvVar1,0,*(size_t *)(this + 0x10));
  *(undefined4 *)(this + 0x1c) = 0x10;
  pvVar1 = operator_new__(0x10,uVar2 & 0xffffff00);
  *(void **)(this + 0x20) = pvVar1;
  memset(pvVar1,0,*(size_t *)(this + 0x1c));
  Init(this);
  return;
}

```

---

## Update

```asm
// === 08765020 TaoCrypt::MD2::Update  [0x08765020-0x876570f] ===
 8765020:	55                   	push   %ebp
 8765021:	89 e5                	mov    %esp,%ebp
 8765023:	57                   	push   %edi
 8765024:	56                   	push   %esi
 8765025:	53                   	push   %ebx
 8765026:	e8 cd dd fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876502b:	81 c3 6d 7b c0 00    	add    $0xc07b6d,%ebx
 8765031:	83 ec 3c             	sub    $0x3c,%esp
 8765034:	8b 75 08             	mov    0x8(%ebp),%esi
 8765037:	8b 7d 10             	mov    0x10(%ebp),%edi
 876503a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8765040:	85 ff                	test   %edi,%edi
 8765042:	0f 84 c0 06 00 00    	je     8765708 <_ZN8TaoCrypt3MD26UpdateEPKhj+0x6e8>
 8765048:	8b 46 28             	mov    0x28(%esi),%eax
 876504b:	ba 10 00 00 00       	mov    $0x10,%edx
 8765050:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8765053:	29 c2                	sub    %eax,%edx
 8765055:	39 d7                	cmp    %edx,%edi
 8765057:	0f 46 d7             	cmovbe %edi,%edx
 876505a:	03 46 20             	add    0x20(%esi),%eax
 876505d:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8765060:	89 54 24 08          	mov    %edx,0x8(%esp)
 8765064:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8765068:	89 04 24             	mov    %eax,(%esp)
 876506b:	e8 30 88 91 ff       	call   807d8a0 <memcpy@plt>
 8765070:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8765073:	8b 46 28             	mov    0x28(%esi),%eax
 8765076:	01 55 0c             	add    %edx,0xc(%ebp)
 8765079:	29 d7                	sub    %edx,%edi
 876507b:	01 d0                	add    %edx,%eax
 876507d:	83 f8 10             	cmp    $0x10,%eax
 8765080:	89 46 28             	mov    %eax,0x28(%esi)
 8765083:	75 bb                	jne    8765040 <_ZN8TaoCrypt3MD26UpdateEPKhj+0x20>
 8765085:	8b 46 08             	mov    0x8(%esi),%eax
 8765088:	c7 46 28 00 00 00 00 	movl   $0x0,0x28(%esi)
 876508f:	8b 56 08             	mov    0x8(%esi),%edx
 8765092:	83 c0 10             	add    $0x10,%eax
 8765095:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8765098:	8b 46 20             	mov    0x20(%esi),%eax
 876509b:	8b 08                	mov    (%eax),%ecx
 876509d:	89 4a 10             	mov    %ecx,0x10(%edx)
 87650a0:	8b 48 04             	mov    0x4(%eax),%ecx
 87650a3:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87650a6:	89 4a 04             	mov    %ecx,0x4(%edx)
 87650a9:	8b 48 08             	mov    0x8(%eax),%ecx
 87650ac:	89 4a 08             	mov    %ecx,0x8(%edx)
 87650af:	8b 40 0c             	mov    0xc(%eax),%eax
 87650b2:	89 42 0c             	mov    %eax,0xc(%edx)
 87650b5:	8b 56 08             	mov    0x8(%esi),%edx
 87650b8:	8b 46 14             	mov    0x14(%esi),%eax
 87650bb:	0f b6 4a 10          	movzbl 0x10(%edx),%ecx
 87650bf:	32 0a                	xor    (%edx),%cl
 87650c1:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 87650c5:	88 4a 20             	mov    %cl,0x20(%edx)
 87650c8:	8b 4e 20             	mov    0x20(%esi),%ecx
 87650cb:	8b 56 14             	mov    0x14(%esi),%edx
 87650ce:	32 01                	xor    (%ecx),%al
 87650d0:	0f b6 c0             	movzbl %al,%eax
 87650d3:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87650da:	ff 
 87650db:	32 02                	xor    (%edx),%al
 87650dd:	88 02                	mov    %al,(%edx)
 87650df:	8b 56 08             	mov    0x8(%esi),%edx
 87650e2:	0f b6 4a 01          	movzbl 0x1(%edx),%ecx
 87650e6:	32 4a 11             	xor    0x11(%edx),%cl
 87650e9:	88 4a 21             	mov    %cl,0x21(%edx)
 87650ec:	8b 4e 20             	mov    0x20(%esi),%ecx
 87650ef:	8b 56 14             	mov    0x14(%esi),%edx
 87650f2:	32 41 01             	xor    0x1(%ecx),%al
 87650f5:	0f b6 c0             	movzbl %al,%eax
 87650f8:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87650ff:	ff 
 8765100:	32 42 01             	xor    0x1(%edx),%al
 8765103:	88 42 01             	mov    %al,0x1(%edx)
 8765106:	8b 56 08             	mov    0x8(%esi),%edx
 8765109:	0f b6 4a 02          	movzbl 0x2(%edx),%ecx
 876510d:	32 4a 12             	xor    0x12(%edx),%cl
 8765110:	88 4a 22             	mov    %cl,0x22(%edx)
 8765113:	8b 4e 20             	mov    0x20(%esi),%ecx
 8765116:	8b 56 14             	mov    0x14(%esi),%edx
 8765119:	32 41 02             	xor    0x2(%ecx),%al
 876511c:	0f b6 c0             	movzbl %al,%eax
 876511f:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 8765126:	ff 
 8765127:	32 42 02             	xor    0x2(%edx),%al
 876512a:	88 42 02             	mov    %al,0x2(%edx)
 876512d:	8b 56 08             	mov    0x8(%esi),%edx
 8765130:	0f b6 4a 03          	movzbl 0x3(%edx),%ecx
 8765134:	32 4a 13             	xor    0x13(%edx),%cl
 8765137:	88 4a 23             	mov    %cl,0x23(%edx)
 876513a:	8b 4e 20             	mov    0x20(%esi),%ecx
 876513d:	8b 56 14             	mov    0x14(%esi),%edx
 8765140:	32 41 03             	xor    0x3(%ecx),%al
 8765143:	0f b6 c0             	movzbl %al,%eax
 8765146:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 876514d:	ff 
 876514e:	32 42 03             	xor    0x3(%edx),%al
 8765151:	88 42 03             	mov    %al,0x3(%edx)
 8765154:	8b 56 08             	mov    0x8(%esi),%edx
 8765157:	0f b6 4a 04          	movzbl 0x4(%edx),%ecx
 876515b:	32 4a 14             	xor    0x14(%edx),%cl
 876515e:	88 4a 24             	mov    %cl,0x24(%edx)
 8765161:	8b 4e 20             	mov    0x20(%esi),%ecx
 8765164:	8b 56 14             	mov    0x14(%esi),%edx
 8765167:	32 41 04             	xor    0x4(%ecx),%al
 876516a:	0f b6 c0             	movzbl %al,%eax
 876516d:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 8765174:	ff 
 8765175:	32 42 04             	xor    0x4(%edx),%al
 8765178:	88 42 04             	mov    %al,0x4(%edx)
 876517b:	8b 56 08             	mov    0x8(%esi),%edx
 876517e:	0f b6 4a 05          	movzbl 0x5(%edx),%ecx
 8765182:	32 4a 15             	xor    0x15(%edx),%cl
 8765185:	88 4a 25             	mov    %cl,0x25(%edx)
 8765188:	8b 4e 20             	mov    0x20(%esi),%ecx
 876518b:	8b 56 14             	mov    0x14(%esi),%edx
 876518e:	32 41 05             	xor    0x5(%ecx),%al
 8765191:	0f b6 c0             	movzbl %al,%eax
 8765194:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 876519b:	ff 
 876519c:	32 42 05             	xor    0x5(%edx),%al
 876519f:	88 42 05             	mov    %al,0x5(%edx)
 87651a2:	8b 56 08             	mov    0x8(%esi),%edx
 87651a5:	0f b6 4a 06          	movzbl 0x6(%edx),%ecx
 87651a9:	32 4a 16             	xor    0x16(%edx),%cl
 87651ac:	88 4a 26             	mov    %cl,0x26(%edx)
 87651af:	8b 4e 20             	mov    0x20(%esi),%ecx
 87651b2:	8b 56 14             	mov    0x14(%esi),%edx
 87651b5:	32 41 06             	xor    0x6(%ecx),%al
 87651b8:	0f b6 c0             	movzbl %al,%eax
 87651bb:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87651c2:	ff 
 87651c3:	32 42 06             	xor    0x6(%edx),%al
 87651c6:	88 42 06             	mov    %al,0x6(%edx)
 87651c9:	8b 56 08             	mov    0x8(%esi),%edx
 87651cc:	0f b6 4a 07          	movzbl 0x7(%edx),%ecx
 87651d0:	32 4a 17             	xor    0x17(%edx),%cl
 87651d3:	88 4a 27             	mov    %cl,0x27(%edx)
 87651d6:	8b 4e 20             	mov    0x20(%esi),%ecx
 87651d9:	8b 56 14             	mov    0x14(%esi),%edx
 87651dc:	32 41 07             	xor    0x7(%ecx),%al
 87651df:	0f b6 c0             	movzbl %al,%eax
 87651e2:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87651e9:	ff 
 87651ea:	32 42 07             	xor    0x7(%edx),%al
 87651ed:	88 42 07             	mov    %al,0x7(%edx)
 87651f0:	8b 56 08             	mov    0x8(%esi),%edx
 87651f3:	0f b6 4a 08          	movzbl 0x8(%edx),%ecx
 87651f7:	32 4a 18             	xor    0x18(%edx),%cl
 87651fa:	88 4a 28             	mov    %cl,0x28(%edx)
 87651fd:	8b 4e 20             	mov    0x20(%esi),%ecx
 8765200:	8b 56 14             	mov    0x14(%esi),%edx
 8765203:	32 41 08             	xor    0x8(%ecx),%al
 8765206:	0f b6 c0             	movzbl %al,%eax
 8765209:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 8765210:	ff 
 8765211:	32 42 08             	xor    0x8(%edx),%al
 8765214:	88 42 08             	mov    %al,0x8(%edx)
 8765217:	8b 56 08             	mov    0x8(%esi),%edx
 876521a:	0f b6 4a 09          	movzbl 0x9(%edx),%ecx
 876521e:	32 4a 19             	xor    0x19(%edx),%cl
 8765221:	88 4a 29             	mov    %cl,0x29(%edx)
 8765224:	8b 4e 20             	mov    0x20(%esi),%ecx
 8765227:	8b 56 14             	mov    0x14(%esi),%edx
 876522a:	32 41 09             	xor    0x9(%ecx),%al
 876522d:	0f b6 c0             	movzbl %al,%eax
 8765230:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 8765237:	ff 
 8765238:	32 42 09             	xor    0x9(%edx),%al
 876523b:	88 42 09             	mov    %al,0x9(%edx)
 876523e:	8b 56 08             	mov    0x8(%esi),%edx
 8765241:	0f b6 4a 0a          	movzbl 0xa(%edx),%ecx
 8765245:	32 4a 1a             	xor    0x1a(%edx),%cl
 8765248:	88 4a 2a             	mov    %cl,0x2a(%edx)
 876524b:	8b 4e 20             	mov    0x20(%esi),%ecx
 876524e:	8b 56 14             	mov    0x14(%esi),%edx
 8765251:	32 41 0a             	xor    0xa(%ecx),%al
 8765254:	0f b6 c0             	movzbl %al,%eax
 8765257:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 876525e:	ff 
 876525f:	32 42 0a             	xor    0xa(%edx),%al
 8765262:	88 42 0a             	mov    %al,0xa(%edx)
 8765265:	8b 56 08             	mov    0x8(%esi),%edx
 8765268:	0f b6 4a 0b          	movzbl 0xb(%edx),%ecx
 876526c:	32 4a 1b             	xor    0x1b(%edx),%cl
 876526f:	88 4a 2b             	mov    %cl,0x2b(%edx)
 8765272:	8b 4e 20             	mov    0x20(%esi),%ecx
 8765275:	8b 56 14             	mov    0x14(%esi),%edx
 8765278:	32 41 0b             	xor    0xb(%ecx),%al
 876527b:	0f b6 c0             	movzbl %al,%eax
 876527e:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 8765285:	ff 
 8765286:	32 42 0b             	xor    0xb(%edx),%al
 8765289:	88 42 0b             	mov    %al,0xb(%edx)
 876528c:	8b 56 08             	mov    0x8(%esi),%edx
 876528f:	0f b6 4a 0c          	movzbl 0xc(%edx),%ecx
 8765293:	32 4a 1c             	xor    0x1c(%edx),%cl
 8765296:	88 4a 2c             	mov    %cl,0x2c(%edx)
 8765299:	8b 4e 20             	mov    0x20(%esi),%ecx
 876529c:	8b 56 14             	mov    0x14(%esi),%edx
 876529f:	32 41 0c             	xor    0xc(%ecx),%al
 87652a2:	0f b6 c0             	movzbl %al,%eax
 87652a5:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87652ac:	ff 
 87652ad:	32 42 0c             	xor    0xc(%edx),%al
 87652b0:	88 42 0c             	mov    %al,0xc(%edx)
 87652b3:	8b 56 08             	mov    0x8(%esi),%edx
 87652b6:	0f b6 4a 0d          	movzbl 0xd(%edx),%ecx
 87652ba:	32 4a 1d             	xor    0x1d(%edx),%cl
 87652bd:	88 4a 2d             	mov    %cl,0x2d(%edx)
 87652c0:	8b 4e 20             	mov    0x20(%esi),%ecx
 87652c3:	8b 56 14             	mov    0x14(%esi),%edx
 87652c6:	32 41 0d             	xor    0xd(%ecx),%al
 87652c9:	0f b6 c0             	movzbl %al,%eax
 87652cc:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87652d3:	ff 
 87652d4:	32 42 0d             	xor    0xd(%edx),%al
 87652d7:	88 42 0d             	mov    %al,0xd(%edx)
 87652da:	8b 56 08             	mov    0x8(%esi),%edx
 87652dd:	0f b6 4a 0e          	movzbl 0xe(%edx),%ecx
 87652e1:	32 4a 1e             	xor    0x1e(%edx),%cl
 87652e4:	88 4a 2e             	mov    %cl,0x2e(%edx)
 87652e7:	8b 4e 20             	mov    0x20(%esi),%ecx
 87652ea:	8b 56 14             	mov    0x14(%esi),%edx
 87652ed:	32 41 0e             	xor    0xe(%ecx),%al
 87652f0:	0f b6 c0             	movzbl %al,%eax
 87652f3:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87652fa:	ff 
 87652fb:	32 42 0e             	xor    0xe(%edx),%al
 87652fe:	88 42 0e             	mov    %al,0xe(%edx)
 8765301:	8b 56 08             	mov    0x8(%esi),%edx
 8765304:	0f b6 4a 0f          	movzbl 0xf(%edx),%ecx
 8765308:	32 4a 1f             	xor    0x1f(%edx),%cl
 876530b:	88 4a 2f             	mov    %cl,0x2f(%edx)
 876530e:	8b 4e 20             	mov    0x20(%esi),%ecx
 8765311:	8b 56 14             	mov    0x14(%esi),%edx
 8765314:	32 41 0f             	xor    0xf(%ecx),%al
 8765317:	0f b6 c0             	movzbl %al,%eax
 876531a:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 8765321:	ff 
 8765322:	30 42 0f             	xor    %al,0xf(%edx)
 8765325:	31 d2                	xor    %edx,%edx
 8765327:	31 c0                	xor    %eax,%eax
 8765329:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8765330:	8b 4e 08             	mov    0x8(%esi),%ecx
 8765333:	0f b6 c0             	movzbl %al,%eax
 8765336:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 876533d:	ff 
 876533e:	32 01                	xor    (%ecx),%al
 8765340:	88 01                	mov    %al,(%ecx)
 8765342:	8b 4e 08             	mov    0x8(%esi),%ecx
 8765345:	0f b6 c0             	movzbl %al,%eax
 8765348:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 876534f:	ff 
 8765350:	32 41 01             	xor    0x1(%ecx),%al
 8765353:	88 41 01             	mov    %al,0x1(%ecx)
 8765356:	8b 4e 08             	mov    0x8(%esi),%ecx
 8765359:	0f b6 c0             	movzbl %al,%eax
 876535c:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 8765363:	ff 
 8765364:	32 41 02             	xor    0x2(%ecx),%al
 8765367:	88 41 02             	mov    %al,0x2(%ecx)
 876536a:	8b 4e 08             	mov    0x8(%esi),%ecx
 876536d:	0f b6 c0             	movzbl %al,%eax
 8765370:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 8765377:	ff 
 8765378:	32 41 03             	xor    0x3(%ecx),%al
 876537b:	88 41 03             	mov    %al,0x3(%ecx)
 876537e:	8b 4e 08             	mov    0x8(%esi),%ecx
 8765381:	0f b6 c0             	movzbl %al,%eax
 8765384:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 876538b:	ff 
 876538c:	32 41 04             	xor    0x4(%ecx),%al
 876538f:	88 41 04             	mov    %al,0x4(%ecx)
 8765392:	8b 4e 08             	mov    0x8(%esi),%ecx
 8765395:	0f b6 c0             	movzbl %al,%eax
 8765398:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 876539f:	ff 
 87653a0:	32 41 05             	xor    0x5(%ecx),%al
 87653a3:	88 41 05             	mov    %al,0x5(%ecx)
 87653a6:	8b 4e 08             	mov    0x8(%esi),%ecx
 87653a9:	0f b6 c0             	movzbl %al,%eax
 87653ac:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87653b3:	ff 
 87653b4:	32 41 06             	xor    0x6(%ecx),%al
 87653b7:	88 41 06             	mov    %al,0x6(%ecx)
 87653ba:	8b 4e 08             	mov    0x8(%esi),%ecx
 87653bd:	0f b6 c0             	movzbl %al,%eax
 87653c0:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87653c7:	ff 
 87653c8:	32 41 07             	xor    0x7(%ecx),%al
 87653cb:	88 41 07             	mov    %al,0x7(%ecx)
 87653ce:	8b 4e 08             	mov    0x8(%esi),%ecx
 87653d1:	0f b6 c0             	movzbl %al,%eax
 87653d4:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87653db:	ff 
 87653dc:	32 41 08             	xor    0x8(%ecx),%al
 87653df:	88 41 08             	mov    %al,0x8(%ecx)
 87653e2:	8b 4e 08             	mov    0x8(%esi),%ecx
 87653e5:	0f b6 c0             	movzbl %al,%eax
 87653e8:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87653ef:	ff 
 87653f0:	32 41 09             	xor    0x9(%ecx),%al
 87653f3:	88 41 09             	mov    %al,0x9(%ecx)
 87653f6:	8b 4e 08             	mov    0x8(%esi),%ecx
 87653f9:	0f b6 c0             	movzbl %al,%eax
 87653fc:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 8765403:	ff 
 8765404:	32 41 0a             	xor    0xa(%ecx),%al
 8765407:	88 41 0a             	mov    %al,0xa(%ecx)
 876540a:	8b 4e 08             	mov    0x8(%esi),%ecx
 876540d:	0f b6 c0             	movzbl %al,%eax
 8765410:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 8765417:	ff 
 8765418:	32 41 0b             	xor    0xb(%ecx),%al
 876541b:	88 41 0b             	mov    %al,0xb(%ecx)
 876541e:	8b 4e 08             	mov    0x8(%esi),%ecx
 8765421:	0f b6 c0             	movzbl %al,%eax
 8765424:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 876542b:	ff 
 876542c:	32 41 0c             	xor    0xc(%ecx),%al
 876542f:	88 41 0c             	mov    %al,0xc(%ecx)
 8765432:	8b 4e 08             	mov    0x8(%esi),%ecx
 8765435:	0f b6 c0             	movzbl %al,%eax
 8765438:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 876543f:	ff 
 8765440:	32 41 0d             	xor    0xd(%ecx),%al
 8765443:	88 41 0d             	mov    %al,0xd(%ecx)
 8765446:	8b 4e 08             	mov    0x8(%esi),%ecx
 8765449:	0f b6 c0             	movzbl %al,%eax
 876544c:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 8765453:	ff 
 8765454:	32 41 0e             	xor    0xe(%ecx),%al
 8765457:	88 41 0e             	mov    %al,0xe(%ecx)
 876545a:	8b 4e 08             	mov    0x8(%esi),%ecx
 876545d:	0f b6 c0             	movzbl %al,%eax
 8765460:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 8765467:	ff 
 8765468:	32 41 0f             	xor    0xf(%ecx),%al
 876546b:	88 41 0f             	mov    %al,0xf(%ecx)
 876546e:	8b 4e 08             	mov    0x8(%esi),%ecx
 8765471:	0f b6 c0             	movzbl %al,%eax
 8765474:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 876547b:	ff 
 876547c:	32 41 10             	xor    0x10(%ecx),%al
 876547f:	88 41 10             	mov    %al,0x10(%ecx)
 8765482:	8b 4e 08             	mov    0x8(%esi),%ecx
 8765485:	0f b6 c0             	movzbl %al,%eax
 8765488:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 876548f:	ff 
 8765490:	32 41 11             	xor    0x11(%ecx),%al
 8765493:	88 41 11             	mov    %al,0x11(%ecx)
 8765496:	8b 4e 08             	mov    0x8(%esi),%ecx
 8765499:	0f b6 c0             	movzbl %al,%eax
 876549c:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87654a3:	ff 
 87654a4:	32 41 12             	xor    0x12(%ecx),%al
 87654a7:	88 41 12             	mov    %al,0x12(%ecx)
 87654aa:	8b 4e 08             	mov    0x8(%esi),%ecx
 87654ad:	0f b6 c0             	movzbl %al,%eax
 87654b0:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87654b7:	ff 
 87654b8:	32 41 13             	xor    0x13(%ecx),%al
 87654bb:	88 41 13             	mov    %al,0x13(%ecx)
 87654be:	8b 4e 08             	mov    0x8(%esi),%ecx
 87654c1:	0f b6 c0             	movzbl %al,%eax
 87654c4:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87654cb:	ff 
 87654cc:	32 41 14             	xor    0x14(%ecx),%al
 87654cf:	88 41 14             	mov    %al,0x14(%ecx)
 87654d2:	8b 4e 08             	mov    0x8(%esi),%ecx
 87654d5:	0f b6 c0             	movzbl %al,%eax
 87654d8:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87654df:	ff 
 87654e0:	32 41 15             	xor    0x15(%ecx),%al
 87654e3:	88 41 15             	mov    %al,0x15(%ecx)
 87654e6:	8b 4e 08             	mov    0x8(%esi),%ecx
 87654e9:	0f b6 c0             	movzbl %al,%eax
 87654ec:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87654f3:	ff 
 87654f4:	32 41 16             	xor    0x16(%ecx),%al
 87654f7:	88 41 16             	mov    %al,0x16(%ecx)
 87654fa:	8b 4e 08             	mov    0x8(%esi),%ecx
 87654fd:	0f b6 c0             	movzbl %al,%eax
 8765500:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 8765507:	ff 
 8765508:	32 41 17             	xor    0x17(%ecx),%al
 876550b:	88 41 17             	mov    %al,0x17(%ecx)
 876550e:	8b 4e 08             	mov    0x8(%esi),%ecx
 8765511:	0f b6 c0             	movzbl %al,%eax
 8765514:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 876551b:	ff 
 876551c:	32 41 18             	xor    0x18(%ecx),%al
 876551f:	88 41 18             	mov    %al,0x18(%ecx)
 8765522:	8b 4e 08             	mov    0x8(%esi),%ecx
 8765525:	0f b6 c0             	movzbl %al,%eax
 8765528:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 876552f:	ff 
 8765530:	32 41 19             	xor    0x19(%ecx),%al
 8765533:	88 41 19             	mov    %al,0x19(%ecx)
 8765536:	8b 4e 08             	mov    0x8(%esi),%ecx
 8765539:	0f b6 c0             	movzbl %al,%eax
 876553c:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 8765543:	ff 
 8765544:	32 41 1a             	xor    0x1a(%ecx),%al
 8765547:	88 41 1a             	mov    %al,0x1a(%ecx)
 876554a:	8b 4e 08             	mov    0x8(%esi),%ecx
 876554d:	0f b6 c0             	movzbl %al,%eax
 8765550:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 8765557:	ff 
 8765558:	32 41 1b             	xor    0x1b(%ecx),%al
 876555b:	88 41 1b             	mov    %al,0x1b(%ecx)
 876555e:	8b 4e 08             	mov    0x8(%esi),%ecx
 8765561:	0f b6 c0             	movzbl %al,%eax
 8765564:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 876556b:	ff 
 876556c:	32 41 1c             	xor    0x1c(%ecx),%al
 876556f:	88 41 1c             	mov    %al,0x1c(%ecx)
 8765572:	8b 4e 08             	mov    0x8(%esi),%ecx
 8765575:	0f b6 c0             	movzbl %al,%eax
 8765578:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 876557f:	ff 
 8765580:	32 41 1d             	xor    0x1d(%ecx),%al
 8765583:	88 41 1d             	mov    %al,0x1d(%ecx)
 8765586:	8b 4e 08             	mov    0x8(%esi),%ecx
 8765589:	0f b6 c0             	movzbl %al,%eax
 876558c:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 8765593:	ff 
 8765594:	32 41 1e             	xor    0x1e(%ecx),%al
 8765597:	88 41 1e             	mov    %al,0x1e(%ecx)
 876559a:	8b 4e 08             	mov    0x8(%esi),%ecx
 876559d:	0f b6 c0             	movzbl %al,%eax
 87655a0:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87655a7:	ff 
 87655a8:	32 41 1f             	xor    0x1f(%ecx),%al
 87655ab:	88 41 1f             	mov    %al,0x1f(%ecx)
 87655ae:	8b 4e 08             	mov    0x8(%esi),%ecx
 87655b1:	0f b6 c0             	movzbl %al,%eax
 87655b4:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87655bb:	ff 
 87655bc:	32 41 20             	xor    0x20(%ecx),%al
 87655bf:	88 41 20             	mov    %al,0x20(%ecx)
 87655c2:	8b 4e 08             	mov    0x8(%esi),%ecx
 87655c5:	0f b6 c0             	movzbl %al,%eax
 87655c8:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87655cf:	ff 
 87655d0:	32 41 21             	xor    0x21(%ecx),%al
 87655d3:	88 41 21             	mov    %al,0x21(%ecx)
 87655d6:	8b 4e 08             	mov    0x8(%esi),%ecx
 87655d9:	0f b6 c0             	movzbl %al,%eax
 87655dc:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87655e3:	ff 
 87655e4:	32 41 22             	xor    0x22(%ecx),%al
 87655e7:	88 41 22             	mov    %al,0x22(%ecx)
 87655ea:	8b 4e 08             	mov    0x8(%esi),%ecx
 87655ed:	0f b6 c0             	movzbl %al,%eax
 87655f0:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87655f7:	ff 
 87655f8:	32 41 23             	xor    0x23(%ecx),%al
 87655fb:	88 41 23             	mov    %al,0x23(%ecx)
 87655fe:	8b 4e 08             	mov    0x8(%esi),%ecx
 8765601:	0f b6 c0             	movzbl %al,%eax
 8765604:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 876560b:	ff 
 876560c:	32 41 24             	xor    0x24(%ecx),%al
 876560f:	88 41 24             	mov    %al,0x24(%ecx)
 8765612:	8b 4e 08             	mov    0x8(%esi),%ecx
 8765615:	0f b6 c0             	movzbl %al,%eax
 8765618:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 876561f:	ff 
 8765620:	32 41 25             	xor    0x25(%ecx),%al
 8765623:	88 41 25             	mov    %al,0x25(%ecx)
 8765626:	8b 4e 08             	mov    0x8(%esi),%ecx
 8765629:	0f b6 c0             	movzbl %al,%eax
 876562c:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 8765633:	ff 
 8765634:	32 41 26             	xor    0x26(%ecx),%al
 8765637:	88 41 26             	mov    %al,0x26(%ecx)
 876563a:	8b 4e 08             	mov    0x8(%esi),%ecx
 876563d:	0f b6 c0             	movzbl %al,%eax
 8765640:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 8765647:	ff 
 8765648:	32 41 27             	xor    0x27(%ecx),%al
 876564b:	88 41 27             	mov    %al,0x27(%ecx)
 876564e:	8b 4e 08             	mov    0x8(%esi),%ecx
 8765651:	0f b6 c0             	movzbl %al,%eax
 8765654:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 876565b:	ff 
 876565c:	32 41 28             	xor    0x28(%ecx),%al
 876565f:	88 41 28             	mov    %al,0x28(%ecx)
 8765662:	8b 4e 08             	mov    0x8(%esi),%ecx
 8765665:	0f b6 c0             	movzbl %al,%eax
 8765668:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 876566f:	ff 
 8765670:	32 41 29             	xor    0x29(%ecx),%al
 8765673:	88 41 29             	mov    %al,0x29(%ecx)
 8765676:	8b 4e 08             	mov    0x8(%esi),%ecx
 8765679:	0f b6 c0             	movzbl %al,%eax
 876567c:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 8765683:	ff 
 8765684:	32 41 2a             	xor    0x2a(%ecx),%al
 8765687:	88 41 2a             	mov    %al,0x2a(%ecx)
 876568a:	8b 4e 08             	mov    0x8(%esi),%ecx
 876568d:	0f b6 c0             	movzbl %al,%eax
 8765690:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 8765697:	ff 
 8765698:	32 41 2b             	xor    0x2b(%ecx),%al
 876569b:	88 41 2b             	mov    %al,0x2b(%ecx)
 876569e:	8b 4e 08             	mov    0x8(%esi),%ecx
 87656a1:	0f b6 c0             	movzbl %al,%eax
 87656a4:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87656ab:	ff 
 87656ac:	32 41 2c             	xor    0x2c(%ecx),%al
 87656af:	88 41 2c             	mov    %al,0x2c(%ecx)
 87656b2:	8b 4e 08             	mov    0x8(%esi),%ecx
 87656b5:	0f b6 c0             	movzbl %al,%eax
 87656b8:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87656bf:	ff 
 87656c0:	32 41 2d             	xor    0x2d(%ecx),%al
 87656c3:	88 41 2d             	mov    %al,0x2d(%ecx)
 87656c6:	8b 4e 08             	mov    0x8(%esi),%ecx
 87656c9:	0f b6 c0             	movzbl %al,%eax
 87656cc:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87656d3:	ff 
 87656d4:	32 41 2e             	xor    0x2e(%ecx),%al
 87656d7:	88 41 2e             	mov    %al,0x2e(%ecx)
 87656da:	8b 4e 08             	mov    0x8(%esi),%ecx
 87656dd:	0f b6 c0             	movzbl %al,%eax
 87656e0:	0f b6 84 03 88 87 99 	movzbl -0x667878(%ebx,%eax,1),%eax
 87656e7:	ff 
 87656e8:	32 41 2f             	xor    0x2f(%ecx),%al
 87656eb:	88 41 2f             	mov    %al,0x2f(%ecx)
 87656ee:	01 d0                	add    %edx,%eax
 87656f0:	83 c2 01             	add    $0x1,%edx
 87656f3:	83 fa 12             	cmp    $0x12,%edx
 87656f6:	0f 85 34 fc ff ff    	jne    8765330 <_ZN8TaoCrypt3MD26UpdateEPKhj+0x310>
 87656fc:	85 ff                	test   %edi,%edi
 87656fe:	0f 85 44 f9 ff ff    	jne    8765048 <_ZN8TaoCrypt3MD26UpdateEPKhj+0x28>
 8765704:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8765708:	83 c4 3c             	add    $0x3c,%esp
 876570b:	5b                   	pop    %ebx
 876570c:	5e                   	pop    %esi
 876570d:	5f                   	pop    %edi
 876570e:	5d                   	pop    %ebp
 876570f:	c3                   	ret

```

```c
// TaoCrypt::MD2::Update @ 0x8765020

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MD2::Update(unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::MD2::Update(MD2 *this,uchar *param_1,uint param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  
  do {
    if (param_2 == 0) {
      return;
    }
    while( true ) {
      uVar4 = 0x10 - *(int *)(this + 0x28);
      if (param_2 <= uVar4) {
        uVar4 = param_2;
      }
      memcpy((void *)(*(int *)(this + 0x28) + *(int *)(this + 0x20)),param_1,uVar4);
      iVar5 = *(int *)(this + 0x28);
      param_1 = param_1 + uVar4;
      param_2 = param_2 - uVar4;
      *(uint *)(this + 0x28) = iVar5 + uVar4;
      if (iVar5 + uVar4 != 0x10) break;
      iVar5 = *(int *)(this + 8);
      *(undefined4 *)(this + 0x28) = 0;
      puVar1 = *(undefined4 **)(this + 0x20);
      *(undefined4 *)(*(int *)(this + 8) + 0x10) = *puVar1;
      *(undefined4 *)(iVar5 + 0x14) = puVar1[1];
      *(undefined4 *)(iVar5 + 0x18) = puVar1[2];
      *(undefined4 *)(iVar5 + 0x1c) = puVar1[3];
      pbVar2 = *(byte **)(this + 8);
      bVar3 = *(byte *)(*(int *)(this + 0x14) + 0xf);
      pbVar2[0x20] = pbVar2[0x10] ^ *pbVar2;
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3 ^ **(byte **)(this + 0x20)] ^
              **(byte **)(this + 0x14);
      **(byte **)(this + 0x14) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x21) = *(byte *)(iVar5 + 1) ^ *(byte *)(iVar5 + 0x11);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 1)] ^ *(byte *)(*(int *)(this + 0x14) + 1);
      *(byte *)(*(int *)(this + 0x14) + 1) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x22) = *(byte *)(iVar5 + 2) ^ *(byte *)(iVar5 + 0x12);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 2)] ^ *(byte *)(*(int *)(this + 0x14) + 2);
      *(byte *)(*(int *)(this + 0x14) + 2) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x23) = *(byte *)(iVar5 + 3) ^ *(byte *)(iVar5 + 0x13);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 3)] ^ *(byte *)(*(int *)(this + 0x14) + 3);
      *(byte *)(*(int *)(this + 0x14) + 3) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x24) = *(byte *)(iVar5 + 4) ^ *(byte *)(iVar5 + 0x14);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 4)] ^ *(byte *)(*(int *)(this + 0x14) + 4);
      *(byte *)(*(int *)(this + 0x14) + 4) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x25) = *(byte *)(iVar5 + 5) ^ *(byte *)(iVar5 + 0x15);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 5)] ^ *(byte *)(*(int *)(this + 0x14) + 5);
      *(byte *)(*(int *)(this + 0x14) + 5) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x26) = *(byte *)(iVar5 + 6) ^ *(byte *)(iVar5 + 0x16);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 6)] ^ *(byte *)(*(int *)(this + 0x14) + 6);
      *(byte *)(*(int *)(this + 0x14) + 6) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x27) = *(byte *)(iVar5 + 7) ^ *(byte *)(iVar5 + 0x17);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 7)] ^ *(byte *)(*(int *)(this + 0x14) + 7);
      *(byte *)(*(int *)(this + 0x14) + 7) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x28) = *(byte *)(iVar5 + 8) ^ *(byte *)(iVar5 + 0x18);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 8)] ^ *(byte *)(*(int *)(this + 0x14) + 8);
      *(byte *)(*(int *)(this + 0x14) + 8) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x29) = *(byte *)(iVar5 + 9) ^ *(byte *)(iVar5 + 0x19);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 9)] ^ *(byte *)(*(int *)(this + 0x14) + 9);
      *(byte *)(*(int *)(this + 0x14) + 9) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x2a) = *(byte *)(iVar5 + 10) ^ *(byte *)(iVar5 + 0x1a);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 10)] ^
              *(byte *)(*(int *)(this + 0x14) + 10);
      *(byte *)(*(int *)(this + 0x14) + 10) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x2b) = *(byte *)(iVar5 + 0xb) ^ *(byte *)(iVar5 + 0x1b);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 0xb)] ^
              *(byte *)(*(int *)(this + 0x14) + 0xb);
      *(byte *)(*(int *)(this + 0x14) + 0xb) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x2c) = *(byte *)(iVar5 + 0xc) ^ *(byte *)(iVar5 + 0x1c);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 0xc)] ^
              *(byte *)(*(int *)(this + 0x14) + 0xc);
      *(byte *)(*(int *)(this + 0x14) + 0xc) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x2d) = *(byte *)(iVar5 + 0xd) ^ *(byte *)(iVar5 + 0x1d);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 0xd)] ^
              *(byte *)(*(int *)(this + 0x14) + 0xd);
      *(byte *)(*(int *)(this + 0x14) + 0xd) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x2e) = *(byte *)(iVar5 + 0xe) ^ *(byte *)(iVar5 + 0x1e);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 0xe)] ^
              *(byte *)(*(int *)(this + 0x14) + 0xe);
      *(byte *)(*(int *)(this + 0x14) + 0xe) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x2f) = *(byte *)(iVar5 + 0xf) ^ *(byte *)(iVar5 + 0x1f);
      *(byte *)(*(int *)(this + 0x14) + 0xf) =
           *(byte *)(*(int *)(this + 0x14) + 0xf) ^
           (&Update(unsigned_char_const*,unsigned_int)::S)
           [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 0xf)];
      iVar5 = 0;
      uVar4 = 0;
      do {
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[uVar4 & 0xff] ^
                **(byte **)(this + 8);
        **(byte **)(this + 8) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 1);
        *(byte *)(*(int *)(this + 8) + 1) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 2);
        *(byte *)(*(int *)(this + 8) + 2) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 3);
        *(byte *)(*(int *)(this + 8) + 3) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 4);
        *(byte *)(*(int *)(this + 8) + 4) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 5);
        *(byte *)(*(int *)(this + 8) + 5) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 6);
        *(byte *)(*(int *)(this + 8) + 6) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 7);
        *(byte *)(*(int *)(this + 8) + 7) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 8);
        *(byte *)(*(int *)(this + 8) + 8) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 9);
        *(byte *)(*(int *)(this + 8) + 9) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 10);
        *(byte *)(*(int *)(this + 8) + 10) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0xb);
        *(byte *)(*(int *)(this + 8) + 0xb) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0xc);
        *(byte *)(*(int *)(this + 8) + 0xc) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0xd);
        *(byte *)(*(int *)(this + 8) + 0xd) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0xe);
        *(byte *)(*(int *)(this + 8) + 0xe) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0xf);
        *(byte *)(*(int *)(this + 8) + 0xf) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x10);
        *(byte *)(*(int *)(this + 8) + 0x10) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x11);
        *(byte *)(*(int *)(this + 8) + 0x11) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x12);
        *(byte *)(*(int *)(this + 8) + 0x12) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x13);
        *(byte *)(*(int *)(this + 8) + 0x13) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x14);
        *(byte *)(*(int *)(this + 8) + 0x14) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x15);
        *(byte *)(*(int *)(this + 8) + 0x15) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x16);
        *(byte *)(*(int *)(this + 8) + 0x16) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x17);
        *(byte *)(*(int *)(this + 8) + 0x17) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x18);
        *(byte *)(*(int *)(this + 8) + 0x18) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x19);
        *(byte *)(*(int *)(this + 8) + 0x19) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x1a);
        *(byte *)(*(int *)(this + 8) + 0x1a) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x1b);
        *(byte *)(*(int *)(this + 8) + 0x1b) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x1c);
        *(byte *)(*(int *)(this + 8) + 0x1c) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x1d);
        *(byte *)(*(int *)(this + 8) + 0x1d) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x1e);
        *(byte *)(*(int *)(this + 8) + 0x1e) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x1f);
        *(byte *)(*(int *)(this + 8) + 0x1f) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x20);
        *(byte *)(*(int *)(this + 8) + 0x20) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x21);
        *(byte *)(*(int *)(this + 8) + 0x21) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x22);
        *(byte *)(*(int *)(this + 8) + 0x22) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x23);
        *(byte *)(*(int *)(this + 8) + 0x23) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x24);
        *(byte *)(*(int *)(this + 8) + 0x24) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x25);
        *(byte *)(*(int *)(this + 8) + 0x25) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x26);
        *(byte *)(*(int *)(this + 8) + 0x26) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x27);
        *(byte *)(*(int *)(this + 8) + 0x27) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x28);
        *(byte *)(*(int *)(this + 8) + 0x28) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x29);
        *(byte *)(*(int *)(this + 8) + 0x29) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x2a);
        *(byte *)(*(int *)(this + 8) + 0x2a) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x2b);
        *(byte *)(*(int *)(this + 8) + 0x2b) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x2c);
        *(byte *)(*(int *)(this + 8) + 0x2c) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x2d);
        *(byte *)(*(int *)(this + 8) + 0x2d) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x2e);
        *(byte *)(*(int *)(this + 8) + 0x2e) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x2f);
        *(byte *)(*(int *)(this + 8) + 0x2f) = bVar3;
        uVar4 = (uint)bVar3 + iVar5;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0x12);
      if (param_2 == 0) {
        return;
      }
    }
  } while( true );
}

```

