# DB_CrashDownReport

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841abc6 DB_CrashDownReport::dispatch  [0x0841abc6-0x841b205] ===
 841abc6:	55                   	push   %ebp
 841abc7:	89 e5                	mov    %esp,%ebp
 841abc9:	81 ec 08 01 00 00    	sub    $0x108,%esp
 841abcf:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 841abd6:	e8 c3 10 cb ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 841abdb:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 841abe1:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 841abe7:	89 44 24 04          	mov    %eax,0x4(%esp)
 841abeb:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 841abf1:	89 04 24             	mov    %eax,(%esp)
 841abf4:	e8 67 37 c6 ff       	call   807e360 <localtime_r@plt>
 841abf9:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 841abfc:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 841abff:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 841ac05:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 841ac08:	89 04 24             	mov    %eax,(%esp)
 841ac0b:	e8 10 3c c6 ff       	call   807e820 <mktime@plt>
 841ac10:	89 45 b8             	mov    %eax,-0x48(%ebp)
 841ac13:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841ac18:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841ac1f:	00 
 841ac20:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 841ac27:	00 
 841ac28:	89 04 24             	mov    %eax,(%esp)
 841ac2b:	e8 0e a6 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841ac30:	89 45 bc             	mov    %eax,-0x44(%ebp)
 841ac33:	e8 6f f7 cb ff       	call   80da3a7 <_Z11G_GameWorldv>
 841ac38:	89 04 24             	mov    %eax,(%esp)
 841ac3b:	e8 e6 2f 03 00       	call   844dc26 <_ZN9GameWorld27getStatisticsToObserveCrashEv>
 841ac40:	89 04 24             	mov    %eax,(%esp)
 841ac43:	e8 a6 0e 1f 00       	call   860baee <_ZN24StatisticsToObserveCrash24getAbnormalDownUserCountEv>
 841ac48:	89 45 c0             	mov    %eax,-0x40(%ebp)
 841ac4b:	8b 45 c0             	mov    -0x40(%ebp),%eax
 841ac4e:	89 44 24 08          	mov    %eax,0x8(%esp)
 841ac52:	c7 44 24 04 d0 ad c4 	movl   $0x8c4add0,0x4(%esp)
 841ac59:	08 
 841ac5a:	8b 45 bc             	mov    -0x44(%ebp),%eax
 841ac5d:	89 04 24             	mov    %eax,(%esp)
 841ac60:	e8 5b 95 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841ac65:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841ac6c:	00 
 841ac6d:	8b 45 bc             	mov    -0x44(%ebp),%eax
 841ac70:	89 04 24             	mov    %eax,(%esp)
 841ac73:	e8 ae 96 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841ac78:	88 45 c7             	mov    %al,-0x39(%ebp)
 841ac7b:	0f b6 45 c7          	movzbl -0x39(%ebp),%eax
 841ac7f:	83 f0 01             	xor    $0x1,%eax
 841ac82:	84 c0                	test   %al,%al
 841ac84:	74 3c                	je     841acc2 <_ZN18DB_CrashDownReport8dispatchEiiP6Stream+0xfc>
 841ac86:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 841ac8d:	00 
 841ac8e:	c7 44 24 08 5c 4d 00 	movl   $0x4d5c,0x8(%esp)
 841ac95:	00 
 841ac96:	c7 44 24 04 80 cb c5 	movl   $0x8c5cb80,0x4(%esp)
 841ac9d:	08 
 841ac9e:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 841aca4:	89 04 24             	mov    %eax,(%esp)
 841aca7:	e8 6c 4a 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841acac:	c7 44 24 04 25 ae c4 	movl   $0x8c4ae25,0x4(%esp)
 841acb3:	08 
 841acb4:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 841acba:	89 04 24             	mov    %eax,(%esp)
 841acbd:	e8 c6 4a 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841acc2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 841acc9:	00 
 841acca:	c7 44 24 08 5f 4d 00 	movl   $0x4d5f,0x8(%esp)
 841acd1:	00 
 841acd2:	c7 44 24 04 80 cb c5 	movl   $0x8c5cb80,0x4(%esp)
 841acd9:	08 
 841acda:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 841ace0:	89 04 24             	mov    %eax,(%esp)
 841ace3:	e8 30 4a 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841ace8:	8b 45 c0             	mov    -0x40(%ebp),%eax
 841aceb:	89 44 24 08          	mov    %eax,0x8(%esp)
 841acef:	c7 44 24 04 3f ae c4 	movl   $0x8c4ae3f,0x4(%esp)
 841acf6:	08 
 841acf7:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 841acfd:	89 04 24             	mov    %eax,(%esp)
 841ad00:	e8 83 4a 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841ad05:	e8 9d f6 cb ff       	call   80da3a7 <_Z11G_GameWorldv>
 841ad0a:	89 04 24             	mov    %eax,(%esp)
 841ad0d:	e8 14 2f 03 00       	call   844dc26 <_ZN9GameWorld27getStatisticsToObserveCrashEv>
 841ad12:	89 04 24             	mov    %eax,(%esp)
 841ad15:	e8 b6 27 03 00       	call   844d4d0 <_ZN24StatisticsToObserveCrash4lockEv>
 841ad1a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841ad1f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841ad26:	00 
 841ad27:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 841ad2e:	00 
 841ad2f:	89 04 24             	mov    %eax,(%esp)
 841ad32:	e8 07 a5 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841ad37:	89 45 c8             	mov    %eax,-0x38(%ebp)
 841ad3a:	e8 68 f6 cb ff       	call   80da3a7 <_Z11G_GameWorldv>
 841ad3f:	89 04 24             	mov    %eax,(%esp)
 841ad42:	e8 df 2e 03 00       	call   844dc26 <_ZN9GameWorld27getStatisticsToObserveCrashEv>
 841ad47:	8d 50 34             	lea    0x34(%eax),%edx
 841ad4a:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 841ad50:	89 54 24 04          	mov    %edx,0x4(%esp)
 841ad54:	89 04 24             	mov    %eax,(%esp)
 841ad57:	e8 44 72 d3 ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 841ad5c:	83 ec 04             	sub    $0x4,%esp
 841ad5f:	e8 43 f6 cb ff       	call   80da3a7 <_Z11G_GameWorldv>
 841ad64:	89 04 24             	mov    %eax,(%esp)
 841ad67:	e8 ba 2e 03 00       	call   844dc26 <_ZN9GameWorld27getStatisticsToObserveCrashEv>
 841ad6c:	8d 50 34             	lea    0x34(%eax),%edx
 841ad6f:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 841ad75:	89 54 24 04          	mov    %edx,0x4(%esp)
 841ad79:	89 04 24             	mov    %eax,(%esp)
 841ad7c:	e8 99 25 cb ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 841ad81:	83 ec 04             	sub    $0x4,%esp
 841ad84:	e9 0e 01 00 00       	jmp    841ae97 <_ZN18DB_CrashDownReport8dispatchEiiP6Stream+0x2d1>
 841ad89:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 841ad8f:	89 04 24             	mov    %eax,(%esp)
 841ad92:	e8 e3 8b d7 ff       	call   819397a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEdeEv>
 841ad97:	8b 00                	mov    (%eax),%eax
 841ad99:	89 45 cc             	mov    %eax,-0x34(%ebp)
 841ad9c:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 841ada2:	89 04 24             	mov    %eax,(%esp)
 841ada5:	e8 d0 8b d7 ff       	call   819397a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEdeEv>
 841adaa:	8b 40 04             	mov    0x4(%eax),%eax
 841adad:	89 45 d0             	mov    %eax,-0x30(%ebp)
 841adb0:	8b 45 d0             	mov    -0x30(%ebp),%eax
 841adb3:	89 44 24 10          	mov    %eax,0x10(%esp)
 841adb7:	8b 45 cc             	mov    -0x34(%ebp),%eax
 841adba:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841adbe:	8b 45 b8             	mov    -0x48(%ebp),%eax
 841adc1:	89 44 24 08          	mov    %eax,0x8(%esp)
 841adc5:	c7 44 24 04 58 ae c4 	movl   $0x8c4ae58,0x4(%esp)
 841adcc:	08 
 841adcd:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841add0:	89 04 24             	mov    %eax,(%esp)
 841add3:	e8 e8 93 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841add8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841addf:	00 
 841ade0:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841ade3:	89 04 24             	mov    %eax,(%esp)
 841ade6:	e8 3b 95 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841adeb:	88 45 d6             	mov    %al,-0x2a(%ebp)
 841adee:	0f b6 45 d6          	movzbl -0x2a(%ebp),%eax
 841adf2:	83 f0 01             	xor    $0x1,%eax
 841adf5:	84 c0                	test   %al,%al
 841adf7:	74 49                	je     841ae42 <_ZN18DB_CrashDownReport8dispatchEiiP6Stream+0x27c>
 841adf9:	8b 45 cc             	mov    -0x34(%ebp),%eax
 841adfc:	89 44 24 10          	mov    %eax,0x10(%esp)
 841ae00:	8b 45 d0             	mov    -0x30(%ebp),%eax
 841ae03:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841ae07:	8b 45 b8             	mov    -0x48(%ebp),%eax
 841ae0a:	89 44 24 08          	mov    %eax,0x8(%esp)
 841ae0e:	c7 44 24 04 c0 ae c4 	movl   $0x8c4aec0,0x4(%esp)
 841ae15:	08 
 841ae16:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841ae19:	89 04 24             	mov    %eax,(%esp)
 841ae1c:	e8 9f 93 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841ae21:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841ae28:	00 
 841ae29:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841ae2c:	89 04 24             	mov    %eax,(%esp)
 841ae2f:	e8 f2 94 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841ae34:	88 45 d7             	mov    %al,-0x29(%ebp)
 841ae37:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 841ae3b:	83 f0 01             	xor    $0x1,%eax
 841ae3e:	84 c0                	test   %al,%al
 841ae40:	75 46                	jne    841ae88 <_ZN18DB_CrashDownReport8dispatchEiiP6Stream+0x2c2>
 841ae42:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 841ae49:	00 
 841ae4a:	c7 44 24 08 7d 4d 00 	movl   $0x4d7d,0x8(%esp)
 841ae51:	00 
 841ae52:	c7 44 24 04 80 cb c5 	movl   $0x8c5cb80,0x4(%esp)
 841ae59:	08 
 841ae5a:	8d 45 84             	lea    -0x7c(%ebp),%eax
 841ae5d:	89 04 24             	mov    %eax,(%esp)
 841ae60:	e8 b3 48 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841ae65:	8b 45 d0             	mov    -0x30(%ebp),%eax
 841ae68:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841ae6c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 841ae6f:	89 44 24 08          	mov    %eax,0x8(%esp)
 841ae73:	c7 44 24 04 38 af c4 	movl   $0x8c4af38,0x4(%esp)
 841ae7a:	08 
 841ae7b:	8d 45 84             	lea    -0x7c(%ebp),%eax
 841ae7e:	89 04 24             	mov    %eax,(%esp)
 841ae81:	e8 02 49 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841ae86:	eb 01                	jmp    841ae89 <_ZN18DB_CrashDownReport8dispatchEiiP6Stream+0x2c3>
 841ae88:	90                   	nop
 841ae89:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 841ae8f:	89 04 24             	mov    %eax,(%esp)
 841ae92:	e8 af f8 cb ff       	call   80da746 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEv>
 841ae97:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 841ae9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 841aea1:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 841aea7:	89 04 24             	mov    %eax,(%esp)
 841aeaa:	e8 19 f5 cb ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 841aeaf:	84 c0                	test   %al,%al
 841aeb1:	0f 85 d2 fe ff ff    	jne    841ad89 <_ZN18DB_CrashDownReport8dispatchEiiP6Stream+0x1c3>
 841aeb7:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841aebc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841aec3:	00 
 841aec4:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 841aecb:	00 
 841aecc:	89 04 24             	mov    %eax,(%esp)
 841aecf:	e8 6a a3 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841aed4:	89 45 d8             	mov    %eax,-0x28(%ebp)
 841aed7:	e8 cb f4 cb ff       	call   80da3a7 <_Z11G_GameWorldv>
 841aedc:	89 04 24             	mov    %eax,(%esp)
 841aedf:	e8 42 2d 03 00       	call   844dc26 <_ZN9GameWorld27getStatisticsToObserveCrashEv>
 841aee4:	8d 50 1c             	lea    0x1c(%eax),%edx
 841aee7:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 841aeed:	89 54 24 04          	mov    %edx,0x4(%esp)
 841aef1:	89 04 24             	mov    %eax,(%esp)
 841aef4:	e8 a7 70 d3 ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 841aef9:	83 ec 04             	sub    $0x4,%esp
 841aefc:	e8 a6 f4 cb ff       	call   80da3a7 <_Z11G_GameWorldv>
 841af01:	89 04 24             	mov    %eax,(%esp)
 841af04:	e8 1d 2d 03 00       	call   844dc26 <_ZN9GameWorld27getStatisticsToObserveCrashEv>
 841af09:	8d 50 1c             	lea    0x1c(%eax),%edx
 841af0c:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 841af12:	89 54 24 04          	mov    %edx,0x4(%esp)
 841af16:	89 04 24             	mov    %eax,(%esp)
 841af19:	e8 fc 23 cb ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 841af1e:	83 ec 04             	sub    $0x4,%esp
 841af21:	e9 00 01 00 00       	jmp    841b026 <_ZN18DB_CrashDownReport8dispatchEiiP6Stream+0x460>
 841af26:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 841af2c:	89 04 24             	mov    %eax,(%esp)
 841af2f:	e8 46 8a d7 ff       	call   819397a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEdeEv>
 841af34:	8b 00                	mov    (%eax),%eax
 841af36:	89 45 dc             	mov    %eax,-0x24(%ebp)
 841af39:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 841af3f:	89 04 24             	mov    %eax,(%esp)
 841af42:	e8 33 8a d7 ff       	call   819397a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEdeEv>
 841af47:	8b 40 04             	mov    0x4(%eax),%eax
 841af4a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 841af4d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841af50:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841af54:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841af57:	89 44 24 08          	mov    %eax,0x8(%esp)
 841af5b:	c7 44 24 04 68 af c4 	movl   $0x8c4af68,0x4(%esp)
 841af62:	08 
 841af63:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841af66:	89 04 24             	mov    %eax,(%esp)
 841af69:	e8 52 92 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841af6e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841af75:	00 
 841af76:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841af79:	89 04 24             	mov    %eax,(%esp)
 841af7c:	e8 a5 93 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841af81:	88 45 e6             	mov    %al,-0x1a(%ebp)
 841af84:	0f b6 45 e6          	movzbl -0x1a(%ebp),%eax
 841af88:	83 f0 01             	xor    $0x1,%eax
 841af8b:	84 c0                	test   %al,%al
 841af8d:	74 42                	je     841afd1 <_ZN18DB_CrashDownReport8dispatchEiiP6Stream+0x40b>
 841af8f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841af92:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841af96:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841af99:	89 44 24 08          	mov    %eax,0x8(%esp)
 841af9d:	c7 44 24 04 d0 af c4 	movl   $0x8c4afd0,0x4(%esp)
 841afa4:	08 
 841afa5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841afa8:	89 04 24             	mov    %eax,(%esp)
 841afab:	e8 10 92 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841afb0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841afb7:	00 
 841afb8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841afbb:	89 04 24             	mov    %eax,(%esp)
 841afbe:	e8 63 93 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841afc3:	88 45 e7             	mov    %al,-0x19(%ebp)
 841afc6:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 841afca:	83 f0 01             	xor    $0x1,%eax
 841afcd:	84 c0                	test   %al,%al
 841afcf:	75 46                	jne    841b017 <_ZN18DB_CrashDownReport8dispatchEiiP6Stream+0x451>
 841afd1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 841afd8:	00 
 841afd9:	c7 44 24 08 98 4d 00 	movl   $0x4d98,0x8(%esp)
 841afe0:	00 
 841afe1:	c7 44 24 04 80 cb c5 	movl   $0x8c5cb80,0x4(%esp)
 841afe8:	08 
 841afe9:	8d 45 94             	lea    -0x6c(%ebp),%eax
 841afec:	89 04 24             	mov    %eax,(%esp)
 841afef:	e8 24 47 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841aff4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841aff7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841affb:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841affe:	89 44 24 08          	mov    %eax,0x8(%esp)
 841b002:	c7 44 24 04 48 b0 c4 	movl   $0x8c4b048,0x4(%esp)
 841b009:	08 
 841b00a:	8d 45 94             	lea    -0x6c(%ebp),%eax
 841b00d:	89 04 24             	mov    %eax,(%esp)
 841b010:	e8 73 47 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841b015:	eb 01                	jmp    841b018 <_ZN18DB_CrashDownReport8dispatchEiiP6Stream+0x452>
 841b017:	90                   	nop
 841b018:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 841b01e:	89 04 24             	mov    %eax,(%esp)
 841b021:	e8 20 f7 cb ff       	call   80da746 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEv>
 841b026:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 841b02c:	89 44 24 04          	mov    %eax,0x4(%esp)
 841b030:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 841b036:	89 04 24             	mov    %eax,(%esp)
 841b039:	e8 8a f3 cb ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 841b03e:	84 c0                	test   %al,%al
 841b040:	0f 85 e0 fe ff ff    	jne    841af26 <_ZN18DB_CrashDownReport8dispatchEiiP6Stream+0x360>
 841b046:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841b04b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841b052:	00 
 841b053:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 841b05a:	00 
 841b05b:	89 04 24             	mov    %eax,(%esp)
 841b05e:	e8 db a1 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841b063:	89 45 e8             	mov    %eax,-0x18(%ebp)
 841b066:	e8 3c f3 cb ff       	call   80da3a7 <_Z11G_GameWorldv>
 841b06b:	89 04 24             	mov    %eax,(%esp)
 841b06e:	e8 b3 2b 03 00       	call   844dc26 <_ZN9GameWorld27getStatisticsToObserveCrashEv>
 841b073:	8d 50 4c             	lea    0x4c(%eax),%edx
 841b076:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 841b07c:	89 54 24 04          	mov    %edx,0x4(%esp)
 841b080:	89 04 24             	mov    %eax,(%esp)
 841b083:	e8 18 6f d3 ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 841b088:	83 ec 04             	sub    $0x4,%esp
 841b08b:	e8 17 f3 cb ff       	call   80da3a7 <_Z11G_GameWorldv>
 841b090:	89 04 24             	mov    %eax,(%esp)
 841b093:	e8 8e 2b 03 00       	call   844dc26 <_ZN9GameWorld27getStatisticsToObserveCrashEv>
 841b098:	8d 50 4c             	lea    0x4c(%eax),%edx
 841b09b:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 841b0a1:	89 54 24 04          	mov    %edx,0x4(%esp)
 841b0a5:	89 04 24             	mov    %eax,(%esp)
 841b0a8:	e8 6d 22 cb ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 841b0ad:	83 ec 04             	sub    $0x4,%esp
 841b0b0:	e9 00 01 00 00       	jmp    841b1b5 <_ZN18DB_CrashDownReport8dispatchEiiP6Stream+0x5ef>
 841b0b5:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 841b0bb:	89 04 24             	mov    %eax,(%esp)
 841b0be:	e8 b7 88 d7 ff       	call   819397a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEdeEv>
 841b0c3:	8b 00                	mov    (%eax),%eax
 841b0c5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 841b0c8:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 841b0ce:	89 04 24             	mov    %eax,(%esp)
 841b0d1:	e8 a4 88 d7 ff       	call   819397a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEdeEv>
 841b0d6:	8b 40 04             	mov    0x4(%eax),%eax
 841b0d9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 841b0dc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841b0df:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841b0e3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841b0e6:	89 44 24 08          	mov    %eax,0x8(%esp)
 841b0ea:	c7 44 24 04 74 b0 c4 	movl   $0x8c4b074,0x4(%esp)
 841b0f1:	08 
 841b0f2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 841b0f5:	89 04 24             	mov    %eax,(%esp)
 841b0f8:	e8 c3 90 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841b0fd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841b104:	00 
 841b105:	8b 45 e8             	mov    -0x18(%ebp),%eax
 841b108:	89 04 24             	mov    %eax,(%esp)
 841b10b:	e8 16 92 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841b110:	88 45 f6             	mov    %al,-0xa(%ebp)
 841b113:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
 841b117:	83 f0 01             	xor    $0x1,%eax
 841b11a:	84 c0                	test   %al,%al
 841b11c:	74 42                	je     841b160 <_ZN18DB_CrashDownReport8dispatchEiiP6Stream+0x59a>
 841b11e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841b121:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841b125:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841b128:	89 44 24 08          	mov    %eax,0x8(%esp)
 841b12c:	c7 44 24 04 dc b0 c4 	movl   $0x8c4b0dc,0x4(%esp)
 841b133:	08 
 841b134:	8b 45 e8             	mov    -0x18(%ebp),%eax
 841b137:	89 04 24             	mov    %eax,(%esp)
 841b13a:	e8 81 90 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841b13f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841b146:	00 
 841b147:	8b 45 e8             	mov    -0x18(%ebp),%eax
 841b14a:	89 04 24             	mov    %eax,(%esp)
 841b14d:	e8 d4 91 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841b152:	88 45 f7             	mov    %al,-0x9(%ebp)
 841b155:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 841b159:	83 f0 01             	xor    $0x1,%eax
 841b15c:	84 c0                	test   %al,%al
 841b15e:	75 46                	jne    841b1a6 <_ZN18DB_CrashDownReport8dispatchEiiP6Stream+0x5e0>
 841b160:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 841b167:	00 
 841b168:	c7 44 24 08 b2 4d 00 	movl   $0x4db2,0x8(%esp)
 841b16f:	00 
 841b170:	c7 44 24 04 80 cb c5 	movl   $0x8c5cb80,0x4(%esp)
 841b177:	08 
 841b178:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 841b17b:	89 04 24             	mov    %eax,(%esp)
 841b17e:	e8 95 45 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841b183:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841b186:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841b18a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841b18d:	89 44 24 08          	mov    %eax,0x8(%esp)
 841b191:	c7 44 24 04 58 b1 c4 	movl   $0x8c4b158,0x4(%esp)
 841b198:	08 
 841b199:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 841b19c:	89 04 24             	mov    %eax,(%esp)
 841b19f:	e8 e4 45 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841b1a4:	eb 01                	jmp    841b1a7 <_ZN18DB_CrashDownReport8dispatchEiiP6Stream+0x5e1>
 841b1a6:	90                   	nop
 841b1a7:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 841b1ad:	89 04 24             	mov    %eax,(%esp)
 841b1b0:	e8 91 f5 cb ff       	call   80da746 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEv>
 841b1b5:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 841b1bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 841b1bf:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 841b1c5:	89 04 24             	mov    %eax,(%esp)
 841b1c8:	e8 fb f1 cb ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 841b1cd:	84 c0                	test   %al,%al
 841b1cf:	0f 85 e0 fe ff ff    	jne    841b0b5 <_ZN18DB_CrashDownReport8dispatchEiiP6Stream+0x4ef>
 841b1d5:	e8 cd f1 cb ff       	call   80da3a7 <_Z11G_GameWorldv>
 841b1da:	89 04 24             	mov    %eax,(%esp)
 841b1dd:	e8 44 2a 03 00       	call   844dc26 <_ZN9GameWorld27getStatisticsToObserveCrashEv>
 841b1e2:	89 04 24             	mov    %eax,(%esp)
 841b1e5:	e8 fc 22 03 00       	call   844d4e6 <_ZN24StatisticsToObserveCrash6unlockEv>
 841b1ea:	e8 b8 f1 cb ff       	call   80da3a7 <_Z11G_GameWorldv>
 841b1ef:	89 04 24             	mov    %eax,(%esp)
 841b1f2:	e8 2f 2a 03 00       	call   844dc26 <_ZN9GameWorld27getStatisticsToObserveCrashEv>
 841b1f7:	89 04 24             	mov    %eax,(%esp)
 841b1fa:	e8 6f 08 1f 00       	call   860ba6e <_ZN24StatisticsToObserveCrash5resetEv>
 841b1ff:	b8 01 00 00 00       	mov    $0x1,%eax
 841b204:	c9                   	leave
 841b205:	c3                   	ret

