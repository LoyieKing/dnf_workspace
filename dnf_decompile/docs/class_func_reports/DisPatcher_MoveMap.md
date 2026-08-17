# DisPatcher_MoveMap

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## CheckOneMapPlayTimeHackCnt

```asm
// === 081c4d26 DisPatcher_MoveMap::CheckOneMapPlayTimeHackCnt  [0x081c4d26-0x81c532f] ===
 81c4d26:	55                   	push   %ebp
 81c4d27:	89 e5                	mov    %esp,%ebp
 81c4d29:	53                   	push   %ebx
 81c4d2a:	83 ec 64             	sub    $0x64,%esp
 81c4d2d:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 81c4d34:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4d37:	89 04 24             	mov    %eax,(%esp)
 81c4d3a:	e8 0d 04 49 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81c4d3f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81c4d42:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81c4d46:	0f 84 dd 05 00 00    	je     81c5329 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x603>
 81c4d4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4d4f:	89 04 24             	mov    %eax,(%esp)
 81c4d52:	e8 35 56 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c4d57:	83 f8 0a             	cmp    $0xa,%eax
 81c4d5a:	0f 94 c0             	sete   %al
 81c4d5d:	84 c0                	test   %al,%al
 81c4d5f:	74 41                	je     81c4da2 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x7c>
 81c4d61:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4d64:	89 04 24             	mov    %eax,(%esp)
 81c4d67:	e8 38 05 49 00       	call   86552a4 <_ZN5CUser13getDeathTowerEv>
 81c4d6c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81c4d6f:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81c4d73:	74 4d                	je     81c4dc2 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x9c>
 81c4d75:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c4d78:	89 04 24             	mov    %eax,(%esp)
 81c4d7b:	e8 9e f8 06 00       	call   823461e <_ZN8WongWork11CDeathTower9getCStageEv>
 81c4d80:	89 04 24             	mov    %eax,(%esp)
 81c4d83:	e8 72 f8 06 00       	call   82345fa <_ZN8WongWork11CDeathTower6CStage17getStageClearTimeEv>
 81c4d88:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81c4d8b:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 81c4d90:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81c4d93:	f7 e2                	mul    %edx
 81c4d95:	89 d0                	mov    %edx,%eax
 81c4d97:	c1 e8 06             	shr    $0x6,%eax
 81c4d9a:	83 c0 05             	add    $0x5,%eax
 81c4d9d:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81c4da0:	eb 20                	jmp    81c4dc2 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x9c>
 81c4da2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c4da5:	89 04 24             	mov    %eax,(%esp)
 81c4da8:	e8 bb 19 3f 00       	call   85b6768 <_ZN6CParty17GetMapPlayingTimeEv>
 81c4dad:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81c4db0:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 81c4db5:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81c4db8:	f7 e2                	mul    %edx
 81c4dba:	89 d0                	mov    %edx,%eax
 81c4dbc:	c1 e8 06             	shr    $0x6,%eax
 81c4dbf:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81c4dc2:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 81c4dc9:	e9 4c 05 00 00       	jmp    81c531a <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x5f4>
 81c4dce:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c4dd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c4dd5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c4dd8:	89 04 24             	mov    %eax,(%esp)
 81c4ddb:	e8 88 0a f8 ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 81c4de0:	83 f0 01             	xor    $0x1,%eax
 81c4de3:	84 c0                	test   %al,%al
 81c4de5:	0f 85 2a 05 00 00    	jne    81c5315 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x5ef>
 81c4deb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c4dee:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c4df2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c4df5:	89 04 24             	mov    %eax,(%esp)
 81c4df8:	e8 67 09 f8 ff       	call   8145764 <_ZN6CParty8get_userEi>
 81c4dfd:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81c4e00:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81c4e04:	0f 84 0c 05 00 00    	je     81c5316 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x5f0>
 81c4e0a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c4e0d:	8b 45 10             	mov    0x10(%ebp),%eax
 81c4e10:	83 c2 08             	add    $0x8,%edx
 81c4e13:	8b 44 90 03          	mov    0x3(%eax,%edx,4),%eax
 81c4e17:	3d 10 27 00 00       	cmp    $0x2710,%eax
 81c4e1c:	0f 86 5b 01 00 00    	jbe    81c4f7d <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x257>
 81c4e22:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 81c4e29:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81c4e30:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c4e33:	8b 45 10             	mov    0x10(%ebp),%eax
 81c4e36:	83 c2 08             	add    $0x8,%edx
 81c4e39:	8b 54 90 03          	mov    0x3(%eax,%edx,4),%edx
 81c4e3d:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 81c4e40:	ba 59 17 b7 d1       	mov    $0xd1b71759,%edx
 81c4e45:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81c4e48:	f7 e2                	mul    %edx
 81c4e4a:	89 d0                	mov    %edx,%eax
 81c4e4c:	c1 e8 0d             	shr    $0xd,%eax
 81c4e4f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81c4e52:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c4e55:	8b 45 10             	mov    0x10(%ebp),%eax
 81c4e58:	83 c2 08             	add    $0x8,%edx
 81c4e5b:	8b 4c 90 03          	mov    0x3(%eax,%edx,4),%ecx
 81c4e5f:	ba 59 17 b7 d1       	mov    $0xd1b71759,%edx
 81c4e64:	89 c8                	mov    %ecx,%eax
 81c4e66:	f7 e2                	mul    %edx
 81c4e68:	89 d0                	mov    %edx,%eax
 81c4e6a:	c1 e8 0d             	shr    $0xd,%eax
 81c4e6d:	69 c0 10 27 00 00    	imul   $0x2710,%eax,%eax
 81c4e73:	89 ca                	mov    %ecx,%edx
 81c4e75:	29 c2                	sub    %eax,%edx
 81c4e77:	89 d0                	mov    %edx,%eax
 81c4e79:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c4e7c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c4e7f:	89 04 24             	mov    %eax,(%esp)
 81c4e82:	e8 c5 02 49 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81c4e87:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81c4e8d:	85 c0                	test   %eax,%eax
 81c4e8f:	0f 94 c0             	sete   %al
 81c4e92:	84 c0                	test   %al,%al
 81c4e94:	74 3e                	je     81c4ed4 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x1ae>
 81c4e96:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 81c4e99:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c4e9c:	89 04 24             	mov    %eax,(%esp)
 81c4e9f:	e8 b6 4a f3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81c4ea4:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81c4eab:	00 
 81c4eac:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81c4eb0:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81c4eb7:	00 
 81c4eb8:	c7 44 24 08 77 00 00 	movl   $0x77,0x8(%esp)
 81c4ebf:	00 
 81c4ec0:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81c4ec3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c4ec7:	89 04 24             	mov    %eax,(%esp)
 81c4eca:	e8 af 3d f3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81c4ecf:	e9 99 00 00 00       	jmp    81c4f6d <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x247>
 81c4ed4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c4ed7:	89 04 24             	mov    %eax,(%esp)
 81c4eda:	e8 6d 02 49 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81c4edf:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81c4ee5:	89 04 24             	mov    %eax,(%esp)
 81c4ee8:	e8 03 8e f3 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 81c4eed:	3d fe 2a 00 00       	cmp    $0x2afe,%eax
 81c4ef2:	0f 94 c0             	sete   %al
 81c4ef5:	84 c0                	test   %al,%al
 81c4ef7:	74 3b                	je     81c4f34 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x20e>
 81c4ef9:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 81c4efc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c4eff:	89 04 24             	mov    %eax,(%esp)
 81c4f02:	e8 53 4a f3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81c4f07:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81c4f0e:	00 
 81c4f0f:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81c4f13:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81c4f1a:	00 
 81c4f1b:	c7 44 24 08 82 00 00 	movl   $0x82,0x8(%esp)
 81c4f22:	00 
 81c4f23:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81c4f26:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c4f2a:	89 04 24             	mov    %eax,(%esp)
 81c4f2d:	e8 4c 3d f3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81c4f32:	eb 39                	jmp    81c4f6d <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x247>
 81c4f34:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 81c4f37:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c4f3a:	89 04 24             	mov    %eax,(%esp)
 81c4f3d:	e8 18 4a f3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81c4f42:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81c4f49:	00 
 81c4f4a:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81c4f4e:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81c4f55:	00 
 81c4f56:	c7 44 24 08 77 00 00 	movl   $0x77,0x8(%esp)
 81c4f5d:	00 
 81c4f5e:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81c4f61:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c4f65:	89 04 24             	mov    %eax,(%esp)
 81c4f68:	e8 11 3d f3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81c4f6d:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 81c4f70:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81c4f73:	8b 45 10             	mov    0x10(%ebp),%eax
 81c4f76:	83 c1 08             	add    $0x8,%ecx
 81c4f79:	89 54 88 03          	mov    %edx,0x3(%eax,%ecx,4)
 81c4f7d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c4f80:	89 04 24             	mov    %eax,(%esp)
 81c4f83:	e8 98 8f f3 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81c4f88:	83 f8 03             	cmp    $0x3,%eax
 81c4f8b:	74 1f                	je     81c4fac <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x286>
 81c4f8d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c4f90:	89 04 24             	mov    %eax,(%esp)
 81c4f93:	e8 88 8f f3 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81c4f98:	83 f8 04             	cmp    $0x4,%eax
 81c4f9b:	75 16                	jne    81c4fb3 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x28d>
 81c4f9d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c4fa0:	89 04 24             	mov    %eax,(%esp)
 81c4fa3:	e8 ec bc f4 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 81c4fa8:	3c 02                	cmp    $0x2,%al
 81c4faa:	75 07                	jne    81c4fb3 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x28d>
 81c4fac:	b8 01 00 00 00       	mov    $0x1,%eax
 81c4fb1:	eb 05                	jmp    81c4fb8 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x292>
 81c4fb3:	b8 00 00 00 00       	mov    $0x0,%eax
 81c4fb8:	84 c0                	test   %al,%al
 81c4fba:	74 50                	je     81c500c <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x2e6>
 81c4fbc:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 81c4fbf:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c4fc2:	8b 45 10             	mov    0x10(%ebp),%eax
 81c4fc5:	83 c2 08             	add    $0x8,%edx
 81c4fc8:	8b 44 90 03          	mov    0x3(%eax,%edx,4),%eax
 81c4fcc:	ba 00 00 00 00       	mov    $0x0,%edx
 81c4fd1:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81c4fd4:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 81c4fd7:	df 6d d0             	fildll -0x30(%ebp)
 81c4fda:	dd 05 20 63 bd 08    	fldl   0x8bd6320
 81c4fe0:	de c9                	fmulp  %st,%st(1)
 81c4fe2:	d9 7d ce             	fnstcw -0x32(%ebp)
 81c4fe5:	0f b7 45 ce          	movzwl -0x32(%ebp),%eax
 81c4fe9:	b4 0c                	mov    $0xc,%ah
 81c4feb:	66 89 45 cc          	mov    %ax,-0x34(%ebp)
 81c4fef:	d9 6d cc             	fldcw  -0x34(%ebp)
 81c4ff2:	df 7d d0             	fistpll -0x30(%ebp)
 81c4ff5:	d9 6d ce             	fldcw  -0x32(%ebp)
 81c4ff8:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81c4ffb:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81c4ffe:	89 c2                	mov    %eax,%edx
 81c5000:	8b 45 10             	mov    0x10(%ebp),%eax
 81c5003:	83 c1 08             	add    $0x8,%ecx
 81c5006:	89 54 88 03          	mov    %edx,0x3(%eax,%ecx,4)
 81c500a:	eb 4e                	jmp    81c505a <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x334>
 81c500c:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 81c500f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c5012:	8b 45 10             	mov    0x10(%ebp),%eax
 81c5015:	83 c2 08             	add    $0x8,%edx
 81c5018:	8b 44 90 03          	mov    0x3(%eax,%edx,4),%eax
 81c501c:	ba 00 00 00 00       	mov    $0x0,%edx
 81c5021:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81c5024:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 81c5027:	df 6d d0             	fildll -0x30(%ebp)
 81c502a:	dd 05 28 63 bd 08    	fldl   0x8bd6328
 81c5030:	de c9                	fmulp  %st,%st(1)
 81c5032:	d9 7d ce             	fnstcw -0x32(%ebp)
 81c5035:	0f b7 45 ce          	movzwl -0x32(%ebp),%eax
 81c5039:	b4 0c                	mov    $0xc,%ah
 81c503b:	66 89 45 cc          	mov    %ax,-0x34(%ebp)
 81c503f:	d9 6d cc             	fldcw  -0x34(%ebp)
 81c5042:	df 7d d0             	fistpll -0x30(%ebp)
 81c5045:	d9 6d ce             	fldcw  -0x32(%ebp)
 81c5048:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81c504b:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81c504e:	89 c2                	mov    %eax,%edx
 81c5050:	8b 45 10             	mov    0x10(%ebp),%eax
 81c5053:	83 c1 08             	add    $0x8,%ecx
 81c5056:	89 54 88 03          	mov    %edx,0x3(%eax,%ecx,4)
 81c505a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c505d:	05 24 0b 00 00       	add    $0xb24,%eax
 81c5062:	89 04 24             	mov    %eax,(%esp)
 81c5065:	e8 e6 7e 06 00       	call   822cf50 <_ZN13CBattle_Field17check_start_pointEv>
 81c506a:	83 f0 01             	xor    $0x1,%eax
 81c506d:	84 c0                	test   %al,%al
 81c506f:	0f 84 a1 02 00 00    	je     81c5316 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x5f0>
 81c5075:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c5078:	8b 45 10             	mov    0x10(%ebp),%eax
 81c507b:	83 c2 08             	add    $0x8,%edx
 81c507e:	8b 44 90 03          	mov    0x3(%eax,%edx,4),%eax
 81c5082:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 81c5085:	0f 86 8b 02 00 00    	jbe    81c5316 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x5f0>
 81c508b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81c508e:	ba 00 00 00 00       	mov    $0x0,%edx
 81c5093:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81c5096:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 81c5099:	df 6d d0             	fildll -0x30(%ebp)
 81c509c:	dd 05 30 63 bd 08    	fldl   0x8bd6330
 81c50a2:	de c9                	fmulp  %st,%st(1)
 81c50a4:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c50a7:	8b 45 10             	mov    0x10(%ebp),%eax
 81c50aa:	83 c2 08             	add    $0x8,%edx
 81c50ad:	8b 44 90 03          	mov    0x3(%eax,%edx,4),%eax
 81c50b1:	ba 00 00 00 00       	mov    $0x0,%edx
 81c50b6:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81c50b9:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 81c50bc:	df 6d d0             	fildll -0x30(%ebp)
 81c50bf:	da e9                	fucompp
 81c50c1:	df e0                	fnstsw %ax
 81c50c3:	f6 c4 45             	test   $0x45,%ah
 81c50c6:	0f 94 c0             	sete   %al
 81c50c9:	84 c0                	test   %al,%al
 81c50cb:	0f 84 33 01 00 00    	je     81c5204 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x4de>
 81c50d1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81c50d8:	e9 13 01 00 00       	jmp    81c51f0 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x4ca>
 81c50dd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c50e0:	89 04 24             	mov    %eax,(%esp)
 81c50e3:	e8 64 00 49 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81c50e8:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81c50ee:	85 c0                	test   %eax,%eax
 81c50f0:	0f 94 c0             	sete   %al
 81c50f3:	84 c0                	test   %al,%al
 81c50f5:	74 48                	je     81c513f <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x419>
 81c50f7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c50fa:	8b 45 10             	mov    0x10(%ebp),%eax
 81c50fd:	83 c2 08             	add    $0x8,%edx
 81c5100:	8b 5c 90 03          	mov    0x3(%eax,%edx,4),%ebx
 81c5104:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c5107:	89 04 24             	mov    %eax,(%esp)
 81c510a:	e8 4b 48 f3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81c510f:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81c5116:	00 
 81c5117:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81c511b:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81c5122:	00 
 81c5123:	c7 44 24 08 74 00 00 	movl   $0x74,0x8(%esp)
 81c512a:	00 
 81c512b:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81c512e:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c5132:	89 04 24             	mov    %eax,(%esp)
 81c5135:	e8 44 3b f3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81c513a:	e9 ad 00 00 00       	jmp    81c51ec <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x4c6>
 81c513f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c5142:	89 04 24             	mov    %eax,(%esp)
 81c5145:	e8 02 00 49 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81c514a:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81c5150:	89 04 24             	mov    %eax,(%esp)
 81c5153:	e8 98 8b f3 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 81c5158:	3d fe 2a 00 00       	cmp    $0x2afe,%eax
 81c515d:	0f 94 c0             	sete   %al
 81c5160:	84 c0                	test   %al,%al
 81c5162:	74 45                	je     81c51a9 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x483>
 81c5164:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c5167:	8b 45 10             	mov    0x10(%ebp),%eax
 81c516a:	83 c2 08             	add    $0x8,%edx
 81c516d:	8b 5c 90 03          	mov    0x3(%eax,%edx,4),%ebx
 81c5171:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c5174:	89 04 24             	mov    %eax,(%esp)
 81c5177:	e8 de 47 f3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81c517c:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81c5183:	00 
 81c5184:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81c5188:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81c518f:	00 
 81c5190:	c7 44 24 08 81 00 00 	movl   $0x81,0x8(%esp)
 81c5197:	00 
 81c5198:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81c519b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c519f:	89 04 24             	mov    %eax,(%esp)
 81c51a2:	e8 d7 3a f3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81c51a7:	eb 43                	jmp    81c51ec <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x4c6>
 81c51a9:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c51ac:	8b 45 10             	mov    0x10(%ebp),%eax
 81c51af:	83 c2 08             	add    $0x8,%edx
 81c51b2:	8b 5c 90 03          	mov    0x3(%eax,%edx,4),%ebx
 81c51b6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c51b9:	89 04 24             	mov    %eax,(%esp)
 81c51bc:	e8 99 47 f3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81c51c1:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81c51c8:	00 
 81c51c9:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81c51cd:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81c51d4:	00 
 81c51d5:	c7 44 24 08 74 00 00 	movl   $0x74,0x8(%esp)
 81c51dc:	00 
 81c51dd:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81c51e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c51e4:	89 04 24             	mov    %eax,(%esp)
 81c51e7:	e8 92 3a f3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81c51ec:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81c51f0:	83 7d f4 09          	cmpl   $0x9,-0xc(%ebp)
 81c51f4:	0f 9e c0             	setle  %al
 81c51f7:	84 c0                	test   %al,%al
 81c51f9:	0f 85 de fe ff ff    	jne    81c50dd <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x3b7>
 81c51ff:	e9 12 01 00 00       	jmp    81c5316 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x5f0>
 81c5204:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c5207:	89 04 24             	mov    %eax,(%esp)
 81c520a:	e8 3d ff 48 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81c520f:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81c5215:	85 c0                	test   %eax,%eax
 81c5217:	0f 94 c0             	sete   %al
 81c521a:	84 c0                	test   %al,%al
 81c521c:	74 48                	je     81c5266 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x540>
 81c521e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c5221:	8b 45 10             	mov    0x10(%ebp),%eax
 81c5224:	83 c2 08             	add    $0x8,%edx
 81c5227:	8b 5c 90 03          	mov    0x3(%eax,%edx,4),%ebx
 81c522b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c522e:	89 04 24             	mov    %eax,(%esp)
 81c5231:	e8 24 47 f3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81c5236:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81c523d:	00 
 81c523e:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81c5242:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81c5249:	00 
 81c524a:	c7 44 24 08 74 00 00 	movl   $0x74,0x8(%esp)
 81c5251:	00 
 81c5252:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81c5255:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c5259:	89 04 24             	mov    %eax,(%esp)
 81c525c:	e8 1d 3a f3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81c5261:	e9 b0 00 00 00       	jmp    81c5316 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x5f0>
 81c5266:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c5269:	89 04 24             	mov    %eax,(%esp)
 81c526c:	e8 db fe 48 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81c5271:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81c5277:	89 04 24             	mov    %eax,(%esp)
 81c527a:	e8 71 8a f3 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 81c527f:	3d fe 2a 00 00       	cmp    $0x2afe,%eax
 81c5284:	0f 94 c0             	sete   %al
 81c5287:	84 c0                	test   %al,%al
 81c5289:	74 45                	je     81c52d0 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x5aa>
 81c528b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c528e:	8b 45 10             	mov    0x10(%ebp),%eax
 81c5291:	83 c2 08             	add    $0x8,%edx
 81c5294:	8b 5c 90 03          	mov    0x3(%eax,%edx,4),%ebx
 81c5298:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c529b:	89 04 24             	mov    %eax,(%esp)
 81c529e:	e8 b7 46 f3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81c52a3:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81c52aa:	00 
 81c52ab:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81c52af:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81c52b6:	00 
 81c52b7:	c7 44 24 08 81 00 00 	movl   $0x81,0x8(%esp)
 81c52be:	00 
 81c52bf:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81c52c2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c52c6:	89 04 24             	mov    %eax,(%esp)
 81c52c9:	e8 b0 39 f3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81c52ce:	eb 46                	jmp    81c5316 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x5f0>
 81c52d0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c52d3:	8b 45 10             	mov    0x10(%ebp),%eax
 81c52d6:	83 c2 08             	add    $0x8,%edx
 81c52d9:	8b 5c 90 03          	mov    0x3(%eax,%edx,4),%ebx
 81c52dd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c52e0:	89 04 24             	mov    %eax,(%esp)
 81c52e3:	e8 72 46 f3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81c52e8:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81c52ef:	00 
 81c52f0:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81c52f4:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81c52fb:	00 
 81c52fc:	c7 44 24 08 74 00 00 	movl   $0x74,0x8(%esp)
 81c5303:	00 
 81c5304:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81c5307:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c530b:	89 04 24             	mov    %eax,(%esp)
 81c530e:	e8 6b 39 f3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81c5313:	eb 01                	jmp    81c5316 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0x5f0>
 81c5315:	90                   	nop
 81c5316:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 81c531a:	83 7d e4 03          	cmpl   $0x3,-0x1c(%ebp)
 81c531e:	0f 9e c0             	setle  %al
 81c5321:	84 c0                	test   %al,%al
 81c5323:	0f 85 a5 fa ff ff    	jne    81c4dce <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP+0xa8>
 81c5329:	83 c4 64             	add    $0x64,%esp
 81c532c:	5b                   	pop    %ebx
 81c532d:	5d                   	pop    %ebp
 81c532e:	c3                   	ret
 81c532f:	90                   	nop

```

