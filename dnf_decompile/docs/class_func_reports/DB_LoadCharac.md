# DB_LoadCharac

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## _GetTagCharacInfo

```asm
// === 08409fa6 DB_LoadCharac::_GetTagCharacInfo  [0x08409fa6-0x840a4cd] ===
 8409fa6:	55                   	push   %ebp
 8409fa7:	89 e5                	mov    %esp,%ebp
 8409fa9:	83 ec 28             	sub    $0x28,%esp
 8409fac:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8409fb1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8409fb8:	00 
 8409fb9:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8409fc0:	00 
 8409fc1:	89 04 24             	mov    %eax,(%esp)
 8409fc4:	e8 75 b2 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8409fc9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8409fcc:	8b 45 08             	mov    0x8(%ebp),%eax
 8409fcf:	89 44 24 08          	mov    %eax,0x8(%esp)
 8409fd3:	c7 44 24 04 0c 56 c4 	movl   $0x8c4560c,0x4(%esp)
 8409fda:	08 
 8409fdb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409fde:	89 04 24             	mov    %eax,(%esp)
 8409fe1:	e8 da a1 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8409fe6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8409fed:	00 
 8409fee:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409ff1:	89 04 24             	mov    %eax,(%esp)
 8409ff4:	e8 2d a3 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8409ff9:	83 f0 01             	xor    $0x1,%eax
 8409ffc:	84 c0                	test   %al,%al
 8409ffe:	75 12                	jne    840a012 <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x6c>
 840a000:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a003:	89 04 24             	mov    %eax,(%esp)
 840a006:	e8 b1 a4 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 840a00b:	83 f0 01             	xor    $0x1,%eax
 840a00e:	84 c0                	test   %al,%al
 840a010:	74 07                	je     840a019 <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x73>
 840a012:	b8 01 00 00 00       	mov    $0x1,%eax
 840a017:	eb 05                	jmp    840a01e <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x78>
 840a019:	b8 00 00 00 00       	mov    $0x0,%eax
 840a01e:	84 c0                	test   %al,%al
 840a020:	74 0a                	je     840a02c <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x86>
 840a022:	b8 00 00 00 00       	mov    $0x0,%eax
 840a027:	e9 9f 04 00 00       	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a02c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a02f:	89 04 24             	mov    %eax,(%esp)
 840a032:	e8 d9 a2 fe ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 840a037:	09 d0                	or     %edx,%eax
 840a039:	85 c0                	test   %eax,%eax
 840a03b:	0f 94 c0             	sete   %al
 840a03e:	84 c0                	test   %al,%al
 840a040:	74 0a                	je     840a04c <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0xa6>
 840a042:	b8 00 00 00 00       	mov    $0x0,%eax
 840a047:	e9 7f 04 00 00       	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a04c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 840a053:	8b 55 0c             	mov    0xc(%ebp),%edx
 840a056:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a059:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a05d:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a061:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a065:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a068:	89 04 24             	mov    %eax,(%esp)
 840a06b:	e8 bc c8 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840a070:	83 f0 01             	xor    $0x1,%eax
 840a073:	84 c0                	test   %al,%al
 840a075:	74 0a                	je     840a081 <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0xdb>
 840a077:	b8 00 00 00 00       	mov    $0x0,%eax
 840a07c:	e9 4a 04 00 00       	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a081:	8b 45 0c             	mov    0xc(%ebp),%eax
 840a084:	8d 50 04             	lea    0x4(%eax),%edx
 840a087:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a08a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a08e:	c7 44 24 0c 1d 00 00 	movl   $0x1d,0xc(%esp)
 840a095:	00 
 840a096:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a09a:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a09e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a0a1:	89 04 24             	mov    %eax,(%esp)
 840a0a4:	e8 41 2d ce ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 840a0a9:	83 f0 01             	xor    $0x1,%eax
 840a0ac:	84 c0                	test   %al,%al
 840a0ae:	74 0a                	je     840a0ba <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x114>
 840a0b0:	b8 00 00 00 00       	mov    $0x0,%eax
 840a0b5:	e9 11 04 00 00       	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a0ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 840a0bd:	8d 50 21             	lea    0x21(%eax),%edx
 840a0c0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a0c3:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a0c7:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a0cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a0cf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a0d2:	89 04 24             	mov    %eax,(%esp)
 840a0d5:	e8 7a 3d cf ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 840a0da:	83 f0 01             	xor    $0x1,%eax
 840a0dd:	84 c0                	test   %al,%al
 840a0df:	74 0a                	je     840a0eb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x145>
 840a0e1:	b8 00 00 00 00       	mov    $0x0,%eax
 840a0e6:	e9 e0 03 00 00       	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a0eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 840a0ee:	8d 50 22             	lea    0x22(%eax),%edx
 840a0f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a0f4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a0f8:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a0fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a100:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a103:	89 04 24             	mov    %eax,(%esp)
 840a106:	e8 e1 3c cf ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 840a10b:	83 f0 01             	xor    $0x1,%eax
 840a10e:	84 c0                	test   %al,%al
 840a110:	74 0a                	je     840a11c <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x176>
 840a112:	b8 00 00 00 00       	mov    $0x0,%eax
 840a117:	e9 af 03 00 00       	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a11c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840a11f:	8d 50 24             	lea    0x24(%eax),%edx
 840a122:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a125:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a129:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a12d:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a131:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a134:	89 04 24             	mov    %eax,(%esp)
 840a137:	e8 18 3d cf ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 840a13c:	83 f0 01             	xor    $0x1,%eax
 840a13f:	84 c0                	test   %al,%al
 840a141:	74 0a                	je     840a14d <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x1a7>
 840a143:	b8 00 00 00 00       	mov    $0x0,%eax
 840a148:	e9 7e 03 00 00       	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a14d:	8b 45 0c             	mov    0xc(%ebp),%eax
 840a150:	8d 50 25             	lea    0x25(%eax),%edx
 840a153:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a156:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a15a:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a15e:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a162:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a165:	89 04 24             	mov    %eax,(%esp)
 840a168:	e8 e7 3c cf ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 840a16d:	83 f0 01             	xor    $0x1,%eax
 840a170:	84 c0                	test   %al,%al
 840a172:	74 0a                	je     840a17e <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x1d8>
 840a174:	b8 00 00 00 00       	mov    $0x0,%eax
 840a179:	e9 4d 03 00 00       	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a17e:	8b 45 0c             	mov    0xc(%ebp),%eax
 840a181:	8d 50 26             	lea    0x26(%eax),%edx
 840a184:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a187:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a18b:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a18f:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a193:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a196:	89 04 24             	mov    %eax,(%esp)
 840a199:	e8 54 81 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 840a19e:	83 f0 01             	xor    $0x1,%eax
 840a1a1:	84 c0                	test   %al,%al
 840a1a3:	74 0a                	je     840a1af <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x209>
 840a1a5:	b8 00 00 00 00       	mov    $0x0,%eax
 840a1aa:	e9 1c 03 00 00       	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a1af:	8b 45 0c             	mov    0xc(%ebp),%eax
 840a1b2:	8d 50 2a             	lea    0x2a(%eax),%edx
 840a1b5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a1b8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a1bc:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a1c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a1c4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a1c7:	89 04 24             	mov    %eax,(%esp)
 840a1ca:	e8 23 81 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 840a1cf:	83 f0 01             	xor    $0x1,%eax
 840a1d2:	84 c0                	test   %al,%al
 840a1d4:	74 0a                	je     840a1e0 <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x23a>
 840a1d6:	b8 00 00 00 00       	mov    $0x0,%eax
 840a1db:	e9 eb 02 00 00       	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a1e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 840a1e3:	8d 50 2e             	lea    0x2e(%eax),%edx
 840a1e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a1e9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a1ed:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a1f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a1f5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a1f8:	89 04 24             	mov    %eax,(%esp)
 840a1fb:	e8 90 c7 d0 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 840a200:	83 f0 01             	xor    $0x1,%eax
 840a203:	84 c0                	test   %al,%al
 840a205:	74 0a                	je     840a211 <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x26b>
 840a207:	b8 00 00 00 00       	mov    $0x0,%eax
 840a20c:	e9 ba 02 00 00       	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a211:	8b 45 0c             	mov    0xc(%ebp),%eax
 840a214:	8d 50 30             	lea    0x30(%eax),%edx
 840a217:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a21a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a21e:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a222:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a226:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a229:	89 04 24             	mov    %eax,(%esp)
 840a22c:	e8 5f c7 d0 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 840a231:	83 f0 01             	xor    $0x1,%eax
 840a234:	84 c0                	test   %al,%al
 840a236:	74 0a                	je     840a242 <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x29c>
 840a238:	b8 00 00 00 00       	mov    $0x0,%eax
 840a23d:	e9 89 02 00 00       	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a242:	8b 45 0c             	mov    0xc(%ebp),%eax
 840a245:	8d 50 32             	lea    0x32(%eax),%edx
 840a248:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a24b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a24f:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a253:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a257:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a25a:	89 04 24             	mov    %eax,(%esp)
 840a25d:	e8 2e c7 d0 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 840a262:	83 f0 01             	xor    $0x1,%eax
 840a265:	84 c0                	test   %al,%al
 840a267:	74 0a                	je     840a273 <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x2cd>
 840a269:	b8 00 00 00 00       	mov    $0x0,%eax
 840a26e:	e9 58 02 00 00       	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a273:	8b 45 0c             	mov    0xc(%ebp),%eax
 840a276:	8d 50 34             	lea    0x34(%eax),%edx
 840a279:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a27c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a280:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a284:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a288:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a28b:	89 04 24             	mov    %eax,(%esp)
 840a28e:	e8 fd c6 d0 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 840a293:	83 f0 01             	xor    $0x1,%eax
 840a296:	84 c0                	test   %al,%al
 840a298:	74 0a                	je     840a2a4 <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x2fe>
 840a29a:	b8 00 00 00 00       	mov    $0x0,%eax
 840a29f:	e9 27 02 00 00       	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a2a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 840a2a7:	8d 50 36             	lea    0x36(%eax),%edx
 840a2aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a2ad:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a2b1:	c7 44 24 0c 08 00 00 	movl   $0x8,0xc(%esp)
 840a2b8:	00 
 840a2b9:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a2bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a2c1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a2c4:	89 04 24             	mov    %eax,(%esp)
 840a2c7:	e8 4e b0 d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 840a2cc:	83 f0 01             	xor    $0x1,%eax
 840a2cf:	84 c0                	test   %al,%al
 840a2d1:	74 0a                	je     840a2dd <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x337>
 840a2d3:	b8 00 00 00 00       	mov    $0x0,%eax
 840a2d8:	e9 ee 01 00 00       	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a2dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 840a2e0:	8d 50 3e             	lea    0x3e(%eax),%edx
 840a2e3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a2e6:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a2ea:	c7 44 24 0c 22 00 00 	movl   $0x22,0xc(%esp)
 840a2f1:	00 
 840a2f2:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a2f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a2fa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a2fd:	89 04 24             	mov    %eax,(%esp)
 840a300:	e8 15 b0 d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 840a305:	83 f0 01             	xor    $0x1,%eax
 840a308:	84 c0                	test   %al,%al
 840a30a:	74 0a                	je     840a316 <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x370>
 840a30c:	b8 00 00 00 00       	mov    $0x0,%eax
 840a311:	e9 b5 01 00 00       	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a316:	8b 45 0c             	mov    0xc(%ebp),%eax
 840a319:	8d 50 60             	lea    0x60(%eax),%edx
 840a31c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a31f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a323:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a327:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a32b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a32e:	89 04 24             	mov    %eax,(%esp)
 840a331:	e8 f6 c5 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840a336:	83 f0 01             	xor    $0x1,%eax
 840a339:	84 c0                	test   %al,%al
 840a33b:	74 0a                	je     840a347 <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x3a1>
 840a33d:	b8 00 00 00 00       	mov    $0x0,%eax
 840a342:	e9 84 01 00 00       	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a347:	8b 45 0c             	mov    0xc(%ebp),%eax
 840a34a:	8d 50 64             	lea    0x64(%eax),%edx
 840a34d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a350:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a354:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a358:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a35c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a35f:	89 04 24             	mov    %eax,(%esp)
 840a362:	e8 85 3a cf ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 840a367:	83 f0 01             	xor    $0x1,%eax
 840a36a:	84 c0                	test   %al,%al
 840a36c:	74 0a                	je     840a378 <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x3d2>
 840a36e:	b8 00 00 00 00       	mov    $0x0,%eax
 840a373:	e9 53 01 00 00       	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a378:	8b 45 0c             	mov    0xc(%ebp),%eax
 840a37b:	8d 50 66             	lea    0x66(%eax),%edx
 840a37e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a381:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a385:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a389:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a38d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a390:	89 04 24             	mov    %eax,(%esp)
 840a393:	e8 54 3a cf ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 840a398:	83 f0 01             	xor    $0x1,%eax
 840a39b:	84 c0                	test   %al,%al
 840a39d:	74 0a                	je     840a3a9 <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x403>
 840a39f:	b8 00 00 00 00       	mov    $0x0,%eax
 840a3a4:	e9 22 01 00 00       	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a3a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 840a3ac:	8d 50 68             	lea    0x68(%eax),%edx
 840a3af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a3b2:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a3b6:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a3ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a3be:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a3c1:	89 04 24             	mov    %eax,(%esp)
 840a3c4:	e8 29 7f cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 840a3c9:	83 f0 01             	xor    $0x1,%eax
 840a3cc:	84 c0                	test   %al,%al
 840a3ce:	74 0a                	je     840a3da <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x434>
 840a3d0:	b8 00 00 00 00       	mov    $0x0,%eax
 840a3d5:	e9 f1 00 00 00       	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a3da:	8b 45 0c             	mov    0xc(%ebp),%eax
 840a3dd:	8d 50 6c             	lea    0x6c(%eax),%edx
 840a3e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a3e3:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a3e7:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a3eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a3ef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a3f2:	89 04 24             	mov    %eax,(%esp)
 840a3f5:	e8 96 c5 d0 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 840a3fa:	83 f0 01             	xor    $0x1,%eax
 840a3fd:	84 c0                	test   %al,%al
 840a3ff:	74 0a                	je     840a40b <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x465>
 840a401:	b8 00 00 00 00       	mov    $0x0,%eax
 840a406:	e9 c0 00 00 00       	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a40b:	8b 45 0c             	mov    0xc(%ebp),%eax
 840a40e:	8d 50 6e             	lea    0x6e(%eax),%edx
 840a411:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a414:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a418:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a41c:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a420:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a423:	89 04 24             	mov    %eax,(%esp)
 840a426:	e8 65 c5 d0 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 840a42b:	83 f0 01             	xor    $0x1,%eax
 840a42e:	84 c0                	test   %al,%al
 840a430:	74 0a                	je     840a43c <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x496>
 840a432:	b8 00 00 00 00       	mov    $0x0,%eax
 840a437:	e9 8f 00 00 00       	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a43c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840a43f:	8d 50 70             	lea    0x70(%eax),%edx
 840a442:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a445:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a449:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a44d:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a451:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a454:	89 04 24             	mov    %eax,(%esp)
 840a457:	e8 90 39 cf ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 840a45c:	83 f0 01             	xor    $0x1,%eax
 840a45f:	84 c0                	test   %al,%al
 840a461:	74 07                	je     840a46a <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x4c4>
 840a463:	b8 00 00 00 00       	mov    $0x0,%eax
 840a468:	eb 61                	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a46a:	8b 45 0c             	mov    0xc(%ebp),%eax
 840a46d:	8d 50 72             	lea    0x72(%eax),%edx
 840a470:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a473:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a477:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a47b:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a47f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a482:	89 04 24             	mov    %eax,(%esp)
 840a485:	e8 62 39 cf ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 840a48a:	83 f0 01             	xor    $0x1,%eax
 840a48d:	84 c0                	test   %al,%al
 840a48f:	74 07                	je     840a498 <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x4f2>
 840a491:	b8 00 00 00 00       	mov    $0x0,%eax
 840a496:	eb 33                	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a498:	8b 45 0c             	mov    0xc(%ebp),%eax
 840a49b:	8d 50 74             	lea    0x74(%eax),%edx
 840a49e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a4a1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840a4a5:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a4a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a4ad:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840a4b0:	89 04 24             	mov    %eax,(%esp)
 840a4b3:	e8 74 c4 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840a4b8:	83 f0 01             	xor    $0x1,%eax
 840a4bb:	84 c0                	test   %al,%al
 840a4bd:	74 07                	je     840a4c6 <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x520>
 840a4bf:	b8 00 00 00 00       	mov    $0x0,%eax
 840a4c4:	eb 05                	jmp    840a4cb <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA+0x525>
 840a4c6:	b8 01 00 00 00       	mov    $0x1,%eax
 840a4cb:	c9                   	leave
 840a4cc:	c3                   	ret
 840a4cd:	90                   	nop

```

