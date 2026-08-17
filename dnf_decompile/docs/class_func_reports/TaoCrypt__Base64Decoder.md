# TaoCrypt__Base64Decoder

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## Decode

```asm
// === 08756cc0 TaoCrypt::Base64Decoder::Decode  [0x08756cc0-0x8756faf] ===
 8756cc0:	55                   	push   %ebp
 8756cc1:	89 e5                	mov    %esp,%ebp
 8756cc3:	57                   	push   %edi
 8756cc4:	56                   	push   %esi
 8756cc5:	53                   	push   %ebx
 8756cc6:	83 ec 7c             	sub    $0x7c,%esp
 8756cc9:	8b 7d 08             	mov    0x8(%ebp),%edi
 8756ccc:	e8 27 c1 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8756cd1:	81 c3 c7 5e c1 00    	add    $0xc15ec7,%ebx
 8756cd7:	8b 47 0c             	mov    0xc(%edi),%eax
 8756cda:	8b 30                	mov    (%eax),%esi
 8756cdc:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8756ce3:	00 
 8756ce4:	8d 56 3f             	lea    0x3f(%esi),%edx
 8756ce7:	c1 ea 06             	shr    $0x6,%edx
 8756cea:	8d 46 01             	lea    0x1(%esi),%eax
 8756ced:	29 d0                	sub    %edx,%eax
 8756cef:	8d 14 40             	lea    (%eax,%eax,2),%edx
 8756cf2:	c1 ea 02             	shr    $0x2,%edx
 8756cf5:	8d 47 08             	lea    0x8(%edi),%eax
 8756cf8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8756cfc:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8756cff:	8b 07                	mov    (%edi),%eax
 8756d01:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 8756d04:	89 55 b0             	mov    %edx,-0x50(%ebp)
 8756d07:	89 44 24 08          	mov    %eax,0x8(%esp)
 8756d0b:	8b 47 04             	mov    0x4(%edi),%eax
 8756d0e:	89 0c 24             	mov    %ecx,(%esp)
 8756d11:	89 44 24 04          	mov    %eax,0x4(%esp)
 8756d15:	e8 b6 05 00 00       	call   87572d0 <_ZN8TaoCrypt13StdReallocateIhNS_20AllocatorWithCleanupIhEEEENT0_7pointerERS3_PT_NS3_9size_typeES8_b>
 8756d1a:	8b 55 b0             	mov    -0x50(%ebp),%edx
 8756d1d:	83 fe 03             	cmp    $0x3,%esi
 8756d20:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8756d27:	89 17                	mov    %edx,(%edi)
 8756d29:	89 47 04             	mov    %eax,0x4(%edi)
 8756d2c:	0f 86 e5 01 00 00    	jbe    8756f17 <_ZN8TaoCrypt13Base64Decoder6DecodeEv+0x257>
 8756d32:	8b 57 0c             	mov    0xc(%edi),%edx
 8756d35:	8b 42 0c             	mov    0xc(%edx),%eax
 8756d38:	8d 48 01             	lea    0x1(%eax),%ecx
 8756d3b:	89 4a 0c             	mov    %ecx,0xc(%edx)
 8756d3e:	8b 4a 04             	mov    0x4(%edx),%ecx
 8756d41:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 8756d44:	0f b6 0c 01          	movzbl (%ecx,%eax,1),%ecx
 8756d48:	88 4d dc             	mov    %cl,-0x24(%ebp)
 8756d4b:	8d 48 02             	lea    0x2(%eax),%ecx
 8756d4e:	89 4a 0c             	mov    %ecx,0xc(%edx)
 8756d51:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8756d54:	80 7d dc 00          	cmpb   $0x0,-0x24(%ebp)
 8756d58:	0f b6 4c 01 01       	movzbl 0x1(%ecx,%eax,1),%ecx
 8756d5d:	88 4d d8             	mov    %cl,-0x28(%ebp)
 8756d60:	8d 48 03             	lea    0x3(%eax),%ecx
 8756d63:	89 4a 0c             	mov    %ecx,0xc(%edx)
 8756d66:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8756d69:	0f b6 4c 01 02       	movzbl 0x2(%ecx,%eax,1),%ecx
 8756d6e:	88 4d e4             	mov    %cl,-0x1c(%ebp)
 8756d71:	8d 48 04             	lea    0x4(%eax),%ecx
 8756d74:	89 4a 0c             	mov    %ecx,0xc(%edx)
 8756d77:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8756d7a:	0f b6 54 01 03       	movzbl 0x3(%ecx,%eax,1),%edx
 8756d7f:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8756d86:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8756d8d:	0f 84 82 01 00 00    	je     8756f15 <_ZN8TaoCrypt13Base64Decoder6DecodeEv+0x255>
 8756d93:	88 55 a6             	mov    %dl,-0x5a(%ebp)
 8756d96:	66 90                	xchg   %ax,%ax
 8756d98:	0f b6 45 dc          	movzbl -0x24(%ebp),%eax
 8756d9c:	80 7d e4 3d          	cmpb   $0x3d,-0x1c(%ebp)
 8756da0:	c6 45 dc 00          	movb   $0x0,-0x24(%ebp)
 8756da4:	c6 45 c8 00          	movb   $0x0,-0x38(%ebp)
 8756da8:	0f b6 84 03 3d 86 99 	movzbl -0x6679c3(%ebx,%eax,1),%eax
 8756daf:	ff 
 8756db0:	88 45 bf             	mov    %al,-0x41(%ebp)
 8756db3:	0f b6 45 d8          	movzbl -0x28(%ebp),%eax
 8756db7:	0f b6 94 03 3d 86 99 	movzbl -0x6679c3(%ebx,%eax,1),%edx
 8756dbe:	ff 
 8756dbf:	74 1a                	je     8756ddb <_ZN8TaoCrypt13Base64Decoder6DecodeEv+0x11b>
 8756dc1:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 8756dc5:	0f b6 8c 03 3d 86 99 	movzbl -0x6679c3(%ebx,%eax,1),%ecx
 8756dcc:	ff 
 8756dcd:	89 c8                	mov    %ecx,%eax
 8756dcf:	c1 e8 02             	shr    $0x2,%eax
 8756dd2:	c1 e1 06             	shl    $0x6,%ecx
 8756dd5:	88 45 c8             	mov    %al,-0x38(%ebp)
 8756dd8:	88 4d dc             	mov    %cl,-0x24(%ebp)
 8756ddb:	80 7d a6 3d          	cmpb   $0x3d,-0x5a(%ebp)
 8756ddf:	c6 45 a7 00          	movb   $0x0,-0x59(%ebp)
 8756de3:	74 0f                	je     8756df4 <_ZN8TaoCrypt13Base64Decoder6DecodeEv+0x134>
 8756de5:	0f b6 45 a6          	movzbl -0x5a(%ebp),%eax
 8756de9:	0f b6 84 03 3d 86 99 	movzbl -0x6679c3(%ebx,%eax,1),%eax
 8756df0:	ff 
 8756df1:	88 45 a7             	mov    %al,-0x59(%ebp)
 8756df4:	0f b6 d2             	movzbl %dl,%edx
 8756df7:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 8756dfb:	89 55 d8             	mov    %edx,-0x28(%ebp)
 8756dfe:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8756e01:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8756e04:	c1 e0 02             	shl    $0x2,%eax
 8756e07:	83 c2 01             	add    $0x1,%edx
 8756e0a:	89 55 c0             	mov    %edx,-0x40(%ebp)
 8756e0d:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8756e10:	c1 fa 04             	sar    $0x4,%edx
 8756e13:	09 d0                	or     %edx,%eax
 8756e15:	8b 57 04             	mov    0x4(%edi),%edx
 8756e18:	88 04 0a             	mov    %al,(%edx,%ecx,1)
 8756e1b:	80 7d e4 3d          	cmpb   $0x3d,-0x1c(%ebp)
 8756e1f:	0f 85 3b 01 00 00    	jne    8756f60 <_ZN8TaoCrypt13Base64Decoder6DecodeEv+0x2a0>
 8756e25:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 8756e28:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 8756e2b:	80 7d a6 3d          	cmpb   $0x3d,-0x5a(%ebp)
 8756e2f:	0f 84 e0 00 00 00    	je     8756f15 <_ZN8TaoCrypt13Base64Decoder6DecodeEv+0x255>
 8756e35:	0f b6 4d a7          	movzbl -0x59(%ebp),%ecx
 8756e39:	83 ee 04             	sub    $0x4,%esi
 8756e3c:	8b 47 04             	mov    0x4(%edi),%eax
 8756e3f:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8756e42:	0a 4d dc             	or     -0x24(%ebp),%cl
 8756e45:	88 0c 10             	mov    %cl,(%eax,%edx,1)
 8756e48:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 8756e4c:	f6 45 c4 0f          	testb  $0xf,-0x3c(%ebp)
 8756e50:	75 64                	jne    8756eb6 <_ZN8TaoCrypt13Base64Decoder6DecodeEv+0x1f6>
 8756e52:	8b 4f 0c             	mov    0xc(%edi),%ecx
 8756e55:	83 ee 01             	sub    $0x1,%esi
 8756e58:	8b 41 0c             	mov    0xc(%ecx),%eax
 8756e5b:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8756e5e:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 8756e62:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8756e65:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8756e68:	8b 41 04             	mov    0x4(%ecx),%eax
 8756e6b:	89 51 0c             	mov    %edx,0xc(%ecx)
 8756e6e:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8756e71:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8756e74:	0f b6 14 10          	movzbl (%eax,%edx,1),%edx
 8756e78:	80 fa 20             	cmp    $0x20,%dl
 8756e7b:	88 55 c8             	mov    %dl,-0x38(%ebp)
 8756e7e:	75 22                	jne    8756ea2 <_ZN8TaoCrypt13Base64Decoder6DecodeEv+0x1e2>
 8756e80:	89 7d dc             	mov    %edi,-0x24(%ebp)
 8756e83:	89 c7                	mov    %eax,%edi
 8756e85:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8756e88:	89 c2                	mov    %eax,%edx
 8756e8a:	83 c0 01             	add    $0x1,%eax
 8756e8d:	89 41 0c             	mov    %eax,0xc(%ecx)
 8756e90:	0f b6 14 17          	movzbl (%edi,%edx,1),%edx
 8756e94:	83 ee 01             	sub    $0x1,%esi
 8756e97:	80 fa 20             	cmp    $0x20,%dl
 8756e9a:	74 ec                	je     8756e88 <_ZN8TaoCrypt13Base64Decoder6DecodeEv+0x1c8>
 8756e9c:	8b 7d dc             	mov    -0x24(%ebp),%edi
 8756e9f:	88 55 c8             	mov    %dl,-0x38(%ebp)
 8756ea2:	80 7d c8 0d          	cmpb   $0xd,-0x38(%ebp)
 8756ea6:	0f 84 d4 00 00 00    	je     8756f80 <_ZN8TaoCrypt13Base64Decoder6DecodeEv+0x2c0>
 8756eac:	80 7d c8 0a          	cmpb   $0xa,-0x38(%ebp)
 8756eb0:	0f 85 ea 00 00 00    	jne    8756fa0 <_ZN8TaoCrypt13Base64Decoder6DecodeEv+0x2e0>
 8756eb6:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8756eba:	83 fe 03             	cmp    $0x3,%esi
 8756ebd:	76 56                	jbe    8756f15 <_ZN8TaoCrypt13Base64Decoder6DecodeEv+0x255>
 8756ebf:	8b 57 0c             	mov    0xc(%edi),%edx
 8756ec2:	8b 42 0c             	mov    0xc(%edx),%eax
 8756ec5:	8d 48 01             	lea    0x1(%eax),%ecx
 8756ec8:	89 4a 0c             	mov    %ecx,0xc(%edx)
 8756ecb:	8b 4a 04             	mov    0x4(%edx),%ecx
 8756ece:	89 4d c0             	mov    %ecx,-0x40(%ebp)
 8756ed1:	0f b6 0c 01          	movzbl (%ecx,%eax,1),%ecx
 8756ed5:	88 4d dc             	mov    %cl,-0x24(%ebp)
 8756ed8:	8d 48 02             	lea    0x2(%eax),%ecx
 8756edb:	89 4a 0c             	mov    %ecx,0xc(%edx)
 8756ede:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 8756ee1:	80 7d dc 00          	cmpb   $0x0,-0x24(%ebp)
 8756ee5:	0f b6 4c 01 01       	movzbl 0x1(%ecx,%eax,1),%ecx
 8756eea:	88 4d d8             	mov    %cl,-0x28(%ebp)
 8756eed:	8d 48 03             	lea    0x3(%eax),%ecx
 8756ef0:	89 4a 0c             	mov    %ecx,0xc(%edx)
 8756ef3:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 8756ef6:	0f b6 4c 01 02       	movzbl 0x2(%ecx,%eax,1),%ecx
 8756efb:	88 4d e4             	mov    %cl,-0x1c(%ebp)
 8756efe:	8d 48 04             	lea    0x4(%eax),%ecx
 8756f01:	89 4a 0c             	mov    %ecx,0xc(%edx)
 8756f04:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8756f07:	0f b6 44 02 03       	movzbl 0x3(%edx,%eax,1),%eax
 8756f0c:	88 45 a6             	mov    %al,-0x5a(%ebp)
 8756f0f:	0f 85 83 fe ff ff    	jne    8756d98 <_ZN8TaoCrypt13Base64Decoder6DecodeEv+0xd8>
 8756f15:	8b 17                	mov    (%edi),%edx
 8756f17:	39 55 e0             	cmp    %edx,-0x20(%ebp)
 8756f1a:	74 2d                	je     8756f49 <_ZN8TaoCrypt13Base64Decoder6DecodeEv+0x289>
 8756f1c:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8756f1f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8756f23:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8756f2a:	00 
 8756f2b:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8756f2f:	8b 47 04             	mov    0x4(%edi),%eax
 8756f32:	89 44 24 04          	mov    %eax,0x4(%esp)
 8756f36:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8756f39:	89 04 24             	mov    %eax,(%esp)
 8756f3c:	e8 8f 03 00 00       	call   87572d0 <_ZN8TaoCrypt13StdReallocateIhNS_20AllocatorWithCleanupIhEEEENT0_7pointerERS3_PT_NS3_9size_typeES8_b>
 8756f41:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8756f44:	89 17                	mov    %edx,(%edi)
 8756f46:	89 47 04             	mov    %eax,0x4(%edi)
 8756f49:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8756f4d:	8b 47 0c             	mov    0xc(%edi),%eax
 8756f50:	89 04 24             	mov    %eax,(%esp)
 8756f53:	e8 d8 18 00 00       	call   8758830 <_ZN8TaoCrypt6Source5resetERNS_5BlockIhNS_20AllocatorWithCleanupIhEEEE>
 8756f58:	83 c4 7c             	add    $0x7c,%esp
 8756f5b:	5b                   	pop    %ebx
 8756f5c:	5e                   	pop    %esi
 8756f5d:	5f                   	pop    %edi
 8756f5e:	5d                   	pop    %ebp
 8756f5f:	c3                   	ret
 8756f60:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8756f63:	8b 4f 04             	mov    0x4(%edi),%ecx
 8756f66:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8756f69:	83 45 e0 02          	addl   $0x2,-0x20(%ebp)
 8756f6d:	c1 e0 04             	shl    $0x4,%eax
 8756f70:	0a 45 c8             	or     -0x38(%ebp),%al
 8756f73:	88 04 11             	mov    %al,(%ecx,%edx,1)
 8756f76:	e9 b0 fe ff ff       	jmp    8756e2b <_ZN8TaoCrypt13Base64Decoder6DecodeEv+0x16b>
 8756f7b:	90                   	nop
 8756f7c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8756f80:	8b 51 0c             	mov    0xc(%ecx),%edx
 8756f83:	83 ee 01             	sub    $0x1,%esi
 8756f86:	8d 42 01             	lea    0x1(%edx),%eax
 8756f89:	89 41 0c             	mov    %eax,0xc(%ecx)
 8756f8c:	8b 41 04             	mov    0x4(%ecx),%eax
 8756f8f:	0f b6 04 10          	movzbl (%eax,%edx,1),%eax
 8756f93:	88 45 c8             	mov    %al,-0x38(%ebp)
 8756f96:	80 7d c8 0a          	cmpb   $0xa,-0x38(%ebp)
 8756f9a:	0f 84 16 ff ff ff    	je     8756eb6 <_ZN8TaoCrypt13Base64Decoder6DecodeEv+0x1f6>
 8756fa0:	c7 41 10 11 04 00 00 	movl   $0x411,0x10(%ecx)
 8756fa7:	83 c4 7c             	add    $0x7c,%esp
 8756faa:	5b                   	pop    %ebx
 8756fab:	5e                   	pop    %esi
 8756fac:	5f                   	pop    %edi
 8756fad:	5d                   	pop    %ebp
 8756fae:	c3                   	ret
 8756faf:	90                   	nop

```