```c
// DisPatcher_MoveMap::CheckOneMapPlayTimeHackCnt @ 0x81c4d26

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DisPatcher_MoveMap::CheckOneMapPlayTimeHackCnt(CUser*, MSG_MOVE_MAP&) */

void __thiscall
DisPatcher_MoveMap::CheckOneMapPlayTimeHackCnt
          (DisPatcher_MoveMap *this,CUser *param_1,MSG_MOVE_MAP *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  double dVar3;
  char cVar4;
  CParty *this_00;
  int iVar5;
  CDeathTower *this_01;
  CStage *this_02;
  uint uVar6;
  CUser *this_03;
  uint uVar7;
  CHackAnalyzer *pCVar8;
  ulonglong local_34;
  uint local_2c;
  int local_20;
  int local_10;
  
  local_2c = 0;
  this_00 = (CParty *)CUser::GetParty(param_1);
  if (this_00 != (CParty *)0x0) {
    iVar5 = CUser::get_state(param_1);
    if (iVar5 == 10) {
      this_01 = (CDeathTower *)CUser::getDeathTower(param_1);
      if (this_01 != (CDeathTower *)0x0) {
        this_02 = (CStage *)WongWork::CDeathTower::getCStage(this_01);
        uVar6 = WongWork::CDeathTower::CStage::getStageClearTime(this_02);
        local_2c = uVar6 / 1000 + 5;
      }
    }
    else {
      local_2c = CParty::GetMapPlayingTime(this_00);
      local_2c = local_2c / 1000;
    }
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      cVar4 = CParty::checkValidUser(this_00,local_20);
      if ((cVar4 == '\x01') &&
         (this_03 = (CUser *)CParty::get_user(this_00,local_20), this_03 != (CUser *)0x0)) {
        if (10000 < *(uint *)(param_2 + (local_20 + 8) * 4 + 3)) {
          uVar7 = *(uint *)(param_2 + (local_20 + 8) * 4 + 3) / 10000;
          uVar6 = *(uint *)(param_2 + (local_20 + 8) * 4 + 3);
          iVar5 = CUser::GetParty(this_03);
          if (*(int *)(iVar5 + 0xcac) == 0) {
            pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_03);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,this_03,0x77,1,uVar7,0);
          }
          else {
            iVar5 = CUser::GetParty(this_03);
            iVar5 = CDungeon::get_index(*(CDungeon **)(iVar5 + 0xcac));
            if (iVar5 == 0x2afe) {
              pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_03);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,this_03,0x82,1,uVar7,0);
            }
            else {
              pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_03);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,this_03,0x77,1,uVar7,0);
            }
          }
          *(uint *)(param_2 + (local_20 + 8) * 4 + 3) = uVar6 % 10000;
        }
        iVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this_03);
        if ((iVar5 == 3) ||
           ((iVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this_03), iVar5 == 4 &&
            (cVar4 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this_03),
            cVar4 == '\x02')))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          local_34 = (ulonglong)*(uint *)(param_2 + (local_20 + 8) * 4 + 3);
          local_34._0_4_ = (undefined4)(longlong)ROUND(_DAT_08bd6320 * (double)local_34);
          *(undefined4 *)(param_2 + (local_20 + 8) * 4 + 3) = (undefined4)local_34;
        }
        else {
          local_34 = (ulonglong)*(uint *)(param_2 + (local_20 + 8) * 4 + 3);
          local_34._0_4_ = (undefined4)(longlong)ROUND(_DAT_08bd6328 * (double)local_34);
          *(undefined4 *)(param_2 + (local_20 + 8) * 4 + 3) = (undefined4)local_34;
        }
        cVar4 = CBattle_Field::check_start_point((CBattle_Field *)(this_00 + 0xb24));
        if ((cVar4 != '\x01') && (local_2c < *(uint *)(param_2 + (local_20 + 8) * 4 + 3))) {
          local_34 = (ulonglong)local_2c;
          dVar3 = (double)local_34;
          local_34 = (ulonglong)*(uint *)(param_2 + (local_20 + 8) * 4 + 3);
          if ((double)local_34 <= _DAT_08bd6330 * dVar3) {
            iVar5 = CUser::GetParty(this_03);
            if (*(int *)(iVar5 + 0xcac) == 0) {
              uVar1 = *(undefined4 *)(param_2 + (local_20 + 8) * 4 + 3);
              pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_03);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,this_03,0x74,1,uVar1,0);
            }
            else {
              iVar5 = CUser::GetParty(this_03);
              iVar5 = CDungeon::get_index(*(CDungeon **)(iVar5 + 0xcac));
              if (iVar5 == 0x2afe) {
                uVar1 = *(undefined4 *)(param_2 + (local_20 + 8) * 4 + 3);
                pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_03);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,this_03,0x81,1,uVar1,0);
              }
              else {
                uVar1 = *(undefined4 *)(param_2 + (local_20 + 8) * 4 + 3);
                pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_03);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,this_03,0x74,1,uVar1,0);
              }
            }
          }
          else {
            for (local_10 = 0; local_10 < 10; local_10 = local_10 + 1) {
              iVar5 = CUser::GetParty(this_03);
              if (*(int *)(iVar5 + 0xcac) == 0) {
                uVar1 = *(undefined4 *)(param_2 + (local_20 + 8) * 4 + 3);
                pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_03);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,this_03,0x74,1,uVar1,0);
              }
              else {
                iVar5 = CUser::GetParty(this_03);
                iVar5 = CDungeon::get_index(*(CDungeon **)(iVar5 + 0xcac));
                if (iVar5 == 0x2afe) {
                  uVar1 = *(undefined4 *)(param_2 + (local_20 + 8) * 4 + 3);
                  pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_03);
                  WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,this_03,0x81,1,uVar1,0);
                }
                else {
                  uVar1 = *(undefined4 *)(param_2 + (local_20 + 8) * 4 + 3);
                  pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_03);
                  WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,this_03,0x74,1,uVar1,0);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

```