```c
// DB_LoadCharac::_GetTagCharacInfo @ 0x8409fa6

/* DB_LoadCharac::_GetTagCharacInfo(unsigned int, TAG_CHARAC_DATA*) */

undefined4 DB_LoadCharac::_GetTagCharacInfo(uint param_1,TAG_CHARAC_DATA *param_2)

{
  bool bVar1;
  char cVar2;
  MySQL *this;
  undefined4 uVar3;
  longlong lVar4;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this,
                   "seLect charac_no, charac_name, job, lev, grow_type, skill_tree_index, maxHP, maxMP, phy_attack, phy_defense, mag_attack, mag_defense, element_resist, spec_property, inven_weight, hp_regen, mp_regen, move_speed, attack_speed, cast_speed, hit_recovery, jump, charac_weight from charac_info where charac_no = %d and delete_flag != 1"
                   ,param_1);
  cVar2 = MySQL::exec(this,true);
  if (cVar2 == '\x01') {
    cVar2 = MySQL::fetch(this);
    if (cVar2 == '\x01') {
      bVar1 = false;
      goto LAB_0840a01e;
    }
  }
  bVar1 = true;
LAB_0840a01e:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    lVar4 = MySQL::getAffectedRowCount(this);
    if (lVar4 == 0) {
      uVar3 = 0;
    }
    else {
      cVar2 = MySQL::get_int(this,0,(int *)param_2);
      if (cVar2 == '\x01') {
        cVar2 = MySQL::get_str(this,1,(char *)(param_2 + 4),0x1d);
        if (cVar2 == '\x01') {
          cVar2 = MySQL::get_byte(this,2,(char *)(param_2 + 0x21));
          if (cVar2 == '\x01') {
            cVar2 = MySQL::get_short(this,3,(short *)(param_2 + 0x22));
            if (cVar2 == '\x01') {
              cVar2 = MySQL::get_byte(this,4,(char *)(param_2 + 0x24));
              if (cVar2 == '\x01') {
                cVar2 = MySQL::get_byte(this,5,(char *)(param_2 + 0x25));
                if (cVar2 == '\x01') {
                  cVar2 = MySQL::get_uint(this,6,(uint *)(param_2 + 0x26));
                  if (cVar2 == '\x01') {
                    cVar2 = MySQL::get_uint(this,7,(uint *)(param_2 + 0x2a));
                    if (cVar2 == '\x01') {
                      cVar2 = MySQL::get_ushort(this,8,(ushort *)(param_2 + 0x2e));
                      if (cVar2 == '\x01') {
                        cVar2 = MySQL::get_ushort(this,9,(ushort *)(param_2 + 0x30));
                        if (cVar2 == '\x01') {
                          cVar2 = MySQL::get_ushort(this,10,(ushort *)(param_2 + 0x32));
                          if (cVar2 == '\x01') {
                            cVar2 = MySQL::get_ushort(this,0xb,(ushort *)(param_2 + 0x34));
                            if (cVar2 == '\x01') {
                              cVar2 = MySQL::get_binary(this,0xc,param_2 + 0x36,8);
                              if (cVar2 == '\x01') {
                                cVar2 = MySQL::get_binary(this,0xd,param_2 + 0x3e,0x22);
                                if (cVar2 == '\x01') {
                                  cVar2 = MySQL::get_int(this,0xe,(int *)(param_2 + 0x60));
                                  if (cVar2 == '\x01') {
                                    cVar2 = MySQL::get_short(this,0xf,(short *)(param_2 + 100));
                                    if (cVar2 == '\x01') {
                                      cVar2 = MySQL::get_short(this,0x10,(short *)(param_2 + 0x66));
                                      if (cVar2 == '\x01') {
                                        cVar2 = MySQL::get_uint(this,0x11,(uint *)(param_2 + 0x68));
                                        if (cVar2 == '\x01') {
                                          cVar2 = MySQL::get_ushort(this,0x12,
                                                                    (ushort *)(param_2 + 0x6c));
                                          if (cVar2 == '\x01') {
                                            cVar2 = MySQL::get_ushort(this,0x13,
                                                                      (ushort *)(param_2 + 0x6e));
                                            if (cVar2 == '\x01') {
                                              cVar2 = MySQL::get_short(this,0x14,
                                                                       (short *)(param_2 + 0x70));
                                              if (cVar2 == '\x01') {
                                                cVar2 = MySQL::get_short(this,0x15,
                                                                         (short *)(param_2 + 0x72));
                                                if (cVar2 == '\x01') {
                                                  cVar2 = MySQL::get_int(this,0x16,
                                                                         (int *)(param_2 + 0x74));
                                                  if (cVar2 == '\x01') {
                                                    uVar3 = 1;
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                }
                                                else {
                                                  uVar3 = 0;
                                                }
                                              }
                                              else {
                                                uVar3 = 0;
                                              }
                                            }
                                            else {
                                              uVar3 = 0;
                                            }
                                          }
                                          else {
                                            uVar3 = 0;
                                          }
                                        }
                                        else {
                                          uVar3 = 0;
                                        }
                                      }
                                      else {
                                        uVar3 = 0;
                                      }
                                    }
                                    else {
                                      uVar3 = 0;
                                    }
                                  }
                                  else {
                                    uVar3 = 0;
                                  }
                                }
                                else {
                                  uVar3 = 0;
                                }
                              }
                              else {
                                uVar3 = 0;
                              }
                            }
                            else {
                              uVar3 = 0;
                            }
                          }
                          else {
                            uVar3 = 0;
                          }
                        }
                        else {
                          uVar3 = 0;
                        }
                      }
                      else {
                        uVar3 = 0;
                      }
                    }
                    else {
                      uVar3 = 0;
                    }
                  }
                  else {
                    uVar3 = 0;
                  }
                }
                else {
                  uVar3 = 0;
                }
              }
              else {
                uVar3 = 0;
              }
            }
            else {
              uVar3 = 0;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

```

---

## _LoadEventBringUpInfo

```asm
// === 08409d2e DB_LoadCharac::_LoadEventBringUpInfo  [0x08409d2e-0x8409fa5] ===
 8409d2e:	55                   	push   %ebp
 8409d2f:	89 e5                	mov    %esp,%ebp
 8409d31:	56                   	push   %esi
 8409d32:	53                   	push   %ebx
 8409d33:	83 ec 70             	sub    $0x70,%esp
 8409d36:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8409d3b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8409d42:	00 
 8409d43:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8409d4a:	00 
 8409d4b:	89 04 24             	mov    %eax,(%esp)
 8409d4e:	e8 eb b4 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8409d53:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8409d56:	e8 40 24 cc ff       	call   80cc19b <_Z14G_CDataManagerv>
 8409d5b:	89 04 24             	mov    %eax,(%esp)
 8409d5e:	e8 ff 6d d0 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 8409d63:	c7 44 24 04 9b 01 00 	movl   $0x19b,0x4(%esp)
 8409d6a:	00 
 8409d6b:	89 04 24             	mov    %eax,(%esp)
 8409d6e:	e8 9d 13 d0 ff       	call   810b110 <_ZN13EventClassify15CEventScriptMng17get_db_table_nameEi>
 8409d73:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409d77:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8409d7a:	89 04 24             	mov    %eax,(%esp)
 8409d7d:	e8 2e dc 2f 00       	call   87079b0 <_ZNSsC1ERKSs>
 8409d82:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409d85:	8b 00                	mov    (%eax),%eax
 8409d87:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8409d8e:	00 
 8409d8f:	89 04 24             	mov    %eax,(%esp)
 8409d92:	e8 b4 f2 cf ff       	call   810904b <_Z14NumberToStringji>
 8409d97:	89 c3                	mov    %eax,%ebx
 8409d99:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409d9c:	8b 70 04             	mov    0x4(%eax),%esi
 8409d9f:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8409da2:	89 04 24             	mov    %eax,(%esp)
 8409da5:	e8 06 4d 6d 00       	call   8adeab0 <_Z9toTStringRKSs>
 8409daa:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8409dae:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8409db2:	89 44 24 08          	mov    %eax,0x8(%esp)
 8409db6:	c7 44 24 04 e8 54 c4 	movl   $0x8c454e8,0x4(%esp)
 8409dbd:	08 
 8409dbe:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8409dc1:	89 04 24             	mov    %eax,(%esp)
 8409dc4:	e8 f7 a3 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8409dc9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8409dd0:	00 
 8409dd1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8409dd4:	89 04 24             	mov    %eax,(%esp)
 8409dd7:	e8 4a a5 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8409ddc:	83 f0 01             	xor    $0x1,%eax
 8409ddf:	84 c0                	test   %al,%al
 8409de1:	74 4a                	je     8409e2d <_ZN13DB_LoadCharac21_LoadEventBringUpInfoEP15SIG_LOAD_CHARAC+0xff>
 8409de3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409de6:	8b 58 04             	mov    0x4(%eax),%ebx
 8409de9:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8409df0:	00 
 8409df1:	c7 44 24 08 5b 22 00 	movl   $0x225b,0x8(%esp)
 8409df8:	00 
 8409df9:	c7 44 24 04 c0 d3 c5 	movl   $0x8c5d3c0,0x4(%esp)
 8409e00:	08 
 8409e01:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8409e04:	89 04 24             	mov    %eax,(%esp)
 8409e07:	e8 0c 59 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8409e0c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8409e10:	c7 44 24 04 3c 55 c4 	movl   $0x8c4553c,0x4(%esp)
 8409e17:	08 
 8409e18:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8409e1b:	89 04 24             	mov    %eax,(%esp)
 8409e1e:	e8 65 59 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8409e23:	bb 00 00 00 00       	mov    $0x0,%ebx
 8409e28:	e9 65 01 00 00       	jmp    8409f92 <_ZN13DB_LoadCharac21_LoadEventBringUpInfoEP15SIG_LOAD_CHARAC+0x264>
 8409e2d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8409e30:	89 04 24             	mov    %eax,(%esp)
 8409e33:	e8 34 85 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8409e38:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8409e3b:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8409e3f:	75 0a                	jne    8409e4b <_ZN13DB_LoadCharac21_LoadEventBringUpInfoEP15SIG_LOAD_CHARAC+0x11d>
 8409e41:	bb 01 00 00 00       	mov    $0x1,%ebx
 8409e46:	e9 47 01 00 00       	jmp    8409f92 <_ZN13DB_LoadCharac21_LoadEventBringUpInfoEP15SIG_LOAD_CHARAC+0x264>
 8409e4b:	c6 45 b7 00          	movb   $0x0,-0x49(%ebp)
 8409e4f:	c6 45 b6 00          	movb   $0x0,-0x4a(%ebp)
 8409e53:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8409e56:	89 04 24             	mov    %eax,(%esp)
 8409e59:	e8 5e a6 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8409e5e:	0f b6 c0             	movzbl %al,%eax
 8409e61:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8409e64:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8409e68:	75 0a                	jne    8409e74 <_ZN13DB_LoadCharac21_LoadEventBringUpInfoEP15SIG_LOAD_CHARAC+0x146>
 8409e6a:	bb 00 00 00 00       	mov    $0x0,%ebx
 8409e6f:	e9 1e 01 00 00       	jmp    8409f92 <_ZN13DB_LoadCharac21_LoadEventBringUpInfoEP15SIG_LOAD_CHARAC+0x264>
 8409e74:	8d 45 b7             	lea    -0x49(%ebp),%eax
 8409e77:	89 44 24 08          	mov    %eax,0x8(%esp)
 8409e7b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8409e82:	00 
 8409e83:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8409e86:	89 04 24             	mov    %eax,(%esp)
 8409e89:	e8 2c 40 cf ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 8409e8e:	0f b6 c0             	movzbl %al,%eax
 8409e91:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8409e94:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8409e98:	75 4a                	jne    8409ee4 <_ZN13DB_LoadCharac21_LoadEventBringUpInfoEP15SIG_LOAD_CHARAC+0x1b6>
 8409e9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409e9d:	8b 58 04             	mov    0x4(%eax),%ebx
 8409ea0:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8409ea7:	00 
 8409ea8:	c7 44 24 08 6b 22 00 	movl   $0x226b,0x8(%esp)
 8409eaf:	00 
 8409eb0:	c7 44 24 04 c0 d3 c5 	movl   $0x8c5d3c0,0x4(%esp)
 8409eb7:	08 
 8409eb8:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8409ebb:	89 04 24             	mov    %eax,(%esp)
 8409ebe:	e8 55 58 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8409ec3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8409ec7:	c7 44 24 04 7c 55 c4 	movl   $0x8c4557c,0x4(%esp)
 8409ece:	08 
 8409ecf:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8409ed2:	89 04 24             	mov    %eax,(%esp)
 8409ed5:	e8 ae 58 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8409eda:	bb 00 00 00 00       	mov    $0x0,%ebx
 8409edf:	e9 ae 00 00 00       	jmp    8409f92 <_ZN13DB_LoadCharac21_LoadEventBringUpInfoEP15SIG_LOAD_CHARAC+0x264>
 8409ee4:	8d 45 b6             	lea    -0x4a(%ebp),%eax
 8409ee7:	89 44 24 08          	mov    %eax,0x8(%esp)
 8409eeb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8409ef2:	00 
 8409ef3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8409ef6:	89 04 24             	mov    %eax,(%esp)
 8409ef9:	e8 bc 3f cf ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 8409efe:	0f b6 c0             	movzbl %al,%eax
 8409f01:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8409f04:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8409f08:	75 47                	jne    8409f51 <_ZN13DB_LoadCharac21_LoadEventBringUpInfoEP15SIG_LOAD_CHARAC+0x223>
 8409f0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409f0d:	8b 58 04             	mov    0x4(%eax),%ebx
 8409f10:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8409f17:	00 
 8409f18:	c7 44 24 08 72 22 00 	movl   $0x2272,0x8(%esp)
 8409f1f:	00 
 8409f20:	c7 44 24 04 c0 d3 c5 	movl   $0x8c5d3c0,0x4(%esp)
 8409f27:	08 
 8409f28:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8409f2b:	89 04 24             	mov    %eax,(%esp)
 8409f2e:	e8 e5 57 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8409f33:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8409f37:	c7 44 24 04 c4 55 c4 	movl   $0x8c455c4,0x4(%esp)
 8409f3e:	08 
 8409f3f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8409f42:	89 04 24             	mov    %eax,(%esp)
 8409f45:	e8 3e 58 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8409f4a:	bb 00 00 00 00       	mov    $0x0,%ebx
 8409f4f:	eb 41                	jmp    8409f92 <_ZN13DB_LoadCharac21_LoadEventBringUpInfoEP15SIG_LOAD_CHARAC+0x264>
 8409f51:	0f b6 55 b7          	movzbl -0x49(%ebp),%edx
 8409f55:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409f58:	88 90 39 01 00 00    	mov    %dl,0x139(%eax)
 8409f5e:	0f b6 45 b6          	movzbl -0x4a(%ebp),%eax
 8409f62:	84 c0                	test   %al,%al
 8409f64:	0f 95 c2             	setne  %dl
 8409f67:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409f6a:	88 90 38 01 00 00    	mov    %dl,0x138(%eax)
 8409f70:	bb 01 00 00 00       	mov    $0x1,%ebx
 8409f75:	eb 1b                	jmp    8409f92 <_ZN13DB_LoadCharac21_LoadEventBringUpInfoEP15SIG_LOAD_CHARAC+0x264>
 8409f77:	89 d3                	mov    %edx,%ebx
 8409f79:	89 c6                	mov    %eax,%esi
 8409f7b:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8409f7e:	89 04 24             	mov    %eax,(%esp)
 8409f81:	e8 5a dc 2f 00       	call   8707be0 <_ZNSsD1Ev>
 8409f86:	89 f0                	mov    %esi,%eax
 8409f88:	89 da                	mov    %ebx,%edx
 8409f8a:	89 04 24             	mov    %eax,(%esp)
 8409f8d:	e8 be 97 6d 00       	call   8ae3750 <_Unwind_Resume>
 8409f92:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8409f95:	89 04 24             	mov    %eax,(%esp)
 8409f98:	e8 43 dc 2f 00       	call   8707be0 <_ZNSsD1Ev>
 8409f9d:	89 d8                	mov    %ebx,%eax
 8409f9f:	83 c4 70             	add    $0x70,%esp
 8409fa2:	5b                   	pop    %ebx
 8409fa3:	5e                   	pop    %esi
 8409fa4:	5d                   	pop    %ebp
 8409fa5:	c3                   	ret

```

