# DisPatcher_StartGame

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## check_error

```asm
// === 081c9f6c DisPatcher_StartGame::check_error  [0x081c9f6c-0x81ca2a7] ===
 81c9f6c:	55                   	push   %ebp
 81c9f6d:	89 e5                	mov    %esp,%ebp
 81c9f6f:	53                   	push   %ebx
 81c9f70:	83 ec 34             	sub    $0x34,%esp
 81c9f73:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9f76:	89 04 24             	mov    %eax,(%esp)
 81c9f79:	e8 0e 04 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c9f7e:	83 f8 03             	cmp    $0x3,%eax
 81c9f81:	74 17                	je     81c9f9a <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x2e>
 81c9f83:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9f86:	89 04 24             	mov    %eax,(%esp)
 81c9f89:	e8 fe 03 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c9f8e:	83 f8 0b             	cmp    $0xb,%eax
 81c9f91:	74 07                	je     81c9f9a <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x2e>
 81c9f93:	b8 01 00 00 00       	mov    $0x1,%eax
 81c9f98:	eb 05                	jmp    81c9f9f <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x33>
 81c9f9a:	b8 00 00 00 00       	mov    $0x0,%eax
 81c9f9f:	84 c0                	test   %al,%al
 81c9fa1:	74 0a                	je     81c9fad <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x41>
 81c9fa3:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81c9fa8:	e9 f5 02 00 00       	jmp    81ca2a2 <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x336>
 81c9fad:	8b 45 14             	mov    0x14(%ebp),%eax
 81c9fb0:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81c9fb3:	e8 ef 03 f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81c9fb8:	89 04 24             	mov    %eax,(%esp)
 81c9fbb:	e8 28 85 f7 ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 81c9fc0:	84 c0                	test   %al,%al
 81c9fc2:	74 14                	je     81c9fd8 <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x6c>
 81c9fc4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c9fc7:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 81c9fce:	b8 08 00 00 00       	mov    $0x8,%eax
 81c9fd3:	e9 ca 02 00 00       	jmp    81ca2a2 <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x336>
 81c9fd8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9fdb:	89 04 24             	mov    %eax,(%esp)
 81c9fde:	e8 3b d8 47 00       	call   864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>
 81c9fe3:	84 c0                	test   %al,%al
 81c9fe5:	74 14                	je     81c9ffb <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x8f>
 81c9fe7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c9fea:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 81c9ff1:	b8 13 00 00 00       	mov    $0x13,%eax
 81c9ff6:	e9 a7 02 00 00       	jmp    81ca2a2 <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x336>
 81c9ffb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9ffe:	89 04 24             	mov    %eax,(%esp)
 81ca001:	e8 ba 49 4c 00       	call   868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>
 81ca006:	84 c0                	test   %al,%al
 81ca008:	74 14                	je     81ca01e <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0xb2>
 81ca00a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81ca00d:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 81ca014:	b8 ea 00 00 00       	mov    $0xea,%eax
 81ca019:	e9 84 02 00 00       	jmp    81ca2a2 <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x336>
 81ca01e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca021:	89 04 24             	mov    %eax,(%esp)
 81ca024:	e8 23 b1 48 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81ca029:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81ca02c:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81ca030:	74 6c                	je     81ca09e <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x132>
 81ca032:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ca035:	89 04 24             	mov    %eax,(%esp)
 81ca038:	e8 d1 38 06 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 81ca03d:	89 04 24             	mov    %eax,(%esp)
 81ca040:	e8 a9 37 06 00       	call   822d7ee <_ZN14CPartyTelePort18get_teleport_stateEv>
 81ca045:	84 c0                	test   %al,%al
 81ca047:	78 1e                	js     81ca067 <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0xfb>
 81ca049:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ca04c:	89 04 24             	mov    %eax,(%esp)
 81ca04f:	e8 ba 38 06 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 81ca054:	89 04 24             	mov    %eax,(%esp)
 81ca057:	e8 92 37 06 00       	call   822d7ee <_ZN14CPartyTelePort18get_teleport_stateEv>
 81ca05c:	3c 03                	cmp    $0x3,%al
 81ca05e:	7f 07                	jg     81ca067 <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0xfb>
 81ca060:	b8 01 00 00 00       	mov    $0x1,%eax
 81ca065:	eb 05                	jmp    81ca06c <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x100>
 81ca067:	b8 00 00 00 00       	mov    $0x0,%eax
 81ca06c:	84 c0                	test   %al,%al
 81ca06e:	74 2e                	je     81ca09e <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x132>
 81ca070:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ca073:	89 04 24             	mov    %eax,(%esp)
 81ca076:	e8 93 38 06 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 81ca07b:	89 04 24             	mov    %eax,(%esp)
 81ca07e:	e8 c1 1f 3f 00       	call   85bc044 <_ZN14CPartyTelePort19reset_teleport_dataEv>
 81ca083:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ca086:	89 04 24             	mov    %eax,(%esp)
 81ca089:	e8 80 38 06 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 81ca08e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ca095:	00 
 81ca096:	89 04 24             	mov    %eax,(%esp)
 81ca099:	e8 d0 18 3f 00       	call   85bb96e <_ZN14CPartyTelePort20send_teleport_statusEh>
 81ca09e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca0a1:	89 04 24             	mov    %eax,(%esp)
 81ca0a4:	e8 7f 6f f3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81ca0a9:	89 c3                	mov    %eax,%ebx
 81ca0ab:	e8 f7 02 f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81ca0b0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ca0b4:	89 04 24             	mov    %eax,(%esp)
 81ca0b7:	e8 f8 39 50 00       	call   86cdab4 <_ZN9GameWorld15IsForbiddenMoveEPKc>
 81ca0bc:	84 c0                	test   %al,%al
 81ca0be:	74 59                	je     81ca119 <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1ad>
 81ca0c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca0c3:	89 04 24             	mov    %eax,(%esp)
 81ca0c6:	e8 5d 6f f3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81ca0cb:	89 c3                	mov    %eax,%ebx
 81ca0cd:	e8 d5 02 f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81ca0d2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ca0d6:	89 04 24             	mov    %eax,(%esp)
 81ca0d9:	e8 7a 48 50 00       	call   86ce958 <_ZN9GameWorld26GetLeftTimeOfForbiddenMoveEPKc>
 81ca0de:	85 c0                	test   %eax,%eax
 81ca0e0:	0f 95 c0             	setne  %al
 81ca0e3:	84 c0                	test   %al,%al
 81ca0e5:	74 14                	je     81ca0fb <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x18f>
 81ca0e7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81ca0ea:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 81ca0f1:	b8 44 00 00 00       	mov    $0x44,%eax
 81ca0f6:	e9 a7 01 00 00       	jmp    81ca2a2 <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x336>
 81ca0fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca0fe:	89 04 24             	mov    %eax,(%esp)
 81ca101:	e8 22 6f f3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81ca106:	89 c3                	mov    %eax,%ebx
 81ca108:	e8 9a 02 f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81ca10d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ca111:	89 04 24             	mov    %eax,(%esp)
 81ca114:	e8 41 3d 50 00       	call   86cde5a <_ZN9GameWorld10EnableMoveEPKc>
 81ca119:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 81ca120:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca123:	89 04 24             	mov    %eax,(%esp)
 81ca126:	e8 e9 01 f1 ff       	call   80da314 <_ZN5CUser12CheckInPartyEv>
 81ca12b:	84 c0                	test   %al,%al
 81ca12d:	0f 84 6a 01 00 00    	je     81ca29d <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x331>
 81ca133:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca136:	89 04 24             	mov    %eax,(%esp)
 81ca139:	e8 4e 02 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ca13e:	83 f8 03             	cmp    $0x3,%eax
 81ca141:	0f 94 c0             	sete   %al
 81ca144:	84 c0                	test   %al,%al
 81ca146:	0f 84 51 01 00 00    	je     81ca29d <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x331>
 81ca14c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca14f:	89 04 24             	mov    %eax,(%esp)
 81ca152:	e8 f5 af 48 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81ca157:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81ca15a:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81ca15e:	0f 84 39 01 00 00    	je     81ca29d <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x331>
 81ca164:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ca167:	89 04 24             	mov    %eax,(%esp)
 81ca16a:	e8 e7 34 3d 00       	call   859d656 <_ZN6CParty15CheckMemberAreaEv>
 81ca16f:	83 f0 01             	xor    $0x1,%eax
 81ca172:	84 c0                	test   %al,%al
 81ca174:	74 19                	je     81ca18f <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x223>
 81ca176:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ca179:	89 04 24             	mov    %eax,(%esp)
 81ca17c:	e8 d1 37 06 00       	call   822d952 <_ZN6CParty14is_quick_partyEv>
 81ca181:	83 f0 01             	xor    $0x1,%eax
 81ca184:	84 c0                	test   %al,%al
 81ca186:	74 07                	je     81ca18f <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x223>
 81ca188:	b8 01 00 00 00       	mov    $0x1,%eax
 81ca18d:	eb 05                	jmp    81ca194 <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x228>
 81ca18f:	b8 00 00 00 00       	mov    $0x0,%eax
 81ca194:	84 c0                	test   %al,%al
 81ca196:	74 14                	je     81ca1ac <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x240>
 81ca198:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81ca19b:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 81ca1a2:	b8 15 00 00 00       	mov    $0x15,%eax
 81ca1a7:	e9 f6 00 00 00       	jmp    81ca2a2 <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x336>
 81ca1ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca1af:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ca1b3:	8b 45 08             	mov    0x8(%ebp),%eax
 81ca1b6:	89 04 24             	mov    %eax,(%esp)
 81ca1b9:	e8 ea 00 00 00       	call   81ca2a8 <_ZN20DisPatcher_StartGame19excludeAddHackCountEP5CUser>
 81ca1be:	84 c0                	test   %al,%al
 81ca1c0:	74 3a                	je     81ca1fc <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x290>
 81ca1c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca1c5:	89 04 24             	mov    %eax,(%esp)
 81ca1c8:	e8 8d f7 f2 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ca1cd:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ca1d4:	00 
 81ca1d5:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ca1dc:	00 
 81ca1dd:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ca1e4:	00 
 81ca1e5:	c7 44 24 08 f6 01 00 	movl   $0x1f6,0x8(%esp)
 81ca1ec:	00 
 81ca1ed:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ca1f0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ca1f4:	89 04 24             	mov    %eax,(%esp)
 81ca1f7:	e8 82 ea f2 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ca1fc:	e8 a6 01 f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81ca201:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ca204:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ca208:	89 04 24             	mov    %eax,(%esp)
 81ca20b:	e8 d0 49 50 00       	call   86cebe0 <_ZN9GameWorld16GetWorldMapIndexEP5CUser>
 81ca210:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81ca213:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81ca217:	7e 7d                	jle    81ca296 <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x32a>
 81ca219:	e8 7d 1f f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81ca21e:	8d 90 80 87 00 00    	lea    0x8780(%eax),%edx
 81ca224:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ca227:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ca22b:	89 14 24             	mov    %edx,(%esp)
 81ca22e:	e8 6f a5 19 00       	call   83647a2 <_ZNK13CWorldMapList14find_world_mapEi>
 81ca233:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ca236:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ca23a:	75 11                	jne    81ca24d <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x2e1>
 81ca23c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81ca23f:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 81ca246:	b8 15 00 00 00       	mov    $0x15,%eax
 81ca24b:	eb 55                	jmp    81ca2a2 <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x336>
 81ca24d:	a1 80 f7 41 09       	mov    0x941f780,%eax
 81ca252:	89 04 24             	mov    %eax,(%esp)
 81ca255:	e8 9c ad 06 00       	call   8234ff6 <_ZN16village_attacked15CRevengeDungeon20IsOpenRevengeDungeonEv>
 81ca25a:	83 f0 01             	xor    $0x1,%eax
 81ca25d:	84 c0                	test   %al,%al
 81ca25f:	74 35                	je     81ca296 <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x32a>
 81ca261:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ca264:	89 04 24             	mov    %eax,(%esp)
 81ca267:	e8 a8 12 06 00       	call   822b514 <_ZNK9CWorldMap18getDungeonMinLevelEv>
 81ca26c:	89 c3                	mov    %eax,%ebx
 81ca26e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ca271:	89 04 24             	mov    %eax,(%esp)
 81ca274:	e8 c5 bd 3e 00       	call   85b603e <_ZN6CParty17getMemberMinLevelEv>
 81ca279:	83 c0 06             	add    $0x6,%eax
 81ca27c:	39 c3                	cmp    %eax,%ebx
 81ca27e:	0f 9d c0             	setge  %al
 81ca281:	84 c0                	test   %al,%al
 81ca283:	74 11                	je     81ca296 <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x32a>
 81ca285:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81ca288:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 81ca28f:	b8 0e 00 00 00       	mov    $0xe,%eax
 81ca294:	eb 0c                	jmp    81ca2a2 <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x336>
 81ca296:	b8 00 00 00 00       	mov    $0x0,%eax
 81ca29b:	eb 05                	jmp    81ca2a2 <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase+0x336>
 81ca29d:	b8 00 00 00 00       	mov    $0x0,%eax
 81ca2a2:	83 c4 34             	add    $0x34,%esp
 81ca2a5:	5b                   	pop    %ebx
 81ca2a6:	5d                   	pop    %ebp
 81ca2a7:	c3                   	ret

```

