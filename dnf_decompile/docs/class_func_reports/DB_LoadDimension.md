# DB_LoadDimension

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08431ece DB_LoadDimension::dispatch  [0x08431ece-0x8432309] ===
 8431ece:	55                   	push   %ebp
 8431ecf:	89 e5                	mov    %esp,%ebp
 8431ed1:	57                   	push   %edi
 8431ed2:	56                   	push   %esi
 8431ed3:	53                   	push   %ebx
 8431ed4:	83 ec 7c             	sub    $0x7c,%esp
 8431ed7:	8b 45 08             	mov    0x8(%ebp),%eax
 8431eda:	8b 55 14             	mov    0x14(%ebp),%edx
 8431edd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8431ee1:	8b 55 10             	mov    0x10(%ebp),%edx
 8431ee4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8431ee8:	8b 55 0c             	mov    0xc(%ebp),%edx
 8431eeb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8431eef:	89 04 24             	mov    %eax,(%esp)
 8431ef2:	e8 85 a0 fc ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 8431ef7:	83 f0 01             	xor    $0x1,%eax
 8431efa:	84 c0                	test   %al,%al
 8431efc:	74 0a                	je     8431f08 <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x3a>
 8431efe:	bb 00 00 00 00       	mov    $0x0,%ebx
 8431f03:	e9 f8 03 00 00       	jmp    8432300 <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x432>
 8431f08:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8431f0d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8431f14:	00 
 8431f15:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8431f1c:	00 
 8431f1d:	89 04 24             	mov    %eax,(%esp)
 8431f20:	e8 19 33 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8431f25:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8431f28:	8b 45 14             	mov    0x14(%ebp),%eax
 8431f2b:	89 04 24             	mov    %eax,(%esp)
 8431f2e:	e8 c5 0f 02 00       	call   8452ef8 <_ZN6Stream12GetOutBufferI18SIG_LOAD_DIMENSIONEEPT_v>
 8431f33:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8431f36:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8431f39:	8b 00                	mov    (%eax),%eax
 8431f3b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8431f3f:	c7 44 24 04 50 1f c5 	movl   $0x8c51f50,0x4(%esp)
 8431f46:	08 
 8431f47:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8431f4a:	89 04 24             	mov    %eax,(%esp)
 8431f4d:	e8 6e 22 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8431f52:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8431f59:	00 
 8431f5a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8431f5d:	89 04 24             	mov    %eax,(%esp)
 8431f60:	e8 c1 23 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8431f65:	83 f0 01             	xor    $0x1,%eax
 8431f68:	84 c0                	test   %al,%al
 8431f6a:	75 12                	jne    8431f7e <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0xb0>
 8431f6c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8431f6f:	89 04 24             	mov    %eax,(%esp)
 8431f72:	e8 45 25 fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8431f77:	83 f0 01             	xor    $0x1,%eax
 8431f7a:	84 c0                	test   %al,%al
 8431f7c:	74 07                	je     8431f85 <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0xb7>
 8431f7e:	b8 01 00 00 00       	mov    $0x1,%eax
 8431f83:	eb 05                	jmp    8431f8a <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0xbc>
 8431f85:	b8 00 00 00 00       	mov    $0x0,%eax
 8431f8a:	84 c0                	test   %al,%al
 8431f8c:	0f 84 a4 00 00 00    	je     8432036 <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x168>
 8431f92:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8431f95:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 8431f99:	0f be c0             	movsbl %al,%eax
 8431f9c:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8431f9f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8431fa2:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8431fa6:	0f be f8             	movsbl %al,%edi
 8431fa9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8431fac:	0f b6 40 07          	movzbl 0x7(%eax),%eax
 8431fb0:	0f be f0             	movsbl %al,%esi
 8431fb3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8431fb6:	0f b6 40 06          	movzbl 0x6(%eax),%eax
 8431fba:	0f be d8             	movsbl %al,%ebx
 8431fbd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8431fc0:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 8431fc4:	0f be c8             	movsbl %al,%ecx
 8431fc7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8431fca:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8431fce:	0f be d0             	movsbl %al,%edx
 8431fd1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8431fd4:	8b 00                	mov    (%eax),%eax
 8431fd6:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8431fd9:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8431fdc:	89 44 24 20          	mov    %eax,0x20(%esp)
 8431fe0:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 8431fe4:	89 74 24 18          	mov    %esi,0x18(%esp)
 8431fe8:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8431fec:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8431ff0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8431ff4:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8431ff7:	89 44 24 08          	mov    %eax,0x8(%esp)
 8431ffb:	c7 44 24 04 c4 1f c5 	movl   $0x8c51fc4,0x4(%esp)
 8432002:	08 
 8432003:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8432006:	89 04 24             	mov    %eax,(%esp)
 8432009:	e8 b2 21 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843200e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8432015:	00 
 8432016:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8432019:	89 04 24             	mov    %eax,(%esp)
 843201c:	e8 05 23 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8432021:	83 f0 01             	xor    $0x1,%eax
 8432024:	84 c0                	test   %al,%al
 8432026:	0f 84 1e 01 00 00    	je     843214a <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x27c>
 843202c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8432031:	e9 ca 02 00 00       	jmp    8432300 <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x432>
 8432036:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8432039:	83 c0 04             	add    $0x4,%eax
 843203c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8432040:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8432047:	00 
 8432048:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843204b:	89 04 24             	mov    %eax,(%esp)
 843204e:	e8 01 be cc ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8432053:	83 f0 01             	xor    $0x1,%eax
 8432056:	84 c0                	test   %al,%al
 8432058:	74 0a                	je     8432064 <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x196>
 843205a:	bb 00 00 00 00       	mov    $0x0,%ebx
 843205f:	e9 9c 02 00 00       	jmp    8432300 <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x432>
 8432064:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8432067:	83 c0 05             	add    $0x5,%eax
 843206a:	89 44 24 08          	mov    %eax,0x8(%esp)
 843206e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8432075:	00 
 8432076:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8432079:	89 04 24             	mov    %eax,(%esp)
 843207c:	e8 d3 bd cc ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8432081:	83 f0 01             	xor    $0x1,%eax
 8432084:	84 c0                	test   %al,%al
 8432086:	74 0a                	je     8432092 <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x1c4>
 8432088:	bb 00 00 00 00       	mov    $0x0,%ebx
 843208d:	e9 6e 02 00 00       	jmp    8432300 <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x432>
 8432092:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8432095:	83 c0 06             	add    $0x6,%eax
 8432098:	89 44 24 08          	mov    %eax,0x8(%esp)
 843209c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84320a3:	00 
 84320a4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84320a7:	89 04 24             	mov    %eax,(%esp)
 84320aa:	e8 a5 bd cc ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 84320af:	83 f0 01             	xor    $0x1,%eax
 84320b2:	84 c0                	test   %al,%al
 84320b4:	74 0a                	je     84320c0 <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x1f2>
 84320b6:	bb 00 00 00 00       	mov    $0x0,%ebx
 84320bb:	e9 40 02 00 00       	jmp    8432300 <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x432>
 84320c0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84320c3:	83 c0 07             	add    $0x7,%eax
 84320c6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84320ca:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84320d1:	00 
 84320d2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84320d5:	89 04 24             	mov    %eax,(%esp)
 84320d8:	e8 77 bd cc ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 84320dd:	83 f0 01             	xor    $0x1,%eax
 84320e0:	84 c0                	test   %al,%al
 84320e2:	74 0a                	je     84320ee <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x220>
 84320e4:	bb 00 00 00 00       	mov    $0x0,%ebx
 84320e9:	e9 12 02 00 00       	jmp    8432300 <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x432>
 84320ee:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84320f1:	83 c0 08             	add    $0x8,%eax
 84320f4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84320f8:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84320ff:	00 
 8432100:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8432103:	89 04 24             	mov    %eax,(%esp)
 8432106:	e8 49 bd cc ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 843210b:	83 f0 01             	xor    $0x1,%eax
 843210e:	84 c0                	test   %al,%al
 8432110:	74 0a                	je     843211c <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x24e>
 8432112:	bb 00 00 00 00       	mov    $0x0,%ebx
 8432117:	e9 e4 01 00 00       	jmp    8432300 <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x432>
 843211c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843211f:	83 c0 09             	add    $0x9,%eax
 8432122:	89 44 24 08          	mov    %eax,0x8(%esp)
 8432126:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 843212d:	00 
 843212e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8432131:	89 04 24             	mov    %eax,(%esp)
 8432134:	e8 1b bd cc ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8432139:	83 f0 01             	xor    $0x1,%eax
 843213c:	84 c0                	test   %al,%al
 843213e:	74 0a                	je     843214a <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x27c>
 8432140:	bb 00 00 00 00       	mov    $0x0,%ebx
 8432145:	e9 b6 01 00 00       	jmp    8432300 <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x432>
 843214a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843214d:	8b 00                	mov    (%eax),%eax
 843214f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8432153:	c7 44 24 04 48 20 c5 	movl   $0x8c52048,0x4(%esp)
 843215a:	08 
 843215b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843215e:	89 04 24             	mov    %eax,(%esp)
 8432161:	e8 5a 20 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8432166:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843216d:	00 
 843216e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8432171:	89 04 24             	mov    %eax,(%esp)
 8432174:	e8 ad 21 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8432179:	83 f0 01             	xor    $0x1,%eax
 843217c:	84 c0                	test   %al,%al
 843217e:	75 12                	jne    8432192 <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x2c4>
 8432180:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8432183:	89 04 24             	mov    %eax,(%esp)
 8432186:	e8 31 23 fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 843218b:	83 f0 01             	xor    $0x1,%eax
 843218e:	84 c0                	test   %al,%al
 8432190:	74 07                	je     8432199 <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x2cb>
 8432192:	b8 01 00 00 00       	mov    $0x1,%eax
 8432197:	eb 05                	jmp    843219e <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x2d0>
 8432199:	b8 00 00 00 00       	mov    $0x0,%eax
 843219e:	84 c0                	test   %al,%al
 84321a0:	74 4e                	je     84321f0 <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x322>
 84321a2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84321a5:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 84321a9:	0f be d0             	movsbl %al,%edx
 84321ac:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84321af:	8b 00                	mov    (%eax),%eax
 84321b1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84321b5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84321b9:	c7 44 24 04 84 20 c5 	movl   $0x8c52084,0x4(%esp)
 84321c0:	08 
 84321c1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84321c4:	89 04 24             	mov    %eax,(%esp)
 84321c7:	e8 f4 1f fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84321cc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84321d3:	00 
 84321d4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84321d7:	89 04 24             	mov    %eax,(%esp)
 84321da:	e8 47 21 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 84321df:	83 f0 01             	xor    $0x1,%eax
 84321e2:	84 c0                	test   %al,%al
 84321e4:	74 38                	je     843221e <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x350>
 84321e6:	bb 00 00 00 00       	mov    $0x0,%ebx
 84321eb:	e9 10 01 00 00       	jmp    8432300 <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x432>
 84321f0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84321f3:	83 c0 0c             	add    $0xc,%eax
 84321f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84321fa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8432201:	00 
 8432202:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8432205:	89 04 24             	mov    %eax,(%esp)
 8432208:	e8 47 bc cc ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 843220d:	83 f0 01             	xor    $0x1,%eax
 8432210:	84 c0                	test   %al,%al
 8432212:	74 0a                	je     843221e <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x350>
 8432214:	bb 00 00 00 00       	mov    $0x0,%ebx
 8432219:	e9 e2 00 00 00       	jmp    8432300 <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x432>
 843221e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8432223:	c7 44 24 08 55 79 00 	movl   $0x7955,0x8(%esp)
 843222a:	00 
 843222b:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8432232:	08 
 8432233:	89 04 24             	mov    %eax,(%esp)
 8432236:	e8 4b d8 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843223b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8432242:	00 
 8432243:	89 44 24 04          	mov    %eax,0x4(%esp)
 8432247:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 843224a:	89 04 24             	mov    %eax,(%esp)
 843224d:	e8 d4 69 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8432252:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8432255:	89 04 24             	mov    %eax,(%esp)
 8432258:	e8 e9 69 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843225d:	c7 44 24 04 4e 01 00 	movl   $0x14e,0x4(%esp)
 8432264:	00 
 8432265:	89 04 24             	mov    %eax,(%esp)
 8432268:	e8 e9 69 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843226d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8432270:	89 04 24             	mov    %eax,(%esp)
 8432273:	e8 ce 69 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8432278:	8b 55 10             	mov    0x10(%ebp),%edx
 843227b:	89 54 24 04          	mov    %edx,0x4(%esp)
 843227f:	89 04 24             	mov    %eax,(%esp)
 8432282:	e8 cf 69 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8432287:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 843228a:	89 04 24             	mov    %eax,(%esp)
 843228d:	e8 bc 69 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8432292:	89 04 24             	mov    %eax,(%esp)
 8432295:	e8 48 0c 02 00       	call   8452ee2 <_ZN12CStreamGuard11GetInBufferI18SIG_LOAD_DIMENSIONEEPT_v>
 843229a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 843229d:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 84322a4:	00 
 84322a5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84322a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84322ac:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84322af:	89 04 24             	mov    %eax,(%esp)
 84322b2:	e8 e9 b5 c4 ff       	call   807d8a0 <memcpy@plt>
 84322b7:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84322bc:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 84322bf:	89 54 24 08          	mov    %edx,0x8(%esp)
 84322c3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84322ca:	00 
 84322cb:	89 04 24             	mov    %eax,(%esp)
 84322ce:	e8 0b ed 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84322d3:	bb 01 00 00 00       	mov    $0x1,%ebx
 84322d8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84322db:	89 04 24             	mov    %eax,(%esp)
 84322de:	e8 ef a5 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84322e3:	eb 1b                	jmp    8432300 <_ZN16DB_LoadDimension8dispatchEiiP6Stream+0x432>
 84322e5:	89 d3                	mov    %edx,%ebx
 84322e7:	89 c6                	mov    %eax,%esi
 84322e9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84322ec:	89 04 24             	mov    %eax,(%esp)
 84322ef:	e8 de a5 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84322f4:	89 f0                	mov    %esi,%eax
 84322f6:	89 da                	mov    %ebx,%edx
 84322f8:	89 04 24             	mov    %eax,(%esp)
 84322fb:	e8 50 14 6b 00       	call   8ae3750 <_Unwind_Resume>
 8432300:	89 d8                	mov    %ebx,%eax
 8432302:	83 c4 7c             	add    $0x7c,%esp
 8432305:	5b                   	pop    %ebx
 8432306:	5e                   	pop    %esi
 8432307:	5f                   	pop    %edi
 8432308:	5d                   	pop    %ebp
 8432309:	c3                   	ret

