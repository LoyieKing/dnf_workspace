# DB_InsertAutoPunishSecondUser

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0842deb4 DB_InsertAutoPunishSecondUser::dispatch  [0x0842deb4-0x842e34d] ===
 842deb4:	55                   	push   %ebp
 842deb5:	89 e5                	mov    %esp,%ebp
 842deb7:	57                   	push   %edi
 842deb8:	56                   	push   %esi
 842deb9:	53                   	push   %ebx
 842deba:	81 ec 4c 01 00 00    	sub    $0x14c,%esp
 842dec0:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842dec5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842decc:	00 
 842decd:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 842ded4:	00 
 842ded5:	89 04 24             	mov    %eax,(%esp)
 842ded8:	e8 61 73 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842dedd:	89 45 dc             	mov    %eax,-0x24(%ebp)
 842dee0:	8b 45 14             	mov    0x14(%ebp),%eax
 842dee3:	89 04 24             	mov    %eax,(%esp)
 842dee6:	e8 71 49 02 00       	call   845285c <_ZN6Stream12GetOutBufferI34SIG_INSERT_AUTO_PUNISH_SECOND_USEREEPT_v>
 842deeb:	89 45 e0             	mov    %eax,-0x20(%ebp)
 842deee:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842def1:	8b 00                	mov    (%eax),%eax
 842def3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842defa:	00 
 842defb:	89 04 24             	mov    %eax,(%esp)
 842defe:	e8 48 b1 cd ff       	call   810904b <_Z14NumberToStringji>
 842df03:	89 c7                	mov    %eax,%edi
 842df05:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842df08:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 842df0c:	84 c0                	test   %al,%al
 842df0e:	74 07                	je     842df17 <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x63>
 842df10:	be 01 00 00 00       	mov    $0x1,%esi
 842df15:	eb 05                	jmp    842df1c <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x68>
 842df17:	be 00 00 00 00       	mov    $0x0,%esi
 842df1c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842df1f:	8b 48 08             	mov    0x8(%eax),%ecx
 842df22:	8b 58 0c             	mov    0xc(%eax),%ebx
 842df25:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842df28:	8b 50 0c             	mov    0xc(%eax),%edx
 842df2b:	8b 40 08             	mov    0x8(%eax),%eax
 842df2e:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 842df32:	89 74 24 18          	mov    %esi,0x18(%esp)
 842df36:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 842df3a:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 842df3e:	89 44 24 08          	mov    %eax,0x8(%esp)
 842df42:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842df46:	c7 44 24 04 b8 0d c5 	movl   $0x8c50db8,0x4(%esp)
 842df4d:	08 
 842df4e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842df51:	89 04 24             	mov    %eax,(%esp)
 842df54:	e8 67 62 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842df59:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842df60:	00 
 842df61:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842df64:	89 04 24             	mov    %eax,(%esp)
 842df67:	e8 ba 63 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842df6c:	83 f0 01             	xor    $0x1,%eax
 842df6f:	84 c0                	test   %al,%al
 842df71:	75 11                	jne    842df84 <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0xd0>
 842df73:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842df76:	89 04 24             	mov    %eax,(%esp)
 842df79:	e8 92 63 fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 842df7e:	09 d0                	or     %edx,%eax
 842df80:	85 c0                	test   %eax,%eax
 842df82:	75 07                	jne    842df8b <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0xd7>
 842df84:	b8 01 00 00 00       	mov    $0x1,%eax
 842df89:	eb 05                	jmp    842df90 <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0xdc>
 842df8b:	b8 00 00 00 00       	mov    $0x0,%eax
 842df90:	84 c0                	test   %al,%al
 842df92:	0f 84 94 00 00 00    	je     842e02c <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x178>
 842df98:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842df9b:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 842df9f:	84 c0                	test   %al,%al
 842dfa1:	74 07                	je     842dfaa <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0xf6>
 842dfa3:	bf 01 00 00 00       	mov    $0x1,%edi
 842dfa8:	eb 05                	jmp    842dfaf <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0xfb>
 842dfaa:	bf 00 00 00 00       	mov    $0x0,%edi
 842dfaf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842dfb2:	8b 50 08             	mov    0x8(%eax),%edx
 842dfb5:	8b 48 0c             	mov    0xc(%eax),%ecx
 842dfb8:	89 95 d0 fe ff ff    	mov    %edx,-0x130(%ebp)
 842dfbe:	89 8d d4 fe ff ff    	mov    %ecx,-0x12c(%ebp)
 842dfc4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842dfc7:	8b 58 08             	mov    0x8(%eax),%ebx
 842dfca:	8b 70 0c             	mov    0xc(%eax),%esi
 842dfcd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842dfd0:	8b 00                	mov    (%eax),%eax
 842dfd2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842dfd9:	00 
 842dfda:	89 04 24             	mov    %eax,(%esp)
 842dfdd:	e8 69 b0 cd ff       	call   810904b <_Z14NumberToStringji>
 842dfe2:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 842dfe6:	8b 95 d0 fe ff ff    	mov    -0x130(%ebp),%edx
 842dfec:	8b 8d d4 fe ff ff    	mov    -0x12c(%ebp),%ecx
 842dff2:	89 54 24 14          	mov    %edx,0x14(%esp)
 842dff6:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 842dffa:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 842dffe:	89 74 24 10          	mov    %esi,0x10(%esp)
 842e002:	89 44 24 08          	mov    %eax,0x8(%esp)
 842e006:	c7 44 24 04 80 0e c5 	movl   $0x8c50e80,0x4(%esp)
 842e00d:	08 
 842e00e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842e011:	89 04 24             	mov    %eax,(%esp)
 842e014:	e8 a7 61 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842e019:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842e020:	00 
 842e021:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842e024:	89 04 24             	mov    %eax,(%esp)
 842e027:	e8 fa 62 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842e02c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842e02f:	8b 40 04             	mov    0x4(%eax),%eax
 842e032:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842e039:	00 
 842e03a:	89 04 24             	mov    %eax,(%esp)
 842e03d:	e8 09 b0 cd ff       	call   810904b <_Z14NumberToStringji>
 842e042:	89 c3                	mov    %eax,%ebx
 842e044:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842e047:	8b 00                	mov    (%eax),%eax
 842e049:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842e050:	00 
 842e051:	89 04 24             	mov    %eax,(%esp)
 842e054:	e8 f2 af cd ff       	call   810904b <_Z14NumberToStringji>
 842e059:	89 c1                	mov    %eax,%ecx
 842e05b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842e05e:	8b 50 0c             	mov    0xc(%eax),%edx
 842e061:	8b 40 08             	mov    0x8(%eax),%eax
 842e064:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 842e068:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 842e06c:	89 44 24 08          	mov    %eax,0x8(%esp)
 842e070:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842e074:	c7 44 24 04 14 0f c5 	movl   $0x8c50f14,0x4(%esp)
 842e07b:	08 
 842e07c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842e07f:	89 04 24             	mov    %eax,(%esp)
 842e082:	e8 39 61 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842e087:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842e08e:	00 
 842e08f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842e092:	89 04 24             	mov    %eax,(%esp)
 842e095:	e8 8c 62 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842e09a:	83 f0 01             	xor    $0x1,%eax
 842e09d:	84 c0                	test   %al,%al
 842e09f:	75 11                	jne    842e0b2 <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x1fe>
 842e0a1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842e0a4:	89 04 24             	mov    %eax,(%esp)
 842e0a7:	e8 64 62 fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 842e0ac:	09 d0                	or     %edx,%eax
 842e0ae:	85 c0                	test   %eax,%eax
 842e0b0:	75 07                	jne    842e0b9 <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x205>
 842e0b2:	b8 01 00 00 00       	mov    $0x1,%eax
 842e0b7:	eb 05                	jmp    842e0be <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x20a>
 842e0b9:	b8 00 00 00 00       	mov    $0x0,%eax
 842e0be:	84 c0                	test   %al,%al
 842e0c0:	74 6c                	je     842e12e <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x27a>
 842e0c2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842e0c5:	8b 58 08             	mov    0x8(%eax),%ebx
 842e0c8:	8b 70 0c             	mov    0xc(%eax),%esi
 842e0cb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842e0ce:	8b 40 04             	mov    0x4(%eax),%eax
 842e0d1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842e0d8:	00 
 842e0d9:	89 04 24             	mov    %eax,(%esp)
 842e0dc:	e8 6a af cd ff       	call   810904b <_Z14NumberToStringji>
 842e0e1:	89 c7                	mov    %eax,%edi
 842e0e3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842e0e6:	8b 00                	mov    (%eax),%eax
 842e0e8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842e0ef:	00 
 842e0f0:	89 04 24             	mov    %eax,(%esp)
 842e0f3:	e8 53 af cd ff       	call   810904b <_Z14NumberToStringji>
 842e0f8:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 842e0fc:	89 74 24 14          	mov    %esi,0x14(%esp)
 842e100:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 842e104:	89 44 24 08          	mov    %eax,0x8(%esp)
 842e108:	c7 44 24 04 94 0f c5 	movl   $0x8c50f94,0x4(%esp)
 842e10f:	08 
 842e110:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842e113:	89 04 24             	mov    %eax,(%esp)
 842e116:	e8 a5 60 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842e11b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842e122:	00 
 842e123:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842e126:	89 04 24             	mov    %eax,(%esp)
 842e129:	e8 f8 61 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842e12e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842e131:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 842e135:	84 c0                	test   %al,%al
 842e137:	0f 84 00 02 00 00    	je     842e33d <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x489>
 842e13d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842e142:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842e149:	00 
 842e14a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842e151:	00 
 842e152:	89 04 24             	mov    %eax,(%esp)
 842e155:	e8 e4 70 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842e15a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 842e15d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842e160:	8b 10                	mov    (%eax),%edx
 842e162:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842e165:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 842e169:	84 c0                	test   %al,%al
 842e16b:	74 07                	je     842e174 <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x2c0>
 842e16d:	b8 02 00 00 00       	mov    $0x2,%eax
 842e172:	eb 05                	jmp    842e179 <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x2c5>
 842e174:	b8 00 00 00 00       	mov    $0x0,%eax
 842e179:	c7 44 24 10 04 00 00 	movl   $0x4,0x10(%esp)
 842e180:	00 
 842e181:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842e185:	89 44 24 08          	mov    %eax,0x8(%esp)
 842e189:	c7 44 24 04 00 10 c5 	movl   $0x8c51000,0x4(%esp)
 842e190:	08 
 842e191:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842e194:	89 04 24             	mov    %eax,(%esp)
 842e197:	e8 24 60 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842e19c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842e1a3:	00 
 842e1a4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842e1a7:	89 04 24             	mov    %eax,(%esp)
 842e1aa:	e8 77 61 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842e1af:	83 f0 01             	xor    $0x1,%eax
 842e1b2:	84 c0                	test   %al,%al
 842e1b4:	75 11                	jne    842e1c7 <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x313>
 842e1b6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842e1b9:	89 04 24             	mov    %eax,(%esp)
 842e1bc:	e8 4f 61 fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 842e1c1:	09 d0                	or     %edx,%eax
 842e1c3:	85 c0                	test   %eax,%eax
 842e1c5:	75 07                	jne    842e1ce <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x31a>
 842e1c7:	b8 01 00 00 00       	mov    $0x1,%eax
 842e1cc:	eb 05                	jmp    842e1d3 <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x31f>
 842e1ce:	b8 00 00 00 00       	mov    $0x0,%eax
 842e1d3:	84 c0                	test   %al,%al
 842e1d5:	74 73                	je     842e24a <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x396>
 842e1d7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842e1da:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 842e1de:	84 c0                	test   %al,%al
 842e1e0:	74 07                	je     842e1e9 <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x335>
 842e1e2:	bb 02 00 00 00       	mov    $0x2,%ebx
 842e1e7:	eb 05                	jmp    842e1ee <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x33a>
 842e1e9:	bb 00 00 00 00       	mov    $0x0,%ebx
 842e1ee:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842e1f1:	8b 00                	mov    (%eax),%eax
 842e1f3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842e1fa:	00 
 842e1fb:	89 04 24             	mov    %eax,(%esp)
 842e1fe:	e8 48 ae cd ff       	call   810904b <_Z14NumberToStringji>
 842e203:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 842e207:	c7 44 24 0c 04 00 00 	movl   $0x4,0xc(%esp)
 842e20e:	00 
 842e20f:	89 44 24 08          	mov    %eax,0x8(%esp)
 842e213:	c7 44 24 04 08 0a c5 	movl   $0x8c50a08,0x4(%esp)
 842e21a:	08 
 842e21b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842e21e:	89 04 24             	mov    %eax,(%esp)
 842e221:	e8 9a 5f fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842e226:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842e22d:	00 
 842e22e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842e231:	89 04 24             	mov    %eax,(%esp)
 842e234:	e8 ed 60 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842e239:	83 f0 01             	xor    $0x1,%eax
 842e23c:	84 c0                	test   %al,%al
 842e23e:	74 0a                	je     842e24a <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x396>
 842e240:	b8 00 00 00 00       	mov    $0x0,%eax
 842e245:	e9 f8 00 00 00       	jmp    842e342 <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x48e>
 842e24a:	8d 95 dd fe ff ff    	lea    -0x123(%ebp),%edx
 842e250:	bb ff 00 00 00       	mov    $0xff,%ebx
 842e255:	b8 00 00 00 00       	mov    $0x0,%eax
 842e25a:	89 d1                	mov    %edx,%ecx
 842e25c:	83 e1 01             	and    $0x1,%ecx
 842e25f:	85 c9                	test   %ecx,%ecx
 842e261:	74 08                	je     842e26b <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x3b7>
 842e263:	88 02                	mov    %al,(%edx)
 842e265:	83 c2 01             	add    $0x1,%edx
 842e268:	83 eb 01             	sub    $0x1,%ebx
 842e26b:	89 d1                	mov    %edx,%ecx
 842e26d:	83 e1 02             	and    $0x2,%ecx
 842e270:	85 c9                	test   %ecx,%ecx
 842e272:	74 09                	je     842e27d <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x3c9>
 842e274:	66 89 02             	mov    %ax,(%edx)
 842e277:	83 c2 02             	add    $0x2,%edx
 842e27a:	83 eb 02             	sub    $0x2,%ebx
 842e27d:	89 d9                	mov    %ebx,%ecx
 842e27f:	c1 e9 02             	shr    $0x2,%ecx
 842e282:	89 d7                	mov    %edx,%edi
 842e284:	f3 ab                	rep stos %eax,%es:(%edi)
 842e286:	89 fa                	mov    %edi,%edx
 842e288:	89 d9                	mov    %ebx,%ecx
 842e28a:	83 e1 02             	and    $0x2,%ecx
 842e28d:	85 c9                	test   %ecx,%ecx
 842e28f:	74 06                	je     842e297 <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x3e3>
 842e291:	66 89 02             	mov    %ax,(%edx)
 842e294:	83 c2 02             	add    $0x2,%edx
 842e297:	89 d9                	mov    %ebx,%ecx
 842e299:	83 e1 01             	and    $0x1,%ecx
 842e29c:	85 c9                	test   %ecx,%ecx
 842e29e:	74 05                	je     842e2a5 <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x3f1>
 842e2a0:	88 02                	mov    %al,(%edx)
 842e2a2:	83 c2 01             	add    $0x1,%edx
 842e2a5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842e2a8:	8b 58 08             	mov    0x8(%eax),%ebx
 842e2ab:	8b 70 0c             	mov    0xc(%eax),%esi
 842e2ae:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842e2b1:	8b 40 04             	mov    0x4(%eax),%eax
 842e2b4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842e2bb:	00 
 842e2bc:	89 04 24             	mov    %eax,(%esp)
 842e2bf:	e8 87 ad cd ff       	call   810904b <_Z14NumberToStringji>
 842e2c4:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 842e2c8:	89 74 24 10          	mov    %esi,0x10(%esp)
 842e2cc:	89 44 24 08          	mov    %eax,0x8(%esp)
 842e2d0:	c7 44 24 04 90 10 c5 	movl   $0x8c51090,0x4(%esp)
 842e2d7:	08 
 842e2d8:	8d 85 dd fe ff ff    	lea    -0x123(%ebp),%eax
 842e2de:	89 04 24             	mov    %eax,(%esp)
 842e2e1:	e8 5a 01 c5 ff       	call   807e440 <sprintf@plt>
 842e2e6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842e2e9:	8b 00                	mov    (%eax),%eax
 842e2eb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842e2f2:	00 
 842e2f3:	89 04 24             	mov    %eax,(%esp)
 842e2f6:	e8 50 ad cd ff       	call   810904b <_Z14NumberToStringji>
 842e2fb:	8d 95 dd fe ff ff    	lea    -0x123(%ebp),%edx
 842e301:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842e305:	89 44 24 08          	mov    %eax,0x8(%esp)
 842e309:	c7 44 24 04 d0 10 c5 	movl   $0x8c510d0,0x4(%esp)
 842e310:	08 
 842e311:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842e314:	89 04 24             	mov    %eax,(%esp)
 842e317:	e8 a4 5e fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842e31c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842e323:	00 
 842e324:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842e327:	89 04 24             	mov    %eax,(%esp)
 842e32a:	e8 f7 5f fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842e32f:	83 f0 01             	xor    $0x1,%eax
 842e332:	84 c0                	test   %al,%al
 842e334:	74 07                	je     842e33d <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x489>
 842e336:	b8 00 00 00 00       	mov    $0x0,%eax
 842e33b:	eb 05                	jmp    842e342 <_ZN29DB_InsertAutoPunishSecondUser8dispatchEiiP6Stream+0x48e>
 842e33d:	b8 01 00 00 00       	mov    $0x1,%eax
 842e342:	81 c4 4c 01 00 00    	add    $0x14c,%esp
 842e348:	5b                   	pop    %ebx
 842e349:	5e                   	pop    %esi
 842e34a:	5f                   	pop    %edi
 842e34b:	5d                   	pop    %ebp
 842e34c:	c3                   	ret
 842e34d:	90                   	nop