```c
// DisPatcher_StartGame::check_error @ 0x81c9f6c

/* DisPatcher_StartGame::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_StartGame::check_error
          (DisPatcher_StartGame *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *pGVar4;
  CParty *pCVar5;
  CPartyTelePort *pCVar6;
  char *pcVar7;
  CHackAnalyzer *pCVar8;
  CWorldMap *this_00;
  int iVar9;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 == 3) || (iVar3 = CUser::get_state(param_1), iVar3 == 0xb)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0x7fffffff;
  }
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(pGVar4);
  if (cVar2 != '\0') {
    *(undefined4 *)(param_3 + 8) = 0xffffffff;
    return 8;
  }
  cVar2 = CUserCharacInfo::IsBusyDisjointStore((CUserCharacInfo *)param_1);
  if (cVar2 != '\0') {
    *(undefined4 *)(param_3 + 8) = 0xffffffff;
    return 0x13;
  }
  cVar2 = CUser::isCompetitionMercenary(param_1);
  if (cVar2 != '\0') {
    *(undefined4 *)(param_3 + 8) = 0xffffffff;
    return 0xea;
  }
  pCVar5 = (CParty *)CUser::GetParty(param_1);
  if (pCVar5 == (CParty *)0x0) goto LAB_081ca09e;
  pCVar6 = (CPartyTelePort *)CParty::GetPartyTelePort(pCVar5);
  cVar2 = CPartyTelePort::get_teleport_state(pCVar6);
  if (cVar2 < '\0') {
LAB_081ca067:
    bVar1 = false;
  }
  else {
    pCVar6 = (CPartyTelePort *)CParty::GetPartyTelePort(pCVar5);
    cVar2 = CPartyTelePort::get_teleport_state(pCVar6);
    if ('\x03' < cVar2) goto LAB_081ca067;
    bVar1 = true;
  }
  if (bVar1) {
    pCVar6 = (CPartyTelePort *)CParty::GetPartyTelePort(pCVar5);
    CPartyTelePort::reset_teleport_data(pCVar6);
    pCVar6 = (CPartyTelePort *)CParty::GetPartyTelePort(pCVar5);
    CPartyTelePort::send_teleport_status(pCVar6,'\0');
  }
LAB_081ca09e:
  pcVar7 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsForbiddenMove(pGVar4,pcVar7);
  if (cVar2 != '\0') {
    pcVar7 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    pGVar4 = (GameWorld *)G_GameWorld();
    iVar3 = GameWorld::GetLeftTimeOfForbiddenMove(pGVar4,pcVar7);
    if (iVar3 != 0) {
      *(undefined4 *)(param_3 + 8) = 0;
      return 0x44;
    }
    pcVar7 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    pGVar4 = (GameWorld *)G_GameWorld();
    GameWorld::EnableMove(pGVar4,pcVar7);
  }
  cVar2 = CUser::CheckInParty(param_1);
  if (((cVar2 != '\0') && (iVar3 = CUser::get_state(param_1), iVar3 == 3)) &&
     (pCVar5 = (CParty *)CUser::GetParty(param_1), pCVar5 != (CParty *)0x0)) {
    cVar2 = CParty::CheckMemberArea(pCVar5);
    if ((cVar2 == '\x01') || (cVar2 = CParty::is_quick_party(pCVar5), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined4 *)(param_3 + 8) = 0xffffffff;
      return 0x15;
    }
    cVar2 = excludeAddHackCount(this,param_1);
    if (cVar2 != '\0') {
      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,param_1,0x1f6,1,0,0);
    }
    pGVar4 = (GameWorld *)G_GameWorld();
    iVar3 = GameWorld::GetWorldMapIndex(pGVar4,param_1);
    if (0 < iVar3) {
      iVar3 = G_CDataManager();
      this_00 = (CWorldMap *)CWorldMapList::find_world_map(iVar3 + 0x8780);
      if (this_00 == (CWorldMap *)0x0) {
        *(undefined4 *)(param_3 + 8) = 0xffffffff;
        return 0x15;
      }
      cVar2 = village_attacked::CRevengeDungeon::IsOpenRevengeDungeon
                        (GlobalData::s_revengeDungeonMgr);
      if (cVar2 != '\x01') {
        iVar3 = CWorldMap::getDungeonMinLevel(this_00);
        iVar9 = CParty::getMemberMinLevel(pCVar5);
        if (iVar9 + 6 <= iVar3) {
          *(undefined4 *)(param_3 + 8) = 0xffffffff;
          return 0xe;
        }
      }
    }
    return 0;
  }
  return 0;
}

```