```c
// DB_LoadCharac::_LoadEventBringUpInfo @ 0x8409d2e

/* DB_LoadCharac::_LoadEventBringUpInfo(SIG_LOAD_CHARAC*) */

undefined4 __thiscall
DB_LoadCharac::_LoadEventBringUpInfo(DB_LoadCharac *this,SIG_LOAD_CHARAC *param_1)

{
  char cVar1;
  CDataManager *this_00;
  CEventScriptMng *this_01;
  string *psVar2;
  undefined4 uVar3;
  TCHAR *pTVar4;
  undefined4 uVar5;
  uchar local_4e;
  SIG_LOAD_CHARAC local_4d;
  string local_4c;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  MySQL *local_18;
  int local_14;
  uint local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CEventScriptMng *)CDataManager::get_event_script_mng(this_00);
  psVar2 = (string *)EventClassify::CEventScriptMng::get_db_table_name(this_01,0x19b);
  std::string::string((string *)&local_4c,psVar2);
                    /* try { // try from 08409d92 to 08409f49 has its CatchHandler @ 08409f77 */
  uVar3 = NumberToString(*(uint *)param_1,0);
  uVar5 = *(undefined4 *)(param_1 + 4);
  pTVar4 = toTString(&local_4c);
  MySQL::set_query(local_18,
                   "seLect use_material_cnt, give_reward_flag from %s where charac_no=%u and m_id=%s"
                   ,pTVar4,uVar5,uVar3);
  cVar1 = MySQL::exec(local_18,true);
  if (cVar1 == '\x01') {
    local_14 = MySQL::get_n_rows(local_18);
    if (local_14 == 0) {
      uVar5 = 1;
    }
    else {
      local_4d = (SIG_LOAD_CHARAC)0x0;
      local_4e = '\0';
      local_10 = MySQL::fetch(local_18);
      local_10 = local_10 & 0xff;
      if (local_10 == 0) {
        uVar5 = 0;
        local_10 = 0;
      }
      else {
        local_10 = MySQL::get_ubyte(local_18,0,(uchar *)&local_4d);
        local_10 = local_10 & 0xff;
        if (local_10 == 0) {
          uVar5 = *(undefined4 *)(param_1 + 4);
          cMyTrace::cMyTrace(local_38,"bool DB_LoadCharac::_LoadEventBringUpInfo(SIG_LOAD_CHARAC*)",
                             0x226b,5);
          cMyTrace::operator()
                    (local_38,
                     "DB_LoadCharac::_LoadEventBringUpInfo, get_ubyte(1) ERROR charac_no=%u",uVar5);
          uVar5 = 0;
        }
        else {
          local_10 = MySQL::get_ubyte(local_18,1,&local_4e);
          local_10 = local_10 & 0xff;
          if (local_10 == 0) {
            uVar5 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_28,
                               "bool DB_LoadCharac::_LoadEventBringUpInfo(SIG_LOAD_CHARAC*)",0x2272,
                               5);
            cMyTrace::operator()
                      (local_28,
                       "DB_LoadCharac::_LoadEventBringUpInfo, get_ubyte(2) ERROR charac_no=%u",uVar5
                      );
            uVar5 = 0;
          }
          else {
            param_1[0x139] = local_4d;
            param_1[0x138] = (SIG_LOAD_CHARAC)(local_4e != '\0');
            uVar5 = 1;
          }
        }
      }
    }
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_48,"bool DB_LoadCharac::_LoadEventBringUpInfo(SIG_LOAD_CHARAC*)",0x225b
                       ,5);
    cMyTrace::operator()
              (local_48,"DB_LoadCharac::_LoadEventBringUpInfo, exec() ERROR charac_no=%u",uVar5);
    uVar5 = 0;
  }
  std::string::~string((string *)&local_4c);
  return uVar5;
}

```

---

## _UpdateSchoolCharac

```asm
// === 08408c30 DB_LoadCharac::_UpdateSchoolCharac  [0x08408c30-0x8408cf3] ===
 8408c30:	55                   	push   %ebp
 8408c31:	89 e5                	mov    %esp,%ebp
 8408c33:	57                   	push   %edi
 8408c34:	56                   	push   %esi
 8408c35:	53                   	push   %ebx
 8408c36:	83 ec 3c             	sub    $0x3c,%esp
 8408c39:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8408c3e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8408c45:	00 
 8408c46:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 8408c4d:	00 
 8408c4e:	89 04 24             	mov    %eax,(%esp)
 8408c51:	e8 e8 c5 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8408c56:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8408c59:	8b 45 0c             	mov    0xc(%ebp),%eax
 8408c5c:	8b 78 04             	mov    0x4(%eax),%edi
 8408c5f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8408c62:	8b 00                	mov    (%eax),%eax
 8408c64:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8408c6b:	00 
 8408c6c:	89 04 24             	mov    %eax,(%esp)
 8408c6f:	e8 d7 03 d0 ff       	call   810904b <_Z14NumberToStringji>
 8408c74:	8b 55 0c             	mov    0xc(%ebp),%edx
 8408c77:	8b b2 82 06 00 00    	mov    0x682(%edx),%esi
 8408c7d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8408c80:	0f b7 52 31          	movzwl 0x31(%edx),%edx
 8408c84:	0f bf da             	movswl %dx,%ebx
 8408c87:	8b 55 0c             	mov    0xc(%ebp),%edx
 8408c8a:	0f b6 52 33          	movzbl 0x33(%edx),%edx
 8408c8e:	0f be ca             	movsbl %dl,%ecx
 8408c91:	8b 55 0c             	mov    0xc(%ebp),%edx
 8408c94:	0f b6 52 30          	movzbl 0x30(%edx),%edx
 8408c98:	0f be d2             	movsbl %dl,%edx
 8408c9b:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 8408c9f:	89 44 24 18          	mov    %eax,0x18(%esp)
 8408ca3:	89 74 24 14          	mov    %esi,0x14(%esp)
 8408ca7:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8408cab:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8408caf:	89 54 24 08          	mov    %edx,0x8(%esp)
 8408cb3:	c7 44 24 04 88 4f c4 	movl   $0x8c44f88,0x4(%esp)
 8408cba:	08 
 8408cbb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8408cbe:	89 04 24             	mov    %eax,(%esp)
 8408cc1:	e8 fa b4 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8408cc6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8408ccd:	00 
 8408cce:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8408cd1:	89 04 24             	mov    %eax,(%esp)
 8408cd4:	e8 4d b6 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8408cd9:	83 f0 01             	xor    $0x1,%eax
 8408cdc:	84 c0                	test   %al,%al
 8408cde:	74 07                	je     8408ce7 <_ZN13DB_LoadCharac19_UpdateSchoolCharacEP15SIG_LOAD_CHARAC+0xb7>
 8408ce0:	b8 00 00 00 00       	mov    $0x0,%eax
 8408ce5:	eb 05                	jmp    8408cec <_ZN13DB_LoadCharac19_UpdateSchoolCharacEP15SIG_LOAD_CHARAC+0xbc>
 8408ce7:	b8 01 00 00 00       	mov    $0x1,%eax
 8408cec:	83 c4 3c             	add    $0x3c,%esp
 8408cef:	5b                   	pop    %ebx
 8408cf0:	5e                   	pop    %esi
 8408cf1:	5f                   	pop    %edi
 8408cf2:	5d                   	pop    %ebp
 8408cf3:	c3                   	ret

```

```c
// DB_LoadCharac::_UpdateSchoolCharac @ 0x8408c30

/* DB_LoadCharac::_UpdateSchoolCharac(SIG_LOAD_CHARAC*) */

bool __thiscall DB_LoadCharac::_UpdateSchoolCharac(DB_LoadCharac *this,SIG_LOAD_CHARAC *param_1)

{
  undefined4 uVar1;
  char cVar2;
  MySQL *this_00;
  undefined4 uVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0x10,0);
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar3 = NumberToString(*(uint *)param_1,0);
  MySQL::set_query(this_00,
                   "upDate school_member set job=%d,grow_type=%d,lev=%d where school_id=%d and m_id=%s and charac_no=%d"
                   ,(int)(char)param_1[0x30],(int)(char)param_1[0x33],
                   (int)*(short *)(param_1 + 0x31),*(undefined4 *)(param_1 + 0x682),uVar3,uVar1);
  cVar2 = MySQL::exec(this_00,true);
  return cVar2 == '\x01';
}

```

---

## _getCharacInfo

