# ARAD__DISPATCHER__Arad_DB_kLoadServerState

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08185d20 ARAD::DISPATCHER::Arad_DB_kLoadServerState::dispatch  [0x08185d20-0x81860f3] ===
 8185d20:	55                   	push   %ebp
 8185d21:	89 e5                	mov    %esp,%ebp
 8185d23:	56                   	push   %esi
 8185d24:	53                   	push   %ebx
 8185d25:	81 ec d0 01 00 00    	sub    $0x1d0,%esp
 8185d2b:	8b 45 14             	mov    0x14(%ebp),%eax
 8185d2e:	89 04 24             	mov    %eax,(%esp)
 8185d31:	e8 ee 12 00 00       	call   8187024 <_ZN6Stream12GetOutBufferIN4arad14SigServerStateEEEPT_v>
 8185d36:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8185d39:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8185d3d:	75 36                	jne    8185d75 <_ZN4ARAD10DISPATCHER24Arad_DB_kLoadServerState8dispatchEiiP6Stream+0x55>
 8185d3f:	c7 44 24 10 b6 fa b8 	movl   $0x8b8fab6,0x10(%esp)
 8185d46:	08 
 8185d47:	c7 44 24 0c 1e 08 00 	movl   $0x81e,0xc(%esp)
 8185d4e:	00 
 8185d4f:	c7 44 24 08 80 0a b9 	movl   $0x8b90a80,0x8(%esp)
 8185d56:	08 
 8185d57:	c7 44 24 04 d0 f7 b8 	movl   $0x8b8f7d0,0x4(%esp)
 8185d5e:	08 
 8185d5f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8185d66:	e8 9f de 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8185d6b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8185d70:	e9 72 03 00 00       	jmp    81860e7 <_ZN4ARAD10DISPATCHER24Arad_DB_kLoadServerState8dispatchEiiP6Stream+0x3c7>
 8185d75:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8185d7a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8185d81:	00 
 8185d82:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8185d89:	00 
 8185d8a:	89 04 24             	mov    %eax,(%esp)
 8185d8d:	e8 ac f4 26 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8185d92:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8185d95:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8185d99:	75 2c                	jne    8185dc7 <_ZN4ARAD10DISPATCHER24Arad_DB_kLoadServerState8dispatchEiiP6Stream+0xa7>
 8185d9b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8185da2:	e8 59 fa 59 00       	call   8725800 <__cxa_allocate_exception>
 8185da7:	89 c2                	mov    %eax,%edx
 8185da9:	c7 02 f7 f7 b8 08    	movl   $0x8b8f7f7,(%edx)
 8185daf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8185db6:	00 
 8185db7:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 8185dbe:	09 
 8185dbf:	89 04 24             	mov    %eax,(%esp)
 8185dc2:	e8 89 ee 59 00       	call   8724c50 <__cxa_throw>
 8185dc7:	c7 44 24 04 60 fb b8 	movl   $0x8b8fb60,0x4(%esp)
 8185dce:	08 
 8185dcf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8185dd2:	89 04 24             	mov    %eax,(%esp)
 8185dd5:	e8 e6 e3 26 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8185dda:	83 f0 01             	xor    $0x1,%eax
 8185ddd:	84 c0                	test   %al,%al
 8185ddf:	74 2c                	je     8185e0d <_ZN4ARAD10DISPATCHER24Arad_DB_kLoadServerState8dispatchEiiP6Stream+0xed>
 8185de1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8185de8:	e8 13 fa 59 00       	call   8725800 <__cxa_allocate_exception>
 8185ded:	89 c2                	mov    %eax,%edx
 8185def:	c7 02 79 f8 b8 08    	movl   $0x8b8f879,(%edx)
 8185df5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8185dfc:	00 
 8185dfd:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 8185e04:	09 
 8185e05:	89 04 24             	mov    %eax,(%esp)
 8185e08:	e8 43 ee 59 00       	call   8724c50 <__cxa_throw>
 8185e0d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8185e14:	00 
 8185e15:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8185e18:	89 04 24             	mov    %eax,(%esp)
 8185e1b:	e8 06 e5 26 00       	call   83f4326 <_ZN5MySQL4execEb>
 8185e20:	83 f0 01             	xor    $0x1,%eax
 8185e23:	84 c0                	test   %al,%al
 8185e25:	74 2c                	je     8185e53 <_ZN4ARAD10DISPATCHER24Arad_DB_kLoadServerState8dispatchEiiP6Stream+0x133>
 8185e27:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8185e2e:	e8 cd f9 59 00       	call   8725800 <__cxa_allocate_exception>
 8185e33:	89 c2                	mov    %eax,%edx
 8185e35:	c7 02 83 f8 b8 08    	movl   $0x8b8f883,(%edx)
 8185e3b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8185e42:	00 
 8185e43:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 8185e4a:	09 
 8185e4b:	89 04 24             	mov    %eax,(%esp)
 8185e4e:	e8 fd ed 59 00       	call   8724c50 <__cxa_throw>
 8185e53:	8d 85 4f fe ff ff    	lea    -0x1b1(%ebp),%eax
 8185e59:	89 04 24             	mov    %eax,(%esp)
 8185e5c:	e8 c1 08 00 00       	call   8186722 <_ZN4arad14SigServerStateC1Ev>
 8185e61:	e9 49 01 00 00       	jmp    8185faf <_ZN4ARAD10DISPATCHER24Arad_DB_kLoadServerState8dispatchEiiP6Stream+0x28f>
 8185e66:	8b 95 50 fe ff ff    	mov    -0x1b0(%ebp),%edx
 8185e6c:	8d 8d 4f fe ff ff    	lea    -0x1b1(%ebp),%ecx
 8185e72:	89 d0                	mov    %edx,%eax
 8185e74:	c1 e0 02             	shl    $0x2,%eax
 8185e77:	01 d0                	add    %edx,%eax
 8185e79:	c1 e0 02             	shl    $0x2,%eax
 8185e7c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8185e7f:	83 c0 05             	add    $0x5,%eax
 8185e82:	89 44 24 08          	mov    %eax,0x8(%esp)
 8185e86:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8185e8d:	00 
 8185e8e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8185e91:	89 04 24             	mov    %eax,(%esp)
 8185e94:	e8 93 0a f9 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8185e99:	83 f0 01             	xor    $0x1,%eax
 8185e9c:	84 c0                	test   %al,%al
 8185e9e:	74 2c                	je     8185ecc <_ZN4ARAD10DISPATCHER24Arad_DB_kLoadServerState8dispatchEiiP6Stream+0x1ac>
 8185ea0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8185ea7:	e8 54 f9 59 00       	call   8725800 <__cxa_allocate_exception>
 8185eac:	89 c2                	mov    %eax,%edx
 8185eae:	c7 02 ad fb b8 08    	movl   $0x8b8fbad,(%edx)
 8185eb4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8185ebb:	00 
 8185ebc:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 8185ec3:	09 
 8185ec4:	89 04 24             	mov    %eax,(%esp)
 8185ec7:	e8 84 ed 59 00       	call   8724c50 <__cxa_throw>
 8185ecc:	8b 95 50 fe ff ff    	mov    -0x1b0(%ebp),%edx
 8185ed2:	8d 8d 4f fe ff ff    	lea    -0x1b1(%ebp),%ecx
 8185ed8:	89 d0                	mov    %edx,%eax
 8185eda:	c1 e0 02             	shl    $0x2,%eax
 8185edd:	01 d0                	add    %edx,%eax
 8185edf:	c1 e0 02             	shl    $0x2,%eax
 8185ee2:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8185ee5:	83 c0 09             	add    $0x9,%eax
 8185ee8:	89 44 24 08          	mov    %eax,0x8(%esp)
 8185eec:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8185ef3:	00 
 8185ef4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8185ef7:	89 04 24             	mov    %eax,(%esp)
 8185efa:	e8 2d 0a f9 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8185eff:	83 f0 01             	xor    $0x1,%eax
 8185f02:	84 c0                	test   %al,%al
 8185f04:	74 2c                	je     8185f32 <_ZN4ARAD10DISPATCHER24Arad_DB_kLoadServerState8dispatchEiiP6Stream+0x212>
 8185f06:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8185f0d:	e8 ee f8 59 00       	call   8725800 <__cxa_allocate_exception>
 8185f12:	89 c2                	mov    %eax,%edx
 8185f14:	c7 02 ad fb b8 08    	movl   $0x8b8fbad,(%edx)
 8185f1a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8185f21:	00 
 8185f22:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 8185f29:	09 
 8185f2a:	89 04 24             	mov    %eax,(%esp)
 8185f2d:	e8 1e ed 59 00       	call   8724c50 <__cxa_throw>
 8185f32:	8b 95 50 fe ff ff    	mov    -0x1b0(%ebp),%edx
 8185f38:	8d 8d 4f fe ff ff    	lea    -0x1b1(%ebp),%ecx
 8185f3e:	89 d0                	mov    %edx,%eax
 8185f40:	c1 e0 02             	shl    $0x2,%eax
 8185f43:	01 d0                	add    %edx,%eax
 8185f45:	c1 e0 02             	shl    $0x2,%eax
 8185f48:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8185f4b:	83 c0 0d             	add    $0xd,%eax
 8185f4e:	c7 44 24 0c 0c 00 00 	movl   $0xc,0xc(%esp)
 8185f55:	00 
 8185f56:	89 44 24 08          	mov    %eax,0x8(%esp)
 8185f5a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8185f61:	00 
 8185f62:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8185f65:	89 04 24             	mov    %eax,(%esp)
 8185f68:	e8 ad f3 f9 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 8185f6d:	83 f0 01             	xor    $0x1,%eax
 8185f70:	84 c0                	test   %al,%al
 8185f72:	74 2c                	je     8185fa0 <_ZN4ARAD10DISPATCHER24Arad_DB_kLoadServerState8dispatchEiiP6Stream+0x280>
 8185f74:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8185f7b:	e8 80 f8 59 00       	call   8725800 <__cxa_allocate_exception>
 8185f80:	89 c2                	mov    %eax,%edx
 8185f82:	c7 02 b6 fb b8 08    	movl   $0x8b8fbb6,(%edx)
 8185f88:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8185f8f:	00 
 8185f90:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 8185f97:	09 
 8185f98:	89 04 24             	mov    %eax,(%esp)
 8185f9b:	e8 b0 ec 59 00       	call   8724c50 <__cxa_throw>
 8185fa0:	8b 85 50 fe ff ff    	mov    -0x1b0(%ebp),%eax
 8185fa6:	83 c0 01             	add    $0x1,%eax
 8185fa9:	89 85 50 fe ff ff    	mov    %eax,-0x1b0(%ebp)
 8185faf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8185fb2:	89 04 24             	mov    %eax,(%esp)
 8185fb5:	e8 02 e5 26 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 8185fba:	84 c0                	test   %al,%al
 8185fbc:	0f 85 a4 fe ff ff    	jne    8185e66 <_ZN4ARAD10DISPATCHER24Arad_DB_kLoadServerState8dispatchEiiP6Stream+0x146>
 8185fc2:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8185fc7:	c7 44 24 08 3f 08 00 	movl   $0x83f,0x8(%esp)
 8185fce:	00 
 8185fcf:	c7 44 24 04 d0 f7 b8 	movl   $0x8b8f7d0,0x4(%esp)
 8185fd6:	08 
 8185fd7:	89 04 24             	mov    %eax,(%esp)
 8185fda:	e8 a7 9a 10 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8185fdf:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8185fe6:	00 
 8185fe7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8185feb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8185fee:	89 04 24             	mov    %eax,(%esp)
 8185ff1:	e8 30 2c f4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8185ff6:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 8185ffd:	ff 
 8185ffe:	c7 44 24 04 29 00 00 	movl   $0x29,0x4(%esp)
 8186005:	00 
 8186006:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8186009:	89 04 24             	mov    %eax,(%esp)
 818600c:	e8 a5 17 01 00       	call   81977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>
 8186011:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8186014:	89 04 24             	mov    %eax,(%esp)
 8186017:	e8 32 2c f4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 818601c:	c7 44 24 08 95 01 00 	movl   $0x195,0x8(%esp)
 8186023:	00 
 8186024:	8d 95 4f fe ff ff    	lea    -0x1b1(%ebp),%edx
 818602a:	89 54 24 04          	mov    %edx,0x4(%esp)
 818602e:	89 04 24             	mov    %eax,(%esp)
 8186031:	e8 1c 86 f5 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8186036:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 818603b:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 818603e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8186042:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8186049:	00 
 818604a:	89 04 24             	mov    %eax,(%esp)
 818604d:	e8 8c af 3e 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8186052:	eb 15                	jmp    8186069 <_ZN4ARAD10DISPATCHER24Arad_DB_kLoadServerState8dispatchEiiP6Stream+0x349>
 8186054:	89 d3                	mov    %edx,%ebx
 8186056:	89 c6                	mov    %eax,%esi
 8186058:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 818605b:	89 04 24             	mov    %eax,(%esp)
 818605e:	e8 6f 68 49 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8186063:	89 f0                	mov    %esi,%eax
 8186065:	89 da                	mov    %ebx,%edx
 8186067:	eb 0d                	jmp    8186076 <_ZN4ARAD10DISPATCHER24Arad_DB_kLoadServerState8dispatchEiiP6Stream+0x356>
 8186069:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 818606c:	89 04 24             	mov    %eax,(%esp)
 818606f:	e8 5e 68 49 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8186074:	eb 6c                	jmp    81860e2 <_ZN4ARAD10DISPATCHER24Arad_DB_kLoadServerState8dispatchEiiP6Stream+0x3c2>
 8186076:	83 fa 01             	cmp    $0x1,%edx
 8186079:	74 08                	je     8186083 <_ZN4ARAD10DISPATCHER24Arad_DB_kLoadServerState8dispatchEiiP6Stream+0x363>
 818607b:	89 04 24             	mov    %eax,(%esp)
 818607e:	e8 cd d6 95 00       	call   8ae3750 <_Unwind_Resume>
 8186083:	89 04 24             	mov    %eax,(%esp)
 8186086:	e8 55 fc 59 00       	call   8725ce0 <__cxa_begin_catch>
 818608b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818608e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8186091:	89 44 24 14          	mov    %eax,0x14(%esp)
 8186095:	c7 44 24 10 30 fa b8 	movl   $0x8b8fa30,0x10(%esp)
 818609c:	08 
 818609d:	c7 44 24 0c 46 08 00 	movl   $0x846,0xc(%esp)
 81860a4:	00 
 81860a5:	c7 44 24 08 80 0a b9 	movl   $0x8b90a80,0x8(%esp)
 81860ac:	08 
 81860ad:	c7 44 24 04 d0 f7 b8 	movl   $0x8b8f7d0,0x4(%esp)
 81860b4:	08 
 81860b5:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81860bc:	e8 49 db 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81860c1:	bb 00 00 00 00       	mov    $0x0,%ebx
 81860c6:	e8 65 fb 59 00       	call   8725c30 <__cxa_end_catch>
 81860cb:	eb 1a                	jmp    81860e7 <_ZN4ARAD10DISPATCHER24Arad_DB_kLoadServerState8dispatchEiiP6Stream+0x3c7>
 81860cd:	89 d3                	mov    %edx,%ebx
 81860cf:	89 c6                	mov    %eax,%esi
 81860d1:	e8 5a fb 59 00       	call   8725c30 <__cxa_end_catch>
 81860d6:	89 f0                	mov    %esi,%eax
 81860d8:	89 da                	mov    %ebx,%edx
 81860da:	89 04 24             	mov    %eax,(%esp)
 81860dd:	e8 6e d6 95 00       	call   8ae3750 <_Unwind_Resume>
 81860e2:	bb 01 00 00 00       	mov    $0x1,%ebx
 81860e7:	89 d8                	mov    %ebx,%eax
 81860e9:	81 c4 d0 01 00 00    	add    $0x1d0,%esp
 81860ef:	5b                   	pop    %ebx
 81860f0:	5e                   	pop    %esi
 81860f1:	5d                   	pop    %ebp
 81860f2:	c3                   	ret
 81860f3:	90                   	nop