---

## CheckTrapBitsHackCnt

```asm
// === 081c4b7a DisPatcher_MoveMap::CheckTrapBitsHackCnt  [0x081c4b7a-0x81c4d25] ===
 81c4b7a:	55                   	push   %ebp
 81c4b7b:	89 e5                	mov    %esp,%ebp
 81c4b7d:	53                   	push   %ebx
 81c4b7e:	83 ec 34             	sub    $0x34,%esp
 81c4b81:	8b 45 10             	mov    0x10(%ebp),%eax
 81c4b84:	0f b7 48 18          	movzwl 0x18(%eax),%ecx
 81c4b88:	0f b7 c1             	movzwl %cx,%eax
 81c4b8b:	69 c0 93 24 00 00    	imul   $0x2493,%eax,%eax
 81c4b91:	c1 e8 10             	shr    $0x10,%eax
 81c4b94:	89 ca                	mov    %ecx,%edx
 81c4b96:	66 29 c2             	sub    %ax,%dx
 81c4b99:	66 d1 ea             	shr    $1,%dx
 81c4b9c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81c4b9f:	89 c2                	mov    %eax,%edx
 81c4ba1:	66 c1 ea 02          	shr    $0x2,%dx
 81c4ba5:	89 d0                	mov    %edx,%eax
 81c4ba7:	c1 e0 03             	shl    $0x3,%eax
 81c4baa:	66 29 d0             	sub    %dx,%ax
 81c4bad:	89 ca                	mov    %ecx,%edx
 81c4baf:	66 29 c2             	sub    %ax,%dx
 81c4bb2:	66 85 d2             	test   %dx,%dx
 81c4bb5:	0f 84 65 01 00 00    	je     81c4d20 <_ZN18DisPatcher_MoveMap20CheckTrapBitsHackCntEP5CUserR12MSG_MOVE_MAP+0x1a6>
 81c4bbb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4bbe:	89 04 24             	mov    %eax,(%esp)
 81c4bc1:	e8 94 4d f3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81c4bc6:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81c4bcd:	00 
 81c4bce:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81c4bd5:	00 
 81c4bd6:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81c4bdd:	00 
 81c4bde:	c7 44 24 08 f9 01 00 	movl   $0x1f9,0x8(%esp)
 81c4be5:	00 
 81c4be6:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c4be9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c4bed:	89 04 24             	mov    %eax,(%esp)
 81c4bf0:	e8 89 40 f3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81c4bf5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4bf8:	89 04 24             	mov    %eax,(%esp)
 81c4bfb:	e8 5a 4d f3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81c4c00:	c7 44 24 04 f9 01 00 	movl   $0x1f9,0x4(%esp)
 81c4c07:	00 
 81c4c08:	89 04 24             	mov    %eax,(%esp)
 81c4c0b:	e8 e6 a2 06 00       	call   822eef6 <_ZNK8WongWork13CHackAnalyzer27getServerHackAccumulatedCntENS_13ENUM_HACKTYPEE>
 81c4c10:	83 f8 04             	cmp    $0x4,%eax
 81c4c13:	0f 9f c0             	setg   %al
 81c4c16:	84 c0                	test   %al,%al
 81c4c18:	0f 84 02 01 00 00    	je     81c4d20 <_ZN18DisPatcher_MoveMap20CheckTrapBitsHackCntEP5CUserR12MSG_MOVE_MAP+0x1a6>
 81c4c1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4c21:	89 04 24             	mov    %eax,(%esp)
 81c4c24:	e8 23 05 49 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81c4c29:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81c4c2c:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81c4c30:	0f 84 ea 00 00 00    	je     81c4d20 <_ZN18DisPatcher_MoveMap20CheckTrapBitsHackCntEP5CUserR12MSG_MOVE_MAP+0x1a6>
 81c4c36:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81c4c3d:	e9 cf 00 00 00       	jmp    81c4d11 <_ZN18DisPatcher_MoveMap20CheckTrapBitsHackCntEP5CUserR12MSG_MOVE_MAP+0x197>
 81c4c42:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c4c45:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c4c49:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c4c4c:	89 04 24             	mov    %eax,(%esp)
 81c4c4f:	e8 14 0c f8 ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 81c4c54:	83 f0 01             	xor    $0x1,%eax
 81c4c57:	84 c0                	test   %al,%al
 81c4c59:	0f 85 ad 00 00 00    	jne    81c4d0c <_ZN18DisPatcher_MoveMap20CheckTrapBitsHackCntEP5CUserR12MSG_MOVE_MAP+0x192>
 81c4c5f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c4c62:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c4c66:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c4c69:	89 04 24             	mov    %eax,(%esp)
 81c4c6c:	e8 f3 0a f8 ff       	call   8145764 <_ZN6CParty8get_userEi>
 81c4c71:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c4c74:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c4c77:	3b 45 0c             	cmp    0xc(%ebp),%eax
 81c4c7a:	74 3a                	je     81c4cb6 <_ZN18DisPatcher_MoveMap20CheckTrapBitsHackCntEP5CUserR12MSG_MOVE_MAP+0x13c>
 81c4c7c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c4c7f:	89 04 24             	mov    %eax,(%esp)
 81c4c82:	e8 d3 4c f3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81c4c87:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81c4c8e:	00 
 81c4c8f:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81c4c96:	00 
 81c4c97:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81c4c9e:	00 
 81c4c9f:	c7 44 24 08 fa 01 00 	movl   $0x1fa,0x8(%esp)
 81c4ca6:	00 
 81c4ca7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c4caa:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c4cae:	89 04 24             	mov    %eax,(%esp)
 81c4cb1:	e8 c8 3f f3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81c4cb6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c4cb9:	05 e0 00 00 00       	add    $0xe0,%eax
 81c4cbe:	89 04 24             	mov    %eax,(%esp)
 81c4cc1:	e8 46 20 07 00       	call   8236d0c <_ZN8CNetworkILi4096ELi450000EE10get_str_ipEv>
 81c4cc6:	89 c3                	mov    %eax,%ebx
 81c4cc8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c4ccb:	89 04 24             	mov    %eax,(%esp)
 81c4cce:	e8 9b 56 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c4cd3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81c4cd7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c4cde:	00 
 81c4cdf:	89 04 24             	mov    %eax,(%esp)
 81c4ce2:	e8 ad 07 26 00       	call   8425494 <_ZN24DB_ReqSaveHackUserPunish11makeRequestEjjPKc>
 81c4ce7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c4cee:	00 
 81c4cef:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81c4cf6:	00 
 81c4cf7:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 81c4cfe:	00 
 81c4cff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c4d02:	89 04 24             	mov    %eax,(%esp)
 81c4d05:	e8 ea 3c 48 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 81c4d0a:	eb 01                	jmp    81c4d0d <_ZN18DisPatcher_MoveMap20CheckTrapBitsHackCntEP5CUserR12MSG_MOVE_MAP+0x193>
 81c4d0c:	90                   	nop
 81c4d0d:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81c4d11:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 81c4d15:	0f 9e c0             	setle  %al
 81c4d18:	84 c0                	test   %al,%al
 81c4d1a:	0f 85 22 ff ff ff    	jne    81c4c42 <_ZN18DisPatcher_MoveMap20CheckTrapBitsHackCntEP5CUserR12MSG_MOVE_MAP+0xc8>
 81c4d20:	83 c4 34             	add    $0x34,%esp
 81c4d23:	5b                   	pop    %ebx
 81c4d24:	5d                   	pop    %ebp
 81c4d25:	c3                   	ret

```