```asm
// === 08408cf4 DB_LoadCharac::_getCharacInfo  [0x08408cf4-0x84093f5] ===
 8408cf4:	55                   	push   %ebp
 8408cf5:	89 e5                	mov    %esp,%ebp
 8408cf7:	83 ec 28             	sub    $0x28,%esp
 8408cfa:	8b 45 08             	mov    0x8(%ebp),%eax
 8408cfd:	89 04 24             	mov    %eax,(%esp)
 8408d00:	e8 05 ff ff ff       	call   8408c0a <_ZN13DB_LoadCharac10_getGameDBEv>
 8408d05:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8408d08:	8b 45 0c             	mov    0xc(%ebp),%eax
 8408d0b:	8b 40 04             	mov    0x4(%eax),%eax
 8408d0e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408d12:	c7 44 24 04 ec 4f c4 	movl   $0x8c44fec,0x4(%esp)
 8408d19:	08 
 8408d1a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408d1d:	89 04 24             	mov    %eax,(%esp)
 8408d20:	e8 9b b4 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8408d25:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8408d2c:	00 
 8408d2d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408d30:	89 04 24             	mov    %eax,(%esp)
 8408d33:	e8 ee b5 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8408d38:	83 f0 01             	xor    $0x1,%eax
 8408d3b:	84 c0                	test   %al,%al
 8408d3d:	75 12                	jne    8408d51 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x5d>
 8408d3f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408d42:	89 04 24             	mov    %eax,(%esp)
 8408d45:	e8 72 b7 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8408d4a:	83 f0 01             	xor    $0x1,%eax
 8408d4d:	84 c0                	test   %al,%al
 8408d4f:	74 07                	je     8408d58 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x64>
 8408d51:	b8 01 00 00 00       	mov    $0x1,%eax
 8408d56:	eb 05                	jmp    8408d5d <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x69>
 8408d58:	b8 00 00 00 00       	mov    $0x0,%eax
 8408d5d:	84 c0                	test   %al,%al
 8408d5f:	74 0a                	je     8408d6b <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x77>
 8408d61:	b8 00 00 00 00       	mov    $0x0,%eax
 8408d66:	e9 89 06 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 8408d6b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408d6e:	89 04 24             	mov    %eax,(%esp)
 8408d71:	e8 f6 95 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8408d76:	83 f8 01             	cmp    $0x1,%eax
 8408d79:	0f 95 c0             	setne  %al
 8408d7c:	84 c0                	test   %al,%al
 8408d7e:	74 0a                	je     8408d8a <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x96>
 8408d80:	b8 00 00 00 00       	mov    $0x0,%eax
 8408d85:	e9 6a 06 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 8408d8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8408d8d:	83 c0 0c             	add    $0xc,%eax
 8408d90:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408d94:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8408d9b:	00 
 8408d9c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408d9f:	89 04 24             	mov    %eax,(%esp)
 8408da2:	e8 85 db d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8408da7:	83 f0 01             	xor    $0x1,%eax
 8408daa:	84 c0                	test   %al,%al
 8408dac:	74 0a                	je     8408db8 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0xc4>
 8408dae:	b8 00 00 00 00       	mov    $0x0,%eax
 8408db3:	e9 3c 06 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 8408db8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8408dbb:	83 c0 10             	add    $0x10,%eax
 8408dbe:	c7 44 24 0c 1d 00 00 	movl   $0x1d,0xc(%esp)
 8408dc5:	00 
 8408dc6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408dca:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8408dd1:	00 
 8408dd2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408dd5:	89 04 24             	mov    %eax,(%esp)
 8408dd8:	e8 0d 40 ce ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8408ddd:	83 f0 01             	xor    $0x1,%eax
 8408de0:	84 c0                	test   %al,%al
 8408de2:	74 0a                	je     8408dee <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0xfa>
 8408de4:	b8 00 00 00 00       	mov    $0x0,%eax
 8408de9:	e9 06 06 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 8408dee:	8b 45 0c             	mov    0xc(%ebp),%eax
 8408df1:	83 c0 30             	add    $0x30,%eax
 8408df4:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408df8:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8408dff:	00 
 8408e00:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408e03:	89 04 24             	mov    %eax,(%esp)
 8408e06:	e8 49 50 cf ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8408e0b:	83 f0 01             	xor    $0x1,%eax
 8408e0e:	84 c0                	test   %al,%al
 8408e10:	74 0a                	je     8408e1c <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x128>
 8408e12:	b8 00 00 00 00       	mov    $0x0,%eax
 8408e17:	e9 d8 05 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 8408e1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8408e1f:	83 c0 31             	add    $0x31,%eax
 8408e22:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408e26:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8408e2d:	00 
 8408e2e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408e31:	89 04 24             	mov    %eax,(%esp)
 8408e34:	e8 b3 4f cf ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 8408e39:	83 f0 01             	xor    $0x1,%eax
 8408e3c:	84 c0                	test   %al,%al
 8408e3e:	74 0a                	je     8408e4a <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x156>
 8408e40:	b8 00 00 00 00       	mov    $0x0,%eax
 8408e45:	e9 aa 05 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 8408e4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8408e4d:	83 c0 33             	add    $0x33,%eax
 8408e50:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408e54:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8408e5b:	00 
 8408e5c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408e5f:	89 04 24             	mov    %eax,(%esp)
 8408e62:	e8 ed 4f cf ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8408e67:	83 f0 01             	xor    $0x1,%eax
 8408e6a:	84 c0                	test   %al,%al
 8408e6c:	74 0a                	je     8408e78 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x184>
 8408e6e:	b8 00 00 00 00       	mov    $0x0,%eax
 8408e73:	e9 7c 05 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 8408e78:	8b 45 0c             	mov    0xc(%ebp),%eax
 8408e7b:	83 c0 6c             	add    $0x6c,%eax
 8408e7e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408e82:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8408e89:	00 
 8408e8a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408e8d:	89 04 24             	mov    %eax,(%esp)
 8408e90:	e8 5d 94 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8408e95:	83 f0 01             	xor    $0x1,%eax
 8408e98:	84 c0                	test   %al,%al
 8408e9a:	74 0a                	je     8408ea6 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x1b2>
 8408e9c:	b8 00 00 00 00       	mov    $0x0,%eax
 8408ea1:	e9 4e 05 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 8408ea6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8408ea9:	83 c0 70             	add    $0x70,%eax
 8408eac:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408eb0:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8408eb7:	00 
 8408eb8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408ebb:	89 04 24             	mov    %eax,(%esp)
 8408ebe:	e8 2f 94 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8408ec3:	83 f0 01             	xor    $0x1,%eax
 8408ec6:	84 c0                	test   %al,%al
 8408ec8:	74 0a                	je     8408ed4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x1e0>
 8408eca:	b8 00 00 00 00       	mov    $0x0,%eax
 8408ecf:	e9 20 05 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 8408ed4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8408ed7:	83 c0 74             	add    $0x74,%eax
 8408eda:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408ede:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8408ee5:	00 
 8408ee6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408ee9:	89 04 24             	mov    %eax,(%esp)
 8408eec:	e8 9f da d0 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8408ef1:	83 f0 01             	xor    $0x1,%eax
 8408ef4:	84 c0                	test   %al,%al
 8408ef6:	74 0a                	je     8408f02 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x20e>
 8408ef8:	b8 00 00 00 00       	mov    $0x0,%eax
 8408efd:	e9 f2 04 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 8408f02:	8b 45 0c             	mov    0xc(%ebp),%eax
 8408f05:	83 c0 76             	add    $0x76,%eax
 8408f08:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408f0c:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8408f13:	00 
 8408f14:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408f17:	89 04 24             	mov    %eax,(%esp)
 8408f1a:	e8 71 da d0 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8408f1f:	83 f0 01             	xor    $0x1,%eax
 8408f22:	84 c0                	test   %al,%al
 8408f24:	74 0a                	je     8408f30 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x23c>
 8408f26:	b8 00 00 00 00       	mov    $0x0,%eax
 8408f2b:	e9 c4 04 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 8408f30:	8b 45 0c             	mov    0xc(%ebp),%eax
 8408f33:	83 c0 78             	add    $0x78,%eax
 8408f36:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408f3a:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8408f41:	00 
 8408f42:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408f45:	89 04 24             	mov    %eax,(%esp)
 8408f48:	e8 43 da d0 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8408f4d:	83 f0 01             	xor    $0x1,%eax
 8408f50:	84 c0                	test   %al,%al
 8408f52:	74 0a                	je     8408f5e <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x26a>
 8408f54:	b8 00 00 00 00       	mov    $0x0,%eax
 8408f59:	e9 96 04 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 8408f5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8408f61:	83 c0 7a             	add    $0x7a,%eax
 8408f64:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408f68:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 8408f6f:	00 
 8408f70:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408f73:	89 04 24             	mov    %eax,(%esp)
 8408f76:	e8 15 da d0 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8408f7b:	83 f0 01             	xor    $0x1,%eax
 8408f7e:	84 c0                	test   %al,%al
 8408f80:	74 0a                	je     8408f8c <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x298>
 8408f82:	b8 00 00 00 00       	mov    $0x0,%eax
 8408f87:	e9 68 04 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 8408f8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8408f8f:	05 a6 00 00 00       	add    $0xa6,%eax
 8408f94:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408f98:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 8408f9f:	00 
 8408fa0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408fa3:	89 04 24             	mov    %eax,(%esp)
 8408fa6:	e8 81 d9 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8408fab:	83 f0 01             	xor    $0x1,%eax
 8408fae:	84 c0                	test   %al,%al
 8408fb0:	74 0a                	je     8408fbc <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x2c8>
 8408fb2:	b8 00 00 00 00       	mov    $0x0,%eax
 8408fb7:	e9 38 04 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 8408fbc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8408fbf:	05 aa 00 00 00       	add    $0xaa,%eax
 8408fc4:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408fc8:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 8408fcf:	00 
 8408fd0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408fd3:	89 04 24             	mov    %eax,(%esp)
 8408fd6:	e8 11 4e cf ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 8408fdb:	83 f0 01             	xor    $0x1,%eax
 8408fde:	84 c0                	test   %al,%al
 8408fe0:	74 0a                	je     8408fec <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x2f8>
 8408fe2:	b8 00 00 00 00       	mov    $0x0,%eax
 8408fe7:	e9 08 04 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 8408fec:	8b 45 0c             	mov    0xc(%ebp),%eax
 8408fef:	05 ac 00 00 00       	add    $0xac,%eax
 8408ff4:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408ff8:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 8408fff:	00 
 8409000:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409003:	89 04 24             	mov    %eax,(%esp)
 8409006:	e8 e1 4d cf ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 840900b:	83 f0 01             	xor    $0x1,%eax
 840900e:	84 c0                	test   %al,%al
 8409010:	74 0a                	je     840901c <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x328>
 8409012:	b8 00 00 00 00       	mov    $0x0,%eax
 8409017:	e9 d8 03 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 840901c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840901f:	05 ae 00 00 00       	add    $0xae,%eax
 8409024:	89 44 24 08          	mov    %eax,0x8(%esp)
 8409028:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 840902f:	00 
 8409030:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409033:	89 04 24             	mov    %eax,(%esp)
 8409036:	e8 b7 92 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 840903b:	83 f0 01             	xor    $0x1,%eax
 840903e:	84 c0                	test   %al,%al
 8409040:	74 0a                	je     840904c <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x358>
 8409042:	b8 00 00 00 00       	mov    $0x0,%eax
 8409047:	e9 a8 03 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 840904c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840904f:	05 b2 00 00 00       	add    $0xb2,%eax
 8409054:	89 44 24 08          	mov    %eax,0x8(%esp)
 8409058:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 840905f:	00 
 8409060:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409063:	89 04 24             	mov    %eax,(%esp)
 8409066:	e8 25 d9 d0 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 840906b:	83 f0 01             	xor    $0x1,%eax
 840906e:	84 c0                	test   %al,%al
 8409070:	74 0a                	je     840907c <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x388>
 8409072:	b8 00 00 00 00       	mov    $0x0,%eax
 8409077:	e9 78 03 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 840907c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840907f:	05 b4 00 00 00       	add    $0xb4,%eax
 8409084:	89 44 24 08          	mov    %eax,0x8(%esp)
 8409088:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 840908f:	00 
 8409090:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409093:	89 04 24             	mov    %eax,(%esp)
 8409096:	e8 f5 d8 d0 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 840909b:	83 f0 01             	xor    $0x1,%eax
 840909e:	84 c0                	test   %al,%al
 84090a0:	74 0a                	je     84090ac <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x3b8>
 84090a2:	b8 00 00 00 00       	mov    $0x0,%eax
 84090a7:	e9 48 03 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 84090ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 84090af:	05 b6 00 00 00       	add    $0xb6,%eax
 84090b4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84090b8:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 84090bf:	00 
 84090c0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84090c3:	89 04 24             	mov    %eax,(%esp)
 84090c6:	e8 21 4d cf ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 84090cb:	83 f0 01             	xor    $0x1,%eax
 84090ce:	84 c0                	test   %al,%al
 84090d0:	74 0a                	je     84090dc <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x3e8>
 84090d2:	b8 00 00 00 00       	mov    $0x0,%eax
 84090d7:	e9 18 03 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 84090dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84090df:	05 b8 00 00 00       	add    $0xb8,%eax
 84090e4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84090e8:	c7 44 24 04 12 00 00 	movl   $0x12,0x4(%esp)
 84090ef:	00 
 84090f0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84090f3:	89 04 24             	mov    %eax,(%esp)
 84090f6:	e8 f1 4c cf ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 84090fb:	83 f0 01             	xor    $0x1,%eax
 84090fe:	84 c0                	test   %al,%al
 8409100:	74 0a                	je     840910c <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x418>
 8409102:	b8 00 00 00 00       	mov    $0x0,%eax
 8409107:	e9 e8 02 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 840910c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840910f:	05 ba 00 00 00       	add    $0xba,%eax
 8409114:	89 44 24 08          	mov    %eax,0x8(%esp)
 8409118:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 840911f:	00 
 8409120:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409123:	89 04 24             	mov    %eax,(%esp)
 8409126:	e8 01 d8 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840912b:	83 f0 01             	xor    $0x1,%eax
 840912e:	84 c0                	test   %al,%al
 8409130:	74 0a                	je     840913c <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x448>
 8409132:	b8 00 00 00 00       	mov    $0x0,%eax
 8409137:	e9 b8 02 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 840913c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840913f:	83 c0 3a             	add    $0x3a,%eax
 8409142:	89 44 24 08          	mov    %eax,0x8(%esp)
 8409146:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 840914d:	00 
 840914e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409151:	89 04 24             	mov    %eax,(%esp)
 8409154:	e8 37 d8 d0 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8409159:	83 f0 01             	xor    $0x1,%eax
 840915c:	84 c0                	test   %al,%al
 840915e:	74 0a                	je     840916a <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x476>
 8409160:	b8 00 00 00 00       	mov    $0x0,%eax
 8409165:	e9 8a 02 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 840916a:	8b 45 0c             	mov    0xc(%ebp),%eax
 840916d:	83 c0 40             	add    $0x40,%eax
 8409170:	c7 44 24 0c 18 00 00 	movl   $0x18,0xc(%esp)
 8409177:	00 
 8409178:	89 44 24 08          	mov    %eax,0x8(%esp)
 840917c:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 8409183:	00 
 8409184:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409187:	89 04 24             	mov    %eax,(%esp)
 840918a:	e8 5b 3c ce ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 840918f:	83 f0 01             	xor    $0x1,%eax
 8409192:	84 c0                	test   %al,%al
 8409194:	74 0a                	je     84091a0 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x4ac>
 8409196:	b8 00 00 00 00       	mov    $0x0,%eax
 840919b:	e9 54 02 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 84091a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84091a3:	83 c0 62             	add    $0x62,%eax
 84091a6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84091aa:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 84091b1:	00 
 84091b2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84091b5:	89 04 24             	mov    %eax,(%esp)
 84091b8:	e8 35 91 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84091bd:	83 f0 01             	xor    $0x1,%eax
 84091c0:	84 c0                	test   %al,%al
 84091c2:	74 0a                	je     84091ce <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x4da>
 84091c4:	b8 00 00 00 00       	mov    $0x0,%eax
 84091c9:	e9 26 02 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 84091ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 84091d1:	83 c0 66             	add    $0x66,%eax
 84091d4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84091d8:	c7 44 24 04 17 00 00 	movl   $0x17,0x4(%esp)
 84091df:	00 
 84091e0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84091e3:	89 04 24             	mov    %eax,(%esp)
 84091e6:	e8 cf 4c cf ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 84091eb:	83 f0 01             	xor    $0x1,%eax
 84091ee:	84 c0                	test   %al,%al
 84091f0:	74 0a                	je     84091fc <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x508>
 84091f2:	b8 00 00 00 00       	mov    $0x0,%eax
 84091f7:	e9 f8 01 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 84091fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84091ff:	83 c0 69             	add    $0x69,%eax
 8409202:	89 44 24 08          	mov    %eax,0x8(%esp)
 8409206:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 840920d:	00 
 840920e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409211:	89 04 24             	mov    %eax,(%esp)
 8409214:	e8 77 d7 d0 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8409219:	83 f0 01             	xor    $0x1,%eax
 840921c:	84 c0                	test   %al,%al
 840921e:	74 0a                	je     840922a <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x536>
 8409220:	b8 00 00 00 00       	mov    $0x0,%eax
 8409225:	e9 ca 01 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 840922a:	8b 45 0c             	mov    0xc(%ebp),%eax
 840922d:	83 c0 6b             	add    $0x6b,%eax
 8409230:	89 44 24 08          	mov    %eax,0x8(%esp)
 8409234:	c7 44 24 04 19 00 00 	movl   $0x19,0x4(%esp)
 840923b:	00 
 840923c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840923f:	89 04 24             	mov    %eax,(%esp)
 8409242:	e8 73 4c cf ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 8409247:	83 f0 01             	xor    $0x1,%eax
 840924a:	84 c0                	test   %al,%al
 840924c:	74 0a                	je     8409258 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x564>
 840924e:	b8 00 00 00 00       	mov    $0x0,%eax
 8409253:	e9 9c 01 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 8409258:	8b 45 0c             	mov    0xc(%ebp),%eax
 840925b:	83 c0 7c             	add    $0x7c,%eax
 840925e:	c7 44 24 0c 08 00 00 	movl   $0x8,0xc(%esp)
 8409265:	00 
 8409266:	89 44 24 08          	mov    %eax,0x8(%esp)
 840926a:	c7 44 24 04 1a 00 00 	movl   $0x1a,0x4(%esp)
 8409271:	00 
 8409272:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409275:	89 04 24             	mov    %eax,(%esp)
 8409278:	e8 9d c0 d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 840927d:	83 f0 01             	xor    $0x1,%eax
 8409280:	84 c0                	test   %al,%al
 8409282:	74 0a                	je     840928e <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x59a>
 8409284:	b8 00 00 00 00       	mov    $0x0,%eax
 8409289:	e9 66 01 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 840928e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409291:	05 84 00 00 00       	add    $0x84,%eax
 8409296:	c7 44 24 0c 22 00 00 	movl   $0x22,0xc(%esp)
 840929d:	00 
 840929e:	89 44 24 08          	mov    %eax,0x8(%esp)
 84092a2:	c7 44 24 04 1b 00 00 	movl   $0x1b,0x4(%esp)
 84092a9:	00 
 84092aa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84092ad:	89 04 24             	mov    %eax,(%esp)
 84092b0:	e8 65 c0 d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 84092b5:	83 f0 01             	xor    $0x1,%eax
 84092b8:	84 c0                	test   %al,%al
 84092ba:	74 0a                	je     84092c6 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x5d2>
 84092bc:	b8 00 00 00 00       	mov    $0x0,%eax
 84092c1:	e9 2e 01 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 84092c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84092c9:	05 40 01 00 00       	add    $0x140,%eax
 84092ce:	89 44 24 08          	mov    %eax,0x8(%esp)
 84092d2:	c7 44 24 04 1c 00 00 	movl   $0x1c,0x4(%esp)
 84092d9:	00 
 84092da:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84092dd:	89 04 24             	mov    %eax,(%esp)
 84092e0:	e8 0d 90 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84092e5:	83 f0 01             	xor    $0x1,%eax
 84092e8:	84 c0                	test   %al,%al
 84092ea:	74 0a                	je     84092f6 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x602>
 84092ec:	b8 00 00 00 00       	mov    $0x0,%eax
 84092f1:	e9 fe 00 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 84092f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84092f9:	05 12 01 00 00       	add    $0x112,%eax
 84092fe:	89 44 24 08          	mov    %eax,0x8(%esp)
 8409302:	c7 44 24 04 1d 00 00 	movl   $0x1d,0x4(%esp)
 8409309:	00 
 840930a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840930d:	89 04 24             	mov    %eax,(%esp)
 8409310:	e8 25 44 04 00       	call   844d73a <_ZN5MySQL8get_byteEiRi>
 8409315:	83 f0 01             	xor    $0x1,%eax
 8409318:	84 c0                	test   %al,%al
 840931a:	74 0a                	je     8409326 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x632>
 840931c:	b8 00 00 00 00       	mov    $0x0,%eax
 8409321:	e9 ce 00 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 8409326:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409329:	05 2a 01 00 00       	add    $0x12a,%eax
 840932e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8409332:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 8409339:	00 
 840933a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840933d:	89 04 24             	mov    %eax,(%esp)
 8409340:	e8 0f 4b cf ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8409345:	83 f0 01             	xor    $0x1,%eax
 8409348:	84 c0                	test   %al,%al
 840934a:	74 0a                	je     8409356 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x662>
 840934c:	b8 00 00 00 00       	mov    $0x0,%eax
 8409351:	e9 9e 00 00 00       	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 8409356:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409359:	05 2c 01 00 00       	add    $0x12c,%eax
 840935e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8409362:	c7 44 24 04 1f 00 00 	movl   $0x1f,0x4(%esp)
 8409369:	00 
 840936a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840936d:	89 04 24             	mov    %eax,(%esp)
 8409370:	e8 df 4a cf ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8409375:	83 f0 01             	xor    $0x1,%eax
 8409378:	84 c0                	test   %al,%al
 840937a:	74 07                	je     8409383 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x68f>
 840937c:	b8 00 00 00 00       	mov    $0x0,%eax
 8409381:	eb 71                	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 8409383:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409386:	05 30 01 00 00       	add    $0x130,%eax
 840938b:	89 44 24 08          	mov    %eax,0x8(%esp)
 840938f:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 8409396:	00 
 8409397:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840939a:	89 04 24             	mov    %eax,(%esp)
 840939d:	e8 b2 4a cf ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 84093a2:	83 f0 01             	xor    $0x1,%eax
 84093a5:	84 c0                	test   %al,%al
 84093a7:	74 07                	je     84093b0 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x6bc>
 84093a9:	b8 00 00 00 00       	mov    $0x0,%eax
 84093ae:	eb 44                	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 84093b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84093b3:	8b 80 86 06 00 00    	mov    0x686(%eax),%eax
 84093b9:	85 c0                	test   %eax,%eax
 84093bb:	74 32                	je     84093ef <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x6fb>
 84093bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84093c0:	8d 90 8b 06 00 00    	lea    0x68b(%eax),%edx
 84093c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84093c9:	8b 80 86 06 00 00    	mov    0x686(%eax),%eax
 84093cf:	89 54 24 04          	mov    %edx,0x4(%esp)
 84093d3:	89 04 24             	mov    %eax,(%esp)
 84093d6:	e8 cb 0b 00 00       	call   8409fa6 <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA>
 84093db:	88 45 f7             	mov    %al,-0x9(%ebp)
 84093de:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 84093e2:	83 f0 01             	xor    $0x1,%eax
 84093e5:	84 c0                	test   %al,%al
 84093e7:	74 06                	je     84093ef <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x6fb>
 84093e9:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 84093ed:	eb 05                	jmp    84093f4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC+0x700>
 84093ef:	b8 01 00 00 00       	mov    $0x1,%eax
 84093f4:	c9                   	leave
 84093f5:	c3                   	ret

```