```

```c
// DB_InsertAutoPunishSecondUser::dispatch @ 0x842deb4

/* DB_InsertAutoPunishSecondUser::dispatch(int, int, Stream*) */

undefined4 DB_InsertAutoPunishSecondUser::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_INSERT_AUTO_PUNISH_SECOND_USER SVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  bool bVar10;
  byte bVar11;
  longlong lVar12;
  Stream *in_stack_00000010;
  char local_127;
  char local_126 [254];
  MySQL *local_28;
  SIG_INSERT_AUTO_PUNISH_SECOND_USER *local_24;
  MySQL *local_20;
  
  bVar11 = 0;
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_24 = Stream::GetOutBuffer<SIG_INSERT_AUTO_PUNISH_SECOND_USER>(in_stack_00000010);
  uVar5 = NumberToString(*(uint *)local_24,0);
  MySQL::set_query(local_28,
                   "upDate auto_punish_second_user set occ_time=now(),total_trade_cnt=total_trade_cnt+1,trade_cnt=trade_cnt+1,total_trade_gold=total_trade_gold+%d,trade_gold=trade_gold+%d,punish_flag=%d where m_id=%s"
                   ,*(uint *)(local_24 + 8),*(uint *)(local_24 + 0xc),*(uint *)(local_24 + 8),
                   *(uint *)(local_24 + 0xc),
                   (uint)(local_24[0x10] != (SIG_INSERT_AUTO_PUNISH_SECOND_USER)0x0),uVar5);
  cVar4 = MySQL::exec(local_28,true);
  if ((cVar4 == '\x01') && (lVar12 = MySQL::getAffectedRowCount(local_28), lVar12 != 0)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (bVar10) {
    SVar1 = local_24[0x10];
    uVar6 = *(uint *)(local_24 + 8);
    uVar8 = *(uint *)(local_24 + 0xc);
    uVar2 = *(uint *)(local_24 + 8);
    uVar3 = *(uint *)(local_24 + 0xc);
    uVar5 = NumberToString(*(uint *)local_24,0);
    MySQL::set_query(local_28,
                     "inSert into auto_punish_second_user(m_id,occ_time,total_trade_cnt,trade_cnt,total_trade_gold,trade_gold,punish_flag) values(%s,now(),1,1,%d,%d,%d)"
                     ,uVar5,uVar2,uVar3,uVar6,uVar8,
                     (uint)(SVar1 != (SIG_INSERT_AUTO_PUNISH_SECOND_USER)0x0));
    MySQL::exec(local_28,true);
  }
  uVar6 = NumberToString(*(uint *)(local_24 + 4),1);
  uVar5 = NumberToString(*(uint *)local_24,0);
  MySQL::set_query(local_28,
                   "upDate auto_punish_second_log set occ_time=now(),trade_cnt=trade_cnt+1,trade_gold=trade_gold+%d where m_id=%s and hack_m_id=%s"
                   ,*(uint *)(local_24 + 8),*(uint *)(local_24 + 0xc),uVar5,uVar6);
  cVar4 = MySQL::exec(local_28,true);
  if ((cVar4 == '\x01') && (lVar12 = MySQL::getAffectedRowCount(local_28), lVar12 != 0)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (bVar10) {
    uVar8 = *(uint *)(local_24 + 8);
    uVar6 = *(uint *)(local_24 + 0xc);
    uVar5 = NumberToString(*(uint *)(local_24 + 4),1);
    uVar7 = NumberToString(*(uint *)local_24,0);
    MySQL::set_query(local_28,
                     "inSert into auto_punish_second_log(m_id,hack_m_id,occ_time,trade_cnt,trade_gold) values(%s,%s,now(),1,%d)"
                     ,uVar7,uVar5,uVar8,uVar6);
    MySQL::exec(local_28,true);
  }
  if (local_24[0x10] != (SIG_INSERT_AUTO_PUNISH_SECOND_USER)0x0) {
    local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    if (local_24[0x10] == (SIG_INSERT_AUTO_PUNISH_SECOND_USER)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 2;
    }
    MySQL::set_query(local_20,
                     "upDate member_punish_info set occ_time=now(), start_time=now(), end_time=\'9999-12-31 23:59:59\', apply_flag=%d where m_id=%d and punish_type=%d"
                     ,uVar5,*(uint *)local_24,4,uVar6);
    cVar4 = MySQL::exec(local_20,true);
    if ((cVar4 == '\x01') && (lVar12 = MySQL::getAffectedRowCount(local_20), lVar12 != 0)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) {
      if (local_24[0x10] == (SIG_INSERT_AUTO_PUNISH_SECOND_USER)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 2;
      }
      uVar7 = NumberToString(*(uint *)local_24,0);
      MySQL::set_query(local_20,
                       "inSert into member_punish_info(m_id, punish_type, occ_time, start_time, end_time, punish_value, apply_flag) values(%s, %d, now(), now(), \'9999-12-31 23:59:59\', 0, %d)"
                       ,uVar7,4,uVar5);
      cVar4 = MySQL::exec(local_20,true);
      if (cVar4 != '\x01') {
        return 0;
      }
    }
    pcVar9 = &local_127;
    uVar6 = 0xff;
    bVar10 = ((uint)pcVar9 & 1) != 0;
    if (bVar10) {
      local_127 = '\0';
      pcVar9 = local_126;
      uVar6 = 0xfe;
    }
    if (((uint)pcVar9 & 2) != 0) {
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9 = pcVar9 + 2;
      uVar6 = uVar6 - 2;
    }
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9[2] = '\0';
      pcVar9[3] = '\0';
      pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
    }
    if ((uVar6 & 2) != 0) {
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9 = pcVar9 + 2;
    }
    if (!bVar10) {
      *pcVar9 = '\0';
    }
    uVar6 = *(uint *)(local_24 + 8);
    uVar8 = *(uint *)(local_24 + 0xc);
    uVar5 = NumberToString(*(uint *)(local_24 + 4),0);
    sprintf(&local_127,"{Auto 2nd Information-Mail}|*|ARS 2nd Punish (Trade) / %s / %d",uVar5,uVar6,
            uVar8);
    uVar5 = NumberToString(*(uint *)local_24,0);
    MySQL::set_query(local_20,
                     "inSert into member_punish_info_history(m_id, punish_type, occ_time, punish_value, start_time, end_time, admin_id, apply_flag, reason) values(%s, 4, now(), 6, now(), \'9999-12-31 23:59:59\', \'ARS\', 2, \'%s\')"
                     ,uVar5,&local_127);
    cVar4 = MySQL::exec(local_20,true);
    if (cVar4 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 0842e34e DB_InsertAutoPunishSecondUser::makeRequest  [0x0842e34e-0x842e45d] ===
 842e34e:	55                   	push   %ebp
 842e34f:	89 e5                	mov    %esp,%ebp
 842e351:	56                   	push   %esi
 842e352:	53                   	push   %ebx
 842e353:	83 ec 30             	sub    $0x30,%esp
 842e356:	8b 45 18             	mov    0x18(%ebp),%eax
 842e359:	8b 55 10             	mov    0x10(%ebp),%edx
 842e35c:	89 55 e0             	mov    %edx,-0x20(%ebp)
 842e35f:	8b 55 14             	mov    0x14(%ebp),%edx
 842e362:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 842e365:	88 45 dc             	mov    %al,-0x24(%ebp)
 842e368:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842e36d:	c7 44 24 08 f4 72 00 	movl   $0x72f4,0x8(%esp)
 842e374:	00 
 842e375:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842e37c:	08 
 842e37d:	89 04 24             	mov    %eax,(%esp)
 842e380:	e8 01 17 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842e385:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842e38c:	00 
 842e38d:	89 44 24 04          	mov    %eax,0x4(%esp)
 842e391:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842e394:	89 04 24             	mov    %eax,(%esp)
 842e397:	e8 8a a8 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842e39c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842e39f:	89 04 24             	mov    %eax,(%esp)
 842e3a2:	e8 9f a8 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842e3a7:	c7 44 24 04 0b 01 00 	movl   $0x10b,0x4(%esp)
 842e3ae:	00 
 842e3af:	89 04 24             	mov    %eax,(%esp)
 842e3b2:	e8 9f a8 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842e3b7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842e3ba:	89 04 24             	mov    %eax,(%esp)
 842e3bd:	e8 84 a8 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842e3c2:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 842e3c9:	ff 
 842e3ca:	89 04 24             	mov    %eax,(%esp)
 842e3cd:	e8 84 a8 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842e3d2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842e3d5:	89 04 24             	mov    %eax,(%esp)
 842e3d8:	e8 71 a8 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842e3dd:	89 04 24             	mov    %eax,(%esp)
 842e3e0:	e8 cb 44 02 00       	call   84528b0 <_ZN12CStreamGuard11GetInBufferI34SIG_INSERT_AUTO_PUNISH_SECOND_USEREEPT_v>
 842e3e5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842e3e8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842e3eb:	8b 55 08             	mov    0x8(%ebp),%edx
 842e3ee:	89 10                	mov    %edx,(%eax)
 842e3f0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842e3f3:	8b 55 0c             	mov    0xc(%ebp),%edx
 842e3f6:	89 50 04             	mov    %edx,0x4(%eax)
 842e3f9:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 842e3fc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842e3ff:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 842e402:	89 41 08             	mov    %eax,0x8(%ecx)
 842e405:	89 51 0c             	mov    %edx,0xc(%ecx)
 842e408:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842e40b:	0f b6 55 dc          	movzbl -0x24(%ebp),%edx
 842e40f:	88 50 10             	mov    %dl,0x10(%eax)
 842e412:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842e417:	8d 55 ec             	lea    -0x14(%ebp),%edx
 842e41a:	89 54 24 08          	mov    %edx,0x8(%esp)
 842e41e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842e425:	00 
 842e426:	89 04 24             	mov    %eax,(%esp)
 842e429:	e8 b0 2b 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842e42e:	eb 1b                	jmp    842e44b <_ZN29DB_InsertAutoPunishSecondUser11makeRequestEjjyb+0xfd>
 842e430:	89 d3                	mov    %edx,%ebx
 842e432:	89 c6                	mov    %eax,%esi
 842e434:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842e437:	89 04 24             	mov    %eax,(%esp)
 842e43a:	e8 93 e4 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842e43f:	89 f0                	mov    %esi,%eax
 842e441:	89 da                	mov    %ebx,%edx
 842e443:	89 04 24             	mov    %eax,(%esp)
 842e446:	e8 05 53 6b 00       	call   8ae3750 <_Unwind_Resume>
 842e44b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842e44e:	89 04 24             	mov    %eax,(%esp)
 842e451:	e8 7c e4 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842e456:	83 c4 30             	add    $0x30,%esp
 842e459:	5b                   	pop    %ebx
 842e45a:	5e                   	pop    %esi
 842e45b:	5d                   	pop    %ebp
 842e45c:	c3                   	ret
 842e45d:	90                   	nop

```

```c
// DB_InsertAutoPunishSecondUser::makeRequest @ 0x842e34e

/* DB_InsertAutoPunishSecondUser::makeRequest(unsigned int, unsigned int, unsigned long long, bool)
    */

void __thiscall
DB_InsertAutoPunishSecondUser::makeRequest
          (DB_InsertAutoPunishSecondUser *this,uint param_1,uint param_2,ulonglong param_3,
          bool param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_INSERT_AUTO_PUNISH_SECOND_USER *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x72f4);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842e3b2 to 0842e42d has its CatchHandler @ 0842e430 */
  CStreamGuard::operator<<(pCVar2,0x10b);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_INSERT_AUTO_PUNISH_SECOND_USER>(pCVar2);
  *(DB_InsertAutoPunishSecondUser **)local_10 = this;
  *(uint *)(local_10 + 4) = param_1;
  *(uint *)(local_10 + 8) = param_2;
  *(undefined4 *)(local_10 + 0xc) = (undefined4)param_3;
  local_10[0x10] = SUB81(param_3 >> 0x20,0);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

