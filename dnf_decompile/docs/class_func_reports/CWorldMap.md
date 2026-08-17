# CWorldMap

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## set_world_map

```asm
// === 0836421a CWorldMap::set_world_map  [0x0836421a-0x8364505] ===
 836421a:	55                   	push   %ebp
 836421b:	89 e5                	mov    %esp,%ebp
 836421d:	53                   	push   %ebx
 836421e:	83 ec 54             	sub    $0x54,%esp
 8364221:	8b 45 0c             	mov    0xc(%ebp),%eax
 8364224:	8b 10                	mov    (%eax),%edx
 8364226:	8b 45 08             	mov    0x8(%ebp),%eax
 8364229:	89 10                	mov    %edx,(%eax)
 836422b:	8b 45 0c             	mov    0xc(%ebp),%eax
 836422e:	0f b6 50 20          	movzbl 0x20(%eax),%edx
 8364232:	8b 45 08             	mov    0x8(%ebp),%eax
 8364235:	88 50 04             	mov    %dl,0x4(%eax)
 8364238:	8b 45 0c             	mov    0xc(%ebp),%eax
 836423b:	8d 50 24             	lea    0x24(%eax),%edx
 836423e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8364241:	89 54 24 04          	mov    %edx,0x4(%esp)
 8364245:	89 04 24             	mov    %eax,(%esp)
 8364248:	e8 1f a0 d2 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 836424d:	83 ec 04             	sub    $0x4,%esp
 8364250:	8b 45 0c             	mov    0xc(%ebp),%eax
 8364253:	8d 50 24             	lea    0x24(%eax),%edx
 8364256:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8364259:	89 54 24 04          	mov    %edx,0x4(%esp)
 836425d:	89 04 24             	mov    %eax,(%esp)
 8364260:	e8 e3 9f d2 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8364265:	83 ec 04             	sub    $0x4,%esp
 8364268:	8b 45 08             	mov    0x8(%ebp),%eax
 836426b:	8d 50 1c             	lea    0x1c(%eax),%edx
 836426e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8364271:	89 44 24 08          	mov    %eax,0x8(%esp)
 8364275:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8364278:	89 44 24 04          	mov    %eax,0x4(%esp)
 836427c:	89 14 24             	mov    %edx,(%esp)
 836427f:	e8 82 0f 03 00       	call   8395206 <_ZNSt6vectorIiSaIiEE6assignIN9__gnu_cxx17__normal_iteratorIPiS1_EEEEvT_S7_>
 8364284:	8b 45 08             	mov    0x8(%ebp),%eax
 8364287:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
 836428b:	8b 45 0c             	mov    0xc(%ebp),%eax
 836428e:	8d 50 30             	lea    0x30(%eax),%edx
 8364291:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8364294:	89 54 24 04          	mov    %edx,0x4(%esp)
 8364298:	89 04 24             	mov    %eax,(%esp)
 836429b:	e8 36 93 d7 ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 83642a0:	83 ec 04             	sub    $0x4,%esp
 83642a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 83642a6:	8d 50 30             	lea    0x30(%eax),%edx
 83642a9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83642ac:	89 54 24 04          	mov    %edx,0x4(%esp)
 83642b0:	89 04 24             	mov    %eax,(%esp)
 83642b3:	e8 fa 92 d7 ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 83642b8:	83 ec 04             	sub    $0x4,%esp
 83642bb:	8b 45 08             	mov    0x8(%ebp),%eax
 83642be:	8d 50 28             	lea    0x28(%eax),%edx
 83642c1:	8b 45 cc             	mov    -0x34(%ebp),%eax
 83642c4:	89 44 24 08          	mov    %eax,0x8(%esp)
 83642c8:	8b 45 d0             	mov    -0x30(%ebp),%eax
 83642cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 83642cf:	89 14 24             	mov    %edx,(%esp)
 83642d2:	e8 55 0f 03 00       	call   839522c <_ZNSt6vectorISt4pairIiiESaIS1_EE6assignIN9__gnu_cxx17__normal_iteratorIPS1_S3_EEEEvT_S9_>
 83642d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 83642da:	8d 50 3c             	lea    0x3c(%eax),%edx
 83642dd:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83642e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 83642e4:	89 04 24             	mov    %eax,(%esp)
 83642e7:	e8 80 9f d2 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 83642ec:	83 ec 04             	sub    $0x4,%esp
 83642ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 83642f2:	8d 50 3c             	lea    0x3c(%eax),%edx
 83642f5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83642f8:	89 54 24 04          	mov    %edx,0x4(%esp)
 83642fc:	89 04 24             	mov    %eax,(%esp)
 83642ff:	e8 44 9f d2 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8364304:	83 ec 04             	sub    $0x4,%esp
 8364307:	8b 45 08             	mov    0x8(%ebp),%eax
 836430a:	8d 50 34             	lea    0x34(%eax),%edx
 836430d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8364310:	89 44 24 08          	mov    %eax,0x8(%esp)
 8364314:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8364317:	89 44 24 04          	mov    %eax,0x4(%esp)
 836431b:	89 14 24             	mov    %edx,(%esp)
 836431e:	e8 e3 0e 03 00       	call   8395206 <_ZNSt6vectorIiSaIiEE6assignIN9__gnu_cxx17__normal_iteratorIPiS1_EEEEvT_S7_>
 8364323:	8b 45 08             	mov    0x8(%ebp),%eax
 8364326:	c7 40 08 ff ff ff 7f 	movl   $0x7fffffff,0x8(%eax)
 836432d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8364330:	8d 50 14             	lea    0x14(%eax),%edx
 8364333:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8364336:	89 54 24 04          	mov    %edx,0x4(%esp)
 836433a:	89 04 24             	mov    %eax,(%esp)
 836433d:	e8 10 0f 03 00       	call   8395252 <_ZNSt6vectorI15WorldMapDungeonSaIS0_EE5beginEv>
 8364342:	83 ec 04             	sub    $0x4,%esp
 8364345:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8364348:	89 44 24 04          	mov    %eax,0x4(%esp)
 836434c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 836434f:	89 04 24             	mov    %eax,(%esp)
 8364352:	e8 1f 0f 03 00       	call   8395276 <_ZN9__gnu_cxx17__normal_iteratorIPK15WorldMapDungeonSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 8364357:	8b 45 0c             	mov    0xc(%ebp),%eax
 836435a:	8d 50 14             	lea    0x14(%eax),%edx
 836435d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8364360:	89 54 24 04          	mov    %edx,0x4(%esp)
 8364364:	89 04 24             	mov    %eax,(%esp)
 8364367:	e8 24 0f 03 00       	call   8395290 <_ZNSt6vectorI15WorldMapDungeonSaIS0_EE3endEv>
 836436c:	83 ec 04             	sub    $0x4,%esp
 836436f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8364372:	89 44 24 04          	mov    %eax,0x4(%esp)
 8364376:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8364379:	89 04 24             	mov    %eax,(%esp)
 836437c:	e8 f5 0e 03 00       	call   8395276 <_ZN9__gnu_cxx17__normal_iteratorIPK15WorldMapDungeonSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 8364381:	e9 60 01 00 00       	jmp    83644e6 <_ZN9CWorldMap13set_world_mapEP14WorldMapScript+0x2cc>
 8364386:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8364389:	89 04 24             	mov    %eax,(%esp)
 836438c:	e8 67 0f 03 00       	call   83952f8 <_ZNK9__gnu_cxx17__normal_iteratorIPK15WorldMapDungeonSt6vectorIS1_SaIS1_EEEptEv>
 8364391:	8b 18                	mov    (%eax),%ebx
 8364393:	e8 03 7e d6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8364398:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 836439c:	89 04 24             	mov    %eax,(%esp)
 836439f:	e8 54 b6 ff ff       	call   835f9f8 <_ZNK12CDataManager12find_dungeonEi>
 83643a4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83643a7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 83643ab:	0f 84 26 01 00 00    	je     83644d7 <_ZN9CWorldMap13set_world_mapEP14WorldMapScript+0x2bd>
 83643b1:	8d 45 c0             	lea    -0x40(%ebp),%eax
 83643b4:	89 04 24             	mov    %eax,(%esp)
 83643b7:	e8 3c 0f 03 00       	call   83952f8 <_ZNK9__gnu_cxx17__normal_iteratorIPK15WorldMapDungeonSt6vectorIS1_SaIS1_EEEptEv>
 83643bc:	8b 55 08             	mov    0x8(%ebp),%edx
 83643bf:	83 c2 10             	add    $0x10,%edx
 83643c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 83643c6:	89 14 24             	mov    %edx,(%esp)
 83643c9:	e8 58 cd da ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 83643ce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83643d1:	89 04 24             	mov    %eax,(%esp)
 83643d4:	e8 e7 70 ec ff       	call   822b4c0 <_ZNK8CDungeon14getDungeonKindEv>
 83643d9:	83 f8 01             	cmp    $0x1,%eax
 83643dc:	0f 94 c0             	sete   %al
 83643df:	84 c0                	test   %al,%al
 83643e1:	74 37                	je     836441a <_ZN9CWorldMap13set_world_mapEP14WorldMapScript+0x200>
 83643e3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83643e6:	89 04 24             	mov    %eax,(%esp)
 83643e9:	e8 ac 11 de ff       	call   814559a <_ZNK8CDungeon13get_min_levelEv>
 83643ee:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 83643f1:	8b 45 08             	mov    0x8(%ebp),%eax
 83643f4:	8d 50 08             	lea    0x8(%eax),%edx
 83643f7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 83643fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 83643fe:	89 14 24             	mov    %edx,(%esp)
 8364401:	e8 08 b5 d7 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 8364406:	8b 10                	mov    (%eax),%edx
 8364408:	8b 45 08             	mov    0x8(%ebp),%eax
 836440b:	89 50 08             	mov    %edx,0x8(%eax)
 836440e:	8b 45 08             	mov    0x8(%ebp),%eax
 8364411:	c6 40 0c 01          	movb   $0x1,0xc(%eax)
 8364415:	e9 c1 00 00 00       	jmp    83644db <_ZN9CWorldMap13set_world_mapEP14WorldMapScript+0x2c1>
 836441a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 836441d:	89 04 24             	mov    %eax,(%esp)
 8364420:	e8 9b 70 ec ff       	call   822b4c0 <_ZNK8CDungeon14getDungeonKindEv>
 8364425:	83 f8 02             	cmp    $0x2,%eax
 8364428:	0f 94 c0             	sete   %al
 836442b:	84 c0                	test   %al,%al
 836442d:	74 2d                	je     836445c <_ZN9CWorldMap13set_world_mapEP14WorldMapScript+0x242>
 836442f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8364432:	89 04 24             	mov    %eax,(%esp)
 8364435:	e8 60 11 de ff       	call   814559a <_ZNK8CDungeon13get_min_levelEv>
 836443a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 836443d:	8b 45 08             	mov    0x8(%ebp),%eax
 8364440:	8d 50 08             	lea    0x8(%eax),%edx
 8364443:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8364446:	89 44 24 04          	mov    %eax,0x4(%esp)
 836444a:	89 14 24             	mov    %edx,(%esp)
 836444d:	e8 bc b4 d7 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 8364452:	8b 10                	mov    (%eax),%edx
 8364454:	8b 45 08             	mov    0x8(%ebp),%eax
 8364457:	89 50 08             	mov    %edx,0x8(%eax)
 836445a:	eb 7f                	jmp    83644db <_ZN9CWorldMap13set_world_mapEP14WorldMapScript+0x2c1>
 836445c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 836445f:	0f b6 80 7a 08 00 00 	movzbl 0x87a(%eax),%eax
 8364466:	84 c0                	test   %al,%al
 8364468:	75 70                	jne    83644da <_ZN9CWorldMap13set_world_mapEP14WorldMapScript+0x2c0>
 836446a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 836446d:	89 04 24             	mov    %eax,(%esp)
 8364470:	e8 7b 98 d9 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 8364475:	83 f8 64             	cmp    $0x64,%eax
 8364478:	0f 94 c0             	sete   %al
 836447b:	84 c0                	test   %al,%al
 836447d:	74 2b                	je     83644aa <_ZN9CWorldMap13set_world_mapEP14WorldMapScript+0x290>
 836447f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8364482:	89 04 24             	mov    %eax,(%esp)
 8364485:	e8 10 11 de ff       	call   814559a <_ZNK8CDungeon13get_min_levelEv>
 836448a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 836448d:	8b 45 08             	mov    0x8(%ebp),%eax
 8364490:	8d 50 08             	lea    0x8(%eax),%edx
 8364493:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8364496:	89 44 24 04          	mov    %eax,0x4(%esp)
 836449a:	89 14 24             	mov    %edx,(%esp)
 836449d:	e8 6c b4 d7 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 83644a2:	8b 10                	mov    (%eax),%edx
 83644a4:	8b 45 08             	mov    0x8(%ebp),%eax
 83644a7:	89 50 08             	mov    %edx,0x8(%eax)
 83644aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83644ad:	89 04 24             	mov    %eax,(%esp)
 83644b0:	e8 5b 53 d9 ff       	call   80f9810 <_ZNK8CDungeon18get_standard_levelEv>
 83644b5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 83644b8:	8b 45 08             	mov    0x8(%ebp),%eax
 83644bb:	8d 50 08             	lea    0x8(%eax),%edx
 83644be:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83644c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 83644c5:	89 14 24             	mov    %edx,(%esp)
 83644c8:	e8 41 b4 d7 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 83644cd:	8b 10                	mov    (%eax),%edx
 83644cf:	8b 45 08             	mov    0x8(%ebp),%eax
 83644d2:	89 50 08             	mov    %edx,0x8(%eax)
 83644d5:	eb 04                	jmp    83644db <_ZN9CWorldMap13set_world_mapEP14WorldMapScript+0x2c1>
 83644d7:	90                   	nop
 83644d8:	eb 01                	jmp    83644db <_ZN9CWorldMap13set_world_mapEP14WorldMapScript+0x2c1>
 83644da:	90                   	nop
 83644db:	8d 45 c0             	lea    -0x40(%ebp),%eax
 83644de:	89 04 24             	mov    %eax,(%esp)
 83644e1:	e8 fc 0d 03 00       	call   83952e2 <_ZN9__gnu_cxx17__normal_iteratorIPK15WorldMapDungeonSt6vectorIS1_SaIS1_EEEppEv>
 83644e6:	8d 45 bc             	lea    -0x44(%ebp),%eax
 83644e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 83644ed:	8d 45 c0             	lea    -0x40(%ebp),%eax
 83644f0:	89 04 24             	mov    %eax,(%esp)
 83644f3:	e8 be 0d 03 00       	call   83952b6 <_ZN9__gnu_cxxneIPK15WorldMapDungeonSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 83644f8:	84 c0                	test   %al,%al
 83644fa:	0f 85 86 fe ff ff    	jne    8364386 <_ZN9CWorldMap13set_world_mapEP14WorldMapScript+0x16c>
 8364500:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8364503:	c9                   	leave
 8364504:	c3                   	ret
 8364505:	90                   	nop

```

