# PISenderManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## MakeHashForSending

```asm
// === 0808be6e PISenderManager::MakeHashForSending  [0x0808be6e-0x808bf67] ===
 808be6e:	55                   	push   %ebp
 808be6f:	89 e5                	mov    %esp,%ebp
 808be71:	53                   	push   %ebx
 808be72:	83 ec 34             	sub    $0x34,%esp
 808be75:	8b 45 14             	mov    0x14(%ebp),%eax
 808be78:	88 45 e4             	mov    %al,-0x1c(%ebp)
 808be7b:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 808be7f:	74 07                	je     808be88 <_ZN15PISenderManager18MakeHashForSendingEPhjb+0x1a>
 808be81:	8b 45 08             	mov    0x8(%ebp),%eax
 808be84:	c6 40 04 27          	movb   $0x27,0x4(%eax)
 808be88:	8b 45 08             	mov    0x8(%ebp),%eax
 808be8b:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 808be8f:	88 45 ea             	mov    %al,-0x16(%ebp)
 808be92:	e8 09 1e ff ff       	call   807dca0 <rand@plt>
 808be97:	88 45 eb             	mov    %al,-0x15(%ebp)
 808be9a:	8b 45 08             	mov    0x8(%ebp),%eax
 808be9d:	0f b6 55 eb          	movzbl -0x15(%ebp),%edx
 808bea1:	88 50 04             	mov    %dl,0x4(%eax)
 808bea4:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 808beab:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 808beb2:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 808beb6:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 808beba:	75 0a                	jne    808bec6 <_ZN15PISenderManager18MakeHashForSendingEPhjb+0x58>
 808bebc:	e8 df 1d ff ff       	call   807dca0 <rand@plt>
 808bec1:	88 45 f7             	mov    %al,-0x9(%ebp)
 808bec4:	eb 1d                	jmp    808bee3 <_ZN15PISenderManager18MakeHashForSendingEPhjb+0x75>
 808bec6:	0f b6 45 ea          	movzbl -0x16(%ebp),%eax
 808beca:	89 44 24 08          	mov    %eax,0x8(%esp)
 808bece:	8b 45 10             	mov    0x10(%ebp),%eax
 808bed1:	89 44 24 04          	mov    %eax,0x4(%esp)
 808bed5:	8b 45 0c             	mov    0xc(%ebp),%eax
 808bed8:	89 04 24             	mov    %eax,(%esp)
 808bedb:	e8 31 04 00 00       	call   808c311 <_Z8MakeHashPhjh>
 808bee0:	88 45 f7             	mov    %al,-0x9(%ebp)
 808bee3:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 808bee7:	c1 e0 06             	shl    $0x6,%eax
 808beea:	0f b6 d0             	movzbl %al,%edx
 808beed:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 808bef1:	83 e0 0c             	and    $0xc,%eax
 808bef4:	c1 e0 0c             	shl    $0xc,%eax
 808bef7:	09 c2                	or     %eax,%edx
 808bef9:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 808befd:	83 e0 30             	and    $0x30,%eax
 808bf00:	c1 f8 02             	sar    $0x2,%eax
 808bf03:	09 c2                	or     %eax,%edx
 808bf05:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 808bf09:	66 25 c0 00          	and    $0xc0,%ax
 808bf0d:	c1 e0 04             	shl    $0x4,%eax
 808bf10:	09 c2                	or     %eax,%edx
 808bf12:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 808bf16:	83 e0 03             	and    $0x3,%eax
 808bf19:	c1 e0 0c             	shl    $0xc,%eax
 808bf1c:	09 c2                	or     %eax,%edx
 808bf1e:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 808bf22:	83 e0 0c             	and    $0xc,%eax
 808bf25:	c1 e0 02             	shl    $0x2,%eax
 808bf28:	09 c2                	or     %eax,%edx
 808bf2a:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 808bf2e:	83 e0 30             	and    $0x30,%eax
 808bf31:	c1 e0 04             	shl    $0x4,%eax
 808bf34:	09 c2                	or     %eax,%edx
 808bf36:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 808bf3a:	c0 e8 06             	shr    $0x6,%al
 808bf3d:	0f b6 c0             	movzbl %al,%eax
 808bf40:	09 d0                	or     %edx,%eax
 808bf42:	0f b7 c0             	movzwl %ax,%eax
 808bf45:	89 45 ec             	mov    %eax,-0x14(%ebp)
 808bf48:	8b 45 ec             	mov    -0x14(%ebp),%eax
 808bf4b:	89 c3                	mov    %eax,%ebx
 808bf4d:	c1 e3 08             	shl    $0x8,%ebx
 808bf50:	e8 4b 1d ff ff       	call   807dca0 <rand@plt>
 808bf55:	25 ff 00 00 00       	and    $0xff,%eax
 808bf5a:	09 d8                	or     %ebx,%eax
 808bf5c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 808bf5f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 808bf62:	83 c4 34             	add    $0x34,%esp
 808bf65:	5b                   	pop    %ebx
 808bf66:	5d                   	pop    %ebp
 808bf67:	c3                   	ret

```

```c
// PISenderManager::MakeHashForSending @ 0x808be6e

/* PISenderManager::MakeHashForSending(unsigned char*, unsigned int, bool) */

uint __thiscall
PISenderManager::MakeHashForSending(PISenderManager *this,uchar *param_1,uint param_2,bool param_3)

{
  PISenderManager PVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte local_d;
  
  if (param_3) {
    this[4] = (PISenderManager)0x27;
  }
  PVar1 = this[4];
  uVar2 = rand();
  this[4] = SUB41(uVar2,0);
  if (param_2 == 0) {
    iVar3 = rand();
    local_d = (byte)iVar3;
  }
  else {
    local_d = MakeHash(param_1,param_2,(uchar)PVar1);
  }
  uVar4 = rand();
  return uVar4 & 0xff |
         ((uint)((byte)SUB41(uVar2,0) >> 6) |
         (local_d & 3) << 6 | (local_d & 0xc) << 0xc | (int)(local_d & 0x30) >> 2 |
         (uint)(local_d & 0xc0) << 4 | (uVar2 & 3) << 0xc | (uVar2 & 0xc) << 2 | (uVar2 & 0x30) << 4
         ) << 8;
}

```

---

## PISenderManager

```asm
// === 0808be58 PISenderManager::PISenderManager  [0x0808be58-0x808be6d] ===
 808be58:	55                   	push   %ebp
 808be59:	89 e5                	mov    %esp,%ebp
 808be5b:	8b 45 08             	mov    0x8(%ebp),%eax
 808be5e:	c7 00 a8 34 af 08    	movl   $0x8af34a8,(%eax)
 808be64:	8b 45 08             	mov    0x8(%ebp),%eax
 808be67:	c6 40 04 27          	movb   $0x27,0x4(%eax)
 808be6b:	5d                   	pop    %ebp
 808be6c:	c3                   	ret
 808be6d:	90                   	nop

```

```c
// PISenderManager::PISenderManager @ 0x808be58

/* PISenderManager::PISenderManager() */

void __thiscall PISenderManager::PISenderManager(PISenderManager *this)

{
  *(undefined ***)this = &PTR__PISenderManager_08af34a8;
  this[4] = (PISenderManager)0x27;
  return;
}

```