---

## excludeAddHackCount

```asm
// === 081ca2a8 DisPatcher_StartGame::excludeAddHackCount  [0x081ca2a8-0x81ca2fd] ===
 81ca2a8:	55                   	push   %ebp
 81ca2a9:	89 e5                	mov    %esp,%ebp
 81ca2ab:	83 ec 18             	sub    $0x18,%esp
 81ca2ae:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81ca2b2:	75 07                	jne    81ca2bb <_ZN20DisPatcher_StartGame19excludeAddHackCountEP5CUser+0x13>
 81ca2b4:	b8 00 00 00 00       	mov    $0x0,%eax
 81ca2b9:	eb 40                	jmp    81ca2fb <_ZN20DisPatcher_StartGame19excludeAddHackCountEP5CUser+0x53>
 81ca2bb:	e8 e7 00 f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81ca2c0:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ca2c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ca2c7:	89 04 24             	mov    %eax,(%esp)
 81ca2ca:	e8 b5 49 50 00       	call   86cec84 <_ZN9GameWorld21isDungeonEntranceAreaEP5CUser>
 81ca2cf:	84 c0                	test   %al,%al
 81ca2d1:	74 07                	je     81ca2da <_ZN20DisPatcher_StartGame19excludeAddHackCountEP5CUser+0x32>
 81ca2d3:	b8 00 00 00 00       	mov    $0x0,%eax
 81ca2d8:	eb 21                	jmp    81ca2fb <_ZN20DisPatcher_StartGame19excludeAddHackCountEP5CUser+0x53>
 81ca2da:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca2dd:	89 04 24             	mov    %eax,(%esp)
 81ca2e0:	e8 e5 6b 4c 00       	call   8690eca <_ZNK5CUser12getMoveSpaceEv>
 81ca2e5:	83 f8 01             	cmp    $0x1,%eax
 81ca2e8:	0f 94 c0             	sete   %al
 81ca2eb:	84 c0                	test   %al,%al
 81ca2ed:	74 07                	je     81ca2f6 <_ZN20DisPatcher_StartGame19excludeAddHackCountEP5CUser+0x4e>
 81ca2ef:	b8 00 00 00 00       	mov    $0x0,%eax
 81ca2f4:	eb 05                	jmp    81ca2fb <_ZN20DisPatcher_StartGame19excludeAddHackCountEP5CUser+0x53>
 81ca2f6:	b8 01 00 00 00       	mov    $0x1,%eax
 81ca2fb:	c9                   	leave
 81ca2fc:	c3                   	ret
 81ca2fd:	90                   	nop

```

