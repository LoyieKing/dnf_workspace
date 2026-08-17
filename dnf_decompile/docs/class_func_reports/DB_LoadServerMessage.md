# DB_LoadServerMessage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08435ecc DB_LoadServerMessage::dispatch  [0x08435ecc-0x843630d] ===
 8435ecc:	55                   	push   %ebp
 8435ecd:	89 e5                	mov    %esp,%ebp
 8435ecf:	57                   	push   %edi
 8435ed0:	56                   	push   %esi
 8435ed1:	53                   	push   %ebx
 8435ed2:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 8435ed8:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8435edd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8435ee4:	00 
 8435ee5:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8435eec:	00 
 8435eed:	89 04 24             	mov    %eax,(%esp)
 8435ef0:	e8 49 f3 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8435ef5:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8435ef8:	8b 45 14             	mov    0x14(%ebp),%eax
 8435efb:	89 04 24             	mov    %eax,(%esp)
 8435efe:	e8 6d d3 01 00       	call   8453270 <_ZN6Stream12GetOutBufferI25SIG_SELECT_SERVER_MESSAGEEEPT_v>
 8435f03:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8435f06:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8435f09:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8435f0d:	0f b7 d0             	movzwl %ax,%edx
 8435f10:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8435f13:	0f b7 00             	movzwl (%eax),%eax
 8435f16:	0f b7 c0             	movzwl %ax,%eax
 8435f19:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8435f1d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8435f21:	c7 44 24 04 10 32 c5 	movl   $0x8c53210,0x4(%esp)
 8435f28:	08 
 8435f29:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8435f2c:	89 04 24             	mov    %eax,(%esp)
 8435f2f:	e8 8c e2 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8435f34:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8435f3b:	00 
 8435f3c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8435f3f:	89 04 24             	mov    %eax,(%esp)
 8435f42:	e8 df e3 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8435f47:	83 f0 01             	xor    $0x1,%eax
 8435f4a:	84 c0                	test   %al,%al
 8435f4c:	74 0a                	je     8435f58 <_ZN20DB_LoadServerMessage8dispatchEiiP6Stream+0x8c>
 8435f4e:	bb 00 00 00 00       	mov    $0x0,%ebx
 8435f53:	e9 a8 03 00 00       	jmp    8436300 <_ZN20DB_LoadServerMessage8dispatchEiiP6Stream+0x434>
 8435f58:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8435f5d:	c7 44 24 08 31 81 00 	movl   $0x8131,0x8(%esp)
 8435f64:	00 
 8435f65:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8435f6c:	08 
 8435f6d:	89 04 24             	mov    %eax,(%esp)
 8435f70:	e8 11 9b e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8435f75:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8435f7c:	00 
 8435f7d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8435f81:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8435f84:	89 04 24             	mov    %eax,(%esp)
 8435f87:	e8 9a 2c c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8435f8c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8435f8f:	89 04 24             	mov    %eax,(%esp)
 8435f92:	e8 af 2c c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8435f97:	8b 55 0c             	mov    0xc(%ebp),%edx
 8435f9a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8435f9e:	89 04 24             	mov    %eax,(%esp)
 8435fa1:	e8 b0 2c c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8435fa6:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8435fa9:	89 04 24             	mov    %eax,(%esp)
 8435fac:	e8 95 2c c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8435fb1:	8b 55 10             	mov    0x10(%ebp),%edx
 8435fb4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8435fb8:	89 04 24             	mov    %eax,(%esp)
 8435fbb:	e8 96 2c c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8435fc0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8435fc3:	89 04 24             	mov    %eax,(%esp)
 8435fc6:	e8 83 2c c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8435fcb:	89 04 24             	mov    %eax,(%esp)
 8435fce:	e8 f1 d2 01 00       	call   84532c4 <_ZN12CStreamGuard11GetInBufferI24SIG_EVENT_SERVER_MESSAGEEEPT_v>
 8435fd3:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8435fd6:	c7 44 24 08 34 11 00 	movl   $0x1134,0x8(%esp)
 8435fdd:	00 
 8435fde:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8435fe5:	00 
 8435fe6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8435fe9:	89 04 24             	mov    %eax,(%esp)
 8435fec:	e8 cf 7c c4 ff       	call   807dcc0 <memset@plt>
 8435ff1:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8435ff4:	89 04 24             	mov    %eax,(%esp)
 8435ff7:	e8 70 c3 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8435ffc:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8435fff:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 8436003:	c6 45 c3 00          	movb   $0x0,-0x3d(%ebp)
 8436007:	c6 45 c2 00          	movb   $0x0,-0x3e(%ebp)
 843600b:	8d 95 76 ff ff ff    	lea    -0x8a(%ebp),%edx
 8436011:	bb 32 00 00 00       	mov    $0x32,%ebx
 8436016:	b8 00 00 00 00       	mov    $0x0,%eax
 843601b:	89 d1                	mov    %edx,%ecx
 843601d:	83 e1 02             	and    $0x2,%ecx
 8436020:	85 c9                	test   %ecx,%ecx
 8436022:	74 09                	je     843602d <_ZN20DB_LoadServerMessage8dispatchEiiP6Stream+0x161>
 8436024:	66 89 02             	mov    %ax,(%edx)
 8436027:	83 c2 02             	add    $0x2,%edx
 843602a:	83 eb 02             	sub    $0x2,%ebx
 843602d:	89 d9                	mov    %ebx,%ecx
 843602f:	c1 e9 02             	shr    $0x2,%ecx
 8436032:	89 d7                	mov    %edx,%edi
 8436034:	f3 ab                	rep stos %eax,%es:(%edi)
 8436036:	89 fa                	mov    %edi,%edx
 8436038:	89 d9                	mov    %ebx,%ecx
 843603a:	83 e1 02             	and    $0x2,%ecx
 843603d:	85 c9                	test   %ecx,%ecx
 843603f:	74 06                	je     8436047 <_ZN20DB_LoadServerMessage8dispatchEiiP6Stream+0x17b>
 8436041:	66 89 02             	mov    %ax,(%edx)
 8436044:	83 c2 02             	add    $0x2,%edx
 8436047:	89 d9                	mov    %ebx,%ecx
 8436049:	83 e1 01             	and    $0x1,%ecx
 843604c:	85 c9                	test   %ecx,%ecx
 843604e:	74 05                	je     8436055 <_ZN20DB_LoadServerMessage8dispatchEiiP6Stream+0x189>
 8436050:	88 02                	mov    %al,(%edx)
 8436052:	83 c2 01             	add    $0x1,%edx
 8436055:	c7 45 ae 00 00 00 00 	movl   $0x0,-0x52(%ebp)
 843605c:	c7 45 b2 00 00 00 00 	movl   $0x0,-0x4e(%ebp)
 8436063:	c7 45 b6 00 00 00 00 	movl   $0x0,-0x4a(%ebp)
 843606a:	c7 45 ba 00 00 00 00 	movl   $0x0,-0x46(%ebp)
 8436071:	c7 45 be 00 00 00 00 	movl   $0x0,-0x42(%ebp)
 8436078:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 843607f:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8436086:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 843608d:	e9 0a 02 00 00       	jmp    843629c <_ZN20DB_LoadServerMessage8dispatchEiiP6Stream+0x3d0>
 8436092:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8436095:	89 04 24             	mov    %eax,(%esp)
 8436098:	e8 1f e4 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 843609d:	88 45 df             	mov    %al,-0x21(%ebp)
 84360a0:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 84360a4:	83 f0 01             	xor    $0x1,%eax
 84360a7:	84 c0                	test   %al,%al
 84360a9:	74 0a                	je     84360b5 <_ZN20DB_LoadServerMessage8dispatchEiiP6Stream+0x1e9>
 84360ab:	bb 00 00 00 00       	mov    $0x0,%ebx
 84360b0:	e9 40 02 00 00       	jmp    84362f5 <_ZN20DB_LoadServerMessage8dispatchEiiP6Stream+0x429>
 84360b5:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 84360b8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84360bc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84360c3:	00 
 84360c4:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84360c7:	89 04 24             	mov    %eax,(%esp)
 84360ca:	e8 85 7d cc ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 84360cf:	88 45 df             	mov    %al,-0x21(%ebp)
 84360d2:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 84360d6:	83 f0 01             	xor    $0x1,%eax
 84360d9:	84 c0                	test   %al,%al
 84360db:	74 0a                	je     84360e7 <_ZN20DB_LoadServerMessage8dispatchEiiP6Stream+0x21b>
 84360dd:	bb 00 00 00 00       	mov    $0x0,%ebx
 84360e2:	e9 0e 02 00 00       	jmp    84362f5 <_ZN20DB_LoadServerMessage8dispatchEiiP6Stream+0x429>
 84360e7:	8d 45 c2             	lea    -0x3e(%ebp),%eax
 84360ea:	89 44 24 08          	mov    %eax,0x8(%esp)
 84360ee:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84360f5:	00 
 84360f6:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84360f9:	89 04 24             	mov    %eax,(%esp)
 84360fc:	e8 53 7d cc ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8436101:	88 45 df             	mov    %al,-0x21(%ebp)
 8436104:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 8436108:	83 f0 01             	xor    $0x1,%eax
 843610b:	84 c0                	test   %al,%al
 843610d:	74 0a                	je     8436119 <_ZN20DB_LoadServerMessage8dispatchEiiP6Stream+0x24d>
 843610f:	bb 00 00 00 00       	mov    $0x0,%ebx
 8436114:	e9 dc 01 00 00       	jmp    84362f5 <_ZN20DB_LoadServerMessage8dispatchEiiP6Stream+0x429>
 8436119:	c7 44 24 0c 14 00 00 	movl   $0x14,0xc(%esp)
 8436120:	00 
 8436121:	8d 45 ae             	lea    -0x52(%ebp),%eax
 8436124:	89 44 24 08          	mov    %eax,0x8(%esp)
 8436128:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843612f:	00 
 8436130:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8436133:	89 04 24             	mov    %eax,(%esp)
 8436136:	e8 af 6c cb ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 843613b:	88 45 df             	mov    %al,-0x21(%ebp)
 843613e:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 8436142:	83 f0 01             	xor    $0x1,%eax
 8436145:	84 c0                	test   %al,%al
 8436147:	74 0a                	je     8436153 <_ZN20DB_LoadServerMessage8dispatchEiiP6Stream+0x287>
 8436149:	bb 00 00 00 00       	mov    $0x0,%ebx
 843614e:	e9 a2 01 00 00       	jmp    84362f5 <_ZN20DB_LoadServerMessage8dispatchEiiP6Stream+0x429>
 8436153:	c7 44 24 0c 32 00 00 	movl   $0x32,0xc(%esp)
 843615a:	00 
 843615b:	8d 85 76 ff ff ff    	lea    -0x8a(%ebp),%eax
 8436161:	89 44 24 08          	mov    %eax,0x8(%esp)
 8436165:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 843616c:	00 
 843616d:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8436170:	89 04 24             	mov    %eax,(%esp)
 8436173:	e8 72 6c cb ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8436178:	88 45 df             	mov    %al,-0x21(%ebp)
 843617b:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 843617f:	83 f0 01             	xor    $0x1,%eax
 8436182:	84 c0                	test   %al,%al
 8436184:	74 0a                	je     8436190 <_ZN20DB_LoadServerMessage8dispatchEiiP6Stream+0x2c4>
 8436186:	bb 00 00 00 00       	mov    $0x0,%ebx
 843618b:	e9 65 01 00 00       	jmp    84362f5 <_ZN20DB_LoadServerMessage8dispatchEiiP6Stream+0x429>
 8436190:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8436193:	89 44 24 08          	mov    %eax,0x8(%esp)
 8436197:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 843619e:	00 
 843619f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84361a2:	89 04 24             	mov    %eax,(%esp)
 84361a5:	e8 82 07 ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84361aa:	88 45 df             	mov    %al,-0x21(%ebp)
 84361ad:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 84361b1:	83 f0 01             	xor    $0x1,%eax
 84361b4:	84 c0                	test   %al,%al
 84361b6:	74 0a                	je     84361c2 <_ZN20DB_LoadServerMessage8dispatchEiiP6Stream+0x2f6>
 84361b8:	bb 00 00 00 00       	mov    $0x0,%ebx
 84361bd:	e9 33 01 00 00       	jmp    84362f5 <_ZN20DB_LoadServerMessage8dispatchEiiP6Stream+0x429>
 84361c2:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84361c5:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 84361c9:	89 c1                	mov    %eax,%ecx
 84361cb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84361ce:	6b d2 58             	imul   $0x58,%edx,%edx
 84361d1:	88 4c 02 04          	mov    %cl,0x4(%edx,%eax,1)
 84361d5:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84361d8:	0f b6 45 c2          	movzbl -0x3e(%ebp),%eax
 84361dc:	89 c1                	mov    %eax,%ecx
 84361de:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84361e1:	6b d2 58             	imul   $0x58,%edx,%edx
 84361e4:	88 4c 02 05          	mov    %cl,0x5(%edx,%eax,1)
 84361e8:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 84361eb:	8d 85 76 ff ff ff    	lea    -0x8a(%ebp),%eax
 84361f1:	89 04 24             	mov    %eax,(%esp)
 84361f4:	e8 b7 81 c4 ff       	call   807e3b0 <strlen@plt>
 84361f9:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 84361fc:	6b d3 58             	imul   $0x58,%ebx,%edx
 84361ff:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8436202:	83 c2 08             	add    $0x8,%edx
 8436205:	89 02                	mov    %eax,(%edx)
 8436207:	8d 85 76 ff ff ff    	lea    -0x8a(%ebp),%eax
 843620d:	89 04 24             	mov    %eax,(%esp)
 8436210:	e8 9b 81 c4 ff       	call   807e3b0 <strlen@plt>
 8436215:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8436218:	6b d2 58             	imul   $0x58,%edx,%edx
 843621b:	03 55 d4             	add    -0x2c(%ebp),%edx
 843621e:	83 c2 0c             	add    $0xc,%edx
 8436221:	89 44 24 08          	mov    %eax,0x8(%esp)
 8436225:	8d 85 76 ff ff ff    	lea    -0x8a(%ebp),%eax
 843622b:	89 44 24 04          	mov    %eax,0x4(%esp)
 843622f:	89 14 24             	mov    %edx,(%esp)
 8436232:	e8 99 76 c4 ff       	call   807d8d0 <strncpy@plt>
 8436237:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 843623a:	8d 45 ae             	lea    -0x52(%ebp),%eax
 843623d:	89 04 24             	mov    %eax,(%esp)
 8436240:	e8 6b 81 c4 ff       	call   807e3b0 <strlen@plt>
 8436245:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 8436248:	6b d3 58             	imul   $0x58,%ebx,%edx
 843624b:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 843624e:	83 c2 40             	add    $0x40,%edx
 8436251:	89 02                	mov    %eax,(%edx)
 8436253:	8d 45 ae             	lea    -0x52(%ebp),%eax
 8436256:	89 04 24             	mov    %eax,(%esp)
 8436259:	e8 52 81 c4 ff       	call   807e3b0 <strlen@plt>
 843625e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8436261:	6b d2 58             	imul   $0x58,%edx,%edx
 8436264:	83 c2 40             	add    $0x40,%edx
 8436267:	03 55 d4             	add    -0x2c(%ebp),%edx
 843626a:	83 c2 04             	add    $0x4,%edx
 843626d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8436271:	8d 45 ae             	lea    -0x52(%ebp),%eax
 8436274:	89 44 24 04          	mov    %eax,0x4(%esp)
 8436278:	89 14 24             	mov    %edx,(%esp)
 843627b:	e8 50 76 c4 ff       	call   807d8d0 <strncpy@plt>
 8436280:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8436283:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8436286:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 8436289:	6b d2 58             	imul   $0x58,%edx,%edx
 843628c:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 843628f:	83 c2 58             	add    $0x58,%edx
 8436292:	89 02                	mov    %eax,(%edx)
 8436294:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8436298:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 843629c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843629f:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 84362a2:	0f 9c c0             	setl   %al
 84362a5:	84 c0                	test   %al,%al
 84362a7:	0f 85 e5 fd ff ff    	jne    8436092 <_ZN20DB_LoadServerMessage8dispatchEiiP6Stream+0x1c6>
 84362ad:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84362b0:	89 c2                	mov    %eax,%edx
 84362b2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84362b5:	88 10                	mov    %dl,(%eax)
 84362b7:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84362bc:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 84362bf:	89 54 24 08          	mov    %edx,0x8(%esp)
 84362c3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84362ca:	00 
 84362cb:	89 04 24             	mov    %eax,(%esp)
 84362ce:	e8 0b ad 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84362d3:	bb 01 00 00 00       	mov    $0x1,%ebx
 84362d8:	eb 1b                	jmp    84362f5 <_ZN20DB_LoadServerMessage8dispatchEiiP6Stream+0x429>
 84362da:	89 d3                	mov    %edx,%ebx
 84362dc:	89 c6                	mov    %eax,%esi
 84362de:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84362e1:	89 04 24             	mov    %eax,(%esp)
 84362e4:	e8 e9 65 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84362e9:	89 f0                	mov    %esi,%eax
 84362eb:	89 da                	mov    %ebx,%edx
 84362ed:	89 04 24             	mov    %eax,(%esp)
 84362f0:	e8 5b d4 6a 00       	call   8ae3750 <_Unwind_Resume>
 84362f5:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84362f8:	89 04 24             	mov    %eax,(%esp)
 84362fb:	e8 d2 65 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8436300:	89 d8                	mov    %ebx,%eax
 8436302:	81 c4 9c 00 00 00    	add    $0x9c,%esp
 8436308:	5b                   	pop    %ebx
 8436309:	5e                   	pop    %esi
 843630a:	5f                   	pop    %edi
 843630b:	5d                   	pop    %ebp
 843630c:	c3                   	ret
 843630d:	90                   	nop

