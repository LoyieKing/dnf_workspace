# CDungeon

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 22

---

## ChooseRandomMap

```asm
// === 0834bf56 CDungeon::ChooseRandomMap  [0x0834bf56-0x834c759] ===
 834bf56:	55                   	push   %ebp
 834bf57:	89 e5                	mov    %esp,%ebp
 834bf59:	53                   	push   %ebx
 834bf5a:	81 ec a4 00 00 00    	sub    $0xa4,%esp
 834bf60:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 834bf64:	78 0d                	js     834bf73 <_ZNK8CDungeon15ChooseRandomMapEiii+0x1d>
 834bf66:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 834bf6a:	78 07                	js     834bf73 <_ZNK8CDungeon15ChooseRandomMapEiii+0x1d>
 834bf6c:	8b 45 14             	mov    0x14(%ebp),%eax
 834bf6f:	85 c0                	test   %eax,%eax
 834bf71:	79 55                	jns    834bfc8 <_ZNK8CDungeon15ChooseRandomMapEiii+0x72>
 834bf73:	8b 55 14             	mov    0x14(%ebp),%edx
 834bf76:	8b 45 08             	mov    0x8(%ebp),%eax
 834bf79:	8b 40 08             	mov    0x8(%eax),%eax
 834bf7c:	89 54 24 20          	mov    %edx,0x20(%esp)
 834bf80:	8b 55 10             	mov    0x10(%ebp),%edx
 834bf83:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 834bf87:	8b 55 0c             	mov    0xc(%ebp),%edx
 834bf8a:	89 54 24 18          	mov    %edx,0x18(%esp)
 834bf8e:	89 44 24 14          	mov    %eax,0x14(%esp)
 834bf92:	c7 44 24 10 1c f9 c2 	movl   $0x8c2f91c,0x10(%esp)
 834bf99:	08 
 834bf9a:	c7 44 24 0c 1b 07 00 	movl   $0x71b,0xc(%esp)
 834bfa1:	00 
 834bfa2:	c7 44 24 08 40 49 c3 	movl   $0x8c34940,0x8(%esp)
 834bfa9:	08 
 834bfaa:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 834bfb1:	08 
 834bfb2:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 834bfb9:	e8 4c 7c 78 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 834bfbe:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 834bfc3:	e9 8c 07 00 00       	jmp    834c754 <_ZNK8CDungeon15ChooseRandomMapEiii+0x7fe>
 834bfc8:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 834bfcf:	8d 45 b0             	lea    -0x50(%ebp),%eax
 834bfd2:	89 04 24             	mov    %eax,(%esp)
 834bfd5:	e8 ee e1 03 00       	call   838a1c8 <_ZNSt4pairISt23_Rb_tree_const_iteratorIS_IKiP4CMapEES5_EC1Ev>
 834bfda:	8d 45 ac             	lea    -0x54(%ebp),%eax
 834bfdd:	89 04 24             	mov    %eax,(%esp)
 834bfe0:	e8 05 e2 03 00       	call   838a1ea <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiP4CMapEEC1Ev>
 834bfe5:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 834bfec:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 834bff0:	0f 85 13 02 00 00    	jne    834c209 <_ZNK8CDungeon15ChooseRandomMapEiii+0x2b3>
 834bff6:	8b 45 14             	mov    0x14(%ebp),%eax
 834bff9:	85 c0                	test   %eax,%eax
 834bffb:	0f 85 98 01 00 00    	jne    834c199 <_ZNK8CDungeon15ChooseRandomMapEiii+0x243>
 834c001:	8b 55 10             	mov    0x10(%ebp),%edx
 834c004:	89 d0                	mov    %edx,%eax
 834c006:	01 c0                	add    %eax,%eax
 834c008:	01 d0                	add    %edx,%eax
 834c00a:	c1 e0 03             	shl    $0x3,%eax
 834c00d:	05 20 03 00 00       	add    $0x320,%eax
 834c012:	03 45 08             	add    0x8(%ebp),%eax
 834c015:	83 c0 04             	add    $0x4,%eax
 834c018:	89 04 24             	mov    %eax,(%esp)
 834c01b:	e8 d8 e1 03 00       	call   838a1f8 <_ZNKSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 834c020:	85 c0                	test   %eax,%eax
 834c022:	0f 94 c0             	sete   %al
 834c025:	84 c0                	test   %al,%al
 834c027:	74 55                	je     834c07e <_ZNK8CDungeon15ChooseRandomMapEiii+0x128>
 834c029:	8b 55 14             	mov    0x14(%ebp),%edx
 834c02c:	8b 45 08             	mov    0x8(%ebp),%eax
 834c02f:	8b 40 08             	mov    0x8(%eax),%eax
 834c032:	89 54 24 20          	mov    %edx,0x20(%esp)
 834c036:	8b 55 10             	mov    0x10(%ebp),%edx
 834c039:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 834c03d:	8b 55 0c             	mov    0xc(%ebp),%edx
 834c040:	89 54 24 18          	mov    %edx,0x18(%esp)
 834c044:	89 44 24 14          	mov    %eax,0x14(%esp)
 834c048:	c7 44 24 10 90 f9 c2 	movl   $0x8c2f990,0x10(%esp)
 834c04f:	08 
 834c050:	c7 44 24 0c 2c 07 00 	movl   $0x72c,0xc(%esp)
 834c057:	00 
 834c058:	c7 44 24 08 40 49 c3 	movl   $0x8c34940,0x8(%esp)
 834c05f:	08 
 834c060:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 834c067:	08 
 834c068:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 834c06f:	e8 96 7b 78 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 834c074:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 834c079:	e9 d6 06 00 00       	jmp    834c754 <_ZNK8CDungeon15ChooseRandomMapEiii+0x7fe>
 834c07e:	8b 55 10             	mov    0x10(%ebp),%edx
 834c081:	89 d0                	mov    %edx,%eax
 834c083:	01 c0                	add    %eax,%eax
 834c085:	01 d0                	add    %edx,%eax
 834c087:	c1 e0 03             	shl    $0x3,%eax
 834c08a:	05 20 03 00 00       	add    $0x320,%eax
 834c08f:	03 45 08             	add    0x8(%ebp),%eax
 834c092:	8d 50 04             	lea    0x4(%eax),%edx
 834c095:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 834c098:	89 54 24 04          	mov    %edx,0x4(%esp)
 834c09c:	89 04 24             	mov    %eax,(%esp)
 834c09f:	e8 68 e1 03 00       	call   838a20c <_ZNKSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 834c0a4:	83 ec 04             	sub    $0x4,%esp
 834c0a7:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 834c0aa:	89 45 ac             	mov    %eax,-0x54(%ebp)
 834c0ad:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 834c0b4:	eb 21                	jmp    834c0d7 <_ZNK8CDungeon15ChooseRandomMapEiii+0x181>
 834c0b6:	8d 45 b8             	lea    -0x48(%ebp),%eax
 834c0b9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 834c0c0:	00 
 834c0c1:	8d 55 ac             	lea    -0x54(%ebp),%edx
 834c0c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 834c0c8:	89 04 24             	mov    %eax,(%esp)
 834c0cb:	e8 62 e1 03 00       	call   838a232 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiP4CMapEEppEi>
 834c0d0:	83 ec 04             	sub    $0x4,%esp
 834c0d3:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 834c0d7:	e8 c4 1b d3 ff       	call   807dca0 <rand@plt>
 834c0dc:	89 c3                	mov    %eax,%ebx
 834c0de:	8b 55 10             	mov    0x10(%ebp),%edx
 834c0e1:	89 d0                	mov    %edx,%eax
 834c0e3:	01 c0                	add    %eax,%eax
 834c0e5:	01 d0                	add    %edx,%eax
 834c0e7:	c1 e0 03             	shl    $0x3,%eax
 834c0ea:	05 20 03 00 00       	add    $0x320,%eax
 834c0ef:	03 45 08             	add    0x8(%ebp),%eax
 834c0f2:	83 c0 04             	add    $0x4,%eax
 834c0f5:	89 04 24             	mov    %eax,(%esp)
 834c0f8:	e8 fb e0 03 00       	call   838a1f8 <_ZNKSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 834c0fd:	89 45 94             	mov    %eax,-0x6c(%ebp)
 834c100:	89 d8                	mov    %ebx,%eax
 834c102:	ba 00 00 00 00       	mov    $0x0,%edx
 834c107:	f7 75 94             	divl   -0x6c(%ebp)
 834c10a:	89 d1                	mov    %edx,%ecx
 834c10c:	89 c8                	mov    %ecx,%eax
 834c10e:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 834c111:	0f 97 c0             	seta   %al
 834c114:	84 c0                	test   %al,%al
 834c116:	75 9e                	jne    834c0b6 <_ZNK8CDungeon15ChooseRandomMapEiii+0x160>
 834c118:	8d 45 ac             	lea    -0x54(%ebp),%eax
 834c11b:	89 04 24             	mov    %eax,(%esp)
 834c11e:	e8 4d e1 03 00       	call   838a270 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiP4CMapEEptEv>
 834c123:	8b 40 04             	mov    0x4(%eax),%eax
 834c126:	89 45 e0             	mov    %eax,-0x20(%ebp)
 834c129:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834c12c:	89 04 24             	mov    %eax,(%esp)
 834c12f:	e8 42 86 de ff       	call   8134776 <_ZNK4CMap9get_indexEv>
 834c134:	83 f8 ff             	cmp    $0xffffffff,%eax
 834c137:	0f 94 c0             	sete   %al
 834c13a:	84 c0                	test   %al,%al
 834c13c:	74 4b                	je     834c189 <_ZNK8CDungeon15ChooseRandomMapEiii+0x233>
 834c13e:	8b 55 14             	mov    0x14(%ebp),%edx
 834c141:	8b 45 08             	mov    0x8(%ebp),%eax
 834c144:	8b 40 08             	mov    0x8(%eax),%eax
 834c147:	89 54 24 20          	mov    %edx,0x20(%esp)
 834c14b:	8b 55 10             	mov    0x10(%ebp),%edx
 834c14e:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 834c152:	8b 55 0c             	mov    0xc(%ebp),%edx
 834c155:	89 54 24 18          	mov    %edx,0x18(%esp)
 834c159:	89 44 24 14          	mov    %eax,0x14(%esp)
 834c15d:	c7 44 24 10 0c fa c2 	movl   $0x8c2fa0c,0x10(%esp)
 834c164:	08 
 834c165:	c7 44 24 0c 36 07 00 	movl   $0x736,0xc(%esp)
 834c16c:	00 
 834c16d:	c7 44 24 08 40 49 c3 	movl   $0x8c34940,0x8(%esp)
 834c174:	08 
 834c175:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 834c17c:	08 
 834c17d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 834c184:	e8 81 7a 78 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 834c189:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834c18c:	89 04 24             	mov    %eax,(%esp)
 834c18f:	e8 e2 85 de ff       	call   8134776 <_ZNK4CMap9get_indexEv>
 834c194:	e9 bb 05 00 00       	jmp    834c754 <_ZNK8CDungeon15ChooseRandomMapEiii+0x7fe>
 834c199:	8b 55 10             	mov    0x10(%ebp),%edx
 834c19c:	89 d0                	mov    %edx,%eax
 834c19e:	01 c0                	add    %eax,%eax
 834c1a0:	01 d0                	add    %edx,%eax
 834c1a2:	c1 e0 03             	shl    $0x3,%eax
 834c1a5:	05 20 03 00 00       	add    $0x320,%eax
 834c1aa:	03 45 08             	add    0x8(%ebp),%eax
 834c1ad:	8d 48 04             	lea    0x4(%eax),%ecx
 834c1b0:	8d 45 bc             	lea    -0x44(%ebp),%eax
 834c1b3:	8d 55 14             	lea    0x14(%ebp),%edx
 834c1b6:	89 54 24 08          	mov    %edx,0x8(%esp)
 834c1ba:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834c1be:	89 04 24             	mov    %eax,(%esp)
 834c1c1:	e8 b8 e0 03 00       	call   838a27e <_ZNKSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE11equal_rangeERS5_>
 834c1c6:	83 ec 04             	sub    $0x4,%esp
 834c1c9:	8d 45 bc             	lea    -0x44(%ebp),%eax
 834c1cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 834c1d0:	8d 45 b0             	lea    -0x50(%ebp),%eax
 834c1d3:	89 04 24             	mov    %eax,(%esp)
 834c1d6:	e8 cf e0 03 00       	call   838a2aa <_ZNSt4pairISt23_Rb_tree_const_iteratorIS_IKiP4CMapEES5_EaSEOS6_>
 834c1db:	8b 55 10             	mov    0x10(%ebp),%edx
 834c1de:	89 d0                	mov    %edx,%eax
 834c1e0:	01 c0                	add    %eax,%eax
 834c1e2:	01 d0                	add    %edx,%eax
 834c1e4:	c1 e0 03             	shl    $0x3,%eax
 834c1e7:	05 20 03 00 00       	add    $0x320,%eax
 834c1ec:	03 45 08             	add    0x8(%ebp),%eax
 834c1ef:	8d 50 04             	lea    0x4(%eax),%edx
 834c1f2:	8d 45 14             	lea    0x14(%ebp),%eax
 834c1f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 834c1f9:	89 14 24             	mov    %edx,(%esp)
 834c1fc:	e8 dd e0 03 00       	call   838a2de <_ZNKSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE5countERS5_>
 834c201:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 834c204:	e9 2b 04 00 00       	jmp    834c634 <_ZNK8CDungeon15ChooseRandomMapEiii+0x6de>
 834c209:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 834c20d:	0f 85 13 02 00 00    	jne    834c426 <_ZNK8CDungeon15ChooseRandomMapEiii+0x4d0>
 834c213:	8b 45 14             	mov    0x14(%ebp),%eax
 834c216:	85 c0                	test   %eax,%eax
 834c218:	0f 85 98 01 00 00    	jne    834c3b6 <_ZNK8CDungeon15ChooseRandomMapEiii+0x460>
 834c21e:	8b 55 10             	mov    0x10(%ebp),%edx
 834c221:	89 d0                	mov    %edx,%eax
 834c223:	01 c0                	add    %eax,%eax
 834c225:	01 d0                	add    %edx,%eax
 834c227:	c1 e0 03             	shl    $0x3,%eax
 834c22a:	05 a0 04 00 00       	add    $0x4a0,%eax
 834c22f:	03 45 08             	add    0x8(%ebp),%eax
 834c232:	83 c0 04             	add    $0x4,%eax
 834c235:	89 04 24             	mov    %eax,(%esp)
 834c238:	e8 bb df 03 00       	call   838a1f8 <_ZNKSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 834c23d:	85 c0                	test   %eax,%eax
 834c23f:	0f 94 c0             	sete   %al
 834c242:	84 c0                	test   %al,%al
 834c244:	74 55                	je     834c29b <_ZNK8CDungeon15ChooseRandomMapEiii+0x345>
 834c246:	8b 55 14             	mov    0x14(%ebp),%edx
 834c249:	8b 45 08             	mov    0x8(%ebp),%eax
 834c24c:	8b 40 08             	mov    0x8(%eax),%eax
 834c24f:	89 54 24 20          	mov    %edx,0x20(%esp)
 834c253:	8b 55 10             	mov    0x10(%ebp),%edx
 834c256:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 834c25a:	8b 55 0c             	mov    0xc(%ebp),%edx
 834c25d:	89 54 24 18          	mov    %edx,0x18(%esp)
 834c261:	89 44 24 14          	mov    %eax,0x14(%esp)
 834c265:	c7 44 24 10 80 fa c2 	movl   $0x8c2fa80,0x10(%esp)
 834c26c:	08 
 834c26d:	c7 44 24 0c 45 07 00 	movl   $0x745,0xc(%esp)
 834c274:	00 
 834c275:	c7 44 24 08 40 49 c3 	movl   $0x8c34940,0x8(%esp)
 834c27c:	08 
 834c27d:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 834c284:	08 
 834c285:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 834c28c:	e8 79 79 78 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 834c291:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 834c296:	e9 b9 04 00 00       	jmp    834c754 <_ZNK8CDungeon15ChooseRandomMapEiii+0x7fe>
 834c29b:	8b 55 10             	mov    0x10(%ebp),%edx
 834c29e:	89 d0                	mov    %edx,%eax
 834c2a0:	01 c0                	add    %eax,%eax
 834c2a2:	01 d0                	add    %edx,%eax
 834c2a4:	c1 e0 03             	shl    $0x3,%eax
 834c2a7:	05 a0 04 00 00       	add    $0x4a0,%eax
 834c2ac:	03 45 08             	add    0x8(%ebp),%eax
 834c2af:	8d 50 04             	lea    0x4(%eax),%edx
 834c2b2:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 834c2b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 834c2b9:	89 04 24             	mov    %eax,(%esp)
 834c2bc:	e8 4b df 03 00       	call   838a20c <_ZNKSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 834c2c1:	83 ec 04             	sub    $0x4,%esp
 834c2c4:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 834c2c7:	89 45 ac             	mov    %eax,-0x54(%ebp)
 834c2ca:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 834c2d1:	eb 21                	jmp    834c2f4 <_ZNK8CDungeon15ChooseRandomMapEiii+0x39e>
 834c2d3:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 834c2d6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 834c2dd:	00 
 834c2de:	8d 55 ac             	lea    -0x54(%ebp),%edx
 834c2e1:	89 54 24 04          	mov    %edx,0x4(%esp)
 834c2e5:	89 04 24             	mov    %eax,(%esp)
 834c2e8:	e8 45 df 03 00       	call   838a232 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiP4CMapEEppEi>
 834c2ed:	83 ec 04             	sub    $0x4,%esp
 834c2f0:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 834c2f4:	e8 a7 19 d3 ff       	call   807dca0 <rand@plt>
 834c2f9:	89 c3                	mov    %eax,%ebx
 834c2fb:	8b 55 10             	mov    0x10(%ebp),%edx
 834c2fe:	89 d0                	mov    %edx,%eax
 834c300:	01 c0                	add    %eax,%eax
 834c302:	01 d0                	add    %edx,%eax
 834c304:	c1 e0 03             	shl    $0x3,%eax
 834c307:	05 a0 04 00 00       	add    $0x4a0,%eax
 834c30c:	03 45 08             	add    0x8(%ebp),%eax
 834c30f:	83 c0 04             	add    $0x4,%eax
 834c312:	89 04 24             	mov    %eax,(%esp)
 834c315:	e8 de de 03 00       	call   838a1f8 <_ZNKSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 834c31a:	89 45 94             	mov    %eax,-0x6c(%ebp)
 834c31d:	89 d8                	mov    %ebx,%eax
 834c31f:	ba 00 00 00 00       	mov    $0x0,%edx
 834c324:	f7 75 94             	divl   -0x6c(%ebp)
 834c327:	89 d1                	mov    %edx,%ecx
 834c329:	89 c8                	mov    %ecx,%eax
 834c32b:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 834c32e:	0f 97 c0             	seta   %al
 834c331:	84 c0                	test   %al,%al
 834c333:	75 9e                	jne    834c2d3 <_ZNK8CDungeon15ChooseRandomMapEiii+0x37d>
 834c335:	8d 45 ac             	lea    -0x54(%ebp),%eax
 834c338:	89 04 24             	mov    %eax,(%esp)
 834c33b:	e8 30 df 03 00       	call   838a270 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiP4CMapEEptEv>
 834c340:	8b 40 04             	mov    0x4(%eax),%eax
 834c343:	89 45 e0             	mov    %eax,-0x20(%ebp)
 834c346:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834c349:	89 04 24             	mov    %eax,(%esp)
 834c34c:	e8 25 84 de ff       	call   8134776 <_ZNK4CMap9get_indexEv>
 834c351:	83 f8 ff             	cmp    $0xffffffff,%eax
 834c354:	0f 94 c0             	sete   %al
 834c357:	84 c0                	test   %al,%al
 834c359:	74 4b                	je     834c3a6 <_ZNK8CDungeon15ChooseRandomMapEiii+0x450>
 834c35b:	8b 55 14             	mov    0x14(%ebp),%edx
 834c35e:	8b 45 08             	mov    0x8(%ebp),%eax
 834c361:	8b 40 08             	mov    0x8(%eax),%eax
 834c364:	89 54 24 20          	mov    %edx,0x20(%esp)
 834c368:	8b 55 10             	mov    0x10(%ebp),%edx
 834c36b:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 834c36f:	8b 55 0c             	mov    0xc(%ebp),%edx
 834c372:	89 54 24 18          	mov    %edx,0x18(%esp)
 834c376:	89 44 24 14          	mov    %eax,0x14(%esp)
 834c37a:	c7 44 24 10 0c fa c2 	movl   $0x8c2fa0c,0x10(%esp)
 834c381:	08 
 834c382:	c7 44 24 0c 4f 07 00 	movl   $0x74f,0xc(%esp)
 834c389:	00 
 834c38a:	c7 44 24 08 40 49 c3 	movl   $0x8c34940,0x8(%esp)
 834c391:	08 
 834c392:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 834c399:	08 
 834c39a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 834c3a1:	e8 64 78 78 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 834c3a6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834c3a9:	89 04 24             	mov    %eax,(%esp)
 834c3ac:	e8 c5 83 de ff       	call   8134776 <_ZNK4CMap9get_indexEv>
 834c3b1:	e9 9e 03 00 00       	jmp    834c754 <_ZNK8CDungeon15ChooseRandomMapEiii+0x7fe>
 834c3b6:	8b 55 10             	mov    0x10(%ebp),%edx
 834c3b9:	89 d0                	mov    %edx,%eax
 834c3bb:	01 c0                	add    %eax,%eax
 834c3bd:	01 d0                	add    %edx,%eax
 834c3bf:	c1 e0 03             	shl    $0x3,%eax
 834c3c2:	05 a0 04 00 00       	add    $0x4a0,%eax
 834c3c7:	03 45 08             	add    0x8(%ebp),%eax
 834c3ca:	8d 48 04             	lea    0x4(%eax),%ecx
 834c3cd:	8d 45 c8             	lea    -0x38(%ebp),%eax
 834c3d0:	8d 55 14             	lea    0x14(%ebp),%edx
 834c3d3:	89 54 24 08          	mov    %edx,0x8(%esp)
 834c3d7:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834c3db:	89 04 24             	mov    %eax,(%esp)
 834c3de:	e8 9b de 03 00       	call   838a27e <_ZNKSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE11equal_rangeERS5_>
 834c3e3:	83 ec 04             	sub    $0x4,%esp
 834c3e6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 834c3e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 834c3ed:	8d 45 b0             	lea    -0x50(%ebp),%eax
 834c3f0:	89 04 24             	mov    %eax,(%esp)
 834c3f3:	e8 b2 de 03 00       	call   838a2aa <_ZNSt4pairISt23_Rb_tree_const_iteratorIS_IKiP4CMapEES5_EaSEOS6_>
 834c3f8:	8b 55 10             	mov    0x10(%ebp),%edx
 834c3fb:	89 d0                	mov    %edx,%eax
 834c3fd:	01 c0                	add    %eax,%eax
 834c3ff:	01 d0                	add    %edx,%eax
 834c401:	c1 e0 03             	shl    $0x3,%eax
 834c404:	05 a0 04 00 00       	add    $0x4a0,%eax
 834c409:	03 45 08             	add    0x8(%ebp),%eax
 834c40c:	8d 50 04             	lea    0x4(%eax),%edx
 834c40f:	8d 45 14             	lea    0x14(%ebp),%eax
 834c412:	89 44 24 04          	mov    %eax,0x4(%esp)
 834c416:	89 14 24             	mov    %edx,(%esp)
 834c419:	e8 c0 de 03 00       	call   838a2de <_ZNKSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE5countERS5_>
 834c41e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 834c421:	e9 0e 02 00 00       	jmp    834c634 <_ZNK8CDungeon15ChooseRandomMapEiii+0x6de>
 834c426:	8b 45 14             	mov    0x14(%ebp),%eax
 834c429:	85 c0                	test   %eax,%eax
 834c42b:	0f 85 98 01 00 00    	jne    834c5c9 <_ZNK8CDungeon15ChooseRandomMapEiii+0x673>
 834c431:	8b 55 10             	mov    0x10(%ebp),%edx
 834c434:	89 d0                	mov    %edx,%eax
 834c436:	01 c0                	add    %eax,%eax
 834c438:	01 d0                	add    %edx,%eax
 834c43a:	c1 e0 03             	shl    $0x3,%eax
 834c43d:	05 a0 01 00 00       	add    $0x1a0,%eax
 834c442:	03 45 08             	add    0x8(%ebp),%eax
 834c445:	83 c0 04             	add    $0x4,%eax
 834c448:	89 04 24             	mov    %eax,(%esp)
 834c44b:	e8 a8 dd 03 00       	call   838a1f8 <_ZNKSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 834c450:	85 c0                	test   %eax,%eax
 834c452:	0f 94 c0             	sete   %al
 834c455:	84 c0                	test   %al,%al
 834c457:	74 55                	je     834c4ae <_ZNK8CDungeon15ChooseRandomMapEiii+0x558>
 834c459:	8b 55 14             	mov    0x14(%ebp),%edx
 834c45c:	8b 45 08             	mov    0x8(%ebp),%eax
 834c45f:	8b 40 08             	mov    0x8(%eax),%eax
 834c462:	89 54 24 20          	mov    %edx,0x20(%esp)
 834c466:	8b 55 10             	mov    0x10(%ebp),%edx
 834c469:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 834c46d:	8b 55 0c             	mov    0xc(%ebp),%edx
 834c470:	89 54 24 18          	mov    %edx,0x18(%esp)
 834c474:	89 44 24 14          	mov    %eax,0x14(%esp)
 834c478:	c7 44 24 10 fc fa c2 	movl   $0x8c2fafc,0x10(%esp)
 834c47f:	08 
 834c480:	c7 44 24 0c 5e 07 00 	movl   $0x75e,0xc(%esp)
 834c487:	00 
 834c488:	c7 44 24 08 40 49 c3 	movl   $0x8c34940,0x8(%esp)
 834c48f:	08 
 834c490:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 834c497:	08 
 834c498:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 834c49f:	e8 66 77 78 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 834c4a4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 834c4a9:	e9 a6 02 00 00       	jmp    834c754 <_ZNK8CDungeon15ChooseRandomMapEiii+0x7fe>
 834c4ae:	8b 55 10             	mov    0x10(%ebp),%edx
 834c4b1:	89 d0                	mov    %edx,%eax
 834c4b3:	01 c0                	add    %eax,%eax
 834c4b5:	01 d0                	add    %edx,%eax
 834c4b7:	c1 e0 03             	shl    $0x3,%eax
 834c4ba:	05 a0 01 00 00       	add    $0x1a0,%eax
 834c4bf:	03 45 08             	add    0x8(%ebp),%eax
 834c4c2:	8d 50 04             	lea    0x4(%eax),%edx
 834c4c5:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 834c4c8:	89 54 24 04          	mov    %edx,0x4(%esp)
 834c4cc:	89 04 24             	mov    %eax,(%esp)
 834c4cf:	e8 38 dd 03 00       	call   838a20c <_ZNKSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 834c4d4:	83 ec 04             	sub    $0x4,%esp
 834c4d7:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 834c4da:	89 45 ac             	mov    %eax,-0x54(%ebp)
 834c4dd:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 834c4e4:	eb 21                	jmp    834c507 <_ZNK8CDungeon15ChooseRandomMapEiii+0x5b1>
 834c4e6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 834c4e9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 834c4f0:	00 
 834c4f1:	8d 55 ac             	lea    -0x54(%ebp),%edx
 834c4f4:	89 54 24 04          	mov    %edx,0x4(%esp)
 834c4f8:	89 04 24             	mov    %eax,(%esp)
 834c4fb:	e8 32 dd 03 00       	call   838a232 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiP4CMapEEppEi>
 834c500:	83 ec 04             	sub    $0x4,%esp
 834c503:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 834c507:	e8 94 17 d3 ff       	call   807dca0 <rand@plt>
 834c50c:	89 c3                	mov    %eax,%ebx
 834c50e:	8b 55 10             	mov    0x10(%ebp),%edx
 834c511:	89 d0                	mov    %edx,%eax
 834c513:	01 c0                	add    %eax,%eax
 834c515:	01 d0                	add    %edx,%eax
 834c517:	c1 e0 03             	shl    $0x3,%eax
 834c51a:	05 a0 01 00 00       	add    $0x1a0,%eax
 834c51f:	03 45 08             	add    0x8(%ebp),%eax
 834c522:	83 c0 04             	add    $0x4,%eax
 834c525:	89 04 24             	mov    %eax,(%esp)
 834c528:	e8 cb dc 03 00       	call   838a1f8 <_ZNKSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 834c52d:	89 45 94             	mov    %eax,-0x6c(%ebp)
 834c530:	89 d8                	mov    %ebx,%eax
 834c532:	ba 00 00 00 00       	mov    $0x0,%edx
 834c537:	f7 75 94             	divl   -0x6c(%ebp)
 834c53a:	89 d1                	mov    %edx,%ecx
 834c53c:	89 c8                	mov    %ecx,%eax
 834c53e:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 834c541:	0f 97 c0             	seta   %al
 834c544:	84 c0                	test   %al,%al
 834c546:	75 9e                	jne    834c4e6 <_ZNK8CDungeon15ChooseRandomMapEiii+0x590>
 834c548:	8d 45 ac             	lea    -0x54(%ebp),%eax
 834c54b:	89 04 24             	mov    %eax,(%esp)
 834c54e:	e8 1d dd 03 00       	call   838a270 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiP4CMapEEptEv>
 834c553:	8b 40 04             	mov    0x4(%eax),%eax
 834c556:	89 45 e0             	mov    %eax,-0x20(%ebp)
 834c559:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834c55c:	89 04 24             	mov    %eax,(%esp)
 834c55f:	e8 12 82 de ff       	call   8134776 <_ZNK4CMap9get_indexEv>
 834c564:	83 f8 ff             	cmp    $0xffffffff,%eax
 834c567:	0f 94 c0             	sete   %al
 834c56a:	84 c0                	test   %al,%al
 834c56c:	74 4b                	je     834c5b9 <_ZNK8CDungeon15ChooseRandomMapEiii+0x663>
 834c56e:	8b 55 14             	mov    0x14(%ebp),%edx
 834c571:	8b 45 08             	mov    0x8(%ebp),%eax
 834c574:	8b 40 08             	mov    0x8(%eax),%eax
 834c577:	89 54 24 20          	mov    %edx,0x20(%esp)
 834c57b:	8b 55 10             	mov    0x10(%ebp),%edx
 834c57e:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 834c582:	8b 55 0c             	mov    0xc(%ebp),%edx
 834c585:	89 54 24 18          	mov    %edx,0x18(%esp)
 834c589:	89 44 24 14          	mov    %eax,0x14(%esp)
 834c58d:	c7 44 24 10 74 fb c2 	movl   $0x8c2fb74,0x10(%esp)
 834c594:	08 
 834c595:	c7 44 24 0c 68 07 00 	movl   $0x768,0xc(%esp)
 834c59c:	00 
 834c59d:	c7 44 24 08 40 49 c3 	movl   $0x8c34940,0x8(%esp)
 834c5a4:	08 
 834c5a5:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 834c5ac:	08 
 834c5ad:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 834c5b4:	e8 51 76 78 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 834c5b9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834c5bc:	89 04 24             	mov    %eax,(%esp)
 834c5bf:	e8 b2 81 de ff       	call   8134776 <_ZNK4CMap9get_indexEv>
 834c5c4:	e9 8b 01 00 00       	jmp    834c754 <_ZNK8CDungeon15ChooseRandomMapEiii+0x7fe>
 834c5c9:	8b 55 10             	mov    0x10(%ebp),%edx
 834c5cc:	89 d0                	mov    %edx,%eax
 834c5ce:	01 c0                	add    %eax,%eax
 834c5d0:	01 d0                	add    %edx,%eax
 834c5d2:	c1 e0 03             	shl    $0x3,%eax
 834c5d5:	05 a0 01 00 00       	add    $0x1a0,%eax
 834c5da:	03 45 08             	add    0x8(%ebp),%eax
 834c5dd:	8d 48 04             	lea    0x4(%eax),%ecx
 834c5e0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 834c5e3:	8d 55 14             	lea    0x14(%ebp),%edx
 834c5e6:	89 54 24 08          	mov    %edx,0x8(%esp)
 834c5ea:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834c5ee:	89 04 24             	mov    %eax,(%esp)
 834c5f1:	e8 88 dc 03 00       	call   838a27e <_ZNKSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE11equal_rangeERS5_>
 834c5f6:	83 ec 04             	sub    $0x4,%esp
 834c5f9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 834c5fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 834c600:	8d 45 b0             	lea    -0x50(%ebp),%eax
 834c603:	89 04 24             	mov    %eax,(%esp)
 834c606:	e8 9f dc 03 00       	call   838a2aa <_ZNSt4pairISt23_Rb_tree_const_iteratorIS_IKiP4CMapEES5_EaSEOS6_>
 834c60b:	8b 55 10             	mov    0x10(%ebp),%edx
 834c60e:	89 d0                	mov    %edx,%eax
 834c610:	01 c0                	add    %eax,%eax
 834c612:	01 d0                	add    %edx,%eax
 834c614:	c1 e0 03             	shl    $0x3,%eax
 834c617:	05 a0 01 00 00       	add    $0x1a0,%eax
 834c61c:	03 45 08             	add    0x8(%ebp),%eax
 834c61f:	8d 50 04             	lea    0x4(%eax),%edx
 834c622:	8d 45 14             	lea    0x14(%ebp),%eax
 834c625:	89 44 24 04          	mov    %eax,0x4(%esp)
 834c629:	89 14 24             	mov    %edx,(%esp)
 834c62c:	e8 ad dc 03 00       	call   838a2de <_ZNKSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE5countERS5_>
 834c631:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 834c634:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 834c638:	75 55                	jne    834c68f <_ZNK8CDungeon15ChooseRandomMapEiii+0x739>
 834c63a:	8b 55 14             	mov    0x14(%ebp),%edx
 834c63d:	8b 45 08             	mov    0x8(%ebp),%eax
 834c640:	8b 40 08             	mov    0x8(%eax),%eax
 834c643:	89 54 24 20          	mov    %edx,0x20(%esp)
 834c647:	8b 55 10             	mov    0x10(%ebp),%edx
 834c64a:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 834c64e:	8b 55 0c             	mov    0xc(%ebp),%edx
 834c651:	89 54 24 18          	mov    %edx,0x18(%esp)
 834c655:	89 44 24 14          	mov    %eax,0x14(%esp)
 834c659:	c7 44 24 10 e8 fb c2 	movl   $0x8c2fbe8,0x10(%esp)
 834c660:	08 
 834c661:	c7 44 24 0c 7b 07 00 	movl   $0x77b,0xc(%esp)
 834c668:	00 
 834c669:	c7 44 24 08 40 49 c3 	movl   $0x8c34940,0x8(%esp)
 834c670:	08 
 834c671:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 834c678:	08 
 834c679:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 834c680:	e8 85 75 78 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 834c685:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 834c68a:	e9 c5 00 00 00       	jmp    834c754 <_ZNK8CDungeon15ChooseRandomMapEiii+0x7fe>
 834c68f:	8b 45 b0             	mov    -0x50(%ebp),%eax
 834c692:	89 45 a8             	mov    %eax,-0x58(%ebp)
 834c695:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 834c69c:	eb 21                	jmp    834c6bf <_ZNK8CDungeon15ChooseRandomMapEiii+0x769>
 834c69e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834c6a1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 834c6a8:	00 
 834c6a9:	8d 55 a8             	lea    -0x58(%ebp),%edx
 834c6ac:	89 54 24 04          	mov    %edx,0x4(%esp)
 834c6b0:	89 04 24             	mov    %eax,(%esp)
 834c6b3:	e8 7a db 03 00       	call   838a232 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiP4CMapEEppEi>
 834c6b8:	83 ec 04             	sub    $0x4,%esp
 834c6bb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 834c6bf:	e8 dc 15 d3 ff       	call   807dca0 <rand@plt>
 834c6c4:	89 c2                	mov    %eax,%edx
 834c6c6:	c1 fa 1f             	sar    $0x1f,%edx
 834c6c9:	f7 7d e4             	idivl  -0x1c(%ebp)
 834c6cc:	89 d0                	mov    %edx,%eax
 834c6ce:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 834c6d1:	0f 9f c0             	setg   %al
 834c6d4:	84 c0                	test   %al,%al
 834c6d6:	75 c6                	jne    834c69e <_ZNK8CDungeon15ChooseRandomMapEiii+0x748>
 834c6d8:	8d 45 a8             	lea    -0x58(%ebp),%eax
 834c6db:	89 04 24             	mov    %eax,(%esp)
 834c6de:	e8 8d db 03 00       	call   838a270 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiP4CMapEEptEv>
 834c6e3:	8b 40 04             	mov    0x4(%eax),%eax
 834c6e6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 834c6e9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834c6ec:	89 04 24             	mov    %eax,(%esp)
 834c6ef:	e8 82 80 de ff       	call   8134776 <_ZNK4CMap9get_indexEv>
 834c6f4:	83 f8 ff             	cmp    $0xffffffff,%eax
 834c6f7:	0f 94 c0             	sete   %al
 834c6fa:	84 c0                	test   %al,%al
 834c6fc:	74 4b                	je     834c749 <_ZNK8CDungeon15ChooseRandomMapEiii+0x7f3>
 834c6fe:	8b 55 14             	mov    0x14(%ebp),%edx
 834c701:	8b 45 08             	mov    0x8(%ebp),%eax
 834c704:	8b 40 08             	mov    0x8(%eax),%eax
 834c707:	89 54 24 20          	mov    %edx,0x20(%esp)
 834c70b:	8b 55 10             	mov    0x10(%ebp),%edx
 834c70e:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 834c712:	8b 55 0c             	mov    0xc(%ebp),%edx
 834c715:	89 54 24 18          	mov    %edx,0x18(%esp)
 834c719:	89 44 24 14          	mov    %eax,0x14(%esp)
 834c71d:	c7 44 24 10 6c fc c2 	movl   $0x8c2fc6c,0x10(%esp)
 834c724:	08 
 834c725:	c7 44 24 0c 86 07 00 	movl   $0x786,0xc(%esp)
 834c72c:	00 
 834c72d:	c7 44 24 08 40 49 c3 	movl   $0x8c34940,0x8(%esp)
 834c734:	08 
 834c735:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 834c73c:	08 
 834c73d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 834c744:	e8 c1 74 78 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 834c749:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834c74c:	89 04 24             	mov    %eax,(%esp)
 834c74f:	e8 22 80 de ff       	call   8134776 <_ZNK4CMap9get_indexEv>
 834c754:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 834c757:	c9                   	leave
 834c758:	c3                   	ret
 834c759:	90                   	nop

```