```c
// DB_LoadCharac::_getCharacInfo @ 0x8408cf4

/* DB_LoadCharac::_getCharacInfo(SIG_LOAD_CHARAC*) */

char __thiscall DB_LoadCharac::_getCharacInfo(DB_LoadCharac *this,SIG_LOAD_CHARAC *param_1)

{
  bool bVar1;
  char cVar2;
  MySQL *this_00;
  int iVar3;
  
  this_00 = (MySQL *)_getGameDB();
  MySQL::set_query(this_00,
                   "seLect charac_no,charac_name,job,lev,grow_type,maxHP,maxMP,phy_attack,phy_defense,mag_attack,mag_defense,inven_weight,hp_regen,mp_regen,move_speed, attack_speed, cast_speed, hit_recovery, jump, charac_weight, max_fatigue, create_time,guild_id,guild_right,max_premium_fatigue,member_flag,element_resist,spec_property,m_id,expert_job, skill_tree_index, event_charac_level, guild_secede from charac_info where charac_no=%d and delete_flag!=1"
                   ,*(undefined4 *)(param_1 + 4));
  cVar2 = MySQL::exec(this_00,true);
  if ((cVar2 == '\x01') && (cVar2 = MySQL::fetch(this_00), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    cVar2 = '\0';
  }
  else {
    iVar3 = MySQL::get_n_rows(this_00);
    if (iVar3 == 1) {
      cVar2 = MySQL::get_int(this_00,0,(int *)(param_1 + 0xc));
      if (cVar2 == '\x01') {
        cVar2 = MySQL::get_str(this_00,1,(char *)(param_1 + 0x10),0x1d);
        if (cVar2 == '\x01') {
          cVar2 = MySQL::get_byte(this_00,2,(char *)(param_1 + 0x30));
          if (cVar2 == '\x01') {
            cVar2 = MySQL::get_short(this_00,3,(short *)(param_1 + 0x31));
            if (cVar2 == '\x01') {
              cVar2 = MySQL::get_byte(this_00,4,(char *)(param_1 + 0x33));
              if (cVar2 == '\x01') {
                cVar2 = MySQL::get_uint(this_00,5,(uint *)(param_1 + 0x6c));
                if (cVar2 == '\x01') {
                  cVar2 = MySQL::get_uint(this_00,6,(uint *)(param_1 + 0x70));
                  if (cVar2 == '\x01') {
                    cVar2 = MySQL::get_ushort(this_00,7,(ushort *)(param_1 + 0x74));
                    if (cVar2 == '\x01') {
                      cVar2 = MySQL::get_ushort(this_00,8,(ushort *)(param_1 + 0x76));
                      if (cVar2 == '\x01') {
                        cVar2 = MySQL::get_ushort(this_00,9,(ushort *)(param_1 + 0x78));
                        if (cVar2 == '\x01') {
                          cVar2 = MySQL::get_ushort(this_00,10,(ushort *)(param_1 + 0x7a));
                          if (cVar2 == '\x01') {
                            cVar2 = MySQL::get_int(this_00,0xb,(int *)(param_1 + 0xa6));
                            if (cVar2 == '\x01') {
                              cVar2 = MySQL::get_short(this_00,0xc,(short *)(param_1 + 0xaa));
                              if (cVar2 == '\x01') {
                                cVar2 = MySQL::get_short(this_00,0xd,(short *)(param_1 + 0xac));
                                if (cVar2 == '\x01') {
                                  cVar2 = MySQL::get_uint(this_00,0xe,(uint *)(param_1 + 0xae));
                                  if (cVar2 == '\x01') {
                                    cVar2 = MySQL::get_ushort(this_00,0xf,(ushort *)(param_1 + 0xb2)
                                                             );
                                    if (cVar2 == '\x01') {
                                      cVar2 = MySQL::get_ushort(this_00,0x10,
                                                                (ushort *)(param_1 + 0xb4));
                                      if (cVar2 == '\x01') {
                                        cVar2 = MySQL::get_short(this_00,0x11,
                                                                 (short *)(param_1 + 0xb6));
                                        if (cVar2 == '\x01') {
                                          cVar2 = MySQL::get_short(this_00,0x12,
                                                                   (short *)(param_1 + 0xb8));
                                          if (cVar2 == '\x01') {
                                            cVar2 = MySQL::get_int(this_00,0x13,
                                                                   (int *)(param_1 + 0xba));
                                            if (cVar2 == '\x01') {
                                              cVar2 = MySQL::get_ushort(this_00,0x14,
                                                                        (ushort *)(param_1 + 0x3a));
                                              if (cVar2 == '\x01') {
                                                cVar2 = MySQL::get_str(this_00,0x15,
                                                                       (char *)(param_1 + 0x40),0x18
                                                                      );
                                                if (cVar2 == '\x01') {
                                                  cVar2 = MySQL::get_uint(this_00,0x16,
                                                                          (uint *)(param_1 + 0x62));
                                                  if (cVar2 == '\x01') {
                                                    cVar2 = MySQL::get_ubyte(this_00,0x17,
                                                                             (uchar *)(param_1 +
                                                                                      0x66));
                                                    if (cVar2 == '\x01') {
                                                      cVar2 = MySQL::get_ushort(this_00,0x18,
                                                                                (ushort *)
                                                                                (param_1 + 0x69));
                                                      if (cVar2 == '\x01') {
                                                        cVar2 = MySQL::get_ubyte(this_00,0x19,
                                                                                 (uchar *)(param_1 +
                                                                                          0x6b));
                                                        if (cVar2 == '\x01') {
                                                          cVar2 = MySQL::get_binary(this_00,0x1a,
                                                                                    param_1 + 0x7c,8
                                                                                   );
                                                          if (cVar2 == '\x01') {
                                                            cVar2 = MySQL::get_binary(this_00,0x1b,
                                                                                      param_1 + 0x84
                                                                                      ,0x22);
                                                            if (cVar2 == '\x01') {
                                                              cVar2 = MySQL::get_uint(this_00,0x1c,
                                                                                      (uint *)(
                                                  param_1 + 0x140));
                                                  if (cVar2 == '\x01') {
                                                    cVar2 = MySQL::get_byte(this_00,0x1d,
                                                                            (int *)(param_1 + 0x112)
                                                                           );
                                                    if (cVar2 == '\x01') {
                                                      cVar2 = MySQL::get_byte(this_00,0x1e,
                                                                              (char *)(param_1 +
                                                                                      0x12a));
                                                      if (cVar2 == '\x01') {
                                                        cVar2 = MySQL::get_byte(this_00,0x1f,
                                                                                (char *)(param_1 +
                                                                                        300));
                                                        if (cVar2 == '\x01') {
                                                          cVar2 = MySQL::get_byte(this_00,0x20,
                                                                                  (char *)(param_1 +
                                                                                          0x130));
                                                          if (cVar2 == '\x01') {
                                                            if ((*(int *)(param_1 + 0x686) == 0) ||
                                                               (cVar2 = _GetTagCharacInfo(*(uint *)(
                                                  param_1 + 0x686),
                                                  (TAG_CHARAC_DATA *)(param_1 + 0x68b)),
                                                  cVar2 == '\x01')) {
                                                    cVar2 = '\x01';
                                                  }
                                                  }
                                                  else {
                                                    cVar2 = '\0';
                                                  }
                                                  }
                                                  else {
                                                    cVar2 = '\0';
                                                  }
                                                  }
                                                  else {
                                                    cVar2 = '\0';
                                                  }
                                                  }
                                                  else {
                                                    cVar2 = '\0';
                                                  }
                                                  }
                                                  else {
                                                    cVar2 = '\0';
                                                  }
                                                  }
                                                  else {
                                                    cVar2 = '\0';
                                                  }
                                                  }
                                                  else {
                                                    cVar2 = '\0';
                                                  }
                                                  }
                                                  else {
                                                    cVar2 = '\0';
                                                  }
                                                  }
                                                  else {
                                                    cVar2 = '\0';
                                                  }
                                                  }
                                                  else {
                                                    cVar2 = '\0';
                                                  }
                                                  }
                                                  else {
                                                    cVar2 = '\0';
                                                  }
                                                }
                                                else {
                                                  cVar2 = '\0';
                                                }
                                              }
                                              else {
                                                cVar2 = '\0';
                                              }
                                            }
                                            else {
                                              cVar2 = '\0';
                                            }
                                          }
                                          else {
                                            cVar2 = '\0';
                                          }
                                        }
                                        else {
                                          cVar2 = '\0';
                                        }
                                      }
                                      else {
                                        cVar2 = '\0';
                                      }
                                    }
                                    else {
                                      cVar2 = '\0';
                                    }
                                  }
                                  else {
                                    cVar2 = '\0';
                                  }
                                }
                                else {
                                  cVar2 = '\0';
                                }
                              }
                              else {
                                cVar2 = '\0';
                              }
                            }
                            else {
                              cVar2 = '\0';
                            }
                          }
                          else {
                            cVar2 = '\0';
                          }
                        }
                        else {
                          cVar2 = '\0';
                        }
                      }
                      else {
                        cVar2 = '\0';
                      }
                    }
                    else {
                      cVar2 = '\0';
                    }
                  }
                  else {
                    cVar2 = '\0';
                  }
                }
                else {
                  cVar2 = '\0';
                }
              }
              else {
                cVar2 = '\0';
              }
            }
            else {
              cVar2 = '\0';
            }
          }
          else {
            cVar2 = '\0';
          }
        }
        else {
          cVar2 = '\0';
        }
      }
      else {
        cVar2 = '\0';
      }
    }
    else {
      cVar2 = '\0';
    }
  }
  return cVar2;
}

```

---

## _getCharacStat