```c
// DisPatcher_MoveMap::CheckTrapBitsHackCnt @ 0x81c4b7a

/* DisPatcher_MoveMap::CheckTrapBitsHackCnt(CUser*, MSG_MOVE_MAP&) */

void __thiscall
DisPatcher_MoveMap::CheckTrapBitsHackCnt
          (DisPatcher_MoveMap *this,CUser *param_1,MSG_MOVE_MAP *param_2)

{
  ushort uVar1;
  char cVar2;
  CHackAnalyzer *pCVar3;
  int iVar4;
  CParty *this_00;
  CUser *this_01;
  char *pcVar5;
  uint uVar6;
  int local_14;
  
  uVar1 = *(ushort *)(param_2 + 0x18);
  if ((ushort)(uVar1 + ((ushort)((uint)((ushort)(uVar1 - (short)((uint)uVar1 * 0x2493 >> 0x10)) >> 1
                                       ) + ((uint)uVar1 * 0x2493 >> 0x10)) >> 2) * -7) != 0) {
    pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar3,param_1,0x1f9,1,0,0);
    pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
    iVar4 = WongWork::CHackAnalyzer::getServerHackAccumulatedCnt(pCVar3,0x1f9);
    if (4 < iVar4) {
      this_00 = (CParty *)CUser::GetParty(param_1);
      if (this_00 != (CParty *)0x0) {
        for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
          cVar2 = CParty::checkValidUser(this_00,local_14);
          if (cVar2 == '\x01') {
            this_01 = (CUser *)CParty::get_user(this_00,local_14);
            if (this_01 != param_1) {
              pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_01);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar3,this_01,0x1fa,1,0,0);
            }
            pcVar5 = (char *)CNetwork<4096,450000>::get_str_ip
                                       ((CNetwork<4096,450000> *)(this_01 + 0xe0));
            uVar6 = CUser::get_acc_id(this_01);
            DB_ReqSaveHackUserPunish::makeRequest(uVar6,0,pcVar5);
            CUser::DisConnSig(this_01,0x18,1,0);
          }
        }
      }
    }
  }
  return;
}

```

