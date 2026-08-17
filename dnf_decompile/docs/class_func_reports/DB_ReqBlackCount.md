# DB_ReqBlackCount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08424ce6 DB_ReqBlackCount::dispatch  [0x08424ce6-0x8425279] ===
 8424ce6:	55                   	push   %ebp
 8424ce7:	89 e5                	mov    %esp,%ebp
 8424ce9:	57                   	push   %edi
 8424cea:	56                   	push   %esi
 8424ceb:	53                   	push   %ebx
 8424cec:	81 ec bc 00 00 00    	sub    $0xbc,%esp
 8424cf2:	8b 45 14             	mov    0x14(%ebp),%eax
 8424cf5:	89 04 24             	mov    %eax,(%esp)
 8424cf8:	e8 f1 d1 02 00       	call   8451eee <_ZN6Stream12GetOutBufferI19SIG_REQ_BLACK_COUNTEEPT_v>
 8424cfd:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8424d00:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8424d05:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8424d0c:	00 
 8424d0d:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8424d14:	00 
 8424d15:	89 04 24             	mov    %eax,(%esp)
 8424d18:	e8 21 05 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8424d1d:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8424d20:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8424d27:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8424d2a:	8b 00                	mov    (%eax),%eax
 8424d2c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8424d30:	c7 44 24 04 5c e1 c4 	movl   $0x8c4e15c,0x4(%esp)
 8424d37:	08 
 8424d38:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8424d3b:	89 04 24             	mov    %eax,(%esp)
 8424d3e:	e8 7d f4 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8424d43:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8424d4a:	00 
 8424d4b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8424d4e:	89 04 24             	mov    %eax,(%esp)
 8424d51:	e8 d0 f5 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8424d56:	83 f0 01             	xor    $0x1,%eax
 8424d59:	84 c0                	test   %al,%al
 8424d5b:	74 0a                	je     8424d67 <_ZN16DB_ReqBlackCount8dispatchEiiP6Stream+0x81>
 8424d5d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8424d62:	e9 06 05 00 00       	jmp    842526d <_ZN16DB_ReqBlackCount8dispatchEiiP6Stream+0x587>
 8424d67:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8424d6a:	89 04 24             	mov    %eax,(%esp)
 8424d6d:	e8 fa d5 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8424d72:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8424d75:	83 7d d8 01          	cmpl   $0x1,-0x28(%ebp)
 8424d79:	7e 35                	jle    8424db0 <_ZN16DB_ReqBlackCount8dispatchEiiP6Stream+0xca>
 8424d7b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8424d7e:	89 44 24 14          	mov    %eax,0x14(%esp)
 8424d82:	c7 44 24 10 cc e1 c4 	movl   $0x8c4e1cc,0x10(%esp)
 8424d89:	08 
 8424d8a:	c7 44 24 0c 2c 62 00 	movl   $0x622c,0xc(%esp)
 8424d91:	00 
 8424d92:	c7 44 24 08 e0 c4 c5 	movl   $0x8c5c4e0,0x8(%esp)
 8424d99:	08 
 8424d9a:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8424da1:	08 
 8424da2:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8424da9:	e8 5c ee 6a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8424dae:	eb 0d                	jmp    8424dbd <_ZN16DB_ReqBlackCount8dispatchEiiP6Stream+0xd7>
 8424db0:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8424db4:	75 07                	jne    8424dbd <_ZN16DB_ReqBlackCount8dispatchEiiP6Stream+0xd7>
 8424db6:	c7 45 d4 01 00 00 00 	movl   $0x1,-0x2c(%ebp)
 8424dbd:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8424dc0:	89 04 24             	mov    %eax,(%esp)
 8424dc3:	e8 f4 f6 fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8424dc8:	83 f0 01             	xor    $0x1,%eax
 8424dcb:	84 c0                	test   %al,%al
 8424dcd:	74 07                	je     8424dd6 <_ZN16DB_ReqBlackCount8dispatchEiiP6Stream+0xf0>
 8424dcf:	c7 45 d4 02 00 00 00 	movl   $0x2,-0x2c(%ebp)
 8424dd6:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 8424ddd:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 8424de4:	8d 45 98             	lea    -0x68(%ebp),%eax
 8424de7:	89 44 24 08          	mov    %eax,0x8(%esp)
 8424deb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8424df2:	00 
 8424df3:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8424df6:	89 04 24             	mov    %eax,(%esp)
 8424df9:	e8 2e 1b cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8424dfe:	83 f0 01             	xor    $0x1,%eax
 8424e01:	84 c0                	test   %al,%al
 8424e03:	74 07                	je     8424e0c <_ZN16DB_ReqBlackCount8dispatchEiiP6Stream+0x126>
 8424e05:	c7 45 d4 03 00 00 00 	movl   $0x3,-0x2c(%ebp)
 8424e0c:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8424e0f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8424e13:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8424e1a:	00 
 8424e1b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8424e1e:	89 04 24             	mov    %eax,(%esp)
 8424e21:	e8 06 1b cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8424e26:	83 f0 01             	xor    $0x1,%eax
 8424e29:	84 c0                	test   %al,%al
 8424e2b:	74 07                	je     8424e34 <_ZN16DB_ReqBlackCount8dispatchEiiP6Stream+0x14e>
 8424e2d:	c7 45 d4 03 00 00 00 	movl   $0x3,-0x2c(%ebp)
 8424e34:	c7 45 90 00 00 00 00 	movl   $0x0,-0x70(%ebp)
 8424e3b:	8d 45 90             	lea    -0x70(%ebp),%eax
 8424e3e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8424e42:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8424e49:	00 
 8424e4a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8424e4d:	89 04 24             	mov    %eax,(%esp)
 8424e50:	e8 9d d4 cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8424e55:	83 f0 01             	xor    $0x1,%eax
 8424e58:	84 c0                	test   %al,%al
 8424e5a:	74 07                	je     8424e63 <_ZN16DB_ReqBlackCount8dispatchEiiP6Stream+0x17d>
 8424e5c:	c7 45 d4 03 00 00 00 	movl   $0x3,-0x2c(%ebp)
 8424e63:	8b 45 90             	mov    -0x70(%ebp),%eax
 8424e66:	85 c0                	test   %eax,%eax
 8424e68:	0f 84 d1 02 00 00    	je     842513f <_ZN16DB_ReqBlackCount8dispatchEiiP6Stream+0x459>
 8424e6e:	e8 28 73 ca ff       	call   80cc19b <_Z14G_CDataManagerv>
 8424e73:	8b 80 b4 03 00 00    	mov    0x3b4(%eax),%eax
 8424e79:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 8424e7f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8424e82:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8424e86:	74 20                	je     8424ea8 <_ZN16DB_ReqBlackCount8dispatchEiiP6Stream+0x1c2>
 8424e88:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8424e8f:	e8 0a 6e ca ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8424e94:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 8424e97:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8424e9a:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8424e9d:	39 d0                	cmp    %edx,%eax
 8424e9f:	7e 07                	jle    8424ea8 <_ZN16DB_ReqBlackCount8dispatchEiiP6Stream+0x1c2>
 8424ea1:	b8 01 00 00 00       	mov    $0x1,%eax
 8424ea6:	eb 05                	jmp    8424ead <_ZN16DB_ReqBlackCount8dispatchEiiP6Stream+0x1c7>
 8424ea8:	b8 00 00 00 00       	mov    $0x0,%eax
 8424ead:	84 c0                	test   %al,%al
 8424eaf:	0f 84 8a 02 00 00    	je     842513f <_ZN16DB_ReqBlackCount8dispatchEiiP6Stream+0x459>
 8424eb5:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8424ebc:	e8 dd 6d ca ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8424ec1:	89 c2                	mov    %eax,%edx
 8424ec3:	8b 45 90             	mov    -0x70(%ebp),%eax
 8424ec6:	89 d1                	mov    %edx,%ecx
 8424ec8:	29 c1                	sub    %eax,%ecx
 8424eca:	89 c8                	mov    %ecx,%eax
 8424ecc:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8424ecf:	89 95 74 ff ff ff    	mov    %edx,-0x8c(%ebp)
 8424ed5:	ba 00 00 00 00       	mov    $0x0,%edx
 8424eda:	f7 b5 74 ff ff ff    	divl   -0x8c(%ebp)
 8424ee0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8424ee3:	8b 55 98             	mov    -0x68(%ebp),%edx
 8424ee6:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8424ee9:	89 d1                	mov    %edx,%ecx
 8424eeb:	29 c1                	sub    %eax,%ecx
 8424eed:	89 c8                	mov    %ecx,%eax
 8424eef:	85 c0                	test   %eax,%eax
 8424ef1:	0f 8e 48 02 00 00    	jle    842513f <_ZN16DB_ReqBlackCount8dispatchEiiP6Stream+0x459>
 8424ef7:	8b 55 98             	mov    -0x68(%ebp),%edx
 8424efa:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8424efd:	89 d3                	mov    %edx,%ebx
 8424eff:	29 c3                	sub    %eax,%ebx
 8424f01:	e8 95 72 ca ff       	call   80cc19b <_Z14G_CDataManagerv>
 8424f06:	8b 80 b8 03 00 00    	mov    0x3b8(%eax),%eax
 8424f0c:	0f af 45 e0          	imul   -0x20(%ebp),%eax
 8424f10:	89 da                	mov    %ebx,%edx
 8424f12:	29 c2                	sub    %eax,%edx
 8424f14:	89 d0                	mov    %edx,%eax
 8424f16:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8424f19:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 8424f1c:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
 8424f22:	8b 7d 98             	mov    -0x68(%ebp),%edi
 8424f25:	8b 75 94             	mov    -0x6c(%ebp),%esi
 8424f28:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8424f2b:	8b 18                	mov    (%eax),%ebx
 8424f2d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8424f34:	00 
 8424f35:	c7 44 24 08 59 62 00 	movl   $0x6259,0x8(%esp)
 8424f3c:	00 
 8424f3d:	c7 44 24 04 e0 c4 c5 	movl   $0x8c5c4e0,0x4(%esp)
 8424f44:	08 
 8424f45:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8424f48:	89 04 24             	mov    %eax,(%esp)
 8424f4b:	e8 c8 a7 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8424f50:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8424f53:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8424f57:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8424f5d:	89 44 24 18          	mov    %eax,0x18(%esp)
 8424f61:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8424f65:	89 74 24 10          	mov    %esi,0x10(%esp)
 8424f69:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8424f6c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8424f70:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8424f74:	c7 44 24 04 f8 e1 c4 	movl   $0x8c4e1f8,0x4(%esp)
 8424f7b:	08 
 8424f7c:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8424f7f:	89 04 24             	mov    %eax,(%esp)
 8424f82:	e8 01 a8 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8424f87:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8424f8b:	0f 8e c2 00 00 00    	jle    8425053 <_ZN16DB_ReqBlackCount8dispatchEiiP6Stream+0x36d>
 8424f91:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8424f94:	8b 18                	mov    (%eax),%ebx
 8424f96:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8424f99:	0f af 45 e0          	imul   -0x20(%ebp),%eax
 8424f9d:	89 c2                	mov    %eax,%edx
 8424f9f:	8b 45 90             	mov    -0x70(%ebp),%eax
 8424fa2:	8d 34 02             	lea    (%edx,%eax,1),%esi
 8424fa5:	e8 f1 71 ca ff       	call   80cc19b <_Z14G_CDataManagerv>
 8424faa:	8b 80 b8 03 00 00    	mov    0x3b8(%eax),%eax
 8424fb0:	0f af 45 e0          	imul   -0x20(%ebp),%eax
 8424fb4:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8424fb8:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8424fbc:	89 44 24 08          	mov    %eax,0x8(%esp)
 8424fc0:	c7 44 24 04 70 e2 c4 	movl   $0x8c4e270,0x4(%esp)
 8424fc7:	08 
 8424fc8:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8424fcb:	89 04 24             	mov    %eax,(%esp)
 8424fce:	e8 ed f1 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8424fd3:	e8 c3 71 ca ff       	call   80cc19b <_Z14G_CDataManagerv>
 8424fd8:	8b 80 b8 03 00 00    	mov    0x3b8(%eax),%eax
 8424fde:	89 c2                	mov    %eax,%edx
 8424fe0:	0f af 55 e0          	imul   -0x20(%ebp),%edx
 8424fe4:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8424fe7:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8424fea:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8424fed:	8b 55 90             	mov    -0x70(%ebp),%edx
 8424ff0:	89 55 80             	mov    %edx,-0x80(%ebp)
 8424ff3:	8b 7d 98             	mov    -0x68(%ebp),%edi
 8424ff6:	8b 75 94             	mov    -0x6c(%ebp),%esi
 8424ff9:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8424ffc:	8b 18                	mov    (%eax),%ebx
 8424ffe:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8425005:	00 
 8425006:	c7 44 24 08 62 62 00 	movl   $0x6262,0x8(%esp)
 842500d:	00 
 842500e:	c7 44 24 04 e0 c4 c5 	movl   $0x8c5c4e0,0x4(%esp)
 8425015:	08 
 8425016:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8425019:	89 04 24             	mov    %eax,(%esp)
 842501c:	e8 f7 a6 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8425021:	8b 4d 80             	mov    -0x80(%ebp),%ecx
 8425024:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8425028:	89 7c 24 14          	mov    %edi,0x14(%esp)
 842502c:	89 74 24 10          	mov    %esi,0x10(%esp)
 8425030:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8425033:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8425037:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 842503b:	c7 44 24 04 ec e2 c4 	movl   $0x8c4e2ec,0x4(%esp)
 8425042:	08 
 8425043:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8425046:	89 04 24             	mov    %eax,(%esp)
 8425049:	e8 3a a7 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 842504e:	e9 8a 00 00 00       	jmp    84250dd <_ZN16DB_ReqBlackCount8dispatchEiiP6Stream+0x3f7>
 8425053:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8425056:	8b 00                	mov    (%eax),%eax
 8425058:	89 44 24 08          	mov    %eax,0x8(%esp)
 842505c:	c7 44 24 04 4c e3 c4 	movl   $0x8c4e34c,0x4(%esp)
 8425063:	08 
 8425064:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8425067:	89 04 24             	mov    %eax,(%esp)
 842506a:	e8 51 f1 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842506f:	8b 45 98             	mov    -0x68(%ebp),%eax
 8425072:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8425075:	c7 45 90 00 00 00 00 	movl   $0x0,-0x70(%ebp)
 842507c:	8b 45 90             	mov    -0x70(%ebp),%eax
 842507f:	89 45 84             	mov    %eax,-0x7c(%ebp)
 8425082:	8b 7d 98             	mov    -0x68(%ebp),%edi
 8425085:	8b 75 94             	mov    -0x6c(%ebp),%esi
 8425088:	8b 45 cc             	mov    -0x34(%ebp),%eax
 842508b:	8b 18                	mov    (%eax),%ebx
 842508d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8425094:	00 
 8425095:	c7 44 24 08 69 62 00 	movl   $0x6269,0x8(%esp)
 842509c:	00 
 842509d:	c7 44 24 04 e0 c4 c5 	movl   $0x8c5c4e0,0x4(%esp)
 84250a4:	08 
 84250a5:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84250a8:	89 04 24             	mov    %eax,(%esp)
 84250ab:	e8 68 a6 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84250b0:	8b 55 84             	mov    -0x7c(%ebp),%edx
 84250b3:	89 54 24 18          	mov    %edx,0x18(%esp)
 84250b7:	89 7c 24 14          	mov    %edi,0x14(%esp)
 84250bb:	89 74 24 10          	mov    %esi,0x10(%esp)
 84250bf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84250c2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84250c6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84250ca:	c7 44 24 04 ec e2 c4 	movl   $0x8c4e2ec,0x4(%esp)
 84250d1:	08 
 84250d2:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84250d5:	89 04 24             	mov    %eax,(%esp)
 84250d8:	e8 ab a6 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84250dd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84250e4:	00 
 84250e5:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84250e8:	89 04 24             	mov    %eax,(%esp)
 84250eb:	e8 36 f2 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 84250f0:	83 f0 01             	xor    $0x1,%eax
 84250f3:	84 c0                	test   %al,%al
 84250f5:	74 48                	je     842513f <_ZN16DB_ReqBlackCount8dispatchEiiP6Stream+0x459>
 84250f7:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 84250fa:	8b 55 98             	mov    -0x68(%ebp),%edx
 84250fd:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8425100:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 8425104:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8425108:	89 44 24 18          	mov    %eax,0x18(%esp)
 842510c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842510f:	89 44 24 14          	mov    %eax,0x14(%esp)
 8425113:	c7 44 24 10 b0 e3 c4 	movl   $0x8c4e3b0,0x10(%esp)
 842511a:	08 
 842511b:	c7 44 24 0c 6c 62 00 	movl   $0x626c,0xc(%esp)
 8425122:	00 
 8425123:	c7 44 24 08 e0 c4 c5 	movl   $0x8c5c4e0,0x8(%esp)
 842512a:	08 
 842512b:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8425132:	08 
 8425133:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 842513a:	e8 cb ea 6a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 842513f:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8425144:	c7 44 24 08 71 62 00 	movl   $0x6271,0x8(%esp)
 842514b:	00 
 842514c:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8425153:	08 
 8425154:	89 04 24             	mov    %eax,(%esp)
 8425157:	e8 2a a9 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842515c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8425163:	00 
 8425164:	89 44 24 04          	mov    %eax,0x4(%esp)
 8425168:	8d 45 88             	lea    -0x78(%ebp),%eax
 842516b:	89 04 24             	mov    %eax,(%esp)
 842516e:	e8 b3 3a ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8425173:	8d 45 88             	lea    -0x78(%ebp),%eax
 8425176:	89 04 24             	mov    %eax,(%esp)
 8425179:	e8 c8 3a ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842517e:	c7 44 24 04 b3 00 00 	movl   $0xb3,0x4(%esp)
 8425185:	00 
 8425186:	89 04 24             	mov    %eax,(%esp)
 8425189:	e8 c8 3a ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842518e:	8d 45 88             	lea    -0x78(%ebp),%eax
 8425191:	89 04 24             	mov    %eax,(%esp)
 8425194:	e8 ad 3a ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8425199:	8b 55 10             	mov    0x10(%ebp),%edx
 842519c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84251a0:	89 04 24             	mov    %eax,(%esp)
 84251a3:	e8 ae 3a ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84251a8:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84251ab:	8b 00                	mov    (%eax),%eax
 84251ad:	89 c3                	mov    %eax,%ebx
 84251af:	8d 45 88             	lea    -0x78(%ebp),%eax
 84251b2:	89 04 24             	mov    %eax,(%esp)
 84251b5:	e8 8c 3a ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84251ba:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84251be:	89 04 24             	mov    %eax,(%esp)
 84251c1:	e8 90 3a ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84251c6:	8d 45 88             	lea    -0x78(%ebp),%eax
 84251c9:	89 04 24             	mov    %eax,(%esp)
 84251cc:	e8 75 3a ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84251d1:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 84251d4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84251d8:	89 04 24             	mov    %eax,(%esp)
 84251db:	e8 76 3a ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84251e0:	8b 55 98             	mov    -0x68(%ebp),%edx
 84251e3:	8b 45 94             	mov    -0x6c(%ebp),%eax
 84251e6:	29 c2                	sub    %eax,%edx
 84251e8:	89 d0                	mov    %edx,%eax
 84251ea:	c1 f8 1f             	sar    $0x1f,%eax
 84251ed:	f7 d0                	not    %eax
 84251ef:	89 d3                	mov    %edx,%ebx
 84251f1:	21 c3                	and    %eax,%ebx
 84251f3:	8d 45 88             	lea    -0x78(%ebp),%eax
 84251f6:	89 04 24             	mov    %eax,(%esp)
 84251f9:	e8 48 3a ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84251fe:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8425202:	89 04 24             	mov    %eax,(%esp)
 8425205:	e8 4c 3a ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842520a:	8b 5d 90             	mov    -0x70(%ebp),%ebx
 842520d:	8d 45 88             	lea    -0x78(%ebp),%eax
 8425210:	89 04 24             	mov    %eax,(%esp)
 8425213:	e8 2e 3a ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8425218:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 842521c:	89 04 24             	mov    %eax,(%esp)
 842521f:	e8 6e d0 cb ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8425224:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8425229:	8d 55 88             	lea    -0x78(%ebp),%edx
 842522c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8425230:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8425237:	00 
 8425238:	89 04 24             	mov    %eax,(%esp)
 842523b:	e8 9e bd 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8425240:	bb 01 00 00 00       	mov    $0x1,%ebx
 8425245:	8d 45 88             	lea    -0x78(%ebp),%eax
 8425248:	89 04 24             	mov    %eax,(%esp)
 842524b:	e8 82 76 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8425250:	eb 1b                	jmp    842526d <_ZN16DB_ReqBlackCount8dispatchEiiP6Stream+0x587>
 8425252:	89 d3                	mov    %edx,%ebx
 8425254:	89 c6                	mov    %eax,%esi
 8425256:	8d 45 88             	lea    -0x78(%ebp),%eax
 8425259:	89 04 24             	mov    %eax,(%esp)
 842525c:	e8 71 76 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8425261:	89 f0                	mov    %esi,%eax
 8425263:	89 da                	mov    %ebx,%edx
 8425265:	89 04 24             	mov    %eax,(%esp)
 8425268:	e8 e3 e4 6b 00       	call   8ae3750 <_Unwind_Resume>
 842526d:	89 d8                	mov    %ebx,%eax
 842526f:	81 c4 bc 00 00 00    	add    $0xbc,%esp
 8425275:	5b                   	pop    %ebx
 8425276:	5e                   	pop    %esi
 8425277:	5f                   	pop    %edi
 8425278:	5d                   	pop    %ebp
 8425279:	c3                   	ret