```asm
// === 084093f6 DB_LoadCharac::_getCharacStat  [0x084093f6-0x8409d2d] ===
 84093f6:	55                   	push   %ebp
 84093f7:	89 e5                	mov    %esp,%ebp
 84093f9:	83 ec 28             	sub    $0x28,%esp
 84093fc:	8b 45 08             	mov    0x8(%ebp),%eax
 84093ff:	89 04 24             	mov    %eax,(%esp)
 8409402:	e8 03 f8 ff ff       	call   8408c0a <_ZN13DB_LoadCharac10_getGameDBEv>
 8409407:	89 45 f0             	mov    %eax,-0x10(%ebp)
 840940a:	8b 45 0c             	mov    0xc(%ebp),%eax
 840940d:	8b 40 04             	mov    0x4(%eax),%eax
 8409410:	89 44 24 08          	mov    %eax,0x8(%esp)
 8409414:	c7 44 24 04 a4 51 c4 	movl   $0x8c451a4,0x4(%esp)
 840941b:	08 
 840941c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840941f:	89 04 24             	mov    %eax,(%esp)
 8409422:	e8 99 ad fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8409427:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840942e:	00 
 840942f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409432:	89 04 24             	mov    %eax,(%esp)
 8409435:	e8 ec ae fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 840943a:	83 f0 01             	xor    $0x1,%eax
 840943d:	84 c0                	test   %al,%al
 840943f:	75 12                	jne    8409453 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x5d>
 8409441:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409444:	89 04 24             	mov    %eax,(%esp)
 8409447:	e8 70 b0 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 840944c:	83 f0 01             	xor    $0x1,%eax
 840944f:	84 c0                	test   %al,%al
 8409451:	74 07                	je     840945a <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x64>
 8409453:	b8 01 00 00 00       	mov    $0x1,%eax
 8409458:	eb 05                	jmp    840945f <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x69>
 840945a:	b8 00 00 00 00       	mov    $0x0,%eax
 840945f:	84 c0                	test   %al,%al
 8409461:	74 0a                	je     840946d <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x77>
 8409463:	b8 00 00 00 00       	mov    $0x0,%eax
 8409468:	e9 be 08 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 840946d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8409474:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409477:	8d 50 2e             	lea    0x2e(%eax),%edx
 840947a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840947d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409481:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409485:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409489:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840948c:	89 04 24             	mov    %eax,(%esp)
 840948f:	e8 c0 49 cf ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8409494:	83 f0 01             	xor    $0x1,%eax
 8409497:	84 c0                	test   %al,%al
 8409499:	74 0a                	je     84094a5 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0xaf>
 840949b:	b8 00 00 00 00       	mov    $0x0,%eax
 84094a0:	e9 86 08 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 84094a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84094a8:	8d 50 34             	lea    0x34(%eax),%edx
 84094ab:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84094ae:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84094b2:	89 54 24 08          	mov    %edx,0x8(%esp)
 84094b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84094ba:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84094bd:	89 04 24             	mov    %eax,(%esp)
 84094c0:	e8 2d 8e cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84094c5:	83 f0 01             	xor    $0x1,%eax
 84094c8:	84 c0                	test   %al,%al
 84094ca:	74 0a                	je     84094d6 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0xe0>
 84094cc:	b8 00 00 00 00       	mov    $0x0,%eax
 84094d1:	e9 55 08 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 84094d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84094d9:	8d 90 be 00 00 00    	lea    0xbe(%eax),%edx
 84094df:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84094e2:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84094e6:	89 54 24 08          	mov    %edx,0x8(%esp)
 84094ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 84094ee:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84094f1:	89 04 24             	mov    %eax,(%esp)
 84094f4:	e8 c1 49 cf ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 84094f9:	83 f0 01             	xor    $0x1,%eax
 84094fc:	84 c0                	test   %al,%al
 84094fe:	74 0a                	je     840950a <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x114>
 8409500:	b8 00 00 00 00       	mov    $0x0,%eax
 8409505:	e9 21 08 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 840950a:	8b 45 0c             	mov    0xc(%ebp),%eax
 840950d:	8d 50 38             	lea    0x38(%eax),%edx
 8409510:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409513:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409517:	89 54 24 08          	mov    %edx,0x8(%esp)
 840951b:	89 44 24 04          	mov    %eax,0x4(%esp)
 840951f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409522:	89 04 24             	mov    %eax,(%esp)
 8409525:	e8 66 d4 d0 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 840952a:	83 f0 01             	xor    $0x1,%eax
 840952d:	84 c0                	test   %al,%al
 840952f:	74 0a                	je     840953b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x145>
 8409531:	b8 00 00 00 00       	mov    $0x0,%eax
 8409536:	e9 f0 07 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 840953b:	8b 45 0c             	mov    0xc(%ebp),%eax
 840953e:	8d 50 67             	lea    0x67(%eax),%edx
 8409541:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409544:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409548:	89 54 24 08          	mov    %edx,0x8(%esp)
 840954c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409550:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409553:	89 04 24             	mov    %eax,(%esp)
 8409556:	e8 35 d4 d0 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 840955b:	83 f0 01             	xor    $0x1,%eax
 840955e:	84 c0                	test   %al,%al
 8409560:	74 0a                	je     840956c <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x176>
 8409562:	b8 00 00 00 00       	mov    $0x0,%eax
 8409567:	e9 bf 07 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 840956c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840956f:	83 c0 59             	add    $0x59,%eax
 8409572:	89 c2                	mov    %eax,%edx
 8409574:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409577:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840957b:	89 54 24 08          	mov    %edx,0x8(%esp)
 840957f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409583:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409586:	89 04 24             	mov    %eax,(%esp)
 8409589:	e8 64 8d cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 840958e:	83 f0 01             	xor    $0x1,%eax
 8409591:	84 c0                	test   %al,%al
 8409593:	74 0a                	je     840959f <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x1a9>
 8409595:	b8 00 00 00 00       	mov    $0x0,%eax
 840959a:	e9 8c 07 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 840959f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84095a2:	8d 90 bf 00 00 00    	lea    0xbf(%eax),%edx
 84095a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84095ab:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84095af:	89 54 24 08          	mov    %edx,0x8(%esp)
 84095b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84095b7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84095ba:	89 04 24             	mov    %eax,(%esp)
 84095bd:	e8 ce d3 d0 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 84095c2:	83 f0 01             	xor    $0x1,%eax
 84095c5:	84 c0                	test   %al,%al
 84095c7:	74 0a                	je     84095d3 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x1dd>
 84095c9:	b8 00 00 00 00       	mov    $0x0,%eax
 84095ce:	e9 58 07 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 84095d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84095d6:	8d 90 c1 00 00 00    	lea    0xc1(%eax),%edx
 84095dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84095df:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84095e3:	89 54 24 08          	mov    %edx,0x8(%esp)
 84095e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84095eb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84095ee:	89 04 24             	mov    %eax,(%esp)
 84095f1:	e8 fc 8c cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84095f6:	83 f0 01             	xor    $0x1,%eax
 84095f9:	84 c0                	test   %al,%al
 84095fb:	74 0a                	je     8409607 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x211>
 84095fd:	b8 00 00 00 00       	mov    $0x0,%eax
 8409602:	e9 24 07 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409607:	8b 45 0c             	mov    0xc(%ebp),%eax
 840960a:	8d 90 d5 00 00 00    	lea    0xd5(%eax),%edx
 8409610:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409613:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409617:	89 54 24 08          	mov    %edx,0x8(%esp)
 840961b:	89 44 24 04          	mov    %eax,0x4(%esp)
 840961f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409622:	89 04 24             	mov    %eax,(%esp)
 8409625:	e8 c8 8c cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 840962a:	83 f0 01             	xor    $0x1,%eax
 840962d:	84 c0                	test   %al,%al
 840962f:	74 0a                	je     840963b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x245>
 8409631:	b8 00 00 00 00       	mov    $0x0,%eax
 8409636:	e9 f0 06 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 840963b:	8b 45 0c             	mov    0xc(%ebp),%eax
 840963e:	8d 90 dd 00 00 00    	lea    0xdd(%eax),%edx
 8409644:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409647:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840964b:	89 54 24 08          	mov    %edx,0x8(%esp)
 840964f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409653:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409656:	89 04 24             	mov    %eax,(%esp)
 8409659:	e8 94 8c cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 840965e:	83 f0 01             	xor    $0x1,%eax
 8409661:	84 c0                	test   %al,%al
 8409663:	74 0a                	je     840966f <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x279>
 8409665:	b8 00 00 00 00       	mov    $0x0,%eax
 840966a:	e9 bc 06 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 840966f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409672:	c7 80 d9 00 00 00 00 	movl   $0x0,0xd9(%eax)
 8409679:	00 00 00 
 840967c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840967f:	8d 90 01 01 00 00    	lea    0x101(%eax),%edx
 8409685:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409688:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840968c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409690:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409694:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409697:	89 04 24             	mov    %eax,(%esp)
 840969a:	e8 b5 47 cf ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 840969f:	83 f0 01             	xor    $0x1,%eax
 84096a2:	84 c0                	test   %al,%al
 84096a4:	74 0a                	je     84096b0 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x2ba>
 84096a6:	b8 00 00 00 00       	mov    $0x0,%eax
 84096ab:	e9 7b 06 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 84096b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84096b3:	8d 90 e1 00 00 00    	lea    0xe1(%eax),%edx
 84096b9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84096bc:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84096c0:	89 54 24 08          	mov    %edx,0x8(%esp)
 84096c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84096c8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84096cb:	89 04 24             	mov    %eax,(%esp)
 84096ce:	e8 59 d2 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84096d3:	83 f0 01             	xor    $0x1,%eax
 84096d6:	84 c0                	test   %al,%al
 84096d8:	74 0a                	je     84096e4 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x2ee>
 84096da:	b8 00 00 00 00       	mov    $0x0,%eax
 84096df:	e9 47 06 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 84096e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84096e7:	8d 90 e5 00 00 00    	lea    0xe5(%eax),%edx
 84096ed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84096f0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84096f4:	89 54 24 08          	mov    %edx,0x8(%esp)
 84096f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84096fc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84096ff:	89 04 24             	mov    %eax,(%esp)
 8409702:	e8 25 d2 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8409707:	83 f0 01             	xor    $0x1,%eax
 840970a:	84 c0                	test   %al,%al
 840970c:	74 0a                	je     8409718 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x322>
 840970e:	b8 00 00 00 00       	mov    $0x0,%eax
 8409713:	e9 13 06 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409718:	8b 45 0c             	mov    0xc(%ebp),%eax
 840971b:	8d 90 e9 00 00 00    	lea    0xe9(%eax),%edx
 8409721:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409724:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409728:	89 54 24 08          	mov    %edx,0x8(%esp)
 840972c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409730:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409733:	89 04 24             	mov    %eax,(%esp)
 8409736:	e8 f1 d1 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840973b:	83 f0 01             	xor    $0x1,%eax
 840973e:	84 c0                	test   %al,%al
 8409740:	74 0a                	je     840974c <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x356>
 8409742:	b8 00 00 00 00       	mov    $0x0,%eax
 8409747:	e9 df 05 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 840974c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840974f:	8d 90 ed 00 00 00    	lea    0xed(%eax),%edx
 8409755:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409758:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840975c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409760:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409764:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409767:	89 04 24             	mov    %eax,(%esp)
 840976a:	e8 bd d1 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840976f:	83 f0 01             	xor    $0x1,%eax
 8409772:	84 c0                	test   %al,%al
 8409774:	74 0a                	je     8409780 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x38a>
 8409776:	b8 00 00 00 00       	mov    $0x0,%eax
 840977b:	e9 ab 05 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409780:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409783:	8d 90 f1 00 00 00    	lea    0xf1(%eax),%edx
 8409789:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840978c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409790:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409794:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409798:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840979b:	89 04 24             	mov    %eax,(%esp)
 840979e:	e8 89 d1 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84097a3:	83 f0 01             	xor    $0x1,%eax
 84097a6:	84 c0                	test   %al,%al
 84097a8:	74 0a                	je     84097b4 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x3be>
 84097aa:	b8 00 00 00 00       	mov    $0x0,%eax
 84097af:	e9 77 05 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 84097b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84097b7:	8d 90 f5 00 00 00    	lea    0xf5(%eax),%edx
 84097bd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84097c0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84097c4:	89 54 24 08          	mov    %edx,0x8(%esp)
 84097c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84097cc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84097cf:	89 04 24             	mov    %eax,(%esp)
 84097d2:	e8 55 d1 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84097d7:	83 f0 01             	xor    $0x1,%eax
 84097da:	84 c0                	test   %al,%al
 84097dc:	74 0a                	je     84097e8 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x3f2>
 84097de:	b8 00 00 00 00       	mov    $0x0,%eax
 84097e3:	e9 43 05 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 84097e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84097eb:	8d 90 f9 00 00 00    	lea    0xf9(%eax),%edx
 84097f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84097f4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84097f8:	89 54 24 08          	mov    %edx,0x8(%esp)
 84097fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409800:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409803:	89 04 24             	mov    %eax,(%esp)
 8409806:	e8 21 d1 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840980b:	83 f0 01             	xor    $0x1,%eax
 840980e:	84 c0                	test   %al,%al
 8409810:	74 0a                	je     840981c <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x426>
 8409812:	b8 00 00 00 00       	mov    $0x0,%eax
 8409817:	e9 0f 05 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 840981c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840981f:	8d 90 02 01 00 00    	lea    0x102(%eax),%edx
 8409825:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409828:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840982c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409830:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409834:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409837:	89 04 24             	mov    %eax,(%esp)
 840983a:	e8 ed d0 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840983f:	83 f0 01             	xor    $0x1,%eax
 8409842:	84 c0                	test   %al,%al
 8409844:	74 0a                	je     8409850 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x45a>
 8409846:	b8 00 00 00 00       	mov    $0x0,%eax
 840984b:	e9 db 04 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409850:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409853:	8d 90 06 01 00 00    	lea    0x106(%eax),%edx
 8409859:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840985c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409860:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409864:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409868:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840986b:	89 04 24             	mov    %eax,(%esp)
 840986e:	e8 b9 d0 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8409873:	83 f0 01             	xor    $0x1,%eax
 8409876:	84 c0                	test   %al,%al
 8409878:	74 0a                	je     8409884 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x48e>
 840987a:	b8 00 00 00 00       	mov    $0x0,%eax
 840987f:	e9 a7 04 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409884:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409887:	8d 90 fd 00 00 00    	lea    0xfd(%eax),%edx
 840988d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409890:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409894:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409898:	89 44 24 04          	mov    %eax,0x4(%esp)
 840989c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840989f:	89 04 24             	mov    %eax,(%esp)
 84098a2:	e8 85 d0 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84098a7:	83 f0 01             	xor    $0x1,%eax
 84098aa:	84 c0                	test   %al,%al
 84098ac:	74 0a                	je     84098b8 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x4c2>
 84098ae:	b8 00 00 00 00       	mov    $0x0,%eax
 84098b3:	e9 73 04 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 84098b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84098bb:	8d 90 0a 01 00 00    	lea    0x10a(%eax),%edx
 84098c1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84098c4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84098c8:	89 54 24 08          	mov    %edx,0x8(%esp)
 84098cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84098d0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84098d3:	89 04 24             	mov    %eax,(%esp)
 84098d6:	e8 17 8a cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84098db:	83 f0 01             	xor    $0x1,%eax
 84098de:	84 c0                	test   %al,%al
 84098e0:	74 0a                	je     84098ec <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x4f6>
 84098e2:	b8 00 00 00 00       	mov    $0x0,%eax
 84098e7:	e9 3f 04 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 84098ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 84098ef:	8d 90 0e 01 00 00    	lea    0x10e(%eax),%edx
 84098f5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84098f8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84098fc:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409900:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409904:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409907:	89 04 24             	mov    %eax,(%esp)
 840990a:	e8 e3 89 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 840990f:	83 f0 01             	xor    $0x1,%eax
 8409912:	84 c0                	test   %al,%al
 8409914:	74 0a                	je     8409920 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x52a>
 8409916:	b8 00 00 00 00       	mov    $0x0,%eax
 840991b:	e9 0b 04 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409920:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409923:	8d 90 16 01 00 00    	lea    0x116(%eax),%edx
 8409929:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840992c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409930:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409934:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409938:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840993b:	89 04 24             	mov    %eax,(%esp)
 840993e:	e8 e9 cf d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8409943:	83 f0 01             	xor    $0x1,%eax
 8409946:	84 c0                	test   %al,%al
 8409948:	74 0a                	je     8409954 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x55e>
 840994a:	b8 00 00 00 00       	mov    $0x0,%eax
 840994f:	e9 d7 03 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409954:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409957:	8d 50 3e             	lea    0x3e(%eax),%edx
 840995a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840995d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409961:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409965:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409969:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840996c:	89 04 24             	mov    %eax,(%esp)
 840996f:	e8 78 44 cf ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 8409974:	83 f0 01             	xor    $0x1,%eax
 8409977:	84 c0                	test   %al,%al
 8409979:	74 0a                	je     8409985 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x58f>
 840997b:	b8 00 00 00 00       	mov    $0x0,%eax
 8409980:	e9 a6 03 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409985:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409988:	8d 90 c5 00 00 00    	lea    0xc5(%eax),%edx
 840998e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409991:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409995:	c7 44 24 0c 10 00 00 	movl   $0x10,0xc(%esp)
 840999c:	00 
 840999d:	89 54 24 08          	mov    %edx,0x8(%esp)
 84099a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84099a5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84099a8:	89 04 24             	mov    %eax,(%esp)
 84099ab:	e8 6a b9 d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 84099b0:	83 f0 01             	xor    $0x1,%eax
 84099b3:	84 c0                	test   %al,%al
 84099b5:	74 0a                	je     84099c1 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x5cb>
 84099b7:	b8 00 00 00 00       	mov    $0x0,%eax
 84099bc:	e9 6a 03 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 84099c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84099c4:	8d 90 1a 01 00 00    	lea    0x11a(%eax),%edx
 84099ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84099cd:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84099d1:	89 54 24 08          	mov    %edx,0x8(%esp)
 84099d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84099d9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84099dc:	89 04 24             	mov    %eax,(%esp)
 84099df:	e8 08 44 cf ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 84099e4:	83 f0 01             	xor    $0x1,%eax
 84099e7:	84 c0                	test   %al,%al
 84099e9:	74 0a                	je     84099f5 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x5ff>
 84099eb:	b8 00 00 00 00       	mov    $0x0,%eax
 84099f0:	e9 36 03 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 84099f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84099f8:	8d 50 2f             	lea    0x2f(%eax),%edx
 84099fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84099fe:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409a02:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409a06:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409a0a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409a0d:	89 04 24             	mov    %eax,(%esp)
 8409a10:	e8 3f 44 cf ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8409a15:	83 f0 01             	xor    $0x1,%eax
 8409a18:	84 c0                	test   %al,%al
 8409a1a:	74 0a                	je     8409a26 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x630>
 8409a1c:	b8 00 00 00 00       	mov    $0x0,%eax
 8409a21:	e9 05 03 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409a26:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409a29:	8d 90 1c 01 00 00    	lea    0x11c(%eax),%edx
 8409a2f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409a32:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409a36:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409a3a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409a3e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409a41:	89 04 24             	mov    %eax,(%esp)
 8409a44:	e8 a9 88 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8409a49:	83 f0 01             	xor    $0x1,%eax
 8409a4c:	84 c0                	test   %al,%al
 8409a4e:	74 0a                	je     8409a5a <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x664>
 8409a50:	b8 00 00 00 00       	mov    $0x0,%eax
 8409a55:	e9 d1 02 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409a5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409a5d:	8d 90 20 01 00 00    	lea    0x120(%eax),%edx
 8409a63:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409a66:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409a6a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409a6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409a72:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409a75:	89 04 24             	mov    %eax,(%esp)
 8409a78:	e8 75 88 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8409a7d:	83 f0 01             	xor    $0x1,%eax
 8409a80:	84 c0                	test   %al,%al
 8409a82:	74 0a                	je     8409a8e <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x698>
 8409a84:	b8 00 00 00 00       	mov    $0x0,%eax
 8409a89:	e9 9d 02 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409a8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409a91:	8d 90 24 01 00 00    	lea    0x124(%eax),%edx
 8409a97:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409a9a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409a9e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409aa2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409aa6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409aa9:	89 04 24             	mov    %eax,(%esp)
 8409aac:	e8 41 88 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8409ab1:	83 f0 01             	xor    $0x1,%eax
 8409ab4:	84 c0                	test   %al,%al
 8409ab6:	74 0a                	je     8409ac2 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x6cc>
 8409ab8:	b8 00 00 00 00       	mov    $0x0,%eax
 8409abd:	e9 69 02 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409ac2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409ac5:	8d 50 3c             	lea    0x3c(%eax),%edx
 8409ac8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409acb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409acf:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409ad3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409ad7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409ada:	89 04 24             	mov    %eax,(%esp)
 8409add:	e8 ae ce d0 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8409ae2:	83 f0 01             	xor    $0x1,%eax
 8409ae5:	84 c0                	test   %al,%al
 8409ae7:	74 0a                	je     8409af3 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x6fd>
 8409ae9:	b8 00 00 00 00       	mov    $0x0,%eax
 8409aee:	e9 38 02 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409af3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409af6:	8d 90 28 01 00 00    	lea    0x128(%eax),%edx
 8409afc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409aff:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409b03:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409b07:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409b0b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409b0e:	89 04 24             	mov    %eax,(%esp)
 8409b11:	e8 d6 42 cf ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 8409b16:	83 f0 01             	xor    $0x1,%eax
 8409b19:	84 c0                	test   %al,%al
 8409b1b:	74 0a                	je     8409b27 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x731>
 8409b1d:	b8 00 00 00 00       	mov    $0x0,%eax
 8409b22:	e9 04 02 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409b27:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409b2a:	8d 90 2b 01 00 00    	lea    0x12b(%eax),%edx
 8409b30:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409b33:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409b37:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409b3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409b3f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409b42:	89 04 24             	mov    %eax,(%esp)
 8409b45:	e8 0a 43 cf ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8409b4a:	83 f0 01             	xor    $0x1,%eax
 8409b4d:	84 c0                	test   %al,%al
 8409b4f:	74 0a                	je     8409b5b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x765>
 8409b51:	b8 00 00 00 00       	mov    $0x0,%eax
 8409b56:	e9 d0 01 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409b5b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409b5e:	8d 90 2d 01 00 00    	lea    0x12d(%eax),%edx
 8409b64:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409b67:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409b6b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409b6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409b73:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409b76:	89 04 24             	mov    %eax,(%esp)
 8409b79:	e8 d6 42 cf ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8409b7e:	83 f0 01             	xor    $0x1,%eax
 8409b81:	84 c0                	test   %al,%al
 8409b83:	74 0a                	je     8409b8f <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x799>
 8409b85:	b8 00 00 00 00       	mov    $0x0,%eax
 8409b8a:	e9 9c 01 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409b8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409b92:	8d 90 2e 01 00 00    	lea    0x12e(%eax),%edx
 8409b98:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409b9b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409b9f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409ba3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409ba7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409baa:	89 04 24             	mov    %eax,(%esp)
 8409bad:	e8 3a 42 cf ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 8409bb2:	83 f0 01             	xor    $0x1,%eax
 8409bb5:	84 c0                	test   %al,%al
 8409bb7:	74 0a                	je     8409bc3 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x7cd>
 8409bb9:	b8 00 00 00 00       	mov    $0x0,%eax
 8409bbe:	e9 68 01 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409bc3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409bc6:	8d 90 31 01 00 00    	lea    0x131(%eax),%edx
 8409bcc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409bcf:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409bd3:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409bd7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409bdb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409bde:	89 04 24             	mov    %eax,(%esp)
 8409be1:	e8 0c 87 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8409be6:	83 f0 01             	xor    $0x1,%eax
 8409be9:	84 c0                	test   %al,%al
 8409beb:	74 0a                	je     8409bf7 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x801>
 8409bed:	b8 00 00 00 00       	mov    $0x0,%eax
 8409bf2:	e9 34 01 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409bf7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409bfa:	8d 90 35 01 00 00    	lea    0x135(%eax),%edx
 8409c00:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409c03:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409c07:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409c0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409c0f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409c12:	89 04 24             	mov    %eax,(%esp)
 8409c15:	e8 3a 42 cf ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8409c1a:	83 f0 01             	xor    $0x1,%eax
 8409c1d:	84 c0                	test   %al,%al
 8409c1f:	74 0a                	je     8409c2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x835>
 8409c21:	b8 00 00 00 00       	mov    $0x0,%eax
 8409c26:	e9 00 01 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409c2b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409c2e:	8d 90 36 01 00 00    	lea    0x136(%eax),%edx
 8409c34:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409c37:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409c3b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409c3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409c43:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409c46:	89 04 24             	mov    %eax,(%esp)
 8409c49:	e8 06 42 cf ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8409c4e:	83 f0 01             	xor    $0x1,%eax
 8409c51:	84 c0                	test   %al,%al
 8409c53:	74 0a                	je     8409c5f <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x869>
 8409c55:	b8 00 00 00 00       	mov    $0x0,%eax
 8409c5a:	e9 cc 00 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409c5f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409c62:	8d 90 37 01 00 00    	lea    0x137(%eax),%edx
 8409c68:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409c6b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409c6f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409c73:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409c77:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409c7a:	89 04 24             	mov    %eax,(%esp)
 8409c7d:	e8 d2 41 cf ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8409c82:	83 f0 01             	xor    $0x1,%eax
 8409c85:	84 c0                	test   %al,%al
 8409c87:	74 0a                	je     8409c93 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x89d>
 8409c89:	b8 00 00 00 00       	mov    $0x0,%eax
 8409c8e:	e9 98 00 00 00       	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409c93:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409c96:	8d 90 3a 01 00 00    	lea    0x13a(%eax),%edx
 8409c9c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409c9f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409ca3:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409ca7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409cab:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409cae:	89 04 24             	mov    %eax,(%esp)
 8409cb1:	e8 9e 41 cf ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8409cb6:	83 f0 01             	xor    $0x1,%eax
 8409cb9:	84 c0                	test   %al,%al
 8409cbb:	74 07                	je     8409cc4 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x8ce>
 8409cbd:	b8 00 00 00 00       	mov    $0x0,%eax
 8409cc2:	eb 67                	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409cc4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409cc7:	8d 90 3b 01 00 00    	lea    0x13b(%eax),%edx
 8409ccd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409cd0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409cd4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409cd8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409cdc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409cdf:	89 04 24             	mov    %eax,(%esp)
 8409ce2:	e8 d3 41 cf ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 8409ce7:	83 f0 01             	xor    $0x1,%eax
 8409cea:	84 c0                	test   %al,%al
 8409cec:	74 07                	je     8409cf5 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x8ff>
 8409cee:	b8 00 00 00 00       	mov    $0x0,%eax
 8409cf3:	eb 36                	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409cf5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8409cf8:	8d 90 3c 01 00 00    	lea    0x13c(%eax),%edx
 8409cfe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8409d01:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8409d05:	89 54 24 08          	mov    %edx,0x8(%esp)
 8409d09:	89 44 24 04          	mov    %eax,0x4(%esp)
 8409d0d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8409d10:	89 04 24             	mov    %eax,(%esp)
 8409d13:	e8 14 cc d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8409d18:	83 f0 01             	xor    $0x1,%eax
 8409d1b:	84 c0                	test   %al,%al
 8409d1d:	74 07                	je     8409d26 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x930>
 8409d1f:	b8 00 00 00 00       	mov    $0x0,%eax
 8409d24:	eb 05                	jmp    8409d2b <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC+0x935>
 8409d26:	b8 01 00 00 00       	mov    $0x1,%eax
 8409d2b:	c9                   	leave
 8409d2c:	c3                   	ret
 8409d2d:	90                   	nop

```