```c
// CDungeon::ChooseRandomMap @ 0x834bf56

/* CDungeon::ChooseRandomMap(int, int, int) const */

undefined4 __thiscall CDungeon::ChooseRandomMap(CDungeon *this,int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54 [2];
  _Rb_tree_const_iterator<std::pair<int_const,CMap*>> local_4c [4];
  int local_48 [2];
  _Rb_tree_const_iterator<std::pair<int_const,CMap*>> local_40 [4];
  int local_3c [2];
  _Rb_tree_const_iterator<std::pair<int_const,CMap*>> local_34 [4];
  int local_30 [2];
  _Rb_tree_const_iterator<std::pair<int_const,CMap*>> local_28 [4];
  CMap *local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  
  if (((param_1 < 0) || (param_2 < 0)) || (param_3 < 0)) {
    LogManager::logFormat
              (1,"data_manager.cpp","int CDungeon::ChooseRandomMap(int, int, int) const",0x71b,
               "CDungeon::ChooseRandomMap [1](Dungeon Index(%d))(map_type(%d) < 0 || direction(%d) < 0 || entrance(%d) < 0)==false"
               ,*(undefined4 *)(this + 8),param_1,param_2,param_3);
    uVar1 = 0xffffffff;
  }
  else {
    local_24 = (CMap *)0x0;
    std::
    pair<std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>,std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>>
    ::pair((pair<std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>,std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>>
            *)local_54);
    std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>::_Rb_tree_const_iterator
              ((_Rb_tree_const_iterator<std::pair<int_const,CMap*>> *)&local_58);
    local_20 = 0;
    if (param_1 == 1) {
      if (param_3 == 0) {
        iVar2 = std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::
                size((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                      *)(this + param_2 * 0x18 + 0x324));
        if (iVar2 == 0) {
          LogManager::logFormat
                    (1,"data_manager.cpp","int CDungeon::ChooseRandomMap(int, int, int) const",0x72c
                     ,
                     "CDungeon::ChooseRandomMap (boss_maplist_[direction].size()==0)(Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)"
                     ,*(undefined4 *)(this + 8),1,param_2,param_3);
          return 0xffffffff;
        }
        std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::begin
                  ((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>> *)
                   &local_60);
        local_58 = local_60;
        local_1c = 0;
        while( true ) {
          uVar3 = rand();
          uVar4 = std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                  ::size((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                          *)(this + param_2 * 0x18 + 0x324));
          if (uVar3 % uVar4 <= local_1c) break;
          std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>::operator++
                    (local_4c,(int)&local_58);
          local_1c = local_1c + 1;
        }
        iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>::operator->
                          ((_Rb_tree_const_iterator<std::pair<int_const,CMap*>> *)&local_58);
        local_24 = *(CMap **)(iVar2 + 4);
        iVar2 = CMap::get_index(local_24);
        if (iVar2 == -1) {
          LogManager::logFormat
                    (1,"data_manager.cpp","int CDungeon::ChooseRandomMap(int, int, int) const",0x736
                     ,
                     "CDungeon::ChooseRandomMap (p_map->get_index()==-1)[1](Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)"
                     ,*(undefined4 *)(this + 8),1,param_2,param_3);
        }
        uVar1 = CMap::get_index(local_24);
        return uVar1;
      }
      std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::
      equal_range(local_48);
      std::
      pair<std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>,std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>>
      ::operator=((pair<std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>,std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>>
                   *)local_54,(pair *)local_48);
      local_20 = std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                 ::count((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                          *)(this + param_2 * 0x18 + 0x324),&param_3);
    }
    else if (param_1 == 2) {
      if (param_3 == 0) {
        iVar2 = std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::
                size((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                      *)(this + param_2 * 0x18 + 0x4a4));
        if (iVar2 == 0) {
          LogManager::logFormat
                    (1,"data_manager.cpp","int CDungeon::ChooseRandomMap(int, int, int) const",0x745
                     ,
                     "CDungeon::ChooseRandomMap (dummy_maplist_[direction].size()==0)(Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)"
                     ,*(undefined4 *)(this + 8),2,param_2,param_3);
          return 0xffffffff;
        }
        std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::begin
                  ((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>> *)
                   &local_60);
        local_58 = local_60;
        local_18 = 0;
        while( true ) {
          uVar3 = rand();
          uVar4 = std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                  ::size((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                          *)(this + param_2 * 0x18 + 0x4a4));
          if (uVar3 % uVar4 <= local_18) break;
          std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>::operator++
                    (local_40,(int)&local_58);
          local_18 = local_18 + 1;
        }
        iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>::operator->
                          ((_Rb_tree_const_iterator<std::pair<int_const,CMap*>> *)&local_58);
        local_24 = *(CMap **)(iVar2 + 4);
        iVar2 = CMap::get_index(local_24);
        if (iVar2 == -1) {
          LogManager::logFormat
                    (1,"data_manager.cpp","int CDungeon::ChooseRandomMap(int, int, int) const",0x74f
                     ,
                     "CDungeon::ChooseRandomMap (p_map->get_index()==-1)[1](Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)"
                     ,*(undefined4 *)(this + 8),2,param_2,param_3);
        }
        uVar1 = CMap::get_index(local_24);
        return uVar1;
      }
      std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::
      equal_range(local_3c);
      std::
      pair<std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>,std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>>
      ::operator=((pair<std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>,std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>>
                   *)local_54,(pair *)local_3c);
      local_20 = std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                 ::count((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                          *)(this + param_2 * 0x18 + 0x4a4),&param_3);
    }
    else {
      if (param_3 == 0) {
        iVar2 = std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::
                size((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                      *)(this + param_2 * 0x18 + 0x1a4));
        if (iVar2 == 0) {
          LogManager::logFormat
                    (1,"data_manager.cpp","int CDungeon::ChooseRandomMap(int, int, int) const",0x75e
                     ,
                     "CDungeon::ChooseRandomMap (maplist_[direction].size()==0)(Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)"
                     ,*(undefined4 *)(this + 8),param_1,param_2,param_3);
          return 0xffffffff;
        }
        std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::begin
                  ((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>> *)
                   &local_60);
        local_58 = local_60;
        local_14 = 0;
        while( true ) {
          uVar3 = rand();
          uVar4 = std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                  ::size((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                          *)(this + param_2 * 0x18 + 0x1a4));
          if (uVar3 % uVar4 <= local_14) break;
          std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>::operator++
                    (local_34,(int)&local_58);
          local_14 = local_14 + 1;
        }
        iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>::operator->
                          ((_Rb_tree_const_iterator<std::pair<int_const,CMap*>> *)&local_58);
        local_24 = *(CMap **)(iVar2 + 4);
        iVar2 = CMap::get_index(local_24);
        if (iVar2 == -1) {
          LogManager::logFormat
                    (1,"data_manager.cpp","int CDungeon::ChooseRandomMap(int, int, int) const",0x768
                     ,
                     "CDungeon::ChooseRandomMap (p_map->get_index()==-1)[2](Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)"
                     ,*(undefined4 *)(this + 8),param_1,param_2,param_3);
        }
        uVar1 = CMap::get_index(local_24);
        return uVar1;
      }
      std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::
      equal_range(local_30);
      std::
      pair<std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>,std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>>
      ::operator=((pair<std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>,std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>>
                   *)local_54,(pair *)local_30);
      local_20 = std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                 ::count((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                          *)(this + param_2 * 0x18 + 0x1a4),&param_3);
    }
    if (local_20 == 0) {
      LogManager::logFormat
                (1,"data_manager.cpp","int CDungeon::ChooseRandomMap(int, int, int) const",0x77b,
                 "CDungeon::ChooseRandomMap (Key count is zero! : plz check map script)(Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)"
                 ,*(undefined4 *)(this + 8),param_1,param_2,param_3);
      uVar1 = 0xffffffff;
    }
    else {
      local_5c = local_54[0];
      local_10 = 0;
      while (iVar2 = rand(), local_10 < iVar2 % local_20) {
        std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>::operator++
                  (local_28,(int)&local_5c);
        local_10 = local_10 + 1;
      }
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,CMap*>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,CMap*>> *)&local_5c);
      local_24 = *(CMap **)(iVar2 + 4);
      iVar2 = CMap::get_index(local_24);
      if (iVar2 == -1) {
        LogManager::logFormat
                  (1,"data_manager.cpp","int CDungeon::ChooseRandomMap(int, int, int) const",0x786,
                   "CDungeon::ChooseRandomMap (p_map->get_index()==-1)[3](Dungeon Index(%d))(map_type(%d),direction(%d),entrance(%d)"
                   ,*(undefined4 *)(this + 8),param_1,param_2,param_3);
      }
      uVar1 = CMap::get_index(local_24);
    }
  }
  return uVar1;
}

```

---

## GetMaze

```asm
// === 0834bf0e CDungeon::GetMaze  [0x0834bf0e-0x834bf55] ===
 834bf0e:	55                   	push   %ebp
 834bf0f:	89 e5                	mov    %esp,%ebp
 834bf11:	53                   	push   %ebx
 834bf12:	83 ec 14             	sub    $0x14,%esp
 834bf15:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 834bf18:	8b 45 08             	mov    0x8(%ebp),%eax
 834bf1b:	05 2c 06 00 00       	add    $0x62c,%eax
 834bf20:	89 04 24             	mov    %eax,(%esp)
 834bf23:	e8 6a e2 03 00       	call   838a192 <_ZNKSt6vectorI10MazeScriptSaIS0_EE4sizeEv>
 834bf28:	39 c3                	cmp    %eax,%ebx
 834bf2a:	0f 93 c0             	setae  %al
 834bf2d:	84 c0                	test   %al,%al
 834bf2f:	74 07                	je     834bf38 <_ZNK8CDungeon7GetMazeEi+0x2a>
 834bf31:	b8 00 00 00 00       	mov    $0x0,%eax
 834bf36:	eb 18                	jmp    834bf50 <_ZNK8CDungeon7GetMazeEi+0x42>
 834bf38:	8b 45 0c             	mov    0xc(%ebp),%eax
 834bf3b:	8b 55 08             	mov    0x8(%ebp),%edx
 834bf3e:	81 c2 2c 06 00 00    	add    $0x62c,%edx
 834bf44:	89 44 24 04          	mov    %eax,0x4(%esp)
 834bf48:	89 14 24             	mov    %edx,(%esp)
 834bf4b:	e8 64 e2 03 00       	call   838a1b4 <_ZNKSt6vectorI10MazeScriptSaIS0_EEixEj>
 834bf50:	83 c4 14             	add    $0x14,%esp
 834bf53:	5b                   	pop    %ebx
 834bf54:	5d                   	pop    %ebp
 834bf55:	c3                   	ret

```

```c
// CDungeon::GetMaze @ 0x834bf0e

/* CDungeon::GetMaze(int) const */

undefined4 __thiscall CDungeon::GetMaze(CDungeon *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = std::vector<MazeScript,std::allocator<MazeScript>>::size
                    ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c));
  if ((uint)param_1 < uVar1) {
    uVar2 = std::vector<MazeScript,std::allocator<MazeScript>>::operator[]
                      ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c),param_1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## GetPartyMemberCoinLimit

```asm
// === 0836526a CDungeon::GetPartyMemberCoinLimit  [0x0836526a-0x8365277] ===
 836526a:	55                   	push   %ebp
 836526b:	89 e5                	mov    %esp,%ebp
 836526d:	8b 45 08             	mov    0x8(%ebp),%eax
 8365270:	8b 80 cc 06 00 00    	mov    0x6cc(%eax),%eax
 8365276:	5d                   	pop    %ebp
 8365277:	c3                   	ret

```

```c
// CDungeon::GetPartyMemberCoinLimit @ 0x836526a

/* CDungeon::GetPartyMemberCoinLimit() const */

undefined4 __thiscall CDungeon::GetPartyMemberCoinLimit(CDungeon *this)

{
  return *(undefined4 *)(this + 0x6cc);
}

```

---

## GetRandMaze

```asm
// === 0834beb8 CDungeon::GetRandMaze  [0x0834beb8-0x834bf0d] ===
 834beb8:	55                   	push   %ebp
 834beb9:	89 e5                	mov    %esp,%ebp
 834bebb:	53                   	push   %ebx
 834bebc:	83 ec 24             	sub    $0x24,%esp
 834bebf:	e8 dc 1d d3 ff       	call   807dca0 <rand@plt>
 834bec4:	89 c3                	mov    %eax,%ebx
 834bec6:	8b 45 08             	mov    0x8(%ebp),%eax
 834bec9:	05 2c 06 00 00       	add    $0x62c,%eax
 834bece:	89 04 24             	mov    %eax,(%esp)
 834bed1:	e8 bc e2 03 00       	call   838a192 <_ZNKSt6vectorI10MazeScriptSaIS0_EE4sizeEv>
 834bed6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 834bed9:	89 d8                	mov    %ebx,%eax
 834bedb:	ba 00 00 00 00       	mov    $0x0,%edx
 834bee0:	f7 75 f4             	divl   -0xc(%ebp)
 834bee3:	89 d1                	mov    %edx,%ecx
 834bee5:	89 c8                	mov    %ecx,%eax
 834bee7:	89 c2                	mov    %eax,%edx
 834bee9:	8b 45 0c             	mov    0xc(%ebp),%eax
 834beec:	89 10                	mov    %edx,(%eax)
 834beee:	8b 45 0c             	mov    0xc(%ebp),%eax
 834bef1:	8b 00                	mov    (%eax),%eax
 834bef3:	8b 55 08             	mov    0x8(%ebp),%edx
 834bef6:	81 c2 2c 06 00 00    	add    $0x62c,%edx
 834befc:	89 44 24 04          	mov    %eax,0x4(%esp)
 834bf00:	89 14 24             	mov    %edx,(%esp)
 834bf03:	e8 ac e2 03 00       	call   838a1b4 <_ZNKSt6vectorI10MazeScriptSaIS0_EEixEj>
 834bf08:	83 c4 24             	add    $0x24,%esp
 834bf0b:	5b                   	pop    %ebx
 834bf0c:	5d                   	pop    %ebp
 834bf0d:	c3                   	ret

```

```c
// CDungeon::GetRandMaze @ 0x834beb8

/* CDungeon::GetRandMaze(int&) const */

void __thiscall CDungeon::GetRandMaze(CDungeon *this,int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = rand();
  uVar2 = std::vector<MazeScript,std::allocator<MazeScript>>::size
                    ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c));
  *param_1 = uVar1 % uVar2;
  std::vector<MazeScript,std::allocator<MazeScript>>::operator[]
            ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c),*param_1);
  return;
}

```

---

## GetRandMazebyPartyCount

```asm
// === 0834d06c CDungeon::GetRandMazebyPartyCount  [0x0834d06c-0x834d21f] ===
 834d06c:	55                   	push   %ebp
 834d06d:	89 e5                	mov    %esp,%ebp
 834d06f:	56                   	push   %esi
 834d070:	53                   	push   %ebx
 834d071:	83 ec 40             	sub    $0x40,%esp
 834d074:	8b 45 08             	mov    0x8(%ebp),%eax
 834d077:	05 2c 06 00 00       	add    $0x62c,%eax
 834d07c:	89 04 24             	mov    %eax,(%esp)
 834d07f:	e8 0e d1 03 00       	call   838a192 <_ZNKSt6vectorI10MazeScriptSaIS0_EE4sizeEv>
 834d084:	83 f8 01             	cmp    $0x1,%eax
 834d087:	0f 94 c0             	sete   %al
 834d08a:	84 c0                	test   %al,%al
 834d08c:	74 1f                	je     834d0ad <_ZNK8CDungeon23GetRandMazebyPartyCountEi+0x41>
 834d08e:	8b 45 08             	mov    0x8(%ebp),%eax
 834d091:	05 2c 06 00 00       	add    $0x62c,%eax
 834d096:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 834d09d:	00 
 834d09e:	89 04 24             	mov    %eax,(%esp)
 834d0a1:	e8 0e d1 03 00       	call   838a1b4 <_ZNKSt6vectorI10MazeScriptSaIS0_EEixEj>
 834d0a6:	89 c3                	mov    %eax,%ebx
 834d0a8:	e9 69 01 00 00       	jmp    834d216 <_ZNK8CDungeon23GetRandMazebyPartyCountEi+0x1aa>
 834d0ad:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834d0b0:	89 04 24             	mov    %eax,(%esp)
 834d0b3:	e8 58 28 fc ff       	call   830f910 <_ZNSt6vectorIP10MazeScriptSaIS1_EEC1Ev>
 834d0b8:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 834d0bf:	eb 4d                	jmp    834d10e <_ZNK8CDungeon23GetRandMazebyPartyCountEi+0xa2>
 834d0c1:	8b 45 08             	mov    0x8(%ebp),%eax
 834d0c4:	8d 90 2c 06 00 00    	lea    0x62c(%eax),%edx
 834d0ca:	8b 45 f0             	mov    -0x10(%ebp),%eax
 834d0cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 834d0d1:	89 14 24             	mov    %edx,(%esp)
 834d0d4:	e8 db d0 03 00       	call   838a1b4 <_ZNKSt6vectorI10MazeScriptSaIS0_EEixEj>
 834d0d9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 834d0dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834d0df:	8b 40 68             	mov    0x68(%eax),%eax
 834d0e2:	3b 45 0c             	cmp    0xc(%ebp),%eax
 834d0e5:	7f 23                	jg     834d10a <_ZNK8CDungeon23GetRandMazebyPartyCountEi+0x9e>
 834d0e7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834d0ea:	8b 40 6c             	mov    0x6c(%eax),%eax
 834d0ed:	3b 45 0c             	cmp    0xc(%ebp),%eax
 834d0f0:	7c 18                	jl     834d10a <_ZNK8CDungeon23GetRandMazebyPartyCountEi+0x9e>
 834d0f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834d0f5:	89 45 e8             	mov    %eax,-0x18(%ebp)
 834d0f8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834d0fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 834d0ff:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834d102:	89 04 24             	mov    %eax,(%esp)
 834d105:	e8 0e 29 fc ff       	call   830fa18 <_ZNSt6vectorIP10MazeScriptSaIS1_EE9push_backEOS1_>
 834d10a:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 834d10e:	8b 45 08             	mov    0x8(%ebp),%eax
 834d111:	05 2c 06 00 00       	add    $0x62c,%eax
 834d116:	89 04 24             	mov    %eax,(%esp)
 834d119:	e8 74 d0 03 00       	call   838a192 <_ZNKSt6vectorI10MazeScriptSaIS0_EE4sizeEv>
 834d11e:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 834d121:	0f 97 c0             	seta   %al
 834d124:	84 c0                	test   %al,%al
 834d126:	75 99                	jne    834d0c1 <_ZNK8CDungeon23GetRandMazebyPartyCountEi+0x55>
 834d128:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 834d12f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834d132:	89 04 24             	mov    %eax,(%esp)
 834d135:	e8 10 d4 03 00       	call   838a54a <_ZNKSt6vectorIP10MazeScriptSaIS1_EE5emptyEv>
 834d13a:	84 c0                	test   %al,%al
 834d13c:	74 4a                	je     834d188 <_ZNK8CDungeon23GetRandMazebyPartyCountEi+0x11c>
 834d13e:	e8 5d 0b d3 ff       	call   807dca0 <rand@plt>
 834d143:	89 c3                	mov    %eax,%ebx
 834d145:	8b 45 08             	mov    0x8(%ebp),%eax
 834d148:	05 2c 06 00 00       	add    $0x62c,%eax
 834d14d:	89 04 24             	mov    %eax,(%esp)
 834d150:	e8 3d d0 03 00       	call   838a192 <_ZNKSt6vectorI10MazeScriptSaIS0_EE4sizeEv>
 834d155:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 834d158:	89 d8                	mov    %ebx,%eax
 834d15a:	ba 00 00 00 00       	mov    $0x0,%edx
 834d15f:	f7 75 d4             	divl   -0x2c(%ebp)
 834d162:	89 d1                	mov    %edx,%ecx
 834d164:	89 c8                	mov    %ecx,%eax
 834d166:	89 45 ec             	mov    %eax,-0x14(%ebp)
 834d169:	8b 45 ec             	mov    -0x14(%ebp),%eax
 834d16c:	8b 55 08             	mov    0x8(%ebp),%edx
 834d16f:	81 c2 2c 06 00 00    	add    $0x62c,%edx
 834d175:	89 44 24 04          	mov    %eax,0x4(%esp)
 834d179:	89 14 24             	mov    %edx,(%esp)
 834d17c:	e8 33 d0 03 00       	call   838a1b4 <_ZNKSt6vectorI10MazeScriptSaIS0_EEixEj>
 834d181:	89 c3                	mov    %eax,%ebx
 834d183:	e9 83 00 00 00       	jmp    834d20b <_ZNK8CDungeon23GetRandMazebyPartyCountEi+0x19f>
 834d188:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834d18b:	89 04 24             	mov    %eax,(%esp)
 834d18e:	e8 af 28 fc ff       	call   830fa42 <_ZNKSt6vectorIP10MazeScriptSaIS1_EE4sizeEv>
 834d193:	83 f8 01             	cmp    $0x1,%eax
 834d196:	0f 94 c0             	sete   %al
 834d199:	84 c0                	test   %al,%al
 834d19b:	74 17                	je     834d1b4 <_ZNK8CDungeon23GetRandMazebyPartyCountEi+0x148>
 834d19d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 834d1a4:	00 
 834d1a5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834d1a8:	89 04 24             	mov    %eax,(%esp)
 834d1ab:	e8 ae 28 fc ff       	call   830fa5e <_ZNSt6vectorIP10MazeScriptSaIS1_EEixEj>
 834d1b0:	8b 18                	mov    (%eax),%ebx
 834d1b2:	eb 57                	jmp    834d20b <_ZNK8CDungeon23GetRandMazebyPartyCountEi+0x19f>
 834d1b4:	e8 e7 0a d3 ff       	call   807dca0 <rand@plt>
 834d1b9:	89 c3                	mov    %eax,%ebx
 834d1bb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834d1be:	89 04 24             	mov    %eax,(%esp)
 834d1c1:	e8 7c 28 fc ff       	call   830fa42 <_ZNKSt6vectorIP10MazeScriptSaIS1_EE4sizeEv>
 834d1c6:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 834d1c9:	89 d8                	mov    %ebx,%eax
 834d1cb:	ba 00 00 00 00       	mov    $0x0,%edx
 834d1d0:	f7 75 d4             	divl   -0x2c(%ebp)
 834d1d3:	89 d1                	mov    %edx,%ecx
 834d1d5:	89 c8                	mov    %ecx,%eax
 834d1d7:	89 45 ec             	mov    %eax,-0x14(%ebp)
 834d1da:	8b 45 ec             	mov    -0x14(%ebp),%eax
 834d1dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 834d1e1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834d1e4:	89 04 24             	mov    %eax,(%esp)
 834d1e7:	e8 72 28 fc ff       	call   830fa5e <_ZNSt6vectorIP10MazeScriptSaIS1_EEixEj>
 834d1ec:	8b 18                	mov    (%eax),%ebx
 834d1ee:	eb 1b                	jmp    834d20b <_ZNK8CDungeon23GetRandMazebyPartyCountEi+0x19f>
 834d1f0:	89 d3                	mov    %edx,%ebx
 834d1f2:	89 c6                	mov    %eax,%esi
 834d1f4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834d1f7:	89 04 24             	mov    %eax,(%esp)
 834d1fa:	e8 25 27 fc ff       	call   830f924 <_ZNSt6vectorIP10MazeScriptSaIS1_EED1Ev>
 834d1ff:	89 f0                	mov    %esi,%eax
 834d201:	89 da                	mov    %ebx,%edx
 834d203:	89 04 24             	mov    %eax,(%esp)
 834d206:	e8 45 65 79 00       	call   8ae3750 <_Unwind_Resume>
 834d20b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834d20e:	89 04 24             	mov    %eax,(%esp)
 834d211:	e8 0e 27 fc ff       	call   830f924 <_ZNSt6vectorIP10MazeScriptSaIS1_EED1Ev>
 834d216:	89 d8                	mov    %ebx,%eax
 834d218:	83 c4 40             	add    $0x40,%esp
 834d21b:	5b                   	pop    %ebx
 834d21c:	5e                   	pop    %esi
 834d21d:	5d                   	pop    %ebp
 834d21e:	c3                   	ret
 834d21f:	90                   	nop