```

```c
// DB_LoadDimension::dispatch @ 0x8431ece

/* DB_LoadDimension::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadDimension::dispatch(DB_LoadDimension *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  CStreamGuard *pCVar3;
  Stream *pSVar4;
  CStreamGuard local_30 [8];
  MySQL *local_28;
  SIG_LOAD_DIMENSION *local_24;
  SIG_LOAD_DIMENSION *local_20;
  
  pSVar4 = param_3;
  cVar2 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0,pSVar4);
  local_24 = Stream::GetOutBuffer<SIG_LOAD_DIMENSION>(param_3);
  MySQL::set_query(local_28,
                   "seLect dungeon1, dungeon2, dungeon3, dungeon4, dungeon5, dungeon6 from charac_dimension_inout where charac_no=%u"
                   ,*(undefined4 *)local_24);
  cVar2 = MySQL::exec(local_28,true);
  if ((cVar2 == '\x01') && (cVar2 = MySQL::fetch(local_28), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    pSVar4 = (Stream *)(int)(char)local_24[4];
    MySQL::set_query(local_28,
                     "inSert into charac_dimension_inout(charac_no,dungeon1,dungeon2,dungeon3,dungeon4,dungeon5,dungeon6) values(%u,%d,%d,%d,%d,%d,%d)"
                     ,*(undefined4 *)local_24,pSVar4,(int)(char)local_24[5],(int)(char)local_24[6],
                     (int)(char)local_24[7],(int)(char)local_24[8],(int)(char)local_24[9]);
    cVar2 = MySQL::exec(local_28,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  else {
    cVar2 = MySQL::get_byte(local_28,0,(char *)(local_24 + 4));
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_byte(local_28,1,(char *)(local_24 + 5));
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_byte(local_28,2,(char *)(local_24 + 6));
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_byte(local_28,3,(char *)(local_24 + 7));
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_byte(local_28,4,(char *)(local_24 + 8));
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_byte(local_28,5,(char *)(local_24 + 9));
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  MySQL::set_query(local_28,"seLect dungeon1 from charac_blood_inout where charac_no=%u",
                   *(undefined4 *)local_24,pSVar4);
  cVar2 = MySQL::exec(local_28,true);
  if ((cVar2 == '\x01') && (cVar2 = MySQL::fetch(local_28), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    MySQL::set_query(local_28,"inSert into charac_blood_inout(charac_no,dungeon1) values(%u,%d)",
                     *(undefined4 *)local_24,(int)(char)local_24[0xc]);
    cVar2 = MySQL::exec(local_28,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  else {
    cVar2 = MySQL::get_byte(local_28,0,(char *)(local_24 + 0xc));
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7955);
  CStreamGuard::CStreamGuard(local_30,pSVar4,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_30);
                    /* try { // try from 08432268 to 084322d2 has its CatchHandler @ 084322e5 */
  CStreamGuard::operator<<(pCVar3,0x14e);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_30);
  CStreamGuard::operator<<(pCVar3,param_2);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_30);
  local_20 = CStreamGuard::GetInBuffer<SIG_LOAD_DIMENSION>(pCVar3);
  memcpy(local_20,local_24,0x10);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_30);
  CStreamGuard::~CStreamGuard(local_30);
  return 1;
}

