# DB_UpdatePvPResult

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843091e DB_UpdatePvPResult::dispatch  [0x0843091e-0x843097d] ===
 843091e:	55                   	push   %ebp
 843091f:	89 e5                	mov    %esp,%ebp
 8430921:	8b 45 08             	mov    0x8(%ebp),%eax
 8430924:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 843092a:	8b 45 08             	mov    0x8(%ebp),%eax
 843092d:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8430934:	8b 45 08             	mov    0x8(%ebp),%eax
 8430937:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 843093e:	8b 45 08             	mov    0x8(%ebp),%eax
 8430941:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8430948:	8b 45 08             	mov    0x8(%ebp),%eax
 843094b:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 8430952:	8b 45 08             	mov    0x8(%ebp),%eax
 8430955:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 843095c:	8b 45 08             	mov    0x8(%ebp),%eax
 843095f:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 8430966:	8b 45 08             	mov    0x8(%ebp),%eax
 8430969:	ba 00 00 00 00       	mov    $0x0,%edx
 843096e:	89 50 1c             	mov    %edx,0x1c(%eax)
 8430971:	8b 45 08             	mov    0x8(%ebp),%eax
 8430974:	ba 00 00 00 00       	mov    $0x0,%edx
 8430979:	89 50 20             	mov    %edx,0x20(%eax)
 843097c:	5d                   	pop    %ebp
 843097d:	c3                   	ret

```

```c
// DB_UpdatePvPResult::dispatch @ 0x843091e

/* school_info() */

void __thiscall
DB_UpdatePvPResult::dispatch(int,int,Stream*)::school_info::school_info(school_info *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}