```

```c
// CDungeon::GetRandMazebyPartyCount @ 0x834d06c

/* CDungeon::GetRandMazebyPartyCount(int) const */

undefined4 __thiscall CDungeon::GetRandMazebyPartyCount(CDungeon *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  vector<MazeScript*,std::allocator<MazeScript*>> local_28 [12];
  MazeScript *local_1c;
  uint local_18;
  uint local_14;
  MazeScript *local_10;
  
  iVar2 = std::vector<MazeScript,std::allocator<MazeScript>>::size
                    ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c));
  if (iVar2 == 1) {
    uVar3 = std::vector<MazeScript,std::allocator<MazeScript>>::operator[]
                      ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c),0);
  }
  else {
    std::vector<MazeScript*,std::allocator<MazeScript*>>::vector(local_28);
    local_14 = 0;
    while( true ) {
      uVar4 = std::vector<MazeScript,std::allocator<MazeScript>>::size
                        ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c));
      if (uVar4 <= local_14) break;
      local_10 = (MazeScript *)
                 std::vector<MazeScript,std::allocator<MazeScript>>::operator[]
                           ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c),local_14
                           );
      if ((*(int *)(local_10 + 0x68) <= param_1) && (param_1 <= *(int *)(local_10 + 0x6c))) {
        local_1c = local_10;
                    /* try { // try from 0834d105 to 0834d139 has its CatchHandler @ 0834d1f0 */
        std::vector<MazeScript*,std::allocator<MazeScript*>>::push_back(local_28,&local_1c);
      }
      local_14 = local_14 + 1;
    }
    local_18 = 0;
    cVar1 = std::vector<MazeScript*,std::allocator<MazeScript*>>::empty();
    if (cVar1 == '\0') {
      iVar2 = std::vector<MazeScript*,std::allocator<MazeScript*>>::size(local_28);
      if (iVar2 == 1) {
        puVar5 = (undefined4 *)
                 std::vector<MazeScript*,std::allocator<MazeScript*>>::operator[](local_28,0);
        uVar3 = *puVar5;
      }
      else {
        uVar4 = rand();
        local_18 = std::vector<MazeScript*,std::allocator<MazeScript*>>::size(local_28);
        local_18 = uVar4 % local_18;
        puVar5 = (undefined4 *)
                 std::vector<MazeScript*,std::allocator<MazeScript*>>::operator[](local_28,local_18)
        ;
        uVar3 = *puVar5;
      }
    }
    else {
      uVar4 = rand();
      local_18 = std::vector<MazeScript,std::allocator<MazeScript>>::size
                           ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c));
      local_18 = uVar4 % local_18;
      uVar3 = std::vector<MazeScript,std::allocator<MazeScript>>::operator[]
                        ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c),local_18);
    }
    std::vector<MazeScript*,std::allocator<MazeScript*>>::~vector(local_28);
  }
  return uVar3;
}

```

---

## GetStartMap

```asm
// === 0834c75a CDungeon::GetStartMap  [0x0834c75a-0x834c8bf] ===
 834c75a:	55                   	push   %ebp
 834c75b:	89 e5                	mov    %esp,%ebp
 834c75d:	83 ec 48             	sub    $0x48,%esp
 834c760:	83 7d 0c 0f          	cmpl   $0xf,0xc(%ebp)
 834c764:	7f 06                	jg     834c76c <_ZNK8CDungeon11GetStartMapEi+0x12>
 834c766:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 834c76a:	79 0a                	jns    834c776 <_ZNK8CDungeon11GetStartMapEi+0x1c>
 834c76c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 834c771:	e9 48 01 00 00       	jmp    834c8be <_ZNK8CDungeon11GetStartMapEi+0x164>
 834c776:	8b 55 0c             	mov    0xc(%ebp),%edx
 834c779:	89 d0                	mov    %edx,%eax
 834c77b:	c1 e0 02             	shl    $0x2,%eax
 834c77e:	01 d0                	add    %edx,%eax
 834c780:	c1 e0 02             	shl    $0x2,%eax
 834c783:	83 c0 60             	add    $0x60,%eax
 834c786:	03 45 08             	add    0x8(%ebp),%eax
 834c789:	83 c0 04             	add    $0x4,%eax
 834c78c:	89 04 24             	mov    %eax,(%esp)
 834c78f:	e8 64 db 03 00       	call   838a2f8 <_ZNK9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EE4sizeEv>
 834c794:	85 c0                	test   %eax,%eax
 834c796:	0f 94 c0             	sete   %al
 834c799:	84 c0                	test   %al,%al
 834c79b:	74 47                	je     834c7e4 <_ZNK8CDungeon11GetStartMapEi+0x8a>
 834c79d:	8b 45 08             	mov    0x8(%ebp),%eax
 834c7a0:	8b 40 08             	mov    0x8(%eax),%eax
 834c7a3:	89 44 24 18          	mov    %eax,0x18(%esp)
 834c7a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 834c7aa:	89 44 24 14          	mov    %eax,0x14(%esp)
 834c7ae:	c7 44 24 10 e0 fc c2 	movl   $0x8c2fce0,0x10(%esp)
 834c7b5:	08 
 834c7b6:	c7 44 24 0c 9a 07 00 	movl   $0x79a,0xc(%esp)
 834c7bd:	00 
 834c7be:	c7 44 24 08 00 49 c3 	movl   $0x8c34900,0x8(%esp)
 834c7c5:	08 
 834c7c6:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 834c7cd:	08 
 834c7ce:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 834c7d5:	e8 30 74 78 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 834c7da:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 834c7df:	e9 da 00 00 00       	jmp    834c8be <_ZNK8CDungeon11GetStartMapEi+0x164>
 834c7e4:	8b 55 0c             	mov    0xc(%ebp),%edx
 834c7e7:	89 d0                	mov    %edx,%eax
 834c7e9:	c1 e0 02             	shl    $0x2,%eax
 834c7ec:	01 d0                	add    %edx,%eax
 834c7ee:	c1 e0 02             	shl    $0x2,%eax
 834c7f1:	83 c0 60             	add    $0x60,%eax
 834c7f4:	03 45 08             	add    0x8(%ebp),%eax
 834c7f7:	83 c0 04             	add    $0x4,%eax
 834c7fa:	89 04 24             	mov    %eax,(%esp)
 834c7fd:	e8 f6 da 03 00       	call   838a2f8 <_ZNK9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EE4sizeEv>
 834c802:	89 04 24             	mov    %eax,(%esp)
 834c805:	e8 7d 53 36 00       	call   86b1b87 <_Z12get_rand_inti>
 834c80a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 834c80d:	8b 55 0c             	mov    0xc(%ebp),%edx
 834c810:	89 d0                	mov    %edx,%eax
 834c812:	c1 e0 02             	shl    $0x2,%eax
 834c815:	01 d0                	add    %edx,%eax
 834c817:	c1 e0 02             	shl    $0x2,%eax
 834c81a:	83 c0 60             	add    $0x60,%eax
 834c81d:	03 45 08             	add    0x8(%ebp),%eax
 834c820:	8d 50 04             	lea    0x4(%eax),%edx
 834c823:	8d 45 d8             	lea    -0x28(%ebp),%eax
 834c826:	89 54 24 04          	mov    %edx,0x4(%esp)
 834c82a:	89 04 24             	mov    %eax,(%esp)
 834c82d:	e8 da da 03 00       	call   838a30c <_ZNK9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EE5beginEv>
 834c832:	83 ec 04             	sub    $0x4,%esp
 834c835:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 834c83c:	eb 66                	jmp    834c8a4 <_ZNK8CDungeon11GetStartMapEi+0x14a>
 834c83e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 834c841:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 834c848:	00 
 834c849:	8d 55 d8             	lea    -0x28(%ebp),%edx
 834c84c:	89 54 24 04          	mov    %edx,0x4(%esp)
 834c850:	89 04 24             	mov    %eax,(%esp)
 834c853:	e8 da da 03 00       	call   838a332 <_ZN9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP4CMapEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEppEi>
 834c858:	83 ec 04             	sub    $0x4,%esp
 834c85b:	8b 55 0c             	mov    0xc(%ebp),%edx
 834c85e:	89 d0                	mov    %edx,%eax
 834c860:	c1 e0 02             	shl    $0x2,%eax
 834c863:	01 d0                	add    %edx,%eax
 834c865:	c1 e0 02             	shl    $0x2,%eax
 834c868:	83 c0 60             	add    $0x60,%eax
 834c86b:	03 45 08             	add    0x8(%ebp),%eax
 834c86e:	8d 50 04             	lea    0x4(%eax),%edx
 834c871:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834c874:	89 54 24 04          	mov    %edx,0x4(%esp)
 834c878:	89 04 24             	mov    %eax,(%esp)
 834c87b:	e8 e8 da 03 00       	call   838a368 <_ZNK9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 834c880:	83 ec 04             	sub    $0x4,%esp
 834c883:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834c886:	89 44 24 04          	mov    %eax,0x4(%esp)
 834c88a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 834c88d:	89 04 24             	mov    %eax,(%esp)
 834c890:	e8 f9 da 03 00       	call   838a38e <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP4CMapEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEeqERKSD_>
 834c895:	84 c0                	test   %al,%al
 834c897:	74 07                	je     834c8a0 <_ZNK8CDungeon11GetStartMapEi+0x146>
 834c899:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 834c89e:	eb 1e                	jmp    834c8be <_ZNK8CDungeon11GetStartMapEi+0x164>
 834c8a0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 834c8a4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834c8a7:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 834c8aa:	0f 9c c0             	setl   %al
 834c8ad:	84 c0                	test   %al,%al
 834c8af:	75 8d                	jne    834c83e <_ZNK8CDungeon11GetStartMapEi+0xe4>
 834c8b1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 834c8b4:	89 04 24             	mov    %eax,(%esp)
 834c8b7:	e8 e6 da 03 00       	call   838a3a2 <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP4CMapEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 834c8bc:	8b 00                	mov    (%eax),%eax
 834c8be:	c9                   	leave
 834c8bf:	c3                   	ret

```

```c
// CDungeon::GetStartMap @ 0x834c75a

/* CDungeon::GetStartMap(int) const */

