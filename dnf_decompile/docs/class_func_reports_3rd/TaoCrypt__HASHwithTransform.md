# TaoCrypt__HASHwithTransform

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## AddLength

```asm
// === 08758bf0 TaoCrypt::HASHwithTransform::AddLength  [0x08758bf0-0x8758c1f] ===
 8758bf0:	55                   	push   %ebp
 8758bf1:	89 e5                	mov    %esp,%ebp
 8758bf3:	8b 45 08             	mov    0x8(%ebp),%eax
 8758bf6:	8b 55 0c             	mov    0xc(%ebp),%edx
 8758bf9:	8b 48 08             	mov    0x8(%eax),%ecx
 8758bfc:	01 ca                	add    %ecx,%edx
 8758bfe:	39 d1                	cmp    %edx,%ecx
 8758c00:	89 50 08             	mov    %edx,0x8(%eax)
 8758c03:	76 13                	jbe    8758c18 <_ZN8TaoCrypt17HASHwithTransform9AddLengthEj+0x28>
 8758c05:	8b 50 0c             	mov    0xc(%eax),%edx
 8758c08:	83 c2 01             	add    $0x1,%edx
 8758c0b:	89 50 0c             	mov    %edx,0xc(%eax)
 8758c0e:	89 50 0c             	mov    %edx,0xc(%eax)
 8758c11:	5d                   	pop    %ebp
 8758c12:	c3                   	ret
 8758c13:	90                   	nop
 8758c14:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8758c18:	8b 50 0c             	mov    0xc(%eax),%edx
 8758c1b:	89 50 0c             	mov    %edx,0xc(%eax)
 8758c1e:	5d                   	pop    %ebp
 8758c1f:	c3                   	ret

```

```c
// TaoCrypt::HASHwithTransform::AddLength @ 0x8758bf0

/* TaoCrypt::HASHwithTransform::AddLength(unsigned int) */

void __thiscall TaoCrypt::HASHwithTransform::AddLength(HASHwithTransform *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(this + 8);
  uVar3 = param_1 + uVar1;
  *(uint *)(this + 8) = uVar3;
  if (uVar3 < uVar1) {
    iVar2 = *(int *)(this + 0xc);
    *(int *)(this + 0xc) = iVar2 + 1;
    *(int *)(this + 0xc) = iVar2 + 1;
    return;
  }
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(this + 0xc);
  return;
}

```

---

## Final