```c
// DisPatcher_StartGame::excludeAddHackCount @ 0x81ca2a8

/* DisPatcher_StartGame::excludeAddHackCount(CUser*) */

undefined4 __thiscall
DisPatcher_StartGame::excludeAddHackCount(DisPatcher_StartGame *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  GameWorld *this_00;
  int iVar3;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::isDungeonEntranceArea(this_00,param_1);
    if (cVar1 == '\0') {
      iVar3 = CUser::getMoveSpace(param_1);
      if (iVar3 == 1) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## process

```asm
// === 081ca2fe DisPatcher_StartGame::process  [0x081ca2fe-0x81ca4f1] ===
 81ca2fe:	55                   	push   %ebp
 81ca2ff:	89 e5                	mov    %esp,%ebp
 81ca301:	83 ec 48             	sub    $0x48,%esp
 81ca304:	8b 45 14             	mov    0x14(%ebp),%eax
 81ca307:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81ca30a:	8b 45 14             	mov    0x14(%ebp),%eax
 81ca30d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81ca311:	8b 45 10             	mov    0x10(%ebp),%eax
 81ca314:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ca318:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca31b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ca31f:	8b 45 08             	mov    0x8(%ebp),%eax
 81ca322:	89 04 24             	mov    %eax,(%esp)
 81ca325:	e8 42 fc ff ff       	call   81c9f6c <_ZN20DisPatcher_StartGame11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81ca32a:	89 c2                	mov    %eax,%edx
 81ca32c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81ca32f:	89 50 04             	mov    %edx,0x4(%eax)
 81ca332:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81ca335:	8b 40 04             	mov    0x4(%eax),%eax
 81ca338:	85 c0                	test   %eax,%eax
 81ca33a:	7e 0a                	jle    81ca346 <_ZN20DisPatcher_StartGame7processEP5CUserR8MSG_BASER9ParamBase+0x48>
 81ca33c:	b8 00 00 00 00       	mov    $0x0,%eax
 81ca341:	e9 a9 01 00 00       	jmp    81ca4ef <_ZN20DisPatcher_StartGame7processEP5CUserR8MSG_BASER9ParamBase+0x1f1>
 81ca346:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81ca349:	8b 40 04             	mov    0x4(%eax),%eax
 81ca34c:	85 c0                	test   %eax,%eax
 81ca34e:	79 32                	jns    81ca382 <_ZN20DisPatcher_StartGame7processEP5CUserR8MSG_BASER9ParamBase+0x84>
 81ca350:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca353:	89 04 24             	mov    %eax,(%esp)
 81ca356:	e8 13 00 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81ca35b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81ca35e:	8b 52 04             	mov    0x4(%edx),%edx
 81ca361:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81ca365:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ca369:	c7 44 24 04 40 53 bd 	movl   $0x8bd5340,0x4(%esp)
 81ca370:	08 
 81ca371:	c7 04 24 5b 1e 00 00 	movl   $0x1e5b,(%esp)
 81ca378:	e8 5a 65 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ca37d:	e9 6d 01 00 00       	jmp    81ca4ef <_ZN20DisPatcher_StartGame7processEP5CUserR8MSG_BASER9ParamBase+0x1f1>
 81ca382:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 81ca386:	e8 1c 00 f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81ca38b:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ca38e:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ca392:	89 04 24             	mov    %eax,(%esp)
 81ca395:	e8 46 48 50 00       	call   86cebe0 <_ZN9GameWorld16GetWorldMapIndexEP5CUser>
 81ca39a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81ca39d:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81ca3a1:	7e 31                	jle    81ca3d4 <_ZN20DisPatcher_StartGame7processEP5CUserR8MSG_BASER9ParamBase+0xd6>
 81ca3a3:	e8 f3 1d f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81ca3a8:	8d 90 80 87 00 00    	lea    0x8780(%eax),%edx
 81ca3ae:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ca3b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ca3b5:	89 14 24             	mov    %edx,(%esp)
 81ca3b8:	e8 e5 a3 19 00       	call   83647a2 <_ZNK13CWorldMapList14find_world_mapEi>
 81ca3bd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ca3c0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ca3c4:	74 0e                	je     81ca3d4 <_ZN20DisPatcher_StartGame7processEP5CUserR8MSG_BASER9ParamBase+0xd6>
 81ca3c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ca3c9:	89 04 24             	mov    %eax,(%esp)
 81ca3cc:	e8 4f 11 06 00       	call   822b520 <_ZNK9CWorldMap13hasDeathTowerEv>
 81ca3d1:	88 45 eb             	mov    %al,-0x15(%ebp)
 81ca3d4:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81ca3db:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca3de:	89 04 24             	mov    %eax,(%esp)
 81ca3e1:	e8 2e ff f0 ff       	call   80da314 <_ZN5CUser12CheckInPartyEv>
 81ca3e6:	84 c0                	test   %al,%al
 81ca3e8:	74 48                	je     81ca432 <_ZN20DisPatcher_StartGame7processEP5CUserR8MSG_BASER9ParamBase+0x134>
 81ca3ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca3ed:	89 04 24             	mov    %eax,(%esp)
 81ca3f0:	e8 97 ff f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ca3f5:	83 f8 03             	cmp    $0x3,%eax
 81ca3f8:	0f 94 c0             	sete   %al
 81ca3fb:	84 c0                	test   %al,%al
 81ca3fd:	0f 84 e7 00 00 00    	je     81ca4ea <_ZN20DisPatcher_StartGame7processEP5CUserR8MSG_BASER9ParamBase+0x1ec>
 81ca403:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca406:	89 04 24             	mov    %eax,(%esp)
 81ca409:	e8 3e ad 48 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81ca40e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81ca411:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81ca415:	0f 84 cf 00 00 00    	je     81ca4ea <_ZN20DisPatcher_StartGame7processEP5CUserR8MSG_BASER9ParamBase+0x1ec>
 81ca41b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca41e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ca422:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ca425:	89 04 24             	mov    %eax,(%esp)
 81ca428:	e8 eb 32 3d 00       	call   859d718 <_ZN6CParty10game_startEP5CUser>
 81ca42d:	e9 b8 00 00 00       	jmp    81ca4ea <_ZN20DisPatcher_StartGame7processEP5CUserR8MSG_BASER9ParamBase+0x1ec>
 81ca432:	e8 57 1d f0 ff       	call   80cc18e <_Z14G_CGameManagerv>
 81ca437:	89 04 24             	mov    %eax,(%esp)
 81ca43a:	e8 d1 a9 0c 00       	call   8294e10 <_ZN12CGameManager8GetPartyEv>
 81ca43f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81ca442:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81ca446:	74 76                	je     81ca4be <_ZN20DisPatcher_StartGame7processEP5CUserR8MSG_BASER9ParamBase+0x1c0>
 81ca448:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca44b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ca44f:	8b 45 08             	mov    0x8(%ebp),%eax
 81ca452:	89 04 24             	mov    %eax,(%esp)
 81ca455:	e8 4e fe ff ff       	call   81ca2a8 <_ZN20DisPatcher_StartGame19excludeAddHackCountEP5CUser>
 81ca45a:	84 c0                	test   %al,%al
 81ca45c:	74 3a                	je     81ca498 <_ZN20DisPatcher_StartGame7processEP5CUserR8MSG_BASER9ParamBase+0x19a>
 81ca45e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca461:	89 04 24             	mov    %eax,(%esp)
 81ca464:	e8 f1 f4 f2 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ca469:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ca470:	00 
 81ca471:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ca478:	00 
 81ca479:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ca480:	00 
 81ca481:	c7 44 24 08 f6 01 00 	movl   $0x1f6,0x8(%esp)
 81ca488:	00 
 81ca489:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ca48c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ca490:	89 04 24             	mov    %eax,(%esp)
 81ca493:	e8 e6 e7 f2 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ca498:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca49b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ca49f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ca4a2:	89 04 24             	mov    %eax,(%esp)
 81ca4a5:	e8 98 0c 3d 00       	call   859b142 <_ZN6CParty15set_single_playEP5CUser>
 81ca4aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca4ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ca4b1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ca4b4:	89 04 24             	mov    %eax,(%esp)
 81ca4b7:	e8 5c 32 3d 00       	call   859d718 <_ZN6CParty10game_startEP5CUser>
 81ca4bc:	eb 2c                	jmp    81ca4ea <_ZN20DisPatcher_StartGame7processEP5CUserR8MSG_BASER9ParamBase+0x1ec>
 81ca4be:	c7 44 24 10 2c 17 bc 	movl   $0x8bc172c,0x10(%esp)
 81ca4c5:	08 
 81ca4c6:	c7 44 24 0c 99 1e 00 	movl   $0x1e99,0xc(%esp)
 81ca4cd:	00 
 81ca4ce:	c7 44 24 08 40 53 bd 	movl   $0x8bd5340,0x8(%esp)
 81ca4d5:	08 
 81ca4d6:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81ca4dd:	08 
 81ca4de:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81ca4e5:	e8 20 97 90 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81ca4ea:	b8 00 00 00 00       	mov    $0x0,%eax
 81ca4ef:	c9                   	leave
 81ca4f0:	c3                   	ret
 81ca4f1:	90                   	nop