undefined4 __thiscall CDungeon::GetStartMap(CDungeon *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_2c [8];
  _Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
  local_24 [8];
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_1c [8];
  int local_14;
  int local_10;
  
  if ((param_1 < 0x10) && (-1 < param_1)) {
    iVar3 = __gnu_cxx::
            hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::size
                      ((hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>
                        *)(this + param_1 * 0x14 + 100));
    if (iVar3 == 0) {
      LogManager::logFormat
                (1,"data_manager.cpp","int CDungeon::GetStartMap(int) const",0x79a,
                 "CDungeon::GetStartMap() : direction(%d), dungeon index(%d), start_maplist_[direction].size() == 0, May be Script Error!"
                 ,param_1,*(undefined4 *)(this + 8));
      uVar2 = 0xffffffff;
    }
    else {
      iVar3 = __gnu_cxx::
              hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
              size((hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>
                    *)(this + param_1 * 0x14 + 100));
      local_14 = get_rand_int(iVar3);
      __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
      begin(local_2c);
      for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
        __gnu_cxx::
        _Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
        ::operator++(local_24,(int)local_2c);
        __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>
        ::end(local_1c);
        cVar1 = __gnu_cxx::
                _Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                ::operator==((_Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                              *)local_2c,(_Hashtable_const_iterator *)local_1c);
        if (cVar1 != '\0') {
          return 0xffffffff;
        }
      }
      puVar4 = (undefined4 *)
               __gnu_cxx::
               _Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
               ::operator->((_Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                             *)local_2c);
      uVar2 = *puVar4;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

```

---

## InsertMap

```asm
// === 0834b988 CDungeon::InsertMap  [0x0834b988-0x834be59] ===
 834b988:	55                   	push   %ebp
 834b989:	89 e5                	mov    %esp,%ebp
 834b98b:	81 ec d8 00 00 00    	sub    $0xd8,%esp
 834b991:	8b 45 14             	mov    0x14(%ebp),%eax
 834b994:	89 04 24             	mov    %eax,(%esp)
 834b997:	e8 24 2c fc ff       	call   830e5c0 <_ZNK4CMap12get_map_typeEv>
 834b99c:	85 c0                	test   %eax,%eax
 834b99e:	0f 94 c0             	sete   %al
 834b9a1:	84 c0                	test   %al,%al
 834b9a3:	0f 84 ad 01 00 00    	je     834bb56 <_ZN8CDungeon9InsertMapEiiP4CMap+0x1ce>
 834b9a9:	8b 45 10             	mov    0x10(%ebp),%eax
 834b9ac:	83 e0 01             	and    $0x1,%eax
 834b9af:	84 c0                	test   %al,%al
 834b9b1:	74 5f                	je     834ba12 <_ZN8CDungeon9InsertMapEiiP4CMap+0x8a>
 834b9b3:	c7 85 44 ff ff ff 01 	movl   $0x1,-0xbc(%ebp)
 834b9ba:	00 00 00 
 834b9bd:	8d 45 14             	lea    0x14(%ebp),%eax
 834b9c0:	89 44 24 08          	mov    %eax,0x8(%esp)
 834b9c4:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 834b9ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 834b9ce:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 834b9d4:	89 04 24             	mov    %eax,(%esp)
 834b9d7:	e8 00 e7 03 00       	call   838a0dc <_ZNSt4pairIKiP4CMapEC1I14PATH_DIRECTIONRS2_EEOT_OT0_>
 834b9dc:	8b 55 0c             	mov    0xc(%ebp),%edx
 834b9df:	89 d0                	mov    %edx,%eax
 834b9e1:	01 c0                	add    %eax,%eax
 834b9e3:	01 d0                	add    %edx,%eax
 834b9e5:	c1 e0 03             	shl    $0x3,%eax
 834b9e8:	05 a0 01 00 00       	add    $0x1a0,%eax
 834b9ed:	03 45 08             	add    0x8(%ebp),%eax
 834b9f0:	8d 48 04             	lea    0x4(%eax),%ecx
 834b9f3:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 834b9f9:	8d 95 3c ff ff ff    	lea    -0xc4(%ebp),%edx
 834b9ff:	89 54 24 08          	mov    %edx,0x8(%esp)
 834ba03:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834ba07:	89 04 24             	mov    %eax,(%esp)
 834ba0a:	e8 fd e6 03 00       	call   838a10c <_ZNSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 834ba0f:	83 ec 04             	sub    $0x4,%esp
 834ba12:	8b 45 10             	mov    0x10(%ebp),%eax
 834ba15:	83 e0 02             	and    $0x2,%eax
 834ba18:	85 c0                	test   %eax,%eax
 834ba1a:	74 5f                	je     834ba7b <_ZN8CDungeon9InsertMapEiiP4CMap+0xf3>
 834ba1c:	c7 85 54 ff ff ff 02 	movl   $0x2,-0xac(%ebp)
 834ba23:	00 00 00 
 834ba26:	8d 45 14             	lea    0x14(%ebp),%eax
 834ba29:	89 44 24 08          	mov    %eax,0x8(%esp)
 834ba2d:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 834ba33:	89 44 24 04          	mov    %eax,0x4(%esp)
 834ba37:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 834ba3d:	89 04 24             	mov    %eax,(%esp)
 834ba40:	e8 97 e6 03 00       	call   838a0dc <_ZNSt4pairIKiP4CMapEC1I14PATH_DIRECTIONRS2_EEOT_OT0_>
 834ba45:	8b 55 0c             	mov    0xc(%ebp),%edx
 834ba48:	89 d0                	mov    %edx,%eax
 834ba4a:	01 c0                	add    %eax,%eax
 834ba4c:	01 d0                	add    %edx,%eax
 834ba4e:	c1 e0 03             	shl    $0x3,%eax
 834ba51:	05 a0 01 00 00       	add    $0x1a0,%eax
 834ba56:	03 45 08             	add    0x8(%ebp),%eax
 834ba59:	8d 48 04             	lea    0x4(%eax),%ecx
 834ba5c:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 834ba62:	8d 95 4c ff ff ff    	lea    -0xb4(%ebp),%edx
 834ba68:	89 54 24 08          	mov    %edx,0x8(%esp)
 834ba6c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834ba70:	89 04 24             	mov    %eax,(%esp)
 834ba73:	e8 94 e6 03 00       	call   838a10c <_ZNSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 834ba78:	83 ec 04             	sub    $0x4,%esp
 834ba7b:	8b 45 10             	mov    0x10(%ebp),%eax
 834ba7e:	83 e0 04             	and    $0x4,%eax
 834ba81:	85 c0                	test   %eax,%eax
 834ba83:	74 5f                	je     834bae4 <_ZN8CDungeon9InsertMapEiiP4CMap+0x15c>
 834ba85:	c7 85 64 ff ff ff 04 	movl   $0x4,-0x9c(%ebp)
 834ba8c:	00 00 00 
 834ba8f:	8d 45 14             	lea    0x14(%ebp),%eax
 834ba92:	89 44 24 08          	mov    %eax,0x8(%esp)
 834ba96:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 834ba9c:	89 44 24 04          	mov    %eax,0x4(%esp)
 834baa0:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 834baa6:	89 04 24             	mov    %eax,(%esp)
 834baa9:	e8 2e e6 03 00       	call   838a0dc <_ZNSt4pairIKiP4CMapEC1I14PATH_DIRECTIONRS2_EEOT_OT0_>
 834baae:	8b 55 0c             	mov    0xc(%ebp),%edx
 834bab1:	89 d0                	mov    %edx,%eax
 834bab3:	01 c0                	add    %eax,%eax
 834bab5:	01 d0                	add    %edx,%eax
 834bab7:	c1 e0 03             	shl    $0x3,%eax
 834baba:	05 a0 01 00 00       	add    $0x1a0,%eax
 834babf:	03 45 08             	add    0x8(%ebp),%eax
 834bac2:	8d 48 04             	lea    0x4(%eax),%ecx
 834bac5:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 834bacb:	8d 95 5c ff ff ff    	lea    -0xa4(%ebp),%edx
 834bad1:	89 54 24 08          	mov    %edx,0x8(%esp)
 834bad5:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834bad9:	89 04 24             	mov    %eax,(%esp)
 834badc:	e8 2b e6 03 00       	call   838a10c <_ZNSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 834bae1:	83 ec 04             	sub    $0x4,%esp
 834bae4:	8b 45 10             	mov    0x10(%ebp),%eax
 834bae7:	83 e0 08             	and    $0x8,%eax
 834baea:	85 c0                	test   %eax,%eax
 834baec:	0f 84 65 03 00 00    	je     834be57 <_ZN8CDungeon9InsertMapEiiP4CMap+0x4cf>
 834baf2:	c7 85 74 ff ff ff 08 	movl   $0x8,-0x8c(%ebp)
 834baf9:	00 00 00 
 834bafc:	8d 45 14             	lea    0x14(%ebp),%eax
 834baff:	89 44 24 08          	mov    %eax,0x8(%esp)
 834bb03:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 834bb09:	89 44 24 04          	mov    %eax,0x4(%esp)
 834bb0d:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 834bb13:	89 04 24             	mov    %eax,(%esp)
 834bb16:	e8 c1 e5 03 00       	call   838a0dc <_ZNSt4pairIKiP4CMapEC1I14PATH_DIRECTIONRS2_EEOT_OT0_>
 834bb1b:	8b 55 0c             	mov    0xc(%ebp),%edx
 834bb1e:	89 d0                	mov    %edx,%eax
 834bb20:	01 c0                	add    %eax,%eax
 834bb22:	01 d0                	add    %edx,%eax
 834bb24:	c1 e0 03             	shl    $0x3,%eax
 834bb27:	05 a0 01 00 00       	add    $0x1a0,%eax
 834bb2c:	03 45 08             	add    0x8(%ebp),%eax
 834bb2f:	8d 48 04             	lea    0x4(%eax),%ecx
 834bb32:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 834bb38:	8d 95 6c ff ff ff    	lea    -0x94(%ebp),%edx
 834bb3e:	89 54 24 08          	mov    %edx,0x8(%esp)
 834bb42:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834bb46:	89 04 24             	mov    %eax,(%esp)
 834bb49:	e8 be e5 03 00       	call   838a10c <_ZNSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 834bb4e:	83 ec 04             	sub    $0x4,%esp
 834bb51:	e9 01 03 00 00       	jmp    834be57 <_ZN8CDungeon9InsertMapEiiP4CMap+0x4cf>
 834bb56:	8b 45 14             	mov    0x14(%ebp),%eax
 834bb59:	89 04 24             	mov    %eax,(%esp)
 834bb5c:	e8 5f 2a fc ff       	call   830e5c0 <_ZNK4CMap12get_map_typeEv>
 834bb61:	83 f8 02             	cmp    $0x2,%eax
 834bb64:	0f 94 c0             	sete   %al
 834bb67:	84 c0                	test   %al,%al
 834bb69:	0f 84 80 01 00 00    	je     834bcef <_ZN8CDungeon9InsertMapEiiP4CMap+0x367>
 834bb6f:	8b 45 10             	mov    0x10(%ebp),%eax
 834bb72:	83 e0 01             	and    $0x1,%eax
 834bb75:	84 c0                	test   %al,%al
 834bb77:	74 59                	je     834bbd2 <_ZN8CDungeon9InsertMapEiiP4CMap+0x24a>
 834bb79:	c7 45 84 01 00 00 00 	movl   $0x1,-0x7c(%ebp)
 834bb80:	8d 45 14             	lea    0x14(%ebp),%eax
 834bb83:	89 44 24 08          	mov    %eax,0x8(%esp)
 834bb87:	8d 45 84             	lea    -0x7c(%ebp),%eax
 834bb8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 834bb8e:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 834bb94:	89 04 24             	mov    %eax,(%esp)
 834bb97:	e8 40 e5 03 00       	call   838a0dc <_ZNSt4pairIKiP4CMapEC1I14PATH_DIRECTIONRS2_EEOT_OT0_>
 834bb9c:	8b 55 0c             	mov    0xc(%ebp),%edx
 834bb9f:	89 d0                	mov    %edx,%eax
 834bba1:	01 c0                	add    %eax,%eax
 834bba3:	01 d0                	add    %edx,%eax
 834bba5:	c1 e0 03             	shl    $0x3,%eax
 834bba8:	05 a0 04 00 00       	add    $0x4a0,%eax
 834bbad:	03 45 08             	add    0x8(%ebp),%eax
 834bbb0:	8d 48 04             	lea    0x4(%eax),%ecx
 834bbb3:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 834bbb9:	8d 95 7c ff ff ff    	lea    -0x84(%ebp),%edx
 834bbbf:	89 54 24 08          	mov    %edx,0x8(%esp)
 834bbc3:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834bbc7:	89 04 24             	mov    %eax,(%esp)
 834bbca:	e8 3d e5 03 00       	call   838a10c <_ZNSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 834bbcf:	83 ec 04             	sub    $0x4,%esp
 834bbd2:	8b 45 10             	mov    0x10(%ebp),%eax
 834bbd5:	83 e0 02             	and    $0x2,%eax
 834bbd8:	85 c0                	test   %eax,%eax
 834bbda:	74 50                	je     834bc2c <_ZN8CDungeon9InsertMapEiiP4CMap+0x2a4>
 834bbdc:	c7 45 94 02 00 00 00 	movl   $0x2,-0x6c(%ebp)
 834bbe3:	8d 45 14             	lea    0x14(%ebp),%eax
 834bbe6:	89 44 24 08          	mov    %eax,0x8(%esp)
 834bbea:	8d 45 94             	lea    -0x6c(%ebp),%eax
 834bbed:	89 44 24 04          	mov    %eax,0x4(%esp)
 834bbf1:	8d 45 8c             	lea    -0x74(%ebp),%eax
 834bbf4:	89 04 24             	mov    %eax,(%esp)
 834bbf7:	e8 e0 e4 03 00       	call   838a0dc <_ZNSt4pairIKiP4CMapEC1I14PATH_DIRECTIONRS2_EEOT_OT0_>
 834bbfc:	8b 55 0c             	mov    0xc(%ebp),%edx
 834bbff:	89 d0                	mov    %edx,%eax
 834bc01:	01 c0                	add    %eax,%eax
 834bc03:	01 d0                	add    %edx,%eax
 834bc05:	c1 e0 03             	shl    $0x3,%eax
 834bc08:	05 a0 04 00 00       	add    $0x4a0,%eax
 834bc0d:	03 45 08             	add    0x8(%ebp),%eax
 834bc10:	8d 48 04             	lea    0x4(%eax),%ecx
 834bc13:	8d 45 88             	lea    -0x78(%ebp),%eax
 834bc16:	8d 55 8c             	lea    -0x74(%ebp),%edx
 834bc19:	89 54 24 08          	mov    %edx,0x8(%esp)
 834bc1d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834bc21:	89 04 24             	mov    %eax,(%esp)
 834bc24:	e8 e3 e4 03 00       	call   838a10c <_ZNSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 834bc29:	83 ec 04             	sub    $0x4,%esp
 834bc2c:	8b 45 10             	mov    0x10(%ebp),%eax
 834bc2f:	83 e0 04             	and    $0x4,%eax
 834bc32:	85 c0                	test   %eax,%eax
 834bc34:	74 50                	je     834bc86 <_ZN8CDungeon9InsertMapEiiP4CMap+0x2fe>
 834bc36:	c7 45 a4 04 00 00 00 	movl   $0x4,-0x5c(%ebp)
 834bc3d:	8d 45 14             	lea    0x14(%ebp),%eax
 834bc40:	89 44 24 08          	mov    %eax,0x8(%esp)
 834bc44:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 834bc47:	89 44 24 04          	mov    %eax,0x4(%esp)
 834bc4b:	8d 45 9c             	lea    -0x64(%ebp),%eax
 834bc4e:	89 04 24             	mov    %eax,(%esp)
 834bc51:	e8 86 e4 03 00       	call   838a0dc <_ZNSt4pairIKiP4CMapEC1I14PATH_DIRECTIONRS2_EEOT_OT0_>
 834bc56:	8b 55 0c             	mov    0xc(%ebp),%edx
 834bc59:	89 d0                	mov    %edx,%eax
 834bc5b:	01 c0                	add    %eax,%eax
 834bc5d:	01 d0                	add    %edx,%eax
 834bc5f:	c1 e0 03             	shl    $0x3,%eax
 834bc62:	05 a0 04 00 00       	add    $0x4a0,%eax
 834bc67:	03 45 08             	add    0x8(%ebp),%eax
 834bc6a:	8d 48 04             	lea    0x4(%eax),%ecx
 834bc6d:	8d 45 98             	lea    -0x68(%ebp),%eax
 834bc70:	8d 55 9c             	lea    -0x64(%ebp),%edx
 834bc73:	89 54 24 08          	mov    %edx,0x8(%esp)
 834bc77:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834bc7b:	89 04 24             	mov    %eax,(%esp)
 834bc7e:	e8 89 e4 03 00       	call   838a10c <_ZNSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 834bc83:	83 ec 04             	sub    $0x4,%esp
 834bc86:	8b 45 10             	mov    0x10(%ebp),%eax
 834bc89:	83 e0 08             	and    $0x8,%eax
 834bc8c:	85 c0                	test   %eax,%eax
 834bc8e:	74 50                	je     834bce0 <_ZN8CDungeon9InsertMapEiiP4CMap+0x358>
 834bc90:	c7 45 b4 08 00 00 00 	movl   $0x8,-0x4c(%ebp)
 834bc97:	8d 45 14             	lea    0x14(%ebp),%eax
 834bc9a:	89 44 24 08          	mov    %eax,0x8(%esp)
 834bc9e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834bca1:	89 44 24 04          	mov    %eax,0x4(%esp)
 834bca5:	8d 45 ac             	lea    -0x54(%ebp),%eax
 834bca8:	89 04 24             	mov    %eax,(%esp)
 834bcab:	e8 2c e4 03 00       	call   838a0dc <_ZNSt4pairIKiP4CMapEC1I14PATH_DIRECTIONRS2_EEOT_OT0_>
 834bcb0:	8b 55 0c             	mov    0xc(%ebp),%edx
 834bcb3:	89 d0                	mov    %edx,%eax
 834bcb5:	01 c0                	add    %eax,%eax
 834bcb7:	01 d0                	add    %edx,%eax
 834bcb9:	c1 e0 03             	shl    $0x3,%eax
 834bcbc:	05 a0 04 00 00       	add    $0x4a0,%eax
 834bcc1:	03 45 08             	add    0x8(%ebp),%eax
 834bcc4:	8d 48 04             	lea    0x4(%eax),%ecx
 834bcc7:	8d 45 a8             	lea    -0x58(%ebp),%eax
 834bcca:	8d 55 ac             	lea    -0x54(%ebp),%edx
 834bccd:	89 54 24 08          	mov    %edx,0x8(%esp)
 834bcd1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834bcd5:	89 04 24             	mov    %eax,(%esp)
 834bcd8:	e8 2f e4 03 00       	call   838a10c <_ZNSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 834bcdd:	83 ec 04             	sub    $0x4,%esp
 834bce0:	8b 45 08             	mov    0x8(%ebp),%eax
 834bce3:	c6 80 24 06 00 00 01 	movb   $0x1,0x624(%eax)
 834bcea:	e9 68 01 00 00       	jmp    834be57 <_ZN8CDungeon9InsertMapEiiP4CMap+0x4cf>
 834bcef:	8b 45 10             	mov    0x10(%ebp),%eax
 834bcf2:	83 e0 01             	and    $0x1,%eax
 834bcf5:	84 c0                	test   %al,%al
 834bcf7:	74 50                	je     834bd49 <_ZN8CDungeon9InsertMapEiiP4CMap+0x3c1>
 834bcf9:	c7 45 c4 01 00 00 00 	movl   $0x1,-0x3c(%ebp)
 834bd00:	8d 45 14             	lea    0x14(%ebp),%eax
 834bd03:	89 44 24 08          	mov    %eax,0x8(%esp)
 834bd07:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 834bd0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 834bd0e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 834bd11:	89 04 24             	mov    %eax,(%esp)
 834bd14:	e8 c3 e3 03 00       	call   838a0dc <_ZNSt4pairIKiP4CMapEC1I14PATH_DIRECTIONRS2_EEOT_OT0_>
 834bd19:	8b 55 0c             	mov    0xc(%ebp),%edx
 834bd1c:	89 d0                	mov    %edx,%eax
 834bd1e:	01 c0                	add    %eax,%eax
 834bd20:	01 d0                	add    %edx,%eax
 834bd22:	c1 e0 03             	shl    $0x3,%eax
 834bd25:	05 20 03 00 00       	add    $0x320,%eax
 834bd2a:	03 45 08             	add    0x8(%ebp),%eax
 834bd2d:	8d 48 04             	lea    0x4(%eax),%ecx
 834bd30:	8d 45 b8             	lea    -0x48(%ebp),%eax
 834bd33:	8d 55 bc             	lea    -0x44(%ebp),%edx
 834bd36:	89 54 24 08          	mov    %edx,0x8(%esp)
 834bd3a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834bd3e:	89 04 24             	mov    %eax,(%esp)
 834bd41:	e8 c6 e3 03 00       	call   838a10c <_ZNSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 834bd46:	83 ec 04             	sub    $0x4,%esp
 834bd49:	8b 45 10             	mov    0x10(%ebp),%eax
 834bd4c:	83 e0 02             	and    $0x2,%eax
 834bd4f:	85 c0                	test   %eax,%eax
 834bd51:	74 50                	je     834bda3 <_ZN8CDungeon9InsertMapEiiP4CMap+0x41b>
 834bd53:	c7 45 d4 02 00 00 00 	movl   $0x2,-0x2c(%ebp)
 834bd5a:	8d 45 14             	lea    0x14(%ebp),%eax
 834bd5d:	89 44 24 08          	mov    %eax,0x8(%esp)
 834bd61:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 834bd64:	89 44 24 04          	mov    %eax,0x4(%esp)
 834bd68:	8d 45 cc             	lea    -0x34(%ebp),%eax
 834bd6b:	89 04 24             	mov    %eax,(%esp)
 834bd6e:	e8 69 e3 03 00       	call   838a0dc <_ZNSt4pairIKiP4CMapEC1I14PATH_DIRECTIONRS2_EEOT_OT0_>
 834bd73:	8b 55 0c             	mov    0xc(%ebp),%edx
 834bd76:	89 d0                	mov    %edx,%eax
 834bd78:	01 c0                	add    %eax,%eax
 834bd7a:	01 d0                	add    %edx,%eax
 834bd7c:	c1 e0 03             	shl    $0x3,%eax
 834bd7f:	05 20 03 00 00       	add    $0x320,%eax
 834bd84:	03 45 08             	add    0x8(%ebp),%eax
 834bd87:	8d 48 04             	lea    0x4(%eax),%ecx
 834bd8a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 834bd8d:	8d 55 cc             	lea    -0x34(%ebp),%edx
 834bd90:	89 54 24 08          	mov    %edx,0x8(%esp)
 834bd94:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834bd98:	89 04 24             	mov    %eax,(%esp)
 834bd9b:	e8 6c e3 03 00       	call   838a10c <_ZNSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 834bda0:	83 ec 04             	sub    $0x4,%esp
 834bda3:	8b 45 10             	mov    0x10(%ebp),%eax
 834bda6:	83 e0 04             	and    $0x4,%eax
 834bda9:	85 c0                	test   %eax,%eax
 834bdab:	74 50                	je     834bdfd <_ZN8CDungeon9InsertMapEiiP4CMap+0x475>
 834bdad:	c7 45 e4 04 00 00 00 	movl   $0x4,-0x1c(%ebp)
 834bdb4:	8d 45 14             	lea    0x14(%ebp),%eax
 834bdb7:	89 44 24 08          	mov    %eax,0x8(%esp)
 834bdbb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 834bdbe:	89 44 24 04          	mov    %eax,0x4(%esp)
 834bdc2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834bdc5:	89 04 24             	mov    %eax,(%esp)
 834bdc8:	e8 0f e3 03 00       	call   838a0dc <_ZNSt4pairIKiP4CMapEC1I14PATH_DIRECTIONRS2_EEOT_OT0_>
 834bdcd:	8b 55 0c             	mov    0xc(%ebp),%edx
 834bdd0:	89 d0                	mov    %edx,%eax
 834bdd2:	01 c0                	add    %eax,%eax
 834bdd4:	01 d0                	add    %edx,%eax
 834bdd6:	c1 e0 03             	shl    $0x3,%eax
 834bdd9:	05 20 03 00 00       	add    $0x320,%eax
 834bdde:	03 45 08             	add    0x8(%ebp),%eax
 834bde1:	8d 48 04             	lea    0x4(%eax),%ecx
 834bde4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 834bde7:	8d 55 dc             	lea    -0x24(%ebp),%edx
 834bdea:	89 54 24 08          	mov    %edx,0x8(%esp)
 834bdee:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834bdf2:	89 04 24             	mov    %eax,(%esp)
 834bdf5:	e8 12 e3 03 00       	call   838a10c <_ZNSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 834bdfa:	83 ec 04             	sub    $0x4,%esp
 834bdfd:	8b 45 10             	mov    0x10(%ebp),%eax
 834be00:	83 e0 08             	and    $0x8,%eax
 834be03:	85 c0                	test   %eax,%eax
 834be05:	74 50                	je     834be57 <_ZN8CDungeon9InsertMapEiiP4CMap+0x4cf>
 834be07:	c7 45 f4 08 00 00 00 	movl   $0x8,-0xc(%ebp)
 834be0e:	8d 45 14             	lea    0x14(%ebp),%eax
 834be11:	89 44 24 08          	mov    %eax,0x8(%esp)
 834be15:	8d 45 f4             	lea    -0xc(%ebp),%eax
 834be18:	89 44 24 04          	mov    %eax,0x4(%esp)
 834be1c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834be1f:	89 04 24             	mov    %eax,(%esp)
 834be22:	e8 b5 e2 03 00       	call   838a0dc <_ZNSt4pairIKiP4CMapEC1I14PATH_DIRECTIONRS2_EEOT_OT0_>
 834be27:	8b 55 0c             	mov    0xc(%ebp),%edx
 834be2a:	89 d0                	mov    %edx,%eax
 834be2c:	01 c0                	add    %eax,%eax
 834be2e:	01 d0                	add    %edx,%eax
 834be30:	c1 e0 03             	shl    $0x3,%eax
 834be33:	05 20 03 00 00       	add    $0x320,%eax
 834be38:	03 45 08             	add    0x8(%ebp),%eax
 834be3b:	8d 48 04             	lea    0x4(%eax),%ecx
 834be3e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834be41:	8d 55 ec             	lea    -0x14(%ebp),%edx
 834be44:	89 54 24 08          	mov    %edx,0x8(%esp)
 834be48:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834be4c:	89 04 24             	mov    %eax,(%esp)
 834be4f:	e8 b8 e2 03 00       	call   838a10c <_ZNSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 834be54:	83 ec 04             	sub    $0x4,%esp
 834be57:	c9                   	leave
 834be58:	c3                   	ret
 834be59:	90                   	nop

```

```c
// CDungeon::InsertMap @ 0x834b988

/* CDungeon::InsertMap(int, int, CMap*) */

void __thiscall CDungeon::InsertMap(CDungeon *this,int param_1,int param_2,CMap *param_3)

{
  int iVar1;
  pair local_cc [4];
  pair<int_const,CMap*> local_c8 [8];
  undefined4 local_c0;
  pair local_bc [4];
  pair<int_const,CMap*> local_b8 [8];
  undefined4 local_b0;
  pair local_ac [4];
  pair<int_const,CMap*> local_a8 [8];
  undefined4 local_a0;
  pair local_9c [4];
  pair<int_const,CMap*> local_98 [8];
  undefined4 local_90;
  pair local_8c [4];
  pair<int_const,CMap*> local_88 [8];
  undefined4 local_80;
  pair local_7c [4];
  pair<int_const,CMap*> local_78 [8];
  undefined4 local_70;
  pair local_6c [4];
  pair<int_const,CMap*> local_68 [8];
  undefined4 local_60;
  pair local_5c [4];
  pair<int_const,CMap*> local_58 [8];
  undefined4 local_50;
  pair local_4c [4];
  pair<int_const,CMap*> local_48 [8];
  undefined4 local_40;
  pair local_3c [4];
  pair<int_const,CMap*> local_38 [8];
  undefined4 local_30;
  pair local_2c [4];
  pair<int_const,CMap*> local_28 [8];
  undefined4 local_20;
  pair local_1c [4];
  pair<int_const,CMap*> local_18 [8];
  undefined4 local_10 [3];
  
  iVar1 = CMap::get_map_type(param_3);
  if (iVar1 == 0) {
    if ((param_2 & 1U) != 0) {
      local_c0 = 1;
      std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                (local_c8,(PATH_DIRECTION *)&local_c0,&param_3);
      std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                (local_cc);
    }
    if ((param_2 & 2U) != 0) {
      local_b0 = 2;
      std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                (local_b8,(PATH_DIRECTION *)&local_b0,&param_3);
      std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                (local_bc);
    }
    if ((param_2 & 4U) != 0) {
      local_a0 = 4;
      std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                (local_a8,(PATH_DIRECTION *)&local_a0,&param_3);
      std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                (local_ac);
    }
    if ((param_2 & 8U) != 0) {
      local_90 = 8;
      std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                (local_98,(PATH_DIRECTION *)&local_90,&param_3);
      std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                (local_9c);
    }
  }
  else {
    iVar1 = CMap::get_map_type(param_3);
    if (iVar1 == 2) {
      if ((param_2 & 1U) != 0) {
        local_80 = 1;
        std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                  (local_88,(PATH_DIRECTION *)&local_80,&param_3);
        std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                  (local_8c);
      }
      if ((param_2 & 2U) != 0) {
        local_70 = 2;
        std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                  (local_78,(PATH_DIRECTION *)&local_70,&param_3);
        std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                  (local_7c);
      }
      if ((param_2 & 4U) != 0) {
        local_60 = 4;
        std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                  (local_68,(PATH_DIRECTION *)&local_60,&param_3);
        std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                  (local_6c);
      }
      if ((param_2 & 8U) != 0) {
        local_50 = 8;
        std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                  (local_58,(PATH_DIRECTION *)&local_50,&param_3);
        std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                  (local_5c);
      }
      this[0x624] = (CDungeon)0x1;
    }
    else {
      if ((param_2 & 1U) != 0) {
        local_40 = 1;
        std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                  (local_48,(PATH_DIRECTION *)&local_40,&param_3);
        std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                  (local_4c);
      }
      if ((param_2 & 2U) != 0) {
        local_30 = 2;
        std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                  (local_38,(PATH_DIRECTION *)&local_30,&param_3);
        std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                  (local_3c);
      }
      if ((param_2 & 4U) != 0) {
        local_20 = 4;
        std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                  (local_28,(PATH_DIRECTION *)&local_20,&param_3);
        std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                  (local_2c);
      }
      if ((param_2 & 8U) != 0) {
        local_10[0] = 8;
        std::pair<int_const,CMap*>::pair<PATH_DIRECTION,CMap*&>
                  (local_18,(PATH_DIRECTION *)local_10,&param_3);
        std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>::insert
                  (local_1c);
      }
    }
  }
  return;
}

```

---

## IsEnterEachMap

```asm
// === 08365278 CDungeon::IsEnterEachMap  [0x08365278-0x8365287] ===
 8365278:	55                   	push   %ebp
 8365279:	89 e5                	mov    %esp,%ebp
 836527b:	8b 45 08             	mov    0x8(%ebp),%eax
 836527e:	0f b6 80 d0 06 00 00 	movzbl 0x6d0(%eax),%eax
 8365285:	5d                   	pop    %ebp
 8365286:	c3                   	ret
 8365287:	90                   	nop

```

```c
// CDungeon::IsEnterEachMap @ 0x8365278

/* CDungeon::IsEnterEachMap() const */

CDungeon __thiscall CDungeon::IsEnterEachMap(CDungeon *this)

{
  return this[0x6d0];
}

```

---

## IsOpenEvenEnemy

```asm
// === 08365288 CDungeon::IsOpenEvenEnemy  [0x08365288-0x8365297] ===
 8365288:	55                   	push   %ebp
 8365289:	89 e5                	mov    %esp,%ebp
 836528b:	8b 45 08             	mov    0x8(%ebp),%eax
 836528e:	0f b6 80 d1 06 00 00 	movzbl 0x6d1(%eax),%eax
 8365295:	5d                   	pop    %ebp
 8365296:	c3                   	ret
 8365297:	90                   	nop

```

```c
// CDungeon::IsOpenEvenEnemy @ 0x8365288

/* CDungeon::IsOpenEvenEnemy() const */

CDungeon __thiscall CDungeon::IsOpenEvenEnemy(CDungeon *this)

{
  return this[0x6d1];
}

```

---

## IsOpenScheduleDungeon

```asm
// === 0834d2d4 CDungeon::IsOpenScheduleDungeon  [0x0834d2d4-0x834d31f] ===
 834d2d4:	55                   	push   %ebp
 834d2d5:	89 e5                	mov    %esp,%ebp
 834d2d7:	83 ec 28             	sub    $0x28,%esp
 834d2da:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 834d2e1:	8b 45 08             	mov    0x8(%ebp),%eax
 834d2e4:	8b 40 08             	mov    0x8(%eax),%eax
 834d2e7:	89 c2                	mov    %eax,%edx
 834d2e9:	a1 84 f7 41 09       	mov    0x941f784,%eax
 834d2ee:	89 54 24 08          	mov    %edx,0x8(%esp)
 834d2f2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 834d2f9:	00 
 834d2fa:	89 04 24             	mov    %eax,(%esp)
 834d2fd:	e8 e0 93 dd ff       	call   81266e2 <_ZNK21CDailyScheduleManager16GetScheduleStateE18_DailyScheduleTypej>
 834d302:	89 45 f4             	mov    %eax,-0xc(%ebp)
 834d305:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 834d309:	74 06                	je     834d311 <_ZNK8CDungeon21IsOpenScheduleDungeonEv+0x3d>
 834d30b:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 834d30f:	75 07                	jne    834d318 <_ZNK8CDungeon21IsOpenScheduleDungeonEv+0x44>
 834d311:	b8 01 00 00 00       	mov    $0x1,%eax
 834d316:	eb 05                	jmp    834d31d <_ZNK8CDungeon21IsOpenScheduleDungeonEv+0x49>
 834d318:	b8 00 00 00 00       	mov    $0x0,%eax
 834d31d:	c9                   	leave
 834d31e:	c3                   	ret
 834d31f:	90                   	nop

```

```c
// CDungeon::IsOpenScheduleDungeon @ 0x834d2d4

/* CDungeon::IsOpenScheduleDungeon() const */

undefined4 __thiscall CDungeon::IsOpenScheduleDungeon(CDungeon *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CDailyScheduleManager::GetScheduleState
                    (GlobalData::s_DailyScheduleManager,0,*(undefined4 *)(this + 8));
  if ((iVar1 == 1) || (iVar1 == 2)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## VerifyMaze

```asm
// === 0834c9f0 CDungeon::VerifyMaze  [0x0834c9f0-0x834cb7b] ===
 834c9f0:	55                   	push   %ebp
 834c9f1:	89 e5                	mov    %esp,%ebp
 834c9f3:	56                   	push   %esi
 834c9f4:	53                   	push   %ebx
 834c9f5:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 834c9fb:	8b 45 08             	mov    0x8(%ebp),%eax
 834c9fe:	8b 40 08             	mov    0x8(%eax),%eax
 834ca01:	3d cf 07 00 00       	cmp    $0x7cf,%eax
 834ca06:	7e 0a                	jle    834ca12 <_ZNK8CDungeon10VerifyMazeEv+0x22>
 834ca08:	bb 01 00 00 00       	mov    $0x1,%ebx
 834ca0d:	e9 5d 01 00 00       	jmp    834cb6f <_ZNK8CDungeon10VerifyMazeEv+0x17f>
 834ca12:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 834ca19:	eb 42                	jmp    834ca5d <_ZNK8CDungeon10VerifyMazeEv+0x6d>
 834ca1b:	8b 45 08             	mov    0x8(%ebp),%eax
 834ca1e:	8d 90 2c 06 00 00    	lea    0x62c(%eax),%edx
 834ca24:	8b 45 e8             	mov    -0x18(%ebp),%eax
 834ca27:	89 44 24 04          	mov    %eax,0x4(%esp)
 834ca2b:	89 14 24             	mov    %edx,(%esp)
 834ca2e:	e8 81 d7 03 00       	call   838a1b4 <_ZNKSt6vectorI10MazeScriptSaIS0_EEixEj>
 834ca33:	89 45 ec             	mov    %eax,-0x14(%ebp)
 834ca36:	8b 45 ec             	mov    -0x14(%ebp),%eax
 834ca39:	89 44 24 04          	mov    %eax,0x4(%esp)
 834ca3d:	8b 45 08             	mov    0x8(%ebp),%eax
 834ca40:	89 04 24             	mov    %eax,(%esp)
 834ca43:	e8 34 01 00 00       	call   834cb7c <_ZNK8CDungeon10VerifyMazeERK10MazeScript>
 834ca48:	83 f0 01             	xor    $0x1,%eax
 834ca4b:	84 c0                	test   %al,%al
 834ca4d:	74 0a                	je     834ca59 <_ZNK8CDungeon10VerifyMazeEv+0x69>
 834ca4f:	bb 00 00 00 00       	mov    $0x0,%ebx
 834ca54:	e9 16 01 00 00       	jmp    834cb6f <_ZNK8CDungeon10VerifyMazeEv+0x17f>
 834ca59:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 834ca5d:	8b 45 08             	mov    0x8(%ebp),%eax
 834ca60:	05 2c 06 00 00       	add    $0x62c,%eax
 834ca65:	89 04 24             	mov    %eax,(%esp)
 834ca68:	e8 25 d7 03 00       	call   838a192 <_ZNKSt6vectorI10MazeScriptSaIS0_EE4sizeEv>
 834ca6d:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 834ca70:	0f 97 c0             	seta   %al
 834ca73:	84 c0                	test   %al,%al
 834ca75:	75 a4                	jne    834ca1b <_ZNK8CDungeon10VerifyMazeEv+0x2b>
 834ca77:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 834ca7e:	e9 d8 00 00 00       	jmp    834cb5b <_ZNK8CDungeon10VerifyMazeEv+0x16b>
 834ca83:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 834ca8a:	e9 9b 00 00 00       	jmp    834cb2a <_ZNK8CDungeon10VerifyMazeEv+0x13a>
 834ca8f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 834ca92:	89 d0                	mov    %edx,%eax
 834ca94:	01 c0                	add    %eax,%eax
 834ca96:	01 d0                	add    %edx,%eax
 834ca98:	c1 e0 02             	shl    $0x2,%eax
 834ca9b:	05 30 06 00 00       	add    $0x630,%eax
 834caa0:	03 45 08             	add    0x8(%ebp),%eax
 834caa3:	8d 50 08             	lea    0x8(%eax),%edx
 834caa6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834caa9:	89 44 24 04          	mov    %eax,0x4(%esp)
 834caad:	89 14 24             	mov    %edx,(%esp)
 834cab0:	e8 ff d6 03 00       	call   838a1b4 <_ZNKSt6vectorI10MazeScriptSaIS0_EEixEj>
 834cab5:	89 44 24 04          	mov    %eax,0x4(%esp)
 834cab9:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 834cabf:	89 04 24             	mov    %eax,(%esp)
 834cac2:	e8 c3 a2 02 00       	call   8376d8a <_ZN10MazeScriptC1ERKS_>
 834cac7:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 834cacd:	89 44 24 04          	mov    %eax,0x4(%esp)
 834cad1:	8b 45 08             	mov    0x8(%ebp),%eax
 834cad4:	89 04 24             	mov    %eax,(%esp)
 834cad7:	e8 a0 00 00 00       	call   834cb7c <_ZNK8CDungeon10VerifyMazeERK10MazeScript>
 834cadc:	83 f0 01             	xor    $0x1,%eax
 834cadf:	84 c0                	test   %al,%al
 834cae1:	74 0c                	je     834caef <_ZNK8CDungeon10VerifyMazeEv+0xff>
 834cae3:	bb 00 00 00 00       	mov    $0x0,%ebx
 834cae8:	be 00 00 00 00       	mov    $0x0,%esi
 834caed:	eb 25                	jmp    834cb14 <_ZNK8CDungeon10VerifyMazeEv+0x124>
 834caef:	be 01 00 00 00       	mov    $0x1,%esi
 834caf4:	eb 1e                	jmp    834cb14 <_ZNK8CDungeon10VerifyMazeEv+0x124>
 834caf6:	89 d3                	mov    %edx,%ebx
 834caf8:	89 c6                	mov    %eax,%esi
 834cafa:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 834cb00:	89 04 24             	mov    %eax,(%esp)
 834cb03:	e8 f8 a3 02 00       	call   8376f00 <_ZN10MazeScriptD1Ev>
 834cb08:	89 f0                	mov    %esi,%eax
 834cb0a:	89 da                	mov    %ebx,%edx
 834cb0c:	89 04 24             	mov    %eax,(%esp)
 834cb0f:	e8 3c 6c 79 00       	call   8ae3750 <_Unwind_Resume>
 834cb14:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 834cb1a:	89 04 24             	mov    %eax,(%esp)
 834cb1d:	e8 de a3 02 00       	call   8376f00 <_ZN10MazeScriptD1Ev>
 834cb22:	85 f6                	test   %esi,%esi
 834cb24:	74 49                	je     834cb6f <_ZNK8CDungeon10VerifyMazeEv+0x17f>
 834cb26:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 834cb2a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 834cb2d:	89 d0                	mov    %edx,%eax
 834cb2f:	01 c0                	add    %eax,%eax
 834cb31:	01 d0                	add    %edx,%eax
 834cb33:	c1 e0 02             	shl    $0x2,%eax
 834cb36:	05 30 06 00 00       	add    $0x630,%eax
 834cb3b:	03 45 08             	add    0x8(%ebp),%eax
 834cb3e:	83 c0 08             	add    $0x8,%eax
 834cb41:	89 04 24             	mov    %eax,(%esp)
 834cb44:	e8 49 d6 03 00       	call   838a192 <_ZNKSt6vectorI10MazeScriptSaIS0_EE4sizeEv>
 834cb49:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 834cb4c:	0f 97 c0             	seta   %al
 834cb4f:	84 c0                	test   %al,%al
 834cb51:	0f 85 38 ff ff ff    	jne    834ca8f <_ZNK8CDungeon10VerifyMazeEv+0x9f>
 834cb57:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 834cb5b:	83 7d f0 01          	cmpl   $0x1,-0x10(%ebp)
 834cb5f:	0f 9e c0             	setle  %al
 834cb62:	84 c0                	test   %al,%al
 834cb64:	0f 85 19 ff ff ff    	jne    834ca83 <_ZNK8CDungeon10VerifyMazeEv+0x93>
 834cb6a:	bb 01 00 00 00       	mov    $0x1,%ebx
 834cb6f:	89 d8                	mov    %ebx,%eax
 834cb71:	81 c4 a0 00 00 00    	add    $0xa0,%esp
 834cb77:	5b                   	pop    %ebx
 834cb78:	5e                   	pop    %esi
 834cb79:	5d                   	pop    %ebp
 834cb7a:	c3                   	ret
 834cb7b:	90                   	nop

```

```c
// CDungeon::VerifyMaze @ 0x834c9f0

/* CDungeon::VerifyMaze() const */

undefined4 __thiscall CDungeon::VerifyMaze(CDungeon *this)

{
  char cVar1;
  uint uVar2;
  MazeScript *pMVar3;
  undefined4 unaff_EBX;
  MazeScript local_90 [116];
  uint local_1c;
  MazeScript *local_18;
  int local_14;
  uint local_10;
  
  if (*(int *)(this + 8) < 2000) {
    local_1c = 0;
    while (uVar2 = std::vector<MazeScript,std::allocator<MazeScript>>::size
                             ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c)),
          local_1c < uVar2) {
      local_18 = (MazeScript *)
                 std::vector<MazeScript,std::allocator<MazeScript>>::operator[]
                           ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c),local_1c
                           );
      cVar1 = VerifyMaze(this,local_18);
      if (cVar1 != '\x01') {
        return 0;
      }
      local_1c = local_1c + 1;
    }
    for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
      local_10 = 0;
      while (uVar2 = std::vector<MazeScript,std::allocator<MazeScript>>::size
                               ((vector<MazeScript,std::allocator<MazeScript>> *)
                                (this + local_14 * 0xc + 0x638)), local_10 < uVar2) {
        pMVar3 = (MazeScript *)
                 std::vector<MazeScript,std::allocator<MazeScript>>::operator[]
                           ((vector<MazeScript,std::allocator<MazeScript>> *)
                            (this + local_14 * 0xc + 0x638),local_10);
        MazeScript::MazeScript(local_90,pMVar3);
                    /* try { // try from 0834cad7 to 0834cadb has its CatchHandler @ 0834caf6 */
        cVar1 = VerifyMaze(this,local_90);
        if (cVar1 != '\x01') {
          unaff_EBX = 0;
        }
        MazeScript::~MazeScript(local_90);
        if (cVar1 != '\x01') {
          return unaff_EBX;
        }
        local_10 = local_10 + 1;
      }
    }
  }
  return 1;
}

```

---

## VerifyMaze_0834cb7c

```asm
// === 0834cb7c CDungeon::VerifyMaze  [0x0834cb7c-0x834d06b] ===
 834cb7c:	55                   	push   %ebp
 834cb7d:	89 e5                	mov    %esp,%ebp
 834cb7f:	53                   	push   %ebx
 834cb80:	81 ec 94 00 00 00    	sub    $0x94,%esp
 834cb86:	8b 45 0c             	mov    0xc(%ebp),%eax
 834cb89:	8b 00                	mov    (%eax),%eax
 834cb8b:	83 f8 01             	cmp    $0x1,%eax
 834cb8e:	75 15                	jne    834cba5 <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x29>
 834cb90:	8b 45 0c             	mov    0xc(%ebp),%eax
 834cb93:	8b 40 04             	mov    0x4(%eax),%eax
 834cb96:	83 f8 01             	cmp    $0x1,%eax
 834cb99:	75 0a                	jne    834cba5 <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x29>
 834cb9b:	b8 01 00 00 00       	mov    $0x1,%eax
 834cba0:	e9 c1 04 00 00       	jmp    834d066 <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x4ea>
 834cba5:	8b 45 0c             	mov    0xc(%ebp),%eax
 834cba8:	83 c0 14             	add    $0x14,%eax
 834cbab:	89 04 24             	mov    %eax,(%esp)
 834cbae:	e8 61 0c d9 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 834cbb3:	85 c0                	test   %eax,%eax
 834cbb5:	0f 94 c0             	sete   %al
 834cbb8:	84 c0                	test   %al,%al
 834cbba:	74 4a                	je     834cc06 <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x8a>
 834cbbc:	8b 45 0c             	mov    0xc(%ebp),%eax
 834cbbf:	8b 50 64             	mov    0x64(%eax),%edx
 834cbc2:	8b 45 08             	mov    0x8(%ebp),%eax
 834cbc5:	8b 40 08             	mov    0x8(%eax),%eax
 834cbc8:	89 54 24 18          	mov    %edx,0x18(%esp)
 834cbcc:	89 44 24 14          	mov    %eax,0x14(%esp)
 834cbd0:	c7 44 24 10 58 fd c2 	movl   $0x8c2fd58,0x10(%esp)
 834cbd7:	08 
 834cbd8:	c7 44 24 0c 3e 08 00 	movl   $0x83e,0xc(%esp)
 834cbdf:	00 
 834cbe0:	c7 44 24 08 c0 48 c3 	movl   $0x8c348c0,0x8(%esp)
 834cbe7:	08 
 834cbe8:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 834cbef:	08 
 834cbf0:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 834cbf7:	e8 0e 70 78 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 834cbfc:	b8 00 00 00 00       	mov    $0x0,%eax
 834cc01:	e9 60 04 00 00       	jmp    834d066 <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x4ea>
 834cc06:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 834cc0d:	e9 b7 00 00 00       	jmp    834ccc9 <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x14d>
 834cc12:	8b 45 0c             	mov    0xc(%ebp),%eax
 834cc15:	8d 50 14             	lea    0x14(%eax),%edx
 834cc18:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 834cc1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 834cc1f:	89 14 24             	mov    %edx,(%esp)
 834cc22:	e8 eb 7e e6 ff       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 834cc27:	8b 50 04             	mov    0x4(%eax),%edx
 834cc2a:	8b 00                	mov    (%eax),%eax
 834cc2c:	89 45 ac             	mov    %eax,-0x54(%ebp)
 834cc2f:	89 55 b0             	mov    %edx,-0x50(%ebp)
 834cc32:	8b 55 b0             	mov    -0x50(%ebp),%edx
 834cc35:	8b 45 ac             	mov    -0x54(%ebp),%eax
 834cc38:	89 54 24 08          	mov    %edx,0x8(%esp)
 834cc3c:	89 44 24 04          	mov    %eax,0x4(%esp)
 834cc40:	8b 45 0c             	mov    0xc(%ebp),%eax
 834cc43:	89 04 24             	mov    %eax,(%esp)
 834cc46:	e8 77 e1 ed ff       	call   822adc2 <_ZNK10MazeScript8getGridREii>
 834cc4b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 834cc4e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 834cc51:	8b 10                	mov    (%eax),%edx
 834cc53:	89 d0                	mov    %edx,%eax
 834cc55:	c1 e0 02             	shl    $0x2,%eax
 834cc58:	01 d0                	add    %edx,%eax
 834cc5a:	c1 e0 02             	shl    $0x2,%eax
 834cc5d:	83 c0 60             	add    $0x60,%eax
 834cc60:	03 45 08             	add    0x8(%ebp),%eax
 834cc63:	83 c0 04             	add    $0x4,%eax
 834cc66:	89 04 24             	mov    %eax,(%esp)
 834cc69:	e8 8a d6 03 00       	call   838a2f8 <_ZNK9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EE4sizeEv>
 834cc6e:	85 c0                	test   %eax,%eax
 834cc70:	0f 94 c0             	sete   %al
 834cc73:	84 c0                	test   %al,%al
 834cc75:	74 4e                	je     834ccc5 <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x149>
 834cc77:	8b 5d b0             	mov    -0x50(%ebp),%ebx
 834cc7a:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 834cc7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 834cc80:	8b 50 64             	mov    0x64(%eax),%edx
 834cc83:	8b 45 08             	mov    0x8(%ebp),%eax
 834cc86:	8b 40 08             	mov    0x8(%eax),%eax
 834cc89:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 834cc8d:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 834cc91:	89 54 24 18          	mov    %edx,0x18(%esp)
 834cc95:	89 44 24 14          	mov    %eax,0x14(%esp)
 834cc99:	c7 44 24 10 a4 fd c2 	movl   $0x8c2fda4,0x10(%esp)
 834cca0:	08 
 834cca1:	c7 44 24 0c 47 08 00 	movl   $0x847,0xc(%esp)
 834cca8:	00 
 834cca9:	c7 44 24 08 c0 48 c3 	movl   $0x8c348c0,0x8(%esp)
 834ccb0:	08 
 834ccb1:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 834ccb8:	08 
 834ccb9:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 834ccc0:	e8 45 6f 78 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 834ccc5:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 834ccc9:	8b 45 0c             	mov    0xc(%ebp),%eax
 834cccc:	83 c0 14             	add    $0x14,%eax
 834cccf:	89 04 24             	mov    %eax,(%esp)
 834ccd2:	e8 3d 0b d9 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 834ccd7:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 834ccda:	0f 97 c0             	seta   %al
 834ccdd:	84 c0                	test   %al,%al
 834ccdf:	0f 85 2d ff ff ff    	jne    834cc12 <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x96>
 834cce5:	8b 45 0c             	mov    0xc(%ebp),%eax
 834cce8:	83 c0 20             	add    $0x20,%eax
 834cceb:	89 04 24             	mov    %eax,(%esp)
 834ccee:	e8 21 0b d9 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 834ccf3:	85 c0                	test   %eax,%eax
 834ccf5:	0f 94 c0             	sete   %al
 834ccf8:	84 c0                	test   %al,%al
 834ccfa:	74 4a                	je     834cd46 <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x1ca>
 834ccfc:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ccff:	8b 50 64             	mov    0x64(%eax),%edx
 834cd02:	8b 45 08             	mov    0x8(%ebp),%eax
 834cd05:	8b 40 08             	mov    0x8(%eax),%eax
 834cd08:	89 54 24 18          	mov    %edx,0x18(%esp)
 834cd0c:	89 44 24 14          	mov    %eax,0x14(%esp)
 834cd10:	c7 44 24 10 f0 fd c2 	movl   $0x8c2fdf0,0x10(%esp)
 834cd17:	08 
 834cd18:	c7 44 24 0c 4e 08 00 	movl   $0x84e,0xc(%esp)
 834cd1f:	00 
 834cd20:	c7 44 24 08 c0 48 c3 	movl   $0x8c348c0,0x8(%esp)
 834cd27:	08 
 834cd28:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 834cd2f:	08 
 834cd30:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 834cd37:	e8 ce 6e 78 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 834cd3c:	b8 00 00 00 00       	mov    $0x0,%eax
 834cd41:	e9 20 03 00 00       	jmp    834d066 <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x4ea>
 834cd46:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 834cd4d:	e9 b8 00 00 00       	jmp    834ce0a <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x28e>
 834cd52:	8b 45 0c             	mov    0xc(%ebp),%eax
 834cd55:	8d 50 20             	lea    0x20(%eax),%edx
 834cd58:	8b 45 ec             	mov    -0x14(%ebp),%eax
 834cd5b:	89 44 24 04          	mov    %eax,0x4(%esp)
 834cd5f:	89 14 24             	mov    %edx,(%esp)
 834cd62:	e8 ab 7d e6 ff       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 834cd67:	8b 50 04             	mov    0x4(%eax),%edx
 834cd6a:	8b 00                	mov    (%eax),%eax
 834cd6c:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 834cd6f:	89 55 a8             	mov    %edx,-0x58(%ebp)
 834cd72:	8b 55 a8             	mov    -0x58(%ebp),%edx
 834cd75:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 834cd78:	89 54 24 08          	mov    %edx,0x8(%esp)
 834cd7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 834cd80:	8b 45 0c             	mov    0xc(%ebp),%eax
 834cd83:	89 04 24             	mov    %eax,(%esp)
 834cd86:	e8 37 e0 ed ff       	call   822adc2 <_ZNK10MazeScript8getGridREii>
 834cd8b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 834cd8e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 834cd91:	8b 10                	mov    (%eax),%edx
 834cd93:	89 d0                	mov    %edx,%eax
 834cd95:	01 c0                	add    %eax,%eax
 834cd97:	01 d0                	add    %edx,%eax
 834cd99:	c1 e0 03             	shl    $0x3,%eax
 834cd9c:	05 20 03 00 00       	add    $0x320,%eax
 834cda1:	03 45 08             	add    0x8(%ebp),%eax
 834cda4:	83 c0 04             	add    $0x4,%eax
 834cda7:	89 04 24             	mov    %eax,(%esp)
 834cdaa:	e8 49 d4 03 00       	call   838a1f8 <_ZNKSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 834cdaf:	85 c0                	test   %eax,%eax
 834cdb1:	0f 94 c0             	sete   %al
 834cdb4:	84 c0                	test   %al,%al
 834cdb6:	74 4e                	je     834ce06 <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x28a>
 834cdb8:	8b 5d a8             	mov    -0x58(%ebp),%ebx
 834cdbb:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 834cdbe:	8b 45 0c             	mov    0xc(%ebp),%eax
 834cdc1:	8b 50 64             	mov    0x64(%eax),%edx
 834cdc4:	8b 45 08             	mov    0x8(%ebp),%eax
 834cdc7:	8b 40 08             	mov    0x8(%eax),%eax
 834cdca:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 834cdce:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 834cdd2:	89 54 24 18          	mov    %edx,0x18(%esp)
 834cdd6:	89 44 24 14          	mov    %eax,0x14(%esp)
 834cdda:	c7 44 24 10 3c fe c2 	movl   $0x8c2fe3c,0x10(%esp)
 834cde1:	08 
 834cde2:	c7 44 24 0c 57 08 00 	movl   $0x857,0xc(%esp)
 834cde9:	00 
 834cdea:	c7 44 24 08 c0 48 c3 	movl   $0x8c348c0,0x8(%esp)
 834cdf1:	08 
 834cdf2:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 834cdf9:	08 
 834cdfa:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 834ce01:	e8 04 6e 78 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 834ce06:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 834ce0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ce0d:	83 c0 20             	add    $0x20,%eax
 834ce10:	89 04 24             	mov    %eax,(%esp)
 834ce13:	e8 fc 09 d9 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 834ce18:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 834ce1b:	0f 97 c0             	seta   %al
 834ce1e:	84 c0                	test   %al,%al
 834ce20:	0f 85 2c ff ff ff    	jne    834cd52 <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x1d6>
 834ce26:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 834ce2d:	e9 1a 02 00 00       	jmp    834d04c <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x4d0>
 834ce32:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 834ce39:	e9 ef 01 00 00       	jmp    834d02d <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x4b1>
 834ce3e:	8b 55 9c             	mov    -0x64(%ebp),%edx
 834ce41:	8b 45 a0             	mov    -0x60(%ebp),%eax
 834ce44:	89 54 24 08          	mov    %edx,0x8(%esp)
 834ce48:	89 44 24 04          	mov    %eax,0x4(%esp)
 834ce4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ce4f:	89 04 24             	mov    %eax,(%esp)
 834ce52:	e8 6b df ed ff       	call   822adc2 <_ZNK10MazeScript8getGridREii>
 834ce57:	89 45 f4             	mov    %eax,-0xc(%ebp)
 834ce5a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834ce5d:	8b 00                	mov    (%eax),%eax
 834ce5f:	85 c0                	test   %eax,%eax
 834ce61:	0f 84 b6 01 00 00    	je     834d01d <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x4a1>
 834ce67:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ce6a:	8d 50 14             	lea    0x14(%eax),%edx
 834ce6d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834ce70:	89 54 24 04          	mov    %edx,0x4(%esp)
 834ce74:	89 04 24             	mov    %eax,(%esp)
 834ce77:	e8 d0 43 dc ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 834ce7c:	83 ec 04             	sub    $0x4,%esp
 834ce7f:	8d 45 9c             	lea    -0x64(%ebp),%eax
 834ce82:	89 44 24 08          	mov    %eax,0x8(%esp)
 834ce86:	8d 45 a0             	lea    -0x60(%ebp),%eax
 834ce89:	89 44 24 04          	mov    %eax,0x4(%esp)
 834ce8d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 834ce90:	89 04 24             	mov    %eax,(%esp)
 834ce93:	e8 5a 9e d7 ff       	call   80c6cf2 <_ZNSt4pairIiiEC1IRiS2_EEOT_OT0_>
 834ce98:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ce9b:	8d 50 14             	lea    0x14(%eax),%edx
 834ce9e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 834cea1:	89 54 24 04          	mov    %edx,0x4(%esp)
 834cea5:	89 04 24             	mov    %eax,(%esp)
 834cea8:	e8 9f 43 dc ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 834cead:	83 ec 04             	sub    $0x4,%esp
 834ceb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ceb3:	8d 50 14             	lea    0x14(%eax),%edx
 834ceb6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 834ceb9:	89 54 24 04          	mov    %edx,0x4(%esp)
 834cebd:	89 04 24             	mov    %eax,(%esp)
 834cec0:	e8 5b 43 dc ff       	call   8111220 <_ZNKSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 834cec5:	83 ec 04             	sub    $0x4,%esp
 834cec8:	8d 45 b8             	lea    -0x48(%ebp),%eax
 834cecb:	8d 55 bc             	lea    -0x44(%ebp),%edx
 834cece:	89 54 24 0c          	mov    %edx,0xc(%esp)
 834ced2:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 834ced5:	89 54 24 08          	mov    %edx,0x8(%esp)
 834ced9:	8b 55 c8             	mov    -0x38(%ebp),%edx
 834cedc:	89 54 24 04          	mov    %edx,0x4(%esp)
 834cee0:	89 04 24             	mov    %eax,(%esp)
 834cee3:	e8 3f b1 ee ff       	call   8238027 <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS3_SaIS3_EEEES3_ET_SA_SA_RKT0_>
 834cee8:	83 ec 04             	sub    $0x4,%esp
 834ceeb:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834ceee:	89 44 24 04          	mov    %eax,0x4(%esp)
 834cef2:	8d 45 b8             	lea    -0x48(%ebp),%eax
 834cef5:	89 04 24             	mov    %eax,(%esp)
 834cef8:	e8 e8 69 e4 ff       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 834cefd:	84 c0                	test   %al,%al
 834ceff:	0f 85 1b 01 00 00    	jne    834d020 <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x4a4>
 834cf05:	8b 45 0c             	mov    0xc(%ebp),%eax
 834cf08:	8d 50 20             	lea    0x20(%eax),%edx
 834cf0b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 834cf0e:	89 54 24 04          	mov    %edx,0x4(%esp)
 834cf12:	89 04 24             	mov    %eax,(%esp)
 834cf15:	e8 32 43 dc ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 834cf1a:	83 ec 04             	sub    $0x4,%esp
 834cf1d:	8d 45 9c             	lea    -0x64(%ebp),%eax
 834cf20:	89 44 24 08          	mov    %eax,0x8(%esp)
 834cf24:	8d 45 a0             	lea    -0x60(%ebp),%eax
 834cf27:	89 44 24 04          	mov    %eax,0x4(%esp)
 834cf2b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 834cf2e:	89 04 24             	mov    %eax,(%esp)
 834cf31:	e8 bc 9d d7 ff       	call   80c6cf2 <_ZNSt4pairIiiEC1IRiS2_EEOT_OT0_>
 834cf36:	8b 45 0c             	mov    0xc(%ebp),%eax
 834cf39:	8d 50 20             	lea    0x20(%eax),%edx
 834cf3c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834cf3f:	89 54 24 04          	mov    %edx,0x4(%esp)
 834cf43:	89 04 24             	mov    %eax,(%esp)
 834cf46:	e8 01 43 dc ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 834cf4b:	83 ec 04             	sub    $0x4,%esp
 834cf4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 834cf51:	8d 50 20             	lea    0x20(%eax),%edx
 834cf54:	8d 45 e0             	lea    -0x20(%ebp),%eax
 834cf57:	89 54 24 04          	mov    %edx,0x4(%esp)
 834cf5b:	89 04 24             	mov    %eax,(%esp)
 834cf5e:	e8 bd 42 dc ff       	call   8111220 <_ZNKSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 834cf63:	83 ec 04             	sub    $0x4,%esp
 834cf66:	8d 45 d0             	lea    -0x30(%ebp),%eax
 834cf69:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 834cf6c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 834cf70:	8b 55 dc             	mov    -0x24(%ebp),%edx
 834cf73:	89 54 24 08          	mov    %edx,0x8(%esp)
 834cf77:	8b 55 e0             	mov    -0x20(%ebp),%edx
 834cf7a:	89 54 24 04          	mov    %edx,0x4(%esp)
 834cf7e:	89 04 24             	mov    %eax,(%esp)
 834cf81:	e8 a1 b0 ee ff       	call   8238027 <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS3_SaIS3_EEEES3_ET_SA_SA_RKT0_>
 834cf86:	83 ec 04             	sub    $0x4,%esp
 834cf89:	8d 45 cc             	lea    -0x34(%ebp),%eax
 834cf8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 834cf90:	8d 45 d0             	lea    -0x30(%ebp),%eax
 834cf93:	89 04 24             	mov    %eax,(%esp)
 834cf96:	e8 4a 69 e4 ff       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 834cf9b:	84 c0                	test   %al,%al
 834cf9d:	0f 85 80 00 00 00    	jne    834d023 <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x4a7>
 834cfa3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834cfa6:	8b 10                	mov    (%eax),%edx
 834cfa8:	89 d0                	mov    %edx,%eax
 834cfaa:	01 c0                	add    %eax,%eax
 834cfac:	01 d0                	add    %edx,%eax
 834cfae:	c1 e0 03             	shl    $0x3,%eax
 834cfb1:	05 a0 01 00 00       	add    $0x1a0,%eax
 834cfb6:	03 45 08             	add    0x8(%ebp),%eax
 834cfb9:	83 c0 04             	add    $0x4,%eax
 834cfbc:	89 04 24             	mov    %eax,(%esp)
 834cfbf:	e8 34 d2 03 00       	call   838a1f8 <_ZNKSt8multimapIiP4CMapSt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 834cfc4:	85 c0                	test   %eax,%eax
 834cfc6:	0f 94 c0             	sete   %al
 834cfc9:	84 c0                	test   %al,%al
 834cfcb:	74 57                	je     834d024 <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x4a8>
 834cfcd:	8b 5d 9c             	mov    -0x64(%ebp),%ebx
 834cfd0:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 834cfd3:	8b 45 0c             	mov    0xc(%ebp),%eax
 834cfd6:	8b 50 64             	mov    0x64(%eax),%edx
 834cfd9:	8b 45 08             	mov    0x8(%ebp),%eax
 834cfdc:	8b 40 08             	mov    0x8(%eax),%eax
 834cfdf:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 834cfe3:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 834cfe7:	89 54 24 18          	mov    %edx,0x18(%esp)
 834cfeb:	89 44 24 14          	mov    %eax,0x14(%esp)
 834cfef:	c7 44 24 10 88 fe c2 	movl   $0x8c2fe88,0x10(%esp)
 834cff6:	08 
 834cff7:	c7 44 24 0c 6b 08 00 	movl   $0x86b,0xc(%esp)
 834cffe:	00 
 834cfff:	c7 44 24 08 c0 48 c3 	movl   $0x8c348c0,0x8(%esp)
 834d006:	08 
 834d007:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 834d00e:	08 
 834d00f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 834d016:	e8 ef 6b 78 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 834d01b:	eb 07                	jmp    834d024 <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x4a8>
 834d01d:	90                   	nop
 834d01e:	eb 04                	jmp    834d024 <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x4a8>
 834d020:	90                   	nop
 834d021:	eb 01                	jmp    834d024 <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x4a8>
 834d023:	90                   	nop
 834d024:	8b 45 9c             	mov    -0x64(%ebp),%eax
 834d027:	83 c0 01             	add    $0x1,%eax
 834d02a:	89 45 9c             	mov    %eax,-0x64(%ebp)
 834d02d:	8b 45 0c             	mov    0xc(%ebp),%eax
 834d030:	8b 50 04             	mov    0x4(%eax),%edx
 834d033:	8b 45 9c             	mov    -0x64(%ebp),%eax
 834d036:	39 c2                	cmp    %eax,%edx
 834d038:	0f 9f c0             	setg   %al
 834d03b:	84 c0                	test   %al,%al
 834d03d:	0f 85 fb fd ff ff    	jne    834ce3e <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x2c2>
 834d043:	8b 45 a0             	mov    -0x60(%ebp),%eax
 834d046:	83 c0 01             	add    $0x1,%eax
 834d049:	89 45 a0             	mov    %eax,-0x60(%ebp)
 834d04c:	8b 45 0c             	mov    0xc(%ebp),%eax
 834d04f:	8b 10                	mov    (%eax),%edx
 834d051:	8b 45 a0             	mov    -0x60(%ebp),%eax
 834d054:	39 c2                	cmp    %eax,%edx
 834d056:	0f 9f c0             	setg   %al
 834d059:	84 c0                	test   %al,%al
 834d05b:	0f 85 d1 fd ff ff    	jne    834ce32 <_ZNK8CDungeon10VerifyMazeERK10MazeScript+0x2b6>
 834d061:	b8 01 00 00 00       	mov    $0x1,%eax
 834d066:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 834d069:	c9                   	leave
 834d06a:	c3                   	ret
 834d06b:	90                   	nop

```

```c
// CDungeon::VerifyMaze @ 0x834cb7c

/* CDungeon::VerifyMaze(MazeScript const&) const */

undefined4 __thiscall CDungeon::VerifyMaze(CDungeon *this,MazeScript *param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [8];
  int local_40;
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [8];
  int local_28;
  undefined4 local_24;
  uint local_20;
  int *local_1c;
  uint local_18;
  int *local_14;
  int *local_10;
  
  piVar7 = (int *)&stack0xffffff64;
  if ((*(int *)param_1 == 1) && (*(int *)(param_1 + 4) == 1)) {
    uVar3 = 1;
  }
  else {
    iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (param_1 + 0x14));
    if (iVar4 == 0) {
      LogManager::logFormat
                (1,"data_manager.cpp","bool CDungeon::VerifyMaze(const MazeScript&) const",0x83e,
                 "dungeon index(%d) maze(%d) has error. (Start positions were not declared!)");
      uVar3 = 0;
    }
    else {
      local_20 = 0;
      while (uVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                               ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                (param_1 + 0x14)), local_20 < uVar5) {
        piVar6 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                        operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                   (param_1 + 0x14),local_20);
        local_54 = piVar6[1];
        local_58 = *piVar6;
        local_1c = (int *)MazeScript::getGridR(param_1,local_58,local_54);
        iVar4 = __gnu_cxx::
                hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
                size((hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>
                      *)(this + *local_1c * 0x14 + 100));
        if (iVar4 == 0) {
          LogManager::logFormat
                    (1,"data_manager.cpp","bool CDungeon::VerifyMaze(const MazeScript&) const",0x847
                     ,"dungeon index(%d) maze(%d) has error. (Can\'t found start map(grid: %d,%d)!)"
                    );
        }
        local_20 = local_20 + 1;
      }
      iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                         (param_1 + 0x20));
      if (iVar4 == 0) {
        LogManager::logFormat
                  (1,"data_manager.cpp","bool CDungeon::VerifyMaze(const MazeScript&) const",0x84e,
                   "dungeon index(%d) maze(%d) has error. (End positions were not declared!)");
        uVar3 = 0;
      }
      else {
        local_18 = 0;
        while (uVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                                 ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                  (param_1 + 0x20)), local_18 < uVar5) {
          piVar6 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                          operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                      *)(param_1 + 0x20),local_18);
          local_5c = piVar6[1];
          local_60 = *piVar6;
          local_14 = (int *)MazeScript::getGridR(param_1,local_60,local_5c);
          iVar4 = std::multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                  ::size((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                          *)(this + *local_14 * 0x18 + 0x324));
          if (iVar4 == 0) {
            LogManager::logFormat
                      (1,"data_manager.cpp","bool CDungeon::VerifyMaze(const MazeScript&) const",
                       0x857,
                       "dungeon index(%d) maze(%d) has error. (Can\'t found boss map(grid: %d,%d)!")
            ;
          }
          local_18 = local_18 + 1;
        }
        for (local_64 = 0; local_64 < *(int *)param_1; local_64 = local_64 + 1) {
          for (local_68 = 0; local_68 < *(int *)(param_1 + 4); local_68 = local_68 + 1) {
            piVar7[2] = local_68;
            piVar7[1] = local_64;
            *piVar7 = (int)param_1;
            piVar7[-1] = 0x834ce57;
            local_10 = (int *)MazeScript::getGridR((MazeScript *)*piVar7,piVar7[1],piVar7[2]);
            piVar6 = piVar7;
            if (*local_10 != 0) {
              piVar7[1] = (int)(param_1 + 0x14);
              *piVar7 = (int)local_50;
              piVar7[-1] = 0x834ce7c;
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
              piVar7[2] = (int)&local_68;
              piVar7[1] = (int)&local_64;
              *piVar7 = (int)local_48;
              piVar7[-1] = 0x834ce98;
              std::pair<int,int>::pair<int&,int&>
                        ((pair<int,int> *)*piVar7,(int *)piVar7[1],(int *)piVar7[2]);
              piVar7[1] = (int)(param_1 + 0x14);
              *piVar7 = (int)&local_40;
              piVar7[-1] = 0x834cead;
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
              piVar7[1] = (int)(param_1 + 0x14);
              *piVar7 = (int)&local_3c;
              piVar7[-1] = 0x834cec5;
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
              piVar7[3] = (int)local_48;
              piVar7[2] = local_40;
              piVar7[1] = local_3c;
              *piVar7 = (int)local_4c;
              piVar7[-1] = 0x834cee8;
              std::
              find<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>,std::pair<int,int>>
                        ();
              piVar6 = piVar7 + -1;
              *piVar7 = (int)local_50;
              piVar7[-1] = (int)local_4c;
              piVar7[-2] = 0x834cefd;
              bVar2 = __gnu_cxx::operator!=
                                ((__normal_iterator *)piVar7[-1],(__normal_iterator *)*piVar7);
              if (!bVar2) {
                *piVar7 = (int)(param_1 + 0x20);
                piVar7[-1] = (int)local_38;
                piVar7[-2] = 0x834cf1a;
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
                piVar7[1] = (int)&local_68;
                *piVar7 = (int)&local_64;
                piVar7[-1] = (int)local_30;
                piVar7[-2] = 0x834cf36;
                std::pair<int,int>::pair<int&,int&>
                          ((pair<int,int> *)piVar7[-1],(int *)*piVar7,(int *)piVar7[1]);
                *piVar7 = (int)(param_1 + 0x20);
                piVar7[-1] = (int)&local_28;
                piVar7[-2] = 0x834cf4b;
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
                *piVar7 = (int)(param_1 + 0x20);
                piVar7[-1] = (int)&local_24;
                piVar7[-2] = 0x834cf63;
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
                piVar7[2] = (int)local_30;
                piVar7[1] = local_28;
                *piVar7 = local_24;
                piVar7[-1] = (int)local_34;
                piVar7[-2] = 0x834cf86;
                std::
                find<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>,std::pair<int,int>>
                          ();
                piVar7[-1] = (int)local_38;
                piVar7[-2] = (int)local_34;
                piVar7[-3] = 0x834cf9b;
                bVar2 = __gnu_cxx::operator!=
                                  ((__normal_iterator *)piVar7[-2],(__normal_iterator *)piVar7[-1]);
                piVar6 = piVar7 + -2;
                if (!bVar2) {
                  piVar7[-2] = (int)(this + *local_10 * 0x18 + 0x1a4);
                  piVar7[-3] = 0x834cfc4;
                  iVar4 = std::
                          multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                          ::size((multimap<int,CMap*,std::less<int>,std::allocator<std::pair<int_const,CMap*>>>
                                  *)piVar7[-2]);
                  piVar6 = piVar7 + -2;
                  if (iVar4 == 0) {
                    iVar4 = *(int *)(param_1 + 100);
                    iVar1 = *(int *)(this + 8);
                    piVar7[6] = local_68;
                    piVar7[5] = local_64;
                    piVar7[4] = iVar4;
                    piVar7[3] = iVar1;
                    piVar7[2] = (int)
                                "dungeon index(%d) maze(%d) has error. (Can\'t found grid map(grid: %d,%d)!)"
                    ;
                    piVar7[1] = 0x86b;
                    *piVar7 = (int)"bool CDungeon::VerifyMaze(const MazeScript&) const";
                    piVar7[-1] = (int)"data_manager.cpp";
                    piVar7[-2] = 1;
                    piVar7[-3] = 0x834d01b;
                    LogManager::logFormat
                              (piVar7[-2],(char *)piVar7[-1],(char *)*piVar7,piVar7[1],
                               (char *)piVar7[2]);
                    piVar6 = piVar7 + -2;
                  }
                }
              }
            }
            piVar7 = piVar6;
          }
        }
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

```

---

## checkFreeRevivalCondition

```asm
// === 08365298 CDungeon::checkFreeRevivalCondition  [0x08365298-0x8365315] ===
 8365298:	55                   	push   %ebp
 8365299:	89 e5                	mov    %esp,%ebp
 836529b:	83 ec 28             	sub    $0x28,%esp
 836529e:	8b 45 08             	mov    0x8(%ebp),%eax
 83652a1:	8d 88 1c 09 00 00    	lea    0x91c(%eax),%ecx
 83652a7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83652aa:	8d 55 0c             	lea    0xc(%ebp),%edx
 83652ad:	89 54 24 08          	mov    %edx,0x8(%esp)
 83652b1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 83652b5:	89 04 24             	mov    %eax,(%esp)
 83652b8:	e8 97 08 03 00       	call   8395b54 <_ZNKSt3mapIi18UseCoinDungeonDiffSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 83652bd:	83 ec 04             	sub    $0x4,%esp
 83652c0:	8b 45 08             	mov    0x8(%ebp),%eax
 83652c3:	8d 90 1c 09 00 00    	lea    0x91c(%eax),%edx
 83652c9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 83652cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 83652d0:	89 04 24             	mov    %eax,(%esp)
 83652d3:	e8 a8 08 03 00       	call   8395b80 <_ZNKSt3mapIi18UseCoinDungeonDiffSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 83652d8:	83 ec 04             	sub    $0x4,%esp
 83652db:	8d 45 f4             	lea    -0xc(%ebp),%eax
 83652de:	89 44 24 04          	mov    %eax,0x4(%esp)
 83652e2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83652e5:	89 04 24             	mov    %eax,(%esp)
 83652e8:	e8 b9 08 03 00       	call   8395ba6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi18UseCoinDungeonDiffEEneERKS4_>
 83652ed:	84 c0                	test   %al,%al
 83652ef:	74 1d                	je     836530e <_ZNK8CDungeon25checkFreeRevivalConditionEi+0x76>
 83652f1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83652f4:	89 04 24             	mov    %eax,(%esp)
 83652f7:	e8 be 08 03 00       	call   8395bba <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi18UseCoinDungeonDiffEEptEv>
 83652fc:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8365300:	83 f0 01             	xor    $0x1,%eax
 8365303:	84 c0                	test   %al,%al
 8365305:	74 07                	je     836530e <_ZNK8CDungeon25checkFreeRevivalConditionEi+0x76>
 8365307:	b8 01 00 00 00       	mov    $0x1,%eax
 836530c:	eb 05                	jmp    8365313 <_ZNK8CDungeon25checkFreeRevivalConditionEi+0x7b>
 836530e:	b8 00 00 00 00       	mov    $0x0,%eax
 8365313:	c9                   	leave
 8365314:	c3                   	ret
 8365315:	90                   	nop

```

```c
// CDungeon::checkFreeRevivalCondition @ 0x8365298

/* CDungeon::checkFreeRevivalCondition(int) const */

undefined4 CDungeon::checkFreeRevivalCondition(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<int_const,UseCoinDungeonDiff>> local_14 [4];
  map<int,UseCoinDungeonDiff,std::less<int>,std::allocator<std::pair<int_const,UseCoinDungeonDiff>>>
  local_10 [12];
  
  std::
  map<int,UseCoinDungeonDiff,std::less<int>,std::allocator<std::pair<int_const,UseCoinDungeonDiff>>>
  ::find((int *)local_14);
  std::
  map<int,UseCoinDungeonDiff,std::less<int>,std::allocator<std::pair<int_const,UseCoinDungeonDiff>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,UseCoinDungeonDiff>>::operator!=
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  if ((cVar1 != '\0') &&
     (iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,UseCoinDungeonDiff>>::operator->
                        (local_14), *(char *)(iVar2 + 8) != '\x01')) {
    return 1;
  }
  return 0;
}

```

---

## getLimitCoinDiff

```asm
// === 08365316 CDungeon::getLimitCoinDiff  [0x08365316-0x83653af] ===
 8365316:	55                   	push   %ebp
 8365317:	89 e5                	mov    %esp,%ebp
 8365319:	83 ec 28             	sub    $0x28,%esp
 836531c:	8b 45 08             	mov    0x8(%ebp),%eax
 836531f:	05 1c 09 00 00       	add    $0x91c,%eax
 8365324:	89 04 24             	mov    %eax,(%esp)
 8365327:	e8 9c 08 03 00       	call   8395bc8 <_ZNKSt3mapIi18UseCoinDungeonDiffSt4lessIiESaISt4pairIKiS0_EEE4sizeEv>
 836532c:	85 c0                	test   %eax,%eax
 836532e:	0f 94 c0             	sete   %al
 8365331:	84 c0                	test   %al,%al
 8365333:	74 07                	je     836533c <_ZNK8CDungeon16getLimitCoinDiffEiRi+0x26>
 8365335:	b8 00 00 00 00       	mov    $0x0,%eax
 836533a:	eb 72                	jmp    83653ae <_ZNK8CDungeon16getLimitCoinDiffEiRi+0x98>
 836533c:	8b 45 08             	mov    0x8(%ebp),%eax
 836533f:	8d 88 1c 09 00 00    	lea    0x91c(%eax),%ecx
 8365345:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8365348:	8d 55 0c             	lea    0xc(%ebp),%edx
 836534b:	89 54 24 08          	mov    %edx,0x8(%esp)
 836534f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8365353:	89 04 24             	mov    %eax,(%esp)
 8365356:	e8 f9 07 03 00       	call   8395b54 <_ZNKSt3mapIi18UseCoinDungeonDiffSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 836535b:	83 ec 04             	sub    $0x4,%esp
 836535e:	8b 45 08             	mov    0x8(%ebp),%eax
 8365361:	8d 90 1c 09 00 00    	lea    0x91c(%eax),%edx
 8365367:	8d 45 f4             	lea    -0xc(%ebp),%eax
 836536a:	89 54 24 04          	mov    %edx,0x4(%esp)
 836536e:	89 04 24             	mov    %eax,(%esp)
 8365371:	e8 0a 08 03 00       	call   8395b80 <_ZNKSt3mapIi18UseCoinDungeonDiffSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8365376:	83 ec 04             	sub    $0x4,%esp
 8365379:	8d 45 f4             	lea    -0xc(%ebp),%eax
 836537c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8365380:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8365383:	89 04 24             	mov    %eax,(%esp)
 8365386:	e8 1b 08 03 00       	call   8395ba6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi18UseCoinDungeonDiffEEneERKS4_>
 836538b:	84 c0                	test   %al,%al
 836538d:	74 1a                	je     83653a9 <_ZNK8CDungeon16getLimitCoinDiffEiRi+0x93>
 836538f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8365392:	89 04 24             	mov    %eax,(%esp)
 8365395:	e8 20 08 03 00       	call   8395bba <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi18UseCoinDungeonDiffEEptEv>
 836539a:	8b 50 04             	mov    0x4(%eax),%edx
 836539d:	8b 45 10             	mov    0x10(%ebp),%eax
 83653a0:	89 10                	mov    %edx,(%eax)
 83653a2:	b8 01 00 00 00       	mov    $0x1,%eax
 83653a7:	eb 05                	jmp    83653ae <_ZNK8CDungeon16getLimitCoinDiffEiRi+0x98>
 83653a9:	b8 00 00 00 00       	mov    $0x0,%eax
 83653ae:	c9                   	leave
 83653af:	c3                   	ret

```

```c
// CDungeon::getLimitCoinDiff @ 0x8365316

/* CDungeon::getLimitCoinDiff(int, int&) const */

undefined4 __thiscall CDungeon::getLimitCoinDiff(CDungeon *this,int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_const_iterator<std::pair<int_const,UseCoinDungeonDiff>> local_14 [4];
  map<int,UseCoinDungeonDiff,std::less<int>,std::allocator<std::pair<int_const,UseCoinDungeonDiff>>>
  local_10 [12];
  
  iVar2 = std::
          map<int,UseCoinDungeonDiff,std::less<int>,std::allocator<std::pair<int_const,UseCoinDungeonDiff>>>
          ::size((map<int,UseCoinDungeonDiff,std::less<int>,std::allocator<std::pair<int_const,UseCoinDungeonDiff>>>
                  *)(this + 0x91c));
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    std::
    map<int,UseCoinDungeonDiff,std::less<int>,std::allocator<std::pair<int_const,UseCoinDungeonDiff>>>
    ::find((int *)local_14);
    std::
    map<int,UseCoinDungeonDiff,std::less<int>,std::allocator<std::pair<int_const,UseCoinDungeonDiff>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,UseCoinDungeonDiff>>::operator!=
                      (local_14,(_Rb_tree_const_iterator *)local_10);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,UseCoinDungeonDiff>>::operator->
                        (local_14);
      *param_2 = *(int *)(iVar2 + 4);
      uVar3 = 1;
    }
  }
  return uVar3;
}

```

---

## getTournamentRoundFatigue

```asm
// === 08365238 CDungeon::getTournamentRoundFatigue  [0x08365238-0x8365259] ===
 8365238:	55                   	push   %ebp
 8365239:	89 e5                	mov    %esp,%ebp
 836523b:	8b 45 08             	mov    0x8(%ebp),%eax
 836523e:	8b 80 a4 08 00 00    	mov    0x8a4(%eax),%eax
 8365244:	85 c0                	test   %eax,%eax
 8365246:	75 07                	jne    836524f <_ZNK8CDungeon25getTournamentRoundFatigueEv+0x17>
 8365248:	b8 01 00 00 00       	mov    $0x1,%eax
 836524d:	eb 09                	jmp    8365258 <_ZNK8CDungeon25getTournamentRoundFatigueEv+0x20>
 836524f:	8b 45 08             	mov    0x8(%ebp),%eax
 8365252:	8b 80 a4 08 00 00    	mov    0x8a4(%eax),%eax
 8365258:	5d                   	pop    %ebp
 8365259:	c3                   	ret

```

```c
// CDungeon::getTournamentRoundFatigue @ 0x8365238

/* CDungeon::getTournamentRoundFatigue() const */

undefined4 __thiscall CDungeon::getTournamentRoundFatigue(CDungeon *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x8a4) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined4 *)(this + 0x8a4);
  }
  return uVar1;
}

```

---

## get_clear_item

```asm
// === 0834c8c0 CDungeon::get_clear_item  [0x0834c8c0-0x834c95b] ===
 834c8c0:	55                   	push   %ebp
 834c8c1:	89 e5                	mov    %esp,%ebp
 834c8c3:	83 ec 38             	sub    $0x38,%esp
 834c8c6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 834c8cd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834c8d0:	89 04 24             	mov    %eax,(%esp)
 834c8d3:	e8 c4 a5 d7 ff       	call   80c6e9c <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiiEEC1Ev>
 834c8d8:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 834c8df:	e8 a3 52 36 00       	call   86b1b87 <_Z12get_rand_inti>
 834c8e4:	83 c0 01             	add    $0x1,%eax
 834c8e7:	89 45 ec             	mov    %eax,-0x14(%ebp)
 834c8ea:	8b 45 08             	mov    0x8(%ebp),%eax
 834c8ed:	8d 48 1c             	lea    0x1c(%eax),%ecx
 834c8f0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 834c8f3:	8d 55 ec             	lea    -0x14(%ebp),%edx
 834c8f6:	89 54 24 08          	mov    %edx,0x8(%esp)
 834c8fa:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834c8fe:	89 04 24             	mov    %eax,(%esp)
 834c901:	e8 b0 da 03 00       	call   838a3b6 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE11lower_boundERS3_>
 834c906:	83 ec 04             	sub    $0x4,%esp
 834c909:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 834c90c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 834c90f:	8b 45 08             	mov    0x8(%ebp),%eax
 834c912:	8d 50 1c             	lea    0x1c(%eax),%edx
 834c915:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834c918:	89 54 24 04          	mov    %edx,0x4(%esp)
 834c91c:	89 04 24             	mov    %eax,(%esp)
 834c91f:	e8 b2 a5 d7 ff       	call   80c6ed6 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 834c924:	83 ec 04             	sub    $0x4,%esp
 834c927:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834c92a:	89 44 24 04          	mov    %eax,0x4(%esp)
 834c92e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834c931:	89 04 24             	mov    %eax,(%esp)
 834c934:	e8 fb b3 d7 ff       	call   80c7d34 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEeqERKS3_>
 834c939:	84 c0                	test   %al,%al
 834c93b:	74 09                	je     834c946 <_ZNK8CDungeon14get_clear_itemEv+0x86>
 834c93d:	c7 45 f4 fe ff ff ff 	movl   $0xfffffffe,-0xc(%ebp)
 834c944:	eb 11                	jmp    834c957 <_ZNK8CDungeon14get_clear_itemEv+0x97>
 834c946:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834c949:	89 04 24             	mov    %eax,(%esp)
 834c94c:	e8 bf a5 d7 ff       	call   80c6f10 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEptEv>
 834c951:	8b 40 04             	mov    0x4(%eax),%eax
 834c954:	89 45 f4             	mov    %eax,-0xc(%ebp)
 834c957:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834c95a:	c9                   	leave
 834c95b:	c3                   	ret

```

```c
// CDungeon::get_clear_item @ 0x834c8c0

/* CDungeon::get_clear_item() const */

undefined4 __thiscall CDungeon::get_clear_item(CDungeon *this)

{
  char cVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_14 [4];
  undefined4 local_10;
  
  local_10 = 0;
  std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_1c);
  local_18 = get_rand_int(100);
  local_18 = local_18 + 1;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::lower_bound
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)&local_20,
             (int *)(this + 0x1c));
  local_1c = local_20;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_14);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator==
                    ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_1c,
                     (_Rb_tree_const_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_1c);
    local_10 = *(undefined4 *)(iVar2 + 4);
  }
  else {
    local_10 = 0xfffffffe;
  }
  return local_10;
}

```

---

## get_clear_item_0834c95c

```asm
// === 0834c95c CDungeon::get_clear_item  [0x0834c95c-0x834c9ef] ===
 834c95c:	55                   	push   %ebp
 834c95d:	89 e5                	mov    %esp,%ebp
 834c95f:	83 ec 38             	sub    $0x38,%esp
 834c962:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 834c969:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834c96c:	89 04 24             	mov    %eax,(%esp)
 834c96f:	e8 28 a5 d7 ff       	call   80c6e9c <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiiEEC1Ev>
 834c974:	8b 45 0c             	mov    0xc(%ebp),%eax
 834c977:	83 c0 01             	add    $0x1,%eax
 834c97a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 834c97d:	8b 45 08             	mov    0x8(%ebp),%eax
 834c980:	8d 48 1c             	lea    0x1c(%eax),%ecx
 834c983:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 834c986:	8d 55 ec             	lea    -0x14(%ebp),%edx
 834c989:	89 54 24 08          	mov    %edx,0x8(%esp)
 834c98d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834c991:	89 04 24             	mov    %eax,(%esp)
 834c994:	e8 1d da 03 00       	call   838a3b6 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE11lower_boundERS3_>
 834c999:	83 ec 04             	sub    $0x4,%esp
 834c99c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 834c99f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 834c9a2:	8b 45 08             	mov    0x8(%ebp),%eax
 834c9a5:	8d 50 1c             	lea    0x1c(%eax),%edx
 834c9a8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834c9ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 834c9af:	89 04 24             	mov    %eax,(%esp)
 834c9b2:	e8 1f a5 d7 ff       	call   80c6ed6 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 834c9b7:	83 ec 04             	sub    $0x4,%esp
 834c9ba:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834c9bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 834c9c1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834c9c4:	89 04 24             	mov    %eax,(%esp)
 834c9c7:	e8 68 b3 d7 ff       	call   80c7d34 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEeqERKS3_>
 834c9cc:	84 c0                	test   %al,%al
 834c9ce:	74 09                	je     834c9d9 <_ZNK8CDungeon14get_clear_itemEi+0x7d>
 834c9d0:	c7 45 f4 fe ff ff ff 	movl   $0xfffffffe,-0xc(%ebp)
 834c9d7:	eb 11                	jmp    834c9ea <_ZNK8CDungeon14get_clear_itemEi+0x8e>
 834c9d9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834c9dc:	89 04 24             	mov    %eax,(%esp)
 834c9df:	e8 2c a5 d7 ff       	call   80c6f10 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEptEv>
 834c9e4:	8b 40 04             	mov    0x4(%eax),%eax
 834c9e7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 834c9ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834c9ed:	c9                   	leave
 834c9ee:	c3                   	ret
 834c9ef:	90                   	nop

```

```c
// CDungeon::get_clear_item @ 0x834c95c

/* CDungeon::get_clear_item(int) const */

undefined4 __thiscall CDungeon::get_clear_item(CDungeon *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_14 [4];
  undefined4 local_10;
  
  local_10 = 0;
  std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_1c);
  local_18 = param_1 + 1;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::lower_bound
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)&local_20,
             (int *)(this + 0x1c));
  local_1c = local_20;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_14);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator==
                    ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_1c,
                     (_Rb_tree_const_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_1c);
    local_10 = *(undefined4 *)(iVar2 + 4);
  }
  else {
    local_10 = 0xfffffffe;
  }
  return local_10;
}

```

---

## get_dimension_member_count

```asm
// === 0834d220 CDungeon::get_dimension_member_count  [0x0834d220-0x834d2d3] ===
 834d220:	55                   	push   %ebp
 834d221:	89 e5                	mov    %esp,%ebp
 834d223:	83 ec 28             	sub    $0x28,%esp
 834d226:	8b 45 08             	mov    0x8(%ebp),%eax
 834d229:	8d 90 bc 06 00 00    	lea    0x6bc(%eax),%edx
 834d22f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834d232:	89 54 24 04          	mov    %edx,0x4(%esp)
 834d236:	89 04 24             	mov    %eax,(%esp)
 834d239:	e8 7c d3 03 00       	call   838a5ba <_ZNKSt6vectorI19DimensionPartyCountSaIS0_EE3endEv>
 834d23e:	83 ec 04             	sub    $0x4,%esp
 834d241:	8b 45 08             	mov    0x8(%ebp),%eax
 834d244:	8d 90 bc 06 00 00    	lea    0x6bc(%eax),%edx
 834d24a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834d24d:	89 54 24 04          	mov    %edx,0x4(%esp)
 834d251:	89 04 24             	mov    %eax,(%esp)
 834d254:	e8 35 d3 03 00       	call   838a58e <_ZNKSt6vectorI19DimensionPartyCountSaIS0_EE5beginEv>
 834d259:	83 ec 04             	sub    $0x4,%esp
 834d25c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834d25f:	8b 55 0c             	mov    0xc(%ebp),%edx
 834d262:	89 54 24 0c          	mov    %edx,0xc(%esp)
 834d266:	8b 55 ec             	mov    -0x14(%ebp),%edx
 834d269:	89 54 24 08          	mov    %edx,0x8(%esp)
 834d26d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 834d270:	89 54 24 04          	mov    %edx,0x4(%esp)
 834d274:	89 04 24             	mov    %eax,(%esp)
 834d277:	e8 6a d3 03 00       	call   838a5e6 <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPK19DimensionPartyCountSt6vectorIS2_SaIS2_EEEES2_ET_S9_S9_RKT0_>
 834d27c:	83 ec 04             	sub    $0x4,%esp
 834d27f:	8b 45 08             	mov    0x8(%ebp),%eax
 834d282:	8d 90 bc 06 00 00    	lea    0x6bc(%eax),%edx
 834d288:	8d 45 f4             	lea    -0xc(%ebp),%eax
 834d28b:	89 54 24 04          	mov    %edx,0x4(%esp)
 834d28f:	89 04 24             	mov    %eax,(%esp)
 834d292:	e8 23 d3 03 00       	call   838a5ba <_ZNKSt6vectorI19DimensionPartyCountSaIS0_EE3endEv>
 834d297:	83 ec 04             	sub    $0x4,%esp
 834d29a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 834d29d:	89 44 24 04          	mov    %eax,0x4(%esp)
 834d2a1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834d2a4:	89 04 24             	mov    %eax,(%esp)
 834d2a7:	e8 8e d3 03 00       	call   838a63a <_ZN9__gnu_cxxneIPK19DimensionPartyCountSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 834d2ac:	84 c0                	test   %al,%al
 834d2ae:	74 1c                	je     834d2cc <_ZNK8CDungeon26get_dimension_member_countER19DimensionPartyCount+0xac>
 834d2b0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834d2b3:	89 04 24             	mov    %eax,(%esp)
 834d2b6:	e8 ab d3 03 00       	call   838a666 <_ZNK9__gnu_cxx17__normal_iteratorIPK19DimensionPartyCountSt6vectorIS1_SaIS1_EEEptEv>
 834d2bb:	0f b6 50 02          	movzbl 0x2(%eax),%edx
 834d2bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 834d2c2:	88 50 02             	mov    %dl,0x2(%eax)
 834d2c5:	b8 01 00 00 00       	mov    $0x1,%eax
 834d2ca:	eb 05                	jmp    834d2d1 <_ZNK8CDungeon26get_dimension_member_countER19DimensionPartyCount+0xb1>
 834d2cc:	b8 00 00 00 00       	mov    $0x0,%eax
 834d2d1:	c9                   	leave
 834d2d2:	c3                   	ret
 834d2d3:	90                   	nop

```

```c
// CDungeon::get_dimension_member_count @ 0x834d220

/* CDungeon::get_dimension_member_count(DimensionPartyCount&) const */

bool __thiscall CDungeon::get_dimension_member_count(CDungeon *this,DimensionPartyCount *param_1)

{
  bool bVar1;
  int iVar2;
  __normal_iterator<DimensionPartyCount_const*,std::vector<DimensionPartyCount,std::allocator<DimensionPartyCount>>>
  local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  std::vector<DimensionPartyCount,std::allocator<DimensionPartyCount>>::end();
  std::vector<DimensionPartyCount,std::allocator<DimensionPartyCount>>::begin();
  std::
  find<__gnu_cxx::__normal_iterator<DimensionPartyCount_const*,std::vector<DimensionPartyCount,std::allocator<DimensionPartyCount>>>,DimensionPartyCount>
            (local_1c,local_14,local_18,param_1);
  std::vector<DimensionPartyCount,std::allocator<DimensionPartyCount>>::end();
  bVar1 = __gnu_cxx::operator!=(local_1c,local_10);
  if (bVar1) {
    iVar2 = __gnu_cxx::
            __normal_iterator<DimensionPartyCount_const*,std::vector<DimensionPartyCount,std::allocator<DimensionPartyCount>>>
            ::operator->(local_1c);
    param_1[2] = *(DimensionPartyCount *)(iVar2 + 2);
  }
  return bVar1;
}

```

---

## insertStart

```asm
// === 0834be5a CDungeon::insertStart  [0x0834be5a-0x834beb7] ===
 834be5a:	55                   	push   %ebp
 834be5b:	89 e5                	mov    %esp,%ebp
 834be5d:	83 ec 38             	sub    $0x38,%esp
 834be60:	8b 45 10             	mov    0x10(%ebp),%eax
 834be63:	89 04 24             	mov    %eax,(%esp)
 834be66:	e8 0b 89 de ff       	call   8134776 <_ZNK4CMap9get_indexEv>
 834be6b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 834be6e:	8d 45 10             	lea    0x10(%ebp),%eax
 834be71:	89 44 24 08          	mov    %eax,0x8(%esp)
 834be75:	8d 45 f4             	lea    -0xc(%ebp),%eax
 834be78:	89 44 24 04          	mov    %eax,0x4(%esp)
 834be7c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834be7f:	89 04 24             	mov    %eax,(%esp)
 834be82:	e8 b1 e2 03 00       	call   838a138 <_ZNSt4pairIKiP4CMapEC1IiRS2_EEOT_OT0_>
 834be87:	8b 55 0c             	mov    0xc(%ebp),%edx
 834be8a:	89 d0                	mov    %edx,%eax
 834be8c:	c1 e0 02             	shl    $0x2,%eax
 834be8f:	01 d0                	add    %edx,%eax
 834be91:	c1 e0 02             	shl    $0x2,%eax
 834be94:	83 c0 60             	add    $0x60,%eax
 834be97:	03 45 08             	add    0x8(%ebp),%eax
 834be9a:	8d 48 04             	lea    0x4(%eax),%ecx
 834be9d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 834bea0:	8d 55 ec             	lea    -0x14(%ebp),%edx
 834bea3:	89 54 24 08          	mov    %edx,0x8(%esp)
 834bea7:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834beab:	89 04 24             	mov    %eax,(%esp)
 834beae:	e8 b3 e2 03 00       	call   838a166 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EE6insertERKSt4pairIKiS2_E>
 834beb3:	83 ec 04             	sub    $0x4,%esp
 834beb6:	c9                   	leave
 834beb7:	c3                   	ret

```

```c
// CDungeon::insertStart @ 0x834be5a

/* CDungeon::insertStart(int, CMap*) */

void __thiscall CDungeon::insertStart(CDungeon *this,int param_1,CMap *param_2)

{
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_24 [12];
  pair<int_const,CMap*> local_18 [8];
  int local_10 [3];
  
  local_10[0] = CMap::get_index(param_2);
  std::pair<int_const,CMap*>::pair<int,CMap*&>(local_18,local_10,&param_2);
  __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
  insert(local_24,this + param_1 * 0x14 + 100);
  return;
}

```

---

## isRiskDungeon

```asm
// === 0836525a CDungeon::isRiskDungeon  [0x0836525a-0x8365269] ===
 836525a:	55                   	push   %ebp
 836525b:	89 e5                	mov    %esp,%ebp
 836525d:	8b 45 08             	mov    0x8(%ebp),%eax
 8365260:	0f b6 80 c9 06 00 00 	movzbl 0x6c9(%eax),%eax
 8365267:	5d                   	pop    %ebp
 8365268:	c3                   	ret
 8365269:	90                   	nop

```

```c
// CDungeon::isRiskDungeon @ 0x836525a

/* CDungeon::isRiskDungeon() const */

CDungeon __thiscall CDungeon::isRiskDungeon(CDungeon *this)

{
  return this[0x6c9];
}

```

---

## isTournamentDungeon

```asm
// === 0836520a CDungeon::isTournamentDungeon  [0x0836520a-0x8365237] ===
 836520a:	55                   	push   %ebp
 836520b:	89 e5                	mov    %esp,%ebp
 836520d:	8b 45 08             	mov    0x8(%ebp),%eax
 8365210:	0f b6 80 a8 08 00 00 	movzbl 0x8a8(%eax),%eax
 8365217:	84 c0                	test   %al,%al
 8365219:	74 15                	je     8365230 <_ZNK8CDungeon19isTournamentDungeonEv+0x26>
 836521b:	8b 45 08             	mov    0x8(%ebp),%eax
 836521e:	0f b6 80 a8 08 00 00 	movzbl 0x8a8(%eax),%eax
 8365225:	3c 01                	cmp    $0x1,%al
 8365227:	7f 07                	jg     8365230 <_ZNK8CDungeon19isTournamentDungeonEv+0x26>
 8365229:	b8 01 00 00 00       	mov    $0x1,%eax
 836522e:	eb 05                	jmp    8365235 <_ZNK8CDungeon19isTournamentDungeonEv+0x2b>
 8365230:	b8 00 00 00 00       	mov    $0x0,%eax
 8365235:	5d                   	pop    %ebp
 8365236:	c3                   	ret
 8365237:	90                   	nop

```

```c
// CDungeon::isTournamentDungeon @ 0x836520a

/* CDungeon::isTournamentDungeon() const */

undefined4 __thiscall CDungeon::isTournamentDungeon(CDungeon *this)

{
  undefined4 uVar1;
  
  if ((this[0x8a8] == (CDungeon)0x0) || ('\x01' < (char)this[0x8a8])) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## set_dungeon

```asm
// === 0834acc4 CDungeon::set_dungeon  [0x0834acc4-0x834b987] ===
 834acc4:	55                   	push   %ebp
 834acc5:	89 e5                	mov    %esp,%ebp
 834acc7:	57                   	push   %edi
 834acc8:	56                   	push   %esi
 834acc9:	53                   	push   %ebx
 834acca:	81 ec bc 02 00 00    	sub    $0x2bc,%esp
 834acd0:	8b 45 0c             	mov    0xc(%ebp),%eax
 834acd3:	8b 50 18             	mov    0x18(%eax),%edx
 834acd6:	8b 45 08             	mov    0x8(%ebp),%eax
 834acd9:	89 50 08             	mov    %edx,0x8(%eax)
 834acdc:	8b 45 0c             	mov    0xc(%ebp),%eax
 834acdf:	8b 90 ac 00 00 00    	mov    0xac(%eax),%edx
 834ace5:	8b 45 08             	mov    0x8(%ebp),%eax
 834ace8:	89 50 10             	mov    %edx,0x10(%eax)
 834aceb:	8b 45 0c             	mov    0xc(%ebp),%eax
 834acee:	8b 50 78             	mov    0x78(%eax),%edx
 834acf1:	8b 45 08             	mov    0x8(%ebp),%eax
 834acf4:	89 50 0c             	mov    %edx,0xc(%eax)
 834acf7:	8b 45 0c             	mov    0xc(%ebp),%eax
 834acfa:	8b 90 b0 00 00 00    	mov    0xb0(%eax),%edx
 834ad00:	8b 45 08             	mov    0x8(%ebp),%eax
 834ad03:	89 50 14             	mov    %edx,0x14(%eax)
 834ad06:	8d 9d 64 fd ff ff    	lea    -0x29c(%ebp),%ebx
 834ad0c:	b8 00 00 00 00       	mov    $0x0,%eax
 834ad11:	ba 7d 00 00 00       	mov    $0x7d,%edx
 834ad16:	89 df                	mov    %ebx,%edi
 834ad18:	89 d1                	mov    %edx,%ecx
 834ad1a:	f3 ab                	rep stos %eax,%es:(%edi)
 834ad1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ad1f:	83 c0 1c             	add    $0x1c,%eax
 834ad22:	89 04 24             	mov    %eax,(%esp)
 834ad25:	e8 c6 b7 3b 00       	call   87064f0 <_ZNKSs5c_strEv>
 834ad2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 834ad2e:	8d 85 64 fd ff ff    	lea    -0x29c(%ebp),%eax
 834ad34:	89 04 24             	mov    %eax,(%esp)
 834ad37:	e8 b4 31 d3 ff       	call   807def0 <strcpy@plt>
 834ad3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ad3f:	83 c0 1c             	add    $0x1c,%eax
 834ad42:	89 04 24             	mov    %eax,(%esp)
 834ad45:	e8 a6 b7 3b 00       	call   87064f0 <_ZNKSs5c_strEv>
 834ad4a:	8d 95 64 fd ff ff    	lea    -0x29c(%ebp),%edx
 834ad50:	89 54 24 04          	mov    %edx,0x4(%esp)
 834ad54:	89 04 24             	mov    %eax,(%esp)
 834ad57:	e8 ac e0 db ff       	call   8108e08 <_ZN8CodePage15script2DatabaseEPcS0_>
 834ad5c:	83 f0 01             	xor    $0x1,%eax
 834ad5f:	84 c0                	test   %al,%al
 834ad61:	74 76                	je     834add9 <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x115>
 834ad63:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ad66:	83 c0 1c             	add    $0x1c,%eax
 834ad69:	89 04 24             	mov    %eax,(%esp)
 834ad6c:	e8 7f b7 3b 00       	call   87064f0 <_ZNKSs5c_strEv>
 834ad71:	89 c7                	mov    %eax,%edi
 834ad73:	e8 68 e0 db ff       	call   8108de0 <_ZN8CodePage8databaseEv>
 834ad78:	89 c6                	mov    %eax,%esi
 834ad7a:	e8 4d e0 db ff       	call   8108dcc <_ZN8CodePage6scriptEv>
 834ad7f:	89 c3                	mov    %eax,%ebx
 834ad81:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 834ad88:	00 
 834ad89:	c7 44 24 08 8a 05 00 	movl   $0x58a,0x8(%esp)
 834ad90:	00 
 834ad91:	c7 44 24 04 80 49 c3 	movl   $0x8c34980,0x4(%esp)
 834ad98:	08 
 834ad99:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 834ad9f:	89 04 24             	mov    %eax,(%esp)
 834ada2:	e8 71 49 20 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 834ada7:	c7 44 24 18 8a 05 00 	movl   $0x58a,0x18(%esp)
 834adae:	00 
 834adaf:	c7 44 24 14 80 49 c3 	movl   $0x8c34980,0x14(%esp)
 834adb6:	08 
 834adb7:	89 7c 24 10          	mov    %edi,0x10(%esp)
 834adbb:	89 74 24 0c          	mov    %esi,0xc(%esp)
 834adbf:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 834adc3:	c7 44 24 04 d8 f8 c2 	movl   $0x8c2f8d8,0x4(%esp)
 834adca:	08 
 834adcb:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 834add1:	89 04 24             	mov    %eax,(%esp)
 834add4:	e8 af 49 20 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 834add9:	8b 45 08             	mov    0x8(%ebp),%eax
 834addc:	8d 50 18             	lea    0x18(%eax),%edx
 834addf:	8d 85 64 fd ff ff    	lea    -0x29c(%ebp),%eax
 834ade5:	89 44 24 04          	mov    %eax,0x4(%esp)
 834ade9:	89 14 24             	mov    %edx,(%esp)
 834adec:	e8 2f d9 3b 00       	call   8708720 <_ZNSsaSEPKc>
 834adf1:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 834adf8:	eb 20                	jmp    834ae1a <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x156>
 834adfa:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 834adfd:	8b 55 dc             	mov    -0x24(%ebp),%edx
 834ae00:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ae03:	83 c2 2c             	add    $0x2c,%edx
 834ae06:	8b 54 90 04          	mov    0x4(%eax,%edx,4),%edx
 834ae0a:	8b 45 08             	mov    0x8(%ebp),%eax
 834ae0d:	81 c1 b8 01 00 00    	add    $0x1b8,%ecx
 834ae13:	89 14 88             	mov    %edx,(%eax,%ecx,4)
 834ae16:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 834ae1a:	83 7d dc 04          	cmpl   $0x4,-0x24(%ebp)
 834ae1e:	0f 9e c0             	setle  %al
 834ae21:	84 c0                	test   %al,%al
 834ae23:	75 d5                	jne    834adfa <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x136>
 834ae25:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ae28:	8b 50 14             	mov    0x14(%eax),%edx
 834ae2b:	8b 45 08             	mov    0x8(%ebp),%eax
 834ae2e:	89 50 34             	mov    %edx,0x34(%eax)
 834ae31:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ae34:	0f b6 90 04 03 00 00 	movzbl 0x304(%eax),%edx
 834ae3b:	8b 45 08             	mov    0x8(%ebp),%eax
 834ae3e:	88 50 38             	mov    %dl,0x38(%eax)
 834ae41:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ae44:	0f b6 90 05 03 00 00 	movzbl 0x305(%eax),%edx
 834ae4b:	8b 45 08             	mov    0x8(%ebp),%eax
 834ae4e:	88 50 39             	mov    %dl,0x39(%eax)
 834ae51:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ae54:	0f b6 90 06 03 00 00 	movzbl 0x306(%eax),%edx
 834ae5b:	8b 45 08             	mov    0x8(%ebp),%eax
 834ae5e:	88 50 3a             	mov    %dl,0x3a(%eax)
 834ae61:	8b 45 08             	mov    0x8(%ebp),%eax
 834ae64:	0f b6 40 38          	movzbl 0x38(%eax),%eax
 834ae68:	84 c0                	test   %al,%al
 834ae6a:	74 58                	je     834aec4 <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x200>
 834ae6c:	8b 45 08             	mov    0x8(%ebp),%eax
 834ae6f:	0f b6 40 39          	movzbl 0x39(%eax),%eax
 834ae73:	0f be d8             	movsbl %al,%ebx
 834ae76:	8b 45 08             	mov    0x8(%ebp),%eax
 834ae79:	0f b6 40 38          	movzbl 0x38(%eax),%eax
 834ae7d:	0f be c0             	movsbl %al,%eax
 834ae80:	8d 70 ff             	lea    -0x1(%eax),%esi
 834ae83:	e8 13 13 d8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 834ae88:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 834ae8c:	89 74 24 04          	mov    %esi,0x4(%esp)
 834ae90:	89 04 24             	mov    %eax,(%esp)
 834ae93:	e8 ea 3e da ff       	call   80eed82 <_ZN12CDataManager18set_dimensionInoutEic>
 834ae98:	8b 45 08             	mov    0x8(%ebp),%eax
 834ae9b:	0f b6 40 39          	movzbl 0x39(%eax),%eax
 834ae9f:	0f be d8             	movsbl %al,%ebx
 834aea2:	8b 45 08             	mov    0x8(%ebp),%eax
 834aea5:	0f b6 40 38          	movzbl 0x38(%eax),%eax
 834aea9:	0f be c0             	movsbl %al,%eax
 834aeac:	8d 70 ff             	lea    -0x1(%eax),%esi
 834aeaf:	e8 e7 12 d8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 834aeb4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 834aeb8:	89 74 24 04          	mov    %esi,0x4(%esp)
 834aebc:	89 04 24             	mov    %eax,(%esp)
 834aebf:	e8 b4 af 01 00       	call   8365e78 <_ZN12CDataManager27set_original_dimensionInoutEic>
 834aec4:	8b 45 0c             	mov    0xc(%ebp),%eax
 834aec7:	0f b6 90 24 03 00 00 	movzbl 0x324(%eax),%edx
 834aece:	8b 45 08             	mov    0x8(%ebp),%eax
 834aed1:	88 50 3b             	mov    %dl,0x3b(%eax)
 834aed4:	8b 45 0c             	mov    0xc(%ebp),%eax
 834aed7:	0f b6 90 25 03 00 00 	movzbl 0x325(%eax),%edx
 834aede:	8b 45 08             	mov    0x8(%ebp),%eax
 834aee1:	88 50 3c             	mov    %dl,0x3c(%eax)
 834aee4:	8b 45 08             	mov    0x8(%ebp),%eax
 834aee7:	8b 40 08             	mov    0x8(%eax),%eax
 834aeea:	3d ff 2a 00 00       	cmp    $0x2aff,%eax
 834aeef:	75 23                	jne    834af14 <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x250>
 834aef1:	8b 45 08             	mov    0x8(%ebp),%eax
 834aef4:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 834aef8:	0f be d8             	movsbl %al,%ebx
 834aefb:	e8 9b 12 d8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 834af00:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 834af07:	00 
 834af08:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 834af0c:	89 04 24             	mov    %eax,(%esp)
 834af0f:	e8 6e 9d 02 00       	call   8374c82 <_ZN12CDataManager21set_limit_inout_countEc15ENUM_BLOOD_TYPE>
 834af14:	8b 45 08             	mov    0x8(%ebp),%eax
 834af17:	8b 40 08             	mov    0x8(%eax),%eax
 834af1a:	3d fe 2a 00 00       	cmp    $0x2afe,%eax
 834af1f:	75 23                	jne    834af44 <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x280>
 834af21:	8b 45 08             	mov    0x8(%ebp),%eax
 834af24:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 834af28:	0f be d8             	movsbl %al,%ebx
 834af2b:	e8 6b 12 d8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 834af30:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 834af37:	00 
 834af38:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 834af3c:	89 04 24             	mov    %eax,(%esp)
 834af3f:	e8 3e 9d 02 00       	call   8374c82 <_ZN12CDataManager21set_limit_inout_countEc15ENUM_BLOOD_TYPE>
 834af44:	8b 45 0c             	mov    0xc(%ebp),%eax
 834af47:	8d 90 70 01 00 00    	lea    0x170(%eax),%edx
 834af4d:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 834af53:	89 54 24 04          	mov    %edx,0x4(%esp)
 834af57:	89 04 24             	mov    %eax,(%esp)
 834af5a:	e8 23 4a fc ff       	call   830f982 <_ZNSt6vectorI10MazeScriptSaIS0_EE5beginEv>
 834af5f:	83 ec 04             	sub    $0x4,%esp
 834af62:	8b 45 0c             	mov    0xc(%ebp),%eax
 834af65:	8d 90 70 01 00 00    	lea    0x170(%eax),%edx
 834af6b:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 834af71:	89 54 24 04          	mov    %edx,0x4(%esp)
 834af75:	89 04 24             	mov    %eax,(%esp)
 834af78:	e8 29 4a fc ff       	call   830f9a6 <_ZNSt6vectorI10MazeScriptSaIS0_EE3endEv>
 834af7d:	83 ec 04             	sub    $0x4,%esp
 834af80:	eb 7f                	jmp    834b001 <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x33d>
 834af82:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 834af88:	89 04 24             	mov    %eax,(%esp)
 834af8b:	e8 7e 4a fc ff       	call   830fa0e <_ZNK9__gnu_cxx17__normal_iteratorIP10MazeScriptSt6vectorIS1_SaIS1_EEEdeEv>
 834af90:	89 45 e0             	mov    %eax,-0x20(%ebp)
 834af93:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834af96:	8b 40 4c             	mov    0x4c(%eax),%eax
 834af99:	85 c0                	test   %eax,%eax
 834af9b:	74 24                	je     834afc1 <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x2fd>
 834af9d:	83 f8 01             	cmp    $0x1,%eax
 834afa0:	74 39                	je     834afdb <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x317>
 834afa2:	83 f8 ff             	cmp    $0xffffffff,%eax
 834afa5:	75 4c                	jne    834aff3 <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x32f>
 834afa7:	8b 45 08             	mov    0x8(%ebp),%eax
 834afaa:	8d 90 2c 06 00 00    	lea    0x62c(%eax),%edx
 834afb0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834afb3:	89 44 24 04          	mov    %eax,0x4(%esp)
 834afb7:	89 14 24             	mov    %edx,(%esp)
 834afba:	e8 69 dd 03 00       	call   8388d28 <_ZNSt6vectorI10MazeScriptSaIS0_EE9push_backERKS0_>
 834afbf:	eb 32                	jmp    834aff3 <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x32f>
 834afc1:	8b 45 08             	mov    0x8(%ebp),%eax
 834afc4:	8d 90 38 06 00 00    	lea    0x638(%eax),%edx
 834afca:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834afcd:	89 44 24 04          	mov    %eax,0x4(%esp)
 834afd1:	89 14 24             	mov    %edx,(%esp)
 834afd4:	e8 4f dd 03 00       	call   8388d28 <_ZNSt6vectorI10MazeScriptSaIS0_EE9push_backERKS0_>
 834afd9:	eb 18                	jmp    834aff3 <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x32f>
 834afdb:	8b 45 08             	mov    0x8(%ebp),%eax
 834afde:	8d 90 44 06 00 00    	lea    0x644(%eax),%edx
 834afe4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834afe7:	89 44 24 04          	mov    %eax,0x4(%esp)
 834afeb:	89 14 24             	mov    %edx,(%esp)
 834afee:	e8 35 dd 03 00       	call   8388d28 <_ZNSt6vectorI10MazeScriptSaIS0_EE9push_backERKS0_>
 834aff3:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 834aff9:	89 04 24             	mov    %eax,(%esp)
 834affc:	e8 f7 49 fc ff       	call   830f9f8 <_ZN9__gnu_cxx17__normal_iteratorIP10MazeScriptSt6vectorIS1_SaIS1_EEEppEv>
 834b001:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 834b007:	89 44 24 04          	mov    %eax,0x4(%esp)
 834b00b:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 834b011:	89 04 24             	mov    %eax,(%esp)
 834b014:	e8 b3 49 fc ff       	call   830f9cc <_ZN9__gnu_cxxneIP10MazeScriptSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 834b019:	84 c0                	test   %al,%al
 834b01b:	0f 85 61 ff ff ff    	jne    834af82 <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x2be>
 834b021:	c7 85 6c ff ff ff 00 	movl   $0x0,-0x94(%ebp)
 834b028:	00 00 00 
 834b02b:	8b 45 08             	mov    0x8(%ebp),%eax
 834b02e:	83 c0 1c             	add    $0x1c,%eax
 834b031:	89 04 24             	mov    %eax,(%esp)
 834b034:	e8 a5 bc d7 ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 834b039:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b03c:	8d 90 c8 00 00 00    	lea    0xc8(%eax),%edx
 834b042:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 834b048:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b04c:	89 04 24             	mov    %eax,(%esp)
 834b04f:	e8 5e 25 d9 ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 834b054:	83 ec 04             	sub    $0x4,%esp
 834b057:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 834b05d:	89 04 24             	mov    %eax,(%esp)
 834b060:	e8 29 ac e6 ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 834b065:	e9 f5 00 00 00       	jmp    834b15f <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x49b>
 834b06a:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 834b070:	89 04 24             	mov    %eax,(%esp)
 834b073:	e8 84 25 d9 ff       	call   80dd5fc <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 834b078:	8b 50 04             	mov    0x4(%eax),%edx
 834b07b:	8b 00                	mov    (%eax),%eax
 834b07d:	89 45 8c             	mov    %eax,-0x74(%ebp)
 834b080:	89 55 90             	mov    %edx,-0x70(%ebp)
 834b083:	8d 45 8c             	lea    -0x74(%ebp),%eax
 834b086:	89 44 24 04          	mov    %eax,0x4(%esp)
 834b08a:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 834b090:	89 04 24             	mov    %eax,(%esp)
 834b093:	e8 84 2e d9 ff       	call   80ddf1c <_ZNSt4pairIiiEaSEOS0_>
 834b098:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 834b09e:	85 c0                	test   %eax,%eax
 834b0a0:	0f 84 b8 00 00 00    	je     834b15e <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x49a>
 834b0a6:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 834b0ac:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 834b0b2:	8d 04 02             	lea    (%edx,%eax,1),%eax
 834b0b5:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 834b0bb:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 834b0c1:	89 44 24 08          	mov    %eax,0x8(%esp)
 834b0c5:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 834b0cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 834b0cf:	8d 45 a0             	lea    -0x60(%ebp),%eax
 834b0d2:	89 04 24             	mov    %eax,(%esp)
 834b0d5:	e8 e6 f9 fa ff       	call   82faac0 <_ZNSt4pairIKiiEC1IRiS3_EEOT_OT0_>
 834b0da:	8b 45 08             	mov    0x8(%ebp),%eax
 834b0dd:	8d 48 1c             	lea    0x1c(%eax),%ecx
 834b0e0:	8d 45 98             	lea    -0x68(%ebp),%eax
 834b0e3:	8d 55 a0             	lea    -0x60(%ebp),%edx
 834b0e6:	89 54 24 08          	mov    %edx,0x8(%esp)
 834b0ea:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834b0ee:	89 04 24             	mov    %eax,(%esp)
 834b0f1:	e8 5a bc d7 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 834b0f6:	83 ec 04             	sub    $0x4,%esp
 834b0f9:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 834b0ff:	83 f8 64             	cmp    $0x64,%eax
 834b102:	7e 38                	jle    834b13c <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x478>
 834b104:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 834b10a:	89 44 24 14          	mov    %eax,0x14(%esp)
 834b10e:	c7 44 24 10 f5 f8 c2 	movl   $0x8c2f8f5,0x10(%esp)
 834b115:	08 
 834b116:	c7 44 24 0c e1 05 00 	movl   $0x5e1,0xc(%esp)
 834b11d:	00 
 834b11e:	c7 44 24 08 80 49 c3 	movl   $0x8c34980,0x8(%esp)
 834b125:	08 
 834b126:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 834b12d:	08 
 834b12e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 834b135:	e8 d0 8a 78 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 834b13a:	eb 5b                	jmp    834b197 <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x4d3>
 834b13c:	8d 45 a8             	lea    -0x58(%ebp),%eax
 834b13f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 834b146:	00 
 834b147:	8d 95 68 ff ff ff    	lea    -0x98(%ebp),%edx
 834b14d:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b151:	89 04 24             	mov    %eax,(%esp)
 834b154:	e8 43 dc 03 00       	call   8388d9c <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEi>
 834b159:	83 ec 04             	sub    $0x4,%esp
 834b15c:	eb 01                	jmp    834b15f <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x49b>
 834b15e:	90                   	nop
 834b15f:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b162:	8d 90 c8 00 00 00    	lea    0xc8(%eax),%edx
 834b168:	8d 45 88             	lea    -0x78(%ebp),%eax
 834b16b:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b16f:	89 04 24             	mov    %eax,(%esp)
 834b172:	e8 5f 24 d9 ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 834b177:	83 ec 04             	sub    $0x4,%esp
 834b17a:	8d 45 88             	lea    -0x78(%ebp),%eax
 834b17d:	89 44 24 04          	mov    %eax,0x4(%esp)
 834b181:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 834b187:	89 04 24             	mov    %eax,(%esp)
 834b18a:	e8 4f 60 dc ff       	call   81111de <_ZN9__gnu_cxxneIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 834b18f:	84 c0                	test   %al,%al
 834b191:	0f 85 d3 fe ff ff    	jne    834b06a <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x3a6>
 834b197:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b19a:	8d 90 d4 00 00 00    	lea    0xd4(%eax),%edx
 834b1a0:	8b 45 08             	mov    0x8(%ebp),%eax
 834b1a3:	83 c0 40             	add    $0x40,%eax
 834b1a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b1aa:	89 04 24             	mov    %eax,(%esp)
 834b1ad:	e8 da 3e fc ff       	call   830f08c <_ZNSt6vectorISt4pairIiiESaIS1_EEaSERKS3_>
 834b1b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b1b5:	8d 90 e0 00 00 00    	lea    0xe0(%eax),%edx
 834b1bb:	8b 45 08             	mov    0x8(%ebp),%eax
 834b1be:	83 c0 4c             	add    $0x4c,%eax
 834b1c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b1c5:	89 04 24             	mov    %eax,(%esp)
 834b1c8:	e8 bf 3e fc ff       	call   830f08c <_ZNSt6vectorISt4pairIiiESaIS1_EEaSERKS3_>
 834b1cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b1d0:	8d 90 ec 00 00 00    	lea    0xec(%eax),%edx
 834b1d6:	8b 45 08             	mov    0x8(%ebp),%eax
 834b1d9:	83 c0 58             	add    $0x58,%eax
 834b1dc:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b1e0:	89 04 24             	mov    %eax,(%esp)
 834b1e3:	e8 e8 db 03 00       	call   8388dd0 <_ZNSt6vectorI21stDungeonAssignItem_tSaIS0_EEaSERKS2_>
 834b1e8:	8b 45 08             	mov    0x8(%ebp),%eax
 834b1eb:	8d 90 f4 06 00 00    	lea    0x6f4(%eax),%edx
 834b1f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b1f4:	05 8c 01 00 00       	add    $0x18c,%eax
 834b1f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b1fd:	89 04 24             	mov    %eax,(%esp)
 834b200:	e8 73 f3 01 00       	call   836a578 <_ZN13STWarRoomData4copyEPS_>
 834b205:	8b 45 08             	mov    0x8(%ebp),%eax
 834b208:	05 f4 07 00 00       	add    $0x7f4,%eax
 834b20d:	8b 55 0c             	mov    0xc(%ebp),%edx
 834b210:	83 c2 7c             	add    $0x7c,%edx
 834b213:	39 d0                	cmp    %edx,%eax
 834b215:	74 14                	je     834b22b <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x567>
 834b217:	c7 44 24 08 09 00 00 	movl   $0x9,0x8(%esp)
 834b21e:	00 
 834b21f:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b223:	89 04 24             	mov    %eax,(%esp)
 834b226:	e8 75 26 d3 ff       	call   807d8a0 <memcpy@plt>
 834b22b:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b22e:	0f b6 90 88 00 00 00 	movzbl 0x88(%eax),%edx
 834b235:	8b 45 08             	mov    0x8(%ebp),%eax
 834b238:	88 90 5c 08 00 00    	mov    %dl,0x85c(%eax)
 834b23e:	8b 45 08             	mov    0x8(%ebp),%eax
 834b241:	05 60 08 00 00       	add    $0x860,%eax
 834b246:	8b 55 0c             	mov    0xc(%ebp),%edx
 834b249:	81 c2 8c 00 00 00    	add    $0x8c,%edx
 834b24f:	39 d0                	cmp    %edx,%eax
 834b251:	74 14                	je     834b267 <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x5a3>
 834b253:	c7 44 24 08 09 00 00 	movl   $0x9,0x8(%esp)
 834b25a:	00 
 834b25b:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b25f:	89 04 24             	mov    %eax,(%esp)
 834b262:	e8 39 26 d3 ff       	call   807d8a0 <memcpy@plt>
 834b267:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b26a:	8d 90 98 00 00 00    	lea    0x98(%eax),%edx
 834b270:	8b 45 08             	mov    0x8(%ebp),%eax
 834b273:	05 6c 08 00 00       	add    $0x86c,%eax
 834b278:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b27c:	89 04 24             	mov    %eax,(%esp)
 834b27f:	e8 08 3e fc ff       	call   830f08c <_ZNSt6vectorISt4pairIiiESaIS1_EEaSERKS3_>
 834b284:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b287:	0f b6 90 14 03 00 00 	movzbl 0x314(%eax),%edx
 834b28e:	8b 45 08             	mov    0x8(%ebp),%eax
 834b291:	88 90 78 08 00 00    	mov    %dl,0x878(%eax)
 834b297:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b29a:	0f b6 90 15 03 00 00 	movzbl 0x315(%eax),%edx
 834b2a1:	8b 45 08             	mov    0x8(%ebp),%eax
 834b2a4:	88 90 79 08 00 00    	mov    %dl,0x879(%eax)
 834b2aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b2ad:	0f b6 90 17 03 00 00 	movzbl 0x317(%eax),%edx
 834b2b4:	8b 45 08             	mov    0x8(%ebp),%eax
 834b2b7:	88 90 7b 08 00 00    	mov    %dl,0x87b(%eax)
 834b2bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b2c0:	0f b6 80 16 03 00 00 	movzbl 0x316(%eax),%eax
 834b2c7:	84 c0                	test   %al,%al
 834b2c9:	74 0c                	je     834b2d7 <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x613>
 834b2cb:	8b 45 08             	mov    0x8(%ebp),%eax
 834b2ce:	c6 80 7a 08 00 00 01 	movb   $0x1,0x87a(%eax)
 834b2d5:	eb 0a                	jmp    834b2e1 <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x61d>
 834b2d7:	8b 45 08             	mov    0x8(%ebp),%eax
 834b2da:	c6 80 7a 08 00 00 00 	movb   $0x0,0x87a(%eax)
 834b2e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b2e4:	8b 90 a4 00 00 00    	mov    0xa4(%eax),%edx
 834b2ea:	8b 45 08             	mov    0x8(%ebp),%eax
 834b2ed:	89 90 7c 08 00 00    	mov    %edx,0x87c(%eax)
 834b2f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b2f6:	8b 90 28 03 00 00    	mov    0x328(%eax),%edx
 834b2fc:	8b 45 08             	mov    0x8(%ebp),%eax
 834b2ff:	89 90 0c 09 00 00    	mov    %edx,0x90c(%eax)
 834b305:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b308:	8d 90 2c 03 00 00    	lea    0x32c(%eax),%edx
 834b30e:	8b 45 08             	mov    0x8(%ebp),%eax
 834b311:	05 10 09 00 00       	add    $0x910,%eax
 834b316:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b31a:	89 04 24             	mov    %eax,(%esp)
 834b31d:	e8 b0 1c d8 ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 834b322:	8b 45 08             	mov    0x8(%ebp),%eax
 834b325:	8d 88 80 08 00 00    	lea    0x880(%eax),%ecx
 834b32b:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b32e:	05 28 01 00 00       	add    $0x128,%eax
 834b333:	8d 50 14             	lea    0x14(%eax),%edx
 834b336:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b339:	05 28 01 00 00       	add    $0x128,%eax
 834b33e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 834b342:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b346:	89 04 24             	mov    %eax,(%esp)
 834b349:	e8 a9 38 d8 ff       	call   80cebf7 <_ZSt4copyIPiS0_ET0_T_S2_S1_>
 834b34e:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b351:	8b 90 3c 01 00 00    	mov    0x13c(%eax),%edx
 834b357:	8b 45 08             	mov    0x8(%ebp),%eax
 834b35a:	89 90 94 08 00 00    	mov    %edx,0x894(%eax)
 834b360:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b363:	8b 90 68 01 00 00    	mov    0x168(%eax),%edx
 834b369:	8b 45 08             	mov    0x8(%ebp),%eax
 834b36c:	89 90 98 08 00 00    	mov    %edx,0x898(%eax)
 834b372:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b375:	0f b6 90 8c 02 00 00 	movzbl 0x28c(%eax),%edx
 834b37c:	8b 45 08             	mov    0x8(%ebp),%eax
 834b37f:	88 90 9c 08 00 00    	mov    %dl,0x89c(%eax)
 834b385:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b388:	0f b6 90 40 01 00 00 	movzbl 0x140(%eax),%edx
 834b38f:	8b 45 08             	mov    0x8(%ebp),%eax
 834b392:	88 90 9d 08 00 00    	mov    %dl,0x89d(%eax)
 834b398:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b39b:	0f b6 90 8d 02 00 00 	movzbl 0x28d(%eax),%edx
 834b3a2:	8b 45 08             	mov    0x8(%ebp),%eax
 834b3a5:	88 90 9e 08 00 00    	mov    %dl,0x89e(%eax)
 834b3ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b3ae:	0f b6 90 8e 02 00 00 	movzbl 0x28e(%eax),%edx
 834b3b5:	8b 45 08             	mov    0x8(%ebp),%eax
 834b3b8:	88 90 9f 08 00 00    	mov    %dl,0x89f(%eax)
 834b3be:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b3c1:	0f b6 90 ab 02 00 00 	movzbl 0x2ab(%eax),%edx
 834b3c8:	8b 45 08             	mov    0x8(%ebp),%eax
 834b3cb:	88 90 00 08 00 00    	mov    %dl,0x800(%eax)
 834b3d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b3d4:	8b 90 ac 02 00 00    	mov    0x2ac(%eax),%edx
 834b3da:	8b 45 08             	mov    0x8(%ebp),%eax
 834b3dd:	89 90 04 08 00 00    	mov    %edx,0x804(%eax)
 834b3e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b3e6:	8d 90 b0 02 00 00    	lea    0x2b0(%eax),%edx
 834b3ec:	8b 45 08             	mov    0x8(%ebp),%eax
 834b3ef:	05 08 08 00 00       	add    $0x808,%eax
 834b3f4:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 834b3fb:	00 
 834b3fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b400:	89 04 24             	mov    %eax,(%esp)
 834b403:	e8 98 24 d3 ff       	call   807d8a0 <memcpy@plt>
 834b408:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b40b:	8d 90 bc 02 00 00    	lea    0x2bc(%eax),%edx
 834b411:	8b 45 08             	mov    0x8(%ebp),%eax
 834b414:	05 20 08 00 00       	add    $0x820,%eax
 834b419:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 834b420:	00 
 834b421:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b425:	89 04 24             	mov    %eax,(%esp)
 834b428:	e8 73 24 d3 ff       	call   807d8a0 <memcpy@plt>
 834b42d:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b430:	8d 90 c8 02 00 00    	lea    0x2c8(%eax),%edx
 834b436:	8b 45 08             	mov    0x8(%ebp),%eax
 834b439:	05 14 08 00 00       	add    $0x814,%eax
 834b43e:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b442:	89 04 24             	mov    %eax,(%esp)
 834b445:	e8 88 1b d8 ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 834b44a:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b44d:	8d 90 d4 02 00 00    	lea    0x2d4(%eax),%edx
 834b453:	8b 45 08             	mov    0x8(%ebp),%eax
 834b456:	05 2c 08 00 00       	add    $0x82c,%eax
 834b45b:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b45f:	89 04 24             	mov    %eax,(%esp)
 834b462:	e8 35 b8 02 00       	call   8376c9c <_ZN12advancealtar15ClearRewardDataaSERKS0_>
 834b467:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b46a:	8d 90 f8 02 00 00    	lea    0x2f8(%eax),%edx
 834b470:	8b 45 08             	mov    0x8(%ebp),%eax
 834b473:	05 50 08 00 00       	add    $0x850,%eax
 834b478:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b47c:	89 04 24             	mov    %eax,(%esp)
 834b47f:	e8 5a b8 02 00       	call   8376cde <_ZN12advancealtar18SurvivalRewardDataaSERKS0_>
 834b484:	8b 45 08             	mov    0x8(%ebp),%eax
 834b487:	c6 80 24 06 00 00 00 	movb   $0x0,0x624(%eax)
 834b48e:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b491:	8b 90 6c 01 00 00    	mov    0x16c(%eax),%edx
 834b497:	8b 45 08             	mov    0x8(%ebp),%eax
 834b49a:	89 90 28 06 00 00    	mov    %edx,0x628(%eax)
 834b4a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b4a3:	8b 90 38 03 00 00    	mov    0x338(%eax),%edx
 834b4a9:	8b 45 08             	mov    0x8(%ebp),%eax
 834b4ac:	89 90 50 06 00 00    	mov    %edx,0x650(%eax)
 834b4b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b4b5:	8b 90 58 03 00 00    	mov    0x358(%eax),%edx
 834b4bb:	8b 45 08             	mov    0x8(%ebp),%eax
 834b4be:	89 90 70 06 00 00    	mov    %edx,0x670(%eax)
 834b4c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b4c7:	8b 90 68 03 00 00    	mov    0x368(%eax),%edx
 834b4cd:	8b 45 08             	mov    0x8(%ebp),%eax
 834b4d0:	89 90 80 06 00 00    	mov    %edx,0x680(%eax)
 834b4d6:	8b 45 08             	mov    0x8(%ebp),%eax
 834b4d9:	8b 80 80 06 00 00    	mov    0x680(%eax),%eax
 834b4df:	85 c0                	test   %eax,%eax
 834b4e1:	0f 84 96 00 00 00    	je     834b57d <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x8b9>
 834b4e7:	8b 45 08             	mov    0x8(%ebp),%eax
 834b4ea:	8b 80 80 06 00 00    	mov    0x680(%eax),%eax
 834b4f0:	83 c0 01             	add    $0x1,%eax
 834b4f3:	8b 55 08             	mov    0x8(%ebp),%edx
 834b4f6:	81 c2 74 06 00 00    	add    $0x674,%edx
 834b4fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 834b500:	89 14 24             	mov    %edx,(%esp)
 834b503:	e8 3c 39 e3 ff       	call   817ee44 <_ZNSt6vectorIiSaIiEE7reserveEj>
 834b508:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 834b50f:	eb 52                	jmp    834b563 <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x89f>
 834b511:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b514:	8d 90 5c 03 00 00    	lea    0x35c(%eax),%edx
 834b51a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 834b51d:	89 44 24 04          	mov    %eax,0x4(%esp)
 834b521:	89 14 24             	mov    %edx,(%esp)
 834b524:	e8 8f 0b da ff       	call   80ec0b8 <_ZNSt6vectorISt4pairIiiESaIS1_EE2atEj>
 834b529:	8b 00                	mov    (%eax),%eax
 834b52b:	8b 55 08             	mov    0x8(%ebp),%edx
 834b52e:	81 c2 74 06 00 00    	add    $0x674,%edx
 834b534:	89 44 24 04          	mov    %eax,0x4(%esp)
 834b538:	89 14 24             	mov    %edx,(%esp)
 834b53b:	e8 9c 2c d4 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 834b540:	89 c3                	mov    %eax,%ebx
 834b542:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b545:	8d 90 5c 03 00 00    	lea    0x35c(%eax),%edx
 834b54b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 834b54e:	89 44 24 04          	mov    %eax,0x4(%esp)
 834b552:	89 14 24             	mov    %edx,(%esp)
 834b555:	e8 5e 0b da ff       	call   80ec0b8 <_ZNSt6vectorISt4pairIiiESaIS1_EE2atEj>
 834b55a:	8b 40 04             	mov    0x4(%eax),%eax
 834b55d:	89 03                	mov    %eax,(%ebx)
 834b55f:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 834b563:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b566:	05 5c 03 00 00       	add    $0x35c,%eax
 834b56b:	89 04 24             	mov    %eax,(%esp)
 834b56e:	e8 a1 22 d9 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 834b573:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 834b576:	0f 97 c0             	seta   %al
 834b579:	84 c0                	test   %al,%al
 834b57b:	75 94                	jne    834b511 <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x84d>
 834b57d:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b580:	8b 90 3c 03 00 00    	mov    0x33c(%eax),%edx
 834b586:	8b 45 08             	mov    0x8(%ebp),%eax
 834b589:	89 90 54 06 00 00    	mov    %edx,0x654(%eax)
 834b58f:	8b 45 08             	mov    0x8(%ebp),%eax
 834b592:	8b 80 54 06 00 00    	mov    0x654(%eax),%eax
 834b598:	85 c0                	test   %eax,%eax
 834b59a:	0f 84 56 01 00 00    	je     834b6f6 <_ZN8CDungeon11set_dungeonER15STDungeonScript+0xa32>
 834b5a0:	8b 45 08             	mov    0x8(%ebp),%eax
 834b5a3:	05 58 06 00 00       	add    $0x658,%eax
 834b5a8:	89 04 24             	mov    %eax,(%esp)
 834b5ab:	e8 50 6c 03 00       	call   8382200 <_ZNSt3mapIiSt6vectorI10RandomListSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE5clearEv>
 834b5b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b5b3:	8d 90 40 03 00 00    	lea    0x340(%eax),%edx
 834b5b9:	8d 45 ac             	lea    -0x54(%ebp),%eax
 834b5bc:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b5c0:	89 04 24             	mov    %eax,(%esp)
 834b5c3:	e8 62 df 03 00       	call   838952a <_ZNSt3mapIiSt6vectorI10RandomListSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE5beginEv>
 834b5c8:	83 ec 04             	sub    $0x4,%esp
 834b5cb:	8d 45 ac             	lea    -0x54(%ebp),%eax
 834b5ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 834b5d2:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 834b5d8:	89 04 24             	mov    %eax,(%esp)
 834b5db:	e8 70 df 03 00       	call   8389550 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorI10RandomListSaIS3_EEEEC1ERKSt17_Rb_tree_iteratorIS6_E>
 834b5e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b5e3:	8d 90 40 03 00 00    	lea    0x340(%eax),%edx
 834b5e9:	8d 45 b0             	lea    -0x50(%ebp),%eax
 834b5ec:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b5f0:	89 04 24             	mov    %eax,(%esp)
 834b5f3:	e8 68 df 03 00       	call   8389560 <_ZNSt3mapIiSt6vectorI10RandomListSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE3endEv>
 834b5f8:	83 ec 04             	sub    $0x4,%esp
 834b5fb:	8d 45 b0             	lea    -0x50(%ebp),%eax
 834b5fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 834b602:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 834b608:	89 04 24             	mov    %eax,(%esp)
 834b60b:	e8 40 df 03 00       	call   8389550 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorI10RandomListSaIS3_EEEEC1ERKSt17_Rb_tree_iteratorIS6_E>
 834b610:	e9 c1 00 00 00       	jmp    834b6d6 <_ZN8CDungeon11set_dungeonER15STDungeonScript+0xa12>
 834b615:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 834b61b:	89 04 24             	mov    %eax,(%esp)
 834b61e:	e8 f5 76 e0 ff       	call   8152d18 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorI10RandomListSaIS3_EEEEptEv>
 834b623:	8d 58 04             	lea    0x4(%eax),%ebx
 834b626:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 834b62c:	89 04 24             	mov    %eax,(%esp)
 834b62f:	e8 e4 76 e0 ff       	call   8152d18 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorI10RandomListSaIS3_EEEEptEv>
 834b634:	89 c2                	mov    %eax,%edx
 834b636:	8d 45 cc             	lea    -0x34(%ebp),%eax
 834b639:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 834b63d:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b641:	89 04 24             	mov    %eax,(%esp)
 834b644:	e8 6e df 03 00       	call   83895b7 <_ZSt9make_pairIRKiRKSt6vectorI10RandomListSaIS3_EEESt4pairINSt17__decay_and_stripIT_E6__typeENS9_IT0_E6__typeEEOSA_OSD_>
 834b649:	83 ec 04             	sub    $0x4,%esp
 834b64c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 834b64f:	89 44 24 04          	mov    %eax,0x4(%esp)
 834b653:	8d 45 bc             	lea    -0x44(%ebp),%eax
 834b656:	89 04 24             	mov    %eax,(%esp)
 834b659:	e8 9e df 03 00       	call   83895fc <_ZNSt4pairIKiSt6vectorI10RandomListSaIS2_EEEC1IiS4_EEOS_IT_T0_E>
 834b65e:	8b 45 08             	mov    0x8(%ebp),%eax
 834b661:	8d 88 58 06 00 00    	lea    0x658(%eax),%ecx
 834b667:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 834b66a:	8d 55 bc             	lea    -0x44(%ebp),%edx
 834b66d:	89 54 24 08          	mov    %edx,0x8(%esp)
 834b671:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834b675:	89 04 24             	mov    %eax,(%esp)
 834b678:	e8 b9 df 03 00       	call   8389636 <_ZNSt3mapIiSt6vectorI10RandomListSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE6insertERKS8_>
 834b67d:	83 ec 04             	sub    $0x4,%esp
 834b680:	8d 45 bc             	lea    -0x44(%ebp),%eax
 834b683:	89 04 24             	mov    %eax,(%esp)
 834b686:	e8 87 b6 02 00       	call   8376d12 <_ZNSt4pairIKiSt6vectorI10RandomListSaIS2_EEED1Ev>
 834b68b:	eb 30                	jmp    834b6bd <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x9f9>
 834b68d:	89 d3                	mov    %edx,%ebx
 834b68f:	89 c6                	mov    %eax,%esi
 834b691:	8d 45 bc             	lea    -0x44(%ebp),%eax
 834b694:	89 04 24             	mov    %eax,(%esp)
 834b697:	e8 76 b6 02 00       	call   8376d12 <_ZNSt4pairIKiSt6vectorI10RandomListSaIS2_EEED1Ev>
 834b69c:	89 f0                	mov    %esi,%eax
 834b69e:	89 da                	mov    %ebx,%edx
 834b6a0:	eb 00                	jmp    834b6a2 <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x9de>
 834b6a2:	89 d3                	mov    %edx,%ebx
 834b6a4:	89 c6                	mov    %eax,%esi
 834b6a6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 834b6a9:	89 04 24             	mov    %eax,(%esp)
 834b6ac:	e8 4b b6 02 00       	call   8376cfc <_ZNSt4pairIiSt6vectorI10RandomListSaIS1_EEED1Ev>
 834b6b1:	89 f0                	mov    %esi,%eax
 834b6b3:	89 da                	mov    %ebx,%edx
 834b6b5:	89 04 24             	mov    %eax,(%esp)
 834b6b8:	e8 93 80 79 00       	call   8ae3750 <_Unwind_Resume>
 834b6bd:	8d 45 cc             	lea    -0x34(%ebp),%eax
 834b6c0:	89 04 24             	mov    %eax,(%esp)
 834b6c3:	e8 34 b6 02 00       	call   8376cfc <_ZNSt4pairIiSt6vectorI10RandomListSaIS1_EEED1Ev>
 834b6c8:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 834b6ce:	89 04 24             	mov    %eax,(%esp)
 834b6d1:	e8 c4 de 03 00       	call   838959a <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorI10RandomListSaIS3_EEEEppEv>
 834b6d6:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 834b6dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 834b6e0:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 834b6e6:	89 04 24             	mov    %eax,(%esp)
 834b6e9:	e8 98 de 03 00       	call   8389586 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorI10RandomListSaIS3_EEEEneERKS7_>
 834b6ee:	84 c0                	test   %al,%al
 834b6f0:	0f 85 1f ff ff ff    	jne    834b615 <_ZN8CDungeon11set_dungeonER15STDungeonScript+0x951>
 834b6f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b6f9:	8b 90 c4 03 00 00    	mov    0x3c4(%eax),%edx
 834b6ff:	8b 45 08             	mov    0x8(%ebp),%eax
 834b702:	89 90 a0 08 00 00    	mov    %edx,0x8a0(%eax)
 834b708:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b70b:	8d 90 c8 03 00 00    	lea    0x3c8(%eax),%edx
 834b711:	8b 45 08             	mov    0x8(%ebp),%eax
 834b714:	05 f0 08 00 00       	add    $0x8f0,%eax
 834b719:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b71d:	89 04 24             	mov    %eax,(%esp)
 834b720:	e8 3d df 03 00       	call   8389662 <_ZNSt6vectorI20STNamedMonsterMapPosSaIS0_EEaSERKS2_>
 834b725:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b728:	8b 90 d4 03 00 00    	mov    0x3d4(%eax),%edx
 834b72e:	8b 45 08             	mov    0x8(%ebp),%eax
 834b731:	89 90 84 06 00 00    	mov    %edx,0x684(%eax)
 834b737:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b73a:	8b 90 d8 03 00 00    	mov    0x3d8(%eax),%edx
 834b740:	8b 45 08             	mov    0x8(%ebp),%eax
 834b743:	89 90 88 06 00 00    	mov    %edx,0x688(%eax)
 834b749:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b74c:	8b 90 dc 03 00 00    	mov    0x3dc(%eax),%edx
 834b752:	8b 45 08             	mov    0x8(%ebp),%eax
 834b755:	89 90 8c 06 00 00    	mov    %edx,0x68c(%eax)
 834b75b:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b75e:	8d 90 e0 03 00 00    	lea    0x3e0(%eax),%edx
 834b764:	8b 45 08             	mov    0x8(%ebp),%eax
 834b767:	05 90 06 00 00       	add    $0x690,%eax
 834b76c:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b770:	89 04 24             	mov    %eax,(%esp)
 834b773:	e8 38 e1 03 00       	call   83898b0 <_ZNSt6vectorI16stEventMonster_tSaIS0_EEaSERKS2_>
 834b778:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b77b:	8b 90 ec 03 00 00    	mov    0x3ec(%eax),%edx
 834b781:	8b 45 08             	mov    0x8(%ebp),%eax
 834b784:	89 90 9c 06 00 00    	mov    %edx,0x69c(%eax)
 834b78a:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b78d:	8b 90 f0 03 00 00    	mov    0x3f0(%eax),%edx
 834b793:	8b 45 08             	mov    0x8(%ebp),%eax
 834b796:	89 90 a0 06 00 00    	mov    %edx,0x6a0(%eax)
 834b79c:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b79f:	8b 90 f4 03 00 00    	mov    0x3f4(%eax),%edx
 834b7a5:	8b 45 08             	mov    0x8(%ebp),%eax
 834b7a8:	89 90 a4 06 00 00    	mov    %edx,0x6a4(%eax)
 834b7ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b7b1:	8d 90 f8 03 00 00    	lea    0x3f8(%eax),%edx
 834b7b7:	8b 45 08             	mov    0x8(%ebp),%eax
 834b7ba:	05 a8 06 00 00       	add    $0x6a8,%eax
 834b7bf:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b7c3:	89 04 24             	mov    %eax,(%esp)
 834b7c6:	e8 5b e3 03 00       	call   8389b26 <_ZNSt6vectorI22stSecondEventMonster_tSaIS0_EEaSERKS2_>
 834b7cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b7ce:	8b 80 80 03 00 00    	mov    0x380(%eax),%eax
 834b7d4:	83 f8 01             	cmp    $0x1,%eax
 834b7d7:	0f 94 c2             	sete   %dl
 834b7da:	8b 45 08             	mov    0x8(%ebp),%eax
 834b7dd:	88 90 b4 06 00 00    	mov    %dl,0x6b4(%eax)
 834b7e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b7e6:	8b 80 b4 03 00 00    	mov    0x3b4(%eax),%eax
 834b7ec:	83 f8 01             	cmp    $0x1,%eax
 834b7ef:	0f 94 c2             	sete   %dl
 834b7f2:	8b 45 08             	mov    0x8(%ebp),%eax
 834b7f5:	88 90 b5 06 00 00    	mov    %dl,0x6b5(%eax)
 834b7fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b7fe:	8b 80 b8 03 00 00    	mov    0x3b8(%eax),%eax
 834b804:	89 c2                	mov    %eax,%edx
 834b806:	8b 45 08             	mov    0x8(%ebp),%eax
 834b809:	89 90 b8 06 00 00    	mov    %edx,0x6b8(%eax)
 834b80f:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b812:	8d 90 04 04 00 00    	lea    0x404(%eax),%edx
 834b818:	8b 45 08             	mov    0x8(%ebp),%eax
 834b81b:	05 00 09 00 00       	add    $0x900,%eax
 834b820:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b824:	89 04 24             	mov    %eax,(%esp)
 834b827:	e8 20 4b 03 00       	call   838034c <_ZNSt6vectorIS_IfSaIfEESaIS1_EEaSERKS3_>
 834b82c:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b82f:	0f b6 90 8c 04 00 00 	movzbl 0x48c(%eax),%edx
 834b836:	8b 45 08             	mov    0x8(%ebp),%eax
 834b839:	88 90 c8 06 00 00    	mov    %dl,0x6c8(%eax)
 834b83f:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b842:	0f b6 80 a9 02 00 00 	movzbl 0x2a9(%eax),%eax
 834b849:	84 c0                	test   %al,%al
 834b84b:	74 0a                	je     834b857 <_ZN8CDungeon11set_dungeonER15STDungeonScript+0xb93>
 834b84d:	8b 45 08             	mov    0x8(%ebp),%eax
 834b850:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 834b857:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b85a:	0f b6 90 aa 02 00 00 	movzbl 0x2aa(%eax),%edx
 834b861:	8b 45 08             	mov    0x8(%ebp),%eax
 834b864:	88 90 fc 08 00 00    	mov    %dl,0x8fc(%eax)
 834b86a:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b86d:	0f b6 90 94 04 00 00 	movzbl 0x494(%eax),%edx
 834b874:	8b 45 08             	mov    0x8(%ebp),%eax
 834b877:	88 90 a8 08 00 00    	mov    %dl,0x8a8(%eax)
 834b87d:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b880:	8b 90 98 04 00 00    	mov    0x498(%eax),%edx
 834b886:	8b 45 08             	mov    0x8(%ebp),%eax
 834b889:	89 90 a4 08 00 00    	mov    %edx,0x8a4(%eax)
 834b88f:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b892:	8d 90 b4 04 00 00    	lea    0x4b4(%eax),%edx
 834b898:	8b 45 08             	mov    0x8(%ebp),%eax
 834b89b:	05 c4 08 00 00       	add    $0x8c4,%eax
 834b8a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b8a4:	89 04 24             	mov    %eax,(%esp)
 834b8a7:	e8 7c b4 02 00       	call   8376d28 <_ZN24TournamentRewardItemRateaSERKS_>
 834b8ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b8af:	8d 90 9c 04 00 00    	lea    0x49c(%eax),%edx
 834b8b5:	8b 45 08             	mov    0x8(%ebp),%eax
 834b8b8:	05 ac 08 00 00       	add    $0x8ac,%eax
 834b8bd:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b8c1:	89 04 24             	mov    %eax,(%esp)
 834b8c4:	e8 45 e7 03 00       	call   838a00e <_ZNSt3mapIi20TournamentRewardRateSt4lessIiESaISt4pairIKiS0_EEEaSERKS7_>
 834b8c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b8cc:	8b 90 c4 04 00 00    	mov    0x4c4(%eax),%edx
 834b8d2:	8b 45 08             	mov    0x8(%ebp),%eax
 834b8d5:	89 90 d4 08 00 00    	mov    %edx,0x8d4(%eax)
 834b8db:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b8de:	8d 90 c8 04 00 00    	lea    0x4c8(%eax),%edx
 834b8e4:	8b 45 08             	mov    0x8(%ebp),%eax
 834b8e7:	05 d8 08 00 00       	add    $0x8d8,%eax
 834b8ec:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b8f0:	89 04 24             	mov    %eax,(%esp)
 834b8f3:	e8 34 e7 03 00       	call   838a02c <_ZNSt3mapIhjSt4lessIhESaISt4pairIKhjEEEaSERKS6_>
 834b8f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b8fb:	8d 90 e4 04 00 00    	lea    0x4e4(%eax),%edx
 834b901:	8b 45 08             	mov    0x8(%ebp),%eax
 834b904:	05 1c 09 00 00       	add    $0x91c,%eax
 834b909:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b90d:	89 04 24             	mov    %eax,(%esp)
 834b910:	e8 35 e7 03 00       	call   838a04a <_ZNSt3mapIi18UseCoinDungeonDiffSt4lessIiESaISt4pairIKiS0_EEEaSERKS7_>
 834b915:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b918:	8d 90 08 03 00 00    	lea    0x308(%eax),%edx
 834b91e:	8b 45 08             	mov    0x8(%ebp),%eax
 834b921:	05 bc 06 00 00       	add    $0x6bc,%eax
 834b926:	89 54 24 04          	mov    %edx,0x4(%esp)
 834b92a:	89 04 24             	mov    %eax,(%esp)
 834b92d:	e8 36 e7 03 00       	call   838a068 <_ZNSt6vectorI19DimensionPartyCountSaIS0_EE4swapEOS2_>
 834b932:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b935:	0f b6 90 e0 04 00 00 	movzbl 0x4e0(%eax),%edx
 834b93c:	8b 45 08             	mov    0x8(%ebp),%eax
 834b93f:	88 90 c9 06 00 00    	mov    %dl,0x6c9(%eax)
 834b945:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b948:	8b 90 fc 04 00 00    	mov    0x4fc(%eax),%edx
 834b94e:	8b 45 08             	mov    0x8(%ebp),%eax
 834b951:	89 90 cc 06 00 00    	mov    %edx,0x6cc(%eax)
 834b957:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b95a:	0f b6 90 04 05 00 00 	movzbl 0x504(%eax),%edx
 834b961:	8b 45 08             	mov    0x8(%ebp),%eax
 834b964:	88 90 d0 06 00 00    	mov    %dl,0x6d0(%eax)
 834b96a:	8b 45 0c             	mov    0xc(%ebp),%eax
 834b96d:	0f b6 90 05 05 00 00 	movzbl 0x505(%eax),%edx
 834b974:	8b 45 08             	mov    0x8(%ebp),%eax
 834b977:	88 90 d1 06 00 00    	mov    %dl,0x6d1(%eax)
 834b97d:	8d 65 f4             	lea    -0xc(%ebp),%esp
 834b980:	83 c4 00             	add    $0x0,%esp
 834b983:	5b                   	pop    %ebx
 834b984:	5e                   	pop    %esi
 834b985:	5f                   	pop    %edi
 834b986:	5d                   	pop    %ebp
 834b987:	c3                   	ret

```

```c
// CDungeon::set_dungeon @ 0x834acc4

/* CDungeon::set_dungeon(STDungeonScript&) */

void __thiscall CDungeon::set_dungeon(CDungeon *this,STDungeonScript *param_1)

{
  CDungeon CVar1;
  CDungeon CVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  CDataManager *pCVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  vector *pvVar13;
  int iVar14;
  char local_2a0 [500];
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
  local_ac [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
  local_a8 [4];
  int local_a4;
  int local_a0;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_9c [4];
  int local_98;
  __normal_iterator local_94 [4];
  __normal_iterator<MazeScript*,std::vector<MazeScript,std::allocator<MazeScript>>> local_90 [4];
  cMyTrace local_8c [16];
  __normal_iterator local_7c [4];
  undefined4 local_78;
  undefined4 local_74;
  pair local_6c [8];
  pair<int_const,int> local_64 [8];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_5c [4];
  map<int,std::vector<RandomList,std::allocator<RandomList>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>>
  local_58 [4];
  map<int,std::vector<RandomList,std::allocator<RandomList>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>>
  local_54 [4];
  pair local_50 [8];
  pair<int_const,std::vector<RandomList,std::allocator<RandomList>>> local_48 [16];
  pair<int,std::vector<RandomList,std::allocator<RandomList>>> local_38 [16];
  int local_28;
  MazeScript *local_24;
  uint local_20;
  
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0xb0);
  pcVar5 = local_2a0;
  for (iVar14 = 0x7d; iVar14 != 0; iVar14 = iVar14 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  pcVar5 = (char *)std::string::c_str((string *)(param_1 + 0x1c));
  strcpy(local_2a0,pcVar5);
  pcVar5 = (char *)std::string::c_str((string *)(param_1 + 0x1c));
  cVar3 = CodePage::script2Database(pcVar5,local_2a0);
  if (cVar3 != '\x01') {
    uVar6 = std::string::c_str((string *)(param_1 + 0x1c));
    uVar7 = CodePage::database();
    uVar8 = CodePage::script();
    cMyTrace::cMyTrace(local_8c,"void CDungeon::set_dungeon(STDungeonScript&)",0x58a,5);
    cMyTrace::operator()
              (local_8c,"Error!!! %s->%s [%s][%s][%d]",uVar8,uVar7,uVar6,
               "void CDungeon::set_dungeon(STDungeonScript&)",0x58a);
  }
  std::string::operator=((string *)(this + 0x18),local_2a0);
  for (local_28 = 0; local_28 < 5; local_28 = local_28 + 1) {
    *(undefined4 *)(this + (local_28 + 0x1b8) * 4) =
         *(undefined4 *)(param_1 + (local_28 + 0x2c) * 4 + 4);
  }
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x14);
  this[0x38] = *(CDungeon *)(param_1 + 0x304);
  this[0x39] = *(CDungeon *)(param_1 + 0x305);
  this[0x3a] = *(CDungeon *)(param_1 + 0x306);
  if (this[0x38] != (CDungeon)0x0) {
    CVar1 = this[0x39];
    CVar2 = this[0x38];
    pCVar9 = (CDataManager *)G_CDataManager();
    CDataManager::set_dimensionInout(pCVar9,(char)CVar2 + -1,(char)CVar1);
    CVar1 = this[0x39];
    CVar2 = this[0x38];
    pCVar9 = (CDataManager *)G_CDataManager();
    CDataManager::set_original_dimensionInout(pCVar9,(char)CVar2 + -1,(char)CVar1);
  }
  this[0x3b] = *(CDungeon *)(param_1 + 0x324);
  this[0x3c] = *(CDungeon *)(param_1 + 0x325);
  if (*(int *)(this + 8) == 0x2aff) {
    CVar1 = this[0x3c];
    pCVar9 = (CDataManager *)G_CDataManager();
    CDataManager::set_limit_inout_count(pCVar9,(int)(char)CVar1,2);
  }
  if (*(int *)(this + 8) == 0x2afe) {
    CVar1 = this[0x3c];
    pCVar9 = (CDataManager *)G_CDataManager();
    CDataManager::set_limit_inout_count(pCVar9,(int)(char)CVar1,1);
  }
  std::vector<MazeScript,std::allocator<MazeScript>>::begin();
  std::vector<MazeScript,std::allocator<MazeScript>>::end();
  while( true ) {
    bVar4 = __gnu_cxx::operator!=(local_90,local_94);
    if (!bVar4) break;
    local_24 = (MazeScript *)
               __gnu_cxx::
               __normal_iterator<MazeScript*,std::vector<MazeScript,std::allocator<MazeScript>>>::
               operator*(local_90);
    iVar14 = *(int *)(local_24 + 0x4c);
    if (iVar14 == 0) {
      std::vector<MazeScript,std::allocator<MazeScript>>::push_back
                ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x638),local_24);
    }
    else if (iVar14 == 1) {
      std::vector<MazeScript,std::allocator<MazeScript>>::push_back
                ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x644),local_24);
    }
    else if (iVar14 == -1) {
      std::vector<MazeScript,std::allocator<MazeScript>>::push_back
                ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c),local_24);
    }
    __gnu_cxx::__normal_iterator<MazeScript*,std::vector<MazeScript,std::allocator<MazeScript>>>::
    operator++(local_90);
  }
  local_98 = 0;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  std::pair<int,int>::pair((pair<int,int> *)&local_a4);
  do {
    do {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar4 = __gnu_cxx::operator!=(local_9c,local_7c);
      if (!bVar4) {
LAB_0834b197:
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x40),
                   (vector *)(param_1 + 0xd4));
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x4c),
                   (vector *)(param_1 + 0xe0));
        std::vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>>::operator=
                  ((vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>> *)
                   (this + 0x58),(vector *)(param_1 + 0xec));
        STWarRoomData::copy((STWarRoomData *)(param_1 + 0x18c),(STWarRoomData *)(this + 0x6f4));
        if (this + 0x7f4 != (CDungeon *)(param_1 + 0x7c)) {
          memcpy(this + 0x7f4,(CDungeon *)(param_1 + 0x7c),9);
        }
        this[0x85c] = *(CDungeon *)(param_1 + 0x88);
        if (this + 0x860 != (CDungeon *)(param_1 + 0x8c)) {
          memcpy(this + 0x860,(CDungeon *)(param_1 + 0x8c),9);
        }
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x86c),
                   (vector *)(param_1 + 0x98));
        this[0x878] = *(CDungeon *)(param_1 + 0x314);
        this[0x879] = *(CDungeon *)(param_1 + 0x315);
        this[0x87b] = *(CDungeon *)(param_1 + 0x317);
        if (param_1[0x316] == (STDungeonScript)0x0) {
          this[0x87a] = (CDungeon)0x0;
        }
        else {
          this[0x87a] = (CDungeon)0x1;
        }
        *(undefined4 *)(this + 0x87c) = *(undefined4 *)(param_1 + 0xa4);
        *(undefined4 *)(this + 0x90c) = *(undefined4 *)(param_1 + 0x328);
        std::vector<int,std::allocator<int>>::operator=
                  ((vector<int,std::allocator<int>> *)(this + 0x910),(vector *)(param_1 + 0x32c));
        std::copy<int*,int*>
                  ((int *)(param_1 + 0x128),(int *)(param_1 + 0x13c),(int *)(this + 0x880));
        *(undefined4 *)(this + 0x894) = *(undefined4 *)(param_1 + 0x13c);
        *(undefined4 *)(this + 0x898) = *(undefined4 *)(param_1 + 0x168);
        this[0x89c] = *(CDungeon *)(param_1 + 0x28c);
        this[0x89d] = *(CDungeon *)(param_1 + 0x140);
        this[0x89e] = *(CDungeon *)(param_1 + 0x28d);
        this[0x89f] = *(CDungeon *)(param_1 + 0x28e);
        this[0x800] = *(CDungeon *)(param_1 + 0x2ab);
        *(undefined4 *)(this + 0x804) = *(undefined4 *)(param_1 + 0x2ac);
        memcpy(this + 0x808,param_1 + 0x2b0,0xc);
        memcpy(this + 0x820,param_1 + 700,0xc);
        std::vector<int,std::allocator<int>>::operator=
                  ((vector<int,std::allocator<int>> *)(this + 0x814),(vector *)(param_1 + 0x2c8));
        advancealtar::ClearRewardData::operator=
                  ((ClearRewardData *)(this + 0x82c),(ClearRewardData *)(param_1 + 0x2d4));
        advancealtar::SurvivalRewardData::operator=
                  ((SurvivalRewardData *)(this + 0x850),(SurvivalRewardData *)(param_1 + 0x2f8));
        this[0x624] = (CDungeon)0x0;
        *(undefined4 *)(this + 0x628) = *(undefined4 *)(param_1 + 0x16c);
        *(undefined4 *)(this + 0x650) = *(undefined4 *)(param_1 + 0x338);
        *(undefined4 *)(this + 0x670) = *(undefined4 *)(param_1 + 0x358);
        *(undefined4 *)(this + 0x680) = *(undefined4 *)(param_1 + 0x368);
        if (*(int *)(this + 0x680) != 0) {
          std::vector<int,std::allocator<int>>::reserve
                    ((vector<int,std::allocator<int>> *)(this + 0x674),*(int *)(this + 0x680) + 1);
          local_20 = 0;
          while( true ) {
            uVar12 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                               ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                (param_1 + 0x35c));
            if (uVar12 <= local_20) break;
            puVar10 = (uint *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::at
                                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                          *)(param_1 + 0x35c),local_20);
            puVar11 = (undefined4 *)
                      std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(this + 0x674),*puVar10);
            iVar14 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::at
                               ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                (param_1 + 0x35c),local_20);
            *puVar11 = *(undefined4 *)(iVar14 + 4);
            local_20 = local_20 + 1;
          }
        }
        *(undefined4 *)(this + 0x654) = *(undefined4 *)(param_1 + 0x33c);
        if (*(int *)(this + 0x654) != 0) {
          std::
          map<int,std::vector<RandomList,std::allocator<RandomList>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>>
          ::clear((map<int,std::vector<RandomList,std::allocator<RandomList>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>>
                   *)(this + 0x658));
          std::
          map<int,std::vector<RandomList,std::allocator<RandomList>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>>
          ::begin(local_58);
          std::
          _Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
          ::_Rb_tree_const_iterator(local_a8,(_Rb_tree_iterator *)local_58);
          std::
          map<int,std::vector<RandomList,std::allocator<RandomList>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>>
          ::end(local_54);
          std::
          _Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
          ::_Rb_tree_const_iterator(local_ac,(_Rb_tree_iterator *)local_54);
          while( true ) {
            cVar3 = std::
                    _Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
                    ::operator!=(local_a8,(_Rb_tree_const_iterator *)local_ac);
            if (cVar3 == '\0') break;
            std::
            _Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
            ::operator->(local_a8);
            pvVar13 = (vector *)
                      std::
                      _Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
                      ::operator->(local_a8);
            std::make_pair<int_const&,std::vector<RandomList,std::allocator<RandomList>>const&>
                      ((int *)local_38,pvVar13);
                    /* try { // try from 0834b659 to 0834b65d has its CatchHandler @ 0834b6a2 */
            std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>::
            pair<int,std::vector<RandomList,std::allocator<RandomList>>>(local_48,local_38);
                    /* try { // try from 0834b678 to 0834b67c has its CatchHandler @ 0834b68d */
            std::
            map<int,std::vector<RandomList,std::allocator<RandomList>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>>
            ::insert(local_50);
                    /* try { // try from 0834b686 to 0834b68a has its CatchHandler @ 0834b6a2 */
            std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>::~pair(local_48)
            ;
            std::pair<int,std::vector<RandomList,std::allocator<RandomList>>>::~pair(local_38);
            std::
            _Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
            ::operator++(local_a8);
          }
        }
        *(undefined4 *)(this + 0x8a0) = *(undefined4 *)(param_1 + 0x3c4);
        std::vector<STNamedMonsterMapPos,std::allocator<STNamedMonsterMapPos>>::operator=
                  ((vector<STNamedMonsterMapPos,std::allocator<STNamedMonsterMapPos>> *)
                   (this + 0x8f0),(vector *)(param_1 + 0x3c8));
        *(undefined4 *)(this + 0x684) = *(undefined4 *)(param_1 + 0x3d4);
        *(undefined4 *)(this + 0x688) = *(undefined4 *)(param_1 + 0x3d8);
        *(undefined4 *)(this + 0x68c) = *(undefined4 *)(param_1 + 0x3dc);
        std::vector<stEventMonster_t,std::allocator<stEventMonster_t>>::operator=
                  ((vector<stEventMonster_t,std::allocator<stEventMonster_t>> *)(this + 0x690),
                   (vector *)(param_1 + 0x3e0));
        *(undefined4 *)(this + 0x69c) = *(undefined4 *)(param_1 + 0x3ec);
        *(undefined4 *)(this + 0x6a0) = *(undefined4 *)(param_1 + 0x3f0);
        *(undefined4 *)(this + 0x6a4) = *(undefined4 *)(param_1 + 0x3f4);
        std::vector<stSecondEventMonster_t,std::allocator<stSecondEventMonster_t>>::operator=
                  ((vector<stSecondEventMonster_t,std::allocator<stSecondEventMonster_t>> *)
                   (this + 0x6a8),(vector *)(param_1 + 0x3f8));
        this[0x6b4] = (CDungeon)(*(int *)(param_1 + 0x380) == 1);
        this[0x6b5] = (CDungeon)(*(int *)(param_1 + 0x3b4) == 1);
        *(undefined4 *)(this + 0x6b8) = *(undefined4 *)(param_1 + 0x3b8);
        std::
        vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
        ::operator=((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
                     *)(this + 0x900),(vector *)(param_1 + 0x404));
        this[0x6c8] = *(CDungeon *)(param_1 + 0x48c);
        if (param_1[0x2a9] != (STDungeonScript)0x0) {
          *(undefined4 *)(this + 4) = 1;
        }
        this[0x8fc] = *(CDungeon *)(param_1 + 0x2aa);
        this[0x8a8] = *(CDungeon *)(param_1 + 0x494);
        *(undefined4 *)(this + 0x8a4) = *(undefined4 *)(param_1 + 0x498);
        TournamentRewardItemRate::operator=
                  ((TournamentRewardItemRate *)(this + 0x8c4),
                   (TournamentRewardItemRate *)(param_1 + 0x4b4));
        std::
        map<int,TournamentRewardRate,std::less<int>,std::allocator<std::pair<int_const,TournamentRewardRate>>>
        ::operator=((map<int,TournamentRewardRate,std::less<int>,std::allocator<std::pair<int_const,TournamentRewardRate>>>
                     *)(this + 0x8ac),(map *)(param_1 + 0x49c));
        *(undefined4 *)(this + 0x8d4) = *(undefined4 *)(param_1 + 0x4c4);
        std::
        map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
        ::operator=((map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
                     *)(this + 0x8d8),(map *)(param_1 + 0x4c8));
        std::
        map<int,UseCoinDungeonDiff,std::less<int>,std::allocator<std::pair<int_const,UseCoinDungeonDiff>>>
        ::operator=((map<int,UseCoinDungeonDiff,std::less<int>,std::allocator<std::pair<int_const,UseCoinDungeonDiff>>>
                     *)(this + 0x91c),(map *)(param_1 + 0x4e4));
        std::vector<DimensionPartyCount,std::allocator<DimensionPartyCount>>::swap
                  ((vector<DimensionPartyCount,std::allocator<DimensionPartyCount>> *)(this + 0x6bc)
                   ,(vector *)(param_1 + 0x308));
        this[0x6c9] = *(CDungeon *)(param_1 + 0x4e0);
        *(undefined4 *)(this + 0x6cc) = *(undefined4 *)(param_1 + 0x4fc);
        this[0x6d0] = *(CDungeon *)(param_1 + 0x504);
        this[0x6d1] = *(CDungeon *)(param_1 + 0x505);
        return;
      }
      puVar11 = (undefined4 *)
                __gnu_cxx::
                __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator*(local_9c);
      local_74 = puVar11[1];
      local_78 = *puVar11;
      std::pair<int,int>::operator=((pair<int,int> *)&local_a4,(pair *)&local_78);
    } while (local_a4 == 0);
    local_98 = local_a0 + local_98;
    std::pair<int_const,int>::pair<int&,int&>(local_64,&local_98,&local_a4);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_6c);
    if (100 < local_98) {
      LogManager::logFormat
                (1,"data_manager.cpp","void CDungeon::set_dungeon(STDungeonScript&)",0x5e1,
                 "total_rate(%d) > 100",local_98);
      goto LAB_0834b197;
    }
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_5c,(int)local_9c);
  } while( true );
}

```

