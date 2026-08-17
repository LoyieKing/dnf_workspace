# DisPatcher_QuestAction

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081ee010 DisPatcher_QuestAction::dispatch_sig  [0x081ee010-0x81ee59b] ===
 81ee010:	55                   	push   %ebp
 81ee011:	89 e5                	mov    %esp,%ebp
 81ee013:	57                   	push   %edi
 81ee014:	56                   	push   %esi
 81ee015:	53                   	push   %ebx
 81ee016:	83 ec 6c             	sub    $0x6c,%esp
 81ee019:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ee01c:	89 04 24             	mov    %eax,(%esp)
 81ee01f:	e8 68 c3 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ee024:	83 f8 02             	cmp    $0x2,%eax
 81ee027:	0f 9e c0             	setle  %al
 81ee02a:	84 c0                	test   %al,%al
 81ee02c:	74 0a                	je     81ee038 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x28>
 81ee02e:	b8 00 00 00 00       	mov    $0x0,%eax
 81ee033:	e9 5c 05 00 00       	jmp    81ee594 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x584>
 81ee038:	e8 6a c3 ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81ee03d:	89 04 24             	mov    %eax,(%esp)
 81ee040:	e8 d9 63 04 00       	call   823441e <_ZNK9GameWorld20IsPvPSkilTreeChannelEv>
 81ee045:	84 c0                	test   %al,%al
 81ee047:	74 37                	je     81ee080 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x70>
 81ee049:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ee050:	00 
 81ee051:	8b 45 10             	mov    0x10(%ebp),%eax
 81ee054:	89 04 24             	mov    %eax,(%esp)
 81ee057:	e8 78 d6 03 00       	call   822b6d4 <_ZN9PacketBuf2atEi>
 81ee05c:	0f b6 c0             	movzbl %al,%eax
 81ee05f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81ee066:	00 
 81ee067:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ee06b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ee06e:	89 04 24             	mov    %eax,(%esp)
 81ee071:	e8 cc de 48 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81ee076:	b8 00 00 00 00       	mov    $0x0,%eax
 81ee07b:	e9 14 05 00 00       	jmp    81ee594 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x584>
 81ee080:	66 c7 45 de 00 00    	movw   $0x0,-0x22(%ebp)
 81ee086:	8d 45 de             	lea    -0x22(%ebp),%eax
 81ee089:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ee08d:	8b 45 10             	mov    0x10(%ebp),%eax
 81ee090:	89 04 24             	mov    %eax,(%esp)
 81ee093:	e8 28 ef 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81ee098:	84 c0                	test   %al,%al
 81ee09a:	0f 84 95 00 00 00    	je     81ee135 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x125>
 81ee0a0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ee0a7:	00 
 81ee0a8:	8b 45 10             	mov    0x10(%ebp),%eax
 81ee0ab:	89 04 24             	mov    %eax,(%esp)
 81ee0ae:	e8 21 d6 03 00       	call   822b6d4 <_ZN9PacketBuf2atEi>
 81ee0b3:	0f b6 d0             	movzbl %al,%edx
 81ee0b6:	0f b7 45 de          	movzwl -0x22(%ebp),%eax
 81ee0ba:	98                   	cwtl
 81ee0bb:	39 c2                	cmp    %eax,%edx
 81ee0bd:	0f 95 c0             	setne  %al
 81ee0c0:	84 c0                	test   %al,%al
 81ee0c2:	74 71                	je     81ee135 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x125>
 81ee0c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ee0c7:	89 04 24             	mov    %eax,(%esp)
 81ee0ca:	e8 8b b8 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ee0cf:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ee0d6:	00 
 81ee0d7:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ee0de:	00 
 81ee0df:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ee0e6:	00 
 81ee0e7:	c7 44 24 08 33 03 00 	movl   $0x333,0x8(%esp)
 81ee0ee:	00 
 81ee0ef:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ee0f2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ee0f6:	89 04 24             	mov    %eax,(%esp)
 81ee0f9:	e8 80 ab f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ee0fe:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ee105:	00 
 81ee106:	8b 45 10             	mov    0x10(%ebp),%eax
 81ee109:	89 04 24             	mov    %eax,(%esp)
 81ee10c:	e8 c3 d5 03 00       	call   822b6d4 <_ZN9PacketBuf2atEi>
 81ee111:	0f b6 c0             	movzbl %al,%eax
 81ee114:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81ee11b:	00 
 81ee11c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ee120:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ee123:	89 04 24             	mov    %eax,(%esp)
 81ee126:	e8 17 de 48 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81ee12b:	b8 00 00 00 00       	mov    $0x0,%eax
 81ee130:	e9 5f 04 00 00       	jmp    81ee594 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x584>
 81ee135:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ee13c:	00 
 81ee13d:	8b 45 10             	mov    0x10(%ebp),%eax
 81ee140:	89 04 24             	mov    %eax,(%esp)
 81ee143:	e8 8c d5 03 00       	call   822b6d4 <_ZN9PacketBuf2atEi>
 81ee148:	0f b6 c0             	movzbl %al,%eax
 81ee14b:	83 f8 21             	cmp    $0x21,%eax
 81ee14e:	0f 8c 3b 04 00 00    	jl     81ee58f <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x57f>
 81ee154:	83 f8 22             	cmp    $0x22,%eax
 81ee157:	7e 17                	jle    81ee170 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x160>
 81ee159:	83 f8 23             	cmp    $0x23,%eax
 81ee15c:	0f 84 50 02 00 00    	je     81ee3b2 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x3a2>
 81ee162:	83 f8 24             	cmp    $0x24,%eax
 81ee165:	0f 84 0d 01 00 00    	je     81ee278 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x268>
 81ee16b:	e9 1f 04 00 00       	jmp    81ee58f <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x57f>
 81ee170:	8d 45 cf             	lea    -0x31(%ebp),%eax
 81ee173:	83 c0 0d             	add    $0xd,%eax
 81ee176:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ee17a:	8b 45 10             	mov    0x10(%ebp),%eax
 81ee17d:	89 04 24             	mov    %eax,(%esp)
 81ee180:	e8 3b ee 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81ee185:	83 f0 01             	xor    $0x1,%eax
 81ee188:	84 c0                	test   %al,%al
 81ee18a:	74 29                	je     81ee1b5 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x1a5>
 81ee18c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ee193:	00 
 81ee194:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ee19b:	00 
 81ee19c:	c7 44 24 04 e0 03 bd 	movl   $0x8bd03e0,0x4(%esp)
 81ee1a3:	08 
 81ee1a4:	c7 04 24 49 71 00 00 	movl   $0x7149,(%esp)
 81ee1ab:	e8 27 27 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ee1b0:	e9 df 03 00 00       	jmp    81ee594 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x584>
 81ee1b5:	0f b7 45 dc          	movzwl -0x24(%ebp),%eax
 81ee1b9:	0f bf d8             	movswl %ax,%ebx
 81ee1bc:	e8 da df ed ff       	call   80cc19b <_Z14G_CDataManagerv>
 81ee1c1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ee1c5:	89 04 24             	mov    %eax,(%esp)
 81ee1c8:	e8 f9 1b 17 00       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 81ee1cd:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81ee1d0:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81ee1d4:	75 0a                	jne    81ee1e0 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x1d0>
 81ee1d6:	b8 00 00 00 00       	mov    $0x0,%eax
 81ee1db:	e9 b4 03 00 00       	jmp    81ee594 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x584>
 81ee1e0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ee1e7:	00 
 81ee1e8:	8b 45 10             	mov    0x10(%ebp),%eax
 81ee1eb:	89 04 24             	mov    %eax,(%esp)
 81ee1ee:	e8 e1 d4 03 00       	call   822b6d4 <_ZN9PacketBuf2atEi>
 81ee1f3:	3c 21                	cmp    $0x21,%al
 81ee1f5:	0f 94 c0             	sete   %al
 81ee1f8:	84 c0                	test   %al,%al
 81ee1fa:	74 37                	je     81ee233 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x223>
 81ee1fc:	0f b7 45 dc          	movzwl -0x24(%ebp),%eax
 81ee200:	0f bf d0             	movswl %ax,%edx
 81ee203:	a1 f4 f7 41 09       	mov    0x941f7f4,%eax
 81ee208:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ee20c:	89 04 24             	mov    %eax,(%esp)
 81ee20f:	e8 32 6c 04 00       	call   8234e46 <_ZN9CTimeGate26setBlindTimeGateStateQuestEi>
 81ee214:	84 c0                	test   %al,%al
 81ee216:	74 1b                	je     81ee233 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x223>
 81ee218:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 81ee21f:	00 
 81ee220:	c7 44 24 04 21 00 00 	movl   $0x21,0x4(%esp)
 81ee227:	00 
 81ee228:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ee22b:	89 04 24             	mov    %eax,(%esp)
 81ee22e:	e8 0f dd 48 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81ee233:	0f b7 45 dc          	movzwl -0x24(%ebp),%eax
 81ee237:	0f bf d8             	movswl %ax,%ebx
 81ee23a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ee241:	00 
 81ee242:	8b 45 10             	mov    0x10(%ebp),%eax
 81ee245:	89 04 24             	mov    %eax,(%esp)
 81ee248:	e8 87 d4 03 00       	call   822b6d4 <_ZN9PacketBuf2atEi>
 81ee24d:	0f b6 c0             	movzbl %al,%eax
 81ee250:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ee257:	00 
 81ee258:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ee25f:	00 
 81ee260:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ee264:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ee268:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ee26b:	89 04 24             	mov    %eax,(%esp)
 81ee26e:	e8 17 f8 47 00       	call   866da8a <_ZN5CUser12quest_actionEiiii>
 81ee273:	e9 17 03 00 00       	jmp    81ee58f <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x57f>
 81ee278:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81ee27b:	83 c0 0d             	add    $0xd,%eax
 81ee27e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ee282:	8b 45 10             	mov    0x10(%ebp),%eax
 81ee285:	89 04 24             	mov    %eax,(%esp)
 81ee288:	e8 33 ed 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81ee28d:	83 f0 01             	xor    $0x1,%eax
 81ee290:	84 c0                	test   %al,%al
 81ee292:	74 29                	je     81ee2bd <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x2ad>
 81ee294:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ee29b:	00 
 81ee29c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ee2a3:	00 
 81ee2a4:	c7 44 24 04 e0 03 bd 	movl   $0x8bd03e0,0x4(%esp)
 81ee2ab:	08 
 81ee2ac:	c7 04 24 9a 71 00 00 	movl   $0x719a,(%esp)
 81ee2b3:	e8 1f 26 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ee2b8:	e9 d7 02 00 00       	jmp    81ee594 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x584>
 81ee2bd:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81ee2c0:	83 c0 0f             	add    $0xf,%eax
 81ee2c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ee2c7:	8b 45 10             	mov    0x10(%ebp),%eax
 81ee2ca:	89 04 24             	mov    %eax,(%esp)
 81ee2cd:	e8 ee ec 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81ee2d2:	83 f0 01             	xor    $0x1,%eax
 81ee2d5:	84 c0                	test   %al,%al
 81ee2d7:	74 29                	je     81ee302 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x2f2>
 81ee2d9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ee2e0:	00 
 81ee2e1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ee2e8:	00 
 81ee2e9:	c7 44 24 04 e0 03 bd 	movl   $0x8bd03e0,0x4(%esp)
 81ee2f0:	08 
 81ee2f1:	c7 04 24 9b 71 00 00 	movl   $0x719b,(%esp)
 81ee2f8:	e8 da 25 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ee2fd:	e9 92 02 00 00       	jmp    81ee594 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x584>
 81ee302:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81ee305:	83 c0 11             	add    $0x11,%eax
 81ee308:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ee30c:	8b 45 10             	mov    0x10(%ebp),%eax
 81ee30f:	89 04 24             	mov    %eax,(%esp)
 81ee312:	e8 a9 ec 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81ee317:	83 f0 01             	xor    $0x1,%eax
 81ee31a:	84 c0                	test   %al,%al
 81ee31c:	74 29                	je     81ee347 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x337>
 81ee31e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ee325:	00 
 81ee326:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ee32d:	00 
 81ee32e:	c7 44 24 04 e0 03 bd 	movl   $0x8bd03e0,0x4(%esp)
 81ee335:	08 
 81ee336:	c7 04 24 9c 71 00 00 	movl   $0x719c,(%esp)
 81ee33d:	e8 95 25 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ee342:	e9 4d 02 00 00       	jmp    81ee594 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x584>
 81ee347:	0f b7 45 cd          	movzwl -0x33(%ebp),%eax
 81ee34b:	66 85 c0             	test   %ax,%ax
 81ee34e:	0f 8e 3a 02 00 00    	jle    81ee58e <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x57e>
 81ee354:	0f b7 45 cd          	movzwl -0x33(%ebp),%eax
 81ee358:	0f bf f8             	movswl %ax,%edi
 81ee35b:	0f b7 45 cb          	movzwl -0x35(%ebp),%eax
 81ee35f:	0f bf f0             	movswl %ax,%esi
 81ee362:	0f b7 45 c9          	movzwl -0x37(%ebp),%eax
 81ee366:	0f bf d8             	movswl %ax,%ebx
 81ee369:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ee370:	00 
 81ee371:	8b 45 10             	mov    0x10(%ebp),%eax
 81ee374:	89 04 24             	mov    %eax,(%esp)
 81ee377:	e8 58 d3 03 00       	call   822b6d4 <_ZN9PacketBuf2atEi>
 81ee37c:	0f b6 c0             	movzbl %al,%eax
 81ee37f:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81ee383:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81ee387:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ee38b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ee38f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ee392:	89 04 24             	mov    %eax,(%esp)
 81ee395:	e8 f0 f6 47 00       	call   866da8a <_ZN5CUser12quest_actionEiiii>
 81ee39a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ee3a1:	00 
 81ee3a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ee3a5:	89 04 24             	mov    %eax,(%esp)
 81ee3a8:	e8 e1 18 04 00       	call   822fc8e <_ZN5CUser14setGmQuestFlagEb>
 81ee3ad:	e9 dd 01 00 00       	jmp    81ee58f <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x57f>
 81ee3b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ee3b5:	89 04 24             	mov    %eax,(%esp)
 81ee3b8:	e8 cf bf ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ee3bd:	83 f8 05             	cmp    $0x5,%eax
 81ee3c0:	0f 94 c0             	sete   %al
 81ee3c3:	84 c0                	test   %al,%al
 81ee3c5:	0f 84 93 00 00 00    	je     81ee45e <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x44e>
 81ee3cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ee3ce:	89 04 24             	mov    %eax,(%esp)
 81ee3d1:	e8 76 6d 46 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81ee3d6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81ee3d9:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81ee3dd:	75 67                	jne    81ee446 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x436>
 81ee3df:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ee3e2:	89 04 24             	mov    %eax,(%esp)
 81ee3e5:	e8 64 1a 04 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81ee3ea:	0f bf d8             	movswl %ax,%ebx
 81ee3ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ee3f0:	89 04 24             	mov    %eax,(%esp)
 81ee3f3:	e8 76 bf ee ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81ee3f8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ee3ff:	00 
 81ee400:	89 04 24             	mov    %eax,(%esp)
 81ee403:	e8 43 ac f1 ff       	call   810904b <_Z14NumberToStringji>
 81ee408:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81ee40c:	89 44 24 14          	mov    %eax,0x14(%esp)
 81ee410:	c7 44 24 10 64 21 bc 	movl   $0x8bc2164,0x10(%esp)
 81ee417:	08 
 81ee418:	c7 44 24 0c af 71 00 	movl   $0x71af,0xc(%esp)
 81ee41f:	00 
 81ee420:	c7 44 24 08 e0 03 bd 	movl   $0x8bd03e0,0x8(%esp)
 81ee427:	08 
 81ee428:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81ee42f:	08 
 81ee430:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81ee437:	e8 ce 57 8e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81ee43c:	b8 00 00 00 00       	mov    $0x0,%eax
 81ee441:	e9 4e 01 00 00       	jmp    81ee594 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x584>
 81ee446:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81ee449:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 81ee44f:	83 f8 01             	cmp    $0x1,%eax
 81ee452:	75 0a                	jne    81ee45e <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x44e>
 81ee454:	b8 00 00 00 00       	mov    $0x0,%eax
 81ee459:	e9 36 01 00 00       	jmp    81ee594 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x584>
 81ee45e:	8d 45 ab             	lea    -0x55(%ebp),%eax
 81ee461:	83 c0 0d             	add    $0xd,%eax
 81ee464:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ee468:	8b 45 10             	mov    0x10(%ebp),%eax
 81ee46b:	89 04 24             	mov    %eax,(%esp)
 81ee46e:	e8 4d eb 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81ee473:	83 f0 01             	xor    $0x1,%eax
 81ee476:	84 c0                	test   %al,%al
 81ee478:	74 29                	je     81ee4a3 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x493>
 81ee47a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ee481:	00 
 81ee482:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ee489:	00 
 81ee48a:	c7 44 24 04 e0 03 bd 	movl   $0x8bd03e0,0x4(%esp)
 81ee491:	08 
 81ee492:	c7 04 24 b9 71 00 00 	movl   $0x71b9,(%esp)
 81ee499:	e8 39 24 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ee49e:	e9 f1 00 00 00       	jmp    81ee594 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x584>
 81ee4a3:	8d 45 ab             	lea    -0x55(%ebp),%eax
 81ee4a6:	83 c0 0f             	add    $0xf,%eax
 81ee4a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ee4ad:	8b 45 10             	mov    0x10(%ebp),%eax
 81ee4b0:	89 04 24             	mov    %eax,(%esp)
 81ee4b3:	e8 6a ea 39 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81ee4b8:	83 f0 01             	xor    $0x1,%eax
 81ee4bb:	84 c0                	test   %al,%al
 81ee4bd:	74 29                	je     81ee4e8 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x4d8>
 81ee4bf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ee4c6:	00 
 81ee4c7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ee4ce:	00 
 81ee4cf:	c7 44 24 04 e0 03 bd 	movl   $0x8bd03e0,0x4(%esp)
 81ee4d6:	08 
 81ee4d7:	c7 04 24 ba 71 00 00 	movl   $0x71ba,(%esp)
 81ee4de:	e8 f4 23 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ee4e3:	e9 ac 00 00 00       	jmp    81ee594 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x584>
 81ee4e8:	c6 45 bb 00          	movb   $0x0,-0x45(%ebp)
 81ee4ec:	0f b6 45 ba          	movzbl -0x46(%ebp),%eax
 81ee4f0:	3c 10                	cmp    $0x10,%al
 81ee4f2:	74 10                	je     81ee504 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x4f4>
 81ee4f4:	0f b6 45 ba          	movzbl -0x46(%ebp),%eax
 81ee4f8:	3c 20                	cmp    $0x20,%al
 81ee4fa:	74 08                	je     81ee504 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x4f4>
 81ee4fc:	0f b6 45 ba          	movzbl -0x46(%ebp),%eax
 81ee500:	3c 40                	cmp    $0x40,%al
 81ee502:	75 42                	jne    81ee546 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x536>
 81ee504:	8d 45 ab             	lea    -0x55(%ebp),%eax
 81ee507:	83 c0 10             	add    $0x10,%eax
 81ee50a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ee50e:	8b 45 10             	mov    0x10(%ebp),%eax
 81ee511:	89 04 24             	mov    %eax,(%esp)
 81ee514:	e8 09 ea 39 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81ee519:	83 f0 01             	xor    $0x1,%eax
 81ee51c:	84 c0                	test   %al,%al
 81ee51e:	74 26                	je     81ee546 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x536>
 81ee520:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ee527:	00 
 81ee528:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ee52f:	00 
 81ee530:	c7 44 24 04 e0 03 bd 	movl   $0x8bd03e0,0x4(%esp)
 81ee537:	08 
 81ee538:	c7 04 24 c4 71 00 00 	movl   $0x71c4,(%esp)
 81ee53f:	e8 93 23 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ee544:	eb 4e                	jmp    81ee594 <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x584>
 81ee546:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 81ee54a:	0f be f8             	movsbl %al,%edi
 81ee54d:	0f b6 45 ba          	movzbl -0x46(%ebp),%eax
 81ee551:	0f be f0             	movsbl %al,%esi
 81ee554:	0f b7 45 b8          	movzwl -0x48(%ebp),%eax
 81ee558:	0f bf d8             	movswl %ax,%ebx
 81ee55b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ee562:	00 
 81ee563:	8b 45 10             	mov    0x10(%ebp),%eax
 81ee566:	89 04 24             	mov    %eax,(%esp)
 81ee569:	e8 66 d1 03 00       	call   822b6d4 <_ZN9PacketBuf2atEi>
 81ee56e:	0f b6 c0             	movzbl %al,%eax
 81ee571:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81ee575:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81ee579:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ee57d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ee581:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ee584:	89 04 24             	mov    %eax,(%esp)
 81ee587:	e8 fe f4 47 00       	call   866da8a <_ZN5CUser12quest_actionEiiii>
 81ee58c:	eb 01                	jmp    81ee58f <_ZN22DisPatcher_QuestAction12dispatch_sigEP5CUserR9PacketBuf+0x57f>
 81ee58e:	90                   	nop
 81ee58f:	b8 00 00 00 00       	mov    $0x0,%eax
 81ee594:	83 c4 6c             	add    $0x6c,%esp
 81ee597:	5b                   	pop    %ebx
 81ee598:	5e                   	pop    %esi
 81ee599:	5f                   	pop    %edi
 81ee59a:	5d                   	pop    %ebp
 81ee59b:	c3                   	ret

