# GlobalData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## Fini

```asm
// === 0829e0b2 GlobalData::Fini  [0x0829e0b2-0x829e4c3] ===
 829e0b2:	55                   	push   %ebp
 829e0b3:	89 e5                	mov    %esp,%ebp
 829e0b5:	53                   	push   %ebx
 829e0b6:	83 ec 24             	sub    $0x24,%esp
 829e0b9:	8b 1d 3c f7 41 09    	mov    0x941f73c,%ebx
 829e0bf:	85 db                	test   %ebx,%ebx
 829e0c1:	74 10                	je     829e0d3 <_ZN10GlobalData4FiniEv+0x21>
 829e0c3:	89 1c 24             	mov    %ebx,(%esp)
 829e0c6:	e8 3f 66 33 00       	call   85d470a <_ZN11RefPvpGradeD1Ev>
 829e0cb:	89 1c 24             	mov    %ebx,(%esp)
 829e0ce:	e8 1d 64 48 00       	call   87244f0 <_ZdlPv>
 829e0d3:	a1 c4 bd 40 09       	mov    0x940bdc4,%eax
 829e0d8:	85 c0                	test   %eax,%eax
 829e0da:	74 16                	je     829e0f2 <_ZN10GlobalData4FiniEv+0x40>
 829e0dc:	a1 c4 bd 40 09       	mov    0x940bdc4,%eax
 829e0e1:	8b 00                	mov    (%eax),%eax
 829e0e3:	83 c0 08             	add    $0x8,%eax
 829e0e6:	8b 10                	mov    (%eax),%edx
 829e0e8:	a1 c4 bd 40 09       	mov    0x940bdc4,%eax
 829e0ed:	89 04 24             	mov    %eax,(%esp)
 829e0f0:	ff d2                	call   *%edx
 829e0f2:	a1 28 be 40 09       	mov    0x940be28,%eax
 829e0f7:	85 c0                	test   %eax,%eax
 829e0f9:	74 24                	je     829e11f <_ZN10GlobalData4FiniEv+0x6d>
 829e0fb:	8b 1d 28 be 40 09    	mov    0x940be28,%ebx
 829e101:	85 db                	test   %ebx,%ebx
 829e103:	74 10                	je     829e115 <_ZN10GlobalData4FiniEv+0x63>
 829e105:	89 1c 24             	mov    %ebx,(%esp)
 829e108:	e8 f1 58 01 00       	call   82b39fe <_ZN15CServerProxyMgrI19CMonitorServerProxyED1Ev>
 829e10d:	89 1c 24             	mov    %ebx,(%esp)
 829e110:	e8 db 63 48 00       	call   87244f0 <_ZdlPv>
 829e115:	c7 05 28 be 40 09 00 	movl   $0x0,0x940be28
 829e11c:	00 00 00 
 829e11f:	a1 2c be 40 09       	mov    0x940be2c,%eax
 829e124:	85 c0                	test   %eax,%eax
 829e126:	74 24                	je     829e14c <_ZN10GlobalData4FiniEv+0x9a>
 829e128:	8b 1d 2c be 40 09    	mov    0x940be2c,%ebx
 829e12e:	85 db                	test   %ebx,%ebx
 829e130:	74 10                	je     829e142 <_ZN10GlobalData4FiniEv+0x90>
 829e132:	89 1c 24             	mov    %ebx,(%esp)
 829e135:	e8 8c 59 01 00       	call   82b3ac6 <_ZN15CServerProxyMgrI17CGuildServerProxyED1Ev>
 829e13a:	89 1c 24             	mov    %ebx,(%esp)
 829e13d:	e8 ae 63 48 00       	call   87244f0 <_ZdlPv>
 829e142:	c7 05 2c be 40 09 00 	movl   $0x0,0x940be2c
 829e149:	00 00 00 
 829e14c:	a1 30 be 40 09       	mov    0x940be30,%eax
 829e151:	85 c0                	test   %eax,%eax
 829e153:	74 24                	je     829e179 <_ZN10GlobalData4FiniEv+0xc7>
 829e155:	8b 1d 30 be 40 09    	mov    0x940be30,%ebx
 829e15b:	85 db                	test   %ebx,%ebx
 829e15d:	74 10                	je     829e16f <_ZN10GlobalData4FiniEv+0xbd>
 829e15f:	89 1c 24             	mov    %ebx,(%esp)
 829e162:	e8 27 5a 01 00       	call   82b3b8e <_ZN15CServerProxyMgrI21CStatisticServerProxyED1Ev>
 829e167:	89 1c 24             	mov    %ebx,(%esp)
 829e16a:	e8 81 63 48 00       	call   87244f0 <_ZdlPv>
 829e16f:	c7 05 30 be 40 09 00 	movl   $0x0,0x940be30
 829e176:	00 00 00 
 829e179:	a1 c0 bd 40 09       	mov    0x940bdc0,%eax
 829e17e:	85 c0                	test   %eax,%eax
 829e180:	74 16                	je     829e198 <_ZN10GlobalData4FiniEv+0xe6>
 829e182:	a1 c0 bd 40 09       	mov    0x940bdc0,%eax
 829e187:	8b 00                	mov    (%eax),%eax
 829e189:	83 c0 08             	add    $0x8,%eax
 829e18c:	8b 10                	mov    (%eax),%edx
 829e18e:	a1 c0 bd 40 09       	mov    0x940bdc0,%eax
 829e193:	89 04 24             	mov    %eax,(%esp)
 829e196:	ff d2                	call   *%edx
 829e198:	a1 bc bd 40 09       	mov    0x940bdbc,%eax
 829e19d:	85 c0                	test   %eax,%eax
 829e19f:	74 16                	je     829e1b7 <_ZN10GlobalData4FiniEv+0x105>
 829e1a1:	a1 bc bd 40 09       	mov    0x940bdbc,%eax
 829e1a6:	8b 00                	mov    (%eax),%eax
 829e1a8:	83 c0 08             	add    $0x8,%eax
 829e1ab:	8b 10                	mov    (%eax),%edx
 829e1ad:	a1 bc bd 40 09       	mov    0x940bdbc,%eax
 829e1b2:	89 04 24             	mov    %eax,(%esp)
 829e1b5:	ff d2                	call   *%edx
 829e1b7:	a1 b8 bd 40 09       	mov    0x940bdb8,%eax
 829e1bc:	85 c0                	test   %eax,%eax
 829e1be:	74 16                	je     829e1d6 <_ZN10GlobalData4FiniEv+0x124>
 829e1c0:	a1 b8 bd 40 09       	mov    0x940bdb8,%eax
 829e1c5:	8b 00                	mov    (%eax),%eax
 829e1c7:	83 c0 08             	add    $0x8,%eax
 829e1ca:	8b 10                	mov    (%eax),%edx
 829e1cc:	a1 b8 bd 40 09       	mov    0x940bdb8,%eax
 829e1d1:	89 04 24             	mov    %eax,(%esp)
 829e1d4:	ff d2                	call   *%edx
 829e1d6:	a1 b4 bd 40 09       	mov    0x940bdb4,%eax
 829e1db:	85 c0                	test   %eax,%eax
 829e1dd:	74 16                	je     829e1f5 <_ZN10GlobalData4FiniEv+0x143>
 829e1df:	a1 b4 bd 40 09       	mov    0x940bdb4,%eax
 829e1e4:	8b 00                	mov    (%eax),%eax
 829e1e6:	83 c0 08             	add    $0x8,%eax
 829e1e9:	8b 10                	mov    (%eax),%edx
 829e1eb:	a1 b4 bd 40 09       	mov    0x940bdb4,%eax
 829e1f0:	89 04 24             	mov    %eax,(%esp)
 829e1f3:	ff d2                	call   *%edx
 829e1f5:	a1 b0 bd 40 09       	mov    0x940bdb0,%eax
 829e1fa:	85 c0                	test   %eax,%eax
 829e1fc:	74 16                	je     829e214 <_ZN10GlobalData4FiniEv+0x162>
 829e1fe:	a1 b0 bd 40 09       	mov    0x940bdb0,%eax
 829e203:	8b 00                	mov    (%eax),%eax
 829e205:	83 c0 08             	add    $0x8,%eax
 829e208:	8b 10                	mov    (%eax),%edx
 829e20a:	a1 b0 bd 40 09       	mov    0x940bdb0,%eax
 829e20f:	89 04 24             	mov    %eax,(%esp)
 829e212:	ff d2                	call   *%edx
 829e214:	a1 c8 bd 40 09       	mov    0x940bdc8,%eax
 829e219:	85 c0                	test   %eax,%eax
 829e21b:	74 16                	je     829e233 <_ZN10GlobalData4FiniEv+0x181>
 829e21d:	a1 c8 bd 40 09       	mov    0x940bdc8,%eax
 829e222:	8b 00                	mov    (%eax),%eax
 829e224:	83 c0 08             	add    $0x8,%eax
 829e227:	8b 10                	mov    (%eax),%edx
 829e229:	a1 c8 bd 40 09       	mov    0x940bdc8,%eax
 829e22e:	89 04 24             	mov    %eax,(%esp)
 829e231:	ff d2                	call   *%edx
 829e233:	8b 1d ac bd 40 09    	mov    0x940bdac,%ebx
 829e239:	85 db                	test   %ebx,%ebx
 829e23b:	74 10                	je     829e24d <_ZN10GlobalData4FiniEv+0x19b>
 829e23d:	89 1c 24             	mov    %ebx,(%esp)
 829e240:	e8 d7 67 15 00       	call   83f4a1c <_ZN5DBMgrD1Ev>
 829e245:	89 1c 24             	mov    %ebx,(%esp)
 829e248:	e8 a3 62 48 00       	call   87244f0 <_ZdlPv>
 829e24d:	8b 1d 6c bd 40 09    	mov    0x940bd6c,%ebx
 829e253:	85 db                	test   %ebx,%ebx
 829e255:	74 10                	je     829e267 <_ZN10GlobalData4FiniEv+0x1b5>
 829e257:	89 1c 24             	mov    %ebx,(%esp)
 829e25a:	e8 c1 17 ff ff       	call   828fa20 <_ZN10StreamPoolD1Ev>
 829e25f:	89 1c 24             	mov    %ebx,(%esp)
 829e262:	e8 89 62 48 00       	call   87244f0 <_ZdlPv>
 829e267:	8b 1d a8 bd 40 09    	mov    0x940bda8,%ebx
 829e26d:	85 db                	test   %ebx,%ebx
 829e26f:	74 10                	je     829e281 <_ZN10GlobalData4FiniEv+0x1cf>
 829e271:	89 1c 24             	mov    %ebx,(%esp)
 829e274:	e8 95 1c ff ff       	call   828ff0e <_ZN15SmallStreamPoolD1Ev>
 829e279:	89 1c 24             	mov    %ebx,(%esp)
 829e27c:	e8 6f 62 48 00       	call   87244f0 <_ZdlPv>
 829e281:	8b 1d a4 bd 40 09    	mov    0x940bda4,%ebx
 829e287:	85 db                	test   %ebx,%ebx
 829e289:	74 10                	je     829e29b <_ZN10GlobalData4FiniEv+0x1e9>
 829e28b:	89 1c 24             	mov    %ebx,(%esp)
 829e28e:	e8 69 1f ff ff       	call   82901fc <_ZN13BigStreamPoolD1Ev>
 829e293:	89 1c 24             	mov    %ebx,(%esp)
 829e296:	e8 55 62 48 00       	call   87244f0 <_ZdlPv>
 829e29b:	8b 1d 68 bd 40 09    	mov    0x940bd68,%ebx
 829e2a1:	85 db                	test   %ebx,%ebx
 829e2a3:	74 10                	je     829e2b5 <_ZN10GlobalData4FiniEv+0x203>
 829e2a5:	89 1c 24             	mov    %ebx,(%esp)
 829e2a8:	e8 95 2c 2d 00       	call   8570f42 <_ZN11MsgQueueMgrD1Ev>
 829e2ad:	89 1c 24             	mov    %ebx,(%esp)
 829e2b0:	e8 3b 62 48 00       	call   87244f0 <_ZdlPv>
 829e2b5:	8b 1d 60 f7 41 09    	mov    0x941f760,%ebx
 829e2bb:	85 db                	test   %ebx,%ebx
 829e2bd:	74 10                	je     829e2cf <_ZN10GlobalData4FiniEv+0x21d>
 829e2bf:	89 1c 24             	mov    %ebx,(%esp)
 829e2c2:	e8 63 e1 2a 00       	call   854c42a <_ZN18ItemVendingMachineD1Ev>
 829e2c7:	89 1c 24             	mov    %ebx,(%esp)
 829e2ca:	e8 21 62 48 00       	call   87244f0 <_ZdlPv>
 829e2cf:	e8 73 8e 00 00       	call   82a7147 <_ZN16CSyncSlangFilter12FreeInstanceEv>
 829e2d4:	a1 60 be 40 09       	mov    0x940be60,%eax
 829e2d9:	85 c0                	test   %eax,%eax
 829e2db:	74 16                	je     829e2f3 <_ZN10GlobalData4FiniEv+0x241>
 829e2dd:	a1 60 be 40 09       	mov    0x940be60,%eax
 829e2e2:	8b 00                	mov    (%eax),%eax
 829e2e4:	83 c0 04             	add    $0x4,%eax
 829e2e7:	8b 10                	mov    (%eax),%edx
 829e2e9:	a1 60 be 40 09       	mov    0x940be60,%eax
 829e2ee:	89 04 24             	mov    %eax,(%esp)
 829e2f1:	ff d2                	call   *%edx
 829e2f3:	8b 1d 08 f7 41 09    	mov    0x941f708,%ebx
 829e2f9:	85 db                	test   %ebx,%ebx
 829e2fb:	74 10                	je     829e30d <_ZN10GlobalData4FiniEv+0x25b>
 829e2fd:	89 1c 24             	mov    %ebx,(%esp)
 829e300:	e8 4d 90 00 00       	call   82a7352 <_ZN8WongWork10CSimpleSSOD1Ev>
 829e305:	89 1c 24             	mov    %ebx,(%esp)
 829e308:	e8 e3 61 48 00       	call   87244f0 <_ZdlPv>
 829e30d:	8b 1d 10 f7 41 09    	mov    0x941f710,%ebx
 829e313:	85 db                	test   %ebx,%ebx
 829e315:	74 10                	je     829e327 <_ZN10GlobalData4FiniEv+0x275>
 829e317:	89 1c 24             	mov    %ebx,(%esp)
 829e31a:	e8 99 90 00 00       	call   82a73b8 <_ZN8WongWork11CGMAccountsD1Ev>
 829e31f:	89 1c 24             	mov    %ebx,(%esp)
 829e322:	e8 c9 61 48 00       	call   87244f0 <_ZdlPv>
 829e327:	8b 1d 5c f7 41 09    	mov    0x941f75c,%ebx
 829e32d:	85 db                	test   %ebx,%ebx
 829e32f:	74 10                	je     829e341 <_ZN10GlobalData4FiniEv+0x28f>
 829e331:	89 1c 24             	mov    %ebx,(%esp)
 829e334:	e8 21 ae ff ff       	call   829915a <_ZN11CGM_ManagerD1Ev>
 829e339:	89 1c 24             	mov    %ebx,(%esp)
 829e33c:	e8 af 61 48 00       	call   87244f0 <_ZdlPv>
 829e341:	8b 1d e0 f7 41 09    	mov    0x941f7e0,%ebx
 829e347:	85 db                	test   %ebx,%ebx
 829e349:	74 10                	je     829e35b <_ZN10GlobalData4FiniEv+0x2a9>
 829e34b:	89 1c 24             	mov    %ebx,(%esp)
 829e34e:	e8 fb 98 00 00       	call   82a7c4e <_ZN13CBusinessImplD1Ev>
 829e353:	89 1c 24             	mov    %ebx,(%esp)
 829e356:	e8 95 61 48 00       	call   87244f0 <_ZdlPv>
 829e35b:	8b 1d 6c f7 41 09    	mov    0x941f76c,%ebx
 829e361:	85 db                	test   %ebx,%ebx
 829e363:	74 10                	je     829e375 <_ZN10GlobalData4FiniEv+0x2c3>
 829e365:	89 1c 24             	mov    %ebx,(%esp)
 829e368:	e8 19 e1 07 00       	call   831c486 <_ZN18break_away_prevent23CBreakAwayPreventSystemD1Ev>
 829e36d:	89 1c 24             	mov    %ebx,(%esp)
 829e370:	e8 7b 61 48 00       	call   87244f0 <_ZdlPv>
 829e375:	8b 1d 68 f7 41 09    	mov    0x941f768,%ebx
 829e37b:	85 db                	test   %ebx,%ebx
 829e37d:	74 10                	je     829e38f <_ZN10GlobalData4FiniEv+0x2dd>
 829e37f:	89 1c 24             	mov    %ebx,(%esp)
 829e382:	e8 25 fe 1f 00       	call   849e1ac <_ZN10expert_job13CExpertJobMgrD1Ev>
 829e387:	89 1c 24             	mov    %ebx,(%esp)
 829e38a:	e8 61 61 48 00       	call   87244f0 <_ZdlPv>
 829e38f:	8b 1d 74 f7 41 09    	mov    0x941f774,%ebx
 829e395:	85 db                	test   %ebx,%ebx
 829e397:	74 10                	je     829e3a9 <_ZN10GlobalData4FiniEv+0x2f7>
 829e399:	89 1c 24             	mov    %ebx,(%esp)
 829e39c:	e8 a3 8b 41 00       	call   86b6f44 <_ZN14village_object17CVillageObjectMgrD1Ev>
 829e3a1:	89 1c 24             	mov    %ebx,(%esp)
 829e3a4:	e8 47 61 48 00       	call   87244f0 <_ZdlPv>
 829e3a9:	8b 1d 7c f7 41 09    	mov    0x941f77c,%ebx
 829e3af:	85 db                	test   %ebx,%ebx
 829e3b1:	74 10                	je     829e3c3 <_ZN10GlobalData4FiniEv+0x311>
 829e3b3:	89 1c 24             	mov    %ebx,(%esp)
 829e3b6:	e8 c5 66 41 00       	call   86b4a80 <_ZN16village_attacked18CVillageMonsterMgrD1Ev>
 829e3bb:	89 1c 24             	mov    %ebx,(%esp)
 829e3be:	e8 2d 61 48 00       	call   87244f0 <_ZdlPv>
 829e3c3:	a1 80 f7 41 09       	mov    0x941f780,%eax
 829e3c8:	89 04 24             	mov    %eax,(%esp)
 829e3cb:	e8 20 61 48 00       	call   87244f0 <_ZdlPv>
 829e3d0:	8b 1d 84 f7 41 09    	mov    0x941f784,%ebx
 829e3d6:	85 db                	test   %ebx,%ebx
 829e3d8:	74 10                	je     829e3ea <_ZN10GlobalData4FiniEv+0x338>
 829e3da:	89 1c 24             	mov    %ebx,(%esp)
 829e3dd:	e8 42 78 e8 ff       	call   8125c24 <_ZN21CDailyScheduleManagerD1Ev>
 829e3e2:	89 1c 24             	mov    %ebx,(%esp)
 829e3e5:	e8 06 61 48 00       	call   87244f0 <_ZdlPv>
 829e3ea:	8b 1d 88 f7 41 09    	mov    0x941f788,%ebx
 829e3f0:	85 db                	test   %ebx,%ebx
 829e3f2:	74 10                	je     829e404 <_ZN10GlobalData4FiniEv+0x352>
 829e3f4:	89 1c 24             	mov    %ebx,(%esp)
 829e3f7:	e8 02 a3 2e 00       	call   85886fe <_ZN18online_preliminary25COnlinePreliminaryTeamMgrD1Ev>
 829e3fc:	89 1c 24             	mov    %ebx,(%esp)
 829e3ff:	e8 ec 60 48 00       	call   87244f0 <_ZdlPv>
 829e404:	8b 1d 48 be 40 09    	mov    0x940be48,%ebx
 829e40a:	85 db                	test   %ebx,%ebx
 829e40c:	74 10                	je     829e41e <_ZN10GlobalData4FiniEv+0x36c>
 829e40e:	89 1c 24             	mov    %ebx,(%esp)
 829e411:	e8 96 c5 00 00       	call   82aa9ac <_ZN19CAuctionServerProxyD1Ev>
 829e416:	89 1c 24             	mov    %ebx,(%esp)
 829e419:	e8 d2 60 48 00       	call   87244f0 <_ZdlPv>
 829e41e:	8b 1d 4c be 40 09    	mov    0x940be4c,%ebx
 829e424:	85 db                	test   %ebx,%ebx
 829e426:	74 10                	je     829e438 <_ZN10GlobalData4FiniEv+0x386>
 829e428:	89 1c 24             	mov    %ebx,(%esp)
 829e42b:	e8 98 c5 00 00       	call   82aa9c8 <_ZN23CCeraAuctionServerProxyD1Ev>
 829e430:	89 1c 24             	mov    %ebx,(%esp)
 829e433:	e8 b8 60 48 00       	call   87244f0 <_ZdlPv>
 829e438:	8b 1d 48 f7 41 09    	mov    0x941f748,%ebx
 829e43e:	85 db                	test   %ebx,%ebx
 829e440:	74 10                	je     829e452 <_ZN10GlobalData4FiniEv+0x3a0>
 829e442:	89 1c 24             	mov    %ebx,(%esp)
 829e445:	e8 d0 e1 e4 ff       	call   80ec61a <_ZN12CDBConnectorD1Ev>
 829e44a:	89 1c 24             	mov    %ebx,(%esp)
 829e44d:	e8 9e 60 48 00       	call   87244f0 <_ZdlPv>
 829e452:	8b 1d 38 f7 41 09    	mov    0x941f738,%ebx
 829e458:	85 db                	test   %ebx,%ebx
 829e45a:	74 10                	je     829e46c <_ZN10GlobalData4FiniEv+0x3ba>
 829e45c:	89 1c 24             	mov    %ebx,(%esp)
 829e45f:	e8 ac 1c fd ff       	call   8270110 <_ZN20InstanceRentalSystemD1Ev>
 829e464:	89 1c 24             	mov    %ebx,(%esp)
 829e467:	e8 84 60 48 00       	call   87244f0 <_ZdlPv>
 829e46c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 829e473:	eb 3e                	jmp    829e4b3 <_ZN10GlobalData4FiniEv+0x401>
 829e475:	8b 45 f4             	mov    -0xc(%ebp),%eax
 829e478:	8b 04 85 80 bd 40 09 	mov    0x940bd80(,%eax,4),%eax
 829e47f:	85 c0                	test   %eax,%eax
 829e481:	74 2c                	je     829e4af <_ZN10GlobalData4FiniEv+0x3fd>
 829e483:	8b 45 f4             	mov    -0xc(%ebp),%eax
 829e486:	8b 1c 85 80 bd 40 09 	mov    0x940bd80(,%eax,4),%ebx
 829e48d:	85 db                	test   %ebx,%ebx
 829e48f:	74 10                	je     829e4a1 <_ZN10GlobalData4FiniEv+0x3ef>
 829e491:	89 1c 24             	mov    %ebx,(%esp)
 829e494:	e8 e9 18 ff ff       	call   828fd82 <_ZN10PacketPoolD1Ev>
 829e499:	89 1c 24             	mov    %ebx,(%esp)
 829e49c:	e8 4f 60 48 00       	call   87244f0 <_ZdlPv>
 829e4a1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 829e4a4:	c7 04 85 80 bd 40 09 	movl   $0x0,0x940bd80(,%eax,4)
 829e4ab:	00 00 00 00 
 829e4af:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 829e4b3:	83 7d f4 08          	cmpl   $0x8,-0xc(%ebp)
 829e4b7:	0f 9e c0             	setle  %al
 829e4ba:	84 c0                	test   %al,%al
 829e4bc:	75 b7                	jne    829e475 <_ZN10GlobalData4FiniEv+0x3c3>
 829e4be:	83 c4 24             	add    $0x24,%esp
 829e4c1:	5b                   	pop    %ebx
 829e4c2:	5d                   	pop    %ebp
 829e4c3:	c3                   	ret

```

```c
// GlobalData::Fini @ 0x829e0b2

/* GlobalData::Fini() */

void GlobalData::Fini(void)

{
  PacketPool *this;
  MsgQueueMgr *pMVar1;
  StreamPool *pSVar2;
  BigStreamPool *pBVar3;
  SmallStreamPool *pSVar4;
  DBMgr *pDVar5;
  CServerProxyMgr<CMonitorServerProxy> *pCVar6;
  CServerProxyMgr<CGuildServerProxy> *pCVar7;
  CServerProxyMgr<CStatisticServerProxy> *pCVar8;
  CAuctionServerProxy *pCVar9;
  CCeraAuctionServerProxy *pCVar10;
  CSimpleSSO *pCVar11;
  CGMAccounts *pCVar12;
  InstanceRentalSystem *pIVar13;
  RefPvpGrade *pRVar14;
  CDBConnector *pCVar15;
  CGM_Manager *pCVar16;
  ItemVendingMachine *pIVar17;
  CExpertJobMgr *pCVar18;
  CBreakAwayPreventSystem *pCVar19;
  CVillageObjectMgr *pCVar20;
  CVillageMonsterMgr *pCVar21;
  CDailyScheduleManager *pCVar22;
  COnlinePreliminaryTeamMgr *pCVar23;
  CBusinessImpl *pCVar24;
  int local_10;
  
  pRVar14 = s_ref_pvp_grade;
  if (s_ref_pvp_grade != (RefPvpGrade *)0x0) {
    RefPvpGrade::~RefPvpGrade(s_ref_pvp_grade);
    operator_delete(pRVar14);
  }
  if (s_accept_thr != (int *)0x0) {
    (**(code **)(*s_accept_thr + 8))(s_accept_thr);
  }
  pCVar6 = s_monitor_proxy_mgr;
  if (s_monitor_proxy_mgr != (CServerProxyMgr<CMonitorServerProxy> *)0x0) {
    if (s_monitor_proxy_mgr != (CServerProxyMgr<CMonitorServerProxy> *)0x0) {
      CServerProxyMgr<CMonitorServerProxy>::~CServerProxyMgr(s_monitor_proxy_mgr);
      operator_delete(pCVar6);
    }
    s_monitor_proxy_mgr = (CServerProxyMgr<CMonitorServerProxy> *)0x0;
  }
  pCVar7 = s_guild_proxy_mgr;
  if (s_guild_proxy_mgr != (CServerProxyMgr<CGuildServerProxy> *)0x0) {
    if (s_guild_proxy_mgr != (CServerProxyMgr<CGuildServerProxy> *)0x0) {
      CServerProxyMgr<CGuildServerProxy>::~CServerProxyMgr(s_guild_proxy_mgr);
      operator_delete(pCVar7);
    }
    s_guild_proxy_mgr = (CServerProxyMgr<CGuildServerProxy> *)0x0;
  }
  pCVar8 = s_statistic_proxy_mgr;
  if (s_statistic_proxy_mgr != (CServerProxyMgr<CStatisticServerProxy> *)0x0) {
    if (s_statistic_proxy_mgr != (CServerProxyMgr<CStatisticServerProxy> *)0x0) {
      CServerProxyMgr<CStatisticServerProxy>::~CServerProxyMgr(s_statistic_proxy_mgr);
      operator_delete(pCVar8);
    }
    s_statistic_proxy_mgr = (CServerProxyMgr<CStatisticServerProxy> *)0x0;
  }
  if (s_udp_thr != (int *)0x0) {
    (**(code **)(*s_udp_thr + 8))(s_udp_thr);
  }
  if (s_net_thr != (int *)0x0) {
    (**(code **)(*s_net_thr + 8))(s_net_thr);
  }
  if (s_dispatch_thr != (int *)0x0) {
    (**(code **)(*s_dispatch_thr + 8))(s_dispatch_thr);
  }
  if (s_db_thr_for_logDB != (int *)0x0) {
    (**(code **)(*s_db_thr_for_logDB + 8))(s_db_thr_for_logDB);
  }
  if (s_db_thr != (int *)0x0) {
    (**(code **)(*s_db_thr + 8))(s_db_thr);
  }
  if (s_monitor_tcp_thr != (int *)0x0) {
    (**(code **)(*s_monitor_tcp_thr + 8))(s_monitor_tcp_thr);
  }
  pDVar5 = s_db_mgr;
  if (s_db_mgr != (DBMgr *)0x0) {
    DBMgr::~DBMgr(s_db_mgr);
    operator_delete(pDVar5);
  }
  pSVar2 = s_stream_pool;
  if (s_stream_pool != (StreamPool *)0x0) {
    StreamPool::~StreamPool(s_stream_pool);
    operator_delete(pSVar2);
  }
  pSVar4 = s_small_stream_pool;
  if (s_small_stream_pool != (SmallStreamPool *)0x0) {
    SmallStreamPool::~SmallStreamPool(s_small_stream_pool);
    operator_delete(pSVar4);
  }
  pBVar3 = s_big_stream_pool;
  if (s_big_stream_pool != (BigStreamPool *)0x0) {
    BigStreamPool::~BigStreamPool(s_big_stream_pool);
    operator_delete(pBVar3);
  }
  pMVar1 = s_msgq_mgr;
  if (s_msgq_mgr != (MsgQueueMgr *)0x0) {
    MsgQueueMgr::~MsgQueueMgr(s_msgq_mgr);
    operator_delete(pMVar1);
  }
  pIVar17 = s_pItemVendingMachine;
  if (s_pItemVendingMachine != (ItemVendingMachine *)0x0) {
    ItemVendingMachine::~ItemVendingMachine(s_pItemVendingMachine);
    operator_delete(pIVar17);
  }
  CSyncSlangFilter::FreeInstance();
  if (s_pcryptRijndael_CharacView_ != (int *)0x0) {
    (**(code **)(*s_pcryptRijndael_CharacView_ + 4))(s_pcryptRijndael_CharacView_);
  }
  pCVar11 = s_psimpleSSO;
  if (s_psimpleSSO != (CSimpleSSO *)0x0) {
    WongWork::CSimpleSSO::~CSimpleSSO(s_psimpleSSO);
    operator_delete(pCVar11);
  }
  pCVar12 = s_pGMAccounts_;
  if (s_pGMAccounts_ != (CGMAccounts *)0x0) {
    WongWork::CGMAccounts::~CGMAccounts(s_pGMAccounts_);
    operator_delete(pCVar12);
  }
  pCVar16 = s_GM_Manager;
  if (s_GM_Manager != (CGM_Manager *)0x0) {
    CGM_Manager::~CGM_Manager(s_GM_Manager);
    operator_delete(pCVar16);
  }
  pCVar24 = s_antibotBusinessImpl_;
  if (s_antibotBusinessImpl_ != (CBusinessImpl *)0x0) {
    CBusinessImpl::~CBusinessImpl(s_antibotBusinessImpl_);
    operator_delete(pCVar24);
  }
  pCVar19 = s_BreakAwaySys;
  if (s_BreakAwaySys != (CBreakAwayPreventSystem *)0x0) {
    break_away_prevent::CBreakAwayPreventSystem::~CBreakAwayPreventSystem(s_BreakAwaySys);
    operator_delete(pCVar19);
  }
  pCVar18 = s_ExpertJobMgr;
  if (s_ExpertJobMgr != (CExpertJobMgr *)0x0) {
    expert_job::CExpertJobMgr::~CExpertJobMgr(s_ExpertJobMgr);
    operator_delete(pCVar18);
  }
  pCVar20 = s_villageObjectMgr;
  if (s_villageObjectMgr != (CVillageObjectMgr *)0x0) {
    village_object::CVillageObjectMgr::~CVillageObjectMgr(s_villageObjectMgr);
    operator_delete(pCVar20);
  }
  pCVar21 = s_villageMonsterMgr;
  if (s_villageMonsterMgr != (CVillageMonsterMgr *)0x0) {
    village_attacked::CVillageMonsterMgr::~CVillageMonsterMgr(s_villageMonsterMgr);
    operator_delete(pCVar21);
  }
  operator_delete(s_revengeDungeonMgr);
  pCVar22 = s_DailyScheduleManager;
  if (s_DailyScheduleManager != (CDailyScheduleManager *)0x0) {
    CDailyScheduleManager::~CDailyScheduleManager(s_DailyScheduleManager);
    operator_delete(pCVar22);
  }
  pCVar23 = s_onlinePreliminaryTeamMgr;
  if (s_onlinePreliminaryTeamMgr != (COnlinePreliminaryTeamMgr *)0x0) {
    online_preliminary::COnlinePreliminaryTeamMgr::~COnlinePreliminaryTeamMgr
              (s_onlinePreliminaryTeamMgr);
    operator_delete(pCVar23);
  }
  pCVar9 = s_auction_proxy;
  if (s_auction_proxy != (CAuctionServerProxy *)0x0) {
    CAuctionServerProxy::~CAuctionServerProxy(s_auction_proxy);
    operator_delete(pCVar9);
  }
  pCVar10 = s_cera_auction_proxy;
  if (s_cera_auction_proxy != (CCeraAuctionServerProxy *)0x0) {
    CCeraAuctionServerProxy::~CCeraAuctionServerProxy(s_cera_auction_proxy);
    operator_delete(pCVar10);
  }
  pCVar15 = s_db_connector;
  if (s_db_connector != (CDBConnector *)0x0) {
    CDBConnector::~CDBConnector(s_db_connector);
    operator_delete(pCVar15);
  }
  pIVar13 = s_rentalSystem;
  if (s_rentalSystem != (InstanceRentalSystem *)0x0) {
    InstanceRentalSystem::~InstanceRentalSystem(s_rentalSystem);
    operator_delete(pIVar13);
  }
  for (local_10 = 0; local_10 < 9; local_10 = local_10 + 1) {
    if (*(int *)(s_packet_pool_list + local_10 * 4) != 0) {
      this = *(PacketPool **)(s_packet_pool_list + local_10 * 4);
      if (this != (PacketPool *)0x0) {
        PacketPool::~PacketPool(this);
        operator_delete(this);
      }
      *(undefined4 *)(s_packet_pool_list + local_10 * 4) = 0;
    }
  }
  return;
}

```

---

## GenerateCaptchaData

```asm
// === 0829d4b0 GlobalData::GenerateCaptchaData  [0x0829d4b0-0x829d604] ===
 829d4b0:	55                   	push   %ebp
 829d4b1:	89 e5                	mov    %esp,%ebp
 829d4b3:	56                   	push   %esi
 829d4b4:	53                   	push   %ebx
 829d4b5:	81 ec 00 34 00 00    	sub    $0x3400,%esp
 829d4bb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 829d4be:	89 04 24             	mov    %eax,(%esp)
 829d4c1:	e8 22 20 e4 ff       	call   80df4e8 <_ZN9GreyImageC1Ev>
 829d4c6:	c7 44 24 08 9e 33 00 	movl   $0x339e,0x8(%esp)
 829d4cd:	00 
 829d4ce:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 829d4d5:	00 
 829d4d6:	8d 85 1a cc ff ff    	lea    -0x33e6(%ebp),%eax
 829d4dc:	89 04 24             	mov    %eax,(%esp)
 829d4df:	e8 dc 07 de ff       	call   807dcc0 <memset@plt>
 829d4e4:	8d 85 1a cc ff ff    	lea    -0x33e6(%ebp),%eax
 829d4ea:	89 44 24 0c          	mov    %eax,0xc(%esp)
 829d4ee:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 829d4f5:	00 
 829d4f6:	0f b6 05 25 1a 50 09 	movzbl 0x9501a25,%eax
 829d4fd:	88 44 24 04          	mov    %al,0x4(%esp)
 829d501:	c7 04 24 04 f8 41 09 	movl   $0x941f804,(%esp)
 829d508:	e8 2f 13 e4 ff       	call   80de83c <_ZN10CaptchaGen12generateTextE11CountryCodeiPt>
 829d50d:	8d 45 b8             	lea    -0x48(%ebp),%eax
 829d510:	89 04 24             	mov    %eax,(%esp)
 829d513:	e8 70 14 e4 ff       	call   80de988 <_ZN10CaptchaGen11ImageOptionC1Ev>
 829d518:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 829d51f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 829d522:	89 44 24 18          	mov    %eax,0x18(%esp)
 829d526:	8d 45 b8             	lea    -0x48(%ebp),%eax
 829d529:	89 44 24 14          	mov    %eax,0x14(%esp)
 829d52d:	c7 44 24 10 05 00 00 	movl   $0x5,0x10(%esp)
 829d534:	00 
 829d535:	8d 85 1a cc ff ff    	lea    -0x33e6(%ebp),%eax
 829d53b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 829d53f:	c7 44 24 08 3c 00 00 	movl   $0x3c,0x8(%esp)
 829d546:	00 
 829d547:	c7 44 24 04 dc 00 00 	movl   $0xdc,0x4(%esp)
 829d54e:	00 
 829d54f:	c7 04 24 04 f8 41 09 	movl   $0x941f804,(%esp)
 829d556:	e8 83 15 e4 ff       	call   80deade <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage>
 829d55b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 829d55e:	89 04 24             	mov    %eax,(%esp)
 829d561:	e8 5c 20 e4 ff       	call   80df5c2 <_ZNK9GreyImage8getWidthEv>
 829d566:	89 c3                	mov    %eax,%ebx
 829d568:	8d 45 ec             	lea    -0x14(%ebp),%eax
 829d56b:	89 04 24             	mov    %eax,(%esp)
 829d56e:	e8 59 20 e4 ff       	call   80df5cc <_ZNK9GreyImage9getHeightEv>
 829d573:	0f af c3             	imul   %ebx,%eax
 829d576:	89 c3                	mov    %eax,%ebx
 829d578:	8d 45 ec             	lea    -0x14(%ebp),%eax
 829d57b:	89 04 24             	mov    %eax,(%esp)
 829d57e:	e8 61 20 e4 ff       	call   80df5e4 <_ZN9GreyImage8getImageEv>
 829d583:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 829d587:	89 44 24 04          	mov    %eax,0x4(%esp)
 829d58b:	8d 85 1a cc ff ff    	lea    -0x33e6(%ebp),%eax
 829d591:	83 c0 0e             	add    $0xe,%eax
 829d594:	89 04 24             	mov    %eax,(%esp)
 829d597:	e8 04 03 de ff       	call   807d8a0 <memcpy@plt>
 829d59c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 829d59f:	89 04 24             	mov    %eax,(%esp)
 829d5a2:	e8 1b 20 e4 ff       	call   80df5c2 <_ZNK9GreyImage8getWidthEv>
 829d5a7:	89 c3                	mov    %eax,%ebx
 829d5a9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 829d5ac:	89 04 24             	mov    %eax,(%esp)
 829d5af:	e8 18 20 e4 ff       	call   80df5cc <_ZNK9GreyImage9getHeightEv>
 829d5b4:	0f af c3             	imul   %ebx,%eax
 829d5b7:	89 85 24 cc ff ff    	mov    %eax,-0x33dc(%ebp)
 829d5bd:	8d 85 1a cc ff ff    	lea    -0x33e6(%ebp),%eax
 829d5c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 829d5c7:	c7 04 24 a0 f7 41 09 	movl   $0x941f7a0,(%esp)
 829d5ce:	e8 67 c9 ff ff       	call   8299f3a <_ZN8WongWork18CCapchaDataManager4pushERK22MSG_UDP_CAPCHA_CERTIFY>
 829d5d3:	eb 1b                	jmp    829d5f0 <_ZN10GlobalData19GenerateCaptchaDataEv+0x140>
 829d5d5:	89 d3                	mov    %edx,%ebx
 829d5d7:	89 c6                	mov    %eax,%esi
 829d5d9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 829d5dc:	89 04 24             	mov    %eax,(%esp)
 829d5df:	e8 26 1f e4 ff       	call   80df50a <_ZN9GreyImageD1Ev>
 829d5e4:	89 f0                	mov    %esi,%eax
 829d5e6:	89 da                	mov    %ebx,%edx
 829d5e8:	89 04 24             	mov    %eax,(%esp)
 829d5eb:	e8 60 61 84 00       	call   8ae3750 <_Unwind_Resume>
 829d5f0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 829d5f3:	89 04 24             	mov    %eax,(%esp)
 829d5f6:	e8 0f 1f e4 ff       	call   80df50a <_ZN9GreyImageD1Ev>
 829d5fb:	81 c4 00 34 00 00    	add    $0x3400,%esp
 829d601:	5b                   	pop    %ebx
 829d602:	5e                   	pop    %esi
 829d603:	5d                   	pop    %ebp
 829d604:	c3                   	ret

```

```c
// GlobalData::GenerateCaptchaData @ 0x829d4b0

/* GlobalData::GenerateCaptchaData() */

void GlobalData::GenerateCaptchaData(void)

{
  int iVar1;
  int iVar2;
  void *__src;
  undefined4 uVar3;
  MSG_UDP_CAPCHA_CERTIFY local_33ea [10];
  int local_33e0;
  undefined1 auStack_33dc [13200];
  ImageOption local_4c [8];
  undefined4 local_44;
  GreyImage local_18 [12];
  
  GreyImage::GreyImage(local_18);
  uVar3 = 0;
  memset(local_33ea,0,0x339e);
                    /* try { // try from 0829d508 to 0829d5d2 has its CatchHandler @ 0829d5d5 */
  CaptchaGen::generateText
            ((CaptchaGen *)cg_,
             (CountryCode *)CONCAT31((int3)((uint)uVar3 >> 8),CountryCode::taiwan.idx_),5,
             (ushort *)local_33ea);
  CaptchaGen::ImageOption::ImageOption(local_4c);
  local_44 = 0;
  CaptchaGen::generateImage((CaptchaGen *)cg_,0xdc,0x3c,(ushort *)local_33ea,5,local_4c,local_18);
  iVar1 = GreyImage::getWidth(local_18);
  iVar2 = GreyImage::getHeight(local_18);
  __src = (void *)GreyImage::getImage(local_18);
  memcpy(auStack_33dc,__src,iVar2 * iVar1);
  iVar1 = GreyImage::getWidth(local_18);
  local_33e0 = GreyImage::getHeight(local_18);
  local_33e0 = local_33e0 * iVar1;
  WongWork::CCapchaDataManager::push((CCapchaDataManager *)s_capchaDataManager,local_33ea);
  GreyImage::~GreyImage(local_18);
  return;
}

```

---

## Init

```asm
// === 08299fa0 GlobalData::Init  [0x08299fa0-0x829d437] ===
 8299fa0:	55                   	push   %ebp
 8299fa1:	89 e5                	mov    %esp,%ebp
 8299fa3:	57                   	push   %edi
 8299fa4:	56                   	push   %esi
 8299fa5:	53                   	push   %ebx
 8299fa6:	81 ec 9c 07 00 00    	sub    $0x79c,%esp
 8299fac:	c6 05 64 bd 40 09 00 	movb   $0x0,0x940bd64
 8299fb3:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8299fba:	e8 09 c9 00 00       	call   82a68c8 <_ZN11CSystemTime6updateEv>
 8299fbf:	c7 04 24 e4 05 00 00 	movl   $0x5e4,(%esp)
 8299fc6:	e8 85 a4 48 00       	call   8724450 <_Znwj>
 8299fcb:	89 c3                	mov    %eax,%ebx
 8299fcd:	89 d8                	mov    %ebx,%eax
 8299fcf:	89 04 24             	mov    %eax,(%esp)
 8299fd2:	e8 85 06 01 00       	call   82aa65c <_ZN14CItemAmplifierC1Ev>
 8299fd7:	eb 18                	jmp    8299ff1 <_ZN10GlobalData4InitEv+0x51>
 8299fd9:	89 d6                	mov    %edx,%esi
 8299fdb:	89 c7                	mov    %eax,%edi
 8299fdd:	89 1c 24             	mov    %ebx,(%esp)
 8299fe0:	e8 0b a5 48 00       	call   87244f0 <_ZdlPv>
 8299fe5:	89 f8                	mov    %edi,%eax
 8299fe7:	89 f2                	mov    %esi,%edx
 8299fe9:	89 04 24             	mov    %eax,(%esp)
 8299fec:	e8 5f 97 84 00       	call   8ae3750 <_Unwind_Resume>
 8299ff1:	89 d8                	mov    %ebx,%eax
 8299ff3:	a3 e8 f7 41 09       	mov    %eax,0x941f7e8
 8299ff8:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 8299fff:	e8 4c a4 48 00       	call   8724450 <_Znwj>
 829a004:	89 c3                	mov    %eax,%ebx
 829a006:	89 d8                	mov    %ebx,%eax
 829a008:	89 04 24             	mov    %eax,(%esp)
 829a00b:	e8 0a d2 00 00       	call   82a721a <_ZN20CGlobalEffectManagerC1Ev>
 829a010:	eb 18                	jmp    829a02a <_ZN10GlobalData4InitEv+0x8a>
 829a012:	89 d6                	mov    %edx,%esi
 829a014:	89 c7                	mov    %eax,%edi
 829a016:	89 1c 24             	mov    %ebx,(%esp)
 829a019:	e8 d2 a4 48 00       	call   87244f0 <_ZdlPv>
 829a01e:	89 f8                	mov    %edi,%eax
 829a020:	89 f2                	mov    %esi,%edx
 829a022:	89 04 24             	mov    %eax,(%esp)
 829a025:	e8 26 97 84 00       	call   8ae3750 <_Unwind_Resume>
 829a02a:	89 d8                	mov    %ebx,%eax
 829a02c:	a3 ec f7 41 09       	mov    %eax,0x941f7ec
 829a031:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829a038:	08 
 829a039:	c7 04 24 1c 00 00 00 	movl   $0x1c,(%esp)
 829a040:	e8 0b bb 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829a045:	89 c3                	mov    %eax,%ebx
 829a047:	89 d8                	mov    %ebx,%eax
 829a049:	85 c0                	test   %eax,%eax
 829a04b:	74 30                	je     829a07d <_ZN10GlobalData4InitEv+0xdd>
 829a04d:	89 d8                	mov    %ebx,%eax
 829a04f:	89 04 24             	mov    %eax,(%esp)
 829a052:	e8 bb a4 fe ff       	call   8284512 <_ZN9CTimeGateC1Ev>
 829a057:	eb 20                	jmp    829a079 <_ZN10GlobalData4InitEv+0xd9>
 829a059:	89 d6                	mov    %edx,%esi
 829a05b:	89 c7                	mov    %eax,%edi
 829a05d:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829a064:	08 
 829a065:	89 1c 24             	mov    %ebx,(%esp)
 829a068:	e8 73 a7 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829a06d:	89 f8                	mov    %edi,%eax
 829a06f:	89 f2                	mov    %esi,%edx
 829a071:	89 04 24             	mov    %eax,(%esp)
 829a074:	e8 d7 96 84 00       	call   8ae3750 <_Unwind_Resume>
 829a079:	89 d8                	mov    %ebx,%eax
 829a07b:	eb 02                	jmp    829a07f <_ZN10GlobalData4InitEv+0xdf>
 829a07d:	89 d8                	mov    %ebx,%eax
 829a07f:	a3 f4 f7 41 09       	mov    %eax,0x941f7f4
 829a084:	a1 f4 f7 41 09       	mov    0x941f7f4,%eax
 829a089:	85 c0                	test   %eax,%eax
 829a08b:	75 2e                	jne    829a0bb <_ZN10GlobalData4InitEv+0x11b>
 829a08d:	c7 44 24 04 24 72 c1 	movl   $0x8c17224,0x4(%esp)
 829a094:	08 
 829a095:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829a09c:	e8 5f 32 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829a0a1:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829a0a8:	08 
 829a0a9:	89 04 24             	mov    %eax,(%esp)
 829a0ac:	e8 af 17 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829a0b1:	bb 00 00 00 00       	mov    $0x0,%ebx
 829a0b6:	e9 70 33 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829a0bb:	c7 04 24 34 00 00 00 	movl   $0x34,(%esp)
 829a0c2:	e8 89 a3 48 00       	call   8724450 <_Znwj>
 829a0c7:	89 c3                	mov    %eax,%ebx
 829a0c9:	89 d8                	mov    %ebx,%eax
 829a0cb:	89 04 24             	mov    %eax,(%esp)
 829a0ce:	e8 59 f1 f0 ff       	call   81a922c <_ZN4ARAD23Arad_ServerStateManagerC1Ev>
 829a0d3:	eb 18                	jmp    829a0ed <_ZN10GlobalData4InitEv+0x14d>
 829a0d5:	89 d6                	mov    %edx,%esi
 829a0d7:	89 c7                	mov    %eax,%edi
 829a0d9:	89 1c 24             	mov    %ebx,(%esp)
 829a0dc:	e8 0f a4 48 00       	call   87244f0 <_ZdlPv>
 829a0e1:	89 f8                	mov    %edi,%eax
 829a0e3:	89 f2                	mov    %esi,%edx
 829a0e5:	89 04 24             	mov    %eax,(%esp)
 829a0e8:	e8 63 96 84 00       	call   8ae3750 <_Unwind_Resume>
 829a0ed:	89 d8                	mov    %ebx,%eax
 829a0ef:	a3 f0 f7 41 09       	mov    %eax,0x941f7f0
 829a0f4:	c7 04 24 80 01 00 00 	movl   $0x180,(%esp)
 829a0fb:	e8 50 a3 48 00       	call   8724450 <_Znwj>
 829a100:	89 c3                	mov    %eax,%ebx
 829a102:	89 d8                	mov    %ebx,%eax
 829a104:	89 04 24             	mov    %eax,(%esp)
 829a107:	e8 34 6d 2d 00       	call   8570e40 <_ZN11MsgQueueMgrC1Ev>
 829a10c:	eb 18                	jmp    829a126 <_ZN10GlobalData4InitEv+0x186>
 829a10e:	89 d6                	mov    %edx,%esi
 829a110:	89 c7                	mov    %eax,%edi
 829a112:	89 1c 24             	mov    %ebx,(%esp)
 829a115:	e8 d6 a3 48 00       	call   87244f0 <_ZdlPv>
 829a11a:	89 f8                	mov    %edi,%eax
 829a11c:	89 f2                	mov    %esi,%edx
 829a11e:	89 04 24             	mov    %eax,(%esp)
 829a121:	e8 2a 96 84 00       	call   8ae3750 <_Unwind_Resume>
 829a126:	89 d8                	mov    %ebx,%eax
 829a128:	a3 68 bd 40 09       	mov    %eax,0x940bd68
 829a12d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 829a132:	85 c0                	test   %eax,%eax
 829a134:	75 2e                	jne    829a164 <_ZN10GlobalData4InitEv+0x1c4>
 829a136:	c7 44 24 04 5c 72 c1 	movl   $0x8c1725c,0x4(%esp)
 829a13d:	08 
 829a13e:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829a145:	e8 b6 31 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829a14a:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829a151:	08 
 829a152:	89 04 24             	mov    %eax,(%esp)
 829a155:	e8 06 17 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829a15a:	bb 00 00 00 00       	mov    $0x0,%ebx
 829a15f:	e9 c7 32 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829a164:	c7 04 24 1c 00 00 00 	movl   $0x1c,(%esp)
 829a16b:	e8 e0 a2 48 00       	call   8724450 <_Znwj>
 829a170:	89 c3                	mov    %eax,%ebx
 829a172:	89 d8                	mov    %ebx,%eax
 829a174:	89 04 24             	mov    %eax,(%esp)
 829a177:	e8 f8 57 ff ff       	call   828f974 <_ZN10StreamPoolC1Ev>
 829a17c:	eb 18                	jmp    829a196 <_ZN10GlobalData4InitEv+0x1f6>
 829a17e:	89 d6                	mov    %edx,%esi
 829a180:	89 c7                	mov    %eax,%edi
 829a182:	89 1c 24             	mov    %ebx,(%esp)
 829a185:	e8 66 a3 48 00       	call   87244f0 <_ZdlPv>
 829a18a:	89 f8                	mov    %edi,%eax
 829a18c:	89 f2                	mov    %esi,%edx
 829a18e:	89 04 24             	mov    %eax,(%esp)
 829a191:	e8 ba 95 84 00       	call   8ae3750 <_Unwind_Resume>
 829a196:	89 d8                	mov    %ebx,%eax
 829a198:	a3 6c bd 40 09       	mov    %eax,0x940bd6c
 829a19d:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 829a1a2:	85 c0                	test   %eax,%eax
 829a1a4:	75 2e                	jne    829a1d4 <_ZN10GlobalData4InitEv+0x234>
 829a1a6:	c7 44 24 04 90 72 c1 	movl   $0x8c17290,0x4(%esp)
 829a1ad:	08 
 829a1ae:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829a1b5:	e8 46 31 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829a1ba:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829a1c1:	08 
 829a1c2:	89 04 24             	mov    %eax,(%esp)
 829a1c5:	e8 96 16 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829a1ca:	bb 00 00 00 00       	mov    $0x0,%ebx
 829a1cf:	e9 57 32 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829a1d4:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 829a1db:	eb 7e                	jmp    829a25b <_ZN10GlobalData4InitEv+0x2bb>
 829a1dd:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 829a1e4:	e8 67 a2 48 00       	call   8724450 <_Znwj>
 829a1e9:	89 c3                	mov    %eax,%ebx
 829a1eb:	89 d8                	mov    %ebx,%eax
 829a1ed:	89 04 24             	mov    %eax,(%esp)
 829a1f0:	e8 81 5a ff ff       	call   828fc76 <_ZN10PacketPoolC1Ev>
 829a1f5:	eb 18                	jmp    829a20f <_ZN10GlobalData4InitEv+0x26f>
 829a1f7:	89 d6                	mov    %edx,%esi
 829a1f9:	89 c7                	mov    %eax,%edi
 829a1fb:	89 1c 24             	mov    %ebx,(%esp)
 829a1fe:	e8 ed a2 48 00       	call   87244f0 <_ZdlPv>
 829a203:	89 f8                	mov    %edi,%eax
 829a205:	89 f2                	mov    %esi,%edx
 829a207:	89 04 24             	mov    %eax,(%esp)
 829a20a:	e8 41 95 84 00       	call   8ae3750 <_Unwind_Resume>
 829a20f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 829a212:	89 da                	mov    %ebx,%edx
 829a214:	89 14 85 80 bd 40 09 	mov    %edx,0x940bd80(,%eax,4)
 829a21b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 829a21e:	8b 04 85 80 bd 40 09 	mov    0x940bd80(,%eax,4),%eax
 829a225:	85 c0                	test   %eax,%eax
 829a227:	75 2e                	jne    829a257 <_ZN10GlobalData4InitEv+0x2b7>
 829a229:	c7 44 24 04 c8 72 c1 	movl   $0x8c172c8,0x4(%esp)
 829a230:	08 
 829a231:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829a238:	e8 c3 30 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829a23d:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829a244:	08 
 829a245:	89 04 24             	mov    %eax,(%esp)
 829a248:	e8 13 16 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829a24d:	bb 00 00 00 00       	mov    $0x0,%ebx
 829a252:	e9 d4 31 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829a257:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 829a25b:	83 7d dc 08          	cmpl   $0x8,-0x24(%ebp)
 829a25f:	0f 9e c0             	setle  %al
 829a262:	84 c0                	test   %al,%al
 829a264:	0f 85 73 ff ff ff    	jne    829a1dd <_ZN10GlobalData4InitEv+0x23d>
 829a26a:	e8 d1 44 de ff       	call   807e740 <pthread_self@plt>
 829a26f:	89 44 24 04          	mov    %eax,0x4(%esp)
 829a273:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 829a27a:	e8 45 42 00 00       	call   829e4c4 <_ZN10GlobalData20setCurrentPacketPoolE11THREAD_TYPEm>
 829a27f:	c7 04 24 1c 00 00 00 	movl   $0x1c,(%esp)
 829a286:	e8 c5 a1 48 00       	call   8724450 <_Znwj>
 829a28b:	89 c3                	mov    %eax,%ebx
 829a28d:	89 d8                	mov    %ebx,%eax
 829a28f:	89 04 24             	mov    %eax,(%esp)
 829a292:	e8 cb 5b ff ff       	call   828fe62 <_ZN15SmallStreamPoolC1Ev>
 829a297:	eb 18                	jmp    829a2b1 <_ZN10GlobalData4InitEv+0x311>
 829a299:	89 d6                	mov    %edx,%esi
 829a29b:	89 c7                	mov    %eax,%edi
 829a29d:	89 1c 24             	mov    %ebx,(%esp)
 829a2a0:	e8 4b a2 48 00       	call   87244f0 <_ZdlPv>
 829a2a5:	89 f8                	mov    %edi,%eax
 829a2a7:	89 f2                	mov    %esi,%edx
 829a2a9:	89 04 24             	mov    %eax,(%esp)
 829a2ac:	e8 9f 94 84 00       	call   8ae3750 <_Unwind_Resume>
 829a2b1:	89 d8                	mov    %ebx,%eax
 829a2b3:	a3 a8 bd 40 09       	mov    %eax,0x940bda8
 829a2b8:	a1 a8 bd 40 09       	mov    0x940bda8,%eax
 829a2bd:	85 c0                	test   %eax,%eax
 829a2bf:	75 2e                	jne    829a2ef <_ZN10GlobalData4InitEv+0x34f>
 829a2c1:	c7 44 24 04 00 73 c1 	movl   $0x8c17300,0x4(%esp)
 829a2c8:	08 
 829a2c9:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829a2d0:	e8 2b 30 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829a2d5:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829a2dc:	08 
 829a2dd:	89 04 24             	mov    %eax,(%esp)
 829a2e0:	e8 7b 15 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829a2e5:	bb 00 00 00 00       	mov    $0x0,%ebx
 829a2ea:	e9 3c 31 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829a2ef:	c7 04 24 1c 00 00 00 	movl   $0x1c,(%esp)
 829a2f6:	e8 55 a1 48 00       	call   8724450 <_Znwj>
 829a2fb:	89 c3                	mov    %eax,%ebx
 829a2fd:	89 d8                	mov    %ebx,%eax
 829a2ff:	89 04 24             	mov    %eax,(%esp)
 829a302:	e8 49 5e ff ff       	call   8290150 <_ZN13BigStreamPoolC1Ev>
 829a307:	eb 18                	jmp    829a321 <_ZN10GlobalData4InitEv+0x381>
 829a309:	89 d6                	mov    %edx,%esi
 829a30b:	89 c7                	mov    %eax,%edi
 829a30d:	89 1c 24             	mov    %ebx,(%esp)
 829a310:	e8 db a1 48 00       	call   87244f0 <_ZdlPv>
 829a315:	89 f8                	mov    %edi,%eax
 829a317:	89 f2                	mov    %esi,%edx
 829a319:	89 04 24             	mov    %eax,(%esp)
 829a31c:	e8 2f 94 84 00       	call   8ae3750 <_Unwind_Resume>
 829a321:	89 d8                	mov    %ebx,%eax
 829a323:	a3 a4 bd 40 09       	mov    %eax,0x940bda4
 829a328:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 829a32d:	85 c0                	test   %eax,%eax
 829a32f:	75 2e                	jne    829a35f <_ZN10GlobalData4InitEv+0x3bf>
 829a331:	c7 44 24 04 3c 73 c1 	movl   $0x8c1733c,0x4(%esp)
 829a338:	08 
 829a339:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829a340:	e8 bb 2f 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829a345:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829a34c:	08 
 829a34d:	89 04 24             	mov    %eax,(%esp)
 829a350:	e8 0b 15 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829a355:	bb 00 00 00 00       	mov    $0x0,%ebx
 829a35a:	e9 cc 30 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829a35f:	c7 04 24 38 00 00 00 	movl   $0x38,(%esp)
 829a366:	e8 e5 a0 48 00       	call   8724450 <_Znwj>
 829a36b:	89 c3                	mov    %eax,%ebx
 829a36d:	89 d8                	mov    %ebx,%eax
 829a36f:	89 04 24             	mov    %eax,(%esp)
 829a372:	e8 67 a5 15 00       	call   83f48de <_ZN5DBMgrC1Ev>
 829a377:	eb 18                	jmp    829a391 <_ZN10GlobalData4InitEv+0x3f1>
 829a379:	89 d6                	mov    %edx,%esi
 829a37b:	89 c7                	mov    %eax,%edi
 829a37d:	89 1c 24             	mov    %ebx,(%esp)
 829a380:	e8 6b a1 48 00       	call   87244f0 <_ZdlPv>
 829a385:	89 f8                	mov    %edi,%eax
 829a387:	89 f2                	mov    %esi,%edx
 829a389:	89 04 24             	mov    %eax,(%esp)
 829a38c:	e8 bf 93 84 00       	call   8ae3750 <_Unwind_Resume>
 829a391:	89 d8                	mov    %ebx,%eax
 829a393:	a3 ac bd 40 09       	mov    %eax,0x940bdac
 829a398:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 829a39d:	85 c0                	test   %eax,%eax
 829a39f:	75 2e                	jne    829a3cf <_ZN10GlobalData4InitEv+0x42f>
 829a3a1:	c7 44 24 04 78 73 c1 	movl   $0x8c17378,0x4(%esp)
 829a3a8:	08 
 829a3a9:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829a3b0:	e8 4b 2f 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829a3b5:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829a3bc:	08 
 829a3bd:	89 04 24             	mov    %eax,(%esp)
 829a3c0:	e8 9b 14 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829a3c5:	bb 00 00 00 00       	mov    $0x0,%ebx
 829a3ca:	e9 5c 30 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829a3cf:	c7 04 24 4c 00 00 00 	movl   $0x4c,(%esp)
 829a3d6:	e8 75 a0 48 00       	call   8724450 <_Znwj>
 829a3db:	89 c3                	mov    %eax,%ebx
 829a3dd:	89 d8                	mov    %ebx,%eax
 829a3df:	89 04 24             	mov    %eax,(%esp)
 829a3e2:	e8 0b 52 16 00       	call   83ff5f2 <_ZN8DBThreadC1Ev>
 829a3e7:	eb 18                	jmp    829a401 <_ZN10GlobalData4InitEv+0x461>
 829a3e9:	89 d6                	mov    %edx,%esi
 829a3eb:	89 c7                	mov    %eax,%edi
 829a3ed:	89 1c 24             	mov    %ebx,(%esp)
 829a3f0:	e8 fb a0 48 00       	call   87244f0 <_ZdlPv>
 829a3f5:	89 f8                	mov    %edi,%eax
 829a3f7:	89 f2                	mov    %esi,%edx
 829a3f9:	89 04 24             	mov    %eax,(%esp)
 829a3fc:	e8 4f 93 84 00       	call   8ae3750 <_Unwind_Resume>
 829a401:	89 d8                	mov    %ebx,%eax
 829a403:	a3 b0 bd 40 09       	mov    %eax,0x940bdb0
 829a408:	a1 b0 bd 40 09       	mov    0x940bdb0,%eax
 829a40d:	85 c0                	test   %eax,%eax
 829a40f:	75 2e                	jne    829a43f <_ZN10GlobalData4InitEv+0x49f>
 829a411:	c7 44 24 04 ac 73 c1 	movl   $0x8c173ac,0x4(%esp)
 829a418:	08 
 829a419:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829a420:	e8 db 2e 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829a425:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829a42c:	08 
 829a42d:	89 04 24             	mov    %eax,(%esp)
 829a430:	e8 2b 14 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829a435:	bb 00 00 00 00       	mov    $0x0,%ebx
 829a43a:	e9 ec 2f 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829a43f:	a1 b0 bd 40 09       	mov    0x940bdb0,%eax
 829a444:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 829a44b:	00 
 829a44c:	89 04 24             	mov    %eax,(%esp)
 829a44f:	e8 74 52 16 00       	call   83ff6c8 <_ZN8DBThread8setLogDBEb>
 829a454:	c7 04 24 4c 00 00 00 	movl   $0x4c,(%esp)
 829a45b:	e8 f0 9f 48 00       	call   8724450 <_Znwj>
 829a460:	89 c3                	mov    %eax,%ebx
 829a462:	89 d8                	mov    %ebx,%eax
 829a464:	89 04 24             	mov    %eax,(%esp)
 829a467:	e8 86 51 16 00       	call   83ff5f2 <_ZN8DBThreadC1Ev>
 829a46c:	eb 18                	jmp    829a486 <_ZN10GlobalData4InitEv+0x4e6>
 829a46e:	89 d6                	mov    %edx,%esi
 829a470:	89 c7                	mov    %eax,%edi
 829a472:	89 1c 24             	mov    %ebx,(%esp)
 829a475:	e8 76 a0 48 00       	call   87244f0 <_ZdlPv>
 829a47a:	89 f8                	mov    %edi,%eax
 829a47c:	89 f2                	mov    %esi,%edx
 829a47e:	89 04 24             	mov    %eax,(%esp)
 829a481:	e8 ca 92 84 00       	call   8ae3750 <_Unwind_Resume>
 829a486:	89 d8                	mov    %ebx,%eax
 829a488:	a3 b4 bd 40 09       	mov    %eax,0x940bdb4
 829a48d:	a1 b4 bd 40 09       	mov    0x940bdb4,%eax
 829a492:	85 c0                	test   %eax,%eax
 829a494:	75 2e                	jne    829a4c4 <_ZN10GlobalData4InitEv+0x524>
 829a496:	c7 44 24 04 e0 73 c1 	movl   $0x8c173e0,0x4(%esp)
 829a49d:	08 
 829a49e:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829a4a5:	e8 56 2e 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829a4aa:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829a4b1:	08 
 829a4b2:	89 04 24             	mov    %eax,(%esp)
 829a4b5:	e8 a6 13 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829a4ba:	bb 00 00 00 00       	mov    $0x0,%ebx
 829a4bf:	e9 67 2f 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829a4c4:	a1 b4 bd 40 09       	mov    0x940bdb4,%eax
 829a4c9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 829a4d0:	00 
 829a4d1:	89 04 24             	mov    %eax,(%esp)
 829a4d4:	e8 ef 51 16 00       	call   83ff6c8 <_ZN8DBThread8setLogDBEb>
 829a4d9:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 829a4e0:	e8 6b 9f 48 00       	call   8724450 <_Znwj>
 829a4e5:	89 c3                	mov    %eax,%ebx
 829a4e7:	89 d8                	mov    %ebx,%eax
 829a4e9:	89 04 24             	mov    %eax,(%esp)
 829a4ec:	e8 77 3d 1e 00       	call   847e268 <_ZN14DispatchThreadC1Ev>
 829a4f1:	eb 18                	jmp    829a50b <_ZN10GlobalData4InitEv+0x56b>
 829a4f3:	89 d6                	mov    %edx,%esi
 829a4f5:	89 c7                	mov    %eax,%edi
 829a4f7:	89 1c 24             	mov    %ebx,(%esp)
 829a4fa:	e8 f1 9f 48 00       	call   87244f0 <_ZdlPv>
 829a4ff:	89 f8                	mov    %edi,%eax
 829a501:	89 f2                	mov    %esi,%edx
 829a503:	89 04 24             	mov    %eax,(%esp)
 829a506:	e8 45 92 84 00       	call   8ae3750 <_Unwind_Resume>
 829a50b:	89 d8                	mov    %ebx,%eax
 829a50d:	a3 b8 bd 40 09       	mov    %eax,0x940bdb8
 829a512:	a1 b8 bd 40 09       	mov    0x940bdb8,%eax
 829a517:	85 c0                	test   %eax,%eax
 829a519:	75 2e                	jne    829a549 <_ZN10GlobalData4InitEv+0x5a9>
 829a51b:	c7 44 24 04 28 74 c1 	movl   $0x8c17428,0x4(%esp)
 829a522:	08 
 829a523:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829a52a:	e8 d1 2d 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829a52f:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829a536:	08 
 829a537:	89 04 24             	mov    %eax,(%esp)
 829a53a:	e8 21 13 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829a53f:	bb 00 00 00 00       	mov    $0x0,%ebx
 829a544:	e9 e2 2e 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829a549:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 829a550:	e8 fb 9e 48 00       	call   8724450 <_Znwj>
 829a555:	89 c3                	mov    %eax,%ebx
 829a557:	89 d8                	mov    %ebx,%eax
 829a559:	89 04 24             	mov    %eax,(%esp)
 829a55c:	e8 f3 2f 2e 00       	call   857d554 <_ZN13NetworkThreadC1Ev>
 829a561:	eb 18                	jmp    829a57b <_ZN10GlobalData4InitEv+0x5db>
 829a563:	89 d6                	mov    %edx,%esi
 829a565:	89 c7                	mov    %eax,%edi
 829a567:	89 1c 24             	mov    %ebx,(%esp)
 829a56a:	e8 81 9f 48 00       	call   87244f0 <_ZdlPv>
 829a56f:	89 f8                	mov    %edi,%eax
 829a571:	89 f2                	mov    %esi,%edx
 829a573:	89 04 24             	mov    %eax,(%esp)
 829a576:	e8 d5 91 84 00       	call   8ae3750 <_Unwind_Resume>
 829a57b:	89 d8                	mov    %ebx,%eax
 829a57d:	a3 bc bd 40 09       	mov    %eax,0x940bdbc
 829a582:	a1 bc bd 40 09       	mov    0x940bdbc,%eax
 829a587:	85 c0                	test   %eax,%eax
 829a589:	75 2e                	jne    829a5b9 <_ZN10GlobalData4InitEv+0x619>
 829a58b:	c7 44 24 04 60 74 c1 	movl   $0x8c17460,0x4(%esp)
 829a592:	08 
 829a593:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829a59a:	e8 61 2d 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829a59f:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829a5a6:	08 
 829a5a7:	89 04 24             	mov    %eax,(%esp)
 829a5aa:	e8 b1 12 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829a5af:	bb 00 00 00 00       	mov    $0x0,%ebx
 829a5b4:	e9 72 2e 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829a5b9:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 829a5c0:	e8 8b 9e 48 00       	call   8724450 <_Znwj>
 829a5c5:	89 c3                	mov    %eax,%ebx
 829a5c7:	89 d8                	mov    %ebx,%eax
 829a5c9:	89 04 24             	mov    %eax,(%esp)
 829a5cc:	e8 83 1d 2e 00       	call   857c354 <_ZN9UdpThreadC1Ev>
 829a5d1:	eb 18                	jmp    829a5eb <_ZN10GlobalData4InitEv+0x64b>
 829a5d3:	89 d6                	mov    %edx,%esi
 829a5d5:	89 c7                	mov    %eax,%edi
 829a5d7:	89 1c 24             	mov    %ebx,(%esp)
 829a5da:	e8 11 9f 48 00       	call   87244f0 <_ZdlPv>
 829a5df:	89 f8                	mov    %edi,%eax
 829a5e1:	89 f2                	mov    %esi,%edx
 829a5e3:	89 04 24             	mov    %eax,(%esp)
 829a5e6:	e8 65 91 84 00       	call   8ae3750 <_Unwind_Resume>
 829a5eb:	89 d8                	mov    %ebx,%eax
 829a5ed:	a3 c0 bd 40 09       	mov    %eax,0x940bdc0
 829a5f2:	a1 c0 bd 40 09       	mov    0x940bdc0,%eax
 829a5f7:	85 c0                	test   %eax,%eax
 829a5f9:	75 2e                	jne    829a629 <_ZN10GlobalData4InitEv+0x689>
 829a5fb:	c7 44 24 04 98 74 c1 	movl   $0x8c17498,0x4(%esp)
 829a602:	08 
 829a603:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829a60a:	e8 f1 2c 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829a60f:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829a616:	08 
 829a617:	89 04 24             	mov    %eax,(%esp)
 829a61a:	e8 41 12 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829a61f:	bb 00 00 00 00       	mov    $0x0,%ebx
 829a624:	e9 02 2e 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829a629:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829a630:	08 
 829a631:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 829a638:	e8 13 b5 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829a63d:	89 c3                	mov    %eax,%ebx
 829a63f:	89 d8                	mov    %ebx,%eax
 829a641:	85 c0                	test   %eax,%eax
 829a643:	74 30                	je     829a675 <_ZN10GlobalData4InitEv+0x6d5>
 829a645:	89 d8                	mov    %ebx,%eax
 829a647:	89 04 24             	mov    %eax,(%esp)
 829a64a:	e8 a1 32 2e 00       	call   857d8f0 <_ZN16MonitorTcpThreadC1Ev>
 829a64f:	eb 20                	jmp    829a671 <_ZN10GlobalData4InitEv+0x6d1>
 829a651:	89 d6                	mov    %edx,%esi
 829a653:	89 c7                	mov    %eax,%edi
 829a655:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829a65c:	08 
 829a65d:	89 1c 24             	mov    %ebx,(%esp)
 829a660:	e8 7b a1 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829a665:	89 f8                	mov    %edi,%eax
 829a667:	89 f2                	mov    %esi,%edx
 829a669:	89 04 24             	mov    %eax,(%esp)
 829a66c:	e8 df 90 84 00       	call   8ae3750 <_Unwind_Resume>
 829a671:	89 d8                	mov    %ebx,%eax
 829a673:	eb 02                	jmp    829a677 <_ZN10GlobalData4InitEv+0x6d7>
 829a675:	89 d8                	mov    %ebx,%eax
 829a677:	a3 c8 bd 40 09       	mov    %eax,0x940bdc8
 829a67c:	a1 c8 bd 40 09       	mov    0x940bdc8,%eax
 829a681:	85 c0                	test   %eax,%eax
 829a683:	75 2e                	jne    829a6b3 <_ZN10GlobalData4InitEv+0x713>
 829a685:	c7 44 24 04 cc 74 c1 	movl   $0x8c174cc,0x4(%esp)
 829a68c:	08 
 829a68d:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829a694:	e8 67 2c 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829a699:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829a6a0:	08 
 829a6a1:	89 04 24             	mov    %eax,(%esp)
 829a6a4:	e8 b7 11 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829a6a9:	bb 00 00 00 00       	mov    $0x0,%ebx
 829a6ae:	e9 78 2d 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829a6b3:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829a6ba:	08 
 829a6bb:	c7 04 24 1c 0e 03 00 	movl   $0x30e1c,(%esp)
 829a6c2:	e8 89 b4 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829a6c7:	89 c3                	mov    %eax,%ebx
 829a6c9:	89 d8                	mov    %ebx,%eax
 829a6cb:	85 c0                	test   %eax,%eax
 829a6cd:	74 30                	je     829a6ff <_ZN10GlobalData4InitEv+0x75f>
 829a6cf:	89 d8                	mov    %ebx,%eax
 829a6d1:	89 04 24             	mov    %eax,(%esp)
 829a6d4:	e8 75 8a 01 00       	call   82b314e <_ZN15CServerProxyMgrI19CMonitorServerProxyEC1Ev>
 829a6d9:	eb 20                	jmp    829a6fb <_ZN10GlobalData4InitEv+0x75b>
 829a6db:	89 d6                	mov    %edx,%esi
 829a6dd:	89 c7                	mov    %eax,%edi
 829a6df:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829a6e6:	08 
 829a6e7:	89 1c 24             	mov    %ebx,(%esp)
 829a6ea:	e8 f1 a0 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829a6ef:	89 f8                	mov    %edi,%eax
 829a6f1:	89 f2                	mov    %esi,%edx
 829a6f3:	89 04 24             	mov    %eax,(%esp)
 829a6f6:	e8 55 90 84 00       	call   8ae3750 <_Unwind_Resume>
 829a6fb:	89 d8                	mov    %ebx,%eax
 829a6fd:	eb 02                	jmp    829a701 <_ZN10GlobalData4InitEv+0x761>
 829a6ff:	89 d8                	mov    %ebx,%eax
 829a701:	a3 28 be 40 09       	mov    %eax,0x940be28
 829a706:	a1 28 be 40 09       	mov    0x940be28,%eax
 829a70b:	85 c0                	test   %eax,%eax
 829a70d:	75 2e                	jne    829a73d <_ZN10GlobalData4InitEv+0x79d>
 829a70f:	c7 44 24 04 08 75 c1 	movl   $0x8c17508,0x4(%esp)
 829a716:	08 
 829a717:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829a71e:	e8 dd 2b 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829a723:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829a72a:	08 
 829a72b:	89 04 24             	mov    %eax,(%esp)
 829a72e:	e8 2d 11 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829a733:	bb 00 00 00 00       	mov    $0x0,%ebx
 829a738:	e9 ee 2c 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829a73d:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829a744:	08 
 829a745:	c7 04 24 34 0e 03 00 	movl   $0x30e34,(%esp)
 829a74c:	e8 ff b3 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829a751:	89 c3                	mov    %eax,%ebx
 829a753:	89 d8                	mov    %ebx,%eax
 829a755:	85 c0                	test   %eax,%eax
 829a757:	74 30                	je     829a789 <_ZN10GlobalData4InitEv+0x7e9>
 829a759:	89 d8                	mov    %ebx,%eax
 829a75b:	89 04 24             	mov    %eax,(%esp)
 829a75e:	e8 af 8a 01 00       	call   82b3212 <_ZN15CServerProxyMgrI17CGuildServerProxyEC1Ev>
 829a763:	eb 20                	jmp    829a785 <_ZN10GlobalData4InitEv+0x7e5>
 829a765:	89 d6                	mov    %edx,%esi
 829a767:	89 c7                	mov    %eax,%edi
 829a769:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829a770:	08 
 829a771:	89 1c 24             	mov    %ebx,(%esp)
 829a774:	e8 67 a0 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829a779:	89 f8                	mov    %edi,%eax
 829a77b:	89 f2                	mov    %esi,%edx
 829a77d:	89 04 24             	mov    %eax,(%esp)
 829a780:	e8 cb 8f 84 00       	call   8ae3750 <_Unwind_Resume>
 829a785:	89 d8                	mov    %ebx,%eax
 829a787:	eb 02                	jmp    829a78b <_ZN10GlobalData4InitEv+0x7eb>
 829a789:	89 d8                	mov    %ebx,%eax
 829a78b:	a3 2c be 40 09       	mov    %eax,0x940be2c
 829a790:	a1 2c be 40 09       	mov    0x940be2c,%eax
 829a795:	85 c0                	test   %eax,%eax
 829a797:	75 2e                	jne    829a7c7 <_ZN10GlobalData4InitEv+0x827>
 829a799:	c7 44 24 04 48 75 c1 	movl   $0x8c17548,0x4(%esp)
 829a7a0:	08 
 829a7a1:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829a7a8:	e8 53 2b 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829a7ad:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829a7b4:	08 
 829a7b5:	89 04 24             	mov    %eax,(%esp)
 829a7b8:	e8 a3 10 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829a7bd:	bb 00 00 00 00       	mov    $0x0,%ebx
 829a7c2:	e9 64 2c 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829a7c7:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829a7ce:	08 
 829a7cf:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 829a7d6:	e8 75 b3 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829a7db:	89 c3                	mov    %eax,%ebx
 829a7dd:	89 d8                	mov    %ebx,%eax
 829a7df:	85 c0                	test   %eax,%eax
 829a7e1:	74 30                	je     829a813 <_ZN10GlobalData4InitEv+0x873>
 829a7e3:	89 d8                	mov    %ebx,%eax
 829a7e5:	89 04 24             	mov    %eax,(%esp)
 829a7e8:	e8 a9 8a 01 00       	call   82b3296 <_ZN15CServerProxyMgrI21CStatisticServerProxyEC1Ev>
 829a7ed:	eb 20                	jmp    829a80f <_ZN10GlobalData4InitEv+0x86f>
 829a7ef:	89 d6                	mov    %edx,%esi
 829a7f1:	89 c7                	mov    %eax,%edi
 829a7f3:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829a7fa:	08 
 829a7fb:	89 1c 24             	mov    %ebx,(%esp)
 829a7fe:	e8 dd 9f 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829a803:	89 f8                	mov    %edi,%eax
 829a805:	89 f2                	mov    %esi,%edx
 829a807:	89 04 24             	mov    %eax,(%esp)
 829a80a:	e8 41 8f 84 00       	call   8ae3750 <_Unwind_Resume>
 829a80f:	89 d8                	mov    %ebx,%eax
 829a811:	eb 02                	jmp    829a815 <_ZN10GlobalData4InitEv+0x875>
 829a813:	89 d8                	mov    %ebx,%eax
 829a815:	a3 30 be 40 09       	mov    %eax,0x940be30
 829a81a:	a1 30 be 40 09       	mov    0x940be30,%eax
 829a81f:	85 c0                	test   %eax,%eax
 829a821:	75 2e                	jne    829a851 <_ZN10GlobalData4InitEv+0x8b1>
 829a823:	c7 44 24 04 84 75 c1 	movl   $0x8c17584,0x4(%esp)
 829a82a:	08 
 829a82b:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829a832:	e8 c9 2a 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829a837:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829a83e:	08 
 829a83f:	89 04 24             	mov    %eax,(%esp)
 829a842:	e8 19 10 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829a847:	bb 00 00 00 00       	mov    $0x0,%ebx
 829a84c:	e9 da 2b 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829a851:	e8 2b 19 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829a856:	89 04 24             	mov    %eax,(%esp)
 829a859:	e8 a6 c5 00 00       	call   82a6e04 <_ZN12CEnvironment16get_udp_ip_hadesEv>
 829a85e:	89 c6                	mov    %eax,%esi
 829a860:	e8 1c 19 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829a865:	89 04 24             	mov    %eax,(%esp)
 829a868:	e8 b3 c5 00 00       	call   82a6e20 <_ZN12CEnvironment18get_tcp_port_hadesEv>
 829a86d:	89 c7                	mov    %eax,%edi
 829a86f:	e8 0d 19 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829a874:	89 04 24             	mov    %eax,(%esp)
 829a877:	e8 96 c5 00 00       	call   82a6e12 <_ZN12CEnvironment18get_udp_port_hadesEv>
 829a87c:	89 85 84 f8 ff ff    	mov    %eax,-0x77c(%ebp)
 829a882:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829a889:	08 
 829a88a:	c7 04 24 1c 0e 03 00 	movl   $0x30e1c,(%esp)
 829a891:	e8 ba b2 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829a896:	89 c3                	mov    %eax,%ebx
 829a898:	89 d8                	mov    %ebx,%eax
 829a89a:	85 c0                	test   %eax,%eax
 829a89c:	74 42                	je     829a8e0 <_ZN10GlobalData4InitEv+0x940>
 829a89e:	89 d8                	mov    %ebx,%eax
 829a8a0:	8b 95 84 f8 ff ff    	mov    -0x77c(%ebp),%edx
 829a8a6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 829a8aa:	89 7c 24 08          	mov    %edi,0x8(%esp)
 829a8ae:	89 74 24 04          	mov    %esi,0x4(%esp)
 829a8b2:	89 04 24             	mov    %eax,(%esp)
 829a8b5:	e8 56 5c 1d 00       	call   8470510 <_ZN17CHadesServerProxyC1EPcii>
 829a8ba:	eb 20                	jmp    829a8dc <_ZN10GlobalData4InitEv+0x93c>
 829a8bc:	89 d6                	mov    %edx,%esi
 829a8be:	89 c7                	mov    %eax,%edi
 829a8c0:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829a8c7:	08 
 829a8c8:	89 1c 24             	mov    %ebx,(%esp)
 829a8cb:	e8 10 9f 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829a8d0:	89 f8                	mov    %edi,%eax
 829a8d2:	89 f2                	mov    %esi,%edx
 829a8d4:	89 04 24             	mov    %eax,(%esp)
 829a8d7:	e8 74 8e 84 00       	call   8ae3750 <_Unwind_Resume>
 829a8dc:	89 d8                	mov    %ebx,%eax
 829a8de:	eb 02                	jmp    829a8e2 <_ZN10GlobalData4InitEv+0x942>
 829a8e0:	89 d8                	mov    %ebx,%eax
 829a8e2:	a3 34 be 40 09       	mov    %eax,0x940be34
 829a8e7:	a1 34 be 40 09       	mov    0x940be34,%eax
 829a8ec:	85 c0                	test   %eax,%eax
 829a8ee:	75 2e                	jne    829a91e <_ZN10GlobalData4InitEv+0x97e>
 829a8f0:	c7 44 24 04 c4 75 c1 	movl   $0x8c175c4,0x4(%esp)
 829a8f7:	08 
 829a8f8:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829a8ff:	e8 fc 29 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829a904:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829a90b:	08 
 829a90c:	89 04 24             	mov    %eax,(%esp)
 829a90f:	e8 4c 0f 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829a914:	bb 00 00 00 00       	mov    $0x0,%ebx
 829a919:	e9 0d 2b 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829a91e:	a1 34 be 40 09       	mov    0x940be34,%eax
 829a923:	89 04 24             	mov    %eax,(%esp)
 829a926:	e8 35 2b 06 00       	call   82fd460 <_ZN15BaseServerProxy4InitEv>
 829a92b:	83 f0 01             	xor    $0x1,%eax
 829a92e:	84 c0                	test   %al,%al
 829a930:	74 2e                	je     829a960 <_ZN10GlobalData4InitEv+0x9c0>
 829a932:	c7 44 24 04 00 76 c1 	movl   $0x8c17600,0x4(%esp)
 829a939:	08 
 829a93a:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829a941:	e8 ba 29 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829a946:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829a94d:	08 
 829a94e:	89 04 24             	mov    %eax,(%esp)
 829a951:	e8 0a 0f 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829a956:	bb 00 00 00 00       	mov    $0x0,%ebx
 829a95b:	e9 cb 2a 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829a960:	8d 85 cb fc ff ff    	lea    -0x335(%ebp),%eax
 829a966:	89 04 24             	mov    %eax,(%esp)
 829a969:	e8 62 57 44 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 829a96e:	e8 0e 18 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829a973:	89 04 24             	mov    %eax,(%esp)
 829a976:	e8 7b c4 00 00       	call   82a6df6 <_ZN12CEnvironment22get_udp_ip_doublecheckEv>
 829a97b:	8d 95 cb fc ff ff    	lea    -0x335(%ebp),%edx
 829a981:	89 54 24 08          	mov    %edx,0x8(%esp)
 829a985:	89 44 24 04          	mov    %eax,0x4(%esp)
 829a989:	8d 85 c4 fc ff ff    	lea    -0x33c(%ebp),%eax
 829a98f:	89 04 24             	mov    %eax,(%esp)
 829a992:	e8 99 cc 46 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 829a997:	8d b5 c4 fc ff ff    	lea    -0x33c(%ebp),%esi
 829a99d:	e8 df 17 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829a9a2:	89 04 24             	mov    %eax,(%esp)
 829a9a5:	e8 3e c4 00 00       	call   82a6de8 <_ZN12CEnvironment24get_udp_port_doublecheckEv>
 829a9aa:	89 c7                	mov    %eax,%edi
 829a9ac:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829a9b3:	08 
 829a9b4:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 829a9bb:	e8 90 b1 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829a9c0:	89 c3                	mov    %eax,%ebx
 829a9c2:	89 d8                	mov    %ebx,%eax
 829a9c4:	85 c0                	test   %eax,%eax
 829a9c6:	74 32                	je     829a9fa <_ZN10GlobalData4InitEv+0xa5a>
 829a9c8:	89 d8                	mov    %ebx,%eax
 829a9ca:	89 7c 24 08          	mov    %edi,0x8(%esp)
 829a9ce:	89 74 24 04          	mov    %esi,0x4(%esp)
 829a9d2:	89 04 24             	mov    %eax,(%esp)
 829a9d5:	e8 26 29 1d 00       	call   846d300 <_ZN27CDoubleConnCheckServerProxyC1ESsi>
 829a9da:	eb 1a                	jmp    829a9f6 <_ZN10GlobalData4InitEv+0xa56>
 829a9dc:	89 d6                	mov    %edx,%esi
 829a9de:	89 c7                	mov    %eax,%edi
 829a9e0:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829a9e7:	08 
 829a9e8:	89 1c 24             	mov    %ebx,(%esp)
 829a9eb:	e8 f0 9d 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829a9f0:	89 f8                	mov    %edi,%eax
 829a9f2:	89 f2                	mov    %esi,%edx
 829a9f4:	eb 1b                	jmp    829aa11 <_ZN10GlobalData4InitEv+0xa71>
 829a9f6:	89 d8                	mov    %ebx,%eax
 829a9f8:	eb 02                	jmp    829a9fc <_ZN10GlobalData4InitEv+0xa5c>
 829a9fa:	89 d8                	mov    %ebx,%eax
 829a9fc:	a3 38 be 40 09       	mov    %eax,0x940be38
 829aa01:	8d 85 c4 fc ff ff    	lea    -0x33c(%ebp),%eax
 829aa07:	89 04 24             	mov    %eax,(%esp)
 829aa0a:	e8 d1 d1 46 00       	call   8707be0 <_ZNSsD1Ev>
 829aa0f:	eb 36                	jmp    829aa47 <_ZN10GlobalData4InitEv+0xaa7>
 829aa11:	89 d3                	mov    %edx,%ebx
 829aa13:	89 c6                	mov    %eax,%esi
 829aa15:	8d 85 c4 fc ff ff    	lea    -0x33c(%ebp),%eax
 829aa1b:	89 04 24             	mov    %eax,(%esp)
 829aa1e:	e8 bd d1 46 00       	call   8707be0 <_ZNSsD1Ev>
 829aa23:	89 f0                	mov    %esi,%eax
 829aa25:	89 da                	mov    %ebx,%edx
 829aa27:	eb 00                	jmp    829aa29 <_ZN10GlobalData4InitEv+0xa89>
 829aa29:	89 d3                	mov    %edx,%ebx
 829aa2b:	89 c6                	mov    %eax,%esi
 829aa2d:	8d 85 cb fc ff ff    	lea    -0x335(%ebp),%eax
 829aa33:	89 04 24             	mov    %eax,(%esp)
 829aa36:	e8 b5 56 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 829aa3b:	89 f0                	mov    %esi,%eax
 829aa3d:	89 da                	mov    %ebx,%edx
 829aa3f:	89 04 24             	mov    %eax,(%esp)
 829aa42:	e8 09 8d 84 00       	call   8ae3750 <_Unwind_Resume>
 829aa47:	8d 85 cb fc ff ff    	lea    -0x335(%ebp),%eax
 829aa4d:	89 04 24             	mov    %eax,(%esp)
 829aa50:	e8 9b 56 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 829aa55:	a1 38 be 40 09       	mov    0x940be38,%eax
 829aa5a:	85 c0                	test   %eax,%eax
 829aa5c:	75 2e                	jne    829aa8c <_ZN10GlobalData4InitEv+0xaec>
 829aa5e:	c7 44 24 04 34 76 c1 	movl   $0x8c17634,0x4(%esp)
 829aa65:	08 
 829aa66:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829aa6d:	e8 8e 28 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829aa72:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829aa79:	08 
 829aa7a:	89 04 24             	mov    %eax,(%esp)
 829aa7d:	e8 de 0d 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829aa82:	bb 00 00 00 00       	mov    $0x0,%ebx
 829aa87:	e9 9f 29 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829aa8c:	a1 38 be 40 09       	mov    0x940be38,%eax
 829aa91:	89 04 24             	mov    %eax,(%esp)
 829aa94:	e8 bd 28 1d 00       	call   846d356 <_ZN27CDoubleConnCheckServerProxy4InitEv>
 829aa99:	83 f0 01             	xor    $0x1,%eax
 829aa9c:	84 c0                	test   %al,%al
 829aa9e:	74 2e                	je     829aace <_ZN10GlobalData4InitEv+0xb2e>
 829aaa0:	c7 44 24 04 7c 76 c1 	movl   $0x8c1767c,0x4(%esp)
 829aaa7:	08 
 829aaa8:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829aaaf:	e8 4c 28 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829aab4:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829aabb:	08 
 829aabc:	89 04 24             	mov    %eax,(%esp)
 829aabf:	e8 9c 0d 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829aac4:	bb 00 00 00 00       	mov    $0x0,%ebx
 829aac9:	e9 5d 29 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829aace:	e8 ae 16 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829aad3:	89 04 24             	mov    %eax,(%esp)
 829aad6:	e8 53 c3 00 00       	call   82a6e2e <_ZN12CEnvironment20get_school_server_ipEv>
 829aadb:	0f b6 00             	movzbl (%eax),%eax
 829aade:	84 c0                	test   %al,%al
 829aae0:	74 18                	je     829aafa <_ZN10GlobalData4InitEv+0xb5a>
 829aae2:	e8 9a 16 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829aae7:	89 04 24             	mov    %eax,(%esp)
 829aaea:	e8 4d c3 00 00       	call   82a6e3c <_ZN12CEnvironment22get_school_server_portEv>
 829aaef:	85 c0                	test   %eax,%eax
 829aaf1:	7e 07                	jle    829aafa <_ZN10GlobalData4InitEv+0xb5a>
 829aaf3:	b8 01 00 00 00       	mov    $0x1,%eax
 829aaf8:	eb 05                	jmp    829aaff <_ZN10GlobalData4InitEv+0xb5f>
 829aafa:	b8 00 00 00 00       	mov    $0x0,%eax
 829aaff:	84 c0                	test   %al,%al
 829ab01:	0f 84 6e 01 00 00    	je     829ac75 <_ZN10GlobalData4InitEv+0xcd5>
 829ab07:	8d 85 d3 fc ff ff    	lea    -0x32d(%ebp),%eax
 829ab0d:	89 04 24             	mov    %eax,(%esp)
 829ab10:	e8 bb 55 44 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 829ab15:	e8 67 16 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829ab1a:	89 04 24             	mov    %eax,(%esp)
 829ab1d:	e8 0c c3 00 00       	call   82a6e2e <_ZN12CEnvironment20get_school_server_ipEv>
 829ab22:	8d 95 d3 fc ff ff    	lea    -0x32d(%ebp),%edx
 829ab28:	89 54 24 08          	mov    %edx,0x8(%esp)
 829ab2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 829ab30:	8d 85 cc fc ff ff    	lea    -0x334(%ebp),%eax
 829ab36:	89 04 24             	mov    %eax,(%esp)
 829ab39:	e8 f2 ca 46 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 829ab3e:	8d b5 cc fc ff ff    	lea    -0x334(%ebp),%esi
 829ab44:	e8 38 16 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829ab49:	89 04 24             	mov    %eax,(%esp)
 829ab4c:	e8 eb c2 00 00       	call   82a6e3c <_ZN12CEnvironment22get_school_server_portEv>
 829ab51:	89 c7                	mov    %eax,%edi
 829ab53:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829ab5a:	08 
 829ab5b:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 829ab62:	e8 e9 af 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829ab67:	89 c3                	mov    %eax,%ebx
 829ab69:	89 d8                	mov    %ebx,%eax
 829ab6b:	85 c0                	test   %eax,%eax
 829ab6d:	74 32                	je     829aba1 <_ZN10GlobalData4InitEv+0xc01>
 829ab6f:	89 d8                	mov    %ebx,%eax
 829ab71:	89 7c 24 08          	mov    %edi,0x8(%esp)
 829ab75:	89 74 24 04          	mov    %esi,0x4(%esp)
 829ab79:	89 04 24             	mov    %eax,(%esp)
 829ab7c:	e8 a3 72 1d 00       	call   8471e24 <_ZN18CSchoolServerProxyC1ESsi>
 829ab81:	eb 1a                	jmp    829ab9d <_ZN10GlobalData4InitEv+0xbfd>
 829ab83:	89 d6                	mov    %edx,%esi
 829ab85:	89 c7                	mov    %eax,%edi
 829ab87:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829ab8e:	08 
 829ab8f:	89 1c 24             	mov    %ebx,(%esp)
 829ab92:	e8 49 9c 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829ab97:	89 f8                	mov    %edi,%eax
 829ab99:	89 f2                	mov    %esi,%edx
 829ab9b:	eb 1b                	jmp    829abb8 <_ZN10GlobalData4InitEv+0xc18>
 829ab9d:	89 d8                	mov    %ebx,%eax
 829ab9f:	eb 02                	jmp    829aba3 <_ZN10GlobalData4InitEv+0xc03>
 829aba1:	89 d8                	mov    %ebx,%eax
 829aba3:	a3 3c be 40 09       	mov    %eax,0x940be3c
 829aba8:	8d 85 cc fc ff ff    	lea    -0x334(%ebp),%eax
 829abae:	89 04 24             	mov    %eax,(%esp)
 829abb1:	e8 2a d0 46 00       	call   8707be0 <_ZNSsD1Ev>
 829abb6:	eb 36                	jmp    829abee <_ZN10GlobalData4InitEv+0xc4e>
 829abb8:	89 d3                	mov    %edx,%ebx
 829abba:	89 c6                	mov    %eax,%esi
 829abbc:	8d 85 cc fc ff ff    	lea    -0x334(%ebp),%eax
 829abc2:	89 04 24             	mov    %eax,(%esp)
 829abc5:	e8 16 d0 46 00       	call   8707be0 <_ZNSsD1Ev>
 829abca:	89 f0                	mov    %esi,%eax
 829abcc:	89 da                	mov    %ebx,%edx
 829abce:	eb 00                	jmp    829abd0 <_ZN10GlobalData4InitEv+0xc30>
 829abd0:	89 d3                	mov    %edx,%ebx
 829abd2:	89 c6                	mov    %eax,%esi
 829abd4:	8d 85 d3 fc ff ff    	lea    -0x32d(%ebp),%eax
 829abda:	89 04 24             	mov    %eax,(%esp)
 829abdd:	e8 0e 55 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 829abe2:	89 f0                	mov    %esi,%eax
 829abe4:	89 da                	mov    %ebx,%edx
 829abe6:	89 04 24             	mov    %eax,(%esp)
 829abe9:	e8 62 8b 84 00       	call   8ae3750 <_Unwind_Resume>
 829abee:	8d 85 d3 fc ff ff    	lea    -0x32d(%ebp),%eax
 829abf4:	89 04 24             	mov    %eax,(%esp)
 829abf7:	e8 f4 54 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 829abfc:	a1 3c be 40 09       	mov    0x940be3c,%eax
 829ac01:	85 c0                	test   %eax,%eax
 829ac03:	75 2e                	jne    829ac33 <_ZN10GlobalData4InitEv+0xc93>
 829ac05:	c7 44 24 04 bc 76 c1 	movl   $0x8c176bc,0x4(%esp)
 829ac0c:	08 
 829ac0d:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829ac14:	e8 e7 26 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829ac19:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829ac20:	08 
 829ac21:	89 04 24             	mov    %eax,(%esp)
 829ac24:	e8 37 0c 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829ac29:	bb 00 00 00 00       	mov    $0x0,%ebx
 829ac2e:	e9 f8 27 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829ac33:	a1 3c be 40 09       	mov    0x940be3c,%eax
 829ac38:	89 04 24             	mov    %eax,(%esp)
 829ac3b:	e8 3a 72 1d 00       	call   8471e7a <_ZN18CSchoolServerProxy4InitEv>
 829ac40:	83 f0 01             	xor    $0x1,%eax
 829ac43:	84 c0                	test   %al,%al
 829ac45:	74 2e                	je     829ac75 <_ZN10GlobalData4InitEv+0xcd5>
 829ac47:	c7 44 24 04 fc 76 c1 	movl   $0x8c176fc,0x4(%esp)
 829ac4e:	08 
 829ac4f:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829ac56:	e8 a5 26 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829ac5b:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829ac62:	08 
 829ac63:	89 04 24             	mov    %eax,(%esp)
 829ac66:	e8 f5 0b 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829ac6b:	bb 00 00 00 00       	mov    $0x0,%ebx
 829ac70:	e9 b6 27 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829ac75:	e8 07 15 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829ac7a:	89 04 24             	mov    %eax,(%esp)
 829ac7d:	e8 0e c2 00 00       	call   82a6e90 <_ZN12CEnvironment20get_pcroom_server_ipEv>
 829ac82:	89 c6                	mov    %eax,%esi
 829ac84:	e8 f8 14 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829ac89:	89 04 24             	mov    %eax,(%esp)
 829ac8c:	e8 f1 c1 00 00       	call   82a6e82 <_ZN12CEnvironment22get_pcroom_server_portEv>
 829ac91:	89 c7                	mov    %eax,%edi
 829ac93:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829ac9a:	08 
 829ac9b:	c7 04 24 04 0e 03 00 	movl   $0x30e04,(%esp)
 829aca2:	e8 a9 ae 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829aca7:	89 c3                	mov    %eax,%ebx
 829aca9:	89 d8                	mov    %ebx,%eax
 829acab:	85 c0                	test   %eax,%eax
 829acad:	74 38                	je     829ace7 <_ZN10GlobalData4InitEv+0xd47>
 829acaf:	89 d8                	mov    %ebx,%eax
 829acb1:	89 7c 24 08          	mov    %edi,0x8(%esp)
 829acb5:	89 74 24 04          	mov    %esi,0x4(%esp)
 829acb9:	89 04 24             	mov    %eax,(%esp)
 829acbc:	e8 1b 6b 1d 00       	call   84717dc <_ZN18CPCRoomServerProxyC1EPci>
 829acc1:	eb 20                	jmp    829ace3 <_ZN10GlobalData4InitEv+0xd43>
 829acc3:	89 d6                	mov    %edx,%esi
 829acc5:	89 c7                	mov    %eax,%edi
 829acc7:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829acce:	08 
 829accf:	89 1c 24             	mov    %ebx,(%esp)
 829acd2:	e8 09 9b 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829acd7:	89 f8                	mov    %edi,%eax
 829acd9:	89 f2                	mov    %esi,%edx
 829acdb:	89 04 24             	mov    %eax,(%esp)
 829acde:	e8 6d 8a 84 00       	call   8ae3750 <_Unwind_Resume>
 829ace3:	89 d8                	mov    %ebx,%eax
 829ace5:	eb 02                	jmp    829ace9 <_ZN10GlobalData4InitEv+0xd49>
 829ace7:	89 d8                	mov    %ebx,%eax
 829ace9:	a3 40 be 40 09       	mov    %eax,0x940be40
 829acee:	a1 40 be 40 09       	mov    0x940be40,%eax
 829acf3:	85 c0                	test   %eax,%eax
 829acf5:	75 2e                	jne    829ad25 <_ZN10GlobalData4InitEv+0xd85>
 829acf7:	c7 44 24 04 30 77 c1 	movl   $0x8c17730,0x4(%esp)
 829acfe:	08 
 829acff:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829ad06:	e8 f5 25 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829ad0b:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829ad12:	08 
 829ad13:	89 04 24             	mov    %eax,(%esp)
 829ad16:	e8 45 0b 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829ad1b:	bb 00 00 00 00       	mov    $0x0,%ebx
 829ad20:	e9 06 27 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829ad25:	e8 57 14 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829ad2a:	89 04 24             	mov    %eax,(%esp)
 829ad2d:	e8 7a c1 00 00       	call   82a6eac <_ZN12CEnvironment23get_community_server_ipEv>
 829ad32:	89 c6                	mov    %eax,%esi
 829ad34:	e8 48 14 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829ad39:	89 04 24             	mov    %eax,(%esp)
 829ad3c:	e8 5d c1 00 00       	call   82a6e9e <_ZN12CEnvironment25get_community_server_portEv>
 829ad41:	89 c7                	mov    %eax,%edi
 829ad43:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829ad4a:	08 
 829ad4b:	c7 04 24 04 0e 03 00 	movl   $0x30e04,(%esp)
 829ad52:	e8 f9 ad 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829ad57:	89 c3                	mov    %eax,%ebx
 829ad59:	89 d8                	mov    %ebx,%eax
 829ad5b:	85 c0                	test   %eax,%eax
 829ad5d:	74 38                	je     829ad97 <_ZN10GlobalData4InitEv+0xdf7>
 829ad5f:	89 d8                	mov    %ebx,%eax
 829ad61:	89 7c 24 08          	mov    %edi,0x8(%esp)
 829ad65:	89 74 24 04          	mov    %esi,0x4(%esp)
 829ad69:	89 04 24             	mov    %eax,(%esp)
 829ad6c:	e8 57 18 1d 00       	call   846c5c8 <_ZN21CCommunityServerProxyC1EPci>
 829ad71:	eb 20                	jmp    829ad93 <_ZN10GlobalData4InitEv+0xdf3>
 829ad73:	89 d6                	mov    %edx,%esi
 829ad75:	89 c7                	mov    %eax,%edi
 829ad77:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829ad7e:	08 
 829ad7f:	89 1c 24             	mov    %ebx,(%esp)
 829ad82:	e8 59 9a 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829ad87:	89 f8                	mov    %edi,%eax
 829ad89:	89 f2                	mov    %esi,%edx
 829ad8b:	89 04 24             	mov    %eax,(%esp)
 829ad8e:	e8 bd 89 84 00       	call   8ae3750 <_Unwind_Resume>
 829ad93:	89 d8                	mov    %ebx,%eax
 829ad95:	eb 02                	jmp    829ad99 <_ZN10GlobalData4InitEv+0xdf9>
 829ad97:	89 d8                	mov    %ebx,%eax
 829ad99:	a3 44 be 40 09       	mov    %eax,0x940be44
 829ad9e:	a1 44 be 40 09       	mov    0x940be44,%eax
 829ada3:	85 c0                	test   %eax,%eax
 829ada5:	75 2e                	jne    829add5 <_ZN10GlobalData4InitEv+0xe35>
 829ada7:	c7 44 24 04 70 77 c1 	movl   $0x8c17770,0x4(%esp)
 829adae:	08 
 829adaf:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829adb6:	e8 45 25 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829adbb:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829adc2:	08 
 829adc3:	89 04 24             	mov    %eax,(%esp)
 829adc6:	e8 95 0a 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829adcb:	bb 00 00 00 00       	mov    $0x0,%ebx
 829add0:	e9 56 26 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829add5:	e8 a7 13 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829adda:	89 04 24             	mov    %eax,(%esp)
 829addd:	e8 e6 c0 00 00       	call   82a6ec8 <_ZN12CEnvironment21get_auction_server_ipEv>
 829ade2:	89 c6                	mov    %eax,%esi
 829ade4:	e8 98 13 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829ade9:	89 04 24             	mov    %eax,(%esp)
 829adec:	e8 c9 c0 00 00       	call   82a6eba <_ZN12CEnvironment23get_auction_server_portEv>
 829adf1:	89 c7                	mov    %eax,%edi
 829adf3:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829adfa:	08 
 829adfb:	c7 04 24 10 0e 03 00 	movl   $0x30e10,(%esp)
 829ae02:	e8 49 ad 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829ae07:	89 c3                	mov    %eax,%ebx
 829ae09:	89 d8                	mov    %ebx,%eax
 829ae0b:	85 c0                	test   %eax,%eax
 829ae0d:	74 40                	je     829ae4f <_ZN10GlobalData4InitEv+0xeaf>
 829ae0f:	89 d8                	mov    %ebx,%eax
 829ae11:	c7 44 24 0c b0 77 c1 	movl   $0x8c177b0,0xc(%esp)
 829ae18:	08 
 829ae19:	89 7c 24 08          	mov    %edi,0x8(%esp)
 829ae1d:	89 74 24 04          	mov    %esi,0x4(%esp)
 829ae21:	89 04 24             	mov    %eax,(%esp)
 829ae24:	e8 67 cc 05 00       	call   82f7a90 <_ZN19CAuctionServerProxyC1EPciS0_>
 829ae29:	eb 20                	jmp    829ae4b <_ZN10GlobalData4InitEv+0xeab>
 829ae2b:	89 d6                	mov    %edx,%esi
 829ae2d:	89 c7                	mov    %eax,%edi
 829ae2f:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829ae36:	08 
 829ae37:	89 1c 24             	mov    %ebx,(%esp)
 829ae3a:	e8 a1 99 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829ae3f:	89 f8                	mov    %edi,%eax
 829ae41:	89 f2                	mov    %esi,%edx
 829ae43:	89 04 24             	mov    %eax,(%esp)
 829ae46:	e8 05 89 84 00       	call   8ae3750 <_Unwind_Resume>
 829ae4b:	89 d8                	mov    %ebx,%eax
 829ae4d:	eb 02                	jmp    829ae51 <_ZN10GlobalData4InitEv+0xeb1>
 829ae4f:	89 d8                	mov    %ebx,%eax
 829ae51:	a3 48 be 40 09       	mov    %eax,0x940be48
 829ae56:	a1 48 be 40 09       	mov    0x940be48,%eax
 829ae5b:	85 c0                	test   %eax,%eax
 829ae5d:	75 2e                	jne    829ae8d <_ZN10GlobalData4InitEv+0xeed>
 829ae5f:	c7 44 24 04 c0 77 c1 	movl   $0x8c177c0,0x4(%esp)
 829ae66:	08 
 829ae67:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829ae6e:	e8 8d 24 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829ae73:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829ae7a:	08 
 829ae7b:	89 04 24             	mov    %eax,(%esp)
 829ae7e:	e8 dd 09 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829ae83:	bb 00 00 00 00       	mov    $0x0,%ebx
 829ae88:	e9 9e 25 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829ae8d:	e8 ef 12 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829ae92:	89 04 24             	mov    %eax,(%esp)
 829ae95:	e8 4a c0 00 00       	call   82a6ee4 <_ZN12CEnvironment26get_cera_auction_server_ipEv>
 829ae9a:	89 c6                	mov    %eax,%esi
 829ae9c:	e8 e0 12 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829aea1:	89 04 24             	mov    %eax,(%esp)
 829aea4:	e8 2d c0 00 00       	call   82a6ed6 <_ZN12CEnvironment28get_cera_auction_server_portEv>
 829aea9:	89 c7                	mov    %eax,%edi
 829aeab:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829aeb2:	08 
 829aeb3:	c7 04 24 10 0e 03 00 	movl   $0x30e10,(%esp)
 829aeba:	e8 91 ac 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829aebf:	89 c3                	mov    %eax,%ebx
 829aec1:	89 d8                	mov    %ebx,%eax
 829aec3:	85 c0                	test   %eax,%eax
 829aec5:	74 40                	je     829af07 <_ZN10GlobalData4InitEv+0xf67>
 829aec7:	89 d8                	mov    %ebx,%eax
 829aec9:	c7 44 24 0c fe 77 c1 	movl   $0x8c177fe,0xc(%esp)
 829aed0:	08 
 829aed1:	89 7c 24 08          	mov    %edi,0x8(%esp)
 829aed5:	89 74 24 04          	mov    %esi,0x4(%esp)
 829aed9:	89 04 24             	mov    %eax,(%esp)
 829aedc:	e8 bf cc 05 00       	call   82f7ba0 <_ZN23CCeraAuctionServerProxyC1EPciS0_>
 829aee1:	eb 20                	jmp    829af03 <_ZN10GlobalData4InitEv+0xf63>
 829aee3:	89 d6                	mov    %edx,%esi
 829aee5:	89 c7                	mov    %eax,%edi
 829aee7:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829aeee:	08 
 829aeef:	89 1c 24             	mov    %ebx,(%esp)
 829aef2:	e8 e9 98 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829aef7:	89 f8                	mov    %edi,%eax
 829aef9:	89 f2                	mov    %esi,%edx
 829aefb:	89 04 24             	mov    %eax,(%esp)
 829aefe:	e8 4d 88 84 00       	call   8ae3750 <_Unwind_Resume>
 829af03:	89 d8                	mov    %ebx,%eax
 829af05:	eb 02                	jmp    829af09 <_ZN10GlobalData4InitEv+0xf69>
 829af07:	89 d8                	mov    %ebx,%eax
 829af09:	a3 4c be 40 09       	mov    %eax,0x940be4c
 829af0e:	a1 4c be 40 09       	mov    0x940be4c,%eax
 829af13:	85 c0                	test   %eax,%eax
 829af15:	75 2e                	jne    829af45 <_ZN10GlobalData4InitEv+0xfa5>
 829af17:	c7 44 24 04 14 78 c1 	movl   $0x8c17814,0x4(%esp)
 829af1e:	08 
 829af1f:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829af26:	e8 d5 23 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829af2b:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829af32:	08 
 829af33:	89 04 24             	mov    %eax,(%esp)
 829af36:	e8 25 09 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829af3b:	bb 00 00 00 00       	mov    $0x0,%ebx
 829af40:	e9 e6 24 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829af45:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829af4c:	08 
 829af4d:	c7 04 24 08 02 00 00 	movl   $0x208,(%esp)
 829af54:	e8 f7 ab 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829af59:	89 c3                	mov    %eax,%ebx
 829af5b:	89 d8                	mov    %ebx,%eax
 829af5d:	85 c0                	test   %eax,%eax
 829af5f:	74 30                	je     829af91 <_ZN10GlobalData4InitEv+0xff1>
 829af61:	89 d8                	mov    %ebx,%eax
 829af63:	89 04 24             	mov    %eax,(%esp)
 829af66:	e8 2d 3a 1e 00       	call   847e998 <_ZN13CPowerManagerC1Ev>
 829af6b:	eb 20                	jmp    829af8d <_ZN10GlobalData4InitEv+0xfed>
 829af6d:	89 d6                	mov    %edx,%esi
 829af6f:	89 c7                	mov    %eax,%edi
 829af71:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829af78:	08 
 829af79:	89 1c 24             	mov    %ebx,(%esp)
 829af7c:	e8 5f 98 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829af81:	89 f8                	mov    %edi,%eax
 829af83:	89 f2                	mov    %esi,%edx
 829af85:	89 04 24             	mov    %eax,(%esp)
 829af88:	e8 c3 87 84 00       	call   8ae3750 <_Unwind_Resume>
 829af8d:	89 d8                	mov    %ebx,%eax
 829af8f:	eb 02                	jmp    829af93 <_ZN10GlobalData4InitEv+0xff3>
 829af91:	89 d8                	mov    %ebx,%eax
 829af93:	a3 50 be 40 09       	mov    %eax,0x940be50
 829af98:	a1 50 be 40 09       	mov    0x940be50,%eax
 829af9d:	85 c0                	test   %eax,%eax
 829af9f:	75 2e                	jne    829afcf <_ZN10GlobalData4InitEv+0x102f>
 829afa1:	c7 44 24 04 58 78 c1 	movl   $0x8c17858,0x4(%esp)
 829afa8:	08 
 829afa9:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829afb0:	e8 4b 23 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829afb5:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829afbc:	08 
 829afbd:	89 04 24             	mov    %eax,(%esp)
 829afc0:	e8 9b 08 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829afc5:	bb 00 00 00 00       	mov    $0x0,%ebx
 829afca:	e9 5c 24 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829afcf:	a1 50 be 40 09       	mov    0x940be50,%eax
 829afd4:	89 04 24             	mov    %eax,(%esp)
 829afd7:	e8 e0 3a 1e 00       	call   847eabc <_ZN13CPowerManager4InitEv>
 829afdc:	83 f0 01             	xor    $0x1,%eax
 829afdf:	84 c0                	test   %al,%al
 829afe1:	74 2e                	je     829b011 <_ZN10GlobalData4InitEv+0x1071>
 829afe3:	c7 44 24 04 90 78 c1 	movl   $0x8c17890,0x4(%esp)
 829afea:	08 
 829afeb:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829aff2:	e8 09 23 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829aff7:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829affe:	08 
 829afff:	89 04 24             	mov    %eax,(%esp)
 829b002:	e8 59 08 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829b007:	bb 00 00 00 00       	mov    $0x0,%ebx
 829b00c:	e9 1a 24 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829b011:	a1 50 be 40 09       	mov    0x940be50,%eax
 829b016:	89 04 24             	mov    %eax,(%esp)
 829b019:	e8 7a 5d 1e 00       	call   8480d98 <_ZN13CPowerManager16LoadPowerWarInfoEv>
 829b01e:	a1 50 be 40 09       	mov    0x940be50,%eax
 829b023:	89 04 24             	mov    %eax,(%esp)
 829b026:	e8 d3 44 1e 00       	call   847f4fe <_ZN13CPowerManager14LoadRankerInfoEv>
 829b02b:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829b032:	08 
 829b033:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 829b03a:	e8 11 ab 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829b03f:	89 c3                	mov    %eax,%ebx
 829b041:	89 d8                	mov    %ebx,%eax
 829b043:	85 c0                	test   %eax,%eax
 829b045:	74 30                	je     829b077 <_ZN10GlobalData4InitEv+0x10d7>
 829b047:	89 d8                	mov    %ebx,%eax
 829b049:	89 04 24             	mov    %eax,(%esp)
 829b04c:	e8 a7 cf 20 00       	call   84a7ff8 <_ZN21CFatigueBatteryHandleC1Ev>
 829b051:	eb 20                	jmp    829b073 <_ZN10GlobalData4InitEv+0x10d3>
 829b053:	89 d6                	mov    %edx,%esi
 829b055:	89 c7                	mov    %eax,%edi
 829b057:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829b05e:	08 
 829b05f:	89 1c 24             	mov    %ebx,(%esp)
 829b062:	e8 79 97 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829b067:	89 f8                	mov    %edi,%eax
 829b069:	89 f2                	mov    %esi,%edx
 829b06b:	89 04 24             	mov    %eax,(%esp)
 829b06e:	e8 dd 86 84 00       	call   8ae3750 <_Unwind_Resume>
 829b073:	89 d8                	mov    %ebx,%eax
 829b075:	eb 02                	jmp    829b079 <_ZN10GlobalData4InitEv+0x10d9>
 829b077:	89 d8                	mov    %ebx,%eax
 829b079:	a3 58 be 40 09       	mov    %eax,0x940be58
 829b07e:	a1 58 be 40 09       	mov    0x940be58,%eax
 829b083:	85 c0                	test   %eax,%eax
 829b085:	75 2e                	jne    829b0b5 <_ZN10GlobalData4InitEv+0x1115>
 829b087:	c7 44 24 04 c4 78 c1 	movl   $0x8c178c4,0x4(%esp)
 829b08e:	08 
 829b08f:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829b096:	e8 65 22 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829b09b:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829b0a2:	08 
 829b0a3:	89 04 24             	mov    %eax,(%esp)
 829b0a6:	e8 b5 07 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829b0ab:	bb 00 00 00 00       	mov    $0x0,%ebx
 829b0b0:	e9 76 23 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829b0b5:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829b0bc:	08 
 829b0bd:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 829b0c4:	e8 87 aa 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829b0c9:	89 c3                	mov    %eax,%ebx
 829b0cb:	89 d8                	mov    %ebx,%eax
 829b0cd:	85 c0                	test   %eax,%eax
 829b0cf:	74 30                	je     829b101 <_ZN10GlobalData4InitEv+0x1161>
 829b0d1:	89 d8                	mov    %ebx,%eax
 829b0d3:	89 04 24             	mov    %eax,(%esp)
 829b0d6:	e8 55 f8 35 00       	call   85fa930 <_ZN10secretshop11CSecretShopC1Ev>
 829b0db:	eb 20                	jmp    829b0fd <_ZN10GlobalData4InitEv+0x115d>
 829b0dd:	89 d6                	mov    %edx,%esi
 829b0df:	89 c7                	mov    %eax,%edi
 829b0e1:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829b0e8:	08 
 829b0e9:	89 1c 24             	mov    %ebx,(%esp)
 829b0ec:	e8 ef 96 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829b0f1:	89 f8                	mov    %edi,%eax
 829b0f3:	89 f2                	mov    %esi,%edx
 829b0f5:	89 04 24             	mov    %eax,(%esp)
 829b0f8:	e8 53 86 84 00       	call   8ae3750 <_Unwind_Resume>
 829b0fd:	89 d8                	mov    %ebx,%eax
 829b0ff:	eb 02                	jmp    829b103 <_ZN10GlobalData4InitEv+0x1163>
 829b101:	89 d8                	mov    %ebx,%eax
 829b103:	a3 54 be 40 09       	mov    %eax,0x940be54
 829b108:	a1 54 be 40 09       	mov    0x940be54,%eax
 829b10d:	85 c0                	test   %eax,%eax
 829b10f:	75 2e                	jne    829b13f <_ZN10GlobalData4InitEv+0x119f>
 829b111:	c7 44 24 04 04 79 c1 	movl   $0x8c17904,0x4(%esp)
 829b118:	08 
 829b119:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829b120:	e8 db 21 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829b125:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829b12c:	08 
 829b12d:	89 04 24             	mov    %eax,(%esp)
 829b130:	e8 2b 07 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829b135:	bb 00 00 00 00       	mov    $0x0,%ebx
 829b13a:	e9 ec 22 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829b13f:	8d 85 db fc ff ff    	lea    -0x325(%ebp),%eax
 829b145:	89 04 24             	mov    %eax,(%esp)
 829b148:	e8 83 4f 44 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 829b14d:	e8 2f 10 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829b152:	89 04 24             	mov    %eax,(%esp)
 829b155:	e8 fe bc 00 00       	call   82a6e58 <_ZN12CEnvironment18get_udp_ip_channelEv>
 829b15a:	8d 95 db fc ff ff    	lea    -0x325(%ebp),%edx
 829b160:	89 54 24 08          	mov    %edx,0x8(%esp)
 829b164:	89 44 24 04          	mov    %eax,0x4(%esp)
 829b168:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 829b16e:	89 04 24             	mov    %eax,(%esp)
 829b171:	e8 ba c4 46 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 829b176:	8d b5 d4 fc ff ff    	lea    -0x32c(%ebp),%esi
 829b17c:	e8 00 10 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829b181:	89 04 24             	mov    %eax,(%esp)
 829b184:	e8 c1 bc 00 00       	call   82a6e4a <_ZN12CEnvironment20get_udp_port_channelEv>
 829b189:	89 c7                	mov    %eax,%edi
 829b18b:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829b192:	08 
 829b193:	c7 04 24 20 00 08 00 	movl   $0x80020,(%esp)
 829b19a:	e8 b1 a9 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829b19f:	89 c3                	mov    %eax,%ebx
 829b1a1:	89 d8                	mov    %ebx,%eax
 829b1a3:	85 c0                	test   %eax,%eax
 829b1a5:	74 32                	je     829b1d9 <_ZN10GlobalData4InitEv+0x1239>
 829b1a7:	89 d8                	mov    %ebx,%eax
 829b1a9:	89 7c 24 08          	mov    %edi,0x8(%esp)
 829b1ad:	89 74 24 04          	mov    %esi,0x4(%esp)
 829b1b1:	89 04 24             	mov    %eax,(%esp)
 829b1b4:	e8 3b af e6 ff       	call   81060f4 <_ZN15CmmChannelProxyC1ESsi>
 829b1b9:	eb 1a                	jmp    829b1d5 <_ZN10GlobalData4InitEv+0x1235>
 829b1bb:	89 d6                	mov    %edx,%esi
 829b1bd:	89 c7                	mov    %eax,%edi
 829b1bf:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829b1c6:	08 
 829b1c7:	89 1c 24             	mov    %ebx,(%esp)
 829b1ca:	e8 11 96 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829b1cf:	89 f8                	mov    %edi,%eax
 829b1d1:	89 f2                	mov    %esi,%edx
 829b1d3:	eb 1b                	jmp    829b1f0 <_ZN10GlobalData4InitEv+0x1250>
 829b1d5:	89 d8                	mov    %ebx,%eax
 829b1d7:	eb 02                	jmp    829b1db <_ZN10GlobalData4InitEv+0x123b>
 829b1d9:	89 d8                	mov    %ebx,%eax
 829b1db:	a3 5c be 40 09       	mov    %eax,0x940be5c
 829b1e0:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 829b1e6:	89 04 24             	mov    %eax,(%esp)
 829b1e9:	e8 f2 c9 46 00       	call   8707be0 <_ZNSsD1Ev>
 829b1ee:	eb 36                	jmp    829b226 <_ZN10GlobalData4InitEv+0x1286>
 829b1f0:	89 d3                	mov    %edx,%ebx
 829b1f2:	89 c6                	mov    %eax,%esi
 829b1f4:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 829b1fa:	89 04 24             	mov    %eax,(%esp)
 829b1fd:	e8 de c9 46 00       	call   8707be0 <_ZNSsD1Ev>
 829b202:	89 f0                	mov    %esi,%eax
 829b204:	89 da                	mov    %ebx,%edx
 829b206:	eb 00                	jmp    829b208 <_ZN10GlobalData4InitEv+0x1268>
 829b208:	89 d3                	mov    %edx,%ebx
 829b20a:	89 c6                	mov    %eax,%esi
 829b20c:	8d 85 db fc ff ff    	lea    -0x325(%ebp),%eax
 829b212:	89 04 24             	mov    %eax,(%esp)
 829b215:	e8 d6 4e 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 829b21a:	89 f0                	mov    %esi,%eax
 829b21c:	89 da                	mov    %ebx,%edx
 829b21e:	89 04 24             	mov    %eax,(%esp)
 829b221:	e8 2a 85 84 00       	call   8ae3750 <_Unwind_Resume>
 829b226:	8d 85 db fc ff ff    	lea    -0x325(%ebp),%eax
 829b22c:	89 04 24             	mov    %eax,(%esp)
 829b22f:	e8 bc 4e 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 829b234:	a1 5c be 40 09       	mov    0x940be5c,%eax
 829b239:	85 c0                	test   %eax,%eax
 829b23b:	75 2e                	jne    829b26b <_ZN10GlobalData4InitEv+0x12cb>
 829b23d:	c7 44 24 04 40 79 c1 	movl   $0x8c17940,0x4(%esp)
 829b244:	08 
 829b245:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829b24c:	e8 af 20 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829b251:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829b258:	08 
 829b259:	89 04 24             	mov    %eax,(%esp)
 829b25c:	e8 ff 05 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829b261:	bb 00 00 00 00       	mov    $0x0,%ebx
 829b266:	e9 c0 21 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829b26b:	a1 5c be 40 09       	mov    0x940be5c,%eax
 829b270:	89 04 24             	mov    %eax,(%esp)
 829b273:	e8 d2 ae e6 ff       	call   810614a <_ZN15CmmChannelProxy4InitEv>
 829b278:	83 f0 01             	xor    $0x1,%eax
 829b27b:	84 c0                	test   %al,%al
 829b27d:	74 2e                	je     829b2ad <_ZN10GlobalData4InitEv+0x130d>
 829b27f:	c7 44 24 04 80 79 c1 	movl   $0x8c17980,0x4(%esp)
 829b286:	08 
 829b287:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829b28e:	e8 6d 20 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829b293:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829b29a:	08 
 829b29b:	89 04 24             	mov    %eax,(%esp)
 829b29e:	e8 bd 05 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829b2a3:	bb 00 00 00 00       	mov    $0x0,%ebx
 829b2a8:	e9 7e 21 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829b2ad:	c7 04 24 7c 04 00 00 	movl   $0x47c,(%esp)
 829b2b4:	e8 97 91 48 00       	call   8724450 <_Znwj>
 829b2b9:	89 c3                	mov    %eax,%ebx
 829b2bb:	89 d8                	mov    %ebx,%eax
 829b2bd:	89 04 24             	mov    %eax,(%esp)
 829b2c0:	e8 e7 ad e1 ff       	call   80b60ac <_ZN9CRijndaelC1Ev>
 829b2c5:	eb 18                	jmp    829b2df <_ZN10GlobalData4InitEv+0x133f>
 829b2c7:	89 d6                	mov    %edx,%esi
 829b2c9:	89 c7                	mov    %eax,%edi
 829b2cb:	89 1c 24             	mov    %ebx,(%esp)
 829b2ce:	e8 1d 92 48 00       	call   87244f0 <_ZdlPv>
 829b2d3:	89 f8                	mov    %edi,%eax
 829b2d5:	89 f2                	mov    %esi,%edx
 829b2d7:	89 04 24             	mov    %eax,(%esp)
 829b2da:	e8 71 84 84 00       	call   8ae3750 <_Unwind_Resume>
 829b2df:	89 d8                	mov    %ebx,%eax
 829b2e1:	a3 60 be 40 09       	mov    %eax,0x940be60
 829b2e6:	a1 60 be 40 09       	mov    0x940be60,%eax
 829b2eb:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 829b2f2:	00 
 829b2f3:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 829b2fa:	00 
 829b2fb:	c7 44 24 14 10 00 00 	movl   $0x10,0x14(%esp)
 829b302:	00 
 829b303:	c7 44 24 10 10 00 00 	movl   $0x10,0x10(%esp)
 829b30a:	00 
 829b30b:	c7 44 24 0c 20 2f b2 	movl   $0x8b22f20,0xc(%esp)
 829b312:	08 
 829b313:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 829b31a:	00 
 829b31b:	c7 44 24 04 b4 79 c1 	movl   $0x8c179b4,0x4(%esp)
 829b322:	08 
 829b323:	89 04 24             	mov    %eax,(%esp)
 829b326:	e8 f5 ae e1 ff       	call   80b6220 <_ZN9CRijndael10InitializeEPKciS1_iiii>
 829b32b:	c7 04 24 7c 04 00 00 	movl   $0x47c,(%esp)
 829b332:	e8 19 91 48 00       	call   8724450 <_Znwj>
 829b337:	89 c3                	mov    %eax,%ebx
 829b339:	89 d8                	mov    %ebx,%eax
 829b33b:	89 04 24             	mov    %eax,(%esp)
 829b33e:	e8 69 ad e1 ff       	call   80b60ac <_ZN9CRijndaelC1Ev>
 829b343:	eb 18                	jmp    829b35d <_ZN10GlobalData4InitEv+0x13bd>
 829b345:	89 d6                	mov    %edx,%esi
 829b347:	89 c7                	mov    %eax,%edi
 829b349:	89 1c 24             	mov    %ebx,(%esp)
 829b34c:	e8 9f 91 48 00       	call   87244f0 <_ZdlPv>
 829b351:	89 f8                	mov    %edi,%eax
 829b353:	89 f2                	mov    %esi,%edx
 829b355:	89 04 24             	mov    %eax,(%esp)
 829b358:	e8 f3 83 84 00       	call   8ae3750 <_Unwind_Resume>
 829b35d:	89 d8                	mov    %ebx,%eax
 829b35f:	a3 64 be 40 09       	mov    %eax,0x940be64
 829b364:	a1 64 be 40 09       	mov    0x940be64,%eax
 829b369:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 829b370:	00 
 829b371:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 829b378:	00 
 829b379:	c7 44 24 14 10 00 00 	movl   $0x10,0x14(%esp)
 829b380:	00 
 829b381:	c7 44 24 10 10 00 00 	movl   $0x10,0x10(%esp)
 829b388:	00 
 829b389:	c7 44 24 0c 20 2f b2 	movl   $0x8b22f20,0xc(%esp)
 829b390:	08 
 829b391:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 829b398:	00 
 829b399:	c7 44 24 04 c5 79 c1 	movl   $0x8c179c5,0x4(%esp)
 829b3a0:	08 
 829b3a1:	89 04 24             	mov    %eax,(%esp)
 829b3a4:	e8 77 ae e1 ff       	call   80b6220 <_ZN9CRijndael10InitializeEPKciS1_iiii>
 829b3a9:	c7 04 24 7c 04 00 00 	movl   $0x47c,(%esp)
 829b3b0:	e8 9b 90 48 00       	call   8724450 <_Znwj>
 829b3b5:	89 c3                	mov    %eax,%ebx
 829b3b7:	89 d8                	mov    %ebx,%eax
 829b3b9:	89 04 24             	mov    %eax,(%esp)
 829b3bc:	e8 eb ac e1 ff       	call   80b60ac <_ZN9CRijndaelC1Ev>
 829b3c1:	eb 18                	jmp    829b3db <_ZN10GlobalData4InitEv+0x143b>
 829b3c3:	89 d6                	mov    %edx,%esi
 829b3c5:	89 c7                	mov    %eax,%edi
 829b3c7:	89 1c 24             	mov    %ebx,(%esp)
 829b3ca:	e8 21 91 48 00       	call   87244f0 <_ZdlPv>
 829b3cf:	89 f8                	mov    %edi,%eax
 829b3d1:	89 f2                	mov    %esi,%edx
 829b3d3:	89 04 24             	mov    %eax,(%esp)
 829b3d6:	e8 75 83 84 00       	call   8ae3750 <_Unwind_Resume>
 829b3db:	89 d8                	mov    %ebx,%eax
 829b3dd:	a3 68 be 40 09       	mov    %eax,0x940be68
 829b3e2:	a1 68 be 40 09       	mov    0x940be68,%eax
 829b3e7:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 829b3ee:	00 
 829b3ef:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 829b3f6:	00 
 829b3f7:	c7 44 24 14 10 00 00 	movl   $0x10,0x14(%esp)
 829b3fe:	00 
 829b3ff:	c7 44 24 10 10 00 00 	movl   $0x10,0x10(%esp)
 829b406:	00 
 829b407:	c7 44 24 0c 20 2f b2 	movl   $0x8b22f20,0xc(%esp)
 829b40e:	08 
 829b40f:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 829b416:	00 
 829b417:	c7 44 24 04 d6 79 c1 	movl   $0x8c179d6,0x4(%esp)
 829b41e:	08 
 829b41f:	89 04 24             	mov    %eax,(%esp)
 829b422:	e8 f9 ad e1 ff       	call   80b6220 <_ZN9CRijndael10InitializeEPKciS1_iiii>
 829b427:	c7 04 24 48 00 00 00 	movl   $0x48,(%esp)
 829b42e:	e8 1d 90 48 00       	call   8724450 <_Znwj>
 829b433:	89 c3                	mov    %eax,%ebx
 829b435:	89 d8                	mov    %ebx,%eax
 829b437:	89 04 24             	mov    %eax,(%esp)
 829b43a:	e8 b5 7e e2 ff       	call   80c32f4 <_ZN4CTEAC1Ev>
 829b43f:	eb 18                	jmp    829b459 <_ZN10GlobalData4InitEv+0x14b9>
 829b441:	89 d6                	mov    %edx,%esi
 829b443:	89 c7                	mov    %eax,%edi
 829b445:	89 1c 24             	mov    %ebx,(%esp)
 829b448:	e8 a3 90 48 00       	call   87244f0 <_ZdlPv>
 829b44d:	89 f8                	mov    %edi,%eax
 829b44f:	89 f2                	mov    %esi,%edx
 829b451:	89 04 24             	mov    %eax,(%esp)
 829b454:	e8 f7 82 84 00       	call   8ae3750 <_Unwind_Resume>
 829b459:	89 d8                	mov    %ebx,%eax
 829b45b:	a3 00 f7 41 09       	mov    %eax,0x941f700
 829b460:	a1 00 f7 41 09       	mov    0x941f700,%eax
 829b465:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 829b46c:	00 
 829b46d:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 829b474:	00 
 829b475:	c7 44 24 0c 68 33 b2 	movl   $0x8b23368,0xc(%esp)
 829b47c:	08 
 829b47d:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 829b484:	00 
 829b485:	c7 44 24 04 e7 79 c1 	movl   $0x8c179e7,0x4(%esp)
 829b48c:	08 
 829b48d:	89 04 24             	mov    %eax,(%esp)
 829b490:	e8 07 7f e2 ff       	call   80c339c <_ZN4CTEA10InitializeEPKciS1_ii>
 829b495:	c7 04 24 48 00 00 00 	movl   $0x48,(%esp)
 829b49c:	e8 af 8f 48 00       	call   8724450 <_Znwj>
 829b4a1:	89 c3                	mov    %eax,%ebx
 829b4a3:	89 d8                	mov    %ebx,%eax
 829b4a5:	89 04 24             	mov    %eax,(%esp)
 829b4a8:	e8 47 7e e2 ff       	call   80c32f4 <_ZN4CTEAC1Ev>
 829b4ad:	eb 18                	jmp    829b4c7 <_ZN10GlobalData4InitEv+0x1527>
 829b4af:	89 d6                	mov    %edx,%esi
 829b4b1:	89 c7                	mov    %eax,%edi
 829b4b3:	89 1c 24             	mov    %ebx,(%esp)
 829b4b6:	e8 35 90 48 00       	call   87244f0 <_ZdlPv>
 829b4bb:	89 f8                	mov    %edi,%eax
 829b4bd:	89 f2                	mov    %esi,%edx
 829b4bf:	89 04 24             	mov    %eax,(%esp)
 829b4c2:	e8 89 82 84 00       	call   8ae3750 <_Unwind_Resume>
 829b4c7:	89 d8                	mov    %ebx,%eax
 829b4c9:	a3 04 f7 41 09       	mov    %eax,0x941f704
 829b4ce:	a1 04 f7 41 09       	mov    0x941f704,%eax
 829b4d3:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 829b4da:	00 
 829b4db:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 829b4e2:	00 
 829b4e3:	c7 44 24 0c 68 33 b2 	movl   $0x8b23368,0xc(%esp)
 829b4ea:	08 
 829b4eb:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 829b4f2:	00 
 829b4f3:	c7 44 24 04 f8 79 c1 	movl   $0x8c179f8,0x4(%esp)
 829b4fa:	08 
 829b4fb:	89 04 24             	mov    %eax,(%esp)
 829b4fe:	e8 99 7e e2 ff       	call   80c339c <_ZN4CTEA10InitializeEPKciS1_ii>
 829b503:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829b50a:	08 
 829b50b:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 829b512:	e8 39 a6 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829b517:	89 c3                	mov    %eax,%ebx
 829b519:	89 d8                	mov    %ebx,%eax
 829b51b:	85 c0                	test   %eax,%eax
 829b51d:	74 0e                	je     829b52d <_ZN10GlobalData4InitEv+0x158d>
 829b51f:	89 d8                	mov    %ebx,%eax
 829b521:	89 04 24             	mov    %eax,(%esp)
 829b524:	e8 9b bc 00 00       	call   82a71c4 <_ZN8WongWork15CLogGameChannelC1Ev>
 829b529:	89 d8                	mov    %ebx,%eax
 829b52b:	eb 02                	jmp    829b52f <_ZN10GlobalData4InitEv+0x158f>
 829b52d:	89 d8                	mov    %ebx,%eax
 829b52f:	a3 40 f7 41 09       	mov    %eax,0x941f740
 829b534:	a1 40 f7 41 09       	mov    0x941f740,%eax
 829b539:	89 04 24             	mov    %eax,(%esp)
 829b53c:	e8 a9 4e 2b 00       	call   85503ea <_ZN8WongWork15CLogGameChannel13StartLogTimerEv>
 829b541:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829b548:	08 
 829b549:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 829b550:	e8 fb a5 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829b555:	89 c3                	mov    %eax,%ebx
 829b557:	89 d8                	mov    %ebx,%eax
 829b559:	85 c0                	test   %eax,%eax
 829b55b:	74 30                	je     829b58d <_ZN10GlobalData4InitEv+0x15ed>
 829b55d:	89 d8                	mov    %ebx,%eax
 829b55f:	89 04 24             	mov    %eax,(%esp)
 829b562:	e8 51 4d 08 00       	call   83202b8 <_ZN8WongWork9CCeraShopC1Ev>
 829b567:	eb 20                	jmp    829b589 <_ZN10GlobalData4InitEv+0x15e9>
 829b569:	89 d6                	mov    %edx,%esi
 829b56b:	89 c7                	mov    %eax,%edi
 829b56d:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829b574:	08 
 829b575:	89 1c 24             	mov    %ebx,(%esp)
 829b578:	e8 63 92 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829b57d:	89 f8                	mov    %edi,%eax
 829b57f:	89 f2                	mov    %esi,%edx
 829b581:	89 04 24             	mov    %eax,(%esp)
 829b584:	e8 c7 81 84 00       	call   8ae3750 <_Unwind_Resume>
 829b589:	89 d8                	mov    %ebx,%eax
 829b58b:	eb 02                	jmp    829b58f <_ZN10GlobalData4InitEv+0x15ef>
 829b58d:	89 d8                	mov    %ebx,%eax
 829b58f:	a3 44 f7 41 09       	mov    %eax,0x941f744
 829b594:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829b59b:	08 
 829b59c:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 829b5a3:	e8 a8 a5 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829b5a8:	89 c3                	mov    %eax,%ebx
 829b5aa:	89 d8                	mov    %ebx,%eax
 829b5ac:	85 c0                	test   %eax,%eax
 829b5ae:	74 30                	je     829b5e0 <_ZN10GlobalData4InitEv+0x1640>
 829b5b0:	89 d8                	mov    %ebx,%eax
 829b5b2:	89 04 24             	mov    %eax,(%esp)
 829b5b5:	e8 2a 0e 2b 00       	call   854c3e4 <_ZN18ItemVendingMachineC1Ev>
 829b5ba:	eb 20                	jmp    829b5dc <_ZN10GlobalData4InitEv+0x163c>
 829b5bc:	89 d6                	mov    %edx,%esi
 829b5be:	89 c7                	mov    %eax,%edi
 829b5c0:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829b5c7:	08 
 829b5c8:	89 1c 24             	mov    %ebx,(%esp)
 829b5cb:	e8 10 92 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829b5d0:	89 f8                	mov    %edi,%eax
 829b5d2:	89 f2                	mov    %esi,%edx
 829b5d4:	89 04 24             	mov    %eax,(%esp)
 829b5d7:	e8 74 81 84 00       	call   8ae3750 <_Unwind_Resume>
 829b5dc:	89 d8                	mov    %ebx,%eax
 829b5de:	eb 02                	jmp    829b5e2 <_ZN10GlobalData4InitEv+0x1642>
 829b5e0:	89 d8                	mov    %ebx,%eax
 829b5e2:	a3 60 f7 41 09       	mov    %eax,0x941f760
 829b5e7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 829b5ee:	e8 5d 8e 48 00       	call   8724450 <_Znwj>
 829b5f3:	89 c3                	mov    %eax,%ebx
 829b5f5:	89 d8                	mov    %ebx,%eax
 829b5f7:	89 04 24             	mov    %eax,(%esp)
 829b5fa:	e8 bb f0 00 00       	call   82aa6ba <_ZN16Secu_DataControlC1Ev>
 829b5ff:	89 d8                	mov    %ebx,%eax
 829b601:	a3 c8 f7 41 09       	mov    %eax,0x941f7c8
 829b606:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 829b60d:	e8 3e 8e 48 00       	call   8724450 <_Znwj>
 829b612:	89 c3                	mov    %eax,%ebx
 829b614:	89 d8                	mov    %ebx,%eax
 829b616:	89 04 24             	mov    %eax,(%esp)
 829b619:	e8 b6 f0 00 00       	call   82aa6d4 <_ZN21CSecu_ProtectionFieldC1Ev>
 829b61e:	eb 18                	jmp    829b638 <_ZN10GlobalData4InitEv+0x1698>
 829b620:	89 d6                	mov    %edx,%esi
 829b622:	89 c7                	mov    %eax,%edi
 829b624:	89 1c 24             	mov    %ebx,(%esp)
 829b627:	e8 c4 8e 48 00       	call   87244f0 <_ZdlPv>
 829b62c:	89 f8                	mov    %edi,%eax
 829b62e:	89 f2                	mov    %esi,%edx
 829b630:	89 04 24             	mov    %eax,(%esp)
 829b633:	e8 18 81 84 00       	call   8ae3750 <_Unwind_Resume>
 829b638:	89 d8                	mov    %ebx,%eax
 829b63a:	a3 cc f7 41 09       	mov    %eax,0x941f7cc
 829b63f:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 829b646:	e8 05 8e 48 00       	call   8724450 <_Znwj>
 829b64b:	89 c3                	mov    %eax,%ebx
 829b64d:	89 d8                	mov    %ebx,%eax
 829b64f:	89 04 24             	mov    %eax,(%esp)
 829b652:	e8 31 a4 00 00       	call   82a5a88 <_ZN8WongWork25CAutoPunishRuleBlackIPMgrC1Ev>
 829b657:	eb 18                	jmp    829b671 <_ZN10GlobalData4InitEv+0x16d1>
 829b659:	89 d6                	mov    %edx,%esi
 829b65b:	89 c7                	mov    %eax,%edi
 829b65d:	89 1c 24             	mov    %ebx,(%esp)
 829b660:	e8 8b 8e 48 00       	call   87244f0 <_ZdlPv>
 829b665:	89 f8                	mov    %edi,%eax
 829b667:	89 f2                	mov    %esi,%edx
 829b669:	89 04 24             	mov    %eax,(%esp)
 829b66c:	e8 df 80 84 00       	call   8ae3750 <_Unwind_Resume>
 829b671:	89 d8                	mov    %ebx,%eax
 829b673:	a3 d0 f7 41 09       	mov    %eax,0x941f7d0
 829b678:	a1 d0 f7 41 09       	mov    0x941f7d0,%eax
 829b67d:	89 04 24             	mov    %eax,(%esp)
 829b680:	e8 ef a3 00 00       	call   82a5a74 <_ZN8WongWork25CAutoPunishRuleBlackIPMgr5resetEv>
 829b685:	c7 04 24 70 00 00 00 	movl   $0x70,(%esp)
 829b68c:	e8 bf 8d 48 00       	call   8724450 <_Znwj>
 829b691:	89 c3                	mov    %eax,%ebx
 829b693:	89 d8                	mov    %ebx,%eax
 829b695:	89 04 24             	mov    %eax,(%esp)
 829b698:	e8 7d a4 00 00       	call   82a5b1a <_ZN8WongWork26CAutoPunishRuleHackTypeMgrC1Ev>
 829b69d:	eb 18                	jmp    829b6b7 <_ZN10GlobalData4InitEv+0x1717>
 829b69f:	89 d6                	mov    %edx,%esi
 829b6a1:	89 c7                	mov    %eax,%edi
 829b6a3:	89 1c 24             	mov    %ebx,(%esp)
 829b6a6:	e8 45 8e 48 00       	call   87244f0 <_ZdlPv>
 829b6ab:	89 f8                	mov    %edi,%eax
 829b6ad:	89 f2                	mov    %esi,%edx
 829b6af:	89 04 24             	mov    %eax,(%esp)
 829b6b2:	e8 99 80 84 00       	call   8ae3750 <_Unwind_Resume>
 829b6b7:	89 d8                	mov    %ebx,%eax
 829b6b9:	a3 d4 f7 41 09       	mov    %eax,0x941f7d4
 829b6be:	a1 d4 f7 41 09       	mov    0x941f7d4,%eax
 829b6c3:	89 04 24             	mov    %eax,(%esp)
 829b6c6:	e8 d1 a3 00 00       	call   82a5a9c <_ZN8WongWork26CAutoPunishRuleHackTypeMgr5resetEv>
 829b6cb:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 829b6d2:	e8 79 8d 48 00       	call   8724450 <_Znwj>
 829b6d7:	89 c3                	mov    %eax,%ebx
 829b6d9:	89 d8                	mov    %ebx,%eax
 829b6db:	89 04 24             	mov    %eax,(%esp)
 829b6de:	e8 43 ae 00 00       	call   82a6526 <_ZN8WongWork15CBlackIPMonitorC1Ev>
 829b6e3:	eb 18                	jmp    829b6fd <_ZN10GlobalData4InitEv+0x175d>
 829b6e5:	89 d6                	mov    %edx,%esi
 829b6e7:	89 c7                	mov    %eax,%edi
 829b6e9:	89 1c 24             	mov    %ebx,(%esp)
 829b6ec:	e8 ff 8d 48 00       	call   87244f0 <_ZdlPv>
 829b6f1:	89 f8                	mov    %edi,%eax
 829b6f3:	89 f2                	mov    %esi,%edx
 829b6f5:	89 04 24             	mov    %eax,(%esp)
 829b6f8:	e8 53 80 84 00       	call   8ae3750 <_Unwind_Resume>
 829b6fd:	89 d8                	mov    %ebx,%eax
 829b6ff:	a3 d8 f7 41 09       	mov    %eax,0x941f7d8
 829b704:	a1 d8 f7 41 09       	mov    0x941f7d8,%eax
 829b709:	89 04 24             	mov    %eax,(%esp)
 829b70c:	e8 01 ae 00 00       	call   82a6512 <_ZN8WongWork15CBlackIPMonitor5resetEv>
 829b711:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 829b718:	e8 33 8d 48 00       	call   8724450 <_Znwj>
 829b71d:	89 c3                	mov    %eax,%ebx
 829b71f:	89 d8                	mov    %ebx,%eax
 829b721:	89 04 24             	mov    %eax,(%esp)
 829b724:	e8 bf 14 2e 00       	call   857cbe8 <_ZN12AcceptThreadC1Ev>
 829b729:	eb 18                	jmp    829b743 <_ZN10GlobalData4InitEv+0x17a3>
 829b72b:	89 d6                	mov    %edx,%esi
 829b72d:	89 c7                	mov    %eax,%edi
 829b72f:	89 1c 24             	mov    %ebx,(%esp)
 829b732:	e8 b9 8d 48 00       	call   87244f0 <_ZdlPv>
 829b737:	89 f8                	mov    %edi,%eax
 829b739:	89 f2                	mov    %esi,%edx
 829b73b:	89 04 24             	mov    %eax,(%esp)
 829b73e:	e8 0d 80 84 00       	call   8ae3750 <_Unwind_Resume>
 829b743:	89 d8                	mov    %ebx,%eax
 829b745:	a3 c4 bd 40 09       	mov    %eax,0x940bdc4
 829b74a:	a1 c4 bd 40 09       	mov    0x940bdc4,%eax
 829b74f:	85 c0                	test   %eax,%eax
 829b751:	75 2e                	jne    829b781 <_ZN10GlobalData4InitEv+0x17e1>
 829b753:	c7 44 24 04 0c 7a c1 	movl   $0x8c17a0c,0x4(%esp)
 829b75a:	08 
 829b75b:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829b762:	e8 99 1b 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829b767:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829b76e:	08 
 829b76f:	89 04 24             	mov    %eax,(%esp)
 829b772:	e8 e9 00 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829b777:	bb 00 00 00 00       	mov    $0x0,%ebx
 829b77c:	e9 aa 1c 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829b781:	c7 04 24 4c 01 00 00 	movl   $0x14c,(%esp)
 829b788:	e8 c3 8c 48 00       	call   8724450 <_Znwj>
 829b78d:	89 c3                	mov    %eax,%ebx
 829b78f:	89 d8                	mov    %ebx,%eax
 829b791:	89 04 24             	mov    %eax,(%esp)
 829b794:	e8 4d 8f 33 00       	call   85d46e6 <_ZN11RefPvpGradeC1Ev>
 829b799:	eb 18                	jmp    829b7b3 <_ZN10GlobalData4InitEv+0x1813>
 829b79b:	89 d6                	mov    %edx,%esi
 829b79d:	89 c7                	mov    %eax,%edi
 829b79f:	89 1c 24             	mov    %ebx,(%esp)
 829b7a2:	e8 49 8d 48 00       	call   87244f0 <_ZdlPv>
 829b7a7:	89 f8                	mov    %edi,%eax
 829b7a9:	89 f2                	mov    %esi,%edx
 829b7ab:	89 04 24             	mov    %eax,(%esp)
 829b7ae:	e8 9d 7f 84 00       	call   8ae3750 <_Unwind_Resume>
 829b7b3:	89 d8                	mov    %ebx,%eax
 829b7b5:	a3 3c f7 41 09       	mov    %eax,0x941f73c
 829b7ba:	a1 3c f7 41 09       	mov    0x941f73c,%eax
 829b7bf:	85 c0                	test   %eax,%eax
 829b7c1:	75 2e                	jne    829b7f1 <_ZN10GlobalData4InitEv+0x1851>
 829b7c3:	c7 44 24 04 44 7a c1 	movl   $0x8c17a44,0x4(%esp)
 829b7ca:	08 
 829b7cb:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829b7d2:	e8 29 1b 46 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829b7d7:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829b7de:	08 
 829b7df:	89 04 24             	mov    %eax,(%esp)
 829b7e2:	e8 79 00 46 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829b7e7:	bb 00 00 00 00       	mov    $0x0,%ebx
 829b7ec:	e9 3a 1c 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829b7f1:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829b7f8:	08 
 829b7f9:	c7 04 24 6c 01 00 00 	movl   $0x16c,(%esp)
 829b800:	e8 4b a3 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829b805:	89 c3                	mov    %eax,%ebx
 829b807:	89 d8                	mov    %ebx,%eax
 829b809:	85 c0                	test   %eax,%eax
 829b80b:	74 3a                	je     829b847 <_ZN10GlobalData4InitEv+0x18a7>
 829b80d:	8b 15 ac bd 40 09    	mov    0x940bdac,%edx
 829b813:	89 d8                	mov    %ebx,%eax
 829b815:	89 54 24 04          	mov    %edx,0x4(%esp)
 829b819:	89 04 24             	mov    %eax,(%esp)
 829b81c:	e8 db 0d e5 ff       	call   80ec5fc <_ZN12CDBConnectorC1EP5DBMgr>
 829b821:	eb 20                	jmp    829b843 <_ZN10GlobalData4InitEv+0x18a3>
 829b823:	89 d6                	mov    %edx,%esi
 829b825:	89 c7                	mov    %eax,%edi
 829b827:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829b82e:	08 
 829b82f:	89 1c 24             	mov    %ebx,(%esp)
 829b832:	e8 a9 8f 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829b837:	89 f8                	mov    %edi,%eax
 829b839:	89 f2                	mov    %esi,%edx
 829b83b:	89 04 24             	mov    %eax,(%esp)
 829b83e:	e8 0d 7f 84 00       	call   8ae3750 <_Unwind_Resume>
 829b843:	89 d8                	mov    %ebx,%eax
 829b845:	eb 02                	jmp    829b849 <_ZN10GlobalData4InitEv+0x18a9>
 829b847:	89 d8                	mov    %ebx,%eax
 829b849:	a3 48 f7 41 09       	mov    %eax,0x941f748
 829b84e:	a1 48 f7 41 09       	mov    0x941f748,%eax
 829b853:	85 c0                	test   %eax,%eax
 829b855:	75 0a                	jne    829b861 <_ZN10GlobalData4InitEv+0x18c1>
 829b857:	bb 00 00 00 00       	mov    $0x0,%ebx
 829b85c:	e9 ca 1b 00 00       	jmp    829d42b <_ZN10GlobalData4InitEv+0x348b>
 829b861:	e8 1b 09 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829b866:	83 c0 68             	add    $0x68,%eax
 829b869:	89 45 c8             	mov    %eax,-0x38(%ebp)
 829b86c:	e8 10 09 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829b871:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 829b877:	89 85 c0 fc ff ff    	mov    %eax,-0x340(%ebp)
 829b87d:	8d 85 a8 fc ff ff    	lea    -0x358(%ebp),%eax
 829b883:	89 04 24             	mov    %eax,(%esp)
 829b886:	e8 7b 7a 01 00       	call   82b3306 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPSt4lessIS0_ESaISt4pairIKS0_S1_EEEC1Ev>
 829b88b:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
 829b892:	eb 6f                	jmp    829b903 <_ZN10GlobalData4InitEv+0x1963>
 829b894:	8b 45 e0             	mov    -0x20(%ebp),%eax
 829b897:	89 85 f4 fc ff ff    	mov    %eax,-0x30c(%ebp)
 829b89d:	8d 85 ec fc ff ff    	lea    -0x314(%ebp),%eax
 829b8a3:	8d 95 c0 fc ff ff    	lea    -0x340(%ebp),%edx
 829b8a9:	89 54 24 08          	mov    %edx,0x8(%esp)
 829b8ad:	8d 95 f4 fc ff ff    	lea    -0x30c(%ebp),%edx
 829b8b3:	89 54 24 04          	mov    %edx,0x4(%esp)
 829b8b7:	89 04 24             	mov    %eax,(%esp)
 829b8ba:	e8 c0 7a 01 00       	call   82b337f <_ZSt9make_pairI18ENUM_DB_HANDLE_IDXR17ENUM_SERVER_GROUPESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 829b8bf:	83 ec 04             	sub    $0x4,%esp
 829b8c2:	8d 85 ec fc ff ff    	lea    -0x314(%ebp),%eax
 829b8c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 829b8cc:	8d 85 e4 fc ff ff    	lea    -0x31c(%ebp),%eax
 829b8d2:	89 04 24             	mov    %eax,(%esp)
 829b8d5:	e8 ec 7a 01 00       	call   82b33c6 <_ZNSt4pairIK18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPEC1IS0_S2_EEOS_IT_T0_E>
 829b8da:	8d 85 dc fc ff ff    	lea    -0x324(%ebp),%eax
 829b8e0:	8d 95 e4 fc ff ff    	lea    -0x31c(%ebp),%edx
 829b8e6:	89 54 24 08          	mov    %edx,0x8(%esp)
 829b8ea:	8d 95 a8 fc ff ff    	lea    -0x358(%ebp),%edx
 829b8f0:	89 54 24 04          	mov    %edx,0x4(%esp)
 829b8f4:	89 04 24             	mov    %eax,(%esp)
 829b8f7:	e8 fa 7a 01 00       	call   82b33f6 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPSt4lessIS0_ESaISt4pairIKS0_S1_EEE6insertERKS6_>
 829b8fc:	83 ec 04             	sub    $0x4,%esp
 829b8ff:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 829b903:	83 7d e0 0e          	cmpl   $0xe,-0x20(%ebp)
 829b907:	0f 9e c0             	setle  %al
 829b90a:	84 c0                	test   %al,%al
 829b90c:	75 86                	jne    829b894 <_ZN10GlobalData4InitEv+0x18f4>
 829b90e:	c7 85 f8 fc ff ff 00 	movl   $0x0,-0x308(%ebp)
 829b915:	00 00 00 
 829b918:	8d 85 f8 fc ff ff    	lea    -0x308(%ebp),%eax
 829b91e:	89 44 24 04          	mov    %eax,0x4(%esp)
 829b922:	8b 45 c8             	mov    -0x38(%ebp),%eax
 829b925:	89 04 24             	mov    %eax,(%esp)
 829b928:	e8 55 16 e5 ff       	call   80ecf82 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEEixERS5_>
 829b92d:	83 c0 42             	add    $0x42,%eax
 829b930:	89 85 88 f8 ff ff    	mov    %eax,-0x778(%ebp)
 829b936:	c7 85 fc fc ff ff 00 	movl   $0x0,-0x304(%ebp)
 829b93d:	00 00 00 
 829b940:	8d 85 fc fc ff ff    	lea    -0x304(%ebp),%eax
 829b946:	89 44 24 04          	mov    %eax,0x4(%esp)
 829b94a:	8b 45 c8             	mov    -0x38(%ebp),%eax
 829b94d:	89 04 24             	mov    %eax,(%esp)
 829b950:	e8 2d 16 e5 ff       	call   80ecf82 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEEixERS5_>
 829b955:	83 c0 18             	add    $0x18,%eax
 829b958:	89 c7                	mov    %eax,%edi
 829b95a:	c7 85 00 fd ff ff 00 	movl   $0x0,-0x300(%ebp)
 829b961:	00 00 00 
 829b964:	8d 85 00 fd ff ff    	lea    -0x300(%ebp),%eax
 829b96a:	89 44 24 04          	mov    %eax,0x4(%esp)
 829b96e:	8b 45 c8             	mov    -0x38(%ebp),%eax
 829b971:	89 04 24             	mov    %eax,(%esp)
 829b974:	e8 09 16 e5 ff       	call   80ecf82 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEEixERS5_>
 829b979:	8b 70 14             	mov    0x14(%eax),%esi
 829b97c:	c7 85 04 fd ff ff 00 	movl   $0x0,-0x2fc(%ebp)
 829b983:	00 00 00 
 829b986:	8d 85 04 fd ff ff    	lea    -0x2fc(%ebp),%eax
 829b98c:	89 44 24 04          	mov    %eax,0x4(%esp)
 829b990:	8b 45 c8             	mov    -0x38(%ebp),%eax
 829b993:	89 04 24             	mov    %eax,(%esp)
 829b996:	e8 e7 15 e5 ff       	call   80ecf82 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEEixERS5_>
 829b99b:	89 c3                	mov    %eax,%ebx
 829b99d:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 829b9a4:	00 
 829b9a5:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829b9ac:	00 
 829b9ad:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829b9b4:	00 
 829b9b5:	c7 44 24 08 0c 1b 00 	movl   $0x1b0c,0x8(%esp)
 829b9bc:	00 
 829b9bd:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829b9c4:	08 
 829b9c5:	8d 85 08 fd ff ff    	lea    -0x2f8(%ebp),%eax
 829b9cb:	89 04 24             	mov    %eax,(%esp)
 829b9ce:	e8 73 3d 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829b9d3:	8b 8d 88 f8 ff ff    	mov    -0x778(%ebp),%ecx
 829b9d9:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 829b9dd:	89 7c 24 10          	mov    %edi,0x10(%esp)
 829b9e1:	89 74 24 0c          	mov    %esi,0xc(%esp)
 829b9e5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 829b9e9:	c7 44 24 04 74 7a c1 	movl   $0x8c17a74,0x4(%esp)
 829b9f0:	08 
 829b9f1:	8d 85 08 fd ff ff    	lea    -0x2f8(%ebp),%eax
 829b9f7:	89 04 24             	mov    %eax,(%esp)
 829b9fa:	e8 89 3d 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829b9ff:	c7 85 18 fd ff ff 00 	movl   $0x0,-0x2e8(%ebp)
 829ba06:	00 00 00 
 829ba09:	8d 85 18 fd ff ff    	lea    -0x2e8(%ebp),%eax
 829ba0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 829ba13:	8b 45 c8             	mov    -0x38(%ebp),%eax
 829ba16:	89 04 24             	mov    %eax,(%esp)
 829ba19:	e8 64 15 e5 ff       	call   80ecf82 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEEixERS5_>
 829ba1e:	8b 15 48 f7 41 09    	mov    0x941f748,%edx
 829ba24:	89 44 24 04          	mov    %eax,0x4(%esp)
 829ba28:	89 14 24             	mov    %edx,(%esp)
 829ba2b:	e8 f0 0b e5 ff       	call   80ec620 <_ZN12CDBConnector4InitER12STDBConnInfo>
 829ba30:	83 f0 01             	xor    $0x1,%eax
 829ba33:	84 c0                	test   %al,%al
 829ba35:	74 56                	je     829ba8d <_ZN10GlobalData4InitEv+0x1aed>
 829ba37:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829ba3e:	00 
 829ba3f:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829ba46:	00 
 829ba47:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829ba4e:	00 
 829ba4f:	c7 44 24 08 0f 1b 00 	movl   $0x1b0f,0x8(%esp)
 829ba56:	00 
 829ba57:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829ba5e:	08 
 829ba5f:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 829ba65:	89 04 24             	mov    %eax,(%esp)
 829ba68:	e8 d9 3c 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829ba6d:	c7 44 24 04 9f 7a c1 	movl   $0x8c17a9f,0x4(%esp)
 829ba74:	08 
 829ba75:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 829ba7b:	89 04 24             	mov    %eax,(%esp)
 829ba7e:	e8 05 3d 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829ba83:	bb 00 00 00 00       	mov    $0x0,%ebx
 829ba88:	e9 90 19 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829ba8d:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829ba94:	00 
 829ba95:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 829ba9c:	00 
 829ba9d:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829baa4:	00 
 829baa5:	c7 44 24 08 12 1b 00 	movl   $0x1b12,0x8(%esp)
 829baac:	00 
 829baad:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829bab4:	08 
 829bab5:	8d 85 2c fd ff ff    	lea    -0x2d4(%ebp),%eax
 829babb:	89 04 24             	mov    %eax,(%esp)
 829babe:	e8 83 3c 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829bac3:	c7 44 24 04 b8 7a c1 	movl   $0x8c17ab8,0x4(%esp)
 829baca:	08 
 829bacb:	8d 85 2c fd ff ff    	lea    -0x2d4(%ebp),%eax
 829bad1:	89 04 24             	mov    %eax,(%esp)
 829bad4:	e8 af 3c 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829bad9:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 829bae0:	00 
 829bae1:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829bae8:	00 
 829bae9:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829baf0:	00 
 829baf1:	c7 44 24 08 14 1b 00 	movl   $0x1b14,0x8(%esp)
 829baf8:	00 
 829baf9:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829bb00:	08 
 829bb01:	8d 85 3c fd ff ff    	lea    -0x2c4(%ebp),%eax
 829bb07:	89 04 24             	mov    %eax,(%esp)
 829bb0a:	e8 37 3c 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829bb0f:	c7 44 24 04 c0 7a c1 	movl   $0x8c17ac0,0x4(%esp)
 829bb16:	08 
 829bb17:	8d 85 3c fd ff ff    	lea    -0x2c4(%ebp),%eax
 829bb1d:	89 04 24             	mov    %eax,(%esp)
 829bb20:	e8 63 3c 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829bb25:	a1 48 f7 41 09       	mov    0x941f748,%eax
 829bb2a:	8b 55 c8             	mov    -0x38(%ebp),%edx
 829bb2d:	89 54 24 08          	mov    %edx,0x8(%esp)
 829bb31:	8d 95 a8 fc ff ff    	lea    -0x358(%ebp),%edx
 829bb37:	89 54 24 04          	mov    %edx,0x4(%esp)
 829bb3b:	89 04 24             	mov    %eax,(%esp)
 829bb3e:	e8 87 0e e5 ff       	call   80ec9ca <_ZN12CDBConnector11GetConnInfoERSt3mapI18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPSt4lessIS1_ESaISt4pairIKS1_S2_EEERS0_IS1_12STDBConnInfoS4_SaIS5_IS6_SB_EEE>
 829bb43:	83 f0 01             	xor    $0x1,%eax
 829bb46:	84 c0                	test   %al,%al
 829bb48:	74 56                	je     829bba0 <_ZN10GlobalData4InitEv+0x1c00>
 829bb4a:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829bb51:	00 
 829bb52:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829bb59:	00 
 829bb5a:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829bb61:	00 
 829bb62:	c7 44 24 08 17 1b 00 	movl   $0x1b17,0x8(%esp)
 829bb69:	00 
 829bb6a:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829bb71:	08 
 829bb72:	8d 85 4c fd ff ff    	lea    -0x2b4(%ebp),%eax
 829bb78:	89 04 24             	mov    %eax,(%esp)
 829bb7b:	e8 c6 3b 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829bb80:	c7 44 24 04 e4 7a c1 	movl   $0x8c17ae4,0x4(%esp)
 829bb87:	08 
 829bb88:	8d 85 4c fd ff ff    	lea    -0x2b4(%ebp),%eax
 829bb8e:	89 04 24             	mov    %eax,(%esp)
 829bb91:	e8 f2 3b 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829bb96:	bb 00 00 00 00       	mov    $0x0,%ebx
 829bb9b:	e9 7d 18 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829bba0:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829bba7:	00 
 829bba8:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 829bbaf:	00 
 829bbb0:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829bbb7:	00 
 829bbb8:	c7 44 24 08 1a 1b 00 	movl   $0x1b1a,0x8(%esp)
 829bbbf:	00 
 829bbc0:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829bbc7:	08 
 829bbc8:	8d 85 5c fd ff ff    	lea    -0x2a4(%ebp),%eax
 829bbce:	89 04 24             	mov    %eax,(%esp)
 829bbd1:	e8 70 3b 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829bbd6:	c7 44 24 04 b8 7a c1 	movl   $0x8c17ab8,0x4(%esp)
 829bbdd:	08 
 829bbde:	8d 85 5c fd ff ff    	lea    -0x2a4(%ebp),%eax
 829bbe4:	89 04 24             	mov    %eax,(%esp)
 829bbe7:	e8 9c 3b 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829bbec:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829bbf3:	00 
 829bbf4:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829bbfb:	00 
 829bbfc:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829bc03:	00 
 829bc04:	c7 44 24 08 1c 1b 00 	movl   $0x1b1c,0x8(%esp)
 829bc0b:	00 
 829bc0c:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829bc13:	08 
 829bc14:	8d 85 6c fd ff ff    	lea    -0x294(%ebp),%eax
 829bc1a:	89 04 24             	mov    %eax,(%esp)
 829bc1d:	e8 24 3b 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829bc22:	c7 44 24 04 0c 7b c1 	movl   $0x8c17b0c,0x4(%esp)
 829bc29:	08 
 829bc2a:	8d 85 6c fd ff ff    	lea    -0x294(%ebp),%eax
 829bc30:	89 04 24             	mov    %eax,(%esp)
 829bc33:	e8 50 3b 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829bc38:	8b 45 c8             	mov    -0x38(%ebp),%eax
 829bc3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 829bc3f:	8d 85 7c fd ff ff    	lea    -0x284(%ebp),%eax
 829bc45:	89 04 24             	mov    %eax,(%esp)
 829bc48:	e8 d5 77 01 00       	call   82b3422 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEEC1ERKS8_>
 829bc4d:	a1 48 f7 41 09       	mov    0x941f748,%eax
 829bc52:	8d 95 7c fd ff ff    	lea    -0x284(%ebp),%edx
 829bc58:	89 54 24 04          	mov    %edx,0x4(%esp)
 829bc5c:	89 04 24             	mov    %eax,(%esp)
 829bc5f:	e8 fc 0a e5 ff       	call   80ec760 <_ZN12CDBConnector7ConnectESt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS1_ESaISt4pairIKS1_S2_EEE>
 829bc64:	89 c3                	mov    %eax,%ebx
 829bc66:	83 f3 01             	xor    $0x1,%ebx
 829bc69:	8d 85 7c fd ff ff    	lea    -0x284(%ebp),%eax
 829bc6f:	89 04 24             	mov    %eax,(%esp)
 829bc72:	e8 97 02 e3 ff       	call   80cbf0e <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 829bc77:	eb 1b                	jmp    829bc94 <_ZN10GlobalData4InitEv+0x1cf4>
 829bc79:	89 d3                	mov    %edx,%ebx
 829bc7b:	89 c6                	mov    %eax,%esi
 829bc7d:	8d 85 7c fd ff ff    	lea    -0x284(%ebp),%eax
 829bc83:	89 04 24             	mov    %eax,(%esp)
 829bc86:	e8 83 02 e3 ff       	call   80cbf0e <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 829bc8b:	89 f0                	mov    %esi,%eax
 829bc8d:	89 da                	mov    %ebx,%edx
 829bc8f:	e9 6b 17 00 00       	jmp    829d3ff <_ZN10GlobalData4InitEv+0x345f>
 829bc94:	84 db                	test   %bl,%bl
 829bc96:	74 56                	je     829bcee <_ZN10GlobalData4InitEv+0x1d4e>
 829bc98:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829bc9f:	00 
 829bca0:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829bca7:	00 
 829bca8:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829bcaf:	00 
 829bcb0:	c7 44 24 08 1f 1b 00 	movl   $0x1b1f,0x8(%esp)
 829bcb7:	00 
 829bcb8:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829bcbf:	08 
 829bcc0:	8d 85 94 fd ff ff    	lea    -0x26c(%ebp),%eax
 829bcc6:	89 04 24             	mov    %eax,(%esp)
 829bcc9:	e8 78 3a 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829bcce:	c7 44 24 04 1c 7b c1 	movl   $0x8c17b1c,0x4(%esp)
 829bcd5:	08 
 829bcd6:	8d 85 94 fd ff ff    	lea    -0x26c(%ebp),%eax
 829bcdc:	89 04 24             	mov    %eax,(%esp)
 829bcdf:	e8 a4 3a 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829bce4:	bb 00 00 00 00       	mov    $0x0,%ebx
 829bce9:	e9 2f 17 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829bcee:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829bcf5:	00 
 829bcf6:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829bcfd:	00 
 829bcfe:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829bd05:	00 
 829bd06:	c7 44 24 08 22 1b 00 	movl   $0x1b22,0x8(%esp)
 829bd0d:	00 
 829bd0e:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829bd15:	08 
 829bd16:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 829bd1c:	89 04 24             	mov    %eax,(%esp)
 829bd1f:	e8 22 3a 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829bd24:	c7 44 24 04 3b 7b c1 	movl   $0x8c17b3b,0x4(%esp)
 829bd2b:	08 
 829bd2c:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 829bd32:	89 04 24             	mov    %eax,(%esp)
 829bd35:	e8 4e 3a 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829bd3a:	c7 04 24 64 08 0d 00 	movl   $0xd0864,(%esp)
 829bd41:	e8 0a 87 48 00       	call   8724450 <_Znwj>
 829bd46:	89 c3                	mov    %eax,%ebx
 829bd48:	89 d8                	mov    %ebx,%eax
 829bd4a:	89 04 24             	mov    %eax,(%esp)
 829bd4d:	e8 0e b5 00 00       	call   82a7260 <_ZN8WongWork10CSimpleSSOC1Ev>
 829bd52:	eb 15                	jmp    829bd69 <_ZN10GlobalData4InitEv+0x1dc9>
 829bd54:	89 d6                	mov    %edx,%esi
 829bd56:	89 c7                	mov    %eax,%edi
 829bd58:	89 1c 24             	mov    %ebx,(%esp)
 829bd5b:	e8 90 87 48 00       	call   87244f0 <_ZdlPv>
 829bd60:	89 f8                	mov    %edi,%eax
 829bd62:	89 f2                	mov    %esi,%edx
 829bd64:	e9 96 16 00 00       	jmp    829d3ff <_ZN10GlobalData4InitEv+0x345f>
 829bd69:	89 d8                	mov    %ebx,%eax
 829bd6b:	a3 08 f7 41 09       	mov    %eax,0x941f708
 829bd70:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 829bd75:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 829bd7c:	00 
 829bd7d:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 829bd84:	00 
 829bd85:	89 04 24             	mov    %eax,(%esp)
 829bd88:	e8 b1 94 15 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 829bd8d:	8b 15 08 f7 41 09    	mov    0x941f708,%edx
 829bd93:	89 44 24 04          	mov    %eax,0x4(%esp)
 829bd97:	89 14 24             	mov    %edx,(%esp)
 829bd9a:	e8 5d 6a 36 00       	call   86027fc <_ZN8WongWork10CSimpleSSO4initEP5MySQL>
 829bd9f:	c7 04 24 88 04 00 00 	movl   $0x488,(%esp)
 829bda6:	e8 a5 86 48 00       	call   8724450 <_Znwj>
 829bdab:	89 c3                	mov    %eax,%ebx
 829bdad:	89 d8                	mov    %ebx,%eax
 829bdaf:	89 04 24             	mov    %eax,(%esp)
 829bdb2:	e8 9d a8 00 00       	call   82a6654 <_ZN8WongWork19CSecurityCardCenterC1Ev>
 829bdb7:	eb 15                	jmp    829bdce <_ZN10GlobalData4InitEv+0x1e2e>
 829bdb9:	89 d6                	mov    %edx,%esi
 829bdbb:	89 c7                	mov    %eax,%edi
 829bdbd:	89 1c 24             	mov    %ebx,(%esp)
 829bdc0:	e8 2b 87 48 00       	call   87244f0 <_ZdlPv>
 829bdc5:	89 f8                	mov    %edi,%eax
 829bdc7:	89 f2                	mov    %esi,%edx
 829bdc9:	e9 31 16 00 00       	jmp    829d3ff <_ZN10GlobalData4InitEv+0x345f>
 829bdce:	89 d8                	mov    %ebx,%eax
 829bdd0:	a3 0c f7 41 09       	mov    %eax,0x941f70c
 829bdd5:	a1 0c f7 41 09       	mov    0x941f70c,%eax
 829bdda:	89 04 24             	mov    %eax,(%esp)
 829bddd:	e8 7c 22 36 00       	call   85fe05e <_ZN8WongWork19CSecurityCardCenter4initEv>
 829bde2:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829bde9:	08 
 829bdea:	c7 04 24 54 00 00 00 	movl   $0x54,(%esp)
 829bdf1:	e8 5a 9d 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829bdf6:	89 c3                	mov    %eax,%ebx
 829bdf8:	89 d8                	mov    %ebx,%eax
 829bdfa:	85 c0                	test   %eax,%eax
 829bdfc:	74 0e                	je     829be0c <_ZN10GlobalData4InitEv+0x1e6c>
 829bdfe:	89 d8                	mov    %ebx,%eax
 829be00:	89 04 24             	mov    %eax,(%esp)
 829be03:	e8 88 b3 00 00       	call   82a7190 <_ZN8WongWork3IPG10CIPGHelperC1Ev>
 829be08:	89 d8                	mov    %ebx,%eax
 829be0a:	eb 02                	jmp    829be0e <_ZN10GlobalData4InitEv+0x1e6e>
 829be0c:	89 d8                	mov    %ebx,%eax
 829be0e:	89 45 cc             	mov    %eax,-0x34(%ebp)
 829be11:	c7 44 24 08 88 13 00 	movl   $0x1388,0x8(%esp)
 829be18:	00 
 829be19:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 829be20:	00 
 829be21:	8b 45 cc             	mov    -0x34(%ebp),%eax
 829be24:	89 04 24             	mov    %eax,(%esp)
 829be27:	e8 12 4d e6 ff       	call   8100b3e <_ZN8WongWork3IPG10CIPGHelper10InitializeEjj>
 829be2c:	c1 e8 1f             	shr    $0x1f,%eax
 829be2f:	84 c0                	test   %al,%al
 829be31:	74 2d                	je     829be60 <_ZN10GlobalData4InitEv+0x1ec0>
 829be33:	c7 04 24 52 7b c1 08 	movl   $0x8c17b52,(%esp)
 829be3a:	e8 31 27 de ff       	call   807e570 <puts@plt>
 829be3f:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 829be42:	85 db                	test   %ebx,%ebx
 829be44:	74 10                	je     829be56 <_ZN10GlobalData4InitEv+0x1eb6>
 829be46:	89 1c 24             	mov    %ebx,(%esp)
 829be49:	e8 68 b3 00 00       	call   82a71b6 <_ZN8WongWork3IPG10CIPGHelperD1Ev>
 829be4e:	89 1c 24             	mov    %ebx,(%esp)
 829be51:	e8 9a 86 48 00       	call   87244f0 <_ZdlPv>
 829be56:	bb 00 00 00 00       	mov    $0x0,%ebx
 829be5b:	e9 bd 15 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829be60:	8b 45 cc             	mov    -0x34(%ebp),%eax
 829be63:	a3 34 f7 41 09       	mov    %eax,0x941f734
 829be68:	e8 5e b5 00 00       	call   82a73cb <_ZN15CHumanCertifier4initEv>
 829be6d:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 829be74:	e8 d7 85 48 00       	call   8724450 <_Znwj>
 829be79:	89 c3                	mov    %eax,%ebx
 829be7b:	89 d8                	mov    %ebx,%eax
 829be7d:	89 04 24             	mov    %eax,(%esp)
 829be80:	e8 1f b5 00 00       	call   82a73a4 <_ZN8WongWork11CGMAccountsC1Ev>
 829be85:	eb 15                	jmp    829be9c <_ZN10GlobalData4InitEv+0x1efc>
 829be87:	89 d6                	mov    %edx,%esi
 829be89:	89 c7                	mov    %eax,%edi
 829be8b:	89 1c 24             	mov    %ebx,(%esp)
 829be8e:	e8 5d 86 48 00       	call   87244f0 <_ZdlPv>
 829be93:	89 f8                	mov    %edi,%eax
 829be95:	89 f2                	mov    %esi,%edx
 829be97:	e9 63 15 00 00       	jmp    829d3ff <_ZN10GlobalData4InitEv+0x345f>
 829be9c:	89 d8                	mov    %ebx,%eax
 829be9e:	a3 10 f7 41 09       	mov    %eax,0x941f710
 829bea3:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 829beaa:	00 
 829beab:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829beb2:	00 
 829beb3:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829beba:	00 
 829bebb:	c7 44 24 08 4d 1d 00 	movl   $0x1d4d,0x8(%esp)
 829bec2:	00 
 829bec3:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829beca:	08 
 829becb:	8d 85 b4 fd ff ff    	lea    -0x24c(%ebp),%eax
 829bed1:	89 04 24             	mov    %eax,(%esp)
 829bed4:	e8 6d 38 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829bed9:	c7 44 24 04 6a 7b c1 	movl   $0x8c17b6a,0x4(%esp)
 829bee0:	08 
 829bee1:	8d 85 b4 fd ff ff    	lea    -0x24c(%ebp),%eax
 829bee7:	89 04 24             	mov    %eax,(%esp)
 829beea:	e8 99 38 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829beef:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 829bef4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 829befb:	00 
 829befc:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 829bf03:	00 
 829bf04:	89 04 24             	mov    %eax,(%esp)
 829bf07:	e8 32 93 15 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 829bf0c:	89 04 24             	mov    %eax,(%esp)
 829bf0f:	e8 ee 82 00 00       	call   82a4202 <_ZN5MySQL15GetQueryCounterEv>
 829bf14:	89 04 24             	mov    %eax,(%esp)
 829bf17:	e8 6e 12 35 00       	call   85ed18a <_ZN13CQueryCounter14LoadQueryTableEv>
 829bf1c:	83 f0 01             	xor    $0x1,%eax
 829bf1f:	84 c0                	test   %al,%al
 829bf21:	74 56                	je     829bf79 <_ZN10GlobalData4InitEv+0x1fd9>
 829bf23:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829bf2a:	00 
 829bf2b:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829bf32:	00 
 829bf33:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829bf3a:	00 
 829bf3b:	c7 44 24 08 50 1d 00 	movl   $0x1d50,0x8(%esp)
 829bf42:	00 
 829bf43:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829bf4a:	08 
 829bf4b:	8d 85 c4 fd ff ff    	lea    -0x23c(%ebp),%eax
 829bf51:	89 04 24             	mov    %eax,(%esp)
 829bf54:	e8 ed 37 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829bf59:	c7 44 24 04 7f 7b c1 	movl   $0x8c17b7f,0x4(%esp)
 829bf60:	08 
 829bf61:	8d 85 c4 fd ff ff    	lea    -0x23c(%ebp),%eax
 829bf67:	89 04 24             	mov    %eax,(%esp)
 829bf6a:	e8 19 38 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829bf6f:	bb 00 00 00 00       	mov    $0x0,%ebx
 829bf74:	e9 a4 14 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829bf79:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 829bf7e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 829bf85:	00 
 829bf86:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 829bf8d:	00 
 829bf8e:	89 04 24             	mov    %eax,(%esp)
 829bf91:	e8 a8 92 15 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 829bf96:	89 04 24             	mov    %eax,(%esp)
 829bf99:	e8 64 82 00 00       	call   82a4202 <_ZN5MySQL15GetQueryCounterEv>
 829bf9e:	89 04 24             	mov    %eax,(%esp)
 829bfa1:	e8 e4 11 35 00       	call   85ed18a <_ZN13CQueryCounter14LoadQueryTableEv>
 829bfa6:	83 f0 01             	xor    $0x1,%eax
 829bfa9:	84 c0                	test   %al,%al
 829bfab:	74 56                	je     829c003 <_ZN10GlobalData4InitEv+0x2063>
 829bfad:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829bfb4:	00 
 829bfb5:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829bfbc:	00 
 829bfbd:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829bfc4:	00 
 829bfc5:	c7 44 24 08 55 1d 00 	movl   $0x1d55,0x8(%esp)
 829bfcc:	00 
 829bfcd:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829bfd4:	08 
 829bfd5:	8d 85 d4 fd ff ff    	lea    -0x22c(%ebp),%eax
 829bfdb:	89 04 24             	mov    %eax,(%esp)
 829bfde:	e8 63 37 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829bfe3:	c7 44 24 04 7f 7b c1 	movl   $0x8c17b7f,0x4(%esp)
 829bfea:	08 
 829bfeb:	8d 85 d4 fd ff ff    	lea    -0x22c(%ebp),%eax
 829bff1:	89 04 24             	mov    %eax,(%esp)
 829bff4:	e8 8f 37 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829bff9:	bb 00 00 00 00       	mov    $0x0,%ebx
 829bffe:	e9 1a 14 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829c003:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829c00a:	00 
 829c00b:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 829c012:	00 
 829c013:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829c01a:	00 
 829c01b:	c7 44 24 08 58 1d 00 	movl   $0x1d58,0x8(%esp)
 829c022:	00 
 829c023:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829c02a:	08 
 829c02b:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
 829c031:	89 04 24             	mov    %eax,(%esp)
 829c034:	e8 0d 37 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829c039:	c7 44 24 04 b8 7a c1 	movl   $0x8c17ab8,0x4(%esp)
 829c040:	08 
 829c041:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
 829c047:	89 04 24             	mov    %eax,(%esp)
 829c04a:	e8 39 37 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829c04f:	c7 45 d0 01 00 00 00 	movl   $0x1,-0x30(%ebp)
 829c056:	c6 45 d7 00          	movb   $0x0,-0x29(%ebp)
 829c05a:	e8 22 01 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829c05f:	89 04 24             	mov    %eax,(%esp)
 829c062:	e8 63 ea ea ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 829c067:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 829c06a:	0f 94 c0             	sete   %al
 829c06d:	84 c0                	test   %al,%al
 829c06f:	74 04                	je     829c075 <_ZN10GlobalData4InitEv+0x20d5>
 829c071:	c6 45 d7 01          	movb   $0x1,-0x29(%ebp)
 829c075:	0f b6 5d d7          	movzbl -0x29(%ebp),%ebx
 829c079:	e8 36 0b 38 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 829c07e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 829c082:	89 04 24             	mov    %eax,(%esp)
 829c085:	e8 66 b1 00 00       	call   82a71f0 <_ZN11sync_script11CSyncScript9SetEnableEb>
 829c08a:	e8 25 0b 38 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 829c08f:	89 04 24             	mov    %eax,(%esp)
 829c092:	e8 71 b1 00 00       	call   82a7208 <_ZN11sync_script11CSyncScript8IsEnableEv>
 829c097:	84 c0                	test   %al,%al
 829c099:	0f 84 ac 01 00 00    	je     829c24b <_ZN10GlobalData4InitEv+0x22ab>
 829c09f:	c7 85 f4 fd ff ff 05 	movl   $0x5,-0x20c(%ebp)
 829c0a6:	00 00 00 
 829c0a9:	e8 d3 00 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829c0ae:	8d 50 68             	lea    0x68(%eax),%edx
 829c0b1:	8d 85 f4 fd ff ff    	lea    -0x20c(%ebp),%eax
 829c0b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 829c0bb:	89 14 24             	mov    %edx,(%esp)
 829c0be:	e8 bf 0e e5 ff       	call   80ecf82 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEEixERS5_>
 829c0c3:	83 c0 2d             	add    $0x2d,%eax
 829c0c6:	89 85 8c f8 ff ff    	mov    %eax,-0x774(%ebp)
 829c0cc:	c7 85 f8 fd ff ff 05 	movl   $0x5,-0x208(%ebp)
 829c0d3:	00 00 00 
 829c0d6:	e8 a6 00 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829c0db:	8d 50 68             	lea    0x68(%eax),%edx
 829c0de:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
 829c0e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 829c0e8:	89 14 24             	mov    %edx,(%esp)
 829c0eb:	e8 92 0e e5 ff       	call   80ecf82 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEEixERS5_>
 829c0f0:	83 c0 18             	add    $0x18,%eax
 829c0f3:	89 c7                	mov    %eax,%edi
 829c0f5:	c7 85 fc fd ff ff 05 	movl   $0x5,-0x204(%ebp)
 829c0fc:	00 00 00 
 829c0ff:	e8 7d 00 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829c104:	8d 50 68             	lea    0x68(%eax),%edx
 829c107:	8d 85 fc fd ff ff    	lea    -0x204(%ebp),%eax
 829c10d:	89 44 24 04          	mov    %eax,0x4(%esp)
 829c111:	89 14 24             	mov    %edx,(%esp)
 829c114:	e8 69 0e e5 ff       	call   80ecf82 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEEixERS5_>
 829c119:	83 c0 42             	add    $0x42,%eax
 829c11c:	89 c6                	mov    %eax,%esi
 829c11e:	c7 85 00 fe ff ff 05 	movl   $0x5,-0x200(%ebp)
 829c125:	00 00 00 
 829c128:	e8 54 00 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829c12d:	8d 50 68             	lea    0x68(%eax),%edx
 829c130:	8d 85 00 fe ff ff    	lea    -0x200(%ebp),%eax
 829c136:	89 44 24 04          	mov    %eax,0x4(%esp)
 829c13a:	89 14 24             	mov    %edx,(%esp)
 829c13d:	e8 40 0e e5 ff       	call   80ecf82 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEEixERS5_>
 829c142:	8b 58 14             	mov    0x14(%eax),%ebx
 829c145:	c7 85 04 fe ff ff 05 	movl   $0x5,-0x1fc(%ebp)
 829c14c:	00 00 00 
 829c14f:	e8 2d 00 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829c154:	8d 50 68             	lea    0x68(%eax),%edx
 829c157:	8d 85 04 fe ff ff    	lea    -0x1fc(%ebp),%eax
 829c15d:	89 44 24 04          	mov    %eax,0x4(%esp)
 829c161:	89 14 24             	mov    %edx,(%esp)
 829c164:	e8 19 0e e5 ff       	call   80ecf82 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEEixERS5_>
 829c169:	89 c2                	mov    %eax,%edx
 829c16b:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 829c170:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 829c177:	00 
 829c178:	8b 8d 8c f8 ff ff    	mov    -0x774(%ebp),%ecx
 829c17e:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 829c182:	89 7c 24 14          	mov    %edi,0x14(%esp)
 829c186:	89 74 24 10          	mov    %esi,0x10(%esp)
 829c18a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 829c18e:	89 54 24 08          	mov    %edx,0x8(%esp)
 829c192:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 829c199:	00 
 829c19a:	89 04 24             	mov    %eax,(%esp)
 829c19d:	e8 8c 8b 15 00       	call   83f4d2e <_ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcjS1_S1_S1_17ENUM_SERVER_GROUP>
 829c1a2:	83 f0 01             	xor    $0x1,%eax
 829c1a5:	84 c0                	test   %al,%al
 829c1a7:	74 56                	je     829c1ff <_ZN10GlobalData4InitEv+0x225f>
 829c1a9:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829c1b0:	00 
 829c1b1:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829c1b8:	00 
 829c1b9:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829c1c0:	00 
 829c1c1:	c7 44 24 08 8d 1d 00 	movl   $0x1d8d,0x8(%esp)
 829c1c8:	00 
 829c1c9:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829c1d0:	08 
 829c1d1:	8d 85 08 fe ff ff    	lea    -0x1f8(%ebp),%eax
 829c1d7:	89 04 24             	mov    %eax,(%esp)
 829c1da:	e8 67 35 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829c1df:	c7 44 24 04 98 7b c1 	movl   $0x8c17b98,0x4(%esp)
 829c1e6:	08 
 829c1e7:	8d 85 08 fe ff ff    	lea    -0x1f8(%ebp),%eax
 829c1ed:	89 04 24             	mov    %eax,(%esp)
 829c1f0:	e8 93 35 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829c1f5:	bb 00 00 00 00       	mov    $0x0,%ebx
 829c1fa:	e9 1e 12 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829c1ff:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829c206:	00 
 829c207:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829c20e:	00 
 829c20f:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829c216:	00 
 829c217:	c7 44 24 08 90 1d 00 	movl   $0x1d90,0x8(%esp)
 829c21e:	00 
 829c21f:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829c226:	08 
 829c227:	8d 85 18 fe ff ff    	lea    -0x1e8(%ebp),%eax
 829c22d:	89 04 24             	mov    %eax,(%esp)
 829c230:	e8 11 35 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829c235:	c7 44 24 04 b1 7b c1 	movl   $0x8c17bb1,0x4(%esp)
 829c23c:	08 
 829c23d:	8d 85 18 fe ff ff    	lea    -0x1e8(%ebp),%eax
 829c243:	89 04 24             	mov    %eax,(%esp)
 829c246:	e8 3d 35 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829c24b:	e8 b1 8d f9 ff       	call   8235001 <_ZN16CSyncSlangFilter11GetInstanceEv>
 829c250:	89 04 24             	mov    %eax,(%esp)
 829c253:	e8 6e 1c 39 00       	call   862dec6 <_ZN16CSyncSlangFilter16AddSlangListNameEv>
 829c258:	83 f0 01             	xor    $0x1,%eax
 829c25b:	84 c0                	test   %al,%al
 829c25d:	75 14                	jne    829c273 <_ZN10GlobalData4InitEv+0x22d3>
 829c25f:	e8 9d 8d f9 ff       	call   8235001 <_ZN16CSyncSlangFilter11GetInstanceEv>
 829c264:	89 04 24             	mov    %eax,(%esp)
 829c267:	e8 60 1a 39 00       	call   862dccc <_ZN16CSyncSlangFilter12AddSlangListEv>
 829c26c:	83 f0 01             	xor    $0x1,%eax
 829c26f:	84 c0                	test   %al,%al
 829c271:	74 07                	je     829c27a <_ZN10GlobalData4InitEv+0x22da>
 829c273:	b8 01 00 00 00       	mov    $0x1,%eax
 829c278:	eb 05                	jmp    829c27f <_ZN10GlobalData4InitEv+0x22df>
 829c27a:	b8 00 00 00 00       	mov    $0x0,%eax
 829c27f:	84 c0                	test   %al,%al
 829c281:	74 56                	je     829c2d9 <_ZN10GlobalData4InitEv+0x2339>
 829c283:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829c28a:	00 
 829c28b:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829c292:	00 
 829c293:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829c29a:	00 
 829c29b:	c7 44 24 08 9f 1d 00 	movl   $0x1d9f,0x8(%esp)
 829c2a2:	00 
 829c2a3:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829c2aa:	08 
 829c2ab:	8d 85 28 fe ff ff    	lea    -0x1d8(%ebp),%eax
 829c2b1:	89 04 24             	mov    %eax,(%esp)
 829c2b4:	e8 8d 34 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829c2b9:	c7 44 24 04 c8 7b c1 	movl   $0x8c17bc8,0x4(%esp)
 829c2c0:	08 
 829c2c1:	8d 85 28 fe ff ff    	lea    -0x1d8(%ebp),%eax
 829c2c7:	89 04 24             	mov    %eax,(%esp)
 829c2ca:	e8 b9 34 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829c2cf:	bb 00 00 00 00       	mov    $0x0,%ebx
 829c2d4:	e9 44 11 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829c2d9:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829c2e0:	08 
 829c2e1:	c7 04 24 9c 02 00 00 	movl   $0x29c,(%esp)
 829c2e8:	e8 63 98 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829c2ed:	89 c3                	mov    %eax,%ebx
 829c2ef:	89 d8                	mov    %ebx,%eax
 829c2f1:	85 c0                	test   %eax,%eax
 829c2f3:	74 2d                	je     829c322 <_ZN10GlobalData4InitEv+0x2382>
 829c2f5:	89 d8                	mov    %ebx,%eax
 829c2f7:	89 04 24             	mov    %eax,(%esp)
 829c2fa:	e8 e5 89 e7 ff       	call   8114ce4 <_ZN13CEventManagerC1Ev>
 829c2ff:	eb 1d                	jmp    829c31e <_ZN10GlobalData4InitEv+0x237e>
 829c301:	89 d6                	mov    %edx,%esi
 829c303:	89 c7                	mov    %eax,%edi
 829c305:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829c30c:	08 
 829c30d:	89 1c 24             	mov    %ebx,(%esp)
 829c310:	e8 cb 84 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829c315:	89 f8                	mov    %edi,%eax
 829c317:	89 f2                	mov    %esi,%edx
 829c319:	e9 e1 10 00 00       	jmp    829d3ff <_ZN10GlobalData4InitEv+0x345f>
 829c31e:	89 d8                	mov    %ebx,%eax
 829c320:	eb 02                	jmp    829c324 <_ZN10GlobalData4InitEv+0x2384>
 829c322:	89 d8                	mov    %ebx,%eax
 829c324:	a3 30 f7 41 09       	mov    %eax,0x941f730
 829c329:	a1 30 f7 41 09       	mov    0x941f730,%eax
 829c32e:	85 c0                	test   %eax,%eax
 829c330:	75 56                	jne    829c388 <_ZN10GlobalData4InitEv+0x23e8>
 829c332:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829c339:	00 
 829c33a:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829c341:	00 
 829c342:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829c349:	00 
 829c34a:	c7 44 24 08 a8 1d 00 	movl   $0x1da8,0x8(%esp)
 829c351:	00 
 829c352:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829c359:	08 
 829c35a:	8d 85 38 fe ff ff    	lea    -0x1c8(%ebp),%eax
 829c360:	89 04 24             	mov    %eax,(%esp)
 829c363:	e8 de 33 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829c368:	c7 44 24 04 e4 7b c1 	movl   $0x8c17be4,0x4(%esp)
 829c36f:	08 
 829c370:	8d 85 38 fe ff ff    	lea    -0x1c8(%ebp),%eax
 829c376:	89 04 24             	mov    %eax,(%esp)
 829c379:	e8 0a 34 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829c37e:	bb 00 00 00 00       	mov    $0x0,%ebx
 829c383:	e9 95 10 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829c388:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829c38f:	00 
 829c390:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829c397:	00 
 829c398:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829c39f:	00 
 829c3a0:	c7 44 24 08 c6 1d 00 	movl   $0x1dc6,0x8(%esp)
 829c3a7:	00 
 829c3a8:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829c3af:	08 
 829c3b0:	8d 85 48 fe ff ff    	lea    -0x1b8(%ebp),%eax
 829c3b6:	89 04 24             	mov    %eax,(%esp)
 829c3b9:	e8 88 33 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829c3be:	c7 44 24 04 08 7c c1 	movl   $0x8c17c08,0x4(%esp)
 829c3c5:	08 
 829c3c6:	8d 85 48 fe ff ff    	lea    -0x1b8(%ebp),%eax
 829c3cc:	89 04 24             	mov    %eax,(%esp)
 829c3cf:	e8 b4 33 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829c3d4:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829c3db:	08 
 829c3dc:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 829c3e3:	e8 68 97 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829c3e8:	89 c3                	mov    %eax,%ebx
 829c3ea:	89 d8                	mov    %ebx,%eax
 829c3ec:	85 c0                	test   %eax,%eax
 829c3ee:	74 2d                	je     829c41d <_ZN10GlobalData4InitEv+0x247d>
 829c3f0:	89 d8                	mov    %ebx,%eax
 829c3f2:	89 04 24             	mov    %eax,(%esp)
 829c3f5:	e8 18 d5 ff ff       	call   8299912 <_ZN7Gm_ListC1Ev>
 829c3fa:	eb 1d                	jmp    829c419 <_ZN10GlobalData4InitEv+0x2479>
 829c3fc:	89 d6                	mov    %edx,%esi
 829c3fe:	89 c7                	mov    %eax,%edi
 829c400:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829c407:	08 
 829c408:	89 1c 24             	mov    %ebx,(%esp)
 829c40b:	e8 d0 83 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829c410:	89 f8                	mov    %edi,%eax
 829c412:	89 f2                	mov    %esi,%edx
 829c414:	e9 e6 0f 00 00       	jmp    829d3ff <_ZN10GlobalData4InitEv+0x345f>
 829c419:	89 d8                	mov    %ebx,%eax
 829c41b:	eb 02                	jmp    829c41f <_ZN10GlobalData4InitEv+0x247f>
 829c41d:	89 d8                	mov    %ebx,%eax
 829c41f:	a3 70 f7 41 09       	mov    %eax,0x941f770
 829c424:	a1 70 f7 41 09       	mov    0x941f770,%eax
 829c429:	85 c0                	test   %eax,%eax
 829c42b:	75 56                	jne    829c483 <_ZN10GlobalData4InitEv+0x24e3>
 829c42d:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829c434:	00 
 829c435:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829c43c:	00 
 829c43d:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829c444:	00 
 829c445:	c7 44 24 08 cd 1d 00 	movl   $0x1dcd,0x8(%esp)
 829c44c:	00 
 829c44d:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829c454:	08 
 829c455:	8d 85 58 fe ff ff    	lea    -0x1a8(%ebp),%eax
 829c45b:	89 04 24             	mov    %eax,(%esp)
 829c45e:	e8 e3 32 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829c463:	c7 44 24 04 20 7c c1 	movl   $0x8c17c20,0x4(%esp)
 829c46a:	08 
 829c46b:	8d 85 58 fe ff ff    	lea    -0x1a8(%ebp),%eax
 829c471:	89 04 24             	mov    %eax,(%esp)
 829c474:	e8 0f 33 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829c479:	bb 00 00 00 00       	mov    $0x0,%ebx
 829c47e:	e9 9a 0f 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829c483:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829c48a:	08 
 829c48b:	c7 04 24 3c 00 00 00 	movl   $0x3c,(%esp)
 829c492:	e8 b9 96 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829c497:	89 c3                	mov    %eax,%ebx
 829c499:	89 d8                	mov    %ebx,%eax
 829c49b:	85 c0                	test   %eax,%eax
 829c49d:	74 2d                	je     829c4cc <_ZN10GlobalData4InitEv+0x252c>
 829c49f:	89 d8                	mov    %ebx,%eax
 829c4a1:	89 04 24             	mov    %eax,(%esp)
 829c4a4:	e8 27 cc ff ff       	call   82990d0 <_ZN11CGM_ManagerC1Ev>
 829c4a9:	eb 1d                	jmp    829c4c8 <_ZN10GlobalData4InitEv+0x2528>
 829c4ab:	89 d6                	mov    %edx,%esi
 829c4ad:	89 c7                	mov    %eax,%edi
 829c4af:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829c4b6:	08 
 829c4b7:	89 1c 24             	mov    %ebx,(%esp)
 829c4ba:	e8 21 83 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829c4bf:	89 f8                	mov    %edi,%eax
 829c4c1:	89 f2                	mov    %esi,%edx
 829c4c3:	e9 37 0f 00 00       	jmp    829d3ff <_ZN10GlobalData4InitEv+0x345f>
 829c4c8:	89 d8                	mov    %ebx,%eax
 829c4ca:	eb 02                	jmp    829c4ce <_ZN10GlobalData4InitEv+0x252e>
 829c4cc:	89 d8                	mov    %ebx,%eax
 829c4ce:	a3 5c f7 41 09       	mov    %eax,0x941f75c
 829c4d3:	a1 5c f7 41 09       	mov    0x941f75c,%eax
 829c4d8:	85 c0                	test   %eax,%eax
 829c4da:	75 56                	jne    829c532 <_ZN10GlobalData4InitEv+0x2592>
 829c4dc:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829c4e3:	00 
 829c4e4:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829c4eb:	00 
 829c4ec:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829c4f3:	00 
 829c4f4:	c7 44 24 08 d6 1d 00 	movl   $0x1dd6,0x8(%esp)
 829c4fb:	00 
 829c4fc:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829c503:	08 
 829c504:	8d 85 68 fe ff ff    	lea    -0x198(%ebp),%eax
 829c50a:	89 04 24             	mov    %eax,(%esp)
 829c50d:	e8 34 32 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829c512:	c7 44 24 04 48 7c c1 	movl   $0x8c17c48,0x4(%esp)
 829c519:	08 
 829c51a:	8d 85 68 fe ff ff    	lea    -0x198(%ebp),%eax
 829c520:	89 04 24             	mov    %eax,(%esp)
 829c523:	e8 60 32 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829c528:	bb 00 00 00 00       	mov    $0x0,%ebx
 829c52d:	e9 eb 0e 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829c532:	e8 03 ac 00 00       	call   82a713a <_Z8G_Cipherv>
 829c537:	89 04 24             	mov    %eax,(%esp)
 829c53a:	e8 95 b0 df ff       	call   80975d4 <_ZNK6Cipher17GetTotalKeyLengthEv>
 829c53f:	89 45 d8             	mov    %eax,-0x28(%ebp)
 829c542:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 829c549:	eb 24                	jmp    829c56f <_ZN10GlobalData4InitEv+0x25cf>
 829c54b:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 829c54e:	e8 4d 17 de ff       	call   807dca0 <rand@plt>
 829c553:	89 c2                	mov    %eax,%edx
 829c555:	c1 fa 1f             	sar    $0x1f,%edx
 829c558:	c1 ea 18             	shr    $0x18,%edx
 829c55b:	01 d0                	add    %edx,%eax
 829c55d:	25 ff 00 00 00       	and    $0xff,%eax
 829c562:	29 d0                	sub    %edx,%eax
 829c564:	88 84 1d 9c f8 ff ff 	mov    %al,-0x764(%ebp,%ebx,1)
 829c56b:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 829c56f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 829c572:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 829c575:	0f 9c c0             	setl   %al
 829c578:	84 c0                	test   %al,%al
 829c57a:	75 cf                	jne    829c54b <_ZN10GlobalData4InitEv+0x25ab>
 829c57c:	e8 b9 ab 00 00       	call   82a713a <_Z8G_Cipherv>
 829c581:	8b 55 d8             	mov    -0x28(%ebp),%edx
 829c584:	89 54 24 08          	mov    %edx,0x8(%esp)
 829c588:	8d 95 9c f8 ff ff    	lea    -0x764(%ebp),%edx
 829c58e:	89 54 24 04          	mov    %edx,0x4(%esp)
 829c592:	89 04 24             	mov    %eax,(%esp)
 829c595:	e8 6c ad df ff       	call   8097306 <_ZN6Cipher10InitializeEPKhi>
 829c59a:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829c5a1:	08 
 829c5a2:	c7 04 24 30 00 00 00 	movl   $0x30,(%esp)
 829c5a9:	e8 a2 95 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829c5ae:	89 c3                	mov    %eax,%ebx
 829c5b0:	89 d8                	mov    %ebx,%eax
 829c5b2:	85 c0                	test   %eax,%eax
 829c5b4:	74 4d                	je     829c603 <_ZN10GlobalData4InitEv+0x2663>
 829c5b6:	89 9d 90 f8 ff ff    	mov    %ebx,-0x770(%ebp)
 829c5bc:	8b b5 90 f8 ff ff    	mov    -0x770(%ebp),%esi
 829c5c2:	b8 00 00 00 00       	mov    $0x0,%eax
 829c5c7:	ba 0c 00 00 00       	mov    $0xc,%edx
 829c5cc:	89 f7                	mov    %esi,%edi
 829c5ce:	89 d1                	mov    %edx,%ecx
 829c5d0:	f3 ab                	rep stos %eax,%es:(%edi)
 829c5d2:	8b 85 90 f8 ff ff    	mov    -0x770(%ebp),%eax
 829c5d8:	89 04 24             	mov    %eax,(%esp)
 829c5db:	e8 be e2 00 00       	call   82aa89e <_ZN13CStatisticMgrC1Ev>
 829c5e0:	eb 1d                	jmp    829c5ff <_ZN10GlobalData4InitEv+0x265f>
 829c5e2:	89 d6                	mov    %edx,%esi
 829c5e4:	89 c7                	mov    %eax,%edi
 829c5e6:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829c5ed:	08 
 829c5ee:	89 1c 24             	mov    %ebx,(%esp)
 829c5f1:	e8 ea 81 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829c5f6:	89 f8                	mov    %edi,%eax
 829c5f8:	89 f2                	mov    %esi,%edx
 829c5fa:	e9 00 0e 00 00       	jmp    829d3ff <_ZN10GlobalData4InitEv+0x345f>
 829c5ff:	89 d8                	mov    %ebx,%eax
 829c601:	eb 02                	jmp    829c605 <_ZN10GlobalData4InitEv+0x2665>
 829c603:	89 d8                	mov    %ebx,%eax
 829c605:	a3 64 f7 41 09       	mov    %eax,0x941f764
 829c60a:	a1 64 f7 41 09       	mov    0x941f764,%eax
 829c60f:	85 c0                	test   %eax,%eax
 829c611:	75 56                	jne    829c669 <_ZN10GlobalData4InitEv+0x26c9>
 829c613:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829c61a:	00 
 829c61b:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829c622:	00 
 829c623:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829c62a:	00 
 829c62b:	c7 44 24 08 f7 1d 00 	movl   $0x1df7,0x8(%esp)
 829c632:	00 
 829c633:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829c63a:	08 
 829c63b:	8d 85 78 fe ff ff    	lea    -0x188(%ebp),%eax
 829c641:	89 04 24             	mov    %eax,(%esp)
 829c644:	e8 fd 30 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829c649:	c7 44 24 04 70 7c c1 	movl   $0x8c17c70,0x4(%esp)
 829c650:	08 
 829c651:	8d 85 78 fe ff ff    	lea    -0x188(%ebp),%eax
 829c657:	89 04 24             	mov    %eax,(%esp)
 829c65a:	e8 29 31 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829c65f:	bb 00 00 00 00       	mov    $0x0,%ebx
 829c664:	e9 b4 0d 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829c669:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829c670:	08 
 829c671:	c7 04 24 2c 03 00 00 	movl   $0x32c,(%esp)
 829c678:	e8 d3 94 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829c67d:	89 c3                	mov    %eax,%ebx
 829c67f:	89 d8                	mov    %ebx,%eax
 829c681:	85 c0                	test   %eax,%eax
 829c683:	74 2d                	je     829c6b2 <_ZN10GlobalData4InitEv+0x2712>
 829c685:	89 d8                	mov    %ebx,%eax
 829c687:	89 04 24             	mov    %eax,(%esp)
 829c68a:	e8 51 fd 07 00       	call   831c3e0 <_ZN18break_away_prevent23CBreakAwayPreventSystemC1Ev>
 829c68f:	eb 1d                	jmp    829c6ae <_ZN10GlobalData4InitEv+0x270e>
 829c691:	89 d6                	mov    %edx,%esi
 829c693:	89 c7                	mov    %eax,%edi
 829c695:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829c69c:	08 
 829c69d:	89 1c 24             	mov    %ebx,(%esp)
 829c6a0:	e8 3b 81 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829c6a5:	89 f8                	mov    %edi,%eax
 829c6a7:	89 f2                	mov    %esi,%edx
 829c6a9:	e9 51 0d 00 00       	jmp    829d3ff <_ZN10GlobalData4InitEv+0x345f>
 829c6ae:	89 d8                	mov    %ebx,%eax
 829c6b0:	eb 02                	jmp    829c6b4 <_ZN10GlobalData4InitEv+0x2714>
 829c6b2:	89 d8                	mov    %ebx,%eax
 829c6b4:	a3 6c f7 41 09       	mov    %eax,0x941f76c
 829c6b9:	a1 6c f7 41 09       	mov    0x941f76c,%eax
 829c6be:	85 c0                	test   %eax,%eax
 829c6c0:	75 56                	jne    829c718 <_ZN10GlobalData4InitEv+0x2778>
 829c6c2:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829c6c9:	00 
 829c6ca:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829c6d1:	00 
 829c6d2:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829c6d9:	00 
 829c6da:	c7 44 24 08 fe 1d 00 	movl   $0x1dfe,0x8(%esp)
 829c6e1:	00 
 829c6e2:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829c6e9:	08 
 829c6ea:	8d 85 88 fe ff ff    	lea    -0x178(%ebp),%eax
 829c6f0:	89 04 24             	mov    %eax,(%esp)
 829c6f3:	e8 4e 30 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829c6f8:	c7 44 24 04 9c 7c c1 	movl   $0x8c17c9c,0x4(%esp)
 829c6ff:	08 
 829c700:	8d 85 88 fe ff ff    	lea    -0x178(%ebp),%eax
 829c706:	89 04 24             	mov    %eax,(%esp)
 829c709:	e8 7a 30 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829c70e:	bb 00 00 00 00       	mov    $0x0,%ebx
 829c713:	e9 05 0d 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829c718:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829c71f:	08 
 829c720:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 829c727:	e8 24 94 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829c72c:	89 c3                	mov    %eax,%ebx
 829c72e:	89 d8                	mov    %ebx,%eax
 829c730:	85 c0                	test   %eax,%eax
 829c732:	74 2d                	je     829c761 <_ZN10GlobalData4InitEv+0x27c1>
 829c734:	89 d8                	mov    %ebx,%eax
 829c736:	89 04 24             	mov    %eax,(%esp)
 829c739:	e8 c4 19 20 00       	call   849e102 <_ZN10expert_job13CExpertJobMgrC1Ev>
 829c73e:	eb 1d                	jmp    829c75d <_ZN10GlobalData4InitEv+0x27bd>
 829c740:	89 d6                	mov    %edx,%esi
 829c742:	89 c7                	mov    %eax,%edi
 829c744:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829c74b:	08 
 829c74c:	89 1c 24             	mov    %ebx,(%esp)
 829c74f:	e8 8c 80 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829c754:	89 f8                	mov    %edi,%eax
 829c756:	89 f2                	mov    %esi,%edx
 829c758:	e9 a2 0c 00 00       	jmp    829d3ff <_ZN10GlobalData4InitEv+0x345f>
 829c75d:	89 d8                	mov    %ebx,%eax
 829c75f:	eb 02                	jmp    829c763 <_ZN10GlobalData4InitEv+0x27c3>
 829c761:	89 d8                	mov    %ebx,%eax
 829c763:	a3 68 f7 41 09       	mov    %eax,0x941f768
 829c768:	a1 68 f7 41 09       	mov    0x941f768,%eax
 829c76d:	85 c0                	test   %eax,%eax
 829c76f:	75 56                	jne    829c7c7 <_ZN10GlobalData4InitEv+0x2827>
 829c771:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829c778:	00 
 829c779:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829c780:	00 
 829c781:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829c788:	00 
 829c789:	c7 44 24 08 05 1e 00 	movl   $0x1e05,0x8(%esp)
 829c790:	00 
 829c791:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829c798:	08 
 829c799:	8d 85 98 fe ff ff    	lea    -0x168(%ebp),%eax
 829c79f:	89 04 24             	mov    %eax,(%esp)
 829c7a2:	e8 9f 2f 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829c7a7:	c7 44 24 04 c8 7c c1 	movl   $0x8c17cc8,0x4(%esp)
 829c7ae:	08 
 829c7af:	8d 85 98 fe ff ff    	lea    -0x168(%ebp),%eax
 829c7b5:	89 04 24             	mov    %eax,(%esp)
 829c7b8:	e8 cb 2f 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829c7bd:	bb 00 00 00 00       	mov    $0x0,%ebx
 829c7c2:	e9 56 0c 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829c7c7:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829c7ce:	08 
 829c7cf:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 829c7d6:	e8 75 93 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829c7db:	89 c3                	mov    %eax,%ebx
 829c7dd:	89 d8                	mov    %ebx,%eax
 829c7df:	85 c0                	test   %eax,%eax
 829c7e1:	74 2d                	je     829c810 <_ZN10GlobalData4InitEv+0x2870>
 829c7e3:	89 d8                	mov    %ebx,%eax
 829c7e5:	89 04 24             	mov    %eax,(%esp)
 829c7e8:	e8 43 a7 41 00       	call   86b6f30 <_ZN14village_object17CVillageObjectMgrC1Ev>
 829c7ed:	eb 1d                	jmp    829c80c <_ZN10GlobalData4InitEv+0x286c>
 829c7ef:	89 d6                	mov    %edx,%esi
 829c7f1:	89 c7                	mov    %eax,%edi
 829c7f3:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829c7fa:	08 
 829c7fb:	89 1c 24             	mov    %ebx,(%esp)
 829c7fe:	e8 dd 7f 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829c803:	89 f8                	mov    %edi,%eax
 829c805:	89 f2                	mov    %esi,%edx
 829c807:	e9 f3 0b 00 00       	jmp    829d3ff <_ZN10GlobalData4InitEv+0x345f>
 829c80c:	89 d8                	mov    %ebx,%eax
 829c80e:	eb 02                	jmp    829c812 <_ZN10GlobalData4InitEv+0x2872>
 829c810:	89 d8                	mov    %ebx,%eax
 829c812:	a3 74 f7 41 09       	mov    %eax,0x941f774
 829c817:	a1 74 f7 41 09       	mov    0x941f774,%eax
 829c81c:	85 c0                	test   %eax,%eax
 829c81e:	75 56                	jne    829c876 <_ZN10GlobalData4InitEv+0x28d6>
 829c820:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829c827:	00 
 829c828:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829c82f:	00 
 829c830:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829c837:	00 
 829c838:	c7 44 24 08 0c 1e 00 	movl   $0x1e0c,0x8(%esp)
 829c83f:	00 
 829c840:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829c847:	08 
 829c848:	8d 85 a8 fe ff ff    	lea    -0x158(%ebp),%eax
 829c84e:	89 04 24             	mov    %eax,(%esp)
 829c851:	e8 f0 2e 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829c856:	c7 44 24 04 f4 7c c1 	movl   $0x8c17cf4,0x4(%esp)
 829c85d:	08 
 829c85e:	8d 85 a8 fe ff ff    	lea    -0x158(%ebp),%eax
 829c864:	89 04 24             	mov    %eax,(%esp)
 829c867:	e8 1c 2f 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829c86c:	bb 00 00 00 00       	mov    $0x0,%ebx
 829c871:	e9 a7 0b 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829c876:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829c87d:	08 
 829c87e:	c7 04 24 24 00 00 00 	movl   $0x24,(%esp)
 829c885:	e8 c6 92 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829c88a:	89 c3                	mov    %eax,%ebx
 829c88c:	89 d8                	mov    %ebx,%eax
 829c88e:	85 c0                	test   %eax,%eax
 829c890:	74 2d                	je     829c8bf <_ZN10GlobalData4InitEv+0x291f>
 829c892:	89 d8                	mov    %ebx,%eax
 829c894:	89 04 24             	mov    %eax,(%esp)
 829c897:	e8 b0 81 41 00       	call   86b4a4c <_ZN16village_attacked18CVillageMonsterMgrC1Ev>
 829c89c:	eb 1d                	jmp    829c8bb <_ZN10GlobalData4InitEv+0x291b>
 829c89e:	89 d6                	mov    %edx,%esi
 829c8a0:	89 c7                	mov    %eax,%edi
 829c8a2:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829c8a9:	08 
 829c8aa:	89 1c 24             	mov    %ebx,(%esp)
 829c8ad:	e8 2e 7f 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829c8b2:	89 f8                	mov    %edi,%eax
 829c8b4:	89 f2                	mov    %esi,%edx
 829c8b6:	e9 44 0b 00 00       	jmp    829d3ff <_ZN10GlobalData4InitEv+0x345f>
 829c8bb:	89 d8                	mov    %ebx,%eax
 829c8bd:	eb 02                	jmp    829c8c1 <_ZN10GlobalData4InitEv+0x2921>
 829c8bf:	89 d8                	mov    %ebx,%eax
 829c8c1:	a3 7c f7 41 09       	mov    %eax,0x941f77c
 829c8c6:	a1 7c f7 41 09       	mov    0x941f77c,%eax
 829c8cb:	85 c0                	test   %eax,%eax
 829c8cd:	75 56                	jne    829c925 <_ZN10GlobalData4InitEv+0x2985>
 829c8cf:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829c8d6:	00 
 829c8d7:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829c8de:	00 
 829c8df:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829c8e6:	00 
 829c8e7:	c7 44 24 08 13 1e 00 	movl   $0x1e13,0x8(%esp)
 829c8ee:	00 
 829c8ef:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829c8f6:	08 
 829c8f7:	8d 85 b8 fe ff ff    	lea    -0x148(%ebp),%eax
 829c8fd:	89 04 24             	mov    %eax,(%esp)
 829c900:	e8 41 2e 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829c905:	c7 44 24 04 24 7d c1 	movl   $0x8c17d24,0x4(%esp)
 829c90c:	08 
 829c90d:	8d 85 b8 fe ff ff    	lea    -0x148(%ebp),%eax
 829c913:	89 04 24             	mov    %eax,(%esp)
 829c916:	e8 6d 2e 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829c91b:	bb 00 00 00 00       	mov    $0x0,%ebx
 829c920:	e9 f8 0a 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829c925:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829c92c:	08 
 829c92d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 829c934:	e8 17 92 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829c939:	89 c3                	mov    %eax,%ebx
 829c93b:	89 d8                	mov    %ebx,%eax
 829c93d:	85 c0                	test   %eax,%eax
 829c93f:	74 2d                	je     829c96e <_ZN10GlobalData4InitEv+0x29ce>
 829c941:	89 d8                	mov    %ebx,%eax
 829c943:	89 04 24             	mov    %eax,(%esp)
 829c946:	e8 c9 36 fd ff       	call   8270014 <_ZN20InstanceRentalSystemC1Ev>
 829c94b:	eb 1d                	jmp    829c96a <_ZN10GlobalData4InitEv+0x29ca>
 829c94d:	89 d6                	mov    %edx,%esi
 829c94f:	89 c7                	mov    %eax,%edi
 829c951:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829c958:	08 
 829c959:	89 1c 24             	mov    %ebx,(%esp)
 829c95c:	e8 7f 7e 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829c961:	89 f8                	mov    %edi,%eax
 829c963:	89 f2                	mov    %esi,%edx
 829c965:	e9 95 0a 00 00       	jmp    829d3ff <_ZN10GlobalData4InitEv+0x345f>
 829c96a:	89 d8                	mov    %ebx,%eax
 829c96c:	eb 02                	jmp    829c970 <_ZN10GlobalData4InitEv+0x29d0>
 829c96e:	89 d8                	mov    %ebx,%eax
 829c970:	a3 38 f7 41 09       	mov    %eax,0x941f738
 829c975:	a1 38 f7 41 09       	mov    0x941f738,%eax
 829c97a:	85 c0                	test   %eax,%eax
 829c97c:	75 56                	jne    829c9d4 <_ZN10GlobalData4InitEv+0x2a34>
 829c97e:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829c985:	00 
 829c986:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829c98d:	00 
 829c98e:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829c995:	00 
 829c996:	c7 44 24 08 1b 1e 00 	movl   $0x1e1b,0x8(%esp)
 829c99d:	00 
 829c99e:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829c9a5:	08 
 829c9a6:	8d 85 c8 fe ff ff    	lea    -0x138(%ebp),%eax
 829c9ac:	89 04 24             	mov    %eax,(%esp)
 829c9af:	e8 92 2d 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829c9b4:	c7 44 24 04 54 7d c1 	movl   $0x8c17d54,0x4(%esp)
 829c9bb:	08 
 829c9bc:	8d 85 c8 fe ff ff    	lea    -0x138(%ebp),%eax
 829c9c2:	89 04 24             	mov    %eax,(%esp)
 829c9c5:	e8 be 2d 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829c9ca:	bb 00 00 00 00       	mov    $0x0,%ebx
 829c9cf:	e9 49 0a 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829c9d4:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829c9db:	08 
 829c9dc:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 829c9e3:	e8 68 91 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829c9e8:	89 c3                	mov    %eax,%ebx
 829c9ea:	89 d8                	mov    %ebx,%eax
 829c9ec:	85 c0                	test   %eax,%eax
 829c9ee:	74 0e                	je     829c9fe <_ZN10GlobalData4InitEv+0x2a5e>
 829c9f0:	89 d8                	mov    %ebx,%eax
 829c9f2:	89 04 24             	mov    %eax,(%esp)
 829c9f5:	e8 aa dc 00 00       	call   82aa6a4 <_ZN16village_attacked15CRevengeDungeonC1Ev>
 829c9fa:	89 d8                	mov    %ebx,%eax
 829c9fc:	eb 02                	jmp    829ca00 <_ZN10GlobalData4InitEv+0x2a60>
 829c9fe:	89 d8                	mov    %ebx,%eax
 829ca00:	a3 80 f7 41 09       	mov    %eax,0x941f780
 829ca05:	a1 80 f7 41 09       	mov    0x941f780,%eax
 829ca0a:	85 c0                	test   %eax,%eax
 829ca0c:	75 56                	jne    829ca64 <_ZN10GlobalData4InitEv+0x2ac4>
 829ca0e:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829ca15:	00 
 829ca16:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829ca1d:	00 
 829ca1e:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829ca25:	00 
 829ca26:	c7 44 24 08 24 1e 00 	movl   $0x1e24,0x8(%esp)
 829ca2d:	00 
 829ca2e:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829ca35:	08 
 829ca36:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 829ca3c:	89 04 24             	mov    %eax,(%esp)
 829ca3f:	e8 02 2d 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829ca44:	c7 44 24 04 84 7d c1 	movl   $0x8c17d84,0x4(%esp)
 829ca4b:	08 
 829ca4c:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 829ca52:	89 04 24             	mov    %eax,(%esp)
 829ca55:	e8 2e 2d 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829ca5a:	bb 00 00 00 00       	mov    $0x0,%ebx
 829ca5f:	e9 b9 09 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829ca64:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829ca6b:	08 
 829ca6c:	c7 04 24 e4 00 00 00 	movl   $0xe4,(%esp)
 829ca73:	e8 d8 90 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829ca78:	89 c3                	mov    %eax,%ebx
 829ca7a:	89 d8                	mov    %ebx,%eax
 829ca7c:	85 c0                	test   %eax,%eax
 829ca7e:	74 2d                	je     829caad <_ZN10GlobalData4InitEv+0x2b0d>
 829ca80:	89 d8                	mov    %ebx,%eax
 829ca82:	89 04 24             	mov    %eax,(%esp)
 829ca85:	e8 82 91 e8 ff       	call   8125c0c <_ZN21CDailyScheduleManagerC1Ev>
 829ca8a:	eb 1d                	jmp    829caa9 <_ZN10GlobalData4InitEv+0x2b09>
 829ca8c:	89 d6                	mov    %edx,%esi
 829ca8e:	89 c7                	mov    %eax,%edi
 829ca90:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829ca97:	08 
 829ca98:	89 1c 24             	mov    %ebx,(%esp)
 829ca9b:	e8 40 7d 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829caa0:	89 f8                	mov    %edi,%eax
 829caa2:	89 f2                	mov    %esi,%edx
 829caa4:	e9 56 09 00 00       	jmp    829d3ff <_ZN10GlobalData4InitEv+0x345f>
 829caa9:	89 d8                	mov    %ebx,%eax
 829caab:	eb 02                	jmp    829caaf <_ZN10GlobalData4InitEv+0x2b0f>
 829caad:	89 d8                	mov    %ebx,%eax
 829caaf:	a3 84 f7 41 09       	mov    %eax,0x941f784
 829cab4:	a1 84 f7 41 09       	mov    0x941f784,%eax
 829cab9:	85 c0                	test   %eax,%eax
 829cabb:	75 56                	jne    829cb13 <_ZN10GlobalData4InitEv+0x2b73>
 829cabd:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829cac4:	00 
 829cac5:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829cacc:	00 
 829cacd:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829cad4:	00 
 829cad5:	c7 44 24 08 2d 1e 00 	movl   $0x1e2d,0x8(%esp)
 829cadc:	00 
 829cadd:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829cae4:	08 
 829cae5:	8d 85 e8 fe ff ff    	lea    -0x118(%ebp),%eax
 829caeb:	89 04 24             	mov    %eax,(%esp)
 829caee:	e8 53 2c 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829caf3:	c7 44 24 04 b0 7d c1 	movl   $0x8c17db0,0x4(%esp)
 829cafa:	08 
 829cafb:	8d 85 e8 fe ff ff    	lea    -0x118(%ebp),%eax
 829cb01:	89 04 24             	mov    %eax,(%esp)
 829cb04:	e8 7f 2c 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829cb09:	bb 00 00 00 00       	mov    $0x0,%ebx
 829cb0e:	e9 0a 09 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829cb13:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829cb1a:	08 
 829cb1b:	c7 04 24 1c 00 00 00 	movl   $0x1c,(%esp)
 829cb22:	e8 29 90 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829cb27:	89 c3                	mov    %eax,%ebx
 829cb29:	89 d8                	mov    %ebx,%eax
 829cb2b:	85 c0                	test   %eax,%eax
 829cb2d:	74 2d                	je     829cb5c <_ZN10GlobalData4InitEv+0x2bbc>
 829cb2f:	89 d8                	mov    %ebx,%eax
 829cb31:	89 04 24             	mov    %eax,(%esp)
 829cb34:	e8 d3 ba 2e 00       	call   858860c <_ZN18online_preliminary25COnlinePreliminaryTeamMgrC1Ev>
 829cb39:	eb 1d                	jmp    829cb58 <_ZN10GlobalData4InitEv+0x2bb8>
 829cb3b:	89 d6                	mov    %edx,%esi
 829cb3d:	89 c7                	mov    %eax,%edi
 829cb3f:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829cb46:	08 
 829cb47:	89 1c 24             	mov    %ebx,(%esp)
 829cb4a:	e8 91 7c 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829cb4f:	89 f8                	mov    %edi,%eax
 829cb51:	89 f2                	mov    %esi,%edx
 829cb53:	e9 a7 08 00 00       	jmp    829d3ff <_ZN10GlobalData4InitEv+0x345f>
 829cb58:	89 d8                	mov    %ebx,%eax
 829cb5a:	eb 02                	jmp    829cb5e <_ZN10GlobalData4InitEv+0x2bbe>
 829cb5c:	89 d8                	mov    %ebx,%eax
 829cb5e:	a3 88 f7 41 09       	mov    %eax,0x941f788
 829cb63:	a1 88 f7 41 09       	mov    0x941f788,%eax
 829cb68:	85 c0                	test   %eax,%eax
 829cb6a:	75 56                	jne    829cbc2 <_ZN10GlobalData4InitEv+0x2c22>
 829cb6c:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829cb73:	00 
 829cb74:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829cb7b:	00 
 829cb7c:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829cb83:	00 
 829cb84:	c7 44 24 08 36 1e 00 	movl   $0x1e36,0x8(%esp)
 829cb8b:	00 
 829cb8c:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829cb93:	08 
 829cb94:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 829cb9a:	89 04 24             	mov    %eax,(%esp)
 829cb9d:	e8 a4 2b 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829cba2:	c7 44 24 04 e4 7d c1 	movl   $0x8c17de4,0x4(%esp)
 829cba9:	08 
 829cbaa:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 829cbb0:	89 04 24             	mov    %eax,(%esp)
 829cbb3:	e8 d0 2b 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829cbb8:	bb 00 00 00 00       	mov    $0x0,%ebx
 829cbbd:	e9 5b 08 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829cbc2:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829cbc9:	08 
 829cbca:	c7 04 24 40 00 00 00 	movl   $0x40,(%esp)
 829cbd1:	e8 7a 8f 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829cbd6:	89 c3                	mov    %eax,%ebx
 829cbd8:	89 d8                	mov    %ebx,%eax
 829cbda:	85 c0                	test   %eax,%eax
 829cbdc:	74 2d                	je     829cc0b <_ZN10GlobalData4InitEv+0x2c6b>
 829cbde:	89 d8                	mov    %ebx,%eax
 829cbe0:	89 04 24             	mov    %eax,(%esp)
 829cbe3:	e8 40 be 00 00       	call   82a8a28 <_ZN11game_master14CGameMasterMgrC1Ev>
 829cbe8:	eb 1d                	jmp    829cc07 <_ZN10GlobalData4InitEv+0x2c67>
 829cbea:	89 d6                	mov    %edx,%esi
 829cbec:	89 c7                	mov    %eax,%edi
 829cbee:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829cbf5:	08 
 829cbf6:	89 1c 24             	mov    %ebx,(%esp)
 829cbf9:	e8 e2 7b 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829cbfe:	89 f8                	mov    %edi,%eax
 829cc00:	89 f2                	mov    %esi,%edx
 829cc02:	e9 f8 07 00 00       	jmp    829d3ff <_ZN10GlobalData4InitEv+0x345f>
 829cc07:	89 d8                	mov    %ebx,%eax
 829cc09:	eb 02                	jmp    829cc0d <_ZN10GlobalData4InitEv+0x2c6d>
 829cc0b:	89 d8                	mov    %ebx,%eax
 829cc0d:	a3 78 f7 41 09       	mov    %eax,0x941f778
 829cc12:	a1 78 f7 41 09       	mov    0x941f778,%eax
 829cc17:	85 c0                	test   %eax,%eax
 829cc19:	75 56                	jne    829cc71 <_ZN10GlobalData4InitEv+0x2cd1>
 829cc1b:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829cc22:	00 
 829cc23:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829cc2a:	00 
 829cc2b:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829cc32:	00 
 829cc33:	c7 44 24 08 47 1e 00 	movl   $0x1e47,0x8(%esp)
 829cc3a:	00 
 829cc3b:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829cc42:	08 
 829cc43:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 829cc49:	89 04 24             	mov    %eax,(%esp)
 829cc4c:	e8 f5 2a 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829cc51:	c7 44 24 04 1c 7e c1 	movl   $0x8c17e1c,0x4(%esp)
 829cc58:	08 
 829cc59:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 829cc5f:	89 04 24             	mov    %eax,(%esp)
 829cc62:	e8 21 2b 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829cc67:	bb 00 00 00 00       	mov    $0x0,%ebx
 829cc6c:	e9 ac 07 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829cc71:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 829cc78:	e8 21 f0 e2 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 829cc7d:	89 04 24             	mov    %eax,(%esp)
 829cc80:	e8 6d a7 39 00       	call   86373f2 <_ZN19TimerUpdatePvPGrade15registNextTimerEl>
 829cc85:	e8 24 04 19 00       	call   842d0ae <_ZN29DB_ReloadAutoPunishRuleBackIP11makeRequestEv>
 829cc8a:	e8 81 09 19 00       	call   842d610 <_ZN31DB_ReloadAutoPunishRuleHackType11makeRequestEv>
 829cc8f:	e8 0c 23 19 00       	call   842efa0 <_ZN20DB_LoadCleanPadPoint11makeRequestEv>
 829cc94:	e8 e7 61 19 00       	call   8432e80 <_ZN17DB_BlackIPMonitor11makeRequestEv>
 829cc99:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 829cca0:	e8 ab 77 48 00       	call   8724450 <_Znwj>
 829cca5:	89 c3                	mov    %eax,%ebx
 829cca7:	89 d8                	mov    %ebx,%eax
 829cca9:	89 04 24             	mov    %eax,(%esp)
 829ccac:	e8 81 af 00 00       	call   82a7c32 <_ZN13CBusinessImplC1Ev>
 829ccb1:	89 d8                	mov    %ebx,%eax
 829ccb3:	a3 e0 f7 41 09       	mov    %eax,0x941f7e0
 829ccb8:	c7 04 24 47 7e c1 08 	movl   $0x8c17e47,(%esp)
 829ccbf:	e8 75 98 00 00       	call   82a6539 <_Z19CreateAntiServerObjPKc>
 829ccc4:	a3 e4 f7 41 09       	mov    %eax,0x941f7e4
 829ccc9:	a1 e4 f7 41 09       	mov    0x941f7e4,%eax
 829ccce:	85 c0                	test   %eax,%eax
 829ccd0:	75 46                	jne    829cd18 <_ZN10GlobalData4InitEv+0x2d78>
 829ccd2:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 829ccd9:	00 
 829ccda:	c7 44 24 08 b0 1e 00 	movl   $0x1eb0,0x8(%esp)
 829cce1:	00 
 829cce2:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829cce9:	08 
 829ccea:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 829ccf0:	89 04 24             	mov    %eax,(%esp)
 829ccf3:	e8 20 2a 2b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 829ccf8:	c7 44 24 04 4a 7e c1 	movl   $0x8c17e4a,0x4(%esp)
 829ccff:	08 
 829cd00:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 829cd06:	89 04 24             	mov    %eax,(%esp)
 829cd09:	e8 7a 2a 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829cd0e:	bb 00 00 00 00       	mov    $0x0,%ebx
 829cd13:	e9 05 07 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829cd18:	c7 85 a4 fc ff ff 00 	movl   $0x0,-0x35c(%ebp)
 829cd1f:	00 00 00 
 829cd22:	e8 5a f4 e2 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829cd27:	89 04 24             	mov    %eax,(%esp)
 829cd2a:	e8 e7 77 f9 ff       	call   8234516 <_ZNK12CEnvironment18getProcessSequenceEv>
 829cd2f:	89 44 24 08          	mov    %eax,0x8(%esp)
 829cd33:	c7 44 24 04 5e 7e c1 	movl   $0x8c17e5e,0x4(%esp)
 829cd3a:	08 
 829cd3b:	8d 85 a4 fc ff ff    	lea    -0x35c(%ebp),%eax
 829cd41:	89 04 24             	mov    %eax,(%esp)
 829cd44:	e8 f7 16 de ff       	call   807e440 <sprintf@plt>
 829cd49:	a1 e4 f7 41 09       	mov    0x941f7e4,%eax
 829cd4e:	8b 00                	mov    (%eax),%eax
 829cd50:	8b 18                	mov    (%eax),%ebx
 829cd52:	a1 e0 f7 41 09       	mov    0x941f7e0,%eax
 829cd57:	89 c2                	mov    %eax,%edx
 829cd59:	a1 e4 f7 41 09       	mov    0x941f7e4,%eax
 829cd5e:	8d 8d a4 fc ff ff    	lea    -0x35c(%ebp),%ecx
 829cd64:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 829cd68:	89 54 24 04          	mov    %edx,0x4(%esp)
 829cd6c:	89 04 24             	mov    %eax,(%esp)
 829cd6f:	ff d3                	call   *%ebx
 829cd71:	85 c0                	test   %eax,%eax
 829cd73:	0f 95 c0             	setne  %al
 829cd76:	84 c0                	test   %al,%al
 829cd78:	eb 46                	jmp    829cdc0 <_ZN10GlobalData4InitEv+0x2e20>
 829cd7a:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 829cd81:	00 
 829cd82:	c7 44 24 08 b7 1e 00 	movl   $0x1eb7,0x8(%esp)
 829cd89:	00 
 829cd8a:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829cd91:	08 
 829cd92:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 829cd98:	89 04 24             	mov    %eax,(%esp)
 829cd9b:	e8 78 29 2b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 829cda0:	c7 44 24 04 61 7e c1 	movl   $0x8c17e61,0x4(%esp)
 829cda7:	08 
 829cda8:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 829cdae:	89 04 24             	mov    %eax,(%esp)
 829cdb1:	e8 d2 29 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829cdb6:	bb 00 00 00 00       	mov    $0x0,%ebx
 829cdbb:	e9 5d 06 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829cdc0:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829cdc7:	08 
 829cdc8:	c7 04 24 30 00 00 00 	movl   $0x30,(%esp)
 829cdcf:	e8 7c 8d 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829cdd4:	89 c3                	mov    %eax,%ebx
 829cdd6:	89 d8                	mov    %ebx,%eax
 829cdd8:	85 c0                	test   %eax,%eax
 829cdda:	74 4d                	je     829ce29 <_ZN10GlobalData4InitEv+0x2e89>
 829cddc:	89 9d 94 f8 ff ff    	mov    %ebx,-0x76c(%ebp)
 829cde2:	8b b5 94 f8 ff ff    	mov    -0x76c(%ebp),%esi
 829cde8:	b8 00 00 00 00       	mov    $0x0,%eax
 829cded:	ba 0c 00 00 00       	mov    $0xc,%edx
 829cdf2:	89 f7                	mov    %esi,%edi
 829cdf4:	89 d1                	mov    %edx,%ecx
 829cdf6:	f3 ab                	rep stos %eax,%es:(%edi)
 829cdf8:	8b 85 94 f8 ff ff    	mov    -0x76c(%ebp),%eax
 829cdfe:	89 04 24             	mov    %eax,(%esp)
 829ce01:	e8 98 da 00 00       	call   82aa89e <_ZN13CStatisticMgrC1Ev>
 829ce06:	eb 1d                	jmp    829ce25 <_ZN10GlobalData4InitEv+0x2e85>
 829ce08:	89 d6                	mov    %edx,%esi
 829ce0a:	89 c7                	mov    %eax,%edi
 829ce0c:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829ce13:	08 
 829ce14:	89 1c 24             	mov    %ebx,(%esp)
 829ce17:	e8 c4 79 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829ce1c:	89 f8                	mov    %edi,%eax
 829ce1e:	89 f2                	mov    %esi,%edx
 829ce20:	e9 da 05 00 00       	jmp    829d3ff <_ZN10GlobalData4InitEv+0x345f>
 829ce25:	89 d8                	mov    %ebx,%eax
 829ce27:	eb 02                	jmp    829ce2b <_ZN10GlobalData4InitEv+0x2e8b>
 829ce29:	89 d8                	mov    %ebx,%eax
 829ce2b:	a3 64 f7 41 09       	mov    %eax,0x941f764
 829ce30:	a1 64 f7 41 09       	mov    0x941f764,%eax
 829ce35:	85 c0                	test   %eax,%eax
 829ce37:	75 56                	jne    829ce8f <_ZN10GlobalData4InitEv+0x2eef>
 829ce39:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829ce40:	00 
 829ce41:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829ce48:	00 
 829ce49:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829ce50:	00 
 829ce51:	c7 44 24 08 bf 1e 00 	movl   $0x1ebf,0x8(%esp)
 829ce58:	00 
 829ce59:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829ce60:	08 
 829ce61:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 829ce67:	89 04 24             	mov    %eax,(%esp)
 829ce6a:	e8 d7 28 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829ce6f:	c7 44 24 04 70 7c c1 	movl   $0x8c17c70,0x4(%esp)
 829ce76:	08 
 829ce77:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 829ce7d:	89 04 24             	mov    %eax,(%esp)
 829ce80:	e8 03 29 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829ce85:	bb 00 00 00 00       	mov    $0x0,%ebx
 829ce8a:	e9 8e 05 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829ce8f:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829ce96:	08 
 829ce97:	c7 04 24 30 00 00 00 	movl   $0x30,(%esp)
 829ce9e:	e8 ad 8c 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829cea3:	89 c3                	mov    %eax,%ebx
 829cea5:	89 d8                	mov    %ebx,%eax
 829cea7:	85 c0                	test   %eax,%eax
 829cea9:	74 2d                	je     829ced8 <_ZN10GlobalData4InitEv+0x2f38>
 829ceab:	89 d8                	mov    %ebx,%eax
 829cead:	89 04 24             	mov    %eax,(%esp)
 829ceb0:	e8 23 28 fe ff       	call   827f6d8 <_ZN15StackableAction6ActionC1Ev>
 829ceb5:	eb 1d                	jmp    829ced4 <_ZN10GlobalData4InitEv+0x2f34>
 829ceb7:	89 d6                	mov    %edx,%esi
 829ceb9:	89 c7                	mov    %eax,%edi
 829cebb:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829cec2:	08 
 829cec3:	89 1c 24             	mov    %ebx,(%esp)
 829cec6:	e8 15 79 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829cecb:	89 f8                	mov    %edi,%eax
 829cecd:	89 f2                	mov    %esi,%edx
 829cecf:	e9 2b 05 00 00       	jmp    829d3ff <_ZN10GlobalData4InitEv+0x345f>
 829ced4:	89 d8                	mov    %ebx,%eax
 829ced6:	eb 02                	jmp    829ceda <_ZN10GlobalData4InitEv+0x2f3a>
 829ced8:	89 d8                	mov    %ebx,%eax
 829ceda:	a3 fc f7 41 09       	mov    %eax,0x941f7fc
 829cedf:	a1 fc f7 41 09       	mov    0x941f7fc,%eax
 829cee4:	85 c0                	test   %eax,%eax
 829cee6:	75 56                	jne    829cf3e <_ZN10GlobalData4InitEv+0x2f9e>
 829cee8:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829ceef:	00 
 829cef0:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829cef7:	00 
 829cef8:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829ceff:	00 
 829cf00:	c7 44 24 08 d9 1e 00 	movl   $0x1ed9,0x8(%esp)
 829cf07:	00 
 829cf08:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829cf0f:	08 
 829cf10:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 829cf16:	89 04 24             	mov    %eax,(%esp)
 829cf19:	e8 28 28 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829cf1e:	c7 44 24 04 74 7e c1 	movl   $0x8c17e74,0x4(%esp)
 829cf25:	08 
 829cf26:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 829cf2c:	89 04 24             	mov    %eax,(%esp)
 829cf2f:	e8 54 28 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829cf34:	bb 00 00 00 00       	mov    $0x0,%ebx
 829cf39:	e9 df 04 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829cf3e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 829cf43:	c7 44 24 08 e0 1e 00 	movl   $0x1ee0,0x8(%esp)
 829cf4a:	00 
 829cf4b:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 829cf52:	08 
 829cf53:	89 04 24             	mov    %eax,(%esp)
 829cf56:	e8 2b 2b ff ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 829cf5b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 829cf62:	00 
 829cf63:	89 44 24 04          	mov    %eax,0x4(%esp)
 829cf67:	8d 85 9c fc ff ff    	lea    -0x364(%ebp),%eax
 829cf6d:	89 04 24             	mov    %eax,(%esp)
 829cf70:	e8 b1 bc e2 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 829cf75:	8d 85 9c fc ff ff    	lea    -0x364(%ebp),%eax
 829cf7b:	89 04 24             	mov    %eax,(%esp)
 829cf7e:	e8 c3 bc e2 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 829cf83:	c7 44 24 04 77 02 00 	movl   $0x277,0x4(%esp)
 829cf8a:	00 
 829cf8b:	89 04 24             	mov    %eax,(%esp)
 829cf8e:	e8 c3 bc e2 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 829cf93:	8d 85 9c fc ff ff    	lea    -0x364(%ebp),%eax
 829cf99:	89 04 24             	mov    %eax,(%esp)
 829cf9c:	e8 a5 bc e2 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 829cfa1:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 829cfa8:	ff 
 829cfa9:	89 04 24             	mov    %eax,(%esp)
 829cfac:	e8 a5 bc e2 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 829cfb1:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 829cfb6:	8d 95 9c fc ff ff    	lea    -0x364(%ebp),%edx
 829cfbc:	89 54 24 08          	mov    %edx,0x8(%esp)
 829cfc0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 829cfc7:	00 
 829cfc8:	89 04 24             	mov    %eax,(%esp)
 829cfcb:	e8 0e 40 2d 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 829cfd0:	eb 1b                	jmp    829cfed <_ZN10GlobalData4InitEv+0x304d>
 829cfd2:	89 d3                	mov    %edx,%ebx
 829cfd4:	89 c6                	mov    %eax,%esi
 829cfd6:	8d 85 9c fc ff ff    	lea    -0x364(%ebp),%eax
 829cfdc:	89 04 24             	mov    %eax,(%esp)
 829cfdf:	e8 ee f8 37 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 829cfe4:	89 f0                	mov    %esi,%eax
 829cfe6:	89 da                	mov    %ebx,%edx
 829cfe8:	e9 12 04 00 00       	jmp    829d3ff <_ZN10GlobalData4InitEv+0x345f>
 829cfed:	8d 85 9c fc ff ff    	lea    -0x364(%ebp),%eax
 829cff3:	89 04 24             	mov    %eax,(%esp)
 829cff6:	e8 d7 f8 37 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 829cffb:	e8 38 04 00 00       	call   829d438 <_ZN10GlobalData11InitCaptchaEv>
 829d000:	83 f0 01             	xor    $0x1,%eax
 829d003:	84 c0                	test   %al,%al
 829d005:	74 56                	je     829d05d <_ZN10GlobalData4InitEv+0x30bd>
 829d007:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829d00e:	00 
 829d00f:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829d016:	00 
 829d017:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829d01e:	00 
 829d01f:	c7 44 24 08 ea 1e 00 	movl   $0x1eea,0x8(%esp)
 829d026:	00 
 829d027:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829d02e:	08 
 829d02f:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 829d035:	89 04 24             	mov    %eax,(%esp)
 829d038:	e8 09 27 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829d03d:	c7 44 24 04 ac 7e c1 	movl   $0x8c17eac,0x4(%esp)
 829d044:	08 
 829d045:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 829d04b:	89 04 24             	mov    %eax,(%esp)
 829d04e:	e8 35 27 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829d053:	bb 00 00 00 00       	mov    $0x0,%ebx
 829d058:	e9 c0 03 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829d05d:	c7 04 24 03 00 00 00 	movl   $0x3,(%esp)
 829d064:	e8 51 e2 39 00       	call   863b2ba <_ZN25Timer_GenerateCaptchaData15RegistNextTimerEi>
 829d069:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829d070:	08 
 829d071:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 829d078:	e8 d3 8a 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829d07d:	89 c3                	mov    %eax,%ebx
 829d07f:	89 d8                	mov    %ebx,%eax
 829d081:	85 c0                	test   %eax,%eax
 829d083:	74 2d                	je     829d0b2 <_ZN10GlobalData4InitEv+0x3112>
 829d085:	89 d8                	mov    %ebx,%eax
 829d087:	89 04 24             	mov    %eax,(%esp)
 829d08a:	e8 9f 5f 20 00       	call   84a302e <_ZN17expert_extraction14CExtractionMgrC1Ev>
 829d08f:	eb 1d                	jmp    829d0ae <_ZN10GlobalData4InitEv+0x310e>
 829d091:	89 d6                	mov    %edx,%esi
 829d093:	89 c7                	mov    %eax,%edi
 829d095:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829d09c:	08 
 829d09d:	89 1c 24             	mov    %ebx,(%esp)
 829d0a0:	e8 3b 77 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829d0a5:	89 f8                	mov    %edi,%eax
 829d0a7:	89 f2                	mov    %esi,%edx
 829d0a9:	e9 51 03 00 00       	jmp    829d3ff <_ZN10GlobalData4InitEv+0x345f>
 829d0ae:	89 d8                	mov    %ebx,%eax
 829d0b0:	eb 02                	jmp    829d0b4 <_ZN10GlobalData4InitEv+0x3114>
 829d0b2:	89 d8                	mov    %ebx,%eax
 829d0b4:	a3 00 f8 41 09       	mov    %eax,0x941f800
 829d0b9:	a1 00 f8 41 09       	mov    0x941f800,%eax
 829d0be:	85 c0                	test   %eax,%eax
 829d0c0:	75 56                	jne    829d118 <_ZN10GlobalData4InitEv+0x3178>
 829d0c2:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829d0c9:	00 
 829d0ca:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829d0d1:	00 
 829d0d2:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829d0d9:	00 
 829d0da:	c7 44 24 08 f5 1e 00 	movl   $0x1ef5,0x8(%esp)
 829d0e1:	00 
 829d0e2:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829d0e9:	08 
 829d0ea:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 829d0f0:	89 04 24             	mov    %eax,(%esp)
 829d0f3:	e8 4e 26 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829d0f8:	c7 44 24 04 d0 7e c1 	movl   $0x8c17ed0,0x4(%esp)
 829d0ff:	08 
 829d100:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 829d106:	89 04 24             	mov    %eax,(%esp)
 829d109:	e8 7a 26 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829d10e:	bb 00 00 00 00       	mov    $0x0,%ebx
 829d113:	e9 05 03 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829d118:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829d11f:	08 
 829d120:	c7 04 24 14 00 00 00 	movl   $0x14,(%esp)
 829d127:	e8 24 8a 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829d12c:	89 c3                	mov    %eax,%ebx
 829d12e:	89 d8                	mov    %ebx,%eax
 829d130:	85 c0                	test   %eax,%eax
 829d132:	74 2d                	je     829d161 <_ZN10GlobalData4InitEv+0x31c1>
 829d134:	89 d8                	mov    %ebx,%eax
 829d136:	89 04 24             	mov    %eax,(%esp)
 829d139:	e8 9c 6f fe ff       	call   82840da <_ZN12NPC_TeleportC1Ev>
 829d13e:	eb 1d                	jmp    829d15d <_ZN10GlobalData4InitEv+0x31bd>
 829d140:	89 d6                	mov    %edx,%esi
 829d142:	89 c7                	mov    %eax,%edi
 829d144:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829d14b:	08 
 829d14c:	89 1c 24             	mov    %ebx,(%esp)
 829d14f:	e8 8c 76 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829d154:	89 f8                	mov    %edi,%eax
 829d156:	89 f2                	mov    %esi,%edx
 829d158:	e9 a2 02 00 00       	jmp    829d3ff <_ZN10GlobalData4InitEv+0x345f>
 829d15d:	89 d8                	mov    %ebx,%eax
 829d15f:	eb 02                	jmp    829d163 <_ZN10GlobalData4InitEv+0x31c3>
 829d161:	89 d8                	mov    %ebx,%eax
 829d163:	a3 18 f8 41 09       	mov    %eax,0x941f818
 829d168:	a1 18 f8 41 09       	mov    0x941f818,%eax
 829d16d:	85 c0                	test   %eax,%eax
 829d16f:	75 56                	jne    829d1c7 <_ZN10GlobalData4InitEv+0x3227>
 829d171:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829d178:	00 
 829d179:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829d180:	00 
 829d181:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829d188:	00 
 829d189:	c7 44 24 08 02 1f 00 	movl   $0x1f02,0x8(%esp)
 829d190:	00 
 829d191:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829d198:	08 
 829d199:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 829d19f:	89 04 24             	mov    %eax,(%esp)
 829d1a2:	e8 9f 25 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829d1a7:	c7 44 24 04 fc 7e c1 	movl   $0x8c17efc,0x4(%esp)
 829d1ae:	08 
 829d1af:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 829d1b5:	89 04 24             	mov    %eax,(%esp)
 829d1b8:	e8 cb 25 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829d1bd:	bb 00 00 00 00       	mov    $0x0,%ebx
 829d1c2:	e9 56 02 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829d1c7:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829d1ce:	08 
 829d1cf:	c7 04 24 14 00 00 00 	movl   $0x14,(%esp)
 829d1d6:	e8 75 89 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829d1db:	89 c3                	mov    %eax,%ebx
 829d1dd:	89 d8                	mov    %ebx,%eax
 829d1df:	85 c0                	test   %eax,%eax
 829d1e1:	74 2d                	je     829d210 <_ZN10GlobalData4InitEv+0x3270>
 829d1e3:	89 d8                	mov    %ebx,%eax
 829d1e5:	89 04 24             	mov    %eax,(%esp)
 829d1e8:	e8 55 6f fe ff       	call   8284142 <_ZN13User_TeleportC1Ev>
 829d1ed:	eb 1d                	jmp    829d20c <_ZN10GlobalData4InitEv+0x326c>
 829d1ef:	89 d6                	mov    %edx,%esi
 829d1f1:	89 c7                	mov    %eax,%edi
 829d1f3:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829d1fa:	08 
 829d1fb:	89 1c 24             	mov    %ebx,(%esp)
 829d1fe:	e8 dd 75 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829d203:	89 f8                	mov    %edi,%eax
 829d205:	89 f2                	mov    %esi,%edx
 829d207:	e9 f3 01 00 00       	jmp    829d3ff <_ZN10GlobalData4InitEv+0x345f>
 829d20c:	89 d8                	mov    %ebx,%eax
 829d20e:	eb 02                	jmp    829d212 <_ZN10GlobalData4InitEv+0x3272>
 829d210:	89 d8                	mov    %ebx,%eax
 829d212:	a3 1c f8 41 09       	mov    %eax,0x941f81c
 829d217:	a1 1c f8 41 09       	mov    0x941f81c,%eax
 829d21c:	85 c0                	test   %eax,%eax
 829d21e:	75 50                	jne    829d270 <_ZN10GlobalData4InitEv+0x32d0>
 829d220:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829d227:	00 
 829d228:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829d22f:	00 
 829d230:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829d237:	00 
 829d238:	c7 44 24 08 09 1f 00 	movl   $0x1f09,0x8(%esp)
 829d23f:	00 
 829d240:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829d247:	08 
 829d248:	8d 45 88             	lea    -0x78(%ebp),%eax
 829d24b:	89 04 24             	mov    %eax,(%esp)
 829d24e:	e8 f3 24 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829d253:	c7 44 24 04 28 7f c1 	movl   $0x8c17f28,0x4(%esp)
 829d25a:	08 
 829d25b:	8d 45 88             	lea    -0x78(%ebp),%eax
 829d25e:	89 04 24             	mov    %eax,(%esp)
 829d261:	e8 22 25 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829d266:	bb 00 00 00 00       	mov    $0x0,%ebx
 829d26b:	e9 ad 01 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829d270:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829d277:	08 
 829d278:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 829d27f:	e8 cc 88 48 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 829d284:	89 c3                	mov    %eax,%ebx
 829d286:	89 d8                	mov    %ebx,%eax
 829d288:	85 c0                	test   %eax,%eax
 829d28a:	74 2d                	je     829d2b9 <_ZN10GlobalData4InitEv+0x3319>
 829d28c:	89 d8                	mov    %ebx,%eax
 829d28e:	89 04 24             	mov    %eax,(%esp)
 829d291:	e8 ce 3a 35 00       	call   85f0d64 <_ZN13random_option23CRandomOptionItemHandleC1Ev>
 829d296:	eb 1d                	jmp    829d2b5 <_ZN10GlobalData4InitEv+0x3315>
 829d298:	89 d6                	mov    %edx,%esi
 829d29a:	89 c7                	mov    %eax,%edi
 829d29c:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 829d2a3:	08 
 829d2a4:	89 1c 24             	mov    %ebx,(%esp)
 829d2a7:	e8 34 75 48 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 829d2ac:	89 f8                	mov    %edi,%eax
 829d2ae:	89 f2                	mov    %esi,%edx
 829d2b0:	e9 4a 01 00 00       	jmp    829d3ff <_ZN10GlobalData4InitEv+0x345f>
 829d2b5:	89 d8                	mov    %ebx,%eax
 829d2b7:	eb 02                	jmp    829d2bb <_ZN10GlobalData4InitEv+0x331b>
 829d2b9:	89 d8                	mov    %ebx,%eax
 829d2bb:	a3 20 f8 41 09       	mov    %eax,0x941f820
 829d2c0:	a1 20 f8 41 09       	mov    0x941f820,%eax
 829d2c5:	85 c0                	test   %eax,%eax
 829d2c7:	75 50                	jne    829d319 <_ZN10GlobalData4InitEv+0x3379>
 829d2c9:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829d2d0:	00 
 829d2d1:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829d2d8:	00 
 829d2d9:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829d2e0:	00 
 829d2e1:	c7 44 24 08 12 1f 00 	movl   $0x1f12,0x8(%esp)
 829d2e8:	00 
 829d2e9:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829d2f0:	08 
 829d2f1:	8d 45 98             	lea    -0x68(%ebp),%eax
 829d2f4:	89 04 24             	mov    %eax,(%esp)
 829d2f7:	e8 4a 24 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829d2fc:	c7 44 24 04 54 7f c1 	movl   $0x8c17f54,0x4(%esp)
 829d303:	08 
 829d304:	8d 45 98             	lea    -0x68(%ebp),%eax
 829d307:	89 04 24             	mov    %eax,(%esp)
 829d30a:	e8 79 24 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829d30f:	bb 00 00 00 00       	mov    $0x0,%ebx
 829d314:	e9 04 01 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829d319:	e8 c8 52 ec ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 829d31e:	89 04 24             	mov    %eax,(%esp)
 829d321:	e8 8c 0f ed ff       	call   816e2b2 <_ZN22ServiceRestrictManager10initializeEv>
 829d326:	83 f0 01             	xor    $0x1,%eax
 829d329:	84 c0                	test   %al,%al
 829d32b:	74 50                	je     829d37d <_ZN10GlobalData4InitEv+0x33dd>
 829d32d:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829d334:	00 
 829d335:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829d33c:	00 
 829d33d:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829d344:	00 
 829d345:	c7 44 24 08 1f 1f 00 	movl   $0x1f1f,0x8(%esp)
 829d34c:	00 
 829d34d:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829d354:	08 
 829d355:	8d 45 a8             	lea    -0x58(%ebp),%eax
 829d358:	89 04 24             	mov    %eax,(%esp)
 829d35b:	e8 e6 23 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829d360:	c7 44 24 04 88 7f c1 	movl   $0x8c17f88,0x4(%esp)
 829d367:	08 
 829d368:	8d 45 a8             	lea    -0x58(%ebp),%eax
 829d36b:	89 04 24             	mov    %eax,(%esp)
 829d36e:	e8 15 24 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829d373:	bb 00 00 00 00       	mov    $0x0,%ebx
 829d378:	e9 a0 00 00 00       	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829d37d:	e8 64 52 ec ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 829d382:	89 04 24             	mov    %eax,(%esp)
 829d385:	e8 44 15 ed ff       	call   816e8ce <_ZN22ServiceRestrictManager10savePolicyEv>
 829d38a:	e8 57 52 ec ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 829d38f:	89 04 24             	mov    %eax,(%esp)
 829d392:	e8 3f 14 ed ff       	call   816e7d6 <_ZN22ServiceRestrictManager10loadPolicyEv>
 829d397:	e8 dd 52 ec ff       	call   8162679 <_ZN4ARAD9SingletonI19RestrictGeolocationE3GetEv>
 829d39c:	89 04 24             	mov    %eax,(%esp)
 829d39f:	e8 a2 36 ed ff       	call   8170a46 <_ZN19RestrictGeolocation15initGeolocationEv>
 829d3a4:	83 f0 01             	xor    $0x1,%eax
 829d3a7:	84 c0                	test   %al,%al
 829d3a9:	74 4d                	je     829d3f8 <_ZN10GlobalData4InitEv+0x3458>
 829d3ab:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 829d3b2:	00 
 829d3b3:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 829d3ba:	00 
 829d3bb:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 829d3c2:	00 
 829d3c3:	c7 44 24 08 2a 1f 00 	movl   $0x1f2a,0x8(%esp)
 829d3ca:	00 
 829d3cb:	c7 44 24 04 c0 b1 c1 	movl   $0x8c1b1c0,0x4(%esp)
 829d3d2:	08 
 829d3d3:	8d 45 b8             	lea    -0x48(%ebp),%eax
 829d3d6:	89 04 24             	mov    %eax,(%esp)
 829d3d9:	e8 68 23 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 829d3de:	c7 44 24 04 bb 7f c1 	movl   $0x8c17fbb,0x4(%esp)
 829d3e5:	08 
 829d3e6:	8d 45 b8             	lea    -0x48(%ebp),%eax
 829d3e9:	89 04 24             	mov    %eax,(%esp)
 829d3ec:	e8 97 23 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829d3f1:	bb 00 00 00 00       	mov    $0x0,%ebx
 829d3f6:	eb 25                	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829d3f8:	bb 01 00 00 00       	mov    $0x1,%ebx
 829d3fd:	eb 1e                	jmp    829d41d <_ZN10GlobalData4InitEv+0x347d>
 829d3ff:	89 d3                	mov    %edx,%ebx
 829d401:	89 c6                	mov    %eax,%esi
 829d403:	8d 85 a8 fc ff ff    	lea    -0x358(%ebp),%eax
 829d409:	89 04 24             	mov    %eax,(%esp)
 829d40c:	e8 29 d4 00 00       	call   82aa83a <_ZNSt3mapI18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 829d411:	89 f0                	mov    %esi,%eax
 829d413:	89 da                	mov    %ebx,%edx
 829d415:	89 04 24             	mov    %eax,(%esp)
 829d418:	e8 33 63 84 00       	call   8ae3750 <_Unwind_Resume>
 829d41d:	8d 85 a8 fc ff ff    	lea    -0x358(%ebp),%eax
 829d423:	89 04 24             	mov    %eax,(%esp)
 829d426:	e8 0f d4 00 00       	call   82aa83a <_ZNSt3mapI18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 829d42b:	89 d8                	mov    %ebx,%eax
 829d42d:	8d 65 f4             	lea    -0xc(%ebp),%esp
 829d430:	83 c4 00             	add    $0x0,%esp
 829d433:	5b                   	pop    %ebx
 829d434:	5e                   	pop    %esi
 829d435:	5f                   	pop    %edi
 829d436:	5d                   	pop    %ebp
 829d437:	c3                   	ret

```

```c
// GlobalData::Init @ 0x8299fa0

/* WARNING: Type propagation algorithm not settling */
/* GlobalData::Init() */

undefined4 GlobalData::Init(void)

{
  bool bVar1;
  CIPGHelper *pCVar2;
  char cVar3;
  CItemAmplifier *this;
  CGlobalEffectManager *this_00;
  CTimeGate *this_01;
  ostream *poVar4;
  Arad_ServerStateManager *this_02;
  MsgQueueMgr *this_03;
  StreamPool *this_04;
  PacketPool *this_05;
  pthread_t pVar5;
  SmallStreamPool *this_06;
  BigStreamPool *this_07;
  DBMgr *this_08;
  DBThread *pDVar6;
  DispatchThread *this_09;
  NetworkThread *this_10;
  UdpThread *this_11;
  MonitorTcpThread *this_12;
  CServerProxyMgr<CMonitorServerProxy> *this_13;
  CServerProxyMgr<CGuildServerProxy> *this_14;
  CServerProxyMgr<CStatisticServerProxy> *this_15;
  CEnvironment *pCVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  CHadesServerProxy *this_16;
  CDoubleConnCheckServerProxy *this_17;
  CSchoolServerProxy *this_18;
  CPCRoomServerProxy *this_19;
  CCommunityServerProxy *this_20;
  CAuctionServerProxy *this_21;
  CCeraAuctionServerProxy *this_22;
  CPowerManager *this_23;
  CFatigueBatteryHandle *this_24;
  CSecretShop *this_25;
  CmmChannelProxy *this_26;
  CRijndael *pCVar11;
  CTEA *pCVar12;
  CLogGameChannel *this_27;
  CCeraShop *this_28;
  ItemVendingMachine *this_29;
  Secu_DataControl *this_30;
  CSecu_ProtectionField *this_31;
  CAutoPunishRuleBlackIPMgr *this_32;
  CAutoPunishRuleHackTypeMgr *this_33;
  CBlackIPMonitor *this_34;
  AcceptThread *this_35;
  RefPvpGrade *this_36;
  CDBConnector *this_37;
  int iVar13;
  undefined4 uVar14;
  STDBConnInfo *pSVar15;
  CSimpleSSO *this_38;
  MySQL *pMVar16;
  CSecurityCardCenter *this_39;
  CGMAccounts *this_40;
  CQueryCounter *pCVar17;
  CSyncScript *pCVar18;
  int iVar19;
  CSyncSlangFilter *pCVar20;
  CEventManager *this_41;
  Gm_List *this_42;
  CGM_Manager *this_43;
  Cipher *pCVar21;
  CStatisticMgr *pCVar22;
  CBreakAwayPreventSystem *this_44;
  CExpertJobMgr *this_45;
  CVillageObjectMgr *this_46;
  CVillageMonsterMgr *this_47;
  InstanceRentalSystem *this_48;
  CRevengeDungeon *this_49;
  CDailyScheduleManager *this_50;
  COnlinePreliminaryTeamMgr *this_51;
  CGameMasterMgr *this_52;
  long lVar23;
  CBusinessImpl *this_53;
  Action *this_54;
  Stream *pSVar24;
  CStreamGuard *pCVar25;
  CExtractionMgr *this_55;
  NPC_Teleport *this_56;
  User_Teleport *this_57;
  CRandomOptionItemHandle *this_58;
  ServiceRestrictManager *pSVar26;
  RestrictGeolocation *this_59;
  undefined4 uVar27;
  CStatisticMgr *pCVar28;
  byte bVar29;
  uchar local_768 [1024];
  CStreamGuard local_368 [8];
  char local_360 [4];
  map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
  local_35c [24];
  undefined4 local_344;
  string local_340 [7];
  allocator<char> local_339;
  string local_338 [7];
  allocator<char> local_331;
  string local_330 [7];
  allocator<char> local_329;
  pair local_328 [8];
  pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP> local_320 [8];
  ENUM_DB_HANDLE_IDX local_318 [8];
  int local_310 [5];
  cMyTrace local_2fc [16];
  undefined4 local_2ec;
  cMyTrace local_2e8 [16];
  cMyTrace local_2d8 [16];
  cMyTrace local_2c8 [16];
  cMyTrace local_2b8 [16];
  cMyTrace local_2a8 [16];
  cMyTrace local_298 [16];
  map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
  local_288 [24];
  cMyTrace local_270 [16];
  cMyTrace local_260 [16];
  cMyTrace local_250 [16];
  cMyTrace local_240 [16];
  cMyTrace local_230 [16];
  cMyTrace local_220 [16];
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  cMyTrace local_1fc [16];
  cMyTrace local_1ec [16];
  cMyTrace local_1dc [16];
  cMyTrace local_1cc [16];
  cMyTrace local_1bc [16];
  cMyTrace local_1ac [16];
  cMyTrace local_19c [16];
  cMyTrace local_18c [16];
  cMyTrace local_17c [16];
  cMyTrace local_16c [16];
  cMyTrace local_15c [16];
  cMyTrace local_14c [16];
  cMyTrace local_13c [16];
  cMyTrace local_12c [16];
  cMyTrace local_11c [16];
  cMyTrace local_10c [16];
  cMyTrace local_fc [16];
  cMyTrace local_ec [32];
  cMyTrace local_cc [16];
  cMyTrace local_bc [16];
  cMyTrace local_ac [16];
  cMyTrace local_9c [16];
  cMyTrace local_8c [16];
  cMyTrace local_7c [16];
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
  *local_3c;
  CIPGHelper *local_38;
  int local_34;
  bool local_2d;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  bVar29 = 0;
  s_server_stop = 0;
  CSystemTime::update((CSystemTime *)s_systemTime_);
  this = operator_new(0x5e4);
                    /* try { // try from 08299fd2 to 08299fd6 has its CatchHandler @ 08299fd9 */
  CItemAmplifier::CItemAmplifier(this);
  s_itemAmplifier_ = this;
  this_00 = operator_new(0x18);
                    /* try { // try from 0829a00b to 0829a00f has its CatchHandler @ 0829a012 */
  CGlobalEffectManager::CGlobalEffectManager(this_00);
  s_globalEffectManager_ = this_00;
  this_01 = operator_new(0x1c,(nothrow_t *)&std::nothrow);
  if (this_01 == (CTimeGate *)0x0) {
    s_timeGate_ = this_01;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate s_timeGate_ memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829a052 to 0829a056 has its CatchHandler @ 0829a059 */
  CTimeGate::CTimeGate(this_01);
  s_timeGate_ = this_01;
  this_02 = operator_new(0x34);
                    /* try { // try from 0829a0ce to 0829a0d2 has its CatchHandler @ 0829a0d5 */
  ARAD::Arad_ServerStateManager::Arad_ServerStateManager(this_02);
  s_serverStateManager_ = this_02;
  this_03 = operator_new(0x180);
                    /* try { // try from 0829a107 to 0829a10b has its CatchHandler @ 0829a10e */
  MsgQueueMgr::MsgQueueMgr(this_03);
  s_msgq_mgr = this_03;
  if (this_03 == (MsgQueueMgr *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] can\'t allocate msg queue memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  this_04 = operator_new(0x1c);
                    /* try { // try from 0829a177 to 0829a17b has its CatchHandler @ 0829a17e */
  StreamPool::StreamPool(this_04);
  s_stream_pool = this_04;
  if (this_04 == (StreamPool *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] can\'t allocate stream pool memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  for (local_28 = 0; local_28 < 9; local_28 = local_28 + 1) {
    this_05 = operator_new(8);
                    /* try { // try from 0829a1f0 to 0829a1f4 has its CatchHandler @ 0829a1f7 */
    PacketPool::PacketPool(this_05);
    *(PacketPool **)(s_packet_pool_list + local_28 * 4) = this_05;
    if (*(int *)(s_packet_pool_list + local_28 * 4) == 0) {
      poVar4 = std::operator<<((ostream *)&std::cerr,
                               "[GlobalData::Init] can\'t allocate packet pool memory");
      std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
      return 0;
    }
  }
  pVar5 = pthread_self();
  setCurrentPacketPool(4,pVar5);
  this_06 = operator_new(0x1c);
                    /* try { // try from 0829a292 to 0829a296 has its CatchHandler @ 0829a299 */
  SmallStreamPool::SmallStreamPool(this_06);
  s_small_stream_pool = this_06;
  if (this_06 == (SmallStreamPool *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] can\'t allocate small stream pool memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  this_07 = operator_new(0x1c);
                    /* try { // try from 0829a302 to 0829a306 has its CatchHandler @ 0829a309 */
  BigStreamPool::BigStreamPool(this_07);
  s_big_stream_pool = this_07;
  if (this_07 == (BigStreamPool *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] can\'t allocate big stream pool memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  this_08 = operator_new(0x38);
                    /* try { // try from 0829a372 to 0829a376 has its CatchHandler @ 0829a379 */
  DBMgr::DBMgr(this_08);
  s_db_mgr = this_08;
  if (this_08 == (DBMgr *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] can\'t allocate db manager memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  pDVar6 = operator_new(0x4c);
                    /* try { // try from 0829a3e2 to 0829a3e6 has its CatchHandler @ 0829a3e9 */
  DBThread::DBThread(pDVar6);
  s_db_thr = pDVar6;
  if (pDVar6 == (DBThread *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate db thread memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  DBThread::setLogDB(pDVar6,false);
  pDVar6 = operator_new(0x4c);
                    /* try { // try from 0829a467 to 0829a46b has its CatchHandler @ 0829a46e */
  DBThread::DBThread(pDVar6);
  s_db_thr_for_logDB = pDVar6;
  if (pDVar6 == (DBThread *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate db thread memory, s_db_thr_for_logDB"
                            );
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  DBThread::setLogDB(pDVar6,true);
  this_09 = operator_new(0xc);
                    /* try { // try from 0829a4ec to 0829a4f0 has its CatchHandler @ 0829a4f3 */
  DispatchThread::DispatchThread(this_09);
  s_dispatch_thr = this_09;
  if (this_09 == (DispatchThread *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate dispath thread memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  this_10 = operator_new(0xc);
                    /* try { // try from 0829a55c to 0829a560 has its CatchHandler @ 0829a563 */
  NetworkThread::NetworkThread(this_10);
  s_net_thr = this_10;
  if (this_10 == (NetworkThread *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate network thread memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  this_11 = operator_new(0xc);
                    /* try { // try from 0829a5cc to 0829a5d0 has its CatchHandler @ 0829a5d3 */
  UdpThread::UdpThread(this_11);
  s_udp_thr = this_11;
  if (this_11 == (UdpThread *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate udp thread memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  this_12 = operator_new(0xc,(nothrow_t *)&std::nothrow);
  if (this_12 == (MonitorTcpThread *)0x0) {
    s_monitor_tcp_thr = this_12;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate monitor tcp thread memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829a64a to 0829a64e has its CatchHandler @ 0829a651 */
  MonitorTcpThread::MonitorTcpThread(this_12);
  s_monitor_tcp_thr = this_12;
  this_13 = operator_new(0x30e1c,(nothrow_t *)&std::nothrow);
  if (this_13 == (CServerProxyMgr<CMonitorServerProxy> *)0x0) {
    s_monitor_proxy_mgr = this_13;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate monitor server proxy memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829a6d4 to 0829a6d8 has its CatchHandler @ 0829a6db */
  CServerProxyMgr<CMonitorServerProxy>::CServerProxyMgr(this_13);
  s_monitor_proxy_mgr = this_13;
  this_14 = operator_new(0x30e34,(nothrow_t *)&std::nothrow);
  if (this_14 == (CServerProxyMgr<CGuildServerProxy> *)0x0) {
    s_guild_proxy_mgr = this_14;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate guild server proxy memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829a75e to 0829a762 has its CatchHandler @ 0829a765 */
  CServerProxyMgr<CGuildServerProxy>::CServerProxyMgr(this_14);
  s_guild_proxy_mgr = this_14;
  this_15 = operator_new(0x20,(nothrow_t *)&std::nothrow);
  if (this_15 == (CServerProxyMgr<CStatisticServerProxy> *)0x0) {
    s_statistic_proxy_mgr = this_15;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate statistic server proxy memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829a7e8 to 0829a7ec has its CatchHandler @ 0829a7ef */
  CServerProxyMgr<CStatisticServerProxy>::CServerProxyMgr(this_15);
  s_statistic_proxy_mgr = this_15;
  pCVar7 = (CEnvironment *)G_CEnvironment();
  pcVar8 = (char *)CEnvironment::get_udp_ip_hades(pCVar7);
  pCVar7 = (CEnvironment *)G_CEnvironment();
  iVar9 = CEnvironment::get_tcp_port_hades(pCVar7);
  pCVar7 = (CEnvironment *)G_CEnvironment();
  iVar10 = CEnvironment::get_udp_port_hades(pCVar7);
  this_16 = operator_new(0x30e1c,(nothrow_t *)&std::nothrow);
  if (this_16 == (CHadesServerProxy *)0x0) {
    s_hades_proxy = this_16;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate Hades server proxy memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829a8b5 to 0829a8b9 has its CatchHandler @ 0829a8bc */
  CHadesServerProxy::CHadesServerProxy(this_16,pcVar8,iVar9,iVar10);
  s_hades_proxy = this_16;
  cVar3 = BaseServerProxy::Init((BaseServerProxy *)this_16);
  if (cVar3 != '\x01') {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Fail Init (Hades server proxy)");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 0829a96e to 0829a996 has its CatchHandler @ 0829aa29 */
  pCVar7 = (CEnvironment *)G_CEnvironment();
  pcVar8 = (char *)CEnvironment::get_udp_ip_doublecheck(pCVar7);
  std::string::string(local_340,pcVar8,(allocator *)&local_339);
                    /* try { // try from 0829a99d to 0829a9a1 has its CatchHandler @ 0829aa11 */
  pCVar7 = (CEnvironment *)G_CEnvironment();
  iVar9 = CEnvironment::get_udp_port_doublecheck(pCVar7);
  this_17 = operator_new(0x10,(nothrow_t *)&std::nothrow);
  if (this_17 != (CDoubleConnCheckServerProxy *)0x0) {
                    /* try { // try from 0829a9d5 to 0829a9d9 has its CatchHandler @ 0829a9dc */
    CDoubleConnCheckServerProxy::CDoubleConnCheckServerProxy(this_17,(string)local_340,iVar9);
  }
  s_double_check_proxy = this_17;
                    /* try { // try from 0829aa0a to 0829aa0e has its CatchHandler @ 0829aa29 */
  std::string::~string(local_340);
  std::allocator<char>::~allocator(&local_339);
  if (s_double_check_proxy == (CDoubleConnCheckServerProxy *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate double conn check server proxy memory"
                            );
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  cVar3 = CDoubleConnCheckServerProxy::Init(s_double_check_proxy);
  if (cVar3 != '\x01') {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Fail Init (double conn check server proxy)");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  pCVar7 = (CEnvironment *)G_CEnvironment();
  pcVar8 = (char *)CEnvironment::get_school_server_ip(pCVar7);
  if (*pcVar8 == '\0') {
LAB_0829aafa:
    bVar1 = false;
  }
  else {
    pCVar7 = (CEnvironment *)G_CEnvironment();
    iVar9 = CEnvironment::get_school_server_port(pCVar7);
    if (iVar9 < 1) goto LAB_0829aafa;
    bVar1 = true;
  }
  if (bVar1) {
    std::allocator<char>::allocator();
                    /* try { // try from 0829ab15 to 0829ab3d has its CatchHandler @ 0829abd0 */
    pCVar7 = (CEnvironment *)G_CEnvironment();
    pcVar8 = (char *)CEnvironment::get_school_server_ip(pCVar7);
    std::string::string(local_338,pcVar8,(allocator *)&local_331);
                    /* try { // try from 0829ab44 to 0829ab48 has its CatchHandler @ 0829abb8 */
    pCVar7 = (CEnvironment *)G_CEnvironment();
    iVar9 = CEnvironment::get_school_server_port(pCVar7);
    this_18 = operator_new(0x10,(nothrow_t *)&std::nothrow);
    if (this_18 != (CSchoolServerProxy *)0x0) {
                    /* try { // try from 0829ab7c to 0829ab80 has its CatchHandler @ 0829ab83 */
      CSchoolServerProxy::CSchoolServerProxy(this_18,(string)local_338,iVar9);
    }
    s_school_proxy = this_18;
                    /* try { // try from 0829abb1 to 0829abb5 has its CatchHandler @ 0829abd0 */
    std::string::~string(local_338);
    std::allocator<char>::~allocator(&local_331);
    if (s_school_proxy == (CSchoolServerProxy *)0x0) {
      poVar4 = std::operator<<((ostream *)&std::cerr,
                               "[GlobalData::Init] Can\'t allocate school server proxy memory");
      std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
      return 0;
    }
    cVar3 = CSchoolServerProxy::Init(s_school_proxy);
    if (cVar3 != '\x01') {
      poVar4 = std::operator<<((ostream *)&std::cerr,
                               "[GlobalData::Init] Fail Init (school server proxy)");
      std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
      return 0;
    }
  }
  pCVar7 = (CEnvironment *)G_CEnvironment();
  pcVar8 = (char *)CEnvironment::get_pcroom_server_ip(pCVar7);
  pCVar7 = (CEnvironment *)G_CEnvironment();
  iVar9 = CEnvironment::get_pcroom_server_port(pCVar7);
  this_19 = operator_new(0x30e04,(nothrow_t *)&std::nothrow);
  if (this_19 == (CPCRoomServerProxy *)0x0) {
    s_pcroom_proxy = this_19;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate pcroom server proxy memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829acbc to 0829acc0 has its CatchHandler @ 0829acc3 */
  CPCRoomServerProxy::CPCRoomServerProxy(this_19,pcVar8,iVar9);
  s_pcroom_proxy = this_19;
  pCVar7 = (CEnvironment *)G_CEnvironment();
  pcVar8 = (char *)CEnvironment::get_community_server_ip(pCVar7);
  pCVar7 = (CEnvironment *)G_CEnvironment();
  iVar9 = CEnvironment::get_community_server_port(pCVar7);
  this_20 = operator_new(0x30e04,(nothrow_t *)&std::nothrow);
  if (this_20 == (CCommunityServerProxy *)0x0) {
    s_community_proxy = this_20;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate community server proxy memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829ad6c to 0829ad70 has its CatchHandler @ 0829ad73 */
  CCommunityServerProxy::CCommunityServerProxy(this_20,pcVar8,iVar9);
  s_community_proxy = this_20;
  pCVar7 = (CEnvironment *)G_CEnvironment();
  pcVar8 = (char *)CEnvironment::get_auction_server_ip(pCVar7);
  pCVar7 = (CEnvironment *)G_CEnvironment();
  iVar9 = CEnvironment::get_auction_server_port(pCVar7);
  this_21 = operator_new(0x30e10,(nothrow_t *)&std::nothrow);
  if (this_21 == (CAuctionServerProxy *)0x0) {
    s_auction_proxy = this_21;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate auction server proxy memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829ae24 to 0829ae28 has its CatchHandler @ 0829ae2b */
  CAuctionServerProxy::CAuctionServerProxy(this_21,pcVar8,iVar9,"Auction Server");
  s_auction_proxy = this_21;
  pCVar7 = (CEnvironment *)G_CEnvironment();
  pcVar8 = (char *)CEnvironment::get_cera_auction_server_ip(pCVar7);
  pCVar7 = (CEnvironment *)G_CEnvironment();
  iVar9 = CEnvironment::get_cera_auction_server_port(pCVar7);
  this_22 = operator_new(0x30e10,(nothrow_t *)&std::nothrow);
  if (this_22 == (CCeraAuctionServerProxy *)0x0) {
    s_cera_auction_proxy = this_22;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate cera auction server proxy memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829aedc to 0829aee0 has its CatchHandler @ 0829aee3 */
  CCeraAuctionServerProxy::CCeraAuctionServerProxy(this_22,pcVar8,iVar9,"Cera Auction Server");
  s_cera_auction_proxy = this_22;
  this_23 = operator_new(0x208,(nothrow_t *)&std::nothrow);
  if (this_23 == (CPowerManager *)0x0) {
    s_power_manager = this_23;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate power manager memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829af66 to 0829af6a has its CatchHandler @ 0829af6d */
  CPowerManager::CPowerManager(this_23);
  s_power_manager = this_23;
  cVar3 = CPowerManager::Init(this_23);
  if (cVar3 != '\x01') {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Fail Init (power manager memory)");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  CPowerManager::LoadPowerWarInfo();
  CPowerManager::LoadRankerInfo();
  this_24 = operator_new(1,(nothrow_t *)&std::nothrow);
  if (this_24 == (CFatigueBatteryHandle *)0x0) {
    s_fatigueBatteryHandle_ = this_24;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate Fatigue Battery Handle memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829b04c to 0829b050 has its CatchHandler @ 0829b053 */
  CFatigueBatteryHandle::CFatigueBatteryHandle(this_24);
  s_fatigueBatteryHandle_ = this_24;
  this_25 = operator_new(100,(nothrow_t *)&std::nothrow);
  if (this_25 == (CSecretShop *)0x0) {
    s_secret_shop = this_25;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate SecretShop Handle memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829b0d6 to 0829b0da has its CatchHandler @ 0829b0dd */
  secretshop::CSecretShop::CSecretShop(this_25);
  s_secret_shop = this_25;
  std::allocator<char>::allocator();
                    /* try { // try from 0829b14d to 0829b175 has its CatchHandler @ 0829b208 */
  pCVar7 = (CEnvironment *)G_CEnvironment();
  pcVar8 = (char *)CEnvironment::get_udp_ip_channel(pCVar7);
  std::string::string(local_330,pcVar8,(allocator *)&local_329);
                    /* try { // try from 0829b17c to 0829b180 has its CatchHandler @ 0829b1f0 */
  pCVar7 = (CEnvironment *)G_CEnvironment();
  iVar9 = CEnvironment::get_udp_port_channel(pCVar7);
  this_26 = operator_new(0x80020,(nothrow_t *)&std::nothrow);
  if (this_26 != (CmmChannelProxy *)0x0) {
                    /* try { // try from 0829b1b4 to 0829b1b8 has its CatchHandler @ 0829b1bb */
    CmmChannelProxy::CmmChannelProxy(this_26,(string)local_330,iVar9);
  }
  s_channel_proxy = this_26;
                    /* try { // try from 0829b1e9 to 0829b1ed has its CatchHandler @ 0829b208 */
  std::string::~string(local_330);
  std::allocator<char>::~allocator(&local_329);
  if (s_channel_proxy == (CmmChannelProxy *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate channel server proxy memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  cVar3 = CmmChannelProxy::Init(s_channel_proxy);
  if (cVar3 != '\x01') {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Fail Init (channel server proxy)");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  pCVar11 = operator_new(0x47c);
                    /* try { // try from 0829b2c0 to 0829b2c4 has its CatchHandler @ 0829b2c7 */
  CRijndael::CRijndael(pCVar11);
  s_pcryptRijndael_CharacView_ = pCVar11;
  CRijndael::Initialize(pCVar11,"wongyaofejsvk007",0x20,CRijndael::sm_chain0,0x10,0x10,0,0);
  pCVar11 = operator_new(0x47c);
                    /* try { // try from 0829b33e to 0829b342 has its CatchHandler @ 0829b345 */
  CRijndael::CRijndael(pCVar11);
  s_pcryptRijndael_Password_ = pCVar11;
  CRijndael::Initialize(pCVar11,"wongyaofneople00",0x20,CRijndael::sm_chain0,0x10,0x10,0,0);
  pCVar11 = operator_new(0x47c);
                    /* try { // try from 0829b3bc to 0829b3c0 has its CatchHandler @ 0829b3c3 */
  CRijndael::CRijndael(pCVar11);
  s_pcryptRijndael_MousePassword_ = pCVar11;
  CRijndael::Initialize(pCVar11,"ejsvk@@key4mouse",0x20,CRijndael::sm_chain0,0x10,0x10,0,0);
  pCVar12 = operator_new(0x48);
                    /* try { // try from 0829b43a to 0829b43e has its CatchHandler @ 0829b441 */
  CTEA::CTEA(pCVar12);
  s_pcryptTEA_MousePassword_ = pCVar12;
  CTEA::Initialize(pCVar12,"tjsghTlWkdajtwla",0x10,"",0,0);
  pCVar12 = operator_new(0x48);
                    /* try { // try from 0829b4a8 to 0829b4ac has its CatchHandler @ 0829b4af */
  CTEA::CTEA(pCVar12);
  s_pcryptTEA_SecurityCard_ = pCVar12;
  CTEA::Initialize(pCVar12,"ejsvk@@@secucard",0x10,"",0,0);
  this_27 = operator_new(0x10,(nothrow_t *)&std::nothrow);
  if (this_27 != (CLogGameChannel *)0x0) {
    WongWork::CLogGameChannel::CLogGameChannel(this_27);
  }
  s_pLogGameChannel = this_27;
  WongWork::CLogGameChannel::StartLogTimer(this_27);
  this_28 = operator_new(8,(nothrow_t *)&std::nothrow);
  if (this_28 != (CCeraShop *)0x0) {
                    /* try { // try from 0829b562 to 0829b566 has its CatchHandler @ 0829b569 */
    WongWork::CCeraShop::CCeraShop(this_28);
  }
  s_pCeraShop = this_28;
  this_29 = operator_new(0x20,(nothrow_t *)&std::nothrow);
  if (this_29 != (ItemVendingMachine *)0x0) {
                    /* try { // try from 0829b5b5 to 0829b5b9 has its CatchHandler @ 0829b5bc */
    ItemVendingMachine::ItemVendingMachine(this_29);
  }
  s_pItemVendingMachine = this_29;
  this_30 = operator_new(1);
  Secu_DataControl::Secu_DataControl(this_30);
  s_pSecuDataControl = this_30;
  this_31 = operator_new(0x18);
                    /* try { // try from 0829b619 to 0829b61d has its CatchHandler @ 0829b620 */
  CSecu_ProtectionField::CSecu_ProtectionField(this_31);
  s_pSecuProtectionField = this_31;
  this_32 = operator_new(0x18);
                    /* try { // try from 0829b652 to 0829b656 has its CatchHandler @ 0829b659 */
  WongWork::CAutoPunishRuleBlackIPMgr::CAutoPunishRuleBlackIPMgr(this_32);
  g_autoPunishRuleBlackIPMgr = this_32;
  WongWork::CAutoPunishRuleBlackIPMgr::reset(this_32);
  this_33 = operator_new(0x70);
                    /* try { // try from 0829b698 to 0829b69c has its CatchHandler @ 0829b69f */
  WongWork::CAutoPunishRuleHackTypeMgr::CAutoPunishRuleHackTypeMgr(this_33);
  g_autoPunishRuleHackTypeMgr = this_33;
  WongWork::CAutoPunishRuleHackTypeMgr::reset(this_33);
  this_34 = operator_new(0x18);
                    /* try { // try from 0829b6de to 0829b6e2 has its CatchHandler @ 0829b6e5 */
  WongWork::CBlackIPMonitor::CBlackIPMonitor(this_34);
  g_blackIPMonitor = this_34;
  WongWork::CBlackIPMonitor::reset(this_34);
  this_35 = operator_new(0x10);
                    /* try { // try from 0829b724 to 0829b728 has its CatchHandler @ 0829b72b */
  AcceptThread::AcceptThread(this_35);
  s_accept_thr = this_35;
  if (this_35 == (AcceptThread *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate accept thread memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  this_36 = operator_new(0x14c);
                    /* try { // try from 0829b794 to 0829b798 has its CatchHandler @ 0829b79b */
  RefPvpGrade::RefPvpGrade(this_36);
  s_ref_pvp_grade = this_36;
  if (this_36 == (RefPvpGrade *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate pvp grade ref");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  this_37 = operator_new(0x16c,(nothrow_t *)&std::nothrow);
  if (this_37 == (CDBConnector *)0x0) {
    s_db_connector = this_37;
    return 0;
  }
                    /* try { // try from 0829b81c to 0829b820 has its CatchHandler @ 0829b823 */
  CDBConnector::CDBConnector(this_37,s_db_mgr);
  s_db_connector = this_37;
  iVar9 = G_CEnvironment();
  local_3c = (map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
              *)(iVar9 + 0x68);
  iVar9 = G_CEnvironment();
  local_344 = *(undefined4 *)(iVar9 + 0x378);
  std::
  map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
  ::map(local_35c);
  for (local_24 = 1; local_24 < 0xf; local_24 = local_24 + 1) {
    local_310[0] = local_24;
                    /* try { // try from 0829b8ba to 0829bc4c has its CatchHandler @ 0829d3ff */
    std::make_pair<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP&>(local_318,(ENUM_SERVER_GROUP *)local_310);
    std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>::
    pair<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP>(local_320,local_318);
    std::
    map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
    ::insert(local_328);
  }
  local_310[1] = 0;
  iVar9 = std::
          map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
          ::operator[](local_3c,(ENUM_DB_HANDLE_IDX *)(local_310 + 1));
  local_310[2] = 0;
  iVar10 = std::
           map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
           ::operator[](local_3c,(ENUM_DB_HANDLE_IDX *)(local_310 + 2));
  local_310[3] = 0;
  iVar13 = std::
           map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
           ::operator[](local_3c,(ENUM_DB_HANDLE_IDX *)(local_310 + 3));
  uVar27 = *(undefined4 *)(iVar13 + 0x14);
  local_310[4] = 0;
  uVar14 = std::
           map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
           ::operator[](local_3c,(ENUM_DB_HANDLE_IDX *)(local_310 + 4));
  cMyTrace::cMyTrace(local_2fc,"static bool GlobalData::Init()",0x1b0c,9,true,false);
  cMyTrace::operator()
            (local_2fc,"\t- DBConnector Init(masterdb %s/%d/%s/%s) ",uVar14,uVar27,iVar10 + 0x18,
             iVar9 + 0x42);
  local_2ec = 0;
  pSVar15 = (STDBConnInfo *)
            std::
            map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
            ::operator[](local_3c,(ENUM_DB_HANDLE_IDX *)&local_2ec);
  cVar3 = CDBConnector::Init(s_db_connector,pSVar15);
  if (cVar3 != '\x01') {
    cMyTrace::cMyTrace(local_2e8,"static bool GlobalData::Init()",0x1b0f,9,true,true);
    cMyTrace::operator()(local_2e8,"\t- DBConnector Init Fail");
    uVar27 = 0;
    goto LAB_0829d41d;
  }
  cMyTrace::cMyTrace(local_2d8,"static bool GlobalData::Init()",0x1b12,9,false,true);
  cMyTrace::operator()(local_2d8,"Success");
  cMyTrace::cMyTrace(local_2c8,"static bool GlobalData::Init()",0x1b14,9,true,false);
  cMyTrace::operator()(local_2c8,"\t- DBConnector Get Connection Info ");
  cVar3 = CDBConnector::GetConnInfo(s_db_connector,(map *)local_35c,(map *)local_3c);
  if (cVar3 != '\x01') {
    cMyTrace::cMyTrace(local_2b8,"static bool GlobalData::Init()",0x1b17,9,true,true);
    cMyTrace::operator()(local_2b8,"\t- DBConnector Get Connection Info Fail");
    uVar27 = 0;
    goto LAB_0829d41d;
  }
  cMyTrace::cMyTrace(local_2a8,"static bool GlobalData::Init()",0x1b1a,9,false,true);
  cMyTrace::operator()(local_2a8,"Success");
  cMyTrace::cMyTrace(local_298,"static bool GlobalData::Init()",0x1b1c,9,true,true);
  cMyTrace::operator()(local_298,"\t- Open DB ... ");
  std::
  map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
  ::map(local_288,(map *)local_3c);
                    /* try { // try from 0829bc5f to 0829bc63 has its CatchHandler @ 0829bc79 */
  cVar3 = CDBConnector::Connect(s_db_connector,local_288);
                    /* try { // try from 0829bc72 to 0829bc76 has its CatchHandler @ 0829d3ff */
  std::
  map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
  ::~map(local_288);
  if (cVar3 != '\x01') {
                    /* try { // try from 0829bcc9 to 0829bd45 has its CatchHandler @ 0829d3ff */
    cMyTrace::cMyTrace(local_270,"static bool GlobalData::Init()",0x1b1f,9,true,true);
    cMyTrace::operator()(local_270,"\t- DBConnector Connect DB Fail");
    uVar27 = 0;
    goto LAB_0829d41d;
  }
  cMyTrace::cMyTrace(local_260,"static bool GlobalData::Init()",0x1b22,9,true,true);
  cMyTrace::operator()(local_260,"\t- All DB Open Success");
  this_38 = operator_new(0xd0864);
                    /* try { // try from 0829bd4d to 0829bd51 has its CatchHandler @ 0829bd54 */
  WongWork::CSimpleSSO::CSimpleSSO(this_38);
  s_psimpleSSO = this_38;
                    /* try { // try from 0829bd88 to 0829bdaa has its CatchHandler @ 0829d3ff */
  pMVar16 = (MySQL *)DBMgr::GetDBHandle(s_db_mgr,6,0);
  WongWork::CSimpleSSO::init(s_psimpleSSO,pMVar16);
  this_39 = operator_new(0x488);
                    /* try { // try from 0829bdb2 to 0829bdb6 has its CatchHandler @ 0829bdb9 */
  WongWork::CSecurityCardCenter::CSecurityCardCenter(this_39);
  s_securityCardCenter = this_39;
                    /* try { // try from 0829bddd to 0829be78 has its CatchHandler @ 0829d3ff */
  WongWork::CSecurityCardCenter::init(this_39);
  local_38 = operator_new(0x54,(nothrow_t *)&std::nothrow);
  if (local_38 != (CIPGHelper *)0x0) {
    WongWork::IPG::CIPGHelper::CIPGHelper(local_38);
  }
  iVar9 = WongWork::IPG::CIPGHelper::Initialize(local_38,1,5000);
  if (iVar9 < 0) {
    puts("Fail to init IPG Module");
    pCVar2 = local_38;
    if (local_38 != (CIPGHelper *)0x0) {
      WongWork::IPG::CIPGHelper::~CIPGHelper(local_38);
      operator_delete(pCVar2);
    }
    uVar27 = 0;
    goto LAB_0829d41d;
  }
  s_pIPGHelper = local_38;
  CHumanCertifier::init();
  this_40 = operator_new(8);
                    /* try { // try from 0829be80 to 0829be84 has its CatchHandler @ 0829be87 */
  WongWork::CGMAccounts::CGMAccounts(this_40);
  s_pGMAccounts_ = this_40;
                    /* try { // try from 0829bed4 to 0829c2ce has its CatchHandler @ 0829d3ff */
  cMyTrace::cMyTrace(local_250,"static bool GlobalData::Init()",0x1d4d,9,true,false);
  cMyTrace::operator()(local_250,"\t- Init Query Table ");
  pMVar16 = (MySQL *)DBMgr::GetDBHandle(s_db_mgr,2,0);
  pCVar17 = (CQueryCounter *)MySQL::GetQueryCounter(pMVar16);
  cVar3 = CQueryCounter::LoadQueryTable(pCVar17);
  if (cVar3 != '\x01') {
    cMyTrace::cMyTrace(local_240,"static bool GlobalData::Init()",0x1d50,9,true,true);
    cMyTrace::operator()(local_240,"\t- Init Query Table Fail");
    uVar27 = 0;
    goto LAB_0829d41d;
  }
  pMVar16 = (MySQL *)DBMgr::GetDBHandle(s_db_mgr,4,0);
  pCVar17 = (CQueryCounter *)MySQL::GetQueryCounter(pMVar16);
  cVar3 = CQueryCounter::LoadQueryTable(pCVar17);
  if (cVar3 != '\x01') {
    cMyTrace::cMyTrace(local_230,"static bool GlobalData::Init()",0x1d55,9,true,true);
    cMyTrace::operator()(local_230,"\t- Init Query Table Fail");
    uVar27 = 0;
    goto LAB_0829d41d;
  }
  cMyTrace::cMyTrace(local_220,"static bool GlobalData::Init()",0x1d58,9,false,true);
  cMyTrace::operator()(local_220,"Success");
  local_34 = 1;
  local_2d = false;
  pCVar7 = (CEnvironment *)G_CEnvironment();
  iVar9 = CEnvironment::get_channel_no(pCVar7);
  if (iVar9 == local_34) {
    local_2d = true;
  }
  bVar1 = local_2d;
  pCVar18 = (CSyncScript *)sync_script::GetInstanceSyncScript();
  sync_script::CSyncScript::SetEnable(pCVar18,bVar1);
  pCVar18 = (CSyncScript *)sync_script::GetInstanceSyncScript();
  cVar3 = sync_script::CSyncScript::IsEnable(pCVar18);
  if (cVar3 != '\0') {
    local_210 = 5;
    iVar9 = G_CEnvironment();
    iVar9 = std::
            map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
            ::operator[]((map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
                          *)(iVar9 + 0x68),(ENUM_DB_HANDLE_IDX *)&local_210);
    local_20c = 5;
    iVar10 = G_CEnvironment();
    iVar10 = std::
             map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
             ::operator[]((map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
                           *)(iVar10 + 0x68),(ENUM_DB_HANDLE_IDX *)&local_20c);
    local_208 = 5;
    iVar13 = G_CEnvironment();
    iVar13 = std::
             map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
             ::operator[]((map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
                           *)(iVar13 + 0x68),(ENUM_DB_HANDLE_IDX *)&local_208);
    local_204 = 5;
    iVar19 = G_CEnvironment();
    iVar19 = std::
             map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
             ::operator[]((map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
                           *)(iVar19 + 0x68),(ENUM_DB_HANDLE_IDX *)&local_204);
    uVar27 = *(undefined4 *)(iVar19 + 0x14);
    local_200 = 5;
    iVar19 = G_CEnvironment();
    uVar14 = std::
             map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
             ::operator[]((map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
                           *)(iVar19 + 0x68),(ENUM_DB_HANDLE_IDX *)&local_200);
    cVar3 = DBMgr::Open(s_db_mgr,5,uVar14,uVar27,iVar13 + 0x42,iVar10 + 0x18,iVar9 + 0x2d,0);
    if (cVar3 != '\x01') {
      cMyTrace::cMyTrace(local_1fc,"static bool GlobalData::Init()",0x1d8d,9,true,true);
      cMyTrace::operator()(local_1fc,"\t- Failed to open web DB");
      uVar27 = 0;
      goto LAB_0829d41d;
    }
    cMyTrace::cMyTrace(local_1ec,"static bool GlobalData::Init()",0x1d90,9,true,true);
    cMyTrace::operator()(local_1ec,"\t- Success WEB DB OPEN");
  }
  pCVar20 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
  cVar3 = CSyncSlangFilter::AddSlangListName(pCVar20);
  if (cVar3 == '\x01') {
    pCVar20 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
    cVar3 = CSyncSlangFilter::AddSlangList(pCVar20);
    if (cVar3 != '\x01') goto LAB_0829c273;
    bVar1 = false;
  }
  else {
LAB_0829c273:
    bVar1 = true;
  }
  if (bVar1) {
    cMyTrace::cMyTrace(local_1dc,"static bool GlobalData::Init()",0x1d9f,9,true,true);
    cMyTrace::operator()(local_1dc,"Failed to read slang list");
    uVar27 = 0;
  }
  else {
    this_41 = operator_new(0x29c,(nothrow_t *)&std::nothrow);
    if (this_41 == (CEventManager *)0x0) {
      s_event_manager = this_41;
                    /* try { // try from 0829c363 to 0829c3d3 has its CatchHandler @ 0829d3ff */
      cMyTrace::cMyTrace(local_1cc,"static bool GlobalData::Init()",0x1da8,9,true,true);
      cMyTrace::operator()(local_1cc,"Can\'t allocate CEventManager memory");
      uVar27 = 0;
    }
    else {
                    /* try { // try from 0829c2fa to 0829c2fe has its CatchHandler @ 0829c301 */
      CEventManager::CEventManager(this_41);
      s_event_manager = this_41;
      cMyTrace::cMyTrace(local_1bc,"static bool GlobalData::Init()",0x1dc6,9,true,true);
      cMyTrace::operator()(local_1bc,"\t- Load GM List From DB");
      this_42 = operator_new(4,(nothrow_t *)&std::nothrow);
      if (this_42 == (Gm_List *)0x0) {
        gmList = this_42;
                    /* try { // try from 0829c45e to 0829c478 has its CatchHandler @ 0829d3ff */
        cMyTrace::cMyTrace(local_1ac,"static bool GlobalData::Init()",0x1dcd,9,true,true);
        cMyTrace::operator()(local_1ac,"\t- Can\'t allocate memory for a Gm_List");
        uVar27 = 0;
      }
      else {
                    /* try { // try from 0829c3f5 to 0829c3f9 has its CatchHandler @ 0829c3fc */
        Gm_List::Gm_List(this_42);
        gmList = this_42;
        this_43 = operator_new(0x3c,(nothrow_t *)&std::nothrow);
        if (this_43 == (CGM_Manager *)0x0) {
          s_GM_Manager = this_43;
                    /* try { // try from 0829c50d to 0829c599 has its CatchHandler @ 0829d3ff */
          cMyTrace::cMyTrace(local_19c,"static bool GlobalData::Init()",0x1dd6,9,true,true);
          cMyTrace::operator()(local_19c,"Can\'t allocate memory for a CGM_Manager");
          uVar27 = 0;
        }
        else {
                    /* try { // try from 0829c4a4 to 0829c4a8 has its CatchHandler @ 0829c4ab */
          CGM_Manager::CGM_Manager(this_43);
          s_GM_Manager = this_43;
          pCVar21 = (Cipher *)G_Cipher();
          local_2c = Cipher::GetTotalKeyLength(pCVar21);
          for (local_20 = 0; iVar9 = local_20, local_20 < local_2c; local_20 = local_20 + 1) {
            iVar10 = rand();
            local_768[iVar9] = (uchar)iVar10;
          }
          pCVar21 = (Cipher *)G_Cipher();
          Cipher::Initialize(pCVar21,local_768,local_2c);
          pCVar22 = operator_new(0x30,(nothrow_t *)&std::nothrow);
          if (pCVar22 != (CStatisticMgr *)0x0) {
            pCVar28 = pCVar22;
            for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
              *(undefined4 *)pCVar28 = 0;
              pCVar28 = pCVar28 + (uint)bVar29 * -8 + 4;
            }
                    /* try { // try from 0829c5db to 0829c5df has its CatchHandler @ 0829c5e2 */
            CStatisticMgr::CStatisticMgr(pCVar22);
          }
          s_statisticMgr = pCVar22;
          if (pCVar22 == (CStatisticMgr *)0x0) {
                    /* try { // try from 0829c644 to 0829c65e has its CatchHandler @ 0829d3ff */
            cMyTrace::cMyTrace(local_18c,"static bool GlobalData::Init()",0x1df7,9,true,true);
            cMyTrace::operator()(local_18c,"Can\'t allocate memory for a CStatisticMgr");
            uVar27 = 0;
          }
          else {
            this_44 = operator_new(0x32c,(nothrow_t *)&std::nothrow);
            if (this_44 == (CBreakAwayPreventSystem *)0x0) {
              s_BreakAwaySys = this_44;
                    /* try { // try from 0829c6f3 to 0829c70d has its CatchHandler @ 0829d3ff */
              cMyTrace::cMyTrace(local_17c,"static bool GlobalData::Init()",0x1dfe,9,true,true);
              cMyTrace::operator()(local_17c,"Can\'t allocate memory for a s_BreakAwaySys");
              uVar27 = 0;
            }
            else {
                    /* try { // try from 0829c68a to 0829c68e has its CatchHandler @ 0829c691 */
              break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem(this_44);
              s_BreakAwaySys = this_44;
              this_45 = operator_new(4,(nothrow_t *)&std::nothrow);
              if (this_45 == (CExpertJobMgr *)0x0) {
                s_ExpertJobMgr = this_45;
                    /* try { // try from 0829c7a2 to 0829c7bc has its CatchHandler @ 0829d3ff */
                cMyTrace::cMyTrace(local_16c,"static bool GlobalData::Init()",0x1e05,9,true,true);
                cMyTrace::operator()(local_16c,"Can\'t allocate memory for a CExpertJobMgr");
                uVar27 = 0;
              }
              else {
                    /* try { // try from 0829c739 to 0829c73d has its CatchHandler @ 0829c740 */
                expert_job::CExpertJobMgr::CExpertJobMgr(this_45);
                s_ExpertJobMgr = this_45;
                this_46 = operator_new(0x18,(nothrow_t *)&std::nothrow);
                if (this_46 == (CVillageObjectMgr *)0x0) {
                  s_villageObjectMgr = this_46;
                    /* try { // try from 0829c851 to 0829c86b has its CatchHandler @ 0829d3ff */
                  cMyTrace::cMyTrace(local_15c,"static bool GlobalData::Init()",0x1e0c,9,true,true);
                  cMyTrace::operator()(local_15c,"Can\'t allocate memory for a CVillageObjectMgr");
                  uVar27 = 0;
                }
                else {
                    /* try { // try from 0829c7e8 to 0829c7ec has its CatchHandler @ 0829c7ef */
                  village_object::CVillageObjectMgr::CVillageObjectMgr(this_46);
                  s_villageObjectMgr = this_46;
                  this_47 = operator_new(0x24,(nothrow_t *)&std::nothrow);
                  if (this_47 == (CVillageMonsterMgr *)0x0) {
                    s_villageMonsterMgr = this_47;
                    /* try { // try from 0829c900 to 0829c91a has its CatchHandler @ 0829d3ff */
                    cMyTrace::cMyTrace(local_14c,"static bool GlobalData::Init()",0x1e13,9,true,true
                                      );
                    cMyTrace::operator()
                              (local_14c,"Can\'t allocate memory for a CVillageMonsterMgr");
                    uVar27 = 0;
                  }
                  else {
                    /* try { // try from 0829c897 to 0829c89b has its CatchHandler @ 0829c89e */
                    village_attacked::CVillageMonsterMgr::CVillageMonsterMgr(this_47);
                    s_villageMonsterMgr = this_47;
                    this_48 = operator_new(4,(nothrow_t *)&std::nothrow);
                    if (this_48 == (InstanceRentalSystem *)0x0) {
                      s_rentalSystem = this_48;
                    /* try { // try from 0829c9af to 0829ca59 has its CatchHandler @ 0829d3ff */
                      cMyTrace::cMyTrace(local_13c,"static bool GlobalData::Init()",0x1e1b,9,true,
                                         true);
                      cMyTrace::operator()
                                (local_13c,"an`t allocate memory for a InstanceRentalSystem");
                      uVar27 = 0;
                    }
                    else {
                    /* try { // try from 0829c946 to 0829c94a has its CatchHandler @ 0829c94d */
                      InstanceRentalSystem::InstanceRentalSystem(this_48);
                      s_rentalSystem = this_48;
                      this_49 = operator_new(8,(nothrow_t *)&std::nothrow);
                      if (this_49 == (CRevengeDungeon *)0x0) {
                        s_revengeDungeonMgr = this_49;
                        cMyTrace::cMyTrace(local_12c,"static bool GlobalData::Init()",0x1e24,9,true,
                                           true);
                        cMyTrace::operator()
                                  (local_12c,"Can\'t allocate memory for a CRevengeDungeon");
                        uVar27 = 0;
                      }
                      else {
                        village_attacked::CRevengeDungeon::CRevengeDungeon(this_49);
                        s_revengeDungeonMgr = this_49;
                        this_50 = operator_new(0xe4,(nothrow_t *)&std::nothrow);
                        if (this_50 == (CDailyScheduleManager *)0x0) {
                          s_DailyScheduleManager = this_50;
                    /* try { // try from 0829caee to 0829cb08 has its CatchHandler @ 0829d3ff */
                          cMyTrace::cMyTrace(local_11c,"static bool GlobalData::Init()",0x1e2d,9,
                                             true,true);
                          cMyTrace::operator()
                                    (local_11c,"Can\'t allocate memory for a CDailyScheduleManager")
                          ;
                          uVar27 = 0;
                        }
                        else {
                    /* try { // try from 0829ca85 to 0829ca89 has its CatchHandler @ 0829ca8c */
                          CDailyScheduleManager::CDailyScheduleManager(this_50);
                          s_DailyScheduleManager = this_50;
                          this_51 = operator_new(0x1c,(nothrow_t *)&std::nothrow);
                          if (this_51 == (COnlinePreliminaryTeamMgr *)0x0) {
                            s_onlinePreliminaryTeamMgr = this_51;
                    /* try { // try from 0829cb9d to 0829cbb7 has its CatchHandler @ 0829d3ff */
                            cMyTrace::cMyTrace(local_10c,"static bool GlobalData::Init()",0x1e36,9,
                                               true,true);
                            cMyTrace::operator()
                                      (local_10c,
                                       "Can\'t allocate memory for a COnlinePreliminaryTeamMgr");
                            uVar27 = 0;
                          }
                          else {
                    /* try { // try from 0829cb34 to 0829cb38 has its CatchHandler @ 0829cb3b */
                            online_preliminary::COnlinePreliminaryTeamMgr::COnlinePreliminaryTeamMgr
                                      (this_51);
                            s_onlinePreliminaryTeamMgr = this_51;
                            this_52 = operator_new(0x40,(nothrow_t *)&std::nothrow);
                            if (this_52 == (CGameMasterMgr *)0x0) {
                              s_GameMasterMgr = this_52;
                    /* try { // try from 0829cc4c to 0829cdb5 has its CatchHandler @ 0829d3ff */
                              cMyTrace::cMyTrace(local_fc,"static bool GlobalData::Init()",0x1e47,9,
                                                 true,true);
                              cMyTrace::operator()
                                        (local_fc,"Can\'t allocate memory for a CGameMasterMgr");
                              uVar27 = 0;
                            }
                            else {
                    /* try { // try from 0829cbe3 to 0829cbe7 has its CatchHandler @ 0829cbea */
                              game_master::CGameMasterMgr::CGameMasterMgr(this_52);
                              s_GameMasterMgr = this_52;
                              lVar23 = CSystemTime::getCurSec((CSystemTime *)s_systemTime_);
                              TimerUpdatePvPGrade::registNextTimer(lVar23);
                              DB_ReloadAutoPunishRuleBackIP::makeRequest();
                              DB_ReloadAutoPunishRuleHackType::makeRequest();
                              DB_LoadCleanPadPoint::makeRequest();
                              DB_BlackIPMonitor::makeRequest();
                              this_53 = operator_new(4);
                              CBusinessImpl::CBusinessImpl(this_53);
                              s_antibotBusinessImpl_ = this_53;
                              s_antibotChecker_ = (undefined4 *)CreateAntiServerObj("./");
                              if (s_antibotChecker_ == (undefined4 *)0x0) {
                                cMyTrace::cMyTrace(local_ec,"static bool GlobalData::Init()",0x1eb0,
                                                   5);
                                cMyTrace::operator()(local_ec,"AntiBot create fail");
                                uVar27 = 0;
                              }
                              else {
                                local_360[0] = '\0';
                                local_360[1] = '\0';
                                local_360[2] = '\0';
                                local_360[3] = '\0';
                                pCVar7 = (CEnvironment *)G_CEnvironment();
                                uVar27 = CEnvironment::getProcessSequence(pCVar7);
                                sprintf(local_360,"%d",uVar27);
                                (**(code **)*s_antibotChecker_)
                                          (s_antibotChecker_,s_antibotBusinessImpl_,local_360);
                                pCVar22 = operator_new(0x30,(nothrow_t *)&std::nothrow);
                                if (pCVar22 != (CStatisticMgr *)0x0) {
                                  pCVar28 = pCVar22;
                                  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                                    *(undefined4 *)pCVar28 = 0;
                                    pCVar28 = pCVar28 + (uint)bVar29 * -8 + 4;
                                  }
                    /* try { // try from 0829ce01 to 0829ce05 has its CatchHandler @ 0829ce08 */
                                  CStatisticMgr::CStatisticMgr(pCVar22);
                                }
                                s_statisticMgr = pCVar22;
                                if (pCVar22 == (CStatisticMgr *)0x0) {
                    /* try { // try from 0829ce6a to 0829ce84 has its CatchHandler @ 0829d3ff */
                                  cMyTrace::cMyTrace(local_cc,"static bool GlobalData::Init()",
                                                     0x1ebf,9,true,true);
                                  cMyTrace::operator()
                                            (local_cc,"Can\'t allocate memory for a CStatisticMgr");
                                  uVar27 = 0;
                                }
                                else {
                                  this_54 = operator_new(0x30,(nothrow_t *)&std::nothrow);
                                  if (this_54 == (Action *)0x0) {
                                    g_Actions = this_54;
                    /* try { // try from 0829cf19 to 0829cf5a has its CatchHandler @ 0829d3ff */
                                    cMyTrace::cMyTrace(local_bc,"static bool GlobalData::Init()",
                                                       0x1ed9,9,true,true);
                                    cMyTrace::operator()
                                              (local_bc,
                                               "Can\'t allocate memory for a StackableAction::Action()"
                                              );
                                    uVar27 = 0;
                                  }
                                  else {
                    /* try { // try from 0829ceb0 to 0829ceb4 has its CatchHandler @ 0829ceb7 */
                                    StackableAction::Action::Action(this_54);
                                    g_Actions = this_54;
                                    pSVar24 = (Stream *)
                                              StreamPool::Acquire(s_stream_pool,"App.cpp",0x1ee0);
                                    CStreamGuard::CStreamGuard(local_368,pSVar24,true);
                                    pCVar25 = (CStreamGuard *)CStreamGuard::operator*(local_368);
                    /* try { // try from 0829cf8e to 0829cfcf has its CatchHandler @ 0829cfd2 */
                                    CStreamGuard::operator<<(pCVar25,0x277);
                                    pCVar25 = (CStreamGuard *)CStreamGuard::operator*(local_368);
                                    CStreamGuard::operator<<(pCVar25,-1);
                                    MsgQueueMgr::put(s_msgq_mgr,2,local_368);
                    /* try { // try from 0829cff6 to 0829d068 has its CatchHandler @ 0829d3ff */
                                    CStreamGuard::~CStreamGuard(local_368);
                                    cVar3 = InitCaptcha();
                                    if (cVar3 == '\x01') {
                                      Timer_GenerateCaptchaData::RegistNextTimer(3);
                                      this_55 = operator_new(0xc,(nothrow_t *)&std::nothrow);
                                      if (this_55 == (CExtractionMgr *)0x0) {
                                        g_ExtractionMgr = this_55;
                    /* try { // try from 0829d0f3 to 0829d10d has its CatchHandler @ 0829d3ff */
                                        cMyTrace::cMyTrace(local_9c,"static bool GlobalData::Init()"
                                                           ,0x1ef5,9,true,true);
                                        cMyTrace::operator()
                                                  (local_9c,
                                                  "Can\'t allocate memory for a CExtractionMng");
                                        uVar27 = 0;
                                      }
                                      else {
                    /* try { // try from 0829d08a to 0829d08e has its CatchHandler @ 0829d091 */
                                        expert_extraction::CExtractionMgr::CExtractionMgr(this_55);
                                        g_ExtractionMgr = this_55;
                                        this_56 = operator_new(0x14,(nothrow_t *)&std::nothrow);
                                        if (this_56 == (NPC_Teleport *)0x0) {
                                          g_pTeleport = this_56;
                    /* try { // try from 0829d1a2 to 0829d1bc has its CatchHandler @ 0829d3ff */
                                          cMyTrace::cMyTrace(local_8c,
                                                  "static bool GlobalData::Init()",0x1f02,9,true,
                                                  true);
                                          cMyTrace::operator()
                                                    (local_8c,
                                                  "Can\'t allocate memory for a NPC_Teleport()");
                                          uVar27 = 0;
                                        }
                                        else {
                    /* try { // try from 0829d139 to 0829d13d has its CatchHandler @ 0829d140 */
                                          NPC_Teleport::NPC_Teleport(this_56);
                                          g_pTeleport = this_56;
                                          this_57 = operator_new(0x14,(nothrow_t *)&std::nothrow);
                                          if (this_57 == (User_Teleport *)0x0) {
                                            DAT_0941f81c = this_57;
                    /* try { // try from 0829d24e to 0829d265 has its CatchHandler @ 0829d3ff */
                                            cMyTrace::cMyTrace(local_7c,
                                                  "static bool GlobalData::Init()",0x1f09,9,true,
                                                  true);
                                            cMyTrace::operator()
                                                      (local_7c,
                                                  "Can\'t allocate memory for a User_Teleport()");
                                            uVar27 = 0;
                                          }
                                          else {
                    /* try { // try from 0829d1e8 to 0829d1ec has its CatchHandler @ 0829d1ef */
                                            User_Teleport::User_Teleport(this_57);
                                            DAT_0941f81c = this_57;
                                            this_58 = operator_new(0x18,(nothrow_t *)&std::nothrow);
                                            if (this_58 == (CRandomOptionItemHandle *)0x0) {
                                              g_randomOptionHandle = this_58;
                    /* try { // try from 0829d2f7 to 0829d3f0 has its CatchHandler @ 0829d3ff */
                                              cMyTrace::cMyTrace(local_6c,
                                                  "static bool GlobalData::Init()",0x1f12,9,true,
                                                  true);
                                              cMyTrace::operator()
                                                        (local_6c,
                                                  "Can\'t allocate memory for a CRandomOptionItemHandle"
                                                  );
                                              uVar27 = 0;
                                            }
                                            else {
                    /* try { // try from 0829d291 to 0829d295 has its CatchHandler @ 0829d298 */
                                              random_option::CRandomOptionItemHandle::
                                              CRandomOptionItemHandle(this_58);
                                              g_randomOptionHandle = this_58;
                                              pSVar26 = (ServiceRestrictManager *)
                                                        ARAD::Singleton<ServiceRestrictManager>::Get
                                                                  ();
                                              cVar3 = ServiceRestrictManager::initialize(pSVar26);
                                              if (cVar3 == '\x01') {
                                                pSVar26 = (ServiceRestrictManager *)
                                                          ARAD::Singleton<ServiceRestrictManager>::
                                                          Get();
                                                ServiceRestrictManager::savePolicy(pSVar26);
                                                ARAD::Singleton<ServiceRestrictManager>::Get();
                                                ServiceRestrictManager::loadPolicy();
                                                this_59 = (RestrictGeolocation *)
                                                          ARAD::Singleton<RestrictGeolocation>::Get
                                                                    ();
                                                cVar3 = RestrictGeolocation::initGeolocation
                                                                  (this_59);
                                                if (cVar3 == '\x01') {
                                                  uVar27 = 1;
                                                }
                                                else {
                                                  cMyTrace::cMyTrace(local_4c,
                                                  "static bool GlobalData::Init()",0x1f2a,9,true,
                                                  true);
                                                  cMyTrace::operator()
                                                            (local_4c,"Can\'t initialize GeoIP");
                                                  uVar27 = 0;
                                                }
                                              }
                                              else {
                                                cMyTrace::cMyTrace(local_5c,
                                                  "static bool GlobalData::Init()",0x1f1f,9,true,
                                                  true);
                                                cMyTrace::operator()
                                                          (local_5c,
                                                  "Can\'t allocate memory for a ServiceRestrictManager"
                                                  );
                                                uVar27 = 0;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      cMyTrace::cMyTrace(local_ac,"static bool GlobalData::Init()",
                                                         0x1eea,9,true,true);
                                      cMyTrace::operator()
                                                (local_ac,"captcha data initialization failed");
                                      uVar27 = 0;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0829d41d:
  std::
  map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
  ::~map(local_35c);
  return uVar27;
}

```

---

## InitCaptcha

```asm
// === 0829d438 GlobalData::InitCaptcha  [0x0829d438-0x829d4af] ===
 829d438:	55                   	push   %ebp
 829d439:	89 e5                	mov    %esp,%ebp
 829d43b:	83 ec 28             	sub    $0x28,%esp
 829d43e:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 829d445:	00 
 829d446:	c7 44 24 04 d4 7f c1 	movl   $0x8c17fd4,0x4(%esp)
 829d44d:	08 
 829d44e:	c7 04 24 04 f8 41 09 	movl   $0x941f804,(%esp)
 829d455:	e8 3a 13 e4 ff       	call   80de794 <_ZN10CaptchaGen7addFontEPKci>
 829d45a:	83 f0 01             	xor    $0x1,%eax
 829d45d:	84 c0                	test   %al,%al
 829d45f:	74 2b                	je     829d48c <_ZN10GlobalData11InitCaptchaEv+0x54>
 829d461:	c7 44 24 04 f4 7f c1 	movl   $0x8c17ff4,0x4(%esp)
 829d468:	08 
 829d469:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 829d470:	e8 8b fe 45 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 829d475:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 829d47c:	08 
 829d47d:	89 04 24             	mov    %eax,(%esp)
 829d480:	e8 db e3 45 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 829d485:	b8 00 00 00 00       	mov    $0x0,%eax
 829d48a:	eb 22                	jmp    829d4ae <_ZN10GlobalData11InitCaptchaEv+0x76>
 829d48c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 829d493:	eb 09                	jmp    829d49e <_ZN10GlobalData11InitCaptchaEv+0x66>
 829d495:	e8 16 00 00 00       	call   829d4b0 <_ZN10GlobalData19GenerateCaptchaDataEv>
 829d49a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 829d49e:	83 7d f4 27          	cmpl   $0x27,-0xc(%ebp)
 829d4a2:	0f 9e c0             	setle  %al
 829d4a5:	84 c0                	test   %al,%al
 829d4a7:	75 ec                	jne    829d495 <_ZN10GlobalData11InitCaptchaEv+0x5d>
 829d4a9:	b8 01 00 00 00       	mov    $0x1,%eax
 829d4ae:	c9                   	leave
 829d4af:	c3                   	ret

```

```c
// GlobalData::InitCaptcha @ 0x829d438

/* GlobalData::InitCaptcha() */

undefined4 GlobalData::InitCaptcha(void)

{
  char cVar1;
  ostream *this;
  undefined4 uVar2;
  int local_10;
  
  cVar1 = CaptchaGen::addFont((CaptchaGen *)cg_,"captcha_font/SeoulHangangL.ttf",0x24);
  if (cVar1 == '\x01') {
    for (local_10 = 0; local_10 < 0x28; local_10 = local_10 + 1) {
      GenerateCaptchaData();
    }
    uVar2 = 1;
  }
  else {
    this = std::operator<<((ostream *)&std::cerr,"[GlobalData::Init] cg.loadFont fail");
    std::ostream::operator<<(this,std::endl<char,std::char_traits<char>>);
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## initTournamentDB

```asm
// === 0829dd82 GlobalData::initTournamentDB  [0x0829dd82-0x829e0b1] ===
 829dd82:	55                   	push   %ebp
 829dd83:	89 e5                	mov    %esp,%ebp
 829dd85:	56                   	push   %esi
 829dd86:	53                   	push   %ebx
 829dd87:	81 ec 80 04 00 00    	sub    $0x480,%esp
 829dd8d:	e8 15 c6 e3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 829dd92:	89 04 24             	mov    %eax,(%esp)
 829dd95:	e8 86 8d e7 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 829dd9a:	83 f8 07             	cmp    $0x7,%eax
 829dd9d:	74 1b                	je     829ddba <_ZN10GlobalData16initTournamentDBEPKc+0x38>
 829dd9f:	e8 03 c6 e3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 829dda4:	89 04 24             	mov    %eax,(%esp)
 829dda7:	e8 72 35 e5 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 829ddac:	83 f0 01             	xor    $0x1,%eax
 829ddaf:	84 c0                	test   %al,%al
 829ddb1:	74 07                	je     829ddba <_ZN10GlobalData16initTournamentDBEPKc+0x38>
 829ddb3:	b8 01 00 00 00       	mov    $0x1,%eax
 829ddb8:	eb 05                	jmp    829ddbf <_ZN10GlobalData16initTournamentDBEPKc+0x3d>
 829ddba:	b8 00 00 00 00       	mov    $0x0,%eax
 829ddbf:	84 c0                	test   %al,%al
 829ddc1:	74 0a                	je     829ddcd <_ZN10GlobalData16initTournamentDBEPKc+0x4b>
 829ddc3:	bb 01 00 00 00       	mov    $0x1,%ebx
 829ddc8:	e9 d9 02 00 00       	jmp    829e0a6 <_ZN10GlobalData16initTournamentDBEPKc+0x324>
 829ddcd:	8d 85 8c fb ff ff    	lea    -0x474(%ebp),%eax
 829ddd3:	89 04 24             	mov    %eax,(%esp)
 829ddd6:	e8 09 cb 00 00       	call   82aa8e4 <_ZN13CDBEnviromentC1Ev>
 829dddb:	8b 45 08             	mov    0x8(%ebp),%eax
 829ddde:	89 44 24 04          	mov    %eax,0x4(%esp)
 829dde2:	8d 85 8c fb ff ff    	lea    -0x474(%ebp),%eax
 829dde8:	89 04 24             	mov    %eax,(%esp)
 829ddeb:	e8 06 02 ee ff       	call   817dff6 <_ZN12CEnvironment13set_file_nameEPKc>
 829ddf0:	8d 85 8c fb ff ff    	lea    -0x474(%ebp),%eax
 829ddf6:	89 04 24             	mov    %eax,(%esp)
 829ddf9:	e8 52 26 ff ff       	call   8290450 <_ZN12CEnvironment4loadEv>
 829ddfe:	83 f0 01             	xor    $0x1,%eax
 829de01:	84 c0                	test   %al,%al
 829de03:	74 0a                	je     829de0f <_ZN10GlobalData16initTournamentDBEPKc+0x8d>
 829de05:	bb 00 00 00 00       	mov    $0x0,%ebx
 829de0a:	e9 89 02 00 00       	jmp    829e098 <_ZN10GlobalData16initTournamentDBEPKc+0x316>
 829de0f:	a1 48 f7 41 09       	mov    0x941f748,%eax
 829de14:	85 c0                	test   %eax,%eax
 829de16:	75 0a                	jne    829de22 <_ZN10GlobalData16initTournamentDBEPKc+0xa0>
 829de18:	bb 00 00 00 00       	mov    $0x0,%ebx
 829de1d:	e9 76 02 00 00       	jmp    829e098 <_ZN10GlobalData16initTournamentDBEPKc+0x316>
 829de22:	e8 5a e3 e2 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829de27:	8d 50 50             	lea    0x50(%eax),%edx
 829de2a:	8d 45 8c             	lea    -0x74(%ebp),%eax
 829de2d:	89 54 24 04          	mov    %edx,0x4(%esp)
 829de31:	89 04 24             	mov    %eax,(%esp)
 829de34:	e8 35 5a 01 00       	call   82b386e <_ZNSt3mapI17ENUM_SERVER_GROUPS_ISsSsSt4lessISsESaISt4pairIKSsSsEEES1_IS0_ESaIS3_IKS0_S7_EEE5beginEv>
 829de39:	83 ec 04             	sub    $0x4,%esp
 829de3c:	e9 bb 01 00 00       	jmp    829dffc <_ZN10GlobalData16initTournamentDBEPKc+0x27a>
 829de41:	8d 45 8c             	lea    -0x74(%ebp),%eax
 829de44:	89 04 24             	mov    %eax,(%esp)
 829de47:	e8 d6 58 01 00       	call   82b3722 <_ZNKSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPSt3mapISsSsSt4lessISsESaIS0_IKSsSsEEEEEptEv>
 829de4c:	8b 00                	mov    (%eax),%eax
 829de4e:	89 45 88             	mov    %eax,-0x78(%ebp)
 829de51:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 829de57:	89 04 24             	mov    %eax,(%esp)
 829de5a:	e8 a7 54 01 00       	call   82b3306 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPSt4lessIS0_ESaISt4pairIKS0_S1_EEEC1Ev>
 829de5f:	c7 45 ac 02 00 00 00 	movl   $0x2,-0x54(%ebp)
 829de66:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 829de69:	8d 55 88             	lea    -0x78(%ebp),%edx
 829de6c:	89 54 24 08          	mov    %edx,0x8(%esp)
 829de70:	8d 55 ac             	lea    -0x54(%ebp),%edx
 829de73:	89 54 24 04          	mov    %edx,0x4(%esp)
 829de77:	89 04 24             	mov    %eax,(%esp)
 829de7a:	e8 00 55 01 00       	call   82b337f <_ZSt9make_pairI18ENUM_DB_HANDLE_IDXR17ENUM_SERVER_GROUPESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 829de7f:	83 ec 04             	sub    $0x4,%esp
 829de82:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 829de85:	89 44 24 04          	mov    %eax,0x4(%esp)
 829de89:	8d 45 9c             	lea    -0x64(%ebp),%eax
 829de8c:	89 04 24             	mov    %eax,(%esp)
 829de8f:	e8 32 55 01 00       	call   82b33c6 <_ZNSt4pairIK18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPEC1IS0_S2_EEOS_IT_T0_E>
 829de94:	8d 45 94             	lea    -0x6c(%ebp),%eax
 829de97:	8d 55 9c             	lea    -0x64(%ebp),%edx
 829de9a:	89 54 24 08          	mov    %edx,0x8(%esp)
 829de9e:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 829dea4:	89 54 24 04          	mov    %edx,0x4(%esp)
 829dea8:	89 04 24             	mov    %eax,(%esp)
 829deab:	e8 46 55 01 00       	call   82b33f6 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPSt4lessIS0_ESaISt4pairIKS0_S1_EEE6insertERKS6_>
 829deb0:	83 ec 04             	sub    $0x4,%esp
 829deb3:	c7 45 c8 03 00 00 00 	movl   $0x3,-0x38(%ebp)
 829deba:	8d 45 c0             	lea    -0x40(%ebp),%eax
 829debd:	8d 55 88             	lea    -0x78(%ebp),%edx
 829dec0:	89 54 24 08          	mov    %edx,0x8(%esp)
 829dec4:	8d 55 c8             	lea    -0x38(%ebp),%edx
 829dec7:	89 54 24 04          	mov    %edx,0x4(%esp)
 829decb:	89 04 24             	mov    %eax,(%esp)
 829dece:	e8 ac 54 01 00       	call   82b337f <_ZSt9make_pairI18ENUM_DB_HANDLE_IDXR17ENUM_SERVER_GROUPESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 829ded3:	83 ec 04             	sub    $0x4,%esp
 829ded6:	8d 45 c0             	lea    -0x40(%ebp),%eax
 829ded9:	89 44 24 04          	mov    %eax,0x4(%esp)
 829dedd:	8d 45 b8             	lea    -0x48(%ebp),%eax
 829dee0:	89 04 24             	mov    %eax,(%esp)
 829dee3:	e8 de 54 01 00       	call   82b33c6 <_ZNSt4pairIK18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPEC1IS0_S2_EEOS_IT_T0_E>
 829dee8:	8d 45 b0             	lea    -0x50(%ebp),%eax
 829deeb:	8d 55 b8             	lea    -0x48(%ebp),%edx
 829deee:	89 54 24 08          	mov    %edx,0x8(%esp)
 829def2:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 829def8:	89 54 24 04          	mov    %edx,0x4(%esp)
 829defc:	89 04 24             	mov    %eax,(%esp)
 829deff:	e8 f2 54 01 00       	call   82b33f6 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPSt4lessIS0_ESaISt4pairIKS0_S1_EEE6insertERKS6_>
 829df04:	83 ec 04             	sub    $0x4,%esp
 829df07:	e8 75 e2 e2 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829df0c:	8d 90 80 00 00 00    	lea    0x80(%eax),%edx
 829df12:	8d 45 88             	lea    -0x78(%ebp),%eax
 829df15:	89 44 24 04          	mov    %eax,0x4(%esp)
 829df19:	89 14 24             	mov    %edx,(%esp)
 829df1c:	e8 91 59 01 00       	call   82b38b2 <_ZNSt3mapI17ENUM_SERVER_GROUPS_I18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS1_ESaISt4pairIKS1_S2_EEES3_IS0_ESaIS5_IKS0_S9_EEEixERSB_>
 829df21:	89 45 f4             	mov    %eax,-0xc(%ebp)
 829df24:	a1 48 f7 41 09       	mov    0x941f748,%eax
 829df29:	8b 55 f4             	mov    -0xc(%ebp),%edx
 829df2c:	89 54 24 08          	mov    %edx,0x8(%esp)
 829df30:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 829df36:	89 54 24 04          	mov    %edx,0x4(%esp)
 829df3a:	89 04 24             	mov    %eax,(%esp)
 829df3d:	e8 88 ea e4 ff       	call   80ec9ca <_ZN12CDBConnector11GetConnInfoERSt3mapI18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPSt4lessIS1_ESaISt4pairIKS1_S2_EEERS0_IS1_12STDBConnInfoS4_SaIS5_IS6_SB_EEE>
 829df42:	83 f0 01             	xor    $0x1,%eax
 829df45:	84 c0                	test   %al,%al
 829df47:	74 0f                	je     829df58 <_ZN10GlobalData16initTournamentDBEPKc+0x1d6>
 829df49:	bb 00 00 00 00       	mov    $0x0,%ebx
 829df4e:	be 00 00 00 00       	mov    $0x0,%esi
 829df53:	e9 83 00 00 00       	jmp    829dfdb <_ZN10GlobalData16initTournamentDBEPKc+0x259>
 829df58:	8b 45 f4             	mov    -0xc(%ebp),%eax
 829df5b:	89 44 24 04          	mov    %eax,0x4(%esp)
 829df5f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 829df62:	89 04 24             	mov    %eax,(%esp)
 829df65:	e8 b8 54 01 00       	call   82b3422 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEEC1ERKS8_>
 829df6a:	a1 48 f7 41 09       	mov    0x941f748,%eax
 829df6f:	8d 55 cc             	lea    -0x34(%ebp),%edx
 829df72:	89 54 24 04          	mov    %edx,0x4(%esp)
 829df76:	89 04 24             	mov    %eax,(%esp)
 829df79:	e8 7a e9 e4 ff       	call   80ec8f8 <_ZN12CDBConnector22ConnectWithServerGroupESt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS1_ESaISt4pairIKS1_S2_EEE>
 829df7e:	be 01 00 00 00       	mov    $0x1,%esi
 829df83:	31 c6                	xor    %eax,%esi
 829df85:	8d 45 cc             	lea    -0x34(%ebp),%eax
 829df88:	89 04 24             	mov    %eax,(%esp)
 829df8b:	e8 7e df e2 ff       	call   80cbf0e <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 829df90:	eb 15                	jmp    829dfa7 <_ZN10GlobalData16initTournamentDBEPKc+0x225>
 829df92:	89 d3                	mov    %edx,%ebx
 829df94:	89 c6                	mov    %eax,%esi
 829df96:	8d 45 cc             	lea    -0x34(%ebp),%eax
 829df99:	89 04 24             	mov    %eax,(%esp)
 829df9c:	e8 6d df e2 ff       	call   80cbf0e <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 829dfa1:	89 f0                	mov    %esi,%eax
 829dfa3:	89 da                	mov    %ebx,%edx
 829dfa5:	eb 19                	jmp    829dfc0 <_ZN10GlobalData16initTournamentDBEPKc+0x23e>
 829dfa7:	89 f0                	mov    %esi,%eax
 829dfa9:	84 c0                	test   %al,%al
 829dfab:	74 0c                	je     829dfb9 <_ZN10GlobalData16initTournamentDBEPKc+0x237>
 829dfad:	bb 00 00 00 00       	mov    $0x0,%ebx
 829dfb2:	be 00 00 00 00       	mov    $0x0,%esi
 829dfb7:	eb 22                	jmp    829dfdb <_ZN10GlobalData16initTournamentDBEPKc+0x259>
 829dfb9:	be 01 00 00 00       	mov    $0x1,%esi
 829dfbe:	eb 1b                	jmp    829dfdb <_ZN10GlobalData16initTournamentDBEPKc+0x259>
 829dfc0:	89 d3                	mov    %edx,%ebx
 829dfc2:	89 c6                	mov    %eax,%esi
 829dfc4:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 829dfca:	89 04 24             	mov    %eax,(%esp)
 829dfcd:	e8 68 c8 00 00       	call   82aa83a <_ZNSt3mapI18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 829dfd2:	89 f0                	mov    %esi,%eax
 829dfd4:	89 da                	mov    %ebx,%edx
 829dfd6:	e9 9f 00 00 00       	jmp    829e07a <_ZN10GlobalData16initTournamentDBEPKc+0x2f8>
 829dfdb:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 829dfe1:	89 04 24             	mov    %eax,(%esp)
 829dfe4:	e8 51 c8 00 00       	call   82aa83a <_ZNSt3mapI18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 829dfe9:	85 f6                	test   %esi,%esi
 829dfeb:	0f 84 a7 00 00 00    	je     829e098 <_ZN10GlobalData16initTournamentDBEPKc+0x316>
 829dff1:	8d 45 8c             	lea    -0x74(%ebp),%eax
 829dff4:	89 04 24             	mov    %eax,(%esp)
 829dff7:	e8 98 58 01 00       	call   82b3894 <_ZNSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPSt3mapISsSsSt4lessISsESaIS0_IKSsSsEEEEEppEv>
 829dffc:	e8 80 e1 e2 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829e001:	8d 50 50             	lea    0x50(%eax),%edx
 829e004:	8d 45 90             	lea    -0x70(%ebp),%eax
 829e007:	89 54 24 04          	mov    %edx,0x4(%esp)
 829e00b:	89 04 24             	mov    %eax,(%esp)
 829e00e:	e8 d5 56 01 00       	call   82b36e8 <_ZNSt3mapI17ENUM_SERVER_GROUPS_ISsSsSt4lessISsESaISt4pairIKSsSsEEES1_IS0_ESaIS3_IKS0_S7_EEE3endEv>
 829e013:	83 ec 04             	sub    $0x4,%esp
 829e016:	8d 45 90             	lea    -0x70(%ebp),%eax
 829e019:	89 44 24 04          	mov    %eax,0x4(%esp)
 829e01d:	8d 45 8c             	lea    -0x74(%ebp),%eax
 829e020:	89 04 24             	mov    %eax,(%esp)
 829e023:	e8 e6 56 01 00       	call   82b370e <_ZNKSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPSt3mapISsSsSt4lessISsESaIS0_IKSsSsEEEEEneERKSB_>
 829e028:	84 c0                	test   %al,%al
 829e02a:	0f 85 11 fe ff ff    	jne    829de41 <_ZN10GlobalData16initTournamentDBEPKc+0xbf>
 829e030:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 829e037:	00 
 829e038:	c7 44 24 08 aa 20 00 	movl   $0x20aa,0x8(%esp)
 829e03f:	00 
 829e040:	c7 44 24 04 00 b1 c1 	movl   $0x8c1b100,0x4(%esp)
 829e047:	08 
 829e048:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 829e04b:	89 04 24             	mov    %eax,(%esp)
 829e04e:	e8 c5 16 2b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 829e053:	c7 44 24 04 b8 80 c1 	movl   $0x8c180b8,0x4(%esp)
 829e05a:	08 
 829e05b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 829e05e:	89 04 24             	mov    %eax,(%esp)
 829e061:	e8 22 17 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829e066:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 829e06b:	89 04 24             	mov    %eax,(%esp)
 829e06e:	e8 99 61 00 00       	call   82a420c <_ZN5DBMgr16activateGlobalDBEv>
 829e073:	bb 01 00 00 00       	mov    $0x1,%ebx
 829e078:	eb 1e                	jmp    829e098 <_ZN10GlobalData16initTournamentDBEPKc+0x316>
 829e07a:	89 d3                	mov    %edx,%ebx
 829e07c:	89 c6                	mov    %eax,%esi
 829e07e:	8d 85 8c fb ff ff    	lea    -0x474(%ebp),%eax
 829e084:	89 04 24             	mov    %eax,(%esp)
 829e087:	e8 82 c8 00 00       	call   82aa90e <_ZN13CDBEnviromentD1Ev>
 829e08c:	89 f0                	mov    %esi,%eax
 829e08e:	89 da                	mov    %ebx,%edx
 829e090:	89 04 24             	mov    %eax,(%esp)
 829e093:	e8 b8 56 84 00       	call   8ae3750 <_Unwind_Resume>
 829e098:	8d 85 8c fb ff ff    	lea    -0x474(%ebp),%eax
 829e09e:	89 04 24             	mov    %eax,(%esp)
 829e0a1:	e8 68 c8 00 00       	call   82aa90e <_ZN13CDBEnviromentD1Ev>
 829e0a6:	89 d8                	mov    %ebx,%eax
 829e0a8:	8d 65 f8             	lea    -0x8(%ebp),%esp
 829e0ab:	83 c4 00             	add    $0x0,%esp
 829e0ae:	5b                   	pop    %ebx
 829e0af:	5e                   	pop    %esi
 829e0b0:	5d                   	pop    %ebp
 829e0b1:	c3                   	ret

```

```c
// GlobalData::initTournamentDB @ 0x829dd82

/* GlobalData::initTournamentDB(char const*) */

undefined4 GlobalData::initTournamentDB(char *param_1)

{
  bool bVar1;
  char cVar2;
  GameWorld *pGVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 unaff_EBX;
  CDBEnviroment local_478 [996];
  map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
  local_94 [24];
  undefined4 local_7c;
  map<ENUM_SERVER_GROUP,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>>
  local_78 [4];
  map<ENUM_SERVER_GROUP,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>>
  local_74 [4];
  pair local_70 [8];
  pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP> local_68 [8];
  ENUM_DB_HANDLE_IDX local_60 [8];
  undefined4 local_58;
  pair local_54 [8];
  pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP> local_4c [8];
  ENUM_DB_HANDLE_IDX local_44 [8];
  undefined4 local_3c;
  map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
  local_38 [24];
  cMyTrace local_20 [16];
  map *local_10;
  
  pGVar3 = (GameWorld *)G_GameWorld();
  iVar4 = GameWorld::GetChannelType(pGVar3);
  if (iVar4 != 7) {
    pGVar3 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar3);
    if (cVar2 != '\x01') {
      bVar1 = true;
      goto LAB_0829ddbf;
    }
  }
  bVar1 = false;
LAB_0829ddbf:
  if (bVar1) {
    unaff_EBX = 1;
  }
  else {
    CDBEnviroment::CDBEnviroment(local_478);
    CEnvironment::set_file_name((CEnvironment *)local_478,param_1);
                    /* try { // try from 0829ddf9 to 0829de5e has its CatchHandler @ 0829e07a */
    cVar2 = CEnvironment::load((CEnvironment *)local_478);
    if (cVar2 == '\x01') {
      if (s_db_connector == (CDBConnector *)0x0) {
        unaff_EBX = 0;
      }
      else {
        G_CEnvironment();
        std::
        map<ENUM_SERVER_GROUP,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>>
        ::begin(local_78);
        while( true ) {
          G_CEnvironment();
          std::
          map<ENUM_SERVER_GROUP,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>>
          ::end(local_74);
          cVar2 = std::
                  _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>
                  ::operator!=((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>
                                *)local_78,(_Rb_tree_iterator *)local_74);
          if (cVar2 == '\0') break;
          puVar5 = (undefined4 *)
                   std::
                   _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>
                   ::operator->((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>
                                 *)local_78);
          local_7c = *puVar5;
          std::
          map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
          ::map(local_94);
          local_58 = 2;
                    /* try { // try from 0829de7a to 0829df69 has its CatchHandler @ 0829dfc0 */
          std::make_pair<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP&>
                    (local_60,(ENUM_SERVER_GROUP *)&local_58);
          std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>::
          pair<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP>(local_68,local_60);
          std::
          map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
          ::insert(local_70);
          local_3c = 3;
          std::make_pair<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP&>
                    (local_44,(ENUM_SERVER_GROUP *)&local_3c);
          std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>::
          pair<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP>(local_4c,local_44);
          std::
          map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
          ::insert(local_54);
          iVar4 = G_CEnvironment();
          local_10 = (map *)std::
                            map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>>>>
                            ::operator[]((map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>>>>
                                          *)(iVar4 + 0x80),(ENUM_SERVER_GROUP *)&local_7c);
          cVar2 = CDBConnector::GetConnInfo(s_db_connector,(map *)local_94,local_10);
          if (cVar2 == '\x01') {
            std::
            map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
            ::map(local_38,local_10);
                    /* try { // try from 0829df79 to 0829df7d has its CatchHandler @ 0829df92 */
            cVar2 = CDBConnector::ConnectWithServerGroup(s_db_connector,local_38);
                    /* try { // try from 0829df8b to 0829df8f has its CatchHandler @ 0829dfc0 */
            std::
            map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
            ::~map(local_38);
            if (cVar2 == '\x01') {
              bVar1 = true;
            }
            else {
              unaff_EBX = 0;
              bVar1 = false;
            }
          }
          else {
            unaff_EBX = 0;
            bVar1 = false;
          }
                    /* try { // try from 0829dfe4 to 0829e065 has its CatchHandler @ 0829e07a */
          std::
          map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
          ::~map(local_94);
          if (!bVar1) goto LAB_0829e098;
          std::
          _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>
          ::operator++((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>
                        *)local_78);
        }
        cMyTrace::cMyTrace(local_20,"static bool GlobalData::initTournamentDB(const char*)",0x20aa,0
                          );
        cMyTrace::operator()(local_20,"This is Tournament PvP channel");
        DBMgr::activateGlobalDB(s_db_mgr);
        unaff_EBX = 1;
      }
    }
    else {
      unaff_EBX = 0;
    }
LAB_0829e098:
    CDBEnviroment::~CDBEnviroment(local_478);
  }
  return unaff_EBX;
}

```

---

## setCurrentPacketPool

```asm
// === 0829e4c4 GlobalData::setCurrentPacketPool  [0x0829e4c4-0x829e5be] ===
 829e4c4:	55                   	push   %ebp
 829e4c5:	89 e5                	mov    %esp,%ebp
 829e4c7:	83 ec 28             	sub    $0x28,%esp
 829e4ca:	8b 45 08             	mov    0x8(%ebp),%eax
 829e4cd:	85 c0                	test   %eax,%eax
 829e4cf:	78 08                	js     829e4d9 <_ZN10GlobalData20setCurrentPacketPoolE11THREAD_TYPEm+0x15>
 829e4d1:	8b 45 08             	mov    0x8(%ebp),%eax
 829e4d4:	83 f8 08             	cmp    $0x8,%eax
 829e4d7:	7e 44                	jle    829e51d <_ZN10GlobalData20setCurrentPacketPoolE11THREAD_TYPEm+0x59>
 829e4d9:	8b 45 08             	mov    0x8(%ebp),%eax
 829e4dc:	8b 55 0c             	mov    0xc(%ebp),%edx
 829e4df:	89 54 24 18          	mov    %edx,0x18(%esp)
 829e4e3:	89 44 24 14          	mov    %eax,0x14(%esp)
 829e4e7:	c7 44 24 10 d8 80 c1 	movl   $0x8c180d8,0x10(%esp)
 829e4ee:	08 
 829e4ef:	c7 44 24 0c 90 21 00 	movl   $0x2190,0xc(%esp)
 829e4f6:	00 
 829e4f7:	c7 44 24 08 a0 b0 c1 	movl   $0x8c1b0a0,0x8(%esp)
 829e4fe:	08 
 829e4ff:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 829e506:	08 
 829e507:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 829e50e:	e8 f7 56 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 829e513:	b8 00 00 00 00       	mov    $0x0,%eax
 829e518:	e9 a0 00 00 00       	jmp    829e5bd <_ZN10GlobalData20setCurrentPacketPoolE11THREAD_TYPEm+0xf9>
 829e51d:	8b 45 08             	mov    0x8(%ebp),%eax
 829e520:	8b 04 85 80 bd 40 09 	mov    0x940bd80(,%eax,4),%eax
 829e527:	89 04 24             	mov    %eax,(%esp)
 829e52a:	e8 d1 89 00 00       	call   82a6f00 <_ZN10PacketPool11getThreadIDEv>
 829e52f:	89 44 24 04          	mov    %eax,0x4(%esp)
 829e533:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 829e53a:	e8 01 ac 43 00       	call   86d9140 <pthread_equal>
 829e53f:	85 c0                	test   %eax,%eax
 829e541:	0f 94 c0             	sete   %al
 829e544:	84 c0                	test   %al,%al
 829e546:	74 57                	je     829e59f <_ZN10GlobalData20setCurrentPacketPoolE11THREAD_TYPEm+0xdb>
 829e548:	8b 45 08             	mov    0x8(%ebp),%eax
 829e54b:	8b 04 85 80 bd 40 09 	mov    0x940bd80(,%eax,4),%eax
 829e552:	89 04 24             	mov    %eax,(%esp)
 829e555:	e8 a6 89 00 00       	call   82a6f00 <_ZN10PacketPool11getThreadIDEv>
 829e55a:	8b 55 08             	mov    0x8(%ebp),%edx
 829e55d:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 829e561:	8b 45 0c             	mov    0xc(%ebp),%eax
 829e564:	89 44 24 18          	mov    %eax,0x18(%esp)
 829e568:	89 54 24 14          	mov    %edx,0x14(%esp)
 829e56c:	c7 44 24 10 1c 81 c1 	movl   $0x8c1811c,0x10(%esp)
 829e573:	08 
 829e574:	c7 44 24 0c 95 21 00 	movl   $0x2195,0xc(%esp)
 829e57b:	00 
 829e57c:	c7 44 24 08 a0 b0 c1 	movl   $0x8c1b0a0,0x8(%esp)
 829e583:	08 
 829e584:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 829e58b:	08 
 829e58c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 829e593:	e8 72 56 83 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 829e598:	b8 00 00 00 00       	mov    $0x0,%eax
 829e59d:	eb 1e                	jmp    829e5bd <_ZN10GlobalData20setCurrentPacketPoolE11THREAD_TYPEm+0xf9>
 829e59f:	8b 45 08             	mov    0x8(%ebp),%eax
 829e5a2:	8b 04 85 80 bd 40 09 	mov    0x940bd80(,%eax,4),%eax
 829e5a9:	8b 55 0c             	mov    0xc(%ebp),%edx
 829e5ac:	89 54 24 04          	mov    %edx,0x4(%esp)
 829e5b0:	89 04 24             	mov    %eax,(%esp)
 829e5b3:	e8 3a 89 00 00       	call   82a6ef2 <_ZN10PacketPool11setThreadIDEm>
 829e5b8:	b8 01 00 00 00       	mov    $0x1,%eax
 829e5bd:	c9                   	leave
 829e5be:	c3                   	ret

```

```c
// GlobalData::setCurrentPacketPool @ 0x829e4c4

/* GlobalData::setCurrentPacketPool(THREAD_TYPE, unsigned long) */

undefined4 GlobalData::setCurrentPacketPool(int param_1,ulong param_2)

{
  undefined4 uVar1;
  pthread_t __thread2;
  int iVar2;
  
  if ((param_1 < 0) || (8 < param_1)) {
    LogManager::logFormat
              (1,"App.cpp","static bool GlobalData::setCurrentPacketPool(THREAD_TYPE, pthread_t)",
               0x2190,"[PacketPool setCurrentThreadID err] pool_type(%d), thread_id(%08x)",param_1,
               param_2);
    uVar1 = 0;
  }
  else {
    __thread2 = PacketPool::getThreadID(*(PacketPool **)(s_packet_pool_list + param_1 * 4));
    iVar2 = pthread_equal(0,__thread2);
    if (iVar2 == 0) {
      uVar1 = PacketPool::getThreadID(*(PacketPool **)(s_packet_pool_list + param_1 * 4));
      LogManager::logFormat
                (1,"App.cpp","static bool GlobalData::setCurrentPacketPool(THREAD_TYPE, pthread_t)",
                 0x2195,
                 "[PacketPool already ThreadID setting] pool_type(%d), thread_id(%08x) alreadyID(%08x)"
                 ,param_1,param_2,uVar1);
      uVar1 = 0;
    }
    else {
      PacketPool::setThreadID(*(PacketPool **)(s_packet_pool_list + param_1 * 4),param_2);
      uVar1 = 1;
    }
  }
  return uVar1;
}

```