```c
// CWorldMap::set_world_map @ 0x836421a

/* CWorldMap::set_world_map(WorldMapScript*) */

void __thiscall CWorldMap::set_world_map(CWorldMap *this,WorldMapScript *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  __normal_iterator<WorldMapDungeon_const*,std::vector<WorldMapDungeon,std::allocator<WorldMapDungeon>>>
  local_48 [4];
  __normal_iterator<WorldMapDungeon_const*,std::vector<WorldMapDungeon,std::allocator<WorldMapDungeon>>>
  local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  __normal_iterator local_28 [4];
  __normal_iterator local_24 [4];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  CDungeon *local_10;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  this[4] = *(CWorldMap *)(param_1 + 0x20);
  std::vector<int,std::allocator<int>>::end();
  std::vector<int,std::allocator<int>>::begin();
  std::vector<int,std::allocator<int>>::
  assign<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (local_3c,this + 0x1c,local_3c,local_40);
  this[0xc] = (CWorldMap)0x0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
  assign<__gnu_cxx::__normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
            (local_34,this + 0x28,local_34,local_38);
  std::vector<int,std::allocator<int>>::end();
  std::vector<int,std::allocator<int>>::begin();
  std::vector<int,std::allocator<int>>::
  assign<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (local_2c,this + 0x34,local_2c,local_30);
  *(undefined4 *)(this + 8) = 0x7fffffff;
  std::vector<WorldMapDungeon,std::allocator<WorldMapDungeon>>::begin();
  __gnu_cxx::
  __normal_iterator<WorldMapDungeon_const*,std::vector<WorldMapDungeon,std::allocator<WorldMapDungeon>>>
  ::__normal_iterator<WorldMapDungeon*>(local_44,local_28);
  std::vector<WorldMapDungeon,std::allocator<WorldMapDungeon>>::end();
  __gnu_cxx::
  __normal_iterator<WorldMapDungeon_const*,std::vector<WorldMapDungeon,std::allocator<WorldMapDungeon>>>
  ::__normal_iterator<WorldMapDungeon*>(local_48,local_24);
  while (bVar1 = __gnu_cxx::operator!=(local_44,local_48), bVar1) {
    __gnu_cxx::
    __normal_iterator<WorldMapDungeon_const*,std::vector<WorldMapDungeon,std::allocator<WorldMapDungeon>>>
    ::operator->(local_44);
    iVar2 = G_CDataManager();
    local_10 = (CDungeon *)CDataManager::find_dungeon(iVar2);
    if (local_10 != (CDungeon *)0x0) {
      piVar3 = (int *)__gnu_cxx::
                      __normal_iterator<WorldMapDungeon_const*,std::vector<WorldMapDungeon,std::allocator<WorldMapDungeon>>>
                      ::operator->(local_44);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)(this + 0x10),piVar3);
      iVar2 = CDungeon::getDungeonKind(local_10);
      if (iVar2 == 1) {
        local_20 = CDungeon::get_min_level(local_10);
        piVar3 = std::min<int>((int *)(this + 8),&local_20);
        *(int *)(this + 8) = *piVar3;
        this[0xc] = (CWorldMap)0x1;
      }
      else {
        iVar2 = CDungeon::getDungeonKind(local_10);
        if (iVar2 == 2) {
          local_1c = CDungeon::get_min_level(local_10);
          piVar3 = std::min<int>((int *)(this + 8),&local_1c);
          *(int *)(this + 8) = *piVar3;
        }
        else if (local_10[0x87a] == (CDungeon)0x0) {
          iVar2 = CDungeon::get_index(local_10);
          if (iVar2 == 100) {
            local_18 = CDungeon::get_min_level(local_10);
            piVar3 = std::min<int>((int *)(this + 8),&local_18);
            *(int *)(this + 8) = *piVar3;
          }
          local_14 = CDungeon::get_standard_level(local_10);
          piVar3 = std::min<int>((int *)(this + 8),&local_14);
          *(int *)(this + 8) = *piVar3;
        }
      }
    }
    __gnu_cxx::
    __normal_iterator<WorldMapDungeon_const*,std::vector<WorldMapDungeon,std::allocator<WorldMapDungeon>>>
    ::operator++(local_44);
  }
  return;
}

```