```

---

## dispatch_0843097e

```asm
// === 0843097e DB_UpdatePvPResult::dispatch  [0x0843097e-0x84317b1] ===
 843097e:	55                   	push   %ebp
 843097f:	89 e5                	mov    %esp,%ebp
 8430981:	57                   	push   %edi
 8430982:	56                   	push   %esi
 8430983:	53                   	push   %ebx
 8430984:	81 ec 7c 01 00 00    	sub    $0x17c,%esp
 843098a:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8430990:	89 04 24             	mov    %eax,(%esp)
 8430993:	e8 86 ff ff ff       	call   843091e <_ZZN18DB_UpdatePvPResult8dispatchEiiP6StreamEN11school_infoC1Ev>
 8430998:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 843099e:	89 c3                	mov    %eax,%ebx
 84309a0:	be 01 00 00 00       	mov    $0x1,%esi
 84309a5:	eb 0e                	jmp    84309b5 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x37>
 84309a7:	89 1c 24             	mov    %ebx,(%esp)
 84309aa:	e8 6f ff ff ff       	call   843091e <_ZZN18DB_UpdatePvPResult8dispatchEiiP6StreamEN11school_infoC1Ev>
 84309af:	83 c3 24             	add    $0x24,%ebx
 84309b2:	83 ee 01             	sub    $0x1,%esi
 84309b5:	83 fe ff             	cmp    $0xffffffff,%esi
 84309b8:	0f 95 c0             	setne  %al
 84309bb:	84 c0                	test   %al,%al
 84309bd:	75 e8                	jne    84309a7 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x29>
 84309bf:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84309c6:	e8 d3 b2 c9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84309cb:	89 45 90             	mov    %eax,-0x70(%ebp)
 84309ce:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 84309d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84309d8:	8d 45 90             	lea    -0x70(%ebp),%eax
 84309db:	89 04 24             	mov    %eax,(%esp)
 84309de:	e8 7d d9 c4 ff       	call   807e360 <localtime_r@plt>
 84309e3:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 84309e6:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 84309e9:	8b 40 18             	mov    0x18(%eax),%eax
 84309ec:	89 45 b8             	mov    %eax,-0x48(%ebp)
 84309ef:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 84309f2:	8b 40 0c             	mov    0xc(%eax),%eax
 84309f5:	89 45 bc             	mov    %eax,-0x44(%ebp)
 84309f8:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 84309fb:	c7 40 08 06 00 00 00 	movl   $0x6,0x8(%eax)
 8430a02:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8430a05:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8430a0c:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8430a0f:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8430a15:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8430a18:	89 04 24             	mov    %eax,(%esp)
 8430a1b:	e8 00 de c4 ff       	call   807e820 <mktime@plt>
 8430a20:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8430a23:	8b 45 90             	mov    -0x70(%ebp),%eax
 8430a26:	39 45 c0             	cmp    %eax,-0x40(%ebp)
 8430a29:	7e 07                	jle    8430a32 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0xb4>
 8430a2b:	81 6d c0 80 51 01 00 	subl   $0x15180,-0x40(%ebp)
 8430a32:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8430a35:	2d 80 51 01 00       	sub    $0x15180,%eax
 8430a3a:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8430a3d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8430a42:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8430a49:	00 
 8430a4a:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 8430a51:	00 
 8430a52:	89 04 24             	mov    %eax,(%esp)
 8430a55:	e8 e4 47 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8430a5a:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8430a5d:	8b 45 14             	mov    0x14(%ebp),%eax
 8430a60:	89 04 24             	mov    %eax,(%esp)
 8430a63:	e8 bc 23 02 00       	call   8452e24 <_ZN6Stream12GetOutBufferI16Packet_PvPResultEEPT_v>
 8430a68:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8430a6b:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8430a72:	e9 68 08 00 00       	jmp    84312df <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x961>
 8430a77:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8430a7a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8430a7d:	83 c2 16             	add    $0x16,%edx
 8430a80:	8b 54 90 08          	mov    0x8(%eax,%edx,4),%edx
 8430a84:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 8430a87:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8430a8a:	83 c1 08             	add    $0x8,%ecx
 8430a8d:	8b 44 88 08          	mov    0x8(%eax,%ecx,4),%eax
 8430a91:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8430a95:	89 44 24 08          	mov    %eax,0x8(%esp)
 8430a99:	c7 44 24 04 84 1a c5 	movl   $0x8c51a84,0x4(%esp)
 8430aa0:	08 
 8430aa1:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8430aa4:	89 04 24             	mov    %eax,(%esp)
 8430aa7:	e8 14 37 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8430aac:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8430ab3:	00 
 8430ab4:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8430ab7:	89 04 24             	mov    %eax,(%esp)
 8430aba:	e8 67 38 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8430abf:	83 f0 01             	xor    $0x1,%eax
 8430ac2:	84 c0                	test   %al,%al
 8430ac4:	74 0a                	je     8430ad0 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x152>
 8430ac6:	b8 00 00 00 00       	mov    $0x0,%eax
 8430acb:	e9 d7 0c 00 00       	jmp    84317a7 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0xe29>
 8430ad0:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8430ad3:	89 04 24             	mov    %eax,(%esp)
 8430ad6:	e8 91 18 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8430adb:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8430ade:	83 7d d4 02          	cmpl   $0x2,-0x2c(%ebp)
 8430ae2:	74 0a                	je     8430aee <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x170>
 8430ae4:	b8 00 00 00 00       	mov    $0x0,%eax
 8430ae9:	e9 b9 0c 00 00       	jmp    84317a7 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0xe29>
 8430aee:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8430af5:	e9 73 02 00 00       	jmp    8430d6d <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x3ef>
 8430afa:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8430afd:	89 04 24             	mov    %eax,(%esp)
 8430b00:	e8 b7 39 fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8430b05:	83 f0 01             	xor    $0x1,%eax
 8430b08:	84 c0                	test   %al,%al
 8430b0a:	0f 85 70 02 00 00    	jne    8430d80 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x402>
 8430b10:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8430b16:	89 44 24 08          	mov    %eax,0x8(%esp)
 8430b1a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8430b21:	00 
 8430b22:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8430b25:	89 04 24             	mov    %eax,(%esp)
 8430b28:	e8 ff 5d ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8430b2d:	83 f0 01             	xor    $0x1,%eax
 8430b30:	84 c0                	test   %al,%al
 8430b32:	74 0a                	je     8430b3e <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x1c0>
 8430b34:	b8 00 00 00 00       	mov    $0x0,%eax
 8430b39:	e9 69 0c 00 00       	jmp    84317a7 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0xe29>
 8430b3e:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8430b44:	83 c0 1c             	add    $0x1c,%eax
 8430b47:	89 44 24 08          	mov    %eax,0x8(%esp)
 8430b4b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8430b52:	00 
 8430b53:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8430b56:	89 04 24             	mov    %eax,(%esp)
 8430b59:	e8 72 cb 01 00       	call   844d6d0 <_ZN5MySQL9get_floatEiRf>
 8430b5e:	83 f0 01             	xor    $0x1,%eax
 8430b61:	84 c0                	test   %al,%al
 8430b63:	74 0a                	je     8430b6f <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x1f1>
 8430b65:	b8 00 00 00 00       	mov    $0x0,%eax
 8430b6a:	e9 38 0c 00 00       	jmp    84317a7 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0xe29>
 8430b6f:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8430b75:	83 c0 04             	add    $0x4,%eax
 8430b78:	89 44 24 08          	mov    %eax,0x8(%esp)
 8430b7c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8430b83:	00 
 8430b84:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8430b87:	89 04 24             	mov    %eax,(%esp)
 8430b8a:	e8 9d 5d ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8430b8f:	83 f0 01             	xor    $0x1,%eax
 8430b92:	84 c0                	test   %al,%al
 8430b94:	74 0a                	je     8430ba0 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x222>
 8430b96:	b8 00 00 00 00       	mov    $0x0,%eax
 8430b9b:	e9 07 0c 00 00       	jmp    84317a7 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0xe29>
 8430ba0:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8430ba6:	83 c0 08             	add    $0x8,%eax
 8430ba9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8430bad:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8430bb4:	00 
 8430bb5:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8430bb8:	89 04 24             	mov    %eax,(%esp)
 8430bbb:	e8 6c 5d ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8430bc0:	83 f0 01             	xor    $0x1,%eax
 8430bc3:	84 c0                	test   %al,%al
 8430bc5:	74 0a                	je     8430bd1 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x253>
 8430bc7:	b8 00 00 00 00       	mov    $0x0,%eax
 8430bcc:	e9 d6 0b 00 00       	jmp    84317a7 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0xe29>
 8430bd1:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8430bd7:	83 c0 10             	add    $0x10,%eax
 8430bda:	89 44 24 08          	mov    %eax,0x8(%esp)
 8430bde:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8430be5:	00 
 8430be6:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8430be9:	89 04 24             	mov    %eax,(%esp)
 8430bec:	e8 3b 5d ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8430bf1:	83 f0 01             	xor    $0x1,%eax
 8430bf4:	84 c0                	test   %al,%al
 8430bf6:	74 0a                	je     8430c02 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x284>
 8430bf8:	b8 00 00 00 00       	mov    $0x0,%eax
 8430bfd:	e9 a5 0b 00 00       	jmp    84317a7 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0xe29>
 8430c02:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8430c08:	83 c0 14             	add    $0x14,%eax
 8430c0b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8430c0f:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8430c16:	00 
 8430c17:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8430c1a:	89 04 24             	mov    %eax,(%esp)
 8430c1d:	e8 0a 5d ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8430c22:	83 f0 01             	xor    $0x1,%eax
 8430c25:	84 c0                	test   %al,%al
 8430c27:	74 0a                	je     8430c33 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x2b5>
 8430c29:	b8 00 00 00 00       	mov    $0x0,%eax
 8430c2e:	e9 74 0b 00 00       	jmp    84317a7 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0xe29>
 8430c33:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8430c39:	83 c0 18             	add    $0x18,%eax
 8430c3c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8430c40:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8430c47:	00 
 8430c48:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8430c4b:	89 04 24             	mov    %eax,(%esp)
 8430c4e:	e8 d9 5c ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8430c53:	83 f0 01             	xor    $0x1,%eax
 8430c56:	84 c0                	test   %al,%al
 8430c58:	74 0a                	je     8430c64 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x2e6>
 8430c5a:	b8 00 00 00 00       	mov    $0x0,%eax
 8430c5f:	e9 43 0b 00 00       	jmp    84317a7 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0xe29>
 8430c64:	8b 45 88             	mov    -0x78(%ebp),%eax
 8430c67:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8430c6a:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8430c6d:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8430c70:	83 c2 08             	add    $0x8,%edx
 8430c73:	8b 54 90 08          	mov    0x8(%eax,%edx,4),%edx
 8430c77:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8430c7d:	39 c2                	cmp    %eax,%edx
 8430c7f:	75 65                	jne    8430ce6 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x368>
 8430c81:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8430c87:	89 85 f8 fe ff ff    	mov    %eax,-0x108(%ebp)
 8430c8d:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 8430c93:	89 85 fc fe ff ff    	mov    %eax,-0x104(%ebp)
 8430c99:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 8430c9f:	89 85 00 ff ff ff    	mov    %eax,-0x100(%ebp)
 8430ca5:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 8430cab:	89 85 04 ff ff ff    	mov    %eax,-0xfc(%ebp)
 8430cb1:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8430cb7:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 8430cbd:	8b 45 80             	mov    -0x80(%ebp),%eax
 8430cc0:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 8430cc6:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8430cc9:	89 85 10 ff ff ff    	mov    %eax,-0xf0(%ebp)
 8430ccf:	8b 45 88             	mov    -0x78(%ebp),%eax
 8430cd2:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 8430cd8:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8430cdb:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%ebp)
 8430ce1:	e9 83 00 00 00       	jmp    8430d69 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x3eb>
 8430ce6:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8430ce9:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8430cec:	83 c2 16             	add    $0x16,%edx
 8430cef:	8b 54 90 08          	mov    0x8(%eax,%edx,4),%edx
 8430cf3:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8430cf9:	39 c2                	cmp    %eax,%edx
 8430cfb:	75 62                	jne    8430d5f <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x3e1>
 8430cfd:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8430d03:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
 8430d09:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 8430d0f:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
 8430d15:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 8430d1b:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 8430d21:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 8430d27:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 8430d2d:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8430d33:	89 85 2c ff ff ff    	mov    %eax,-0xd4(%ebp)
 8430d39:	8b 45 80             	mov    -0x80(%ebp),%eax
 8430d3c:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
 8430d42:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8430d45:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 8430d4b:	8b 45 88             	mov    -0x78(%ebp),%eax
 8430d4e:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
 8430d54:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8430d57:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
 8430d5d:	eb 0a                	jmp    8430d69 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x3eb>
 8430d5f:	b8 00 00 00 00       	mov    $0x0,%eax
 8430d64:	e9 3e 0a 00 00       	jmp    84317a7 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0xe29>
 8430d69:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 8430d6d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8430d70:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 8430d73:	0f 9c c0             	setl   %al
 8430d76:	84 c0                	test   %al,%al
 8430d78:	0f 85 7c fd ff ff    	jne    8430afa <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x17c>
 8430d7e:	eb 01                	jmp    8430d81 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x403>
 8430d80:	90                   	nop
 8430d81:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8430d84:	8b 50 0a             	mov    0xa(%eax),%edx
 8430d87:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8430d8a:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 8430d8e:	0f b6 c0             	movzbl %al,%eax
 8430d91:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8430d95:	89 44 24 08          	mov    %eax,0x8(%esp)
 8430d99:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 8430d9f:	83 c0 40             	add    $0x40,%eax
 8430da2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8430da6:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 8430dac:	83 c0 1c             	add    $0x1c,%eax
 8430daf:	89 04 24             	mov    %eax,(%esp)
 8430db2:	e8 ea ce 01 00       	call   844dca1 <_ZN10CEloRating4calcERfS0_22ENUM_ELO_RATING_SYSTEMi>
 8430db7:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8430dbe:	e9 09 05 00 00       	jmp    84312cc <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x94e>
 8430dc3:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8430dc6:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8430dc9:	89 c8                	mov    %ecx,%eax
 8430dcb:	c1 e0 03             	shl    $0x3,%eax
 8430dce:	01 c8                	add    %ecx,%eax
 8430dd0:	c1 e0 02             	shl    $0x2,%eax
 8430dd3:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 8430dd6:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8430dd9:	2d d4 00 00 00       	sub    $0xd4,%eax
 8430dde:	d9 00                	flds   (%eax)
 8430de0:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8430de3:	89 c8                	mov    %ecx,%eax
 8430de5:	c1 e0 03             	shl    $0x3,%eax
 8430de8:	01 c8                	add    %ecx,%eax
 8430dea:	c1 e0 02             	shl    $0x2,%eax
 8430ded:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 8430df0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8430df3:	2d d0 00 00 00       	sub    $0xd0,%eax
 8430df8:	d9 00                	flds   (%eax)
 8430dfa:	de e9                	fsubrp %st,%st(1)
 8430dfc:	d9 bd f6 fe ff ff    	fnstcw -0x10a(%ebp)
 8430e02:	0f b7 85 f6 fe ff ff 	movzwl -0x10a(%ebp),%eax
 8430e09:	b4 0c                	mov    $0xc,%ah
 8430e0b:	66 89 85 f4 fe ff ff 	mov    %ax,-0x10c(%ebp)
 8430e12:	d9 ad f4 fe ff ff    	fldcw  -0x10c(%ebp)
 8430e18:	db 9d f0 fe ff ff    	fistpl -0x110(%ebp)
 8430e1e:	d9 ad f6 fe ff ff    	fldcw  -0x10a(%ebp)
 8430e24:	8b 8d f0 fe ff ff    	mov    -0x110(%ebp),%ecx
 8430e2a:	89 d0                	mov    %edx,%eax
 8430e2c:	c1 e0 03             	shl    $0x3,%eax
 8430e2f:	01 d0                	add    %edx,%eax
 8430e31:	c1 e0 02             	shl    $0x2,%eax
 8430e34:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8430e37:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8430e3a:	2d e4 00 00 00       	sub    $0xe4,%eax
 8430e3f:	89 08                	mov    %ecx,(%eax)
 8430e41:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8430e44:	89 d0                	mov    %edx,%eax
 8430e46:	c1 e0 03             	shl    $0x3,%eax
 8430e49:	01 d0                	add    %edx,%eax
 8430e4b:	c1 e0 02             	shl    $0x2,%eax
 8430e4e:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 8430e51:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8430e54:	2d e8 00 00 00       	sub    $0xe8,%eax
 8430e59:	8b 00                	mov    (%eax),%eax
 8430e5b:	2b 45 c0             	sub    -0x40(%ebp),%eax
 8430e5e:	85 c0                	test   %eax,%eax
 8430e60:	0f 8f 43 01 00 00    	jg     8430fa9 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x62b>
 8430e66:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8430e69:	89 d0                	mov    %edx,%eax
 8430e6b:	c1 e0 03             	shl    $0x3,%eax
 8430e6e:	01 d0                	add    %edx,%eax
 8430e70:	c1 e0 02             	shl    $0x2,%eax
 8430e73:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8430e76:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8430e79:	2d e8 00 00 00       	sub    $0xe8,%eax
 8430e7e:	8b 00                	mov    (%eax),%eax
 8430e80:	2b 45 c4             	sub    -0x3c(%ebp),%eax
 8430e83:	85 c0                	test   %eax,%eax
 8430e85:	0f 8e a6 00 00 00    	jle    8430f31 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x5b3>
 8430e8b:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8430e8e:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8430e91:	89 c8                	mov    %ecx,%eax
 8430e93:	c1 e0 03             	shl    $0x3,%eax
 8430e96:	01 c8                	add    %ecx,%eax
 8430e98:	c1 e0 02             	shl    $0x2,%eax
 8430e9b:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 8430e9e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8430ea1:	2d ec 00 00 00       	sub    $0xec,%eax
 8430ea6:	8b 08                	mov    (%eax),%ecx
 8430ea8:	89 d0                	mov    %edx,%eax
 8430eaa:	c1 e0 03             	shl    $0x3,%eax
 8430ead:	01 d0                	add    %edx,%eax
 8430eaf:	c1 e0 02             	shl    $0x2,%eax
 8430eb2:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8430eb5:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8430eb8:	2d d8 00 00 00       	sub    $0xd8,%eax
 8430ebd:	89 08                	mov    %ecx,(%eax)
 8430ebf:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8430ec2:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8430ec5:	89 c8                	mov    %ecx,%eax
 8430ec7:	c1 e0 03             	shl    $0x3,%eax
 8430eca:	01 c8                	add    %ecx,%eax
 8430ecc:	c1 e0 02             	shl    $0x2,%eax
 8430ecf:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 8430ed2:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8430ed5:	2d e0 00 00 00       	sub    $0xe0,%eax
 8430eda:	8b 08                	mov    (%eax),%ecx
 8430edc:	89 d0                	mov    %edx,%eax
 8430ede:	c1 e0 03             	shl    $0x3,%eax
 8430ee1:	01 d0                	add    %edx,%eax
 8430ee3:	c1 e0 02             	shl    $0x2,%eax
 8430ee6:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8430ee9:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8430eec:	2d dc 00 00 00       	sub    $0xdc,%eax
 8430ef1:	89 08                	mov    %ecx,(%eax)
 8430ef3:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8430ef6:	89 d0                	mov    %edx,%eax
 8430ef8:	c1 e0 03             	shl    $0x3,%eax
 8430efb:	01 d0                	add    %edx,%eax
 8430efd:	c1 e0 02             	shl    $0x2,%eax
 8430f00:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 8430f03:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8430f06:	2d ec 00 00 00       	sub    $0xec,%eax
 8430f0b:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8430f11:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8430f14:	89 d0                	mov    %edx,%eax
 8430f16:	c1 e0 03             	shl    $0x3,%eax
 8430f19:	01 d0                	add    %edx,%eax
 8430f1b:	c1 e0 02             	shl    $0x2,%eax
 8430f1e:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8430f21:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8430f24:	2d e0 00 00 00       	sub    $0xe0,%eax
 8430f29:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8430f2f:	eb 78                	jmp    8430fa9 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x62b>
 8430f31:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8430f34:	89 d0                	mov    %edx,%eax
 8430f36:	c1 e0 03             	shl    $0x3,%eax
 8430f39:	01 d0                	add    %edx,%eax
 8430f3b:	c1 e0 02             	shl    $0x2,%eax
 8430f3e:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 8430f41:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8430f44:	2d d8 00 00 00       	sub    $0xd8,%eax
 8430f49:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8430f4f:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8430f52:	89 d0                	mov    %edx,%eax
 8430f54:	c1 e0 03             	shl    $0x3,%eax
 8430f57:	01 d0                	add    %edx,%eax
 8430f59:	c1 e0 02             	shl    $0x2,%eax
 8430f5c:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8430f5f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8430f62:	2d dc 00 00 00       	sub    $0xdc,%eax
 8430f67:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8430f6d:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8430f70:	89 d0                	mov    %edx,%eax
 8430f72:	c1 e0 03             	shl    $0x3,%eax
 8430f75:	01 d0                	add    %edx,%eax
 8430f77:	c1 e0 02             	shl    $0x2,%eax
 8430f7a:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 8430f7d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8430f80:	2d ec 00 00 00       	sub    $0xec,%eax
 8430f85:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8430f8b:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8430f8e:	89 d0                	mov    %edx,%eax
 8430f90:	c1 e0 03             	shl    $0x3,%eax
 8430f93:	01 d0                	add    %edx,%eax
 8430f95:	c1 e0 02             	shl    $0x2,%eax
 8430f98:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8430f9b:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8430f9e:	2d e0 00 00 00       	sub    $0xe0,%eax
 8430fa3:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8430fa9:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8430fac:	89 d0                	mov    %edx,%eax
 8430fae:	c1 e0 03             	shl    $0x3,%eax
 8430fb1:	01 d0                	add    %edx,%eax
 8430fb3:	c1 e0 02             	shl    $0x2,%eax
 8430fb6:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 8430fb9:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8430fbc:	2d ec 00 00 00       	sub    $0xec,%eax
 8430fc1:	8b 00                	mov    (%eax),%eax
 8430fc3:	8d 48 01             	lea    0x1(%eax),%ecx
 8430fc6:	89 d0                	mov    %edx,%eax
 8430fc8:	c1 e0 03             	shl    $0x3,%eax
 8430fcb:	01 d0                	add    %edx,%eax
 8430fcd:	c1 e0 02             	shl    $0x2,%eax
 8430fd0:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8430fd3:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8430fd6:	2d ec 00 00 00       	sub    $0xec,%eax
 8430fdb:	89 08                	mov    %ecx,(%eax)
 8430fdd:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8430fe0:	89 d0                	mov    %edx,%eax
 8430fe2:	c1 e0 03             	shl    $0x3,%eax
 8430fe5:	01 d0                	add    %edx,%eax
 8430fe7:	c1 e0 02             	shl    $0x2,%eax
 8430fea:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 8430fed:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8430ff0:	2d ec 00 00 00       	sub    $0xec,%eax
 8430ff5:	8b 10                	mov    (%eax),%edx
 8430ff7:	a1 68 bb 3a 09       	mov    0x93abb68,%eax
 8430ffc:	39 c2                	cmp    %eax,%edx
 8430ffe:	75 22                	jne    8431022 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x6a4>
 8431000:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8431003:	8b 0d 60 bb 3a 09    	mov    0x93abb60,%ecx
 8431009:	89 d0                	mov    %edx,%eax
 843100b:	c1 e0 03             	shl    $0x3,%eax
 843100e:	01 d0                	add    %edx,%eax
 8431010:	c1 e0 02             	shl    $0x2,%eax
 8431013:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8431016:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8431019:	2d e0 00 00 00       	sub    $0xe0,%eax
 843101e:	89 08                	mov    %ecx,(%eax)
 8431020:	eb 7f                	jmp    84310a1 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x723>
 8431022:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8431025:	89 d0                	mov    %edx,%eax
 8431027:	c1 e0 03             	shl    $0x3,%eax
 843102a:	01 d0                	add    %edx,%eax
 843102c:	c1 e0 02             	shl    $0x2,%eax
 843102f:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 8431032:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8431035:	2d ec 00 00 00       	sub    $0xec,%eax
 843103a:	8b 00                	mov    (%eax),%eax
 843103c:	83 f8 0f             	cmp    $0xf,%eax
 843103f:	75 60                	jne    84310a1 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x723>
 8431041:	83 7d b8 00          	cmpl   $0x0,-0x48(%ebp)
 8431045:	74 06                	je     843104d <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x6cf>
 8431047:	83 7d b8 06          	cmpl   $0x6,-0x48(%ebp)
 843104b:	75 20                	jne    843106d <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x6ef>
 843104d:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8431050:	8b 0d 64 bb 3a 09    	mov    0x93abb64,%ecx
 8431056:	89 d0                	mov    %edx,%eax
 8431058:	c1 e0 03             	shl    $0x3,%eax
 843105b:	01 d0                	add    %edx,%eax
 843105d:	c1 e0 02             	shl    $0x2,%eax
 8431060:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8431063:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8431066:	2d e0 00 00 00       	sub    $0xe0,%eax
 843106b:	89 08                	mov    %ecx,(%eax)
 843106d:	8b 45 90             	mov    -0x70(%ebp),%eax
 8431070:	3d 50 65 f2 48       	cmp    $0x48f26550,%eax
 8431075:	7e 2a                	jle    84310a1 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x723>
 8431077:	8b 45 90             	mov    -0x70(%ebp),%eax
 843107a:	3d cf fc f8 48       	cmp    $0x48f8fccf,%eax
 843107f:	7f 20                	jg     84310a1 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x723>
 8431081:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8431084:	8b 0d 64 bb 3a 09    	mov    0x93abb64,%ecx
 843108a:	89 d0                	mov    %edx,%eax
 843108c:	c1 e0 03             	shl    $0x3,%eax
 843108f:	01 d0                	add    %edx,%eax
 8431091:	c1 e0 02             	shl    $0x2,%eax
 8431094:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8431097:	8d 04 02             	lea    (%edx,%eax,1),%eax
 843109a:	2d e0 00 00 00       	sub    $0xe0,%eax
 843109f:	89 08                	mov    %ecx,(%eax)
 84310a1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84310a4:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 84310a7:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 84310aa:	01 c0                	add    %eax,%eax
 84310ac:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 84310b3:	29 c2                	sub    %eax,%edx
 84310b5:	8d 04 1a             	lea    (%edx,%ebx,1),%eax
 84310b8:	83 c0 08             	add    $0x8,%eax
 84310bb:	8b 44 81 08          	mov    0x8(%ecx,%eax,4),%eax
 84310bf:	89 85 b4 fe ff ff    	mov    %eax,-0x14c(%ebp)
 84310c5:	8b 7d 90             	mov    -0x70(%ebp),%edi
 84310c8:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84310cb:	89 d0                	mov    %edx,%eax
 84310cd:	c1 e0 03             	shl    $0x3,%eax
 84310d0:	01 d0                	add    %edx,%eax
 84310d2:	c1 e0 02             	shl    $0x2,%eax
 84310d5:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 84310d8:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84310db:	2d d4 00 00 00       	sub    $0xd4,%eax
 84310e0:	d9 00                	flds   (%eax)
 84310e2:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84310e5:	89 d0                	mov    %edx,%eax
 84310e7:	c1 e0 03             	shl    $0x3,%eax
 84310ea:	01 d0                	add    %edx,%eax
 84310ec:	c1 e0 02             	shl    $0x2,%eax
 84310ef:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84310f2:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84310f5:	2d dc 00 00 00       	sub    $0xdc,%eax
 84310fa:	8b 30                	mov    (%eax),%esi
 84310fc:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84310ff:	89 d0                	mov    %edx,%eax
 8431101:	c1 e0 03             	shl    $0x3,%eax
 8431104:	01 d0                	add    %edx,%eax
 8431106:	c1 e0 02             	shl    $0x2,%eax
 8431109:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 843110c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 843110f:	2d d8 00 00 00       	sub    $0xd8,%eax
 8431114:	8b 18                	mov    (%eax),%ebx
 8431116:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8431119:	89 d0                	mov    %edx,%eax
 843111b:	c1 e0 03             	shl    $0x3,%eax
 843111e:	01 d0                	add    %edx,%eax
 8431120:	c1 e0 02             	shl    $0x2,%eax
 8431123:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8431126:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8431129:	2d e0 00 00 00       	sub    $0xe0,%eax
 843112e:	8b 08                	mov    (%eax),%ecx
 8431130:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8431133:	89 d0                	mov    %edx,%eax
 8431135:	c1 e0 03             	shl    $0x3,%eax
 8431138:	01 d0                	add    %edx,%eax
 843113a:	c1 e0 02             	shl    $0x2,%eax
 843113d:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8431140:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8431143:	2d ec 00 00 00       	sub    $0xec,%eax
 8431148:	8b 00                	mov    (%eax),%eax
 843114a:	8b 95 b4 fe ff ff    	mov    -0x14c(%ebp),%edx
 8431150:	89 54 24 24          	mov    %edx,0x24(%esp)
 8431154:	89 7c 24 20          	mov    %edi,0x20(%esp)
 8431158:	dd 5c 24 18          	fstpl  0x18(%esp)
 843115c:	89 74 24 14          	mov    %esi,0x14(%esp)
 8431160:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8431164:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8431168:	89 44 24 08          	mov    %eax,0x8(%esp)
 843116c:	c7 44 24 04 28 1b c5 	movl   $0x8c51b28,0x4(%esp)
 8431173:	08 
 8431174:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8431177:	89 04 24             	mov    %eax,(%esp)
 843117a:	e8 41 30 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843117f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8431186:	00 
 8431187:	8b 45 c8             	mov    -0x38(%ebp),%eax
 843118a:	89 04 24             	mov    %eax,(%esp)
 843118d:	e8 94 31 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8431192:	83 f0 01             	xor    $0x1,%eax
 8431195:	84 c0                	test   %al,%al
 8431197:	74 0a                	je     84311a3 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x825>
 8431199:	b8 00 00 00 00       	mov    $0x0,%eax
 843119e:	e9 04 06 00 00       	jmp    84317a7 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0xe29>
 84311a3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84311a6:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 84311a9:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 84311ac:	01 c0                	add    %eax,%eax
 84311ae:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 84311b5:	29 c2                	sub    %eax,%edx
 84311b7:	8d 04 1a             	lea    (%edx,%ebx,1),%eax
 84311ba:	83 c0 08             	add    $0x8,%eax
 84311bd:	8b 44 81 08          	mov    0x8(%ecx,%eax,4),%eax
 84311c1:	89 85 b8 fe ff ff    	mov    %eax,-0x148(%ebp)
 84311c7:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 84311ca:	89 8d bc fe ff ff    	mov    %ecx,-0x144(%ebp)
 84311d0:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84311d3:	89 d0                	mov    %edx,%eax
 84311d5:	c1 e0 03             	shl    $0x3,%eax
 84311d8:	01 d0                	add    %edx,%eax
 84311da:	c1 e0 02             	shl    $0x2,%eax
 84311dd:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84311e0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84311e3:	2d d4 00 00 00       	sub    $0xd4,%eax
 84311e8:	d9 00                	flds   (%eax)
 84311ea:	dd 9d c0 fe ff ff    	fstpl  -0x140(%ebp)
 84311f0:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84311f3:	89 d0                	mov    %edx,%eax
 84311f5:	c1 e0 03             	shl    $0x3,%eax
 84311f8:	01 d0                	add    %edx,%eax
 84311fa:	c1 e0 02             	shl    $0x2,%eax
 84311fd:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 8431200:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8431203:	2d dc 00 00 00       	sub    $0xdc,%eax
 8431208:	8b 00                	mov    (%eax),%eax
 843120a:	89 85 c8 fe ff ff    	mov    %eax,-0x138(%ebp)
 8431210:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8431213:	89 d0                	mov    %edx,%eax
 8431215:	c1 e0 03             	shl    $0x3,%eax
 8431218:	01 d0                	add    %edx,%eax
 843121a:	c1 e0 02             	shl    $0x2,%eax
 843121d:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8431220:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8431223:	2d d8 00 00 00       	sub    $0xd8,%eax
 8431228:	8b 38                	mov    (%eax),%edi
 843122a:	8b 55 dc             	mov    -0x24(%ebp),%edx
 843122d:	89 d0                	mov    %edx,%eax
 843122f:	c1 e0 03             	shl    $0x3,%eax
 8431232:	01 d0                	add    %edx,%eax
 8431234:	c1 e0 02             	shl    $0x2,%eax
 8431237:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 843123a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 843123d:	2d e0 00 00 00       	sub    $0xe0,%eax
 8431242:	8b 30                	mov    (%eax),%esi
 8431244:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8431247:	89 d0                	mov    %edx,%eax
 8431249:	c1 e0 03             	shl    $0x3,%eax
 843124c:	01 d0                	add    %edx,%eax
 843124e:	c1 e0 02             	shl    $0x2,%eax
 8431251:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8431254:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8431257:	2d ec 00 00 00       	sub    $0xec,%eax
 843125c:	8b 18                	mov    (%eax),%ebx
 843125e:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8431265:	00 
 8431266:	c7 44 24 08 67 78 00 	movl   $0x7867,0x8(%esp)
 843126d:	00 
 843126e:	c7 44 24 04 00 c2 c5 	movl   $0x8c5c200,0x4(%esp)
 8431275:	08 
 8431276:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8431279:	89 04 24             	mov    %eax,(%esp)
 843127c:	e8 97 e4 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8431281:	8b 8d b8 fe ff ff    	mov    -0x148(%ebp),%ecx
 8431287:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 843128b:	8b 85 bc fe ff ff    	mov    -0x144(%ebp),%eax
 8431291:	89 44 24 20          	mov    %eax,0x20(%esp)
 8431295:	dd 85 c0 fe ff ff    	fldl   -0x140(%ebp)
 843129b:	dd 5c 24 18          	fstpl  0x18(%esp)
 843129f:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 84312a5:	89 44 24 14          	mov    %eax,0x14(%esp)
 84312a9:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84312ad:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84312b1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84312b5:	c7 44 24 04 c8 1b c5 	movl   $0x8c51bc8,0x4(%esp)
 84312bc:	08 
 84312bd:	8d 45 94             	lea    -0x6c(%ebp),%eax
 84312c0:	89 04 24             	mov    %eax,(%esp)
 84312c3:	e8 c0 e4 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84312c8:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 84312cc:	83 7d dc 01          	cmpl   $0x1,-0x24(%ebp)
 84312d0:	0f 9e c0             	setle  %al
 84312d3:	84 c0                	test   %al,%al
 84312d5:	0f 85 e8 fa ff ff    	jne    8430dc3 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x445>
 84312db:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 84312df:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84312e2:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 84312e6:	0f b6 c0             	movzbl %al,%eax
 84312e9:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 84312ec:	0f 9f c0             	setg   %al
 84312ef:	84 c0                	test   %al,%al
 84312f1:	0f 85 80 f7 ff ff    	jne    8430a77 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0xf9>
 84312f7:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84312fe:	e9 87 04 00 00       	jmp    843178a <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0xe0c>
 8431303:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 843130a:	e9 68 04 00 00       	jmp    8431777 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0xdf9>
 843130f:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8431312:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8431315:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 8431318:	89 d0                	mov    %edx,%eax
 843131a:	01 c0                	add    %eax,%eax
 843131c:	01 d0                	add    %edx,%eax
 843131e:	89 ca                	mov    %ecx,%edx
 8431320:	c1 e2 03             	shl    $0x3,%edx
 8431323:	8d 0c d5 00 00 00 00 	lea    0x0(,%edx,8),%ecx
 843132a:	29 d1                	sub    %edx,%ecx
 843132c:	01 c8                	add    %ecx,%eax
 843132e:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8431331:	83 c0 1d             	add    $0x1d,%eax
 8431334:	0f b6 00             	movzbl (%eax),%eax
 8431337:	84 c0                	test   %al,%al
 8431339:	75 2c                	jne    8431367 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x9e9>
 843133b:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 843133e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8431341:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 8431344:	89 d0                	mov    %edx,%eax
 8431346:	01 c0                	add    %eax,%eax
 8431348:	01 d0                	add    %edx,%eax
 843134a:	89 ca                	mov    %ecx,%edx
 843134c:	c1 e2 03             	shl    $0x3,%edx
 843134f:	8d 0c d5 00 00 00 00 	lea    0x0(,%edx,8),%ecx
 8431356:	29 d1                	sub    %edx,%ecx
 8431358:	01 c8                	add    %ecx,%eax
 843135a:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 843135d:	83 c0 1e             	add    $0x1e,%eax
 8431360:	0f b6 00             	movzbl (%eax),%eax
 8431363:	84 c0                	test   %al,%al
 8431365:	74 4c                	je     84313b3 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0xa35>
 8431367:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 843136a:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 843136d:	8b 7d cc             	mov    -0x34(%ebp),%edi
 8431370:	89 c8                	mov    %ecx,%eax
 8431372:	01 c0                	add    %eax,%eax
 8431374:	01 c8                	add    %ecx,%eax
 8431376:	89 f2                	mov    %esi,%edx
 8431378:	c1 e2 03             	shl    $0x3,%edx
 843137b:	8d 1c d5 00 00 00 00 	lea    0x0(,%edx,8),%ebx
 8431382:	29 d3                	sub    %edx,%ebx
 8431384:	01 d8                	add    %ebx,%eax
 8431386:	8d 04 07             	lea    (%edi,%eax,1),%eax
 8431389:	83 c0 1c             	add    $0x1c,%eax
 843138c:	0f b6 00             	movzbl (%eax),%eax
 843138f:	8d 58 01             	lea    0x1(%eax),%ebx
 8431392:	8b 7d cc             	mov    -0x34(%ebp),%edi
 8431395:	89 c8                	mov    %ecx,%eax
 8431397:	01 c0                	add    %eax,%eax
 8431399:	01 c8                	add    %ecx,%eax
 843139b:	89 f2                	mov    %esi,%edx
 843139d:	c1 e2 03             	shl    $0x3,%edx
 84313a0:	8d 0c d5 00 00 00 00 	lea    0x0(,%edx,8),%ecx
 84313a7:	29 d1                	sub    %edx,%ecx
 84313a9:	01 c8                	add    %ecx,%eax
 84313ab:	8d 04 07             	lea    (%edi,%eax,1),%eax
 84313ae:	83 c0 1c             	add    $0x1c,%eax
 84313b1:	88 18                	mov    %bl,(%eax)
 84313b3:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 84313b6:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84313b9:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 84313bc:	89 d0                	mov    %edx,%eax
 84313be:	01 c0                	add    %eax,%eax
 84313c0:	01 d0                	add    %edx,%eax
 84313c2:	89 ca                	mov    %ecx,%edx
 84313c4:	c1 e2 03             	shl    $0x3,%edx
 84313c7:	8d 0c d5 00 00 00 00 	lea    0x0(,%edx,8),%ecx
 84313ce:	29 d1                	sub    %edx,%ecx
 84313d0:	01 c8                	add    %ecx,%eax
 84313d2:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 84313d5:	83 c0 12             	add    $0x12,%eax
 84313d8:	0f b6 00             	movzbl (%eax),%eax
 84313db:	0f b6 c0             	movzbl %al,%eax
 84313de:	89 85 cc fe ff ff    	mov    %eax,-0x134(%ebp)
 84313e4:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 84313e7:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84313ea:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 84313ed:	89 d0                	mov    %edx,%eax
 84313ef:	01 c0                	add    %eax,%eax
 84313f1:	01 d0                	add    %edx,%eax
 84313f3:	89 ca                	mov    %ecx,%edx
 84313f5:	c1 e2 03             	shl    $0x3,%edx
 84313f8:	8d 0c d5 00 00 00 00 	lea    0x0(,%edx,8),%ecx
 84313ff:	29 d1                	sub    %edx,%ecx
 8431401:	01 c8                	add    %ecx,%eax
 8431403:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8431406:	83 c0 11             	add    $0x11,%eax
 8431409:	0f b6 00             	movzbl (%eax),%eax
 843140c:	0f b6 c0             	movzbl %al,%eax
 843140f:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 8431415:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8431418:	8b 55 e0             	mov    -0x20(%ebp),%edx
 843141b:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 843141e:	89 d0                	mov    %edx,%eax
 8431420:	01 c0                	add    %eax,%eax
 8431422:	01 d0                	add    %edx,%eax
 8431424:	89 ca                	mov    %ecx,%edx
 8431426:	c1 e2 03             	shl    $0x3,%edx
 8431429:	8d 0c d5 00 00 00 00 	lea    0x0(,%edx,8),%ecx
 8431430:	29 d1                	sub    %edx,%ecx
 8431432:	01 c8                	add    %ecx,%eax
 8431434:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8431437:	83 c0 10             	add    $0x10,%eax
 843143a:	0f b6 00             	movzbl (%eax),%eax
 843143d:	0f b6 c0             	movzbl %al,%eax
 8431440:	89 85 d4 fe ff ff    	mov    %eax,-0x12c(%ebp)
 8431446:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8431449:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843144c:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 843144f:	89 c1                	mov    %eax,%ecx
 8431451:	01 c9                	add    %ecx,%ecx
 8431453:	01 c1                	add    %eax,%ecx
 8431455:	89 d0                	mov    %edx,%eax
 8431457:	c1 e0 03             	shl    $0x3,%eax
 843145a:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 8431461:	29 c2                	sub    %eax,%edx
 8431463:	8d 04 11             	lea    (%ecx,%edx,1),%eax
 8431466:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8431469:	83 c0 1e             	add    $0x1e,%eax
 843146c:	0f b6 00             	movzbl (%eax),%eax
 843146f:	0f b6 c0             	movzbl %al,%eax
 8431472:	89 85 d8 fe ff ff    	mov    %eax,-0x128(%ebp)
 8431478:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 843147b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843147e:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 8431481:	89 c1                	mov    %eax,%ecx
 8431483:	01 c9                	add    %ecx,%ecx
 8431485:	01 c1                	add    %eax,%ecx
 8431487:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 843148e:	89 c2                	mov    %eax,%edx
 8431490:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 8431497:	29 d0                	sub    %edx,%eax
 8431499:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 843149c:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 843149f:	83 c0 1d             	add    $0x1d,%eax
 84314a2:	0f b6 00             	movzbl (%eax),%eax
 84314a5:	0f b6 f8             	movzbl %al,%edi
 84314a8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84314ab:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84314ae:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 84314b1:	89 c1                	mov    %eax,%ecx
 84314b3:	01 c9                	add    %ecx,%ecx
 84314b5:	01 c1                	add    %eax,%ecx
 84314b7:	89 d0                	mov    %edx,%eax
 84314b9:	c1 e0 03             	shl    $0x3,%eax
 84314bc:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 84314c3:	29 c2                	sub    %eax,%edx
 84314c5:	8d 04 11             	lea    (%ecx,%edx,1),%eax
 84314c8:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 84314cb:	83 c0 1c             	add    $0x1c,%eax
 84314ce:	0f b6 00             	movzbl (%eax),%eax
 84314d1:	0f b6 f0             	movzbl %al,%esi
 84314d4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84314d7:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 84314da:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 84314dd:	01 c0                	add    %eax,%eax
 84314df:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 84314e6:	29 c2                	sub    %eax,%edx
 84314e8:	8d 04 1a             	lea    (%edx,%ebx,1),%eax
 84314eb:	83 c0 0c             	add    $0xc,%eax
 84314ee:	8b 44 81 08          	mov    0x8(%ecx,%eax,4),%eax
 84314f2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84314f9:	00 
 84314fa:	89 04 24             	mov    %eax,(%esp)
 84314fd:	e8 49 7b cd ff       	call   810904b <_Z14NumberToStringji>
 8431502:	89 c3                	mov    %eax,%ebx
 8431504:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 843150b:	00 
 843150c:	c7 44 24 08 81 78 00 	movl   $0x7881,0x8(%esp)
 8431513:	00 
 8431514:	c7 44 24 04 00 c2 c5 	movl   $0x8c5c200,0x4(%esp)
 843151b:	08 
 843151c:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 843151f:	89 04 24             	mov    %eax,(%esp)
 8431522:	e8 f1 e1 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8431527:	8b 95 cc fe ff ff    	mov    -0x134(%ebp),%edx
 843152d:	89 54 24 20          	mov    %edx,0x20(%esp)
 8431531:	8b 8d d0 fe ff ff    	mov    -0x130(%ebp),%ecx
 8431537:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 843153b:	8b 85 d4 fe ff ff    	mov    -0x12c(%ebp),%eax
 8431541:	89 44 24 18          	mov    %eax,0x18(%esp)
 8431545:	8b 95 d8 fe ff ff    	mov    -0x128(%ebp),%edx
 843154b:	89 54 24 14          	mov    %edx,0x14(%esp)
 843154f:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8431553:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8431557:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 843155b:	c7 44 24 04 3c 1c c5 	movl   $0x8c51c3c,0x4(%esp)
 8431562:	08 
 8431563:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8431566:	89 04 24             	mov    %eax,(%esp)
 8431569:	e8 1a e2 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 843156e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8431571:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 8431574:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 8431577:	01 c0                	add    %eax,%eax
 8431579:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 8431580:	29 c2                	sub    %eax,%edx
 8431582:	8d 04 1a             	lea    (%edx,%ebx,1),%eax
 8431585:	83 c0 08             	add    $0x8,%eax
 8431588:	8b 44 81 08          	mov    0x8(%ecx,%eax,4),%eax
 843158c:	89 85 dc fe ff ff    	mov    %eax,-0x124(%ebp)
 8431592:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8431595:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 8431598:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 843159b:	01 c0                	add    %eax,%eax
 843159d:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 84315a4:	29 c2                	sub    %eax,%edx
 84315a6:	8d 04 1a             	lea    (%edx,%ebx,1),%eax
 84315a9:	83 c0 0c             	add    $0xc,%eax
 84315ac:	8b 44 81 08          	mov    0x8(%ecx,%eax,4),%eax
 84315b0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84315b7:	00 
 84315b8:	89 04 24             	mov    %eax,(%esp)
 84315bb:	e8 8b 7a cd ff       	call   810904b <_Z14NumberToStringji>
 84315c0:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 84315c6:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 84315c9:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84315cc:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 84315cf:	89 d0                	mov    %edx,%eax
 84315d1:	01 c0                	add    %eax,%eax
 84315d3:	01 d0                	add    %edx,%eax
 84315d5:	89 ca                	mov    %ecx,%edx
 84315d7:	c1 e2 03             	shl    $0x3,%edx
 84315da:	8d 0c d5 00 00 00 00 	lea    0x0(,%edx,8),%ecx
 84315e1:	29 d1                	sub    %edx,%ecx
 84315e3:	01 c8                	add    %ecx,%eax
 84315e5:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 84315e8:	83 c0 12             	add    $0x12,%eax
 84315eb:	0f b6 00             	movzbl (%eax),%eax
 84315ee:	0f b6 c0             	movzbl %al,%eax
 84315f1:	89 85 e4 fe ff ff    	mov    %eax,-0x11c(%ebp)
 84315f7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84315fa:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84315fd:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 8431600:	89 c1                	mov    %eax,%ecx
 8431602:	01 c9                	add    %ecx,%ecx
 8431604:	01 c1                	add    %eax,%ecx
 8431606:	89 d0                	mov    %edx,%eax
 8431608:	c1 e0 03             	shl    $0x3,%eax
 843160b:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 8431612:	29 c2                	sub    %eax,%edx
 8431614:	8d 04 11             	lea    (%ecx,%edx,1),%eax
 8431617:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 843161a:	83 c0 11             	add    $0x11,%eax
 843161d:	0f b6 00             	movzbl (%eax),%eax
 8431620:	0f b6 c0             	movzbl %al,%eax
 8431623:	89 85 e8 fe ff ff    	mov    %eax,-0x118(%ebp)
 8431629:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 843162c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843162f:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 8431632:	89 c1                	mov    %eax,%ecx
 8431634:	01 c9                	add    %ecx,%ecx
 8431636:	01 c1                	add    %eax,%ecx
 8431638:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 843163f:	89 c2                	mov    %eax,%edx
 8431641:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 8431648:	29 d0                	sub    %edx,%eax
 843164a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 843164d:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8431650:	83 c0 10             	add    $0x10,%eax
 8431653:	0f b6 00             	movzbl (%eax),%eax
 8431656:	0f b6 c0             	movzbl %al,%eax
 8431659:	89 85 ec fe ff ff    	mov    %eax,-0x114(%ebp)
 843165f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8431662:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8431665:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 8431668:	89 c1                	mov    %eax,%ecx
 843166a:	01 c9                	add    %ecx,%ecx
 843166c:	01 c1                	add    %eax,%ecx
 843166e:	89 d0                	mov    %edx,%eax
 8431670:	c1 e0 03             	shl    $0x3,%eax
 8431673:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 843167a:	29 c2                	sub    %eax,%edx
 843167c:	8d 04 11             	lea    (%ecx,%edx,1),%eax
 843167f:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8431682:	83 c0 1e             	add    $0x1e,%eax
 8431685:	0f b6 00             	movzbl (%eax),%eax
 8431688:	0f b6 f8             	movzbl %al,%edi
 843168b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 843168e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8431691:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 8431694:	89 c1                	mov    %eax,%ecx
 8431696:	01 c9                	add    %ecx,%ecx
 8431698:	01 c1                	add    %eax,%ecx
 843169a:	89 d0                	mov    %edx,%eax
 843169c:	c1 e0 03             	shl    $0x3,%eax
 843169f:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 84316a6:	29 c2                	sub    %eax,%edx
 84316a8:	8d 04 11             	lea    (%ecx,%edx,1),%eax
 84316ab:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 84316ae:	83 c0 1d             	add    $0x1d,%eax
 84316b1:	0f b6 00             	movzbl (%eax),%eax
 84316b4:	0f b6 f0             	movzbl %al,%esi
 84316b7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84316ba:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84316bd:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 84316c0:	89 c1                	mov    %eax,%ecx
 84316c2:	01 c9                	add    %ecx,%ecx
 84316c4:	01 c1                	add    %eax,%ecx
 84316c6:	89 d0                	mov    %edx,%eax
 84316c8:	c1 e0 03             	shl    $0x3,%eax
 84316cb:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 84316d2:	29 c2                	sub    %eax,%edx
 84316d4:	8d 04 11             	lea    (%ecx,%edx,1),%eax
 84316d7:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 84316da:	83 c0 1c             	add    $0x1c,%eax
 84316dd:	0f b6 00             	movzbl (%eax),%eax
 84316e0:	0f b6 c8             	movzbl %al,%ecx
 84316e3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84316e6:	89 d0                	mov    %edx,%eax
 84316e8:	c1 e0 03             	shl    $0x3,%eax
 84316eb:	01 d0                	add    %edx,%eax
 84316ed:	c1 e0 02             	shl    $0x2,%eax
 84316f0:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84316f3:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84316f6:	2d e4 00 00 00       	sub    $0xe4,%eax
 84316fb:	8b 00                	mov    (%eax),%eax
 84316fd:	8b 95 dc fe ff ff    	mov    -0x124(%ebp),%edx
 8431703:	89 54 24 28          	mov    %edx,0x28(%esp)
 8431707:	8b 95 e0 fe ff ff    	mov    -0x120(%ebp),%edx
 843170d:	89 54 24 24          	mov    %edx,0x24(%esp)
 8431711:	8b 95 e4 fe ff ff    	mov    -0x11c(%ebp),%edx
 8431717:	89 54 24 20          	mov    %edx,0x20(%esp)
 843171b:	8b 95 e8 fe ff ff    	mov    -0x118(%ebp),%edx
 8431721:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8431725:	8b 95 ec fe ff ff    	mov    -0x114(%ebp),%edx
 843172b:	89 54 24 18          	mov    %edx,0x18(%esp)
 843172f:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8431733:	89 74 24 10          	mov    %esi,0x10(%esp)
 8431737:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 843173b:	89 44 24 08          	mov    %eax,0x8(%esp)
 843173f:	c7 44 24 04 a0 1c c5 	movl   $0x8c51ca0,0x4(%esp)
 8431746:	08 
 8431747:	8b 45 c8             	mov    -0x38(%ebp),%eax
 843174a:	89 04 24             	mov    %eax,(%esp)
 843174d:	e8 6e 2a fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8431752:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8431759:	00 
 843175a:	8b 45 c8             	mov    -0x38(%ebp),%eax
 843175d:	89 04 24             	mov    %eax,(%esp)
 8431760:	e8 c1 2b fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8431765:	83 f0 01             	xor    $0x1,%eax
 8431768:	84 c0                	test   %al,%al
 843176a:	74 07                	je     8431773 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0xdf5>
 843176c:	b8 00 00 00 00       	mov    $0x0,%eax
 8431771:	eb 34                	jmp    84317a7 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0xe29>
 8431773:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8431777:	83 7d e4 01          	cmpl   $0x1,-0x1c(%ebp)
 843177b:	0f 9e c0             	setle  %al
 843177e:	84 c0                	test   %al,%al
 8431780:	0f 85 89 fb ff ff    	jne    843130f <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x991>
 8431786:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 843178a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 843178d:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 8431791:	0f b6 c0             	movzbl %al,%eax
 8431794:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8431797:	0f 9f c0             	setg   %al
 843179a:	84 c0                	test   %al,%al
 843179c:	0f 85 61 fb ff ff    	jne    8431303 <_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream+0x985>
 84317a2:	b8 01 00 00 00       	mov    $0x1,%eax
 84317a7:	81 c4 7c 01 00 00    	add    $0x17c,%esp
 84317ad:	5b                   	pop    %ebx
 84317ae:	5e                   	pop    %esi
 84317af:	5f                   	pop    %edi
 84317b0:	5d                   	pop    %ebp
 84317b1:	c3                   	ret