```

```c
// DB_LoadServerMessage::dispatch @ 0x8435ecc

/* WARNING: Removing unreachable block (ram,0x08436050) */
/* DB_LoadServerMessage::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadServerMessage::dispatch(DB_LoadServerMessage *this,int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  size_t sVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  bool bVar9;
  byte bVar10;
  char local_8e [50];
  int local_5c;
  char local_56 [20];
  SIG_EVENT_SERVER_MESSAGE local_42;
  SIG_EVENT_SERVER_MESSAGE local_41;
  CStreamGuard local_40 [8];
  MySQL *local_38;
  SIG_SELECT_SERVER_MESSAGE *local_34;
  SIG_EVENT_SERVER_MESSAGE *local_30;
  int local_2c;
  char local_25;
  int local_24;
  int local_20;
  
  bVar10 = 0;
  local_38 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_34 = Stream::GetOutBuffer<SIG_SELECT_SERVER_MESSAGE>(param_3);
  MySQL::set_query(local_38,
                   "seLect kind, message_index, charac_name, message, unix_timestamp(update_time) from event_server_message where server_info=%d and (channel_no=%d or channel_no=0)"
                   ,(uint)*(ushort *)local_34,(uint)*(ushort *)(local_34 + 2));
  cVar2 = MySQL::exec(local_38,true);
  if (cVar2 == '\x01') {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8131);
    CStreamGuard::CStreamGuard(local_40,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_40);
                    /* try { // try from 08435fa1 to 084362d2 has its CatchHandler @ 084362da */
    CStreamGuard::operator<<(pCVar4,param_1);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_40);
    CStreamGuard::operator<<(pCVar4,param_2);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_40);
    local_30 = CStreamGuard::GetInBuffer<SIG_EVENT_SERVER_MESSAGE>(pCVar4);
    memset(local_30,0,0x1134);
    local_2c = MySQL::get_n_rows(local_38);
    local_25 = '\0';
    local_41 = (SIG_EVENT_SERVER_MESSAGE)0x0;
    local_42 = (SIG_EVENT_SERVER_MESSAGE)0x0;
    pcVar6 = local_8e;
    uVar8 = 0x32;
    bVar9 = ((uint)pcVar6 & 2) != 0;
    if (bVar9) {
      local_8e[0] = '\0';
      local_8e[1] = '\0';
      pcVar6 = local_8e + 2;
      uVar8 = 0x30;
    }
    for (uVar8 = uVar8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + ((uint)bVar10 * -2 + 1) * 4;
    }
    if (!bVar9) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
    }
    local_56[0] = '\0';
    local_56[1] = '\0';
    local_56[2] = '\0';
    local_56[3] = '\0';
    local_56[4] = '\0';
    local_56[5] = '\0';
    local_56[6] = '\0';
    local_56[7] = '\0';
    local_56[8] = '\0';
    local_56[9] = '\0';
    local_56[10] = '\0';
    local_56[0xb] = '\0';
    local_56[0xc] = '\0';
    local_56[0xd] = '\0';
    local_56[0xe] = '\0';
    local_56[0xf] = '\0';
    local_56[0x10] = '\0';
    local_56[0x11] = '\0';
    local_56[0x12] = '\0';
    local_56[0x13] = '\0';
    local_5c = 0;
    local_24 = 0;
    for (local_20 = 0; local_20 < local_2c; local_20 = local_20 + 1) {
      local_25 = MySQL::fetch(local_38);
      if (local_25 != '\x01') {
        uVar7 = 0;
        goto LAB_084362f5;
      }
      local_25 = MySQL::get_byte(local_38,0,(char *)&local_41);
      if (local_25 != '\x01') {
        uVar7 = 0;
        goto LAB_084362f5;
      }
      local_25 = MySQL::get_byte(local_38,1,(char *)&local_42);
      if (local_25 != '\x01') {
        uVar7 = 0;
        goto LAB_084362f5;
      }
      local_25 = MySQL::get_str(local_38,2,local_56,0x14);
      if (local_25 != '\x01') {
        uVar7 = 0;
        goto LAB_084362f5;
      }
      local_25 = MySQL::get_str(local_38,3,local_8e,0x32);
      if (local_25 != '\x01') {
        uVar7 = 0;
        goto LAB_084362f5;
      }
      local_25 = MySQL::get_int(local_38,4,&local_5c);
      iVar1 = local_24;
      if (local_25 != '\x01') {
        uVar7 = 0;
        goto LAB_084362f5;
      }
      local_30[local_24 * 0x58 + 4] = local_41;
      local_30[local_24 * 0x58 + 5] = local_42;
      sVar5 = strlen(local_8e);
      *(size_t *)(local_30 + iVar1 * 0x58 + 8) = sVar5;
      sVar5 = strlen(local_8e);
      strncpy((char *)(local_30 + local_24 * 0x58 + 0xc),local_8e,sVar5);
      iVar1 = local_24;
      sVar5 = strlen(local_56);
      *(size_t *)(local_30 + iVar1 * 0x58 + 0x40) = sVar5;
      sVar5 = strlen(local_56);
      strncpy((char *)(local_30 + local_24 * 0x58 + 0x44),local_56,sVar5);
      *(int *)(local_30 + local_24 * 0x58 + 0x58) = local_5c;
      local_24 = local_24 + 1;
    }
    *local_30 = SUB41(local_2c,0);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_40);
    uVar7 = 1;
LAB_084362f5:
    CStreamGuard::~CStreamGuard(local_40);
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

```