```

```c
// DisPatcher_StartGame::process @ 0x81ca2fe

/* DisPatcher_StartGame::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_StartGame::process
          (DisPatcher_StartGame *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  GameWorld *this_00;
  int iVar4;
  CWorldMap *this_01;
  CParty *pCVar5;
  CGameManager *this_02;
  CHackAnalyzer *pCVar6;
  
  uVar2 = check_error(this,param_1,param_2,param_3);
  *(undefined4 *)(param_3 + 4) = uVar2;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar3 = CUser::get_acc_id(param_1);
      uVar2 = LineFunc(0x1e5b,
                       "virtual int DisPatcher_StartGame::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(param_3 + 4),uVar3);
    }
    else {
      this_00 = (GameWorld *)G_GameWorld();
      iVar4 = GameWorld::GetWorldMapIndex(this_00,param_1);
      if (0 < iVar4) {
        iVar4 = G_CDataManager();
        this_01 = (CWorldMap *)CWorldMapList::find_world_map(iVar4 + 0x8780);
        if (this_01 != (CWorldMap *)0x0) {
          CWorldMap::hasDeathTower(this_01);
        }
      }
      cVar1 = CUser::CheckInParty(param_1);
      if (cVar1 == '\0') {
        this_02 = (CGameManager *)G_CGameManager();
        pCVar5 = (CParty *)CGameManager::GetParty(this_02);
        if (pCVar5 == (CParty *)0x0) {
          LogManager::logFormat
                    (1,"PacketDispatcher_Impl_1.cpp",
                     "virtual int DisPatcher_StartGame::process(CUser*, MSG_BASE&, ParamBase&)",
                     0x1e99,"cant party memory : you must free party memory!!!");
        }
        else {
          cVar1 = excludeAddHackCount(this,param_1);
          if (cVar1 != '\0') {
            pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x1f6,1,0,0);
          }
          CParty::set_single_play(pCVar5,param_1);
          CParty::game_start(pCVar5,param_1);
        }
      }
      else {
        iVar4 = CUser::get_state(param_1);
        if (iVar4 == 3) {
          pCVar5 = (CParty *)CUser::GetParty(param_1);
          if (pCVar5 != (CParty *)0x0) {
            CParty::game_start(pCVar5,param_1);
          }
        }
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## read

```asm
// === 081c9f62 DisPatcher_StartGame::read  [0x081c9f62-0x81c9f6b] ===
 81c9f62:	55                   	push   %ebp
 81c9f63:	89 e5                	mov    %esp,%ebp
 81c9f65:	b8 00 00 00 00       	mov    $0x0,%eax
 81c9f6a:	5d                   	pop    %ebp
 81c9f6b:	c3                   	ret

```

```c
// DisPatcher_StartGame::read @ 0x81c9f62

/* DisPatcher_StartGame::read(PacketBuf&, MSG_BASE&) */