---

## check_error

```asm
// === 081c4a90 DisPatcher_MoveMap::check_error  [0x081c4a90-0x81c4b79] ===
 81c4a90:	55                   	push   %ebp
 81c4a91:	89 e5                	mov    %esp,%ebp
 81c4a93:	53                   	push   %ebx
 81c4a94:	83 ec 24             	sub    $0x24,%esp
 81c4a97:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81c4a9b:	75 0a                	jne    81c4aa7 <_ZN18DisPatcher_MoveMap11check_errorEP5CUserR8MSG_BASE+0x17>
 81c4a9d:	b8 fd ff ff ff       	mov    $0xfffffffd,%eax
 81c4aa2:	e9 cc 00 00 00       	jmp    81c4b73 <_ZN18DisPatcher_MoveMap11check_errorEP5CUserR8MSG_BASE+0xe3>
 81c4aa7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4aaa:	89 04 24             	mov    %eax,(%esp)
 81c4aad:	e8 9a 06 49 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81c4ab2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c4ab5:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81c4ab9:	75 0a                	jne    81c4ac5 <_ZN18DisPatcher_MoveMap11check_errorEP5CUserR8MSG_BASE+0x35>
 81c4abb:	b8 fc ff ff ff       	mov    $0xfffffffc,%eax
 81c4ac0:	e9 ae 00 00 00       	jmp    81c4b73 <_ZN18DisPatcher_MoveMap11check_errorEP5CUserR8MSG_BASE+0xe3>
 81c4ac5:	8b 45 10             	mov    0x10(%ebp),%eax
 81c4ac8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c4acb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c4ace:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81c4ad2:	0f be d8             	movsbl %al,%ebx
 81c4ad5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c4ad8:	05 24 0b 00 00       	add    $0xb24,%eax
 81c4add:	89 04 24             	mov    %eax,(%esp)
 81c4ae0:	e8 25 84 06 00       	call   822cf0a <_ZN13CBattle_Field12getMapHeightEv>
 81c4ae5:	39 c3                	cmp    %eax,%ebx
 81c4ae7:	7d 1e                	jge    81c4b07 <_ZN18DisPatcher_MoveMap11check_errorEP5CUserR8MSG_BASE+0x77>
 81c4ae9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c4aec:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c4af0:	0f be d8             	movsbl %al,%ebx
 81c4af3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c4af6:	05 24 0b 00 00       	add    $0xb24,%eax
 81c4afb:	89 04 24             	mov    %eax,(%esp)
 81c4afe:	e8 f9 83 06 00       	call   822cefc <_ZN13CBattle_Field11getMapWidthEv>
 81c4b03:	39 c3                	cmp    %eax,%ebx
 81c4b05:	7c 07                	jl     81c4b0e <_ZN18DisPatcher_MoveMap11check_errorEP5CUserR8MSG_BASE+0x7e>
 81c4b07:	b8 01 00 00 00       	mov    $0x1,%eax
 81c4b0c:	eb 05                	jmp    81c4b13 <_ZN18DisPatcher_MoveMap11check_errorEP5CUserR8MSG_BASE+0x83>
 81c4b0e:	b8 00 00 00 00       	mov    $0x0,%eax
 81c4b13:	84 c0                	test   %al,%al
 81c4b15:	74 07                	je     81c4b1e <_ZN18DisPatcher_MoveMap11check_errorEP5CUserR8MSG_BASE+0x8e>
 81c4b17:	b8 fb ff ff ff       	mov    $0xfffffffb,%eax
 81c4b1c:	eb 55                	jmp    81c4b73 <_ZN18DisPatcher_MoveMap11check_errorEP5CUserR8MSG_BASE+0xe3>
 81c4b1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4b21:	89 04 24             	mov    %eax,(%esp)
 81c4b24:	e8 8d b2 06 00       	call   822fdb6 <_ZN5CUser4lockEv>
 81c4b29:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81c4b2d:	74 13                	je     81c4b42 <_ZN18DisPatcher_MoveMap11check_errorEP5CUserR8MSG_BASE+0xb2>
 81c4b2f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4b32:	89 04 24             	mov    %eax,(%esp)
 81c4b35:	e8 e2 bc 06 00       	call   823081c <_ZN5CUser12GetCSHashSetEv>
 81c4b3a:	89 04 24             	mov    %eax,(%esp)
 81c4b3d:	e8 b6 21 07 00       	call   8236cf8 <_ZNSt3setISt4pairIhtESt4lessIS1_ESaIS1_EE5clearEv>
 81c4b42:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4b45:	89 04 24             	mov    %eax,(%esp)
 81c4b48:	e8 81 b2 06 00       	call   822fdce <_ZN5CUser6unlockEv>
 81c4b4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4b50:	89 04 24             	mov    %eax,(%esp)
 81c4b53:	e8 34 58 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c4b58:	89 04 24             	mov    %eax,(%esp)
 81c4b5b:	e8 90 1b f8 ff       	call   81466f0 <_ZN6Global11CGlobalFunc15Get_State_CheckE8ch_state>
 81c4b60:	83 f0 01             	xor    $0x1,%eax
 81c4b63:	84 c0                	test   %al,%al
 81c4b65:	74 07                	je     81c4b6e <_ZN18DisPatcher_MoveMap11check_errorEP5CUserR8MSG_BASE+0xde>
 81c4b67:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81c4b6c:	eb 05                	jmp    81c4b73 <_ZN18DisPatcher_MoveMap11check_errorEP5CUserR8MSG_BASE+0xe3>
 81c4b6e:	b8 00 00 00 00       	mov    $0x0,%eax
 81c4b73:	83 c4 24             	add    $0x24,%esp
 81c4b76:	5b                   	pop    %ebx
 81c4b77:	5d                   	pop    %ebp
 81c4b78:	c3                   	ret
 81c4b79:	90                   	nop

```