```c
// DB_LoadCharac::_getCharacStat @ 0x84093f6

/* DB_LoadCharac::_getCharacStat(SIG_LOAD_CHARAC*) */

undefined4 __thiscall DB_LoadCharac::_getCharacStat(DB_LoadCharac *this,SIG_LOAD_CHARAC *param_1)

{
  bool bVar1;
  char cVar2;
  MySQL *this_00;
  undefined4 uVar3;
  
  this_00 = (MySQL *)_getGameDB();
  MySQL::set_query(this_00,
                   "seLect village,exp,HP,fatigue,premium_fatigue,unix_timestamp(last_play_time),used_fatigue,tutorial_flag,trade_gold_total,trade_gold_daily,open_flag,chaos_point,chaos_exp,chaos_mode_count,chaos_kill_count,chaos_die_count,unix_timestamp(chaos_die_time),assault_count,luck_point,dungeon_play_count,unix_timestamp(chaos_kill_time),help_abuse_ratio,help_abuse_exp,expert_job_exp,fatigue_battery_charging,escalade_tutorial_flag,power_war_point,village_prev,power_war_assault_count,power_war_assault_victory_count,unix_timestamp(last_play_time_powerwar),fatigue_grownup_buff,emotion,add_slot_flag,member_dungeon_flag,member_bonus_fatigue,last_play_dungeon_index, add_equipslot_flag, channel_equipslot_switch, expand_equipslot_switch, visible_flags, growth_power_reward, unix_timestamp(chaos_respon_time) from charac_stat where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 4));
  cVar2 = MySQL::exec(this_00,true);
  if (cVar2 == '\x01') {
    cVar2 = MySQL::fetch(this_00);
    if (cVar2 == '\x01') {
      bVar1 = false;
      goto LAB_0840945f;
    }
  }
  bVar1 = true;
LAB_0840945f:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    cVar2 = MySQL::get_byte(this_00,0,(char *)(param_1 + 0x2e));
    if (cVar2 == '\x01') {
      cVar2 = MySQL::get_uint(this_00,1,(uint *)(param_1 + 0x34));
      if (cVar2 == '\x01') {
        cVar2 = MySQL::get_ubyte(this_00,2,(uchar *)(param_1 + 0xbe));
        if (cVar2 == '\x01') {
          cVar2 = MySQL::get_ushort(this_00,3,(ushort *)(param_1 + 0x38));
          if (cVar2 == '\x01') {
            cVar2 = MySQL::get_ushort(this_00,4,(ushort *)(param_1 + 0x67));
            if (cVar2 == '\x01') {
              cVar2 = MySQL::get_uint(this_00,5,(uint *)(param_1 + 0x59));
              if (cVar2 == '\x01') {
                cVar2 = MySQL::get_ushort(this_00,6,(ushort *)(param_1 + 0xbf));
                if (cVar2 == '\x01') {
                  cVar2 = MySQL::get_uint(this_00,7,(uint *)(param_1 + 0xc1));
                  if (cVar2 == '\x01') {
                    cVar2 = MySQL::get_uint(this_00,8,(uint *)(param_1 + 0xd5));
                    if (cVar2 == '\x01') {
                      cVar2 = MySQL::get_uint(this_00,9,(uint *)(param_1 + 0xdd));
                      if (cVar2 == '\x01') {
                        *(undefined4 *)(param_1 + 0xd9) = 0;
                        cVar2 = MySQL::get_byte(this_00,10,(char *)(param_1 + 0x101));
                        if (cVar2 == '\x01') {
                          cVar2 = MySQL::get_int(this_00,0xb,(int *)(param_1 + 0xe1));
                          if (cVar2 == '\x01') {
                            cVar2 = MySQL::get_int(this_00,0xc,(int *)(param_1 + 0xe5));
                            if (cVar2 == '\x01') {
                              cVar2 = MySQL::get_int(this_00,0xd,(int *)(param_1 + 0xe9));
                              if (cVar2 == '\x01') {
                                cVar2 = MySQL::get_int(this_00,0xe,(int *)(param_1 + 0xed));
                                if (cVar2 == '\x01') {
                                  cVar2 = MySQL::get_int(this_00,0xf,(int *)(param_1 + 0xf1));
                                  if (cVar2 == '\x01') {
                                    cVar2 = MySQL::get_int(this_00,0x10,(int *)(param_1 + 0xf5));
                                    if (cVar2 == '\x01') {
                                      cVar2 = MySQL::get_int(this_00,0x11,(int *)(param_1 + 0xf9));
                                      if (cVar2 == '\x01') {
                                        cVar2 = MySQL::get_int(this_00,0x12,(int *)(param_1 + 0x102)
                                                              );
                                        if (cVar2 == '\x01') {
                                          cVar2 = MySQL::get_int(this_00,0x13,
                                                                 (int *)(param_1 + 0x106));
                                          if (cVar2 == '\x01') {
                                            cVar2 = MySQL::get_int(this_00,0x14,
                                                                   (int *)(param_1 + 0xfd));
                                            if (cVar2 == '\x01') {
                                              cVar2 = MySQL::get_uint(this_00,0x15,
                                                                      (uint *)(param_1 + 0x10a));
                                              if (cVar2 == '\x01') {
                                                cVar2 = MySQL::get_uint(this_00,0x16,
                                                                        (uint *)(param_1 + 0x10e));
                                                if (cVar2 == '\x01') {
                                                  cVar2 = MySQL::get_int(this_00,0x17,
                                                                         (int *)(param_1 + 0x116));
                                                  if (cVar2 == '\x01') {
                                                    cVar2 = MySQL::get_short(this_00,0x18,
                                                                             (short *)(param_1 +
                                                                                      0x3e));
                                                    if (cVar2 == '\x01') {
                                                      cVar2 = MySQL::get_binary(this_00,0x19,
                                                                                param_1 + 0xc5,0x10)
                                                      ;
                                                      if (cVar2 == '\x01') {
                                                        cVar2 = MySQL::get_short(this_00,0x1a,
                                                                                 (short *)(param_1 +
                                                                                          0x11a));
                                                        if (cVar2 == '\x01') {
                                                          cVar2 = MySQL::get_byte(this_00,0x1b,
                                                                                  (char *)(param_1 +
                                                                                          0x2f));
                                                          if (cVar2 == '\x01') {
                                                            cVar2 = MySQL::get_uint(this_00,0x1c,
                                                                                    (uint *)(param_1
                                                                                            + 0x11c)
                                                                                   );
                                                            if (cVar2 == '\x01') {
                                                              cVar2 = MySQL::get_uint(this_00,0x1d,
                                                                                      (uint *)(
                                                  param_1 + 0x120));
                                                  if (cVar2 == '\x01') {
                                                    cVar2 = MySQL::get_uint(this_00,0x1e,
                                                                            (uint *)(param_1 + 0x124
                                                                                    ));
                                                    if (cVar2 == '\x01') {
                                                      cVar2 = MySQL::get_ushort(this_00,0x1f,
                                                                                (ushort *)
                                                                                (param_1 + 0x3c));
                                                      if (cVar2 == '\x01') {
                                                        cVar2 = MySQL::get_short(this_00,0x20,
                                                                                 (short *)(param_1 +
                                                                                          0x128));
                                                        if (cVar2 == '\x01') {
                                                          cVar2 = MySQL::get_byte(this_00,0x21,
                                                                                  (char *)(param_1 +
                                                                                          299));
                                                          if (cVar2 == '\x01') {
                                                            cVar2 = MySQL::get_byte(this_00,0x22,
                                                                                    (char *)(param_1
                                                                                            + 0x12d)
                                                                                   );
                                                            if (cVar2 == '\x01') {
                                                              cVar2 = MySQL::get_short(this_00,0x23,
                                                                                       (short *)(
                                                  param_1 + 0x12e));
                                                  if (cVar2 == '\x01') {
                                                    cVar2 = MySQL::get_uint(this_00,0x24,
                                                                            (uint *)(param_1 + 0x131
                                                                                    ));
                                                    if (cVar2 == '\x01') {
                                                      cVar2 = MySQL::get_byte(this_00,0x25,
                                                                              (char *)(param_1 +
                                                                                      0x135));
                                                      if (cVar2 == '\x01') {
                                                        cVar2 = MySQL::get_byte(this_00,0x26,
                                                                                (char *)(param_1 +
                                                                                        0x136));
                                                        if (cVar2 == '\x01') {
                                                          cVar2 = MySQL::get_byte(this_00,0x27,
                                                                                  (char *)(param_1 +
                                                                                          0x137));
                                                          if (cVar2 == '\x01') {
                                                            cVar2 = MySQL::get_byte(this_00,0x28,
                                                                                    (char *)(param_1
                                                                                            + 0x13a)
                                                                                   );
                                                            if (cVar2 == '\x01') {
                                                              cVar2 = MySQL::get_ubyte(this_00,0x29,
                                                                                       (uchar *)(
                                                  param_1 + 0x13b));
                                                  if (cVar2 == '\x01') {
                                                    cVar2 = MySQL::get_int(this_00,0x2a,
                                                                           (int *)(param_1 + 0x13c))
                                                    ;
                                                    if (cVar2 == '\x01') {
                                                      uVar3 = 1;
                                                    }
                                                    else {
                                                      uVar3 = 0;
                                                    }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                }
                                                else {
                                                  uVar3 = 0;
                                                }
                                              }
                                              else {
                                                uVar3 = 0;
                                              }
                                            }
                                            else {
                                              uVar3 = 0;
                                            }
                                          }
                                          else {
                                            uVar3 = 0;
                                          }
                                        }
                                        else {
                                          uVar3 = 0;
                                        }
                                      }
                                      else {
                                        uVar3 = 0;
                                      }
                                    }
                                    else {
                                      uVar3 = 0;
                                    }
                                  }
                                  else {
                                    uVar3 = 0;
                                  }
                                }
                                else {
                                  uVar3 = 0;
                                }
                              }
                              else {
                                uVar3 = 0;
                              }
                            }
                            else {
                              uVar3 = 0;
                            }
                          }
                          else {
                            uVar3 = 0;
                          }
                        }
                        else {
                          uVar3 = 0;
                        }
                      }
                      else {
                        uVar3 = 0;
                      }
                    }
                    else {
                      uVar3 = 0;
                    }
                  }
                  else {
                    uVar3 = 0;
                  }
                }
                else {
                  uVar3 = 0;
                }
              }
              else {
                uVar3 = 0;
              }
            }
            else {
              uVar3 = 0;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## _getGameDB

```asm
// === 08408c0a DB_LoadCharac::_getGameDB  [0x08408c0a-0x8408c2f] ===
 8408c0a:	55                   	push   %ebp
 8408c0b:	89 e5                	mov    %esp,%ebp
 8408c0d:	83 ec 18             	sub    $0x18,%esp
 8408c10:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8408c15:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8408c1c:	00 
 8408c1d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8408c24:	00 
 8408c25:	89 04 24             	mov    %eax,(%esp)
 8408c28:	e8 11 c6 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8408c2d:	c9                   	leave
 8408c2e:	c3                   	ret
 8408c2f:	90                   	nop

```

```c
// DB_LoadCharac::_getGameDB @ 0x8408c0a

/* DB_LoadCharac::_getGameDB() */

void DB_LoadCharac::_getGameDB(void)

{
  DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  return;
}