```asm
// === 08758d90 TaoCrypt::HASHwithTransform::Final  [0x08758d90-0x8758f8f] ===
 8758d90:	55                   	push   %ebp
 8758d91:	89 e5                	mov    %esp,%ebp
 8758d93:	57                   	push   %edi
 8758d94:	56                   	push   %esi
 8758d95:	53                   	push   %ebx
 8758d96:	83 ec 3c             	sub    $0x3c,%esp
 8758d99:	8b 75 08             	mov    0x8(%ebp),%esi
 8758d9c:	e8 57 a0 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8758da1:	81 c3 f7 3d c1 00    	add    $0xc13df7,%ebx
 8758da7:	8b 06                	mov    (%esi),%eax
 8758da9:	8d 7e 30             	lea    0x30(%esi),%edi
 8758dac:	89 34 24             	mov    %esi,(%esp)
 8758daf:	ff 50 14             	call   *0x14(%eax)
 8758db2:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8758db5:	8b 06                	mov    (%esi),%eax
 8758db7:	89 34 24             	mov    %esi,(%esp)
 8758dba:	ff 50 18             	call   *0x18(%eax)
 8758dbd:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8758dc0:	8b 06                	mov    (%esi),%eax
 8758dc2:	89 34 24             	mov    %esi,(%esp)
 8758dc5:	ff 50 20             	call   *0x20(%eax)
 8758dc8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8758dcb:	8b 06                	mov    (%esi),%eax
 8758dcd:	89 34 24             	mov    %esi,(%esp)
 8758dd0:	ff 50 1c             	call   *0x1c(%eax)
 8758dd3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8758dd6:	8b 46 04             	mov    0x4(%esi),%eax
 8758dd9:	89 34 24             	mov    %esi,(%esp)
 8758ddc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8758de0:	e8 0b fe ff ff       	call   8758bf0 <_ZN8TaoCrypt17HASHwithTransform9AddLengthEj>
 8758de5:	8b 46 08             	mov    0x8(%esi),%eax
 8758de8:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 8758def:	89 55 d0             	mov    %edx,-0x30(%ebp)
 8758df2:	8b 56 0c             	mov    0xc(%esi),%edx
 8758df5:	c1 e8 1d             	shr    $0x1d,%eax
 8758df8:	8d 04 d0             	lea    (%eax,%edx,8),%eax
 8758dfb:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8758dfe:	8b 46 04             	mov    0x4(%esi),%eax
 8758e01:	c6 44 06 30 80       	movb   $0x80,0x30(%esi,%eax,1)
 8758e06:	83 c0 01             	add    $0x1,%eax
 8758e09:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
 8758e0c:	89 46 04             	mov    %eax,0x4(%esi)
 8758e0f:	0f 82 fb 00 00 00    	jb     8758f10 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh+0x180>
 8758e15:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8758e18:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8758e1f:	00 
 8758e20:	29 c2                	sub    %eax,%edx
 8758e22:	8d 04 07             	lea    (%edi,%eax,1),%eax
 8758e25:	89 54 24 08          	mov    %edx,0x8(%esp)
 8758e29:	89 04 24             	mov    %eax,(%esp)
 8758e2c:	e8 8f 4e 92 ff       	call   807dcc0 <memset@plt>
 8758e31:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8758e34:	85 d2                	test   %edx,%edx
 8758e36:	0f 84 b4 00 00 00    	je     8758ef0 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh+0x160>
 8758e3c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8758e3f:	c1 e8 02             	shr    $0x2,%eax
 8758e42:	85 c0                	test   %eax,%eax
 8758e44:	74 2f                	je     8758e75 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh+0xe5>
 8758e46:	89 75 e0             	mov    %esi,-0x20(%ebp)
 8758e49:	31 d2                	xor    %edx,%edx
 8758e4b:	89 c6                	mov    %eax,%esi
 8758e4d:	8d 76 00             	lea    0x0(%esi),%esi
 8758e50:	8b 0c 97             	mov    (%edi,%edx,4),%ecx
 8758e53:	89 c8                	mov    %ecx,%eax
 8758e55:	c1 c8 18             	ror    $0x18,%eax
 8758e58:	c1 c9 08             	ror    $0x8,%ecx
 8758e5b:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 8758e60:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 8758e66:	09 c8                	or     %ecx,%eax
 8758e68:	89 04 97             	mov    %eax,(%edi,%edx,4)
 8758e6b:	83 c2 01             	add    $0x1,%edx
 8758e6e:	39 d6                	cmp    %edx,%esi
 8758e70:	77 de                	ja     8758e50 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh+0xc0>
 8758e72:	8b 75 e0             	mov    -0x20(%ebp),%esi
 8758e75:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8758e78:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8758e7b:	89 54 06 30          	mov    %edx,0x30(%esi,%eax,1)
 8758e7f:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8758e82:	89 54 07 04          	mov    %edx,0x4(%edi,%eax,1)
 8758e86:	8b 06                	mov    (%esi),%eax
 8758e88:	89 34 24             	mov    %esi,(%esp)
 8758e8b:	ff 50 24             	call   *0x24(%eax)
 8758e8e:	8b 7d dc             	mov    -0x24(%ebp),%edi
 8758e91:	31 d2                	xor    %edx,%edx
 8758e93:	c1 ef 02             	shr    $0x2,%edi
 8758e96:	85 ff                	test   %edi,%edi
 8758e98:	74 2a                	je     8758ec4 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh+0x134>
 8758e9a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8758ea0:	8b 4c 96 10          	mov    0x10(%esi,%edx,4),%ecx
 8758ea4:	89 c8                	mov    %ecx,%eax
 8758ea6:	c1 c8 18             	ror    $0x18,%eax
 8758ea9:	c1 c9 08             	ror    $0x8,%ecx
 8758eac:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 8758eb1:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 8758eb7:	09 c8                	or     %ecx,%eax
 8758eb9:	89 44 96 10          	mov    %eax,0x10(%esi,%edx,4)
 8758ebd:	83 c2 01             	add    $0x1,%edx
 8758ec0:	39 fa                	cmp    %edi,%edx
 8758ec2:	75 dc                	jne    8758ea0 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh+0x110>
 8758ec4:	8d 46 10             	lea    0x10(%esi),%eax
 8758ec7:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8758eca:	89 44 24 04          	mov    %eax,0x4(%esp)
 8758ece:	8b 45 0c             	mov    0xc(%ebp),%eax
 8758ed1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8758ed5:	89 04 24             	mov    %eax,(%esp)
 8758ed8:	e8 c3 49 92 ff       	call   807d8a0 <memcpy@plt>
 8758edd:	8b 06                	mov    (%esi),%eax
 8758edf:	89 34 24             	mov    %esi,(%esp)
 8758ee2:	ff 50 10             	call   *0x10(%eax)
 8758ee5:	83 c4 3c             	add    $0x3c,%esp
 8758ee8:	5b                   	pop    %ebx
 8758ee9:	5e                   	pop    %esi
 8758eea:	5f                   	pop    %edi
 8758eeb:	5d                   	pop    %ebp
 8758eec:	c3                   	ret
 8758eed:	8d 76 00             	lea    0x0(%esi),%esi
 8758ef0:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8758ef3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8758ef6:	89 44 16 30          	mov    %eax,0x30(%esi,%edx,1)
 8758efa:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8758efd:	89 44 17 04          	mov    %eax,0x4(%edi,%edx,1)
 8758f01:	8b 06                	mov    (%esi),%eax
 8758f03:	89 34 24             	mov    %esi,(%esp)
 8758f06:	ff 50 24             	call   *0x24(%eax)
 8758f09:	eb b9                	jmp    8758ec4 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh+0x134>
 8758f0b:	90                   	nop
 8758f0c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8758f10:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8758f13:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8758f1a:	00 
 8758f1b:	29 c2                	sub    %eax,%edx
 8758f1d:	8d 04 07             	lea    (%edi,%eax,1),%eax
 8758f20:	89 54 24 08          	mov    %edx,0x8(%esp)
 8758f24:	89 04 24             	mov    %eax,(%esp)
 8758f27:	e8 94 4d 92 ff       	call   807dcc0 <memset@plt>
 8758f2c:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8758f2f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8758f32:	85 c9                	test   %ecx,%ecx
 8758f34:	89 46 04             	mov    %eax,0x4(%esi)
 8758f37:	74 34                	je     8758f6d <_ZN8TaoCrypt17HASHwithTransform5FinalEPh+0x1dd>
 8758f39:	c1 e8 02             	shr    $0x2,%eax
 8758f3c:	85 c0                	test   %eax,%eax
 8758f3e:	74 2d                	je     8758f6d <_ZN8TaoCrypt17HASHwithTransform5FinalEPh+0x1dd>
 8758f40:	89 75 cc             	mov    %esi,-0x34(%ebp)
 8758f43:	31 d2                	xor    %edx,%edx
 8758f45:	89 c6                	mov    %eax,%esi
 8758f47:	90                   	nop
 8758f48:	8b 0c 97             	mov    (%edi,%edx,4),%ecx
 8758f4b:	89 c8                	mov    %ecx,%eax
 8758f4d:	c1 c8 18             	ror    $0x18,%eax
 8758f50:	c1 c9 08             	ror    $0x8,%ecx
 8758f53:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 8758f58:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 8758f5e:	09 c8                	or     %ecx,%eax
 8758f60:	89 04 97             	mov    %eax,(%edi,%edx,4)
 8758f63:	83 c2 01             	add    $0x1,%edx
 8758f66:	39 d6                	cmp    %edx,%esi
 8758f68:	77 de                	ja     8758f48 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh+0x1b8>
 8758f6a:	8b 75 cc             	mov    -0x34(%ebp),%esi
 8758f6d:	8b 06                	mov    (%esi),%eax
 8758f6f:	89 34 24             	mov    %esi,(%esp)
 8758f72:	ff 50 24             	call   *0x24(%eax)
 8758f75:	31 c0                	xor    %eax,%eax
 8758f77:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 8758f7e:	e9 92 fe ff ff       	jmp    8758e15 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh+0x85>
 8758f83:	90                   	nop
 8758f84:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8758f8a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::HASHwithTransform::Final @ 0x8758d90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::HASHwithTransform::Final(unsigned char*) */

void __thiscall TaoCrypt::HASHwithTransform::Final(HASHwithTransform *this,uchar *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint __n;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar5 = (**(code **)(*(int *)this + 0x14))(this);
  __n = (**(code **)(*(int *)this + 0x18))(this);
  uVar6 = (**(code **)(*(int *)this + 0x20))(this);
  iVar7 = (**(code **)(*(int *)this + 0x1c))(this);
  AddLength(this,*(uint *)(this + 4));
  iVar2 = *(uint *)(this + 8) * 8;
  iVar1 = (*(uint *)(this + 8) >> 0x1d) + *(int *)(this + 0xc) * 8;
  iVar3 = *(int *)(this + 4);
  this[iVar3 + 0x30] = (HASHwithTransform)0x80;
  uVar8 = iVar3 + 1;
  *(uint *)(this + 4) = uVar8;
  if (uVar6 < uVar8) {
    memset(this + iVar3 + 0x31,0,uVar5 - uVar8);
    *(uint *)(this + 4) = uVar5;
    if ((iVar7 != 0) && (uVar5 >> 2 != 0)) {
      uVar8 = 0;
      do {
        uVar4 = *(uint *)(this + uVar8 * 4 + 0x30);
        *(uint *)(this + uVar8 * 4 + 0x30) =
             uVar4 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar4 << 0x18;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5 >> 2);
    }
    (**(code **)(*(int *)this + 0x24))(this);
    uVar8 = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  memset(this + uVar8 + 0x30,0,uVar6 - uVar8);
  if (iVar7 == 0) {
    *(int *)(this + uVar6 + 0x30) = iVar2;
    *(int *)(this + uVar6 + 0x34) = iVar1;
    (**(code **)(*(int *)this + 0x24))(this);
  }
  else {
    if (uVar5 >> 2 != 0) {
      uVar8 = 0;
      do {
        uVar4 = *(uint *)(this + uVar8 * 4 + 0x30);
        *(uint *)(this + uVar8 * 4 + 0x30) =
             uVar4 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar4 << 0x18;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5 >> 2);
    }
    *(int *)(this + uVar6 + 0x30) = iVar1;
    *(int *)(this + uVar6 + 0x34) = iVar2;
    (**(code **)(*(int *)this + 0x24))(this);
    uVar5 = 0;
    if (__n >> 2 != 0) {
      do {
        uVar6 = *(uint *)(this + uVar5 * 4 + 0x10);
        *(uint *)(this + uVar5 * 4 + 0x10) =
             uVar6 >> 0x18 | (uVar6 & 0xff00) << 8 | uVar6 >> 8 & 0xff00ff00 | uVar6 << 0x18;
        uVar5 = uVar5 + 1;
      } while (uVar5 != __n >> 2);
    }
  }
  memcpy(param_1,this + 0x10,__n);
  (**(code **)(*(int *)this + 0x10))(this);
  return;
}

```