```c
// DisPatcher_MoveMap::check_error @ 0x81c4a90

/* DisPatcher_MoveMap::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_MoveMap::check_error(DisPatcher_MoveMap *this,CUser *param_1,MSG_BASE *param_2)

{
  MSG_BASE MVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  set<std::pair<unsigned_char,unsigned_short>,std::less<std::pair<unsigned_char,unsigned_short>>,std::allocator<std::pair<unsigned_char,unsigned_short>>>
  *this_00;
  
  if (param_1 == (CUser *)0x0) {
    return 0xfffffffd;
  }
  iVar4 = CUser::GetParty(param_1);
  if (iVar4 != 0) {
    MVar1 = param_2[0xe];
    iVar5 = CBattle_Field::getMapHeight((CBattle_Field *)(iVar4 + 0xb24));
    if (((char)MVar1 < iVar5) &&
       (MVar1 = param_2[0xd], iVar4 = CBattle_Field::getMapWidth((CBattle_Field *)(iVar4 + 0xb24)),
       (char)MVar1 < iVar4)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar6 = 0xfffffffb;
    }
    else {
      CUser::lock(param_1);
      if (param_1 != (CUser *)0x0) {
        this_00 = (set<std::pair<unsigned_char,unsigned_short>,std::less<std::pair<unsigned_char,unsigned_short>>,std::allocator<std::pair<unsigned_char,unsigned_short>>>
                   *)CUser::GetCSHashSet(param_1);
        std::
        set<std::pair<unsigned_char,unsigned_short>,std::less<std::pair<unsigned_char,unsigned_short>>,std::allocator<std::pair<unsigned_char,unsigned_short>>>
        ::clear(this_00);
      }
      CUser::unlock(param_1);
      uVar6 = CUser::get_state(param_1);
      cVar3 = Global::CGlobalFunc::Get_State_Check(uVar6);
      if (cVar3 == '\x01') {
        uVar6 = 0;
      }
      else {
        uVar6 = 0xffffffff;
      }
    }
    return uVar6;
  }
  return 0xfffffffc;
}

```

---

## process

```asm
// === 081c5330 DisPatcher_MoveMap::process  [0x081c5330-0x81c54df] ===
 81c5330:	55                   	push   %ebp
 81c5331:	89 e5                	mov    %esp,%ebp
 81c5333:	83 ec 38             	sub    $0x38,%esp
 81c5336:	8b 45 14             	mov    0x14(%ebp),%eax
 81c5339:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81c533c:	8b 45 10             	mov    0x10(%ebp),%eax
 81c533f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c5343:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5346:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c534a:	8b 45 08             	mov    0x8(%ebp),%eax
 81c534d:	89 04 24             	mov    %eax,(%esp)
 81c5350:	e8 3b f7 ff ff       	call   81c4a90 <_ZN18DisPatcher_MoveMap11check_errorEP5CUserR8MSG_BASE>
 81c5355:	89 c2                	mov    %eax,%edx
 81c5357:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c535a:	89 50 04             	mov    %edx,0x4(%eax)
 81c535d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c5360:	8b 40 04             	mov    0x4(%eax),%eax
 81c5363:	85 c0                	test   %eax,%eax
 81c5365:	7e 0a                	jle    81c5371 <_ZN18DisPatcher_MoveMap7processEP5CUserR8MSG_BASER9ParamBase+0x41>
 81c5367:	b8 00 00 00 00       	mov    $0x0,%eax
 81c536c:	e9 6d 01 00 00       	jmp    81c54de <_ZN18DisPatcher_MoveMap7processEP5CUserR8MSG_BASER9ParamBase+0x1ae>
 81c5371:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c5374:	8b 40 04             	mov    0x4(%eax),%eax
 81c5377:	85 c0                	test   %eax,%eax
 81c5379:	79 32                	jns    81c53ad <_ZN18DisPatcher_MoveMap7processEP5CUserR8MSG_BASER9ParamBase+0x7d>
 81c537b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c537e:	89 04 24             	mov    %eax,(%esp)
 81c5381:	e8 e8 4f f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c5386:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81c5389:	8b 52 04             	mov    0x4(%edx),%edx
 81c538c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c5390:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c5394:	c7 44 24 04 a0 59 bd 	movl   $0x8bd59a0,0x4(%esp)
 81c539b:	08 
 81c539c:	c7 04 24 68 12 00 00 	movl   $0x1268,(%esp)
 81c53a3:	e8 2f b5 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c53a8:	e9 31 01 00 00       	jmp    81c54de <_ZN18DisPatcher_MoveMap7processEP5CUserR8MSG_BASER9ParamBase+0x1ae>
 81c53ad:	8b 45 10             	mov    0x10(%ebp),%eax
 81c53b0:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81c53b3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c53b6:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 81c53ba:	83 f0 01             	xor    $0x1,%eax
 81c53bd:	84 c0                	test   %al,%al
 81c53bf:	74 3a                	je     81c53fb <_ZN18DisPatcher_MoveMap7processEP5CUserR8MSG_BASER9ParamBase+0xcb>
 81c53c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c53c4:	89 04 24             	mov    %eax,(%esp)
 81c53c7:	e8 8e 45 f3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81c53cc:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81c53d3:	00 
 81c53d4:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81c53db:	00 
 81c53dc:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81c53e3:	00 
 81c53e4:	c7 44 24 08 5a 02 00 	movl   $0x25a,0x8(%esp)
 81c53eb:	00 
 81c53ec:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c53ef:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c53f3:	89 04 24             	mov    %eax,(%esp)
 81c53f6:	e8 83 38 f3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81c53fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c53fe:	89 04 24             	mov    %eax,(%esp)
 81c5401:	e8 08 b4 06 00       	call   823080e <_ZN5CUser12GetHackCheckEv>
 81c5406:	89 04 24             	mov    %eax,(%esp)
 81c5409:	e8 e6 53 0b 00       	call   827a7f4 <_ZN17Secu_HackLogCheck7MoveMapEv>
 81c540e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c5411:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c5415:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5418:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c541c:	8b 45 08             	mov    0x8(%ebp),%eax
 81c541f:	89 04 24             	mov    %eax,(%esp)
 81c5422:	e8 53 f7 ff ff       	call   81c4b7a <_ZN18DisPatcher_MoveMap20CheckTrapBitsHackCntEP5CUserR12MSG_MOVE_MAP>
 81c5427:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c542a:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c542e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5431:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c5435:	8b 45 08             	mov    0x8(%ebp),%eax
 81c5438:	89 04 24             	mov    %eax,(%esp)
 81c543b:	e8 e6 f8 ff ff       	call   81c4d26 <_ZN18DisPatcher_MoveMap26CheckOneMapPlayTimeHackCntEP5CUserR12MSG_MOVE_MAP>
 81c5440:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c5443:	83 c0 1b             	add    $0x1b,%eax
 81c5446:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c544a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c544d:	89 04 24             	mov    %eax,(%esp)
 81c5450:	e8 4d 17 f8 ff       	call   8146ba2 <_ZN6Global14CBossTowerFunc7MoveMapEP5CUserPt>
 81c5455:	84 c0                	test   %al,%al
 81c5457:	74 07                	je     81c5460 <_ZN18DisPatcher_MoveMap7processEP5CUserR8MSG_BASER9ParamBase+0x130>
 81c5459:	b8 00 00 00 00       	mov    $0x0,%eax
 81c545e:	eb 7e                	jmp    81c54de <_ZN18DisPatcher_MoveMap7processEP5CUserR8MSG_BASER9ParamBase+0x1ae>
 81c5460:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5463:	89 04 24             	mov    %eax,(%esp)
 81c5466:	e8 e1 fc 48 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81c546b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c546e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c5471:	89 04 24             	mov    %eax,(%esp)
 81c5474:	e8 c7 03 f8 ff       	call   8145840 <_ZN6CParty14IsRoutingStateEv>
 81c5479:	84 c0                	test   %al,%al
 81c547b:	74 30                	je     81c54ad <_ZN18DisPatcher_MoveMap7processEP5CUserR8MSG_BASER9ParamBase+0x17d>
 81c547d:	e8 0c 6d f0 ff       	call   80cc18e <_Z14G_CGameManagerv>
 81c5482:	89 04 24             	mov    %eax,(%esp)
 81c5485:	e8 3a 3b 0d 00       	call   8298fc4 <_ZN12CGameManager28GetSpecialItemRoutingManagerEv>
 81c548a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c548d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81c5491:	74 1a                	je     81c54ad <_ZN18DisPatcher_MoveMap7processEP5CUserR8MSG_BASER9ParamBase+0x17d>
 81c5493:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c549a:	00 
 81c549b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c549e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c54a2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c54a5:	89 04 24             	mov    %eax,(%esp)
 81c54a8:	e8 85 5e 44 00       	call   860b332 <_ZN26CSpecialItemRoutingManager14ProcessFailEtcEP6CPartyi>
 81c54ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c54b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c54b4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c54b7:	89 04 24             	mov    %eax,(%esp)
 81c54ba:	e8 bb d2 3d 00       	call   85a277a <_ZN6CParty16get_party_seatnoEP5CUser>
 81c54bf:	89 c2                	mov    %eax,%edx
 81c54c1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c54c4:	88 50 39             	mov    %dl,0x39(%eax)
 81c54c7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c54ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c54ce:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c54d1:	89 04 24             	mov    %eax,(%esp)
 81c54d4:	e8 75 3a 3e 00       	call   85a8f4e <_ZN6CParty8move_mapER12MSG_MOVE_MAP>
 81c54d9:	b8 00 00 00 00       	mov    $0x0,%eax
 81c54de:	c9                   	leave
 81c54df:	c3                   	ret

```