```

```c
// DB_ReqBlackCount::dispatch @ 0x8424ce6

/* DB_ReqBlackCount::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_ReqBlackCount::dispatch(DB_ReqBlackCount *this,int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  Stream *pSVar6;
  CStreamGuard *pCVar7;
  uint uVar8;
  int iVar9;
  CStreamGuard local_7c [8];
  uint local_74;
  int local_70;
  int local_6c;
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  SIG_REQ_BLACK_COUNT *local_38;
  MySQL *local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  
  local_38 = Stream::GetOutBuffer<SIG_REQ_BLACK_COUNT>(param_3);
  local_34 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_30 = 0;
  MySQL::set_query(local_34,
                   "seLect black_point,offset_point,unix_timestamp(problem_child_time) from charac_black_info where charac_no=%d"
                   ,*(int *)local_38);
  cVar3 = MySQL::exec(local_34,true);
  if (cVar3 == '\x01') {
    local_2c = MySQL::get_n_rows(local_34);
    if (local_2c < 2) {
      if (local_2c == 0) {
        local_30 = 1;
      }
    }
    else {
      LogManager::logFormat
                (1,"DBThread.cpp","virtual bool DB_ReqBlackCount::dispatch(int, int, Stream*)",
                 0x622c,"DB_ReqBlackCount::dispatch error! data(%d)",local_2c);
    }
    cVar3 = MySQL::fetch(local_34);
    if (cVar3 != '\x01') {
      local_30 = 2;
    }
    local_6c = 0;
    local_70 = 0;
    cVar3 = MySQL::get_int(local_34,0,&local_6c);
    if (cVar3 != '\x01') {
      local_30 = 3;
    }
    cVar3 = MySQL::get_int(local_34,1,&local_70);
    if (cVar3 != '\x01') {
      local_30 = 3;
    }
    local_74 = 0;
    cVar3 = MySQL::get_uint(local_34,2,&local_74);
    if (cVar3 != '\x01') {
      local_30 = 3;
    }
    if (local_74 != 0) {
      iVar4 = G_CDataManager();
      local_28 = *(int *)(iVar4 + 0x3b4) * 0x15180;
      if ((local_28 == 0) ||
         (iVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_),
         iVar4 <= (int)(local_74 + local_28))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        iVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        local_24 = (iVar4 - local_74) / local_28;
        if (local_6c != local_70 && -1 < local_6c - local_70) {
          iVar9 = local_6c - local_70;
          iVar4 = G_CDataManager();
          iVar5 = local_6c;
          iVar1 = local_70;
          uVar8 = local_74;
          local_20 = iVar9 - *(int *)(iVar4 + 0x3b8) * local_24;
          iVar4 = *(int *)local_38;
          cMyTrace::cMyTrace(local_68,"virtual bool DB_ReqBlackCount::dispatch(int, int, Stream*)",
                             0x6259,0);
          iVar9 = local_20;
          cMyTrace::operator()
                    (local_68,
                     "BlackList Modify : c(%d) iPassCnt(%d) iOffsetPoint(%d) iBlackPoint(%d) uProblemChildTime(%d) iComputedBlackPoint(%d)"
                     ,iVar4,local_24,iVar1,iVar5,uVar8,local_20);
          if (local_20 < 1) {
            MySQL::set_query(local_34,
                             "upDate charac_black_info set offset_point = black_point , problem_child_time = 0 where charac_no=%d"
                             ,*(int *)local_38);
            iVar1 = local_6c;
            local_70 = local_6c;
            local_74 = 0;
            iVar4 = *(int *)local_38;
            cMyTrace::cMyTrace(local_48,"virtual bool DB_ReqBlackCount::dispatch(int, int, Stream*)"
                               ,0x6269,0);
            cMyTrace::operator()
                      (local_48,
                       "BlackList Modify : c(%d) iPassCnt(%d) iOffsetPoint(%d) iBlackPoint(%d) uProblemChildTime(%d)"
                       ,iVar4,local_24,iVar1,iVar1,0,iVar9);
          }
          else {
            iVar1 = *(int *)local_38;
            iVar4 = local_28 * local_24 + local_74;
            iVar5 = G_CDataManager();
            MySQL::set_query(local_34,
                             "upDate charac_black_info set offset_point = offset_point  + %d, problem_child_time = from_unixtime(%d) where charac_no=%d"
                             ,*(int *)(iVar5 + 0x3b8) * local_24,iVar4,iVar1);
            iVar4 = G_CDataManager();
            iVar5 = local_6c;
            uVar8 = local_74;
            iVar4 = *(int *)(iVar4 + 0x3b8) * local_24 + local_70;
            iVar1 = *(int *)local_38;
            local_70 = iVar4;
            cMyTrace::cMyTrace(local_58,"virtual bool DB_ReqBlackCount::dispatch(int, int, Stream*)"
                               ,0x6262,0);
            cMyTrace::operator()
                      (local_58,
                       "BlackList Modify : c(%d) iPassCnt(%d) iOffsetPoint(%d) iBlackPoint(%d) uProblemChildTime(%d)"
                       ,iVar1,local_24,iVar4,iVar5,uVar8);
          }
          cVar3 = MySQL::exec(local_34,true);
          if (cVar3 != '\x01') {
            LogManager::logFormat
                      (1,"DBThread.cpp","virtual bool DB_ReqBlackCount::dispatch(int, int, Stream*)"
                       ,0x626c,
                       "BlackList Modify db exec error: iPassCnt(%d) iOffsetPoint(%d) iBlackPoint(%d) uProblemChildTime(%d)"
                       ,local_24,local_70,local_6c,local_74);
          }
        }
      }
    }
    pSVar6 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6271);
    CStreamGuard::CStreamGuard(local_7c,pSVar6,true);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_7c);
                    /* try { // try from 08425189 to 0842523f has its CatchHandler @ 08425252 */
    CStreamGuard::operator<<(pCVar7,0xb3);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_7c);
    CStreamGuard::operator<<(pCVar7,param_2);
    iVar4 = *(int *)local_38;
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_7c);
    CStreamGuard::operator<<(pCVar7,iVar4);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_7c);
    CStreamGuard::operator<<(pCVar7,local_30);
    uVar8 = local_6c - local_70;
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_7c);
    CStreamGuard::operator<<(pCVar7,uVar8 & ~((int)uVar8 >> 0x1f));
    uVar8 = local_74;
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_7c);
    CStreamGuard::operator<<(pCVar7,uVar8);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_7c);
    CStreamGuard::~CStreamGuard(local_7c);
    return 1;
  }
  return 0;
}

```