undefined4 DisPatcher_StartGame::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 081ca4f2 DisPatcher_StartGame::send  [0x081ca4f2-0x81ca5e3] ===
 81ca4f2:	55                   	push   %ebp
 81ca4f3:	89 e5                	mov    %esp,%ebp
 81ca4f5:	56                   	push   %esi
 81ca4f6:	53                   	push   %ebx
 81ca4f7:	83 ec 20             	sub    $0x20,%esp
 81ca4fa:	8b 45 10             	mov    0x10(%ebp),%eax
 81ca4fd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ca500:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ca503:	8b 40 04             	mov    0x4(%eax),%eax
 81ca506:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81ca50b:	0f 84 ca 00 00 00    	je     81ca5db <_ZN20DisPatcher_StartGame4sendEP5CUserR9ParamBase+0xe9>
 81ca511:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ca514:	8b 40 04             	mov    0x4(%eax),%eax
 81ca517:	85 c0                	test   %eax,%eax
 81ca519:	0f 84 bd 00 00 00    	je     81ca5dc <_ZN20DisPatcher_StartGame4sendEP5CUserR9ParamBase+0xea>
 81ca51f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ca522:	89 04 24             	mov    %eax,(%esp)
 81ca525:	e8 22 38 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81ca52a:	c7 44 24 08 0f 00 00 	movl   $0xf,0x8(%esp)
 81ca531:	00 
 81ca532:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ca539:	00 
 81ca53a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ca53d:	89 04 24             	mov    %eax,(%esp)
 81ca540:	e8 b7 13 f0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81ca545:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ca54c:	00 
 81ca54d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ca550:	89 04 24             	mov    %eax,(%esp)
 81ca553:	e8 c8 13 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ca558:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ca55b:	8b 40 04             	mov    0x4(%eax),%eax
 81ca55e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ca562:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ca565:	89 04 24             	mov    %eax,(%esp)
 81ca568:	e8 b3 13 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ca56d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ca570:	8b 40 08             	mov    0x8(%eax),%eax
 81ca573:	85 c0                	test   %eax,%eax
 81ca575:	78 15                	js     81ca58c <_ZN20DisPatcher_StartGame4sendEP5CUserR9ParamBase+0x9a>
 81ca577:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ca57a:	8b 40 08             	mov    0x8(%eax),%eax
 81ca57d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ca581:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ca584:	89 04 24             	mov    %eax,(%esp)
 81ca587:	e8 94 13 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ca58c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ca593:	00 
 81ca594:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ca597:	89 04 24             	mov    %eax,(%esp)
 81ca59a:	e8 b9 13 f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81ca59f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ca5a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ca5a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca5a9:	89 04 24             	mov    %eax,(%esp)
 81ca5ac:	e8 09 e0 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81ca5b1:	eb 1b                	jmp    81ca5ce <_ZN20DisPatcher_StartGame4sendEP5CUserR9ParamBase+0xdc>
 81ca5b3:	89 d3                	mov    %edx,%ebx
 81ca5b5:	89 c6                	mov    %eax,%esi
 81ca5b7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ca5ba:	89 04 24             	mov    %eax,(%esp)
 81ca5bd:	e8 be 38 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ca5c2:	89 f0                	mov    %esi,%eax
 81ca5c4:	89 da                	mov    %ebx,%edx
 81ca5c6:	89 04 24             	mov    %eax,(%esp)
 81ca5c9:	e8 82 91 91 00       	call   8ae3750 <_Unwind_Resume>
 81ca5ce:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ca5d1:	89 04 24             	mov    %eax,(%esp)
 81ca5d4:	e8 a7 38 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ca5d9:	eb 01                	jmp    81ca5dc <_ZN20DisPatcher_StartGame4sendEP5CUserR9ParamBase+0xea>
 81ca5db:	90                   	nop
 81ca5dc:	83 c4 20             	add    $0x20,%esp
 81ca5df:	5b                   	pop    %ebx
 81ca5e0:	5e                   	pop    %esi
 81ca5e1:	5d                   	pop    %ebp
 81ca5e2:	c3                   	ret
 81ca5e3:	90                   	nop

```

```c
// DisPatcher_StartGame::send @ 0x81ca4f2

/* DisPatcher_StartGame::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_StartGame::send(DisPatcher_StartGame *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081ca540 to 081ca5b0 has its CatchHandler @ 081ca5b3 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0xf);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
    if (-1 < *(int *)(local_10 + 8)) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}

```