---

## HASHwithTransform

```asm
// === 08758bd0 TaoCrypt::HASHwithTransform::HASHwithTransform  [0x08758bd0-0x8758bef] ===
 8758bd0:	e8 ef b9 fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8758bd5:	81 c1 c3 3f c1 00    	add    $0xc13fc3,%ecx
 8758bdb:	55                   	push   %ebp
 8758bdc:	89 e5                	mov    %esp,%ebp
 8758bde:	8b 81 d0 fe ff ff    	mov    -0x130(%ecx),%eax
 8758be4:	8d 50 08             	lea    0x8(%eax),%edx
 8758be7:	8b 45 08             	mov    0x8(%ebp),%eax
 8758bea:	89 10                	mov    %edx,(%eax)
 8758bec:	5d                   	pop    %ebp
 8758bed:	c3                   	ret
 8758bee:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::HASHwithTransform::HASHwithTransform @ 0x8758bd0

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* TaoCrypt::HASHwithTransform::HASHwithTransform(unsigned int, unsigned int) */

void __thiscall
TaoCrypt::HASHwithTransform::HASHwithTransform(HASHwithTransform *this,uint param_1,uint param_2)

{
  *(undefined **)this = PTR_vtable_0936ca68 + 8;
  return;
}

```

---

## Update