```c
// DisPatcher_MoveMap::process @ 0x81c5330

/* DisPatcher_MoveMap::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_MoveMap::process
          (DisPatcher_MoveMap *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  MSG_BASE MVar2;
  undefined4 uVar3;
  uint uVar4;
  CHackAnalyzer *pCVar5;
  Secu_HackLogCheck *this_00;
  CParty *this_01;
  CGameManager *this_02;
  CSpecialItemRoutingManager *this_03;
  
  uVar3 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar3;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar4 = CUser::get_acc_id(param_1);
      uVar3 = LineFunc(0x1268,
                       "virtual int DisPatcher_MoveMap::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(param_3 + 4),uVar4);
    }
    else {
      if (param_2[0x1a] != (MSG_BASE)0x1) {
        pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,param_1,0x25a,1,0,0);
      }
      this_00 = (Secu_HackLogCheck *)CUser::GetHackCheck(param_1);
      Secu_HackLogCheck::MoveMap(this_00);
      CheckTrapBitsHackCnt(this,param_1,(MSG_MOVE_MAP *)param_2);
      CheckOneMapPlayTimeHackCnt(this,param_1,(MSG_MOVE_MAP *)param_2);
      cVar1 = Global::CBossTowerFunc::MoveMap(param_1,(ushort *)(param_2 + 0x1b));
      if (cVar1 == '\0') {
        this_01 = (CParty *)CUser::GetParty(param_1);
        cVar1 = CParty::IsRoutingState(this_01);
        if (cVar1 != '\0') {
          this_02 = (CGameManager *)G_CGameManager();
          this_03 = (CSpecialItemRoutingManager *)
                    CGameManager::GetSpecialItemRoutingManager(this_02);
          if (this_03 != (CSpecialItemRoutingManager *)0x0) {
            CSpecialItemRoutingManager::ProcessFailEtc(this_03,this_01,0);
          }
        }
        MVar2 = (MSG_BASE)CParty::get_party_seatno(this_01,param_1);
        param_2[0x39] = MVar2;
        CParty::move_map(this_01,(MSG_MOVE_MAP *)param_2);
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## read

```asm
// === 081c47ba DisPatcher_MoveMap::read  [0x081c47ba-0x81c4a8f] ===
 81c47ba:	55                   	push   %ebp
 81c47bb:	89 e5                	mov    %esp,%ebp
 81c47bd:	83 ec 28             	sub    $0x28,%esp
 81c47c0:	8b 45 10             	mov    0x10(%ebp),%eax
 81c47c3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81c47c6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c47c9:	83 c0 0d             	add    $0xd,%eax
 81c47cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c47d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c47d3:	89 04 24             	mov    %eax,(%esp)
 81c47d6:	e8 47 87 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c47db:	83 f0 01             	xor    $0x1,%eax
 81c47de:	84 c0                	test   %al,%al
 81c47e0:	74 29                	je     81c480b <_ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE+0x51>
 81c47e2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c47e9:	00 
 81c47ea:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c47f1:	00 
 81c47f2:	c7 44 24 04 00 5a bd 	movl   $0x8bd5a00,0x4(%esp)
 81c47f9:	08 
 81c47fa:	c7 04 24 52 11 00 00 	movl   $0x1152,(%esp)
 81c4801:	e8 d1 c0 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c4806:	e9 83 02 00 00       	jmp    81c4a8e <_ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE+0x2d4>
 81c480b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c480e:	83 c0 0e             	add    $0xe,%eax
 81c4811:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c4815:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4818:	89 04 24             	mov    %eax,(%esp)
 81c481b:	e8 02 87 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c4820:	83 f0 01             	xor    $0x1,%eax
 81c4823:	84 c0                	test   %al,%al
 81c4825:	74 29                	je     81c4850 <_ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE+0x96>
 81c4827:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c482e:	00 
 81c482f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c4836:	00 
 81c4837:	c7 44 24 04 00 5a bd 	movl   $0x8bd5a00,0x4(%esp)
 81c483e:	08 
 81c483f:	c7 04 24 55 11 00 00 	movl   $0x1155,(%esp)
 81c4846:	e8 8c c0 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c484b:	e9 3e 02 00 00       	jmp    81c4a8e <_ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE+0x2d4>
 81c4850:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c4853:	83 c0 0f             	add    $0xf,%eax
 81c4856:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c485a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c485d:	89 04 24             	mov    %eax,(%esp)
 81c4860:	e8 db 89 3c 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81c4865:	83 f0 01             	xor    $0x1,%eax
 81c4868:	84 c0                	test   %al,%al
 81c486a:	74 29                	je     81c4895 <_ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE+0xdb>
 81c486c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c4873:	00 
 81c4874:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c487b:	00 
 81c487c:	c7 44 24 04 00 5a bd 	movl   $0x8bd5a00,0x4(%esp)
 81c4883:	08 
 81c4884:	c7 04 24 58 11 00 00 	movl   $0x1158,(%esp)
 81c488b:	e8 47 c0 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c4890:	e9 f9 01 00 00       	jmp    81c4a8e <_ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE+0x2d4>
 81c4895:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c4898:	83 c0 13             	add    $0x13,%eax
 81c489b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c489f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c48a2:	89 04 24             	mov    %eax,(%esp)
 81c48a5:	e8 96 89 3c 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81c48aa:	83 f0 01             	xor    $0x1,%eax
 81c48ad:	84 c0                	test   %al,%al
 81c48af:	74 29                	je     81c48da <_ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE+0x120>
 81c48b1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c48b8:	00 
 81c48b9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c48c0:	00 
 81c48c1:	c7 44 24 04 00 5a bd 	movl   $0x8bd5a00,0x4(%esp)
 81c48c8:	08 
 81c48c9:	c7 04 24 59 11 00 00 	movl   $0x1159,(%esp)
 81c48d0:	e8 02 c0 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c48d5:	e9 b4 01 00 00       	jmp    81c4a8e <_ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE+0x2d4>
 81c48da:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c48dd:	83 c0 17             	add    $0x17,%eax
 81c48e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c48e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c48e7:	89 04 24             	mov    %eax,(%esp)
 81c48ea:	e8 81 86 3c 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81c48ef:	83 f0 01             	xor    $0x1,%eax
 81c48f2:	84 c0                	test   %al,%al
 81c48f4:	74 29                	je     81c491f <_ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE+0x165>
 81c48f6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c48fd:	00 
 81c48fe:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c4905:	00 
 81c4906:	c7 44 24 04 00 5a bd 	movl   $0x8bd5a00,0x4(%esp)
 81c490d:	08 
 81c490e:	c7 04 24 5d 11 00 00 	movl   $0x115d,(%esp)
 81c4915:	e8 bd bf 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c491a:	e9 6f 01 00 00       	jmp    81c4a8e <_ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE+0x2d4>
 81c491f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c4922:	83 c0 18             	add    $0x18,%eax
 81c4925:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c4929:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c492c:	89 04 24             	mov    %eax,(%esp)
 81c492f:	e8 7c 87 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81c4934:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81c4937:	88 42 1a             	mov    %al,0x1a(%edx)
 81c493a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81c4941:	eb 51                	jmp    81c4994 <_ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE+0x1da>
 81c4943:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c4946:	83 c0 08             	add    $0x8,%eax
 81c4949:	01 c0                	add    %eax,%eax
 81c494b:	03 45 ec             	add    -0x14(%ebp),%eax
 81c494e:	83 c0 0b             	add    $0xb,%eax
 81c4951:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c4955:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4958:	89 04 24             	mov    %eax,(%esp)
 81c495b:	e8 50 87 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81c4960:	83 f0 01             	xor    $0x1,%eax
 81c4963:	84 c0                	test   %al,%al
 81c4965:	74 29                	je     81c4990 <_ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE+0x1d6>
 81c4967:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c496e:	00 
 81c496f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c4976:	00 
 81c4977:	c7 44 24 04 00 5a bd 	movl   $0x8bd5a00,0x4(%esp)
 81c497e:	08 
 81c497f:	c7 04 24 64 11 00 00 	movl   $0x1164,(%esp)
 81c4986:	e8 4c bf 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c498b:	e9 fe 00 00 00       	jmp    81c4a8e <_ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE+0x2d4>
 81c4990:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81c4994:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 81c4998:	0f 9e c0             	setle  %al
 81c499b:	84 c0                	test   %al,%al
 81c499d:	75 a4                	jne    81c4943 <_ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE+0x189>
 81c499f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81c49a6:	eb 52                	jmp    81c49fa <_ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE+0x240>
 81c49a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c49ab:	83 c0 08             	add    $0x8,%eax
 81c49ae:	c1 e0 02             	shl    $0x2,%eax
 81c49b1:	03 45 ec             	add    -0x14(%ebp),%eax
 81c49b4:	83 c0 03             	add    $0x3,%eax
 81c49b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c49bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c49be:	89 04 24             	mov    %eax,(%esp)
 81c49c1:	e8 7a 88 3c 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81c49c6:	83 f0 01             	xor    $0x1,%eax
 81c49c9:	84 c0                	test   %al,%al
 81c49cb:	74 29                	je     81c49f6 <_ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE+0x23c>
 81c49cd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c49d4:	00 
 81c49d5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c49dc:	00 
 81c49dd:	c7 44 24 04 00 5a bd 	movl   $0x8bd5a00,0x4(%esp)
 81c49e4:	08 
 81c49e5:	c7 04 24 69 11 00 00 	movl   $0x1169,(%esp)
 81c49ec:	e8 e6 be 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c49f1:	e9 98 00 00 00       	jmp    81c4a8e <_ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE+0x2d4>
 81c49f6:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81c49fa:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 81c49fe:	0f 9e c0             	setle  %al
 81c4a01:	84 c0                	test   %al,%al
 81c4a03:	75 a3                	jne    81c49a8 <_ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE+0x1ee>
 81c4a05:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c4a08:	83 c0 33             	add    $0x33,%eax
 81c4a0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c4a0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4a12:	89 04 24             	mov    %eax,(%esp)
 81c4a15:	e8 96 86 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81c4a1a:	83 f0 01             	xor    $0x1,%eax
 81c4a1d:	84 c0                	test   %al,%al
 81c4a1f:	74 26                	je     81c4a47 <_ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE+0x28d>
 81c4a21:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c4a28:	00 
 81c4a29:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c4a30:	00 
 81c4a31:	c7 44 24 04 00 5a bd 	movl   $0x8bd5a00,0x4(%esp)
 81c4a38:	08 
 81c4a39:	c7 04 24 6e 11 00 00 	movl   $0x116e,(%esp)
 81c4a40:	e8 92 be 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c4a45:	eb 47                	jmp    81c4a8e <_ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE+0x2d4>
 81c4a47:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c4a4a:	83 c0 35             	add    $0x35,%eax
 81c4a4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c4a51:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4a54:	89 04 24             	mov    %eax,(%esp)
 81c4a57:	e8 94 86 3c 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81c4a5c:	83 f0 01             	xor    $0x1,%eax
 81c4a5f:	84 c0                	test   %al,%al
 81c4a61:	74 26                	je     81c4a89 <_ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE+0x2cf>
 81c4a63:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c4a6a:	00 
 81c4a6b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c4a72:	00 
 81c4a73:	c7 44 24 04 00 5a bd 	movl   $0x8bd5a00,0x4(%esp)
 81c4a7a:	08 
 81c4a7b:	c7 04 24 81 11 00 00 	movl   $0x1181,(%esp)
 81c4a82:	e8 50 be 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c4a87:	eb 05                	jmp    81c4a8e <_ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE+0x2d4>
 81c4a89:	b8 00 00 00 00       	mov    $0x0,%eax
 81c4a8e:	c9                   	leave
 81c4a8f:	c3                   	ret