```

---

## _sendResult

```asm
// === 0840a4ce DB_LoadCharac::_sendResult  [0x0840a4ce-0x840a603] ===
 840a4ce:	55                   	push   %ebp
 840a4cf:	89 e5                	mov    %esp,%ebp
 840a4d1:	56                   	push   %esi
 840a4d2:	53                   	push   %ebx
 840a4d3:	83 ec 30             	sub    $0x30,%esp
 840a4d6:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 840a4db:	c7 44 24 08 3a 23 00 	movl   $0x233a,0x8(%esp)
 840a4e2:	00 
 840a4e3:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 840a4ea:	08 
 840a4eb:	89 04 24             	mov    %eax,(%esp)
 840a4ee:	e8 93 55 e8 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 840a4f3:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 840a4fa:	00 
 840a4fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a4ff:	8d 45 dc             	lea    -0x24(%ebp),%eax
 840a502:	89 04 24             	mov    %eax,(%esp)
 840a505:	e8 1c e7 cb ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 840a50a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 840a50d:	89 04 24             	mov    %eax,(%esp)
 840a510:	e8 31 e7 cb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 840a515:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 840a51c:	00 
 840a51d:	89 04 24             	mov    %eax,(%esp)
 840a520:	e8 31 e7 cb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 840a525:	8d 45 dc             	lea    -0x24(%ebp),%eax
 840a528:	89 04 24             	mov    %eax,(%esp)
 840a52b:	e8 16 e7 cb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 840a530:	8b 55 10             	mov    0x10(%ebp),%edx
 840a533:	89 54 24 04          	mov    %edx,0x4(%esp)
 840a537:	89 04 24             	mov    %eax,(%esp)
 840a53a:	e8 17 e7 cb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 840a53f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 840a542:	89 04 24             	mov    %eax,(%esp)
 840a545:	e8 04 e7 cb ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 840a54a:	89 04 24             	mov    %eax,(%esp)
 840a54d:	e8 c8 c7 e2 ff       	call   8236d1a <_ZN12CStreamGuard11GetInBufferI15SIG_LOAD_CHARACEEPT_v>
 840a552:	89 45 f4             	mov    %eax,-0xc(%ebp)
 840a555:	c7 44 24 08 03 07 00 	movl   $0x703,0x8(%esp)
 840a55c:	00 
 840a55d:	8b 45 14             	mov    0x14(%ebp),%eax
 840a560:	89 44 24 04          	mov    %eax,0x4(%esp)
 840a564:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840a567:	89 04 24             	mov    %eax,(%esp)
 840a56a:	e8 31 33 c7 ff       	call   807d8a0 <memcpy@plt>
 840a56f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 840a574:	8d 55 dc             	lea    -0x24(%ebp),%edx
 840a577:	89 54 24 08          	mov    %edx,0x8(%esp)
 840a57b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840a582:	00 
 840a583:	89 04 24             	mov    %eax,(%esp)
 840a586:	e8 53 6a 16 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 840a58b:	8b 45 14             	mov    0x14(%ebp),%eax
 840a58e:	8b 70 59             	mov    0x59(%eax),%esi
 840a591:	8b 45 14             	mov    0x14(%ebp),%eax
 840a594:	8b 58 04             	mov    0x4(%eax),%ebx
 840a597:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 840a59e:	00 
 840a59f:	c7 44 24 08 47 23 00 	movl   $0x2347,0x8(%esp)
 840a5a6:	00 
 840a5a7:	c7 44 24 04 80 d3 c5 	movl   $0x8c5d380,0x4(%esp)
 840a5ae:	08 
 840a5af:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 840a5b2:	89 04 24             	mov    %eax,(%esp)
 840a5b5:	e8 5e 51 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840a5ba:	89 74 24 0c          	mov    %esi,0xc(%esp)
 840a5be:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840a5c2:	c7 44 24 04 58 57 c4 	movl   $0x8c45758,0x4(%esp)
 840a5c9:	08 
 840a5ca:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 840a5cd:	89 04 24             	mov    %eax,(%esp)
 840a5d0:	e8 b3 51 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840a5d5:	eb 1b                	jmp    840a5f2 <_ZN13DB_LoadCharac11_sendResultEiiP15SIG_LOAD_CHARAC+0x124>
 840a5d7:	89 d3                	mov    %edx,%ebx
 840a5d9:	89 c6                	mov    %eax,%esi
 840a5db:	8d 45 dc             	lea    -0x24(%ebp),%eax
 840a5de:	89 04 24             	mov    %eax,(%esp)
 840a5e1:	e8 ec 22 21 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 840a5e6:	89 f0                	mov    %esi,%eax
 840a5e8:	89 da                	mov    %ebx,%edx
 840a5ea:	89 04 24             	mov    %eax,(%esp)
 840a5ed:	e8 5e 91 6d 00       	call   8ae3750 <_Unwind_Resume>
 840a5f2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 840a5f5:	89 04 24             	mov    %eax,(%esp)
 840a5f8:	e8 d5 22 21 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 840a5fd:	83 c4 30             	add    $0x30,%esp
 840a600:	5b                   	pop    %ebx
 840a601:	5e                   	pop    %esi
 840a602:	5d                   	pop    %ebp
 840a603:	c3                   	ret

```

```c
// DB_LoadCharac::_sendResult @ 0x840a4ce

/* DB_LoadCharac::_sendResult(int, int, SIG_LOAD_CHARAC*) */

void __thiscall
DB_LoadCharac::_sendResult(DB_LoadCharac *this,int param_1,int param_2,SIG_LOAD_CHARAC *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  CStreamGuard local_28 [8];
  cMyTrace local_20 [16];
  SIG_LOAD_CHARAC *local_10;
  
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x233a);
  CStreamGuard::CStreamGuard(local_28,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 0840a520 to 0840a5d4 has its CatchHandler @ 0840a5d7 */
  CStreamGuard::operator<<(pCVar4,7);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_28);
  CStreamGuard::operator<<(pCVar4,param_2);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_28);
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_CHARAC>(pCVar4);
  memcpy(local_10,param_3,0x703);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_28);
  uVar1 = *(undefined4 *)(param_3 + 0x59);
  uVar2 = *(undefined4 *)(param_3 + 4);
  cMyTrace::cMyTrace(local_20,"void DB_LoadCharac::_sendResult(int, int, SIG_LOAD_CHARAC*)",0x2347,0
                    );
  cMyTrace::operator()(local_20,"CharLastPlayTick char(%d) t(%d)",uVar2,uVar1);
  CStreamGuard::~CStreamGuard(local_28);
  return;
}

```

---

## dispatch

```asm
// === 08408a3c DB_LoadCharac::dispatch  [0x08408a3c-0x8408c09] ===
 8408a3c:	55                   	push   %ebp
 8408a3d:	89 e5                	mov    %esp,%ebp
 8408a3f:	83 ec 28             	sub    $0x28,%esp
 8408a42:	8b 45 08             	mov    0x8(%ebp),%eax
 8408a45:	8b 55 14             	mov    0x14(%ebp),%edx
 8408a48:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8408a4c:	8b 55 10             	mov    0x10(%ebp),%edx
 8408a4f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8408a53:	8b 55 0c             	mov    0xc(%ebp),%edx
 8408a56:	89 54 24 04          	mov    %edx,0x4(%esp)
 8408a5a:	89 04 24             	mov    %eax,(%esp)
 8408a5d:	e8 1a 35 ff ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 8408a62:	83 f0 01             	xor    $0x1,%eax
 8408a65:	84 c0                	test   %al,%al
 8408a67:	74 0a                	je     8408a73 <_ZN13DB_LoadCharac8dispatchEiiP6Stream+0x37>
 8408a69:	b8 00 00 00 00       	mov    $0x0,%eax
 8408a6e:	e9 95 01 00 00       	jmp    8408c08 <_ZN13DB_LoadCharac8dispatchEiiP6Stream+0x1cc>
 8408a73:	8b 45 14             	mov    0x14(%ebp),%eax
 8408a76:	89 04 24             	mov    %eax,(%esp)
 8408a79:	e8 20 7d 04 00       	call   845079e <_ZN6Stream12GetOutBufferI15SIG_LOAD_CHARACEEPT_v>
 8408a7e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8408a81:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408a84:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8408a8b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408a8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8408a92:	8b 45 08             	mov    0x8(%ebp),%eax
 8408a95:	89 04 24             	mov    %eax,(%esp)
 8408a98:	e8 57 02 00 00       	call   8408cf4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC>
 8408a9d:	83 f0 01             	xor    $0x1,%eax
 8408aa0:	84 c0                	test   %al,%al
 8408aa2:	74 2c                	je     8408ad0 <_ZN13DB_LoadCharac8dispatchEiiP6Stream+0x94>
 8408aa4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8408aab:	e8 50 cd 31 00       	call   8725800 <__cxa_allocate_exception>
 8408ab0:	89 c2                	mov    %eax,%edx
 8408ab2:	c7 02 01 00 00 00    	movl   $0x1,(%edx)
 8408ab8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8408abf:	00 
 8408ac0:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8408ac7:	09 
 8408ac8:	89 04 24             	mov    %eax,(%esp)
 8408acb:	e8 80 c1 31 00       	call   8724c50 <__cxa_throw>
 8408ad0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408ad3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8408ad7:	8b 45 08             	mov    0x8(%ebp),%eax
 8408ada:	89 04 24             	mov    %eax,(%esp)
 8408add:	e8 14 09 00 00       	call   84093f6 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC>
 8408ae2:	83 f0 01             	xor    $0x1,%eax
 8408ae5:	84 c0                	test   %al,%al
 8408ae7:	74 2c                	je     8408b15 <_ZN13DB_LoadCharac8dispatchEiiP6Stream+0xd9>
 8408ae9:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8408af0:	e8 0b cd 31 00       	call   8725800 <__cxa_allocate_exception>
 8408af5:	89 c2                	mov    %eax,%edx
 8408af7:	c7 02 03 00 00 00    	movl   $0x3,(%edx)
 8408afd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8408b04:	00 
 8408b05:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8408b0c:	09 
 8408b0d:	89 04 24             	mov    %eax,(%esp)
 8408b10:	e8 3b c1 31 00       	call   8724c50 <__cxa_throw>
 8408b15:	e8 81 36 cc ff       	call   80cc19b <_Z14G_CDataManagerv>
 8408b1a:	89 04 24             	mov    %eax,(%esp)
 8408b1d:	e8 40 80 d0 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 8408b22:	c7 44 24 04 9b 01 00 	movl   $0x19b,0x4(%esp)
 8408b29:	00 
 8408b2a:	89 04 24             	mov    %eax,(%esp)
 8408b2d:	e8 04 2f d0 ff       	call   810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>
 8408b32:	84 c0                	test   %al,%al
 8408b34:	74 6d                	je     8408ba3 <_ZN13DB_LoadCharac8dispatchEiiP6Stream+0x167>
 8408b36:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408b39:	89 44 24 04          	mov    %eax,0x4(%esp)
 8408b3d:	8b 45 08             	mov    0x8(%ebp),%eax
 8408b40:	89 04 24             	mov    %eax,(%esp)
 8408b43:	e8 e6 11 00 00       	call   8409d2e <_ZN13DB_LoadCharac21_LoadEventBringUpInfoEP15SIG_LOAD_CHARAC>
 8408b48:	83 f0 01             	xor    $0x1,%eax
 8408b4b:	84 c0                	test   %al,%al
 8408b4d:	74 54                	je     8408ba3 <_ZN13DB_LoadCharac8dispatchEiiP6Stream+0x167>
 8408b4f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8408b56:	e8 a5 cc 31 00       	call   8725800 <__cxa_allocate_exception>
 8408b5b:	89 c2                	mov    %eax,%edx
 8408b5d:	c7 02 05 00 00 00    	movl   $0x5,(%edx)
 8408b63:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8408b6a:	00 
 8408b6b:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8408b72:	09 
 8408b73:	89 04 24             	mov    %eax,(%esp)
 8408b76:	e8 d5 c0 31 00       	call   8724c50 <__cxa_throw>
 8408b7b:	83 fa 01             	cmp    $0x1,%edx
 8408b7e:	74 08                	je     8408b88 <_ZN13DB_LoadCharac8dispatchEiiP6Stream+0x14c>
 8408b80:	89 04 24             	mov    %eax,(%esp)
 8408b83:	e8 c8 ab 6d 00       	call   8ae3750 <_Unwind_Resume>
 8408b88:	89 04 24             	mov    %eax,(%esp)
 8408b8b:	e8 50 d1 31 00       	call   8725ce0 <__cxa_begin_catch>
 8408b90:	8b 00                	mov    (%eax),%eax
 8408b92:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8408b95:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408b98:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8408b9b:	89 50 08             	mov    %edx,0x8(%eax)
 8408b9e:	e8 8d d0 31 00       	call   8725c30 <__cxa_end_catch>
 8408ba3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408ba6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8408baa:	8b 45 10             	mov    0x10(%ebp),%eax
 8408bad:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408bb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8408bb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8408bb8:	8b 45 08             	mov    0x8(%ebp),%eax
 8408bbb:	89 04 24             	mov    %eax,(%esp)
 8408bbe:	e8 0b 19 00 00       	call   840a4ce <_ZN13DB_LoadCharac11_sendResultEiiP15SIG_LOAD_CHARAC>
 8408bc3:	e8 df 17 cd ff       	call   80da3a7 <_Z11G_GameWorldv>
 8408bc8:	89 04 24             	mov    %eax,(%esp)
 8408bcb:	e8 7e 50 04 00       	call   844dc4e <_ZNK9GameWorld18IsSchoolPvPChannelEv>
 8408bd0:	84 c0                	test   %al,%al
 8408bd2:	74 14                	je     8408be8 <_ZN13DB_LoadCharac8dispatchEiiP6Stream+0x1ac>
 8408bd4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408bd7:	8b 80 82 06 00 00    	mov    0x682(%eax),%eax
 8408bdd:	85 c0                	test   %eax,%eax
 8408bdf:	74 07                	je     8408be8 <_ZN13DB_LoadCharac8dispatchEiiP6Stream+0x1ac>
 8408be1:	b8 01 00 00 00       	mov    $0x1,%eax
 8408be6:	eb 05                	jmp    8408bed <_ZN13DB_LoadCharac8dispatchEiiP6Stream+0x1b1>
 8408be8:	b8 00 00 00 00       	mov    $0x0,%eax
 8408bed:	84 c0                	test   %al,%al
 8408bef:	74 12                	je     8408c03 <_ZN13DB_LoadCharac8dispatchEiiP6Stream+0x1c7>
 8408bf1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408bf4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8408bf8:	8b 45 08             	mov    0x8(%ebp),%eax
 8408bfb:	89 04 24             	mov    %eax,(%esp)
 8408bfe:	e8 2d 00 00 00       	call   8408c30 <_ZN13DB_LoadCharac19_UpdateSchoolCharacEP15SIG_LOAD_CHARAC>
 8408c03:	b8 01 00 00 00       	mov    $0x1,%eax
 8408c08:	c9                   	leave
 8408c09:	c3                   	ret

```

```c
// DB_LoadCharac::dispatch @ 0x8408a3c

/* DB_LoadCharac::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadCharac::dispatch(DB_LoadCharac *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  SIG_LOAD_CHARAC *pSVar4;
  undefined4 *puVar5;
  CDataManager *this_00;
  CEventScriptMng *this_01;
  GameWorld *this_02;
  SIG_LOAD_CHARAC *pSVar6;
  int iVar7;
  Stream *pSVar8;
  
  iVar7 = param_2;
  pSVar8 = param_3;
  cVar2 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar2 == '\x01') {
    pSVar4 = Stream::GetOutBuffer<SIG_LOAD_CHARAC>(param_3);
    *(undefined4 *)(pSVar4 + 8) = 0;
    pSVar6 = pSVar4;
                    /* try { // try from 08408a98 to 08408b7a has its CatchHandler @ 08408b7b */
    cVar2 = _getCharacInfo(this,pSVar4);
    if (cVar2 != '\x01') {
      puVar5 = (undefined4 *)__cxa_allocate_exception(4,pSVar6,iVar7,pSVar8);
      *puVar5 = 1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&int::typeinfo,0);
    }
    pSVar6 = pSVar4;
    cVar2 = _getCharacStat(this,pSVar4);
    if (cVar2 != '\x01') {
      puVar5 = (undefined4 *)__cxa_allocate_exception(4,pSVar6,iVar7,pSVar8);
      *puVar5 = 3;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&int::typeinfo,0);
    }
    this_00 = (CDataManager *)G_CDataManager();
    this_01 = (CEventScriptMng *)CDataManager::get_event_script_mng(this_00);
    cVar2 = EventClassify::CEventScriptMng::is_eventing(this_01,0x19b);
    if (cVar2 != '\0') {
      cVar2 = _LoadEventBringUpInfo(this,pSVar4);
      if (cVar2 != '\x01') {
        puVar5 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar5 = 5;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar5,&int::typeinfo,0);
      }
    }
    _sendResult(this,param_1,param_2,pSVar4);
    this_02 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsSchoolPvPChannel(this_02);
    if ((cVar2 == '\0') || (*(int *)(pSVar4 + 0x682) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      _UpdateSchoolCharac(this,pSVar4);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

