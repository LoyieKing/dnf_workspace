# TaoCrypt__HexEncoder

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## Encode

```asm
// === 08756c00 TaoCrypt::HexEncoder::Encode  [0x08756c00-0x8756cbf] ===
 8756c00:	55                   	push   %ebp
 8756c01:	89 e5                	mov    %esp,%ebp
 8756c03:	57                   	push   %edi
 8756c04:	56                   	push   %esi
 8756c05:	53                   	push   %ebx
 8756c06:	83 ec 4c             	sub    $0x4c,%esp
 8756c09:	8b 75 08             	mov    0x8(%ebp),%esi
 8756c0c:	e8 e7 c1 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8756c11:	81 c3 87 5f c1 00    	add    $0xc15f87,%ebx
 8756c17:	8b 46 0c             	mov    0xc(%esi),%eax
 8756c1a:	8b 00                	mov    (%eax),%eax
 8756c1c:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8756c23:	00 
 8756c24:	89 c7                	mov    %eax,%edi
 8756c26:	01 ff                	add    %edi,%edi
 8756c28:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8756c2c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8756c2f:	8b 06                	mov    (%esi),%eax
 8756c31:	89 44 24 08          	mov    %eax,0x8(%esp)
 8756c35:	8b 46 04             	mov    0x4(%esi),%eax
 8756c38:	89 44 24 04          	mov    %eax,0x4(%esp)
 8756c3c:	8d 46 08             	lea    0x8(%esi),%eax
 8756c3f:	89 04 24             	mov    %eax,(%esp)
 8756c42:	e8 89 06 00 00       	call   87572d0 <_ZN8TaoCrypt13StdReallocateIhNS_20AllocatorWithCleanupIhEEEENT0_7pointerERS3_PT_NS3_9size_typeES8_b>
 8756c47:	89 3e                	mov    %edi,(%esi)
 8756c49:	89 46 04             	mov    %eax,0x4(%esi)
 8756c4c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8756c4f:	85 c0                	test   %eax,%eax
 8756c51:	74 54                	je     8756ca7 <_ZN8TaoCrypt10HexEncoder6EncodeEv+0xa7>
 8756c53:	8d 93 1f 87 99 ff    	lea    -0x6678e1(%ebx),%edx
 8756c59:	31 c0                	xor    %eax,%eax
 8756c5b:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8756c5e:	66 90                	xchg   %ax,%ax
 8756c60:	8b 56 0c             	mov    0xc(%esi),%edx
 8756c63:	8b 4a 0c             	mov    0xc(%edx),%ecx
 8756c66:	8d 79 01             	lea    0x1(%ecx),%edi
 8756c69:	89 7a 0c             	mov    %edi,0xc(%edx)
 8756c6c:	8b 52 04             	mov    0x4(%edx),%edx
 8756c6f:	8d 78 01             	lea    0x1(%eax),%edi
 8756c72:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 8756c75:	8b 7d e0             	mov    -0x20(%ebp),%edi
 8756c78:	0f b6 14 0a          	movzbl (%edx,%ecx,1),%edx
 8756c7c:	89 d1                	mov    %edx,%ecx
 8756c7e:	83 e2 0f             	and    $0xf,%edx
 8756c81:	c1 e9 04             	shr    $0x4,%ecx
 8756c84:	0f b6 0c 0f          	movzbl (%edi,%ecx,1),%ecx
 8756c88:	8b 7e 04             	mov    0x4(%esi),%edi
 8756c8b:	88 0c 07             	mov    %cl,(%edi,%eax,1)
 8756c8e:	8b 7d e0             	mov    -0x20(%ebp),%edi
 8756c91:	83 c0 02             	add    $0x2,%eax
 8756c94:	8b 4e 04             	mov    0x4(%esi),%ecx
 8756c97:	0f b6 14 17          	movzbl (%edi,%edx,1),%edx
 8756c9b:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 8756c9e:	88 14 39             	mov    %dl,(%ecx,%edi,1)
 8756ca1:	83 6d e4 01          	subl   $0x1,-0x1c(%ebp)
 8756ca5:	75 b9                	jne    8756c60 <_ZN8TaoCrypt10HexEncoder6EncodeEv+0x60>
 8756ca7:	89 74 24 04          	mov    %esi,0x4(%esp)
 8756cab:	8b 46 0c             	mov    0xc(%esi),%eax
 8756cae:	89 04 24             	mov    %eax,(%esp)
 8756cb1:	e8 7a 1b 00 00       	call   8758830 <_ZN8TaoCrypt6Source5resetERNS_5BlockIhNS_20AllocatorWithCleanupIhEEEE>
 8756cb6:	83 c4 4c             	add    $0x4c,%esp
 8756cb9:	5b                   	pop    %ebx
 8756cba:	5e                   	pop    %esi
 8756cbb:	5f                   	pop    %edi
 8756cbc:	5d                   	pop    %ebp
 8756cbd:	c3                   	ret
 8756cbe:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::HexEncoder::Encode @ 0x8756c00

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::HexEncoder::Encode() */

void __thiscall TaoCrypt::HexEncoder::Encode(HexEncoder *this)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int local_20;
  
  local_20 = **(int **)(this + 0xc);
  uVar5 = StdReallocate<unsigned_char,TaoCrypt::AllocatorWithCleanup<unsigned_char>>
                    (this + 8,*(undefined4 *)(this + 4),*(undefined4 *)this,local_20 * 2,0);
  *(int *)this = local_20 * 2;
  *(undefined4 *)(this + 4) = uVar5;
  if (local_20 != 0) {
    iVar6 = 0;
    do {
      iVar3 = *(int *)(this + 0xc);
      iVar4 = *(int *)(iVar3 + 0xc);
      *(int *)(iVar3 + 0xc) = iVar4 + 1;
      iVar1 = iVar6 + 1;
      bVar2 = *(byte *)(*(int *)(iVar3 + 4) + iVar4);
      *(char *)(*(int *)(this + 4) + iVar6) = "0123456789ABCDEF"[bVar2 >> 4];
      iVar6 = iVar6 + 2;
      *(char *)(*(int *)(this + 4) + iVar1) = "0123456789ABCDEF"[bVar2 & 0xf];
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  Source::reset(*(Source **)(this + 0xc),(Block *)this);
  return;
}

```

