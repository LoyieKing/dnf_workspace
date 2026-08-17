# DB_LoadNoCacheData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## LoadBloodDungeonReward

```asm
// === 08437f58 DB_LoadNoCacheData::LoadBloodDungeonReward  [0x08437f58-0x84382ff] ===
 8437f58:	55                   	push   %ebp
 8437f59:	89 e5                	mov    %esp,%ebp
 8437f5b:	83 ec 68             	sub    $0x68,%esp
 8437f5e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8437f63:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8437f6a:	00 
 8437f6b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8437f72:	00 
 8437f73:	89 04 24             	mov    %eax,(%esp)
 8437f76:	e8 c3 d2 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8437f7b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8437f7e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8437f85:	00 
 8437f86:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8437f8d:	00 
 8437f8e:	c7 04 24 06 00 00 00 	movl   $0x6,(%esp)
 8437f95:	e8 c0 9f 27 00       	call   86b1f5a <_Z22getDailyInitializeTimeiii>
 8437f9a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8437f9d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8437fa0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8437fa4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8437fa7:	89 04 24             	mov    %eax,(%esp)
 8437faa:	e8 b1 63 c4 ff       	call   807e360 <localtime_r@plt>
 8437faf:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8437fb2:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8437fb9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8437fbc:	8b 40 18             	mov    0x18(%eax),%eax
 8437fbf:	85 c0                	test   %eax,%eax
 8437fc1:	75 09                	jne    8437fcc <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x74>
 8437fc3:	c7 45 e4 00 e9 07 00 	movl   $0x7e900,-0x1c(%ebp)
 8437fca:	eb 12                	jmp    8437fde <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x86>
 8437fcc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8437fcf:	8b 40 18             	mov    0x18(%eax),%eax
 8437fd2:	83 e8 01             	sub    $0x1,%eax
 8437fd5:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 8437fdb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8437fde:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8437fe1:	89 c2                	mov    %eax,%edx
 8437fe3:	2b 55 e4             	sub    -0x1c(%ebp),%edx
 8437fe6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8437fe9:	8b 00                	mov    (%eax),%eax
 8437feb:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8437fef:	89 44 24 08          	mov    %eax,0x8(%esp)
 8437ff3:	c7 44 24 04 74 40 c5 	movl   $0x8c54074,0x4(%esp)
 8437ffa:	08 
 8437ffb:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8437ffe:	89 04 24             	mov    %eax,(%esp)
 8438001:	e8 ba c1 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8438006:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843800d:	00 
 843800e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8438011:	89 04 24             	mov    %eax,(%esp)
 8438014:	e8 0d c3 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8438019:	83 f0 01             	xor    $0x1,%eax
 843801c:	84 c0                	test   %al,%al
 843801e:	74 0a                	je     843802a <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0xd2>
 8438020:	b8 00 00 00 00       	mov    $0x0,%eax
 8438025:	e9 d4 02 00 00       	jmp    84382fe <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x3a6>
 843802a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843802d:	89 04 24             	mov    %eax,(%esp)
 8438030:	e8 37 a3 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8438035:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8438038:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
 843803c:	0f 85 61 01 00 00    	jne    84381a3 <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x24b>
 8438042:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8438045:	89 04 24             	mov    %eax,(%esp)
 8438048:	e8 6f c4 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 843804d:	83 f0 01             	xor    $0x1,%eax
 8438050:	84 c0                	test   %al,%al
 8438052:	74 0a                	je     843805e <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x106>
 8438054:	b8 00 00 00 00       	mov    $0x0,%eax
 8438059:	e9 a0 02 00 00       	jmp    84382fe <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x3a6>
 843805e:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8438065:	8b 45 0c             	mov    0xc(%ebp),%eax
 8438068:	8d 50 08             	lea    0x8(%eax),%edx
 843806b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843806e:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8438072:	89 54 24 08          	mov    %edx,0x8(%esp)
 8438076:	89 44 24 04          	mov    %eax,0x4(%esp)
 843807a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843807d:	89 04 24             	mov    %eax,(%esp)
 8438080:	e8 6d a2 ca ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8438085:	83 f0 01             	xor    $0x1,%eax
 8438088:	84 c0                	test   %al,%al
 843808a:	74 0a                	je     8438096 <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x13e>
 843808c:	b8 00 00 00 00       	mov    $0x0,%eax
 8438091:	e9 68 02 00 00       	jmp    84382fe <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x3a6>
 8438096:	8b 45 0c             	mov    0xc(%ebp),%eax
 8438099:	8d 50 0c             	lea    0xc(%eax),%edx
 843809c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843809f:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 84380a3:	89 54 24 08          	mov    %edx,0x8(%esp)
 84380a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84380ab:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84380ae:	89 04 24             	mov    %eax,(%esp)
 84380b1:	e8 3c a2 ca ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84380b6:	83 f0 01             	xor    $0x1,%eax
 84380b9:	84 c0                	test   %al,%al
 84380bb:	74 0a                	je     84380c7 <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x16f>
 84380bd:	b8 00 00 00 00       	mov    $0x0,%eax
 84380c2:	e9 37 02 00 00       	jmp    84382fe <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x3a6>
 84380c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84380ca:	8d 50 10             	lea    0x10(%eax),%edx
 84380cd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84380d0:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 84380d4:	89 54 24 08          	mov    %edx,0x8(%esp)
 84380d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84380dc:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84380df:	89 04 24             	mov    %eax,(%esp)
 84380e2:	e8 0b a2 ca ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84380e7:	83 f0 01             	xor    $0x1,%eax
 84380ea:	84 c0                	test   %al,%al
 84380ec:	74 0a                	je     84380f8 <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x1a0>
 84380ee:	b8 00 00 00 00       	mov    $0x0,%eax
 84380f3:	e9 06 02 00 00       	jmp    84382fe <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x3a6>
 84380f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84380fb:	8d 50 14             	lea    0x14(%eax),%edx
 84380fe:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8438101:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8438105:	89 54 24 08          	mov    %edx,0x8(%esp)
 8438109:	89 44 24 04          	mov    %eax,0x4(%esp)
 843810d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8438110:	89 04 24             	mov    %eax,(%esp)
 8438113:	e8 14 e8 cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8438118:	83 f0 01             	xor    $0x1,%eax
 843811b:	84 c0                	test   %al,%al
 843811d:	74 0a                	je     8438129 <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x1d1>
 843811f:	b8 00 00 00 00       	mov    $0x0,%eax
 8438124:	e9 d5 01 00 00       	jmp    84382fe <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x3a6>
 8438129:	8b 45 0c             	mov    0xc(%ebp),%eax
 843812c:	8d 50 18             	lea    0x18(%eax),%edx
 843812f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8438132:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8438136:	89 54 24 08          	mov    %edx,0x8(%esp)
 843813a:	89 44 24 04          	mov    %eax,0x4(%esp)
 843813e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8438141:	89 04 24             	mov    %eax,(%esp)
 8438144:	e8 a9 a1 ca ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8438149:	83 f0 01             	xor    $0x1,%eax
 843814c:	84 c0                	test   %al,%al
 843814e:	74 0a                	je     843815a <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x202>
 8438150:	b8 00 00 00 00       	mov    $0x0,%eax
 8438155:	e9 a4 01 00 00       	jmp    84382fe <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x3a6>
 843815a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843815d:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8438164:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8438167:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 843816e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8438171:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8438177:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843817a:	89 04 24             	mov    %eax,(%esp)
 843817d:	e8 9e 66 c4 ff       	call   807e820 <mktime@plt>
 8438182:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8438185:	8b 45 0c             	mov    0xc(%ebp),%eax
 8438188:	8b 40 14             	mov    0x14(%eax),%eax
 843818b:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 843818e:	74 13                	je     84381a3 <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x24b>
 8438190:	8b 45 0c             	mov    0xc(%ebp),%eax
 8438193:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 843819a:	8b 45 0c             	mov    0xc(%ebp),%eax
 843819d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84381a0:	89 50 14             	mov    %edx,0x14(%eax)
 84381a3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84381a6:	2b 45 e4             	sub    -0x1c(%ebp),%eax
 84381a9:	8d 90 80 c5 f6 ff    	lea    -0x93a80(%eax),%edx
 84381af:	8b 45 0c             	mov    0xc(%ebp),%eax
 84381b2:	8b 00                	mov    (%eax),%eax
 84381b4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84381b8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84381bc:	c7 44 24 04 60 41 c5 	movl   $0x8c54160,0x4(%esp)
 84381c3:	08 
 84381c4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84381c7:	89 04 24             	mov    %eax,(%esp)
 84381ca:	e8 f1 bf fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84381cf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84381d6:	00 
 84381d7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84381da:	89 04 24             	mov    %eax,(%esp)
 84381dd:	e8 44 c1 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84381e2:	83 f0 01             	xor    $0x1,%eax
 84381e5:	84 c0                	test   %al,%al
 84381e7:	74 0a                	je     84381f3 <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x29b>
 84381e9:	b8 00 00 00 00       	mov    $0x0,%eax
 84381ee:	e9 0b 01 00 00       	jmp    84382fe <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x3a6>
 84381f3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84381f6:	89 04 24             	mov    %eax,(%esp)
 84381f9:	e8 6e a1 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84381fe:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8438201:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
 8438205:	0f 85 ee 00 00 00    	jne    84382f9 <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x3a1>
 843820b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843820e:	89 04 24             	mov    %eax,(%esp)
 8438211:	e8 a6 c2 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8438216:	83 f0 01             	xor    $0x1,%eax
 8438219:	84 c0                	test   %al,%al
 843821b:	74 0a                	je     8438227 <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x2cf>
 843821d:	b8 00 00 00 00       	mov    $0x0,%eax
 8438222:	e9 d7 00 00 00       	jmp    84382fe <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x3a6>
 8438227:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 843822e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8438231:	8d 50 1c             	lea    0x1c(%eax),%edx
 8438234:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8438237:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 843823b:	89 54 24 08          	mov    %edx,0x8(%esp)
 843823f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8438243:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8438246:	89 04 24             	mov    %eax,(%esp)
 8438249:	e8 a4 a0 ca ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 843824e:	83 f0 01             	xor    $0x1,%eax
 8438251:	84 c0                	test   %al,%al
 8438253:	74 0a                	je     843825f <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x307>
 8438255:	b8 00 00 00 00       	mov    $0x0,%eax
 843825a:	e9 9f 00 00 00       	jmp    84382fe <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x3a6>
 843825f:	c6 45 d7 00          	movb   $0x0,-0x29(%ebp)
 8438263:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8438266:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 843826a:	8d 55 d7             	lea    -0x29(%ebp),%edx
 843826d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8438271:	89 44 24 04          	mov    %eax,0x4(%esp)
 8438275:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8438278:	89 04 24             	mov    %eax,(%esp)
 843827b:	e8 d4 5b cc ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8438280:	83 f0 01             	xor    $0x1,%eax
 8438283:	84 c0                	test   %al,%al
 8438285:	74 07                	je     843828e <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x336>
 8438287:	b8 00 00 00 00       	mov    $0x0,%eax
 843828c:	eb 70                	jmp    84382fe <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x3a6>
 843828e:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 8438292:	84 c0                	test   %al,%al
 8438294:	0f 94 c2             	sete   %dl
 8438297:	8b 45 0c             	mov    0xc(%ebp),%eax
 843829a:	88 50 20             	mov    %dl,0x20(%eax)
 843829d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84382a0:	8d 50 24             	lea    0x24(%eax),%edx
 84382a3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84382a6:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84382aa:	89 54 24 08          	mov    %edx,0x8(%esp)
 84382ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 84382b2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84382b5:	89 04 24             	mov    %eax,(%esp)
 84382b8:	e8 ad 53 01 00       	call   844d66a <_ZN5MySQL9get_ulongEiRm>
 84382bd:	83 f0 01             	xor    $0x1,%eax
 84382c0:	84 c0                	test   %al,%al
 84382c2:	74 07                	je     84382cb <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x373>
 84382c4:	b8 00 00 00 00       	mov    $0x0,%eax
 84382c9:	eb 33                	jmp    84382fe <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x3a6>
 84382cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84382ce:	8d 50 28             	lea    0x28(%eax),%edx
 84382d1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84382d4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84382d8:	89 54 24 08          	mov    %edx,0x8(%esp)
 84382dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84382e0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84382e3:	89 04 24             	mov    %eax,(%esp)
 84382e6:	e8 07 a0 ca ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84382eb:	83 f0 01             	xor    $0x1,%eax
 84382ee:	84 c0                	test   %al,%al
 84382f0:	74 07                	je     84382f9 <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x3a1>
 84382f2:	b8 00 00 00 00       	mov    $0x0,%eax
 84382f7:	eb 05                	jmp    84382fe <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA+0x3a6>
 84382f9:	b8 01 00 00 00       	mov    $0x1,%eax
 84382fe:	c9                   	leave
 84382ff:	c3                   	ret

```