```

```c
// DB_CrashDownReport::dispatch @ 0x841abc6

/* DB_CrashDownReport::dispatch(int, int, Stream*) */

undefined4 DB_CrashDownReport::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  GameWorld *pGVar2;
  StatisticsToObserveCrash *pSVar3;
  undefined4 *puVar4;
  int iVar5;
  tm local_e8;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_bc [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_b8 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_b4 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_b0 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_ac [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_a8 [4];
  time_t local_a4;
  cMyTrace local_a0 [16];
  cMyTrace local_90 [16];
  cMyTrace local_80 [16];
  cMyTrace local_70 [16];
  cMyTrace local_60 [16];
  tm *local_50;
  time_t local_4c;
  MySQL *local_48;
  undefined4 local_44;
  char local_3d;
  MySQL *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  char local_2e;
  char local_2d;
  MySQL *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_1e;
  char local_1d;
  MySQL *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  char local_e;
  char local_d;
  
  local_a4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_50 = localtime_r(&local_a4,&local_e8);
  local_50->tm_sec = 0;
  local_4c = mktime(local_50);
  local_48 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pGVar2 = (GameWorld *)G_GameWorld();
  pSVar3 = (StatisticsToObserveCrash *)GameWorld::getStatisticsToObserveCrash(pGVar2);
  local_44 = StatisticsToObserveCrash::getAbnormalDownUserCount(pSVar3);
  MySQL::set_query(local_48,
                   "upDate client_down set occ_count = occ_count+%d where occ_date = cast(now() as date)"
                   ,local_44);
  local_3d = MySQL::exec(local_48,true);
  if (local_3d != '\x01') {
    cMyTrace::cMyTrace(local_a0,"virtual bool DB_CrashDownReport::dispatch(int, int, Stream*)",
                       0x4d5c,5);
    cMyTrace::operator()(local_a0,"upDate client_down failed");
  }
  cMyTrace::cMyTrace(local_90,"virtual bool DB_CrashDownReport::dispatch(int, int, Stream*)",0x4d5f,
                     0);
  cMyTrace::operator()(local_90,"abnormal down user : %d",local_44);
  pGVar2 = (GameWorld *)G_GameWorld();
  pSVar3 = (StatisticsToObserveCrash *)GameWorld::getStatisticsToObserveCrash(pGVar2);
  StatisticsToObserveCrash::lock(pSVar3);
  local_3c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsToObserveCrash(pGVar2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_a8);
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsToObserveCrash(pGVar2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_ac);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_a8,
                       (_Rb_tree_iterator *)local_ac);
    if (cVar1 == '\0') break;
    puVar4 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_a8);
    local_38 = *puVar4;
    iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_a8);
    local_34 = *(undefined4 *)(iVar5 + 4);
    MySQL::set_query(local_3c,
                     "inSert into crash_down_by_dungeon(occ_time,dungeon_index,down_count) values(from_unixtime(%d),%d,%d)"
                     ,local_4c,local_38,local_34);
    local_2e = MySQL::exec(local_3c,true);
    if (local_2e == '\x01') {
LAB_0841ae42:
      cMyTrace::cMyTrace(local_80,"virtual bool DB_CrashDownReport::dispatch(int, int, Stream*)",
                         0x4d7d,0);
      cMyTrace::operator()
                (local_80,"abnormal down user by dungeon : %d DUNGEON %d",local_38,local_34);
    }
    else {
      MySQL::set_query(local_3c,
                       "upDate crash_down_by_dungeon set down_count = down_count + %d where occ_time = from_unixtime(%d) and dungeon_index = %d"
                       ,local_4c,local_34,local_38);
      local_2d = MySQL::exec(local_3c,true);
      if (local_2d == '\x01') goto LAB_0841ae42;
    }
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_a8);
  }
  local_2c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsToObserveCrash(pGVar2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_b0);
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsToObserveCrash(pGVar2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_b4);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_b0,
                       (_Rb_tree_iterator *)local_b4);
    if (cVar1 == '\0') break;
    puVar4 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_b0);
    local_28 = *puVar4;
    iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_b0);
    local_24 = *(undefined4 *)(iVar5 + 4);
    MySQL::set_query(local_2c,
                     "inSert into crash_down_by_packet(occ_date,packet_index,down_count) values(cast(now() as date),%d,%d)"
                     ,local_28,local_24);
    local_1e = MySQL::exec(local_2c,true);
    if (local_1e == '\x01') {
LAB_0841afd1:
      cMyTrace::cMyTrace(local_70,"virtual bool DB_CrashDownReport::dispatch(int, int, Stream*)",
                         0x4d98,0);
      cMyTrace::operator()(local_70,"abnormal down user by packet : %d PACKET %d",local_28,local_24)
      ;
    }
    else {
      MySQL::set_query(local_2c,
                       "upDate crash_down_by_packet set down_count = down_count + %d where occ_date = cast(now() as date) and packet_index = %d"
                       ,local_24,local_28);
      local_1d = MySQL::exec(local_2c,true);
      if (local_1d == '\x01') goto LAB_0841afd1;
    }
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_b0);
  }
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsToObserveCrash(pGVar2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_b8);
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsToObserveCrash(pGVar2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_bc);
  do {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_b8,
                       (_Rb_tree_iterator *)local_bc);
    if (cVar1 == '\0') {
      pGVar2 = (GameWorld *)G_GameWorld();
      pSVar3 = (StatisticsToObserveCrash *)GameWorld::getStatisticsToObserveCrash(pGVar2);
      StatisticsToObserveCrash::unlock(pSVar3);
      pGVar2 = (GameWorld *)G_GameWorld();
      pSVar3 = (StatisticsToObserveCrash *)GameWorld::getStatisticsToObserveCrash(pGVar2);
      StatisticsToObserveCrash::reset(pSVar3);
      return 1;
    }
    puVar4 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_b8);
    local_18 = *puVar4;
    iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_b8);
    local_14 = *(undefined4 *)(iVar5 + 4);
    MySQL::set_query(local_1c,
                     "inSert into crash_down_by_playstatus(occ_date,play_status,down_count) values(cast(now() as date),%d,%d)"
                     ,local_18,local_14);
    local_e = MySQL::exec(local_1c,true);
    if (local_e == '\x01') {
LAB_0841b160:
      cMyTrace::cMyTrace(local_60,"virtual bool DB_CrashDownReport::dispatch(int, int, Stream*)",
                         0x4db2,0);
      cMyTrace::operator()
                (local_60,"abnormal down user by playerstatus : %d PLAYERSTATUS %d",local_18,
                 local_14);
    }
    else {
      MySQL::set_query(local_1c,
                       "upDate crash_down_by_playstatus set down_count = down_count + %d where occ_date = cast(now() as date) and play_status = %d"
                       ,local_14,local_18);
      local_d = MySQL::exec(local_1c,true);
      if (local_d == '\x01') goto LAB_0841b160;
    }
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_b8);
  } while( true );
}

```