```asm
// === 08758c70 TaoCrypt::HASHwithTransform::Update  [0x08758c70-0x8758d8f] ===
 8758c70:	55                   	push   %ebp
 8758c71:	89 e5                	mov    %esp,%ebp
 8758c73:	57                   	push   %edi
 8758c74:	56                   	push   %esi
 8758c75:	53                   	push   %ebx
 8758c76:	83 ec 3c             	sub    $0x3c,%esp
 8758c79:	8b 55 08             	mov    0x8(%ebp),%edx
 8758c7c:	e8 77 a1 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8758c81:	81 c3 17 3f c1 00    	add    $0xc13f17,%ebx
 8758c87:	8b 75 10             	mov    0x10(%ebp),%esi
 8758c8a:	8b 02                	mov    (%edx),%eax
 8758c8c:	89 55 d0             	mov    %edx,-0x30(%ebp)
 8758c8f:	89 14 24             	mov    %edx,(%esp)
 8758c92:	ff 50 14             	call   *0x14(%eax)
 8758c95:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8758c98:	85 f6                	test   %esi,%esi
 8758c9a:	8d 4a 30             	lea    0x30(%edx),%ecx
 8758c9d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8758ca0:	0f 84 da 00 00 00    	je     8758d80 <_ZN8TaoCrypt17HASHwithTransform6UpdateEPKhj+0x110>
 8758ca6:	89 c7                	mov    %eax,%edi
 8758ca8:	8b 42 04             	mov    0x4(%edx),%eax
 8758cab:	c1 ef 02             	shr    $0x2,%edi
 8758cae:	89 7d dc             	mov    %edi,-0x24(%ebp)
 8758cb1:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 8758cb4:	eb 0a                	jmp    8758cc0 <_ZN8TaoCrypt17HASHwithTransform6UpdateEPKhj+0x50>
 8758cb6:	66 90                	xchg   %ax,%ax
 8758cb8:	85 f6                	test   %esi,%esi
 8758cba:	0f 84 c0 00 00 00    	je     8758d80 <_ZN8TaoCrypt17HASHwithTransform6UpdateEPKhj+0x110>
 8758cc0:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 8758cc3:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8758cc6:	89 55 d0             	mov    %edx,-0x30(%ebp)
 8758cc9:	29 c7                	sub    %eax,%edi
 8758ccb:	39 f7                	cmp    %esi,%edi
 8758ccd:	0f 47 fe             	cmova  %esi,%edi
 8758cd0:	03 45 e0             	add    -0x20(%ebp),%eax
 8758cd3:	29 fe                	sub    %edi,%esi
 8758cd5:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8758cd9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8758cdd:	89 04 24             	mov    %eax,(%esp)
 8758ce0:	e8 bb 4b 92 ff       	call   807d8a0 <memcpy@plt>
 8758ce5:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8758ce8:	01 7d 0c             	add    %edi,0xc(%ebp)
 8758ceb:	8b 42 04             	mov    0x4(%edx),%eax
 8758cee:	01 f8                	add    %edi,%eax
 8758cf0:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
 8758cf3:	89 42 04             	mov    %eax,0x4(%edx)
 8758cf6:	75 c0                	jne    8758cb8 <_ZN8TaoCrypt17HASHwithTransform6UpdateEPKhj+0x48>
 8758cf8:	8b 02                	mov    (%edx),%eax
 8758cfa:	89 14 24             	mov    %edx,(%esp)
 8758cfd:	ff 50 1c             	call   *0x1c(%eax)
 8758d00:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8758d03:	85 c0                	test   %eax,%eax
 8758d05:	74 41                	je     8758d48 <_ZN8TaoCrypt17HASHwithTransform6UpdateEPKhj+0xd8>
 8758d07:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8758d0a:	85 c0                	test   %eax,%eax
 8758d0c:	74 3a                	je     8758d48 <_ZN8TaoCrypt17HASHwithTransform6UpdateEPKhj+0xd8>
 8758d0e:	89 75 d4             	mov    %esi,-0x2c(%ebp)
 8758d11:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8758d14:	31 ff                	xor    %edi,%edi
 8758d16:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8758d19:	89 55 d8             	mov    %edx,-0x28(%ebp)
 8758d1c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8758d20:	8b 14 b9             	mov    (%ecx,%edi,4),%edx
 8758d23:	89 d0                	mov    %edx,%eax
 8758d25:	c1 c8 18             	ror    $0x18,%eax
 8758d28:	c1 ca 08             	ror    $0x8,%edx
 8758d2b:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 8758d30:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 8758d36:	09 d0                	or     %edx,%eax
 8758d38:	89 04 b9             	mov    %eax,(%ecx,%edi,4)
 8758d3b:	83 c7 01             	add    $0x1,%edi
 8758d3e:	39 fe                	cmp    %edi,%esi
 8758d40:	77 de                	ja     8758d20 <_ZN8TaoCrypt17HASHwithTransform6UpdateEPKhj+0xb0>
 8758d42:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8758d45:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 8758d48:	8b 02                	mov    (%edx),%eax
 8758d4a:	89 55 d0             	mov    %edx,-0x30(%ebp)
 8758d4d:	89 14 24             	mov    %edx,(%esp)
 8758d50:	ff 50 24             	call   *0x24(%eax)
 8758d53:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8758d56:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 8758d59:	89 14 24             	mov    %edx,(%esp)
 8758d5c:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8758d60:	e8 8b fe ff ff       	call   8758bf0 <_ZN8TaoCrypt17HASHwithTransform9AddLengthEj>
 8758d65:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8758d68:	31 c0                	xor    %eax,%eax
 8758d6a:	85 f6                	test   %esi,%esi
 8758d6c:	c7 42 04 00 00 00 00 	movl   $0x0,0x4(%edx)
 8758d73:	0f 85 47 ff ff ff    	jne    8758cc0 <_ZN8TaoCrypt17HASHwithTransform6UpdateEPKhj+0x50>
 8758d79:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8758d80:	83 c4 3c             	add    $0x3c,%esp
 8758d83:	5b                   	pop    %ebx
 8758d84:	5e                   	pop    %esi
 8758d85:	5f                   	pop    %edi
 8758d86:	5d                   	pop    %ebp
 8758d87:	c3                   	ret
 8758d88:	90                   	nop
 8758d89:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::HASHwithTransform::Update @ 0x8758c70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::HASHwithTransform::Update(unsigned char const*, unsigned int) */

void __thiscall
TaoCrypt::HASHwithTransform::Update(HASHwithTransform *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = (**(code **)(*(int *)this + 0x14))(this);
  if (param_2 != 0) {
    uVar2 = *(uint *)(this + 4);
    do {
      while( true ) {
        uVar4 = uVar1 - uVar2;
        if (param_2 < uVar1 - uVar2) {
          uVar4 = param_2;
        }
        param_2 = param_2 - uVar4;
        memcpy(this + uVar2 + 0x30,param_1,uVar4);
        param_1 = param_1 + uVar4;
        uVar2 = *(int *)(this + 4) + uVar4;
        *(uint *)(this + 4) = uVar2;
        if (uVar1 != uVar2) break;
        iVar3 = (**(code **)(*(int *)this + 0x1c))(this);
        if ((iVar3 != 0) && (uVar1 >> 2 != 0)) {
          uVar2 = 0;
          do {
            uVar4 = *(uint *)(this + uVar2 * 4 + 0x30);
            *(uint *)(this + uVar2 * 4 + 0x30) =
                 uVar4 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar4 << 0x18;
            uVar2 = uVar2 + 1;
          } while (uVar2 < uVar1 >> 2);
        }
        (**(code **)(*(int *)this + 0x24))(this);
        AddLength(this,uVar1);
        uVar2 = 0;
        *(undefined4 *)(this + 4) = 0;
        if (param_2 == 0) {
          return;
        }
      }
    } while (param_2 != 0);
  }
  return;
}

```