```

```c
// DisPatcher_MoveMap::read @ 0x81c47ba

/* DisPatcher_MoveMap::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_MoveMap::read(DisPatcher_MoveMap *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  MSG_BASE MVar2;
  undefined4 uVar3;
  int local_14;
  int local_10;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xf));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x13));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x17));
          if (cVar1 == '\x01') {
            MVar2 = (MSG_BASE)PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x18));
            param_2[0x1a] = MVar2;
            for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
              cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + (local_14 + 8) * 2 + 0xb));
              if (cVar1 != '\x01') {
                uVar3 = LineFunc(0x1164,
                                 "virtual int DisPatcher_MoveMap::read(PacketBuf&, MSG_BASE&)",0,0);
                return uVar3;
              }
            }
            for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
              cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + (local_10 + 8) * 4 + 3));
              if (cVar1 != '\x01') {
                uVar3 = LineFunc(0x1169,
                                 "virtual int DisPatcher_MoveMap::read(PacketBuf&, MSG_BASE&)",0,0);
                return uVar3;
              }
            }
            cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x33));
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x35));
              if (cVar1 == '\x01') {
                uVar3 = 0;
              }
              else {
                uVar3 = LineFunc(0x1181,
                                 "virtual int DisPatcher_MoveMap::read(PacketBuf&, MSG_BASE&)",0,0);
              }
            }
            else {
              uVar3 = LineFunc(0x116e,"virtual int DisPatcher_MoveMap::read(PacketBuf&, MSG_BASE&)",
                               0,0);
            }
          }
          else {
            uVar3 = LineFunc(0x115d,"virtual int DisPatcher_MoveMap::read(PacketBuf&, MSG_BASE&)",0,
                             0);
          }
        }
        else {
          uVar3 = LineFunc(0x1159,"virtual int DisPatcher_MoveMap::read(PacketBuf&, MSG_BASE&)",0,0)
          ;
        }
      }
      else {
        uVar3 = LineFunc(0x1158,"virtual int DisPatcher_MoveMap::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar3 = LineFunc(0x1155,"virtual int DisPatcher_MoveMap::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar3 = LineFunc(0x1152,"virtual int DisPatcher_MoveMap::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar3;
}

```