```

```c
// DisPatcher_QuestAction::dispatch_sig @ 0x81ee010

/* DisPatcher_QuestAction::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_QuestAction::dispatch_sig(DisPatcher_QuestAction *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  GameWorld *this_00;
  CHackAnalyzer *pCVar7;
  undefined4 uVar8;
  uint uVar9;
  short local_4c;
  char local_4a;
  char local_49 [14];
  short local_3b;
  short local_39;
  short local_37 [7];
  short local_28;
  ushort local_26;
  int local_24;
  int local_20;
  
  iVar6 = CUser::get_state(param_1);
  if (2 < iVar6) {
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsPvPSkilTreeChannel(this_00);
    if (cVar1 == '\0') {
      local_26 = 0;
      cVar1 = PacketBuf::get_short(param_2,(short *)&local_26);
      if ((cVar1 == '\0') || (uVar4 = PacketBuf::at(param_2,1), (uVar4 & 0xff) == local_26)) {
        bVar3 = PacketBuf::at(param_2,1);
        if (0x20 < bVar3) {
          if (bVar3 < 0x23) {
            cVar1 = PacketBuf::get_short(param_2,&local_28);
            if (cVar1 != '\x01') {
              uVar8 = LineFunc(0x7149,
                               "virtual int DisPatcher_QuestAction::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar8;
            }
            iVar6 = G_CDataManager();
            local_24 = CDataManager::find_quest(iVar6);
            if (local_24 == 0) {
              return 0;
            }
            cVar1 = PacketBuf::at(param_2,1);
            if ((cVar1 == '!') &&
               (cVar1 = CTimeGate::setBlindTimeGateStateQuest(GlobalData::s_timeGate_,(int)local_28)
               , cVar1 != '\0')) {
              CUser::SendCmdErrorPacket(param_1,0x21,8);
            }
            uVar9 = PacketBuf::at(param_2,1);
            CUser::quest_action(param_1,uVar9 & 0xff,(int)local_28,0,0);
          }
          else if (bVar3 == 0x23) {
            iVar6 = CUser::get_state(param_1);
            if (iVar6 == 5) {
              local_20 = CUser::GetParty(param_1);
              if (local_20 == 0) {
                sVar5 = CUser::GetPartyIndex(param_1);
                uVar9 = CUser::get_acc_id(param_1);
                uVar8 = NumberToString(uVar9,0);
                LogManager::logFormat
                          (1,"PacketDispatcher_Impl_1.cpp",
                           "virtual int DisPatcher_QuestAction::dispatch_sig(CUser*, PacketBuf&)",
                           0x71af,"<IN_DUNGEON_NULL_PARTY> error m_id(%s), PartyIndex(%d)",uVar8,
                           (int)sVar5);
                return 0;
              }
              if (*(int *)(local_20 + 0xcd8) == 1) {
                return 0;
              }
            }
            cVar1 = PacketBuf::get_short(param_2,&local_4c);
            if (cVar1 != '\x01') {
              uVar8 = LineFunc(0x71b9,
                               "virtual int DisPatcher_QuestAction::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar8;
            }
            cVar1 = PacketBuf::get_byte(param_2,&local_4a);
            if (cVar1 != '\x01') {
              uVar8 = LineFunc(0x71ba,
                               "virtual int DisPatcher_QuestAction::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar8;
            }
            local_49[0] = '\0';
            if ((((local_4a == '\x10') || (local_4a == ' ')) || (local_4a == '@')) &&
               (cVar1 = PacketBuf::get_byte(param_2,local_49), cVar1 != '\x01')) {
              uVar8 = LineFunc(0x71c4,
                               "virtual int DisPatcher_QuestAction::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar8;
            }
            iVar6 = (int)local_49[0];
            uVar9 = PacketBuf::at(param_2,1);
            CUser::quest_action(param_1,uVar9 & 0xff,(int)local_4c,(int)local_4a,iVar6);
          }
          else if (bVar3 == 0x24) {
            cVar1 = PacketBuf::get_short(param_2,&local_3b);
            if (cVar1 != '\x01') {
              uVar8 = LineFunc(0x719a,
                               "virtual int DisPatcher_QuestAction::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar8;
            }
            cVar1 = PacketBuf::get_short(param_2,&local_39);
            if (cVar1 != '\x01') {
              uVar8 = LineFunc(0x719b,
                               "virtual int DisPatcher_QuestAction::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar8;
            }
            cVar1 = PacketBuf::get_short(param_2,local_37);
            if (cVar1 != '\x01') {
              uVar8 = LineFunc(0x719c,
                               "virtual int DisPatcher_QuestAction::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar8;
            }
            if (0 < local_37[0]) {
              uVar9 = PacketBuf::at(param_2,1);
              CUser::quest_action(param_1,uVar9 & 0xff,(int)local_3b,(int)local_39,(int)local_37[0])
              ;
              CUser::setGmQuestFlag(param_1,false);
            }
          }
        }
      }
      else {
        pCVar7 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,param_1,0x333,1,0,0);
        uVar2 = PacketBuf::at(param_2,1);
        CUser::SendCmdErrorPacket(param_1,uVar2,1);
      }
    }
    else {
      uVar2 = PacketBuf::at(param_2,1);
      CUser::SendCmdErrorPacket(param_1,uVar2,1);
    }
  }
  return 0;
}

```