```

---

## makeRequest

```asm
// === 08431d8c DB_LoadDimension::makeRequest  [0x08431d8c-0x8431ecd] ===
 8431d8c:	55                   	push   %ebp
 8431d8d:	89 e5                	mov    %esp,%ebp
 8431d8f:	56                   	push   %esi
 8431d90:	53                   	push   %ebx
 8431d91:	83 ec 30             	sub    $0x30,%esp
 8431d94:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8431d99:	c7 44 24 08 16 79 00 	movl   $0x7916,0x8(%esp)
 8431da0:	00 
 8431da1:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8431da8:	08 
 8431da9:	89 04 24             	mov    %eax,(%esp)
 8431dac:	e8 d5 dc e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8431db1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8431db8:	00 
 8431db9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8431dbd:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8431dc0:	89 04 24             	mov    %eax,(%esp)
 8431dc3:	e8 5e 6e c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8431dc8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8431dcb:	89 04 24             	mov    %eax,(%esp)
 8431dce:	e8 73 6e c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8431dd3:	c7 44 24 04 4e 01 00 	movl   $0x14e,0x4(%esp)
 8431dda:	00 
 8431ddb:	89 04 24             	mov    %eax,(%esp)
 8431dde:	e8 73 6e c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8431de3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8431de6:	89 04 24             	mov    %eax,(%esp)
 8431de9:	e8 58 6e c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8431dee:	8b 55 08             	mov    0x8(%ebp),%edx
 8431df1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8431df5:	89 04 24             	mov    %eax,(%esp)
 8431df8:	e8 59 6e c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8431dfd:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8431e00:	89 04 24             	mov    %eax,(%esp)
 8431e03:	e8 46 6e c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8431e08:	89 04 24             	mov    %eax,(%esp)
 8431e0b:	e8 d2 10 02 00       	call   8452ee2 <_ZN12CStreamGuard11GetInBufferI18SIG_LOAD_DIMENSIONEEPT_v>
 8431e10:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8431e13:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8431e16:	8b 55 0c             	mov    0xc(%ebp),%edx
 8431e19:	89 10                	mov    %edx,(%eax)
 8431e1b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8431e22:	eb 2d                	jmp    8431e51 <_ZN16DB_LoadDimension11makeRequestEij+0xc5>
 8431e24:	e8 72 a3 c9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8431e29:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8431e2c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8431e30:	89 04 24             	mov    %eax,(%esp)
 8431e33:	e8 da 97 df ff       	call   822b612 <_ZN12CDataManager18get_dimensionInoutEi>
 8431e38:	0f be c0             	movsbl %al,%eax
 8431e3b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8431e3e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8431e41:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8431e44:	89 d1                	mov    %edx,%ecx
 8431e46:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8431e49:	88 4c 02 04          	mov    %cl,0x4(%edx,%eax,1)
 8431e4d:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8431e51:	83 7d f0 05          	cmpl   $0x5,-0x10(%ebp)
 8431e55:	0f 9e c0             	setle  %al
 8431e58:	84 c0                	test   %al,%al
 8431e5a:	75 c8                	jne    8431e24 <_ZN16DB_LoadDimension11makeRequestEij+0x98>
 8431e5c:	e8 3a a3 c9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8431e61:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8431e68:	00 
 8431e69:	89 04 24             	mov    %eax,(%esp)
 8431e6c:	e8 c7 97 df ff       	call   822b638 <_ZN12CDataManager21get_limit_inout_countE15ENUM_BLOOD_TYPE>
 8431e71:	0f be c0             	movsbl %al,%eax
 8431e74:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8431e77:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8431e7a:	89 c2                	mov    %eax,%edx
 8431e7c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8431e7f:	88 50 0c             	mov    %dl,0xc(%eax)
 8431e82:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8431e87:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8431e8a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8431e8e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8431e95:	00 
 8431e96:	89 04 24             	mov    %eax,(%esp)
 8431e99:	e8 40 f1 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8431e9e:	eb 1b                	jmp    8431ebb <_ZN16DB_LoadDimension11makeRequestEij+0x12f>
 8431ea0:	89 d3                	mov    %edx,%ebx
 8431ea2:	89 c6                	mov    %eax,%esi
 8431ea4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8431ea7:	89 04 24             	mov    %eax,(%esp)
 8431eaa:	e8 23 aa 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8431eaf:	89 f0                	mov    %esi,%eax
 8431eb1:	89 da                	mov    %ebx,%edx
 8431eb3:	89 04 24             	mov    %eax,(%esp)
 8431eb6:	e8 95 18 6b 00       	call   8ae3750 <_Unwind_Resume>
 8431ebb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8431ebe:	89 04 24             	mov    %eax,(%esp)
 8431ec1:	e8 0c aa 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8431ec6:	83 c4 30             	add    $0x30,%esp
 8431ec9:	5b                   	pop    %ebx
 8431eca:	5e                   	pop    %esi
 8431ecb:	5d                   	pop    %ebp
 8431ecc:	c3                   	ret
 8431ecd:	90                   	nop