```c
// DB_LoadNoCacheData::LoadBloodDungeonReward @ 0x8437f58

/* DB_LoadNoCacheData::LoadBloodDungeonReward(SIG_LOAD_NO_CACHE_DATA*) */

undefined4 __thiscall
DB_LoadNoCacheData::LoadBloodDungeonReward(DB_LoadNoCacheData *this,SIG_LOAD_NO_CACHE_DATA *param_1)

{
  int iVar1;
  char cVar2;
  tm local_5c;
  char local_2d;
  int local_2c;
  MySQL *local_28;
  tm *local_24;
  int local_20;
  int local_1c;
  int local_18;
  time_t local_14;
  int local_10;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_2c = getDailyInitializeTime(6,0,0);
  local_24 = localtime_r(&local_2c,&local_5c);
  if (local_24->tm_wday == 0) {
    local_20 = 0x7e900;
  }
  else {
    local_20 = (local_24->tm_wday + -1) * 0x15180;
  }
  MySQL::set_query(local_28,
                   "seLect week_point,week_enter_count,week_use_gold,unix_timestamp(last_play_date),enter_count,rank,reward,reward_item_id,reward_gold from charac_blood_dungeon_reward where charac_no=%d and week_occ_date = cast(from_unixtime(%d) as date)"
                   ,*(undefined4 *)param_1,local_2c - local_20);
  cVar2 = MySQL::exec(local_28,true);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_1c = MySQL::get_n_rows(local_28);
  if (local_1c == 1) {
    cVar2 = MySQL::fetch(local_28);
    if (cVar2 != '\x01') {
      return 0;
    }
    local_18 = 1;
    cVar2 = MySQL::get_uint(local_28,0,(uint *)(param_1 + 8));
    iVar1 = local_18;
    if (cVar2 != '\x01') {
      return 0;
    }
    local_18 = local_18 + 1;
    cVar2 = MySQL::get_uint(local_28,iVar1,(uint *)(param_1 + 0xc));
    iVar1 = local_18;
    if (cVar2 != '\x01') {
      return 0;
    }
    local_18 = local_18 + 1;
    cVar2 = MySQL::get_uint(local_28,iVar1,(uint *)(param_1 + 0x10));
    iVar1 = local_18;
    if (cVar2 != '\x01') {
      return 0;
    }
    local_18 = local_18 + 1;
    cVar2 = MySQL::get_int(local_28,iVar1,(int *)(param_1 + 0x14));
    iVar1 = local_18;
    if (cVar2 != '\x01') {
      return 0;
    }
    local_18 = local_18 + 1;
    cVar2 = MySQL::get_uint(local_28,iVar1,(uint *)(param_1 + 0x18));
    if (cVar2 != '\x01') {
      return 0;
    }
    local_24->tm_hour = 0;
    local_24->tm_min = 0;
    local_24->tm_sec = 0;
    local_14 = mktime(local_24);
    if (*(int *)(param_1 + 0x14) != local_14) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(time_t *)(param_1 + 0x14) = local_14;
    }
  }
  MySQL::set_query(local_28,
                   "seLect rank,reward,reward_item_id,reward_gold from charac_blood_dungeon_reward where charac_no=%d and week_occ_date = cast(from_unixtime(%d) as date)"
                   ,*(undefined4 *)param_1,(local_2c - local_20) + -0x93a80);
  cVar2 = MySQL::exec(local_28,true);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_1c = MySQL::get_n_rows(local_28);
  if (local_1c == 1) {
    cVar2 = MySQL::fetch(local_28);
    if (cVar2 != '\x01') {
      return 0;
    }
    local_10 = 1;
    cVar2 = MySQL::get_uint(local_28,0,(uint *)(param_1 + 0x1c));
    iVar1 = local_10;
    if (cVar2 != '\x01') {
      return 0;
    }
    local_2d = '\0';
    local_10 = local_10 + 1;
    cVar2 = MySQL::get_byte(local_28,iVar1,&local_2d);
    iVar1 = local_10;
    if (cVar2 != '\x01') {
      return 0;
    }
    param_1[0x20] = (SIG_LOAD_NO_CACHE_DATA)(local_2d == '\0');
    local_10 = local_10 + 1;
    cVar2 = MySQL::get_ulong(local_28,iVar1,(ulong *)(param_1 + 0x24));
    iVar1 = local_10;
    if (cVar2 != '\x01') {
      return 0;
    }
    local_10 = local_10 + 1;
    cVar2 = MySQL::get_uint(local_28,iVar1,(uint *)(param_1 + 0x28));
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

---

## dispatch

```asm
// === 08437df4 DB_LoadNoCacheData::dispatch  [0x08437df4-0x8437f57] ===
 8437df4:	55                   	push   %ebp
 8437df5:	89 e5                	mov    %esp,%ebp
 8437df7:	56                   	push   %esi
 8437df8:	53                   	push   %ebx
 8437df9:	83 ec 20             	sub    $0x20,%esp
 8437dfc:	8b 45 08             	mov    0x8(%ebp),%eax
 8437dff:	8b 55 14             	mov    0x14(%ebp),%edx
 8437e02:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8437e06:	8b 55 10             	mov    0x10(%ebp),%edx
 8437e09:	89 54 24 08          	mov    %edx,0x8(%esp)
 8437e0d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8437e10:	89 54 24 04          	mov    %edx,0x4(%esp)
 8437e14:	89 04 24             	mov    %eax,(%esp)
 8437e17:	e8 60 41 fc ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 8437e1c:	83 f0 01             	xor    $0x1,%eax
 8437e1f:	84 c0                	test   %al,%al
 8437e21:	74 0a                	je     8437e2d <_ZN18DB_LoadNoCacheData8dispatchEiiP6Stream+0x39>
 8437e23:	bb 00 00 00 00       	mov    $0x0,%ebx
 8437e28:	e9 22 01 00 00       	jmp    8437f4f <_ZN18DB_LoadNoCacheData8dispatchEiiP6Stream+0x15b>
 8437e2d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8437e34:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8437e37:	89 44 24 04          	mov    %eax,0x4(%esp)
 8437e3b:	8b 45 14             	mov    0x14(%ebp),%eax
 8437e3e:	89 04 24             	mov    %eax,(%esp)
 8437e41:	e8 7e 47 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 8437e46:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8437e4b:	c7 44 24 08 49 85 00 	movl   $0x8549,0x8(%esp)
 8437e52:	00 
 8437e53:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8437e5a:	08 
 8437e5b:	89 04 24             	mov    %eax,(%esp)
 8437e5e:	e8 23 7c e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8437e63:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8437e6a:	00 
 8437e6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8437e6f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8437e72:	89 04 24             	mov    %eax,(%esp)
 8437e75:	e8 ac 0d c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8437e7a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8437e7d:	89 04 24             	mov    %eax,(%esp)
 8437e80:	e8 c1 0d c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8437e85:	8b 55 0c             	mov    0xc(%ebp),%edx
 8437e88:	89 54 24 04          	mov    %edx,0x4(%esp)
 8437e8c:	89 04 24             	mov    %eax,(%esp)
 8437e8f:	e8 c2 0d c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8437e94:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8437e97:	89 04 24             	mov    %eax,(%esp)
 8437e9a:	e8 a7 0d c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8437e9f:	8b 55 10             	mov    0x10(%ebp),%edx
 8437ea2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8437ea6:	89 04 24             	mov    %eax,(%esp)
 8437ea9:	e8 a8 0d c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8437eae:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8437eb1:	89 04 24             	mov    %eax,(%esp)
 8437eb4:	e8 95 0d c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8437eb9:	89 04 24             	mov    %eax,(%esp)
 8437ebc:	e8 fb b7 01 00       	call   84536bc <_ZN12CStreamGuard11GetInBufferI22SIG_LOAD_NO_CACHE_DATAEEPT_v>
 8437ec1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8437ec4:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8437ec8:	75 07                	jne    8437ed1 <_ZN18DB_LoadNoCacheData8dispatchEiiP6Stream+0xdd>
 8437eca:	bb 00 00 00 00       	mov    $0x0,%ebx
 8437ecf:	eb 73                	jmp    8437f44 <_ZN18DB_LoadNoCacheData8dispatchEiiP6Stream+0x150>
 8437ed1:	c7 44 24 08 2c 00 00 	movl   $0x2c,0x8(%esp)
 8437ed8:	00 
 8437ed9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8437ee0:	00 
 8437ee1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8437ee4:	89 04 24             	mov    %eax,(%esp)
 8437ee7:	e8 d4 5d c4 ff       	call   807dcc0 <memset@plt>
 8437eec:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8437eef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8437ef2:	89 10                	mov    %edx,(%eax)
 8437ef4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8437ef7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8437efb:	8b 45 08             	mov    0x8(%ebp),%eax
 8437efe:	89 04 24             	mov    %eax,(%esp)
 8437f01:	e8 52 00 00 00       	call   8437f58 <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA>
 8437f06:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8437f0b:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8437f0e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8437f12:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8437f19:	00 
 8437f1a:	89 04 24             	mov    %eax,(%esp)
 8437f1d:	e8 bc 90 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8437f22:	bb 01 00 00 00       	mov    $0x1,%ebx
 8437f27:	eb 1b                	jmp    8437f44 <_ZN18DB_LoadNoCacheData8dispatchEiiP6Stream+0x150>
 8437f29:	89 d3                	mov    %edx,%ebx
 8437f2b:	89 c6                	mov    %eax,%esi
 8437f2d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8437f30:	89 04 24             	mov    %eax,(%esp)
 8437f33:	e8 9a 49 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8437f38:	89 f0                	mov    %esi,%eax
 8437f3a:	89 da                	mov    %ebx,%edx
 8437f3c:	89 04 24             	mov    %eax,(%esp)
 8437f3f:	e8 0c b8 6a 00       	call   8ae3750 <_Unwind_Resume>
 8437f44:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8437f47:	89 04 24             	mov    %eax,(%esp)
 8437f4a:	e8 83 49 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8437f4f:	89 d8                	mov    %ebx,%eax
 8437f51:	83 c4 20             	add    $0x20,%esp
 8437f54:	5b                   	pop    %ebx
 8437f55:	5e                   	pop    %esi
 8437f56:	5d                   	pop    %ebp
 8437f57:	c3                   	ret

```

```c
// DB_LoadNoCacheData::dispatch @ 0x8437df4

/* DB_LoadNoCacheData::dispatch(int, int, Stream*) */

bool __thiscall
DB_LoadNoCacheData::dispatch(DB_LoadNoCacheData *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  bool bVar4;
  CStreamGuard local_1c [8];
  int local_14;
  SIG_LOAD_NO_CACHE_DATA *local_10;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    local_14 = 0;
    Stream::operator>>(param_3,&local_14);
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8549);
    CStreamGuard::CStreamGuard(local_1c,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 08437e8f to 08437f21 has its CatchHandler @ 08437f29 */
    CStreamGuard::operator<<(pCVar3,param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,param_2);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
    local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_NO_CACHE_DATA>(pCVar3);
    bVar4 = local_10 != (SIG_LOAD_NO_CACHE_DATA *)0x0;
    if (bVar4) {
      memset(local_10,0,0x2c);
      *(int *)local_10 = local_14;
      LoadBloodDungeonReward(this,local_10);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_1c);
    }
    CStreamGuard::~CStreamGuard(local_1c);
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

```