```c
// TaoCrypt::Base64Decoder::Decode @ 0x8756cc0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Base64Decoder::Decode() */

void __thiscall TaoCrypt::Base64Decoder::Decode(Base64Decoder *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  byte bVar10;
  uint uVar11;
  byte local_5d;
  uint local_40;
  byte local_3c;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  uVar5 = **(uint **)(this + 0xc);
  uVar11 = ((uVar5 + 1) - (uVar5 + 0x3f >> 6)) * 3 >> 2;
  uVar9 = StdReallocate<unsigned_char,TaoCrypt::AllocatorWithCleanup<unsigned_char>>
                    (this + 8,*(undefined4 *)(this + 4),*(undefined4 *)this,uVar11,0);
  local_24 = 0;
  *(uint *)this = uVar11;
  *(undefined4 *)(this + 4) = uVar9;
  if (3 < uVar5) {
    iVar6 = *(int *)(this + 0xc);
    iVar7 = *(int *)(iVar6 + 0xc);
    *(int *)(iVar6 + 0xc) = iVar7 + 1;
    iVar8 = *(int *)(iVar6 + 4);
    bVar1 = *(byte *)(iVar8 + iVar7);
    *(int *)(iVar6 + 0xc) = iVar7 + 2;
    bVar10 = *(byte *)(iVar8 + 1 + iVar7);
    *(int *)(iVar6 + 0xc) = iVar7 + 3;
    bVar2 = *(byte *)(iVar8 + 2 + iVar7);
    *(int *)(iVar6 + 0xc) = iVar7 + 4;
    bVar3 = *(byte *)(iVar8 + 3 + iVar7);
    local_40 = 0;
    local_24 = 0;
    while (bVar1 != 0) {
      local_28 = (uint)bVar1;
      local_2c = (uint)bVar10;
      bVar10 = 0;
      local_3c = 0;
      bVar1 = "yaSSL.log"[local_2c + 9];
      if (bVar2 != 0x3d) {
        local_3c = (byte)"yaSSL.log"[bVar2 + 9] >> 2;
        bVar10 = "yaSSL.log"[bVar2 + 9] << 6;
      }
      local_5d = 0;
      if (bVar3 != 0x3d) {
        local_5d = "yaSSL.log"[bVar3 + 9];
      }
      *(byte *)(*(int *)(this + 4) + local_24) =
           "yaSSL.log"[local_28 + 9] << 2 | (byte)((int)(uint)bVar1 >> 4);
      uVar11 = local_24 + 1;
      if (bVar2 != 0x3d) {
        *(byte *)(*(int *)(this + 4) + local_24 + 1) = bVar1 << 4 | local_3c;
        uVar11 = local_24 + 2;
      }
      local_24 = uVar11;
      if (bVar3 == 0x3d) break;
      uVar11 = uVar5 - 4;
      *(byte *)(*(int *)(this + 4) + local_24) = local_5d | bVar10;
      local_40 = local_40 + 1;
      if ((local_40 & 0xf) == 0) {
        iVar7 = *(int *)(this + 0xc);
        uVar11 = uVar5 - 5;
        iVar8 = *(int *)(iVar7 + 0xc);
        iVar6 = iVar8 + 1;
        *(int *)(iVar7 + 0xc) = iVar6;
        cVar4 = *(char *)(*(int *)(iVar7 + 4) + iVar8);
        while (cVar4 == ' ') {
          *(int *)(iVar7 + 0xc) = iVar6 + 1;
          uVar11 = uVar11 - 1;
          cVar4 = *(char *)(*(int *)(iVar7 + 4) + iVar6);
          iVar6 = iVar6 + 1;
        }
        if (cVar4 == '\r') {
          iVar6 = *(int *)(iVar7 + 0xc);
          uVar11 = uVar11 - 1;
          *(int *)(iVar7 + 0xc) = iVar6 + 1;
          cVar4 = *(char *)(*(int *)(iVar7 + 4) + iVar6);
        }
        if (cVar4 != '\n') {
          *(undefined4 *)(iVar7 + 0x10) = 0x411;
          return;
        }
      }
      local_24 = local_24 + 1;
      if (uVar11 < 4) break;
      iVar6 = *(int *)(this + 0xc);
      iVar7 = *(int *)(iVar6 + 0xc);
      *(int *)(iVar6 + 0xc) = iVar7 + 1;
      iVar8 = *(int *)(iVar6 + 4);
      bVar1 = *(byte *)(iVar8 + iVar7);
      *(int *)(iVar6 + 0xc) = iVar7 + 2;
      bVar10 = *(byte *)(iVar8 + 1 + iVar7);
      *(int *)(iVar6 + 0xc) = iVar7 + 3;
      bVar2 = *(byte *)(iVar8 + 2 + iVar7);
      *(int *)(iVar6 + 0xc) = iVar7 + 4;
      bVar3 = *(byte *)(iVar8 + 3 + iVar7);
      uVar5 = uVar11;
    }
    uVar11 = *(uint *)this;
  }
  if (local_24 != uVar11) {
    uVar9 = StdReallocate<unsigned_char,TaoCrypt::AllocatorWithCleanup<unsigned_char>>
                      (this + 8,*(undefined4 *)(this + 4),uVar11,local_24,1);
    *(uint *)this = local_24;
    *(undefined4 *)(this + 4) = uVar9;
  }
  Source::reset(*(Source **)(this + 0xc),(Block *)this);
  return;
}

```

