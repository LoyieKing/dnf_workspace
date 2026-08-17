# CGameManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 88

---

## CGameManager

```asm
// === 082930c2 CGameManager::CGameManager  [0x082930c2-0x8293d19] ===
 82930c2:	55                   	push   %ebp
 82930c3:	89 e5                	mov    %esp,%ebp
 82930c5:	56                   	push   %esi
 82930c6:	53                   	push   %ebx
 82930c7:	81 ec f0 00 00 00    	sub    $0xf0,%esp
 82930cd:	8b 45 08             	mov    0x8(%ebp),%eax
 82930d0:	89 04 24             	mov    %eax,(%esp)
 82930d3:	e8 3a 83 e3 ff       	call   80cb412 <_ZN5MutexC1Ev>
 82930d8:	8b 45 08             	mov    0x8(%ebp),%eax
 82930db:	83 c0 1c             	add    $0x1c,%eax
 82930de:	89 04 24             	mov    %eax,(%esp)
 82930e1:	e8 08 b2 01 00       	call   82ae2ee <_ZNSt3setISsSt4lessISsESaISsEEC1Ev>
 82930e6:	8b 45 08             	mov    0x8(%ebp),%eax
 82930e9:	83 c0 34             	add    $0x34,%eax
 82930ec:	89 04 24             	mov    %eax,(%esp)
 82930ef:	e8 fa b1 01 00       	call   82ae2ee <_ZNSt3setISsSt4lessISsESaISsEEC1Ev>
 82930f4:	8b 45 08             	mov    0x8(%ebp),%eax
 82930f7:	83 c0 4c             	add    $0x4c,%eax
 82930fa:	89 04 24             	mov    %eax,(%esp)
 82930fd:	e8 8e b2 01 00       	call   82ae390 <_ZN10StaticPoolI5CUserLi600EEC1Ev>
 8293102:	8b 45 08             	mov    0x8(%ebp),%eax
 8293105:	83 c0 7c             	add    $0x7c,%eax
 8293108:	89 04 24             	mov    %eax,(%esp)
 829310b:	e8 de b4 01 00       	call   82ae5ee <_ZN10StaticPoolI11CTradeSpaceLi300EEC1Ev>
 8293110:	8b 45 08             	mov    0x8(%ebp),%eax
 8293113:	05 ac 00 00 00       	add    $0xac,%eax
 8293118:	89 04 24             	mov    %eax,(%esp)
 829311b:	e8 0a b7 01 00       	call   82ae82a <_ZN10StaticPoolI6CPartyLi600EEC1Ev>
 8293120:	8b 45 08             	mov    0x8(%ebp),%eax
 8293123:	05 dc 00 00 00       	add    $0xdc,%eax
 8293128:	89 04 24             	mov    %eax,(%esp)
 829312b:	e8 58 b9 01 00       	call   82aea88 <_ZN10StaticPoolI8PvP_RoomLi600EEC1Ev>
 8293130:	8b 45 08             	mov    0x8(%ebp),%eax
 8293133:	05 0c 01 00 00       	add    $0x10c,%eax
 8293138:	89 04 24             	mov    %eax,(%esp)
 829313b:	e8 a6 bb 01 00       	call   82aece6 <_ZN10StaticPoolI7WarRoomLi40EEC1Ev>
 8293140:	8b 45 08             	mov    0x8(%ebp),%eax
 8293143:	05 3c 01 00 00       	add    $0x13c,%eax
 8293148:	89 04 24             	mov    %eax,(%esp)
 829314b:	e8 08 be 01 00       	call   82aef58 <_ZN10StaticPoolIN8WongWork11CDeathTowerELi600EEC1Ev>
 8293150:	8b 45 08             	mov    0x8(%ebp),%eax
 8293153:	05 6c 01 00 00       	add    $0x16c,%eax
 8293158:	89 04 24             	mov    %eax,(%esp)
 829315b:	e8 5e c0 01 00       	call   82af1be <_ZN10StaticPoolIN8WongWork10CBossTowerELi600EEC1Ev>
 8293160:	8b 45 08             	mov    0x8(%ebp),%eax
 8293163:	05 9c 01 00 00       	add    $0x19c,%eax
 8293168:	89 04 24             	mov    %eax,(%esp)
 829316b:	e8 ac c2 01 00       	call   82af41c <_ZN10StaticPoolIN12advancealtar12StageControlELi600EEC1Ev>
 8293170:	8b 45 08             	mov    0x8(%ebp),%eax
 8293173:	05 cc 01 00 00       	add    $0x1cc,%eax
 8293178:	89 04 24             	mov    %eax,(%esp)
 829317b:	e8 fa c4 01 00       	call   82af67a <_ZN10StaticPoolIN10QuickParty11CQuickPartyELi300EEC1Ev>
 8293180:	8b 45 08             	mov    0x8(%ebp),%eax
 8293183:	05 fc 01 00 00       	add    $0x1fc,%eax
 8293188:	89 04 24             	mov    %eax,(%esp)
 829318b:	e8 4a c7 01 00       	call   82af8da <_ZN10StaticPoolI10BlueMarbleLi300EEC1Ev>
 8293190:	8b 45 08             	mov    0x8(%ebp),%eax
 8293193:	05 2c 02 00 00       	add    $0x22c,%eax
 8293198:	89 04 24             	mov    %eax,(%esp)
 829319b:	e8 74 c9 01 00       	call   82afb14 <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEEC1Ev>
 82931a0:	8b 45 08             	mov    0x8(%ebp),%eax
 82931a3:	05 44 02 00 00       	add    $0x244,%eax
 82931a8:	89 04 24             	mov    %eax,(%esp)
 82931ab:	e8 64 c9 01 00       	call   82afb14 <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEEC1Ev>
 82931b0:	8b 45 08             	mov    0x8(%ebp),%eax
 82931b3:	05 5c 02 00 00       	add    $0x25c,%eax
 82931b8:	89 04 24             	mov    %eax,(%esp)
 82931bb:	e8 ce c9 01 00       	call   82afb8e <_ZN9__gnu_cxx8hash_mapIiP8PvP_RoomNS_4hashIiEESt8equal_toIiESaIS2_EEC1Ev>
 82931c0:	8b 45 08             	mov    0x8(%ebp),%eax
 82931c3:	05 70 02 00 00       	add    $0x270,%eax
 82931c8:	89 04 24             	mov    %eax,(%esp)
 82931cb:	e8 92 ca 01 00       	call   82afc62 <_ZN9__gnu_cxx8hash_mapIiP6CPartyNS_4hashIiEESt8equal_toIiESaIS2_EEC1Ev>
 82931d0:	8b 45 08             	mov    0x8(%ebp),%eax
 82931d3:	05 84 02 00 00       	add    $0x284,%eax
 82931d8:	89 04 24             	mov    %eax,(%esp)
 82931db:	e8 56 cb 01 00       	call   82afd36 <_ZN9__gnu_cxx8hash_mapIiP7WarRoomNS_4hashIiEESt8equal_toIiESaIS2_EEC1Ev>
 82931e0:	8b 45 08             	mov    0x8(%ebp),%eax
 82931e3:	05 98 02 00 00       	add    $0x298,%eax
 82931e8:	89 04 24             	mov    %eax,(%esp)
 82931eb:	e8 1a cc 01 00       	call   82afe0a <_ZN9__gnu_cxx8hash_mapIiPN8WongWork11CDeathTowerENS_4hashIiEESt8equal_toIiESaIS3_EEC1Ev>
 82931f0:	8b 45 08             	mov    0x8(%ebp),%eax
 82931f3:	05 ac 02 00 00       	add    $0x2ac,%eax
 82931f8:	89 04 24             	mov    %eax,(%esp)
 82931fb:	e8 de cc 01 00       	call   82afede <_ZN9__gnu_cxx8hash_mapIiPN8WongWork10CBossTowerENS_4hashIiEESt8equal_toIiESaIS3_EEC1Ev>
 8293200:	8b 45 08             	mov    0x8(%ebp),%eax
 8293203:	05 c0 02 00 00       	add    $0x2c0,%eax
 8293208:	89 04 24             	mov    %eax,(%esp)
 829320b:	e8 a2 cd 01 00       	call   82affb2 <_ZN9__gnu_cxx8hash_mapIiPN12advancealtar12StageControlENS_4hashIiEESt8equal_toIiESaIS3_EEC1Ev>
 8293210:	8b 45 08             	mov    0x8(%ebp),%eax
 8293213:	05 d4 02 00 00       	add    $0x2d4,%eax
 8293218:	89 04 24             	mov    %eax,(%esp)
 829321b:	e8 66 ce 01 00       	call   82b0086 <_ZN9__gnu_cxx8hash_mapIiPN10QuickParty11CQuickPartyENS_4hashIiEESt8equal_toIiESaIS3_EEC1Ev>
 8293220:	8b 45 08             	mov    0x8(%ebp),%eax
 8293223:	05 e8 02 00 00       	add    $0x2e8,%eax
 8293228:	89 04 24             	mov    %eax,(%esp)
 829322b:	e8 2a cf 01 00       	call   82b015a <_ZN9__gnu_cxx8hash_mapIiP10BlueMarbleNS_4hashIiEESt8equal_toIiESaIS2_EEC1Ev>
 8293230:	8b 45 08             	mov    0x8(%ebp),%eax
 8293233:	66 c7 40 18 00 00    	movw   $0x0,0x18(%eax)
 8293239:	8d 85 27 ff ff ff    	lea    -0xd9(%ebp),%eax
 829323f:	89 04 24             	mov    %eax,(%esp)
 8293242:	e8 89 ce 44 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 8293247:	8d 85 27 ff ff ff    	lea    -0xd9(%ebp),%eax
 829324d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8293251:	c7 44 24 04 b4 67 c1 	movl   $0x8c167b4,0x4(%esp)
 8293258:	08 
 8293259:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 829325f:	89 04 24             	mov    %eax,(%esp)
 8293262:	e8 c9 43 47 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8293267:	8b 45 08             	mov    0x8(%ebp),%eax
 829326a:	8d 48 1c             	lea    0x1c(%eax),%ecx
 829326d:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 8293273:	8d 95 20 ff ff ff    	lea    -0xe0(%ebp),%edx
 8293279:	89 54 24 08          	mov    %edx,0x8(%esp)
 829327d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8293281:	89 04 24             	mov    %eax,(%esp)
 8293284:	e8 a5 cf 01 00       	call   82b022e <_ZNSt3setISsSt4lessISsESaISsEE6insertERKSs>
 8293289:	83 ec 04             	sub    $0x4,%esp
 829328c:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 8293292:	89 04 24             	mov    %eax,(%esp)
 8293295:	e8 46 49 47 00       	call   8707be0 <_ZNSsD1Ev>
 829329a:	eb 33                	jmp    82932cf <_ZN12CGameManagerC1Ev+0x20d>
 829329c:	89 d3                	mov    %edx,%ebx
 829329e:	89 c6                	mov    %eax,%esi
 82932a0:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 82932a6:	89 04 24             	mov    %eax,(%esp)
 82932a9:	e8 32 49 47 00       	call   8707be0 <_ZNSsD1Ev>
 82932ae:	89 f0                	mov    %esi,%eax
 82932b0:	89 da                	mov    %ebx,%edx
 82932b2:	eb 00                	jmp    82932b4 <_ZN12CGameManagerC1Ev+0x1f2>
 82932b4:	89 d3                	mov    %edx,%ebx
 82932b6:	89 c6                	mov    %eax,%esi
 82932b8:	8d 85 27 ff ff ff    	lea    -0xd9(%ebp),%eax
 82932be:	89 04 24             	mov    %eax,(%esp)
 82932c1:	e8 2a ce 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 82932c6:	89 f0                	mov    %esi,%eax
 82932c8:	89 da                	mov    %ebx,%edx
 82932ca:	e9 fc 07 00 00       	jmp    8293acb <_ZN12CGameManagerC1Ev+0xa09>
 82932cf:	8d 85 27 ff ff ff    	lea    -0xd9(%ebp),%eax
 82932d5:	89 04 24             	mov    %eax,(%esp)
 82932d8:	e8 13 ce 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 82932dd:	8d 85 37 ff ff ff    	lea    -0xc9(%ebp),%eax
 82932e3:	89 04 24             	mov    %eax,(%esp)
 82932e6:	e8 e5 cd 44 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 82932eb:	8d 85 37 ff ff ff    	lea    -0xc9(%ebp),%eax
 82932f1:	89 44 24 08          	mov    %eax,0x8(%esp)
 82932f5:	c7 44 24 04 bf 67 c1 	movl   $0x8c167bf,0x4(%esp)
 82932fc:	08 
 82932fd:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 8293303:	89 04 24             	mov    %eax,(%esp)
 8293306:	e8 25 43 47 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 829330b:	8b 45 08             	mov    0x8(%ebp),%eax
 829330e:	8d 48 1c             	lea    0x1c(%eax),%ecx
 8293311:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 8293317:	8d 95 30 ff ff ff    	lea    -0xd0(%ebp),%edx
 829331d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8293321:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8293325:	89 04 24             	mov    %eax,(%esp)
 8293328:	e8 01 cf 01 00       	call   82b022e <_ZNSt3setISsSt4lessISsESaISsEE6insertERKSs>
 829332d:	83 ec 04             	sub    $0x4,%esp
 8293330:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 8293336:	89 04 24             	mov    %eax,(%esp)
 8293339:	e8 a2 48 47 00       	call   8707be0 <_ZNSsD1Ev>
 829333e:	eb 33                	jmp    8293373 <_ZN12CGameManagerC1Ev+0x2b1>
 8293340:	89 d3                	mov    %edx,%ebx
 8293342:	89 c6                	mov    %eax,%esi
 8293344:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 829334a:	89 04 24             	mov    %eax,(%esp)
 829334d:	e8 8e 48 47 00       	call   8707be0 <_ZNSsD1Ev>
 8293352:	89 f0                	mov    %esi,%eax
 8293354:	89 da                	mov    %ebx,%edx
 8293356:	eb 00                	jmp    8293358 <_ZN12CGameManagerC1Ev+0x296>
 8293358:	89 d3                	mov    %edx,%ebx
 829335a:	89 c6                	mov    %eax,%esi
 829335c:	8d 85 37 ff ff ff    	lea    -0xc9(%ebp),%eax
 8293362:	89 04 24             	mov    %eax,(%esp)
 8293365:	e8 86 cd 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 829336a:	89 f0                	mov    %esi,%eax
 829336c:	89 da                	mov    %ebx,%edx
 829336e:	e9 58 07 00 00       	jmp    8293acb <_ZN12CGameManagerC1Ev+0xa09>
 8293373:	8d 85 37 ff ff ff    	lea    -0xc9(%ebp),%eax
 8293379:	89 04 24             	mov    %eax,(%esp)
 829337c:	e8 6f cd 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8293381:	8d 85 47 ff ff ff    	lea    -0xb9(%ebp),%eax
 8293387:	89 04 24             	mov    %eax,(%esp)
 829338a:	e8 41 cd 44 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 829338f:	8d 85 47 ff ff ff    	lea    -0xb9(%ebp),%eax
 8293395:	89 44 24 08          	mov    %eax,0x8(%esp)
 8293399:	c7 44 24 04 c6 67 c1 	movl   $0x8c167c6,0x4(%esp)
 82933a0:	08 
 82933a1:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 82933a7:	89 04 24             	mov    %eax,(%esp)
 82933aa:	e8 81 42 47 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 82933af:	8b 45 08             	mov    0x8(%ebp),%eax
 82933b2:	8d 48 1c             	lea    0x1c(%eax),%ecx
 82933b5:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 82933bb:	8d 95 40 ff ff ff    	lea    -0xc0(%ebp),%edx
 82933c1:	89 54 24 08          	mov    %edx,0x8(%esp)
 82933c5:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82933c9:	89 04 24             	mov    %eax,(%esp)
 82933cc:	e8 5d ce 01 00       	call   82b022e <_ZNSt3setISsSt4lessISsESaISsEE6insertERKSs>
 82933d1:	83 ec 04             	sub    $0x4,%esp
 82933d4:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 82933da:	89 04 24             	mov    %eax,(%esp)
 82933dd:	e8 fe 47 47 00       	call   8707be0 <_ZNSsD1Ev>
 82933e2:	eb 33                	jmp    8293417 <_ZN12CGameManagerC1Ev+0x355>
 82933e4:	89 d3                	mov    %edx,%ebx
 82933e6:	89 c6                	mov    %eax,%esi
 82933e8:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 82933ee:	89 04 24             	mov    %eax,(%esp)
 82933f1:	e8 ea 47 47 00       	call   8707be0 <_ZNSsD1Ev>
 82933f6:	89 f0                	mov    %esi,%eax
 82933f8:	89 da                	mov    %ebx,%edx
 82933fa:	eb 00                	jmp    82933fc <_ZN12CGameManagerC1Ev+0x33a>
 82933fc:	89 d3                	mov    %edx,%ebx
 82933fe:	89 c6                	mov    %eax,%esi
 8293400:	8d 85 47 ff ff ff    	lea    -0xb9(%ebp),%eax
 8293406:	89 04 24             	mov    %eax,(%esp)
 8293409:	e8 e2 cc 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 829340e:	89 f0                	mov    %esi,%eax
 8293410:	89 da                	mov    %ebx,%edx
 8293412:	e9 b4 06 00 00       	jmp    8293acb <_ZN12CGameManagerC1Ev+0xa09>
 8293417:	8d 85 47 ff ff ff    	lea    -0xb9(%ebp),%eax
 829341d:	89 04 24             	mov    %eax,(%esp)
 8293420:	e8 cb cc 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8293425:	8d 85 57 ff ff ff    	lea    -0xa9(%ebp),%eax
 829342b:	89 04 24             	mov    %eax,(%esp)
 829342e:	e8 9d cc 44 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 8293433:	8d 85 57 ff ff ff    	lea    -0xa9(%ebp),%eax
 8293439:	89 44 24 08          	mov    %eax,0x8(%esp)
 829343d:	c7 44 24 04 ce 67 c1 	movl   $0x8c167ce,0x4(%esp)
 8293444:	08 
 8293445:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 829344b:	89 04 24             	mov    %eax,(%esp)
 829344e:	e8 dd 41 47 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8293453:	8b 45 08             	mov    0x8(%ebp),%eax
 8293456:	8d 48 1c             	lea    0x1c(%eax),%ecx
 8293459:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 829345f:	8d 95 50 ff ff ff    	lea    -0xb0(%ebp),%edx
 8293465:	89 54 24 08          	mov    %edx,0x8(%esp)
 8293469:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 829346d:	89 04 24             	mov    %eax,(%esp)
 8293470:	e8 b9 cd 01 00       	call   82b022e <_ZNSt3setISsSt4lessISsESaISsEE6insertERKSs>
 8293475:	83 ec 04             	sub    $0x4,%esp
 8293478:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 829347e:	89 04 24             	mov    %eax,(%esp)
 8293481:	e8 5a 47 47 00       	call   8707be0 <_ZNSsD1Ev>
 8293486:	eb 33                	jmp    82934bb <_ZN12CGameManagerC1Ev+0x3f9>
 8293488:	89 d3                	mov    %edx,%ebx
 829348a:	89 c6                	mov    %eax,%esi
 829348c:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 8293492:	89 04 24             	mov    %eax,(%esp)
 8293495:	e8 46 47 47 00       	call   8707be0 <_ZNSsD1Ev>
 829349a:	89 f0                	mov    %esi,%eax
 829349c:	89 da                	mov    %ebx,%edx
 829349e:	eb 00                	jmp    82934a0 <_ZN12CGameManagerC1Ev+0x3de>
 82934a0:	89 d3                	mov    %edx,%ebx
 82934a2:	89 c6                	mov    %eax,%esi
 82934a4:	8d 85 57 ff ff ff    	lea    -0xa9(%ebp),%eax
 82934aa:	89 04 24             	mov    %eax,(%esp)
 82934ad:	e8 3e cc 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 82934b2:	89 f0                	mov    %esi,%eax
 82934b4:	89 da                	mov    %ebx,%edx
 82934b6:	e9 10 06 00 00       	jmp    8293acb <_ZN12CGameManagerC1Ev+0xa09>
 82934bb:	8d 85 57 ff ff ff    	lea    -0xa9(%ebp),%eax
 82934c1:	89 04 24             	mov    %eax,(%esp)
 82934c4:	e8 27 cc 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 82934c9:	8d 85 67 ff ff ff    	lea    -0x99(%ebp),%eax
 82934cf:	89 04 24             	mov    %eax,(%esp)
 82934d2:	e8 f9 cb 44 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 82934d7:	8d 85 67 ff ff ff    	lea    -0x99(%ebp),%eax
 82934dd:	89 44 24 08          	mov    %eax,0x8(%esp)
 82934e1:	c7 44 24 04 d5 67 c1 	movl   $0x8c167d5,0x4(%esp)
 82934e8:	08 
 82934e9:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 82934ef:	89 04 24             	mov    %eax,(%esp)
 82934f2:	e8 39 41 47 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 82934f7:	8b 45 08             	mov    0x8(%ebp),%eax
 82934fa:	8d 48 1c             	lea    0x1c(%eax),%ecx
 82934fd:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8293503:	8d 95 60 ff ff ff    	lea    -0xa0(%ebp),%edx
 8293509:	89 54 24 08          	mov    %edx,0x8(%esp)
 829350d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8293511:	89 04 24             	mov    %eax,(%esp)
 8293514:	e8 15 cd 01 00       	call   82b022e <_ZNSt3setISsSt4lessISsESaISsEE6insertERKSs>
 8293519:	83 ec 04             	sub    $0x4,%esp
 829351c:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8293522:	89 04 24             	mov    %eax,(%esp)
 8293525:	e8 b6 46 47 00       	call   8707be0 <_ZNSsD1Ev>
 829352a:	eb 33                	jmp    829355f <_ZN12CGameManagerC1Ev+0x49d>
 829352c:	89 d3                	mov    %edx,%ebx
 829352e:	89 c6                	mov    %eax,%esi
 8293530:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8293536:	89 04 24             	mov    %eax,(%esp)
 8293539:	e8 a2 46 47 00       	call   8707be0 <_ZNSsD1Ev>
 829353e:	89 f0                	mov    %esi,%eax
 8293540:	89 da                	mov    %ebx,%edx
 8293542:	eb 00                	jmp    8293544 <_ZN12CGameManagerC1Ev+0x482>
 8293544:	89 d3                	mov    %edx,%ebx
 8293546:	89 c6                	mov    %eax,%esi
 8293548:	8d 85 67 ff ff ff    	lea    -0x99(%ebp),%eax
 829354e:	89 04 24             	mov    %eax,(%esp)
 8293551:	e8 9a cb 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8293556:	89 f0                	mov    %esi,%eax
 8293558:	89 da                	mov    %ebx,%edx
 829355a:	e9 6c 05 00 00       	jmp    8293acb <_ZN12CGameManagerC1Ev+0xa09>
 829355f:	8d 85 67 ff ff ff    	lea    -0x99(%ebp),%eax
 8293565:	89 04 24             	mov    %eax,(%esp)
 8293568:	e8 83 cb 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 829356d:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 8293573:	89 04 24             	mov    %eax,(%esp)
 8293576:	e8 55 cb 44 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 829357b:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 8293581:	89 44 24 08          	mov    %eax,0x8(%esp)
 8293585:	c7 44 24 04 dd 67 c1 	movl   $0x8c167dd,0x4(%esp)
 829358c:	08 
 829358d:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8293593:	89 04 24             	mov    %eax,(%esp)
 8293596:	e8 95 40 47 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 829359b:	8b 45 08             	mov    0x8(%ebp),%eax
 829359e:	8d 48 1c             	lea    0x1c(%eax),%ecx
 82935a1:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 82935a7:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 82935ad:	89 54 24 08          	mov    %edx,0x8(%esp)
 82935b1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82935b5:	89 04 24             	mov    %eax,(%esp)
 82935b8:	e8 71 cc 01 00       	call   82b022e <_ZNSt3setISsSt4lessISsESaISsEE6insertERKSs>
 82935bd:	83 ec 04             	sub    $0x4,%esp
 82935c0:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 82935c6:	89 04 24             	mov    %eax,(%esp)
 82935c9:	e8 12 46 47 00       	call   8707be0 <_ZNSsD1Ev>
 82935ce:	eb 33                	jmp    8293603 <_ZN12CGameManagerC1Ev+0x541>
 82935d0:	89 d3                	mov    %edx,%ebx
 82935d2:	89 c6                	mov    %eax,%esi
 82935d4:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 82935da:	89 04 24             	mov    %eax,(%esp)
 82935dd:	e8 fe 45 47 00       	call   8707be0 <_ZNSsD1Ev>
 82935e2:	89 f0                	mov    %esi,%eax
 82935e4:	89 da                	mov    %ebx,%edx
 82935e6:	eb 00                	jmp    82935e8 <_ZN12CGameManagerC1Ev+0x526>
 82935e8:	89 d3                	mov    %edx,%ebx
 82935ea:	89 c6                	mov    %eax,%esi
 82935ec:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 82935f2:	89 04 24             	mov    %eax,(%esp)
 82935f5:	e8 f6 ca 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 82935fa:	89 f0                	mov    %esi,%eax
 82935fc:	89 da                	mov    %ebx,%edx
 82935fe:	e9 c8 04 00 00       	jmp    8293acb <_ZN12CGameManagerC1Ev+0xa09>
 8293603:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 8293609:	89 04 24             	mov    %eax,(%esp)
 829360c:	e8 df ca 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8293611:	8d 45 87             	lea    -0x79(%ebp),%eax
 8293614:	89 04 24             	mov    %eax,(%esp)
 8293617:	e8 b4 ca 44 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 829361c:	8d 45 87             	lea    -0x79(%ebp),%eax
 829361f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8293623:	c7 44 24 04 e6 67 c1 	movl   $0x8c167e6,0x4(%esp)
 829362a:	08 
 829362b:	8d 45 80             	lea    -0x80(%ebp),%eax
 829362e:	89 04 24             	mov    %eax,(%esp)
 8293631:	e8 fa 3f 47 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8293636:	8b 45 08             	mov    0x8(%ebp),%eax
 8293639:	8d 48 1c             	lea    0x1c(%eax),%ecx
 829363c:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8293642:	8d 55 80             	lea    -0x80(%ebp),%edx
 8293645:	89 54 24 08          	mov    %edx,0x8(%esp)
 8293649:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 829364d:	89 04 24             	mov    %eax,(%esp)
 8293650:	e8 d9 cb 01 00       	call   82b022e <_ZNSt3setISsSt4lessISsESaISsEE6insertERKSs>
 8293655:	83 ec 04             	sub    $0x4,%esp
 8293658:	8d 45 80             	lea    -0x80(%ebp),%eax
 829365b:	89 04 24             	mov    %eax,(%esp)
 829365e:	e8 7d 45 47 00       	call   8707be0 <_ZNSsD1Ev>
 8293663:	eb 2d                	jmp    8293692 <_ZN12CGameManagerC1Ev+0x5d0>
 8293665:	89 d3                	mov    %edx,%ebx
 8293667:	89 c6                	mov    %eax,%esi
 8293669:	8d 45 80             	lea    -0x80(%ebp),%eax
 829366c:	89 04 24             	mov    %eax,(%esp)
 829366f:	e8 6c 45 47 00       	call   8707be0 <_ZNSsD1Ev>
 8293674:	89 f0                	mov    %esi,%eax
 8293676:	89 da                	mov    %ebx,%edx
 8293678:	eb 00                	jmp    829367a <_ZN12CGameManagerC1Ev+0x5b8>
 829367a:	89 d3                	mov    %edx,%ebx
 829367c:	89 c6                	mov    %eax,%esi
 829367e:	8d 45 87             	lea    -0x79(%ebp),%eax
 8293681:	89 04 24             	mov    %eax,(%esp)
 8293684:	e8 67 ca 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8293689:	89 f0                	mov    %esi,%eax
 829368b:	89 da                	mov    %ebx,%edx
 829368d:	e9 39 04 00 00       	jmp    8293acb <_ZN12CGameManagerC1Ev+0xa09>
 8293692:	8d 45 87             	lea    -0x79(%ebp),%eax
 8293695:	89 04 24             	mov    %eax,(%esp)
 8293698:	e8 53 ca 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 829369d:	8d 45 97             	lea    -0x69(%ebp),%eax
 82936a0:	89 04 24             	mov    %eax,(%esp)
 82936a3:	e8 28 ca 44 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 82936a8:	8d 45 97             	lea    -0x69(%ebp),%eax
 82936ab:	89 44 24 08          	mov    %eax,0x8(%esp)
 82936af:	c7 44 24 04 ee 67 c1 	movl   $0x8c167ee,0x4(%esp)
 82936b6:	08 
 82936b7:	8d 45 90             	lea    -0x70(%ebp),%eax
 82936ba:	89 04 24             	mov    %eax,(%esp)
 82936bd:	e8 6e 3f 47 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 82936c2:	8b 45 08             	mov    0x8(%ebp),%eax
 82936c5:	8d 48 1c             	lea    0x1c(%eax),%ecx
 82936c8:	8d 45 88             	lea    -0x78(%ebp),%eax
 82936cb:	8d 55 90             	lea    -0x70(%ebp),%edx
 82936ce:	89 54 24 08          	mov    %edx,0x8(%esp)
 82936d2:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82936d6:	89 04 24             	mov    %eax,(%esp)
 82936d9:	e8 50 cb 01 00       	call   82b022e <_ZNSt3setISsSt4lessISsESaISsEE6insertERKSs>
 82936de:	83 ec 04             	sub    $0x4,%esp
 82936e1:	8d 45 90             	lea    -0x70(%ebp),%eax
 82936e4:	89 04 24             	mov    %eax,(%esp)
 82936e7:	e8 f4 44 47 00       	call   8707be0 <_ZNSsD1Ev>
 82936ec:	eb 2d                	jmp    829371b <_ZN12CGameManagerC1Ev+0x659>
 82936ee:	89 d3                	mov    %edx,%ebx
 82936f0:	89 c6                	mov    %eax,%esi
 82936f2:	8d 45 90             	lea    -0x70(%ebp),%eax
 82936f5:	89 04 24             	mov    %eax,(%esp)
 82936f8:	e8 e3 44 47 00       	call   8707be0 <_ZNSsD1Ev>
 82936fd:	89 f0                	mov    %esi,%eax
 82936ff:	89 da                	mov    %ebx,%edx
 8293701:	eb 00                	jmp    8293703 <_ZN12CGameManagerC1Ev+0x641>
 8293703:	89 d3                	mov    %edx,%ebx
 8293705:	89 c6                	mov    %eax,%esi
 8293707:	8d 45 97             	lea    -0x69(%ebp),%eax
 829370a:	89 04 24             	mov    %eax,(%esp)
 829370d:	e8 de c9 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8293712:	89 f0                	mov    %esi,%eax
 8293714:	89 da                	mov    %ebx,%edx
 8293716:	e9 b0 03 00 00       	jmp    8293acb <_ZN12CGameManagerC1Ev+0xa09>
 829371b:	8d 45 97             	lea    -0x69(%ebp),%eax
 829371e:	89 04 24             	mov    %eax,(%esp)
 8293721:	e8 ca c9 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8293726:	8d 45 a7             	lea    -0x59(%ebp),%eax
 8293729:	89 04 24             	mov    %eax,(%esp)
 829372c:	e8 9f c9 44 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 8293731:	8d 45 a7             	lea    -0x59(%ebp),%eax
 8293734:	89 44 24 08          	mov    %eax,0x8(%esp)
 8293738:	c7 44 24 04 f5 67 c1 	movl   $0x8c167f5,0x4(%esp)
 829373f:	08 
 8293740:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8293743:	89 04 24             	mov    %eax,(%esp)
 8293746:	e8 e5 3e 47 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 829374b:	8b 45 08             	mov    0x8(%ebp),%eax
 829374e:	8d 48 1c             	lea    0x1c(%eax),%ecx
 8293751:	8d 45 98             	lea    -0x68(%ebp),%eax
 8293754:	8d 55 a0             	lea    -0x60(%ebp),%edx
 8293757:	89 54 24 08          	mov    %edx,0x8(%esp)
 829375b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 829375f:	89 04 24             	mov    %eax,(%esp)
 8293762:	e8 c7 ca 01 00       	call   82b022e <_ZNSt3setISsSt4lessISsESaISsEE6insertERKSs>
 8293767:	83 ec 04             	sub    $0x4,%esp
 829376a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 829376d:	89 04 24             	mov    %eax,(%esp)
 8293770:	e8 6b 44 47 00       	call   8707be0 <_ZNSsD1Ev>
 8293775:	eb 2d                	jmp    82937a4 <_ZN12CGameManagerC1Ev+0x6e2>
 8293777:	89 d3                	mov    %edx,%ebx
 8293779:	89 c6                	mov    %eax,%esi
 829377b:	8d 45 a0             	lea    -0x60(%ebp),%eax
 829377e:	89 04 24             	mov    %eax,(%esp)
 8293781:	e8 5a 44 47 00       	call   8707be0 <_ZNSsD1Ev>
 8293786:	89 f0                	mov    %esi,%eax
 8293788:	89 da                	mov    %ebx,%edx
 829378a:	eb 00                	jmp    829378c <_ZN12CGameManagerC1Ev+0x6ca>
 829378c:	89 d3                	mov    %edx,%ebx
 829378e:	89 c6                	mov    %eax,%esi
 8293790:	8d 45 a7             	lea    -0x59(%ebp),%eax
 8293793:	89 04 24             	mov    %eax,(%esp)
 8293796:	e8 55 c9 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 829379b:	89 f0                	mov    %esi,%eax
 829379d:	89 da                	mov    %ebx,%edx
 829379f:	e9 27 03 00 00       	jmp    8293acb <_ZN12CGameManagerC1Ev+0xa09>
 82937a4:	8d 45 a7             	lea    -0x59(%ebp),%eax
 82937a7:	89 04 24             	mov    %eax,(%esp)
 82937aa:	e8 41 c9 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 82937af:	8d 45 b7             	lea    -0x49(%ebp),%eax
 82937b2:	89 04 24             	mov    %eax,(%esp)
 82937b5:	e8 16 c9 44 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 82937ba:	8d 45 b7             	lea    -0x49(%ebp),%eax
 82937bd:	89 44 24 08          	mov    %eax,0x8(%esp)
 82937c1:	c7 44 24 04 00 68 c1 	movl   $0x8c16800,0x4(%esp)
 82937c8:	08 
 82937c9:	8d 45 b0             	lea    -0x50(%ebp),%eax
 82937cc:	89 04 24             	mov    %eax,(%esp)
 82937cf:	e8 5c 3e 47 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 82937d4:	8b 45 08             	mov    0x8(%ebp),%eax
 82937d7:	8d 48 1c             	lea    0x1c(%eax),%ecx
 82937da:	8d 45 a8             	lea    -0x58(%ebp),%eax
 82937dd:	8d 55 b0             	lea    -0x50(%ebp),%edx
 82937e0:	89 54 24 08          	mov    %edx,0x8(%esp)
 82937e4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82937e8:	89 04 24             	mov    %eax,(%esp)
 82937eb:	e8 3e ca 01 00       	call   82b022e <_ZNSt3setISsSt4lessISsESaISsEE6insertERKSs>
 82937f0:	83 ec 04             	sub    $0x4,%esp
 82937f3:	8d 45 b0             	lea    -0x50(%ebp),%eax
 82937f6:	89 04 24             	mov    %eax,(%esp)
 82937f9:	e8 e2 43 47 00       	call   8707be0 <_ZNSsD1Ev>
 82937fe:	eb 2d                	jmp    829382d <_ZN12CGameManagerC1Ev+0x76b>
 8293800:	89 d3                	mov    %edx,%ebx
 8293802:	89 c6                	mov    %eax,%esi
 8293804:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8293807:	89 04 24             	mov    %eax,(%esp)
 829380a:	e8 d1 43 47 00       	call   8707be0 <_ZNSsD1Ev>
 829380f:	89 f0                	mov    %esi,%eax
 8293811:	89 da                	mov    %ebx,%edx
 8293813:	eb 00                	jmp    8293815 <_ZN12CGameManagerC1Ev+0x753>
 8293815:	89 d3                	mov    %edx,%ebx
 8293817:	89 c6                	mov    %eax,%esi
 8293819:	8d 45 b7             	lea    -0x49(%ebp),%eax
 829381c:	89 04 24             	mov    %eax,(%esp)
 829381f:	e8 cc c8 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8293824:	89 f0                	mov    %esi,%eax
 8293826:	89 da                	mov    %ebx,%edx
 8293828:	e9 9e 02 00 00       	jmp    8293acb <_ZN12CGameManagerC1Ev+0xa09>
 829382d:	8d 45 b7             	lea    -0x49(%ebp),%eax
 8293830:	89 04 24             	mov    %eax,(%esp)
 8293833:	e8 b8 c8 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8293838:	8d 45 c7             	lea    -0x39(%ebp),%eax
 829383b:	89 04 24             	mov    %eax,(%esp)
 829383e:	e8 8d c8 44 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 8293843:	8d 45 c7             	lea    -0x39(%ebp),%eax
 8293846:	89 44 24 08          	mov    %eax,0x8(%esp)
 829384a:	c7 44 24 04 0b 68 c1 	movl   $0x8c1680b,0x4(%esp)
 8293851:	08 
 8293852:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8293855:	89 04 24             	mov    %eax,(%esp)
 8293858:	e8 d3 3d 47 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 829385d:	8b 45 08             	mov    0x8(%ebp),%eax
 8293860:	8d 48 1c             	lea    0x1c(%eax),%ecx
 8293863:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8293866:	8d 55 c0             	lea    -0x40(%ebp),%edx
 8293869:	89 54 24 08          	mov    %edx,0x8(%esp)
 829386d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8293871:	89 04 24             	mov    %eax,(%esp)
 8293874:	e8 b5 c9 01 00       	call   82b022e <_ZNSt3setISsSt4lessISsESaISsEE6insertERKSs>
 8293879:	83 ec 04             	sub    $0x4,%esp
 829387c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 829387f:	89 04 24             	mov    %eax,(%esp)
 8293882:	e8 59 43 47 00       	call   8707be0 <_ZNSsD1Ev>
 8293887:	eb 2d                	jmp    82938b6 <_ZN12CGameManagerC1Ev+0x7f4>
 8293889:	89 d3                	mov    %edx,%ebx
 829388b:	89 c6                	mov    %eax,%esi
 829388d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8293890:	89 04 24             	mov    %eax,(%esp)
 8293893:	e8 48 43 47 00       	call   8707be0 <_ZNSsD1Ev>
 8293898:	89 f0                	mov    %esi,%eax
 829389a:	89 da                	mov    %ebx,%edx
 829389c:	eb 00                	jmp    829389e <_ZN12CGameManagerC1Ev+0x7dc>
 829389e:	89 d3                	mov    %edx,%ebx
 82938a0:	89 c6                	mov    %eax,%esi
 82938a2:	8d 45 c7             	lea    -0x39(%ebp),%eax
 82938a5:	89 04 24             	mov    %eax,(%esp)
 82938a8:	e8 43 c8 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 82938ad:	89 f0                	mov    %esi,%eax
 82938af:	89 da                	mov    %ebx,%edx
 82938b1:	e9 15 02 00 00       	jmp    8293acb <_ZN12CGameManagerC1Ev+0xa09>
 82938b6:	8d 45 c7             	lea    -0x39(%ebp),%eax
 82938b9:	89 04 24             	mov    %eax,(%esp)
 82938bc:	e8 2f c8 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 82938c1:	8d 45 d7             	lea    -0x29(%ebp),%eax
 82938c4:	89 04 24             	mov    %eax,(%esp)
 82938c7:	e8 04 c8 44 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 82938cc:	8d 45 d7             	lea    -0x29(%ebp),%eax
 82938cf:	89 44 24 08          	mov    %eax,0x8(%esp)
 82938d3:	c7 44 24 04 16 68 c1 	movl   $0x8c16816,0x4(%esp)
 82938da:	08 
 82938db:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82938de:	89 04 24             	mov    %eax,(%esp)
 82938e1:	e8 4a 3d 47 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 82938e6:	8b 45 08             	mov    0x8(%ebp),%eax
 82938e9:	8d 48 34             	lea    0x34(%eax),%ecx
 82938ec:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82938ef:	8d 55 d0             	lea    -0x30(%ebp),%edx
 82938f2:	89 54 24 08          	mov    %edx,0x8(%esp)
 82938f6:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82938fa:	89 04 24             	mov    %eax,(%esp)
 82938fd:	e8 2c c9 01 00       	call   82b022e <_ZNSt3setISsSt4lessISsESaISsEE6insertERKSs>
 8293902:	83 ec 04             	sub    $0x4,%esp
 8293905:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8293908:	89 04 24             	mov    %eax,(%esp)
 829390b:	e8 d0 42 47 00       	call   8707be0 <_ZNSsD1Ev>
 8293910:	eb 2d                	jmp    829393f <_ZN12CGameManagerC1Ev+0x87d>
 8293912:	89 d3                	mov    %edx,%ebx
 8293914:	89 c6                	mov    %eax,%esi
 8293916:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8293919:	89 04 24             	mov    %eax,(%esp)
 829391c:	e8 bf 42 47 00       	call   8707be0 <_ZNSsD1Ev>
 8293921:	89 f0                	mov    %esi,%eax
 8293923:	89 da                	mov    %ebx,%edx
 8293925:	eb 00                	jmp    8293927 <_ZN12CGameManagerC1Ev+0x865>
 8293927:	89 d3                	mov    %edx,%ebx
 8293929:	89 c6                	mov    %eax,%esi
 829392b:	8d 45 d7             	lea    -0x29(%ebp),%eax
 829392e:	89 04 24             	mov    %eax,(%esp)
 8293931:	e8 ba c7 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8293936:	89 f0                	mov    %esi,%eax
 8293938:	89 da                	mov    %ebx,%edx
 829393a:	e9 8c 01 00 00       	jmp    8293acb <_ZN12CGameManagerC1Ev+0xa09>
 829393f:	8d 45 d7             	lea    -0x29(%ebp),%eax
 8293942:	89 04 24             	mov    %eax,(%esp)
 8293945:	e8 a6 c7 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 829394a:	8d 45 e7             	lea    -0x19(%ebp),%eax
 829394d:	89 04 24             	mov    %eax,(%esp)
 8293950:	e8 7b c7 44 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 8293955:	8d 45 e7             	lea    -0x19(%ebp),%eax
 8293958:	89 44 24 08          	mov    %eax,0x8(%esp)
 829395c:	c7 44 24 04 24 68 c1 	movl   $0x8c16824,0x4(%esp)
 8293963:	08 
 8293964:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8293967:	89 04 24             	mov    %eax,(%esp)
 829396a:	e8 c1 3c 47 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 829396f:	8b 45 08             	mov    0x8(%ebp),%eax
 8293972:	8d 48 34             	lea    0x34(%eax),%ecx
 8293975:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8293978:	8d 55 e0             	lea    -0x20(%ebp),%edx
 829397b:	89 54 24 08          	mov    %edx,0x8(%esp)
 829397f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8293983:	89 04 24             	mov    %eax,(%esp)
 8293986:	e8 a3 c8 01 00       	call   82b022e <_ZNSt3setISsSt4lessISsESaISsEE6insertERKSs>
 829398b:	83 ec 04             	sub    $0x4,%esp
 829398e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8293991:	89 04 24             	mov    %eax,(%esp)
 8293994:	e8 47 42 47 00       	call   8707be0 <_ZNSsD1Ev>
 8293999:	eb 2d                	jmp    82939c8 <_ZN12CGameManagerC1Ev+0x906>
 829399b:	89 d3                	mov    %edx,%ebx
 829399d:	89 c6                	mov    %eax,%esi
 829399f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82939a2:	89 04 24             	mov    %eax,(%esp)
 82939a5:	e8 36 42 47 00       	call   8707be0 <_ZNSsD1Ev>
 82939aa:	89 f0                	mov    %esi,%eax
 82939ac:	89 da                	mov    %ebx,%edx
 82939ae:	eb 00                	jmp    82939b0 <_ZN12CGameManagerC1Ev+0x8ee>
 82939b0:	89 d3                	mov    %edx,%ebx
 82939b2:	89 c6                	mov    %eax,%esi
 82939b4:	8d 45 e7             	lea    -0x19(%ebp),%eax
 82939b7:	89 04 24             	mov    %eax,(%esp)
 82939ba:	e8 31 c7 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 82939bf:	89 f0                	mov    %esi,%eax
 82939c1:	89 da                	mov    %ebx,%edx
 82939c3:	e9 03 01 00 00       	jmp    8293acb <_ZN12CGameManagerC1Ev+0xa09>
 82939c8:	8d 45 e7             	lea    -0x19(%ebp),%eax
 82939cb:	89 04 24             	mov    %eax,(%esp)
 82939ce:	e8 1d c7 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 82939d3:	8d 45 f7             	lea    -0x9(%ebp),%eax
 82939d6:	89 04 24             	mov    %eax,(%esp)
 82939d9:	e8 f2 c6 44 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 82939de:	8d 45 f7             	lea    -0x9(%ebp),%eax
 82939e1:	89 44 24 08          	mov    %eax,0x8(%esp)
 82939e5:	c7 44 24 04 33 68 c1 	movl   $0x8c16833,0x4(%esp)
 82939ec:	08 
 82939ed:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82939f0:	89 04 24             	mov    %eax,(%esp)
 82939f3:	e8 38 3c 47 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 82939f8:	8b 45 08             	mov    0x8(%ebp),%eax
 82939fb:	8d 48 34             	lea    0x34(%eax),%ecx
 82939fe:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8293a01:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8293a04:	89 54 24 08          	mov    %edx,0x8(%esp)
 8293a08:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8293a0c:	89 04 24             	mov    %eax,(%esp)
 8293a0f:	e8 1a c8 01 00       	call   82b022e <_ZNSt3setISsSt4lessISsESaISsEE6insertERKSs>
 8293a14:	83 ec 04             	sub    $0x4,%esp
 8293a17:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8293a1a:	89 04 24             	mov    %eax,(%esp)
 8293a1d:	e8 be 41 47 00       	call   8707be0 <_ZNSsD1Ev>
 8293a22:	eb 2a                	jmp    8293a4e <_ZN12CGameManagerC1Ev+0x98c>
 8293a24:	89 d3                	mov    %edx,%ebx
 8293a26:	89 c6                	mov    %eax,%esi
 8293a28:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8293a2b:	89 04 24             	mov    %eax,(%esp)
 8293a2e:	e8 ad 41 47 00       	call   8707be0 <_ZNSsD1Ev>
 8293a33:	89 f0                	mov    %esi,%eax
 8293a35:	89 da                	mov    %ebx,%edx
 8293a37:	eb 00                	jmp    8293a39 <_ZN12CGameManagerC1Ev+0x977>
 8293a39:	89 d3                	mov    %edx,%ebx
 8293a3b:	89 c6                	mov    %eax,%esi
 8293a3d:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8293a40:	89 04 24             	mov    %eax,(%esp)
 8293a43:	e8 a8 c6 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8293a48:	89 f0                	mov    %esi,%eax
 8293a4a:	89 da                	mov    %ebx,%edx
 8293a4c:	eb 7d                	jmp    8293acb <_ZN12CGameManagerC1Ev+0xa09>
 8293a4e:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8293a51:	89 04 24             	mov    %eax,(%esp)
 8293a54:	e8 97 c6 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8293a59:	8b 45 08             	mov    0x8(%ebp),%eax
 8293a5c:	c7 80 fc 02 00 00 00 	movl   $0x0,0x2fc(%eax)
 8293a63:	00 00 00 
 8293a66:	8b 45 08             	mov    0x8(%ebp),%eax
 8293a69:	c7 80 00 03 00 00 00 	movl   $0x0,0x300(%eax)
 8293a70:	00 00 00 
 8293a73:	8b 45 08             	mov    0x8(%ebp),%eax
 8293a76:	c7 80 04 03 00 00 00 	movl   $0x0,0x304(%eax)
 8293a7d:	00 00 00 
 8293a80:	8b 45 08             	mov    0x8(%ebp),%eax
 8293a83:	c7 80 08 03 00 00 00 	movl   $0x0,0x308(%eax)
 8293a8a:	00 00 00 
 8293a8d:	8b 45 08             	mov    0x8(%ebp),%eax
 8293a90:	c7 80 0c 03 00 00 00 	movl   $0x0,0x30c(%eax)
 8293a97:	00 00 00 
 8293a9a:	8b 45 08             	mov    0x8(%ebp),%eax
 8293a9d:	c7 80 10 03 00 00 00 	movl   $0x0,0x310(%eax)
 8293aa4:	00 00 00 
 8293aa7:	8b 45 08             	mov    0x8(%ebp),%eax
 8293aaa:	c7 80 14 03 00 00 00 	movl   $0x0,0x314(%eax)
 8293ab1:	00 00 00 
 8293ab4:	8b 45 08             	mov    0x8(%ebp),%eax
 8293ab7:	c7 80 18 03 00 00 00 	movl   $0x0,0x318(%eax)
 8293abe:	00 00 00 
 8293ac1:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8293ac4:	83 c4 00             	add    $0x0,%esp
 8293ac7:	5b                   	pop    %ebx
 8293ac8:	5e                   	pop    %esi
 8293ac9:	5d                   	pop    %ebp
 8293aca:	c3                   	ret
 8293acb:	89 d3                	mov    %edx,%ebx
 8293acd:	89 c6                	mov    %eax,%esi
 8293acf:	8b 45 08             	mov    0x8(%ebp),%eax
 8293ad2:	05 e8 02 00 00       	add    $0x2e8,%eax
 8293ad7:	89 04 24             	mov    %eax,(%esp)
 8293ada:	e8 0b 6d 01 00       	call   82aa7ea <_ZN9__gnu_cxx8hash_mapIiP10BlueMarbleNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8293adf:	89 f0                	mov    %esi,%eax
 8293ae1:	89 da                	mov    %ebx,%edx
 8293ae3:	eb 00                	jmp    8293ae5 <_ZN12CGameManagerC1Ev+0xa23>
 8293ae5:	89 d3                	mov    %edx,%ebx
 8293ae7:	89 c6                	mov    %eax,%esi
 8293ae9:	8b 45 08             	mov    0x8(%ebp),%eax
 8293aec:	05 d4 02 00 00       	add    $0x2d4,%eax
 8293af1:	89 04 24             	mov    %eax,(%esp)
 8293af4:	e8 dd 6c 01 00       	call   82aa7d6 <_ZN9__gnu_cxx8hash_mapIiPN10QuickParty11CQuickPartyENS_4hashIiEESt8equal_toIiESaIS3_EED1Ev>
 8293af9:	89 f0                	mov    %esi,%eax
 8293afb:	89 da                	mov    %ebx,%edx
 8293afd:	eb 00                	jmp    8293aff <_ZN12CGameManagerC1Ev+0xa3d>
 8293aff:	89 d3                	mov    %edx,%ebx
 8293b01:	89 c6                	mov    %eax,%esi
 8293b03:	8b 45 08             	mov    0x8(%ebp),%eax
 8293b06:	05 c0 02 00 00       	add    $0x2c0,%eax
 8293b0b:	89 04 24             	mov    %eax,(%esp)
 8293b0e:	e8 af 6c 01 00       	call   82aa7c2 <_ZN9__gnu_cxx8hash_mapIiPN12advancealtar12StageControlENS_4hashIiEESt8equal_toIiESaIS3_EED1Ev>
 8293b13:	89 f0                	mov    %esi,%eax
 8293b15:	89 da                	mov    %ebx,%edx
 8293b17:	eb 00                	jmp    8293b19 <_ZN12CGameManagerC1Ev+0xa57>
 8293b19:	89 d3                	mov    %edx,%ebx
 8293b1b:	89 c6                	mov    %eax,%esi
 8293b1d:	8b 45 08             	mov    0x8(%ebp),%eax
 8293b20:	05 ac 02 00 00       	add    $0x2ac,%eax
 8293b25:	89 04 24             	mov    %eax,(%esp)
 8293b28:	e8 81 6c 01 00       	call   82aa7ae <_ZN9__gnu_cxx8hash_mapIiPN8WongWork10CBossTowerENS_4hashIiEESt8equal_toIiESaIS3_EED1Ev>
 8293b2d:	89 f0                	mov    %esi,%eax
 8293b2f:	89 da                	mov    %ebx,%edx
 8293b31:	eb 00                	jmp    8293b33 <_ZN12CGameManagerC1Ev+0xa71>
 8293b33:	89 d3                	mov    %edx,%ebx
 8293b35:	89 c6                	mov    %eax,%esi
 8293b37:	8b 45 08             	mov    0x8(%ebp),%eax
 8293b3a:	05 98 02 00 00       	add    $0x298,%eax
 8293b3f:	89 04 24             	mov    %eax,(%esp)
 8293b42:	e8 53 6c 01 00       	call   82aa79a <_ZN9__gnu_cxx8hash_mapIiPN8WongWork11CDeathTowerENS_4hashIiEESt8equal_toIiESaIS3_EED1Ev>
 8293b47:	89 f0                	mov    %esi,%eax
 8293b49:	89 da                	mov    %ebx,%edx
 8293b4b:	eb 00                	jmp    8293b4d <_ZN12CGameManagerC1Ev+0xa8b>
 8293b4d:	89 d3                	mov    %edx,%ebx
 8293b4f:	89 c6                	mov    %eax,%esi
 8293b51:	8b 45 08             	mov    0x8(%ebp),%eax
 8293b54:	05 84 02 00 00       	add    $0x284,%eax
 8293b59:	89 04 24             	mov    %eax,(%esp)
 8293b5c:	e8 25 6c 01 00       	call   82aa786 <_ZN9__gnu_cxx8hash_mapIiP7WarRoomNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8293b61:	89 f0                	mov    %esi,%eax
 8293b63:	89 da                	mov    %ebx,%edx
 8293b65:	eb 00                	jmp    8293b67 <_ZN12CGameManagerC1Ev+0xaa5>
 8293b67:	89 d3                	mov    %edx,%ebx
 8293b69:	89 c6                	mov    %eax,%esi
 8293b6b:	8b 45 08             	mov    0x8(%ebp),%eax
 8293b6e:	05 70 02 00 00       	add    $0x270,%eax
 8293b73:	89 04 24             	mov    %eax,(%esp)
 8293b76:	e8 f7 6b 01 00       	call   82aa772 <_ZN9__gnu_cxx8hash_mapIiP6CPartyNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8293b7b:	89 f0                	mov    %esi,%eax
 8293b7d:	89 da                	mov    %ebx,%edx
 8293b7f:	eb 00                	jmp    8293b81 <_ZN12CGameManagerC1Ev+0xabf>
 8293b81:	89 d3                	mov    %edx,%ebx
 8293b83:	89 c6                	mov    %eax,%esi
 8293b85:	8b 45 08             	mov    0x8(%ebp),%eax
 8293b88:	05 5c 02 00 00       	add    $0x25c,%eax
 8293b8d:	89 04 24             	mov    %eax,(%esp)
 8293b90:	e8 c9 6b 01 00       	call   82aa75e <_ZN9__gnu_cxx8hash_mapIiP8PvP_RoomNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8293b95:	89 f0                	mov    %esi,%eax
 8293b97:	89 da                	mov    %ebx,%edx
 8293b99:	eb 00                	jmp    8293b9b <_ZN12CGameManagerC1Ev+0xad9>
 8293b9b:	89 d3                	mov    %edx,%ebx
 8293b9d:	89 c6                	mov    %eax,%esi
 8293b9f:	8b 45 08             	mov    0x8(%ebp),%eax
 8293ba2:	05 44 02 00 00       	add    $0x244,%eax
 8293ba7:	89 04 24             	mov    %eax,(%esp)
 8293baa:	e8 9b 6b 01 00       	call   82aa74a <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 8293baf:	89 f0                	mov    %esi,%eax
 8293bb1:	89 da                	mov    %ebx,%edx
 8293bb3:	eb 00                	jmp    8293bb5 <_ZN12CGameManagerC1Ev+0xaf3>
 8293bb5:	89 d3                	mov    %edx,%ebx
 8293bb7:	89 c6                	mov    %eax,%esi
 8293bb9:	8b 45 08             	mov    0x8(%ebp),%eax
 8293bbc:	05 2c 02 00 00       	add    $0x22c,%eax
 8293bc1:	89 04 24             	mov    %eax,(%esp)
 8293bc4:	e8 81 6b 01 00       	call   82aa74a <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 8293bc9:	89 f0                	mov    %esi,%eax
 8293bcb:	89 da                	mov    %ebx,%edx
 8293bcd:	eb 00                	jmp    8293bcf <_ZN12CGameManagerC1Ev+0xb0d>
 8293bcf:	89 d3                	mov    %edx,%ebx
 8293bd1:	89 c6                	mov    %eax,%esi
 8293bd3:	8b 45 08             	mov    0x8(%ebp),%eax
 8293bd6:	05 fc 01 00 00       	add    $0x1fc,%eax
 8293bdb:	89 04 24             	mov    %eax,(%esp)
 8293bde:	e8 a9 be 01 00       	call   82afa8c <_ZN10StaticPoolI10BlueMarbleLi300EED1Ev>
 8293be3:	89 f0                	mov    %esi,%eax
 8293be5:	89 da                	mov    %ebx,%edx
 8293be7:	eb 00                	jmp    8293be9 <_ZN12CGameManagerC1Ev+0xb27>
 8293be9:	89 d3                	mov    %edx,%ebx
 8293beb:	89 c6                	mov    %eax,%esi
 8293bed:	8b 45 08             	mov    0x8(%ebp),%eax
 8293bf0:	05 cc 01 00 00       	add    $0x1cc,%eax
 8293bf5:	89 04 24             	mov    %eax,(%esp)
 8293bf8:	e8 2d bc 01 00       	call   82af82a <_ZN10StaticPoolIN10QuickParty11CQuickPartyELi300EED1Ev>
 8293bfd:	89 f0                	mov    %esi,%eax
 8293bff:	89 da                	mov    %ebx,%edx
 8293c01:	eb 00                	jmp    8293c03 <_ZN12CGameManagerC1Ev+0xb41>
 8293c03:	89 d3                	mov    %edx,%ebx
 8293c05:	89 c6                	mov    %eax,%esi
 8293c07:	8b 45 08             	mov    0x8(%ebp),%eax
 8293c0a:	05 9c 01 00 00       	add    $0x19c,%eax
 8293c0f:	89 04 24             	mov    %eax,(%esp)
 8293c12:	e8 b3 b9 01 00       	call   82af5ca <_ZN10StaticPoolIN12advancealtar12StageControlELi600EED1Ev>
 8293c17:	89 f0                	mov    %esi,%eax
 8293c19:	89 da                	mov    %ebx,%edx
 8293c1b:	eb 00                	jmp    8293c1d <_ZN12CGameManagerC1Ev+0xb5b>
 8293c1d:	89 d3                	mov    %edx,%ebx
 8293c1f:	89 c6                	mov    %eax,%esi
 8293c21:	8b 45 08             	mov    0x8(%ebp),%eax
 8293c24:	05 6c 01 00 00       	add    $0x16c,%eax
 8293c29:	89 04 24             	mov    %eax,(%esp)
 8293c2c:	e8 3b b7 01 00       	call   82af36c <_ZN10StaticPoolIN8WongWork10CBossTowerELi600EED1Ev>
 8293c31:	89 f0                	mov    %esi,%eax
 8293c33:	89 da                	mov    %ebx,%edx
 8293c35:	eb 00                	jmp    8293c37 <_ZN12CGameManagerC1Ev+0xb75>
 8293c37:	89 d3                	mov    %edx,%ebx
 8293c39:	89 c6                	mov    %eax,%esi
 8293c3b:	8b 45 08             	mov    0x8(%ebp),%eax
 8293c3e:	05 3c 01 00 00       	add    $0x13c,%eax
 8293c43:	89 04 24             	mov    %eax,(%esp)
 8293c46:	e8 bb b4 01 00       	call   82af106 <_ZN10StaticPoolIN8WongWork11CDeathTowerELi600EED1Ev>
 8293c4b:	89 f0                	mov    %esi,%eax
 8293c4d:	89 da                	mov    %ebx,%edx
 8293c4f:	eb 00                	jmp    8293c51 <_ZN12CGameManagerC1Ev+0xb8f>
 8293c51:	89 d3                	mov    %edx,%ebx
 8293c53:	89 c6                	mov    %eax,%esi
 8293c55:	8b 45 08             	mov    0x8(%ebp),%eax
 8293c58:	05 0c 01 00 00       	add    $0x10c,%eax
 8293c5d:	89 04 24             	mov    %eax,(%esp)
 8293c60:	e8 3b b2 01 00       	call   82aeea0 <_ZN10StaticPoolI7WarRoomLi40EED1Ev>
 8293c65:	89 f0                	mov    %esi,%eax
 8293c67:	89 da                	mov    %ebx,%edx
 8293c69:	eb 00                	jmp    8293c6b <_ZN12CGameManagerC1Ev+0xba9>
 8293c6b:	89 d3                	mov    %edx,%ebx
 8293c6d:	89 c6                	mov    %eax,%esi
 8293c6f:	8b 45 08             	mov    0x8(%ebp),%eax
 8293c72:	05 dc 00 00 00       	add    $0xdc,%eax
 8293c77:	89 04 24             	mov    %eax,(%esp)
 8293c7a:	e8 b7 af 01 00       	call   82aec36 <_ZN10StaticPoolI8PvP_RoomLi600EED1Ev>
 8293c7f:	89 f0                	mov    %esi,%eax
 8293c81:	89 da                	mov    %ebx,%edx
 8293c83:	eb 00                	jmp    8293c85 <_ZN12CGameManagerC1Ev+0xbc3>
 8293c85:	89 d3                	mov    %edx,%ebx
 8293c87:	89 c6                	mov    %eax,%esi
 8293c89:	8b 45 08             	mov    0x8(%ebp),%eax
 8293c8c:	05 ac 00 00 00       	add    $0xac,%eax
 8293c91:	89 04 24             	mov    %eax,(%esp)
 8293c94:	e8 3f ad 01 00       	call   82ae9d8 <_ZN10StaticPoolI6CPartyLi600EED1Ev>
 8293c99:	89 f0                	mov    %esi,%eax
 8293c9b:	89 da                	mov    %ebx,%edx
 8293c9d:	eb 00                	jmp    8293c9f <_ZN12CGameManagerC1Ev+0xbdd>
 8293c9f:	89 d3                	mov    %edx,%ebx
 8293ca1:	89 c6                	mov    %eax,%esi
 8293ca3:	8b 45 08             	mov    0x8(%ebp),%eax
 8293ca6:	83 c0 7c             	add    $0x7c,%eax
 8293ca9:	89 04 24             	mov    %eax,(%esp)
 8293cac:	e8 eb aa 01 00       	call   82ae79c <_ZN10StaticPoolI11CTradeSpaceLi300EED1Ev>
 8293cb1:	89 f0                	mov    %esi,%eax
 8293cb3:	89 da                	mov    %ebx,%edx
 8293cb5:	eb 00                	jmp    8293cb7 <_ZN12CGameManagerC1Ev+0xbf5>
 8293cb7:	89 d3                	mov    %edx,%ebx
 8293cb9:	89 c6                	mov    %eax,%esi
 8293cbb:	8b 45 08             	mov    0x8(%ebp),%eax
 8293cbe:	83 c0 4c             	add    $0x4c,%eax
 8293cc1:	89 04 24             	mov    %eax,(%esp)
 8293cc4:	e8 75 a8 01 00       	call   82ae53e <_ZN10StaticPoolI5CUserLi600EED1Ev>
 8293cc9:	89 f0                	mov    %esi,%eax
 8293ccb:	89 da                	mov    %ebx,%edx
 8293ccd:	eb 00                	jmp    8293ccf <_ZN12CGameManagerC1Ev+0xc0d>
 8293ccf:	89 d3                	mov    %edx,%ebx
 8293cd1:	89 c6                	mov    %eax,%esi
 8293cd3:	8b 45 08             	mov    0x8(%ebp),%eax
 8293cd6:	83 c0 34             	add    $0x34,%eax
 8293cd9:	89 04 24             	mov    %eax,(%esp)
 8293cdc:	e8 55 6a 01 00       	call   82aa736 <_ZNSt3setISsSt4lessISsESaISsEED1Ev>
 8293ce1:	89 f0                	mov    %esi,%eax
 8293ce3:	89 da                	mov    %ebx,%edx
 8293ce5:	eb 00                	jmp    8293ce7 <_ZN12CGameManagerC1Ev+0xc25>
 8293ce7:	89 d3                	mov    %edx,%ebx
 8293ce9:	89 c6                	mov    %eax,%esi
 8293ceb:	8b 45 08             	mov    0x8(%ebp),%eax
 8293cee:	83 c0 1c             	add    $0x1c,%eax
 8293cf1:	89 04 24             	mov    %eax,(%esp)
 8293cf4:	e8 3d 6a 01 00       	call   82aa736 <_ZNSt3setISsSt4lessISsESaISsEED1Ev>
 8293cf9:	89 f0                	mov    %esi,%eax
 8293cfb:	89 da                	mov    %ebx,%edx
 8293cfd:	eb 00                	jmp    8293cff <_ZN12CGameManagerC1Ev+0xc3d>
 8293cff:	89 d3                	mov    %edx,%ebx
 8293d01:	89 c6                	mov    %eax,%esi
 8293d03:	8b 45 08             	mov    0x8(%ebp),%eax
 8293d06:	89 04 24             	mov    %eax,(%esp)
 8293d09:	e8 20 77 e3 ff       	call   80cb42e <_ZN5MutexD1Ev>
 8293d0e:	89 f0                	mov    %esi,%eax
 8293d10:	89 da                	mov    %ebx,%edx
 8293d12:	89 04 24             	mov    %eax,(%esp)
 8293d15:	e8 36 fa 84 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// CGameManager::CGameManager @ 0x82930c2

/* CGameManager::CGameManager() */

void __thiscall CGameManager::CGameManager(CGameManager *this)

{
  string local_ec [2];
  string local_e4 [7];
  allocator<char> local_dd;
  string local_dc [2];
  string local_d4 [7];
  allocator<char> local_cd;
  string local_cc [2];
  string local_c4 [7];
  allocator<char> local_bd;
  string local_bc [2];
  string local_b4 [7];
  allocator<char> local_ad;
  string local_ac [2];
  string local_a4 [7];
  allocator<char> local_9d;
  string local_9c [2];
  string local_94 [7];
  allocator<char> local_8d;
  string local_8c [2];
  string local_84 [7];
  allocator<char> local_7d;
  string local_7c [2];
  string local_74 [7];
  allocator<char> local_6d;
  string local_6c [2];
  string local_64 [7];
  allocator<char> local_5d;
  string local_5c [2];
  string local_54 [7];
  allocator<char> local_4d;
  string local_4c [2];
  string local_44 [7];
  allocator<char> local_3d;
  string local_3c [2];
  string local_34 [7];
  allocator<char> local_2d;
  string local_2c [2];
  string local_24 [7];
  allocator<char> local_1d;
  string local_1c [2];
  string local_14 [7];
  allocator<char> local_d;
  
  Mutex::Mutex((Mutex *)this);
                    /* try { // try from 082930e1 to 082930e5 has its CatchHandler @ 08293cff */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x1c));
                    /* try { // try from 082930ef to 082930f3 has its CatchHandler @ 08293ce7 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x34));
                    /* try { // try from 082930fd to 08293101 has its CatchHandler @ 08293ccf */
  StaticPool<CUser,600>::StaticPool((StaticPool<CUser,600> *)(this + 0x4c));
                    /* try { // try from 0829310b to 0829310f has its CatchHandler @ 08293cb7 */
  StaticPool<CTradeSpace,300>::StaticPool((StaticPool<CTradeSpace,300> *)(this + 0x7c));
                    /* try { // try from 0829311b to 0829311f has its CatchHandler @ 08293c9f */
  StaticPool<CParty,600>::StaticPool((StaticPool<CParty,600> *)(this + 0xac));
                    /* try { // try from 0829312b to 0829312f has its CatchHandler @ 08293c85 */
  StaticPool<PvP_Room,600>::StaticPool((StaticPool<PvP_Room,600> *)(this + 0xdc));
                    /* try { // try from 0829313b to 0829313f has its CatchHandler @ 08293c6b */
  StaticPool<WarRoom,40>::StaticPool((StaticPool<WarRoom,40> *)(this + 0x10c));
                    /* try { // try from 0829314b to 0829314f has its CatchHandler @ 08293c51 */
  StaticPool<WongWork::CDeathTower,600>::StaticPool
            ((StaticPool<WongWork::CDeathTower,600> *)(this + 0x13c));
                    /* try { // try from 0829315b to 0829315f has its CatchHandler @ 08293c37 */
  StaticPool<WongWork::CBossTower,600>::StaticPool
            ((StaticPool<WongWork::CBossTower,600> *)(this + 0x16c));
                    /* try { // try from 0829316b to 0829316f has its CatchHandler @ 08293c1d */
  StaticPool<advancealtar::StageControl,600>::StaticPool
            ((StaticPool<advancealtar::StageControl,600> *)(this + 0x19c));
                    /* try { // try from 0829317b to 0829317f has its CatchHandler @ 08293c03 */
  StaticPool<QuickParty::CQuickParty,300>::StaticPool
            ((StaticPool<QuickParty::CQuickParty,300> *)(this + 0x1cc));
                    /* try { // try from 0829318b to 0829318f has its CatchHandler @ 08293be9 */
  StaticPool<BlueMarble,300>::StaticPool((StaticPool<BlueMarble,300> *)(this + 0x1fc));
                    /* try { // try from 0829319b to 0829319f has its CatchHandler @ 08293bcf */
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::map((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
         *)(this + 0x22c));
                    /* try { // try from 082931ab to 082931af has its CatchHandler @ 08293bb5 */
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::map((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
         *)(this + 0x244));
                    /* try { // try from 082931bb to 082931bf has its CatchHandler @ 08293b9b */
  __gnu_cxx::
  hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::
  hash_map((hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
            *)(this + 0x25c));
                    /* try { // try from 082931cb to 082931cf has its CatchHandler @ 08293b81 */
  __gnu_cxx::hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>::
  hash_map((hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>> *)
           (this + 0x270));
                    /* try { // try from 082931db to 082931df has its CatchHandler @ 08293b67 */
  __gnu_cxx::hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  ::hash_map((hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
              *)(this + 0x284));
                    /* try { // try from 082931eb to 082931ef has its CatchHandler @ 08293b4d */
  __gnu_cxx::
  hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
  ::hash_map((hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
              *)(this + 0x298));
                    /* try { // try from 082931fb to 082931ff has its CatchHandler @ 08293b33 */
  __gnu_cxx::
  hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
  ::hash_map((hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
              *)(this + 0x2ac));
                    /* try { // try from 0829320b to 0829320f has its CatchHandler @ 08293b19 */
  __gnu_cxx::
  hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  ::hash_map((hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
              *)(this + 0x2c0));
                    /* try { // try from 0829321b to 0829321f has its CatchHandler @ 08293aff */
  __gnu_cxx::
  hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
  ::hash_map((hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
              *)(this + 0x2d4));
                    /* try { // try from 0829322b to 0829322f has its CatchHandler @ 08293ae5 */
  __gnu_cxx::
  hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>::
  hash_map((hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
            *)(this + 0x2e8));
  *(undefined2 *)(this + 0x18) = 0;
  std::allocator<char>::allocator();
                    /* try { // try from 08293262 to 08293266 has its CatchHandler @ 082932b4 */
  std::string::string(local_e4,"testman820",(allocator *)&local_dd);
                    /* try { // try from 08293284 to 08293288 has its CatchHandler @ 0829329c */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_ec);
                    /* try { // try from 08293295 to 08293299 has its CatchHandler @ 082932b4 */
  std::string::~string(local_e4);
  std::allocator<char>::~allocator(&local_dd);
  std::allocator<char>::allocator();
                    /* try { // try from 08293306 to 0829330a has its CatchHandler @ 08293358 */
  std::string::string(local_d4,"htilil",(allocator *)&local_cd);
                    /* try { // try from 08293328 to 0829332c has its CatchHandler @ 08293340 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_dc);
                    /* try { // try from 08293339 to 0829333d has its CatchHandler @ 08293358 */
  std::string::~string(local_d4);
  std::allocator<char>::~allocator(&local_cd);
  std::allocator<char>::allocator();
                    /* try { // try from 082933aa to 082933ae has its CatchHandler @ 082933fc */
  std::string::string(local_c4,"azzuman",(allocator *)&local_bd);
                    /* try { // try from 082933cc to 082933d0 has its CatchHandler @ 082933e4 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_cc);
                    /* try { // try from 082933dd to 082933e1 has its CatchHandler @ 082933fc */
  std::string::~string(local_c4);
  std::allocator<char>::~allocator(&local_bd);
  std::allocator<char>::allocator();
                    /* try { // try from 0829344e to 08293452 has its CatchHandler @ 082934a0 */
  std::string::string(local_b4,"cuwaki",(allocator *)&local_ad);
                    /* try { // try from 08293470 to 08293474 has its CatchHandler @ 08293488 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_bc);
                    /* try { // try from 08293481 to 08293485 has its CatchHandler @ 082934a0 */
  std::string::~string(local_b4);
  std::allocator<char>::~allocator(&local_ad);
  std::allocator<char>::allocator();
                    /* try { // try from 082934f2 to 082934f6 has its CatchHandler @ 08293544 */
  std::string::string(local_a4,"slainer",(allocator *)&local_9d);
                    /* try { // try from 08293514 to 08293518 has its CatchHandler @ 0829352c */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_ac);
                    /* try { // try from 08293525 to 08293529 has its CatchHandler @ 08293544 */
  std::string::~string(local_a4);
  std::allocator<char>::~allocator(&local_9d);
  std::allocator<char>::allocator();
                    /* try { // try from 08293596 to 0829359a has its CatchHandler @ 082935e8 */
  std::string::string(local_94,"mrsbscom",(allocator *)&local_8d);
                    /* try { // try from 082935b8 to 082935bc has its CatchHandler @ 082935d0 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_9c);
                    /* try { // try from 082935c9 to 082935cd has its CatchHandler @ 082935e8 */
  std::string::~string(local_94);
  std::allocator<char>::~allocator(&local_8d);
  std::allocator<char>::allocator();
                    /* try { // try from 08293631 to 08293635 has its CatchHandler @ 0829367a */
  std::string::string(local_84,"arandra",(allocator *)&local_7d);
                    /* try { // try from 08293650 to 08293654 has its CatchHandler @ 08293665 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_8c);
                    /* try { // try from 0829365e to 08293662 has its CatchHandler @ 0829367a */
  std::string::~string(local_84);
  std::allocator<char>::~allocator(&local_7d);
  std::allocator<char>::allocator();
                    /* try { // try from 082936bd to 082936c1 has its CatchHandler @ 08293703 */
  std::string::string(local_74,"krucef",(allocator *)&local_6d);
                    /* try { // try from 082936d9 to 082936dd has its CatchHandler @ 082936ee */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_7c);
                    /* try { // try from 082936e7 to 082936eb has its CatchHandler @ 08293703 */
  std::string::~string(local_74);
  std::allocator<char>::~allocator(&local_6d);
  std::allocator<char>::allocator();
                    /* try { // try from 08293746 to 0829374a has its CatchHandler @ 0829378c */
  std::string::string(local_64,"dnftest126",(allocator *)&local_5d);
                    /* try { // try from 08293762 to 08293766 has its CatchHandler @ 08293777 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_6c);
                    /* try { // try from 08293770 to 08293774 has its CatchHandler @ 0829378c */
  std::string::~string(local_64);
  std::allocator<char>::~allocator(&local_5d);
  std::allocator<char>::allocator();
                    /* try { // try from 082937cf to 082937d3 has its CatchHandler @ 08293815 */
  std::string::string(local_54,"dnftest127",(allocator *)&local_4d);
                    /* try { // try from 082937eb to 082937ef has its CatchHandler @ 08293800 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_5c);
                    /* try { // try from 082937f9 to 082937fd has its CatchHandler @ 08293815 */
  std::string::~string(local_54);
  std::allocator<char>::~allocator(&local_4d);
  std::allocator<char>::allocator();
                    /* try { // try from 08293858 to 0829385c has its CatchHandler @ 0829389e */
  std::string::string(local_44,"dnftest128",(allocator *)&local_3d);
                    /* try { // try from 08293874 to 08293878 has its CatchHandler @ 08293889 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_4c);
                    /* try { // try from 08293882 to 08293886 has its CatchHandler @ 0829389e */
  std::string::~string(local_44);
  std::allocator<char>::~allocator(&local_3d);
  std::allocator<char>::allocator();
                    /* try { // try from 082938e1 to 082938e5 has its CatchHandler @ 08293927 */
  std::string::string(local_34,"59.10.138.244",(allocator *)&local_2d);
                    /* try { // try from 082938fd to 08293901 has its CatchHandler @ 08293912 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_3c);
                    /* try { // try from 0829390b to 0829390f has its CatchHandler @ 08293927 */
  std::string::~string(local_34);
  std::allocator<char>::~allocator(&local_2d);
  std::allocator<char>::allocator();
                    /* try { // try from 0829396a to 0829396e has its CatchHandler @ 082939b0 */
  std::string::string(local_24,"218.145.141.85",(allocator *)&local_1d);
                    /* try { // try from 08293986 to 0829398a has its CatchHandler @ 0829399b */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_2c);
                    /* try { // try from 08293994 to 08293998 has its CatchHandler @ 082939b0 */
  std::string::~string(local_24);
  std::allocator<char>::~allocator(&local_1d);
  std::allocator<char>::allocator();
                    /* try { // try from 082939f3 to 082939f7 has its CatchHandler @ 08293a39 */
  std::string::string(local_14,"121.134.32.42",(allocator *)&local_d);
                    /* try { // try from 08293a0f to 08293a13 has its CatchHandler @ 08293a24 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(local_1c);
                    /* try { // try from 08293a1d to 08293a21 has its CatchHandler @ 08293a39 */
  std::string::~string(local_14);
  std::allocator<char>::~allocator(&local_d);
  *(undefined4 *)(this + 0x2fc) = 0;
  *(undefined4 *)(this + 0x300) = 0;
  *(undefined4 *)(this + 0x304) = 0;
  *(undefined4 *)(this + 0x308) = 0;
  *(undefined4 *)(this + 0x30c) = 0;
  *(undefined4 *)(this + 0x310) = 0;
  *(undefined4 *)(this + 0x314) = 0;
  *(undefined4 *)(this + 0x318) = 0;
  return;
}

```

---

## CheckOutParty

```asm
// === 08297c76 CGameManager::CheckOutParty  [0x08297c76-0x8297df7] ===
 8297c76:	55                   	push   %ebp
 8297c77:	89 e5                	mov    %esp,%ebp
 8297c79:	83 ec 38             	sub    $0x38,%esp
 8297c7c:	8b 45 10             	mov    0x10(%ebp),%eax
 8297c7f:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8297c82:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297c85:	89 04 24             	mov    %eax,(%esp)
 8297c88:	e8 87 26 e4 ff       	call   80da314 <_ZN5CUser12CheckInPartyEv>
 8297c8d:	83 f0 01             	xor    $0x1,%eax
 8297c90:	84 c0                	test   %al,%al
 8297c92:	0f 85 59 01 00 00    	jne    8297df1 <_ZN12CGameManager13CheckOutPartyEP5CUserb+0x17b>
 8297c98:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297c9b:	89 04 24             	mov    %eax,(%esp)
 8297c9e:	e8 ab 81 f9 ff       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 8297ca3:	98                   	cwtl
 8297ca4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8297ca8:	8b 45 08             	mov    0x8(%ebp),%eax
 8297cab:	89 04 24             	mov    %eax,(%esp)
 8297cae:	e8 7f d2 ff ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8297cb3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8297cb6:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8297cba:	0f 84 34 01 00 00    	je     8297df4 <_ZN12CGameManager13CheckOutPartyEP5CUserb+0x17e>
 8297cc0:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 8297cc4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8297cc7:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 8297ccd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8297cd0:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8297cd4:	74 25                	je     8297cfb <_ZN12CGameManager13CheckOutPartyEP5CUserb+0x85>
 8297cd6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8297cd9:	0f b6 80 9f 08 00 00 	movzbl 0x89f(%eax),%eax
 8297ce0:	84 c0                	test   %al,%al
 8297ce2:	7e 04                	jle    8297ce8 <_ZN12CGameManager13CheckOutPartyEP5CUserb+0x72>
 8297ce4:	c6 45 ef 01          	movb   $0x1,-0x11(%ebp)
 8297ce8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8297ceb:	89 04 24             	mov    %eax,(%esp)
 8297cee:	e8 07 38 f9 ff       	call   822b4fa <_ZNK8CDungeon23isTowerOfDespairDungeonEv>
 8297cf3:	84 c0                	test   %al,%al
 8297cf5:	74 04                	je     8297cfb <_ZN12CGameManager13CheckOutPartyEP5CUserb+0x85>
 8297cf7:	c6 45 ef 01          	movb   $0x1,-0x11(%ebp)
 8297cfb:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8297cff:	74 40                	je     8297d41 <_ZN12CGameManager13CheckOutPartyEP5CUserb+0xcb>
 8297d01:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8297d04:	89 04 24             	mov    %eax,(%esp)
 8297d07:	e8 2c 3c fd ff       	call   826b938 <_ZNK8CDungeon22get_dimension_possibleEv>
 8297d0c:	84 c0                	test   %al,%al
 8297d0e:	7f 1d                	jg     8297d2d <_ZN12CGameManager13CheckOutPartyEP5CUserb+0xb7>
 8297d10:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8297d13:	0f b6 80 9c 08 00 00 	movzbl 0x89c(%eax),%eax
 8297d1a:	84 c0                	test   %al,%al
 8297d1c:	75 0f                	jne    8297d2d <_ZN12CGameManager13CheckOutPartyEP5CUserb+0xb7>
 8297d1e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8297d21:	89 04 24             	mov    %eax,(%esp)
 8297d24:	e8 e1 d4 0c 00       	call   836520a <_ZNK8CDungeon19isTournamentDungeonEv>
 8297d29:	84 c0                	test   %al,%al
 8297d2b:	74 07                	je     8297d34 <_ZN12CGameManager13CheckOutPartyEP5CUserb+0xbe>
 8297d2d:	b8 01 00 00 00       	mov    $0x1,%eax
 8297d32:	eb 05                	jmp    8297d39 <_ZN12CGameManager13CheckOutPartyEP5CUserb+0xc3>
 8297d34:	b8 00 00 00 00       	mov    $0x0,%eax
 8297d39:	84 c0                	test   %al,%al
 8297d3b:	74 04                	je     8297d41 <_ZN12CGameManager13CheckOutPartyEP5CUserb+0xcb>
 8297d3d:	c6 45 ef 01          	movb   $0x1,-0x11(%ebp)
 8297d41:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8297d44:	05 7c 0c 00 00       	add    $0xc7c,%eax
 8297d49:	c7 44 24 04 c0 b4 c1 	movl   $0x8c1b4c0,0x4(%esp)
 8297d50:	08 
 8297d51:	89 04 24             	mov    %eax,(%esp)
 8297d54:	e8 d9 6f 06 00       	call   82fed32 <_ZN19CDungeonClearTracer5TraceEPKc>
 8297d59:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8297d5c:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 8297d62:	83 f8 01             	cmp    $0x1,%eax
 8297d65:	74 6e                	je     8297dd5 <_ZN12CGameManager13CheckOutPartyEP5CUserb+0x15f>
 8297d67:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8297d6a:	89 04 24             	mov    %eax,(%esp)
 8297d6d:	e8 c8 5a f9 ff       	call   822d83a <_ZN6CParty9get_stateEv>
 8297d72:	3c 02                	cmp    $0x2,%al
 8297d74:	0f 94 c0             	sete   %al
 8297d77:	84 c0                	test   %al,%al
 8297d79:	74 5a                	je     8297dd5 <_ZN12CGameManager13CheckOutPartyEP5CUserb+0x15f>
 8297d7b:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
 8297d7f:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8297d83:	74 12                	je     8297d97 <_ZN12CGameManager13CheckOutPartyEP5CUserb+0x121>
 8297d85:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8297d88:	0f b6 80 5c 08 00 00 	movzbl 0x85c(%eax),%eax
 8297d8f:	84 c0                	test   %al,%al
 8297d91:	74 04                	je     8297d97 <_ZN12CGameManager13CheckOutPartyEP5CUserb+0x121>
 8297d93:	c6 45 f6 01          	movb   $0x1,-0xa(%ebp)
 8297d97:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8297d9b:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8297d9f:	74 12                	je     8297db3 <_ZN12CGameManager13CheckOutPartyEP5CUserb+0x13d>
 8297da1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8297da4:	0f b6 80 7a 08 00 00 	movzbl 0x87a(%eax),%eax
 8297dab:	84 c0                	test   %al,%al
 8297dad:	74 04                	je     8297db3 <_ZN12CGameManager13CheckOutPartyEP5CUserb+0x13d>
 8297daf:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 8297db3:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8297db7:	83 f0 01             	xor    $0x1,%eax
 8297dba:	84 c0                	test   %al,%al
 8297dbc:	74 17                	je     8297dd5 <_ZN12CGameManager13CheckOutPartyEP5CUserb+0x15f>
 8297dbe:	80 7d f6 00          	cmpb   $0x0,-0xa(%ebp)
 8297dc2:	74 11                	je     8297dd5 <_ZN12CGameManager13CheckOutPartyEP5CUserb+0x15f>
 8297dc4:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 8297dc8:	74 0b                	je     8297dd5 <_ZN12CGameManager13CheckOutPartyEP5CUserb+0x15f>
 8297dca:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297dcd:	89 04 24             	mov    %eax,(%esp)
 8297dd0:	e8 e9 08 3e 00       	call   86786be <_ZN5CUser14giveup_panaltyEv>
 8297dd5:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8297ddc:	00 
 8297ddd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297de0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8297de4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8297de7:	89 04 24             	mov    %eax,(%esp)
 8297dea:	e8 25 43 30 00       	call   859c114 <_ZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPE>
 8297def:	eb 04                	jmp    8297df5 <_ZN12CGameManager13CheckOutPartyEP5CUserb+0x17f>
 8297df1:	90                   	nop
 8297df2:	eb 01                	jmp    8297df5 <_ZN12CGameManager13CheckOutPartyEP5CUserb+0x17f>
 8297df4:	90                   	nop
 8297df5:	c9                   	leave
 8297df6:	c3                   	ret
 8297df7:	90                   	nop

```

```c
// CGameManager::CheckOutParty @ 0x8297c76

/* CGameManager::CheckOutParty(CUser*, bool) */

void CGameManager::CheckOutParty(CUser *param_1,bool param_2)

{
  CDungeon *this;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  CParty *this_00;
  undefined3 in_stack_00000009;
  
  cVar4 = CUser::CheckInParty(_param_2);
  if (cVar4 == '\x01') {
    CUser::GetPartyIndex(_param_2);
    this_00 = (CParty *)GetParty((int)param_1);
    if (this_00 != (CParty *)0x0) {
      bVar1 = false;
      this = *(CDungeon **)(this_00 + 0xcac);
      if (this != (CDungeon *)0x0) {
        bVar1 = '\0' < (char)this[0x89f];
        cVar4 = CDungeon::isTowerOfDespairDungeon(this);
        if (cVar4 != '\0') {
          bVar1 = true;
        }
      }
      if (this != (CDungeon *)0x0) {
        cVar4 = CDungeon::get_dimension_possible(this);
        if (((cVar4 < '\x01') && (this[0x89c] == (CDungeon)0x0)) &&
           (cVar4 = CDungeon::isTournamentDungeon(this), cVar4 == '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          bVar1 = true;
        }
      }
      CDungeonClearTracer::Trace
                ((CDungeonClearTracer *)(this_00 + 0xc7c),
                 "void CGameManager::CheckOutParty(CUser*, bool)");
      if ((*(int *)(this_00 + 0xcd8) != 1) && (cVar4 = CParty::get_state(this_00), cVar4 == '\x02'))
      {
        bVar2 = false;
        if ((this != (CDungeon *)0x0) && (this[0x85c] != (CDungeon)0x0)) {
          bVar2 = true;
        }
        bVar3 = false;
        if ((this != (CDungeon *)0x0) && (this[0x87a] != (CDungeon)0x0)) {
          bVar3 = true;
        }
        if (((!bVar1) && (bVar2)) && (bVar3)) {
          CUser::giveup_panalty(_param_2);
        }
      }
      CParty::leave_user(this_00,_param_2,2);
    }
  }
  return;
}

```

---

## CheckOutPvp

```asm
// === 08297eaa CGameManager::CheckOutPvp  [0x08297eaa-0x82981a3] ===
 8297eaa:	55                   	push   %ebp
 8297eab:	89 e5                	mov    %esp,%ebp
 8297ead:	57                   	push   %edi
 8297eae:	56                   	push   %esi
 8297eaf:	53                   	push   %ebx
 8297eb0:	83 ec 6c             	sub    $0x6c,%esp
 8297eb3:	8b 45 10             	mov    0x10(%ebp),%eax
 8297eb6:	88 45 b4             	mov    %al,-0x4c(%ebp)
 8297eb9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297ebc:	89 04 24             	mov    %eax,(%esp)
 8297ebf:	e8 9a 7f f9 ff       	call   822fe5e <_ZN5CUser10CheckInPvpEv>
 8297ec4:	83 f0 01             	xor    $0x1,%eax
 8297ec7:	84 c0                	test   %al,%al
 8297ec9:	0f 85 c8 02 00 00    	jne    8298197 <_ZN12CGameManager11CheckOutPvpEP5CUserb+0x2ed>
 8297ecf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297ed2:	89 04 24             	mov    %eax,(%esp)
 8297ed5:	e8 9a 7f f9 ff       	call   822fe74 <_ZN5CUser11GetPvpIndexEv>
 8297eda:	98                   	cwtl
 8297edb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8297ee2:	00 
 8297ee3:	8b 55 0c             	mov    0xc(%ebp),%edx
 8297ee6:	89 54 24 08          	mov    %edx,0x8(%esp)
 8297eea:	89 44 24 04          	mov    %eax,0x4(%esp)
 8297eee:	8b 45 08             	mov    0x8(%ebp),%eax
 8297ef1:	89 04 24             	mov    %eax,(%esp)
 8297ef4:	e8 0d d3 ff ff       	call   8295206 <_ZN12CGameManager6GetPvpEiP5CUseri>
 8297ef9:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8297efc:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8297f00:	0f 84 94 02 00 00    	je     829819a <_ZN12CGameManager11CheckOutPvpEP5CUserb+0x2f0>
 8297f06:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8297f09:	89 04 24             	mov    %eax,(%esp)
 8297f0c:	e8 3b 5e 2f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8297f11:	c6 45 c3 00          	movb   $0x0,-0x3d(%ebp)
 8297f15:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 8297f18:	89 44 24 08          	mov    %eax,0x8(%esp)
 8297f1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297f1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8297f23:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8297f26:	89 04 24             	mov    %eax,(%esp)
 8297f29:	e8 3e 00 34 00       	call   85d7f6c <_ZN8PvP_Room10leave_roomEP5CUserRb>
 8297f2e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8297f31:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 8297f35:	0f b6 c0             	movzbl %al,%eax
 8297f38:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8297f3b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8297f3e:	89 04 24             	mov    %eax,(%esp)
 8297f41:	e8 86 5a f9 ff       	call   822d9cc <_ZN8PvP_Room19get_pvp_battle_modeEv>
 8297f46:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8297f49:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8297f4c:	89 04 24             	mov    %eax,(%esp)
 8297f4f:	e8 40 5a f9 ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 8297f54:	89 c7                	mov    %eax,%edi
 8297f56:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297f59:	89 04 24             	mov    %eax,(%esp)
 8297f5c:	e8 c7 90 e6 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8297f61:	89 c6                	mov    %eax,%esi
 8297f63:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297f66:	89 04 24             	mov    %eax,(%esp)
 8297f69:	e8 04 91 e6 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 8297f6e:	89 c3                	mov    %eax,%ebx
 8297f70:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8297f77:	00 
 8297f78:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8297f7f:	00 
 8297f80:	c7 44 24 08 a1 11 00 	movl   $0x11a1,0x8(%esp)
 8297f87:	00 
 8297f88:	c7 44 24 04 40 b4 c1 	movl   $0x8c1b440,0x4(%esp)
 8297f8f:	08 
 8297f90:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8297f93:	89 04 24             	mov    %eax,(%esp)
 8297f96:	e8 a1 7d 2b 00       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 8297f9b:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8297f9e:	89 44 24 18          	mov    %eax,0x18(%esp)
 8297fa2:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8297fa5:	89 44 24 14          	mov    %eax,0x14(%esp)
 8297fa9:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8297fad:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8297fb1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8297fb5:	c7 44 24 04 75 6f c1 	movl   $0x8c16f75,0x4(%esp)
 8297fbc:	08 
 8297fbd:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8297fc0:	89 04 24             	mov    %eax,(%esp)
 8297fc3:	e8 9c 7d 2b 00       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 8297fc8:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8297fcc:	0f 88 e1 00 00 00    	js     82980b3 <_ZN12CGameManager11CheckOutPvpEP5CUserb+0x209>
 8297fd2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8297fd5:	89 04 24             	mov    %eax,(%esp)
 8297fd8:	e8 09 39 e3 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8297fdd:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8297fe0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8297fe3:	89 54 24 08          	mov    %edx,0x8(%esp)
 8297fe7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8297feb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8297fee:	89 04 24             	mov    %eax,(%esp)
 8297ff1:	e8 ec 39 34 00       	call   85db9e2 <_ZN8PvP_Room14make_seat_infoEPci>
 8297ff6:	e8 ac 23 e4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8297ffb:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 8297ffe:	89 54 24 04          	mov    %edx,0x4(%esp)
 8298002:	89 04 24             	mov    %eax,(%esp)
 8298005:	e8 0a 0c 43 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 829800a:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 829800e:	84 c0                	test   %al,%al
 8298010:	74 31                	je     8298043 <_ZN12CGameManager11CheckOutPvpEP5CUserb+0x199>
 8298012:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8298015:	89 04 24             	mov    %eax,(%esp)
 8298018:	e8 c9 38 e3 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 829801d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8298020:	89 44 24 04          	mov    %eax,0x4(%esp)
 8298024:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8298027:	89 04 24             	mov    %eax,(%esp)
 829802a:	e8 0b 3d 34 00       	call   85dbd3a <_ZN8PvP_Room15make_state_infoEPc>
 829802f:	e8 73 23 e4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8298034:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 8298037:	89 54 24 04          	mov    %edx,0x4(%esp)
 829803b:	89 04 24             	mov    %eax,(%esp)
 829803e:	e8 d1 0b 43 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 8298043:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8298046:	89 04 24             	mov    %eax,(%esp)
 8298049:	e8 14 e8 33 00       	call   85d6862 <_ZNK8PvP_Room16get_waiter_countEv>
 829804e:	85 c0                	test   %eax,%eax
 8298050:	0f 94 c0             	sete   %al
 8298053:	84 c0                	test   %al,%al
 8298055:	0f 84 b4 00 00 00    	je     829810f <_ZN12CGameManager11CheckOutPvpEP5CUserb+0x265>
 829805b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8298062:	00 
 8298063:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8298066:	89 04 24             	mov    %eax,(%esp)
 8298069:	e8 62 01 34 00       	call   85d81d0 <_ZN8PvP_Room12destroy_roomEi>
 829806e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8298071:	89 44 24 04          	mov    %eax,0x4(%esp)
 8298075:	8b 45 08             	mov    0x8(%ebp),%eax
 8298078:	89 04 24             	mov    %eax,(%esp)
 829807b:	e8 c8 d2 ff ff       	call   8295348 <_ZN12CGameManager6PutPvpEP8PvP_Room>
 8298080:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8298083:	89 04 24             	mov    %eax,(%esp)
 8298086:	e8 5b 38 e3 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 829808b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 829808e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8298092:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8298095:	89 04 24             	mov    %eax,(%esp)
 8298098:	e8 9d 3c 34 00       	call   85dbd3a <_ZN8PvP_Room15make_state_infoEPc>
 829809d:	e8 05 23 e4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 82980a2:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 82980a5:	89 54 24 04          	mov    %edx,0x4(%esp)
 82980a9:	89 04 24             	mov    %eax,(%esp)
 82980ac:	e8 63 0b 43 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 82980b1:	eb 5c                	jmp    829810f <_ZN12CGameManager11CheckOutPvpEP5CUserb+0x265>
 82980b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 82980b6:	89 04 24             	mov    %eax,(%esp)
 82980b9:	e8 b0 22 e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 82980be:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82980c5:	00 
 82980c6:	89 04 24             	mov    %eax,(%esp)
 82980c9:	e8 7d 0f e7 ff       	call   810904b <_Z14NumberToStringji>
 82980ce:	89 c3                	mov    %eax,%ebx
 82980d0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82980d3:	89 04 24             	mov    %eax,(%esp)
 82980d6:	e8 b9 58 f9 ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 82980db:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 82980df:	89 44 24 14          	mov    %eax,0x14(%esp)
 82980e3:	c7 44 24 10 94 6f c1 	movl   $0x8c16f94,0x10(%esp)
 82980ea:	08 
 82980eb:	c7 44 24 0c bd 11 00 	movl   $0x11bd,0xc(%esp)
 82980f2:	00 
 82980f3:	c7 44 24 08 40 b4 c1 	movl   $0x8c1b440,0x8(%esp)
 82980fa:	08 
 82980fb:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 8298102:	08 
 8298103:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 829810a:	e8 fb ba 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 829810f:	0f b6 45 b4          	movzbl -0x4c(%ebp),%eax
 8298113:	83 f0 01             	xor    $0x1,%eax
 8298116:	84 c0                	test   %al,%al
 8298118:	74 70                	je     829818a <_ZN12CGameManager11CheckOutPvpEP5CUserb+0x2e0>
 829811a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 829811d:	89 04 24             	mov    %eax,(%esp)
 8298120:	e8 a7 41 34 00       	call   85dc2cc <_ZN8PvP_Room23get_recv_pvp_rank_countEv>
 8298125:	85 c0                	test   %eax,%eax
 8298127:	0f 9f c0             	setg   %al
 829812a:	84 c0                	test   %al,%al
 829812c:	74 5c                	je     829818a <_ZN12CGameManager11CheckOutPvpEP5CUserb+0x2e0>
 829812e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8298131:	89 04 24             	mov    %eax,(%esp)
 8298134:	e8 e9 c1 00 00       	call   82a4322 <_ZN8PvP_Room24IsInsertTimerRecvPvpRankEv>
 8298139:	83 f0 01             	xor    $0x1,%eax
 829813c:	84 c0                	test   %al,%al
 829813e:	74 19                	je     8298159 <_ZN12CGameManager11CheckOutPvpEP5CUserb+0x2af>
 8298140:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8298143:	89 04 24             	mov    %eax,(%esp)
 8298146:	e8 e7 c1 00 00       	call   82a4332 <_ZN8PvP_Room14IsEndPvpBattleEv>
 829814b:	83 f0 01             	xor    $0x1,%eax
 829814e:	84 c0                	test   %al,%al
 8298150:	74 07                	je     8298159 <_ZN12CGameManager11CheckOutPvpEP5CUserb+0x2af>
 8298152:	b8 01 00 00 00       	mov    $0x1,%eax
 8298157:	eb 05                	jmp    829815e <_ZN12CGameManager11CheckOutPvpEP5CUserb+0x2b4>
 8298159:	b8 00 00 00 00       	mov    $0x0,%eax
 829815e:	84 c0                	test   %al,%al
 8298160:	74 28                	je     829818a <_ZN12CGameManager11CheckOutPvpEP5CUserb+0x2e0>
 8298162:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8298165:	89 04 24             	mov    %eax,(%esp)
 8298168:	e8 09 43 34 00       	call   85dc476 <_ZN8PvP_Room12send_pvp_endEv>
 829816d:	eb 1b                	jmp    829818a <_ZN12CGameManager11CheckOutPvpEP5CUserb+0x2e0>
 829816f:	89 d3                	mov    %edx,%ebx
 8298171:	89 c6                	mov    %eax,%esi
 8298173:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8298176:	89 04 24             	mov    %eax,(%esp)
 8298179:	e8 02 5d 2f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 829817e:	89 f0                	mov    %esi,%eax
 8298180:	89 da                	mov    %ebx,%edx
 8298182:	89 04 24             	mov    %eax,(%esp)
 8298185:	e8 c6 b5 84 00       	call   8ae3750 <_Unwind_Resume>
 829818a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 829818d:	89 04 24             	mov    %eax,(%esp)
 8298190:	e8 eb 5c 2f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8298195:	eb 04                	jmp    829819b <_ZN12CGameManager11CheckOutPvpEP5CUserb+0x2f1>
 8298197:	90                   	nop
 8298198:	eb 01                	jmp    829819b <_ZN12CGameManager11CheckOutPvpEP5CUserb+0x2f1>
 829819a:	90                   	nop
 829819b:	83 c4 6c             	add    $0x6c,%esp
 829819e:	5b                   	pop    %ebx
 829819f:	5e                   	pop    %esi
 82981a0:	5f                   	pop    %edi
 82981a1:	5d                   	pop    %ebp
 82981a2:	c3                   	ret
 82981a3:	90                   	nop

```

```c
// CGameManager::CheckOutPvp @ 0x8297eaa

/* CGameManager::CheckOutPvp(CUser*, bool) */

void __thiscall CGameManager::CheckOutPvp(CGameManager *this,CUser *param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  GameWorld *pGVar9;
  int iVar10;
  bool local_41;
  PacketGuard local_40 [12];
  CSwitchLog local_34 [16];
  PvP_Room *local_24;
  int local_20;
  
  cVar2 = CUser::CheckInPvp(param_1);
  if (cVar2 == '\x01') {
    sVar3 = CUser::GetPvpIndex(param_1);
    local_24 = (PvP_Room *)GetPvp(this,(int)sVar3,param_1,0);
    if (local_24 != (PvP_Room *)0x0) {
      PacketGuard::PacketGuard(local_40);
      local_41 = false;
                    /* try { // try from 08297f29 to 0829816c has its CatchHandler @ 0829816f */
      local_20 = PvP_Room::leave_room(local_24,param_1,&local_41);
      uVar4 = (uint)local_41;
      uVar5 = PvP_Room::get_pvp_battle_mode(local_24);
      uVar6 = PvP_Room::get_index(local_24);
      uVar7 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      uVar8 = CUser::get_acc_name(param_1);
      CSwitchLog::CSwitchLog(local_34,"void CGameManager::CheckOutPvp(CUser*, bool)",0x11a1,0,0);
      CSwitchLog::operator()(local_34,"pvp@log %s,%s, room(%d),%d,%d",uVar8,uVar7,uVar6,uVar5,uVar4)
      ;
      if (local_20 < 0) {
        uVar4 = CUser::get_acc_id(param_1);
        uVar5 = NumberToString(uVar4,0);
        uVar6 = PvP_Room::get_index(local_24);
        LogManager::logFormat
                  (1,"App.cpp","void CGameManager::CheckOutPvp(CUser*, bool)",0x11bd,&DAT_08c16f94,
                   uVar6,uVar5);
      }
      else {
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_40);
        PvP_Room::make_seat_info(local_24,(char *)local_40,local_20);
        pGVar9 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar9,local_40);
        if (local_41 != false) {
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_40);
          PvP_Room::make_state_info(local_24,(char *)local_40);
          pGVar9 = (GameWorld *)G_GameWorld();
          GameWorld::send_all(pGVar9,local_40);
        }
        iVar10 = PvP_Room::get_waiter_count(local_24);
        if (iVar10 == 0) {
          PvP_Room::destroy_room(local_24,0);
          PutPvp(this,local_24);
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_40);
          PvP_Room::make_state_info(local_24,(char *)local_40);
          pGVar9 = (GameWorld *)G_GameWorld();
          GameWorld::send_all(pGVar9,local_40);
        }
      }
      if ((!param_2) && (iVar10 = PvP_Room::get_recv_pvp_rank_count(local_24), 0 < iVar10)) {
        cVar2 = PvP_Room::IsInsertTimerRecvPvpRank(local_24);
        if ((cVar2 == '\x01') || (cVar2 = PvP_Room::IsEndPvpBattle(local_24), cVar2 == '\x01')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          PvP_Room::send_pvp_end(local_24);
        }
      }
      PacketGuard::~PacketGuard(local_40);
    }
  }
  return;
}

```

---

## CheckOutQuickParty

```asm
// === 082983fc CGameManager::CheckOutQuickParty  [0x082983fc-0x8298449] ===
 82983fc:	55                   	push   %ebp
 82983fd:	89 e5                	mov    %esp,%ebp
 82983ff:	53                   	push   %ebx
 8298400:	83 ec 24             	sub    $0x24,%esp
 8298403:	8b 45 10             	mov    0x10(%ebp),%eax
 8298406:	88 45 f4             	mov    %al,-0xc(%ebp)
 8298409:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 829840d:	74 33                	je     8298442 <_ZN12CGameManager18CheckOutQuickPartyEP6CPartyb+0x46>
 829840f:	0f b6 5d f4          	movzbl -0xc(%ebp),%ebx
 8298413:	e8 76 3d e3 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8298418:	89 04 24             	mov    %eax,(%esp)
 829841b:	e8 a0 09 00 00       	call   8298dc0 <_ZN12CGameManager26GetQuickPartySystemManagerEv>
 8298420:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8298427:	00 
 8298428:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 829842c:	8b 55 0c             	mov    0xc(%ebp),%edx
 829842f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8298433:	89 04 24             	mov    %eax,(%esp)
 8298436:	e8 4b 1f fd ff       	call   826a386 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser>
 829843b:	83 f0 01             	xor    $0x1,%eax
 829843e:	84 c0                	test   %al,%al
 8298440:	eb 01                	jmp    8298443 <_ZN12CGameManager18CheckOutQuickPartyEP6CPartyb+0x47>
 8298442:	90                   	nop
 8298443:	83 c4 24             	add    $0x24,%esp
 8298446:	5b                   	pop    %ebx
 8298447:	5d                   	pop    %ebp
 8298448:	c3                   	ret
 8298449:	90                   	nop

```

```c
// CGameManager::CheckOutQuickParty @ 0x82983fc

/* CGameManager::CheckOutQuickParty(CParty*, bool) */

uint __thiscall CGameManager::CheckOutQuickParty(CGameManager *this,CParty *param_1,bool param_2)

{
  CGameManager *this_00;
  CQuickPartySystemManager *this_01;
  undefined3 in_stack_0000000d;
  
  if (param_1 != (CParty *)0x0) {
    this_00 = (CGameManager *)G_CGameManager();
    this_01 = (CQuickPartySystemManager *)GetQuickPartySystemManager(this_00);
    _param_2 = QuickParty::CQuickPartySystemManager::cancel_quick_party
                         (this_01,param_1,param_2,(CUser *)0x0);
    _param_2 = _param_2 ^ 1;
  }
  return _param_2;
}

```

---

## CheckOutTrade

```asm
// === 08297c14 CGameManager::CheckOutTrade  [0x08297c14-0x8297c75] ===
 8297c14:	55                   	push   %ebp
 8297c15:	89 e5                	mov    %esp,%ebp
 8297c17:	83 ec 28             	sub    $0x28,%esp
 8297c1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297c1d:	89 04 24             	mov    %eax,(%esp)
 8297c20:	e8 d9 26 e4 ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 8297c25:	83 f0 01             	xor    $0x1,%eax
 8297c28:	84 c0                	test   %al,%al
 8297c2a:	75 46                	jne    8297c72 <_ZN12CGameManager13CheckOutTradeEP5CUser+0x5e>
 8297c2c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297c2f:	89 04 24             	mov    %eax,(%esp)
 8297c32:	e8 07 82 f9 ff       	call   822fe3e <_ZN5CUser13GetTradeSpaceEv>
 8297c37:	8b 55 08             	mov    0x8(%ebp),%edx
 8297c3a:	83 c2 7c             	add    $0x7c,%edx
 8297c3d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8297c41:	89 14 24             	mov    %edx,(%esp)
 8297c44:	e8 a3 8f 01 00       	call   82b0bec <_ZN10StaticPoolI11CTradeSpaceLi300EE3GetEi>
 8297c49:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8297c4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297c4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8297c53:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8297c56:	89 04 24             	mov    %eax,(%esp)
 8297c59:	e8 28 74 29 00       	call   852f086 <_ZN11CTradeSpace19cancel_trade_by_disEP5CUser>
 8297c5e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8297c61:	89 44 24 04          	mov    %eax,0x4(%esp)
 8297c65:	8b 45 08             	mov    0x8(%ebp),%eax
 8297c68:	89 04 24             	mov    %eax,(%esp)
 8297c6b:	e8 6e d1 ff ff       	call   8294dde <_ZN12CGameManager13PutTradeSpaceEP11CTradeSpace>
 8297c70:	eb 01                	jmp    8297c73 <_ZN12CGameManager13CheckOutTradeEP5CUser+0x5f>
 8297c72:	90                   	nop
 8297c73:	c9                   	leave
 8297c74:	c3                   	ret
 8297c75:	90                   	nop

```

```c
// CGameManager::CheckOutTrade @ 0x8297c14

/* CGameManager::CheckOutTrade(CUser*) */

void __thiscall CGameManager::CheckOutTrade(CGameManager *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  CTradeSpace *this_00;
  
  cVar1 = CUser::CheckInTrade(param_1);
  if (cVar1 == '\x01') {
    iVar2 = CUser::GetTradeSpace(param_1);
    this_00 = (CTradeSpace *)
              StaticPool<CTradeSpace,300>::Get((StaticPool<CTradeSpace,300> *)(this + 0x7c),iVar2);
    CTradeSpace::cancel_trade_by_dis(this_00,param_1);
    PutTradeSpace(this,this_00);
  }
  return;
}

```

---

## CheckOutWarRoom

```asm
// === 08297df8 CGameManager::CheckOutWarRoom  [0x08297df8-0x8297ea9] ===
 8297df8:	55                   	push   %ebp
 8297df9:	89 e5                	mov    %esp,%ebp
 8297dfb:	83 ec 38             	sub    $0x38,%esp
 8297dfe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297e01:	89 04 24             	mov    %eax,(%esp)
 8297e04:	e8 9d e9 00 00       	call   82a67a6 <_ZN5CUser14CheckInWarRoomEv>
 8297e09:	83 f0 01             	xor    $0x1,%eax
 8297e0c:	84 c0                	test   %al,%al
 8297e0e:	0f 85 90 00 00 00    	jne    8297ea4 <_ZN12CGameManager15CheckOutWarRoomEP5CUser+0xac>
 8297e14:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297e17:	89 04 24             	mov    %eax,(%esp)
 8297e1a:	e8 65 80 f9 ff       	call   822fe84 <_ZN5CUser15GetWarRoomIndexEv>
 8297e1f:	98                   	cwtl
 8297e20:	89 44 24 04          	mov    %eax,0x4(%esp)
 8297e24:	8b 45 08             	mov    0x8(%ebp),%eax
 8297e27:	89 04 24             	mov    %eax,(%esp)
 8297e2a:	e8 a1 a7 00 00       	call   82a25d0 <_ZN12CGameManager10GetWarRoomEi>
 8297e2f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8297e32:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8297e36:	74 6f                	je     8297ea7 <_ZN12CGameManager15CheckOutWarRoomEP5CUser+0xaf>
 8297e38:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297e3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8297e3f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8297e42:	89 04 24             	mov    %eax,(%esp)
 8297e45:	e8 16 56 42 00       	call   86bd460 <_ZN7WarRoom11WalkOutUserEP5CUser>
 8297e4a:	83 f8 04             	cmp    $0x4,%eax
 8297e4d:	0f 94 c0             	sete   %al
 8297e50:	84 c0                	test   %al,%al
 8297e52:	74 43                	je     8297e97 <_ZN12CGameManager15CheckOutWarRoomEP5CUser+0x9f>
 8297e54:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8297e5b:	ff 
 8297e5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297e5f:	89 04 24             	mov    %eax,(%esp)
 8297e62:	e8 39 61 3b 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8297e67:	89 44 24 14          	mov    %eax,0x14(%esp)
 8297e6b:	c7 44 24 10 3c 6f c1 	movl   $0x8c16f3c,0x10(%esp)
 8297e72:	08 
 8297e73:	c7 44 24 0c 7b 11 00 	movl   $0x117b,0xc(%esp)
 8297e7a:	00 
 8297e7b:	c7 44 24 08 80 b4 c1 	movl   $0x8c1b480,0x8(%esp)
 8297e82:	08 
 8297e83:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 8297e8a:	08 
 8297e8b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8297e92:	e8 73 bd 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8297e97:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8297e9a:	89 04 24             	mov    %eax,(%esp)
 8297e9d:	e8 4a 55 42 00       	call   86bd3ec <_ZN7WarRoom10CheckStateEv>
 8297ea2:	eb 04                	jmp    8297ea8 <_ZN12CGameManager15CheckOutWarRoomEP5CUser+0xb0>
 8297ea4:	90                   	nop
 8297ea5:	eb 01                	jmp    8297ea8 <_ZN12CGameManager15CheckOutWarRoomEP5CUser+0xb0>
 8297ea7:	90                   	nop
 8297ea8:	c9                   	leave
 8297ea9:	c3                   	ret

```

```c
// CGameManager::CheckOutWarRoom @ 0x8297df8

/* CGameManager::CheckOutWarRoom(CUser*) */

void __thiscall CGameManager::CheckOutWarRoom(CGameManager *this,CUser *param_1)

{
  char cVar1;
  WarRoom *this_00;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = CUser::CheckInWarRoom(param_1);
  if (cVar1 == '\x01') {
    CUser::GetWarRoomIndex(param_1);
    this_00 = (WarRoom *)GetWarRoom((int)this);
    if (this_00 != (WarRoom *)0x0) {
      iVar2 = WarRoom::WalkOutUser(this_00,param_1);
      if (iVar2 == 4) {
        uVar3 = CUser::get_charac_no(param_1,-1);
        LogManager::logFormat
                  (1,"App.cpp","void CGameManager::CheckOutWarRoom(CUser*)",0x117b,
                   "CGameManager::CheckOutWarRoom Can\'t find user charno(%d)",uVar3);
      }
      WarRoom::CheckState(this_00);
    }
  }
  return;
}

```

---

## FindJoinableWarRoom

```asm
// === 082a32e2 CGameManager::FindJoinableWarRoom  [0x082a32e2-0x82a3395] ===
 82a32e2:	55                   	push   %ebp
 82a32e3:	89 e5                	mov    %esp,%ebp
 82a32e5:	83 ec 38             	sub    $0x38,%esp
 82a32e8:	8b 45 08             	mov    0x8(%ebp),%eax
 82a32eb:	8d 90 84 02 00 00    	lea    0x284(%eax),%edx
 82a32f1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82a32f4:	89 54 24 04          	mov    %edx,0x4(%esp)
 82a32f8:	89 04 24             	mov    %eax,(%esp)
 82a32fb:	e8 64 1b 01 00       	call   82b4e64 <_ZN9__gnu_cxx8hash_mapIiP7WarRoomNS_4hashIiEESt8equal_toIiESaIS2_EE5beginEv>
 82a3300:	83 ec 04             	sub    $0x4,%esp
 82a3303:	eb 54                	jmp    82a3359 <_ZN12CGameManager19FindJoinableWarRoomEP5CUser+0x77>
 82a3305:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82a3308:	89 04 24             	mov    %eax,(%esp)
 82a330b:	e8 ba 19 01 00       	call   82b4cca <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP7WarRoomEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 82a3310:	8b 40 04             	mov    0x4(%eax),%eax
 82a3313:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82a3316:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82a331a:	74 20                	je     82a333c <_ZN12CGameManager19FindJoinableWarRoomEP5CUser+0x5a>
 82a331c:	8b 45 0c             	mov    0xc(%ebp),%eax
 82a331f:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a3323:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a3326:	89 04 24             	mov    %eax,(%esp)
 82a3329:	e8 80 79 41 00       	call   86bacae <_ZN7WarRoom10IsJoinableEP5CUser>
 82a332e:	85 c0                	test   %eax,%eax
 82a3330:	0f 94 c0             	sete   %al
 82a3333:	84 c0                	test   %al,%al
 82a3335:	74 05                	je     82a333c <_ZN12CGameManager19FindJoinableWarRoomEP5CUser+0x5a>
 82a3337:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a333a:	eb 57                	jmp    82a3393 <_ZN12CGameManager19FindJoinableWarRoomEP5CUser+0xb1>
 82a333c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82a333f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82a3346:	00 
 82a3347:	8d 55 dc             	lea    -0x24(%ebp),%edx
 82a334a:	89 54 24 04          	mov    %edx,0x4(%esp)
 82a334e:	89 04 24             	mov    %eax,(%esp)
 82a3351:	e8 34 1b 01 00       	call   82b4e8a <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP7WarRoomEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEppEi>
 82a3356:	83 ec 04             	sub    $0x4,%esp
 82a3359:	8b 45 08             	mov    0x8(%ebp),%eax
 82a335c:	8d 90 84 02 00 00    	lea    0x284(%eax),%edx
 82a3362:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82a3365:	89 54 24 04          	mov    %edx,0x4(%esp)
 82a3369:	89 04 24             	mov    %eax,(%esp)
 82a336c:	e8 e1 18 01 00       	call   82b4c52 <_ZN9__gnu_cxx8hash_mapIiP7WarRoomNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 82a3371:	83 ec 04             	sub    $0x4,%esp
 82a3374:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82a3377:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a337b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82a337e:	89 04 24             	mov    %eax,(%esp)
 82a3381:	e8 58 19 01 00       	call   82b4cde <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP7WarRoomEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 82a3386:	84 c0                	test   %al,%al
 82a3388:	0f 85 77 ff ff ff    	jne    82a3305 <_ZN12CGameManager19FindJoinableWarRoomEP5CUser+0x23>
 82a338e:	b8 00 00 00 00       	mov    $0x0,%eax
 82a3393:	c9                   	leave
 82a3394:	c3                   	ret
 82a3395:	90                   	nop

```

```c
// CGameManager::FindJoinableWarRoom @ 0x82a32e2

/* CGameManager::FindJoinableWarRoom(CUser*) */

WarRoom * __thiscall CGameManager::FindJoinableWarRoom(CGameManager *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_28 [8];
  hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_20 [8];
  _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_18 [8];
  WarRoom *local_10;
  
  __gnu_cxx::hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  ::begin(local_28);
  while( true ) {
    __gnu_cxx::
    hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>::end
              (local_20);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
                          *)local_28,(_Hashtable_iterator *)local_20);
    if (cVar1 == '\0') {
      return (WarRoom *)0x0;
    }
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
                          *)local_28);
    local_10 = *(WarRoom **)(iVar2 + 4);
    if ((local_10 != (WarRoom *)0x0) && (iVar2 = WarRoom::IsJoinable(local_10,param_1), iVar2 == 0))
    break;
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
    ::operator++(local_18,(int)local_28);
  }
  return local_10;
}

```

---

## FindQuickJoinablePvPRoom

```asm
// === 082a3202 CGameManager::FindQuickJoinablePvPRoom  [0x082a3202-0x82a32e1] ===
 82a3202:	55                   	push   %ebp
 82a3203:	89 e5                	mov    %esp,%ebp
 82a3205:	83 ec 48             	sub    $0x48,%esp
 82a3208:	8b 45 0c             	mov    0xc(%ebp),%eax
 82a320b:	88 45 d4             	mov    %al,-0x2c(%ebp)
 82a320e:	8b 45 08             	mov    0x8(%ebp),%eax
 82a3211:	8d 90 5c 02 00 00    	lea    0x25c(%eax),%edx
 82a3217:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82a321a:	89 54 24 04          	mov    %edx,0x4(%esp)
 82a321e:	89 04 24             	mov    %eax,(%esp)
 82a3221:	e8 20 f9 00 00       	call   82b2b46 <_ZN9__gnu_cxx8hash_mapIiP8PvP_RoomNS_4hashIiEESt8equal_toIiESaIS2_EE5beginEv>
 82a3226:	83 ec 04             	sub    $0x4,%esp
 82a3229:	eb 7b                	jmp    82a32a6 <_ZN12CGameManager24FindQuickJoinablePvPRoomEbP5CUser+0xa4>
 82a322b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82a322e:	89 04 24             	mov    %eax,(%esp)
 82a3231:	e8 e0 e3 00 00       	call   82b1616 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8PvP_RoomEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 82a3236:	8b 40 04             	mov    0x4(%eax),%eax
 82a3239:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82a323c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82a3240:	74 59                	je     82a329b <_ZN12CGameManager24FindQuickJoinablePvPRoomEbP5CUser+0x99>
 82a3242:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a3245:	89 04 24             	mov    %eax,(%esp)
 82a3248:	e8 7f a7 f8 ff       	call   822d9cc <_ZN8PvP_Room19get_pvp_battle_modeEv>
 82a324d:	83 f8 06             	cmp    $0x6,%eax
 82a3250:	0f 94 c0             	sete   %al
 82a3253:	84 c0                	test   %al,%al
 82a3255:	75 43                	jne    82a329a <_ZN12CGameManager24FindQuickJoinablePvPRoomEbP5CUser+0x98>
 82a3257:	80 7d d4 00          	cmpb   $0x0,-0x2c(%ebp)
 82a325b:	74 12                	je     82a326f <_ZN12CGameManager24FindQuickJoinablePvPRoomEbP5CUser+0x6d>
 82a325d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a3260:	89 04 24             	mov    %eax,(%esp)
 82a3263:	e8 0c a7 f8 ff       	call   822d974 <_ZN8PvP_Room15IsExistPasswordEv>
 82a3268:	83 f0 01             	xor    $0x1,%eax
 82a326b:	84 c0                	test   %al,%al
 82a326d:	74 1d                	je     82a328c <_ZN12CGameManager24FindQuickJoinablePvPRoomEbP5CUser+0x8a>
 82a326f:	8b 45 10             	mov    0x10(%ebp),%eax
 82a3272:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a3276:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a3279:	89 04 24             	mov    %eax,(%esp)
 82a327c:	e8 65 39 33 00       	call   85d6be6 <_ZN8PvP_Room22IsQuickJoinablePVPRoomEP5CUser>
 82a3281:	84 c0                	test   %al,%al
 82a3283:	74 07                	je     82a328c <_ZN12CGameManager24FindQuickJoinablePvPRoomEbP5CUser+0x8a>
 82a3285:	b8 01 00 00 00       	mov    $0x1,%eax
 82a328a:	eb 05                	jmp    82a3291 <_ZN12CGameManager24FindQuickJoinablePvPRoomEbP5CUser+0x8f>
 82a328c:	b8 00 00 00 00       	mov    $0x0,%eax
 82a3291:	84 c0                	test   %al,%al
 82a3293:	74 06                	je     82a329b <_ZN12CGameManager24FindQuickJoinablePvPRoomEbP5CUser+0x99>
 82a3295:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a3298:	eb 46                	jmp    82a32e0 <_ZN12CGameManager24FindQuickJoinablePvPRoomEbP5CUser+0xde>
 82a329a:	90                   	nop
 82a329b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82a329e:	89 04 24             	mov    %eax,(%esp)
 82a32a1:	e8 1a 1c 01 00       	call   82b4ec0 <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8PvP_RoomEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEppEv>
 82a32a6:	8b 45 08             	mov    0x8(%ebp),%eax
 82a32a9:	8d 90 5c 02 00 00    	lea    0x25c(%eax),%edx
 82a32af:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82a32b2:	89 54 24 04          	mov    %edx,0x4(%esp)
 82a32b6:	89 04 24             	mov    %eax,(%esp)
 82a32b9:	e8 e0 e2 00 00       	call   82b159e <_ZN9__gnu_cxx8hash_mapIiP8PvP_RoomNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 82a32be:	83 ec 04             	sub    $0x4,%esp
 82a32c1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82a32c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a32c8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82a32cb:	89 04 24             	mov    %eax,(%esp)
 82a32ce:	e8 57 e3 00 00       	call   82b162a <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8PvP_RoomEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 82a32d3:	84 c0                	test   %al,%al
 82a32d5:	0f 85 50 ff ff ff    	jne    82a322b <_ZN12CGameManager24FindQuickJoinablePvPRoomEbP5CUser+0x29>
 82a32db:	b8 00 00 00 00       	mov    $0x0,%eax
 82a32e0:	c9                   	leave
 82a32e1:	c3                   	ret

```

```c
// CGameManager::FindQuickJoinablePvPRoom @ 0x82a3202

/* CGameManager::FindQuickJoinablePvPRoom(bool, CUser*) */

PvP_Room * __thiscall
CGameManager::FindQuickJoinablePvPRoom(CGameManager *this,bool param_1,CUser *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
  local_20 [8];
  hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
  local_18 [8];
  PvP_Room *local_10;
  
  __gnu_cxx::
  hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::begin
            (local_20);
  do {
    __gnu_cxx::
    hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::end
              (local_18);
    cVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
                          *)local_20,(_Hashtable_iterator *)local_18);
    if (cVar2 == '\0') {
      return (PvP_Room *)0x0;
    }
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
                          *)local_20);
    local_10 = *(PvP_Room **)(iVar3 + 4);
    if ((local_10 != (PvP_Room *)0x0) &&
       (iVar3 = PvP_Room::get_pvp_battle_mode(local_10), iVar3 != 6)) {
      if (((param_1) && (cVar2 = PvP_Room::IsExistPassword(local_10), cVar2 == '\x01')) ||
         (cVar2 = PvP_Room::IsQuickJoinablePVPRoom(local_10,param_2), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return local_10;
      }
    }
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
    ::operator++((_Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
                  *)local_20);
  } while( true );
}

```

---

## GetAuctionAveragePriceManager

```asm
// === 08299028 CGameManager::GetAuctionAveragePriceManager  [0x08299028-0x82990a5] ===
 8299028:	55                   	push   %ebp
 8299029:	89 e5                	mov    %esp,%ebp
 829902b:	57                   	push   %edi
 829902c:	56                   	push   %esi
 829902d:	53                   	push   %ebx
 829902e:	83 ec 1c             	sub    $0x1c,%esp
 8299031:	8b 45 08             	mov    0x8(%ebp),%eax
 8299034:	8b 80 14 03 00 00    	mov    0x314(%eax),%eax
 829903a:	85 c0                	test   %eax,%eax
 829903c:	75 57                	jne    8299095 <_ZN12CGameManager29GetAuctionAveragePriceManagerEv+0x6d>
 829903e:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 8299045:	08 
 8299046:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 829904d:	e8 fe ca 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 8299052:	89 c3                	mov    %eax,%ebx
 8299054:	89 d8                	mov    %ebx,%eax
 8299056:	85 c0                	test   %eax,%eax
 8299058:	74 30                	je     829908a <_ZN12CGameManager29GetAuctionAveragePriceManagerEv+0x62>
 829905a:	89 d8                	mov    %ebx,%eax
 829905c:	89 04 24             	mov    %eax,(%esp)
 829905f:	e8 30 ca 05 00       	call   82f5a94 <_ZN20CAuctionAveragePriceC1Ev>
 8299064:	eb 20                	jmp    8299086 <_ZN12CGameManager29GetAuctionAveragePriceManagerEv+0x5e>
 8299066:	89 d6                	mov    %edx,%esi
 8299068:	89 c7                	mov    %eax,%edi
 829906a:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 8299071:	08 
 8299072:	89 1c 24             	mov    %ebx,(%esp)
 8299075:	e8 66 b7 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829907a:	89 f8                	mov    %edi,%eax
 829907c:	89 f2                	mov    %esi,%edx
 829907e:	89 04 24             	mov    %eax,(%esp)
 8299081:	e8 ca a6 84 00       	call   8ae3750 <_Unwind_Resume>
 8299086:	89 d8                	mov    %ebx,%eax
 8299088:	eb 02                	jmp    829908c <_ZN12CGameManager29GetAuctionAveragePriceManagerEv+0x64>
 829908a:	89 d8                	mov    %ebx,%eax
 829908c:	8b 55 08             	mov    0x8(%ebp),%edx
 829908f:	89 82 14 03 00 00    	mov    %eax,0x314(%edx)
 8299095:	8b 45 08             	mov    0x8(%ebp),%eax
 8299098:	8b 80 14 03 00 00    	mov    0x314(%eax),%eax
 829909e:	83 c4 1c             	add    $0x1c,%esp
 82990a1:	5b                   	pop    %ebx
 82990a2:	5e                   	pop    %esi
 82990a3:	5f                   	pop    %edi
 82990a4:	5d                   	pop    %ebp
 82990a5:	c3                   	ret

```

```c
// CGameManager::GetAuctionAveragePriceManager @ 0x8299028

/* CGameManager::GetAuctionAveragePriceManager() */

undefined4 __thiscall CGameManager::GetAuctionAveragePriceManager(CGameManager *this)

{
  CAuctionAveragePrice *this_00;
  
  if (*(int *)(this + 0x314) == 0) {
    this_00 = operator_new(0x18,(nothrow_t *)&std::nothrow);
    if (this_00 != (CAuctionAveragePrice *)0x0) {
                    /* try { // try from 0829905f to 08299063 has its CatchHandler @ 08299066 */
      CAuctionAveragePrice::CAuctionAveragePrice(this_00);
    }
    *(CAuctionAveragePrice **)(this + 0x314) = this_00;
  }
  return *(undefined4 *)(this + 0x314);
}

```

---

## GetConditionEventManager

```asm
// === 08298f60 CGameManager::GetConditionEventManager  [0x08298f60-0x8298fc3] ===
 8298f60:	55                   	push   %ebp
 8298f61:	89 e5                	mov    %esp,%ebp
 8298f63:	57                   	push   %edi
 8298f64:	56                   	push   %esi
 8298f65:	53                   	push   %ebx
 8298f66:	83 ec 1c             	sub    $0x1c,%esp
 8298f69:	8b 45 08             	mov    0x8(%ebp),%eax
 8298f6c:	8b 80 0c 03 00 00    	mov    0x30c(%eax),%eax
 8298f72:	85 c0                	test   %eax,%eax
 8298f74:	75 3d                	jne    8298fb3 <_ZN12CGameManager24GetConditionEventManagerEv+0x53>
 8298f76:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8298f7d:	e8 ce b4 48 00       	call   8724450 <_Znwj>
 8298f82:	89 c3                	mov    %eax,%ebx
 8298f84:	89 d8                	mov    %ebx,%eax
 8298f86:	89 04 24             	mov    %eax,(%esp)
 8298f89:	e8 b6 b8 09 00       	call   8334844 <_ZN22CConditionEventManagerC1Ev>
 8298f8e:	eb 18                	jmp    8298fa8 <_ZN12CGameManager24GetConditionEventManagerEv+0x48>
 8298f90:	89 d6                	mov    %edx,%esi
 8298f92:	89 c7                	mov    %eax,%edi
 8298f94:	89 1c 24             	mov    %ebx,(%esp)
 8298f97:	e8 54 b5 48 00       	call   87244f0 <_ZdlPv>
 8298f9c:	89 f8                	mov    %edi,%eax
 8298f9e:	89 f2                	mov    %esi,%edx
 8298fa0:	89 04 24             	mov    %eax,(%esp)
 8298fa3:	e8 a8 a7 84 00       	call   8ae3750 <_Unwind_Resume>
 8298fa8:	89 da                	mov    %ebx,%edx
 8298faa:	8b 45 08             	mov    0x8(%ebp),%eax
 8298fad:	89 90 0c 03 00 00    	mov    %edx,0x30c(%eax)
 8298fb3:	8b 45 08             	mov    0x8(%ebp),%eax
 8298fb6:	8b 80 0c 03 00 00    	mov    0x30c(%eax),%eax
 8298fbc:	83 c4 1c             	add    $0x1c,%esp
 8298fbf:	5b                   	pop    %ebx
 8298fc0:	5e                   	pop    %esi
 8298fc1:	5f                   	pop    %edi
 8298fc2:	5d                   	pop    %ebp
 8298fc3:	c3                   	ret

```

```c
// CGameManager::GetConditionEventManager @ 0x8298f60

/* CGameManager::GetConditionEventManager() */

undefined4 __thiscall CGameManager::GetConditionEventManager(CGameManager *this)

{
  CConditionEventManager *this_00;
  
  if (*(int *)(this + 0x30c) == 0) {
    this_00 = operator_new(1);
                    /* try { // try from 08298f89 to 08298f8d has its CatchHandler @ 08298f90 */
    CConditionEventManager::CConditionEventManager(this_00);
    *(CConditionEventManager **)(this + 0x30c) = this_00;
  }
  return *(undefined4 *)(this + 0x30c);
}

```

---

## GetCraneMinigameManager

```asm
// === 082990a6 CGameManager::GetCraneMinigameManager  [0x082990a6-0x82990b3] ===
 82990a6:	55                   	push   %ebp
 82990a7:	89 e5                	mov    %esp,%ebp
 82990a9:	8b 45 08             	mov    0x8(%ebp),%eax
 82990ac:	8b 80 18 03 00 00    	mov    0x318(%eax),%eax
 82990b2:	5d                   	pop    %ebp
 82990b3:	c3                   	ret

```

```c
// CGameManager::GetCraneMinigameManager @ 0x82990a6

/* CGameManager::GetCraneMinigameManager() */

undefined4 __thiscall CGameManager::GetCraneMinigameManager(CGameManager *this)

{
  return *(undefined4 *)(this + 0x318);
}

```

---

## GetIdx

```asm
// === 082948a2 CGameManager::GetIdx  [0x082948a2-0x82948c5] ===
 82948a2:	55                   	push   %ebp
 82948a3:	89 e5                	mov    %esp,%ebp
 82948a5:	83 ec 28             	sub    $0x28,%esp
 82948a8:	8b 45 08             	mov    0x8(%ebp),%eax
 82948ab:	8d 50 4c             	lea    0x4c(%eax),%edx
 82948ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 82948b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82948b5:	89 14 24             	mov    %edx,(%esp)
 82948b8:	e8 65 bd 01 00       	call   82b0622 <_ZN10StaticPoolI5CUserLi600EE8GetIndexEPS0_>
 82948bd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82948c0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82948c3:	c9                   	leave
 82948c4:	c3                   	ret
 82948c5:	90                   	nop

```

```c
// CGameManager::GetIdx @ 0x82948a2

/* CGameManager::GetIdx(CUser*) */

undefined4 __thiscall CGameManager::GetIdx(CGameManager *this,CUser *param_1)

{
  undefined4 uVar1;
  
  uVar1 = StaticPool<CUser,600>::GetIndex((StaticPool<CUser,600> *)(this + 0x4c),param_1);
  return uVar1;
}

```

---

## GetParty

```asm
// === 08294e10 CGameManager::GetParty  [0x08294e10-0x8294f31] ===
 8294e10:	55                   	push   %ebp
 8294e11:	89 e5                	mov    %esp,%ebp
 8294e13:	83 ec 48             	sub    $0x48,%esp
 8294e16:	8b 45 08             	mov    0x8(%ebp),%eax
 8294e19:	05 ac 00 00 00       	add    $0xac,%eax
 8294e1e:	89 04 24             	mov    %eax,(%esp)
 8294e21:	e8 34 c0 01 00       	call   82b0e5a <_ZN10StaticPoolI6CPartyLi600EE7AcquireEv>
 8294e26:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8294e29:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8294e2d:	75 0a                	jne    8294e39 <_ZN12CGameManager8GetPartyEv+0x29>
 8294e2f:	b8 00 00 00 00       	mov    $0x0,%eax
 8294e34:	e9 f6 00 00 00       	jmp    8294f2f <_ZN12CGameManager8GetPartyEv+0x11f>
 8294e39:	8b 45 08             	mov    0x8(%ebp),%eax
 8294e3c:	8d 90 ac 00 00 00    	lea    0xac(%eax),%edx
 8294e42:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8294e45:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294e49:	89 14 24             	mov    %edx,(%esp)
 8294e4c:	e8 37 c1 01 00       	call   82b0f88 <_ZN10StaticPoolI6CPartyLi600EE8GetIndexEPS0_>
 8294e51:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294e55:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8294e58:	89 04 24             	mov    %eax,(%esp)
 8294e5b:	e8 6a 0b 01 00       	call   82a59ca <_ZN6CParty6SetIDXEi>
 8294e60:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8294e63:	89 04 24             	mov    %eax,(%esp)
 8294e66:	e8 db 89 f9 ff       	call   822d846 <_ZN6CParty13GetPartyIndexEv>
 8294e6b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8294e6e:	8b 45 08             	mov    0x8(%ebp),%eax
 8294e71:	8d 88 70 02 00 00    	lea    0x270(%eax),%ecx
 8294e77:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8294e7a:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8294e7d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8294e81:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8294e85:	89 04 24             	mov    %eax,(%esp)
 8294e88:	e8 37 c2 01 00       	call   82b10c4 <_ZN9__gnu_cxx8hash_mapIiP6CPartyNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 8294e8d:	83 ec 04             	sub    $0x4,%esp
 8294e90:	8b 45 08             	mov    0x8(%ebp),%eax
 8294e93:	8d 90 70 02 00 00    	lea    0x270(%eax),%edx
 8294e99:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8294e9c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8294ea0:	89 04 24             	mov    %eax,(%esp)
 8294ea3:	e8 48 c2 01 00       	call   82b10f0 <_ZN9__gnu_cxx8hash_mapIiP6CPartyNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 8294ea8:	83 ec 04             	sub    $0x4,%esp
 8294eab:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8294eae:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294eb2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8294eb5:	89 04 24             	mov    %eax,(%esp)
 8294eb8:	e8 59 c2 01 00       	call   82b1116 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP6CPartyEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEeqERKSD_>
 8294ebd:	84 c0                	test   %al,%al
 8294ebf:	74 30                	je     8294ef1 <_ZN12CGameManager8GetPartyEv+0xe1>
 8294ec1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8294ec4:	89 04 24             	mov    %eax,(%esp)
 8294ec7:	e8 7a 89 f9 ff       	call   822d846 <_ZN6CParty13GetPartyIndexEv>
 8294ecc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8294ecf:	8b 45 08             	mov    0x8(%ebp),%eax
 8294ed2:	8d 90 70 02 00 00    	lea    0x270(%eax),%edx
 8294ed8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8294edb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294edf:	89 14 24             	mov    %edx,(%esp)
 8294ee2:	e8 43 c2 01 00       	call   82b112a <_ZN9__gnu_cxx8hash_mapIiP6CPartyNS_4hashIiEESt8equal_toIiESaIS2_EEixERKi>
 8294ee7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8294eea:	89 10                	mov    %edx,(%eax)
 8294eec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8294eef:	eb 3e                	jmp    8294f2f <_ZN12CGameManager8GetPartyEv+0x11f>
 8294ef1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8294ef4:	89 04 24             	mov    %eax,(%esp)
 8294ef7:	e8 4a 89 f9 ff       	call   822d846 <_ZN6CParty13GetPartyIndexEv>
 8294efc:	89 44 24 14          	mov    %eax,0x14(%esp)
 8294f00:	c7 44 24 10 70 6b c1 	movl   $0x8c16b70,0x10(%esp)
 8294f07:	08 
 8294f08:	c7 44 24 0c 5f 0a 00 	movl   $0xa5f,0xc(%esp)
 8294f0f:	00 
 8294f10:	c7 44 24 08 80 b6 c1 	movl   $0x8c1b680,0x8(%esp)
 8294f17:	08 
 8294f18:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 8294f1f:	08 
 8294f20:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8294f27:	e8 de ec 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8294f2c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8294f2f:	c9                   	leave
 8294f30:	c3                   	ret
 8294f31:	90                   	nop

```

```c
// CGameManager::GetParty @ 0x8294e10

/* CGameManager::GetParty() */

CParty * __thiscall CGameManager::GetParty(CGameManager *this)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  _Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
  local_28 [8];
  undefined4 local_20;
  hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>> local_1c [8]
  ;
  int local_14;
  CParty *local_10;
  
  local_10 = (CParty *)StaticPool<CParty,600>::Acquire((StaticPool<CParty,600> *)(this + 0xac));
  if (local_10 == (CParty *)0x0) {
    local_10 = (CParty *)0x0;
  }
  else {
    iVar2 = StaticPool<CParty,600>::GetIndex((StaticPool<CParty,600> *)(this + 0xac),local_10);
    CParty::SetIDX(local_10,iVar2);
    local_20 = CParty::GetPartyIndex(local_10);
    __gnu_cxx::hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>
    ::find((int *)local_28);
    __gnu_cxx::hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>
    ::end(local_1c);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
            ::operator==(local_28,(_Hashtable_iterator *)local_1c);
    if (cVar1 == '\0') {
      uVar4 = CParty::GetPartyIndex(local_10);
      LogManager::logFormat
                (1,"App.cpp","CParty* CGameManager::GetParty()",0xa5f,&DAT_08c16b70,uVar4);
    }
    else {
      local_14 = CParty::GetPartyIndex(local_10);
      puVar3 = (undefined4 *)
               __gnu_cxx::
               hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>
               ::operator[]((hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>
                             *)(this + 0x270),&local_14);
      *puVar3 = local_10;
    }
  }
  return local_10;
}

```

---

## GetPartyIdx

```asm
// === 08294fa2 CGameManager::GetPartyIdx  [0x08294fa2-0x8294fc7] ===
 8294fa2:	55                   	push   %ebp
 8294fa3:	89 e5                	mov    %esp,%ebp
 8294fa5:	83 ec 28             	sub    $0x28,%esp
 8294fa8:	8b 45 08             	mov    0x8(%ebp),%eax
 8294fab:	8d 90 ac 00 00 00    	lea    0xac(%eax),%edx
 8294fb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8294fb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294fb8:	89 14 24             	mov    %edx,(%esp)
 8294fbb:	e8 c8 bf 01 00       	call   82b0f88 <_ZN10StaticPoolI6CPartyLi600EE8GetIndexEPS0_>
 8294fc0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8294fc3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8294fc6:	c9                   	leave
 8294fc7:	c3                   	ret

```

```c
// CGameManager::GetPartyIdx @ 0x8294fa2

/* CGameManager::GetPartyIdx(CParty*) */

undefined4 __thiscall CGameManager::GetPartyIdx(CGameManager *this,CParty *param_1)

{
  undefined4 uVar1;
  
  uVar1 = StaticPool<CParty,600>::GetIndex((StaticPool<CParty,600> *)(this + 0xac),param_1);
  return uVar1;
}

```

---

## GetParty_08294f32

```asm
// === 08294f32 CGameManager::GetParty  [0x08294f32-0x8294fa1] ===
 8294f32:	55                   	push   %ebp
 8294f33:	89 e5                	mov    %esp,%ebp
 8294f35:	83 ec 28             	sub    $0x28,%esp
 8294f38:	8b 45 08             	mov    0x8(%ebp),%eax
 8294f3b:	8d 88 70 02 00 00    	lea    0x270(%eax),%ecx
 8294f41:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8294f44:	8d 55 0c             	lea    0xc(%ebp),%edx
 8294f47:	89 54 24 08          	mov    %edx,0x8(%esp)
 8294f4b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8294f4f:	89 04 24             	mov    %eax,(%esp)
 8294f52:	e8 6d c1 01 00       	call   82b10c4 <_ZN9__gnu_cxx8hash_mapIiP6CPartyNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 8294f57:	83 ec 04             	sub    $0x4,%esp
 8294f5a:	8b 45 08             	mov    0x8(%ebp),%eax
 8294f5d:	8d 90 70 02 00 00    	lea    0x270(%eax),%edx
 8294f63:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8294f66:	89 54 24 04          	mov    %edx,0x4(%esp)
 8294f6a:	89 04 24             	mov    %eax,(%esp)
 8294f6d:	e8 7e c1 01 00       	call   82b10f0 <_ZN9__gnu_cxx8hash_mapIiP6CPartyNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 8294f72:	83 ec 04             	sub    $0x4,%esp
 8294f75:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8294f78:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294f7c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8294f7f:	89 04 24             	mov    %eax,(%esp)
 8294f82:	e8 8f c1 01 00       	call   82b1116 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP6CPartyEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEeqERKSD_>
 8294f87:	84 c0                	test   %al,%al
 8294f89:	74 07                	je     8294f92 <_ZN12CGameManager8GetPartyEi+0x60>
 8294f8b:	b8 00 00 00 00       	mov    $0x0,%eax
 8294f90:	eb 0e                	jmp    8294fa0 <_ZN12CGameManager8GetPartyEi+0x6e>
 8294f92:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8294f95:	89 04 24             	mov    %eax,(%esp)
 8294f98:	e8 cb c1 01 00       	call   82b1168 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP6CPartyEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 8294f9d:	8b 40 04             	mov    0x4(%eax),%eax
 8294fa0:	c9                   	leave
 8294fa1:	c3                   	ret

```

```c
// CGameManager::GetParty @ 0x8294f32

/* CGameManager::GetParty(int) */

undefined4 CGameManager::GetParty(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
  local_1c [8];
  hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>
  local_14 [16];
  
  __gnu_cxx::hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>::
  find((int *)local_1c);
  __gnu_cxx::hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>::
  end(local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
          ::operator==(local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
            ::operator->(local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## GetPremiumLetheManager

```asm
// === 08298e88 CGameManager::GetPremiumLetheManager  [0x08298e88-0x8298eeb] ===
 8298e88:	55                   	push   %ebp
 8298e89:	89 e5                	mov    %esp,%ebp
 8298e8b:	57                   	push   %edi
 8298e8c:	56                   	push   %esi
 8298e8d:	53                   	push   %ebx
 8298e8e:	83 ec 1c             	sub    $0x1c,%esp
 8298e91:	8b 45 08             	mov    0x8(%ebp),%eax
 8298e94:	8b 80 04 03 00 00    	mov    0x304(%eax),%eax
 8298e9a:	85 c0                	test   %eax,%eax
 8298e9c:	75 3d                	jne    8298edb <_ZN12CGameManager22GetPremiumLetheManagerEv+0x53>
 8298e9e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8298ea5:	e8 a6 b5 48 00       	call   8724450 <_Znwj>
 8298eaa:	89 c3                	mov    %eax,%ebx
 8298eac:	89 d8                	mov    %ebx,%eax
 8298eae:	89 04 24             	mov    %eax,(%esp)
 8298eb1:	e8 52 ae 32 00       	call   85c3d08 <_ZN20CPremiumLetheManagerC1Ev>
 8298eb6:	eb 18                	jmp    8298ed0 <_ZN12CGameManager22GetPremiumLetheManagerEv+0x48>
 8298eb8:	89 d6                	mov    %edx,%esi
 8298eba:	89 c7                	mov    %eax,%edi
 8298ebc:	89 1c 24             	mov    %ebx,(%esp)
 8298ebf:	e8 2c b6 48 00       	call   87244f0 <_ZdlPv>
 8298ec4:	89 f8                	mov    %edi,%eax
 8298ec6:	89 f2                	mov    %esi,%edx
 8298ec8:	89 04 24             	mov    %eax,(%esp)
 8298ecb:	e8 80 a8 84 00       	call   8ae3750 <_Unwind_Resume>
 8298ed0:	89 da                	mov    %ebx,%edx
 8298ed2:	8b 45 08             	mov    0x8(%ebp),%eax
 8298ed5:	89 90 04 03 00 00    	mov    %edx,0x304(%eax)
 8298edb:	8b 45 08             	mov    0x8(%ebp),%eax
 8298ede:	8b 80 04 03 00 00    	mov    0x304(%eax),%eax
 8298ee4:	83 c4 1c             	add    $0x1c,%esp
 8298ee7:	5b                   	pop    %ebx
 8298ee8:	5e                   	pop    %esi
 8298ee9:	5f                   	pop    %edi
 8298eea:	5d                   	pop    %ebp
 8298eeb:	c3                   	ret

```

```c
// CGameManager::GetPremiumLetheManager @ 0x8298e88

/* CGameManager::GetPremiumLetheManager() */

undefined4 __thiscall CGameManager::GetPremiumLetheManager(CGameManager *this)

{
  CPremiumLetheManager *this_00;
  
  if (*(int *)(this + 0x304) == 0) {
    this_00 = operator_new(1);
                    /* try { // try from 08298eb1 to 08298eb5 has its CatchHandler @ 08298eb8 */
    CPremiumLetheManager::CPremiumLetheManager(this_00);
    *(CPremiumLetheManager **)(this + 0x304) = this_00;
  }
  return *(undefined4 *)(this + 0x304);
}

```

---

## GetPvp

```asm
// === 0829507c CGameManager::GetPvp  [0x0829507c-0x8295205] ===
 829507c:	55                   	push   %ebp
 829507d:	89 e5                	mov    %esp,%ebp
 829507f:	53                   	push   %ebx
 8295080:	83 ec 64             	sub    $0x64,%esp
 8295083:	8b 45 08             	mov    0x8(%ebp),%eax
 8295086:	05 dc 00 00 00       	add    $0xdc,%eax
 829508b:	89 04 24             	mov    %eax,(%esp)
 829508e:	e8 6f c2 01 00       	call   82b1302 <_ZN10StaticPoolI8PvP_RoomLi600EE7AcquireEv>
 8295093:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8295096:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 829509a:	75 0a                	jne    82950a6 <_ZN12CGameManager6GetPvpEv+0x2a>
 829509c:	b8 00 00 00 00       	mov    $0x0,%eax
 82950a1:	e9 5b 01 00 00       	jmp    8295201 <_ZN12CGameManager6GetPvpEv+0x185>
 82950a6:	8b 45 08             	mov    0x8(%ebp),%eax
 82950a9:	8d 90 dc 00 00 00    	lea    0xdc(%eax),%edx
 82950af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82950b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82950b6:	89 14 24             	mov    %edx,(%esp)
 82950b9:	e8 72 c3 01 00       	call   82b1430 <_ZN10StaticPoolI8PvP_RoomLi600EE8GetIndexEPS0_>
 82950be:	89 44 24 04          	mov    %eax,0x4(%esp)
 82950c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82950c5:	89 04 24             	mov    %eax,(%esp)
 82950c8:	e8 df 11 34 00       	call   85d62ac <_ZN8PvP_Room6SetIDXEi>
 82950cd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82950d0:	89 04 24             	mov    %eax,(%esp)
 82950d3:	e8 bc 88 f9 ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 82950d8:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 82950db:	8b 45 08             	mov    0x8(%ebp),%eax
 82950de:	8d 88 5c 02 00 00    	lea    0x25c(%eax),%ecx
 82950e4:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82950e7:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 82950ea:	89 54 24 08          	mov    %edx,0x8(%esp)
 82950ee:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82950f2:	89 04 24             	mov    %eax,(%esp)
 82950f5:	e8 78 c4 01 00       	call   82b1572 <_ZN9__gnu_cxx8hash_mapIiP8PvP_RoomNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 82950fa:	83 ec 04             	sub    $0x4,%esp
 82950fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8295100:	8d 90 5c 02 00 00    	lea    0x25c(%eax),%edx
 8295106:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8295109:	89 54 24 04          	mov    %edx,0x4(%esp)
 829510d:	89 04 24             	mov    %eax,(%esp)
 8295110:	e8 89 c4 01 00       	call   82b159e <_ZN9__gnu_cxx8hash_mapIiP8PvP_RoomNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 8295115:	83 ec 04             	sub    $0x4,%esp
 8295118:	8d 45 c8             	lea    -0x38(%ebp),%eax
 829511b:	89 44 24 04          	mov    %eax,0x4(%esp)
 829511f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8295122:	89 04 24             	mov    %eax,(%esp)
 8295125:	e8 9a c4 01 00       	call   82b15c4 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8PvP_RoomEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEeqERKSD_>
 829512a:	84 c0                	test   %al,%al
 829512c:	74 7f                	je     82951ad <_ZN12CGameManager6GetPvpEv+0x131>
 829512e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8295131:	89 04 24             	mov    %eax,(%esp)
 8295134:	e8 5b 88 f9 ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 8295139:	89 c3                	mov    %eax,%ebx
 829513b:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8295142:	00 
 8295143:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 829514a:	00 
 829514b:	c7 44 24 08 a9 0a 00 	movl   $0xaa9,0x8(%esp)
 8295152:	00 
 8295153:	c7 44 24 04 40 b6 c1 	movl   $0x8c1b640,0x4(%esp)
 829515a:	08 
 829515b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 829515e:	89 04 24             	mov    %eax,(%esp)
 8295161:	e8 d6 ab 2b 00       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 8295166:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 829516a:	c7 44 24 04 8f 6b c1 	movl   $0x8c16b8f,0x4(%esp)
 8295171:	08 
 8295172:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8295175:	89 04 24             	mov    %eax,(%esp)
 8295178:	e8 e7 ab 2b 00       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 829517d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8295180:	89 04 24             	mov    %eax,(%esp)
 8295183:	e8 0c 88 f9 ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 8295188:	89 45 e0             	mov    %eax,-0x20(%ebp)
 829518b:	8b 45 08             	mov    0x8(%ebp),%eax
 829518e:	8d 90 5c 02 00 00    	lea    0x25c(%eax),%edx
 8295194:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8295197:	89 44 24 04          	mov    %eax,0x4(%esp)
 829519b:	89 14 24             	mov    %edx,(%esp)
 829519e:	e8 35 c4 01 00       	call   82b15d8 <_ZN9__gnu_cxx8hash_mapIiP8PvP_RoomNS_4hashIiEESt8equal_toIiESaIS2_EEixERKi>
 82951a3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82951a6:	89 10                	mov    %edx,(%eax)
 82951a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82951ab:	eb 54                	jmp    8295201 <_ZN12CGameManager6GetPvpEv+0x185>
 82951ad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82951b0:	89 04 24             	mov    %eax,(%esp)
 82951b3:	e8 dc 87 f9 ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 82951b8:	89 c3                	mov    %eax,%ebx
 82951ba:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 82951c1:	00 
 82951c2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82951c9:	00 
 82951ca:	c7 44 24 08 b2 0a 00 	movl   $0xab2,0x8(%esp)
 82951d1:	00 
 82951d2:	c7 44 24 04 40 b6 c1 	movl   $0x8c1b640,0x4(%esp)
 82951d9:	08 
 82951da:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82951dd:	89 04 24             	mov    %eax,(%esp)
 82951e0:	e8 57 ab 2b 00       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 82951e5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82951e9:	c7 44 24 04 ac 6b c1 	movl   $0x8c16bac,0x4(%esp)
 82951f0:	08 
 82951f1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82951f4:	89 04 24             	mov    %eax,(%esp)
 82951f7:	e8 68 ab 2b 00       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 82951fc:	b8 00 00 00 00       	mov    $0x0,%eax
 8295201:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8295204:	c9                   	leave
 8295205:	c3                   	ret

```

```c
// CGameManager::GetPvp @ 0x829507c

/* CGameManager::GetPvp() */

PvP_Room * __thiscall CGameManager::GetPvp(CGameManager *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
  local_48 [8];
  undefined4 local_40;
  hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
  local_3c [8];
  CSwitchLog local_34 [16];
  int local_24;
  CSwitchLog local_20 [16];
  PvP_Room *local_10;
  
  local_10 = (PvP_Room *)
             StaticPool<PvP_Room,600>::Acquire((StaticPool<PvP_Room,600> *)(this + 0xdc));
  if (local_10 == (PvP_Room *)0x0) {
    local_10 = (PvP_Room *)0x0;
  }
  else {
    iVar2 = StaticPool<PvP_Room,600>::GetIndex((StaticPool<PvP_Room,600> *)(this + 0xdc),local_10);
    PvP_Room::SetIDX(local_10,iVar2);
    local_40 = PvP_Room::get_index(local_10);
    __gnu_cxx::
    hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::find
              ((int *)local_48);
    __gnu_cxx::
    hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::end
              (local_3c);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
            ::operator==(local_48,(_Hashtable_iterator *)local_3c);
    if (cVar1 == '\0') {
      uVar3 = PvP_Room::get_index(local_10);
      CSwitchLog::CSwitchLog(local_20,"PvP_Room* CGameManager::GetPvp()",0xab2,0,0);
      CSwitchLog::operator()(local_20,"pvp@log room(%d) already alloc",uVar3);
      local_10 = (PvP_Room *)0x0;
    }
    else {
      uVar3 = PvP_Room::get_index(local_10);
      CSwitchLog::CSwitchLog(local_34,"PvP_Room* CGameManager::GetPvp()",0xaa9,0,0);
      CSwitchLog::operator()(local_34,"pvp@log room(%d) new alloc",uVar3);
      local_24 = PvP_Room::get_index(local_10);
      puVar4 = (undefined4 *)
               __gnu_cxx::
               hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
               ::operator[]((hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
                             *)(this + 0x25c),&local_24);
      *puVar4 = local_10;
    }
  }
  return local_10;
}

```

---

## GetPvpIdx

```asm
// === 08295322 CGameManager::GetPvpIdx  [0x08295322-0x8295347] ===
 8295322:	55                   	push   %ebp
 8295323:	89 e5                	mov    %esp,%ebp
 8295325:	83 ec 28             	sub    $0x28,%esp
 8295328:	8b 45 08             	mov    0x8(%ebp),%eax
 829532b:	8d 90 dc 00 00 00    	lea    0xdc(%eax),%edx
 8295331:	8b 45 0c             	mov    0xc(%ebp),%eax
 8295334:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295338:	89 14 24             	mov    %edx,(%esp)
 829533b:	e8 f0 c0 01 00       	call   82b1430 <_ZN10StaticPoolI8PvP_RoomLi600EE8GetIndexEPS0_>
 8295340:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8295343:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8295346:	c9                   	leave
 8295347:	c3                   	ret

```

```c
// CGameManager::GetPvpIdx @ 0x8295322

/* CGameManager::GetPvpIdx(PvP_Room*) */

undefined4 __thiscall CGameManager::GetPvpIdx(CGameManager *this,PvP_Room *param_1)

{
  undefined4 uVar1;
  
  uVar1 = StaticPool<PvP_Room,600>::GetIndex((StaticPool<PvP_Room,600> *)(this + 0xdc),param_1);
  return uVar1;
}

```

---

## GetPvp_08295206

```asm
// === 08295206 CGameManager::GetPvp  [0x08295206-0x8295321] ===
 8295206:	55                   	push   %ebp
 8295207:	89 e5                	mov    %esp,%ebp
 8295209:	57                   	push   %edi
 829520a:	56                   	push   %esi
 829520b:	53                   	push   %ebx
 829520c:	83 ec 4c             	sub    $0x4c,%esp
 829520f:	8b 45 08             	mov    0x8(%ebp),%eax
 8295212:	8d 88 5c 02 00 00    	lea    0x25c(%eax),%ecx
 8295218:	8d 45 c8             	lea    -0x38(%ebp),%eax
 829521b:	8d 55 0c             	lea    0xc(%ebp),%edx
 829521e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8295222:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8295226:	89 04 24             	mov    %eax,(%esp)
 8295229:	e8 44 c3 01 00       	call   82b1572 <_ZN9__gnu_cxx8hash_mapIiP8PvP_RoomNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 829522e:	83 ec 04             	sub    $0x4,%esp
 8295231:	8b 45 08             	mov    0x8(%ebp),%eax
 8295234:	8d 90 5c 02 00 00    	lea    0x25c(%eax),%edx
 829523a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 829523d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8295241:	89 04 24             	mov    %eax,(%esp)
 8295244:	e8 55 c3 01 00       	call   82b159e <_ZN9__gnu_cxx8hash_mapIiP8PvP_RoomNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 8295249:	83 ec 04             	sub    $0x4,%esp
 829524c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 829524f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295253:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8295256:	89 04 24             	mov    %eax,(%esp)
 8295259:	e8 66 c3 01 00       	call   82b15c4 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8PvP_RoomEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEeqERKSD_>
 829525e:	84 c0                	test   %al,%al
 8295260:	74 0a                	je     829526c <_ZN12CGameManager6GetPvpEiP5CUseri+0x66>
 8295262:	b8 00 00 00 00       	mov    $0x0,%eax
 8295267:	e9 ab 00 00 00       	jmp    8295317 <_ZN12CGameManager6GetPvpEiP5CUseri+0x111>
 829526c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 829526f:	89 04 24             	mov    %eax,(%esp)
 8295272:	e8 9f c3 01 00       	call   82b1616 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8PvP_RoomEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 8295277:	8b 40 04             	mov    0x4(%eax),%eax
 829527a:	89 04 24             	mov    %eax,(%esp)
 829527d:	e8 12 87 f9 ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 8295282:	89 c7                	mov    %eax,%edi
 8295284:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8295288:	74 0f                	je     8295299 <_ZN12CGameManager6GetPvpEiP5CUseri+0x93>
 829528a:	8b 45 10             	mov    0x10(%ebp),%eax
 829528d:	89 04 24             	mov    %eax,(%esp)
 8295290:	e8 93 bd e6 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8295295:	89 c6                	mov    %eax,%esi
 8295297:	eb 05                	jmp    829529e <_ZN12CGameManager6GetPvpEiP5CUseri+0x98>
 8295299:	be de 61 c1 08       	mov    $0x8c161de,%esi
 829529e:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 82952a2:	74 0f                	je     82952b3 <_ZN12CGameManager6GetPvpEiP5CUseri+0xad>
 82952a4:	8b 45 10             	mov    0x10(%ebp),%eax
 82952a7:	89 04 24             	mov    %eax,(%esp)
 82952aa:	e8 c3 bd e6 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 82952af:	89 c3                	mov    %eax,%ebx
 82952b1:	eb 05                	jmp    82952b8 <_ZN12CGameManager6GetPvpEiP5CUseri+0xb2>
 82952b3:	bb de 61 c1 08       	mov    $0x8c161de,%ebx
 82952b8:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 82952bf:	00 
 82952c0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82952c7:	00 
 82952c8:	c7 44 24 08 cc 0a 00 	movl   $0xacc,0x8(%esp)
 82952cf:	00 
 82952d0:	c7 44 24 04 00 b6 c1 	movl   $0x8c1b600,0x4(%esp)
 82952d7:	08 
 82952d8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82952db:	89 04 24             	mov    %eax,(%esp)
 82952de:	e8 59 aa 2b 00       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 82952e3:	8b 45 14             	mov    0x14(%ebp),%eax
 82952e6:	89 44 24 14          	mov    %eax,0x14(%esp)
 82952ea:	89 7c 24 10          	mov    %edi,0x10(%esp)
 82952ee:	89 74 24 0c          	mov    %esi,0xc(%esp)
 82952f2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82952f6:	c7 44 24 04 cb 6b c1 	movl   $0x8c16bcb,0x4(%esp)
 82952fd:	08 
 82952fe:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8295301:	89 04 24             	mov    %eax,(%esp)
 8295304:	e8 5b aa 2b 00       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 8295309:	8d 45 c8             	lea    -0x38(%ebp),%eax
 829530c:	89 04 24             	mov    %eax,(%esp)
 829530f:	e8 02 c3 01 00       	call   82b1616 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8PvP_RoomEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 8295314:	8b 40 04             	mov    0x4(%eax),%eax
 8295317:	8d 65 f4             	lea    -0xc(%ebp),%esp
 829531a:	83 c4 00             	add    $0x0,%esp
 829531d:	5b                   	pop    %ebx
 829531e:	5e                   	pop    %esi
 829531f:	5f                   	pop    %edi
 8295320:	5d                   	pop    %ebp
 8295321:	c3                   	ret

```

```c
// CGameManager::GetPvp @ 0x8295206

/* CGameManager::GetPvp(int, CUser*, int) */

undefined4 __thiscall
CGameManager::GetPvp(CGameManager *this,int param_1,CUser *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
  local_3c [8];
  hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
  local_34 [8];
  CSwitchLog local_2c [28];
  
  __gnu_cxx::
  hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::find
            ((int *)local_3c);
  __gnu_cxx::
  hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::end
            (local_34);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
          ::operator==(local_3c,(_Hashtable_iterator *)local_34);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
            ::operator->(local_3c);
    uVar2 = PvP_Room::get_index(*(PvP_Room **)(iVar3 + 4));
    if (param_2 == (CUser *)0x0) {
      puVar4 = &DAT_08c161de;
      puVar5 = &DAT_08c161de;
    }
    else {
      puVar4 = (undefined *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
      puVar5 = (undefined *)CUser::get_acc_name(param_2);
    }
    CSwitchLog::CSwitchLog(local_2c,"PvP_Room* CGameManager::GetPvp(int, CUser*, int)",0xacc,0,0);
    CSwitchLog::operator()(local_2c,"pvp@log %s,%s, room(%d), %d",puVar5,puVar4,uVar2,param_3);
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
            ::operator->(local_3c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## GetQuickParty

```asm
// === 08295450 CGameManager::GetQuickParty  [0x08295450-0x8295571] ===
 8295450:	55                   	push   %ebp
 8295451:	89 e5                	mov    %esp,%ebp
 8295453:	83 ec 48             	sub    $0x48,%esp
 8295456:	8b 45 08             	mov    0x8(%ebp),%eax
 8295459:	05 cc 01 00 00       	add    $0x1cc,%eax
 829545e:	89 04 24             	mov    %eax,(%esp)
 8295461:	e8 4a c3 01 00       	call   82b17b0 <_ZN10StaticPoolIN10QuickParty11CQuickPartyELi300EE7AcquireEv>
 8295466:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8295469:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 829546d:	75 0a                	jne    8295479 <_ZN12CGameManager13GetQuickPartyEv+0x29>
 829546f:	b8 00 00 00 00       	mov    $0x0,%eax
 8295474:	e9 f6 00 00 00       	jmp    829556f <_ZN12CGameManager13GetQuickPartyEv+0x11f>
 8295479:	8b 45 08             	mov    0x8(%ebp),%eax
 829547c:	8d 90 cc 01 00 00    	lea    0x1cc(%eax),%edx
 8295482:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8295485:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295489:	89 14 24             	mov    %edx,(%esp)
 829548c:	e8 3b c4 01 00       	call   82b18cc <_ZN10StaticPoolIN10QuickParty11CQuickPartyELi300EE8GetIndexEPS1_>
 8295491:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295495:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8295498:	89 04 24             	mov    %eax,(%esp)
 829549b:	e8 1e 15 01 00       	call   82a69be <_ZN10QuickParty11CQuickParty21set_quick_party_indexEi>
 82954a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82954a3:	89 04 24             	mov    %eax,(%esp)
 82954a6:	e8 a3 62 fd ff       	call   826b74e <_ZNK10QuickParty11CQuickParty21get_quick_party_indexEv>
 82954ab:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82954ae:	8b 45 08             	mov    0x8(%ebp),%eax
 82954b1:	8d 88 d4 02 00 00    	lea    0x2d4(%eax),%ecx
 82954b7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82954ba:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 82954bd:	89 54 24 08          	mov    %edx,0x8(%esp)
 82954c1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82954c5:	89 04 24             	mov    %eax,(%esp)
 82954c8:	e8 2f c5 01 00       	call   82b19fc <_ZN9__gnu_cxx8hash_mapIiPN10QuickParty11CQuickPartyENS_4hashIiEESt8equal_toIiESaIS3_EE4findERKi>
 82954cd:	83 ec 04             	sub    $0x4,%esp
 82954d0:	8b 45 08             	mov    0x8(%ebp),%eax
 82954d3:	8d 90 d4 02 00 00    	lea    0x2d4(%eax),%edx
 82954d9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82954dc:	89 54 24 04          	mov    %edx,0x4(%esp)
 82954e0:	89 04 24             	mov    %eax,(%esp)
 82954e3:	e8 40 c5 01 00       	call   82b1a28 <_ZN9__gnu_cxx8hash_mapIiPN10QuickParty11CQuickPartyENS_4hashIiEESt8equal_toIiESaIS3_EE3endEv>
 82954e8:	83 ec 04             	sub    $0x4,%esp
 82954eb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82954ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 82954f2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82954f5:	89 04 24             	mov    %eax,(%esp)
 82954f8:	e8 51 c5 01 00       	call   82b1a4e <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiPN10QuickParty11CQuickPartyEEiNS_4hashIiEESt10_Select1stIS6_ESt8equal_toIiESaIS5_EEeqERKSE_>
 82954fd:	84 c0                	test   %al,%al
 82954ff:	74 30                	je     8295531 <_ZN12CGameManager13GetQuickPartyEv+0xe1>
 8295501:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8295504:	89 04 24             	mov    %eax,(%esp)
 8295507:	e8 42 62 fd ff       	call   826b74e <_ZNK10QuickParty11CQuickParty21get_quick_party_indexEv>
 829550c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 829550f:	8b 45 08             	mov    0x8(%ebp),%eax
 8295512:	8d 90 d4 02 00 00    	lea    0x2d4(%eax),%edx
 8295518:	8d 45 f0             	lea    -0x10(%ebp),%eax
 829551b:	89 44 24 04          	mov    %eax,0x4(%esp)
 829551f:	89 14 24             	mov    %edx,(%esp)
 8295522:	e8 3b c5 01 00       	call   82b1a62 <_ZN9__gnu_cxx8hash_mapIiPN10QuickParty11CQuickPartyENS_4hashIiEESt8equal_toIiESaIS3_EEixERKi>
 8295527:	8b 55 f4             	mov    -0xc(%ebp),%edx
 829552a:	89 10                	mov    %edx,(%eax)
 829552c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 829552f:	eb 3e                	jmp    829556f <_ZN12CGameManager13GetQuickPartyEv+0x11f>
 8295531:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8295534:	89 04 24             	mov    %eax,(%esp)
 8295537:	e8 12 62 fd ff       	call   826b74e <_ZNK10QuickParty11CQuickParty21get_quick_party_indexEv>
 829553c:	89 44 24 14          	mov    %eax,0x14(%esp)
 8295540:	c7 44 24 10 f8 6b c1 	movl   $0x8c16bf8,0x10(%esp)
 8295547:	08 
 8295548:	c7 44 24 0c 64 0b 00 	movl   $0xb64,0xc(%esp)
 829554f:	00 
 8295550:	c7 44 24 08 80 b5 c1 	movl   $0x8c1b580,0x8(%esp)
 8295557:	08 
 8295558:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 829555f:	08 
 8295560:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8295567:	e8 9e e6 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 829556c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 829556f:	c9                   	leave
 8295570:	c3                   	ret
 8295571:	90                   	nop

```

```c
// CGameManager::GetQuickParty @ 0x8295450

/* CGameManager::GetQuickParty() */

CQuickParty * __thiscall CGameManager::GetQuickParty(CGameManager *this)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  _Hashtable_iterator<std::pair<int_const,QuickParty::CQuickParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,QuickParty::CQuickParty*>>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
  local_28 [8];
  undefined4 local_20;
  hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
  local_1c [8];
  int local_14;
  CQuickParty *local_10;
  
  local_10 = (CQuickParty *)
             StaticPool<QuickParty::CQuickParty,300>::Acquire
                       ((StaticPool<QuickParty::CQuickParty,300> *)(this + 0x1cc));
  if (local_10 == (CQuickParty *)0x0) {
    local_10 = (CQuickParty *)0x0;
  }
  else {
    iVar2 = StaticPool<QuickParty::CQuickParty,300>::GetIndex
                      ((StaticPool<QuickParty::CQuickParty,300> *)(this + 0x1cc),local_10);
    QuickParty::CQuickParty::set_quick_party_index(local_10,iVar2);
    local_20 = QuickParty::CQuickParty::get_quick_party_index(local_10);
    __gnu_cxx::
    hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
    ::find((int *)local_28);
    __gnu_cxx::
    hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
    ::end(local_1c);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,QuickParty::CQuickParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,QuickParty::CQuickParty*>>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
            ::operator==(local_28,(_Hashtable_iterator *)local_1c);
    if (cVar1 == '\0') {
      uVar4 = QuickParty::CQuickParty::get_quick_party_index(local_10);
      LogManager::logFormat
                (1,"App.cpp","QuickParty::CQuickParty* CGameManager::GetQuickParty()",0xb64,
                 &DAT_08c16bf8,uVar4);
    }
    else {
      local_14 = QuickParty::CQuickParty::get_quick_party_index(local_10);
      puVar3 = (undefined4 *)
               __gnu_cxx::
               hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
               ::operator[]((hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
                             *)(this + 0x2d4),&local_14);
      *puVar3 = local_10;
    }
  }
  return local_10;
}

```

---

## GetQuickPartyIdx

```asm
// === 082955e2 CGameManager::GetQuickPartyIdx  [0x082955e2-0x8295607] ===
 82955e2:	55                   	push   %ebp
 82955e3:	89 e5                	mov    %esp,%ebp
 82955e5:	83 ec 28             	sub    $0x28,%esp
 82955e8:	8b 45 08             	mov    0x8(%ebp),%eax
 82955eb:	8d 90 cc 01 00 00    	lea    0x1cc(%eax),%edx
 82955f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82955f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82955f8:	89 14 24             	mov    %edx,(%esp)
 82955fb:	e8 cc c2 01 00       	call   82b18cc <_ZN10StaticPoolIN10QuickParty11CQuickPartyELi300EE8GetIndexEPS1_>
 8295600:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8295603:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8295606:	c9                   	leave
 8295607:	c3                   	ret

```

```c
// CGameManager::GetQuickPartyIdx @ 0x82955e2

/* CGameManager::GetQuickPartyIdx(QuickParty::CQuickParty*) */

undefined4 __thiscall CGameManager::GetQuickPartyIdx(CGameManager *this,CQuickParty *param_1)

{
  undefined4 uVar1;
  
  uVar1 = StaticPool<QuickParty::CQuickParty,300>::GetIndex
                    ((StaticPool<QuickParty::CQuickParty,300> *)(this + 0x1cc),param_1);
  return uVar1;
}

```

---

## GetQuickPartyRewardManager

```asm
// === 08298e24 CGameManager::GetQuickPartyRewardManager  [0x08298e24-0x8298e87] ===
 8298e24:	55                   	push   %ebp
 8298e25:	89 e5                	mov    %esp,%ebp
 8298e27:	57                   	push   %edi
 8298e28:	56                   	push   %esi
 8298e29:	53                   	push   %ebx
 8298e2a:	83 ec 1c             	sub    $0x1c,%esp
 8298e2d:	8b 45 08             	mov    0x8(%ebp),%eax
 8298e30:	8b 80 00 03 00 00    	mov    0x300(%eax),%eax
 8298e36:	85 c0                	test   %eax,%eax
 8298e38:	75 3d                	jne    8298e77 <_ZN12CGameManager26GetQuickPartyRewardManagerEv+0x53>
 8298e3a:	c7 04 24 28 02 00 00 	movl   $0x228,(%esp)
 8298e41:	e8 0a b6 48 00       	call   8724450 <_Znwj>
 8298e46:	89 c3                	mov    %eax,%ebx
 8298e48:	89 d8                	mov    %ebx,%eax
 8298e4a:	89 04 24             	mov    %eax,(%esp)
 8298e4d:	e8 36 48 fd ff       	call   826d688 <_ZN10QuickParty24CQuickPartyRewardManagerC1Ev>
 8298e52:	eb 18                	jmp    8298e6c <_ZN12CGameManager26GetQuickPartyRewardManagerEv+0x48>
 8298e54:	89 d6                	mov    %edx,%esi
 8298e56:	89 c7                	mov    %eax,%edi
 8298e58:	89 1c 24             	mov    %ebx,(%esp)
 8298e5b:	e8 90 b6 48 00       	call   87244f0 <_ZdlPv>
 8298e60:	89 f8                	mov    %edi,%eax
 8298e62:	89 f2                	mov    %esi,%edx
 8298e64:	89 04 24             	mov    %eax,(%esp)
 8298e67:	e8 e4 a8 84 00       	call   8ae3750 <_Unwind_Resume>
 8298e6c:	89 da                	mov    %ebx,%edx
 8298e6e:	8b 45 08             	mov    0x8(%ebp),%eax
 8298e71:	89 90 00 03 00 00    	mov    %edx,0x300(%eax)
 8298e77:	8b 45 08             	mov    0x8(%ebp),%eax
 8298e7a:	8b 80 00 03 00 00    	mov    0x300(%eax),%eax
 8298e80:	83 c4 1c             	add    $0x1c,%esp
 8298e83:	5b                   	pop    %ebx
 8298e84:	5e                   	pop    %esi
 8298e85:	5f                   	pop    %edi
 8298e86:	5d                   	pop    %ebp
 8298e87:	c3                   	ret

```

```c
// CGameManager::GetQuickPartyRewardManager @ 0x8298e24

/* CGameManager::GetQuickPartyRewardManager() */

undefined4 __thiscall CGameManager::GetQuickPartyRewardManager(CGameManager *this)

{
  CQuickPartyRewardManager *this_00;
  
  if (*(int *)(this + 0x300) == 0) {
    this_00 = operator_new(0x228);
                    /* try { // try from 08298e4d to 08298e51 has its CatchHandler @ 08298e54 */
    QuickParty::CQuickPartyRewardManager::CQuickPartyRewardManager(this_00);
    *(CQuickPartyRewardManager **)(this + 0x300) = this_00;
  }
  return *(undefined4 *)(this + 0x300);
}

```

---

## GetQuickPartySystemManager

```asm
// === 08298dc0 CGameManager::GetQuickPartySystemManager  [0x08298dc0-0x8298e23] ===
 8298dc0:	55                   	push   %ebp
 8298dc1:	89 e5                	mov    %esp,%ebp
 8298dc3:	57                   	push   %edi
 8298dc4:	56                   	push   %esi
 8298dc5:	53                   	push   %ebx
 8298dc6:	83 ec 1c             	sub    $0x1c,%esp
 8298dc9:	8b 45 08             	mov    0x8(%ebp),%eax
 8298dcc:	8b 80 fc 02 00 00    	mov    0x2fc(%eax),%eax
 8298dd2:	85 c0                	test   %eax,%eax
 8298dd4:	75 3d                	jne    8298e13 <_ZN12CGameManager26GetQuickPartySystemManagerEv+0x53>
 8298dd6:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 8298ddd:	e8 6e b6 48 00       	call   8724450 <_Znwj>
 8298de2:	89 c3                	mov    %eax,%ebx
 8298de4:	89 d8                	mov    %ebx,%eax
 8298de6:	89 04 24             	mov    %eax,(%esp)
 8298de9:	e8 c8 0d fd ff       	call   8269bb6 <_ZN10QuickParty24CQuickPartySystemManagerC1Ev>
 8298dee:	eb 18                	jmp    8298e08 <_ZN12CGameManager26GetQuickPartySystemManagerEv+0x48>
 8298df0:	89 d6                	mov    %edx,%esi
 8298df2:	89 c7                	mov    %eax,%edi
 8298df4:	89 1c 24             	mov    %ebx,(%esp)
 8298df7:	e8 f4 b6 48 00       	call   87244f0 <_ZdlPv>
 8298dfc:	89 f8                	mov    %edi,%eax
 8298dfe:	89 f2                	mov    %esi,%edx
 8298e00:	89 04 24             	mov    %eax,(%esp)
 8298e03:	e8 48 a9 84 00       	call   8ae3750 <_Unwind_Resume>
 8298e08:	89 da                	mov    %ebx,%edx
 8298e0a:	8b 45 08             	mov    0x8(%ebp),%eax
 8298e0d:	89 90 fc 02 00 00    	mov    %edx,0x2fc(%eax)
 8298e13:	8b 45 08             	mov    0x8(%ebp),%eax
 8298e16:	8b 80 fc 02 00 00    	mov    0x2fc(%eax),%eax
 8298e1c:	83 c4 1c             	add    $0x1c,%esp
 8298e1f:	5b                   	pop    %ebx
 8298e20:	5e                   	pop    %esi
 8298e21:	5f                   	pop    %edi
 8298e22:	5d                   	pop    %ebp
 8298e23:	c3                   	ret

```

```c
// CGameManager::GetQuickPartySystemManager @ 0x8298dc0

/* CGameManager::GetQuickPartySystemManager() */

undefined4 __thiscall CGameManager::GetQuickPartySystemManager(CGameManager *this)

{
  CQuickPartySystemManager *this_00;
  
  if (*(int *)(this + 0x2fc) == 0) {
    this_00 = operator_new(0x18);
                    /* try { // try from 08298de9 to 08298ded has its CatchHandler @ 08298df0 */
    QuickParty::CQuickPartySystemManager::CQuickPartySystemManager(this_00);
    *(CQuickPartySystemManager **)(this + 0x2fc) = this_00;
  }
  return *(undefined4 *)(this + 0x2fc);
}

```

---

## GetQuickParty_08295572

```asm
// === 08295572 CGameManager::GetQuickParty  [0x08295572-0x82955e1] ===
 8295572:	55                   	push   %ebp
 8295573:	89 e5                	mov    %esp,%ebp
 8295575:	83 ec 28             	sub    $0x28,%esp
 8295578:	8b 45 08             	mov    0x8(%ebp),%eax
 829557b:	8d 88 d4 02 00 00    	lea    0x2d4(%eax),%ecx
 8295581:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8295584:	8d 55 0c             	lea    0xc(%ebp),%edx
 8295587:	89 54 24 08          	mov    %edx,0x8(%esp)
 829558b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 829558f:	89 04 24             	mov    %eax,(%esp)
 8295592:	e8 65 c4 01 00       	call   82b19fc <_ZN9__gnu_cxx8hash_mapIiPN10QuickParty11CQuickPartyENS_4hashIiEESt8equal_toIiESaIS3_EE4findERKi>
 8295597:	83 ec 04             	sub    $0x4,%esp
 829559a:	8b 45 08             	mov    0x8(%ebp),%eax
 829559d:	8d 90 d4 02 00 00    	lea    0x2d4(%eax),%edx
 82955a3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82955a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 82955aa:	89 04 24             	mov    %eax,(%esp)
 82955ad:	e8 76 c4 01 00       	call   82b1a28 <_ZN9__gnu_cxx8hash_mapIiPN10QuickParty11CQuickPartyENS_4hashIiEESt8equal_toIiESaIS3_EE3endEv>
 82955b2:	83 ec 04             	sub    $0x4,%esp
 82955b5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82955b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 82955bc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82955bf:	89 04 24             	mov    %eax,(%esp)
 82955c2:	e8 87 c4 01 00       	call   82b1a4e <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiPN10QuickParty11CQuickPartyEEiNS_4hashIiEESt10_Select1stIS6_ESt8equal_toIiESaIS5_EEeqERKSE_>
 82955c7:	84 c0                	test   %al,%al
 82955c9:	74 07                	je     82955d2 <_ZN12CGameManager13GetQuickPartyEi+0x60>
 82955cb:	b8 00 00 00 00       	mov    $0x0,%eax
 82955d0:	eb 0e                	jmp    82955e0 <_ZN12CGameManager13GetQuickPartyEi+0x6e>
 82955d2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82955d5:	89 04 24             	mov    %eax,(%esp)
 82955d8:	e8 c3 c4 01 00       	call   82b1aa0 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiPN10QuickParty11CQuickPartyEEiNS_4hashIiEESt10_Select1stIS6_ESt8equal_toIiESaIS5_EEptEv>
 82955dd:	8b 40 04             	mov    0x4(%eax),%eax
 82955e0:	c9                   	leave
 82955e1:	c3                   	ret

```

```c
// CGameManager::GetQuickParty @ 0x8295572

/* CGameManager::GetQuickParty(int) */

undefined4 CGameManager::GetQuickParty(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Hashtable_iterator<std::pair<int_const,QuickParty::CQuickParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,QuickParty::CQuickParty*>>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
  local_1c [8];
  hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
  local_14 [16];
  
  __gnu_cxx::
  hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
  ::find((int *)local_1c);
  __gnu_cxx::
  hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
  ::end(local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,QuickParty::CQuickParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,QuickParty::CQuickParty*>>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
          ::operator==(local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,QuickParty::CQuickParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,QuickParty::CQuickParty*>>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
            ::operator->(local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## GetSharedServerMessageManager

```asm
// === 08298eec CGameManager::GetSharedServerMessageManager  [0x08298eec-0x8298f5f] ===
 8298eec:	55                   	push   %ebp
 8298eed:	89 e5                	mov    %esp,%ebp
 8298eef:	57                   	push   %edi
 8298ef0:	56                   	push   %esi
 8298ef1:	53                   	push   %ebx
 8298ef2:	83 ec 1c             	sub    $0x1c,%esp
 8298ef5:	8b 45 08             	mov    0x8(%ebp),%eax
 8298ef8:	8b 80 08 03 00 00    	mov    0x308(%eax),%eax
 8298efe:	85 c0                	test   %eax,%eax
 8298f00:	75 4c                	jne    8298f4e <_ZN12CGameManager29GetSharedServerMessageManagerEv+0x62>
 8298f02:	e8 94 32 e3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8298f07:	8d b0 d8 07 00 00    	lea    0x7d8(%eax),%esi
 8298f0d:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 8298f14:	e8 37 b5 48 00       	call   8724450 <_Znwj>
 8298f19:	89 c3                	mov    %eax,%ebx
 8298f1b:	89 d8                	mov    %ebx,%eax
 8298f1d:	89 74 24 04          	mov    %esi,0x4(%esp)
 8298f21:	89 04 24             	mov    %eax,(%esp)
 8298f24:	e8 e5 78 36 00       	call   860080e <_ZN27CSharedServerMessageManagerC1EP25stSharedServerMessageInfo>
 8298f29:	eb 18                	jmp    8298f43 <_ZN12CGameManager29GetSharedServerMessageManagerEv+0x57>
 8298f2b:	89 d6                	mov    %edx,%esi
 8298f2d:	89 c7                	mov    %eax,%edi
 8298f2f:	89 1c 24             	mov    %ebx,(%esp)
 8298f32:	e8 b9 b5 48 00       	call   87244f0 <_ZdlPv>
 8298f37:	89 f8                	mov    %edi,%eax
 8298f39:	89 f2                	mov    %esi,%edx
 8298f3b:	89 04 24             	mov    %eax,(%esp)
 8298f3e:	e8 0d a8 84 00       	call   8ae3750 <_Unwind_Resume>
 8298f43:	89 da                	mov    %ebx,%edx
 8298f45:	8b 45 08             	mov    0x8(%ebp),%eax
 8298f48:	89 90 08 03 00 00    	mov    %edx,0x308(%eax)
 8298f4e:	8b 45 08             	mov    0x8(%ebp),%eax
 8298f51:	8b 80 08 03 00 00    	mov    0x308(%eax),%eax
 8298f57:	83 c4 1c             	add    $0x1c,%esp
 8298f5a:	5b                   	pop    %ebx
 8298f5b:	5e                   	pop    %esi
 8298f5c:	5f                   	pop    %edi
 8298f5d:	5d                   	pop    %ebp
 8298f5e:	c3                   	ret
 8298f5f:	90                   	nop

```

```c
// CGameManager::GetSharedServerMessageManager @ 0x8298eec

/* CGameManager::GetSharedServerMessageManager() */

undefined4 __thiscall CGameManager::GetSharedServerMessageManager(CGameManager *this)

{
  int iVar1;
  CSharedServerMessageManager *this_00;
  
  if (*(int *)(this + 0x308) == 0) {
    iVar1 = G_CDataManager();
    this_00 = operator_new(0x18);
                    /* try { // try from 08298f24 to 08298f28 has its CatchHandler @ 08298f2b */
    CSharedServerMessageManager::CSharedServerMessageManager
              (this_00,(stSharedServerMessageInfo *)(iVar1 + 0x7d8));
    *(CSharedServerMessageManager **)(this + 0x308) = this_00;
  }
  return *(undefined4 *)(this + 0x308);
}

```

---

## GetSpecialItemRoutingManager

```asm
// === 08298fc4 CGameManager::GetSpecialItemRoutingManager  [0x08298fc4-0x8299027] ===
 8298fc4:	55                   	push   %ebp
 8298fc5:	89 e5                	mov    %esp,%ebp
 8298fc7:	57                   	push   %edi
 8298fc8:	56                   	push   %esi
 8298fc9:	53                   	push   %ebx
 8298fca:	83 ec 1c             	sub    $0x1c,%esp
 8298fcd:	8b 45 08             	mov    0x8(%ebp),%eax
 8298fd0:	8b 80 10 03 00 00    	mov    0x310(%eax),%eax
 8298fd6:	85 c0                	test   %eax,%eax
 8298fd8:	75 3d                	jne    8299017 <_ZN12CGameManager28GetSpecialItemRoutingManagerEv+0x53>
 8298fda:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8298fe1:	e8 6a b4 48 00       	call   8724450 <_Znwj>
 8298fe6:	89 c3                	mov    %eax,%ebx
 8298fe8:	89 d8                	mov    %ebx,%eax
 8298fea:	89 04 24             	mov    %eax,(%esp)
 8298fed:	e8 d6 19 37 00       	call   860a9c8 <_ZN26CSpecialItemRoutingManagerC1Ev>
 8298ff2:	eb 18                	jmp    829900c <_ZN12CGameManager28GetSpecialItemRoutingManagerEv+0x48>
 8298ff4:	89 d6                	mov    %edx,%esi
 8298ff6:	89 c7                	mov    %eax,%edi
 8298ff8:	89 1c 24             	mov    %ebx,(%esp)
 8298ffb:	e8 f0 b4 48 00       	call   87244f0 <_ZdlPv>
 8299000:	89 f8                	mov    %edi,%eax
 8299002:	89 f2                	mov    %esi,%edx
 8299004:	89 04 24             	mov    %eax,(%esp)
 8299007:	e8 44 a7 84 00       	call   8ae3750 <_Unwind_Resume>
 829900c:	89 da                	mov    %ebx,%edx
 829900e:	8b 45 08             	mov    0x8(%ebp),%eax
 8299011:	89 90 10 03 00 00    	mov    %edx,0x310(%eax)
 8299017:	8b 45 08             	mov    0x8(%ebp),%eax
 829901a:	8b 80 10 03 00 00    	mov    0x310(%eax),%eax
 8299020:	83 c4 1c             	add    $0x1c,%esp
 8299023:	5b                   	pop    %ebx
 8299024:	5e                   	pop    %esi
 8299025:	5f                   	pop    %edi
 8299026:	5d                   	pop    %ebp
 8299027:	c3                   	ret

```

```c
// CGameManager::GetSpecialItemRoutingManager @ 0x8298fc4

/* CGameManager::GetSpecialItemRoutingManager() */

undefined4 __thiscall CGameManager::GetSpecialItemRoutingManager(CGameManager *this)

{
  CSpecialItemRoutingManager *this_00;
  
  if (*(int *)(this + 0x310) == 0) {
    this_00 = operator_new(1);
                    /* try { // try from 08298fed to 08298ff1 has its CatchHandler @ 08298ff4 */
    CSpecialItemRoutingManager::CSpecialItemRoutingManager(this_00);
    *(CSpecialItemRoutingManager **)(this + 0x310) = this_00;
  }
  return *(undefined4 *)(this + 0x310);
}

```

---

## GetTradeIdx

```asm
// === 08294dba CGameManager::GetTradeIdx  [0x08294dba-0x8294ddd] ===
 8294dba:	55                   	push   %ebp
 8294dbb:	89 e5                	mov    %esp,%ebp
 8294dbd:	83 ec 28             	sub    $0x28,%esp
 8294dc0:	8b 45 08             	mov    0x8(%ebp),%eax
 8294dc3:	8d 50 7c             	lea    0x7c(%eax),%edx
 8294dc6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8294dc9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294dcd:	89 14 24             	mov    %edx,(%esp)
 8294dd0:	e8 db bc 01 00       	call   82b0ab0 <_ZN10StaticPoolI11CTradeSpaceLi300EE8GetIndexEPS0_>
 8294dd5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8294dd8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8294ddb:	c9                   	leave
 8294ddc:	c3                   	ret
 8294ddd:	90                   	nop

```

```c
// CGameManager::GetTradeIdx @ 0x8294dba

/* CGameManager::GetTradeIdx(CTradeSpace*) */

undefined4 __thiscall CGameManager::GetTradeIdx(CGameManager *this,CTradeSpace *param_1)

{
  undefined4 uVar1;
  
  uVar1 = StaticPool<CTradeSpace,300>::GetIndex
                    ((StaticPool<CTradeSpace,300> *)(this + 0x7c),param_1);
  return uVar1;
}

```

---

## GetTradeSpace

```asm
// === 08294d3c CGameManager::GetTradeSpace  [0x08294d3c-0x8294d89] ===
 8294d3c:	55                   	push   %ebp
 8294d3d:	89 e5                	mov    %esp,%ebp
 8294d3f:	83 ec 28             	sub    $0x28,%esp
 8294d42:	8b 45 08             	mov    0x8(%ebp),%eax
 8294d45:	83 c0 7c             	add    $0x7c,%eax
 8294d48:	89 04 24             	mov    %eax,(%esp)
 8294d4b:	e8 32 bc 01 00       	call   82b0982 <_ZN10StaticPoolI11CTradeSpaceLi300EE7AcquireEv>
 8294d50:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8294d53:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8294d57:	75 07                	jne    8294d60 <_ZN12CGameManager13GetTradeSpaceEv+0x24>
 8294d59:	b8 00 00 00 00       	mov    $0x0,%eax
 8294d5e:	eb 27                	jmp    8294d87 <_ZN12CGameManager13GetTradeSpaceEv+0x4b>
 8294d60:	8b 45 08             	mov    0x8(%ebp),%eax
 8294d63:	8d 50 7c             	lea    0x7c(%eax),%edx
 8294d66:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8294d69:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294d6d:	89 14 24             	mov    %edx,(%esp)
 8294d70:	e8 3b bd 01 00       	call   82b0ab0 <_ZN10StaticPoolI11CTradeSpaceLi300EE8GetIndexEPS0_>
 8294d75:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294d79:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8294d7c:	89 04 24             	mov    %eax,(%esp)
 8294d7f:	e8 70 f4 00 00       	call   82a41f4 <_ZN11CTradeSpace6SetIDXEi>
 8294d84:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8294d87:	c9                   	leave
 8294d88:	c3                   	ret
 8294d89:	90                   	nop

```

```c
// CGameManager::GetTradeSpace @ 0x8294d3c

/* CGameManager::GetTradeSpace() */

CTradeSpace * __thiscall CGameManager::GetTradeSpace(CGameManager *this)

{
  CTradeSpace *this_00;
  int iVar1;
  
  this_00 = (CTradeSpace *)
            StaticPool<CTradeSpace,300>::Acquire((StaticPool<CTradeSpace,300> *)(this + 0x7c));
  if (this_00 == (CTradeSpace *)0x0) {
    this_00 = (CTradeSpace *)0x0;
  }
  else {
    iVar1 = StaticPool<CTradeSpace,300>::GetIndex
                      ((StaticPool<CTradeSpace,300> *)(this + 0x7c),this_00);
    CTradeSpace::SetIDX(this_00,iVar1);
  }
  return this_00;
}

```

---

## GetTradeSpace_08294d8a

```asm
// === 08294d8a CGameManager::GetTradeSpace  [0x08294d8a-0x8294db9] ===
 8294d8a:	55                   	push   %ebp
 8294d8b:	89 e5                	mov    %esp,%ebp
 8294d8d:	83 ec 28             	sub    $0x28,%esp
 8294d90:	8b 45 08             	mov    0x8(%ebp),%eax
 8294d93:	8d 50 7c             	lea    0x7c(%eax),%edx
 8294d96:	8b 45 0c             	mov    0xc(%ebp),%eax
 8294d99:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294d9d:	89 14 24             	mov    %edx,(%esp)
 8294da0:	e8 47 be 01 00       	call   82b0bec <_ZN10StaticPoolI11CTradeSpaceLi300EE3GetEi>
 8294da5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8294da8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8294dac:	75 07                	jne    8294db5 <_ZN12CGameManager13GetTradeSpaceEi+0x2b>
 8294dae:	b8 00 00 00 00       	mov    $0x0,%eax
 8294db3:	eb 03                	jmp    8294db8 <_ZN12CGameManager13GetTradeSpaceEi+0x2e>
 8294db5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8294db8:	c9                   	leave
 8294db9:	c3                   	ret

```

```c
// CGameManager::GetTradeSpace @ 0x8294d8a

/* CGameManager::GetTradeSpace(int) */

int __thiscall CGameManager::GetTradeSpace(CGameManager *this,int param_1)

{
  int iVar1;
  
  iVar1 = StaticPool<CTradeSpace,300>::Get((StaticPool<CTradeSpace,300> *)(this + 0x7c),param_1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}

```

---

## GetUserByAccId

```asm
// === 082948c6 CGameManager::GetUserByAccId  [0x082948c6-0x82949fb] ===
 82948c6:	55                   	push   %ebp
 82948c7:	89 e5                	mov    %esp,%ebp
 82948c9:	56                   	push   %esi
 82948ca:	53                   	push   %ebx
 82948cb:	83 ec 50             	sub    $0x50,%esp
 82948ce:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82948d1:	89 04 24             	mov    %eax,(%esp)
 82948d4:	e8 85 be 01 00       	call   82b075e <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEC1Ev>
 82948d9:	8b 45 08             	mov    0x8(%ebp),%eax
 82948dc:	8d 88 2c 02 00 00    	lea    0x22c(%eax),%ecx
 82948e2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82948e5:	8d 55 0c             	lea    0xc(%ebp),%edx
 82948e8:	89 54 24 08          	mov    %edx,0x8(%esp)
 82948ec:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82948f0:	89 04 24             	mov    %eax,(%esp)
 82948f3:	e8 74 be 01 00       	call   82b076c <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 82948f8:	83 ec 04             	sub    $0x4,%esp
 82948fb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82948fe:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8294901:	8b 45 08             	mov    0x8(%ebp),%eax
 8294904:	8d 90 2c 02 00 00    	lea    0x22c(%eax),%edx
 829490a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 829490d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8294911:	89 04 24             	mov    %eax,(%esp)
 8294914:	e8 c1 f1 e3 ff       	call   80d3ada <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 8294919:	83 ec 04             	sub    $0x4,%esp
 829491c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 829491f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294923:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8294926:	89 04 24             	mov    %eax,(%esp)
 8294929:	e8 10 c4 e3 ff       	call   80d0d3e <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEeqERKS5_>
 829492e:	84 c0                	test   %al,%al
 8294930:	74 0a                	je     829493c <_ZN12CGameManager14GetUserByAccIdEj+0x76>
 8294932:	b8 00 00 00 00       	mov    $0x0,%eax
 8294937:	e9 b5 00 00 00       	jmp    82949f1 <_ZN12CGameManager14GetUserByAccIdEj+0x12b>
 829493c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 829493f:	89 04 24             	mov    %eax,(%esp)
 8294942:	e8 51 be 01 00       	call   82b0798 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 8294947:	8b 40 04             	mov    0x4(%eax),%eax
 829494a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 829494d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8294950:	89 04 24             	mov    %eax,(%esp)
 8294953:	e8 16 5a e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8294958:	8b 55 0c             	mov    0xc(%ebp),%edx
 829495b:	39 d0                	cmp    %edx,%eax
 829495d:	0f 94 c0             	sete   %al
 8294960:	84 c0                	test   %al,%al
 8294962:	74 08                	je     829496c <_ZN12CGameManager14GetUserByAccIdEj+0xa6>
 8294964:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8294967:	e9 85 00 00 00       	jmp    82949f1 <_ZN12CGameManager14GetUserByAccIdEj+0x12b>
 829496c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 829496f:	89 04 24             	mov    %eax,(%esp)
 8294972:	e8 f7 59 e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8294977:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 829497e:	00 
 829497f:	89 04 24             	mov    %eax,(%esp)
 8294982:	e8 c4 46 e7 ff       	call   810904b <_Z14NumberToStringji>
 8294987:	89 c6                	mov    %eax,%esi
 8294989:	8b 45 0c             	mov    0xc(%ebp),%eax
 829498c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8294993:	00 
 8294994:	89 04 24             	mov    %eax,(%esp)
 8294997:	e8 af 46 e7 ff       	call   810904b <_Z14NumberToStringji>
 829499c:	89 c3                	mov    %eax,%ebx
 829499e:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 82949a5:	00 
 82949a6:	c7 44 24 08 ab 09 00 	movl   $0x9ab,0x8(%esp)
 82949ad:	00 
 82949ae:	c7 44 24 04 00 b7 c1 	movl   $0x8c1b700,0x4(%esp)
 82949b5:	08 
 82949b6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82949b9:	89 04 24             	mov    %eax,(%esp)
 82949bc:	e8 57 ad 2b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82949c1:	89 74 24 14          	mov    %esi,0x14(%esp)
 82949c5:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 82949c9:	c7 44 24 0c ab 09 00 	movl   $0x9ab,0xc(%esp)
 82949d0:	00 
 82949d1:	c7 44 24 08 00 b7 c1 	movl   $0x8c1b700,0x8(%esp)
 82949d8:	08 
 82949d9:	c7 44 24 04 f4 6a c1 	movl   $0x8c16af4,0x4(%esp)
 82949e0:	08 
 82949e1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82949e4:	89 04 24             	mov    %eax,(%esp)
 82949e7:	e8 9c ad 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82949ec:	b8 00 00 00 00       	mov    $0x0,%eax
 82949f1:	8d 65 f8             	lea    -0x8(%ebp),%esp
 82949f4:	83 c4 00             	add    $0x0,%esp
 82949f7:	5b                   	pop    %ebx
 82949f8:	5e                   	pop    %esi
 82949f9:	5d                   	pop    %ebp
 82949fa:	c3                   	ret
 82949fb:	90                   	nop

```

```c
// CGameManager::GetUserByAccId @ 0x82948c6

/* CGameManager::GetUserByAccId(unsigned int) */

CUser * __thiscall CGameManager::GetUserByAccId(CGameManager *this,uint param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint local_30 [2];
  uint local_28;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_24 [4];
  cMyTrace local_20 [16];
  CUser *local_10;
  
  std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_28);
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::find(local_30);
  local_28 = local_30[0];
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::end(local_24);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator==
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_28,
                     (_Rb_tree_iterator *)local_24);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_28);
    local_10 = *(CUser **)(iVar2 + 4);
    uVar3 = CUser::get_acc_id(local_10);
    if (uVar3 != param_1) {
      uVar3 = CUser::get_acc_id(local_10);
      uVar4 = NumberToString(uVar3,1);
      uVar5 = NumberToString(param_1,0);
      cMyTrace::cMyTrace(local_20,
                         "CUser* CGameManager::GetUserByAccId(memberIdentificationNumber_t)",0x9ab,5
                        );
      cMyTrace::operator()
                (local_20,"[%s][%d][IN m_id: %s][Map m_id: %s]",
                 "CUser* CGameManager::GetUserByAccId(memberIdentificationNumber_t)",0x9ab,uVar5,
                 uVar4);
      local_10 = (CUser *)0x0;
    }
  }
  else {
    local_10 = (CUser *)0x0;
  }
  return local_10;
}

```

---

## GetWarRoom

```asm
// === 082a24e8 CGameManager::GetWarRoom  [0x082a24e8-0x82a25cf] ===
 82a24e8:	55                   	push   %ebp
 82a24e9:	89 e5                	mov    %esp,%ebp
 82a24eb:	83 ec 38             	sub    $0x38,%esp
 82a24ee:	8b 45 08             	mov    0x8(%ebp),%eax
 82a24f1:	05 0c 01 00 00       	add    $0x10c,%eax
 82a24f6:	89 04 24             	mov    %eax,(%esp)
 82a24f9:	e8 bc 24 01 00       	call   82b49ba <_ZN10StaticPoolI7WarRoomLi40EE7AcquireEv>
 82a24fe:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82a2501:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82a2505:	75 0a                	jne    82a2511 <_ZN12CGameManager10GetWarRoomEv+0x29>
 82a2507:	b8 00 00 00 00       	mov    $0x0,%eax
 82a250c:	e9 bd 00 00 00       	jmp    82a25ce <_ZN12CGameManager10GetWarRoomEv+0xe6>
 82a2511:	8b 45 08             	mov    0x8(%ebp),%eax
 82a2514:	8d 90 0c 01 00 00    	lea    0x10c(%eax),%edx
 82a251a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a251d:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a2521:	89 14 24             	mov    %edx,(%esp)
 82a2524:	e8 bf 25 01 00       	call   82b4ae8 <_ZN10StaticPoolI7WarRoomLi40EE8GetIndexEPS0_>
 82a2529:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a252d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a2530:	89 04 24             	mov    %eax,(%esp)
 82a2533:	e8 fc 82 41 00       	call   86ba834 <_ZN7WarRoom8SetIndexEi>
 82a2538:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a253b:	89 04 24             	mov    %eax,(%esp)
 82a253e:	e8 47 c9 f8 ff       	call   822ee8a <_ZN7WarRoom8GetIndexEv>
 82a2543:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82a2546:	8b 45 08             	mov    0x8(%ebp),%eax
 82a2549:	8d 88 84 02 00 00    	lea    0x284(%eax),%ecx
 82a254f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82a2552:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 82a2555:	89 54 24 08          	mov    %edx,0x8(%esp)
 82a2559:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82a255d:	89 04 24             	mov    %eax,(%esp)
 82a2560:	e8 c1 26 01 00       	call   82b4c26 <_ZN9__gnu_cxx8hash_mapIiP7WarRoomNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 82a2565:	83 ec 04             	sub    $0x4,%esp
 82a2568:	8b 45 08             	mov    0x8(%ebp),%eax
 82a256b:	8d 90 84 02 00 00    	lea    0x284(%eax),%edx
 82a2571:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82a2574:	89 54 24 04          	mov    %edx,0x4(%esp)
 82a2578:	89 04 24             	mov    %eax,(%esp)
 82a257b:	e8 d2 26 01 00       	call   82b4c52 <_ZN9__gnu_cxx8hash_mapIiP7WarRoomNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 82a2580:	83 ec 04             	sub    $0x4,%esp
 82a2583:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82a2586:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a258a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82a258d:	89 04 24             	mov    %eax,(%esp)
 82a2590:	e8 e3 26 01 00       	call   82b4c78 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP7WarRoomEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEeqERKSD_>
 82a2595:	84 c0                	test   %al,%al
 82a2597:	74 30                	je     82a25c9 <_ZN12CGameManager10GetWarRoomEv+0xe1>
 82a2599:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a259c:	89 04 24             	mov    %eax,(%esp)
 82a259f:	e8 e6 c8 f8 ff       	call   822ee8a <_ZN7WarRoom8GetIndexEv>
 82a25a4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82a25a7:	8b 45 08             	mov    0x8(%ebp),%eax
 82a25aa:	8d 90 84 02 00 00    	lea    0x284(%eax),%edx
 82a25b0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82a25b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a25b7:	89 14 24             	mov    %edx,(%esp)
 82a25ba:	e8 cd 26 01 00       	call   82b4c8c <_ZN9__gnu_cxx8hash_mapIiP7WarRoomNS_4hashIiEESt8equal_toIiESaIS2_EEixERKi>
 82a25bf:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82a25c2:	89 10                	mov    %edx,(%eax)
 82a25c4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a25c7:	eb 05                	jmp    82a25ce <_ZN12CGameManager10GetWarRoomEv+0xe6>
 82a25c9:	b8 00 00 00 00       	mov    $0x0,%eax
 82a25ce:	c9                   	leave
 82a25cf:	c3                   	ret

```

```c
// CGameManager::GetWarRoom @ 0x82a24e8

/* CGameManager::GetWarRoom() */

WarRoom * __thiscall CGameManager::GetWarRoom(CGameManager *this)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_28 [8];
  undefined4 local_20;
  hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_1c [8];
  int local_14;
  WarRoom *local_10;
  
  local_10 = (WarRoom *)StaticPool<WarRoom,40>::Acquire((StaticPool<WarRoom,40> *)(this + 0x10c));
  if (local_10 == (WarRoom *)0x0) {
    local_10 = (WarRoom *)0x0;
  }
  else {
    iVar2 = StaticPool<WarRoom,40>::GetIndex((StaticPool<WarRoom,40> *)(this + 0x10c),local_10);
    WarRoom::SetIndex(local_10,iVar2);
    local_20 = WarRoom::GetIndex(local_10);
    __gnu_cxx::
    hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>::find
              ((int *)local_28);
    __gnu_cxx::
    hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>::end
              (local_1c);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
            ::operator==(local_28,(_Hashtable_iterator *)local_1c);
    if (cVar1 == '\0') {
      local_10 = (WarRoom *)0x0;
    }
    else {
      local_14 = WarRoom::GetIndex(local_10);
      puVar3 = (undefined4 *)
               __gnu_cxx::
               hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
               ::operator[]((hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
                             *)(this + 0x284),&local_14);
      *puVar3 = local_10;
    }
  }
  return local_10;
}

```

---

## GetWarRoomIdx

```asm
// === 082a2640 CGameManager::GetWarRoomIdx  [0x082a2640-0x82a2665] ===
 82a2640:	55                   	push   %ebp
 82a2641:	89 e5                	mov    %esp,%ebp
 82a2643:	83 ec 28             	sub    $0x28,%esp
 82a2646:	8b 45 08             	mov    0x8(%ebp),%eax
 82a2649:	8d 90 0c 01 00 00    	lea    0x10c(%eax),%edx
 82a264f:	8b 45 0c             	mov    0xc(%ebp),%eax
 82a2652:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a2656:	89 14 24             	mov    %edx,(%esp)
 82a2659:	e8 8a 24 01 00       	call   82b4ae8 <_ZN10StaticPoolI7WarRoomLi40EE8GetIndexEPS0_>
 82a265e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82a2661:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a2664:	c9                   	leave
 82a2665:	c3                   	ret

```

```c
// CGameManager::GetWarRoomIdx @ 0x82a2640

/* CGameManager::GetWarRoomIdx(WarRoom*) */

undefined4 __thiscall CGameManager::GetWarRoomIdx(CGameManager *this,WarRoom *param_1)

{
  undefined4 uVar1;
  
  uVar1 = StaticPool<WarRoom,40>::GetIndex((StaticPool<WarRoom,40> *)(this + 0x10c),param_1);
  return uVar1;
}

```

---

## GetWarRoom_082a25d0

```asm
// === 082a25d0 CGameManager::GetWarRoom  [0x082a25d0-0x82a263f] ===
 82a25d0:	55                   	push   %ebp
 82a25d1:	89 e5                	mov    %esp,%ebp
 82a25d3:	83 ec 28             	sub    $0x28,%esp
 82a25d6:	8b 45 08             	mov    0x8(%ebp),%eax
 82a25d9:	8d 88 84 02 00 00    	lea    0x284(%eax),%ecx
 82a25df:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82a25e2:	8d 55 0c             	lea    0xc(%ebp),%edx
 82a25e5:	89 54 24 08          	mov    %edx,0x8(%esp)
 82a25e9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82a25ed:	89 04 24             	mov    %eax,(%esp)
 82a25f0:	e8 31 26 01 00       	call   82b4c26 <_ZN9__gnu_cxx8hash_mapIiP7WarRoomNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 82a25f5:	83 ec 04             	sub    $0x4,%esp
 82a25f8:	8b 45 08             	mov    0x8(%ebp),%eax
 82a25fb:	8d 90 84 02 00 00    	lea    0x284(%eax),%edx
 82a2601:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82a2604:	89 54 24 04          	mov    %edx,0x4(%esp)
 82a2608:	89 04 24             	mov    %eax,(%esp)
 82a260b:	e8 42 26 01 00       	call   82b4c52 <_ZN9__gnu_cxx8hash_mapIiP7WarRoomNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 82a2610:	83 ec 04             	sub    $0x4,%esp
 82a2613:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82a2616:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a261a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82a261d:	89 04 24             	mov    %eax,(%esp)
 82a2620:	e8 53 26 01 00       	call   82b4c78 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP7WarRoomEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEeqERKSD_>
 82a2625:	84 c0                	test   %al,%al
 82a2627:	74 07                	je     82a2630 <_ZN12CGameManager10GetWarRoomEi+0x60>
 82a2629:	b8 00 00 00 00       	mov    $0x0,%eax
 82a262e:	eb 0e                	jmp    82a263e <_ZN12CGameManager10GetWarRoomEi+0x6e>
 82a2630:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82a2633:	89 04 24             	mov    %eax,(%esp)
 82a2636:	e8 8f 26 01 00       	call   82b4cca <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP7WarRoomEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 82a263b:	8b 40 04             	mov    0x4(%eax),%eax
 82a263e:	c9                   	leave
 82a263f:	c3                   	ret

```

```c
// CGameManager::GetWarRoom @ 0x82a25d0

/* CGameManager::GetWarRoom(int) */

undefined4 CGameManager::GetWarRoom(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_1c [8];
  hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_14 [16];
  
  __gnu_cxx::hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  ::find((int *)local_1c);
  __gnu_cxx::hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  ::end(local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
          ::operator==(local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
            ::operator->(local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## IsNoGameGuardApplingUser

```asm
// === 082a3544 CGameManager::IsNoGameGuardApplingUser  [0x082a3544-0x82a35a5] ===
 82a3544:	55                   	push   %ebp
 82a3545:	89 e5                	mov    %esp,%ebp
 82a3547:	83 ec 28             	sub    $0x28,%esp
 82a354a:	8b 45 08             	mov    0x8(%ebp),%eax
 82a354d:	8d 50 1c             	lea    0x1c(%eax),%edx
 82a3550:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82a3553:	89 54 24 04          	mov    %edx,0x4(%esp)
 82a3557:	89 04 24             	mov    %eax,(%esp)
 82a355a:	e8 99 1a 01 00       	call   82b4ff8 <_ZNKSt3setISsSt4lessISsESaISsEE3endEv>
 82a355f:	83 ec 04             	sub    $0x4,%esp
 82a3562:	8b 45 08             	mov    0x8(%ebp),%eax
 82a3565:	8d 48 1c             	lea    0x1c(%eax),%ecx
 82a3568:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82a356b:	8b 55 0c             	mov    0xc(%ebp),%edx
 82a356e:	89 54 24 08          	mov    %edx,0x8(%esp)
 82a3572:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82a3576:	89 04 24             	mov    %eax,(%esp)
 82a3579:	e8 3c 1a 01 00       	call   82b4fba <_ZNSt3setISsSt4lessISsESaISsEE4findERKSs>
 82a357e:	83 ec 04             	sub    $0x4,%esp
 82a3581:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82a3584:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a3588:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82a358b:	89 04 24             	mov    %eax,(%esp)
 82a358e:	e8 8b 1a 01 00       	call   82b501e <_ZNKSt23_Rb_tree_const_iteratorISsEeqERKS0_>
 82a3593:	84 c0                	test   %al,%al
 82a3595:	74 07                	je     82a359e <_ZN12CGameManager24IsNoGameGuardApplingUserERSsPc+0x5a>
 82a3597:	b8 00 00 00 00       	mov    $0x0,%eax
 82a359c:	eb 05                	jmp    82a35a3 <_ZN12CGameManager24IsNoGameGuardApplingUserERSsPc+0x5f>
 82a359e:	b8 01 00 00 00       	mov    $0x1,%eax
 82a35a3:	c9                   	leave
 82a35a4:	c3                   	ret
 82a35a5:	90                   	nop

```

```c
// CGameManager::IsNoGameGuardApplingUser @ 0x82a3544

/* CGameManager::IsNoGameGuardApplingUser(std::string&, char*) */

bool CGameManager::IsNoGameGuardApplingUser(string *param_1,char *param_2)

{
  char cVar1;
  set<std::string,std::less<std::string>,std::allocator<std::string>> local_14 [4];
  string local_10 [3];
  
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::end(local_14);
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::find(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::string>::operator==
                    ((_Rb_tree_const_iterator<std::string> *)local_10,
                     (_Rb_tree_const_iterator *)local_14);
  return cVar1 == '\0';
}

```

---

## PrintWarRoomList

```asm
// === 08298b40 CGameManager::PrintWarRoomList  [0x08298b40-0x8298b47] ===
 8298b40:	55                   	push   %ebp
 8298b41:	89 e5                	mov    %esp,%ebp
 8298b43:	83 ec 50             	sub    $0x50,%esp
 8298b46:	c9                   	leave
 8298b47:	c3                   	ret

```

```c
// CGameManager::PrintWarRoomList @ 0x8298b40

/* CGameManager::PrintWarRoomList() */

void CGameManager::PrintWarRoomList(void)

{
  return;
}

```

---

## PutParty

```asm
// === 08294fc8 CGameManager::PutParty  [0x08294fc8-0x829507b] ===
 8294fc8:	55                   	push   %ebp
 8294fc9:	89 e5                	mov    %esp,%ebp
 8294fcb:	83 ec 38             	sub    $0x38,%esp
 8294fce:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8294fd2:	0f 84 a1 00 00 00    	je     8295079 <_ZN12CGameManager8PutPartyEP6CParty+0xb1>
 8294fd8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8294fdb:	89 04 24             	mov    %eax,(%esp)
 8294fde:	e8 63 88 f9 ff       	call   822d846 <_ZN6CParty13GetPartyIndexEv>
 8294fe3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8294fe6:	8b 45 08             	mov    0x8(%ebp),%eax
 8294fe9:	8d 88 70 02 00 00    	lea    0x270(%eax),%ecx
 8294fef:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8294ff2:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8294ff5:	89 54 24 08          	mov    %edx,0x8(%esp)
 8294ff9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8294ffd:	89 04 24             	mov    %eax,(%esp)
 8295000:	e8 bf c0 01 00       	call   82b10c4 <_ZN9__gnu_cxx8hash_mapIiP6CPartyNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 8295005:	83 ec 04             	sub    $0x4,%esp
 8295008:	8b 45 08             	mov    0x8(%ebp),%eax
 829500b:	8d 90 70 02 00 00    	lea    0x270(%eax),%edx
 8295011:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8295014:	89 54 24 04          	mov    %edx,0x4(%esp)
 8295018:	89 04 24             	mov    %eax,(%esp)
 829501b:	e8 d0 c0 01 00       	call   82b10f0 <_ZN9__gnu_cxx8hash_mapIiP6CPartyNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 8295020:	83 ec 04             	sub    $0x4,%esp
 8295023:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8295026:	89 44 24 04          	mov    %eax,0x4(%esp)
 829502a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 829502d:	89 04 24             	mov    %eax,(%esp)
 8295030:	e8 47 c1 01 00       	call   82b117c <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP6CPartyEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 8295035:	84 c0                	test   %al,%al
 8295037:	74 41                	je     829507a <_ZN12CGameManager8PutPartyEP6CParty+0xb2>
 8295039:	8b 45 0c             	mov    0xc(%ebp),%eax
 829503c:	89 04 24             	mov    %eax,(%esp)
 829503f:	e8 02 88 f9 ff       	call   822d846 <_ZN6CParty13GetPartyIndexEv>
 8295044:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8295047:	8b 45 08             	mov    0x8(%ebp),%eax
 829504a:	8d 90 70 02 00 00    	lea    0x270(%eax),%edx
 8295050:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8295053:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295057:	89 14 24             	mov    %edx,(%esp)
 829505a:	e8 31 c1 01 00       	call   82b1190 <_ZN9__gnu_cxx8hash_mapIiP6CPartyNS_4hashIiEESt8equal_toIiESaIS2_EE5eraseERKi>
 829505f:	8b 45 08             	mov    0x8(%ebp),%eax
 8295062:	8d 90 ac 00 00 00    	lea    0xac(%eax),%edx
 8295068:	8b 45 0c             	mov    0xc(%ebp),%eax
 829506b:	89 44 24 04          	mov    %eax,0x4(%esp)
 829506f:	89 14 24             	mov    %edx,(%esp)
 8295072:	e8 33 c1 01 00       	call   82b11aa <_ZN10StaticPoolI6CPartyLi600EE4FreeEPS0_>
 8295077:	eb 01                	jmp    829507a <_ZN12CGameManager8PutPartyEP6CParty+0xb2>
 8295079:	90                   	nop
 829507a:	c9                   	leave
 829507b:	c3                   	ret

```

```c
// CGameManager::PutParty @ 0x8294fc8

/* CGameManager::PutParty(CParty*) */

void __thiscall CGameManager::PutParty(CGameManager *this,CParty *param_1)

{
  char cVar1;
  _Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
  local_24 [8];
  undefined4 local_1c;
  hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>> local_18 [8]
  ;
  int local_10 [3];
  
  if (param_1 != (CParty *)0x0) {
    local_1c = CParty::GetPartyIndex(param_1);
    __gnu_cxx::hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>
    ::find((int *)local_24);
    __gnu_cxx::hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>
    ::end(local_18);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
            ::operator!=(local_24,(_Hashtable_iterator *)local_18);
    if (cVar1 != '\0') {
      local_10[0] = CParty::GetPartyIndex(param_1);
      __gnu_cxx::
      hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>::erase
                ((hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>
                  *)(this + 0x270),local_10);
      StaticPool<CParty,600>::Free((StaticPool<CParty,600> *)(this + 0xac),param_1);
    }
  }
  return;
}

```

---

## PutPvp

```asm
// === 08295348 CGameManager::PutPvp  [0x08295348-0x829544f] ===
 8295348:	55                   	push   %ebp
 8295349:	89 e5                	mov    %esp,%ebp
 829534b:	53                   	push   %ebx
 829534c:	83 ec 54             	sub    $0x54,%esp
 829534f:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8295353:	0f 84 f0 00 00 00    	je     8295449 <_ZN12CGameManager6PutPvpEP8PvP_Room+0x101>
 8295359:	8b 45 0c             	mov    0xc(%ebp),%eax
 829535c:	89 04 24             	mov    %eax,(%esp)
 829535f:	e8 30 86 f9 ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 8295364:	89 c3                	mov    %eax,%ebx
 8295366:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 829536d:	00 
 829536e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8295375:	00 
 8295376:	c7 44 24 08 e4 0a 00 	movl   $0xae4,0x8(%esp)
 829537d:	00 
 829537e:	c7 44 24 04 c0 b5 c1 	movl   $0x8c1b5c0,0x4(%esp)
 8295385:	08 
 8295386:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8295389:	89 04 24             	mov    %eax,(%esp)
 829538c:	e8 ab a9 2b 00       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 8295391:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8295395:	c7 44 24 04 e7 6b c1 	movl   $0x8c16be7,0x4(%esp)
 829539c:	08 
 829539d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82953a0:	89 04 24             	mov    %eax,(%esp)
 82953a3:	e8 bc a9 2b 00       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 82953a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82953ab:	89 04 24             	mov    %eax,(%esp)
 82953ae:	e8 e1 85 f9 ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 82953b3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82953b6:	8b 45 08             	mov    0x8(%ebp),%eax
 82953b9:	8d 88 5c 02 00 00    	lea    0x25c(%eax),%ecx
 82953bf:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82953c2:	8d 55 e8             	lea    -0x18(%ebp),%edx
 82953c5:	89 54 24 08          	mov    %edx,0x8(%esp)
 82953c9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82953cd:	89 04 24             	mov    %eax,(%esp)
 82953d0:	e8 9d c1 01 00       	call   82b1572 <_ZN9__gnu_cxx8hash_mapIiP8PvP_RoomNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 82953d5:	83 ec 04             	sub    $0x4,%esp
 82953d8:	8b 45 08             	mov    0x8(%ebp),%eax
 82953db:	8d 90 5c 02 00 00    	lea    0x25c(%eax),%edx
 82953e1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82953e4:	89 54 24 04          	mov    %edx,0x4(%esp)
 82953e8:	89 04 24             	mov    %eax,(%esp)
 82953eb:	e8 ae c1 01 00       	call   82b159e <_ZN9__gnu_cxx8hash_mapIiP8PvP_RoomNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 82953f0:	83 ec 04             	sub    $0x4,%esp
 82953f3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82953f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82953fa:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82953fd:	89 04 24             	mov    %eax,(%esp)
 8295400:	e8 25 c2 01 00       	call   82b162a <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8PvP_RoomEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 8295405:	84 c0                	test   %al,%al
 8295407:	74 41                	je     829544a <_ZN12CGameManager6PutPvpEP8PvP_Room+0x102>
 8295409:	8b 45 0c             	mov    0xc(%ebp),%eax
 829540c:	89 04 24             	mov    %eax,(%esp)
 829540f:	e8 80 85 f9 ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 8295414:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8295417:	8b 45 08             	mov    0x8(%ebp),%eax
 829541a:	8d 90 5c 02 00 00    	lea    0x25c(%eax),%edx
 8295420:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8295423:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295427:	89 14 24             	mov    %edx,(%esp)
 829542a:	e8 0f c2 01 00       	call   82b163e <_ZN9__gnu_cxx8hash_mapIiP8PvP_RoomNS_4hashIiEESt8equal_toIiESaIS2_EE5eraseERKi>
 829542f:	8b 45 08             	mov    0x8(%ebp),%eax
 8295432:	8d 90 dc 00 00 00    	lea    0xdc(%eax),%edx
 8295438:	8b 45 0c             	mov    0xc(%ebp),%eax
 829543b:	89 44 24 04          	mov    %eax,0x4(%esp)
 829543f:	89 14 24             	mov    %edx,(%esp)
 8295442:	e8 11 c2 01 00       	call   82b1658 <_ZN10StaticPoolI8PvP_RoomLi600EE4FreeEPS0_>
 8295447:	eb 01                	jmp    829544a <_ZN12CGameManager6PutPvpEP8PvP_Room+0x102>
 8295449:	90                   	nop
 829544a:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 829544d:	c9                   	leave
 829544e:	c3                   	ret
 829544f:	90                   	nop

```

```c
// CGameManager::PutPvp @ 0x8295348

/* CGameManager::PutPvp(PvP_Room*) */

void __thiscall CGameManager::PutPvp(CGameManager *this,PvP_Room *param_1)

{
  char cVar1;
  undefined4 uVar2;
  _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
  local_34 [8];
  CSwitchLog local_2c [16];
  undefined4 local_1c;
  hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
  local_18 [8];
  int local_10 [2];
  
  if (param_1 != (PvP_Room *)0x0) {
    uVar2 = PvP_Room::get_index(param_1);
    CSwitchLog::CSwitchLog(local_2c,"void CGameManager::PutPvp(PvP_Room*)",0xae4,0,0);
    CSwitchLog::operator()(local_2c,"pvp@log room(%d)",uVar2);
    local_1c = PvP_Room::get_index(param_1);
    __gnu_cxx::
    hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::find
              ((int *)local_34);
    __gnu_cxx::
    hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::end
              (local_18);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
            ::operator!=(local_34,(_Hashtable_iterator *)local_18);
    if (cVar1 != '\0') {
      local_10[0] = PvP_Room::get_index(param_1);
      __gnu_cxx::
      hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::
      erase((hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
             *)(this + 0x25c),local_10);
      StaticPool<PvP_Room,600>::Free((StaticPool<PvP_Room,600> *)(this + 0xdc),param_1);
    }
  }
  return;
}

```

---

## PutQuickParty

```asm
// === 08295608 CGameManager::PutQuickParty  [0x08295608-0x82956c7] ===
 8295608:	55                   	push   %ebp
 8295609:	89 e5                	mov    %esp,%ebp
 829560b:	83 ec 38             	sub    $0x38,%esp
 829560e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8295612:	0f 84 ac 00 00 00    	je     82956c4 <_ZN12CGameManager13PutQuickPartyEPN10QuickParty11CQuickPartyE+0xbc>
 8295618:	8b 45 0c             	mov    0xc(%ebp),%eax
 829561b:	89 04 24             	mov    %eax,(%esp)
 829561e:	e8 2b 61 fd ff       	call   826b74e <_ZNK10QuickParty11CQuickParty21get_quick_party_indexEv>
 8295623:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8295626:	8b 45 08             	mov    0x8(%ebp),%eax
 8295629:	8d 88 d4 02 00 00    	lea    0x2d4(%eax),%ecx
 829562f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8295632:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8295635:	89 54 24 08          	mov    %edx,0x8(%esp)
 8295639:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 829563d:	89 04 24             	mov    %eax,(%esp)
 8295640:	e8 b7 c3 01 00       	call   82b19fc <_ZN9__gnu_cxx8hash_mapIiPN10QuickParty11CQuickPartyENS_4hashIiEESt8equal_toIiESaIS3_EE4findERKi>
 8295645:	83 ec 04             	sub    $0x4,%esp
 8295648:	8b 45 08             	mov    0x8(%ebp),%eax
 829564b:	8d 90 d4 02 00 00    	lea    0x2d4(%eax),%edx
 8295651:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8295654:	89 54 24 04          	mov    %edx,0x4(%esp)
 8295658:	89 04 24             	mov    %eax,(%esp)
 829565b:	e8 c8 c3 01 00       	call   82b1a28 <_ZN9__gnu_cxx8hash_mapIiPN10QuickParty11CQuickPartyENS_4hashIiEESt8equal_toIiESaIS3_EE3endEv>
 8295660:	83 ec 04             	sub    $0x4,%esp
 8295663:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8295666:	89 44 24 04          	mov    %eax,0x4(%esp)
 829566a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 829566d:	89 04 24             	mov    %eax,(%esp)
 8295670:	e8 3f c4 01 00       	call   82b1ab4 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiPN10QuickParty11CQuickPartyEEiNS_4hashIiEESt10_Select1stIS6_ESt8equal_toIiESaIS5_EEneERKSE_>
 8295675:	84 c0                	test   %al,%al
 8295677:	74 4c                	je     82956c5 <_ZN12CGameManager13PutQuickPartyEPN10QuickParty11CQuickPartyE+0xbd>
 8295679:	8b 45 0c             	mov    0xc(%ebp),%eax
 829567c:	89 04 24             	mov    %eax,(%esp)
 829567f:	e8 ca 60 fd ff       	call   826b74e <_ZNK10QuickParty11CQuickParty21get_quick_party_indexEv>
 8295684:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8295687:	8b 45 08             	mov    0x8(%ebp),%eax
 829568a:	8d 90 d4 02 00 00    	lea    0x2d4(%eax),%edx
 8295690:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8295693:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295697:	89 14 24             	mov    %edx,(%esp)
 829569a:	e8 29 c4 01 00       	call   82b1ac8 <_ZN9__gnu_cxx8hash_mapIiPN10QuickParty11CQuickPartyENS_4hashIiEESt8equal_toIiESaIS3_EE5eraseERKi>
 829569f:	8b 45 08             	mov    0x8(%ebp),%eax
 82956a2:	8d 90 cc 01 00 00    	lea    0x1cc(%eax),%edx
 82956a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82956ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 82956af:	89 14 24             	mov    %edx,(%esp)
 82956b2:	e8 2b c4 01 00       	call   82b1ae2 <_ZN10StaticPoolIN10QuickParty11CQuickPartyELi300EE4FreeEPS1_>
 82956b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82956ba:	89 04 24             	mov    %eax,(%esp)
 82956bd:	e8 84 3e fd ff       	call   8269546 <_ZN10QuickParty11CQuickParty4initEv>
 82956c2:	eb 01                	jmp    82956c5 <_ZN12CGameManager13PutQuickPartyEPN10QuickParty11CQuickPartyE+0xbd>
 82956c4:	90                   	nop
 82956c5:	c9                   	leave
 82956c6:	c3                   	ret
 82956c7:	90                   	nop

```

```c
// CGameManager::PutQuickParty @ 0x8295608

/* CGameManager::PutQuickParty(QuickParty::CQuickParty*) */

void __thiscall CGameManager::PutQuickParty(CGameManager *this,CQuickParty *param_1)

{
  char cVar1;
  _Hashtable_iterator<std::pair<int_const,QuickParty::CQuickParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,QuickParty::CQuickParty*>>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
  local_24 [8];
  undefined4 local_1c;
  hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
  local_18 [8];
  int local_10 [3];
  
  if (param_1 != (CQuickParty *)0x0) {
    local_1c = QuickParty::CQuickParty::get_quick_party_index(param_1);
    __gnu_cxx::
    hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
    ::find((int *)local_24);
    __gnu_cxx::
    hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
    ::end(local_18);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,QuickParty::CQuickParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,QuickParty::CQuickParty*>>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
            ::operator!=(local_24,(_Hashtable_iterator *)local_18);
    if (cVar1 != '\0') {
      local_10[0] = QuickParty::CQuickParty::get_quick_party_index(param_1);
      __gnu_cxx::
      hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
      ::erase((hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
               *)(this + 0x2d4),local_10);
      StaticPool<QuickParty::CQuickParty,300>::Free
                ((StaticPool<QuickParty::CQuickParty,300> *)(this + 0x1cc),param_1);
      QuickParty::CQuickParty::init(param_1);
    }
  }
  return;
}

```

---

## PutTradeSpace

```asm
// === 08294dde CGameManager::PutTradeSpace  [0x08294dde-0x8294e0f] ===
 8294dde:	55                   	push   %ebp
 8294ddf:	89 e5                	mov    %esp,%ebp
 8294de1:	83 ec 18             	sub    $0x18,%esp
 8294de4:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8294de8:	74 22                	je     8294e0c <_ZN12CGameManager13PutTradeSpaceEP11CTradeSpace+0x2e>
 8294dea:	8b 45 0c             	mov    0xc(%ebp),%eax
 8294ded:	89 04 24             	mov    %eax,(%esp)
 8294df0:	e8 fd 49 29 00       	call   85297f2 <_ZN11CTradeSpace5resetEv>
 8294df5:	8b 45 08             	mov    0x8(%ebp),%eax
 8294df8:	8d 50 7c             	lea    0x7c(%eax),%edx
 8294dfb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8294dfe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294e02:	89 14 24             	mov    %edx,(%esp)
 8294e05:	e8 f8 be 01 00       	call   82b0d02 <_ZN10StaticPoolI11CTradeSpaceLi300EE4FreeEPS0_>
 8294e0a:	eb 01                	jmp    8294e0d <_ZN12CGameManager13PutTradeSpaceEP11CTradeSpace+0x2f>
 8294e0c:	90                   	nop
 8294e0d:	c9                   	leave
 8294e0e:	c3                   	ret
 8294e0f:	90                   	nop

```

```c
// CGameManager::PutTradeSpace @ 0x8294dde

/* CGameManager::PutTradeSpace(CTradeSpace*) */

void __thiscall CGameManager::PutTradeSpace(CGameManager *this,CTradeSpace *param_1)

{
  if (param_1 != (CTradeSpace *)0x0) {
    CTradeSpace::reset(param_1);
    StaticPool<CTradeSpace,300>::Free((StaticPool<CTradeSpace,300> *)(this + 0x7c),param_1);
  }
  return;
}

```

---

## PutWarRoom

```asm
// === 082a2666 CGameManager::PutWarRoom  [0x082a2666-0x82a2719] ===
 82a2666:	55                   	push   %ebp
 82a2667:	89 e5                	mov    %esp,%ebp
 82a2669:	83 ec 38             	sub    $0x38,%esp
 82a266c:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 82a2670:	0f 84 a1 00 00 00    	je     82a2717 <_ZN12CGameManager10PutWarRoomEP7WarRoom+0xb1>
 82a2676:	8b 45 0c             	mov    0xc(%ebp),%eax
 82a2679:	89 04 24             	mov    %eax,(%esp)
 82a267c:	e8 09 c8 f8 ff       	call   822ee8a <_ZN7WarRoom8GetIndexEv>
 82a2681:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82a2684:	8b 45 08             	mov    0x8(%ebp),%eax
 82a2687:	8d 88 84 02 00 00    	lea    0x284(%eax),%ecx
 82a268d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82a2690:	8d 55 e8             	lea    -0x18(%ebp),%edx
 82a2693:	89 54 24 08          	mov    %edx,0x8(%esp)
 82a2697:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82a269b:	89 04 24             	mov    %eax,(%esp)
 82a269e:	e8 83 25 01 00       	call   82b4c26 <_ZN9__gnu_cxx8hash_mapIiP7WarRoomNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 82a26a3:	83 ec 04             	sub    $0x4,%esp
 82a26a6:	8b 45 08             	mov    0x8(%ebp),%eax
 82a26a9:	8d 90 84 02 00 00    	lea    0x284(%eax),%edx
 82a26af:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82a26b2:	89 54 24 04          	mov    %edx,0x4(%esp)
 82a26b6:	89 04 24             	mov    %eax,(%esp)
 82a26b9:	e8 94 25 01 00       	call   82b4c52 <_ZN9__gnu_cxx8hash_mapIiP7WarRoomNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 82a26be:	83 ec 04             	sub    $0x4,%esp
 82a26c1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82a26c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a26c8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82a26cb:	89 04 24             	mov    %eax,(%esp)
 82a26ce:	e8 0b 26 01 00       	call   82b4cde <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP7WarRoomEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 82a26d3:	84 c0                	test   %al,%al
 82a26d5:	74 41                	je     82a2718 <_ZN12CGameManager10PutWarRoomEP7WarRoom+0xb2>
 82a26d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82a26da:	89 04 24             	mov    %eax,(%esp)
 82a26dd:	e8 a8 c7 f8 ff       	call   822ee8a <_ZN7WarRoom8GetIndexEv>
 82a26e2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82a26e5:	8b 45 08             	mov    0x8(%ebp),%eax
 82a26e8:	8d 90 84 02 00 00    	lea    0x284(%eax),%edx
 82a26ee:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82a26f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a26f5:	89 14 24             	mov    %edx,(%esp)
 82a26f8:	e8 f5 25 01 00       	call   82b4cf2 <_ZN9__gnu_cxx8hash_mapIiP7WarRoomNS_4hashIiEESt8equal_toIiESaIS2_EE5eraseERKi>
 82a26fd:	8b 45 08             	mov    0x8(%ebp),%eax
 82a2700:	8d 90 0c 01 00 00    	lea    0x10c(%eax),%edx
 82a2706:	8b 45 0c             	mov    0xc(%ebp),%eax
 82a2709:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a270d:	89 14 24             	mov    %edx,(%esp)
 82a2710:	e8 f7 25 01 00       	call   82b4d0c <_ZN10StaticPoolI7WarRoomLi40EE4FreeEPS0_>
 82a2715:	eb 01                	jmp    82a2718 <_ZN12CGameManager10PutWarRoomEP7WarRoom+0xb2>
 82a2717:	90                   	nop
 82a2718:	c9                   	leave
 82a2719:	c3                   	ret

```

```c
// CGameManager::PutWarRoom @ 0x82a2666

/* CGameManager::PutWarRoom(WarRoom*) */

void __thiscall CGameManager::PutWarRoom(CGameManager *this,WarRoom *param_1)

{
  char cVar1;
  _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_24 [8];
  undefined4 local_1c;
  hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_18 [8];
  int local_10 [3];
  
  if (param_1 != (WarRoom *)0x0) {
    local_1c = WarRoom::GetIndex(param_1);
    __gnu_cxx::
    hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>::find
              ((int *)local_24);
    __gnu_cxx::
    hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>::end
              (local_18);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
            ::operator!=(local_24,(_Hashtable_iterator *)local_18);
    if (cVar1 != '\0') {
      local_10[0] = WarRoom::GetIndex(param_1);
      __gnu_cxx::
      hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>::erase
                ((hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
                  *)(this + 0x284),local_10);
      StaticPool<WarRoom,40>::Free((StaticPool<WarRoom,40> *)(this + 0x10c),param_1);
    }
  }
  return;
}

```

---

## SendPartyList

```asm
// === 08296792 CGameManager::SendPartyList  [0x08296792-0x8296d2f] ===
 8296792:	55                   	push   %ebp
 8296793:	89 e5                	mov    %esp,%ebp
 8296795:	56                   	push   %esi
 8296796:	53                   	push   %ebx
 8296797:	83 ec 60             	sub    $0x60,%esp
 829679a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 829679d:	89 04 24             	mov    %eax,(%esp)
 82967a0:	e8 a7 75 2f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82967a5:	c7 44 24 08 09 00 00 	movl   $0x9,0x8(%esp)
 82967ac:	00 
 82967ad:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82967b4:	00 
 82967b5:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82967b8:	89 04 24             	mov    %eax,(%esp)
 82967bb:	e8 3c 51 e3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82967c0:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 82967c7:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82967ca:	89 04 24             	mov    %eax,(%esp)
 82967cd:	e8 7a a3 e7 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 82967d2:	89 45 b0             	mov    %eax,-0x50(%ebp)
 82967d5:	8b 45 08             	mov    0x8(%ebp),%eax
 82967d8:	05 70 02 00 00       	add    $0x270,%eax
 82967dd:	89 04 24             	mov    %eax,(%esp)
 82967e0:	e8 bd c3 01 00       	call   82b2ba2 <_ZNK9__gnu_cxx8hash_mapIiP6CPartyNS_4hashIiEESt8equal_toIiESaIS2_EE4sizeEv>
 82967e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 82967e9:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82967ec:	89 04 24             	mov    %eax,(%esp)
 82967ef:	e8 b0 36 e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82967f4:	c6 45 d7 00          	movb   $0x0,-0x29(%ebp)
 82967f8:	8b 45 08             	mov    0x8(%ebp),%eax
 82967fb:	8d 90 70 02 00 00    	lea    0x270(%eax),%edx
 8296801:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8296804:	89 54 24 04          	mov    %edx,0x4(%esp)
 8296808:	89 04 24             	mov    %eax,(%esp)
 829680b:	e8 a6 c3 01 00       	call   82b2bb6 <_ZN9__gnu_cxx8hash_mapIiP6CPartyNS_4hashIiEESt8equal_toIiESaIS2_EE5beginEv>
 8296810:	83 ec 04             	sub    $0x4,%esp
 8296813:	e9 72 04 00 00       	jmp    8296c8a <_ZN12CGameManager13SendPartyListEP5CUser+0x4f8>
 8296818:	8d 45 a8             	lea    -0x58(%ebp),%eax
 829681b:	89 04 24             	mov    %eax,(%esp)
 829681e:	e8 45 a9 01 00       	call   82b1168 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP6CPartyEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 8296823:	8b 40 04             	mov    0x4(%eax),%eax
 8296826:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8296829:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 829682d:	74 19                	je     8296848 <_ZN12CGameManager13SendPartyListEP5CUser+0xb6>
 829682f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8296832:	89 04 24             	mov    %eax,(%esp)
 8296835:	e8 52 70 f9 ff       	call   822d88c <_ZN6CParty13IsAutoCreatedEv>
 829683a:	83 f0 01             	xor    $0x1,%eax
 829683d:	84 c0                	test   %al,%al
 829683f:	74 07                	je     8296848 <_ZN12CGameManager13SendPartyListEP5CUser+0xb6>
 8296841:	b8 01 00 00 00       	mov    $0x1,%eax
 8296846:	eb 05                	jmp    829684d <_ZN12CGameManager13SendPartyListEP5CUser+0xbb>
 8296848:	b8 00 00 00 00       	mov    $0x0,%eax
 829684d:	84 c0                	test   %al,%al
 829684f:	0f 84 18 04 00 00    	je     8296c6d <_ZN12CGameManager13SendPartyListEP5CUser+0x4db>
 8296855:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 8296859:	8b 45 d8             	mov    -0x28(%ebp),%eax
 829685c:	89 04 24             	mov    %eax,(%esp)
 829685f:	e8 e2 6f f9 ff       	call   822d846 <_ZN6CParty13GetPartyIndexEv>
 8296864:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296868:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 829686b:	89 04 24             	mov    %eax,(%esp)
 829686e:	e8 31 36 e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8296873:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 8296877:	89 44 24 04          	mov    %eax,0x4(%esp)
 829687b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 829687e:	89 04 24             	mov    %eax,(%esp)
 8296881:	e8 9a 50 e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8296886:	80 7d d7 00          	cmpb   $0x0,-0x29(%ebp)
 829688a:	74 0a                	je     8296896 <_ZN12CGameManager13SendPartyListEP5CUser+0x104>
 829688c:	80 7d d7 01          	cmpb   $0x1,-0x29(%ebp)
 8296890:	0f 85 4b 01 00 00    	jne    82969e1 <_ZN12CGameManager13SendPartyListEP5CUser+0x24f>
 8296896:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8296899:	89 04 24             	mov    %eax,(%esp)
 829689c:	e8 53 f1 00 00       	call   82a59f4 <_ZN6CParty13getTitleIndexEv>
 82968a1:	0f b6 c0             	movzbl %al,%eax
 82968a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82968a8:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82968ab:	89 04 24             	mov    %eax,(%esp)
 82968ae:	e8 6d 50 e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82968b3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82968b6:	89 04 24             	mov    %eax,(%esp)
 82968b9:	e8 36 f1 00 00       	call   82a59f4 <_ZN6CParty13getTitleIndexEv>
 82968be:	84 c0                	test   %al,%al
 82968c0:	0f 94 c0             	sete   %al
 82968c3:	84 c0                	test   %al,%al
 82968c5:	74 55                	je     829691c <_ZN12CGameManager13SendPartyListEP5CUser+0x18a>
 82968c7:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82968ca:	89 04 24             	mov    %eax,(%esp)
 82968cd:	e8 14 f1 00 00       	call   82a59e6 <_ZN6CParty8getTitleEv>
 82968d2:	89 04 24             	mov    %eax,(%esp)
 82968d5:	e8 d6 7a de ff       	call   807e3b0 <strlen@plt>
 82968da:	89 44 24 04          	mov    %eax,0x4(%esp)
 82968de:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82968e1:	89 04 24             	mov    %eax,(%esp)
 82968e4:	e8 53 50 e3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82968e9:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82968ec:	89 04 24             	mov    %eax,(%esp)
 82968ef:	e8 f2 f0 00 00       	call   82a59e6 <_ZN6CParty8getTitleEv>
 82968f4:	89 04 24             	mov    %eax,(%esp)
 82968f7:	e8 b4 7a de ff       	call   807e3b0 <strlen@plt>
 82968fc:	89 c3                	mov    %eax,%ebx
 82968fe:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8296901:	89 04 24             	mov    %eax,(%esp)
 8296904:	e8 dd f0 00 00       	call   82a59e6 <_ZN6CParty8getTitleEv>
 8296909:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 829690d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296911:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296914:	89 04 24             	mov    %eax,(%esp)
 8296917:	e8 c8 0a f2 ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 829691c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 829691f:	89 04 24             	mov    %eax,(%esp)
 8296922:	e8 29 36 32 00       	call   85b9f50 <_ZN6CParty17IsReturnUserPartyEv>
 8296927:	84 c0                	test   %al,%al
 8296929:	74 15                	je     8296940 <_ZN12CGameManager13SendPartyListEP5CUser+0x1ae>
 829692b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8296932:	00 
 8296933:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296936:	89 04 24             	mov    %eax,(%esp)
 8296939:	e8 e2 4f e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 829693e:	eb 13                	jmp    8296953 <_ZN12CGameManager13SendPartyListEP5CUser+0x1c1>
 8296940:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8296947:	00 
 8296948:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 829694b:	89 04 24             	mov    %eax,(%esp)
 829694e:	e8 cd 4f e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8296953:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8296956:	89 04 24             	mov    %eax,(%esp)
 8296959:	e8 a6 f0 00 00       	call   82a5a04 <_ZN6CParty10getUserMaxEv>
 829695e:	0f b6 c0             	movzbl %al,%eax
 8296961:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296965:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296968:	89 04 24             	mov    %eax,(%esp)
 829696b:	e8 b0 4f e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8296970:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8296973:	89 04 24             	mov    %eax,(%esp)
 8296976:	e8 99 f0 00 00       	call   82a5a14 <_ZNK6CParty12getDungIndexEv>
 829697b:	0f b7 c0             	movzwl %ax,%eax
 829697e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296982:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296985:	89 04 24             	mov    %eax,(%esp)
 8296988:	e8 17 35 e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 829698d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8296990:	89 04 24             	mov    %eax,(%esp)
 8296993:	e8 8c f0 00 00       	call   82a5a24 <_ZNK6CParty12getDungDiffiEv>
 8296998:	0f b6 c0             	movzbl %al,%eax
 829699b:	89 44 24 04          	mov    %eax,0x4(%esp)
 829699f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82969a2:	89 04 24             	mov    %eax,(%esp)
 82969a5:	e8 76 4f e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82969aa:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82969ad:	89 04 24             	mov    %eax,(%esp)
 82969b0:	e8 1f 36 32 00       	call   85b9fd4 <_ZN6CParty18IsEventCharacPartyEv>
 82969b5:	84 c0                	test   %al,%al
 82969b7:	74 15                	je     82969ce <_ZN12CGameManager13SendPartyListEP5CUser+0x23c>
 82969b9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82969c0:	00 
 82969c1:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82969c4:	89 04 24             	mov    %eax,(%esp)
 82969c7:	e8 54 4f e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82969cc:	eb 13                	jmp    82969e1 <_ZN12CGameManager13SendPartyListEP5CUser+0x24f>
 82969ce:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82969d5:	00 
 82969d6:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82969d9:	89 04 24             	mov    %eax,(%esp)
 82969dc:	e8 3f 4f e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82969e1:	80 7d d7 00          	cmpb   $0x0,-0x29(%ebp)
 82969e5:	74 0a                	je     82969f1 <_ZN12CGameManager13SendPartyListEP5CUser+0x25f>
 82969e7:	80 7d d7 02          	cmpb   $0x2,-0x29(%ebp)
 82969eb:	0f 85 69 01 00 00    	jne    8296b5a <_ZN12CGameManager13SendPartyListEP5CUser+0x3c8>
 82969f1:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 82969f8:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 82969ff:	e9 aa 00 00 00       	jmp    8296aae <_ZN12CGameManager13SendPartyListEP5CUser+0x31c>
 8296a04:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8296a07:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296a0b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8296a0e:	89 04 24             	mov    %eax,(%esp)
 8296a11:	e8 4e ed ea ff       	call   8145764 <_ZN6CParty8get_userEi>
 8296a16:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8296a19:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8296a1d:	74 65                	je     8296a84 <_ZN12CGameManager13SendPartyListEP5CUser+0x2f2>
 8296a1f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8296a22:	89 04 24             	mov    %eax,(%esp)
 8296a25:	e8 52 39 e4 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8296a2a:	0f b7 c0             	movzwl %ax,%eax
 8296a2d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296a31:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296a34:	89 04 24             	mov    %eax,(%esp)
 8296a37:	e8 68 34 e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8296a3c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8296a3f:	89 04 24             	mov    %eax,(%esp)
 8296a42:	e8 39 ed ea ff       	call   8145780 <_ZN6CParty10getManagerEv>
 8296a47:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8296a4a:	0f 94 c0             	sete   %al
 8296a4d:	84 c0                	test   %al,%al
 8296a4f:	74 06                	je     8296a57 <_ZN12CGameManager13SendPartyListEP5CUser+0x2c5>
 8296a51:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8296a54:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8296a57:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8296a5a:	89 04 24             	mov    %eax,(%esp)
 8296a5d:	e8 b0 81 3e 00       	call   867ec12 <_ZN5CUser6getSexEv>
 8296a62:	88 45 ea             	mov    %al,-0x16(%ebp)
 8296a65:	80 7d ea ff          	cmpb   $0xff,-0x16(%ebp)
 8296a69:	75 04                	jne    8296a6f <_ZN12CGameManager13SendPartyListEP5CUser+0x2dd>
 8296a6b:	c6 45 ea 01          	movb   $0x1,-0x16(%ebp)
 8296a6f:	0f be 45 ea          	movsbl -0x16(%ebp),%eax
 8296a73:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296a77:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296a7a:	89 04 24             	mov    %eax,(%esp)
 8296a7d:	e8 9e 4e e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8296a82:	eb 26                	jmp    8296aaa <_ZN12CGameManager13SendPartyListEP5CUser+0x318>
 8296a84:	c7 44 24 04 ff ff 00 	movl   $0xffff,0x4(%esp)
 8296a8b:	00 
 8296a8c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296a8f:	89 04 24             	mov    %eax,(%esp)
 8296a92:	e8 0d 34 e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8296a97:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 8296a9e:	00 
 8296a9f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296aa2:	89 04 24             	mov    %eax,(%esp)
 8296aa5:	e8 76 4e e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8296aaa:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8296aae:	83 7d e0 03          	cmpl   $0x3,-0x20(%ebp)
 8296ab2:	0f 9e c0             	setle  %al
 8296ab5:	84 c0                	test   %al,%al
 8296ab7:	0f 85 47 ff ff ff    	jne    8296a04 <_ZN12CGameManager13SendPartyListEP5CUser+0x272>
 8296abd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8296ac0:	89 04 24             	mov    %eax,(%esp)
 8296ac3:	e8 88 34 32 00       	call   85b9f50 <_ZN6CParty17IsReturnUserPartyEv>
 8296ac8:	84 c0                	test   %al,%al
 8296aca:	74 15                	je     8296ae1 <_ZN12CGameManager13SendPartyListEP5CUser+0x34f>
 8296acc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8296ad3:	00 
 8296ad4:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296ad7:	89 04 24             	mov    %eax,(%esp)
 8296ada:	e8 41 4e e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8296adf:	eb 13                	jmp    8296af4 <_ZN12CGameManager13SendPartyListEP5CUser+0x362>
 8296ae1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8296ae8:	00 
 8296ae9:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296aec:	89 04 24             	mov    %eax,(%esp)
 8296aef:	e8 2c 4e e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8296af4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8296af7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296afb:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296afe:	89 04 24             	mov    %eax,(%esp)
 8296b01:	e8 1a 4e e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8296b06:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8296b09:	89 04 24             	mov    %eax,(%esp)
 8296b0c:	e8 41 6e f9 ff       	call   822d952 <_ZN6CParty14is_quick_partyEv>
 8296b11:	0f b6 c0             	movzbl %al,%eax
 8296b14:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296b18:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296b1b:	89 04 24             	mov    %eax,(%esp)
 8296b1e:	e8 fd 4d e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8296b23:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8296b26:	89 04 24             	mov    %eax,(%esp)
 8296b29:	e8 a6 34 32 00       	call   85b9fd4 <_ZN6CParty18IsEventCharacPartyEv>
 8296b2e:	84 c0                	test   %al,%al
 8296b30:	74 15                	je     8296b47 <_ZN12CGameManager13SendPartyListEP5CUser+0x3b5>
 8296b32:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8296b39:	00 
 8296b3a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296b3d:	89 04 24             	mov    %eax,(%esp)
 8296b40:	e8 db 4d e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8296b45:	eb 13                	jmp    8296b5a <_ZN12CGameManager13SendPartyListEP5CUser+0x3c8>
 8296b47:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8296b4e:	00 
 8296b4f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296b52:	89 04 24             	mov    %eax,(%esp)
 8296b55:	e8 c6 4d e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8296b5a:	80 7d d7 00          	cmpb   $0x0,-0x29(%ebp)
 8296b5e:	74 10                	je     8296b70 <_ZN12CGameManager13SendPartyListEP5CUser+0x3de>
 8296b60:	80 7d d7 01          	cmpb   $0x1,-0x29(%ebp)
 8296b64:	74 0a                	je     8296b70 <_ZN12CGameManager13SendPartyListEP5CUser+0x3de>
 8296b66:	80 7d d7 02          	cmpb   $0x2,-0x29(%ebp)
 8296b6a:	0f 85 fd 00 00 00    	jne    8296c6d <_ZN12CGameManager13SendPartyListEP5CUser+0x4db>
 8296b70:	e8 32 38 e4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8296b75:	c7 44 24 04 31 6c c1 	movl   $0x8c16c31,0x4(%esp)
 8296b7c:	08 
 8296b7d:	89 04 24             	mov    %eax,(%esp)
 8296b80:	e8 71 50 43 00       	call   86cbbf6 <_ZN9GameWorld31is_dungeon_tag_matching_channelEPc>
 8296b85:	88 45 eb             	mov    %al,-0x15(%ebp)
 8296b88:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8296b8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296b90:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296b93:	89 04 24             	mov    %eax,(%esp)
 8296b96:	e8 85 4d e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8296b9b:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
 8296b9f:	0f 84 c8 00 00 00    	je     8296c6d <_ZN12CGameManager13SendPartyListEP5CUser+0x4db>
 8296ba5:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8296bac:	e9 ad 00 00 00       	jmp    8296c5e <_ZN12CGameManager13SendPartyListEP5CUser+0x4cc>
 8296bb1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8296bb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296bb8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8296bbb:	89 04 24             	mov    %eax,(%esp)
 8296bbe:	e8 a1 eb ea ff       	call   8145764 <_ZN6CParty8get_userEi>
 8296bc3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8296bc6:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8296bca:	74 7b                	je     8296c47 <_ZN12CGameManager13SendPartyListEP5CUser+0x4b5>
 8296bcc:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8296bd3:	00 
 8296bd4:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296bd7:	89 04 24             	mov    %eax,(%esp)
 8296bda:	e8 41 4d e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8296bdf:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8296be6:	eb 52                	jmp    8296c3a <_ZN12CGameManager13SendPartyListEP5CUser+0x4a8>
 8296be8:	e8 ae 55 e3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8296bed:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8296bf0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8296bf4:	89 04 24             	mov    %eax,(%esp)
 8296bf7:	e8 16 4a f9 ff       	call   822b612 <_ZN12CDataManager18get_dimensionInoutEi>
 8296bfc:	0f be c0             	movsbl %al,%eax
 8296bff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296c03:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296c06:	89 04 24             	mov    %eax,(%esp)
 8296c09:	e8 12 4d e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8296c0e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8296c11:	89 04 24             	mov    %eax,(%esp)
 8296c14:	e8 19 98 e8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8296c19:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8296c1c:	0f b6 84 10 b9 0e 00 	movzbl 0xeb9(%eax,%edx,1),%eax
 8296c23:	00 
 8296c24:	0f be c0             	movsbl %al,%eax
 8296c27:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296c2b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296c2e:	89 04 24             	mov    %eax,(%esp)
 8296c31:	e8 ea 4c e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8296c36:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8296c3a:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 8296c3e:	0f 9e c0             	setle  %al
 8296c41:	84 c0                	test   %al,%al
 8296c43:	75 a3                	jne    8296be8 <_ZN12CGameManager13SendPartyListEP5CUser+0x456>
 8296c45:	eb 13                	jmp    8296c5a <_ZN12CGameManager13SendPartyListEP5CUser+0x4c8>
 8296c47:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8296c4e:	00 
 8296c4f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296c52:	89 04 24             	mov    %eax,(%esp)
 8296c55:	e8 c6 4c e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8296c5a:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8296c5e:	83 7d ec 03          	cmpl   $0x3,-0x14(%ebp)
 8296c62:	0f 9e c0             	setle  %al
 8296c65:	84 c0                	test   %al,%al
 8296c67:	0f 85 44 ff ff ff    	jne    8296bb1 <_ZN12CGameManager13SendPartyListEP5CUser+0x41f>
 8296c6d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8296c70:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8296c77:	00 
 8296c78:	8d 55 a8             	lea    -0x58(%ebp),%edx
 8296c7b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8296c7f:	89 04 24             	mov    %eax,(%esp)
 8296c82:	e8 55 bf 01 00       	call   82b2bdc <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP6CPartyEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEppEi>
 8296c87:	83 ec 04             	sub    $0x4,%esp
 8296c8a:	8b 45 08             	mov    0x8(%ebp),%eax
 8296c8d:	8d 90 70 02 00 00    	lea    0x270(%eax),%edx
 8296c93:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8296c96:	89 54 24 04          	mov    %edx,0x4(%esp)
 8296c9a:	89 04 24             	mov    %eax,(%esp)
 8296c9d:	e8 4e a4 01 00       	call   82b10f0 <_ZN9__gnu_cxx8hash_mapIiP6CPartyNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 8296ca2:	83 ec 04             	sub    $0x4,%esp
 8296ca5:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8296ca8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296cac:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8296caf:	89 04 24             	mov    %eax,(%esp)
 8296cb2:	e8 c5 a4 01 00       	call   82b117c <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP6CPartyEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 8296cb7:	84 c0                	test   %al,%al
 8296cb9:	0f 85 59 fb ff ff    	jne    8296818 <_ZN12CGameManager13SendPartyListEP5CUser+0x86>
 8296cbf:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8296cc2:	89 44 24 08          	mov    %eax,0x8(%esp)
 8296cc6:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8296cc9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296ccd:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296cd0:	89 04 24             	mov    %eax,(%esp)
 8296cd3:	e8 30 fc e7 ff       	call   8116908 <_ZN18InterfacePacketBuf9put_shortERii>
 8296cd8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8296cdf:	00 
 8296ce0:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296ce3:	89 04 24             	mov    %eax,(%esp)
 8296ce6:	e8 6d 4c e3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8296ceb:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296cee:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296cf2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8296cf5:	89 04 24             	mov    %eax,(%esp)
 8296cf8:	e8 bd 18 3b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8296cfd:	eb 1b                	jmp    8296d1a <_ZN12CGameManager13SendPartyListEP5CUser+0x588>
 8296cff:	89 d3                	mov    %edx,%ebx
 8296d01:	89 c6                	mov    %eax,%esi
 8296d03:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296d06:	89 04 24             	mov    %eax,(%esp)
 8296d09:	e8 72 71 2f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8296d0e:	89 f0                	mov    %esi,%eax
 8296d10:	89 da                	mov    %ebx,%edx
 8296d12:	89 04 24             	mov    %eax,(%esp)
 8296d15:	e8 36 ca 84 00       	call   8ae3750 <_Unwind_Resume>
 8296d1a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296d1d:	89 04 24             	mov    %eax,(%esp)
 8296d20:	e8 5b 71 2f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8296d25:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8296d28:	83 c4 00             	add    $0x0,%esp
 8296d2b:	5b                   	pop    %ebx
 8296d2c:	5e                   	pop    %esi
 8296d2d:	5d                   	pop    %ebp
 8296d2e:	c3                   	ret
 8296d2f:	90                   	nop

```

```c
// CGameManager::SendPartyList @ 0x8296792

/* CGameManager::SendPartyList(CUser*) */

void __thiscall CGameManager::SendPartyList(CGameManager *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  size_t sVar6;
  CUser *pCVar7;
  GameWorld *this_00;
  CDataManager *this_01;
  hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>> local_5c [8]
  ;
  int local_54;
  PacketGuard local_50 [12];
  hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>> local_44 [8]
  ;
  _Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
  local_3c [8];
  int local_34;
  byte local_2d;
  CParty *local_2c;
  int local_28;
  int local_24;
  CUser *local_20;
  char local_1a;
  byte local_19;
  int local_18;
  CUserCharacInfo *local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_50);
                    /* try { // try from 082967bb to 08296cfc has its CatchHandler @ 08296cff */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,9);
  local_34 = 0;
  local_54 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_50);
  iVar3 = __gnu_cxx::
          hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>::
          size((hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>
                *)(this + 0x270));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,iVar3);
  local_2d = 0;
  __gnu_cxx::hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>::
  begin(local_5c);
  while( true ) {
    __gnu_cxx::hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>
    ::end(local_44);
    cVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
                          *)local_5c,(_Hashtable_iterator *)local_44);
    if (cVar2 == '\0') break;
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
                          *)local_5c);
    local_2c = *(CParty **)(iVar3 + 4);
    if ((local_2c == (CParty *)0x0) || (cVar2 = CParty::IsAutoCreated(local_2c), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_34 = local_34 + 1;
      iVar3 = CParty::GetPartyIndex(local_2c);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,iVar3);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,(uint)local_2d);
      if ((local_2d == 0) || (local_2d == 1)) {
        uVar4 = CParty::getTitleIndex(local_2c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,uVar4 & 0xff);
        cVar2 = CParty::getTitleIndex(local_2c);
        if (cVar2 == '\0') {
          pcVar5 = (char *)CParty::getTitle(local_2c);
          sVar6 = strlen(pcVar5);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,sVar6);
          pcVar5 = (char *)CParty::getTitle(local_2c);
          sVar6 = strlen(pcVar5);
          pcVar5 = (char *)CParty::getTitle(local_2c);
          InterfacePacketBuf::put_str((InterfacePacketBuf *)local_50,pcVar5,sVar6);
        }
        cVar2 = CParty::IsReturnUserParty(local_2c);
        if (cVar2 == '\0') {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,1);
        }
        uVar4 = CParty::getUserMax(local_2c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,uVar4 & 0xff);
        uVar4 = CParty::getDungIndex(local_2c);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,uVar4 & 0xffff);
        uVar4 = CParty::getDungDiffi(local_2c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,uVar4 & 0xff);
        cVar2 = CParty::IsEventCharacParty(local_2c);
        if (cVar2 == '\0') {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,1);
        }
      }
      if ((local_2d == 0) || (local_2d == 2)) {
        local_28 = 0;
        for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
          local_20 = (CUser *)CParty::get_user(local_2c,local_24);
          if (local_20 == (CUser *)0x0) {
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,0xffff);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0xff);
          }
          else {
            uVar4 = CUser::get_unique_id(local_20);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,uVar4 & 0xffff);
            pCVar7 = (CUser *)CParty::getManager(local_2c);
            if (pCVar7 == local_20) {
              local_28 = local_24;
            }
            local_1a = CUser::getSex(local_20);
            if (local_1a == -1) {
              local_1a = '\x01';
            }
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,(int)local_1a);
          }
        }
        cVar2 = CParty::IsReturnUserParty(local_2c);
        if (cVar2 == '\0') {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,1);
        }
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,local_28);
        uVar4 = CParty::is_quick_party(local_2c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,uVar4 & 0xff);
        cVar2 = CParty::IsEventCharacParty(local_2c);
        if (cVar2 == '\0') {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,1);
        }
      }
      if (((local_2d == 0) || (local_2d == 1)) || (local_2d == 2)) {
        this_00 = (GameWorld *)G_GameWorld();
        local_19 = GameWorld::is_dungeon_tag_matching_channel(this_00,"[impossible]");
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,(uint)local_19);
        if (local_19 != 0) {
          for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
            local_14 = (CUserCharacInfo *)CParty::get_user(local_2c,local_18);
            if (local_14 == (CUserCharacInfo *)0x0) {
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
            }
            else {
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,6);
              for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
                this_01 = (CDataManager *)G_CDataManager();
                cVar2 = CDataManager::get_dimensionInout(this_01,local_10);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,(int)cVar2);
                iVar3 = CUserCharacInfo::getCurCharacR(local_14);
                InterfacePacketBuf::put_byte
                          ((InterfacePacketBuf *)local_50,(int)*(char *)(iVar3 + 0xeb9 + local_10));
              }
            }
          }
        }
      }
    }
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
    ::operator++(local_3c,(int)local_5c);
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,&local_54,local_34);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
  CUser::Send(param_1,local_50);
  PacketGuard::~PacketGuard(local_50);
  return;
}

```

---

## SendPvpList

```asm
// === 08296642 CGameManager::SendPvpList  [0x08296642-0x8296791] ===
 8296642:	55                   	push   %ebp
 8296643:	89 e5                	mov    %esp,%ebp
 8296645:	56                   	push   %esi
 8296646:	53                   	push   %ebx
 8296647:	83 ec 40             	sub    $0x40,%esp
 829664a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 829664d:	89 04 24             	mov    %eax,(%esp)
 8296650:	e8 f7 76 2f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8296655:	c7 44 24 08 29 00 00 	movl   $0x29,0x8(%esp)
 829665c:	00 
 829665d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8296664:	00 
 8296665:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8296668:	89 04 24             	mov    %eax,(%esp)
 829666b:	e8 8c 52 e3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8296670:	8b 45 08             	mov    0x8(%ebp),%eax
 8296673:	05 5c 02 00 00       	add    $0x25c,%eax
 8296678:	89 04 24             	mov    %eax,(%esp)
 829667b:	e8 b2 c4 01 00       	call   82b2b32 <_ZNK9__gnu_cxx8hash_mapIiP8PvP_RoomNS_4hashIiEESt8equal_toIiESaIS2_EE4sizeEv>
 8296680:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296684:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8296687:	89 04 24             	mov    %eax,(%esp)
 829668a:	e8 15 38 e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 829668f:	8b 45 08             	mov    0x8(%ebp),%eax
 8296692:	8d 90 5c 02 00 00    	lea    0x25c(%eax),%edx
 8296698:	8d 45 d0             	lea    -0x30(%ebp),%eax
 829669b:	89 54 24 04          	mov    %edx,0x4(%esp)
 829669f:	89 04 24             	mov    %eax,(%esp)
 82966a2:	e8 9f c4 01 00       	call   82b2b46 <_ZN9__gnu_cxx8hash_mapIiP8PvP_RoomNS_4hashIiEESt8equal_toIiESaIS2_EE5beginEv>
 82966a7:	83 ec 04             	sub    $0x4,%esp
 82966aa:	eb 5a                	jmp    8296706 <_ZN12CGameManager11SendPvpListEP5CUser+0xc4>
 82966ac:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82966af:	89 04 24             	mov    %eax,(%esp)
 82966b2:	e8 5f af 01 00       	call   82b1616 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8PvP_RoomEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 82966b7:	8b 40 04             	mov    0x4(%eax),%eax
 82966ba:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82966bd:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82966c1:	74 26                	je     82966e9 <_ZN12CGameManager11SendPvpListEP5CUser+0xa7>
 82966c3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82966c6:	89 04 24             	mov    %eax,(%esp)
 82966c9:	e8 94 01 34 00       	call   85d6862 <_ZNK8PvP_Room16get_waiter_countEv>
 82966ce:	85 c0                	test   %eax,%eax
 82966d0:	0f 9f c0             	setg   %al
 82966d3:	84 c0                	test   %al,%al
 82966d5:	74 12                	je     82966e9 <_ZN12CGameManager11SendPvpListEP5CUser+0xa7>
 82966d7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82966da:	89 44 24 04          	mov    %eax,0x4(%esp)
 82966de:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82966e1:	89 04 24             	mov    %eax,(%esp)
 82966e4:	e8 0d 51 34 00       	call   85db7f6 <_ZN8PvP_Room14make_room_infoEPc>
 82966e9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82966ec:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82966f3:	00 
 82966f4:	8d 55 d0             	lea    -0x30(%ebp),%edx
 82966f7:	89 54 24 04          	mov    %edx,0x4(%esp)
 82966fb:	89 04 24             	mov    %eax,(%esp)
 82966fe:	e8 69 c4 01 00       	call   82b2b6c <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8PvP_RoomEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEppEi>
 8296703:	83 ec 04             	sub    $0x4,%esp
 8296706:	8b 45 08             	mov    0x8(%ebp),%eax
 8296709:	8d 90 5c 02 00 00    	lea    0x25c(%eax),%edx
 829670f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8296712:	89 54 24 04          	mov    %edx,0x4(%esp)
 8296716:	89 04 24             	mov    %eax,(%esp)
 8296719:	e8 80 ae 01 00       	call   82b159e <_ZN9__gnu_cxx8hash_mapIiP8PvP_RoomNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 829671e:	83 ec 04             	sub    $0x4,%esp
 8296721:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8296724:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296728:	8d 45 d0             	lea    -0x30(%ebp),%eax
 829672b:	89 04 24             	mov    %eax,(%esp)
 829672e:	e8 f7 ae 01 00       	call   82b162a <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8PvP_RoomEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 8296733:	84 c0                	test   %al,%al
 8296735:	0f 85 71 ff ff ff    	jne    82966ac <_ZN12CGameManager11SendPvpListEP5CUser+0x6a>
 829673b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8296742:	00 
 8296743:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8296746:	89 04 24             	mov    %eax,(%esp)
 8296749:	e8 0a 52 e3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 829674e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8296751:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296755:	8b 45 0c             	mov    0xc(%ebp),%eax
 8296758:	89 04 24             	mov    %eax,(%esp)
 829675b:	e8 5a 1e 3b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8296760:	eb 1b                	jmp    829677d <_ZN12CGameManager11SendPvpListEP5CUser+0x13b>
 8296762:	89 d3                	mov    %edx,%ebx
 8296764:	89 c6                	mov    %eax,%esi
 8296766:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8296769:	89 04 24             	mov    %eax,(%esp)
 829676c:	e8 0f 77 2f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8296771:	89 f0                	mov    %esi,%eax
 8296773:	89 da                	mov    %ebx,%edx
 8296775:	89 04 24             	mov    %eax,(%esp)
 8296778:	e8 d3 cf 84 00       	call   8ae3750 <_Unwind_Resume>
 829677d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8296780:	89 04 24             	mov    %eax,(%esp)
 8296783:	e8 f8 76 2f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8296788:	8d 65 f8             	lea    -0x8(%ebp),%esp
 829678b:	83 c4 00             	add    $0x0,%esp
 829678e:	5b                   	pop    %ebx
 829678f:	5e                   	pop    %esi
 8296790:	5d                   	pop    %ebp
 8296791:	c3                   	ret

```

```c
// CGameManager::SendPvpList @ 0x8296642

/* CGameManager::SendPvpList(CUser*) */

void __thiscall CGameManager::SendPvpList(CGameManager *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
  local_34 [8];
  PacketGuard local_2c [12];
  hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
  local_20 [8];
  _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
  local_18 [8];
  PvP_Room *local_10;
  
  PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 0829666b to 0829675f has its CatchHandler @ 08296762 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x29);
  iVar2 = __gnu_cxx::
          hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
          ::size((hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
                  *)(this + 0x25c));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,iVar2);
  __gnu_cxx::
  hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::begin
            (local_34);
  while( true ) {
    __gnu_cxx::
    hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::end
              (local_20);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
                          *)local_34,(_Hashtable_iterator *)local_20);
    if (cVar1 == '\0') break;
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
                          *)local_34);
    local_10 = *(PvP_Room **)(iVar2 + 4);
    if (local_10 != (PvP_Room *)0x0) {
      iVar2 = PvP_Room::get_waiter_count(local_10);
      if (0 < iVar2) {
        PvP_Room::make_room_info(local_10,(char *)local_2c);
      }
    }
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
    ::operator++(local_18,(int)local_34);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
  CUser::Send(param_1,local_2c);
  PacketGuard::~PacketGuard(local_2c);
  return;
}

```

---

## SendWarRoomList

```asm
// === 082a2f94 CGameManager::SendWarRoomList  [0x082a2f94-0x82a30f1] ===
 82a2f94:	55                   	push   %ebp
 82a2f95:	89 e5                	mov    %esp,%ebp
 82a2f97:	56                   	push   %esi
 82a2f98:	53                   	push   %ebx
 82a2f99:	83 ec 40             	sub    $0x40,%esp
 82a2f9c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82a2f9f:	89 04 24             	mov    %eax,(%esp)
 82a2fa2:	e8 a5 ad 2e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82a2fa7:	c7 44 24 08 57 00 00 	movl   $0x57,0x8(%esp)
 82a2fae:	00 
 82a2faf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82a2fb6:	00 
 82a2fb7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82a2fba:	89 04 24             	mov    %eax,(%esp)
 82a2fbd:	e8 3a 89 e2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82a2fc2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82a2fc5:	89 04 24             	mov    %eax,(%esp)
 82a2fc8:	e8 7f db e6 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 82a2fcd:	89 45 d0             	mov    %eax,-0x30(%ebp)
 82a2fd0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82a2fd7:	00 
 82a2fd8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82a2fdb:	89 04 24             	mov    %eax,(%esp)
 82a2fde:	e8 c1 6e e3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82a2fe3:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82a2fea:	8b 45 08             	mov    0x8(%ebp),%eax
 82a2fed:	8d 90 84 02 00 00    	lea    0x284(%eax),%edx
 82a2ff3:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82a2ff6:	89 54 24 04          	mov    %edx,0x4(%esp)
 82a2ffa:	89 04 24             	mov    %eax,(%esp)
 82a2ffd:	e8 62 1e 01 00       	call   82b4e64 <_ZN9__gnu_cxx8hash_mapIiP7WarRoomNS_4hashIiEESt8equal_toIiESaIS2_EE5beginEv>
 82a3002:	83 ec 04             	sub    $0x4,%esp
 82a3005:	eb 4a                	jmp    82a3051 <_ZN12CGameManager15SendWarRoomListEP5CUser+0xbd>
 82a3007:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82a300a:	89 04 24             	mov    %eax,(%esp)
 82a300d:	e8 b8 1c 01 00       	call   82b4cca <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP7WarRoomEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 82a3012:	8b 40 04             	mov    0x4(%eax),%eax
 82a3015:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82a3018:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82a301c:	74 16                	je     82a3034 <_ZN12CGameManager15SendWarRoomListEP5CUser+0xa0>
 82a301e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82a3021:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a3025:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a3028:	89 04 24             	mov    %eax,(%esp)
 82a302b:	e8 28 ad 41 00       	call   86bdd58 <_ZN7WarRoom12MakeRoomInfoEPc>
 82a3030:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82a3034:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82a3037:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82a303e:	00 
 82a303f:	8d 55 c8             	lea    -0x38(%ebp),%edx
 82a3042:	89 54 24 04          	mov    %edx,0x4(%esp)
 82a3046:	89 04 24             	mov    %eax,(%esp)
 82a3049:	e8 3c 1e 01 00       	call   82b4e8a <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP7WarRoomEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEppEi>
 82a304e:	83 ec 04             	sub    $0x4,%esp
 82a3051:	8b 45 08             	mov    0x8(%ebp),%eax
 82a3054:	8d 90 84 02 00 00    	lea    0x284(%eax),%edx
 82a305a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82a305d:	89 54 24 04          	mov    %edx,0x4(%esp)
 82a3061:	89 04 24             	mov    %eax,(%esp)
 82a3064:	e8 e9 1b 01 00       	call   82b4c52 <_ZN9__gnu_cxx8hash_mapIiP7WarRoomNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 82a3069:	83 ec 04             	sub    $0x4,%esp
 82a306c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82a306f:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a3073:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82a3076:	89 04 24             	mov    %eax,(%esp)
 82a3079:	e8 60 1c 01 00       	call   82b4cde <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP7WarRoomEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 82a307e:	84 c0                	test   %al,%al
 82a3080:	75 85                	jne    82a3007 <_ZN12CGameManager15SendWarRoomListEP5CUser+0x73>
 82a3082:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82a3085:	89 44 24 08          	mov    %eax,0x8(%esp)
 82a3089:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82a308c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a3090:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82a3093:	89 04 24             	mov    %eax,(%esp)
 82a3096:	e8 6d 38 e7 ff       	call   8116908 <_ZN18InterfacePacketBuf9put_shortERii>
 82a309b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82a30a2:	00 
 82a30a3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82a30a6:	89 04 24             	mov    %eax,(%esp)
 82a30a9:	e8 aa 88 e2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82a30ae:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82a30b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a30b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82a30b8:	89 04 24             	mov    %eax,(%esp)
 82a30bb:	e8 fa 54 3a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82a30c0:	eb 1b                	jmp    82a30dd <_ZN12CGameManager15SendWarRoomListEP5CUser+0x149>
 82a30c2:	89 d3                	mov    %edx,%ebx
 82a30c4:	89 c6                	mov    %eax,%esi
 82a30c6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82a30c9:	89 04 24             	mov    %eax,(%esp)
 82a30cc:	e8 af ad 2e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82a30d1:	89 f0                	mov    %esi,%eax
 82a30d3:	89 da                	mov    %ebx,%edx
 82a30d5:	89 04 24             	mov    %eax,(%esp)
 82a30d8:	e8 73 06 84 00       	call   8ae3750 <_Unwind_Resume>
 82a30dd:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82a30e0:	89 04 24             	mov    %eax,(%esp)
 82a30e3:	e8 98 ad 2e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82a30e8:	8d 65 f8             	lea    -0x8(%ebp),%esp
 82a30eb:	83 c4 00             	add    $0x0,%esp
 82a30ee:	5b                   	pop    %ebx
 82a30ef:	5e                   	pop    %esi
 82a30f0:	5d                   	pop    %ebp
 82a30f1:	c3                   	ret

```

```c
// CGameManager::SendWarRoomList @ 0x82a2f94

/* CGameManager::SendWarRoomList(CUser*) */

void __thiscall CGameManager::SendWarRoomList(CGameManager *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_3c [8];
  int local_34;
  PacketGuard local_30 [12];
  hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_24 [8];
  _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_1c [8];
  int local_14;
  WarRoom *local_10;
  
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 082a2fbd to 082a30bf has its CatchHandler @ 082a30c2 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x57);
  local_34 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_30);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,0);
  local_14 = 0;
  __gnu_cxx::hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  ::begin(local_3c);
  while( true ) {
    __gnu_cxx::
    hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>::end
              (local_24);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
                          *)local_3c,(_Hashtable_iterator *)local_24);
    if (cVar1 == '\0') break;
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
                          *)local_3c);
    local_10 = *(WarRoom **)(iVar2 + 4);
    if (local_10 != (WarRoom *)0x0) {
      WarRoom::MakeRoomInfo(local_10,(char *)local_30);
      local_14 = local_14 + 1;
    }
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
    ::operator++(local_1c,(int)local_3c);
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,&local_34,local_14);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
  CUser::Send(param_1,local_30);
  PacketGuard::~PacketGuard(local_30);
  return;
}

```

---

## SendWarRoomToAll

```asm
// === 082a30f2 CGameManager::SendWarRoomToAll  [0x082a30f2-0x82a3201] ===
 82a30f2:	55                   	push   %ebp
 82a30f3:	89 e5                	mov    %esp,%ebp
 82a30f5:	56                   	push   %esi
 82a30f6:	53                   	push   %ebx
 82a30f7:	83 ec 30             	sub    $0x30,%esp
 82a30fa:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82a30fd:	89 04 24             	mov    %eax,(%esp)
 82a3100:	e8 47 ac 2e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82a3105:	c7 44 24 08 57 00 00 	movl   $0x57,0x8(%esp)
 82a310c:	00 
 82a310d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82a3114:	00 
 82a3115:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82a3118:	89 04 24             	mov    %eax,(%esp)
 82a311b:	e8 dc 87 e2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82a3120:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82a3127:	00 
 82a3128:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82a312b:	89 04 24             	mov    %eax,(%esp)
 82a312e:	e8 71 6d e3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82a3133:	8b 45 08             	mov    0x8(%ebp),%eax
 82a3136:	8d 88 84 02 00 00    	lea    0x284(%eax),%ecx
 82a313c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82a313f:	8d 55 0c             	lea    0xc(%ebp),%edx
 82a3142:	89 54 24 08          	mov    %edx,0x8(%esp)
 82a3146:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82a314a:	89 04 24             	mov    %eax,(%esp)
 82a314d:	e8 d4 1a 01 00       	call   82b4c26 <_ZN9__gnu_cxx8hash_mapIiP7WarRoomNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 82a3152:	83 ec 04             	sub    $0x4,%esp
 82a3155:	8b 45 08             	mov    0x8(%ebp),%eax
 82a3158:	8d 90 84 02 00 00    	lea    0x284(%eax),%edx
 82a315e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82a3161:	89 54 24 04          	mov    %edx,0x4(%esp)
 82a3165:	89 04 24             	mov    %eax,(%esp)
 82a3168:	e8 e5 1a 01 00       	call   82b4c52 <_ZN9__gnu_cxx8hash_mapIiP7WarRoomNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 82a316d:	83 ec 04             	sub    $0x4,%esp
 82a3170:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82a3173:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a3177:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82a317a:	89 04 24             	mov    %eax,(%esp)
 82a317d:	e8 f6 1a 01 00       	call   82b4c78 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP7WarRoomEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEeqERKSD_>
 82a3182:	84 c0                	test   %al,%al
 82a3184:	75 67                	jne    82a31ed <_ZN12CGameManager16SendWarRoomToAllEi+0xfb>
 82a3186:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82a3189:	89 04 24             	mov    %eax,(%esp)
 82a318c:	e8 39 1b 01 00       	call   82b4cca <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP7WarRoomEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 82a3191:	8b 40 04             	mov    0x4(%eax),%eax
 82a3194:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82a3197:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82a319a:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a319e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a31a1:	89 04 24             	mov    %eax,(%esp)
 82a31a4:	e8 af ab 41 00       	call   86bdd58 <_ZN7WarRoom12MakeRoomInfoEPc>
 82a31a9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82a31b0:	00 
 82a31b1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82a31b4:	89 04 24             	mov    %eax,(%esp)
 82a31b7:	e8 9c 87 e2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82a31bc:	e8 e6 71 e3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 82a31c1:	8d 55 e0             	lea    -0x20(%ebp),%edx
 82a31c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 82a31c8:	89 04 24             	mov    %eax,(%esp)
 82a31cb:	e8 44 5a 42 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 82a31d0:	eb 1b                	jmp    82a31ed <_ZN12CGameManager16SendWarRoomToAllEi+0xfb>
 82a31d2:	89 d3                	mov    %edx,%ebx
 82a31d4:	89 c6                	mov    %eax,%esi
 82a31d6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82a31d9:	89 04 24             	mov    %eax,(%esp)
 82a31dc:	e8 9f ac 2e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82a31e1:	89 f0                	mov    %esi,%eax
 82a31e3:	89 da                	mov    %ebx,%edx
 82a31e5:	89 04 24             	mov    %eax,(%esp)
 82a31e8:	e8 63 05 84 00       	call   8ae3750 <_Unwind_Resume>
 82a31ed:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82a31f0:	89 04 24             	mov    %eax,(%esp)
 82a31f3:	e8 88 ac 2e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82a31f8:	8d 65 f8             	lea    -0x8(%ebp),%esp
 82a31fb:	83 c4 00             	add    $0x0,%esp
 82a31fe:	5b                   	pop    %ebx
 82a31ff:	5e                   	pop    %esi
 82a3200:	5d                   	pop    %ebp
 82a3201:	c3                   	ret

```

```c
// CGameManager::SendWarRoomToAll @ 0x82a30f2

/* CGameManager::SendWarRoomToAll(int) */

void CGameManager::SendWarRoomToAll(int param_1)

{
  char cVar1;
  int iVar2;
  GameWorld *this;
  _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_2c [8];
  PacketGuard local_24 [12];
  hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_18 [8];
  WarRoom *local_10;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 082a311b to 082a31cf has its CatchHandler @ 082a31d2 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x57);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,1);
  __gnu_cxx::hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  ::find((int *)local_2c);
  __gnu_cxx::hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  ::end(local_18);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
          ::operator==(local_2c,(_Hashtable_iterator *)local_18);
  if (cVar1 == '\0') {
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
            ::operator->(local_2c);
    local_10 = *(WarRoom **)(iVar2 + 4);
    WarRoom::MakeRoomInfo(local_10,(char *)local_24);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this,local_24);
  }
  PacketGuard::~PacketGuard(local_24);
  return;
}

```

---

## Send_userinfos_to_upper_server

```asm
// === 082961be CGameManager::Send_userinfos_to_upper_server  [0x082961be-0x8296641] ===
 82961be:	55                   	push   %ebp
 82961bf:	89 e5                	mov    %esp,%ebp
 82961c1:	56                   	push   %esi
 82961c2:	53                   	push   %ebx
 82961c3:	81 ec 50 17 00 00    	sub    $0x1750,%esp
 82961c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82961cc:	88 85 c4 e8 ff ff    	mov    %al,-0x173c(%ebp)
 82961d2:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 82961d9:	8d 85 ce e8 ff ff    	lea    -0x1732(%ebp),%eax
 82961df:	89 04 24             	mov    %eax,(%esp)
 82961e2:	e8 6b dd 00 00       	call   82a3f52 <_ZN33Packet_Monitor_UDP_Reply_UserInfoC1Ev>
 82961e7:	e8 95 5f e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 82961ec:	89 04 24             	mov    %eax,(%esp)
 82961ef:	e8 d6 48 eb ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 82961f4:	88 85 d9 e8 ff ff    	mov    %al,-0x1727(%ebp)
 82961fa:	e8 a8 41 e4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 82961ff:	89 04 24             	mov    %eax,(%esp)
 8296202:	e8 17 b1 e5 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 8296207:	84 c0                	test   %al,%al
 8296209:	0f 84 b3 00 00 00    	je     82962c2 <_ZN12CGameManager30Send_userinfos_to_upper_serverEh+0x104>
 829620f:	80 bd c4 e8 ff ff c9 	cmpb   $0xc9,-0x173c(%ebp)
 8296216:	0f 85 a6 00 00 00    	jne    82962c2 <_ZN12CGameManager30Send_userinfos_to_upper_serverEh+0x104>
 829621c:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8296223:	a1 28 be 40 09       	mov    0x940be28,%eax
 8296228:	89 04 24             	mov    %eax,(%esp)
 829622b:	e8 7a c8 01 00       	call   82b2aaa <_ZN15CServerProxyMgrI19CMonitorServerProxyE13GetStartIndexEv>
 8296230:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8296233:	eb 70                	jmp    82962a5 <_ZN12CGameManager30Send_userinfos_to_upper_serverEh+0xe7>
 8296235:	8d 45 ca             	lea    -0x36(%ebp),%eax
 8296238:	89 04 24             	mov    %eax,(%esp)
 829623b:	e8 48 de 00 00       	call   82a4088 <_ZN18Packet_ChannelTypeC1Ev>
 8296240:	e8 3c 5f e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8296245:	89 04 24             	mov    %eax,(%esp)
 8296248:	e8 7d 48 eb ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 829624d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8296250:	e8 52 41 e4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8296255:	89 04 24             	mov    %eax,(%esp)
 8296258:	e8 c3 08 e8 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 829625d:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8296260:	0f b7 45 cc          	movzwl -0x34(%ebp),%eax
 8296264:	0f b7 f0             	movzwl %ax,%esi
 8296267:	8d 5d ca             	lea    -0x36(%ebp),%ebx
 829626a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 829626d:	a1 28 be 40 09       	mov    0x940be28,%eax
 8296272:	89 54 24 04          	mov    %edx,0x4(%esp)
 8296276:	89 04 24             	mov    %eax,(%esp)
 8296279:	e8 0c be e7 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 829627e:	89 74 24 08          	mov    %esi,0x8(%esp)
 8296282:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8296286:	89 04 24             	mov    %eax,(%esp)
 8296289:	e8 b6 ab 1d 00       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 829628e:	a1 28 be 40 09       	mov    0x940be28,%eax
 8296293:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8296296:	89 54 24 04          	mov    %edx,0x4(%esp)
 829629a:	89 04 24             	mov    %eax,(%esp)
 829629d:	e8 40 c8 01 00       	call   82b2ae2 <_ZN15CServerProxyMgrI19CMonitorServerProxyE12GetNextIndexERi>
 82962a2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82962a5:	a1 28 be 40 09       	mov    0x940be28,%eax
 82962aa:	89 04 24             	mov    %eax,(%esp)
 82962ad:	e8 24 c8 01 00       	call   82b2ad6 <_ZN15CServerProxyMgrI19CMonitorServerProxyE11GetEndIndexEv>
 82962b2:	8b 55 dc             	mov    -0x24(%ebp),%edx
 82962b5:	39 d0                	cmp    %edx,%eax
 82962b7:	0f 9f c0             	setg   %al
 82962ba:	84 c0                	test   %al,%al
 82962bc:	0f 85 73 ff ff ff    	jne    8296235 <_ZN12CGameManager30Send_userinfos_to_upper_serverEh+0x77>
 82962c2:	8b 45 08             	mov    0x8(%ebp),%eax
 82962c5:	05 2c 02 00 00       	add    $0x22c,%eax
 82962ca:	89 04 24             	mov    %eax,(%esp)
 82962cd:	e8 c4 c7 01 00       	call   82b2a96 <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 82962d2:	84 c0                	test   %al,%al
 82962d4:	0f 85 5c 03 00 00    	jne    8296636 <_ZN12CGameManager30Send_userinfos_to_upper_serverEh+0x478>
 82962da:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 82962e1:	a1 28 be 40 09       	mov    0x940be28,%eax
 82962e6:	89 04 24             	mov    %eax,(%esp)
 82962e9:	e8 bc c7 01 00       	call   82b2aaa <_ZN15CServerProxyMgrI19CMonitorServerProxyE13GetStartIndexEv>
 82962ee:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82962f1:	e9 21 03 00 00       	jmp    8296617 <_ZN12CGameManager30Send_userinfos_to_upper_serverEh+0x459>
 82962f6:	8b 45 08             	mov    0x8(%ebp),%eax
 82962f9:	8d 90 2c 02 00 00    	lea    0x22c(%eax),%edx
 82962ff:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8296302:	89 54 24 04          	mov    %edx,0x4(%esp)
 8296306:	89 04 24             	mov    %eax,(%esp)
 8296309:	e8 a6 d7 e3 ff       	call   80d3ab4 <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 829630e:	83 ec 04             	sub    $0x4,%esp
 8296311:	e9 68 02 00 00       	jmp    829657e <_ZN12CGameManager30Send_userinfos_to_upper_serverEh+0x3c0>
 8296316:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8296319:	89 04 24             	mov    %eax,(%esp)
 829631c:	e8 77 a4 01 00       	call   82b0798 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 8296321:	8b 40 04             	mov    0x4(%eax),%eax
 8296324:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8296327:	8b 45 ec             	mov    -0x14(%ebp),%eax
 829632a:	89 04 24             	mov    %eax,(%esp)
 829632d:	e8 5a 40 e4 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8296332:	83 f8 01             	cmp    $0x1,%eax
 8296335:	7e 17                	jle    829634e <_ZN12CGameManager30Send_userinfos_to_upper_serverEh+0x190>
 8296337:	8b 45 ec             	mov    -0x14(%ebp),%eax
 829633a:	89 04 24             	mov    %eax,(%esp)
 829633d:	e8 4e 59 e3 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8296342:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8296345:	75 07                	jne    829634e <_ZN12CGameManager30Send_userinfos_to_upper_serverEh+0x190>
 8296347:	b8 01 00 00 00       	mov    $0x1,%eax
 829634c:	eb 05                	jmp    8296353 <_ZN12CGameManager30Send_userinfos_to_upper_serverEh+0x195>
 829634e:	b8 00 00 00 00       	mov    $0x0,%eax
 8296353:	84 c0                	test   %al,%al
 8296355:	0f 84 18 02 00 00    	je     8296573 <_ZN12CGameManager30Send_userinfos_to_upper_serverEh+0x3b5>
 829635b:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 829635e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8296361:	89 04 24             	mov    %eax,(%esp)
 8296364:	e8 05 40 e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8296369:	6b d3 4e             	imul   $0x4e,%ebx,%edx
 829636c:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 829636f:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8296372:	81 ea 2a 17 00 00    	sub    $0x172a,%edx
 8296378:	89 42 0c             	mov    %eax,0xc(%edx)
 829637b:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 829637e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8296385:	ff 
 8296386:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8296389:	89 04 24             	mov    %eax,(%esp)
 829638c:	e8 0f 7c 3b 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8296391:	6b d3 4e             	imul   $0x4e,%ebx,%edx
 8296394:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 8296397:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 829639a:	81 ea 2a 17 00 00    	sub    $0x172a,%edx
 82963a0:	89 42 10             	mov    %eax,0x10(%edx)
 82963a3:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 82963a6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82963a9:	89 04 24             	mov    %eax,(%esp)
 82963ac:	e8 e5 28 e3 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 82963b1:	6b d3 4e             	imul   $0x4e,%ebx,%edx
 82963b4:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 82963b7:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 82963ba:	81 ea 2a 17 00 00    	sub    $0x172a,%edx
 82963c0:	89 42 14             	mov    %eax,0x14(%edx)
 82963c3:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 82963c6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82963c9:	89 04 24             	mov    %eax,(%esp)
 82963cc:	e8 9b 90 f9 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 82963d1:	6b d3 4e             	imul   $0x4e,%ebx,%edx
 82963d4:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 82963d7:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 82963da:	81 ea 2a 17 00 00    	sub    $0x172a,%edx
 82963e0:	89 42 18             	mov    %eax,0x18(%edx)
 82963e3:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 82963e6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82963e9:	89 04 24             	mov    %eax,(%esp)
 82963ec:	e8 2f 7b e6 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 82963f1:	6b d3 4e             	imul   $0x4e,%ebx,%edx
 82963f4:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 82963f7:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 82963fa:	81 ea 1a 17 00 00    	sub    $0x171a,%edx
 8296400:	88 42 0c             	mov    %al,0xc(%edx)
 8296403:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 8296406:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8296409:	89 04 24             	mov    %eax,(%esp)
 829640c:	e8 0b 10 ec ff       	call   815741c <_ZNK15CUserCharacInfo20getCurCharacGrowTypeEv>
 8296411:	6b d3 4e             	imul   $0x4e,%ebx,%edx
 8296414:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 8296417:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 829641a:	81 ea 1a 17 00 00    	sub    $0x171a,%edx
 8296420:	88 42 0d             	mov    %al,0xd(%edx)
 8296423:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 8296426:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8296429:	89 04 24             	mov    %eax,(%esp)
 829642c:	e8 87 3e e4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8296431:	6b d3 4e             	imul   $0x4e,%ebx,%edx
 8296434:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 8296437:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 829643a:	81 ea 0c 17 00 00    	sub    $0x170c,%edx
 8296440:	66 89 02             	mov    %ax,(%edx)
 8296443:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 8296446:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8296449:	89 04 24             	mov    %eax,(%esp)
 829644c:	e8 73 91 f9 ff       	call   822f5c4 <_ZN15CUserCharacInfo20get_charac_memberkeyEv>
 8296451:	6b d3 4e             	imul   $0x4e,%ebx,%edx
 8296454:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 8296457:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 829645a:	81 ea fa 16 00 00    	sub    $0x16fa,%edx
 8296460:	89 42 0e             	mov    %eax,0xe(%edx)
 8296463:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8296466:	89 04 24             	mov    %eax,(%esp)
 8296469:	e8 ba ab e6 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 829646e:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 8296471:	8d 95 ce e8 ff ff    	lea    -0x1732(%ebp),%edx
 8296477:	6b c9 4e             	imul   $0x4e,%ecx,%ecx
 829647a:	83 c1 10             	add    $0x10,%ecx
 829647d:	01 ca                	add    %ecx,%edx
 829647f:	83 c2 10             	add    $0x10,%edx
 8296482:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296486:	89 14 24             	mov    %edx,(%esp)
 8296489:	e8 62 7a de ff       	call   807def0 <strcpy@plt>
 829648e:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 8296491:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8296494:	89 04 24             	mov    %eax,(%esp)
 8296497:	e8 76 87 3e 00       	call   867ec12 <_ZN5CUser6getSexEv>
 829649c:	6b d3 4e             	imul   $0x4e,%ebx,%edx
 829649f:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 82964a2:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 82964a5:	81 ea ea 16 00 00    	sub    $0x16ea,%edx
 82964ab:	88 42 12             	mov    %al,0x12(%edx)
 82964ae:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82964b1:	89 04 24             	mov    %eax,(%esp)
 82964b4:	e8 9d ab e6 ff       	call   8101056 <_ZN5CUser12GetSsnStringEv>
 82964b9:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 82964bc:	8d 95 ce e8 ff ff    	lea    -0x1732(%ebp),%edx
 82964c2:	6b c9 4e             	imul   $0x4e,%ecx,%ecx
 82964c5:	83 c1 40             	add    $0x40,%ecx
 82964c8:	01 ca                	add    %ecx,%edx
 82964ca:	83 c2 13             	add    $0x13,%edx
 82964cd:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 82964d4:	00 
 82964d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 82964d9:	89 14 24             	mov    %edx,(%esp)
 82964dc:	e8 bf 73 de ff       	call   807d8a0 <memcpy@plt>
 82964e1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82964e4:	8d 90 e0 00 00 00    	lea    0xe0(%eax),%edx
 82964ea:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 82964f1:	00 
 82964f2:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82964f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 82964f9:	89 14 24             	mov    %edx,(%esp)
 82964fc:	e8 2d c3 ec ff       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 8296501:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8296504:	8d 85 ce e8 ff ff    	lea    -0x1732(%ebp),%eax
 829650a:	6b d2 4e             	imul   $0x4e,%edx,%edx
 829650d:	83 c2 30             	add    $0x30,%edx
 8296510:	01 d0                	add    %edx,%eax
 8296512:	8d 50 12             	lea    0x12(%eax),%edx
 8296515:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8296518:	89 44 24 04          	mov    %eax,0x4(%esp)
 829651c:	89 14 24             	mov    %edx,(%esp)
 829651f:	e8 cc 79 de ff       	call   807def0 <strcpy@plt>
 8296524:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8296528:	83 7d e8 4a          	cmpl   $0x4a,-0x18(%ebp)
 829652c:	0f 9f c0             	setg   %al
 829652f:	84 c0                	test   %al,%al
 8296531:	74 40                	je     8296573 <_ZN12CGameManager30Send_userinfos_to_upper_serverEh+0x3b5>
 8296533:	66 c7 85 d0 e8 ff ff 	movw   $0x16e6,-0x1730(%ebp)
 829653a:	e6 16 
 829653c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 829653f:	88 85 d8 e8 ff ff    	mov    %al,-0x1728(%ebp)
 8296545:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8296548:	0f b6 85 c4 e8 ff ff 	movzbl -0x173c(%ebp),%eax
 829654f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8296553:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8296556:	89 54 24 08          	mov    %edx,0x8(%esp)
 829655a:	89 44 24 04          	mov    %eax,0x4(%esp)
 829655e:	8d 85 ce e8 ff ff    	lea    -0x1732(%ebp),%eax
 8296564:	89 04 24             	mov    %eax,(%esp)
 8296567:	e8 ae fb ff ff       	call   829611a <_Z25SendUserInfoToUpperServerR33Packet_Monitor_UDP_Reply_UserInfohP5CUser17ENUM_SERVER_GROUP>
 829656c:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8296573:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8296576:	89 04 24             	mov    %eax,(%esp)
 8296579:	e8 d4 a7 e3 ff       	call   80d0d52 <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
 829657e:	8b 45 08             	mov    0x8(%ebp),%eax
 8296581:	8d 90 2c 02 00 00    	lea    0x22c(%eax),%edx
 8296587:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 829658a:	89 54 24 04          	mov    %edx,0x4(%esp)
 829658e:	89 04 24             	mov    %eax,(%esp)
 8296591:	e8 44 d5 e3 ff       	call   80d3ada <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 8296596:	83 ec 04             	sub    $0x4,%esp
 8296599:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 829659c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82965a0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 82965a3:	89 04 24             	mov    %eax,(%esp)
 82965a6:	e8 51 a2 01 00       	call   82b07fc <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 82965ab:	84 c0                	test   %al,%al
 82965ad:	0f 85 63 fd ff ff    	jne    8296316 <_ZN12CGameManager30Send_userinfos_to_upper_serverEh+0x158>
 82965b3:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 82965b7:	74 47                	je     8296600 <_ZN12CGameManager30Send_userinfos_to_upper_serverEh+0x442>
 82965b9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82965bc:	6b c0 4e             	imul   $0x4e,%eax,%eax
 82965bf:	83 c0 0c             	add    $0xc,%eax
 82965c2:	66 89 85 d0 e8 ff ff 	mov    %ax,-0x1730(%ebp)
 82965c9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82965cc:	88 85 d8 e8 ff ff    	mov    %al,-0x1728(%ebp)
 82965d2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82965d5:	0f b6 85 c4 e8 ff ff 	movzbl -0x173c(%ebp),%eax
 82965dc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82965e0:	8b 55 ec             	mov    -0x14(%ebp),%edx
 82965e3:	89 54 24 08          	mov    %edx,0x8(%esp)
 82965e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82965eb:	8d 85 ce e8 ff ff    	lea    -0x1732(%ebp),%eax
 82965f1:	89 04 24             	mov    %eax,(%esp)
 82965f4:	e8 21 fb ff ff       	call   829611a <_Z25SendUserInfoToUpperServerR33Packet_Monitor_UDP_Reply_UserInfohP5CUser17ENUM_SERVER_GROUP>
 82965f9:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8296600:	a1 28 be 40 09       	mov    0x940be28,%eax
 8296605:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8296608:	89 54 24 04          	mov    %edx,0x4(%esp)
 829660c:	89 04 24             	mov    %eax,(%esp)
 829660f:	e8 ce c4 01 00       	call   82b2ae2 <_ZN15CServerProxyMgrI19CMonitorServerProxyE12GetNextIndexERi>
 8296614:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8296617:	a1 28 be 40 09       	mov    0x940be28,%eax
 829661c:	89 04 24             	mov    %eax,(%esp)
 829661f:	e8 b2 c4 01 00       	call   82b2ad6 <_ZN15CServerProxyMgrI19CMonitorServerProxyE11GetEndIndexEv>
 8296624:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8296627:	39 d0                	cmp    %edx,%eax
 8296629:	0f 9f c0             	setg   %al
 829662c:	84 c0                	test   %al,%al
 829662e:	0f 85 c2 fc ff ff    	jne    82962f6 <_ZN12CGameManager30Send_userinfos_to_upper_serverEh+0x138>
 8296634:	eb 01                	jmp    8296637 <_ZN12CGameManager30Send_userinfos_to_upper_serverEh+0x479>
 8296636:	90                   	nop
 8296637:	8d 65 f8             	lea    -0x8(%ebp),%esp
 829663a:	83 c4 00             	add    $0x0,%esp
 829663d:	5b                   	pop    %ebx
 829663e:	5e                   	pop    %esi
 829663f:	5d                   	pop    %ebp
 8296640:	c3                   	ret
 8296641:	90                   	nop

```

```c
// CGameManager::Send_userinfos_to_upper_server @ 0x82961be

/* CGameManager::Send_userinfos_to_upper_server(unsigned char) */

void __thiscall CGameManager::Send_userinfos_to_upper_server(CGameManager *this,uchar param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  CEnvironment *pCVar6;
  GameWorld *pGVar7;
  CMonitorServerProxy *this_00;
  int iVar8;
  undefined4 uVar9;
  char *__src;
  void *__src_00;
  uint uVar10;
  Packet_Monitor_UDP_Reply_UserInfo local_1736 [2];
  short local_1734;
  undefined1 local_172c;
  undefined1 local_172b;
  undefined4 auStack_172a [4];
  undefined1 auStack_171a [2];
  undefined2 uStack_1718;
  char acStack_1716 [30];
  undefined4 uStack_16f8;
  char acStack_16f4 [16];
  undefined1 auStack_16e4 [5780];
  char local_50 [16];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_40 [6];
  Packet_ChannelType local_3a [2];
  ushort local_38;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_20 [4];
  int local_1c;
  CUser *local_18;
  undefined4 local_14;
  int local_10;
  
  local_1c = 0;
  Packet_Monitor_UDP_Reply_UserInfo::Packet_Monitor_UDP_Reply_UserInfo(local_1736);
  pCVar6 = (CEnvironment *)G_CEnvironment();
  local_172b = CEnvironment::get_channel_no(pCVar6);
  pGVar7 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar7);
  if ((cVar3 != '\0') && (param_1 == 0xc9)) {
    local_28 = 0;
    local_14 = CServerProxyMgr<CMonitorServerProxy>::GetStartIndex(GlobalData::s_monitor_proxy_mgr);
    while (iVar8 = CServerProxyMgr<CMonitorServerProxy>::GetEndIndex
                             (GlobalData::s_monitor_proxy_mgr), local_28 < iVar8) {
      Packet_ChannelType::Packet_ChannelType(local_3a);
      pCVar6 = (CEnvironment *)G_CEnvironment();
      local_30 = CEnvironment::get_channel_no(pCVar6);
      pGVar7 = (GameWorld *)G_GameWorld();
      local_2c = GameWorld::GetChannelType(pGVar7);
      uVar10 = (uint)local_38;
      this_00 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,local_14);
      CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_3a,uVar10);
      local_14 = CServerProxyMgr<CMonitorServerProxy>::GetNextIndex
                           (GlobalData::s_monitor_proxy_mgr,&local_28);
    }
  }
  cVar3 = std::
          map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                   *)(this + 0x22c));
  if (cVar3 == '\0') {
    local_24 = 0;
    local_10 = CServerProxyMgr<CMonitorServerProxy>::GetStartIndex(GlobalData::s_monitor_proxy_mgr);
    while (iVar8 = CServerProxyMgr<CMonitorServerProxy>::GetEndIndex
                             (GlobalData::s_monitor_proxy_mgr), local_24 < iVar8) {
      std::
      map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::begin(local_40);
      while( true ) {
        std::
        map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
        ::end(local_20);
        cVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_40,
                           (_Rb_tree_iterator *)local_20);
        if (cVar3 == '\0') break;
        iVar8 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_40);
        local_18 = *(CUser **)(iVar8 + 4);
        iVar8 = CUser::get_state(local_18);
        if ((iVar8 < 2) || (iVar8 = CUser::GetServerGroup(local_18), iVar8 != local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        iVar8 = local_1c;
        if (bVar1) {
          uVar9 = CUser::get_acc_id(local_18);
          iVar2 = local_1c;
          *(undefined4 *)((int)auStack_172a + iVar8 * 0x4e) = uVar9;
          uVar9 = CUser::get_charac_no(local_18,-1);
          iVar8 = local_1c;
          *(undefined4 *)((int)auStack_172a + iVar2 * 0x4e + 4) = uVar9;
          uVar9 = CUser::GetUID(local_18);
          iVar2 = local_1c;
          *(undefined4 *)((int)auStack_172a + iVar8 * 0x4e + 8) = uVar9;
          uVar9 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)local_18);
          iVar8 = local_1c;
          *(undefined4 *)(auStack_171a + iVar2 * 0x4e + -4) = uVar9;
          uVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)local_18);
          iVar2 = local_1c;
          auStack_171a[iVar8 * 0x4e] = uVar4;
          uVar4 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)local_18);
          iVar8 = local_1c;
          auStack_171a[iVar2 * 0x4e + 1] = uVar4;
          uVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)local_18);
          iVar2 = local_1c;
          *(undefined2 *)(auStack_171a + iVar8 * 0x4e + 2) = uVar5;
          uVar9 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)local_18);
          *(undefined4 *)((int)&uStack_16f8 + iVar2 * 0x4e) = uVar9;
          __src = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_18);
          strcpy(auStack_171a + local_1c * 0x4e + 4,__src);
          iVar8 = local_1c;
          uVar4 = CUser::getSex(local_18);
          auStack_16e4[iVar8 * 0x4e] = uVar4;
          __src_00 = (void *)CUser::GetSsnString(local_18);
          memcpy(auStack_16e4 + local_1c * 0x4e + 1,__src_00,6);
          CNetwork<4096,450000>::GetPeerIP2
                    ((CNetwork<4096,450000> *)(local_18 + 0xe0),local_50,0x10);
          strcpy(acStack_16f4 + local_1c * 0x4e,local_50);
          local_1c = local_1c + 1;
          if (0x4a < local_1c) {
            local_1734 = 0x16e6;
            local_172c = (undefined1)local_1c;
            SendUserInfoToUpperServer(local_1736,param_1,local_18,local_10);
            local_1c = 0;
          }
        }
        std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                  ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_40);
      }
      if (local_1c != 0) {
        local_1734 = (short)local_1c * 0x4e + 0xc;
        local_172c = (undefined1)local_1c;
        SendUserInfoToUpperServer(local_1736,param_1,local_18,local_10);
        local_1c = 0;
      }
      local_10 = CServerProxyMgr<CMonitorServerProxy>::GetNextIndex
                           (GlobalData::s_monitor_proxy_mgr,&local_24);
    }
  }
  return;
}

```

---

## WarRoomAlloc

```asm
// === 08298a30 CGameManager::WarRoomAlloc  [0x08298a30-0x8298b3f] ===
 8298a30:	55                   	push   %ebp
 8298a31:	89 e5                	mov    %esp,%ebp
 8298a33:	53                   	push   %ebx
 8298a34:	83 ec 34             	sub    $0x34,%esp
 8298a37:	e8 5f 37 e3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8298a3c:	05 b4 87 00 00       	add    $0x87b4,%eax
 8298a41:	89 04 24             	mov    %eax,(%esp)
 8298a44:	e8 7b 9a 66 00       	call   89024c4 <_ZN14WarAreaCounter18GetCurrenTimeTableEv>
 8298a49:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8298a4c:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8298a53:	e9 c8 00 00 00       	jmp    8298b20 <_ZN12CGameManager12WarRoomAllocEv+0xf0>
 8298a58:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8298a5f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8298a66:	e9 89 00 00 00       	jmp    8298af4 <_ZN12CGameManager12WarRoomAllocEv+0xc4>
 8298a6b:	8b 45 08             	mov    0x8(%ebp),%eax
 8298a6e:	89 04 24             	mov    %eax,(%esp)
 8298a71:	e8 72 9a 00 00       	call   82a24e8 <_ZN12CGameManager10GetWarRoomEv>
 8298a76:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8298a79:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8298a7c:	89 c2                	mov    %eax,%edx
 8298a7e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8298a81:	88 10                	mov    %dl,(%eax)
 8298a83:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8298a86:	89 c2                	mov    %eax,%edx
 8298a88:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8298a8b:	88 50 01             	mov    %dl,0x1(%eax)
 8298a8e:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8298a92:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8298a95:	89 04 24             	mov    %eax,(%esp)
 8298a98:	e8 37 4b 42 00       	call   86bd5d4 <_ZN7WarRoom7PrepareEv>
 8298a9d:	e8 f9 36 e3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8298aa2:	89 c1                	mov    %eax,%ecx
 8298aa4:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8298aa7:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 8298aaa:	89 d0                	mov    %edx,%eax
 8298aac:	c1 e0 02             	shl    $0x2,%eax
 8298aaf:	01 d0                	add    %edx,%eax
 8298ab1:	01 c0                	add    %eax,%eax
 8298ab3:	01 d8                	add    %ebx,%eax
 8298ab5:	05 3c 22 00 00       	add    $0x223c,%eax
 8298aba:	8b 44 81 08          	mov    0x8(%ecx,%eax,4),%eax
 8298abe:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8298ac1:	0f 9f c0             	setg   %al
 8298ac4:	84 c0                	test   %al,%al
 8298ac6:	74 15                	je     8298add <_ZN12CGameManager12WarRoomAllocEv+0xad>
 8298ac8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8298acf:	00 
 8298ad0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8298ad3:	89 04 24             	mov    %eax,(%esp)
 8298ad6:	e8 7b cf 00 00       	call   82a5a56 <_ZN7WarRoom8SetStateE13WARROOM_STATE>
 8298adb:	eb 13                	jmp    8298af0 <_ZN12CGameManager12WarRoomAllocEv+0xc0>
 8298add:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8298ae4:	ff 
 8298ae5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8298ae8:	89 04 24             	mov    %eax,(%esp)
 8298aeb:	e8 66 cf 00 00       	call   82a5a56 <_ZN7WarRoom8SetStateE13WARROOM_STATE>
 8298af0:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8298af4:	e8 a2 36 e3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8298af9:	8d 90 b4 87 00 00    	lea    0x87b4(%eax),%edx
 8298aff:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8298b02:	89 44 24 04          	mov    %eax,0x4(%esp)
 8298b06:	89 14 24             	mov    %edx,(%esp)
 8298b09:	e8 72 b2 00 00       	call   82a3d80 <_ZN14WarAreaCounter25GetWarRoomCountAtPeekTimeEi>
 8298b0e:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8298b11:	0f 9f c0             	setg   %al
 8298b14:	84 c0                	test   %al,%al
 8298b16:	0f 85 4f ff ff ff    	jne    8298a6b <_ZN12CGameManager12WarRoomAllocEv+0x3b>
 8298b1c:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8298b20:	83 7d e8 09          	cmpl   $0x9,-0x18(%ebp)
 8298b24:	0f 9e c0             	setle  %al
 8298b27:	84 c0                	test   %al,%al
 8298b29:	0f 85 29 ff ff ff    	jne    8298a58 <_ZN12CGameManager12WarRoomAllocEv+0x28>
 8298b2f:	8b 45 08             	mov    0x8(%ebp),%eax
 8298b32:	89 04 24             	mov    %eax,(%esp)
 8298b35:	e8 06 00 00 00       	call   8298b40 <_ZN12CGameManager16PrintWarRoomListEv>
 8298b3a:	83 c4 34             	add    $0x34,%esp
 8298b3d:	5b                   	pop    %ebx
 8298b3e:	5d                   	pop    %ebp
 8298b3f:	c3                   	ret

```

```c
// CGameManager::WarRoomAlloc @ 0x8298a30

/* CGameManager::WarRoomAlloc() */

void __thiscall CGameManager::WarRoomAlloc(CGameManager *this)

{
  WarRoom WVar1;
  int iVar2;
  WarRoom *this_00;
  int iVar3;
  int local_1c;
  int local_14;
  
  iVar2 = G_CDataManager();
  iVar2 = WarAreaCounter::GetCurrenTimeTable((WarAreaCounter *)(iVar2 + 0x87b4));
  for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
    WVar1 = (WarRoom)0x0;
    local_14 = 0;
    while( true ) {
      iVar3 = G_CDataManager();
      iVar3 = WarAreaCounter::GetWarRoomCountAtPeekTime((WarAreaCounter *)(iVar3 + 0x87b4),local_1c)
      ;
      if (iVar3 <= local_14) break;
      this_00 = (WarRoom *)GetWarRoom(this);
      *this_00 = SUB41(local_1c,0);
      this_00[1] = WVar1;
      WVar1 = (WarRoom)((char)WVar1 + '\x01');
      WarRoom::Prepare(this_00);
      iVar3 = G_CDataManager();
      if (local_14 < *(int *)(iVar3 + 8 + (iVar2 * 10 + local_1c + 0x223c) * 4)) {
        WarRoom::SetState(this_00,0);
      }
      else {
        WarRoom::SetState(this_00,0xffffffff);
      }
      local_14 = local_14 + 1;
    }
  }
  PrintWarRoomList();
  return;
}

```

---

## WarRoomCountAdjustByChannelInfo

```asm
// === 08298940 CGameManager::WarRoomCountAdjustByChannelInfo  [0x08298940-0x8298a2f] ===
 8298940:	55                   	push   %ebp
 8298941:	89 e5                	mov    %esp,%ebp
 8298943:	57                   	push   %edi
 8298944:	56                   	push   %esi
 8298945:	53                   	push   %ebx
 8298946:	83 ec 3c             	sub    $0x3c,%esp
 8298949:	e8 4d 38 e3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 829894e:	89 04 24             	mov    %eax,(%esp)
 8298951:	e8 a2 1d eb ff       	call   814a6f8 <_ZNK12CDataManager16GetChannelScriptEv>
 8298956:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8298959:	e8 23 38 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829895e:	89 04 24             	mov    %eax,(%esp)
 8298961:	e8 64 21 eb ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 8298966:	89 c3                	mov    %eax,%ebx
 8298968:	e8 14 38 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829896d:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 8298973:	0f b6 c0             	movzbl %al,%eax
 8298976:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 829897a:	89 44 24 04          	mov    %eax,0x4(%esp)
 829897e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8298981:	89 04 24             	mov    %eax,(%esp)
 8298984:	e8 af 43 64 00       	call   88dcd38 <_ZNK16channel_script_t14getChannelInfoEhj>
 8298989:	89 45 dc             	mov    %eax,-0x24(%ebp)
 829898c:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8298993:	e9 81 00 00 00       	jmp    8298a19 <_ZN12CGameManager31WarRoomCountAdjustByChannelInfoEv+0xd9>
 8298998:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 829899f:	eb 69                	jmp    8298a0a <_ZN12CGameManager31WarRoomCountAdjustByChannelInfoEv+0xca>
 82989a1:	e8 f5 37 e3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 82989a6:	89 c6                	mov    %eax,%esi
 82989a8:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 82989ab:	8b 7d e0             	mov    -0x20(%ebp),%edi
 82989ae:	8b 55 e0             	mov    -0x20(%ebp),%edx
 82989b1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82989b4:	83 c2 04             	add    $0x4,%edx
 82989b7:	d9 44 90 08          	flds   0x8(%eax,%edx,4)
 82989bb:	d9 5d cc             	fstps  -0x34(%ebp)
 82989be:	e8 d8 37 e3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 82989c3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 82989c6:	81 c2 ec 21 00 00    	add    $0x21ec,%edx
 82989cc:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 82989d0:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 82989d3:	db 45 d4             	fildl  -0x2c(%ebp)
 82989d6:	d8 4d cc             	fmuls  -0x34(%ebp)
 82989d9:	d9 7d d2             	fnstcw -0x2e(%ebp)
 82989dc:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
 82989e0:	b4 0c                	mov    $0xc,%ah
 82989e2:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
 82989e6:	d9 6d d0             	fldcw  -0x30(%ebp)
 82989e9:	db 5d d4             	fistpl -0x2c(%ebp)
 82989ec:	d9 6d d2             	fldcw  -0x2e(%ebp)
 82989ef:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 82989f2:	89 d8                	mov    %ebx,%eax
 82989f4:	c1 e0 02             	shl    $0x2,%eax
 82989f7:	01 d8                	add    %ebx,%eax
 82989f9:	01 c0                	add    %eax,%eax
 82989fb:	01 f8                	add    %edi,%eax
 82989fd:	05 3c 22 00 00       	add    $0x223c,%eax
 8298a02:	89 54 86 08          	mov    %edx,0x8(%esi,%eax,4)
 8298a06:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8298a0a:	83 7d e4 17          	cmpl   $0x17,-0x1c(%ebp)
 8298a0e:	0f 9e c0             	setle  %al
 8298a11:	84 c0                	test   %al,%al
 8298a13:	75 8c                	jne    82989a1 <_ZN12CGameManager31WarRoomCountAdjustByChannelInfoEv+0x61>
 8298a15:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8298a19:	83 7d e0 09          	cmpl   $0x9,-0x20(%ebp)
 8298a1d:	0f 9e c0             	setle  %al
 8298a20:	84 c0                	test   %al,%al
 8298a22:	0f 85 70 ff ff ff    	jne    8298998 <_ZN12CGameManager31WarRoomCountAdjustByChannelInfoEv+0x58>
 8298a28:	83 c4 3c             	add    $0x3c,%esp
 8298a2b:	5b                   	pop    %ebx
 8298a2c:	5e                   	pop    %esi
 8298a2d:	5f                   	pop    %edi
 8298a2e:	5d                   	pop    %ebp
 8298a2f:	c3                   	ret

```

```c
// CGameManager::WarRoomCountAdjustByChannelInfo @ 0x8298940

/* CGameManager::WarRoomCountAdjustByChannelInfo() */

void CGameManager::WarRoomCountAdjustByChannelInfo(void)

{
  float fVar1;
  CDataManager *this;
  channel_script_t *this_00;
  CEnvironment *this_01;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_24;
  undefined4 local_20;
  
  this = (CDataManager *)G_CDataManager();
  this_00 = (channel_script_t *)CDataManager::GetChannelScript(this);
  this_01 = (CEnvironment *)G_CEnvironment();
  uVar2 = CEnvironment::get_channel_no(this_01);
  iVar3 = G_CEnvironment();
  iVar3 = channel_script_t::getChannelInfo(this_00,(uchar)*(undefined4 *)(iVar3 + 0x378),uVar2);
  for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
    for (local_20 = 0; local_20 < 0x18; local_20 = local_20 + 1) {
      iVar4 = G_CDataManager();
      fVar1 = *(float *)(iVar3 + 8 + (local_24 + 4) * 4);
      iVar5 = G_CDataManager();
      *(int *)(iVar4 + 8 + (local_20 * 10 + local_24 + 0x223c) * 4) =
           (int)ROUND((float)*(int *)(iVar5 + 4 + (local_20 + 0x21ec) * 4) * fVar1);
    }
  }
  return;
}

```

---

## WarRoomCountManage

```asm
// === 082a271a CGameManager::WarRoomCountManage  [0x082a271a-0x82a2c07] ===
 82a271a:	55                   	push   %ebp
 82a271b:	89 e5                	mov    %esp,%ebp
 82a271d:	57                   	push   %edi
 82a271e:	56                   	push   %esi
 82a271f:	53                   	push   %ebx
 82a2720:	81 ec ec 00 00 00    	sub    $0xec,%esp
 82a2726:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82a272d:	00 
 82a272e:	c7 44 24 08 6f 30 00 	movl   $0x306f,0x8(%esp)
 82a2735:	00 
 82a2736:	c7 44 24 04 a0 9e c1 	movl   $0x8c19ea0,0x4(%esp)
 82a273d:	08 
 82a273e:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 82a2744:	89 04 24             	mov    %eax,(%esp)
 82a2747:	e8 cc cf 2a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82a274c:	c7 44 24 04 39 8c c1 	movl   $0x8c18c39,0x4(%esp)
 82a2753:	08 
 82a2754:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 82a275a:	89 04 24             	mov    %eax,(%esp)
 82a275d:	e8 26 d0 2a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82a2762:	8d 9d 34 ff ff ff    	lea    -0xcc(%ebp),%ebx
 82a2768:	b8 00 00 00 00       	mov    $0x0,%eax
 82a276d:	ba 0a 00 00 00       	mov    $0xa,%edx
 82a2772:	89 df                	mov    %ebx,%edi
 82a2774:	89 d1                	mov    %edx,%ecx
 82a2776:	f3 ab                	rep stos %eax,%es:(%edi)
 82a2778:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 82a277f:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 82a2786:	e9 b9 00 00 00       	jmp    82a2844 <_ZN12CGameManager18WarRoomCountManageEi+0x12a>
 82a278b:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 82a2792:	e9 81 00 00 00       	jmp    82a2818 <_ZN12CGameManager18WarRoomCountManageEi+0xfe>
 82a2797:	8b 45 ac             	mov    -0x54(%ebp),%eax
 82a279a:	83 45 ac 01          	addl   $0x1,-0x54(%ebp)
 82a279e:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a27a2:	8b 45 08             	mov    0x8(%ebp),%eax
 82a27a5:	89 04 24             	mov    %eax,(%esp)
 82a27a8:	e8 23 fe ff ff       	call   82a25d0 <_ZN12CGameManager10GetWarRoomEi>
 82a27ad:	89 45 c0             	mov    %eax,-0x40(%ebp)
 82a27b0:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 82a27b4:	75 35                	jne    82a27eb <_ZN12CGameManager18WarRoomCountManageEi+0xd1>
 82a27b6:	8b 45 ac             	mov    -0x54(%ebp),%eax
 82a27b9:	89 44 24 14          	mov    %eax,0x14(%esp)
 82a27bd:	c7 44 24 10 54 8c c1 	movl   $0x8c18c54,0x10(%esp)
 82a27c4:	08 
 82a27c5:	c7 44 24 0c 7d 30 00 	movl   $0x307d,0xc(%esp)
 82a27cc:	00 
 82a27cd:	c7 44 24 08 a0 9e c1 	movl   $0x8c19ea0,0x8(%esp)
 82a27d4:	08 
 82a27d5:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 82a27dc:	08 
 82a27dd:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 82a27e4:	e8 21 14 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 82a27e9:	eb 29                	jmp    82a2814 <_ZN12CGameManager18WarRoomCountManageEi+0xfa>
 82a27eb:	8b 45 c0             	mov    -0x40(%ebp),%eax
 82a27ee:	89 04 24             	mov    %eax,(%esp)
 82a27f1:	e8 a0 c6 f8 ff       	call   822ee96 <_ZN7WarRoom8GetStateEv>
 82a27f6:	83 f8 ff             	cmp    $0xffffffff,%eax
 82a27f9:	0f 95 c0             	setne  %al
 82a27fc:	84 c0                	test   %al,%al
 82a27fe:	74 14                	je     82a2814 <_ZN12CGameManager18WarRoomCountManageEi+0xfa>
 82a2800:	8b 45 b8             	mov    -0x48(%ebp),%eax
 82a2803:	8b 94 85 34 ff ff ff 	mov    -0xcc(%ebp,%eax,4),%edx
 82a280a:	83 c2 01             	add    $0x1,%edx
 82a280d:	89 94 85 34 ff ff ff 	mov    %edx,-0xcc(%ebp,%eax,4)
 82a2814:	83 45 bc 01          	addl   $0x1,-0x44(%ebp)
 82a2818:	e8 7e 99 e2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 82a281d:	8d 90 b4 87 00 00    	lea    0x87b4(%eax),%edx
 82a2823:	8b 45 b8             	mov    -0x48(%ebp),%eax
 82a2826:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a282a:	89 14 24             	mov    %edx,(%esp)
 82a282d:	e8 4e 15 00 00       	call   82a3d80 <_ZN14WarAreaCounter25GetWarRoomCountAtPeekTimeEi>
 82a2832:	3b 45 bc             	cmp    -0x44(%ebp),%eax
 82a2835:	0f 9f c0             	setg   %al
 82a2838:	84 c0                	test   %al,%al
 82a283a:	0f 85 57 ff ff ff    	jne    82a2797 <_ZN12CGameManager18WarRoomCountManageEi+0x7d>
 82a2840:	83 45 b8 01          	addl   $0x1,-0x48(%ebp)
 82a2844:	83 7d b8 09          	cmpl   $0x9,-0x48(%ebp)
 82a2848:	0f 9e c0             	setle  %al
 82a284b:	84 c0                	test   %al,%al
 82a284d:	0f 85 38 ff ff ff    	jne    82a278b <_ZN12CGameManager18WarRoomCountManageEi+0x71>
 82a2853:	83 7d 0c ff          	cmpl   $0xffffffff,0xc(%ebp)
 82a2857:	75 17                	jne    82a2870 <_ZN12CGameManager18WarRoomCountManageEi+0x156>
 82a2859:	e8 3d 99 e2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 82a285e:	05 b4 87 00 00       	add    $0x87b4,%eax
 82a2863:	89 04 24             	mov    %eax,(%esp)
 82a2866:	e8 59 fc 65 00       	call   89024c4 <_ZN14WarAreaCounter18GetCurrenTimeTableEv>
 82a286b:	89 45 b0             	mov    %eax,-0x50(%ebp)
 82a286e:	eb 06                	jmp    82a2876 <_ZN12CGameManager18WarRoomCountManageEi+0x15c>
 82a2870:	8b 45 0c             	mov    0xc(%ebp),%eax
 82a2873:	89 45 b0             	mov    %eax,-0x50(%ebp)
 82a2876:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82a287d:	00 
 82a287e:	c7 44 24 08 88 30 00 	movl   $0x3088,0x8(%esp)
 82a2885:	00 
 82a2886:	c7 44 24 04 a0 9e c1 	movl   $0x8c19ea0,0x4(%esp)
 82a288d:	08 
 82a288e:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 82a2894:	89 04 24             	mov    %eax,(%esp)
 82a2897:	e8 7c ce 2a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82a289c:	8b 45 b0             	mov    -0x50(%ebp),%eax
 82a289f:	89 44 24 08          	mov    %eax,0x8(%esp)
 82a28a3:	c7 44 24 04 8c 8c c1 	movl   $0x8c18c8c,0x4(%esp)
 82a28aa:	08 
 82a28ab:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 82a28b1:	89 04 24             	mov    %eax,(%esp)
 82a28b4:	e8 cf ce 2a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82a28b9:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 82a28bf:	89 04 24             	mov    %eax,(%esp)
 82a28c2:	e8 85 b4 2e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82a28c7:	c7 44 24 08 58 00 00 	movl   $0x58,0x8(%esp)
 82a28ce:	00 
 82a28cf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82a28d6:	00 
 82a28d7:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 82a28dd:	89 04 24             	mov    %eax,(%esp)
 82a28e0:	e8 17 90 e2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82a28e5:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 82a28eb:	89 04 24             	mov    %eax,(%esp)
 82a28ee:	e8 59 e2 e6 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 82a28f3:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 82a28f9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82a2900:	00 
 82a2901:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 82a2907:	89 04 24             	mov    %eax,(%esp)
 82a290a:	e8 95 75 e3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82a290f:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 82a2916:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 82a291d:	e9 06 02 00 00       	jmp    82a2b28 <_ZN12CGameManager18WarRoomCountManageEi+0x40e>
 82a2922:	e8 74 98 e2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 82a2927:	89 c1                	mov    %eax,%ecx
 82a2929:	8b 55 b0             	mov    -0x50(%ebp),%edx
 82a292c:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 82a292f:	89 d0                	mov    %edx,%eax
 82a2931:	c1 e0 02             	shl    $0x2,%eax
 82a2934:	01 d0                	add    %edx,%eax
 82a2936:	01 c0                	add    %eax,%eax
 82a2938:	01 d8                	add    %ebx,%eax
 82a293a:	05 3c 22 00 00       	add    $0x223c,%eax
 82a293f:	8b 54 81 08          	mov    0x8(%ecx,%eax,4),%edx
 82a2943:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 82a2946:	8b 84 85 34 ff ff ff 	mov    -0xcc(%ebp,%eax,4),%eax
 82a294d:	89 d1                	mov    %edx,%ecx
 82a294f:	29 c1                	sub    %eax,%ecx
 82a2951:	89 c8                	mov    %ecx,%eax
 82a2953:	89 45 c8             	mov    %eax,-0x38(%ebp)
 82a2956:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 82a2959:	8b 9c 85 34 ff ff ff 	mov    -0xcc(%ebp,%eax,4),%ebx
 82a2960:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82a2967:	00 
 82a2968:	c7 44 24 08 97 30 00 	movl   $0x3097,0x8(%esp)
 82a296f:	00 
 82a2970:	c7 44 24 04 a0 9e c1 	movl   $0x8c19ea0,0x4(%esp)
 82a2977:	08 
 82a2978:	8d 45 8c             	lea    -0x74(%ebp),%eax
 82a297b:	89 04 24             	mov    %eax,(%esp)
 82a297e:	e8 95 cd 2a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82a2983:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82a2987:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82a298a:	89 44 24 08          	mov    %eax,0x8(%esp)
 82a298e:	c7 44 24 04 b4 8c c1 	movl   $0x8c18cb4,0x4(%esp)
 82a2995:	08 
 82a2996:	8d 45 8c             	lea    -0x74(%ebp),%eax
 82a2999:	89 04 24             	mov    %eax,(%esp)
 82a299c:	e8 e7 cd 2a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82a29a1:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 82a29a5:	0f 89 bc 00 00 00    	jns    82a2a67 <_ZN12CGameManager18WarRoomCountManageEi+0x34d>
 82a29ab:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82a29ae:	c1 f8 1f             	sar    $0x1f,%eax
 82a29b1:	89 c2                	mov    %eax,%edx
 82a29b3:	33 55 c8             	xor    -0x38(%ebp),%edx
 82a29b6:	89 55 cc             	mov    %edx,-0x34(%ebp)
 82a29b9:	29 45 cc             	sub    %eax,-0x34(%ebp)
 82a29bc:	e8 da 97 e2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 82a29c1:	8d 90 b4 87 00 00    	lea    0x87b4(%eax),%edx
 82a29c7:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 82a29ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a29ce:	89 14 24             	mov    %edx,(%esp)
 82a29d1:	e8 ba 14 00 00       	call   82a3e90 <_ZN14WarAreaCounter24GetWarRoomCountLastIndexEi>
 82a29d6:	89 45 d0             	mov    %eax,-0x30(%ebp)
 82a29d9:	eb 78                	jmp    82a2a53 <_ZN12CGameManager18WarRoomCountManageEi+0x339>
 82a29db:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 82a29de:	83 6d d0 01          	subl   $0x1,-0x30(%ebp)
 82a29e2:	e8 a7 97 e2 ff       	call   80cc18e <_Z14G_CGameManagerv>
 82a29e7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82a29eb:	89 04 24             	mov    %eax,(%esp)
 82a29ee:	e8 dd fb ff ff       	call   82a25d0 <_ZN12CGameManager10GetWarRoomEi>
 82a29f3:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 82a29f6:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 82a29fa:	0f 84 0e 01 00 00    	je     82a2b0e <_ZN12CGameManager18WarRoomCountManageEi+0x3f4>
 82a2a00:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 82a2a04:	74 17                	je     82a2a1d <_ZN12CGameManager18WarRoomCountManageEi+0x303>
 82a2a06:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82a2a09:	89 04 24             	mov    %eax,(%esp)
 82a2a0c:	e8 85 c4 f8 ff       	call   822ee96 <_ZN7WarRoom8GetStateEv>
 82a2a11:	83 f8 ff             	cmp    $0xffffffff,%eax
 82a2a14:	74 07                	je     82a2a1d <_ZN12CGameManager18WarRoomCountManageEi+0x303>
 82a2a16:	b8 01 00 00 00       	mov    $0x1,%eax
 82a2a1b:	eb 05                	jmp    82a2a22 <_ZN12CGameManager18WarRoomCountManageEi+0x308>
 82a2a1d:	b8 00 00 00 00       	mov    $0x0,%eax
 82a2a22:	84 c0                	test   %al,%al
 82a2a24:	74 2d                	je     82a2a53 <_ZN12CGameManager18WarRoomCountManageEi+0x339>
 82a2a26:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82a2a29:	89 04 24             	mov    %eax,(%esp)
 82a2a2c:	e8 0b ab 41 00       	call   86bd53c <_ZN7WarRoom8ShutDownEv>
 82a2a31:	88 45 db             	mov    %al,-0x25(%ebp)
 82a2a34:	80 7d db 00          	cmpb   $0x0,-0x25(%ebp)
 82a2a38:	74 15                	je     82a2a4f <_ZN12CGameManager18WarRoomCountManageEi+0x335>
 82a2a3a:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 82a2a40:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a2a44:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82a2a47:	89 04 24             	mov    %eax,(%esp)
 82a2a4a:	e8 2b b6 41 00       	call   86be07a <_ZN7WarRoom13MakeStateInfoEPc>
 82a2a4f:	83 6d cc 01          	subl   $0x1,-0x34(%ebp)
 82a2a53:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 82a2a57:	0f 95 c0             	setne  %al
 82a2a5a:	84 c0                	test   %al,%al
 82a2a5c:	0f 85 79 ff ff ff    	jne    82a29db <_ZN12CGameManager18WarRoomCountManageEi+0x2c1>
 82a2a62:	e9 ab 00 00 00       	jmp    82a2b12 <_ZN12CGameManager18WarRoomCountManageEi+0x3f8>
 82a2a67:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 82a2a6b:	0f 8e a1 00 00 00    	jle    82a2b12 <_ZN12CGameManager18WarRoomCountManageEi+0x3f8>
 82a2a71:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82a2a74:	89 45 dc             	mov    %eax,-0x24(%ebp)
 82a2a77:	e8 1f 97 e2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 82a2a7c:	8d 90 b4 87 00 00    	lea    0x87b4(%eax),%edx
 82a2a82:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 82a2a85:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a2a89:	89 14 24             	mov    %edx,(%esp)
 82a2a8c:	e8 63 13 00 00       	call   82a3df4 <_ZN14WarAreaCounter25GetWarRoomCountFirstIndexEi>
 82a2a91:	89 45 e0             	mov    %eax,-0x20(%ebp)
 82a2a94:	eb 6b                	jmp    82a2b01 <_ZN12CGameManager18WarRoomCountManageEi+0x3e7>
 82a2a96:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 82a2a99:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 82a2a9d:	e8 ec 96 e2 ff       	call   80cc18e <_Z14G_CGameManagerv>
 82a2aa2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82a2aa6:	89 04 24             	mov    %eax,(%esp)
 82a2aa9:	e8 22 fb ff ff       	call   82a25d0 <_ZN12CGameManager10GetWarRoomEi>
 82a2aae:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82a2ab1:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 82a2ab5:	74 5a                	je     82a2b11 <_ZN12CGameManager18WarRoomCountManageEi+0x3f7>
 82a2ab7:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 82a2abb:	74 17                	je     82a2ad4 <_ZN12CGameManager18WarRoomCountManageEi+0x3ba>
 82a2abd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82a2ac0:	89 04 24             	mov    %eax,(%esp)
 82a2ac3:	e8 ce c3 f8 ff       	call   822ee96 <_ZN7WarRoom8GetStateEv>
 82a2ac8:	83 f8 ff             	cmp    $0xffffffff,%eax
 82a2acb:	75 07                	jne    82a2ad4 <_ZN12CGameManager18WarRoomCountManageEi+0x3ba>
 82a2acd:	b8 01 00 00 00       	mov    $0x1,%eax
 82a2ad2:	eb 05                	jmp    82a2ad9 <_ZN12CGameManager18WarRoomCountManageEi+0x3bf>
 82a2ad4:	b8 00 00 00 00       	mov    $0x0,%eax
 82a2ad9:	84 c0                	test   %al,%al
 82a2adb:	74 24                	je     82a2b01 <_ZN12CGameManager18WarRoomCountManageEi+0x3e7>
 82a2add:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82a2ae0:	89 04 24             	mov    %eax,(%esp)
 82a2ae3:	e8 1c aa 41 00       	call   86bd504 <_ZN7WarRoom4OpenEv>
 82a2ae8:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 82a2aee:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a2af2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82a2af5:	89 04 24             	mov    %eax,(%esp)
 82a2af8:	e8 7d b5 41 00       	call   86be07a <_ZN7WarRoom13MakeStateInfoEPc>
 82a2afd:	83 6d dc 01          	subl   $0x1,-0x24(%ebp)
 82a2b01:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 82a2b05:	0f 95 c0             	setne  %al
 82a2b08:	84 c0                	test   %al,%al
 82a2b0a:	75 8a                	jne    82a2a96 <_ZN12CGameManager18WarRoomCountManageEi+0x37c>
 82a2b0c:	eb 04                	jmp    82a2b12 <_ZN12CGameManager18WarRoomCountManageEi+0x3f8>
 82a2b0e:	90                   	nop
 82a2b0f:	eb 01                	jmp    82a2b12 <_ZN12CGameManager18WarRoomCountManageEi+0x3f8>
 82a2b11:	90                   	nop
 82a2b12:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82a2b15:	89 c2                	mov    %eax,%edx
 82a2b17:	c1 fa 1f             	sar    $0x1f,%edx
 82a2b1a:	89 d0                	mov    %edx,%eax
 82a2b1c:	33 45 c8             	xor    -0x38(%ebp),%eax
 82a2b1f:	29 d0                	sub    %edx,%eax
 82a2b21:	01 45 b4             	add    %eax,-0x4c(%ebp)
 82a2b24:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 82a2b28:	83 7d c4 09          	cmpl   $0x9,-0x3c(%ebp)
 82a2b2c:	0f 9e c0             	setle  %al
 82a2b2f:	84 c0                	test   %al,%al
 82a2b31:	0f 85 eb fd ff ff    	jne    82a2922 <_ZN12CGameManager18WarRoomCountManageEi+0x208>
 82a2b37:	83 7d b4 00          	cmpl   $0x0,-0x4c(%ebp)
 82a2b3b:	0f 84 ad 00 00 00    	je     82a2bee <_ZN12CGameManager18WarRoomCountManageEi+0x4d4>
 82a2b41:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 82a2b44:	89 44 24 08          	mov    %eax,0x8(%esp)
 82a2b48:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 82a2b4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a2b52:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 82a2b58:	89 04 24             	mov    %eax,(%esp)
 82a2b5b:	e8 a8 3d e7 ff       	call   8116908 <_ZN18InterfacePacketBuf9put_shortERii>
 82a2b60:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82a2b67:	00 
 82a2b68:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 82a2b6e:	89 04 24             	mov    %eax,(%esp)
 82a2b71:	e8 e2 8d e2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82a2b76:	e8 2c 78 e3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 82a2b7b:	8d 95 60 ff ff ff    	lea    -0xa0(%ebp),%edx
 82a2b81:	89 54 24 04          	mov    %edx,0x4(%esp)
 82a2b85:	89 04 24             	mov    %eax,(%esp)
 82a2b88:	e8 87 60 42 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 82a2b8d:	8b 45 08             	mov    0x8(%ebp),%eax
 82a2b90:	89 04 24             	mov    %eax,(%esp)
 82a2b93:	e8 a8 5f ff ff       	call   8298b40 <_ZN12CGameManager16PrintWarRoomListEv>
 82a2b98:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82a2b9f:	00 
 82a2ba0:	c7 44 24 08 cf 30 00 	movl   $0x30cf,0x8(%esp)
 82a2ba7:	00 
 82a2ba8:	c7 44 24 04 a0 9e c1 	movl   $0x8c19ea0,0x4(%esp)
 82a2baf:	08 
 82a2bb0:	8d 45 9c             	lea    -0x64(%ebp),%eax
 82a2bb3:	89 04 24             	mov    %eax,(%esp)
 82a2bb6:	e8 5d cb 2a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82a2bbb:	c7 44 24 04 eb 8c c1 	movl   $0x8c18ceb,0x4(%esp)
 82a2bc2:	08 
 82a2bc3:	8d 45 9c             	lea    -0x64(%ebp),%eax
 82a2bc6:	89 04 24             	mov    %eax,(%esp)
 82a2bc9:	e8 ba cb 2a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82a2bce:	eb 1e                	jmp    82a2bee <_ZN12CGameManager18WarRoomCountManageEi+0x4d4>
 82a2bd0:	89 d3                	mov    %edx,%ebx
 82a2bd2:	89 c6                	mov    %eax,%esi
 82a2bd4:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 82a2bda:	89 04 24             	mov    %eax,(%esp)
 82a2bdd:	e8 9e b2 2e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82a2be2:	89 f0                	mov    %esi,%eax
 82a2be4:	89 da                	mov    %ebx,%edx
 82a2be6:	89 04 24             	mov    %eax,(%esp)
 82a2be9:	e8 62 0b 84 00       	call   8ae3750 <_Unwind_Resume>
 82a2bee:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 82a2bf4:	89 04 24             	mov    %eax,(%esp)
 82a2bf7:	e8 84 b2 2e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82a2bfc:	81 c4 ec 00 00 00    	add    $0xec,%esp
 82a2c02:	5b                   	pop    %ebx
 82a2c03:	5e                   	pop    %esi
 82a2c04:	5f                   	pop    %edi
 82a2c05:	5d                   	pop    %ebp
 82a2c06:	c3                   	ret
 82a2c07:	90                   	nop

```

```c
// CGameManager::WarRoomCountManage @ 0x82a271a

/* CGameManager::WarRoomCountManage(int) */

void __thiscall CGameManager::WarRoomCountManage(CGameManager *this,int param_1)

{
  bool bVar1;
  GameWorld *this_00;
  int iVar2;
  int *piVar3;
  byte bVar4;
  int local_d0 [10];
  int local_a8;
  PacketGuard local_a4 [12];
  cMyTrace local_98 [16];
  cMyTrace local_88 [16];
  cMyTrace local_78 [16];
  cMyTrace local_68 [16];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  WarRoom *local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  WarRoom *local_30;
  char local_29;
  uint local_28;
  int local_24;
  WarRoom *local_20;
  
  bVar4 = 0;
  cMyTrace::cMyTrace(local_98,"void CGameManager::WarRoomCountManage(int)",0x306f,0);
  cMyTrace::operator()(local_98,"WarRoomCountManage Start");
  piVar3 = local_d0;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  local_58 = 0;
  for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
    local_48 = 0;
    while( true ) {
      iVar2 = G_CDataManager();
      iVar2 = WarAreaCounter::GetWarRoomCountAtPeekTime((WarAreaCounter *)(iVar2 + 0x87b4),local_4c)
      ;
      if (iVar2 <= local_48) break;
      local_58 = local_58 + 1;
      local_44 = (WarRoom *)GetWarRoom((int)this);
      if (local_44 == (WarRoom *)0x0) {
        LogManager::logFormat
                  (1,"App.cpp","void CGameManager::WarRoomCountManage(int)",0x307d,
                   "WarRoomCountManage Error : WarRoom does not exist %d",local_58);
      }
      else {
        iVar2 = WarRoom::GetState(local_44);
        if (iVar2 != -1) {
          local_d0[local_4c] = local_d0[local_4c] + 1;
        }
      }
      local_48 = local_48 + 1;
    }
  }
  if (param_1 == -1) {
    iVar2 = G_CDataManager();
    local_54 = WarAreaCounter::GetCurrenTimeTable((WarAreaCounter *)(iVar2 + 0x87b4));
  }
  else {
    local_54 = param_1;
  }
  cMyTrace::cMyTrace(local_88,"void CGameManager::WarRoomCountManage(int)",0x3088,0);
  cMyTrace::operator()(local_88,"WarRoomCountManage currentHourIndex %d",local_54);
  PacketGuard::PacketGuard(local_a4);
                    /* try { // try from 082a28e0 to 082a2bcd has its CatchHandler @ 082a2bd0 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_a4,0,0x58);
  local_a8 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_a4);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_a4,0);
  local_50 = 0;
  local_40 = 0;
  do {
    if (9 < local_40) {
      if (local_50 != 0) {
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_a4,&local_a8,local_50);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_a4,true);
        this_00 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(this_00,local_a4);
        PrintWarRoomList();
        cMyTrace::cMyTrace(local_68,"void CGameManager::WarRoomCountManage(int)",0x30cf,0);
        cMyTrace::operator()(local_68,"WarRoomCountManage end");
      }
      PacketGuard::~PacketGuard(local_a4);
      return;
    }
    iVar2 = G_CDataManager();
    local_3c = *(int *)(iVar2 + 8 + (local_54 * 10 + local_40 + 0x223c) * 4) - local_d0[local_40];
    iVar2 = local_d0[local_40];
    cMyTrace::cMyTrace(local_78,"void CGameManager::WarRoomCountManage(int)",0x3097,0);
    cMyTrace::operator()
              (local_78,"WarRoomCountManage diff(%d) currentWarRoomCount(lev%d)",local_3c,iVar2);
    if ((int)local_3c < 0) {
      local_38 = ((int)local_3c >> 0x1f ^ local_3c) - ((int)local_3c >> 0x1f);
      iVar2 = G_CDataManager();
      local_34 = WarAreaCounter::GetWarRoomCountLastIndex
                           ((WarAreaCounter *)(iVar2 + 0x87b4),local_40);
      while (local_38 != 0) {
        local_34 = local_34 + -1;
        iVar2 = G_CGameManager();
        local_30 = (WarRoom *)GetWarRoom(iVar2);
        if (local_30 == (WarRoom *)0x0) break;
        if ((local_30 == (WarRoom *)0x0) || (iVar2 = WarRoom::GetState(local_30), iVar2 == -1)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_29 = WarRoom::ShutDown(local_30);
          if (local_29 != '\0') {
            WarRoom::MakeStateInfo(local_30,(char *)local_a4);
          }
          local_38 = local_38 + -1;
        }
      }
    }
    else if (0 < (int)local_3c) {
      local_28 = local_3c;
      iVar2 = G_CDataManager();
      local_24 = WarAreaCounter::GetWarRoomCountFirstIndex
                           ((WarAreaCounter *)(iVar2 + 0x87b4),local_40);
      while (local_28 != 0) {
        local_24 = local_24 + 1;
        iVar2 = G_CGameManager();
        local_20 = (WarRoom *)GetWarRoom(iVar2);
        if (local_20 == (WarRoom *)0x0) break;
        if ((local_20 == (WarRoom *)0x0) || (iVar2 = WarRoom::GetState(local_20), iVar2 != -1)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          WarRoom::Open(local_20);
          WarRoom::MakeStateInfo(local_20,(char *)local_a4);
          local_28 = local_28 - 1;
        }
      }
    }
    local_50 = local_50 + (((int)local_3c >> 0x1f ^ local_3c) - ((int)local_3c >> 0x1f));
    local_40 = local_40 + 1;
  } while( true );
}

```

---

## WarRoomCountManageTest

```asm
// === 082a2c08 CGameManager::WarRoomCountManageTest  [0x082a2c08-0x82a2f93] ===
 82a2c08:	55                   	push   %ebp
 82a2c09:	89 e5                	mov    %esp,%ebp
 82a2c0b:	57                   	push   %edi
 82a2c0c:	56                   	push   %esi
 82a2c0d:	53                   	push   %ebx
 82a2c0e:	81 ec ac 00 00 00    	sub    $0xac,%esp
 82a2c14:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
 82a2c1a:	b8 00 00 00 00       	mov    $0x0,%eax
 82a2c1f:	ba 0a 00 00 00       	mov    $0xa,%edx
 82a2c24:	89 df                	mov    %ebx,%edi
 82a2c26:	89 d1                	mov    %edx,%ecx
 82a2c28:	f3 ab                	rep stos %eax,%es:(%edi)
 82a2c2a:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 82a2c31:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 82a2c38:	e9 b9 00 00 00       	jmp    82a2cf6 <_ZN12CGameManager22WarRoomCountManageTestEi+0xee>
 82a2c3d:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 82a2c44:	e9 81 00 00 00       	jmp    82a2cca <_ZN12CGameManager22WarRoomCountManageTestEi+0xc2>
 82a2c49:	8b 45 ac             	mov    -0x54(%ebp),%eax
 82a2c4c:	83 45 ac 01          	addl   $0x1,-0x54(%ebp)
 82a2c50:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a2c54:	8b 45 08             	mov    0x8(%ebp),%eax
 82a2c57:	89 04 24             	mov    %eax,(%esp)
 82a2c5a:	e8 71 f9 ff ff       	call   82a25d0 <_ZN12CGameManager10GetWarRoomEi>
 82a2c5f:	89 45 c0             	mov    %eax,-0x40(%ebp)
 82a2c62:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 82a2c66:	75 35                	jne    82a2c9d <_ZN12CGameManager22WarRoomCountManageTestEi+0x95>
 82a2c68:	8b 45 ac             	mov    -0x54(%ebp),%eax
 82a2c6b:	89 44 24 14          	mov    %eax,0x14(%esp)
 82a2c6f:	c7 44 24 10 54 8c c1 	movl   $0x8c18c54,0x10(%esp)
 82a2c76:	08 
 82a2c77:	c7 44 24 0c e2 30 00 	movl   $0x30e2,0xc(%esp)
 82a2c7e:	00 
 82a2c7f:	c7 44 24 08 20 9e c1 	movl   $0x8c19e20,0x8(%esp)
 82a2c86:	08 
 82a2c87:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 82a2c8e:	08 
 82a2c8f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 82a2c96:	e8 6f 0f 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 82a2c9b:	eb 29                	jmp    82a2cc6 <_ZN12CGameManager22WarRoomCountManageTestEi+0xbe>
 82a2c9d:	8b 45 c0             	mov    -0x40(%ebp),%eax
 82a2ca0:	89 04 24             	mov    %eax,(%esp)
 82a2ca3:	e8 ee c1 f8 ff       	call   822ee96 <_ZN7WarRoom8GetStateEv>
 82a2ca8:	83 f8 ff             	cmp    $0xffffffff,%eax
 82a2cab:	0f 95 c0             	setne  %al
 82a2cae:	84 c0                	test   %al,%al
 82a2cb0:	74 14                	je     82a2cc6 <_ZN12CGameManager22WarRoomCountManageTestEi+0xbe>
 82a2cb2:	8b 45 b8             	mov    -0x48(%ebp),%eax
 82a2cb5:	8b 94 85 74 ff ff ff 	mov    -0x8c(%ebp,%eax,4),%edx
 82a2cbc:	83 c2 01             	add    $0x1,%edx
 82a2cbf:	89 94 85 74 ff ff ff 	mov    %edx,-0x8c(%ebp,%eax,4)
 82a2cc6:	83 45 bc 01          	addl   $0x1,-0x44(%ebp)
 82a2cca:	e8 cc 94 e2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 82a2ccf:	8d 90 b4 87 00 00    	lea    0x87b4(%eax),%edx
 82a2cd5:	8b 45 b8             	mov    -0x48(%ebp),%eax
 82a2cd8:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a2cdc:	89 14 24             	mov    %edx,(%esp)
 82a2cdf:	e8 9c 10 00 00       	call   82a3d80 <_ZN14WarAreaCounter25GetWarRoomCountAtPeekTimeEi>
 82a2ce4:	3b 45 bc             	cmp    -0x44(%ebp),%eax
 82a2ce7:	0f 9f c0             	setg   %al
 82a2cea:	84 c0                	test   %al,%al
 82a2cec:	0f 85 57 ff ff ff    	jne    82a2c49 <_ZN12CGameManager22WarRoomCountManageTestEi+0x41>
 82a2cf2:	83 45 b8 01          	addl   $0x1,-0x48(%ebp)
 82a2cf6:	83 7d b8 09          	cmpl   $0x9,-0x48(%ebp)
 82a2cfa:	0f 9e c0             	setle  %al
 82a2cfd:	84 c0                	test   %al,%al
 82a2cff:	0f 85 38 ff ff ff    	jne    82a2c3d <_ZN12CGameManager22WarRoomCountManageTestEi+0x35>
 82a2d05:	8b 45 0c             	mov    0xc(%ebp),%eax
 82a2d08:	89 45 b0             	mov    %eax,-0x50(%ebp)
 82a2d0b:	8d 45 a0             	lea    -0x60(%ebp),%eax
 82a2d0e:	89 04 24             	mov    %eax,(%esp)
 82a2d11:	e8 36 b0 2e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82a2d16:	c7 44 24 08 58 00 00 	movl   $0x58,0x8(%esp)
 82a2d1d:	00 
 82a2d1e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82a2d25:	00 
 82a2d26:	8d 45 a0             	lea    -0x60(%ebp),%eax
 82a2d29:	89 04 24             	mov    %eax,(%esp)
 82a2d2c:	e8 cb 8b e2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82a2d31:	8d 45 a0             	lea    -0x60(%ebp),%eax
 82a2d34:	89 04 24             	mov    %eax,(%esp)
 82a2d37:	e8 10 de e6 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 82a2d3c:	89 45 9c             	mov    %eax,-0x64(%ebp)
 82a2d3f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82a2d46:	00 
 82a2d47:	8d 45 a0             	lea    -0x60(%ebp),%eax
 82a2d4a:	89 04 24             	mov    %eax,(%esp)
 82a2d4d:	e8 52 71 e3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82a2d52:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 82a2d59:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 82a2d60:	e9 9b 01 00 00       	jmp    82a2f00 <_ZN12CGameManager22WarRoomCountManageTestEi+0x2f8>
 82a2d65:	e8 31 94 e2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 82a2d6a:	89 c1                	mov    %eax,%ecx
 82a2d6c:	8b 55 b0             	mov    -0x50(%ebp),%edx
 82a2d6f:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 82a2d72:	89 d0                	mov    %edx,%eax
 82a2d74:	c1 e0 02             	shl    $0x2,%eax
 82a2d77:	01 d0                	add    %edx,%eax
 82a2d79:	01 c0                	add    %eax,%eax
 82a2d7b:	01 d8                	add    %ebx,%eax
 82a2d7d:	05 3c 22 00 00       	add    $0x223c,%eax
 82a2d82:	8b 54 81 08          	mov    0x8(%ecx,%eax,4),%edx
 82a2d86:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 82a2d89:	8b 84 85 74 ff ff ff 	mov    -0x8c(%ebp,%eax,4),%eax
 82a2d90:	89 d1                	mov    %edx,%ecx
 82a2d92:	29 c1                	sub    %eax,%ecx
 82a2d94:	89 c8                	mov    %ecx,%eax
 82a2d96:	89 45 c8             	mov    %eax,-0x38(%ebp)
 82a2d99:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 82a2d9d:	0f 89 ab 00 00 00    	jns    82a2e4e <_ZN12CGameManager22WarRoomCountManageTestEi+0x246>
 82a2da3:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82a2da6:	c1 f8 1f             	sar    $0x1f,%eax
 82a2da9:	89 c2                	mov    %eax,%edx
 82a2dab:	33 55 c8             	xor    -0x38(%ebp),%edx
 82a2dae:	89 55 cc             	mov    %edx,-0x34(%ebp)
 82a2db1:	29 45 cc             	sub    %eax,-0x34(%ebp)
 82a2db4:	e8 e2 93 e2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 82a2db9:	8d 90 b4 87 00 00    	lea    0x87b4(%eax),%edx
 82a2dbf:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 82a2dc2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a2dc6:	89 14 24             	mov    %edx,(%esp)
 82a2dc9:	e8 c2 10 00 00       	call   82a3e90 <_ZN14WarAreaCounter24GetWarRoomCountLastIndexEi>
 82a2dce:	89 45 d0             	mov    %eax,-0x30(%ebp)
 82a2dd1:	eb 6b                	jmp    82a2e3e <_ZN12CGameManager22WarRoomCountManageTestEi+0x236>
 82a2dd3:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 82a2dd6:	83 6d d0 01          	subl   $0x1,-0x30(%ebp)
 82a2dda:	e8 af 93 e2 ff       	call   80cc18e <_Z14G_CGameManagerv>
 82a2ddf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82a2de3:	89 04 24             	mov    %eax,(%esp)
 82a2de6:	e8 e5 f7 ff ff       	call   82a25d0 <_ZN12CGameManager10GetWarRoomEi>
 82a2deb:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 82a2dee:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 82a2df2:	74 17                	je     82a2e0b <_ZN12CGameManager22WarRoomCountManageTestEi+0x203>
 82a2df4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82a2df7:	89 04 24             	mov    %eax,(%esp)
 82a2dfa:	e8 97 c0 f8 ff       	call   822ee96 <_ZN7WarRoom8GetStateEv>
 82a2dff:	83 f8 ff             	cmp    $0xffffffff,%eax
 82a2e02:	74 07                	je     82a2e0b <_ZN12CGameManager22WarRoomCountManageTestEi+0x203>
 82a2e04:	b8 01 00 00 00       	mov    $0x1,%eax
 82a2e09:	eb 05                	jmp    82a2e10 <_ZN12CGameManager22WarRoomCountManageTestEi+0x208>
 82a2e0b:	b8 00 00 00 00       	mov    $0x0,%eax
 82a2e10:	84 c0                	test   %al,%al
 82a2e12:	74 2a                	je     82a2e3e <_ZN12CGameManager22WarRoomCountManageTestEi+0x236>
 82a2e14:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82a2e17:	89 04 24             	mov    %eax,(%esp)
 82a2e1a:	e8 1d a7 41 00       	call   86bd53c <_ZN7WarRoom8ShutDownEv>
 82a2e1f:	88 45 db             	mov    %al,-0x25(%ebp)
 82a2e22:	80 7d db 00          	cmpb   $0x0,-0x25(%ebp)
 82a2e26:	74 12                	je     82a2e3a <_ZN12CGameManager22WarRoomCountManageTestEi+0x232>
 82a2e28:	8d 45 a0             	lea    -0x60(%ebp),%eax
 82a2e2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a2e2f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82a2e32:	89 04 24             	mov    %eax,(%esp)
 82a2e35:	e8 40 b2 41 00       	call   86be07a <_ZN7WarRoom13MakeStateInfoEPc>
 82a2e3a:	83 6d cc 01          	subl   $0x1,-0x34(%ebp)
 82a2e3e:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 82a2e42:	0f 95 c0             	setne  %al
 82a2e45:	84 c0                	test   %al,%al
 82a2e47:	75 8a                	jne    82a2dd3 <_ZN12CGameManager22WarRoomCountManageTestEi+0x1cb>
 82a2e49:	e9 9c 00 00 00       	jmp    82a2eea <_ZN12CGameManager22WarRoomCountManageTestEi+0x2e2>
 82a2e4e:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 82a2e52:	0f 8e 92 00 00 00    	jle    82a2eea <_ZN12CGameManager22WarRoomCountManageTestEi+0x2e2>
 82a2e58:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82a2e5b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 82a2e5e:	e8 38 93 e2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 82a2e63:	8d 90 b4 87 00 00    	lea    0x87b4(%eax),%edx
 82a2e69:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 82a2e6c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a2e70:	89 14 24             	mov    %edx,(%esp)
 82a2e73:	e8 7c 0f 00 00       	call   82a3df4 <_ZN14WarAreaCounter25GetWarRoomCountFirstIndexEi>
 82a2e78:	89 45 e0             	mov    %eax,-0x20(%ebp)
 82a2e7b:	eb 62                	jmp    82a2edf <_ZN12CGameManager22WarRoomCountManageTestEi+0x2d7>
 82a2e7d:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 82a2e80:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 82a2e84:	e8 05 93 e2 ff       	call   80cc18e <_Z14G_CGameManagerv>
 82a2e89:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82a2e8d:	89 04 24             	mov    %eax,(%esp)
 82a2e90:	e8 3b f7 ff ff       	call   82a25d0 <_ZN12CGameManager10GetWarRoomEi>
 82a2e95:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82a2e98:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 82a2e9c:	74 17                	je     82a2eb5 <_ZN12CGameManager22WarRoomCountManageTestEi+0x2ad>
 82a2e9e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82a2ea1:	89 04 24             	mov    %eax,(%esp)
 82a2ea4:	e8 ed bf f8 ff       	call   822ee96 <_ZN7WarRoom8GetStateEv>
 82a2ea9:	83 f8 ff             	cmp    $0xffffffff,%eax
 82a2eac:	75 07                	jne    82a2eb5 <_ZN12CGameManager22WarRoomCountManageTestEi+0x2ad>
 82a2eae:	b8 01 00 00 00       	mov    $0x1,%eax
 82a2eb3:	eb 05                	jmp    82a2eba <_ZN12CGameManager22WarRoomCountManageTestEi+0x2b2>
 82a2eb5:	b8 00 00 00 00       	mov    $0x0,%eax
 82a2eba:	84 c0                	test   %al,%al
 82a2ebc:	74 21                	je     82a2edf <_ZN12CGameManager22WarRoomCountManageTestEi+0x2d7>
 82a2ebe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82a2ec1:	89 04 24             	mov    %eax,(%esp)
 82a2ec4:	e8 3b a6 41 00       	call   86bd504 <_ZN7WarRoom4OpenEv>
 82a2ec9:	8d 45 a0             	lea    -0x60(%ebp),%eax
 82a2ecc:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a2ed0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82a2ed3:	89 04 24             	mov    %eax,(%esp)
 82a2ed6:	e8 9f b1 41 00       	call   86be07a <_ZN7WarRoom13MakeStateInfoEPc>
 82a2edb:	83 6d dc 01          	subl   $0x1,-0x24(%ebp)
 82a2edf:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 82a2ee3:	0f 95 c0             	setne  %al
 82a2ee6:	84 c0                	test   %al,%al
 82a2ee8:	75 93                	jne    82a2e7d <_ZN12CGameManager22WarRoomCountManageTestEi+0x275>
 82a2eea:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82a2eed:	89 c2                	mov    %eax,%edx
 82a2eef:	c1 fa 1f             	sar    $0x1f,%edx
 82a2ef2:	89 d0                	mov    %edx,%eax
 82a2ef4:	33 45 c8             	xor    -0x38(%ebp),%eax
 82a2ef7:	29 d0                	sub    %edx,%eax
 82a2ef9:	01 45 b4             	add    %eax,-0x4c(%ebp)
 82a2efc:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 82a2f00:	83 7d c4 09          	cmpl   $0x9,-0x3c(%ebp)
 82a2f04:	0f 9e c0             	setle  %al
 82a2f07:	84 c0                	test   %al,%al
 82a2f09:	0f 85 56 fe ff ff    	jne    82a2d65 <_ZN12CGameManager22WarRoomCountManageTestEi+0x15d>
 82a2f0f:	83 7d b4 00          	cmpl   $0x0,-0x4c(%ebp)
 82a2f13:	74 68                	je     82a2f7d <_ZN12CGameManager22WarRoomCountManageTestEi+0x375>
 82a2f15:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 82a2f18:	89 44 24 08          	mov    %eax,0x8(%esp)
 82a2f1c:	8d 45 9c             	lea    -0x64(%ebp),%eax
 82a2f1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a2f23:	8d 45 a0             	lea    -0x60(%ebp),%eax
 82a2f26:	89 04 24             	mov    %eax,(%esp)
 82a2f29:	e8 da 39 e7 ff       	call   8116908 <_ZN18InterfacePacketBuf9put_shortERii>
 82a2f2e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82a2f35:	00 
 82a2f36:	8d 45 a0             	lea    -0x60(%ebp),%eax
 82a2f39:	89 04 24             	mov    %eax,(%esp)
 82a2f3c:	e8 17 8a e2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82a2f41:	e8 61 74 e3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 82a2f46:	8d 55 a0             	lea    -0x60(%ebp),%edx
 82a2f49:	89 54 24 04          	mov    %edx,0x4(%esp)
 82a2f4d:	89 04 24             	mov    %eax,(%esp)
 82a2f50:	e8 bf 5c 42 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 82a2f55:	8b 45 08             	mov    0x8(%ebp),%eax
 82a2f58:	89 04 24             	mov    %eax,(%esp)
 82a2f5b:	e8 e0 5b ff ff       	call   8298b40 <_ZN12CGameManager16PrintWarRoomListEv>
 82a2f60:	eb 1b                	jmp    82a2f7d <_ZN12CGameManager22WarRoomCountManageTestEi+0x375>
 82a2f62:	89 d3                	mov    %edx,%ebx
 82a2f64:	89 c6                	mov    %eax,%esi
 82a2f66:	8d 45 a0             	lea    -0x60(%ebp),%eax
 82a2f69:	89 04 24             	mov    %eax,(%esp)
 82a2f6c:	e8 0f af 2e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82a2f71:	89 f0                	mov    %esi,%eax
 82a2f73:	89 da                	mov    %ebx,%edx
 82a2f75:	89 04 24             	mov    %eax,(%esp)
 82a2f78:	e8 d3 07 84 00       	call   8ae3750 <_Unwind_Resume>
 82a2f7d:	8d 45 a0             	lea    -0x60(%ebp),%eax
 82a2f80:	89 04 24             	mov    %eax,(%esp)
 82a2f83:	e8 f8 ae 2e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82a2f88:	81 c4 ac 00 00 00    	add    $0xac,%esp
 82a2f8e:	5b                   	pop    %ebx
 82a2f8f:	5e                   	pop    %esi
 82a2f90:	5f                   	pop    %edi
 82a2f91:	5d                   	pop    %ebp
 82a2f92:	c3                   	ret
 82a2f93:	90                   	nop

```

```c
// CGameManager::WarRoomCountManageTest @ 0x82a2c08

/* CGameManager::WarRoomCountManageTest(int) */

void __thiscall CGameManager::WarRoomCountManageTest(CGameManager *this,int param_1)

{
  bool bVar1;
  GameWorld *this_00;
  int iVar2;
  int *piVar3;
  int local_90 [10];
  int local_68;
  PacketGuard local_64 [12];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  WarRoom *local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  WarRoom *local_30;
  char local_29;
  uint local_28;
  int local_24;
  WarRoom *local_20;
  
  piVar3 = local_90;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  local_58 = 0;
  for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
    local_48 = 0;
    while( true ) {
      iVar2 = G_CDataManager();
      iVar2 = WarAreaCounter::GetWarRoomCountAtPeekTime((WarAreaCounter *)(iVar2 + 0x87b4),local_4c)
      ;
      if (iVar2 <= local_48) break;
      local_58 = local_58 + 1;
      local_44 = (WarRoom *)GetWarRoom((int)this);
      if (local_44 == (WarRoom *)0x0) {
        LogManager::logFormat
                  (1,"App.cpp","void CGameManager::WarRoomCountManageTest(int)",0x30e2,
                   "WarRoomCountManage Error : WarRoom does not exist %d",local_58);
      }
      else {
        iVar2 = WarRoom::GetState(local_44);
        if (iVar2 != -1) {
          local_90[local_4c] = local_90[local_4c] + 1;
        }
      }
      local_48 = local_48 + 1;
    }
  }
  local_54 = param_1;
  PacketGuard::PacketGuard(local_64);
                    /* try { // try from 082a2d2c to 082a2f54 has its CatchHandler @ 082a2f62 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,0,0x58);
  local_68 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_64);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,0);
  local_50 = 0;
  for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
    iVar2 = G_CDataManager();
    local_3c = *(int *)(iVar2 + 8 + (local_54 * 10 + local_40 + 0x223c) * 4) - local_90[local_40];
    if ((int)local_3c < 0) {
      local_38 = ((int)local_3c >> 0x1f ^ local_3c) - ((int)local_3c >> 0x1f);
      iVar2 = G_CDataManager();
      local_34 = WarAreaCounter::GetWarRoomCountLastIndex
                           ((WarAreaCounter *)(iVar2 + 0x87b4),local_40);
      while (local_38 != 0) {
        local_34 = local_34 + -1;
        iVar2 = G_CGameManager();
        local_30 = (WarRoom *)GetWarRoom(iVar2);
        if ((local_30 == (WarRoom *)0x0) || (iVar2 = WarRoom::GetState(local_30), iVar2 == -1)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_29 = WarRoom::ShutDown(local_30);
          if (local_29 != '\0') {
            WarRoom::MakeStateInfo(local_30,(char *)local_64);
          }
          local_38 = local_38 + -1;
        }
      }
    }
    else if (0 < (int)local_3c) {
      local_28 = local_3c;
      iVar2 = G_CDataManager();
      local_24 = WarAreaCounter::GetWarRoomCountFirstIndex
                           ((WarAreaCounter *)(iVar2 + 0x87b4),local_40);
      while (local_28 != 0) {
        local_24 = local_24 + 1;
        iVar2 = G_CGameManager();
        local_20 = (WarRoom *)GetWarRoom(iVar2);
        if ((local_20 == (WarRoom *)0x0) || (iVar2 = WarRoom::GetState(local_20), iVar2 != -1)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          WarRoom::Open(local_20);
          WarRoom::MakeStateInfo(local_20,(char *)local_64);
          local_28 = local_28 - 1;
        }
      }
    }
    local_50 = local_50 + (((int)local_3c >> 0x1f ^ local_3c) - ((int)local_3c >> 0x1f));
  }
  if (local_50 != 0) {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,&local_68,local_50);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_00,local_64);
    PrintWarRoomList();
  }
  PacketGuard::~PacketGuard(local_64);
  return;
}

```

---

## allocBlueMarble

```asm
// === 082a3396 CGameManager::allocBlueMarble  [0x082a3396-0x82a3423] ===
 82a3396:	55                   	push   %ebp
 82a3397:	89 e5                	mov    %esp,%ebp
 82a3399:	83 ec 28             	sub    $0x28,%esp
 82a339c:	e8 fa 8d e2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 82a33a1:	89 04 24             	mov    %eax,(%esp)
 82a33a4:	e8 41 2b 0c 00       	call   8365eea <_ZN12CDataManager19getBlueMarbleScriptEv>
 82a33a9:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82a33ac:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82a33b3:	eb 5e                	jmp    82a3413 <_ZN12CGameManager15allocBlueMarbleEv+0x7d>
 82a33b5:	8b 45 08             	mov    0x8(%ebp),%eax
 82a33b8:	89 04 24             	mov    %eax,(%esp)
 82a33bb:	e8 f6 ee ff ff       	call   82a22b6 <_ZN12CGameManager13getBlueMarbleEv>
 82a33c0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82a33c3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82a33c6:	89 04 24             	mov    %eax,(%esp)
 82a33c9:	e8 66 58 e3 ff       	call   80d8c34 <_ZNK10BlueMarble18getMemoryPoolIndexEv>
 82a33ce:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82a33d5:	eb 16                	jmp    82a33ed <_ZN12CGameManager15allocBlueMarbleEv+0x57>
 82a33d7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82a33da:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a33de:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82a33e1:	89 04 24             	mov    %eax,(%esp)
 82a33e4:	e8 55 58 e3 ff       	call   80d8c3e <_ZN10BlueMarble11setUserInfoEP23BlueMarbleScriptManager>
 82a33e9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82a33ed:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82a33f0:	8b 40 30             	mov    0x30(%eax),%eax
 82a33f3:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 82a33f6:	0f 9f c0             	setg   %al
 82a33f9:	84 c0                	test   %al,%al
 82a33fb:	75 da                	jne    82a33d7 <_ZN12CGameManager15allocBlueMarbleEv+0x41>
 82a33fd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82a3400:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a3404:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82a3407:	89 04 24             	mov    %eax,(%esp)
 82a340a:	e8 99 58 e3 ff       	call   80d8ca8 <_ZN10BlueMarble9setScriptEP23BlueMarbleScriptManager>
 82a340f:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 82a3413:	81 7d ec 2b 01 00 00 	cmpl   $0x12b,-0x14(%ebp)
 82a341a:	0f 9e c0             	setle  %al
 82a341d:	84 c0                	test   %al,%al
 82a341f:	75 94                	jne    82a33b5 <_ZN12CGameManager15allocBlueMarbleEv+0x1f>
 82a3421:	c9                   	leave
 82a3422:	c3                   	ret
 82a3423:	90                   	nop

```

```c
// CGameManager::allocBlueMarble @ 0x82a3396

/* CGameManager::allocBlueMarble() */

void __thiscall CGameManager::allocBlueMarble(CGameManager *this)

{
  CDataManager *this_00;
  BlueMarbleScriptManager *pBVar1;
  BlueMarble *this_01;
  int local_18;
  int local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  pBVar1 = (BlueMarbleScriptManager *)CDataManager::getBlueMarbleScript(this_00);
  for (local_18 = 0; local_18 < 300; local_18 = local_18 + 1) {
    this_01 = (BlueMarble *)getBlueMarble(this);
    BlueMarble::getMemoryPoolIndex(this_01);
    for (local_10 = 0; local_10 < *(int *)(pBVar1 + 0x30); local_10 = local_10 + 1) {
      BlueMarble::setUserInfo(this_01,pBVar1);
    }
    BlueMarble::setScript(this_01,pBVar1);
  }
  return;
}

```

---

## checkOutAdvanceAltar

```asm
// === 08298272 CGameManager::checkOutAdvanceAltar  [0x08298272-0x8298339] ===
 8298272:	55                   	push   %ebp
 8298273:	89 e5                	mov    %esp,%ebp
 8298275:	53                   	push   %ebx
 8298276:	83 ec 34             	sub    $0x34,%esp
 8298279:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 829827d:	0f 84 aa 00 00 00    	je     829832d <_ZN12CGameManager20checkOutAdvanceAltarEP5CUser+0xbb>
 8298283:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298286:	89 04 24             	mov    %eax,(%esp)
 8298289:	e8 6a e5 00 00       	call   82a67f8 <_ZNK5CUser19checkInAdvanceAltarEv>
 829828e:	83 f0 01             	xor    $0x1,%eax
 8298291:	84 c0                	test   %al,%al
 8298293:	0f 85 97 00 00 00    	jne    8298330 <_ZN12CGameManager20checkOutAdvanceAltarEP5CUser+0xbe>
 8298299:	8b 45 0c             	mov    0xc(%ebp),%eax
 829829c:	89 04 24             	mov    %eax,(%esp)
 829829f:	e8 6a e5 00 00       	call   82a680e <_ZNK5CUser20getAdvanceAltarIndexEv>
 82982a4:	98                   	cwtl
 82982a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 82982a9:	8b 45 08             	mov    0x8(%ebp),%eax
 82982ac:	89 04 24             	mov    %eax,(%esp)
 82982af:	e8 84 d9 ff ff       	call   8295c38 <_ZN12CGameManager15getAdvanceAltarEi>
 82982b4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82982b7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82982bb:	74 76                	je     8298333 <_ZN12CGameManager20checkOutAdvanceAltarEP5CUser+0xc1>
 82982bd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82982c0:	89 04 24             	mov    %eax,(%esp)
 82982c3:	e8 86 79 e9 ff       	call   812fc4e <_ZN12advancealtar12StageControl9leaveUserEv>
 82982c8:	83 f0 01             	xor    $0x1,%eax
 82982cb:	84 c0                	test   %al,%al
 82982cd:	74 65                	je     8298334 <_ZN12CGameManager20checkOutAdvanceAltarEP5CUser+0xc2>
 82982cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 82982d2:	89 04 24             	mov    %eax,(%esp)
 82982d5:	e8 94 20 e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 82982da:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82982e1:	00 
 82982e2:	89 04 24             	mov    %eax,(%esp)
 82982e5:	e8 61 0d e7 ff       	call   810904b <_Z14NumberToStringji>
 82982ea:	89 c3                	mov    %eax,%ebx
 82982ec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82982ef:	89 04 24             	mov    %eax,(%esp)
 82982f2:	e8 c3 c5 e9 ff       	call   81348ba <_ZNK12advancealtar12StageControl8getIndexEv>
 82982f7:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 82982fb:	89 44 24 14          	mov    %eax,0x14(%esp)
 82982ff:	c7 44 24 10 ec 6f c1 	movl   $0x8c16fec,0x10(%esp)
 8298306:	08 
 8298307:	c7 44 24 0c ef 11 00 	movl   $0x11ef,0xc(%esp)
 829830e:	00 
 829830f:	c7 44 24 08 c0 b3 c1 	movl   $0x8c1b3c0,0x8(%esp)
 8298316:	08 
 8298317:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 829831e:	08 
 829831f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8298326:	e8 df b8 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 829832b:	eb 07                	jmp    8298334 <_ZN12CGameManager20checkOutAdvanceAltarEP5CUser+0xc2>
 829832d:	90                   	nop
 829832e:	eb 04                	jmp    8298334 <_ZN12CGameManager20checkOutAdvanceAltarEP5CUser+0xc2>
 8298330:	90                   	nop
 8298331:	eb 01                	jmp    8298334 <_ZN12CGameManager20checkOutAdvanceAltarEP5CUser+0xc2>
 8298333:	90                   	nop
 8298334:	83 c4 34             	add    $0x34,%esp
 8298337:	5b                   	pop    %ebx
 8298338:	5d                   	pop    %ebp
 8298339:	c3                   	ret

```

```c
// CGameManager::checkOutAdvanceAltar @ 0x8298272

/* CGameManager::checkOutAdvanceAltar(CUser*) */

void __thiscall CGameManager::checkOutAdvanceAltar(CGameManager *this,CUser *param_1)

{
  char cVar1;
  StageControl *this_00;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((param_1 != (CUser *)0x0) && (cVar1 = CUser::checkInAdvanceAltar(param_1), cVar1 == '\x01')) {
    CUser::getAdvanceAltarIndex(param_1);
    this_00 = (StageControl *)getAdvanceAltar((int)this);
    if ((this_00 != (StageControl *)0x0) &&
       (cVar1 = advancealtar::StageControl::leaveUser(this_00), cVar1 != '\x01')) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar3 = NumberToString(uVar2,0);
      uVar4 = advancealtar::StageControl::getIndex(this_00);
      LogManager::logFormat
                (1,"App.cpp","void CGameManager::checkOutAdvanceAltar(CUser*)",0x11ef,
                 "invalid user : advance altar logout ID[%d] ACCID[%s]",uVar4,uVar3);
    }
  }
  return;
}

```

---

## checkOutBlueMarble

```asm
// === 0829844a CGameManager::checkOutBlueMarble  [0x0829844a-0x829849f] ===
 829844a:	55                   	push   %ebp
 829844b:	89 e5                	mov    %esp,%ebp
 829844d:	83 ec 28             	sub    $0x28,%esp
 8298450:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298453:	89 04 24             	mov    %eax,(%esp)
 8298456:	e8 cf 1e e4 ff       	call   80da32a <_ZN5CUser17checkInBlueMarbleEv>
 829845b:	83 f0 01             	xor    $0x1,%eax
 829845e:	84 c0                	test   %al,%al
 8298460:	75 38                	jne    829849a <_ZN12CGameManager18checkOutBlueMarbleEP5CUser+0x50>
 8298462:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298465:	89 04 24             	mov    %eax,(%esp)
 8298468:	e8 f1 1e e4 ff       	call   80da35e <_ZN5CUser18getBlueMarbleIndexEv>
 829846d:	98                   	cwtl
 829846e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8298472:	8b 45 08             	mov    0x8(%ebp),%eax
 8298475:	89 04 24             	mov    %eax,(%esp)
 8298478:	e8 21 9f 00 00       	call   82a239e <_ZN12CGameManager13getBlueMarbleEi>
 829847d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8298480:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8298484:	74 17                	je     829849d <_ZN12CGameManager18checkOutBlueMarbleEP5CUser+0x53>
 8298486:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298489:	89 44 24 04          	mov    %eax,0x4(%esp)
 829848d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8298490:	89 04 24             	mov    %eax,(%esp)
 8298493:	e8 9e 0c e4 ff       	call   80d9136 <_ZN10BlueMarble9leaveUserEP5CUser>
 8298498:	eb 04                	jmp    829849e <_ZN12CGameManager18checkOutBlueMarbleEP5CUser+0x54>
 829849a:	90                   	nop
 829849b:	eb 01                	jmp    829849e <_ZN12CGameManager18checkOutBlueMarbleEP5CUser+0x54>
 829849d:	90                   	nop
 829849e:	c9                   	leave
 829849f:	c3                   	ret

```

```c
// CGameManager::checkOutBlueMarble @ 0x829844a

/* CGameManager::checkOutBlueMarble(CUser*) */

void __thiscall CGameManager::checkOutBlueMarble(CGameManager *this,CUser *param_1)

{
  char cVar1;
  BlueMarble *this_00;
  
  cVar1 = CUser::checkInBlueMarble(param_1);
  if (cVar1 == '\x01') {
    CUser::getBlueMarbleIndex(param_1);
    this_00 = (BlueMarble *)getBlueMarble((int)this);
    if (this_00 != (BlueMarble *)0x0) {
      BlueMarble::leaveUser(this_00,param_1);
    }
  }
  return;
}

```

---

## checkOutBossTower

```asm
// === 082981a4 CGameManager::checkOutBossTower  [0x082981a4-0x8298271] ===
 82981a4:	55                   	push   %ebp
 82981a5:	89 e5                	mov    %esp,%ebp
 82981a7:	53                   	push   %ebx
 82981a8:	83 ec 34             	sub    $0x34,%esp
 82981ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 82981ae:	89 04 24             	mov    %eax,(%esp)
 82981b1:	e8 2c e6 00 00       	call   82a67e2 <_ZN5CUser16checkInBossTowerEv>
 82981b6:	83 f0 01             	xor    $0x1,%eax
 82981b9:	84 c0                	test   %al,%al
 82981bb:	0f 85 a6 00 00 00    	jne    8298267 <_ZN12CGameManager17checkOutBossTowerEP5CUser+0xc3>
 82981c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82981c4:	89 04 24             	mov    %eax,(%esp)
 82981c7:	e8 c8 7c f9 ff       	call   822fe94 <_ZN5CUser17getBossTowerIndexEv>
 82981cc:	98                   	cwtl
 82981cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82981d1:	8b 45 08             	mov    0x8(%ebp),%eax
 82981d4:	89 04 24             	mov    %eax,(%esp)
 82981d7:	e8 1e d8 ff ff       	call   82959fa <_ZN12CGameManager12getBossTowerEi>
 82981dc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82981df:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82981e3:	0f 84 81 00 00 00    	je     829826a <_ZN12CGameManager17checkOutBossTowerEP5CUser+0xc6>
 82981e9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82981ec:	8b 00                	mov    (%eax),%eax
 82981ee:	83 c0 14             	add    $0x14,%eax
 82981f1:	8b 10                	mov    (%eax),%edx
 82981f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 82981f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82981fa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82981fd:	89 04 24             	mov    %eax,(%esp)
 8298200:	ff d2                	call   *%edx
 8298202:	83 f0 01             	xor    $0x1,%eax
 8298205:	84 c0                	test   %al,%al
 8298207:	74 62                	je     829826b <_ZN12CGameManager17checkOutBossTowerEP5CUser+0xc7>
 8298209:	8b 45 0c             	mov    0xc(%ebp),%eax
 829820c:	89 04 24             	mov    %eax,(%esp)
 829820f:	e8 5a 21 e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8298214:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 829821b:	00 
 829821c:	89 04 24             	mov    %eax,(%esp)
 829821f:	e8 27 0e e7 ff       	call   810904b <_Z14NumberToStringji>
 8298224:	89 c3                	mov    %eax,%ebx
 8298226:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8298229:	89 04 24             	mov    %eax,(%esp)
 829822c:	e8 f7 24 01 00       	call   82aa728 <_ZN8WongWork10CBossTower6getIdxEv>
 8298231:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8298235:	89 44 24 14          	mov    %eax,0x14(%esp)
 8298239:	c7 44 24 10 bc 6f c1 	movl   $0x8c16fbc,0x10(%esp)
 8298240:	08 
 8298241:	c7 44 24 0c d9 11 00 	movl   $0x11d9,0xc(%esp)
 8298248:	00 
 8298249:	c7 44 24 08 00 b4 c1 	movl   $0x8c1b400,0x8(%esp)
 8298250:	08 
 8298251:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 8298258:	08 
 8298259:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8298260:	e8 a5 b9 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8298265:	eb 04                	jmp    829826b <_ZN12CGameManager17checkOutBossTowerEP5CUser+0xc7>
 8298267:	90                   	nop
 8298268:	eb 01                	jmp    829826b <_ZN12CGameManager17checkOutBossTowerEP5CUser+0xc7>
 829826a:	90                   	nop
 829826b:	83 c4 34             	add    $0x34,%esp
 829826e:	5b                   	pop    %ebx
 829826f:	5d                   	pop    %ebp
 8298270:	c3                   	ret
 8298271:	90                   	nop

```

```c
// CGameManager::checkOutBossTower @ 0x82981a4

/* CGameManager::checkOutBossTower(CUser*) */

void __thiscall CGameManager::checkOutBossTower(CGameManager *this,CUser *param_1)

{
  char cVar1;
  CBossTower *this_00;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  cVar1 = CUser::checkInBossTower(param_1);
  if (cVar1 == '\x01') {
    CUser::getBossTowerIndex(param_1);
    this_00 = (CBossTower *)getBossTower((int)this);
    if ((this_00 != (CBossTower *)0x0) &&
       (cVar1 = (**(code **)(*(int *)this_00 + 0x14))(this_00,param_1), cVar1 != '\x01')) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar3 = NumberToString(uVar2,0);
      uVar4 = WongWork::CBossTower::getIdx(this_00);
      LogManager::logFormat
                (1,"App.cpp","void CGameManager::checkOutBossTower(CUser*)",0x11d9,
                 "BossTower checkOutBossTower ID[%d] ACCID[%s]",uVar4,uVar3);
    }
  }
  return;
}

```

---

## checkOutDeathTower

```asm
// === 0829833a CGameManager::checkOutDeathTower  [0x0829833a-0x82983fb] ===
 829833a:	55                   	push   %ebp
 829833b:	89 e5                	mov    %esp,%ebp
 829833d:	53                   	push   %ebx
 829833e:	83 ec 34             	sub    $0x34,%esp
 8298341:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298344:	89 04 24             	mov    %eax,(%esp)
 8298347:	e8 70 e4 00 00       	call   82a67bc <_ZN5CUser17checkInDeathTowerEv>
 829834c:	83 f0 01             	xor    $0x1,%eax
 829834f:	84 c0                	test   %al,%al
 8298351:	0f 85 9b 00 00 00    	jne    82983f2 <_ZN12CGameManager18checkOutDeathTowerEP5CUser+0xb8>
 8298357:	8b 45 0c             	mov    0xc(%ebp),%eax
 829835a:	89 04 24             	mov    %eax,(%esp)
 829835d:	e8 70 e4 00 00       	call   82a67d2 <_ZN5CUser18getDeathTowerIndexEv>
 8298362:	98                   	cwtl
 8298363:	89 44 24 04          	mov    %eax,0x4(%esp)
 8298367:	8b 45 08             	mov    0x8(%ebp),%eax
 829836a:	89 04 24             	mov    %eax,(%esp)
 829836d:	e8 4a d4 ff ff       	call   82957bc <_ZN12CGameManager13getDeathTowerEi>
 8298372:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8298375:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8298379:	74 7a                	je     82983f5 <_ZN12CGameManager18checkOutDeathTowerEP5CUser+0xbb>
 829837b:	8b 45 0c             	mov    0xc(%ebp),%eax
 829837e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8298382:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8298385:	89 04 24             	mov    %eax,(%esp)
 8298388:	e8 65 b3 1c 00       	call   84636f2 <_ZN8WongWork11CDeathTower11onLeaveUserEP5CUser>
 829838d:	83 f0 01             	xor    $0x1,%eax
 8298390:	84 c0                	test   %al,%al
 8298392:	74 62                	je     82983f6 <_ZN12CGameManager18checkOutDeathTowerEP5CUser+0xbc>
 8298394:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298397:	89 04 24             	mov    %eax,(%esp)
 829839a:	e8 cf 1f e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 829839f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82983a6:	00 
 82983a7:	89 04 24             	mov    %eax,(%esp)
 82983aa:	e8 9c 0c e7 ff       	call   810904b <_Z14NumberToStringji>
 82983af:	89 c3                	mov    %eax,%ebx
 82983b1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82983b4:	89 04 24             	mov    %eax,(%esp)
 82983b7:	e8 ca f1 00 00       	call   82a7586 <_ZN8WongWork11CDeathTower6getIdxEv>
 82983bc:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 82983c0:	89 44 24 14          	mov    %eax,0x14(%esp)
 82983c4:	c7 44 24 10 24 70 c1 	movl   $0x8c17024,0x10(%esp)
 82983cb:	08 
 82983cc:	c7 44 24 0c 3a 12 00 	movl   $0x123a,0xc(%esp)
 82983d3:	00 
 82983d4:	c7 44 24 08 80 b3 c1 	movl   $0x8c1b380,0x8(%esp)
 82983db:	08 
 82983dc:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 82983e3:	08 
 82983e4:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 82983eb:	e8 1a b8 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 82983f0:	eb 04                	jmp    82983f6 <_ZN12CGameManager18checkOutDeathTowerEP5CUser+0xbc>
 82983f2:	90                   	nop
 82983f3:	eb 01                	jmp    82983f6 <_ZN12CGameManager18checkOutDeathTowerEP5CUser+0xbc>
 82983f5:	90                   	nop
 82983f6:	83 c4 34             	add    $0x34,%esp
 82983f9:	5b                   	pop    %ebx
 82983fa:	5d                   	pop    %ebp
 82983fb:	c3                   	ret

```

```c
// CGameManager::checkOutDeathTower @ 0x829833a

/* CGameManager::checkOutDeathTower(CUser*) */

void __thiscall CGameManager::checkOutDeathTower(CGameManager *this,CUser *param_1)

{
  char cVar1;
  CDeathTower *this_00;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  cVar1 = CUser::checkInDeathTower(param_1);
  if (cVar1 == '\x01') {
    CUser::getDeathTowerIndex(param_1);
    this_00 = (CDeathTower *)getDeathTower((int)this);
    if ((this_00 != (CDeathTower *)0x0) &&
       (cVar1 = WongWork::CDeathTower::onLeaveUser(this_00,param_1), cVar1 != '\x01')) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar3 = NumberToString(uVar2,0);
      uVar4 = WongWork::CDeathTower::getIdx(this_00);
      LogManager::logFormat
                (1,"App.cpp","void CGameManager::checkOutDeathTower(CUser*)",0x123a,&DAT_08c17024,
                 uVar4,uVar3);
    }
  }
  return;
}

```

---

## check_user_var

```asm
// === 0829451e CGameManager::check_user_var  [0x0829451e-0x82947a3] ===
 829451e:	55                   	push   %ebp
 829451f:	89 e5                	mov    %esp,%ebp
 8294521:	83 ec 28             	sub    $0x28,%esp
 8294524:	8b 45 0c             	mov    0xc(%ebp),%eax
 8294527:	89 04 24             	mov    %eax,(%esp)
 829452a:	e8 3d af f9 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 829452f:	85 c0                	test   %eax,%eax
 8294531:	74 16                	je     8294549 <_ZN12CGameManager14check_user_varEP5CUser+0x2b>
 8294533:	8b 45 0c             	mov    0xc(%ebp),%eax
 8294536:	89 04 24             	mov    %eax,(%esp)
 8294539:	e8 fe 21 01 00       	call   82a673c <_ZN15CUserCharacInfo13get_guild_expEv>
 829453e:	85 c0                	test   %eax,%eax
 8294540:	74 07                	je     8294549 <_ZN12CGameManager14check_user_varEP5CUser+0x2b>
 8294542:	b8 01 00 00 00       	mov    $0x1,%eax
 8294547:	eb 05                	jmp    829454e <_ZN12CGameManager14check_user_varEP5CUser+0x30>
 8294549:	b8 00 00 00 00       	mov    $0x0,%eax
 829454e:	84 c0                	test   %al,%al
 8294550:	74 2c                	je     829457e <_ZN12CGameManager14check_user_varEP5CUser+0x60>
 8294552:	c7 44 24 10 08 69 c1 	movl   $0x8c16908,0x10(%esp)
 8294559:	08 
 829455a:	c7 44 24 0c 2c 09 00 	movl   $0x92c,0xc(%esp)
 8294561:	00 
 8294562:	c7 44 24 08 a0 b7 c1 	movl   $0x8c1b7a0,0x8(%esp)
 8294569:	08 
 829456a:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 8294571:	08 
 8294572:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8294579:	e8 8c f6 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 829457e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8294581:	89 04 24             	mov    %eax,(%esp)
 8294584:	e8 c9 17 3b 00       	call   8645d52 <_ZNK15CUserCharacInfo31get_charac_level_before_dungeonEv>
 8294589:	85 c0                	test   %eax,%eax
 829458b:	0f 95 c0             	setne  %al
 829458e:	84 c0                	test   %al,%al
 8294590:	74 2c                	je     82945be <_ZN12CGameManager14check_user_varEP5CUser+0xa0>
 8294592:	c7 44 24 10 30 69 c1 	movl   $0x8c16930,0x10(%esp)
 8294599:	08 
 829459a:	c7 44 24 0c 2f 09 00 	movl   $0x92f,0xc(%esp)
 82945a1:	00 
 82945a2:	c7 44 24 08 a0 b7 c1 	movl   $0x8c1b7a0,0x8(%esp)
 82945a9:	08 
 82945aa:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 82945b1:	08 
 82945b2:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 82945b9:	e8 4c f6 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 82945be:	8b 45 0c             	mov    0xc(%ebp),%eax
 82945c1:	89 04 24             	mov    %eax,(%esp)
 82945c4:	e8 4b 5d e4 ff       	call   80da314 <_ZN5CUser12CheckInPartyEv>
 82945c9:	84 c0                	test   %al,%al
 82945cb:	74 2c                	je     82945f9 <_ZN12CGameManager14check_user_varEP5CUser+0xdb>
 82945cd:	c7 44 24 10 70 69 c1 	movl   $0x8c16970,0x10(%esp)
 82945d4:	08 
 82945d5:	c7 44 24 0c 32 09 00 	movl   $0x932,0xc(%esp)
 82945dc:	00 
 82945dd:	c7 44 24 08 a0 b7 c1 	movl   $0x8c1b7a0,0x8(%esp)
 82945e4:	08 
 82945e5:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 82945ec:	08 
 82945ed:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 82945f4:	e8 11 f6 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 82945f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82945fc:	89 04 24             	mov    %eax,(%esp)
 82945ff:	e8 fa 5c e4 ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 8294604:	84 c0                	test   %al,%al
 8294606:	74 2c                	je     8294634 <_ZN12CGameManager14check_user_varEP5CUser+0x116>
 8294608:	c7 44 24 10 94 69 c1 	movl   $0x8c16994,0x10(%esp)
 829460f:	08 
 8294610:	c7 44 24 0c 35 09 00 	movl   $0x935,0xc(%esp)
 8294617:	00 
 8294618:	c7 44 24 08 a0 b7 c1 	movl   $0x8c1b7a0,0x8(%esp)
 829461f:	08 
 8294620:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 8294627:	08 
 8294628:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 829462f:	e8 d6 f5 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8294634:	8b 45 0c             	mov    0xc(%ebp),%eax
 8294637:	89 04 24             	mov    %eax,(%esp)
 829463a:	e8 1f b8 f9 ff       	call   822fe5e <_ZN5CUser10CheckInPvpEv>
 829463f:	84 c0                	test   %al,%al
 8294641:	74 2c                	je     829466f <_ZN12CGameManager14check_user_varEP5CUser+0x151>
 8294643:	c7 44 24 10 c0 69 c1 	movl   $0x8c169c0,0x10(%esp)
 829464a:	08 
 829464b:	c7 44 24 0c 38 09 00 	movl   $0x938,0xc(%esp)
 8294652:	00 
 8294653:	c7 44 24 08 a0 b7 c1 	movl   $0x8c1b7a0,0x8(%esp)
 829465a:	08 
 829465b:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 8294662:	08 
 8294663:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 829466a:	e8 9b f5 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 829466f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8294672:	89 04 24             	mov    %eax,(%esp)
 8294675:	e8 2c 21 01 00       	call   82a67a6 <_ZN5CUser14CheckInWarRoomEv>
 829467a:	84 c0                	test   %al,%al
 829467c:	74 2c                	je     82946aa <_ZN12CGameManager14check_user_varEP5CUser+0x18c>
 829467e:	c7 44 24 10 e8 69 c1 	movl   $0x8c169e8,0x10(%esp)
 8294685:	08 
 8294686:	c7 44 24 0c 3b 09 00 	movl   $0x93b,0xc(%esp)
 829468d:	00 
 829468e:	c7 44 24 08 a0 b7 c1 	movl   $0x8c1b7a0,0x8(%esp)
 8294695:	08 
 8294696:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 829469d:	08 
 829469e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 82946a5:	e8 60 f5 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 82946aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 82946ad:	89 04 24             	mov    %eax,(%esp)
 82946b0:	e8 cd 84 3e 00       	call   867cb82 <_ZN5CUser22getPlayingDungeonIndexEv>
 82946b5:	83 f8 ff             	cmp    $0xffffffff,%eax
 82946b8:	0f 95 c0             	setne  %al
 82946bb:	84 c0                	test   %al,%al
 82946bd:	74 2c                	je     82946eb <_ZN12CGameManager14check_user_varEP5CUser+0x1cd>
 82946bf:	c7 44 24 10 14 6a c1 	movl   $0x8c16a14,0x10(%esp)
 82946c6:	08 
 82946c7:	c7 44 24 0c 3e 09 00 	movl   $0x93e,0xc(%esp)
 82946ce:	00 
 82946cf:	c7 44 24 08 a0 b7 c1 	movl   $0x8c1b7a0,0x8(%esp)
 82946d6:	08 
 82946d7:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 82946de:	08 
 82946df:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 82946e6:	e8 1f f5 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 82946eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82946ee:	89 04 24             	mov    %eax,(%esp)
 82946f1:	e8 a0 20 01 00       	call   82a6796 <_ZN5CUser12IsProgLogoutEv>
 82946f6:	84 c0                	test   %al,%al
 82946f8:	74 2c                	je     8294726 <_ZN12CGameManager14check_user_varEP5CUser+0x208>
 82946fa:	c7 44 24 10 3c 6a c1 	movl   $0x8c16a3c,0x10(%esp)
 8294701:	08 
 8294702:	c7 44 24 0c 41 09 00 	movl   $0x941,0xc(%esp)
 8294709:	00 
 829470a:	c7 44 24 08 a0 b7 c1 	movl   $0x8c1b7a0,0x8(%esp)
 8294711:	08 
 8294712:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 8294719:	08 
 829471a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8294721:	e8 e4 f4 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8294726:	8b 45 0c             	mov    0xc(%ebp),%eax
 8294729:	05 f4 96 07 00       	add    $0x796f4,%eax
 829472e:	89 04 24             	mov    %eax,(%esp)
 8294731:	e8 28 20 01 00       	call   82a675e <_ZN14CCharacterView16isSaveCharacViewEv>
 8294736:	84 c0                	test   %al,%al
 8294738:	74 2c                	je     8294766 <_ZN12CGameManager14check_user_varEP5CUser+0x248>
 829473a:	c7 44 24 10 68 6a c1 	movl   $0x8c16a68,0x10(%esp)
 8294741:	08 
 8294742:	c7 44 24 0c 44 09 00 	movl   $0x944,0xc(%esp)
 8294749:	00 
 829474a:	c7 44 24 08 a0 b7 c1 	movl   $0x8c1b7a0,0x8(%esp)
 8294751:	08 
 8294752:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 8294759:	08 
 829475a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8294761:	e8 a4 f4 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8294766:	8b 45 0c             	mov    0xc(%ebp),%eax
 8294769:	89 04 24             	mov    %eax,(%esp)
 829476c:	e8 b9 5b e4 ff       	call   80da32a <_ZN5CUser17checkInBlueMarbleEv>
 8294771:	84 c0                	test   %al,%al
 8294773:	74 2c                	je     82947a1 <_ZN12CGameManager14check_user_varEP5CUser+0x283>
 8294775:	c7 44 24 10 98 6a c1 	movl   $0x8c16a98,0x10(%esp)
 829477c:	08 
 829477d:	c7 44 24 0c 48 09 00 	movl   $0x948,0xc(%esp)
 8294784:	00 
 8294785:	c7 44 24 08 a0 b7 c1 	movl   $0x8c1b7a0,0x8(%esp)
 829478c:	08 
 829478d:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 8294794:	08 
 8294795:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 829479c:	e8 69 f4 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 82947a1:	c9                   	leave
 82947a2:	c3                   	ret
 82947a3:	90                   	nop

```

```c
// CGameManager::check_user_var @ 0x829451e

/* CGameManager::check_user_var(CUser*) */

void __thiscall CGameManager::check_user_var(CGameManager *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
  if (iVar3 != 0) {
    iVar3 = CUserCharacInfo::get_guild_exp((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      bVar1 = true;
      goto LAB_0829454e;
    }
  }
  bVar1 = false;
LAB_0829454e:
  if (bVar1) {
    LogManager::logFormat
              (1,"App.cpp","void CGameManager::check_user_var(CUser*)",0x92c,
               "[CHECK_USER_VAR] RESET GUILD EXP ERROR!");
  }
  iVar3 = CUserCharacInfo::get_charac_level_before_dungeon((CUserCharacInfo *)param_1);
  if (iVar3 != 0) {
    LogManager::logFormat
              (1,"App.cpp","void CGameManager::check_user_var(CUser*)",0x92f,
               "[CHECK_USER_VAR] RESET CHARACTER LEVEL BEFORE DUNGEON ERROR!");
  }
  cVar2 = CUser::CheckInParty(param_1);
  if (cVar2 != '\0') {
    LogManager::logFormat
              (1,"App.cpp","void CGameManager::check_user_var(CUser*)",0x932,
               "[CHECK_USER_VAR] RESET PARTY ERROR!");
  }
  cVar2 = CUser::CheckInTrade(param_1);
  if (cVar2 != '\0') {
    LogManager::logFormat
              (1,"App.cpp","void CGameManager::check_user_var(CUser*)",0x935,
               "[CHECK_USER_VAR] RESET TRADE INDEX ERROR!");
  }
  cVar2 = CUser::CheckInPvp(param_1);
  if (cVar2 != '\0') {
    LogManager::logFormat
              (1,"App.cpp","void CGameManager::check_user_var(CUser*)",0x938,
               "[CHECK_USER_VAR] RESET PVP INDEX ERROR!");
  }
  cVar2 = CUser::CheckInWarRoom(param_1);
  if (cVar2 != '\0') {
    LogManager::logFormat
              (1,"App.cpp","void CGameManager::check_user_var(CUser*)",0x93b,
               "[CHECK_USER_VAR] RESET WARROOM INDEX ERROR!");
  }
  iVar3 = CUser::getPlayingDungeonIndex(param_1);
  if (iVar3 != -1) {
    LogManager::logFormat
              (1,"App.cpp","void CGameManager::check_user_var(CUser*)",0x93e,
               "[CHECK_USER_VAR] RESET DUNGEON ERROR!");
  }
  cVar2 = CUser::IsProgLogout(param_1);
  if (cVar2 != '\0') {
    LogManager::logFormat
              (1,"App.cpp","void CGameManager::check_user_var(CUser*)",0x941,
               "[CHECK_USER_VAR] RESET PROG LOGOUT ERROR!");
  }
  cVar2 = CCharacterView::isSaveCharacView((CCharacterView *)(param_1 + 0x796f4));
  if (cVar2 != '\0') {
    LogManager::logFormat
              (1,"App.cpp","void CGameManager::check_user_var(CUser*)",0x944,
               "[CHECK_USER_VAR] RESET CHARACTER VIEW ERROR!");
  }
  cVar2 = CUser::checkInBlueMarble(param_1);
  if (cVar2 != '\0') {
    LogManager::logFormat
              (1,"App.cpp","void CGameManager::check_user_var(CUser*)",0x948,
               "[CHECK_USER_VAR] RESET BLUEMARBLE INDEX ERROR!");
  }
  return;
}

```

---

## createUser

```asm
// === 08294296 CGameManager::createUser  [0x08294296-0x829445d] ===
 8294296:	55                   	push   %ebp
 8294297:	89 e5                	mov    %esp,%ebp
 8294299:	57                   	push   %edi
 829429a:	56                   	push   %esi
 829429b:	53                   	push   %ebx
 829429c:	83 ec 6c             	sub    $0x6c,%esp
 829429f:	8b 45 08             	mov    0x8(%ebp),%eax
 82942a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82942a6:	8d 45 ac             	lea    -0x54(%ebp),%eax
 82942a9:	89 04 24             	mov    %eax,(%esp)
 82942ac:	e8 9b 11 e7 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 82942b1:	8b 45 08             	mov    0x8(%ebp),%eax
 82942b4:	83 c0 4c             	add    $0x4c,%eax
 82942b7:	89 04 24             	mov    %eax,(%esp)
 82942ba:	e8 1d c0 01 00       	call   82b02dc <_ZN10StaticPoolI5CUserLi600EE7AcquireEv>
 82942bf:	89 45 d0             	mov    %eax,-0x30(%ebp)
 82942c2:	8d 45 ac             	lea    -0x54(%ebp),%eax
 82942c5:	89 04 24             	mov    %eax,(%esp)
 82942c8:	e8 9b 11 e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 82942cd:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 82942d1:	74 1d                	je     82942f0 <_ZN12CGameManager10createUserEv+0x5a>
 82942d3:	eb 5b                	jmp    8294330 <_ZN12CGameManager10createUserEv+0x9a>
 82942d5:	89 d3                	mov    %edx,%ebx
 82942d7:	89 c6                	mov    %eax,%esi
 82942d9:	8d 45 ac             	lea    -0x54(%ebp),%eax
 82942dc:	89 04 24             	mov    %eax,(%esp)
 82942df:	e8 84 11 e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 82942e4:	89 f0                	mov    %esi,%eax
 82942e6:	89 da                	mov    %ebx,%edx
 82942e8:	89 04 24             	mov    %eax,(%esp)
 82942eb:	e8 60 f4 84 00       	call   8ae3750 <_Unwind_Resume>
 82942f0:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 82942f7:	00 
 82942f8:	c7 44 24 08 e3 08 00 	movl   $0x8e3,0x8(%esp)
 82942ff:	00 
 8294300:	c7 44 24 04 20 b8 c1 	movl   $0x8c1b820,0x4(%esp)
 8294307:	08 
 8294308:	8d 45 b0             	lea    -0x50(%ebp),%eax
 829430b:	89 04 24             	mov    %eax,(%esp)
 829430e:	e8 05 b4 2b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8294313:	c7 44 24 04 44 68 c1 	movl   $0x8c16844,0x4(%esp)
 829431a:	08 
 829431b:	8d 45 b0             	lea    -0x50(%ebp),%eax
 829431e:	89 04 24             	mov    %eax,(%esp)
 8294321:	e8 62 b4 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8294326:	b8 00 00 00 00       	mov    $0x0,%eax
 829432b:	e9 26 01 00 00       	jmp    8294456 <_ZN12CGameManager10createUserEv+0x1c0>
 8294330:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8294333:	89 04 24             	mov    %eax,(%esp)
 8294336:	e8 5b 49 e3 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 829433b:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 829433e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8294341:	89 04 24             	mov    %eax,(%esp)
 8294344:	e8 25 60 e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8294349:	89 45 d8             	mov    %eax,-0x28(%ebp)
 829434c:	8b 45 d0             	mov    -0x30(%ebp),%eax
 829434f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294353:	8b 45 08             	mov    0x8(%ebp),%eax
 8294356:	89 04 24             	mov    %eax,(%esp)
 8294359:	e8 c0 01 00 00       	call   829451e <_ZN12CGameManager14check_user_varEP5CUser>
 829435e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8294361:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294365:	8b 45 08             	mov    0x8(%ebp),%eax
 8294368:	89 04 24             	mov    %eax,(%esp)
 829436b:	e8 32 05 00 00       	call   82948a2 <_ZN12CGameManager6GetIdxEP5CUser>
 8294370:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8294373:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8294376:	98                   	cwtl
 8294377:	89 44 24 04          	mov    %eax,0x4(%esp)
 829437b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 829437e:	89 04 24             	mov    %eax,(%esp)
 8294381:	e8 98 24 01 00       	call   82a681e <_ZN5CUser10SetSlotIDXEs>
 8294386:	8b 45 08             	mov    0x8(%ebp),%eax
 8294389:	83 c0 4c             	add    $0x4c,%eax
 829438c:	89 04 24             	mov    %eax,(%esp)
 829438f:	e8 76 c0 01 00       	call   82b040a <_ZN10StaticPoolI5CUserLi600EE16GetLastErrorCodeEv>
 8294394:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8294397:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 829439b:	74 75                	je     8294412 <_ZN12CGameManager10createUserEv+0x17c>
 829439d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 82943a0:	89 04 24             	mov    %eax,(%esp)
 82943a3:	e8 ee 48 e3 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 82943a8:	89 c6                	mov    %eax,%esi
 82943aa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82943b1:	00 
 82943b2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82943b5:	89 04 24             	mov    %eax,(%esp)
 82943b8:	e8 8e 4c e7 ff       	call   810904b <_Z14NumberToStringji>
 82943bd:	89 c3                	mov    %eax,%ebx
 82943bf:	8b 7d e0             	mov    -0x20(%ebp),%edi
 82943c2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82943c9:	00 
 82943ca:	c7 44 24 08 f6 08 00 	movl   $0x8f6,0x8(%esp)
 82943d1:	00 
 82943d2:	c7 44 24 04 20 b8 c1 	movl   $0x8c1b820,0x4(%esp)
 82943d9:	08 
 82943da:	8d 45 c0             	lea    -0x40(%ebp),%eax
 82943dd:	89 04 24             	mov    %eax,(%esp)
 82943e0:	e8 33 b3 2b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82943e5:	89 74 24 18          	mov    %esi,0x18(%esp)
 82943e9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82943ec:	89 44 24 14          	mov    %eax,0x14(%esp)
 82943f0:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 82943f4:	8b 45 d0             	mov    -0x30(%ebp),%eax
 82943f7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82943fb:	89 7c 24 08          	mov    %edi,0x8(%esp)
 82943ff:	c7 44 24 04 68 68 c1 	movl   $0x8c16868,0x4(%esp)
 8294406:	08 
 8294407:	8d 45 c0             	lea    -0x40(%ebp),%eax
 829440a:	89 04 24             	mov    %eax,(%esp)
 829440d:	e8 76 b3 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8294412:	8b 45 08             	mov    0x8(%ebp),%eax
 8294415:	89 04 24             	mov    %eax,(%esp)
 8294418:	e8 2f fe ff ff       	call   829424c <_ZN12CGameManager10getNextUIDEv>
 829441d:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 8294421:	0f bf 45 e6          	movswl -0x1a(%ebp),%eax
 8294425:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294429:	8b 45 d0             	mov    -0x30(%ebp),%eax
 829442c:	89 04 24             	mov    %eax,(%esp)
 829442f:	e8 18 24 01 00       	call   82a684c <_ZN5CUser10SetIncreIDEs>
 8294434:	e8 26 94 41 00       	call   86ad85f <_Z29CUserGlobalInfoHandleInstancev>
 8294439:	89 04 24             	mov    %eax,(%esp)
 829443c:	e8 cf 94 41 00       	call   86ad910 <_ZN21CUserGlobalInfoHandle12get_uniqueidEv>
 8294441:	0f b7 c0             	movzwl %ax,%eax
 8294444:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294448:	8b 45 d0             	mov    -0x30(%ebp),%eax
 829444b:	89 04 24             	mov    %eax,(%esp)
 829444e:	e8 17 24 01 00       	call   82a686a <_ZN5CUser13set_unique_idEt>
 8294453:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8294456:	83 c4 6c             	add    $0x6c,%esp
 8294459:	5b                   	pop    %ebx
 829445a:	5e                   	pop    %esi
 829445b:	5f                   	pop    %edi
 829445c:	5d                   	pop    %ebp
 829445d:	c3                   	ret

```

```c
// CGameManager::createUser @ 0x8294296

/* CGameManager::createUser() */

CUser * __thiscall CGameManager::createUser(CGameManager *this)

{
  int iVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CUserGlobalInfoHandle *this_00;
  Guard<Mutex> local_58 [4];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  CUser *local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  int local_24;
  short local_1e;
  
  Guard<Mutex>::Guard(local_58,(Mutex *)this);
                    /* try { // try from 082942ba to 082942be has its CatchHandler @ 082942d5 */
  local_34 = (CUser *)StaticPool<CUser,600>::Acquire((StaticPool<CUser,600> *)(this + 0x4c));
  Guard<Mutex>::~Guard(local_58);
  if (local_34 == (CUser *)0x0) {
    cMyTrace::cMyTrace(local_54,"CUser* CGameManager::createUser()",0x8e3,5);
    cMyTrace::operator()(local_54,"createUser Failed! need to restart!");
    local_34 = (CUser *)0x0;
  }
  else {
    local_30 = CUser::GetUID(local_34);
    local_2c = CUser::get_acc_id(local_34);
    check_user_var(this,local_34);
    local_28 = GetIdx(this,local_34);
    CUser::SetSlotIDX(local_34,(short)local_28);
    local_24 = StaticPool<CUser,600>::GetLastErrorCode((StaticPool<CUser,600> *)(this + 0x4c));
    if (local_24 != 0) {
      uVar3 = CUser::GetUID(local_34);
      uVar4 = NumberToString(local_2c,0);
      iVar1 = local_24;
      cMyTrace::cMyTrace(local_44,"CUser* CGameManager::createUser()",0x8f6,0);
      cMyTrace::operator()
                (local_44,
                 "STATIC MEMORY_POOL createUser error(%d), user(%x), last user m_acc_id(%s), idx(%d), new user idx(%d)"
                 ,iVar1,local_34,uVar4,local_30,uVar3);
    }
    local_1e = getNextUID(this);
    CUser::SetIncreID(local_34,local_1e);
    this_00 = (CUserGlobalInfoHandle *)CUserGlobalInfoHandleInstance();
    uVar2 = CUserGlobalInfoHandle::get_uniqueid(this_00);
    CUser::set_unique_id(local_34,uVar2);
  }
  return local_34;
}

```

---

## findJoinableBlueMarble

```asm
// === 082a3424 CGameManager::findJoinableBlueMarble  [0x082a3424-0x82a3543] ===
 82a3424:	55                   	push   %ebp
 82a3425:	89 e5                	mov    %esp,%ebp
 82a3427:	83 ec 58             	sub    $0x58,%esp
 82a342a:	e8 6c 8d e2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 82a342f:	89 04 24             	mov    %eax,(%esp)
 82a3432:	e8 b3 2a 0c 00       	call   8365eea <_ZN12CDataManager19getBlueMarbleScriptEv>
 82a3437:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82a343a:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 82a343e:	75 0a                	jne    82a344a <_ZN12CGameManager22findJoinableBlueMarbleEv+0x26>
 82a3440:	b8 00 00 00 00       	mov    $0x0,%eax
 82a3445:	e9 f8 00 00 00       	jmp    82a3542 <_ZN12CGameManager22findJoinableBlueMarbleEv+0x11e>
 82a344a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82a344d:	8b 40 30             	mov    0x30(%eax),%eax
 82a3450:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82a3453:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82a345a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82a345d:	89 04 24             	mov    %eax,(%esp)
 82a3460:	e8 f3 1a 01 00       	call   82b4f58 <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP10BlueMarbleEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEC1Ev>
 82a3465:	e9 c4 00 00 00       	jmp    82a352e <_ZN12CGameManager22findJoinableBlueMarbleEv+0x10a>
 82a346a:	8b 45 08             	mov    0x8(%ebp),%eax
 82a346d:	8d 90 e8 02 00 00    	lea    0x2e8(%eax),%edx
 82a3473:	8d 45 c0             	lea    -0x40(%ebp),%eax
 82a3476:	89 54 24 04          	mov    %edx,0x4(%esp)
 82a347a:	89 04 24             	mov    %eax,(%esp)
 82a347d:	e8 dc 1a 01 00       	call   82b4f5e <_ZN9__gnu_cxx8hash_mapIiP10BlueMarbleNS_4hashIiEESt8equal_toIiESaIS2_EE5beginEv>
 82a3482:	83 ec 04             	sub    $0x4,%esp
 82a3485:	8b 45 c0             	mov    -0x40(%ebp),%eax
 82a3488:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 82a348b:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 82a348e:	89 55 d8             	mov    %edx,-0x28(%ebp)
 82a3491:	eb 62                	jmp    82a34f5 <_ZN12CGameManager22findJoinableBlueMarbleEv+0xd1>
 82a3493:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82a3496:	89 04 24             	mov    %eax,(%esp)
 82a3499:	e8 94 13 01 00       	call   82b4832 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP10BlueMarbleEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 82a349e:	8b 40 04             	mov    0x4(%eax),%eax
 82a34a1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82a34a4:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82a34a8:	74 4b                	je     82a34f5 <_ZN12CGameManager22findJoinableBlueMarbleEv+0xd1>
 82a34aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a34ad:	89 04 24             	mov    %eax,(%esp)
 82a34b0:	e8 01 58 e3 ff       	call   80d8cb6 <_ZN10BlueMarble9checkJoinEv>
 82a34b5:	84 c0                	test   %al,%al
 82a34b7:	74 1f                	je     82a34d8 <_ZN12CGameManager22findJoinableBlueMarbleEv+0xb4>
 82a34b9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a34bc:	89 04 24             	mov    %eax,(%esp)
 82a34bf:	e8 16 5c e3 ff       	call   80d90da <_ZNK10BlueMarble16getWaitUserCountEv>
 82a34c4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82a34c7:	83 ea 01             	sub    $0x1,%edx
 82a34ca:	39 d0                	cmp    %edx,%eax
 82a34cc:	0f 94 c0             	sete   %al
 82a34cf:	84 c0                	test   %al,%al
 82a34d1:	74 05                	je     82a34d8 <_ZN12CGameManager22findJoinableBlueMarbleEv+0xb4>
 82a34d3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a34d6:	eb 6a                	jmp    82a3542 <_ZN12CGameManager22findJoinableBlueMarbleEv+0x11e>
 82a34d8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82a34db:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82a34e2:	00 
 82a34e3:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 82a34e6:	89 54 24 04          	mov    %edx,0x4(%esp)
 82a34ea:	89 04 24             	mov    %eax,(%esp)
 82a34ed:	e8 92 1a 01 00       	call   82b4f84 <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP10BlueMarbleEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEppEi>
 82a34f2:	83 ec 04             	sub    $0x4,%esp
 82a34f5:	8b 45 08             	mov    0x8(%ebp),%eax
 82a34f8:	8d 90 e8 02 00 00    	lea    0x2e8(%eax),%edx
 82a34fe:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82a3501:	89 54 24 04          	mov    %edx,0x4(%esp)
 82a3505:	89 04 24             	mov    %eax,(%esp)
 82a3508:	e8 ad 12 01 00       	call   82b47ba <_ZN9__gnu_cxx8hash_mapIiP10BlueMarbleNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 82a350d:	83 ec 04             	sub    $0x4,%esp
 82a3510:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82a3513:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a3517:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82a351a:	89 04 24             	mov    %eax,(%esp)
 82a351d:	e8 24 13 01 00       	call   82b4846 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP10BlueMarbleEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 82a3522:	84 c0                	test   %al,%al
 82a3524:	0f 85 69 ff ff ff    	jne    82a3493 <_ZN12CGameManager22findJoinableBlueMarbleEv+0x6f>
 82a352a:	83 6d f0 01          	subl   $0x1,-0x10(%ebp)
 82a352e:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82a3532:	0f 9f c0             	setg   %al
 82a3535:	84 c0                	test   %al,%al
 82a3537:	0f 85 2d ff ff ff    	jne    82a346a <_ZN12CGameManager22findJoinableBlueMarbleEv+0x46>
 82a353d:	b8 00 00 00 00       	mov    $0x0,%eax
 82a3542:	c9                   	leave
 82a3543:	c3                   	ret

```

```c
// CGameManager::findJoinableBlueMarble @ 0x82a3424

/* CGameManager::findJoinableBlueMarble() */

BlueMarble * CGameManager::findJoinableBlueMarble(void)

{
  char cVar1;
  CDataManager *this;
  int iVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
  local_28 [8];
  _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
  local_20 [8];
  int local_18;
  int local_14;
  BlueMarble *local_10;
  
  this = (CDataManager *)G_CDataManager();
  local_18 = CDataManager::getBlueMarbleScript(this);
  if (local_18 != 0) {
    local_14 = *(int *)(local_18 + 0x30);
    local_10 = (BlueMarble *)0x0;
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
    ::_Hashtable_iterator();
    for (; 0 < local_14; local_14 = local_14 + -1) {
      __gnu_cxx::
      hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
      ::begin((hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
               *)&local_44);
      local_30 = local_44;
      local_2c = local_40;
      while( true ) {
        __gnu_cxx::
        hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
        ::end(local_28);
        cVar1 = __gnu_cxx::
                _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
                ::operator!=((_Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
                              *)&local_30,(_Hashtable_iterator *)local_28);
        if (cVar1 == '\0') break;
        iVar2 = __gnu_cxx::
                _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
                ::operator->((_Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
                              *)&local_30);
        local_10 = *(BlueMarble **)(iVar2 + 4);
        if (local_10 != (BlueMarble *)0x0) {
          cVar1 = BlueMarble::checkJoin(local_10);
          if ((cVar1 != '\0') &&
             (iVar2 = BlueMarble::getWaitUserCount(local_10), iVar2 == local_14 + -1)) {
            return local_10;
          }
          __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
          ::operator++(local_20,(int)&local_30);
        }
      }
    }
  }
  return (BlueMarble *)0x0;
}

```

---

## getAdvanceAltar

```asm
// === 08295b44 CGameManager::getAdvanceAltar  [0x08295b44-0x8295c37] ===
 8295b44:	55                   	push   %ebp
 8295b45:	89 e5                	mov    %esp,%ebp
 8295b47:	83 ec 38             	sub    $0x38,%esp
 8295b4a:	8b 45 08             	mov    0x8(%ebp),%eax
 8295b4d:	05 9c 01 00 00       	add    $0x19c,%eax
 8295b52:	89 04 24             	mov    %eax,(%esp)
 8295b55:	e8 1e ca 01 00       	call   82b2578 <_ZN10StaticPoolIN12advancealtar12StageControlELi600EE7AcquireEv>
 8295b5a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8295b5d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8295b61:	75 0a                	jne    8295b6d <_ZN12CGameManager15getAdvanceAltarEv+0x29>
 8295b63:	b8 00 00 00 00       	mov    $0x0,%eax
 8295b68:	e9 c8 00 00 00       	jmp    8295c35 <_ZN12CGameManager15getAdvanceAltarEv+0xf1>
 8295b6d:	8b 45 08             	mov    0x8(%ebp),%eax
 8295b70:	8d 90 9c 01 00 00    	lea    0x19c(%eax),%edx
 8295b76:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8295b79:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295b7d:	89 14 24             	mov    %edx,(%esp)
 8295b80:	e8 21 cb 01 00       	call   82b26a6 <_ZN10StaticPoolIN12advancealtar12StageControlELi600EE8GetIndexEPS1_>
 8295b85:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295b89:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8295b8c:	89 04 24             	mov    %eax,(%esp)
 8295b8f:	e8 08 0b 01 00       	call   82a669c <_ZN12advancealtar12StageControl8setIndexEi>
 8295b94:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8295b97:	89 04 24             	mov    %eax,(%esp)
 8295b9a:	e8 1b ed e9 ff       	call   81348ba <_ZNK12advancealtar12StageControl8getIndexEv>
 8295b9f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8295ba2:	8b 45 08             	mov    0x8(%ebp),%eax
 8295ba5:	8d 88 c0 02 00 00    	lea    0x2c0(%eax),%ecx
 8295bab:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8295bae:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8295bb1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8295bb5:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8295bb9:	89 04 24             	mov    %eax,(%esp)
 8295bbc:	e8 21 cc 01 00       	call   82b27e2 <_ZN9__gnu_cxx8hash_mapIiPN12advancealtar12StageControlENS_4hashIiEESt8equal_toIiESaIS3_EE4findERKi>
 8295bc1:	83 ec 04             	sub    $0x4,%esp
 8295bc4:	8b 45 08             	mov    0x8(%ebp),%eax
 8295bc7:	8d 90 c0 02 00 00    	lea    0x2c0(%eax),%edx
 8295bcd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8295bd0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8295bd4:	89 04 24             	mov    %eax,(%esp)
 8295bd7:	e8 32 cc 01 00       	call   82b280e <_ZN9__gnu_cxx8hash_mapIiPN12advancealtar12StageControlENS_4hashIiEESt8equal_toIiESaIS3_EE3endEv>
 8295bdc:	83 ec 04             	sub    $0x4,%esp
 8295bdf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8295be2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295be6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8295be9:	89 04 24             	mov    %eax,(%esp)
 8295bec:	e8 43 cc 01 00       	call   82b2834 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiPN12advancealtar12StageControlEEiNS_4hashIiEESt10_Select1stIS6_ESt8equal_toIiESaIS5_EEeqERKSE_>
 8295bf1:	84 c0                	test   %al,%al
 8295bf3:	74 3b                	je     8295c30 <_ZN12CGameManager15getAdvanceAltarEv+0xec>
 8295bf5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8295bf8:	89 04 24             	mov    %eax,(%esp)
 8295bfb:	e8 ba ec e9 ff       	call   81348ba <_ZNK12advancealtar12StageControl8getIndexEv>
 8295c00:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8295c03:	8b 45 08             	mov    0x8(%ebp),%eax
 8295c06:	8d 90 c0 02 00 00    	lea    0x2c0(%eax),%edx
 8295c0c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8295c0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295c13:	89 14 24             	mov    %edx,(%esp)
 8295c16:	e8 2d cc 01 00       	call   82b2848 <_ZN9__gnu_cxx8hash_mapIiPN12advancealtar12StageControlENS_4hashIiEESt8equal_toIiESaIS3_EEixERKi>
 8295c1b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8295c1e:	89 10                	mov    %edx,(%eax)
 8295c20:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8295c23:	89 04 24             	mov    %eax,(%esp)
 8295c26:	e8 29 9e e9 ff       	call   812fa54 <_ZN12advancealtar12StageControl5resetEv>
 8295c2b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8295c2e:	eb 05                	jmp    8295c35 <_ZN12CGameManager15getAdvanceAltarEv+0xf1>
 8295c30:	b8 00 00 00 00       	mov    $0x0,%eax
 8295c35:	c9                   	leave
 8295c36:	c3                   	ret
 8295c37:	90                   	nop

```

```c
// CGameManager::getAdvanceAltar @ 0x8295b44

/* CGameManager::getAdvanceAltar() */

StageControl * __thiscall CGameManager::getAdvanceAltar(CGameManager *this)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  local_28 [8];
  undefined4 local_20;
  hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  local_1c [8];
  int local_14;
  StageControl *local_10;
  
  local_10 = (StageControl *)
             StaticPool<advancealtar::StageControl,600>::Acquire
                       ((StaticPool<advancealtar::StageControl,600> *)(this + 0x19c));
  if (local_10 == (StageControl *)0x0) {
    local_10 = (StageControl *)0x0;
  }
  else {
    iVar2 = StaticPool<advancealtar::StageControl,600>::GetIndex
                      ((StaticPool<advancealtar::StageControl,600> *)(this + 0x19c),local_10);
    advancealtar::StageControl::setIndex(local_10,iVar2);
    local_20 = advancealtar::StageControl::getIndex(local_10);
    __gnu_cxx::
    hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
    ::find((int *)local_28);
    __gnu_cxx::
    hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
    ::end(local_1c);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
            ::operator==(local_28,(_Hashtable_iterator *)local_1c);
    if (cVar1 == '\0') {
      local_10 = (StageControl *)0x0;
    }
    else {
      local_14 = advancealtar::StageControl::getIndex(local_10);
      puVar3 = (undefined4 *)
               __gnu_cxx::
               hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
               ::operator[]((hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
                             *)(this + 0x2c0),&local_14);
      *puVar3 = local_10;
      advancealtar::StageControl::reset(local_10);
    }
  }
  return local_10;
}

```

---

## getAdvanceAltarIndex

```asm
// === 08295ca8 CGameManager::getAdvanceAltarIndex  [0x08295ca8-0x8295ccd] ===
 8295ca8:	55                   	push   %ebp
 8295ca9:	89 e5                	mov    %esp,%ebp
 8295cab:	83 ec 28             	sub    $0x28,%esp
 8295cae:	8b 45 08             	mov    0x8(%ebp),%eax
 8295cb1:	8d 90 9c 01 00 00    	lea    0x19c(%eax),%edx
 8295cb7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8295cba:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295cbe:	89 14 24             	mov    %edx,(%esp)
 8295cc1:	e8 e0 c9 01 00       	call   82b26a6 <_ZN10StaticPoolIN12advancealtar12StageControlELi600EE8GetIndexEPS1_>
 8295cc6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8295cc9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8295ccc:	c9                   	leave
 8295ccd:	c3                   	ret

```

```c
// CGameManager::getAdvanceAltarIndex @ 0x8295ca8

/* CGameManager::getAdvanceAltarIndex(advancealtar::StageControl*) */

undefined4 __thiscall CGameManager::getAdvanceAltarIndex(CGameManager *this,StageControl *param_1)

{
  undefined4 uVar1;
  
  uVar1 = StaticPool<advancealtar::StageControl,600>::GetIndex
                    ((StaticPool<advancealtar::StageControl,600> *)(this + 0x19c),param_1);
  return uVar1;
}

```

---

## getAdvanceAltar_08295c38

```asm
// === 08295c38 CGameManager::getAdvanceAltar  [0x08295c38-0x8295ca7] ===
 8295c38:	55                   	push   %ebp
 8295c39:	89 e5                	mov    %esp,%ebp
 8295c3b:	83 ec 28             	sub    $0x28,%esp
 8295c3e:	8b 45 08             	mov    0x8(%ebp),%eax
 8295c41:	8d 88 c0 02 00 00    	lea    0x2c0(%eax),%ecx
 8295c47:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8295c4a:	8d 55 0c             	lea    0xc(%ebp),%edx
 8295c4d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8295c51:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8295c55:	89 04 24             	mov    %eax,(%esp)
 8295c58:	e8 85 cb 01 00       	call   82b27e2 <_ZN9__gnu_cxx8hash_mapIiPN12advancealtar12StageControlENS_4hashIiEESt8equal_toIiESaIS3_EE4findERKi>
 8295c5d:	83 ec 04             	sub    $0x4,%esp
 8295c60:	8b 45 08             	mov    0x8(%ebp),%eax
 8295c63:	8d 90 c0 02 00 00    	lea    0x2c0(%eax),%edx
 8295c69:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8295c6c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8295c70:	89 04 24             	mov    %eax,(%esp)
 8295c73:	e8 96 cb 01 00       	call   82b280e <_ZN9__gnu_cxx8hash_mapIiPN12advancealtar12StageControlENS_4hashIiEESt8equal_toIiESaIS3_EE3endEv>
 8295c78:	83 ec 04             	sub    $0x4,%esp
 8295c7b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8295c7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295c82:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8295c85:	89 04 24             	mov    %eax,(%esp)
 8295c88:	e8 a7 cb 01 00       	call   82b2834 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiPN12advancealtar12StageControlEEiNS_4hashIiEESt10_Select1stIS6_ESt8equal_toIiESaIS5_EEeqERKSE_>
 8295c8d:	84 c0                	test   %al,%al
 8295c8f:	74 07                	je     8295c98 <_ZN12CGameManager15getAdvanceAltarEi+0x60>
 8295c91:	b8 00 00 00 00       	mov    $0x0,%eax
 8295c96:	eb 0e                	jmp    8295ca6 <_ZN12CGameManager15getAdvanceAltarEi+0x6e>
 8295c98:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8295c9b:	89 04 24             	mov    %eax,(%esp)
 8295c9e:	e8 e3 cb 01 00       	call   82b2886 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiPN12advancealtar12StageControlEEiNS_4hashIiEESt10_Select1stIS6_ESt8equal_toIiESaIS5_EEptEv>
 8295ca3:	8b 40 04             	mov    0x4(%eax),%eax
 8295ca6:	c9                   	leave
 8295ca7:	c3                   	ret

```

```c
// CGameManager::getAdvanceAltar @ 0x8295c38

/* CGameManager::getAdvanceAltar(int) */

undefined4 CGameManager::getAdvanceAltar(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  local_1c [8];
  hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  local_14 [16];
  
  __gnu_cxx::
  hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  ::find((int *)local_1c);
  __gnu_cxx::
  hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  ::end(local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
          ::operator==(local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
            ::operator->(local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## getBlueMarble

```asm
// === 082a22b6 CGameManager::getBlueMarble  [0x082a22b6-0x82a239d] ===
 82a22b6:	55                   	push   %ebp
 82a22b7:	89 e5                	mov    %esp,%ebp
 82a22b9:	83 ec 38             	sub    $0x38,%esp
 82a22bc:	8b 45 08             	mov    0x8(%ebp),%eax
 82a22bf:	05 fc 01 00 00       	add    $0x1fc,%eax
 82a22c4:	89 04 24             	mov    %eax,(%esp)
 82a22c7:	e8 76 22 01 00       	call   82b4542 <_ZN10StaticPoolI10BlueMarbleLi300EE7AcquireEv>
 82a22cc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82a22cf:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82a22d3:	75 0a                	jne    82a22df <_ZN12CGameManager13getBlueMarbleEv+0x29>
 82a22d5:	b8 00 00 00 00       	mov    $0x0,%eax
 82a22da:	e9 bd 00 00 00       	jmp    82a239c <_ZN12CGameManager13getBlueMarbleEv+0xe6>
 82a22df:	8b 45 08             	mov    0x8(%ebp),%eax
 82a22e2:	8d 90 fc 01 00 00    	lea    0x1fc(%eax),%edx
 82a22e8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a22eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a22ef:	89 14 24             	mov    %edx,(%esp)
 82a22f2:	e8 67 23 01 00       	call   82b465e <_ZN10StaticPoolI10BlueMarbleLi300EE8GetIndexEPS0_>
 82a22f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a22fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a22fe:	89 04 24             	mov    %eax,(%esp)
 82a2301:	e8 20 69 e3 ff       	call   80d8c26 <_ZN10BlueMarble18setMemoryPoolIndexEi>
 82a2306:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a2309:	89 04 24             	mov    %eax,(%esp)
 82a230c:	e8 23 69 e3 ff       	call   80d8c34 <_ZNK10BlueMarble18getMemoryPoolIndexEv>
 82a2311:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82a2314:	8b 45 08             	mov    0x8(%ebp),%eax
 82a2317:	8d 88 e8 02 00 00    	lea    0x2e8(%eax),%ecx
 82a231d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82a2320:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 82a2323:	89 54 24 08          	mov    %edx,0x8(%esp)
 82a2327:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82a232b:	89 04 24             	mov    %eax,(%esp)
 82a232e:	e8 5b 24 01 00       	call   82b478e <_ZN9__gnu_cxx8hash_mapIiP10BlueMarbleNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 82a2333:	83 ec 04             	sub    $0x4,%esp
 82a2336:	8b 45 08             	mov    0x8(%ebp),%eax
 82a2339:	8d 90 e8 02 00 00    	lea    0x2e8(%eax),%edx
 82a233f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82a2342:	89 54 24 04          	mov    %edx,0x4(%esp)
 82a2346:	89 04 24             	mov    %eax,(%esp)
 82a2349:	e8 6c 24 01 00       	call   82b47ba <_ZN9__gnu_cxx8hash_mapIiP10BlueMarbleNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 82a234e:	83 ec 04             	sub    $0x4,%esp
 82a2351:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82a2354:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a2358:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82a235b:	89 04 24             	mov    %eax,(%esp)
 82a235e:	e8 7d 24 01 00       	call   82b47e0 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP10BlueMarbleEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEeqERKSD_>
 82a2363:	84 c0                	test   %al,%al
 82a2365:	74 30                	je     82a2397 <_ZN12CGameManager13getBlueMarbleEv+0xe1>
 82a2367:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a236a:	89 04 24             	mov    %eax,(%esp)
 82a236d:	e8 c2 68 e3 ff       	call   80d8c34 <_ZNK10BlueMarble18getMemoryPoolIndexEv>
 82a2372:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82a2375:	8b 45 08             	mov    0x8(%ebp),%eax
 82a2378:	8d 90 e8 02 00 00    	lea    0x2e8(%eax),%edx
 82a237e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82a2381:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a2385:	89 14 24             	mov    %edx,(%esp)
 82a2388:	e8 67 24 01 00       	call   82b47f4 <_ZN9__gnu_cxx8hash_mapIiP10BlueMarbleNS_4hashIiEESt8equal_toIiESaIS2_EEixERKi>
 82a238d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82a2390:	89 10                	mov    %edx,(%eax)
 82a2392:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a2395:	eb 05                	jmp    82a239c <_ZN12CGameManager13getBlueMarbleEv+0xe6>
 82a2397:	b8 00 00 00 00       	mov    $0x0,%eax
 82a239c:	c9                   	leave
 82a239d:	c3                   	ret

```

```c
// CGameManager::getBlueMarble @ 0x82a22b6

/* CGameManager::getBlueMarble() */

BlueMarble * __thiscall CGameManager::getBlueMarble(CGameManager *this)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
  local_28 [8];
  undefined4 local_20;
  hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
  local_1c [8];
  int local_14;
  BlueMarble *local_10;
  
  local_10 = (BlueMarble *)
             StaticPool<BlueMarble,300>::Acquire((StaticPool<BlueMarble,300> *)(this + 0x1fc));
  if (local_10 == (BlueMarble *)0x0) {
    local_10 = (BlueMarble *)0x0;
  }
  else {
    iVar2 = StaticPool<BlueMarble,300>::GetIndex
                      ((StaticPool<BlueMarble,300> *)(this + 0x1fc),local_10);
    BlueMarble::setMemoryPoolIndex(local_10,iVar2);
    local_20 = BlueMarble::getMemoryPoolIndex(local_10);
    __gnu_cxx::
    hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>::
    find((int *)local_28);
    __gnu_cxx::
    hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>::
    end(local_1c);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
            ::operator==(local_28,(_Hashtable_iterator *)local_1c);
    if (cVar1 == '\0') {
      local_10 = (BlueMarble *)0x0;
    }
    else {
      local_14 = BlueMarble::getMemoryPoolIndex(local_10);
      puVar3 = (undefined4 *)
               __gnu_cxx::
               hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
               ::operator[]((hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
                             *)(this + 0x2e8),&local_14);
      *puVar3 = local_10;
    }
  }
  return local_10;
}

```

---

## getBlueMarbleIdx

```asm
// === 082a240e CGameManager::getBlueMarbleIdx  [0x082a240e-0x82a2433] ===
 82a240e:	55                   	push   %ebp
 82a240f:	89 e5                	mov    %esp,%ebp
 82a2411:	83 ec 28             	sub    $0x28,%esp
 82a2414:	8b 45 08             	mov    0x8(%ebp),%eax
 82a2417:	8d 90 fc 01 00 00    	lea    0x1fc(%eax),%edx
 82a241d:	8b 45 0c             	mov    0xc(%ebp),%eax
 82a2420:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a2424:	89 14 24             	mov    %edx,(%esp)
 82a2427:	e8 32 22 01 00       	call   82b465e <_ZN10StaticPoolI10BlueMarbleLi300EE8GetIndexEPS0_>
 82a242c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82a242f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82a2432:	c9                   	leave
 82a2433:	c3                   	ret

```

```c
// CGameManager::getBlueMarbleIdx @ 0x82a240e

/* CGameManager::getBlueMarbleIdx(BlueMarble*) */

undefined4 __thiscall CGameManager::getBlueMarbleIdx(CGameManager *this,BlueMarble *param_1)

{
  undefined4 uVar1;
  
  uVar1 = StaticPool<BlueMarble,300>::GetIndex((StaticPool<BlueMarble,300> *)(this + 0x1fc),param_1)
  ;
  return uVar1;
}

```

---

## getBlueMarble_082a239e

```asm
// === 082a239e CGameManager::getBlueMarble  [0x082a239e-0x82a240d] ===
 82a239e:	55                   	push   %ebp
 82a239f:	89 e5                	mov    %esp,%ebp
 82a23a1:	83 ec 28             	sub    $0x28,%esp
 82a23a4:	8b 45 08             	mov    0x8(%ebp),%eax
 82a23a7:	8d 88 e8 02 00 00    	lea    0x2e8(%eax),%ecx
 82a23ad:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82a23b0:	8d 55 0c             	lea    0xc(%ebp),%edx
 82a23b3:	89 54 24 08          	mov    %edx,0x8(%esp)
 82a23b7:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82a23bb:	89 04 24             	mov    %eax,(%esp)
 82a23be:	e8 cb 23 01 00       	call   82b478e <_ZN9__gnu_cxx8hash_mapIiP10BlueMarbleNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 82a23c3:	83 ec 04             	sub    $0x4,%esp
 82a23c6:	8b 45 08             	mov    0x8(%ebp),%eax
 82a23c9:	8d 90 e8 02 00 00    	lea    0x2e8(%eax),%edx
 82a23cf:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82a23d2:	89 54 24 04          	mov    %edx,0x4(%esp)
 82a23d6:	89 04 24             	mov    %eax,(%esp)
 82a23d9:	e8 dc 23 01 00       	call   82b47ba <_ZN9__gnu_cxx8hash_mapIiP10BlueMarbleNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 82a23de:	83 ec 04             	sub    $0x4,%esp
 82a23e1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82a23e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a23e8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82a23eb:	89 04 24             	mov    %eax,(%esp)
 82a23ee:	e8 ed 23 01 00       	call   82b47e0 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP10BlueMarbleEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEeqERKSD_>
 82a23f3:	84 c0                	test   %al,%al
 82a23f5:	74 07                	je     82a23fe <_ZN12CGameManager13getBlueMarbleEi+0x60>
 82a23f7:	b8 00 00 00 00       	mov    $0x0,%eax
 82a23fc:	eb 0e                	jmp    82a240c <_ZN12CGameManager13getBlueMarbleEi+0x6e>
 82a23fe:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82a2401:	89 04 24             	mov    %eax,(%esp)
 82a2404:	e8 29 24 01 00       	call   82b4832 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP10BlueMarbleEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 82a2409:	8b 40 04             	mov    0x4(%eax),%eax
 82a240c:	c9                   	leave
 82a240d:	c3                   	ret

```

```c
// CGameManager::getBlueMarble @ 0x82a239e

/* CGameManager::getBlueMarble(int) */

undefined4 CGameManager::getBlueMarble(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
  local_1c [8];
  hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
  local_14 [16];
  
  __gnu_cxx::
  hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>::
  find((int *)local_1c);
  __gnu_cxx::
  hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>::end
            (local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
          ::operator==(local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
            ::operator->(local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## getBossTower

```asm
// === 08295906 CGameManager::getBossTower  [0x08295906-0x82959f9] ===
 8295906:	55                   	push   %ebp
 8295907:	89 e5                	mov    %esp,%ebp
 8295909:	83 ec 38             	sub    $0x38,%esp
 829590c:	8b 45 08             	mov    0x8(%ebp),%eax
 829590f:	05 6c 01 00 00       	add    $0x16c,%eax
 8295914:	89 04 24             	mov    %eax,(%esp)
 8295917:	e8 b4 c7 01 00       	call   82b20d0 <_ZN10StaticPoolIN8WongWork10CBossTowerELi600EE7AcquireEv>
 829591c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 829591f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8295923:	75 0a                	jne    829592f <_ZN12CGameManager12getBossTowerEv+0x29>
 8295925:	b8 00 00 00 00       	mov    $0x0,%eax
 829592a:	e9 c8 00 00 00       	jmp    82959f7 <_ZN12CGameManager12getBossTowerEv+0xf1>
 829592f:	8b 45 08             	mov    0x8(%ebp),%eax
 8295932:	8d 90 6c 01 00 00    	lea    0x16c(%eax),%edx
 8295938:	8b 45 f4             	mov    -0xc(%ebp),%eax
 829593b:	89 44 24 04          	mov    %eax,0x4(%esp)
 829593f:	89 14 24             	mov    %edx,(%esp)
 8295942:	e8 b7 c8 01 00       	call   82b21fe <_ZN10StaticPoolIN8WongWork10CBossTowerELi600EE8GetIndexEPS1_>
 8295947:	89 44 24 04          	mov    %eax,0x4(%esp)
 829594b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 829594e:	89 04 24             	mov    %eax,(%esp)
 8295951:	e8 c0 4d 01 00       	call   82aa716 <_ZN8WongWork10CBossTower6setIdxEi>
 8295956:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8295959:	89 04 24             	mov    %eax,(%esp)
 829595c:	e8 c7 4d 01 00       	call   82aa728 <_ZN8WongWork10CBossTower6getIdxEv>
 8295961:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8295964:	8b 45 08             	mov    0x8(%ebp),%eax
 8295967:	8d 88 ac 02 00 00    	lea    0x2ac(%eax),%ecx
 829596d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8295970:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8295973:	89 54 24 08          	mov    %edx,0x8(%esp)
 8295977:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 829597b:	89 04 24             	mov    %eax,(%esp)
 829597e:	e8 b7 c9 01 00       	call   82b233a <_ZN9__gnu_cxx8hash_mapIiPN8WongWork10CBossTowerENS_4hashIiEESt8equal_toIiESaIS3_EE4findERKi>
 8295983:	83 ec 04             	sub    $0x4,%esp
 8295986:	8b 45 08             	mov    0x8(%ebp),%eax
 8295989:	8d 90 ac 02 00 00    	lea    0x2ac(%eax),%edx
 829598f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8295992:	89 54 24 04          	mov    %edx,0x4(%esp)
 8295996:	89 04 24             	mov    %eax,(%esp)
 8295999:	e8 c8 c9 01 00       	call   82b2366 <_ZN9__gnu_cxx8hash_mapIiPN8WongWork10CBossTowerENS_4hashIiEESt8equal_toIiESaIS3_EE3endEv>
 829599e:	83 ec 04             	sub    $0x4,%esp
 82959a1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82959a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82959a8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82959ab:	89 04 24             	mov    %eax,(%esp)
 82959ae:	e8 d9 c9 01 00       	call   82b238c <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiPN8WongWork10CBossTowerEEiNS_4hashIiEESt10_Select1stIS6_ESt8equal_toIiESaIS5_EEeqERKSE_>
 82959b3:	84 c0                	test   %al,%al
 82959b5:	74 3b                	je     82959f2 <_ZN12CGameManager12getBossTowerEv+0xec>
 82959b7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82959ba:	89 04 24             	mov    %eax,(%esp)
 82959bd:	e8 66 4d 01 00       	call   82aa728 <_ZN8WongWork10CBossTower6getIdxEv>
 82959c2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82959c5:	8b 45 08             	mov    0x8(%ebp),%eax
 82959c8:	8d 90 ac 02 00 00    	lea    0x2ac(%eax),%edx
 82959ce:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82959d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82959d5:	89 14 24             	mov    %edx,(%esp)
 82959d8:	e8 c3 c9 01 00       	call   82b23a0 <_ZN9__gnu_cxx8hash_mapIiPN8WongWork10CBossTowerENS_4hashIiEESt8equal_toIiESaIS3_EEixERKi>
 82959dd:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82959e0:	89 10                	mov    %edx,(%eax)
 82959e2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82959e5:	89 04 24             	mov    %eax,(%esp)
 82959e8:	e8 b5 64 eb ff       	call   814bea2 <_ZN8WongWork10CBossStage5resetEv>
 82959ed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82959f0:	eb 05                	jmp    82959f7 <_ZN12CGameManager12getBossTowerEv+0xf1>
 82959f2:	b8 00 00 00 00       	mov    $0x0,%eax
 82959f7:	c9                   	leave
 82959f8:	c3                   	ret
 82959f9:	90                   	nop

```

```c
// CGameManager::getBossTower @ 0x8295906

/* CGameManager::getBossTower() */

CBossTower * __thiscall CGameManager::getBossTower(CGameManager *this)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  _Hashtable_iterator<std::pair<int_const,WongWork::CBossTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CBossTower*>>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
  local_28 [8];
  undefined4 local_20;
  hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
  local_1c [8];
  int local_14;
  CBossTower *local_10;
  
  local_10 = (CBossTower *)
             StaticPool<WongWork::CBossTower,600>::Acquire
                       ((StaticPool<WongWork::CBossTower,600> *)(this + 0x16c));
  if (local_10 == (CBossTower *)0x0) {
    local_10 = (CBossTower *)0x0;
  }
  else {
    iVar2 = StaticPool<WongWork::CBossTower,600>::GetIndex
                      ((StaticPool<WongWork::CBossTower,600> *)(this + 0x16c),local_10);
    WongWork::CBossTower::setIdx(local_10,iVar2);
    local_20 = WongWork::CBossTower::getIdx(local_10);
    __gnu_cxx::
    hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
    ::find((int *)local_28);
    __gnu_cxx::
    hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
    ::end(local_1c);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WongWork::CBossTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CBossTower*>>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
            ::operator==(local_28,(_Hashtable_iterator *)local_1c);
    if (cVar1 == '\0') {
      local_10 = (CBossTower *)0x0;
    }
    else {
      local_14 = WongWork::CBossTower::getIdx(local_10);
      puVar3 = (undefined4 *)
               __gnu_cxx::
               hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
               ::operator[]((hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
                             *)(this + 0x2ac),&local_14);
      *puVar3 = local_10;
      WongWork::CBossStage::reset((CBossStage *)local_10);
    }
  }
  return local_10;
}

```

---

## getBossTowerIdx

```asm
// === 08295a6a CGameManager::getBossTowerIdx  [0x08295a6a-0x8295a8f] ===
 8295a6a:	55                   	push   %ebp
 8295a6b:	89 e5                	mov    %esp,%ebp
 8295a6d:	83 ec 28             	sub    $0x28,%esp
 8295a70:	8b 45 08             	mov    0x8(%ebp),%eax
 8295a73:	8d 90 6c 01 00 00    	lea    0x16c(%eax),%edx
 8295a79:	8b 45 0c             	mov    0xc(%ebp),%eax
 8295a7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295a80:	89 14 24             	mov    %edx,(%esp)
 8295a83:	e8 76 c7 01 00       	call   82b21fe <_ZN10StaticPoolIN8WongWork10CBossTowerELi600EE8GetIndexEPS1_>
 8295a88:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8295a8b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8295a8e:	c9                   	leave
 8295a8f:	c3                   	ret

```

```c
// CGameManager::getBossTowerIdx @ 0x8295a6a

/* CGameManager::getBossTowerIdx(WongWork::CBossTower*) */

undefined4 __thiscall CGameManager::getBossTowerIdx(CGameManager *this,CBossTower *param_1)

{
  undefined4 uVar1;
  
  uVar1 = StaticPool<WongWork::CBossTower,600>::GetIndex
                    ((StaticPool<WongWork::CBossTower,600> *)(this + 0x16c),param_1);
  return uVar1;
}

```

---

## getBossTower_082959fa

```asm
// === 082959fa CGameManager::getBossTower  [0x082959fa-0x8295a69] ===
 82959fa:	55                   	push   %ebp
 82959fb:	89 e5                	mov    %esp,%ebp
 82959fd:	83 ec 28             	sub    $0x28,%esp
 8295a00:	8b 45 08             	mov    0x8(%ebp),%eax
 8295a03:	8d 88 ac 02 00 00    	lea    0x2ac(%eax),%ecx
 8295a09:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8295a0c:	8d 55 0c             	lea    0xc(%ebp),%edx
 8295a0f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8295a13:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8295a17:	89 04 24             	mov    %eax,(%esp)
 8295a1a:	e8 1b c9 01 00       	call   82b233a <_ZN9__gnu_cxx8hash_mapIiPN8WongWork10CBossTowerENS_4hashIiEESt8equal_toIiESaIS3_EE4findERKi>
 8295a1f:	83 ec 04             	sub    $0x4,%esp
 8295a22:	8b 45 08             	mov    0x8(%ebp),%eax
 8295a25:	8d 90 ac 02 00 00    	lea    0x2ac(%eax),%edx
 8295a2b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8295a2e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8295a32:	89 04 24             	mov    %eax,(%esp)
 8295a35:	e8 2c c9 01 00       	call   82b2366 <_ZN9__gnu_cxx8hash_mapIiPN8WongWork10CBossTowerENS_4hashIiEESt8equal_toIiESaIS3_EE3endEv>
 8295a3a:	83 ec 04             	sub    $0x4,%esp
 8295a3d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8295a40:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295a44:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8295a47:	89 04 24             	mov    %eax,(%esp)
 8295a4a:	e8 3d c9 01 00       	call   82b238c <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiPN8WongWork10CBossTowerEEiNS_4hashIiEESt10_Select1stIS6_ESt8equal_toIiESaIS5_EEeqERKSE_>
 8295a4f:	84 c0                	test   %al,%al
 8295a51:	74 07                	je     8295a5a <_ZN12CGameManager12getBossTowerEi+0x60>
 8295a53:	b8 00 00 00 00       	mov    $0x0,%eax
 8295a58:	eb 0e                	jmp    8295a68 <_ZN12CGameManager12getBossTowerEi+0x6e>
 8295a5a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8295a5d:	89 04 24             	mov    %eax,(%esp)
 8295a60:	e8 79 c9 01 00       	call   82b23de <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiPN8WongWork10CBossTowerEEiNS_4hashIiEESt10_Select1stIS6_ESt8equal_toIiESaIS5_EEptEv>
 8295a65:	8b 40 04             	mov    0x4(%eax),%eax
 8295a68:	c9                   	leave
 8295a69:	c3                   	ret

```

```c
// CGameManager::getBossTower @ 0x82959fa

/* CGameManager::getBossTower(int) */

undefined4 CGameManager::getBossTower(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Hashtable_iterator<std::pair<int_const,WongWork::CBossTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CBossTower*>>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
  local_1c [8];
  hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
  local_14 [16];
  
  __gnu_cxx::
  hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
  ::find((int *)local_1c);
  __gnu_cxx::
  hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
  ::end(local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,WongWork::CBossTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CBossTower*>>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
          ::operator==(local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WongWork::CBossTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CBossTower*>>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
            ::operator->(local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## getDeathTower

```asm
// === 082956c8 CGameManager::getDeathTower  [0x082956c8-0x82957bb] ===
 82956c8:	55                   	push   %ebp
 82956c9:	89 e5                	mov    %esp,%ebp
 82956cb:	83 ec 38             	sub    $0x38,%esp
 82956ce:	8b 45 08             	mov    0x8(%ebp),%eax
 82956d1:	05 3c 01 00 00       	add    $0x13c,%eax
 82956d6:	89 04 24             	mov    %eax,(%esp)
 82956d9:	e8 4a c5 01 00       	call   82b1c28 <_ZN10StaticPoolIN8WongWork11CDeathTowerELi600EE7AcquireEv>
 82956de:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82956e1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82956e5:	75 0a                	jne    82956f1 <_ZN12CGameManager13getDeathTowerEv+0x29>
 82956e7:	b8 00 00 00 00       	mov    $0x0,%eax
 82956ec:	e9 c8 00 00 00       	jmp    82957b9 <_ZN12CGameManager13getDeathTowerEv+0xf1>
 82956f1:	8b 45 08             	mov    0x8(%ebp),%eax
 82956f4:	8d 90 3c 01 00 00    	lea    0x13c(%eax),%edx
 82956fa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82956fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295701:	89 14 24             	mov    %edx,(%esp)
 8295704:	e8 4d c6 01 00       	call   82b1d56 <_ZN10StaticPoolIN8WongWork11CDeathTowerELi600EE8GetIndexEPS1_>
 8295709:	89 44 24 04          	mov    %eax,0x4(%esp)
 829570d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8295710:	89 04 24             	mov    %eax,(%esp)
 8295713:	e8 60 1e 01 00       	call   82a7578 <_ZN8WongWork11CDeathTower6setIdxEi>
 8295718:	8b 45 f4             	mov    -0xc(%ebp),%eax
 829571b:	89 04 24             	mov    %eax,(%esp)
 829571e:	e8 63 1e 01 00       	call   82a7586 <_ZN8WongWork11CDeathTower6getIdxEv>
 8295723:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8295726:	8b 45 08             	mov    0x8(%ebp),%eax
 8295729:	8d 88 98 02 00 00    	lea    0x298(%eax),%ecx
 829572f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8295732:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8295735:	89 54 24 08          	mov    %edx,0x8(%esp)
 8295739:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 829573d:	89 04 24             	mov    %eax,(%esp)
 8295740:	e8 4d c7 01 00       	call   82b1e92 <_ZN9__gnu_cxx8hash_mapIiPN8WongWork11CDeathTowerENS_4hashIiEESt8equal_toIiESaIS3_EE4findERKi>
 8295745:	83 ec 04             	sub    $0x4,%esp
 8295748:	8b 45 08             	mov    0x8(%ebp),%eax
 829574b:	8d 90 98 02 00 00    	lea    0x298(%eax),%edx
 8295751:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8295754:	89 54 24 04          	mov    %edx,0x4(%esp)
 8295758:	89 04 24             	mov    %eax,(%esp)
 829575b:	e8 5e c7 01 00       	call   82b1ebe <_ZN9__gnu_cxx8hash_mapIiPN8WongWork11CDeathTowerENS_4hashIiEESt8equal_toIiESaIS3_EE3endEv>
 8295760:	83 ec 04             	sub    $0x4,%esp
 8295763:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8295766:	89 44 24 04          	mov    %eax,0x4(%esp)
 829576a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 829576d:	89 04 24             	mov    %eax,(%esp)
 8295770:	e8 6f c7 01 00       	call   82b1ee4 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiPN8WongWork11CDeathTowerEEiNS_4hashIiEESt10_Select1stIS6_ESt8equal_toIiESaIS5_EEeqERKSE_>
 8295775:	84 c0                	test   %al,%al
 8295777:	74 3b                	je     82957b4 <_ZN12CGameManager13getDeathTowerEv+0xec>
 8295779:	8b 45 f4             	mov    -0xc(%ebp),%eax
 829577c:	89 04 24             	mov    %eax,(%esp)
 829577f:	e8 02 1e 01 00       	call   82a7586 <_ZN8WongWork11CDeathTower6getIdxEv>
 8295784:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8295787:	8b 45 08             	mov    0x8(%ebp),%eax
 829578a:	8d 90 98 02 00 00    	lea    0x298(%eax),%edx
 8295790:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8295793:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295797:	89 14 24             	mov    %edx,(%esp)
 829579a:	e8 59 c7 01 00       	call   82b1ef8 <_ZN9__gnu_cxx8hash_mapIiPN8WongWork11CDeathTowerENS_4hashIiEESt8equal_toIiESaIS3_EEixERKi>
 829579f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82957a2:	89 10                	mov    %edx,(%eax)
 82957a4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82957a7:	89 04 24             	mov    %eax,(%esp)
 82957aa:	e8 e3 1d 01 00       	call   82a7592 <_ZN8WongWork11CDeathTower5resetEv>
 82957af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82957b2:	eb 05                	jmp    82957b9 <_ZN12CGameManager13getDeathTowerEv+0xf1>
 82957b4:	b8 00 00 00 00       	mov    $0x0,%eax
 82957b9:	c9                   	leave
 82957ba:	c3                   	ret
 82957bb:	90                   	nop

```

```c
// CGameManager::getDeathTower @ 0x82956c8

/* CGameManager::getDeathTower() */

CDeathTower * __thiscall CGameManager::getDeathTower(CGameManager *this)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  _Hashtable_iterator<std::pair<int_const,WongWork::CDeathTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CDeathTower*>>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
  local_28 [8];
  undefined4 local_20;
  hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
  local_1c [8];
  int local_14;
  CDeathTower *local_10;
  
  local_10 = (CDeathTower *)
             StaticPool<WongWork::CDeathTower,600>::Acquire
                       ((StaticPool<WongWork::CDeathTower,600> *)(this + 0x13c));
  if (local_10 == (CDeathTower *)0x0) {
    local_10 = (CDeathTower *)0x0;
  }
  else {
    iVar2 = StaticPool<WongWork::CDeathTower,600>::GetIndex
                      ((StaticPool<WongWork::CDeathTower,600> *)(this + 0x13c),local_10);
    WongWork::CDeathTower::setIdx(local_10,iVar2);
    local_20 = WongWork::CDeathTower::getIdx(local_10);
    __gnu_cxx::
    hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
    ::find((int *)local_28);
    __gnu_cxx::
    hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
    ::end(local_1c);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WongWork::CDeathTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CDeathTower*>>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
            ::operator==(local_28,(_Hashtable_iterator *)local_1c);
    if (cVar1 == '\0') {
      local_10 = (CDeathTower *)0x0;
    }
    else {
      local_14 = WongWork::CDeathTower::getIdx(local_10);
      puVar3 = (undefined4 *)
               __gnu_cxx::
               hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
               ::operator[]((hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
                             *)(this + 0x298),&local_14);
      *puVar3 = local_10;
      WongWork::CDeathTower::reset(local_10);
    }
  }
  return local_10;
}

```

---

## getDeathTowerIdx

```asm
// === 0829582c CGameManager::getDeathTowerIdx  [0x0829582c-0x8295851] ===
 829582c:	55                   	push   %ebp
 829582d:	89 e5                	mov    %esp,%ebp
 829582f:	83 ec 28             	sub    $0x28,%esp
 8295832:	8b 45 08             	mov    0x8(%ebp),%eax
 8295835:	8d 90 3c 01 00 00    	lea    0x13c(%eax),%edx
 829583b:	8b 45 0c             	mov    0xc(%ebp),%eax
 829583e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295842:	89 14 24             	mov    %edx,(%esp)
 8295845:	e8 0c c5 01 00       	call   82b1d56 <_ZN10StaticPoolIN8WongWork11CDeathTowerELi600EE8GetIndexEPS1_>
 829584a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 829584d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8295850:	c9                   	leave
 8295851:	c3                   	ret

```

```c
// CGameManager::getDeathTowerIdx @ 0x829582c

/* CGameManager::getDeathTowerIdx(WongWork::CDeathTower*) */

undefined4 __thiscall CGameManager::getDeathTowerIdx(CGameManager *this,CDeathTower *param_1)

{
  undefined4 uVar1;
  
  uVar1 = StaticPool<WongWork::CDeathTower,600>::GetIndex
                    ((StaticPool<WongWork::CDeathTower,600> *)(this + 0x13c),param_1);
  return uVar1;
}

```

---

## getDeathTower_082957bc

```asm
// === 082957bc CGameManager::getDeathTower  [0x082957bc-0x829582b] ===
 82957bc:	55                   	push   %ebp
 82957bd:	89 e5                	mov    %esp,%ebp
 82957bf:	83 ec 28             	sub    $0x28,%esp
 82957c2:	8b 45 08             	mov    0x8(%ebp),%eax
 82957c5:	8d 88 98 02 00 00    	lea    0x298(%eax),%ecx
 82957cb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82957ce:	8d 55 0c             	lea    0xc(%ebp),%edx
 82957d1:	89 54 24 08          	mov    %edx,0x8(%esp)
 82957d5:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82957d9:	89 04 24             	mov    %eax,(%esp)
 82957dc:	e8 b1 c6 01 00       	call   82b1e92 <_ZN9__gnu_cxx8hash_mapIiPN8WongWork11CDeathTowerENS_4hashIiEESt8equal_toIiESaIS3_EE4findERKi>
 82957e1:	83 ec 04             	sub    $0x4,%esp
 82957e4:	8b 45 08             	mov    0x8(%ebp),%eax
 82957e7:	8d 90 98 02 00 00    	lea    0x298(%eax),%edx
 82957ed:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82957f0:	89 54 24 04          	mov    %edx,0x4(%esp)
 82957f4:	89 04 24             	mov    %eax,(%esp)
 82957f7:	e8 c2 c6 01 00       	call   82b1ebe <_ZN9__gnu_cxx8hash_mapIiPN8WongWork11CDeathTowerENS_4hashIiEESt8equal_toIiESaIS3_EE3endEv>
 82957fc:	83 ec 04             	sub    $0x4,%esp
 82957ff:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8295802:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295806:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8295809:	89 04 24             	mov    %eax,(%esp)
 829580c:	e8 d3 c6 01 00       	call   82b1ee4 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiPN8WongWork11CDeathTowerEEiNS_4hashIiEESt10_Select1stIS6_ESt8equal_toIiESaIS5_EEeqERKSE_>
 8295811:	84 c0                	test   %al,%al
 8295813:	74 07                	je     829581c <_ZN12CGameManager13getDeathTowerEi+0x60>
 8295815:	b8 00 00 00 00       	mov    $0x0,%eax
 829581a:	eb 0e                	jmp    829582a <_ZN12CGameManager13getDeathTowerEi+0x6e>
 829581c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 829581f:	89 04 24             	mov    %eax,(%esp)
 8295822:	e8 0f c7 01 00       	call   82b1f36 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiPN8WongWork11CDeathTowerEEiNS_4hashIiEESt10_Select1stIS6_ESt8equal_toIiESaIS5_EEptEv>
 8295827:	8b 40 04             	mov    0x4(%eax),%eax
 829582a:	c9                   	leave
 829582b:	c3                   	ret

```

```c
// CGameManager::getDeathTower @ 0x82957bc

/* CGameManager::getDeathTower(int) */

undefined4 CGameManager::getDeathTower(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Hashtable_iterator<std::pair<int_const,WongWork::CDeathTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CDeathTower*>>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
  local_1c [8];
  hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
  local_14 [16];
  
  __gnu_cxx::
  hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
  ::find((int *)local_1c);
  __gnu_cxx::
  hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
  ::end(local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,WongWork::CDeathTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CDeathTower*>>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
          ::operator==(local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WongWork::CDeathTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CDeathTower*>>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
            ::operator->(local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## getNextUID

```asm
// === 0829424c CGameManager::getNextUID  [0x0829424c-0x8294295] ===
 829424c:	55                   	push   %ebp
 829424d:	89 e5                	mov    %esp,%ebp
 829424f:	83 ec 10             	sub    $0x10,%esp
 8294252:	8b 45 08             	mov    0x8(%ebp),%eax
 8294255:	0f b7 40 18          	movzwl 0x18(%eax),%eax
 8294259:	8d 50 01             	lea    0x1(%eax),%edx
 829425c:	8b 45 08             	mov    0x8(%ebp),%eax
 829425f:	66 89 50 18          	mov    %dx,0x18(%eax)
 8294263:	8b 45 08             	mov    0x8(%ebp),%eax
 8294266:	0f b7 40 18          	movzwl 0x18(%eax),%eax
 829426a:	66 89 45 fe          	mov    %ax,-0x2(%ebp)
 829426e:	8b 45 08             	mov    0x8(%ebp),%eax
 8294271:	0f b7 40 18          	movzwl 0x18(%eax),%eax
 8294275:	66 3d ff 7f          	cmp    $0x7fff,%ax
 8294279:	74 0c                	je     8294287 <_ZN12CGameManager10getNextUIDEv+0x3b>
 829427b:	8b 45 08             	mov    0x8(%ebp),%eax
 829427e:	0f b7 40 18          	movzwl 0x18(%eax),%eax
 8294282:	66 85 c0             	test   %ax,%ax
 8294285:	79 09                	jns    8294290 <_ZN12CGameManager10getNextUIDEv+0x44>
 8294287:	8b 45 08             	mov    0x8(%ebp),%eax
 829428a:	66 c7 40 18 00 00    	movw   $0x0,0x18(%eax)
 8294290:	0f b7 45 fe          	movzwl -0x2(%ebp),%eax
 8294294:	c9                   	leave
 8294295:	c3                   	ret

```

```c
// CGameManager::getNextUID @ 0x829424c

/* CGameManager::getNextUID() */

undefined2 __thiscall CGameManager::getNextUID(CGameManager *this)

{
  undefined2 uVar1;
  
  *(short *)(this + 0x18) = *(short *)(this + 0x18) + 1;
  uVar1 = *(undefined2 *)(this + 0x18);
  if ((*(short *)(this + 0x18) == 0x7fff) || (*(short *)(this + 0x18) < 0)) {
    *(undefined2 *)(this + 0x18) = 0;
  }
  return uVar1;
}

```

---

## getUser

```asm
// === 082947a4 CGameManager::getUser  [0x082947a4-0x82948a1] ===
 82947a4:	55                   	push   %ebp
 82947a5:	89 e5                	mov    %esp,%ebp
 82947a7:	56                   	push   %esi
 82947a8:	53                   	push   %ebx
 82947a9:	83 ec 30             	sub    $0x30,%esp
 82947ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 82947af:	c1 f8 10             	sar    $0x10,%eax
 82947b2:	66 89 45 ec          	mov    %ax,-0x14(%ebp)
 82947b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82947b9:	66 89 45 ee          	mov    %ax,-0x12(%ebp)
 82947bd:	8b 45 08             	mov    0x8(%ebp),%eax
 82947c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82947c4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82947c7:	89 04 24             	mov    %eax,(%esp)
 82947ca:	e8 7d 0c e7 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 82947cf:	0f bf 45 ec          	movswl -0x14(%ebp),%eax
 82947d3:	8b 55 08             	mov    0x8(%ebp),%edx
 82947d6:	83 c2 4c             	add    $0x4c,%edx
 82947d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82947dd:	89 14 24             	mov    %edx,(%esp)
 82947e0:	e8 27 bd 01 00       	call   82b050c <_ZN10StaticPoolI5CUserLi600EE3GetEi>
 82947e5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82947e8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82947eb:	89 04 24             	mov    %eax,(%esp)
 82947ee:	e8 75 0c e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 82947f3:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82947f7:	74 1d                	je     8294816 <_ZN12CGameManager7getUserEii+0x72>
 82947f9:	eb 60                	jmp    829485b <_ZN12CGameManager7getUserEii+0xb7>
 82947fb:	89 d3                	mov    %edx,%ebx
 82947fd:	89 c6                	mov    %eax,%esi
 82947ff:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8294802:	89 04 24             	mov    %eax,(%esp)
 8294805:	e8 5e 0c e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 829480a:	89 f0                	mov    %esi,%eax
 829480c:	89 da                	mov    %ebx,%edx
 829480e:	89 04 24             	mov    %eax,(%esp)
 8294811:	e8 3a ef 84 00       	call   8ae3750 <_Unwind_Resume>
 8294816:	0f bf 5d ec          	movswl -0x14(%ebp),%ebx
 829481a:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8294821:	00 
 8294822:	c7 44 24 08 5c 09 00 	movl   $0x95c,0x8(%esp)
 8294829:	00 
 829482a:	c7 44 24 04 60 b7 c1 	movl   $0x8c1b760,0x4(%esp)
 8294831:	08 
 8294832:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8294835:	89 04 24             	mov    %eax,(%esp)
 8294838:	e8 db ae 2b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 829483d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8294841:	c7 44 24 04 c8 6a c1 	movl   $0x8c16ac8,0x4(%esp)
 8294848:	08 
 8294849:	8d 45 dc             	lea    -0x24(%ebp),%eax
 829484c:	89 04 24             	mov    %eax,(%esp)
 829484f:	e8 34 af 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8294854:	b8 00 00 00 00       	mov    $0x0,%eax
 8294859:	eb 3f                	jmp    829489a <_ZN12CGameManager7getUserEii+0xf6>
 829485b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 829485e:	89 04 24             	mov    %eax,(%esp)
 8294861:	e8 d6 1f 01 00       	call   82a683c <_ZNK5CUser10GetIncreIDEv>
 8294866:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 829486a:	66 83 7d f6 00       	cmpw   $0x0,-0xa(%ebp)
 829486f:	75 07                	jne    8294878 <_ZN12CGameManager7getUserEii+0xd4>
 8294871:	b8 00 00 00 00       	mov    $0x0,%eax
 8294876:	eb 22                	jmp    829489a <_ZN12CGameManager7getUserEii+0xf6>
 8294878:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
 829487c:	66 3b 45 ee          	cmp    -0x12(%ebp),%ax
 8294880:	74 15                	je     8294897 <_ZN12CGameManager7getUserEii+0xf3>
 8294882:	66 83 7d f6 00       	cmpw   $0x0,-0xa(%ebp)
 8294887:	74 0e                	je     8294897 <_ZN12CGameManager7getUserEii+0xf3>
 8294889:	66 83 7d ee 00       	cmpw   $0x0,-0x12(%ebp)
 829488e:	74 07                	je     8294897 <_ZN12CGameManager7getUserEii+0xf3>
 8294890:	b8 00 00 00 00       	mov    $0x0,%eax
 8294895:	eb 03                	jmp    829489a <_ZN12CGameManager7getUserEii+0xf6>
 8294897:	8b 45 f0             	mov    -0x10(%ebp),%eax
 829489a:	83 c4 30             	add    $0x30,%esp
 829489d:	5b                   	pop    %ebx
 829489e:	5e                   	pop    %esi
 829489f:	5d                   	pop    %ebp
 82948a0:	c3                   	ret
 82948a1:	90                   	nop

```

```c
// CGameManager::getUser @ 0x82947a4

/* CGameManager::getUser(int, int) */

CUser * CGameManager::getUser(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  Guard<Mutex> local_2c [4];
  cMyTrace local_28 [16];
  short local_18;
  short local_16;
  CUser *local_14;
  
  local_18 = (short)((uint)param_2 >> 0x10);
  local_16 = (short)param_2;
  Guard<Mutex>::Guard(local_2c,(Mutex *)param_1);
                    /* try { // try from 082947e0 to 082947e4 has its CatchHandler @ 082947fb */
  local_14 = (CUser *)StaticPool<CUser,600>::Get
                                ((StaticPool<CUser,600> *)(param_1 + 0x4c),(int)local_18);
  Guard<Mutex>::~Guard(local_2c);
  if (local_14 == (CUser *)0x0) {
    iVar2 = (int)local_18;
    cMyTrace::cMyTrace(local_28,"CUser* CGameManager::getUser(int, int)",0x95c,5);
    cMyTrace::operator()(local_28," No way! getUser , slot_id(%d) is abnormal!",iVar2);
    local_14 = (CUser *)0x0;
  }
  else {
    sVar1 = CUser::GetIncreID(local_14);
    if (sVar1 == 0) {
      local_14 = (CUser *)0x0;
    }
    else if (((sVar1 != local_16) && (sVar1 != 0)) && (local_16 != 0)) {
      local_14 = (CUser *)0x0;
    }
  }
  return local_14;
}

```

---

## getUserByUnique

```asm
// === 082949fc CGameManager::getUserByUnique  [0x082949fc-0x8294acf] ===
 82949fc:	55                   	push   %ebp
 82949fd:	89 e5                	mov    %esp,%ebp
 82949ff:	83 ec 48             	sub    $0x48,%esp
 8294a02:	8b 45 0c             	mov    0xc(%ebp),%eax
 8294a05:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 8294a09:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8294a0c:	89 04 24             	mov    %eax,(%esp)
 8294a0f:	e8 4a bd 01 00       	call   82b075e <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEC1Ev>
 8294a14:	0f bf 45 d4          	movswl -0x2c(%ebp),%eax
 8294a18:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294a1c:	8d 45 ea             	lea    -0x16(%ebp),%eax
 8294a1f:	89 04 24             	mov    %eax,(%esp)
 8294a22:	e8 e5 24 01 00       	call   82a6f0c <_ZN12CGameManager16FindUserByUniqueC1Es>
 8294a27:	8b 45 08             	mov    0x8(%ebp),%eax
 8294a2a:	8d 90 2c 02 00 00    	lea    0x22c(%eax),%edx
 8294a30:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8294a33:	89 54 24 04          	mov    %edx,0x4(%esp)
 8294a37:	89 04 24             	mov    %eax,(%esp)
 8294a3a:	e8 9b f0 e3 ff       	call   80d3ada <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 8294a3f:	83 ec 04             	sub    $0x4,%esp
 8294a42:	8b 45 08             	mov    0x8(%ebp),%eax
 8294a45:	8d 90 2c 02 00 00    	lea    0x22c(%eax),%edx
 8294a4b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8294a4e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8294a52:	89 04 24             	mov    %eax,(%esp)
 8294a55:	e8 5a f0 e3 ff       	call   80d3ab4 <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 8294a5a:	83 ec 04             	sub    $0x4,%esp
 8294a5d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8294a60:	0f b7 55 ea          	movzwl -0x16(%ebp),%edx
 8294a64:	66 89 54 24 0c       	mov    %dx,0xc(%esp)
 8294a69:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8294a6c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8294a70:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8294a73:	89 54 24 04          	mov    %edx,0x4(%esp)
 8294a77:	89 04 24             	mov    %eax,(%esp)
 8294a7a:	e8 26 bd 01 00       	call   82b07a5 <_ZSt7find_ifISt17_Rb_tree_iteratorISt4pairIKjP5CUserEEN12CGameManager16FindUserByUniqueEET_S9_S9_T0_>
 8294a7f:	83 ec 04             	sub    $0x4,%esp
 8294a82:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8294a85:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8294a88:	8b 45 08             	mov    0x8(%ebp),%eax
 8294a8b:	8d 90 2c 02 00 00    	lea    0x22c(%eax),%edx
 8294a91:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8294a94:	89 54 24 04          	mov    %edx,0x4(%esp)
 8294a98:	89 04 24             	mov    %eax,(%esp)
 8294a9b:	e8 3a f0 e3 ff       	call   80d3ada <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 8294aa0:	83 ec 04             	sub    $0x4,%esp
 8294aa3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8294aa6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294aaa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8294aad:	89 04 24             	mov    %eax,(%esp)
 8294ab0:	e8 47 bd 01 00       	call   82b07fc <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 8294ab5:	84 c0                	test   %al,%al
 8294ab7:	74 10                	je     8294ac9 <_ZN12CGameManager15getUserByUniqueEs+0xcd>
 8294ab9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8294abc:	89 04 24             	mov    %eax,(%esp)
 8294abf:	e8 d4 bc 01 00       	call   82b0798 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 8294ac4:	8b 40 04             	mov    0x4(%eax),%eax
 8294ac7:	eb 05                	jmp    8294ace <_ZN12CGameManager15getUserByUniqueEs+0xd2>
 8294ac9:	b8 00 00 00 00       	mov    $0x0,%eax
 8294ace:	c9                   	leave
 8294acf:	c3                   	ret

```

```c
// CGameManager::getUserByUnique @ 0x82949fc

/* CGameManager::getUserByUnique(short) */

undefined4 __thiscall CGameManager::getUserByUnique(CGameManager *this,short param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_34;
  short local_30;
  undefined4 local_20;
  undefined2 local_1a;
  undefined4 local_18;
  undefined4 local_14;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_10 [12];
  
  local_30 = param_1;
  std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_20);
  FindUserByUnique::FindUserByUnique((FindUserByUnique *)&local_1a,local_30);
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::end((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
         *)&local_18);
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::begin((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
           *)&local_14);
  std::
  find_if<std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>,CGameManager::FindUserByUnique>
            (&local_34,local_14,local_18,local_1a);
  local_20 = local_34;
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_20,
                     (_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_20);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## init

```asm
// === 082941d8 CGameManager::init  [0x082941d8-0x829424b] ===
 82941d8:	55                   	push   %ebp
 82941d9:	89 e5                	mov    %esp,%ebp
 82941db:	57                   	push   %edi
 82941dc:	56                   	push   %esi
 82941dd:	53                   	push   %ebx
 82941de:	83 ec 1c             	sub    $0x1c,%esp
 82941e1:	c7 04 24 6c 00 00 00 	movl   $0x6c,(%esp)
 82941e8:	e8 63 02 49 00       	call   8724450 <_Znwj>
 82941ed:	89 c3                	mov    %eax,%ebx
 82941ef:	89 d8                	mov    %ebx,%eax
 82941f1:	89 04 24             	mov    %eax,(%esp)
 82941f4:	e8 47 7a e5 ff       	call   80ebc40 <_ZN20CraneMinigameManagerC1Ev>
 82941f9:	eb 18                	jmp    8294213 <_ZN12CGameManager4initEv+0x3b>
 82941fb:	89 d6                	mov    %edx,%esi
 82941fd:	89 c7                	mov    %eax,%edi
 82941ff:	89 1c 24             	mov    %ebx,(%esp)
 8294202:	e8 e9 02 49 00       	call   87244f0 <_ZdlPv>
 8294207:	89 f8                	mov    %edi,%eax
 8294209:	89 f2                	mov    %esi,%edx
 829420b:	89 04 24             	mov    %eax,(%esp)
 829420e:	e8 3d f5 84 00       	call   8ae3750 <_Unwind_Resume>
 8294213:	89 da                	mov    %ebx,%edx
 8294215:	8b 45 08             	mov    0x8(%ebp),%eax
 8294218:	89 90 18 03 00 00    	mov    %edx,0x318(%eax)
 829421e:	8b 45 08             	mov    0x8(%ebp),%eax
 8294221:	89 04 24             	mov    %eax,(%esp)
 8294224:	e8 7d 4e 00 00       	call   82990a6 <_ZN12CGameManager23GetCraneMinigameManagerEv>
 8294229:	89 04 24             	mov    %eax,(%esp)
 829422c:	e8 3d 7a e5 ff       	call   80ebc6e <_ZN20CraneMinigameManager4initEv>
 8294231:	83 f0 01             	xor    $0x1,%eax
 8294234:	84 c0                	test   %al,%al
 8294236:	74 07                	je     829423f <_ZN12CGameManager4initEv+0x67>
 8294238:	b8 00 00 00 00       	mov    $0x0,%eax
 829423d:	eb 05                	jmp    8294244 <_ZN12CGameManager4initEv+0x6c>
 829423f:	b8 01 00 00 00       	mov    $0x1,%eax
 8294244:	83 c4 1c             	add    $0x1c,%esp
 8294247:	5b                   	pop    %ebx
 8294248:	5e                   	pop    %esi
 8294249:	5f                   	pop    %edi
 829424a:	5d                   	pop    %ebp
 829424b:	c3                   	ret

```

```c
// CGameManager::init @ 0x82941d8

/* CGameManager::init() */

bool __thiscall CGameManager::init(CGameManager *this)

{
  char cVar1;
  CraneMinigameManager *pCVar2;
  
  pCVar2 = operator_new(0x6c);
                    /* try { // try from 082941f4 to 082941f8 has its CatchHandler @ 082941fb */
  CraneMinigameManager::CraneMinigameManager(pCVar2);
  *(CraneMinigameManager **)(this + 0x318) = pCVar2;
  pCVar2 = (CraneMinigameManager *)GetCraneMinigameManager(this);
  cVar1 = CraneMinigameManager::init(pCVar2);
  return cVar1 == '\x01';
}

```

---

## insertUserByAccID

```asm
// === 0829445e CGameManager::insertUserByAccID  [0x0829445e-0x829451d] ===
 829445e:	55                   	push   %ebp
 829445f:	89 e5                	mov    %esp,%ebp
 8294461:	53                   	push   %ebx
 8294462:	83 ec 34             	sub    $0x34,%esp
 8294465:	8b 45 0c             	mov    0xc(%ebp),%eax
 8294468:	89 04 24             	mov    %eax,(%esp)
 829446b:	e8 fe 5e e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8294470:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8294473:	8b 45 08             	mov    0x8(%ebp),%eax
 8294476:	8d 90 2c 02 00 00    	lea    0x22c(%eax),%edx
 829447c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 829447f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294483:	89 14 24             	mov    %edx,(%esp)
 8294486:	e8 8b bf 01 00       	call   82b0416 <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEEixERS5_>
 829448b:	8b 55 0c             	mov    0xc(%ebp),%edx
 829448e:	89 10                	mov    %edx,(%eax)
 8294490:	8b 45 0c             	mov    0xc(%ebp),%eax
 8294493:	89 04 24             	mov    %eax,(%esp)
 8294496:	e8 d3 5e e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 829449b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 829449e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82944a1:	85 c0                	test   %eax,%eax
 82944a3:	75 49                	jne    82944ee <_ZN12CGameManager17insertUserByAccIDEP5CUser+0x90>
 82944a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82944a8:	89 04 24             	mov    %eax,(%esp)
 82944ab:	e8 c2 cb e6 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 82944b0:	89 c3                	mov    %eax,%ebx
 82944b2:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 82944b9:	00 
 82944ba:	c7 44 24 08 1d 09 00 	movl   $0x91d,0x8(%esp)
 82944c1:	00 
 82944c2:	c7 44 24 04 e0 b7 c1 	movl   $0x8c1b7e0,0x4(%esp)
 82944c9:	08 
 82944ca:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82944cd:	89 04 24             	mov    %eax,(%esp)
 82944d0:	e8 43 b2 2b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82944d5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82944d9:	c7 44 24 04 d0 68 c1 	movl   $0x8c168d0,0x4(%esp)
 82944e0:	08 
 82944e1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82944e4:	89 04 24             	mov    %eax,(%esp)
 82944e7:	e8 9c b2 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82944ec:	eb 2a                	jmp    8294518 <_ZN12CGameManager17insertUserByAccIDEP5CUser+0xba>
 82944ee:	8b 45 08             	mov    0x8(%ebp),%eax
 82944f1:	8d 90 44 02 00 00    	lea    0x244(%eax),%edx
 82944f7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82944fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 82944fe:	89 14 24             	mov    %edx,(%esp)
 8294501:	e8 10 bf 01 00       	call   82b0416 <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEEixERS5_>
 8294506:	8b 55 0c             	mov    0xc(%ebp),%edx
 8294509:	89 10                	mov    %edx,(%eax)
 829450b:	a1 40 f7 41 09       	mov    0x941f740,%eax
 8294510:	89 04 24             	mov    %eax,(%esp)
 8294513:	e8 c6 c1 2b 00       	call   85506de <_ZN8WongWork15CLogGameChannel9IncInUserEv>
 8294518:	83 c4 34             	add    $0x34,%esp
 829451b:	5b                   	pop    %ebx
 829451c:	5d                   	pop    %ebp
 829451d:	c3                   	ret

```

```c
// CGameManager::insertUserByAccID @ 0x829445e

/* CGameManager::insertUserByAccID(CUser*) */

void __thiscall CGameManager::insertUserByAccID(CGameManager *this,CUser *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint local_24;
  uint local_20;
  cMyTrace local_1c [20];
  
  local_20 = CUser::get_acc_id(param_1);
  puVar1 = (undefined4 *)
           std::
           map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
           ::operator[]((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                         *)(this + 0x22c),&local_20);
  *puVar1 = param_1;
  local_24 = CUser::get_acc_id(param_1);
  if (local_24 == 0) {
    uVar2 = CUser::get_acc_name(param_1);
    cMyTrace::cMyTrace(local_1c,"void CGameManager::insertUserByAccID(CUser*)",0x91d,5);
    cMyTrace::operator()(local_1c,"[QQID_ERROR]CGameManager::insertUserByAccID  qq_id:%s",uVar2);
  }
  else {
    puVar1 = (undefined4 *)
             std::
             map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
             ::operator[]((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                           *)(this + 0x244),&local_24);
    *puVar1 = param_1;
    WongWork::CLogGameChannel::IncInUser(GlobalData::s_pLogGameChannel);
  }
  return;
}

```

---

## insert_game_world

```asm
// === 08296d30 CGameManager::insert_game_world  [0x08296d30-0x8297c13] ===
 8296d30:	55                   	push   %ebp
 8296d31:	89 e5                	mov    %esp,%ebp
 8296d33:	57                   	push   %edi
 8296d34:	56                   	push   %esi
 8296d35:	53                   	push   %ebx
 8296d36:	81 ec 0c 01 00 00    	sub    $0x10c,%esp
 8296d3c:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8296d40:	75 36                	jne    8296d78 <_ZN12CGameManager17insert_game_worldEP5CUser+0x48>
 8296d42:	c7 44 24 10 40 6c c1 	movl   $0x8c16c40,0x10(%esp)
 8296d49:	08 
 8296d4a:	c7 44 24 0c 20 0f 00 	movl   $0xf20,0xc(%esp)
 8296d51:	00 
 8296d52:	c7 44 24 08 00 b5 c1 	movl   $0x8c1b500,0x8(%esp)
 8296d59:	08 
 8296d5a:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 8296d61:	08 
 8296d62:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8296d69:	e8 9c ce 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8296d6e:	bb 00 00 00 00       	mov    $0x0,%ebx
 8296d73:	e9 8e 0e 00 00       	jmp    8297c06 <_ZN12CGameManager17insert_game_worldEP5CUser+0xed6>
 8296d78:	8b 45 0c             	mov    0xc(%ebp),%eax
 8296d7b:	89 04 24             	mov    %eax,(%esp)
 8296d7e:	e8 af 96 e8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8296d83:	85 c0                	test   %eax,%eax
 8296d85:	0f 94 c0             	sete   %al
 8296d88:	84 c0                	test   %al,%al
 8296d8a:	74 36                	je     8296dc2 <_ZN12CGameManager17insert_game_worldEP5CUser+0x92>
 8296d8c:	c7 44 24 10 70 6c c1 	movl   $0x8c16c70,0x10(%esp)
 8296d93:	08 
 8296d94:	c7 44 24 0c 27 0f 00 	movl   $0xf27,0xc(%esp)
 8296d9b:	00 
 8296d9c:	c7 44 24 08 00 b5 c1 	movl   $0x8c1b500,0x8(%esp)
 8296da3:	08 
 8296da4:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 8296dab:	08 
 8296dac:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8296db3:	e8 52 ce 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8296db8:	bb 00 00 00 00       	mov    $0x0,%ebx
 8296dbd:	e9 44 0e 00 00       	jmp    8297c06 <_ZN12CGameManager17insert_game_worldEP5CUser+0xed6>
 8296dc2:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8296dc9:	e8 d0 4e e3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8296dce:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8296dd1:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8296dd4:	89 04 24             	mov    %eax,(%esp)
 8296dd7:	e8 fa db e9 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 8296ddc:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8296de2:	89 04 24             	mov    %eax,(%esp)
 8296de5:	e8 ec db e9 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 8296dea:	e8 5d ec 00 00       	call   82a5a4c <_ZN26Inter_MonitorGuildPointDel17getLastDeleteTimeEv>
 8296def:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 8296df2:	7f 1d                	jg     8296e11 <_ZN12CGameManager17insert_game_worldEP5CUser+0xe1>
 8296df4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8296df7:	89 04 24             	mov    %eax,(%esp)
 8296dfa:	e8 ab f8 00 00       	call   82a66aa <_ZNK15CUserCharacInfo24getCurCharacLastPlayTickEv>
 8296dff:	89 c3                	mov    %eax,%ebx
 8296e01:	e8 46 ec 00 00       	call   82a5a4c <_ZN26Inter_MonitorGuildPointDel17getLastDeleteTimeEv>
 8296e06:	39 c3                	cmp    %eax,%ebx
 8296e08:	7d 07                	jge    8296e11 <_ZN12CGameManager17insert_game_worldEP5CUser+0xe1>
 8296e0a:	b8 01 00 00 00       	mov    $0x1,%eax
 8296e0f:	eb 05                	jmp    8296e16 <_ZN12CGameManager17insert_game_worldEP5CUser+0xe6>
 8296e11:	b8 00 00 00 00       	mov    $0x0,%eax
 8296e16:	84 c0                	test   %al,%al
 8296e18:	74 3c                	je     8296e56 <_ZN12CGameManager17insert_game_worldEP5CUser+0x126>
 8296e1a:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 8296e21:	c7 45 9c 84 0c 00 00 	movl   $0xc84,-0x64(%ebp)
 8296e28:	8d 45 90             	lea    -0x70(%ebp),%eax
 8296e2b:	8d 55 98             	lea    -0x68(%ebp),%edx
 8296e2e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8296e32:	8d 55 9c             	lea    -0x64(%ebp),%edx
 8296e35:	89 54 24 04          	mov    %edx,0x4(%esp)
 8296e39:	89 04 24             	mov    %eax,(%esp)
 8296e3c:	e8 00 1f f2 ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 8296e41:	83 ec 04             	sub    $0x4,%esp
 8296e44:	8d 45 90             	lea    -0x70(%ebp),%eax
 8296e47:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296e4b:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8296e4e:	89 04 24             	mov    %eax,(%esp)
 8296e51:	e8 b0 67 e4 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8296e56:	8b 45 0c             	mov    0xc(%ebp),%eax
 8296e59:	89 04 24             	mov    %eax,(%esp)
 8296e5c:	e8 7b f8 00 00       	call   82a66dc <_ZN15CUserCharacInfo23getCurCharacGuildSecedeEv>
 8296e61:	84 c0                	test   %al,%al
 8296e63:	0f 95 c0             	setne  %al
 8296e66:	84 c0                	test   %al,%al
 8296e68:	0f 84 95 00 00 00    	je     8296f03 <_ZN12CGameManager17insert_game_worldEP5CUser+0x1d3>
 8296e6e:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 8296e75:	c7 45 b4 b0 04 00 00 	movl   $0x4b0,-0x4c(%ebp)
 8296e7c:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8296e7f:	8d 55 b0             	lea    -0x50(%ebp),%edx
 8296e82:	89 54 24 08          	mov    %edx,0x8(%esp)
 8296e86:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8296e89:	89 54 24 04          	mov    %edx,0x4(%esp)
 8296e8d:	89 04 24             	mov    %eax,(%esp)
 8296e90:	e8 7d bd 01 00       	call   82b2c12 <_ZSt9make_pairI18ENUM_HARDCODE_ITEMiESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 8296e95:	83 ec 04             	sub    $0x4,%esp
 8296e98:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8296e9b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296e9f:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8296ea2:	89 04 24             	mov    %eax,(%esp)
 8296ea5:	e8 b2 bd 01 00       	call   82b2c5c <_ZNSt4pairIiiEC1I18ENUM_HARDCODE_ITEMiEEOS_IT_T0_E>
 8296eaa:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8296ead:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296eb1:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8296eb4:	89 04 24             	mov    %eax,(%esp)
 8296eb7:	e8 4a 67 e4 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8296ebc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8296ebf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8296ec6:	00 
 8296ec7:	89 04 24             	mov    %eax,(%esp)
 8296eca:	e8 31 f8 00 00       	call   82a6700 <_ZN15CUserCharacInfo23setCurCharacGuildSecedeEc>
 8296ecf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8296ed2:	89 04 24             	mov    %eax,(%esp)
 8296ed5:	e8 b6 4d e3 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8296eda:	89 c3                	mov    %eax,%ebx
 8296edc:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8296ee3:	ff 
 8296ee4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8296ee7:	89 04 24             	mov    %eax,(%esp)
 8296eea:	e8 b1 70 3b 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8296eef:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8296ef3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8296efa:	00 
 8296efb:	89 04 24             	mov    %eax,(%esp)
 8296efe:	e8 05 55 1a 00       	call   843c408 <_ZN21DB_GuildExpBookDelete11makeRequestEji17ENUM_SERVER_GROUP>
 8296f03:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8296f06:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296f0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8296f0d:	89 04 24             	mov    %eax,(%esp)
 8296f10:	e8 fb 20 3f 00       	call   8689010 <_ZN5CUser17ResetItemByScriptERSt6vectorISt4pairIiiESaIS2_EE>
 8296f15:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8296f1c:	e8 7d 4d e3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8296f21:	89 c3                	mov    %eax,%ebx
 8296f23:	8b 45 0c             	mov    0xc(%ebp),%eax
 8296f26:	89 04 24             	mov    %eax,(%esp)
 8296f29:	e8 04 95 e8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8296f2e:	8b 70 7b             	mov    0x7b(%eax),%esi
 8296f31:	e8 4b 52 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8296f36:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 8296f3c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8296f40:	89 74 24 04          	mov    %esi,0x4(%esp)
 8296f44:	89 04 24             	mov    %eax,(%esp)
 8296f47:	e8 5c 51 1d 00       	call   846c0a8 <_Z22CheckDailyScheduleTimeill>
 8296f4c:	84 c0                	test   %al,%al
 8296f4e:	0f 84 83 00 00 00    	je     8296fd7 <_ZN12CGameManager17insert_game_worldEP5CUser+0x2a7>
 8296f54:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8296f5a:	89 04 24             	mov    %eax,(%esp)
 8296f5d:	e8 74 da e9 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 8296f62:	c7 44 24 0c 08 00 00 	movl   $0x8,0xc(%esp)
 8296f69:	00 
 8296f6a:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8296f71:	00 
 8296f72:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8296f78:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296f7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8296f7f:	89 04 24             	mov    %eax,(%esp)
 8296f82:	e8 ad 77 3e 00       	call   867e734 <_ZN5CUser24deleteDailyStackableItemERSt6vectorISt4pairIiiESaIS2_EEii>
 8296f87:	c7 44 24 0c 68 00 00 	movl   $0x68,0xc(%esp)
 8296f8e:	00 
 8296f8f:	c7 44 24 08 39 00 00 	movl   $0x39,0x8(%esp)
 8296f96:	00 
 8296f97:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8296f9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296fa1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8296fa4:	89 04 24             	mov    %eax,(%esp)
 8296fa7:	e8 88 77 3e 00       	call   867e734 <_ZN5CUser24deleteDailyStackableItemERSt6vectorISt4pairIiiESaIS2_EEii>
 8296fac:	eb 1b                	jmp    8296fc9 <_ZN12CGameManager17insert_game_worldEP5CUser+0x299>
 8296fae:	89 d3                	mov    %edx,%ebx
 8296fb0:	89 c6                	mov    %eax,%esi
 8296fb2:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8296fb8:	89 04 24             	mov    %eax,(%esp)
 8296fbb:	e8 2a da e9 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8296fc0:	89 f0                	mov    %esi,%eax
 8296fc2:	89 da                	mov    %ebx,%edx
 8296fc4:	e9 ef 0b 00 00       	jmp    8297bb8 <_ZN12CGameManager17insert_game_worldEP5CUser+0xe88>
 8296fc9:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8296fcf:	89 04 24             	mov    %eax,(%esp)
 8296fd2:	e8 13 da e9 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8296fd7:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8296fdd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8296fe1:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8296fe4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8296fe8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8296feb:	89 04 24             	mov    %eax,(%esp)
 8296fee:	e8 ad 6b 3e 00       	call   867dba0 <_ZN5CUser18deleteSpecificItemERKSt6vectorISt4pairIiiESaIS2_EERS4_>
 8296ff3:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 8296ffa:	00 
 8296ffb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8296ffe:	89 04 24             	mov    %eax,(%esp)
 8297001:	e8 66 6b 3c 00       	call   865db6c <_ZN5CUser14send_itemspaceEi>
 8297006:	83 f0 01             	xor    $0x1,%eax
 8297009:	84 c0                	test   %al,%al
 829700b:	74 55                	je     8297062 <_ZN12CGameManager17insert_game_worldEP5CUser+0x332>
 829700d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297010:	89 04 24             	mov    %eax,(%esp)
 8297013:	e8 56 33 e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8297018:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 829701f:	00 
 8297020:	89 04 24             	mov    %eax,(%esp)
 8297023:	e8 23 20 e7 ff       	call   810904b <_Z14NumberToStringji>
 8297028:	89 44 24 14          	mov    %eax,0x14(%esp)
 829702c:	c7 44 24 10 c4 6c c1 	movl   $0x8c16cc4,0x10(%esp)
 8297033:	08 
 8297034:	c7 44 24 0c 58 0f 00 	movl   $0xf58,0xc(%esp)
 829703b:	00 
 829703c:	c7 44 24 08 00 b5 c1 	movl   $0x8c1b500,0x8(%esp)
 8297043:	08 
 8297044:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 829704b:	08 
 829704c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8297053:	e8 b2 cb 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8297058:	bb 00 00 00 00       	mov    $0x0,%ebx
 829705d:	e9 6e 0b 00 00       	jmp    8297bd0 <_ZN12CGameManager17insert_game_worldEP5CUser+0xea0>
 8297062:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8297069:	00 
 829706a:	8b 45 0c             	mov    0xc(%ebp),%eax
 829706d:	89 04 24             	mov    %eax,(%esp)
 8297070:	e8 f7 6a 3c 00       	call   865db6c <_ZN5CUser14send_itemspaceEi>
 8297075:	83 f0 01             	xor    $0x1,%eax
 8297078:	84 c0                	test   %al,%al
 829707a:	74 55                	je     82970d1 <_ZN12CGameManager17insert_game_worldEP5CUser+0x3a1>
 829707c:	8b 45 0c             	mov    0xc(%ebp),%eax
 829707f:	89 04 24             	mov    %eax,(%esp)
 8297082:	e8 e7 32 e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8297087:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 829708e:	00 
 829708f:	89 04 24             	mov    %eax,(%esp)
 8297092:	e8 b4 1f e7 ff       	call   810904b <_Z14NumberToStringji>
 8297097:	89 44 24 14          	mov    %eax,0x14(%esp)
 829709b:	c7 44 24 10 30 6d c1 	movl   $0x8c16d30,0x10(%esp)
 82970a2:	08 
 82970a3:	c7 44 24 0c 5f 0f 00 	movl   $0xf5f,0xc(%esp)
 82970aa:	00 
 82970ab:	c7 44 24 08 00 b5 c1 	movl   $0x8c1b500,0x8(%esp)
 82970b2:	08 
 82970b3:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 82970ba:	08 
 82970bb:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 82970c2:	e8 43 cb 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 82970c7:	bb 00 00 00 00       	mov    $0x0,%ebx
 82970cc:	e9 ff 0a 00 00       	jmp    8297bd0 <_ZN12CGameManager17insert_game_worldEP5CUser+0xea0>
 82970d1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82970d8:	00 
 82970d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82970dc:	89 04 24             	mov    %eax,(%esp)
 82970df:	e8 88 6a 3c 00       	call   865db6c <_ZN5CUser14send_itemspaceEi>
 82970e4:	83 f0 01             	xor    $0x1,%eax
 82970e7:	84 c0                	test   %al,%al
 82970e9:	74 55                	je     8297140 <_ZN12CGameManager17insert_game_worldEP5CUser+0x410>
 82970eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82970ee:	89 04 24             	mov    %eax,(%esp)
 82970f1:	e8 78 32 e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 82970f6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82970fd:	00 
 82970fe:	89 04 24             	mov    %eax,(%esp)
 8297101:	e8 45 1f e7 ff       	call   810904b <_Z14NumberToStringji>
 8297106:	89 44 24 14          	mov    %eax,0x14(%esp)
 829710a:	c7 44 24 10 98 6d c1 	movl   $0x8c16d98,0x10(%esp)
 8297111:	08 
 8297112:	c7 44 24 0c 64 0f 00 	movl   $0xf64,0xc(%esp)
 8297119:	00 
 829711a:	c7 44 24 08 00 b5 c1 	movl   $0x8c1b500,0x8(%esp)
 8297121:	08 
 8297122:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 8297129:	08 
 829712a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8297131:	e8 d4 ca 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8297136:	bb 00 00 00 00       	mov    $0x0,%ebx
 829713b:	e9 90 0a 00 00       	jmp    8297bd0 <_ZN12CGameManager17insert_game_worldEP5CUser+0xea0>
 8297140:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8297147:	00 
 8297148:	8b 45 0c             	mov    0xc(%ebp),%eax
 829714b:	89 04 24             	mov    %eax,(%esp)
 829714e:	e8 19 6a 3c 00       	call   865db6c <_ZN5CUser14send_itemspaceEi>
 8297153:	83 f0 01             	xor    $0x1,%eax
 8297156:	84 c0                	test   %al,%al
 8297158:	74 55                	je     82971af <_ZN12CGameManager17insert_game_worldEP5CUser+0x47f>
 829715a:	8b 45 0c             	mov    0xc(%ebp),%eax
 829715d:	89 04 24             	mov    %eax,(%esp)
 8297160:	e8 09 32 e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8297165:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 829716c:	00 
 829716d:	89 04 24             	mov    %eax,(%esp)
 8297170:	e8 d6 1e e7 ff       	call   810904b <_Z14NumberToStringji>
 8297175:	89 44 24 14          	mov    %eax,0x14(%esp)
 8297179:	c7 44 24 10 fc 6d c1 	movl   $0x8c16dfc,0x10(%esp)
 8297180:	08 
 8297181:	c7 44 24 0c 69 0f 00 	movl   $0xf69,0xc(%esp)
 8297188:	00 
 8297189:	c7 44 24 08 00 b5 c1 	movl   $0x8c1b500,0x8(%esp)
 8297190:	08 
 8297191:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 8297198:	08 
 8297199:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 82971a0:	e8 65 ca 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 82971a5:	bb 00 00 00 00       	mov    $0x0,%ebx
 82971aa:	e9 21 0a 00 00       	jmp    8297bd0 <_ZN12CGameManager17insert_game_worldEP5CUser+0xea0>
 82971af:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 82971b6:	00 
 82971b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82971ba:	89 04 24             	mov    %eax,(%esp)
 82971bd:	e8 aa 69 3c 00       	call   865db6c <_ZN5CUser14send_itemspaceEi>
 82971c2:	83 f0 01             	xor    $0x1,%eax
 82971c5:	84 c0                	test   %al,%al
 82971c7:	74 55                	je     829721e <_ZN12CGameManager17insert_game_worldEP5CUser+0x4ee>
 82971c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82971cc:	89 04 24             	mov    %eax,(%esp)
 82971cf:	e8 9a 31 e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 82971d4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82971db:	00 
 82971dc:	89 04 24             	mov    %eax,(%esp)
 82971df:	e8 67 1e e7 ff       	call   810904b <_Z14NumberToStringji>
 82971e4:	89 44 24 14          	mov    %eax,0x14(%esp)
 82971e8:	c7 44 24 10 60 6e c1 	movl   $0x8c16e60,0x10(%esp)
 82971ef:	08 
 82971f0:	c7 44 24 0c 7a 0f 00 	movl   $0xf7a,0xc(%esp)
 82971f7:	00 
 82971f8:	c7 44 24 08 00 b5 c1 	movl   $0x8c1b500,0x8(%esp)
 82971ff:	08 
 8297200:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 8297207:	08 
 8297208:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 829720f:	e8 f6 c9 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8297214:	bb 00 00 00 00       	mov    $0x0,%ebx
 8297219:	e9 b2 09 00 00       	jmp    8297bd0 <_ZN12CGameManager17insert_game_worldEP5CUser+0xea0>
 829721e:	e8 84 31 e4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8297223:	89 04 24             	mov    %eax,(%esp)
 8297226:	e8 f5 f8 e7 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 829722b:	83 f8 0e             	cmp    $0xe,%eax
 829722e:	0f 94 c0             	sete   %al
 8297231:	84 c0                	test   %al,%al
 8297233:	74 13                	je     8297248 <_ZN12CGameManager17insert_game_worldEP5CUser+0x518>
 8297235:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297238:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 829723f:	00 
 8297240:	89 04 24             	mov    %eax,(%esp)
 8297243:	e8 d6 f4 00 00       	call   82a671e <_ZN15CUserCharacInfo19set_charac_guildkeyEj>
 8297248:	e8 5a 31 e4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 829724d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8297250:	89 54 24 04          	mov    %edx,0x4(%esp)
 8297254:	89 04 24             	mov    %eax,(%esp)
 8297257:	e8 f4 db 42 00       	call   86c4e50 <_ZN9GameWorld16reach_game_worldEP5CUser>
 829725c:	83 f0 01             	xor    $0x1,%eax
 829725f:	84 c0                	test   %al,%al
 8297261:	0f 84 ff 00 00 00    	je     8297366 <_ZN12CGameManager17insert_game_worldEP5CUser+0x636>
 8297267:	8b 45 0c             	mov    0xc(%ebp),%eax
 829726a:	89 04 24             	mov    %eax,(%esp)
 829726d:	e8 fc 30 e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8297272:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8297279:	00 
 829727a:	89 04 24             	mov    %eax,(%esp)
 829727d:	e8 c9 1d e7 ff       	call   810904b <_Z14NumberToStringji>
 8297282:	89 c3                	mov    %eax,%ebx
 8297284:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297287:	89 04 24             	mov    %eax,(%esp)
 829728a:	e8 ed 30 e4 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 829728f:	0f b7 f0             	movzwl %ax,%esi
 8297292:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8297299:	00 
 829729a:	c7 44 24 08 a2 0f 00 	movl   $0xfa2,0x8(%esp)
 82972a1:	00 
 82972a2:	c7 44 24 04 00 b5 c1 	movl   $0x8c1b500,0x4(%esp)
 82972a9:	08 
 82972aa:	8d 45 b8             	lea    -0x48(%ebp),%eax
 82972ad:	89 04 24             	mov    %eax,(%esp)
 82972b0:	e8 63 84 2b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82972b5:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82972b9:	89 74 24 08          	mov    %esi,0x8(%esp)
 82972bd:	c7 44 24 04 c4 6e c1 	movl   $0x8c16ec4,0x4(%esp)
 82972c4:	08 
 82972c5:	8d 45 b8             	lea    -0x48(%ebp),%eax
 82972c8:	89 04 24             	mov    %eax,(%esp)
 82972cb:	e8 b8 84 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82972d0:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 82972d7:	00 
 82972d8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82972df:	00 
 82972e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82972e3:	89 04 24             	mov    %eax,(%esp)
 82972e6:	e8 57 4c 3e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82972eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82972ee:	89 04 24             	mov    %eax,(%esp)
 82972f1:	e8 86 30 e4 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 82972f6:	0f b7 f0             	movzwl %ax,%esi
 82972f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82972fc:	89 04 24             	mov    %eax,(%esp)
 82972ff:	e8 6a 30 e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8297304:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 829730b:	00 
 829730c:	89 04 24             	mov    %eax,(%esp)
 829730f:	e8 37 1d e7 ff       	call   810904b <_Z14NumberToStringji>
 8297314:	89 c3                	mov    %eax,%ebx
 8297316:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 829731d:	00 
 829731e:	c7 44 24 08 ab 0f 00 	movl   $0xfab,0x8(%esp)
 8297325:	00 
 8297326:	c7 44 24 04 00 b5 c1 	movl   $0x8c1b500,0x4(%esp)
 829732d:	08 
 829732e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8297331:	89 04 24             	mov    %eax,(%esp)
 8297334:	e8 df 83 2b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8297339:	89 74 24 10          	mov    %esi,0x10(%esp)
 829733d:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8297341:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8297348:	00 
 8297349:	c7 44 24 04 20 6f c1 	movl   $0x8c16f20,0x4(%esp)
 8297350:	08 
 8297351:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8297354:	89 04 24             	mov    %eax,(%esp)
 8297357:	e8 2c 84 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829735c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8297361:	e9 6a 08 00 00       	jmp    8297bd0 <_ZN12CGameManager17insert_game_worldEP5CUser+0xea0>
 8297366:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297369:	89 04 24             	mov    %eax,(%esp)
 829736c:	e8 47 f3 00 00       	call   82a66b8 <_ZN15CUserCharacInfo34getCurCharacEventCharacterGrowtypeEv>
 8297371:	0f be c0             	movsbl %al,%eax
 8297374:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8297377:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 829737b:	7e 1c                	jle    8297399 <_ZN12CGameManager17insert_game_worldEP5CUser+0x669>
 829737d:	e8 d6 6e 1f 00       	call   848e258 <_Z30CEventCharacterHandlerInstancev>
 8297382:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 8297389:	00 
 829738a:	8b 55 0c             	mov    0xc(%ebp),%edx
 829738d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8297391:	89 04 24             	mov    %eax,(%esp)
 8297394:	e8 0b 6f 1f 00       	call   848e2a4 <_ZN22CEventCharacterHandler19_makeEventCharacterEP5CUseri>
 8297399:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 82973a0:	00 
 82973a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82973a4:	89 04 24             	mov    %eax,(%esp)
 82973a7:	e8 d8 61 e4 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 82973ac:	89 45 e0             	mov    %eax,-0x20(%ebp)
 82973af:	e8 f3 2f e4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 82973b4:	89 04 24             	mov    %eax,(%esp)
 82973b7:	e8 82 d0 f9 ff       	call   823443e <_ZNK9GameWorld24IsEquipSlotSwitchChannelEv>
 82973bc:	84 c0                	test   %al,%al
 82973be:	74 58                	je     8297418 <_ZN12CGameManager17insert_game_worldEP5CUser+0x6e8>
 82973c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82973c3:	89 04 24             	mov    %eax,(%esp)
 82973c6:	e8 b1 86 f9 ff       	call   822fa7c <_ZN15CUserCharacInfo28getCurChannelEquipslotSwitchEv>
 82973cb:	84 c0                	test   %al,%al
 82973cd:	0f 94 c0             	sete   %al
 82973d0:	84 c0                	test   %al,%al
 82973d2:	0f 84 92 00 00 00    	je     829746a <_ZN12CGameManager17insert_game_worldEP5CUser+0x73a>
 82973d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82973db:	89 04 24             	mov    %eax,(%esp)
 82973de:	e8 bd 86 f9 ff       	call   822faa0 <_ZN15CUserCharacInfo27getCurExpandEquipslotSwitchEv>
 82973e3:	0f be d8             	movsbl %al,%ebx
 82973e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82973e9:	89 04 24             	mov    %eax,(%esp)
 82973ec:	e8 8b 86 f9 ff       	call   822fa7c <_ZN15CUserCharacInfo28getCurChannelEquipslotSwitchEv>
 82973f1:	0f be c0             	movsbl %al,%eax
 82973f4:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 82973f8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82973fc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8297403:	00 
 8297404:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297407:	89 44 24 04          	mov    %eax,0x4(%esp)
 829740b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 829740e:	89 04 24             	mov    %eax,(%esp)
 8297411:	e8 28 20 20 00       	call   849943e <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc>
 8297416:	eb 52                	jmp    829746a <_ZN12CGameManager17insert_game_worldEP5CUser+0x73a>
 8297418:	8b 45 0c             	mov    0xc(%ebp),%eax
 829741b:	89 04 24             	mov    %eax,(%esp)
 829741e:	e8 59 86 f9 ff       	call   822fa7c <_ZN15CUserCharacInfo28getCurChannelEquipslotSwitchEv>
 8297423:	3c 01                	cmp    $0x1,%al
 8297425:	0f 94 c0             	sete   %al
 8297428:	84 c0                	test   %al,%al
 829742a:	74 3e                	je     829746a <_ZN12CGameManager17insert_game_worldEP5CUser+0x73a>
 829742c:	8b 45 0c             	mov    0xc(%ebp),%eax
 829742f:	89 04 24             	mov    %eax,(%esp)
 8297432:	e8 69 86 f9 ff       	call   822faa0 <_ZN15CUserCharacInfo27getCurExpandEquipslotSwitchEv>
 8297437:	0f be d8             	movsbl %al,%ebx
 829743a:	8b 45 0c             	mov    0xc(%ebp),%eax
 829743d:	89 04 24             	mov    %eax,(%esp)
 8297440:	e8 37 86 f9 ff       	call   822fa7c <_ZN15CUserCharacInfo28getCurChannelEquipslotSwitchEv>
 8297445:	0f be c0             	movsbl %al,%eax
 8297448:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 829744c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8297450:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8297457:	00 
 8297458:	8b 45 0c             	mov    0xc(%ebp),%eax
 829745b:	89 44 24 04          	mov    %eax,0x4(%esp)
 829745f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8297462:	89 04 24             	mov    %eax,(%esp)
 8297465:	e8 d4 1f 20 00       	call   849943e <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc>
 829746a:	e8 38 2f e4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 829746f:	89 04 24             	mov    %eax,(%esp)
 8297472:	e8 a9 f6 e7 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 8297477:	83 f8 0f             	cmp    $0xf,%eax
 829747a:	74 12                	je     829748e <_ZN12CGameManager17insert_game_worldEP5CUser+0x75e>
 829747c:	e8 26 2f e4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8297481:	89 04 24             	mov    %eax,(%esp)
 8297484:	e8 97 f6 e7 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 8297489:	83 f8 10             	cmp    $0x10,%eax
 829748c:	75 07                	jne    8297495 <_ZN12CGameManager17insert_game_worldEP5CUser+0x765>
 829748e:	b8 01 00 00 00       	mov    $0x1,%eax
 8297493:	eb 05                	jmp    829749a <_ZN12CGameManager17insert_game_worldEP5CUser+0x76a>
 8297495:	b8 00 00 00 00       	mov    $0x0,%eax
 829749a:	84 c0                	test   %al,%al
 829749c:	74 28                	je     82974c6 <_ZN12CGameManager17insert_game_worldEP5CUser+0x796>
 829749e:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 82974a5:	00 
 82974a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82974a9:	89 04 24             	mov    %eax,(%esp)
 82974ac:	e8 d3 60 e4 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 82974b1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82974b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82974b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82974bb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82974be:	89 04 24             	mov    %eax,(%esp)
 82974c1:	e8 44 eb 34 00       	call   85e600a <_ZN19CMissionList_Charac23Update_EnterWorld_eventER5CUser>
 82974c6:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 82974cc:	89 04 24             	mov    %eax,(%esp)
 82974cf:	e8 78 68 2f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82974d4:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 82974db:	00 
 82974dc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82974e3:	00 
 82974e4:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 82974ea:	89 04 24             	mov    %eax,(%esp)
 82974ed:	e8 0a 44 e3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82974f2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82974f9:	00 
 82974fa:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8297500:	89 04 24             	mov    %eax,(%esp)
 8297503:	e8 18 44 e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8297508:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 829750f:	00 
 8297510:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8297516:	89 04 24             	mov    %eax,(%esp)
 8297519:	e8 86 29 e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 829751e:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8297524:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 829752b:	00 
 829752c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8297530:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297533:	89 04 24             	mov    %eax,(%esp)
 8297536:	e8 13 2f 3c 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 829753b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8297542:	00 
 8297543:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8297549:	89 04 24             	mov    %eax,(%esp)
 829754c:	e8 07 44 e3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8297551:	e8 51 2e e4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8297556:	8b 55 0c             	mov    0xc(%ebp),%edx
 8297559:	89 54 24 08          	mov    %edx,0x8(%esp)
 829755d:	8d 95 6c ff ff ff    	lea    -0x94(%ebp),%edx
 8297563:	89 54 24 04          	mov    %edx,0x4(%esp)
 8297567:	89 04 24             	mov    %eax,(%esp)
 829756a:	e8 ed d3 e9 ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 829756f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297572:	89 04 24             	mov    %eax,(%esp)
 8297575:	e8 f0 4e 3d 00       	call   866c46a <_ZN5CUser15send_skill_infoEv>
 829757a:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8297580:	89 04 24             	mov    %eax,(%esp)
 8297583:	e8 5e 43 e3 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8297588:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 829758f:	00 
 8297590:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8297597:	00 
 8297598:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 829759e:	89 04 24             	mov    %eax,(%esp)
 82975a1:	e8 56 43 e3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82975a6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82975ad:	00 
 82975ae:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 82975b4:	89 04 24             	mov    %eax,(%esp)
 82975b7:	e8 64 43 e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82975bc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82975c3:	00 
 82975c4:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 82975ca:	89 04 24             	mov    %eax,(%esp)
 82975cd:	e8 d2 28 e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82975d2:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 82975d8:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82975df:	00 
 82975e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82975e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82975e7:	89 04 24             	mov    %eax,(%esp)
 82975ea:	e8 5f 2e 3c 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 82975ef:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82975f6:	00 
 82975f7:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 82975fd:	89 04 24             	mov    %eax,(%esp)
 8297600:	e8 53 43 e3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8297605:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 829760b:	89 44 24 04          	mov    %eax,0x4(%esp)
 829760f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297612:	89 04 24             	mov    %eax,(%esp)
 8297615:	e8 a0 0f 3b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 829761a:	8b 45 0c             	mov    0xc(%ebp),%eax
 829761d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8297621:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8297624:	89 04 24             	mov    %eax,(%esp)
 8297627:	e8 50 2f 20 00       	call   849a57c <_ZN16CExpandEquipslot22Send_Expand_Equip_InfoEP5CUser>
 829762c:	8b 45 0c             	mov    0xc(%ebp),%eax
 829762f:	89 04 24             	mov    %eax,(%esp)
 8297632:	e8 39 a8 3f 00       	call   8691e70 <_ZN5CUser31processReturnUserQuestAutoClearEv>
 8297637:	8b 45 0c             	mov    0xc(%ebp),%eax
 829763a:	89 04 24             	mov    %eax,(%esp)
 829763d:	e8 02 3a 3f 00       	call   868b044 <_ZN5CUser21send_clear_quest_listEv>
 8297642:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8297648:	89 04 24             	mov    %eax,(%esp)
 829764b:	e8 96 42 e3 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8297650:	8d 9d 6c ff ff ff    	lea    -0x94(%ebp),%ebx
 8297656:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297659:	89 04 24             	mov    %eax,(%esp)
 829765c:	e8 45 32 f0 ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 8297661:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8297665:	89 04 24             	mov    %eax,(%esp)
 8297668:	e8 3b 45 41 00       	call   86abba8 <_ZNK9UserQuest14get_quest_infoEPc>
 829766d:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8297673:	89 44 24 04          	mov    %eax,0x4(%esp)
 8297677:	8b 45 0c             	mov    0xc(%ebp),%eax
 829767a:	89 04 24             	mov    %eax,(%esp)
 829767d:	e8 38 0f 3b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8297682:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 8297689:	00 
 829768a:	8b 45 0c             	mov    0xc(%ebp),%eax
 829768d:	89 04 24             	mov    %eax,(%esp)
 8297690:	e8 ef 5e e4 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 8297695:	89 04 24             	mov    %eax,(%esp)
 8297698:	e8 67 a0 3a 00       	call   8641704 <_ZN10CTitleBook8sendListEv>
 829769d:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 82976a4:	00 
 82976a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82976a8:	89 04 24             	mov    %eax,(%esp)
 82976ab:	e8 d4 5e e4 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 82976b0:	89 04 24             	mov    %eax,(%esp)
 82976b3:	e8 26 4e ff ff       	call   828c4de <_ZN12CAchievement8sendListEv>
 82976b8:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82976bf:	00 
 82976c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82976c3:	89 04 24             	mov    %eax,(%esp)
 82976c6:	e8 b9 5e e4 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 82976cb:	8b 55 0c             	mov    0xc(%ebp),%edx
 82976ce:	89 54 24 04          	mov    %edx,0x4(%esp)
 82976d2:	89 04 24             	mov    %eax,(%esp)
 82976d5:	e8 c6 b0 2a 00       	call   85427a0 <_ZN9item_lock9CItemLock16SendItemLockListEP5CUser>
 82976da:	e8 c8 2c e4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 82976df:	89 04 24             	mov    %eax,(%esp)
 82976e2:	e8 39 f4 e7 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 82976e7:	83 f8 0f             	cmp    $0xf,%eax
 82976ea:	0f 95 c0             	setne  %al
 82976ed:	84 c0                	test   %al,%al
 82976ef:	74 12                	je     8297703 <_ZN12CGameManager17insert_game_worldEP5CUser+0x9d3>
 82976f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82976f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82976f8:	8b 45 08             	mov    0x8(%ebp),%eax
 82976fb:	89 04 24             	mov    %eax,(%esp)
 82976fe:	e8 3f ef ff ff       	call   8296642 <_ZN12CGameManager11SendPvpListEP5CUser>
 8297703:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297706:	89 44 24 04          	mov    %eax,0x4(%esp)
 829770a:	8b 45 08             	mov    0x8(%ebp),%eax
 829770d:	89 04 24             	mov    %eax,(%esp)
 8297710:	e8 7f b8 00 00       	call   82a2f94 <_ZN12CGameManager15SendWarRoomListEP5CUser>
 8297715:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297718:	89 04 24             	mov    %eax,(%esp)
 829771b:	e8 32 56 3c 00       	call   865cd52 <_ZN5CUser15send_pvp_recordEv>
 8297720:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297723:	89 44 24 04          	mov    %eax,0x4(%esp)
 8297727:	8b 45 08             	mov    0x8(%ebp),%eax
 829772a:	89 04 24             	mov    %eax,(%esp)
 829772d:	e8 60 f0 ff ff       	call   8296792 <_ZN12CGameManager13SendPartyListEP5CUser>
 8297732:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297735:	89 04 24             	mov    %eax,(%esp)
 8297738:	e8 4b f1 00 00       	call   82a6888 <_ZN5CUser19getPunishTradeAlertEv>
 829773d:	66 3d e7 00          	cmp    $0xe7,%ax
 8297741:	74 11                	je     8297754 <_ZN12CGameManager17insert_game_worldEP5CUser+0xa24>
 8297743:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297746:	89 04 24             	mov    %eax,(%esp)
 8297749:	e8 3a f1 00 00       	call   82a6888 <_ZN5CUser19getPunishTradeAlertEv>
 829774e:	66 3d e8 00          	cmp    $0xe8,%ax
 8297752:	75 07                	jne    829775b <_ZN12CGameManager17insert_game_worldEP5CUser+0xa2b>
 8297754:	b8 01 00 00 00       	mov    $0x1,%eax
 8297759:	eb 05                	jmp    8297760 <_ZN12CGameManager17insert_game_worldEP5CUser+0xa30>
 829775b:	b8 00 00 00 00       	mov    $0x0,%eax
 8297760:	84 c0                	test   %al,%al
 8297762:	74 75                	je     82977d9 <_ZN12CGameManager17insert_game_worldEP5CUser+0xaa9>
 8297764:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 829776a:	89 04 24             	mov    %eax,(%esp)
 829776d:	e8 74 41 e3 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8297772:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 8297779:	00 
 829777a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8297781:	00 
 8297782:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8297788:	89 04 24             	mov    %eax,(%esp)
 829778b:	e8 6c 41 e3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8297790:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297793:	89 04 24             	mov    %eax,(%esp)
 8297796:	e8 ed f0 00 00       	call   82a6888 <_ZN5CUser19getPunishTradeAlertEv>
 829779b:	98                   	cwtl
 829779c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82977a0:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 82977a6:	89 04 24             	mov    %eax,(%esp)
 82977a9:	e8 8e 41 e3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82977ae:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82977b5:	00 
 82977b6:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 82977bc:	89 04 24             	mov    %eax,(%esp)
 82977bf:	e8 94 41 e3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82977c4:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 82977ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 82977ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 82977d1:	89 04 24             	mov    %eax,(%esp)
 82977d4:	e8 e1 0d 3b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82977d9:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 82977df:	89 04 24             	mov    %eax,(%esp)
 82977e2:	e8 ff 40 e3 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 82977e7:	c7 44 24 08 7c 00 00 	movl   $0x7c,0x8(%esp)
 82977ee:	00 
 82977ef:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82977f6:	00 
 82977f7:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 82977fd:	89 04 24             	mov    %eax,(%esp)
 8297800:	e8 f7 40 e3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8297805:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 829780c:	00 
 829780d:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8297813:	89 04 24             	mov    %eax,(%esp)
 8297816:	e8 3d 41 e3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 829781b:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8297821:	89 44 24 04          	mov    %eax,0x4(%esp)
 8297825:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297828:	89 04 24             	mov    %eax,(%esp)
 829782b:	e8 8a 0d 3b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8297830:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297833:	89 04 24             	mov    %eax,(%esp)
 8297836:	e8 1f de fd ff       	call   827565a <_ZN5CUser10GetPICSMapEv>
 829783b:	89 04 24             	mov    %eax,(%esp)
 829783e:	e8 4b b4 01 00       	call   82b2c8e <_ZNSt3mapISt4pairIccEiSt4lessIS1_ESaIS0_IKS1_iEEE5clearEv>
 8297843:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297846:	89 04 24             	mov    %eax,(%esp)
 8297849:	e8 d4 21 3f 00       	call   8689a22 <_ZN5CUser22ReCalcChattingEmoticonEv>
 829784e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297851:	89 04 24             	mov    %eax,(%esp)
 8297854:	e8 37 23 3f 00       	call   8689b90 <_ZN5CUser20SendChattingEmoticonEv>
 8297859:	8d 85 21 ff ff ff    	lea    -0xdf(%ebp),%eax
 829785f:	89 04 24             	mov    %eax,(%esp)
 8297862:	e8 93 c7 00 00       	call   82a3ffa <_ZN24Packet_Monitor_Char_InfoC1Ev>
 8297867:	8b 45 0c             	mov    0xc(%ebp),%eax
 829786a:	89 04 24             	mov    %eax,(%esp)
 829786d:	e8 fc 2a e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8297872:	89 85 2b ff ff ff    	mov    %eax,-0xd5(%ebp)
 8297878:	e8 04 49 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829787d:	89 04 24             	mov    %eax,(%esp)
 8297880:	e8 45 32 eb ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 8297885:	88 85 2f ff ff ff    	mov    %al,-0xd1(%ebp)
 829788b:	e8 17 2b e4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8297890:	89 04 24             	mov    %eax,(%esp)
 8297893:	e8 88 f2 e7 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 8297898:	88 85 5e ff ff ff    	mov    %al,-0xa2(%ebp)
 829789e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 82978a5:	ff 
 82978a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82978a9:	89 04 24             	mov    %eax,(%esp)
 82978ac:	e8 ef 66 3b 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 82978b1:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
 82978b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82978ba:	89 04 24             	mov    %eax,(%esp)
 82978bd:	e8 aa 7b f9 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 82978c2:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 82978c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82978cb:	89 04 24             	mov    %eax,(%esp)
 82978ce:	e8 4d 66 e6 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 82978d3:	88 85 38 ff ff ff    	mov    %al,-0xc8(%ebp)
 82978d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82978dc:	89 04 24             	mov    %eax,(%esp)
 82978df:	e8 38 fb eb ff       	call   815741c <_ZNK15CUserCharacInfo20getCurCharacGrowTypeEv>
 82978e4:	88 85 39 ff ff ff    	mov    %al,-0xc7(%ebp)
 82978ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 82978ed:	89 04 24             	mov    %eax,(%esp)
 82978f0:	e8 c3 29 e4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 82978f5:	66 89 85 3a ff ff ff 	mov    %ax,-0xc6(%ebp)
 82978fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82978ff:	89 04 24             	mov    %eax,(%esp)
 8297902:	e8 bd 7c f9 ff       	call   822f5c4 <_ZN15CUserCharacInfo20get_charac_memberkeyEv>
 8297907:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
 829790d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297910:	89 04 24             	mov    %eax,(%esp)
 8297913:	e8 10 97 e6 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8297918:	89 04 24             	mov    %eax,(%esp)
 829791b:	e8 90 6a de ff       	call   807e3b0 <strlen@plt>
 8297920:	89 c3                	mov    %eax,%ebx
 8297922:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297925:	89 04 24             	mov    %eax,(%esp)
 8297928:	e8 fb 96 e6 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 829792d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8297931:	89 44 24 04          	mov    %eax,0x4(%esp)
 8297935:	8d 85 21 ff ff ff    	lea    -0xdf(%ebp),%eax
 829793b:	83 c0 1f             	add    $0x1f,%eax
 829793e:	89 04 24             	mov    %eax,(%esp)
 8297941:	e8 5a 5f de ff       	call   807d8a0 <memcpy@plt>
 8297946:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297949:	89 04 24             	mov    %eax,(%esp)
 829794c:	e8 35 ee 00 00       	call   82a6786 <_ZN5CUser22IsReturnUserFirstLoginEv>
 8297951:	88 85 5f ff ff ff    	mov    %al,-0xa1(%ebp)
 8297957:	8d 9d 21 ff ff ff    	lea    -0xdf(%ebp),%ebx
 829795d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297960:	89 04 24             	mov    %eax,(%esp)
 8297963:	e8 28 43 e3 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8297968:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 829796e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8297972:	89 14 24             	mov    %edx,(%esp)
 8297975:	e8 10 a7 e7 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 829797a:	c7 44 24 08 3f 00 00 	movl   $0x3f,0x8(%esp)
 8297981:	00 
 8297982:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8297986:	89 04 24             	mov    %eax,(%esp)
 8297989:	e8 b6 94 1d 00       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 829798e:	8d 9d 21 ff ff ff    	lea    -0xdf(%ebp),%ebx
 8297994:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297997:	89 04 24             	mov    %eax,(%esp)
 829799a:	e8 f1 42 e3 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 829799f:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 82979a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 82979a9:	89 14 24             	mov    %edx,(%esp)
 82979ac:	e8 07 5a e8 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 82979b1:	c7 44 24 08 3f 00 00 	movl   $0x3f,0x8(%esp)
 82979b8:	00 
 82979b9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82979bd:	89 04 24             	mov    %eax,(%esp)
 82979c0:	e8 09 63 1d 00       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 82979c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82979c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 82979cc:	c7 04 24 80 e0 43 09 	movl   $0x943e080,(%esp)
 82979d3:	e8 c8 09 2d 00       	call   85683a0 <_ZN10CSchoolMgr7AddUserEP5CUser>
 82979d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82979db:	89 04 24             	mov    %eax,(%esp)
 82979de:	e8 89 7a f9 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 82979e3:	85 c0                	test   %eax,%eax
 82979e5:	0f 95 c0             	setne  %al
 82979e8:	84 c0                	test   %al,%al
 82979ea:	74 1b                	je     8297a07 <_ZN12CGameManager17insert_game_worldEP5CUser+0xcd7>
 82979ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 82979ef:	89 04 24             	mov    %eax,(%esp)
 82979f2:	e8 75 7a f9 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 82979f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82979fb:	c7 04 24 e0 e0 43 09 	movl   $0x943e0e0,(%esp)
 8297a02:	e8 15 2a 01 00       	call   82aa41c <_ZN17CGuildAgitManager18AllocGuildAgitAreaEj>
 8297a07:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297a0a:	89 04 24             	mov    %eax,(%esp)
 8297a0d:	e8 3c 42 e3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8297a12:	89 c7                	mov    %eax,%edi
 8297a14:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297a17:	89 04 24             	mov    %eax,(%esp)
 8297a1a:	e8 73 7c f9 ff       	call   822f692 <_ZN15CUserCharacInfo12GetLoginTickEv>
 8297a1f:	89 c6                	mov    %eax,%esi
 8297a21:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297a24:	89 04 24             	mov    %eax,(%esp)
 8297a27:	e8 6a 12 e3 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8297a2c:	89 c3                	mov    %eax,%ebx
 8297a2e:	e8 49 ea e5 ff       	call   80f647c <_Z12G_TimerQueuev>
 8297a33:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8297a37:	89 74 24 14          	mov    %esi,0x14(%esp)
 8297a3b:	c7 44 24 10 3c 00 00 	movl   $0x3c,0x10(%esp)
 8297a42:	00 
 8297a43:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 8297a4a:	00 
 8297a4b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8297a4f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8297a56:	00 
 8297a57:	89 04 24             	mov    %eax,(%esp)
 8297a5a:	e8 b7 93 39 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8297a5f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297a62:	89 04 24             	mov    %eax,(%esp)
 8297a65:	e8 e4 41 e3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8297a6a:	89 c7                	mov    %eax,%edi
 8297a6c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297a6f:	89 04 24             	mov    %eax,(%esp)
 8297a72:	e8 1b 7c f9 ff       	call   822f692 <_ZN15CUserCharacInfo12GetLoginTickEv>
 8297a77:	89 c6                	mov    %eax,%esi
 8297a79:	c7 04 24 2c 01 00 00 	movl   $0x12c,(%esp)
 8297a80:	e8 02 a1 41 00       	call   86b1b87 <_Z12get_rand_inti>
 8297a85:	05 58 02 00 00       	add    $0x258,%eax
 8297a8a:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 8297a90:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297a93:	89 04 24             	mov    %eax,(%esp)
 8297a96:	e8 fb 11 e3 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8297a9b:	89 c3                	mov    %eax,%ebx
 8297a9d:	e8 da e9 e5 ff       	call   80f647c <_Z12G_TimerQueuev>
 8297aa2:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8297aa6:	89 74 24 14          	mov    %esi,0x14(%esp)
 8297aaa:	8b 95 14 ff ff ff    	mov    -0xec(%ebp),%edx
 8297ab0:	89 54 24 10          	mov    %edx,0x10(%esp)
 8297ab4:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8297abb:	00 
 8297abc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8297ac0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8297ac7:	00 
 8297ac8:	89 04 24             	mov    %eax,(%esp)
 8297acb:	e8 46 93 39 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8297ad0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297ad3:	89 04 24             	mov    %eax,(%esp)
 8297ad6:	e8 73 41 e3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8297adb:	89 c7                	mov    %eax,%edi
 8297add:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297ae0:	89 04 24             	mov    %eax,(%esp)
 8297ae3:	e8 aa 7b f9 ff       	call   822f692 <_ZN15CUserCharacInfo12GetLoginTickEv>
 8297ae8:	89 c6                	mov    %eax,%esi
 8297aea:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297aed:	89 04 24             	mov    %eax,(%esp)
 8297af0:	e8 a1 11 e3 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8297af5:	89 c3                	mov    %eax,%ebx
 8297af7:	e8 80 e9 e5 ff       	call   80f647c <_Z12G_TimerQueuev>
 8297afc:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8297b00:	89 74 24 14          	mov    %esi,0x14(%esp)
 8297b04:	c7 44 24 10 2c 01 00 	movl   $0x12c,0x10(%esp)
 8297b0b:	00 
 8297b0c:	c7 44 24 0c 5f 00 00 	movl   $0x5f,0xc(%esp)
 8297b13:	00 
 8297b14:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8297b18:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8297b1f:	00 
 8297b20:	89 04 24             	mov    %eax,(%esp)
 8297b23:	e8 ee 92 39 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8297b28:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297b2b:	89 04 24             	mov    %eax,(%esp)
 8297b2e:	e8 1b 41 e3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8297b33:	89 c7                	mov    %eax,%edi
 8297b35:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297b38:	89 04 24             	mov    %eax,(%esp)
 8297b3b:	e8 52 7b f9 ff       	call   822f692 <_ZN15CUserCharacInfo12GetLoginTickEv>
 8297b40:	89 c6                	mov    %eax,%esi
 8297b42:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297b45:	89 04 24             	mov    %eax,(%esp)
 8297b48:	e8 49 11 e3 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8297b4d:	89 c3                	mov    %eax,%ebx
 8297b4f:	e8 28 e9 e5 ff       	call   80f647c <_Z12G_TimerQueuev>
 8297b54:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8297b58:	89 74 24 14          	mov    %esi,0x14(%esp)
 8297b5c:	c7 44 24 10 58 02 00 	movl   $0x258,0x10(%esp)
 8297b63:	00 
 8297b64:	c7 44 24 0c 60 00 00 	movl   $0x60,0xc(%esp)
 8297b6b:	00 
 8297b6c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8297b70:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8297b77:	00 
 8297b78:	89 04 24             	mov    %eax,(%esp)
 8297b7b:	e8 96 92 39 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8297b80:	8b 45 0c             	mov    0xc(%ebp),%eax
 8297b83:	89 04 24             	mov    %eax,(%esp)
 8297b86:	e8 e5 45 3f 00       	call   868c170 <_ZN5CUser31send_ontime_reward_start_notifyEv>
 8297b8b:	bb 01 00 00 00       	mov    $0x1,%ebx
 8297b90:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8297b96:	89 04 24             	mov    %eax,(%esp)
 8297b99:	e8 e2 62 2f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8297b9e:	eb 30                	jmp    8297bd0 <_ZN12CGameManager17insert_game_worldEP5CUser+0xea0>
 8297ba0:	89 d3                	mov    %edx,%ebx
 8297ba2:	89 c6                	mov    %eax,%esi
 8297ba4:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8297baa:	89 04 24             	mov    %eax,(%esp)
 8297bad:	e8 ce 62 2f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8297bb2:	89 f0                	mov    %esi,%eax
 8297bb4:	89 da                	mov    %ebx,%edx
 8297bb6:	eb 00                	jmp    8297bb8 <_ZN12CGameManager17insert_game_worldEP5CUser+0xe88>
 8297bb8:	89 d3                	mov    %edx,%ebx
 8297bba:	89 c6                	mov    %eax,%esi
 8297bbc:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8297bc2:	89 04 24             	mov    %eax,(%esp)
 8297bc5:	e8 20 ce e9 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8297bca:	89 f0                	mov    %esi,%eax
 8297bcc:	89 da                	mov    %ebx,%edx
 8297bce:	eb 10                	jmp    8297be0 <_ZN12CGameManager17insert_game_worldEP5CUser+0xeb0>
 8297bd0:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8297bd6:	89 04 24             	mov    %eax,(%esp)
 8297bd9:	e8 0c ce e9 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8297bde:	eb 1b                	jmp    8297bfb <_ZN12CGameManager17insert_game_worldEP5CUser+0xecb>
 8297be0:	89 d3                	mov    %edx,%ebx
 8297be2:	89 c6                	mov    %eax,%esi
 8297be4:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8297be7:	89 04 24             	mov    %eax,(%esp)
 8297bea:	e8 fb cd e9 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8297bef:	89 f0                	mov    %esi,%eax
 8297bf1:	89 da                	mov    %ebx,%edx
 8297bf3:	89 04 24             	mov    %eax,(%esp)
 8297bf6:	e8 55 bb 84 00       	call   8ae3750 <_Unwind_Resume>
 8297bfb:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8297bfe:	89 04 24             	mov    %eax,(%esp)
 8297c01:	e8 e4 cd e9 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8297c06:	89 d8                	mov    %ebx,%eax
 8297c08:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8297c0b:	83 c4 00             	add    $0x0,%esp
 8297c0e:	5b                   	pop    %ebx
 8297c0f:	5e                   	pop    %esi
 8297c10:	5f                   	pop    %edi
 8297c11:	5d                   	pop    %ebp
 8297c12:	c3                   	ret
 8297c13:	90                   	nop

```

```c
// CGameManager::insert_game_world @ 0x8296d30

/* CGameManager::insert_game_world(CUser*) */

undefined4 __thiscall CGameManager::insert_game_world(CGameManager *this,CUser *param_1)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  uint uVar11;
  GameWorld *pGVar12;
  uint uVar13;
  CEventCharacterHandler *this_00;
  UserQuest *this_01;
  CTitleBook *this_02;
  CAchievement *this_03;
  CItemLock *this_04;
  map<std::pair<char,char>,int,std::less<std::pair<char,char>>,std::allocator<std::pair<std::pair<char,char>const,int>>>
  *this_05;
  CEnvironment *this_06;
  char *__s;
  size_t __n;
  void *__src;
  CMonitorServerProxy *this_07;
  CGuildServerProxy *this_08;
  undefined4 uVar14;
  TimerQueue *pTVar15;
  Packet_Monitor_Char_Info local_e3 [10];
  undefined4 local_d9;
  undefined1 local_d5;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined2 local_ca;
  undefined4 local_c8;
  undefined1 auStack_c4 [30];
  undefined1 local_a6;
  undefined1 local_a5;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_a4 [12];
  PacketGuard local_98 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_8c [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_80 [12];
  int local_74 [2];
  undefined4 local_6c;
  int local_68;
  pair<int,int> local_64 [8];
  ENUM_HARDCODE_ITEM local_5c [8];
  undefined4 local_54;
  int local_50;
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  int local_2c;
  int local_28;
  CExpandEquipslot *local_24;
  CMissionList_Charac *local_20;
  
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"App.cpp","bool CGameManager::insert_game_world(CUser*)",0xf20,
               "insert_waiting_room pUser parameter is null.");
    return 0;
  }
  iVar6 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar6 == 0) {
    LogManager::logFormat
              (1,"App.cpp","bool CGameManager::insert_game_world(CUser*)",0xf27,
               "Not selected character(a reason is fast returning to character screen on client)");
    return 0;
  }
  local_2c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_80);
                    /* try { // try from 08296de5 to 08296de9 has its CatchHandler @ 08297be0 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_8c);
  iVar6 = Inter_MonitorGuildPointDel::getLastDeleteTime();
  if (local_2c < iVar6) {
LAB_08296e11:
    bVar2 = false;
  }
  else {
    iVar6 = CUserCharacInfo::getCurCharacLastPlayTick((CUserCharacInfo *)param_1);
    iVar7 = Inter_MonitorGuildPointDel::getLastDeleteTime();
    if (iVar7 <= iVar6) goto LAB_08296e11;
    bVar2 = true;
  }
  if (bVar2) {
    local_6c = 0;
    local_68 = 0xc84;
                    /* try { // try from 08296e3c to 08296f61 has its CatchHandler @ 08297bb8 */
    std::make_pair<int,int>(local_74,&local_68);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              (local_80,(pair *)local_74);
  }
  cVar3 = CUserCharacInfo::getCurCharacGuildSecede((CUserCharacInfo *)param_1);
  if (cVar3 != '\0') {
    local_54 = 0;
    local_50 = 0x4b0;
    std::make_pair<ENUM_HARDCODE_ITEM,int>(local_5c,&local_50);
    std::pair<int,int>::pair<ENUM_HARDCODE_ITEM,int>(local_64,local_5c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back(local_80,local_64)
    ;
    CUserCharacInfo::setCurCharacGuildSecede((CUserCharacInfo *)param_1,'\0');
    uVar8 = CUser::GetServerGroup(param_1);
    uVar9 = CUser::get_charac_no(param_1,-1);
    DB_GuildExpBookDelete::makeRequest(uVar9,0,uVar8);
  }
  CUser::ResetItemByScript(param_1,(vector *)local_80);
  lVar10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  iVar6 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  lVar1 = *(long *)(iVar6 + 0x7b);
  iVar6 = G_CEnvironment();
  cVar3 = CheckDailyScheduleTime(*(int *)(iVar6 + 0x37c),lVar1,lVar10);
  if (cVar3 != '\0') {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_a4);
                    /* try { // try from 08296f82 to 08296fab has its CatchHandler @ 08296fae */
    CUser::deleteDailyStackableItem(param_1,(vector *)local_a4,3,8);
    CUser::deleteDailyStackableItem(param_1,(vector *)local_a4,0x39,0x68);
                    /* try { // try from 08296fd2 to 082974d3 has its CatchHandler @ 08297bb8 */
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_a4);
  }
  CUser::deleteSpecificItem(param_1,(vector *)local_80,(vector *)local_8c);
  cVar3 = CUser::send_itemspace(param_1,0xc);
  if (cVar3 != '\x01') {
    uVar11 = CUser::get_acc_id(param_1);
    uVar8 = NumberToString(uVar11,0);
    LogManager::logFormat
              (1,"App.cpp","bool CGameManager::insert_game_world(CUser*)",0xf58,
               "CGameManager::insert_game_world, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_ACCOUNT_CARGO ) return FAILED"
               ,uVar8);
    uVar8 = 0;
    goto LAB_08297bd0;
  }
  cVar3 = CUser::send_itemspace(param_1,0);
  if (cVar3 != '\x01') {
    uVar11 = CUser::get_acc_id(param_1);
    uVar8 = NumberToString(uVar11,0);
    LogManager::logFormat
              (1,"App.cpp","bool CGameManager::insert_game_world(CUser*)",0xf5f,
               "CGameManager::insert_game_world, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_INVENTORY ) return FAILED"
               ,uVar8);
    uVar8 = 0;
    goto LAB_08297bd0;
  }
  cVar3 = CUser::send_itemspace(param_1,1);
  if (cVar3 != '\x01') {
    uVar11 = CUser::get_acc_id(param_1);
    uVar8 = NumberToString(uVar11,0);
    LogManager::logFormat
              (1,"App.cpp","bool CGameManager::insert_game_world(CUser*)",0xf64,
               "CGameManager::insert_game_world, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_AVATAR ) return FAILED"
               ,uVar8);
    uVar8 = 0;
    goto LAB_08297bd0;
  }
  cVar3 = CUser::send_itemspace(param_1,2);
  if (cVar3 != '\x01') {
    uVar11 = CUser::get_acc_id(param_1);
    uVar8 = NumberToString(uVar11,0);
    LogManager::logFormat
              (1,"App.cpp","bool CGameManager::insert_game_world(CUser*)",0xf69,
               "CGameManager::insert_game_world, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_CARGO ) return FAILED"
               ,uVar8);
    uVar8 = 0;
    goto LAB_08297bd0;
  }
  cVar3 = CUser::send_itemspace(param_1,7);
  if (cVar3 != '\x01') {
    uVar11 = CUser::get_acc_id(param_1);
    uVar8 = NumberToString(uVar11,0);
    LogManager::logFormat
              (1,"App.cpp","bool CGameManager::insert_game_world(CUser*)",0xf7a,
               "CGameManager::insert_game_world, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_CREATURE ) return FAILED"
               ,uVar8);
    uVar8 = 0;
    goto LAB_08297bd0;
  }
  pGVar12 = (GameWorld *)G_GameWorld();
  iVar6 = GameWorld::GetChannelType(pGVar12);
  if (iVar6 == 0xe) {
    CUserCharacInfo::set_charac_guildkey((CUserCharacInfo *)param_1,0);
  }
  pGVar12 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::reach_game_world(pGVar12,param_1);
  if (cVar3 != '\x01') {
    uVar11 = CUser::get_acc_id(param_1);
    uVar8 = NumberToString(uVar11,0);
    uVar11 = CUser::get_unique_id(param_1);
    cMyTrace::cMyTrace(local_4c,"bool CGameManager::insert_game_world(CUser*)",0xfa2,0);
    cMyTrace::operator()
              (local_4c,
               "CGameManager::insert_game_world , !G_GameWorld()->reach_game_world( pUser ) , USER : %d(%s)"
               ,uVar11 & 0xffff,uVar8);
    CUser::SendCmdErrorPacket(param_1,1,4);
    uVar11 = CUser::get_unique_id(param_1);
    uVar13 = CUser::get_acc_id(param_1);
    uVar8 = NumberToString(uVar13,0);
    cMyTrace::cMyTrace(local_3c,"bool CGameManager::insert_game_world(CUser*)",0xfab,0);
    cMyTrace::operator()(local_3c,"from (%d) m_id[%s] uid[%d]",1,uVar8,uVar11 & 0xffff);
    uVar8 = 0;
    goto LAB_08297bd0;
  }
  cVar3 = CUserCharacInfo::getCurCharacEventCharacterGrowtype((CUserCharacInfo *)param_1);
  local_28 = (int)cVar3;
  if (0 < local_28) {
    this_00 = (CEventCharacterHandler *)CEventCharacterHandlerInstance();
    CEventCharacterHandler::_makeEventCharacter(this_00,param_1,0x28);
  }
  local_24 = (CExpandEquipslot *)CUser::GetCharacExpandData(param_1,9);
  pGVar12 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsEquipSlotSwitchChannel(pGVar12);
  if (cVar3 == '\0') {
    cVar3 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
    if (cVar3 == '\x01') {
      cVar3 = CUserCharacInfo::getCurExpandEquipslotSwitch((CUserCharacInfo *)param_1);
      cVar4 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
      CExpandEquipslot::EquipslotSwitch(local_24,param_1,'\0',cVar4,cVar3);
    }
  }
  else {
    cVar3 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
    if (cVar3 == '\0') {
      cVar3 = CUserCharacInfo::getCurExpandEquipslotSwitch((CUserCharacInfo *)param_1);
      cVar4 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
      CExpandEquipslot::EquipslotSwitch(local_24,param_1,'\0',cVar4,cVar3);
    }
  }
  pGVar12 = (GameWorld *)G_GameWorld();
  iVar6 = GameWorld::GetChannelType(pGVar12);
  if (iVar6 == 0xf) {
LAB_0829748e:
    bVar2 = true;
  }
  else {
    pGVar12 = (GameWorld *)G_GameWorld();
    iVar6 = GameWorld::GetChannelType(pGVar12);
    if (iVar6 == 0x10) goto LAB_0829748e;
    bVar2 = false;
  }
  if (bVar2) {
    local_20 = (CMissionList_Charac *)CUser::GetCharacExpandData(param_1,8);
    CMissionList_Charac::Update_EnterWorld_event(local_20,param_1);
  }
  PacketGuard::PacketGuard(local_98);
                    /* try { // try from 082974ed to 08297b8a has its CatchHandler @ 08297ba0 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_98,0,2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_98,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_98,1);
  CUser::make_basic_info(param_1,(char *)local_98,'\0');
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_98,true);
  pGVar12 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(pGVar12,local_98,param_1);
  CUser::send_skill_info(param_1);
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_98);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_98,0,2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_98,1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_98,1);
  CUser::make_basic_info(param_1,(char *)local_98,'\x01');
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_98,true);
  CUser::Send(param_1,local_98);
  CExpandEquipslot::Send_Expand_Equip_Info(local_24,param_1);
  CUser::processReturnUserQuestAutoClear(param_1);
  CUser::send_clear_quest_list(param_1);
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_98);
  this_01 = (UserQuest *)CUser::getCurCharacQuestR(param_1);
  UserQuest::get_quest_info(this_01,(char *)local_98);
  CUser::Send(param_1,local_98);
  this_02 = (CTitleBook *)CUser::GetCharacExpandData(param_1,0xe);
  CTitleBook::sendList(this_02);
  this_03 = (CAchievement *)CUser::GetCharacExpandData(param_1,0xf);
  CAchievement::sendList(this_03);
  this_04 = (CItemLock *)CUser::GetCharacExpandData(param_1,2);
  item_lock::CItemLock::SendItemLockList(this_04,param_1);
  pGVar12 = (GameWorld *)G_GameWorld();
  iVar6 = GameWorld::GetChannelType(pGVar12);
  if (iVar6 != 0xf) {
    SendPvpList(this,param_1);
  }
  SendWarRoomList(this,param_1);
  CUser::send_pvp_record(param_1);
  SendPartyList(this,param_1);
  sVar5 = CUser::getPunishTradeAlert(param_1);
  if ((sVar5 == 0xe7) || (sVar5 = CUser::getPunishTradeAlert(param_1), sVar5 == 0xe8)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_98);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_98,0,0xff);
    sVar5 = CUser::getPunishTradeAlert(param_1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_98,(int)sVar5);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_98,true);
    CUser::Send(param_1,local_98);
  }
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_98);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_98,0,0x7c);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_98,true);
  CUser::Send(param_1,local_98);
  this_05 = (map<std::pair<char,char>,int,std::less<std::pair<char,char>>,std::allocator<std::pair<std::pair<char,char>const,int>>>
             *)CUser::GetPICSMap(param_1);
  std::
  map<std::pair<char,char>,int,std::less<std::pair<char,char>>,std::allocator<std::pair<std::pair<char,char>const,int>>>
  ::clear(this_05);
  CUser::ReCalcChattingEmoticon(param_1);
  CUser::SendChattingEmoticon(param_1);
  Packet_Monitor_Char_Info::Packet_Monitor_Char_Info(local_e3);
  local_d9 = CUser::get_acc_id(param_1);
  this_06 = (CEnvironment *)G_CEnvironment();
  local_d5 = CEnvironment::get_channel_no(this_06);
  pGVar12 = (GameWorld *)G_GameWorld();
  local_a6 = GameWorld::GetChannelType(pGVar12);
  local_d4 = CUser::get_charac_no(param_1,-1);
  local_d0 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
  local_cc = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  local_cb = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)param_1);
  local_ca = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  local_c8 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_1);
  __s = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  __n = strlen(__s);
  __src = (void *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  memcpy(auStack_c4,__src,__n);
  local_a5 = CUser::IsReturnUserFirstLogin(param_1);
  uVar8 = CUser::GetServerGroup(param_1);
  this_07 = (CMonitorServerProxy *)
            CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                      (GlobalData::s_monitor_proxy_mgr,uVar8);
  CMonitorServerProxy::SendTcpPacket(this_07,(char *)local_e3,0x3f);
  uVar8 = CUser::GetServerGroup(param_1);
  this_08 = (CGuildServerProxy *)
            CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar8);
  CGuildServerProxy::SendTcpPacket(this_08,(char *)local_e3,0x3f);
  CSchoolMgr::AddUser((CSchoolMgr *)g_schoolMgr,param_1);
  iVar6 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
  if (iVar6 != 0) {
    uVar11 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
    CGuildAgitManager::AllocGuildAgitArea((CGuildAgitManager *)g_guildAgitMgr,uVar11);
  }
  uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  uVar9 = CUserCharacInfo::GetLoginTick((CUserCharacInfo *)param_1);
  uVar14 = CUser::GetUID(param_1);
  pTVar15 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar15,0,uVar14,2,0x3c,uVar9,uVar8);
  uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  uVar9 = CUserCharacInfo::GetLoginTick((CUserCharacInfo *)param_1);
  iVar6 = get_rand_int(300);
  uVar14 = CUser::GetUID(param_1);
  pTVar15 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar15,0,uVar14,1,iVar6 + 600,uVar9,uVar8);
  uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  uVar9 = CUserCharacInfo::GetLoginTick((CUserCharacInfo *)param_1);
  uVar14 = CUser::GetUID(param_1);
  pTVar15 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar15,0,uVar14,0x5f,300,uVar9,uVar8);
  uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  uVar9 = CUserCharacInfo::GetLoginTick((CUserCharacInfo *)param_1);
  uVar14 = CUser::GetUID(param_1);
  pTVar15 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar15,0,uVar14,0x60,600,uVar9,uVar8);
  CUser::send_ontime_reward_start_notify(param_1);
  uVar8 = 1;
                    /* try { // try from 08297b99 to 08297b9d has its CatchHandler @ 08297bb8 */
  PacketGuard::~PacketGuard(local_98);
LAB_08297bd0:
                    /* try { // try from 08297bd9 to 08297bdd has its CatchHandler @ 08297be0 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_8c);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_80);
  return uVar8;
}

```

---

## isConnectUserByAccId

```asm
// === 08294ad0 CGameManager::isConnectUserByAccId  [0x08294ad0-0x8294b2b] ===
 8294ad0:	55                   	push   %ebp
 8294ad1:	89 e5                	mov    %esp,%ebp
 8294ad3:	83 ec 28             	sub    $0x28,%esp
 8294ad6:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8294add:	eb 38                	jmp    8294b17 <_ZN12CGameManager20isConnectUserByAccIdEj+0x47>
 8294adf:	8b 45 08             	mov    0x8(%ebp),%eax
 8294ae2:	8d 50 4c             	lea    0x4c(%eax),%edx
 8294ae5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8294ae8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294aec:	89 14 24             	mov    %edx,(%esp)
 8294aef:	e8 18 ba 01 00       	call   82b050c <_ZN10StaticPoolI5CUserLi600EE3GetEi>
 8294af4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8294af7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8294afa:	89 04 24             	mov    %eax,(%esp)
 8294afd:	e8 6c 58 e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8294b02:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8294b05:	0f 94 c0             	sete   %al
 8294b08:	84 c0                	test   %al,%al
 8294b0a:	74 07                	je     8294b13 <_ZN12CGameManager20isConnectUserByAccIdEj+0x43>
 8294b0c:	b8 01 00 00 00       	mov    $0x1,%eax
 8294b11:	eb 17                	jmp    8294b2a <_ZN12CGameManager20isConnectUserByAccIdEj+0x5a>
 8294b13:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8294b17:	81 7d f0 57 02 00 00 	cmpl   $0x257,-0x10(%ebp)
 8294b1e:	0f 9e c0             	setle  %al
 8294b21:	84 c0                	test   %al,%al
 8294b23:	75 ba                	jne    8294adf <_ZN12CGameManager20isConnectUserByAccIdEj+0xf>
 8294b25:	b8 00 00 00 00       	mov    $0x0,%eax
 8294b2a:	c9                   	leave
 8294b2b:	c3                   	ret

```

```c
// CGameManager::isConnectUserByAccId @ 0x8294ad0

/* CGameManager::isConnectUserByAccId(unsigned int) */

undefined4 __thiscall CGameManager::isConnectUserByAccId(CGameManager *this,uint param_1)

{
  CUser *this_00;
  uint uVar1;
  int local_14;
  
  local_14 = 0;
  while( true ) {
    if (599 < local_14) {
      return 0;
    }
    this_00 = (CUser *)StaticPool<CUser,600>::Get((StaticPool<CUser,600> *)(this + 0x4c),local_14);
    uVar1 = CUser::get_acc_id(this_00);
    if (uVar1 == param_1) break;
    local_14 = local_14 + 1;
  }
  return 1;
}

```

---

## onTimeAdvanceAltar

```asm
// === 08295d82 CGameManager::onTimeAdvanceAltar  [0x08295d82-0x8295e75] ===
 8295d82:	55                   	push   %ebp
 8295d83:	89 e5                	mov    %esp,%ebp
 8295d85:	83 ec 48             	sub    $0x48,%esp
 8295d88:	8b 45 08             	mov    0x8(%ebp),%eax
 8295d8b:	8d 90 c0 02 00 00    	lea    0x2c0(%eax),%edx
 8295d91:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8295d94:	89 54 24 04          	mov    %edx,0x4(%esp)
 8295d98:	89 04 24             	mov    %eax,(%esp)
 8295d9b:	e8 80 cc 01 00       	call   82b2a20 <_ZN9__gnu_cxx8hash_mapIiPN12advancealtar12StageControlENS_4hashIiEESt8equal_toIiESaIS3_EE5beginEv>
 8295da0:	83 ec 04             	sub    $0x4,%esp
 8295da3:	e9 96 00 00 00       	jmp    8295e3e <_ZN12CGameManager18onTimeAdvanceAltarEv+0xbc>
 8295da8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8295dab:	89 04 24             	mov    %eax,(%esp)
 8295dae:	e8 d3 ca 01 00       	call   82b2886 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiPN12advancealtar12StageControlEEiNS_4hashIiEESt10_Select1stIS6_ESt8equal_toIiESaIS5_EEptEv>
 8295db3:	8b 40 04             	mov    0x4(%eax),%eax
 8295db6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8295db9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8295dbc:	89 04 24             	mov    %eax,(%esp)
 8295dbf:	e8 d4 9d e9 ff       	call   812fb98 <_ZN12advancealtar12StageControl16onTimerStageTickEv>
 8295dc4:	83 f0 01             	xor    $0x1,%eax
 8295dc7:	84 c0                	test   %al,%al
 8295dc9:	74 56                	je     8295e21 <_ZN12CGameManager18onTimeAdvanceAltarEv+0x9f>
 8295dcb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8295dce:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8295dd5:	00 
 8295dd6:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8295dd9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8295ddd:	89 04 24             	mov    %eax,(%esp)
 8295de0:	e8 61 cc 01 00       	call   82b2a46 <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiPN12advancealtar12StageControlEEiNS_4hashIiEESt10_Select1stIS6_ESt8equal_toIiESaIS5_EEppEi>
 8295de5:	83 ec 04             	sub    $0x4,%esp
 8295de8:	8b 45 08             	mov    0x8(%ebp),%eax
 8295deb:	8d 88 c0 02 00 00    	lea    0x2c0(%eax),%ecx
 8295df1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8295df4:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8295df7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295dfb:	89 54 24 08          	mov    %edx,0x8(%esp)
 8295dff:	89 0c 24             	mov    %ecx,(%esp)
 8295e02:	e8 75 cc 01 00       	call   82b2a7c <_ZN9__gnu_cxx8hash_mapIiPN12advancealtar12StageControlENS_4hashIiEESt8equal_toIiESaIS3_EE5eraseENS_19_Hashtable_iteratorISt4pairIKiS3_EiS5_St10_Select1stISD_ES7_S8_EE>
 8295e07:	8b 45 08             	mov    0x8(%ebp),%eax
 8295e0a:	8d 90 9c 01 00 00    	lea    0x19c(%eax),%edx
 8295e10:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8295e13:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295e17:	89 14 24             	mov    %edx,(%esp)
 8295e1a:	e8 a9 ca 01 00       	call   82b28c8 <_ZN10StaticPoolIN12advancealtar12StageControlELi600EE4FreeEPS1_>
 8295e1f:	eb 1d                	jmp    8295e3e <_ZN12CGameManager18onTimeAdvanceAltarEv+0xbc>
 8295e21:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8295e24:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8295e2b:	00 
 8295e2c:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8295e2f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8295e33:	89 04 24             	mov    %eax,(%esp)
 8295e36:	e8 0b cc 01 00       	call   82b2a46 <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiPN12advancealtar12StageControlEEiNS_4hashIiEESt10_Select1stIS6_ESt8equal_toIiESaIS5_EEppEi>
 8295e3b:	83 ec 04             	sub    $0x4,%esp
 8295e3e:	8b 45 08             	mov    0x8(%ebp),%eax
 8295e41:	8d 90 c0 02 00 00    	lea    0x2c0(%eax),%edx
 8295e47:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8295e4a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8295e4e:	89 04 24             	mov    %eax,(%esp)
 8295e51:	e8 b8 c9 01 00       	call   82b280e <_ZN9__gnu_cxx8hash_mapIiPN12advancealtar12StageControlENS_4hashIiEESt8equal_toIiESaIS3_EE3endEv>
 8295e56:	83 ec 04             	sub    $0x4,%esp
 8295e59:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8295e5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295e60:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8295e63:	89 04 24             	mov    %eax,(%esp)
 8295e66:	e8 2f ca 01 00       	call   82b289a <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiPN12advancealtar12StageControlEEiNS_4hashIiEESt10_Select1stIS6_ESt8equal_toIiESaIS5_EEneERKSE_>
 8295e6b:	84 c0                	test   %al,%al
 8295e6d:	0f 85 35 ff ff ff    	jne    8295da8 <_ZN12CGameManager18onTimeAdvanceAltarEv+0x26>
 8295e73:	c9                   	leave
 8295e74:	c3                   	ret
 8295e75:	90                   	nop

```

```c
// CGameManager::onTimeAdvanceAltar @ 0x8295d82

/* CGameManager::onTimeAdvanceAltar() */

void __thiscall CGameManager::onTimeAdvanceAltar(CGameManager *this)

{
  char cVar1;
  int iVar2;
  hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  local_30 [8];
  hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  local_18 [8];
  StageControl *local_10;
  
  __gnu_cxx::
  hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  ::begin(local_30);
  while( true ) {
    __gnu_cxx::
    hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
    ::end(local_28);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
                          *)local_30,(_Hashtable_iterator *)local_28);
    if (cVar1 == '\0') break;
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
                          *)local_30);
    local_10 = *(StageControl **)(iVar2 + 4);
    cVar1 = advancealtar::StageControl::onTimerStageTick(local_10);
    if (cVar1 == '\x01') {
      __gnu_cxx::
      _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
      ::operator++(local_18,(int)local_30);
    }
    else {
      __gnu_cxx::
      _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
      ::operator++((_Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
                    *)&local_20,(int)local_30);
      __gnu_cxx::
      hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
      ::erase(this + 0x2c0,local_20,local_1c);
      StaticPool<advancealtar::StageControl,600>::Free
                ((StaticPool<advancealtar::StageControl,600> *)(this + 0x19c),local_10);
    }
  }
  return;
}

```

---

## putBlueMarble

```asm
// === 082a2434 CGameManager::putBlueMarble  [0x082a2434-0x82a24e7] ===
 82a2434:	55                   	push   %ebp
 82a2435:	89 e5                	mov    %esp,%ebp
 82a2437:	83 ec 38             	sub    $0x38,%esp
 82a243a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 82a243e:	0f 84 a1 00 00 00    	je     82a24e5 <_ZN12CGameManager13putBlueMarbleEP10BlueMarble+0xb1>
 82a2444:	8b 45 0c             	mov    0xc(%ebp),%eax
 82a2447:	89 04 24             	mov    %eax,(%esp)
 82a244a:	e8 e5 67 e3 ff       	call   80d8c34 <_ZNK10BlueMarble18getMemoryPoolIndexEv>
 82a244f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82a2452:	8b 45 08             	mov    0x8(%ebp),%eax
 82a2455:	8d 88 e8 02 00 00    	lea    0x2e8(%eax),%ecx
 82a245b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82a245e:	8d 55 e8             	lea    -0x18(%ebp),%edx
 82a2461:	89 54 24 08          	mov    %edx,0x8(%esp)
 82a2465:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82a2469:	89 04 24             	mov    %eax,(%esp)
 82a246c:	e8 1d 23 01 00       	call   82b478e <_ZN9__gnu_cxx8hash_mapIiP10BlueMarbleNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 82a2471:	83 ec 04             	sub    $0x4,%esp
 82a2474:	8b 45 08             	mov    0x8(%ebp),%eax
 82a2477:	8d 90 e8 02 00 00    	lea    0x2e8(%eax),%edx
 82a247d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82a2480:	89 54 24 04          	mov    %edx,0x4(%esp)
 82a2484:	89 04 24             	mov    %eax,(%esp)
 82a2487:	e8 2e 23 01 00       	call   82b47ba <_ZN9__gnu_cxx8hash_mapIiP10BlueMarbleNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 82a248c:	83 ec 04             	sub    $0x4,%esp
 82a248f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82a2492:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a2496:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82a2499:	89 04 24             	mov    %eax,(%esp)
 82a249c:	e8 a5 23 01 00       	call   82b4846 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP10BlueMarbleEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 82a24a1:	84 c0                	test   %al,%al
 82a24a3:	74 41                	je     82a24e6 <_ZN12CGameManager13putBlueMarbleEP10BlueMarble+0xb2>
 82a24a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82a24a8:	89 04 24             	mov    %eax,(%esp)
 82a24ab:	e8 84 67 e3 ff       	call   80d8c34 <_ZNK10BlueMarble18getMemoryPoolIndexEv>
 82a24b0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82a24b3:	8b 45 08             	mov    0x8(%ebp),%eax
 82a24b6:	8d 90 e8 02 00 00    	lea    0x2e8(%eax),%edx
 82a24bc:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82a24bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a24c3:	89 14 24             	mov    %edx,(%esp)
 82a24c6:	e8 8f 23 01 00       	call   82b485a <_ZN9__gnu_cxx8hash_mapIiP10BlueMarbleNS_4hashIiEESt8equal_toIiESaIS2_EE5eraseERKi>
 82a24cb:	8b 45 08             	mov    0x8(%ebp),%eax
 82a24ce:	8d 90 fc 01 00 00    	lea    0x1fc(%eax),%edx
 82a24d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82a24d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82a24db:	89 14 24             	mov    %edx,(%esp)
 82a24de:	e8 91 23 01 00       	call   82b4874 <_ZN10StaticPoolI10BlueMarbleLi300EE4FreeEPS0_>
 82a24e3:	eb 01                	jmp    82a24e6 <_ZN12CGameManager13putBlueMarbleEP10BlueMarble+0xb2>
 82a24e5:	90                   	nop
 82a24e6:	c9                   	leave
 82a24e7:	c3                   	ret

```

```c
// CGameManager::putBlueMarble @ 0x82a2434

/* CGameManager::putBlueMarble(BlueMarble*) */

void __thiscall CGameManager::putBlueMarble(CGameManager *this,BlueMarble *param_1)

{
  char cVar1;
  _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
  local_24 [8];
  undefined4 local_1c;
  hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
  local_18 [8];
  int local_10 [3];
  
  if (param_1 != (BlueMarble *)0x0) {
    local_1c = BlueMarble::getMemoryPoolIndex(param_1);
    __gnu_cxx::
    hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>::
    find((int *)local_24);
    __gnu_cxx::
    hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>::
    end(local_18);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
            ::operator!=(local_24,(_Hashtable_iterator *)local_18);
    if (cVar1 != '\0') {
      local_10[0] = BlueMarble::getMemoryPoolIndex(param_1);
      __gnu_cxx::
      hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
      ::erase((hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
               *)(this + 0x2e8),local_10);
      StaticPool<BlueMarble,300>::Free((StaticPool<BlueMarble,300> *)(this + 0x1fc),param_1);
    }
  }
  return;
}

```

---

## returnAdvanceAltar

```asm
// === 08295cce CGameManager::returnAdvanceAltar  [0x08295cce-0x8295d81] ===
 8295cce:	55                   	push   %ebp
 8295ccf:	89 e5                	mov    %esp,%ebp
 8295cd1:	83 ec 38             	sub    $0x38,%esp
 8295cd4:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8295cd8:	0f 84 a1 00 00 00    	je     8295d7f <_ZN12CGameManager18returnAdvanceAltarEPN12advancealtar12StageControlE+0xb1>
 8295cde:	8b 45 0c             	mov    0xc(%ebp),%eax
 8295ce1:	89 04 24             	mov    %eax,(%esp)
 8295ce4:	e8 d1 eb e9 ff       	call   81348ba <_ZNK12advancealtar12StageControl8getIndexEv>
 8295ce9:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8295cec:	8b 45 08             	mov    0x8(%ebp),%eax
 8295cef:	8d 88 c0 02 00 00    	lea    0x2c0(%eax),%ecx
 8295cf5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8295cf8:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8295cfb:	89 54 24 08          	mov    %edx,0x8(%esp)
 8295cff:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8295d03:	89 04 24             	mov    %eax,(%esp)
 8295d06:	e8 d7 ca 01 00       	call   82b27e2 <_ZN9__gnu_cxx8hash_mapIiPN12advancealtar12StageControlENS_4hashIiEESt8equal_toIiESaIS3_EE4findERKi>
 8295d0b:	83 ec 04             	sub    $0x4,%esp
 8295d0e:	8b 45 08             	mov    0x8(%ebp),%eax
 8295d11:	8d 90 c0 02 00 00    	lea    0x2c0(%eax),%edx
 8295d17:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8295d1a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8295d1e:	89 04 24             	mov    %eax,(%esp)
 8295d21:	e8 e8 ca 01 00       	call   82b280e <_ZN9__gnu_cxx8hash_mapIiPN12advancealtar12StageControlENS_4hashIiEESt8equal_toIiESaIS3_EE3endEv>
 8295d26:	83 ec 04             	sub    $0x4,%esp
 8295d29:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8295d2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295d30:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8295d33:	89 04 24             	mov    %eax,(%esp)
 8295d36:	e8 5f cb 01 00       	call   82b289a <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiPN12advancealtar12StageControlEEiNS_4hashIiEESt10_Select1stIS6_ESt8equal_toIiESaIS5_EEneERKSE_>
 8295d3b:	84 c0                	test   %al,%al
 8295d3d:	74 41                	je     8295d80 <_ZN12CGameManager18returnAdvanceAltarEPN12advancealtar12StageControlE+0xb2>
 8295d3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8295d42:	89 04 24             	mov    %eax,(%esp)
 8295d45:	e8 70 eb e9 ff       	call   81348ba <_ZNK12advancealtar12StageControl8getIndexEv>
 8295d4a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8295d4d:	8b 45 08             	mov    0x8(%ebp),%eax
 8295d50:	8d 90 c0 02 00 00    	lea    0x2c0(%eax),%edx
 8295d56:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8295d59:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295d5d:	89 14 24             	mov    %edx,(%esp)
 8295d60:	e8 49 cb 01 00       	call   82b28ae <_ZN9__gnu_cxx8hash_mapIiPN12advancealtar12StageControlENS_4hashIiEESt8equal_toIiESaIS3_EE5eraseERKi>
 8295d65:	8b 45 08             	mov    0x8(%ebp),%eax
 8295d68:	8d 90 9c 01 00 00    	lea    0x19c(%eax),%edx
 8295d6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8295d71:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295d75:	89 14 24             	mov    %edx,(%esp)
 8295d78:	e8 4b cb 01 00       	call   82b28c8 <_ZN10StaticPoolIN12advancealtar12StageControlELi600EE4FreeEPS1_>
 8295d7d:	eb 01                	jmp    8295d80 <_ZN12CGameManager18returnAdvanceAltarEPN12advancealtar12StageControlE+0xb2>
 8295d7f:	90                   	nop
 8295d80:	c9                   	leave
 8295d81:	c3                   	ret

```

```c
// CGameManager::returnAdvanceAltar @ 0x8295cce

/* CGameManager::returnAdvanceAltar(advancealtar::StageControl*) */

void __thiscall CGameManager::returnAdvanceAltar(CGameManager *this,StageControl *param_1)

{
  char cVar1;
  _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  local_24 [8];
  undefined4 local_1c;
  hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  local_18 [8];
  int local_10 [3];
  
  if (param_1 != (StageControl *)0x0) {
    local_1c = advancealtar::StageControl::getIndex(param_1);
    __gnu_cxx::
    hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
    ::find((int *)local_24);
    __gnu_cxx::
    hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
    ::end(local_18);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
            ::operator!=(local_24,(_Hashtable_iterator *)local_18);
    if (cVar1 != '\0') {
      local_10[0] = advancealtar::StageControl::getIndex(param_1);
      __gnu_cxx::
      hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
      ::erase((hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
               *)(this + 0x2c0),local_10);
      StaticPool<advancealtar::StageControl,600>::Free
                ((StaticPool<advancealtar::StageControl,600> *)(this + 0x19c),param_1);
    }
  }
  return;
}

```

---

## returnBossTower

```asm
// === 08295a90 CGameManager::returnBossTower  [0x08295a90-0x8295b43] ===
 8295a90:	55                   	push   %ebp
 8295a91:	89 e5                	mov    %esp,%ebp
 8295a93:	83 ec 38             	sub    $0x38,%esp
 8295a96:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8295a9a:	0f 84 a1 00 00 00    	je     8295b41 <_ZN12CGameManager15returnBossTowerEPN8WongWork10CBossTowerE+0xb1>
 8295aa0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8295aa3:	89 04 24             	mov    %eax,(%esp)
 8295aa6:	e8 7d 4c 01 00       	call   82aa728 <_ZN8WongWork10CBossTower6getIdxEv>
 8295aab:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8295aae:	8b 45 08             	mov    0x8(%ebp),%eax
 8295ab1:	8d 88 ac 02 00 00    	lea    0x2ac(%eax),%ecx
 8295ab7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8295aba:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8295abd:	89 54 24 08          	mov    %edx,0x8(%esp)
 8295ac1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8295ac5:	89 04 24             	mov    %eax,(%esp)
 8295ac8:	e8 6d c8 01 00       	call   82b233a <_ZN9__gnu_cxx8hash_mapIiPN8WongWork10CBossTowerENS_4hashIiEESt8equal_toIiESaIS3_EE4findERKi>
 8295acd:	83 ec 04             	sub    $0x4,%esp
 8295ad0:	8b 45 08             	mov    0x8(%ebp),%eax
 8295ad3:	8d 90 ac 02 00 00    	lea    0x2ac(%eax),%edx
 8295ad9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8295adc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8295ae0:	89 04 24             	mov    %eax,(%esp)
 8295ae3:	e8 7e c8 01 00       	call   82b2366 <_ZN9__gnu_cxx8hash_mapIiPN8WongWork10CBossTowerENS_4hashIiEESt8equal_toIiESaIS3_EE3endEv>
 8295ae8:	83 ec 04             	sub    $0x4,%esp
 8295aeb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8295aee:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295af2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8295af5:	89 04 24             	mov    %eax,(%esp)
 8295af8:	e8 f5 c8 01 00       	call   82b23f2 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiPN8WongWork10CBossTowerEEiNS_4hashIiEESt10_Select1stIS6_ESt8equal_toIiESaIS5_EEneERKSE_>
 8295afd:	84 c0                	test   %al,%al
 8295aff:	74 41                	je     8295b42 <_ZN12CGameManager15returnBossTowerEPN8WongWork10CBossTowerE+0xb2>
 8295b01:	8b 45 0c             	mov    0xc(%ebp),%eax
 8295b04:	89 04 24             	mov    %eax,(%esp)
 8295b07:	e8 1c 4c 01 00       	call   82aa728 <_ZN8WongWork10CBossTower6getIdxEv>
 8295b0c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8295b0f:	8b 45 08             	mov    0x8(%ebp),%eax
 8295b12:	8d 90 ac 02 00 00    	lea    0x2ac(%eax),%edx
 8295b18:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8295b1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295b1f:	89 14 24             	mov    %edx,(%esp)
 8295b22:	e8 df c8 01 00       	call   82b2406 <_ZN9__gnu_cxx8hash_mapIiPN8WongWork10CBossTowerENS_4hashIiEESt8equal_toIiESaIS3_EE5eraseERKi>
 8295b27:	8b 45 08             	mov    0x8(%ebp),%eax
 8295b2a:	8d 90 6c 01 00 00    	lea    0x16c(%eax),%edx
 8295b30:	8b 45 0c             	mov    0xc(%ebp),%eax
 8295b33:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295b37:	89 14 24             	mov    %edx,(%esp)
 8295b3a:	e8 e1 c8 01 00       	call   82b2420 <_ZN10StaticPoolIN8WongWork10CBossTowerELi600EE4FreeEPS1_>
 8295b3f:	eb 01                	jmp    8295b42 <_ZN12CGameManager15returnBossTowerEPN8WongWork10CBossTowerE+0xb2>
 8295b41:	90                   	nop
 8295b42:	c9                   	leave
 8295b43:	c3                   	ret

```

```c
// CGameManager::returnBossTower @ 0x8295a90

/* CGameManager::returnBossTower(WongWork::CBossTower*) */

void __thiscall CGameManager::returnBossTower(CGameManager *this,CBossTower *param_1)

{
  char cVar1;
  _Hashtable_iterator<std::pair<int_const,WongWork::CBossTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CBossTower*>>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
  local_24 [8];
  undefined4 local_1c;
  hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
  local_18 [8];
  int local_10 [3];
  
  if (param_1 != (CBossTower *)0x0) {
    local_1c = WongWork::CBossTower::getIdx(param_1);
    __gnu_cxx::
    hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
    ::find((int *)local_24);
    __gnu_cxx::
    hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
    ::end(local_18);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WongWork::CBossTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CBossTower*>>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
            ::operator!=(local_24,(_Hashtable_iterator *)local_18);
    if (cVar1 != '\0') {
      local_10[0] = WongWork::CBossTower::getIdx(param_1);
      __gnu_cxx::
      hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
      ::erase((hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
               *)(this + 0x2ac),local_10);
      StaticPool<WongWork::CBossTower,600>::Free
                ((StaticPool<WongWork::CBossTower,600> *)(this + 0x16c),param_1);
    }
  }
  return;
}

```

---

## returnDeathTower

```asm
// === 08295852 CGameManager::returnDeathTower  [0x08295852-0x8295905] ===
 8295852:	55                   	push   %ebp
 8295853:	89 e5                	mov    %esp,%ebp
 8295855:	83 ec 38             	sub    $0x38,%esp
 8295858:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 829585c:	0f 84 a1 00 00 00    	je     8295903 <_ZN12CGameManager16returnDeathTowerEPN8WongWork11CDeathTowerE+0xb1>
 8295862:	8b 45 0c             	mov    0xc(%ebp),%eax
 8295865:	89 04 24             	mov    %eax,(%esp)
 8295868:	e8 19 1d 01 00       	call   82a7586 <_ZN8WongWork11CDeathTower6getIdxEv>
 829586d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8295870:	8b 45 08             	mov    0x8(%ebp),%eax
 8295873:	8d 88 98 02 00 00    	lea    0x298(%eax),%ecx
 8295879:	8d 45 e0             	lea    -0x20(%ebp),%eax
 829587c:	8d 55 e8             	lea    -0x18(%ebp),%edx
 829587f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8295883:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8295887:	89 04 24             	mov    %eax,(%esp)
 829588a:	e8 03 c6 01 00       	call   82b1e92 <_ZN9__gnu_cxx8hash_mapIiPN8WongWork11CDeathTowerENS_4hashIiEESt8equal_toIiESaIS3_EE4findERKi>
 829588f:	83 ec 04             	sub    $0x4,%esp
 8295892:	8b 45 08             	mov    0x8(%ebp),%eax
 8295895:	8d 90 98 02 00 00    	lea    0x298(%eax),%edx
 829589b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 829589e:	89 54 24 04          	mov    %edx,0x4(%esp)
 82958a2:	89 04 24             	mov    %eax,(%esp)
 82958a5:	e8 14 c6 01 00       	call   82b1ebe <_ZN9__gnu_cxx8hash_mapIiPN8WongWork11CDeathTowerENS_4hashIiEESt8equal_toIiESaIS3_EE3endEv>
 82958aa:	83 ec 04             	sub    $0x4,%esp
 82958ad:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82958b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82958b4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82958b7:	89 04 24             	mov    %eax,(%esp)
 82958ba:	e8 8b c6 01 00       	call   82b1f4a <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiPN8WongWork11CDeathTowerEEiNS_4hashIiEESt10_Select1stIS6_ESt8equal_toIiESaIS5_EEneERKSE_>
 82958bf:	84 c0                	test   %al,%al
 82958c1:	74 41                	je     8295904 <_ZN12CGameManager16returnDeathTowerEPN8WongWork11CDeathTowerE+0xb2>
 82958c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 82958c6:	89 04 24             	mov    %eax,(%esp)
 82958c9:	e8 b8 1c 01 00       	call   82a7586 <_ZN8WongWork11CDeathTower6getIdxEv>
 82958ce:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82958d1:	8b 45 08             	mov    0x8(%ebp),%eax
 82958d4:	8d 90 98 02 00 00    	lea    0x298(%eax),%edx
 82958da:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82958dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82958e1:	89 14 24             	mov    %edx,(%esp)
 82958e4:	e8 75 c6 01 00       	call   82b1f5e <_ZN9__gnu_cxx8hash_mapIiPN8WongWork11CDeathTowerENS_4hashIiEESt8equal_toIiESaIS3_EE5eraseERKi>
 82958e9:	8b 45 08             	mov    0x8(%ebp),%eax
 82958ec:	8d 90 3c 01 00 00    	lea    0x13c(%eax),%edx
 82958f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82958f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 82958f9:	89 14 24             	mov    %edx,(%esp)
 82958fc:	e8 77 c6 01 00       	call   82b1f78 <_ZN10StaticPoolIN8WongWork11CDeathTowerELi600EE4FreeEPS1_>
 8295901:	eb 01                	jmp    8295904 <_ZN12CGameManager16returnDeathTowerEPN8WongWork11CDeathTowerE+0xb2>
 8295903:	90                   	nop
 8295904:	c9                   	leave
 8295905:	c3                   	ret

```

```c
// CGameManager::returnDeathTower @ 0x8295852

/* CGameManager::returnDeathTower(WongWork::CDeathTower*) */

void __thiscall CGameManager::returnDeathTower(CGameManager *this,CDeathTower *param_1)

{
  char cVar1;
  _Hashtable_iterator<std::pair<int_const,WongWork::CDeathTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CDeathTower*>>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
  local_24 [8];
  undefined4 local_1c;
  hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
  local_18 [8];
  int local_10 [3];
  
  if (param_1 != (CDeathTower *)0x0) {
    local_1c = WongWork::CDeathTower::getIdx(param_1);
    __gnu_cxx::
    hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
    ::find((int *)local_24);
    __gnu_cxx::
    hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
    ::end(local_18);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WongWork::CDeathTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CDeathTower*>>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
            ::operator!=(local_24,(_Hashtable_iterator *)local_18);
    if (cVar1 != '\0') {
      local_10[0] = WongWork::CDeathTower::getIdx(param_1);
      __gnu_cxx::
      hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
      ::erase((hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
               *)(this + 0x298),local_10);
      StaticPool<WongWork::CDeathTower,600>::Free
                ((StaticPool<WongWork::CDeathTower,600> *)(this + 0x13c),param_1);
    }
  }
  return;
}

```

---

## returnUserPool

```asm
// === 08294b2c CGameManager::returnUserPool  [0x08294b2c-0x8294d3b] ===
 8294b2c:	55                   	push   %ebp
 8294b2d:	89 e5                	mov    %esp,%ebp
 8294b2f:	56                   	push   %esi
 8294b30:	53                   	push   %ebx
 8294b31:	83 ec 60             	sub    $0x60,%esp
 8294b34:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8294b38:	0f 84 f2 01 00 00    	je     8294d30 <_ZN12CGameManager14returnUserPoolEP5CUser+0x204>
 8294b3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8294b41:	89 04 24             	mov    %eax,(%esp)
 8294b44:	e8 25 58 e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8294b49:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8294b4c:	8b 45 08             	mov    0x8(%ebp),%eax
 8294b4f:	8d 88 2c 02 00 00    	lea    0x22c(%eax),%ecx
 8294b55:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8294b58:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8294b5b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8294b5f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8294b63:	89 04 24             	mov    %eax,(%esp)
 8294b66:	e8 01 bc 01 00       	call   82b076c <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 8294b6b:	83 ec 04             	sub    $0x4,%esp
 8294b6e:	8b 45 08             	mov    0x8(%ebp),%eax
 8294b71:	8d 90 2c 02 00 00    	lea    0x22c(%eax),%edx
 8294b77:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8294b7a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8294b7e:	89 04 24             	mov    %eax,(%esp)
 8294b81:	e8 54 ef e3 ff       	call   80d3ada <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 8294b86:	83 ec 04             	sub    $0x4,%esp
 8294b89:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8294b8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294b90:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8294b93:	89 04 24             	mov    %eax,(%esp)
 8294b96:	e8 61 bc 01 00       	call   82b07fc <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 8294b9b:	84 c0                	test   %al,%al
 8294b9d:	74 25                	je     8294bc4 <_ZN12CGameManager14returnUserPoolEP5CUser+0x98>
 8294b9f:	8b 45 08             	mov    0x8(%ebp),%eax
 8294ba2:	8d 90 2c 02 00 00    	lea    0x22c(%eax),%edx
 8294ba8:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8294bab:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294baf:	89 14 24             	mov    %edx,(%esp)
 8294bb2:	e8 59 bc 01 00       	call   82b0810 <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
 8294bb7:	a1 40 f7 41 09       	mov    0x941f740,%eax
 8294bbc:	89 04 24             	mov    %eax,(%esp)
 8294bbf:	e8 3c bb 2b 00       	call   8550700 <_ZN8WongWork15CLogGameChannel10IncOutUserEv>
 8294bc4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8294bc7:	89 04 24             	mov    %eax,(%esp)
 8294bca:	e8 9f 57 e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8294bcf:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8294bd2:	8b 45 08             	mov    0x8(%ebp),%eax
 8294bd5:	8d 88 44 02 00 00    	lea    0x244(%eax),%ecx
 8294bdb:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8294bde:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8294be1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8294be5:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8294be9:	89 04 24             	mov    %eax,(%esp)
 8294bec:	e8 7b bb 01 00       	call   82b076c <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 8294bf1:	83 ec 04             	sub    $0x4,%esp
 8294bf4:	8b 45 08             	mov    0x8(%ebp),%eax
 8294bf7:	8d 90 44 02 00 00    	lea    0x244(%eax),%edx
 8294bfd:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8294c00:	89 54 24 04          	mov    %edx,0x4(%esp)
 8294c04:	89 04 24             	mov    %eax,(%esp)
 8294c07:	e8 ce ee e3 ff       	call   80d3ada <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 8294c0c:	83 ec 04             	sub    $0x4,%esp
 8294c0f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8294c12:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294c16:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8294c19:	89 04 24             	mov    %eax,(%esp)
 8294c1c:	e8 db bb 01 00       	call   82b07fc <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 8294c21:	84 c0                	test   %al,%al
 8294c23:	74 18                	je     8294c3d <_ZN12CGameManager14returnUserPoolEP5CUser+0x111>
 8294c25:	8b 45 08             	mov    0x8(%ebp),%eax
 8294c28:	8d 90 44 02 00 00    	lea    0x244(%eax),%edx
 8294c2e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8294c31:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294c35:	89 14 24             	mov    %edx,(%esp)
 8294c38:	e8 d3 bb 01 00       	call   82b0810 <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
 8294c3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8294c40:	89 04 24             	mov    %eax,(%esp)
 8294c43:	e8 4e 40 e3 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8294c48:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8294c4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8294c4e:	89 04 24             	mov    %eax,(%esp)
 8294c51:	e8 18 57 e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8294c56:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8294c59:	8b 45 0c             	mov    0xc(%ebp),%eax
 8294c5c:	89 04 24             	mov    %eax,(%esp)
 8294c5f:	e8 ac 3c 3c 00       	call   8658910 <_ZN5CUser7log_outEv>
 8294c64:	8b 45 08             	mov    0x8(%ebp),%eax
 8294c67:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294c6b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8294c6e:	89 04 24             	mov    %eax,(%esp)
 8294c71:	e8 d6 07 e7 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 8294c76:	8b 45 08             	mov    0x8(%ebp),%eax
 8294c79:	8d 50 4c             	lea    0x4c(%eax),%edx
 8294c7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8294c7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8294c83:	89 14 24             	mov    %edx,(%esp)
 8294c86:	e8 9f bb 01 00       	call   82b082a <_ZN10StaticPoolI5CUserLi600EE4FreeEPS0_>
 8294c8b:	eb 1b                	jmp    8294ca8 <_ZN12CGameManager14returnUserPoolEP5CUser+0x17c>
 8294c8d:	89 d3                	mov    %edx,%ebx
 8294c8f:	89 c6                	mov    %eax,%esi
 8294c91:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8294c94:	89 04 24             	mov    %eax,(%esp)
 8294c97:	e8 cc 07 e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8294c9c:	89 f0                	mov    %esi,%eax
 8294c9e:	89 da                	mov    %ebx,%edx
 8294ca0:	89 04 24             	mov    %eax,(%esp)
 8294ca3:	e8 a8 ea 84 00       	call   8ae3750 <_Unwind_Resume>
 8294ca8:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8294cab:	89 04 24             	mov    %eax,(%esp)
 8294cae:	e8 b5 07 e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8294cb3:	8b 45 08             	mov    0x8(%ebp),%eax
 8294cb6:	83 c0 4c             	add    $0x4c,%eax
 8294cb9:	89 04 24             	mov    %eax,(%esp)
 8294cbc:	e8 49 b7 01 00       	call   82b040a <_ZN10StaticPoolI5CUserLi600EE16GetLastErrorCodeEv>
 8294cc1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8294cc4:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8294cc8:	74 67                	je     8294d31 <_ZN12CGameManager14returnUserPoolEP5CUser+0x205>
 8294cca:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8294cd1:	00 
 8294cd2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8294cd5:	89 04 24             	mov    %eax,(%esp)
 8294cd8:	e8 6e 43 e7 ff       	call   810904b <_Z14NumberToStringji>
 8294cdd:	89 c3                	mov    %eax,%ebx
 8294cdf:	8b 75 f4             	mov    -0xc(%ebp),%esi
 8294ce2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8294ce9:	00 
 8294cea:	c7 44 24 08 0e 0a 00 	movl   $0xa0e,0x8(%esp)
 8294cf1:	00 
 8294cf2:	c7 44 24 04 c0 b6 c1 	movl   $0x8c1b6c0,0x4(%esp)
 8294cf9:	08 
 8294cfa:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8294cfd:	89 04 24             	mov    %eax,(%esp)
 8294d00:	e8 13 aa 2b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8294d05:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8294d08:	89 44 24 14          	mov    %eax,0x14(%esp)
 8294d0c:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8294d10:	8b 45 0c             	mov    0xc(%ebp),%eax
 8294d13:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8294d17:	89 74 24 08          	mov    %esi,0x8(%esp)
 8294d1b:	c7 44 24 04 18 6b c1 	movl   $0x8c16b18,0x4(%esp)
 8294d22:	08 
 8294d23:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8294d26:	89 04 24             	mov    %eax,(%esp)
 8294d29:	e8 5a aa 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8294d2e:	eb 01                	jmp    8294d31 <_ZN12CGameManager14returnUserPoolEP5CUser+0x205>
 8294d30:	90                   	nop
 8294d31:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8294d34:	83 c4 00             	add    $0x0,%esp
 8294d37:	5b                   	pop    %ebx
 8294d38:	5e                   	pop    %esi
 8294d39:	5d                   	pop    %ebp
 8294d3a:	c3                   	ret
 8294d3b:	90                   	nop

```

```c
// CGameManager::returnUserPool @ 0x8294b2c

/* CGameManager::returnUserPool(CUser*) */

void __thiscall CGameManager::returnUserPool(CGameManager *this,CUser *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  Guard<Mutex> local_44 [4];
  uint local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_30 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_2c [4];
  cMyTrace local_28 [16];
  undefined4 local_18;
  uint local_14;
  int local_10;
  
  if (param_1 != (CUser *)0x0) {
    local_34 = CUser::get_acc_id(param_1);
    puVar4 = &local_34;
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::find(&local_38);
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::end(local_30);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_38,
                       (_Rb_tree_iterator *)local_30);
    if (cVar2 != '\0') {
      std::
      map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::erase((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
               *)(this + 0x22c),local_38,puVar4);
      WongWork::CLogGameChannel::IncOutUser(GlobalData::s_pLogGameChannel);
    }
    local_3c = CUser::get_acc_id(param_1);
    puVar4 = &local_3c;
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::find(&local_40);
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::end(local_2c);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_40,
                       (_Rb_tree_iterator *)local_2c);
    if (cVar2 != '\0') {
      std::
      map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::erase((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
               *)(this + 0x244),local_40,puVar4);
    }
    local_18 = CUser::GetUID(param_1);
    local_14 = CUser::get_acc_id(param_1);
    CUser::log_out(param_1);
    Guard<Mutex>::Guard(local_44,(Mutex *)this);
                    /* try { // try from 08294c86 to 08294c8a has its CatchHandler @ 08294c8d */
    StaticPool<CUser,600>::Free((StaticPool<CUser,600> *)(this + 0x4c),param_1);
    Guard<Mutex>::~Guard(local_44);
    local_10 = StaticPool<CUser,600>::GetLastErrorCode((StaticPool<CUser,600> *)(this + 0x4c));
    if (local_10 != 0) {
      uVar3 = NumberToString(local_14,0);
      iVar1 = local_10;
      cMyTrace::cMyTrace(local_28,"void CGameManager::returnUserPool(CUser*)",0xa0e,0);
      cMyTrace::operator()
                (local_28,
                 "STATIC MEMORY_POOL returnUserPool error(%d), user(%x), last user m_acc_id(%s), idx(%d)"
                 ,iVar1,param_1,uVar3,local_18);
    }
  }
  return;
}

```

---

## send_userinfos_to_cutoff_server

```asm
// === 08295e76 CGameManager::send_userinfos_to_cutoff_server  [0x08295e76-0x8295e83] ===
 8295e76:	55                   	push   %ebp
 8295e77:	89 e5                	mov    %esp,%ebp
 8295e79:	8b 45 08             	mov    0x8(%ebp),%eax
 8295e7c:	66 c7 00 00 00       	movw   $0x0,(%eax)
 8295e81:	5d                   	pop    %ebp
 8295e82:	c3                   	ret
 8295e83:	90                   	nop

```

```c
// CGameManager::send_userinfos_to_cutoff_server @ 0x8295e76

/* STTempUsers() */

void __thiscall
CGameManager::send_userinfos_to_cutoff_server()::STTempUsers::STTempUsers(STTempUsers *this)

{
  *(undefined2 *)this = 0;
  return;
}

```

---

## send_userinfos_to_cutoff_server_08295e84

```asm
// === 08295e84 CGameManager::send_userinfos_to_cutoff_server  [0x08295e84-0x8296119] ===
 8295e84:	55                   	push   %ebp
 8295e85:	89 e5                	mov    %esp,%ebp
 8295e87:	56                   	push   %esi
 8295e88:	53                   	push   %ebx
 8295e89:	81 ec 10 69 00 00    	sub    $0x6910,%esp
 8295e8f:	8d 85 f8 96 ff ff    	lea    -0x6908(%ebp),%eax
 8295e95:	89 c3                	mov    %eax,%ebx
 8295e97:	be 09 00 00 00       	mov    $0x9,%esi
 8295e9c:	eb 11                	jmp    8295eaf <_ZN12CGameManager31send_userinfos_to_cutoff_serverEv+0x2b>
 8295e9e:	89 1c 24             	mov    %ebx,(%esp)
 8295ea1:	e8 d0 ff ff ff       	call   8295e76 <_ZZN12CGameManager31send_userinfos_to_cutoff_serverEvEN11STTempUsersC1Ev>
 8295ea6:	81 c3 64 09 00 00    	add    $0x964,%ebx
 8295eac:	83 ee 01             	sub    $0x1,%esi
 8295eaf:	83 fe ff             	cmp    $0xffffffff,%esi
 8295eb2:	0f 95 c0             	setne  %al
 8295eb5:	84 c0                	test   %al,%al
 8295eb7:	75 e5                	jne    8295e9e <_ZN12CGameManager31send_userinfos_to_cutoff_serverEv+0x1a>
 8295eb9:	8d 85 e2 f4 ff ff    	lea    -0xb1e(%ebp),%eax
 8295ebf:	89 04 24             	mov    %eax,(%esp)
 8295ec2:	e8 db e0 00 00       	call   82a3fa2 <_ZN32Packet_CutOff_UDP_Reply_UserInfoC1Ev>
 8295ec7:	e8 b5 62 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8295ecc:	89 04 24             	mov    %eax,(%esp)
 8295ecf:	e8 f6 4b eb ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 8295ed4:	88 85 ee f4 ff ff    	mov    %al,-0xb12(%ebp)
 8295eda:	e8 a2 62 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8295edf:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 8295ee5:	88 85 ef f4 ff ff    	mov    %al,-0xb11(%ebp)
 8295eeb:	8b 45 08             	mov    0x8(%ebp),%eax
 8295eee:	05 2c 02 00 00       	add    $0x22c,%eax
 8295ef3:	89 04 24             	mov    %eax,(%esp)
 8295ef6:	e8 9b cb 01 00       	call   82b2a96 <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 8295efb:	84 c0                	test   %al,%al
 8295efd:	0f 85 0c 02 00 00    	jne    829610f <_ZN12CGameManager31send_userinfos_to_cutoff_serverEv+0x28b>
 8295f03:	8b 45 08             	mov    0x8(%ebp),%eax
 8295f06:	8d 90 2c 02 00 00    	lea    0x22c(%eax),%edx
 8295f0c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8295f0f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8295f13:	89 04 24             	mov    %eax,(%esp)
 8295f16:	e8 99 db e3 ff       	call   80d3ab4 <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 8295f1b:	83 ec 04             	sub    $0x4,%esp
 8295f1e:	e9 a4 00 00 00       	jmp    8295fc7 <_ZN12CGameManager31send_userinfos_to_cutoff_serverEv+0x143>
 8295f23:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8295f26:	89 04 24             	mov    %eax,(%esp)
 8295f29:	e8 6a a8 01 00       	call   82b0798 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 8295f2e:	8b 40 04             	mov    0x4(%eax),%eax
 8295f31:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8295f34:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8295f37:	89 04 24             	mov    %eax,(%esp)
 8295f3a:	e8 4d 44 e4 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8295f3f:	83 f8 01             	cmp    $0x1,%eax
 8295f42:	0f 9f c0             	setg   %al
 8295f45:	84 c0                	test   %al,%al
 8295f47:	74 73                	je     8295fbc <_ZN12CGameManager31send_userinfos_to_cutoff_serverEv+0x138>
 8295f49:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8295f4c:	89 04 24             	mov    %eax,(%esp)
 8295f4f:	e8 1a 44 e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8295f54:	89 c1                	mov    %eax,%ecx
 8295f56:	ba cd cc cc cc       	mov    $0xcccccccd,%edx
 8295f5b:	89 c8                	mov    %ecx,%eax
 8295f5d:	f7 e2                	mul    %edx
 8295f5f:	c1 ea 03             	shr    $0x3,%edx
 8295f62:	89 d0                	mov    %edx,%eax
 8295f64:	c1 e0 02             	shl    $0x2,%eax
 8295f67:	01 d0                	add    %edx,%eax
 8295f69:	01 c0                	add    %eax,%eax
 8295f6b:	89 ca                	mov    %ecx,%edx
 8295f6d:	29 c2                	sub    %eax,%edx
 8295f6f:	89 55 e8             	mov    %edx,-0x18(%ebp)
 8295f72:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8295f75:	8d 95 f8 96 ff ff    	lea    -0x6908(%ebp),%edx
 8295f7b:	69 c0 64 09 00 00    	imul   $0x964,%eax,%eax
 8295f81:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8295f84:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8295f87:	8b 75 e8             	mov    -0x18(%ebp),%esi
 8295f8a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8295f8d:	0f b7 00             	movzwl (%eax),%eax
 8295f90:	0f b7 d8             	movzwl %ax,%ebx
 8295f93:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8295f96:	89 04 24             	mov    %eax,(%esp)
 8295f99:	e8 d0 43 e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8295f9e:	69 d6 59 02 00 00    	imul   $0x259,%esi,%edx
 8295fa4:	01 da                	add    %ebx,%edx
 8295fa6:	89 84 95 fc 96 ff ff 	mov    %eax,-0x6904(%ebp,%edx,4)
 8295fad:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8295fb0:	0f b7 00             	movzwl (%eax),%eax
 8295fb3:	8d 50 01             	lea    0x1(%eax),%edx
 8295fb6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8295fb9:	66 89 10             	mov    %dx,(%eax)
 8295fbc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8295fbf:	89 04 24             	mov    %eax,(%esp)
 8295fc2:	e8 8b ad e3 ff       	call   80d0d52 <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
 8295fc7:	8b 45 08             	mov    0x8(%ebp),%eax
 8295fca:	8d 90 2c 02 00 00    	lea    0x22c(%eax),%edx
 8295fd0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8295fd3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8295fd7:	89 04 24             	mov    %eax,(%esp)
 8295fda:	e8 fb da e3 ff       	call   80d3ada <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 8295fdf:	83 ec 04             	sub    $0x4,%esp
 8295fe2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8295fe5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8295fe9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8295fec:	89 04 24             	mov    %eax,(%esp)
 8295fef:	e8 08 a8 01 00       	call   82b07fc <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 8295ff4:	84 c0                	test   %al,%al
 8295ff6:	0f 85 27 ff ff ff    	jne    8295f23 <_ZN12CGameManager31send_userinfos_to_cutoff_serverEv+0x9f>
 8295ffc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8296003:	e9 f6 00 00 00       	jmp    82960fe <_ZN12CGameManager31send_userinfos_to_cutoff_serverEv+0x27a>
 8296008:	8b 45 f4             	mov    -0xc(%ebp),%eax
 829600b:	69 c0 64 09 00 00    	imul   $0x964,%eax,%eax
 8296011:	8d 55 f8             	lea    -0x8(%ebp),%edx
 8296014:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8296017:	2d 00 69 00 00       	sub    $0x6900,%eax
 829601c:	0f b7 00             	movzwl (%eax),%eax
 829601f:	66 85 c0             	test   %ax,%ax
 8296022:	0f 84 d2 00 00 00    	je     82960fa <_ZN12CGameManager31send_userinfos_to_cutoff_serverEv+0x276>
 8296028:	8b 45 f4             	mov    -0xc(%ebp),%eax
 829602b:	69 c0 64 09 00 00    	imul   $0x964,%eax,%eax
 8296031:	8d 55 f8             	lea    -0x8(%ebp),%edx
 8296034:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8296037:	2d 00 69 00 00       	sub    $0x6900,%eax
 829603c:	0f b7 00             	movzwl (%eax),%eax
 829603f:	c1 e0 02             	shl    $0x2,%eax
 8296042:	83 c0 0e             	add    $0xe,%eax
 8296045:	66 89 85 e4 f4 ff ff 	mov    %ax,-0xb1c(%ebp)
 829604c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 829604f:	69 c0 64 09 00 00    	imul   $0x964,%eax,%eax
 8296055:	8d 55 f8             	lea    -0x8(%ebp),%edx
 8296058:	8d 04 02             	lea    (%edx,%eax,1),%eax
 829605b:	2d 00 69 00 00       	sub    $0x6900,%eax
 8296060:	0f b7 00             	movzwl (%eax),%eax
 8296063:	66 89 85 ec f4 ff ff 	mov    %ax,-0xb14(%ebp)
 829606a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 829606d:	69 c0 64 09 00 00    	imul   $0x964,%eax,%eax
 8296073:	8d 55 f8             	lea    -0x8(%ebp),%edx
 8296076:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8296079:	2d 00 69 00 00       	sub    $0x6900,%eax
 829607e:	0f b7 00             	movzwl (%eax),%eax
 8296081:	0f b7 c0             	movzwl %ax,%eax
 8296084:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 829608b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 829608e:	8d 8d f8 96 ff ff    	lea    -0x6908(%ebp),%ecx
 8296094:	69 c0 64 09 00 00    	imul   $0x964,%eax,%eax
 829609a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 829609d:	83 c0 04             	add    $0x4,%eax
 82960a0:	89 54 24 08          	mov    %edx,0x8(%esp)
 82960a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82960a8:	8d 85 e2 f4 ff ff    	lea    -0xb1e(%ebp),%eax
 82960ae:	83 c0 0e             	add    $0xe,%eax
 82960b1:	89 04 24             	mov    %eax,(%esp)
 82960b4:	e8 e7 77 de ff       	call   807d8a0 <memcpy@plt>
 82960b9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82960bc:	69 c0 64 09 00 00    	imul   $0x964,%eax,%eax
 82960c2:	8d 55 f8             	lea    -0x8(%ebp),%edx
 82960c5:	8d 04 02             	lea    (%edx,%eax,1),%eax
 82960c8:	2d fc 68 00 00       	sub    $0x68fc,%eax
 82960cd:	8b 00                	mov    (%eax),%eax
 82960cf:	89 85 e8 f4 ff ff    	mov    %eax,-0xb18(%ebp)
 82960d5:	0f b7 85 e4 f4 ff ff 	movzwl -0xb1c(%ebp),%eax
 82960dc:	0f b7 c8             	movzwl %ax,%ecx
 82960df:	8d 95 e2 f4 ff ff    	lea    -0xb1e(%ebp),%edx
 82960e5:	a1 38 be 40 09       	mov    0x940be38,%eax
 82960ea:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82960ee:	89 54 24 04          	mov    %edx,0x4(%esp)
 82960f2:	89 04 24             	mov    %eax,(%esp)
 82960f5:	e8 f4 73 1d 00       	call   846d4ee <_ZN27CDoubleConnCheckServerProxy10SendPacketEPci>
 82960fa:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82960fe:	83 7d f4 09          	cmpl   $0x9,-0xc(%ebp)
 8296102:	0f 9e c0             	setle  %al
 8296105:	84 c0                	test   %al,%al
 8296107:	0f 85 fb fe ff ff    	jne    8296008 <_ZN12CGameManager31send_userinfos_to_cutoff_serverEv+0x184>
 829610d:	eb 01                	jmp    8296110 <_ZN12CGameManager31send_userinfos_to_cutoff_serverEv+0x28c>
 829610f:	90                   	nop
 8296110:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8296113:	83 c4 00             	add    $0x0,%esp
 8296116:	5b                   	pop    %ebx
 8296117:	5e                   	pop    %esi
 8296118:	5d                   	pop    %ebp
 8296119:	c3                   	ret

```

```c
// CGameManager::send_userinfos_to_cutoff_server @ 0x8295e84

/* CGameManager::send_userinfos_to_cutoff_server() */

void __thiscall CGameManager::send_userinfos_to_cutoff_server(CGameManager *this)

{
  ushort uVar1;
  char cVar2;
  CEnvironment *this_00;
  uint uVar3;
  undefined4 uVar4;
  STTempUsers *this_01;
  int iVar5;
  STTempUsers local_690c [4];
  undefined4 auStack_6908 [6009];
  Packet_CutOff_UDP_Reply_UserInfo local_b22 [2];
  ushort local_b20;
  undefined4 local_b1c;
  undefined2 local_b18;
  undefined1 local_b16;
  undefined1 local_b15;
  undefined1 auStack_b14 [2800];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_24 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_20 [4];
  uint local_1c;
  CUser *local_18;
  STTempUsers *local_14;
  int local_10;
  
  this_01 = local_690c;
  for (iVar5 = 9; iVar5 != -1; iVar5 = iVar5 + -1) {
    send_userinfos_to_cutoff_server()::STTempUsers::STTempUsers(this_01);
    this_01 = this_01 + 0x964;
  }
  Packet_CutOff_UDP_Reply_UserInfo::Packet_CutOff_UDP_Reply_UserInfo(local_b22);
  this_00 = (CEnvironment *)G_CEnvironment();
  local_b16 = CEnvironment::get_channel_no(this_00);
  iVar5 = G_CEnvironment();
  local_b15 = (undefined1)*(undefined4 *)(iVar5 + 0x378);
  cVar2 = std::
          map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                   *)(this + 0x22c));
  if (cVar2 == '\0') {
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::begin(local_24);
    while( true ) {
      std::
      map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::end(local_20);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_24,
                         (_Rb_tree_iterator *)local_20);
      if (cVar2 == '\0') break;
      iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_24);
      local_18 = *(CUser **)(iVar5 + 4);
      iVar5 = CUser::get_state(local_18);
      if (1 < iVar5) {
        uVar3 = CUser::get_acc_id(local_18);
        uVar3 = uVar3 % 10;
        local_14 = local_690c + uVar3 * 0x964;
        uVar1 = *(ushort *)local_14;
        local_1c = uVar3;
        uVar4 = CUser::get_acc_id(local_18);
        auStack_6908[uVar3 * 0x259 + (uint)uVar1] = uVar4;
        *(ushort *)local_14 = *(ushort *)local_14 + 1;
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_24);
    }
    for (local_10 = 0; local_10 < 10; local_10 = local_10 + 1) {
      if (*(short *)(local_690c + local_10 * 0x964) != 0) {
        local_b20 = *(short *)(local_690c + local_10 * 0x964) * 4 + 0xe;
        local_b18 = *(undefined2 *)(local_690c + local_10 * 0x964);
        memcpy(auStack_b14,auStack_6908 + local_10 * 0x259,
               (uint)*(ushort *)(local_690c + local_10 * 0x964) * 4);
        local_b1c = auStack_6908[local_10 * 0x259];
        CDoubleConnCheckServerProxy::SendPacket
                  (GlobalData::s_double_check_proxy,(char *)local_b22,(uint)local_b20);
      }
    }
  }
  return;
}

```

---

## updateDBLinkCharacConnectState

```asm
// === 082984a0 CGameManager::updateDBLinkCharacConnectState  [0x082984a0-0x82985a7] ===
 82984a0:	55                   	push   %ebp
 82984a1:	89 e5                	mov    %esp,%ebp
 82984a3:	56                   	push   %esi
 82984a4:	53                   	push   %ebx
 82984a5:	83 ec 20             	sub    $0x20,%esp
 82984a8:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 82984ad:	c7 44 24 08 5b 12 00 	movl   $0x125b,0x8(%esp)
 82984b4:	00 
 82984b5:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 82984bc:	08 
 82984bd:	89 04 24             	mov    %eax,(%esp)
 82984c0:	e8 c1 75 ff ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 82984c5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82984cc:	00 
 82984cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82984d1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82984d4:	89 04 24             	mov    %eax,(%esp)
 82984d7:	e8 4a 07 e3 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 82984dc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82984df:	89 04 24             	mov    %eax,(%esp)
 82984e2:	e8 5f 07 e3 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 82984e7:	c7 44 24 04 e5 01 00 	movl   $0x1e5,0x4(%esp)
 82984ee:	00 
 82984ef:	89 04 24             	mov    %eax,(%esp)
 82984f2:	e8 5f 07 e3 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 82984f7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82984fa:	89 04 24             	mov    %eax,(%esp)
 82984fd:	e8 44 07 e3 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8298502:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8298509:	ff 
 829850a:	89 04 24             	mov    %eax,(%esp)
 829850d:	e8 44 07 e3 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8298512:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8298515:	89 04 24             	mov    %eax,(%esp)
 8298518:	e8 31 07 e3 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 829851d:	89 04 24             	mov    %eax,(%esp)
 8298520:	e8 7d a7 01 00       	call   82b2ca2 <_ZN12CStreamGuard11GetInBufferI36SIG_UPDATE_LINK_CHARAC_CONNECT_STATEEEPT_v>
 8298525:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8298528:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 829852f:	00 
 8298530:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8298537:	00 
 8298538:	8b 45 f4             	mov    -0xc(%ebp),%eax
 829853b:	89 04 24             	mov    %eax,(%esp)
 829853e:	e8 7d 57 de ff       	call   807dcc0 <memset@plt>
 8298543:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8298546:	8b 55 0c             	mov    0xc(%ebp),%edx
 8298549:	89 10                	mov    %edx,(%eax)
 829854b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 829854e:	8b 55 10             	mov    0x10(%ebp),%edx
 8298551:	89 50 04             	mov    %edx,0x4(%eax)
 8298554:	8b 55 14             	mov    0x14(%ebp),%edx
 8298557:	8b 45 f4             	mov    -0xc(%ebp),%eax
 829855a:	89 50 08             	mov    %edx,0x8(%eax)
 829855d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8298562:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8298565:	89 54 24 08          	mov    %edx,0x8(%esp)
 8298569:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8298570:	00 
 8298571:	89 04 24             	mov    %eax,(%esp)
 8298574:	e8 65 8a 2d 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8298579:	eb 1b                	jmp    8298596 <_ZN12CGameManager30updateDBLinkCharacConnectStateEjj28ENUM_CHARAC_LINK_ACTION_TYPE+0xf6>
 829857b:	89 d3                	mov    %edx,%ebx
 829857d:	89 c6                	mov    %eax,%esi
 829857f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8298582:	89 04 24             	mov    %eax,(%esp)
 8298585:	e8 48 43 38 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 829858a:	89 f0                	mov    %esi,%eax
 829858c:	89 da                	mov    %ebx,%edx
 829858e:	89 04 24             	mov    %eax,(%esp)
 8298591:	e8 ba b1 84 00       	call   8ae3750 <_Unwind_Resume>
 8298596:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8298599:	89 04 24             	mov    %eax,(%esp)
 829859c:	e8 31 43 38 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 82985a1:	83 c4 20             	add    $0x20,%esp
 82985a4:	5b                   	pop    %ebx
 82985a5:	5e                   	pop    %esi
 82985a6:	5d                   	pop    %ebp
 82985a7:	c3                   	ret

```

```c
// CGameManager::updateDBLinkCharacConnectState @ 0x82984a0

/* CGameManager::updateDBLinkCharacConnectState(unsigned int, unsigned int,
   ENUM_CHARAC_LINK_ACTION_TYPE) */

void __thiscall
CGameManager::updateDBLinkCharacConnectState
          (undefined4 this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_UPDATE_LINK_CHARAC_CONNECT_STATE *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"App.cpp",0x125b);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 082984f2 to 08298578 has its CatchHandler @ 0829857b */
  CStreamGuard::operator<<(pCVar2,0x1e5);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_UPDATE_LINK_CHARAC_CONNECT_STATE>(pCVar2);
  memset(local_10,0,0xc);
  *(undefined4 *)local_10 = param_1;
  *(undefined4 *)(local_10 + 4) = param_2;
  *(undefined4 *)(local_10 + 8) = param_4;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

---

## user_disconnect

```asm
// === 08298b48 CGameManager::user_disconnect  [0x08298b48-0x8298dbf] ===
 8298b48:	55                   	push   %ebp
 8298b49:	89 e5                	mov    %esp,%ebp
 8298b4b:	83 ec 28             	sub    $0x28,%esp
 8298b4e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8298b52:	75 4b                	jne    8298b9f <_ZN12CGameManager15user_disconnectEP5CUser+0x57>
 8298b54:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8298b5b:	00 
 8298b5c:	c7 44 24 08 8b 13 00 	movl   $0x138b,0x8(%esp)
 8298b63:	00 
 8298b64:	c7 44 24 04 c0 b2 c1 	movl   $0x8c1b2c0,0x4(%esp)
 8298b6b:	08 
 8298b6c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8298b6f:	89 04 24             	mov    %eax,(%esp)
 8298b72:	e8 a1 6b 2b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8298b77:	c7 44 24 0c 8b 13 00 	movl   $0x138b,0xc(%esp)
 8298b7e:	00 
 8298b7f:	c7 44 24 08 c0 b2 c1 	movl   $0x8c1b2c0,0x8(%esp)
 8298b86:	08 
 8298b87:	c7 44 24 04 ee 70 c1 	movl   $0x8c170ee,0x4(%esp)
 8298b8e:	08 
 8298b8f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8298b92:	89 04 24             	mov    %eax,(%esp)
 8298b95:	e8 ee 6b 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8298b9a:	e9 1e 02 00 00       	jmp    8298dbd <_ZN12CGameManager15user_disconnectEP5CUser+0x275>
 8298b9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298ba2:	8b 80 f8 96 07 00    	mov    0x796f8(%eax),%eax
 8298ba8:	89 04 24             	mov    %eax,(%esp)
 8298bab:	e8 84 11 22 00       	call   84b9d34 <_ZN10HistoryLog8LogCloseEP8_IO_FILE>
 8298bb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298bb3:	89 04 24             	mov    %eax,(%esp)
 8298bb6:	e8 d1 17 e4 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8298bbb:	85 c0                	test   %eax,%eax
 8298bbd:	0f 94 c0             	sete   %al
 8298bc0:	84 c0                	test   %al,%al
 8298bc2:	0f 85 f4 01 00 00    	jne    8298dbc <_ZN12CGameManager15user_disconnectEP5CUser+0x274>
 8298bc8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298bcb:	89 04 24             	mov    %eax,(%esp)
 8298bce:	e8 17 fc 3a 00       	call   86487ea <_ZN5CUser17prepareDisconnectEv>
 8298bd3:	e8 cf 17 e4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8298bd8:	8b 55 0c             	mov    0xc(%ebp),%edx
 8298bdb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8298bdf:	89 04 24             	mov    %eax,(%esp)
 8298be2:	e8 1b 6a 43 00       	call   86cf602 <_ZN9GameWorld14EraseLoginUserEP5CUser>
 8298be7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8298bee:	00 
 8298bef:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298bf2:	89 04 24             	mov    %eax,(%esp)
 8298bf5:	e8 70 db 00 00       	call   82a676a <_ZN5CUser27SetSaveRentalInfoToExchangeEb>
 8298bfa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298bfd:	89 04 24             	mov    %eax,(%esp)
 8298c00:	e8 87 17 e4 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8298c05:	83 f8 02             	cmp    $0x2,%eax
 8298c08:	0f 9f c0             	setg   %al
 8298c0b:	84 c0                	test   %al,%al
 8298c0d:	0f 84 48 01 00 00    	je     8298d5b <_ZN12CGameManager15user_disconnectEP5CUser+0x213>
 8298c13:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298c16:	89 44 24 04          	mov    %eax,0x4(%esp)
 8298c1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8298c1d:	89 04 24             	mov    %eax,(%esp)
 8298c20:	e8 ef ef ff ff       	call   8297c14 <_ZN12CGameManager13CheckOutTradeEP5CUser>
 8298c25:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8298c2c:	00 
 8298c2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298c30:	89 44 24 04          	mov    %eax,0x4(%esp)
 8298c34:	8b 45 08             	mov    0x8(%ebp),%eax
 8298c37:	89 04 24             	mov    %eax,(%esp)
 8298c3a:	e8 37 f0 ff ff       	call   8297c76 <_ZN12CGameManager13CheckOutPartyEP5CUserb>
 8298c3f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8298c46:	00 
 8298c47:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298c4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8298c4e:	8b 45 08             	mov    0x8(%ebp),%eax
 8298c51:	89 04 24             	mov    %eax,(%esp)
 8298c54:	e8 51 f2 ff ff       	call   8297eaa <_ZN12CGameManager11CheckOutPvpEP5CUserb>
 8298c59:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298c5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8298c60:	8b 45 08             	mov    0x8(%ebp),%eax
 8298c63:	89 04 24             	mov    %eax,(%esp)
 8298c66:	e8 8d f1 ff ff       	call   8297df8 <_ZN12CGameManager15CheckOutWarRoomEP5CUser>
 8298c6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298c6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8298c72:	8b 45 08             	mov    0x8(%ebp),%eax
 8298c75:	89 04 24             	mov    %eax,(%esp)
 8298c78:	e8 bd f6 ff ff       	call   829833a <_ZN12CGameManager18checkOutDeathTowerEP5CUser>
 8298c7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298c80:	89 44 24 04          	mov    %eax,0x4(%esp)
 8298c84:	8b 45 08             	mov    0x8(%ebp),%eax
 8298c87:	89 04 24             	mov    %eax,(%esp)
 8298c8a:	e8 15 f5 ff ff       	call   82981a4 <_ZN12CGameManager17checkOutBossTowerEP5CUser>
 8298c8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298c92:	89 44 24 04          	mov    %eax,0x4(%esp)
 8298c96:	8b 45 08             	mov    0x8(%ebp),%eax
 8298c99:	89 04 24             	mov    %eax,(%esp)
 8298c9c:	e8 d1 f5 ff ff       	call   8298272 <_ZN12CGameManager20checkOutAdvanceAltarEP5CUser>
 8298ca1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298ca4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8298ca8:	8b 45 08             	mov    0x8(%ebp),%eax
 8298cab:	89 04 24             	mov    %eax,(%esp)
 8298cae:	e8 97 f7 ff ff       	call   829844a <_ZN12CGameManager18checkOutBlueMarbleEP5CUser>
 8298cb3:	e8 ef 16 e4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8298cb8:	8b 55 0c             	mov    0xc(%ebp),%edx
 8298cbb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8298cbf:	89 04 24             	mov    %eax,(%esp)
 8298cc2:	e8 c1 c5 42 00       	call   86c5288 <_ZN9GameWorld16leave_game_worldEP5CUser>
 8298cc7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8298cce:	00 
 8298ccf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298cd2:	89 04 24             	mov    %eax,(%esp)
 8298cd5:	e8 02 0a 3e 00       	call   86796dc <_ZN5CUser17SetGameMasterModeEb>
 8298cda:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298cdd:	89 04 24             	mov    %eax,(%esp)
 8298ce0:	e8 8b a5 3b 00       	call   8653270 <_ZN5CUser10UpdateDataEv>
 8298ce5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8298cec:	00 
 8298ced:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298cf0:	89 04 24             	mov    %eax,(%esp)
 8298cf3:	e8 6e 3e 3b 00       	call   864cb66 <_ZN5CUser21LogoutCachedCharacterEh>
 8298cf8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8298cff:	00 
 8298d00:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298d03:	89 04 24             	mov    %eax,(%esp)
 8298d06:	e8 9f c7 3b 00       	call   86554aa <_ZN5CUser12UpdateLogoutEb>
 8298d0b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8298d12:	00 
 8298d13:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298d16:	89 04 24             	mov    %eax,(%esp)
 8298d19:	e8 04 e3 3d 00       	call   8677022 <_ZN5CUser20DeleteRentalItemInfoEi>
 8298d1e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8298d25:	00 
 8298d26:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298d29:	89 04 24             	mov    %eax,(%esp)
 8298d2c:	e8 f1 e2 3d 00       	call   8677022 <_ZN5CUser20DeleteRentalItemInfoEi>
 8298d31:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298d34:	89 04 24             	mov    %eax,(%esp)
 8298d37:	e8 e0 f7 3b 00       	call   865851c <_ZN5CUser14ResetCurCharacEv>
 8298d3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298d3f:	89 04 24             	mov    %eax,(%esp)
 8298d42:	e8 47 9f 3b 00       	call   8652c8e <_ZN5CUser22doLinkCharacDisconnectEv>
 8298d47:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298d4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8298d4e:	8b 45 08             	mov    0x8(%ebp),%eax
 8298d51:	89 04 24             	mov    %eax,(%esp)
 8298d54:	e8 d3 bd ff ff       	call   8294b2c <_ZN12CGameManager14returnUserPoolEP5CUser>
 8298d59:	eb 4b                	jmp    8298da6 <_ZN12CGameManager15user_disconnectEP5CUser+0x25e>
 8298d5b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8298d62:	00 
 8298d63:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298d66:	89 04 24             	mov    %eax,(%esp)
 8298d69:	e8 fc d9 00 00       	call   82a676a <_ZN5CUser27SetSaveRentalInfoToExchangeEb>
 8298d6e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8298d75:	00 
 8298d76:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298d79:	89 04 24             	mov    %eax,(%esp)
 8298d7c:	e8 e5 3d 3b 00       	call   864cb66 <_ZN5CUser21LogoutCachedCharacterEh>
 8298d81:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8298d88:	00 
 8298d89:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298d8c:	89 04 24             	mov    %eax,(%esp)
 8298d8f:	e8 16 c7 3b 00       	call   86554aa <_ZN5CUser12UpdateLogoutEb>
 8298d94:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298d97:	89 44 24 04          	mov    %eax,0x4(%esp)
 8298d9b:	8b 45 08             	mov    0x8(%ebp),%eax
 8298d9e:	89 04 24             	mov    %eax,(%esp)
 8298da1:	e8 86 bd ff ff       	call   8294b2c <_ZN12CGameManager14returnUserPoolEP5CUser>
 8298da6:	e8 10 e2 00 00       	call   82a6fbb <_Z25GetInstanceShutdowManagerv>
 8298dab:	8b 55 0c             	mov    0xc(%ebp),%edx
 8298dae:	89 54 24 04          	mov    %edx,0x4(%esp)
 8298db2:	89 04 24             	mov    %eax,(%esp)
 8298db5:	e8 0e aa 00 00       	call   82a37c8 <_ZN15CShutdowManager18SendLastMsgDBQueueEP5CUser>
 8298dba:	eb 01                	jmp    8298dbd <_ZN12CGameManager15user_disconnectEP5CUser+0x275>
 8298dbc:	90                   	nop
 8298dbd:	c9                   	leave
 8298dbe:	c3                   	ret
 8298dbf:	90                   	nop

```

```c
// CGameManager::user_disconnect @ 0x8298b48

/* CGameManager::user_disconnect(CUser*) */

void __thiscall CGameManager::user_disconnect(CGameManager *this,CUser *param_1)

{
  int iVar1;
  GameWorld *pGVar2;
  CUser *pCVar3;
  cMyTrace local_1c [24];
  
  if (param_1 == (CUser *)0x0) {
    cMyTrace::cMyTrace(local_1c,"void CGameManager::user_disconnect(CUser*)",0x138b,5);
    cMyTrace::operator()
              (local_1c,"USER DISCONNECT [%s][%d]","void CGameManager::user_disconnect(CUser*)",
               0x138b);
  }
  else {
    HistoryLog::LogClose(*(_IO_FILE **)(param_1 + 0x796f8));
    iVar1 = CUser::get_state(param_1);
    if (iVar1 != 0) {
      CUser::prepareDisconnect(param_1);
      pGVar2 = (GameWorld *)G_GameWorld();
      GameWorld::EraseLoginUser(pGVar2,param_1);
      CUser::SetSaveRentalInfoToExchange(param_1,false);
      iVar1 = CUser::get_state(param_1);
      if (iVar1 < 3) {
        CUser::SetSaveRentalInfoToExchange(param_1,false);
        CUser::LogoutCachedCharacter(param_1,'\0');
        CUser::UpdateLogout(param_1,true);
        returnUserPool(this,param_1);
      }
      else {
        CheckOutTrade(this,param_1);
        CheckOutParty((CUser *)this,SUB41(param_1,0));
        CheckOutPvp(this,param_1,false);
        CheckOutWarRoom(this,param_1);
        checkOutDeathTower(this,param_1);
        checkOutBossTower(this,param_1);
        checkOutAdvanceAltar(this,param_1);
        checkOutBlueMarble(this,param_1);
        pGVar2 = (GameWorld *)G_GameWorld();
        GameWorld::leave_game_world(pGVar2,param_1);
        CUser::SetGameMasterMode(param_1,false);
        CUser::UpdateData(param_1);
        CUser::LogoutCachedCharacter(param_1,'\0');
        CUser::UpdateLogout(param_1,true);
        CUser::DeleteRentalItemInfo(param_1,1);
        CUser::DeleteRentalItemInfo(param_1,2);
        CUser::ResetCurCharac(param_1);
        CUser::doLinkCharacDisconnect(param_1);
        returnUserPool(this,param_1);
      }
      pCVar3 = (CUser *)GetInstanceShutdowManager();
      CShutdowManager::SendLastMsgDBQueue(pCVar3);
    }
  }
  return;
}

```

---

## user_exit

```asm
// === 082985a8 CGameManager::user_exit  [0x082985a8-0x829893f] ===
 82985a8:	55                   	push   %ebp
 82985a9:	89 e5                	mov    %esp,%ebp
 82985ab:	56                   	push   %esi
 82985ac:	53                   	push   %ebx
 82985ad:	83 ec 70             	sub    $0x70,%esp
 82985b0:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 82985b4:	75 50                	jne    8298606 <_ZN12CGameManager9user_exitEP5CUser+0x5e>
 82985b6:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 82985bd:	00 
 82985be:	c7 44 24 08 71 12 00 	movl   $0x1271,0x8(%esp)
 82985c5:	00 
 82985c6:	c7 44 24 04 40 b3 c1 	movl   $0x8c1b340,0x4(%esp)
 82985cd:	08 
 82985ce:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 82985d1:	89 04 24             	mov    %eax,(%esp)
 82985d4:	e8 3f 71 2b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82985d9:	c7 44 24 0c 71 12 00 	movl   $0x1271,0xc(%esp)
 82985e0:	00 
 82985e1:	c7 44 24 08 40 b3 c1 	movl   $0x8c1b340,0x8(%esp)
 82985e8:	08 
 82985e9:	c7 44 24 04 50 70 c1 	movl   $0x8c17050,0x4(%esp)
 82985f0:	08 
 82985f1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 82985f4:	89 04 24             	mov    %eax,(%esp)
 82985f7:	e8 8c 71 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82985fc:	b8 00 00 00 00       	mov    $0x0,%eax
 8298601:	e9 33 03 00 00       	jmp    8298939 <_ZN12CGameManager9user_exitEP5CUser+0x391>
 8298606:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298609:	89 04 24             	mov    %eax,(%esp)
 829860c:	e8 7b 1d e4 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8298611:	85 c0                	test   %eax,%eax
 8298613:	0f 94 c0             	sete   %al
 8298616:	84 c0                	test   %al,%al
 8298618:	74 61                	je     829867b <_ZN12CGameManager9user_exitEP5CUser+0xd3>
 829861a:	8b 45 0c             	mov    0xc(%ebp),%eax
 829861d:	89 04 24             	mov    %eax,(%esp)
 8298620:	e8 49 1d e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8298625:	89 c3                	mov    %eax,%ebx
 8298627:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 829862e:	00 
 829862f:	c7 44 24 08 7a 12 00 	movl   $0x127a,0x8(%esp)
 8298636:	00 
 8298637:	c7 44 24 04 40 b3 c1 	movl   $0x8c1b340,0x4(%esp)
 829863e:	08 
 829863f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8298642:	89 04 24             	mov    %eax,(%esp)
 8298645:	e8 ce 70 2b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 829864a:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 829864e:	c7 44 24 0c 7a 12 00 	movl   $0x127a,0xc(%esp)
 8298655:	00 
 8298656:	c7 44 24 08 40 b3 c1 	movl   $0x8c1b340,0x8(%esp)
 829865d:	08 
 829865e:	c7 44 24 04 64 70 c1 	movl   $0x8c17064,0x4(%esp)
 8298665:	08 
 8298666:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8298669:	89 04 24             	mov    %eax,(%esp)
 829866c:	e8 17 71 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8298671:	b8 00 00 00 00       	mov    $0x0,%eax
 8298676:	e9 be 02 00 00       	jmp    8298939 <_ZN12CGameManager9user_exitEP5CUser+0x391>
 829867b:	8b 45 0c             	mov    0xc(%ebp),%eax
 829867e:	8b 80 f8 96 07 00    	mov    0x796f8(%eax),%eax
 8298684:	89 04 24             	mov    %eax,(%esp)
 8298687:	e8 a8 16 22 00       	call   84b9d34 <_ZN10HistoryLog8LogCloseEP8_IO_FILE>
 829868c:	8b 45 0c             	mov    0xc(%ebp),%eax
 829868f:	89 04 24             	mov    %eax,(%esp)
 8298692:	e8 53 01 3b 00       	call   86487ea <_ZN5CUser17prepareDisconnectEv>
 8298697:	e8 0b 1d e4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 829869c:	8b 55 0c             	mov    0xc(%ebp),%edx
 829869f:	89 54 24 04          	mov    %edx,0x4(%esp)
 82986a3:	89 04 24             	mov    %eax,(%esp)
 82986a6:	e8 57 6f 43 00       	call   86cf602 <_ZN9GameWorld14EraseLoginUserEP5CUser>
 82986ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 82986ae:	89 04 24             	mov    %eax,(%esp)
 82986b1:	e8 d6 1c e4 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82986b6:	83 f8 02             	cmp    $0x2,%eax
 82986b9:	0f 9f c0             	setg   %al
 82986bc:	84 c0                	test   %al,%al
 82986be:	0f 84 37 02 00 00    	je     82988fb <_ZN12CGameManager9user_exitEP5CUser+0x353>
 82986c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82986c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82986cb:	8b 45 08             	mov    0x8(%ebp),%eax
 82986ce:	89 04 24             	mov    %eax,(%esp)
 82986d1:	e8 3e f5 ff ff       	call   8297c14 <_ZN12CGameManager13CheckOutTradeEP5CUser>
 82986d6:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82986dd:	00 
 82986de:	8b 45 0c             	mov    0xc(%ebp),%eax
 82986e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82986e5:	8b 45 08             	mov    0x8(%ebp),%eax
 82986e8:	89 04 24             	mov    %eax,(%esp)
 82986eb:	e8 86 f5 ff ff       	call   8297c76 <_ZN12CGameManager13CheckOutPartyEP5CUserb>
 82986f0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82986f7:	00 
 82986f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82986fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 82986ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8298702:	89 04 24             	mov    %eax,(%esp)
 8298705:	e8 a0 f7 ff ff       	call   8297eaa <_ZN12CGameManager11CheckOutPvpEP5CUserb>
 829870a:	8b 45 0c             	mov    0xc(%ebp),%eax
 829870d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8298711:	8b 45 08             	mov    0x8(%ebp),%eax
 8298714:	89 04 24             	mov    %eax,(%esp)
 8298717:	e8 dc f6 ff ff       	call   8297df8 <_ZN12CGameManager15CheckOutWarRoomEP5CUser>
 829871c:	8b 45 0c             	mov    0xc(%ebp),%eax
 829871f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8298723:	8b 45 08             	mov    0x8(%ebp),%eax
 8298726:	89 04 24             	mov    %eax,(%esp)
 8298729:	e8 0c fc ff ff       	call   829833a <_ZN12CGameManager18checkOutDeathTowerEP5CUser>
 829872e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298731:	89 44 24 04          	mov    %eax,0x4(%esp)
 8298735:	8b 45 08             	mov    0x8(%ebp),%eax
 8298738:	89 04 24             	mov    %eax,(%esp)
 829873b:	e8 64 fa ff ff       	call   82981a4 <_ZN12CGameManager17checkOutBossTowerEP5CUser>
 8298740:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298743:	89 44 24 04          	mov    %eax,0x4(%esp)
 8298747:	8b 45 08             	mov    0x8(%ebp),%eax
 829874a:	89 04 24             	mov    %eax,(%esp)
 829874d:	e8 20 fb ff ff       	call   8298272 <_ZN12CGameManager20checkOutAdvanceAltarEP5CUser>
 8298752:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298755:	89 44 24 04          	mov    %eax,0x4(%esp)
 8298759:	8b 45 08             	mov    0x8(%ebp),%eax
 829875c:	89 04 24             	mov    %eax,(%esp)
 829875f:	e8 e6 fc ff ff       	call   829844a <_ZN12CGameManager18checkOutBlueMarbleEP5CUser>
 8298764:	e8 3e 1c e4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8298769:	8b 55 0c             	mov    0xc(%ebp),%edx
 829876c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8298770:	89 04 24             	mov    %eax,(%esp)
 8298773:	e8 10 cb 42 00       	call   86c5288 <_ZN9GameWorld16leave_game_worldEP5CUser>
 8298778:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 829877f:	00 
 8298780:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298783:	89 04 24             	mov    %eax,(%esp)
 8298786:	e8 51 0f 3e 00       	call   86796dc <_ZN5CUser17SetGameMasterModeEb>
 829878b:	8b 45 0c             	mov    0xc(%ebp),%eax
 829878e:	89 04 24             	mov    %eax,(%esp)
 8298791:	e8 da aa 3b 00       	call   8653270 <_ZN5CUser10UpdateDataEv>
 8298796:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 829879d:	00 
 829879e:	8b 45 0c             	mov    0xc(%ebp),%eax
 82987a1:	89 04 24             	mov    %eax,(%esp)
 82987a4:	e8 bd 43 3b 00       	call   864cb66 <_ZN5CUser21LogoutCachedCharacterEh>
 82987a9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82987b0:	00 
 82987b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82987b4:	89 04 24             	mov    %eax,(%esp)
 82987b7:	e8 ee cc 3b 00       	call   86554aa <_ZN5CUser12UpdateLogoutEb>
 82987bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82987bf:	89 04 24             	mov    %eax,(%esp)
 82987c2:	e8 b5 1b e4 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 82987c7:	0f b7 f0             	movzwl %ax,%esi
 82987ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 82987cd:	89 04 24             	mov    %eax,(%esp)
 82987d0:	e8 53 88 e6 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 82987d5:	89 c3                	mov    %eax,%ebx
 82987d7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82987de:	00 
 82987df:	c7 44 24 08 dc 12 00 	movl   $0x12dc,0x8(%esp)
 82987e6:	00 
 82987e7:	c7 44 24 04 40 b3 c1 	movl   $0x8c1b340,0x4(%esp)
 82987ee:	08 
 82987ef:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82987f2:	89 04 24             	mov    %eax,(%esp)
 82987f5:	e8 1e 6f 2b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82987fa:	89 74 24 0c          	mov    %esi,0xc(%esp)
 82987fe:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8298802:	c7 44 24 04 89 70 c1 	movl   $0x8c17089,0x4(%esp)
 8298809:	08 
 829880a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 829880d:	89 04 24             	mov    %eax,(%esp)
 8298810:	e8 73 6f 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8298815:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 829881c:	8b 45 0c             	mov    0xc(%ebp),%eax
 829881f:	05 e0 00 00 00       	add    $0xe0,%eax
 8298824:	89 04 24             	mov    %eax,(%esp)
 8298827:	e8 8c a4 01 00       	call   82b2cb8 <_ZN8CNetworkILi4096ELi450000EE10get_socketEv>
 829882c:	89 c3                	mov    %eax,%ebx
 829882e:	e8 78 e8 00 00       	call   82a70ab <_Z14G_EpollHandlerv>
 8298833:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8298837:	89 04 24             	mov    %eax,(%esp)
 829883a:	e8 19 3a 2e 00       	call   857c258 <_ZN12EpollHandler10ResetEpollEi>
 829883f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8298842:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8298846:	0f 95 c0             	setne  %al
 8298849:	84 c0                	test   %al,%al
 829884b:	74 79                	je     82988c6 <_ZN12CGameManager9user_exitEP5CUser+0x31e>
 829884d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8298850:	89 04 24             	mov    %eax,(%esp)
 8298853:	e8 d8 4e de ff       	call   807d730 <strerror@plt>
 8298858:	89 c6                	mov    %eax,%esi
 829885a:	8b 45 0c             	mov    0xc(%ebp),%eax
 829885d:	05 e0 00 00 00       	add    $0xe0,%eax
 8298862:	89 04 24             	mov    %eax,(%esp)
 8298865:	e8 4e a4 01 00       	call   82b2cb8 <_ZN8CNetworkILi4096ELi450000EE10get_socketEv>
 829886a:	89 c3                	mov    %eax,%ebx
 829886c:	8b 45 0c             	mov    0xc(%ebp),%eax
 829886f:	89 04 24             	mov    %eax,(%esp)
 8298872:	e8 f7 1a e4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8298877:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 829887e:	00 
 829887f:	89 04 24             	mov    %eax,(%esp)
 8298882:	e8 c4 07 e7 ff       	call   810904b <_Z14NumberToStringji>
 8298887:	89 74 24 20          	mov    %esi,0x20(%esp)
 829888b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 829888e:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8298892:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8298896:	89 44 24 14          	mov    %eax,0x14(%esp)
 829889a:	c7 44 24 10 a8 70 c1 	movl   $0x8c170a8,0x10(%esp)
 82988a1:	08 
 82988a2:	c7 44 24 0c e3 12 00 	movl   $0x12e3,0xc(%esp)
 82988a9:	00 
 82988aa:	c7 44 24 08 40 b3 c1 	movl   $0x8c1b340,0x8(%esp)
 82988b1:	08 
 82988b2:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 82988b9:	08 
 82988ba:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 82988c1:	e8 44 b3 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 82988c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82988c9:	89 04 24             	mov    %eax,(%esp)
 82988cc:	e8 4b fc 3b 00       	call   865851c <_ZN5CUser14ResetCurCharacEv>
 82988d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82988d4:	89 04 24             	mov    %eax,(%esp)
 82988d7:	e8 b2 a3 3b 00       	call   8652c8e <_ZN5CUser22doLinkCharacDisconnectEv>
 82988dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82988df:	89 44 24 04          	mov    %eax,0x4(%esp)
 82988e3:	8b 45 08             	mov    0x8(%ebp),%eax
 82988e6:	89 04 24             	mov    %eax,(%esp)
 82988e9:	e8 3e c2 ff ff       	call   8294b2c <_ZN12CGameManager14returnUserPoolEP5CUser>
 82988ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 82988f1:	89 04 24             	mov    %eax,(%esp)
 82988f4:	e8 45 01 3c 00       	call   8658a3e <_ZN5CUser20checkLogOutCorrectlyEv>
 82988f9:	eb 39                	jmp    8298934 <_ZN12CGameManager9user_exitEP5CUser+0x38c>
 82988fb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8298902:	00 
 8298903:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298906:	89 04 24             	mov    %eax,(%esp)
 8298909:	e8 5c de 00 00       	call   82a676a <_ZN5CUser27SetSaveRentalInfoToExchangeEb>
 829890e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8298915:	00 
 8298916:	8b 45 0c             	mov    0xc(%ebp),%eax
 8298919:	89 04 24             	mov    %eax,(%esp)
 829891c:	e8 45 42 3b 00       	call   864cb66 <_ZN5CUser21LogoutCachedCharacterEh>
 8298921:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8298928:	00 
 8298929:	8b 45 0c             	mov    0xc(%ebp),%eax
 829892c:	89 04 24             	mov    %eax,(%esp)
 829892f:	e8 76 cb 3b 00       	call   86554aa <_ZN5CUser12UpdateLogoutEb>
 8298934:	b8 01 00 00 00       	mov    $0x1,%eax
 8298939:	83 c4 70             	add    $0x70,%esp
 829893c:	5b                   	pop    %ebx
 829893d:	5e                   	pop    %esi
 829893e:	5d                   	pop    %ebp
 829893f:	c3                   	ret

```

```c
// CGameManager::user_exit @ 0x82985a8

/* CGameManager::user_exit(CUser*) */

undefined4 __thiscall CGameManager::user_exit(CGameManager *this,CUser *param_1)

{
  undefined4 uVar1;
  int iVar2;
  GameWorld *pGVar3;
  uint uVar4;
  EpollHandler *this_00;
  char *pcVar5;
  undefined4 uVar6;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    cMyTrace::cMyTrace(local_40,"bool CGameManager::user_exit(CUser*)",0x1271,5);
    cMyTrace::operator()
              (local_40,"USER_EXIT [%s][%d]","bool CGameManager::user_exit(CUser*)",0x1271);
    uVar1 = 0;
  }
  else {
    iVar2 = CUser::get_state(param_1);
    if (iVar2 == 0) {
      uVar1 = CUser::get_acc_id(param_1);
      cMyTrace::cMyTrace(local_30,"bool CGameManager::user_exit(CUser*)",0x127a,5);
      cMyTrace::operator()
                (local_30,"USER_EXIT STATE NONE [%s][%d]mid(%d)",
                 "bool CGameManager::user_exit(CUser*)",0x127a,uVar1);
      uVar1 = 0;
    }
    else {
      HistoryLog::LogClose(*(_IO_FILE **)(param_1 + 0x796f8));
      CUser::prepareDisconnect(param_1);
      pGVar3 = (GameWorld *)G_GameWorld();
      GameWorld::EraseLoginUser(pGVar3,param_1);
      iVar2 = CUser::get_state(param_1);
      if (iVar2 < 3) {
        CUser::SetSaveRentalInfoToExchange(param_1,false);
        CUser::LogoutCachedCharacter(param_1,'\0');
        CUser::UpdateLogout(param_1,false);
      }
      else {
        CheckOutTrade(this,param_1);
        CheckOutParty((CUser *)this,SUB41(param_1,0));
        CheckOutPvp(this,param_1,false);
        CheckOutWarRoom(this,param_1);
        checkOutDeathTower(this,param_1);
        checkOutBossTower(this,param_1);
        checkOutAdvanceAltar(this,param_1);
        checkOutBlueMarble(this,param_1);
        pGVar3 = (GameWorld *)G_GameWorld();
        GameWorld::leave_game_world(pGVar3,param_1);
        CUser::SetGameMasterMode(param_1,false);
        CUser::UpdateData(param_1);
        CUser::LogoutCachedCharacter(param_1,'\0');
        CUser::UpdateLogout(param_1,false);
        uVar4 = CUser::get_unique_id(param_1);
        uVar1 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        cMyTrace::cMyTrace(local_20,"bool CGameManager::user_exit(CUser*)",0x12dc,0);
        cMyTrace::operator()(local_20,"ID: %s - UID: %d from Logout",uVar1,uVar4 & 0xffff);
        local_10 = 0;
        iVar2 = CNetwork<4096,450000>::get_socket((CNetwork<4096,450000> *)(param_1 + 0xe0));
        this_00 = (EpollHandler *)G_EpollHandler();
        local_10 = EpollHandler::ResetEpoll(this_00,iVar2);
        if (local_10 != 0) {
          pcVar5 = strerror(local_10);
          uVar1 = CNetwork<4096,450000>::get_socket((CNetwork<4096,450000> *)(param_1 + 0xe0));
          uVar4 = CUser::get_acc_id(param_1);
          uVar6 = NumberToString(uVar4,0);
          LogManager::logFormat
                    (1,"App.cpp","bool CGameManager::user_exit(CUser*)",0x12e3,
                     "(m_id: %s) G_EpollHandler()->ResetEpoll(pUser->get_socket(%d)) %d(%s)",uVar6,
                     uVar1,local_10,pcVar5);
        }
        CUser::ResetCurCharac(param_1);
        CUser::doLinkCharacDisconnect(param_1);
        returnUserPool(this,param_1);
        CUser::checkLogOutCorrectly(param_1);
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}

```

---

## ~CGameManager

```asm
// === 08293d1a CGameManager::~CGameManager  [0x08293d1a-0x82941d7] ===
 8293d1a:	55                   	push   %ebp
 8293d1b:	89 e5                	mov    %esp,%ebp
 8293d1d:	56                   	push   %esi
 8293d1e:	53                   	push   %ebx
 8293d1f:	83 ec 10             	sub    $0x10,%esp
 8293d22:	8b 45 08             	mov    0x8(%ebp),%eax
 8293d25:	8b 80 fc 02 00 00    	mov    0x2fc(%eax),%eax
 8293d2b:	85 c0                	test   %eax,%eax
 8293d2d:	74 1d                	je     8293d4c <_ZN12CGameManagerD1Ev+0x32>
 8293d2f:	8b 45 08             	mov    0x8(%ebp),%eax
 8293d32:	8b 98 fc 02 00 00    	mov    0x2fc(%eax),%ebx
 8293d38:	85 db                	test   %ebx,%ebx
 8293d3a:	74 10                	je     8293d4c <_ZN12CGameManagerD1Ev+0x32>
 8293d3c:	89 1c 24             	mov    %ebx,(%esp)
 8293d3f:	e8 b4 5e fd ff       	call   8269bf8 <_ZN10QuickParty24CQuickPartySystemManagerD1Ev>
 8293d44:	89 1c 24             	mov    %ebx,(%esp)
 8293d47:	e8 a4 07 49 00       	call   87244f0 <_ZdlPv>
 8293d4c:	8b 45 08             	mov    0x8(%ebp),%eax
 8293d4f:	c7 80 fc 02 00 00 00 	movl   $0x0,0x2fc(%eax)
 8293d56:	00 00 00 
 8293d59:	8b 45 08             	mov    0x8(%ebp),%eax
 8293d5c:	8b 80 00 03 00 00    	mov    0x300(%eax),%eax
 8293d62:	85 c0                	test   %eax,%eax
 8293d64:	74 1d                	je     8293d83 <_ZN12CGameManagerD1Ev+0x69>
 8293d66:	8b 45 08             	mov    0x8(%ebp),%eax
 8293d69:	8b 98 00 03 00 00    	mov    0x300(%eax),%ebx
 8293d6f:	85 db                	test   %ebx,%ebx
 8293d71:	74 10                	je     8293d83 <_ZN12CGameManagerD1Ev+0x69>
 8293d73:	89 1c 24             	mov    %ebx,(%esp)
 8293d76:	e8 21 99 fd ff       	call   826d69c <_ZN10QuickParty24CQuickPartyRewardManagerD1Ev>
 8293d7b:	89 1c 24             	mov    %ebx,(%esp)
 8293d7e:	e8 6d 07 49 00       	call   87244f0 <_ZdlPv>
 8293d83:	8b 45 08             	mov    0x8(%ebp),%eax
 8293d86:	c7 80 00 03 00 00 00 	movl   $0x0,0x300(%eax)
 8293d8d:	00 00 00 
 8293d90:	8b 45 08             	mov    0x8(%ebp),%eax
 8293d93:	8b 80 14 03 00 00    	mov    0x314(%eax),%eax
 8293d99:	85 c0                	test   %eax,%eax
 8293d9b:	74 2a                	je     8293dc7 <_ZN12CGameManagerD1Ev+0xad>
 8293d9d:	8b 45 08             	mov    0x8(%ebp),%eax
 8293da0:	8b 98 14 03 00 00    	mov    0x314(%eax),%ebx
 8293da6:	85 db                	test   %ebx,%ebx
 8293da8:	74 10                	je     8293dba <_ZN12CGameManagerD1Ev+0xa0>
 8293daa:	89 1c 24             	mov    %ebx,(%esp)
 8293dad:	e8 60 6a 01 00       	call   82aa812 <_ZN20CAuctionAveragePriceD1Ev>
 8293db2:	89 1c 24             	mov    %ebx,(%esp)
 8293db5:	e8 36 07 49 00       	call   87244f0 <_ZdlPv>
 8293dba:	8b 45 08             	mov    0x8(%ebp),%eax
 8293dbd:	c7 80 14 03 00 00 00 	movl   $0x0,0x314(%eax)
 8293dc4:	00 00 00 
 8293dc7:	8b 45 08             	mov    0x8(%ebp),%eax
 8293dca:	8b 80 18 03 00 00    	mov    0x318(%eax),%eax
 8293dd0:	85 c0                	test   %eax,%eax
 8293dd2:	74 39                	je     8293e0d <_ZN12CGameManagerD1Ev+0xf3>
 8293dd4:	8b 45 08             	mov    0x8(%ebp),%eax
 8293dd7:	8b 98 18 03 00 00    	mov    0x318(%eax),%ebx
 8293ddd:	85 db                	test   %ebx,%ebx
 8293ddf:	74 2c                	je     8293e0d <_ZN12CGameManagerD1Ev+0xf3>
 8293de1:	89 1c 24             	mov    %ebx,(%esp)
 8293de4:	e8 71 7e e5 ff       	call   80ebc5a <_ZN20CraneMinigameManagerD1Ev>
 8293de9:	89 1c 24             	mov    %ebx,(%esp)
 8293dec:	e8 ff 06 49 00       	call   87244f0 <_ZdlPv>
 8293df1:	eb 1a                	jmp    8293e0d <_ZN12CGameManagerD1Ev+0xf3>
 8293df3:	89 d3                	mov    %edx,%ebx
 8293df5:	89 c6                	mov    %eax,%esi
 8293df7:	8b 45 08             	mov    0x8(%ebp),%eax
 8293dfa:	05 e8 02 00 00       	add    $0x2e8,%eax
 8293dff:	89 04 24             	mov    %eax,(%esp)
 8293e02:	e8 e3 69 01 00       	call   82aa7ea <_ZN9__gnu_cxx8hash_mapIiP10BlueMarbleNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8293e07:	89 f0                	mov    %esi,%eax
 8293e09:	89 da                	mov    %ebx,%edx
 8293e0b:	eb 12                	jmp    8293e1f <_ZN12CGameManagerD1Ev+0x105>
 8293e0d:	8b 45 08             	mov    0x8(%ebp),%eax
 8293e10:	05 e8 02 00 00       	add    $0x2e8,%eax
 8293e15:	89 04 24             	mov    %eax,(%esp)
 8293e18:	e8 cd 69 01 00       	call   82aa7ea <_ZN9__gnu_cxx8hash_mapIiP10BlueMarbleNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8293e1d:	eb 1a                	jmp    8293e39 <_ZN12CGameManagerD1Ev+0x11f>
 8293e1f:	89 d3                	mov    %edx,%ebx
 8293e21:	89 c6                	mov    %eax,%esi
 8293e23:	8b 45 08             	mov    0x8(%ebp),%eax
 8293e26:	05 d4 02 00 00       	add    $0x2d4,%eax
 8293e2b:	89 04 24             	mov    %eax,(%esp)
 8293e2e:	e8 a3 69 01 00       	call   82aa7d6 <_ZN9__gnu_cxx8hash_mapIiPN10QuickParty11CQuickPartyENS_4hashIiEESt8equal_toIiESaIS3_EED1Ev>
 8293e33:	89 f0                	mov    %esi,%eax
 8293e35:	89 da                	mov    %ebx,%edx
 8293e37:	eb 12                	jmp    8293e4b <_ZN12CGameManagerD1Ev+0x131>
 8293e39:	8b 45 08             	mov    0x8(%ebp),%eax
 8293e3c:	05 d4 02 00 00       	add    $0x2d4,%eax
 8293e41:	89 04 24             	mov    %eax,(%esp)
 8293e44:	e8 8d 69 01 00       	call   82aa7d6 <_ZN9__gnu_cxx8hash_mapIiPN10QuickParty11CQuickPartyENS_4hashIiEESt8equal_toIiESaIS3_EED1Ev>
 8293e49:	eb 1a                	jmp    8293e65 <_ZN12CGameManagerD1Ev+0x14b>
 8293e4b:	89 d3                	mov    %edx,%ebx
 8293e4d:	89 c6                	mov    %eax,%esi
 8293e4f:	8b 45 08             	mov    0x8(%ebp),%eax
 8293e52:	05 c0 02 00 00       	add    $0x2c0,%eax
 8293e57:	89 04 24             	mov    %eax,(%esp)
 8293e5a:	e8 63 69 01 00       	call   82aa7c2 <_ZN9__gnu_cxx8hash_mapIiPN12advancealtar12StageControlENS_4hashIiEESt8equal_toIiESaIS3_EED1Ev>
 8293e5f:	89 f0                	mov    %esi,%eax
 8293e61:	89 da                	mov    %ebx,%edx
 8293e63:	eb 12                	jmp    8293e77 <_ZN12CGameManagerD1Ev+0x15d>
 8293e65:	8b 45 08             	mov    0x8(%ebp),%eax
 8293e68:	05 c0 02 00 00       	add    $0x2c0,%eax
 8293e6d:	89 04 24             	mov    %eax,(%esp)
 8293e70:	e8 4d 69 01 00       	call   82aa7c2 <_ZN9__gnu_cxx8hash_mapIiPN12advancealtar12StageControlENS_4hashIiEESt8equal_toIiESaIS3_EED1Ev>
 8293e75:	eb 1a                	jmp    8293e91 <_ZN12CGameManagerD1Ev+0x177>
 8293e77:	89 d3                	mov    %edx,%ebx
 8293e79:	89 c6                	mov    %eax,%esi
 8293e7b:	8b 45 08             	mov    0x8(%ebp),%eax
 8293e7e:	05 ac 02 00 00       	add    $0x2ac,%eax
 8293e83:	89 04 24             	mov    %eax,(%esp)
 8293e86:	e8 23 69 01 00       	call   82aa7ae <_ZN9__gnu_cxx8hash_mapIiPN8WongWork10CBossTowerENS_4hashIiEESt8equal_toIiESaIS3_EED1Ev>
 8293e8b:	89 f0                	mov    %esi,%eax
 8293e8d:	89 da                	mov    %ebx,%edx
 8293e8f:	eb 12                	jmp    8293ea3 <_ZN12CGameManagerD1Ev+0x189>
 8293e91:	8b 45 08             	mov    0x8(%ebp),%eax
 8293e94:	05 ac 02 00 00       	add    $0x2ac,%eax
 8293e99:	89 04 24             	mov    %eax,(%esp)
 8293e9c:	e8 0d 69 01 00       	call   82aa7ae <_ZN9__gnu_cxx8hash_mapIiPN8WongWork10CBossTowerENS_4hashIiEESt8equal_toIiESaIS3_EED1Ev>
 8293ea1:	eb 1a                	jmp    8293ebd <_ZN12CGameManagerD1Ev+0x1a3>
 8293ea3:	89 d3                	mov    %edx,%ebx
 8293ea5:	89 c6                	mov    %eax,%esi
 8293ea7:	8b 45 08             	mov    0x8(%ebp),%eax
 8293eaa:	05 98 02 00 00       	add    $0x298,%eax
 8293eaf:	89 04 24             	mov    %eax,(%esp)
 8293eb2:	e8 e3 68 01 00       	call   82aa79a <_ZN9__gnu_cxx8hash_mapIiPN8WongWork11CDeathTowerENS_4hashIiEESt8equal_toIiESaIS3_EED1Ev>
 8293eb7:	89 f0                	mov    %esi,%eax
 8293eb9:	89 da                	mov    %ebx,%edx
 8293ebb:	eb 12                	jmp    8293ecf <_ZN12CGameManagerD1Ev+0x1b5>
 8293ebd:	8b 45 08             	mov    0x8(%ebp),%eax
 8293ec0:	05 98 02 00 00       	add    $0x298,%eax
 8293ec5:	89 04 24             	mov    %eax,(%esp)
 8293ec8:	e8 cd 68 01 00       	call   82aa79a <_ZN9__gnu_cxx8hash_mapIiPN8WongWork11CDeathTowerENS_4hashIiEESt8equal_toIiESaIS3_EED1Ev>
 8293ecd:	eb 1a                	jmp    8293ee9 <_ZN12CGameManagerD1Ev+0x1cf>
 8293ecf:	89 d3                	mov    %edx,%ebx
 8293ed1:	89 c6                	mov    %eax,%esi
 8293ed3:	8b 45 08             	mov    0x8(%ebp),%eax
 8293ed6:	05 84 02 00 00       	add    $0x284,%eax
 8293edb:	89 04 24             	mov    %eax,(%esp)
 8293ede:	e8 a3 68 01 00       	call   82aa786 <_ZN9__gnu_cxx8hash_mapIiP7WarRoomNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8293ee3:	89 f0                	mov    %esi,%eax
 8293ee5:	89 da                	mov    %ebx,%edx
 8293ee7:	eb 12                	jmp    8293efb <_ZN12CGameManagerD1Ev+0x1e1>
 8293ee9:	8b 45 08             	mov    0x8(%ebp),%eax
 8293eec:	05 84 02 00 00       	add    $0x284,%eax
 8293ef1:	89 04 24             	mov    %eax,(%esp)
 8293ef4:	e8 8d 68 01 00       	call   82aa786 <_ZN9__gnu_cxx8hash_mapIiP7WarRoomNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8293ef9:	eb 1a                	jmp    8293f15 <_ZN12CGameManagerD1Ev+0x1fb>
 8293efb:	89 d3                	mov    %edx,%ebx
 8293efd:	89 c6                	mov    %eax,%esi
 8293eff:	8b 45 08             	mov    0x8(%ebp),%eax
 8293f02:	05 70 02 00 00       	add    $0x270,%eax
 8293f07:	89 04 24             	mov    %eax,(%esp)
 8293f0a:	e8 63 68 01 00       	call   82aa772 <_ZN9__gnu_cxx8hash_mapIiP6CPartyNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8293f0f:	89 f0                	mov    %esi,%eax
 8293f11:	89 da                	mov    %ebx,%edx
 8293f13:	eb 12                	jmp    8293f27 <_ZN12CGameManagerD1Ev+0x20d>
 8293f15:	8b 45 08             	mov    0x8(%ebp),%eax
 8293f18:	05 70 02 00 00       	add    $0x270,%eax
 8293f1d:	89 04 24             	mov    %eax,(%esp)
 8293f20:	e8 4d 68 01 00       	call   82aa772 <_ZN9__gnu_cxx8hash_mapIiP6CPartyNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8293f25:	eb 1a                	jmp    8293f41 <_ZN12CGameManagerD1Ev+0x227>
 8293f27:	89 d3                	mov    %edx,%ebx
 8293f29:	89 c6                	mov    %eax,%esi
 8293f2b:	8b 45 08             	mov    0x8(%ebp),%eax
 8293f2e:	05 5c 02 00 00       	add    $0x25c,%eax
 8293f33:	89 04 24             	mov    %eax,(%esp)
 8293f36:	e8 23 68 01 00       	call   82aa75e <_ZN9__gnu_cxx8hash_mapIiP8PvP_RoomNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8293f3b:	89 f0                	mov    %esi,%eax
 8293f3d:	89 da                	mov    %ebx,%edx
 8293f3f:	eb 12                	jmp    8293f53 <_ZN12CGameManagerD1Ev+0x239>
 8293f41:	8b 45 08             	mov    0x8(%ebp),%eax
 8293f44:	05 5c 02 00 00       	add    $0x25c,%eax
 8293f49:	89 04 24             	mov    %eax,(%esp)
 8293f4c:	e8 0d 68 01 00       	call   82aa75e <_ZN9__gnu_cxx8hash_mapIiP8PvP_RoomNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8293f51:	eb 1a                	jmp    8293f6d <_ZN12CGameManagerD1Ev+0x253>
 8293f53:	89 d3                	mov    %edx,%ebx
 8293f55:	89 c6                	mov    %eax,%esi
 8293f57:	8b 45 08             	mov    0x8(%ebp),%eax
 8293f5a:	05 44 02 00 00       	add    $0x244,%eax
 8293f5f:	89 04 24             	mov    %eax,(%esp)
 8293f62:	e8 e3 67 01 00       	call   82aa74a <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 8293f67:	89 f0                	mov    %esi,%eax
 8293f69:	89 da                	mov    %ebx,%edx
 8293f6b:	eb 12                	jmp    8293f7f <_ZN12CGameManagerD1Ev+0x265>
 8293f6d:	8b 45 08             	mov    0x8(%ebp),%eax
 8293f70:	05 44 02 00 00       	add    $0x244,%eax
 8293f75:	89 04 24             	mov    %eax,(%esp)
 8293f78:	e8 cd 67 01 00       	call   82aa74a <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 8293f7d:	eb 1a                	jmp    8293f99 <_ZN12CGameManagerD1Ev+0x27f>
 8293f7f:	89 d3                	mov    %edx,%ebx
 8293f81:	89 c6                	mov    %eax,%esi
 8293f83:	8b 45 08             	mov    0x8(%ebp),%eax
 8293f86:	05 2c 02 00 00       	add    $0x22c,%eax
 8293f8b:	89 04 24             	mov    %eax,(%esp)
 8293f8e:	e8 b7 67 01 00       	call   82aa74a <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 8293f93:	89 f0                	mov    %esi,%eax
 8293f95:	89 da                	mov    %ebx,%edx
 8293f97:	eb 12                	jmp    8293fab <_ZN12CGameManagerD1Ev+0x291>
 8293f99:	8b 45 08             	mov    0x8(%ebp),%eax
 8293f9c:	05 2c 02 00 00       	add    $0x22c,%eax
 8293fa1:	89 04 24             	mov    %eax,(%esp)
 8293fa4:	e8 a1 67 01 00       	call   82aa74a <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 8293fa9:	eb 1a                	jmp    8293fc5 <_ZN12CGameManagerD1Ev+0x2ab>
 8293fab:	89 d3                	mov    %edx,%ebx
 8293fad:	89 c6                	mov    %eax,%esi
 8293faf:	8b 45 08             	mov    0x8(%ebp),%eax
 8293fb2:	05 fc 01 00 00       	add    $0x1fc,%eax
 8293fb7:	89 04 24             	mov    %eax,(%esp)
 8293fba:	e8 cd ba 01 00       	call   82afa8c <_ZN10StaticPoolI10BlueMarbleLi300EED1Ev>
 8293fbf:	89 f0                	mov    %esi,%eax
 8293fc1:	89 da                	mov    %ebx,%edx
 8293fc3:	eb 12                	jmp    8293fd7 <_ZN12CGameManagerD1Ev+0x2bd>
 8293fc5:	8b 45 08             	mov    0x8(%ebp),%eax
 8293fc8:	05 fc 01 00 00       	add    $0x1fc,%eax
 8293fcd:	89 04 24             	mov    %eax,(%esp)
 8293fd0:	e8 b7 ba 01 00       	call   82afa8c <_ZN10StaticPoolI10BlueMarbleLi300EED1Ev>
 8293fd5:	eb 1a                	jmp    8293ff1 <_ZN12CGameManagerD1Ev+0x2d7>
 8293fd7:	89 d3                	mov    %edx,%ebx
 8293fd9:	89 c6                	mov    %eax,%esi
 8293fdb:	8b 45 08             	mov    0x8(%ebp),%eax
 8293fde:	05 cc 01 00 00       	add    $0x1cc,%eax
 8293fe3:	89 04 24             	mov    %eax,(%esp)
 8293fe6:	e8 3f b8 01 00       	call   82af82a <_ZN10StaticPoolIN10QuickParty11CQuickPartyELi300EED1Ev>
 8293feb:	89 f0                	mov    %esi,%eax
 8293fed:	89 da                	mov    %ebx,%edx
 8293fef:	eb 12                	jmp    8294003 <_ZN12CGameManagerD1Ev+0x2e9>
 8293ff1:	8b 45 08             	mov    0x8(%ebp),%eax
 8293ff4:	05 cc 01 00 00       	add    $0x1cc,%eax
 8293ff9:	89 04 24             	mov    %eax,(%esp)
 8293ffc:	e8 29 b8 01 00       	call   82af82a <_ZN10StaticPoolIN10QuickParty11CQuickPartyELi300EED1Ev>
 8294001:	eb 1a                	jmp    829401d <_ZN12CGameManagerD1Ev+0x303>
 8294003:	89 d3                	mov    %edx,%ebx
 8294005:	89 c6                	mov    %eax,%esi
 8294007:	8b 45 08             	mov    0x8(%ebp),%eax
 829400a:	05 9c 01 00 00       	add    $0x19c,%eax
 829400f:	89 04 24             	mov    %eax,(%esp)
 8294012:	e8 b3 b5 01 00       	call   82af5ca <_ZN10StaticPoolIN12advancealtar12StageControlELi600EED1Ev>
 8294017:	89 f0                	mov    %esi,%eax
 8294019:	89 da                	mov    %ebx,%edx
 829401b:	eb 12                	jmp    829402f <_ZN12CGameManagerD1Ev+0x315>
 829401d:	8b 45 08             	mov    0x8(%ebp),%eax
 8294020:	05 9c 01 00 00       	add    $0x19c,%eax
 8294025:	89 04 24             	mov    %eax,(%esp)
 8294028:	e8 9d b5 01 00       	call   82af5ca <_ZN10StaticPoolIN12advancealtar12StageControlELi600EED1Ev>
 829402d:	eb 1a                	jmp    8294049 <_ZN12CGameManagerD1Ev+0x32f>
 829402f:	89 d3                	mov    %edx,%ebx
 8294031:	89 c6                	mov    %eax,%esi
 8294033:	8b 45 08             	mov    0x8(%ebp),%eax
 8294036:	05 6c 01 00 00       	add    $0x16c,%eax
 829403b:	89 04 24             	mov    %eax,(%esp)
 829403e:	e8 29 b3 01 00       	call   82af36c <_ZN10StaticPoolIN8WongWork10CBossTowerELi600EED1Ev>
 8294043:	89 f0                	mov    %esi,%eax
 8294045:	89 da                	mov    %ebx,%edx
 8294047:	eb 12                	jmp    829405b <_ZN12CGameManagerD1Ev+0x341>
 8294049:	8b 45 08             	mov    0x8(%ebp),%eax
 829404c:	05 6c 01 00 00       	add    $0x16c,%eax
 8294051:	89 04 24             	mov    %eax,(%esp)
 8294054:	e8 13 b3 01 00       	call   82af36c <_ZN10StaticPoolIN8WongWork10CBossTowerELi600EED1Ev>
 8294059:	eb 1a                	jmp    8294075 <_ZN12CGameManagerD1Ev+0x35b>
 829405b:	89 d3                	mov    %edx,%ebx
 829405d:	89 c6                	mov    %eax,%esi
 829405f:	8b 45 08             	mov    0x8(%ebp),%eax
 8294062:	05 3c 01 00 00       	add    $0x13c,%eax
 8294067:	89 04 24             	mov    %eax,(%esp)
 829406a:	e8 97 b0 01 00       	call   82af106 <_ZN10StaticPoolIN8WongWork11CDeathTowerELi600EED1Ev>
 829406f:	89 f0                	mov    %esi,%eax
 8294071:	89 da                	mov    %ebx,%edx
 8294073:	eb 12                	jmp    8294087 <_ZN12CGameManagerD1Ev+0x36d>
 8294075:	8b 45 08             	mov    0x8(%ebp),%eax
 8294078:	05 3c 01 00 00       	add    $0x13c,%eax
 829407d:	89 04 24             	mov    %eax,(%esp)
 8294080:	e8 81 b0 01 00       	call   82af106 <_ZN10StaticPoolIN8WongWork11CDeathTowerELi600EED1Ev>
 8294085:	eb 1a                	jmp    82940a1 <_ZN12CGameManagerD1Ev+0x387>
 8294087:	89 d3                	mov    %edx,%ebx
 8294089:	89 c6                	mov    %eax,%esi
 829408b:	8b 45 08             	mov    0x8(%ebp),%eax
 829408e:	05 0c 01 00 00       	add    $0x10c,%eax
 8294093:	89 04 24             	mov    %eax,(%esp)
 8294096:	e8 05 ae 01 00       	call   82aeea0 <_ZN10StaticPoolI7WarRoomLi40EED1Ev>
 829409b:	89 f0                	mov    %esi,%eax
 829409d:	89 da                	mov    %ebx,%edx
 829409f:	eb 12                	jmp    82940b3 <_ZN12CGameManagerD1Ev+0x399>
 82940a1:	8b 45 08             	mov    0x8(%ebp),%eax
 82940a4:	05 0c 01 00 00       	add    $0x10c,%eax
 82940a9:	89 04 24             	mov    %eax,(%esp)
 82940ac:	e8 ef ad 01 00       	call   82aeea0 <_ZN10StaticPoolI7WarRoomLi40EED1Ev>
 82940b1:	eb 1a                	jmp    82940cd <_ZN12CGameManagerD1Ev+0x3b3>
 82940b3:	89 d3                	mov    %edx,%ebx
 82940b5:	89 c6                	mov    %eax,%esi
 82940b7:	8b 45 08             	mov    0x8(%ebp),%eax
 82940ba:	05 dc 00 00 00       	add    $0xdc,%eax
 82940bf:	89 04 24             	mov    %eax,(%esp)
 82940c2:	e8 6f ab 01 00       	call   82aec36 <_ZN10StaticPoolI8PvP_RoomLi600EED1Ev>
 82940c7:	89 f0                	mov    %esi,%eax
 82940c9:	89 da                	mov    %ebx,%edx
 82940cb:	eb 12                	jmp    82940df <_ZN12CGameManagerD1Ev+0x3c5>
 82940cd:	8b 45 08             	mov    0x8(%ebp),%eax
 82940d0:	05 dc 00 00 00       	add    $0xdc,%eax
 82940d5:	89 04 24             	mov    %eax,(%esp)
 82940d8:	e8 59 ab 01 00       	call   82aec36 <_ZN10StaticPoolI8PvP_RoomLi600EED1Ev>
 82940dd:	eb 1a                	jmp    82940f9 <_ZN12CGameManagerD1Ev+0x3df>
 82940df:	89 d3                	mov    %edx,%ebx
 82940e1:	89 c6                	mov    %eax,%esi
 82940e3:	8b 45 08             	mov    0x8(%ebp),%eax
 82940e6:	05 ac 00 00 00       	add    $0xac,%eax
 82940eb:	89 04 24             	mov    %eax,(%esp)
 82940ee:	e8 e5 a8 01 00       	call   82ae9d8 <_ZN10StaticPoolI6CPartyLi600EED1Ev>
 82940f3:	89 f0                	mov    %esi,%eax
 82940f5:	89 da                	mov    %ebx,%edx
 82940f7:	eb 12                	jmp    829410b <_ZN12CGameManagerD1Ev+0x3f1>
 82940f9:	8b 45 08             	mov    0x8(%ebp),%eax
 82940fc:	05 ac 00 00 00       	add    $0xac,%eax
 8294101:	89 04 24             	mov    %eax,(%esp)
 8294104:	e8 cf a8 01 00       	call   82ae9d8 <_ZN10StaticPoolI6CPartyLi600EED1Ev>
 8294109:	eb 18                	jmp    8294123 <_ZN12CGameManagerD1Ev+0x409>
 829410b:	89 d3                	mov    %edx,%ebx
 829410d:	89 c6                	mov    %eax,%esi
 829410f:	8b 45 08             	mov    0x8(%ebp),%eax
 8294112:	83 c0 7c             	add    $0x7c,%eax
 8294115:	89 04 24             	mov    %eax,(%esp)
 8294118:	e8 7f a6 01 00       	call   82ae79c <_ZN10StaticPoolI11CTradeSpaceLi300EED1Ev>
 829411d:	89 f0                	mov    %esi,%eax
 829411f:	89 da                	mov    %ebx,%edx
 8294121:	eb 10                	jmp    8294133 <_ZN12CGameManagerD1Ev+0x419>
 8294123:	8b 45 08             	mov    0x8(%ebp),%eax
 8294126:	83 c0 7c             	add    $0x7c,%eax
 8294129:	89 04 24             	mov    %eax,(%esp)
 829412c:	e8 6b a6 01 00       	call   82ae79c <_ZN10StaticPoolI11CTradeSpaceLi300EED1Ev>
 8294131:	eb 18                	jmp    829414b <_ZN12CGameManagerD1Ev+0x431>
 8294133:	89 d3                	mov    %edx,%ebx
 8294135:	89 c6                	mov    %eax,%esi
 8294137:	8b 45 08             	mov    0x8(%ebp),%eax
 829413a:	83 c0 4c             	add    $0x4c,%eax
 829413d:	89 04 24             	mov    %eax,(%esp)
 8294140:	e8 f9 a3 01 00       	call   82ae53e <_ZN10StaticPoolI5CUserLi600EED1Ev>
 8294145:	89 f0                	mov    %esi,%eax
 8294147:	89 da                	mov    %ebx,%edx
 8294149:	eb 10                	jmp    829415b <_ZN12CGameManagerD1Ev+0x441>
 829414b:	8b 45 08             	mov    0x8(%ebp),%eax
 829414e:	83 c0 4c             	add    $0x4c,%eax
 8294151:	89 04 24             	mov    %eax,(%esp)
 8294154:	e8 e5 a3 01 00       	call   82ae53e <_ZN10StaticPoolI5CUserLi600EED1Ev>
 8294159:	eb 18                	jmp    8294173 <_ZN12CGameManagerD1Ev+0x459>
 829415b:	89 d3                	mov    %edx,%ebx
 829415d:	89 c6                	mov    %eax,%esi
 829415f:	8b 45 08             	mov    0x8(%ebp),%eax
 8294162:	83 c0 34             	add    $0x34,%eax
 8294165:	89 04 24             	mov    %eax,(%esp)
 8294168:	e8 c9 65 01 00       	call   82aa736 <_ZNSt3setISsSt4lessISsESaISsEED1Ev>
 829416d:	89 f0                	mov    %esi,%eax
 829416f:	89 da                	mov    %ebx,%edx
 8294171:	eb 10                	jmp    8294183 <_ZN12CGameManagerD1Ev+0x469>
 8294173:	8b 45 08             	mov    0x8(%ebp),%eax
 8294176:	83 c0 34             	add    $0x34,%eax
 8294179:	89 04 24             	mov    %eax,(%esp)
 829417c:	e8 b5 65 01 00       	call   82aa736 <_ZNSt3setISsSt4lessISsESaISsEED1Ev>
 8294181:	eb 18                	jmp    829419b <_ZN12CGameManagerD1Ev+0x481>
 8294183:	89 d3                	mov    %edx,%ebx
 8294185:	89 c6                	mov    %eax,%esi
 8294187:	8b 45 08             	mov    0x8(%ebp),%eax
 829418a:	83 c0 1c             	add    $0x1c,%eax
 829418d:	89 04 24             	mov    %eax,(%esp)
 8294190:	e8 a1 65 01 00       	call   82aa736 <_ZNSt3setISsSt4lessISsESaISsEED1Ev>
 8294195:	89 f0                	mov    %esi,%eax
 8294197:	89 da                	mov    %ebx,%edx
 8294199:	eb 10                	jmp    82941ab <_ZN12CGameManagerD1Ev+0x491>
 829419b:	8b 45 08             	mov    0x8(%ebp),%eax
 829419e:	83 c0 1c             	add    $0x1c,%eax
 82941a1:	89 04 24             	mov    %eax,(%esp)
 82941a4:	e8 8d 65 01 00       	call   82aa736 <_ZNSt3setISsSt4lessISsESaISsEED1Ev>
 82941a9:	eb 1b                	jmp    82941c6 <_ZN12CGameManagerD1Ev+0x4ac>
 82941ab:	89 d3                	mov    %edx,%ebx
 82941ad:	89 c6                	mov    %eax,%esi
 82941af:	8b 45 08             	mov    0x8(%ebp),%eax
 82941b2:	89 04 24             	mov    %eax,(%esp)
 82941b5:	e8 74 72 e3 ff       	call   80cb42e <_ZN5MutexD1Ev>
 82941ba:	89 f0                	mov    %esi,%eax
 82941bc:	89 da                	mov    %ebx,%edx
 82941be:	89 04 24             	mov    %eax,(%esp)
 82941c1:	e8 8a f5 84 00       	call   8ae3750 <_Unwind_Resume>
 82941c6:	8b 45 08             	mov    0x8(%ebp),%eax
 82941c9:	89 04 24             	mov    %eax,(%esp)
 82941cc:	e8 5d 72 e3 ff       	call   80cb42e <_ZN5MutexD1Ev>
 82941d1:	83 c4 10             	add    $0x10,%esp
 82941d4:	5b                   	pop    %ebx
 82941d5:	5e                   	pop    %esi
 82941d6:	5d                   	pop    %ebp
 82941d7:	c3                   	ret

```

```c
// CGameManager::~CGameManager @ 0x8293d1a

/* CGameManager::~CGameManager() */

void __thiscall CGameManager::~CGameManager(CGameManager *this)

{
  CQuickPartySystemManager *this_00;
  CQuickPartyRewardManager *this_01;
  CAuctionAveragePrice *this_02;
  CraneMinigameManager *this_03;
  
  if ((*(int *)(this + 0x2fc) != 0) &&
     (this_00 = *(CQuickPartySystemManager **)(this + 0x2fc),
     this_00 != (CQuickPartySystemManager *)0x0)) {
                    /* try { // try from 08293d3f to 08293de8 has its CatchHandler @ 08293df3 */
    QuickParty::CQuickPartySystemManager::~CQuickPartySystemManager(this_00);
    operator_delete(this_00);
  }
  *(undefined4 *)(this + 0x2fc) = 0;
  if ((*(int *)(this + 0x300) != 0) &&
     (this_01 = *(CQuickPartyRewardManager **)(this + 0x300),
     this_01 != (CQuickPartyRewardManager *)0x0)) {
    QuickParty::CQuickPartyRewardManager::~CQuickPartyRewardManager(this_01);
    operator_delete(this_01);
  }
  *(undefined4 *)(this + 0x300) = 0;
  if (*(int *)(this + 0x314) != 0) {
    this_02 = *(CAuctionAveragePrice **)(this + 0x314);
    if (this_02 != (CAuctionAveragePrice *)0x0) {
      CAuctionAveragePrice::~CAuctionAveragePrice(this_02);
      operator_delete(this_02);
    }
    *(undefined4 *)(this + 0x314) = 0;
  }
  if ((*(int *)(this + 0x318) != 0) &&
     (this_03 = *(CraneMinigameManager **)(this + 0x318), this_03 != (CraneMinigameManager *)0x0)) {
    CraneMinigameManager::~CraneMinigameManager(this_03);
    operator_delete(this_03);
  }
                    /* try { // try from 08293e18 to 08293e1c has its CatchHandler @ 08293e1f */
  __gnu_cxx::
  hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>::
  ~hash_map((hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
             *)(this + 0x2e8));
                    /* try { // try from 08293e44 to 08293e48 has its CatchHandler @ 08293e4b */
  __gnu_cxx::
  hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
  ::~hash_map((hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
               *)(this + 0x2d4));
                    /* try { // try from 08293e70 to 08293e74 has its CatchHandler @ 08293e77 */
  __gnu_cxx::
  hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  ::~hash_map((hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
               *)(this + 0x2c0));
                    /* try { // try from 08293e9c to 08293ea0 has its CatchHandler @ 08293ea3 */
  __gnu_cxx::
  hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
  ::~hash_map((hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
               *)(this + 0x2ac));
                    /* try { // try from 08293ec8 to 08293ecc has its CatchHandler @ 08293ecf */
  __gnu_cxx::
  hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
  ::~hash_map((hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
               *)(this + 0x298));
                    /* try { // try from 08293ef4 to 08293ef8 has its CatchHandler @ 08293efb */
  __gnu_cxx::hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  ::~hash_map((hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
               *)(this + 0x284));
                    /* try { // try from 08293f20 to 08293f24 has its CatchHandler @ 08293f27 */
  __gnu_cxx::hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>::
  ~hash_map((hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>> *
            )(this + 0x270));
                    /* try { // try from 08293f4c to 08293f50 has its CatchHandler @ 08293f53 */
  __gnu_cxx::
  hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::
  ~hash_map((hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
             *)(this + 0x25c));
                    /* try { // try from 08293f78 to 08293f7c has its CatchHandler @ 08293f7f */
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::~map((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          *)(this + 0x244));
                    /* try { // try from 08293fa4 to 08293fa8 has its CatchHandler @ 08293fab */
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::~map((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          *)(this + 0x22c));
                    /* try { // try from 08293fd0 to 08293fd4 has its CatchHandler @ 08293fd7 */
  StaticPool<BlueMarble,300>::~StaticPool((StaticPool<BlueMarble,300> *)(this + 0x1fc));
                    /* try { // try from 08293ffc to 08294000 has its CatchHandler @ 08294003 */
  StaticPool<QuickParty::CQuickParty,300>::~StaticPool
            ((StaticPool<QuickParty::CQuickParty,300> *)(this + 0x1cc));
                    /* try { // try from 08294028 to 0829402c has its CatchHandler @ 0829402f */
  StaticPool<advancealtar::StageControl,600>::~StaticPool
            ((StaticPool<advancealtar::StageControl,600> *)(this + 0x19c));
                    /* try { // try from 08294054 to 08294058 has its CatchHandler @ 0829405b */
  StaticPool<WongWork::CBossTower,600>::~StaticPool
            ((StaticPool<WongWork::CBossTower,600> *)(this + 0x16c));
                    /* try { // try from 08294080 to 08294084 has its CatchHandler @ 08294087 */
  StaticPool<WongWork::CDeathTower,600>::~StaticPool
            ((StaticPool<WongWork::CDeathTower,600> *)(this + 0x13c));
                    /* try { // try from 082940ac to 082940b0 has its CatchHandler @ 082940b3 */
  StaticPool<WarRoom,40>::~StaticPool((StaticPool<WarRoom,40> *)(this + 0x10c));
                    /* try { // try from 082940d8 to 082940dc has its CatchHandler @ 082940df */
  StaticPool<PvP_Room,600>::~StaticPool((StaticPool<PvP_Room,600> *)(this + 0xdc));
                    /* try { // try from 08294104 to 08294108 has its CatchHandler @ 0829410b */
  StaticPool<CParty,600>::~StaticPool((StaticPool<CParty,600> *)(this + 0xac));
                    /* try { // try from 0829412c to 08294130 has its CatchHandler @ 08294133 */
  StaticPool<CTradeSpace,300>::~StaticPool((StaticPool<CTradeSpace,300> *)(this + 0x7c));
                    /* try { // try from 08294154 to 08294158 has its CatchHandler @ 0829415b */
  StaticPool<CUser,600>::~StaticPool((StaticPool<CUser,600> *)(this + 0x4c));
                    /* try { // try from 0829417c to 08294180 has its CatchHandler @ 08294183 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x34));
                    /* try { // try from 082941a4 to 082941a8 has its CatchHandler @ 082941ab */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x1c));
  Mutex::~Mutex((Mutex *)this);
  return;
}

```