```

```c
// DB_UpdatePvPResult::dispatch @ 0x843097e

/* DB_UpdatePvPResult::dispatch(int, int, Stream*) */

undefined4 DB_UpdatePvPResult::dispatch(int param_1,int param_2,Stream *param_3)

{
  float fVar1;
  Packet_PvPResult PVar2;
  Packet_PvPResult PVar3;
  Packet_PvPResult PVar4;
  Packet_PvPResult PVar5;
  Packet_PvPResult PVar6;
  Packet_PvPResult PVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  school_info *this;
  int iVar15;
  Stream *in_stack_00000010;
  int local_10c;
  float local_108;
  int local_104;
  undefined4 local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  float local_f0 [2];
  int local_e8;
  float local_e4;
  int local_e0;
  undefined4 local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  float local_cc;
  float local_c8;
  tm local_c4;
  int local_98;
  float local_94;
  int local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  int local_80;
  float local_7c;
  float local_78;
  int local_74;
  cMyTrace local_70 [16];
  cMyTrace local_60 [16];
  tm *local_50;
  int local_4c;
  int local_48;
  float local_44;
  float local_40;
  MySQL *local_3c;
  Packet_PvPResult *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  dispatch(int,int,Stream*)::school_info::school_info((school_info *)&local_98);
  this = (school_info *)&local_10c;
  for (iVar15 = 1; iVar15 != -1; iVar15 = iVar15 + -1) {
    dispatch(int,int,Stream*)::school_info::school_info(this);
    this = this + 0x24;
  }
  local_74 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_50 = localtime_r(&local_74,&local_c4);
  local_4c = local_50->tm_wday;
  local_48 = local_50->tm_mday;
  local_50->tm_hour = 6;
  local_50->tm_min = 0;
  local_50->tm_sec = 0;
  local_44 = (float)mktime(local_50);
  if (local_74 < (int)local_44) {
    local_44 = (float)((int)local_44 + -0x15180);
  }
  local_40 = (float)((int)local_44 + -0x15180);
  local_3c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0x10,0);
  local_38 = Stream::GetOutBuffer<Packet_PvPResult>(in_stack_00000010);
  local_34 = 0;
  do {
    if ((int)(uint)(byte)local_38[0xf] <= local_34) {
      local_24 = 0;
      do {
        if ((int)(uint)(byte)local_38[0xf] <= local_24) {
          return 1;
        }
        for (local_20 = 0; local_20 < 2; local_20 = local_20 + 1) {
          if ((local_38[local_24 * 3 + local_20 * 0x38 + 0x1d] != (Packet_PvPResult)0x0) ||
             (local_38[local_24 * 3 + local_20 * 0x38 + 0x1e] != (Packet_PvPResult)0x0)) {
            local_38[local_24 * 3 + local_20 * 0x38 + 0x1c] =
                 (Packet_PvPResult)((char)local_38[local_24 * 3 + local_20 * 0x38 + 0x1c] + '\x01');
          }
          PVar2 = local_38[local_24 * 3 + local_20 * 0x38 + 0x12];
          PVar3 = local_38[local_24 * 3 + local_20 * 0x38 + 0x11];
          PVar4 = local_38[local_24 * 3 + local_20 * 0x38 + 0x10];
          PVar5 = local_38[local_24 * 3 + local_20 * 0x38 + 0x1e];
          PVar6 = local_38[local_24 * 3 + local_20 * 0x38 + 0x1d];
          PVar7 = local_38[local_24 * 3 + local_20 * 0x38 + 0x1c];
          uVar13 = NumberToString(*(uint *)(local_38 + (local_20 * 0xe + local_24 + 0xc) * 4 + 8),0)
          ;
          cMyTrace::cMyTrace(local_60,"virtual bool DB_UpdatePvPResult::dispatch(int, int, Stream*)"
                             ,0x7881,0);
          cMyTrace::operator()
                    (local_60,
                     "BADGE_COUNT m_id(%s) badge green(%d), red(%d), blue(%d), daily badge green(%d), red(%d), blue(%d)"
                     ,uVar13,(uint)(byte)PVar7,(uint)(byte)PVar6,(uint)(byte)PVar5,(uint)(byte)PVar4
                     ,(uint)(byte)PVar3,(uint)(byte)PVar2);
          uVar13 = *(undefined4 *)(local_38 + (local_20 * 0xe + local_24 + 8) * 4 + 8);
          uVar14 = NumberToString(*(uint *)(local_38 + (local_20 * 0xe + local_24 + 0xc) * 4 + 8),0)
          ;
          MySQL::set_query(local_3c,
                           "upDate school_member set contribute=contribute+%d, last_play_time=NOW(), green_badge=green_badge+%d, red_badge=red_badge+%d, blue_badge=blue_badge+%d, daily_green_badge=%d, daily_red_badge=%d, daily_blue_badge=%d  where m_id=%s and school_id=%d"
                           ,(&local_108)[local_20 * 9 + 2],
                           (uint)(byte)local_38[local_24 * 3 + local_20 * 0x38 + 0x1c],
                           (uint)(byte)local_38[local_24 * 3 + local_20 * 0x38 + 0x1d],
                           (uint)(byte)local_38[local_24 * 3 + local_20 * 0x38 + 0x1e],
                           (uint)(byte)local_38[local_24 * 3 + local_20 * 0x38 + 0x10],
                           (uint)(byte)local_38[local_24 * 3 + local_20 * 0x38 + 0x11],
                           (uint)(byte)local_38[local_24 * 3 + local_20 * 0x38 + 0x12],uVar14,uVar13
                          );
          cVar12 = MySQL::exec(local_3c,true);
          if (cVar12 != '\x01') {
            return 0;
          }
        }
        local_24 = local_24 + 1;
      } while( true );
    }
    MySQL::set_query(local_3c,
                     "seLect school_id, rating, fight_cnt, unix_timestamp(last_update_time), school_point, school_point_prev, fight_cnt_prev from school_info where school_id in (%d,%d)"
                     ,*(undefined4 *)(local_38 + (local_34 + 8) * 4 + 8),
                     *(undefined4 *)(local_38 + (local_34 + 0x16) * 4 + 8));
    cVar12 = MySQL::exec(local_3c,true);
    if (cVar12 != '\x01') {
      return 0;
    }
    iVar15 = MySQL::get_n_rows(local_3c);
    if (iVar15 != 2) {
      return 0;
    }
    local_2c = 0;
    local_30 = 2;
    while ((local_2c < local_30 && (cVar12 = MySQL::fetch(local_3c), cVar12 == '\x01'))) {
      cVar12 = MySQL::get_int(local_3c,0,&local_98);
      if (cVar12 != '\x01') {
        return 0;
      }
      cVar12 = MySQL::get_float(local_3c,1,&local_7c);
      if (cVar12 != '\x01') {
        return 0;
      }
      cVar12 = MySQL::get_int(local_3c,2,(int *)&local_94);
      if (cVar12 != '\x01') {
        return 0;
      }
      cVar12 = MySQL::get_int(local_3c,3,&local_90);
      if (cVar12 != '\x01') {
        return 0;
      }
      cVar12 = MySQL::get_int(local_3c,4,&local_88);
      if (cVar12 != '\x01') {
        return 0;
      }
      cVar12 = MySQL::get_int(local_3c,5,&local_84);
      if (cVar12 != '\x01') {
        return 0;
      }
      cVar12 = MySQL::get_int(local_3c,6,&local_80);
      if (cVar12 != '\x01') {
        return 0;
      }
      local_78 = local_7c;
      if (*(int *)(local_38 + (local_34 + 8) * 4 + 8) == local_98) {
        local_10c = local_98;
        local_108 = local_94;
        local_104 = local_90;
        local_100 = local_8c;
        local_fc = local_88;
        local_f8 = local_84;
        local_f4 = local_80;
        local_f0[0] = local_7c;
        local_f0[1] = local_7c;
      }
      else {
        if (*(int *)(local_38 + (local_34 + 0x16) * 4 + 8) != local_98) {
          return 0;
        }
        local_e8 = local_98;
        local_e4 = local_94;
        local_e0 = local_90;
        local_dc = local_8c;
        local_d8 = local_88;
        local_d4 = local_84;
        local_d0 = local_80;
        local_cc = local_7c;
        local_c8 = local_7c;
      }
      local_2c = local_2c + 1;
    }
    CEloRating::calc(local_f0,&local_cc,local_38[0xe],*(undefined4 *)(local_38 + 10));
    for (local_28 = 0; local_28 < 2; local_28 = local_28 + 1) {
      (&local_108)[local_28 * 9 + 2] =
           (float)(int)ROUND(local_f0[local_28 * 9] - local_f0[local_28 * 9 + 1]);
      if ((&local_108)[local_28 * 9 + 1] == local_44 ||
          (int)(&local_108)[local_28 * 9 + 1] - (int)local_44 < 0) {
        if ((&local_108)[local_28 * 9 + 1] == local_40 ||
            (int)(&local_108)[local_28 * 9 + 1] - (int)local_40 < 0) {
          local_f0[local_28 * 9 + -1] = 0.0;
          local_f0[local_28 * 9 + -2] = 0.0;
          (&local_108)[local_28 * 9] = 0.0;
          (&local_108)[local_28 * 9 + 3] = 0.0;
        }
        else {
          local_f0[local_28 * 9 + -1] = (&local_108)[local_28 * 9];
          local_f0[local_28 * 9 + -2] = (&local_108)[local_28 * 9 + 3];
          (&local_108)[local_28 * 9] = 0.0;
          (&local_108)[local_28 * 9 + 3] = 0.0;
        }
      }
      (&local_108)[local_28 * 9] = (float)((int)(&local_108)[local_28 * 9] + 1);
      if ((&local_108)[local_28 * 9] ==
          PvPGlobalEnvironmentVariable::school_match_fight_count_for_gain_point_) {
        (&local_108)[local_28 * 9 + 3] = PvPGlobalEnvironmentVariable::school_match_daily_point_;
      }
      else if ((&local_108)[local_28 * 9] == 2.10195e-44) {
        if ((local_4c == 0) || (local_4c == 6)) {
          (&local_108)[local_28 * 9 + 3] =
               PvPGlobalEnvironmentVariable::school_match_daily_point_weekends_;
        }
        if ((0x48f26550 < local_74) && (local_74 < 0x48f8fcd0)) {
          (&local_108)[local_28 * 9 + 3] =
               PvPGlobalEnvironmentVariable::school_match_daily_point_weekends_;
        }
      }
      MySQL::set_query(local_3c,
                       "upDate school_info set fight_cnt=%d,school_point=%d, fight_cnt_prev=%d, school_point_prev=%d, rating=%f, last_update_time=from_unixtime(%d) where school_id=%d"
                       ,(&local_108)[local_28 * 9],(&local_108)[local_28 * 9 + 3],
                       local_f0[local_28 * 9 + -1],local_f0[local_28 * 9 + -2],
                       (double)local_f0[local_28 * 9],local_74,
                       *(undefined4 *)(local_38 + (local_28 * 0xe + local_34 + 8) * 4 + 8));
      cVar12 = MySQL::exec(local_3c,true);
      iVar15 = local_74;
      if (cVar12 != '\x01') {
        return 0;
      }
      uVar13 = *(undefined4 *)(local_38 + (local_28 * 0xe + local_34 + 8) * 4 + 8);
      fVar1 = local_f0[local_28 * 9];
      fVar8 = local_f0[local_28 * 9 + -2];
      fVar9 = local_f0[local_28 * 9 + -1];
      fVar10 = (&local_108)[local_28 * 9 + 3];
      fVar11 = (&local_108)[local_28 * 9];
      cMyTrace::cMyTrace(local_70,"virtual bool DB_UpdatePvPResult::dispatch(int, int, Stream*)",
                         0x7867,5);
      cMyTrace::operator()
                (local_70,
                 "fight_cnt=%d,school_point=%d, fight_cnt_prev=%d, school_point_prev=%d, rating=%f, last_update_time=%d, school_id=%d"
                 ,fVar11,fVar10,fVar9,fVar8,(double)fVar1,iVar15,uVar13);
    }
    local_34 = local_34 + 1;
  } while( true );
}

```