```

```c
// DB_LoadDimension::makeRequest @ 0x8431d8c

/* DB_LoadDimension::makeRequest(int, unsigned int) */

void DB_LoadDimension::makeRequest(int param_1,uint param_2)

{
  SIG_LOAD_DIMENSION SVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  CDataManager *pCVar4;
  CStreamGuard local_24 [8];
  SIG_LOAD_DIMENSION *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7916);
  CStreamGuard::CStreamGuard(local_24,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 08431dde to 08431e9d has its CatchHandler @ 08431ea0 */
  CStreamGuard::operator<<(pCVar3,0x14e);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar3,param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_24);
  local_1c = CStreamGuard::GetInBuffer<SIG_LOAD_DIMENSION>(pCVar3);
  *(uint *)local_1c = param_2;
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    pCVar4 = (CDataManager *)G_CDataManager();
    SVar1 = (SIG_LOAD_DIMENSION)CDataManager::get_dimensionInout(pCVar4,local_14);
    local_10 = (int)(char)SVar1;
    local_1c[local_14 + 4] = SVar1;
  }
  pCVar4 = (CDataManager *)G_CDataManager();
  SVar1 = (SIG_LOAD_DIMENSION)CDataManager::get_limit_inout_count(pCVar4,2);
  local_18 = (int)(char)SVar1;
  local_1c[0xc] = SVar1;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_24);
  CStreamGuard::~CStreamGuard(local_24);
  return;
}

```

