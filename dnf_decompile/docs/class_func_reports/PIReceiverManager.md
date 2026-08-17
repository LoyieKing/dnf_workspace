# PIReceiverManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## CheckHashReceived

```asm
// === 0808bf7e PIReceiverManager::CheckHashReceived  [0x0808bf7e-0x808c065] ===
 808bf7e:	55                   	push   %ebp
 808bf7f:	89 e5                	mov    %esp,%ebp
 808bf81:	83 ec 38             	sub    $0x38,%esp
 808bf84:	8b 45 18             	mov    0x18(%ebp),%eax
 808bf87:	88 45 e4             	mov    %al,-0x1c(%ebp)
 808bf8a:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 808bf8e:	74 07                	je     808bf97 <_ZN17PIReceiverManager17CheckHashReceivedEPhjjb+0x19>
 808bf90:	8b 45 08             	mov    0x8(%ebp),%eax
 808bf93:	c6 40 04 27          	movb   $0x27,0x4(%eax)
 808bf97:	8b 45 14             	mov    0x14(%ebp),%eax
 808bf9a:	c1 e8 08             	shr    $0x8,%eax
 808bf9d:	66 89 45 f0          	mov    %ax,-0x10(%ebp)
 808bfa1:	8b 45 08             	mov    0x8(%ebp),%eax
 808bfa4:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 808bfa8:	88 45 f3             	mov    %al,-0xd(%ebp)
 808bfab:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
 808bfaf:	25 00 30 00 00       	and    $0x3000,%eax
 808bfb4:	c1 f8 0c             	sar    $0xc,%eax
 808bfb7:	89 c2                	mov    %eax,%edx
 808bfb9:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
 808bfbd:	83 e0 30             	and    $0x30,%eax
 808bfc0:	c1 f8 02             	sar    $0x2,%eax
 808bfc3:	09 c2                	or     %eax,%edx
 808bfc5:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
 808bfc9:	25 00 03 00 00       	and    $0x300,%eax
 808bfce:	c1 f8 04             	sar    $0x4,%eax
 808bfd1:	09 c2                	or     %eax,%edx
 808bfd3:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
 808bfd7:	c1 e0 06             	shl    $0x6,%eax
 808bfda:	09 d0                	or     %edx,%eax
 808bfdc:	88 45 f4             	mov    %al,-0xc(%ebp)
 808bfdf:	8b 45 08             	mov    0x8(%ebp),%eax
 808bfe2:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
 808bfe6:	88 50 04             	mov    %dl,0x4(%eax)
 808bfe9:	c6 45 f5 00          	movb   $0x0,-0xb(%ebp)
 808bfed:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
 808bff1:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
 808bff5:	25 c0 00 00 00       	and    $0xc0,%eax
 808bffa:	c1 f8 06             	sar    $0x6,%eax
 808bffd:	89 c2                	mov    %eax,%edx
 808bfff:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
 808c003:	25 00 c0 00 00       	and    $0xc000,%eax
 808c008:	c1 f8 0c             	sar    $0xc,%eax
 808c00b:	09 c2                	or     %eax,%edx
 808c00d:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
 808c011:	83 e0 0c             	and    $0xc,%eax
 808c014:	c1 e0 02             	shl    $0x2,%eax
 808c017:	09 c2                	or     %eax,%edx
 808c019:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
 808c01d:	25 00 0c 00 00       	and    $0xc00,%eax
 808c022:	c1 f8 04             	sar    $0x4,%eax
 808c025:	09 d0                	or     %edx,%eax
 808c027:	88 45 f7             	mov    %al,-0x9(%ebp)
 808c02a:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 808c02e:	75 06                	jne    808c036 <_ZN17PIReceiverManager17CheckHashReceivedEPhjjb+0xb8>
 808c030:	c6 45 f5 01          	movb   $0x1,-0xb(%ebp)
 808c034:	eb 2a                	jmp    808c060 <_ZN17PIReceiverManager17CheckHashReceivedEPhjjb+0xe2>
 808c036:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 808c03a:	89 44 24 08          	mov    %eax,0x8(%esp)
 808c03e:	8b 45 10             	mov    0x10(%ebp),%eax
 808c041:	89 44 24 04          	mov    %eax,0x4(%esp)
 808c045:	8b 45 0c             	mov    0xc(%ebp),%eax
 808c048:	89 04 24             	mov    %eax,(%esp)
 808c04b:	e8 c1 02 00 00       	call   808c311 <_Z8MakeHashPhjh>
 808c050:	88 45 f6             	mov    %al,-0xa(%ebp)
 808c053:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
 808c057:	3a 45 f7             	cmp    -0x9(%ebp),%al
 808c05a:	0f 94 c0             	sete   %al
 808c05d:	88 45 f5             	mov    %al,-0xb(%ebp)
 808c060:	0f b6 45 f5          	movzbl -0xb(%ebp),%eax
 808c064:	c9                   	leave
 808c065:	c3                   	ret

```

```c
// PIReceiverManager::CheckHashReceived @ 0x808bf7e

/* PIReceiverManager::CheckHashReceived(unsigned char*, unsigned int, unsigned int, bool) */

bool __thiscall
PIReceiverManager::CheckHashReceived
          (PIReceiverManager *this,uchar *param_1,uint param_2,uint param_3,bool param_4)

{
  PIReceiverManager PVar1;
  byte bVar2;
  ushort uVar3;
  bool local_f;
  
  if (param_4) {
    this[4] = (PIReceiverManager)0x27;
  }
  uVar3 = (ushort)(param_3 >> 8);
  PVar1 = this[4];
  this[4] = (PIReceiverManager)
            ((char)(param_3 >> 8) << 6 |
            (byte)((int)(uVar3 & 0x3000) >> 0xc) | (byte)((int)(uVar3 & 0x30) >> 2) |
            (byte)((int)(uVar3 & 0x300) >> 4));
  if (param_2 == 0) {
    local_f = true;
  }
  else {
    bVar2 = MakeHash(param_1,param_2,(uchar)PVar1);
    local_f = bVar2 == (byte)((byte)((int)(uVar3 & 0xc00) >> 4) |
                             (byte)((int)(uVar3 & 0xc0) >> 6) | (byte)((int)(uVar3 & 0xc000) >> 0xc)
                             | (byte)((uVar3 & 0xc) << 2));
  }
  return local_f;
}

```

---

## PIReceiverManager

```asm
// === 0808bf68 PIReceiverManager::PIReceiverManager  [0x0808bf68-0x808bf7d] ===
 808bf68:	55                   	push   %ebp
 808bf69:	89 e5                	mov    %esp,%ebp
 808bf6b:	8b 45 08             	mov    0x8(%ebp),%eax
 808bf6e:	c7 00 98 34 af 08    	movl   $0x8af3498,(%eax)
 808bf74:	8b 45 08             	mov    0x8(%ebp),%eax
 808bf77:	c6 40 04 27          	movb   $0x27,0x4(%eax)
 808bf7b:	5d                   	pop    %ebp
 808bf7c:	c3                   	ret
 808bf7d:	90                   	nop

```

```c
// PIReceiverManager::PIReceiverManager @ 0x808bf68

/* PIReceiverManager::PIReceiverManager() */

void __thiscall PIReceiverManager::PIReceiverManager(PIReceiverManager *this)

{
  *(undefined ***)this = &PTR__PIReceiverManager_08af3498;
  this[4] = (PIReceiverManager)0x27;
  return;
}

```