```

```c
// ARAD::DISPATCHER::Arad_DB_kLoadServerState::dispatch @ 0x8185d20

/* ARAD::DISPATCHER::Arad_DB_kLoadServerState::dispatch(int, int, Stream*) */

undefined4
ARAD::DISPATCHER::Arad_DB_kLoadServerState::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  Stream *pSVar3;
  CStreamGuard *this;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  SigServerState local_1b5;
  int local_1b4;
  int aiStack_1b0 [2];
  undefined1 auStack_1a8 [392];
  CStreamGuard local_20 [8];
  SigServerState *local_18;
  MySQL *local_14;
  
  local_18 = Stream::GetOutBuffer<arad::SigServerState>(in_stack_00000010);
  if (local_18 == (SigServerState *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DatabaseDispatcher.cpp",
               "virtual bool ARAD::DISPATCHER::Arad_DB_kLoadServerState::dispatch(int, int, Stream*)"
               ,0x81e,"SigServerState is null.");
    uVar4 = 0;
  }
  else {
                    /* try { // try from 08185d8d to 08185fde has its CatchHandler @ 08186076 */
    local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    if (local_14 == (MySQL *)0x0) {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = "handle null";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::set_query(local_14,
                             " seLect category, code, state from server_state_info where end_time >= now()"
                            );
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = "set_query";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::exec(local_14,true);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = &DAT_08b8f883;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
    arad::SigServerState::SigServerState(&local_1b5);
    while( true ) {
      cVar1 = MySQL::fetch(local_14);
      if (cVar1 == '\0') break;
      cVar1 = MySQL::get_int(local_14,0,aiStack_1b0 + local_1b4 * 5);
      if (cVar1 != '\x01') {
        puVar2 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar2 = "category";
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar2,&char_const*::typeinfo,0);
      }
      cVar1 = MySQL::get_int(local_14,1,aiStack_1b0 + local_1b4 * 5 + 1);
      if (cVar1 != '\x01') {
        puVar2 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar2 = "category";
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar2,&char_const*::typeinfo,0);
      }
      cVar1 = MySQL::get_binary(local_14,2,auStack_1a8 + local_1b4 * 0x14,0xc);
      if (cVar1 != '\x01') {
        puVar2 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar2 = "state";
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar2,&char_const*::typeinfo,0);
      }
      local_1b4 = local_1b4 + 1;
    }
    pSVar3 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"localjapan/Arad_DatabaseDispatcher.cpp",
                                 0x83f);
    CStreamGuard::CStreamGuard(local_20,pSVar3,true);
                    /* try { // try from 0818600c to 08186051 has its CatchHandler @ 08186054 */
    make_internal_stream_jpn(local_20,0x29,0xffffffff);
    this = (CStreamGuard *)CStreamGuard::operator->(local_20);
    CStreamGuard::put_binary(this,&local_1b5,0x195);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_20);
                    /* try { // try from 0818606f to 08186073 has its CatchHandler @ 08186076 */
    CStreamGuard::~CStreamGuard(local_20);
    uVar4 = 1;
  }
  return uVar4;
}

```

