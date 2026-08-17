# PvP_MissionSystem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## Factory

```asm
// === 085e2132 PvP_MissionSystem::Factory  [0x085e2132-0x85e262d] ===
 85e2132:	55                   	push   %ebp
 85e2133:	89 e5                	mov    %esp,%ebp
 85e2135:	57                   	push   %edi
 85e2136:	56                   	push   %esi
 85e2137:	53                   	push   %ebx
 85e2138:	83 ec 3c             	sub    $0x3c,%esp
 85e213b:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85e2142:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2145:	8b 40 34             	mov    0x34(%eax),%eax
 85e2148:	83 f8 0f             	cmp    $0xf,%eax
 85e214b:	0f 87 d2 04 00 00    	ja     85e2623 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x4f1>
 85e2151:	8b 04 85 cc 2a cc 08 	mov    0x8cc2acc(,%eax,4),%eax
 85e2158:	ff e0                	jmp    *%eax
 85e215a:	c7 04 24 44 00 00 00 	movl   $0x44,(%esp)
 85e2161:	e8 ea 22 14 00       	call   8724450 <_Znwj>
 85e2166:	89 c3                	mov    %eax,%ebx
 85e2168:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e216b:	8b 50 7c             	mov    0x7c(%eax),%edx
 85e216e:	89 d8                	mov    %ebx,%eax
 85e2170:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e2174:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e2177:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e217b:	89 04 24             	mov    %eax,(%esp)
 85e217e:	e8 25 48 00 00       	call   85e69a8 <_ZN22CMission_winning_countC1ERK13MissionScripti>
 85e2183:	eb 18                	jmp    85e219d <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x6b>
 85e2185:	89 d6                	mov    %edx,%esi
 85e2187:	89 c7                	mov    %eax,%edi
 85e2189:	89 1c 24             	mov    %ebx,(%esp)
 85e218c:	e8 5f 23 14 00       	call   87244f0 <_ZdlPv>
 85e2191:	89 f8                	mov    %edi,%eax
 85e2193:	89 f2                	mov    %esi,%edx
 85e2195:	89 04 24             	mov    %eax,(%esp)
 85e2198:	e8 b3 15 50 00       	call   8ae3750 <_Unwind_Resume>
 85e219d:	89 d8                	mov    %ebx,%eax
 85e219f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85e21a2:	e9 7c 04 00 00       	jmp    85e2623 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x4f1>
 85e21a7:	c7 04 24 48 00 00 00 	movl   $0x48,(%esp)
 85e21ae:	e8 9d 22 14 00       	call   8724450 <_Znwj>
 85e21b3:	89 c3                	mov    %eax,%ebx
 85e21b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e21b8:	8b 88 80 00 00 00    	mov    0x80(%eax),%ecx
 85e21be:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e21c1:	8b 50 7c             	mov    0x7c(%eax),%edx
 85e21c4:	89 d8                	mov    %ebx,%eax
 85e21c6:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85e21ca:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e21ce:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e21d1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e21d5:	89 04 24             	mov    %eax,(%esp)
 85e21d8:	e8 5b 48 00 00       	call   85e6a38 <_ZN23CMission_winning_streakC1ERK13MissionScriptii>
 85e21dd:	eb 18                	jmp    85e21f7 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0xc5>
 85e21df:	89 d6                	mov    %edx,%esi
 85e21e1:	89 c7                	mov    %eax,%edi
 85e21e3:	89 1c 24             	mov    %ebx,(%esp)
 85e21e6:	e8 05 23 14 00       	call   87244f0 <_ZdlPv>
 85e21eb:	89 f8                	mov    %edi,%eax
 85e21ed:	89 f2                	mov    %esi,%edx
 85e21ef:	89 04 24             	mov    %eax,(%esp)
 85e21f2:	e8 59 15 50 00       	call   8ae3750 <_Unwind_Resume>
 85e21f7:	89 d8                	mov    %ebx,%eax
 85e21f9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85e21fc:	e9 22 04 00 00       	jmp    85e2623 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x4f1>
 85e2201:	c7 04 24 44 00 00 00 	movl   $0x44,(%esp)
 85e2208:	e8 43 22 14 00       	call   8724450 <_Znwj>
 85e220d:	89 c3                	mov    %eax,%ebx
 85e220f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2212:	8b 50 7c             	mov    0x7c(%eax),%edx
 85e2215:	89 d8                	mov    %ebx,%eax
 85e2217:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e221b:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e221e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e2222:	89 04 24             	mov    %eax,(%esp)
 85e2225:	e8 be 48 00 00       	call   85e6ae8 <_ZN13CMission_joinC1ERK13MissionScripti>
 85e222a:	eb 18                	jmp    85e2244 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x112>
 85e222c:	89 d6                	mov    %edx,%esi
 85e222e:	89 c7                	mov    %eax,%edi
 85e2230:	89 1c 24             	mov    %ebx,(%esp)
 85e2233:	e8 b8 22 14 00       	call   87244f0 <_ZdlPv>
 85e2238:	89 f8                	mov    %edi,%eax
 85e223a:	89 f2                	mov    %esi,%edx
 85e223c:	89 04 24             	mov    %eax,(%esp)
 85e223f:	e8 0c 15 50 00       	call   8ae3750 <_Unwind_Resume>
 85e2244:	89 d8                	mov    %ebx,%eax
 85e2246:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85e2249:	e9 d5 03 00 00       	jmp    85e2623 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x4f1>
 85e224e:	c7 04 24 44 00 00 00 	movl   $0x44,(%esp)
 85e2255:	e8 f6 21 14 00       	call   8724450 <_Znwj>
 85e225a:	89 c3                	mov    %eax,%ebx
 85e225c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e225f:	8b 50 7c             	mov    0x7c(%eax),%edx
 85e2262:	89 d8                	mov    %ebx,%eax
 85e2264:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e2268:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e226b:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e226f:	89 04 24             	mov    %eax,(%esp)
 85e2272:	e8 b3 48 00 00       	call   85e6b2a <_ZN19CMission_kill_countC1ERK13MissionScripti>
 85e2277:	eb 18                	jmp    85e2291 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x15f>
 85e2279:	89 d6                	mov    %edx,%esi
 85e227b:	89 c7                	mov    %eax,%edi
 85e227d:	89 1c 24             	mov    %ebx,(%esp)
 85e2280:	e8 6b 22 14 00       	call   87244f0 <_ZdlPv>
 85e2285:	89 f8                	mov    %edi,%eax
 85e2287:	89 f2                	mov    %esi,%edx
 85e2289:	89 04 24             	mov    %eax,(%esp)
 85e228c:	e8 bf 14 50 00       	call   8ae3750 <_Unwind_Resume>
 85e2291:	89 d8                	mov    %ebx,%eax
 85e2293:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85e2296:	e9 88 03 00 00       	jmp    85e2623 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x4f1>
 85e229b:	c7 04 24 44 00 00 00 	movl   $0x44,(%esp)
 85e22a2:	e8 a9 21 14 00       	call   8724450 <_Znwj>
 85e22a7:	89 c3                	mov    %eax,%ebx
 85e22a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e22ac:	8b 50 7c             	mov    0x7c(%eax),%edx
 85e22af:	89 d8                	mov    %ebx,%eax
 85e22b1:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e22b5:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e22b8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e22bc:	89 04 24             	mov    %eax,(%esp)
 85e22bf:	e8 a8 48 00 00       	call   85e6b6c <_ZN23CMission_hereafter_joinC1ERK13MissionScripti>
 85e22c4:	eb 18                	jmp    85e22de <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x1ac>
 85e22c6:	89 d6                	mov    %edx,%esi
 85e22c8:	89 c7                	mov    %eax,%edi
 85e22ca:	89 1c 24             	mov    %ebx,(%esp)
 85e22cd:	e8 1e 22 14 00       	call   87244f0 <_ZdlPv>
 85e22d2:	89 f8                	mov    %edi,%eax
 85e22d4:	89 f2                	mov    %esi,%edx
 85e22d6:	89 04 24             	mov    %eax,(%esp)
 85e22d9:	e8 72 14 50 00       	call   8ae3750 <_Unwind_Resume>
 85e22de:	89 d8                	mov    %ebx,%eax
 85e22e0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85e22e3:	e9 3b 03 00 00       	jmp    85e2623 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x4f1>
 85e22e8:	c7 04 24 44 00 00 00 	movl   $0x44,(%esp)
 85e22ef:	e8 5c 21 14 00       	call   8724450 <_Znwj>
 85e22f4:	89 c3                	mov    %eax,%ebx
 85e22f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e22f9:	8b 50 7c             	mov    0x7c(%eax),%edx
 85e22fc:	89 d8                	mov    %ebx,%eax
 85e22fe:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e2302:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e2305:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e2309:	89 04 24             	mov    %eax,(%esp)
 85e230c:	e8 9d 48 00 00       	call   85e6bae <_ZN32CMission_hereafter_winning_countC1ERK13MissionScripti>
 85e2311:	eb 18                	jmp    85e232b <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x1f9>
 85e2313:	89 d6                	mov    %edx,%esi
 85e2315:	89 c7                	mov    %eax,%edi
 85e2317:	89 1c 24             	mov    %ebx,(%esp)
 85e231a:	e8 d1 21 14 00       	call   87244f0 <_ZdlPv>
 85e231f:	89 f8                	mov    %edi,%eax
 85e2321:	89 f2                	mov    %esi,%edx
 85e2323:	89 04 24             	mov    %eax,(%esp)
 85e2326:	e8 25 14 50 00       	call   8ae3750 <_Unwind_Resume>
 85e232b:	89 d8                	mov    %ebx,%eax
 85e232d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85e2330:	e9 ee 02 00 00       	jmp    85e2623 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x4f1>
 85e2335:	c7 04 24 48 00 00 00 	movl   $0x48,(%esp)
 85e233c:	e8 0f 21 14 00       	call   8724450 <_Znwj>
 85e2341:	89 c3                	mov    %eax,%ebx
 85e2343:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2346:	8b 88 80 00 00 00    	mov    0x80(%eax),%ecx
 85e234c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e234f:	8b 50 7c             	mov    0x7c(%eax),%edx
 85e2352:	89 d8                	mov    %ebx,%eax
 85e2354:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85e2358:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e235c:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e235f:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e2363:	89 04 24             	mov    %eax,(%esp)
 85e2366:	e8 85 48 00 00       	call   85e6bf0 <_ZN18CMission_remain_hpC1ERK13MissionScriptii>
 85e236b:	eb 18                	jmp    85e2385 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x253>
 85e236d:	89 d6                	mov    %edx,%esi
 85e236f:	89 c7                	mov    %eax,%edi
 85e2371:	89 1c 24             	mov    %ebx,(%esp)
 85e2374:	e8 77 21 14 00       	call   87244f0 <_ZdlPv>
 85e2379:	89 f8                	mov    %edi,%eax
 85e237b:	89 f2                	mov    %esi,%edx
 85e237d:	89 04 24             	mov    %eax,(%esp)
 85e2380:	e8 cb 13 50 00       	call   8ae3750 <_Unwind_Resume>
 85e2385:	89 d8                	mov    %ebx,%eax
 85e2387:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85e238a:	e9 94 02 00 00       	jmp    85e2623 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x4f1>
 85e238f:	c7 04 24 44 00 00 00 	movl   $0x44,(%esp)
 85e2396:	e8 b5 20 14 00       	call   8724450 <_Znwj>
 85e239b:	89 c3                	mov    %eax,%ebx
 85e239d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e23a0:	8b 50 7c             	mov    0x7c(%eax),%edx
 85e23a3:	89 d8                	mov    %ebx,%eax
 85e23a5:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e23a9:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e23ac:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e23b0:	89 04 24             	mov    %eax,(%esp)
 85e23b3:	e8 84 48 00 00       	call   85e6c3c <_ZN16CMission_revengeC1ERK13MissionScripti>
 85e23b8:	eb 18                	jmp    85e23d2 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x2a0>
 85e23ba:	89 d6                	mov    %edx,%esi
 85e23bc:	89 c7                	mov    %eax,%edi
 85e23be:	89 1c 24             	mov    %ebx,(%esp)
 85e23c1:	e8 2a 21 14 00       	call   87244f0 <_ZdlPv>
 85e23c6:	89 f8                	mov    %edi,%eax
 85e23c8:	89 f2                	mov    %esi,%edx
 85e23ca:	89 04 24             	mov    %eax,(%esp)
 85e23cd:	e8 7e 13 50 00       	call   8ae3750 <_Unwind_Resume>
 85e23d2:	89 d8                	mov    %ebx,%eax
 85e23d4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85e23d7:	e9 47 02 00 00       	jmp    85e2623 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x4f1>
 85e23dc:	c7 04 24 44 00 00 00 	movl   $0x44,(%esp)
 85e23e3:	e8 68 20 14 00       	call   8724450 <_Znwj>
 85e23e8:	89 c3                	mov    %eax,%ebx
 85e23ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e23ed:	8b 50 7c             	mov    0x7c(%eax),%edx
 85e23f0:	89 d8                	mov    %ebx,%eax
 85e23f2:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e23f6:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e23f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e23fd:	89 04 24             	mov    %eax,(%esp)
 85e2400:	e8 79 48 00 00       	call   85e6c7e <_ZN29CMission_hereafter_kill_countC1ERK13MissionScripti>
 85e2405:	eb 18                	jmp    85e241f <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x2ed>
 85e2407:	89 d6                	mov    %edx,%esi
 85e2409:	89 c7                	mov    %eax,%edi
 85e240b:	89 1c 24             	mov    %ebx,(%esp)
 85e240e:	e8 dd 20 14 00       	call   87244f0 <_ZdlPv>
 85e2413:	89 f8                	mov    %edi,%eax
 85e2415:	89 f2                	mov    %esi,%edx
 85e2417:	89 04 24             	mov    %eax,(%esp)
 85e241a:	e8 31 13 50 00       	call   8ae3750 <_Unwind_Resume>
 85e241f:	89 d8                	mov    %ebx,%eax
 85e2421:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85e2424:	e9 fa 01 00 00       	jmp    85e2623 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x4f1>
 85e2429:	c7 04 24 48 00 00 00 	movl   $0x48,(%esp)
 85e2430:	e8 1b 20 14 00       	call   8724450 <_Znwj>
 85e2435:	89 c3                	mov    %eax,%ebx
 85e2437:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e243a:	8b 88 80 00 00 00    	mov    0x80(%eax),%ecx
 85e2440:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2443:	8b 50 7c             	mov    0x7c(%eax),%edx
 85e2446:	89 d8                	mov    %ebx,%eax
 85e2448:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85e244c:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e2450:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e2453:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e2457:	89 04 24             	mov    %eax,(%esp)
 85e245a:	e8 61 48 00 00       	call   85e6cc0 <_ZN13CMission_killC1ERK13MissionScriptii>
 85e245f:	eb 18                	jmp    85e2479 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x347>
 85e2461:	89 d6                	mov    %edx,%esi
 85e2463:	89 c7                	mov    %eax,%edi
 85e2465:	89 1c 24             	mov    %ebx,(%esp)
 85e2468:	e8 83 20 14 00       	call   87244f0 <_ZdlPv>
 85e246d:	89 f8                	mov    %edi,%eax
 85e246f:	89 f2                	mov    %esi,%edx
 85e2471:	89 04 24             	mov    %eax,(%esp)
 85e2474:	e8 d7 12 50 00       	call   8ae3750 <_Unwind_Resume>
 85e2479:	89 d8                	mov    %ebx,%eax
 85e247b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85e247e:	e9 a0 01 00 00       	jmp    85e2623 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x4f1>
 85e2483:	c7 04 24 4c 00 00 00 	movl   $0x4c,(%esp)
 85e248a:	e8 c1 1f 14 00       	call   8724450 <_Znwj>
 85e248f:	89 c3                	mov    %eax,%ebx
 85e2491:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2494:	8b b0 84 00 00 00    	mov    0x84(%eax),%esi
 85e249a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e249d:	8b 88 80 00 00 00    	mov    0x80(%eax),%ecx
 85e24a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e24a6:	8b 50 7c             	mov    0x7c(%eax),%edx
 85e24a9:	89 d8                	mov    %ebx,%eax
 85e24ab:	89 74 24 10          	mov    %esi,0x10(%esp)
 85e24af:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85e24b3:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e24b7:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e24ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e24be:	89 04 24             	mov    %eax,(%esp)
 85e24c1:	e8 46 48 00 00       	call   85e6d0c <_ZN15CMission_withinC1ERK13MissionScriptiii>
 85e24c6:	eb 18                	jmp    85e24e0 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x3ae>
 85e24c8:	89 d6                	mov    %edx,%esi
 85e24ca:	89 c7                	mov    %eax,%edi
 85e24cc:	89 1c 24             	mov    %ebx,(%esp)
 85e24cf:	e8 1c 20 14 00       	call   87244f0 <_ZdlPv>
 85e24d4:	89 f8                	mov    %edi,%eax
 85e24d6:	89 f2                	mov    %esi,%edx
 85e24d8:	89 04 24             	mov    %eax,(%esp)
 85e24db:	e8 70 12 50 00       	call   8ae3750 <_Unwind_Resume>
 85e24e0:	89 d8                	mov    %ebx,%eax
 85e24e2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85e24e5:	e9 39 01 00 00       	jmp    85e2623 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x4f1>
 85e24ea:	c7 04 24 48 00 00 00 	movl   $0x48,(%esp)
 85e24f1:	e8 5a 1f 14 00       	call   8724450 <_Znwj>
 85e24f6:	89 c3                	mov    %eax,%ebx
 85e24f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e24fb:	8b 88 80 00 00 00    	mov    0x80(%eax),%ecx
 85e2501:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2504:	8b 50 7c             	mov    0x7c(%eax),%edx
 85e2507:	89 d8                	mov    %ebx,%eax
 85e2509:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85e250d:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e2511:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e2514:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e2518:	89 04 24             	mov    %eax,(%esp)
 85e251b:	e8 40 48 00 00       	call   85e6d60 <_ZN19CMission_remains_hpC1ERK13MissionScriptii>
 85e2520:	eb 18                	jmp    85e253a <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x408>
 85e2522:	89 d6                	mov    %edx,%esi
 85e2524:	89 c7                	mov    %eax,%edi
 85e2526:	89 1c 24             	mov    %ebx,(%esp)
 85e2529:	e8 c2 1f 14 00       	call   87244f0 <_ZdlPv>
 85e252e:	89 f8                	mov    %edi,%eax
 85e2530:	89 f2                	mov    %esi,%edx
 85e2532:	89 04 24             	mov    %eax,(%esp)
 85e2535:	e8 16 12 50 00       	call   8ae3750 <_Unwind_Resume>
 85e253a:	89 d8                	mov    %ebx,%eax
 85e253c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85e253f:	e9 df 00 00 00       	jmp    85e2623 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x4f1>
 85e2544:	c7 04 24 44 00 00 00 	movl   $0x44,(%esp)
 85e254b:	e8 00 1f 14 00       	call   8724450 <_Znwj>
 85e2550:	89 c3                	mov    %eax,%ebx
 85e2552:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2555:	8b 50 7c             	mov    0x7c(%eax),%edx
 85e2558:	89 d8                	mov    %ebx,%eax
 85e255a:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e255e:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e2561:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e2565:	89 04 24             	mov    %eax,(%esp)
 85e2568:	e8 3f 48 00 00       	call   85e6dac <_ZN21CMission_move_channelC1ERK13MissionScripti>
 85e256d:	eb 18                	jmp    85e2587 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x455>
 85e256f:	89 d6                	mov    %edx,%esi
 85e2571:	89 c7                	mov    %eax,%edi
 85e2573:	89 1c 24             	mov    %ebx,(%esp)
 85e2576:	e8 75 1f 14 00       	call   87244f0 <_ZdlPv>
 85e257b:	89 f8                	mov    %edi,%eax
 85e257d:	89 f2                	mov    %esi,%edx
 85e257f:	89 04 24             	mov    %eax,(%esp)
 85e2582:	e8 c9 11 50 00       	call   8ae3750 <_Unwind_Resume>
 85e2587:	89 d8                	mov    %ebx,%eax
 85e2589:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85e258c:	e9 92 00 00 00       	jmp    85e2623 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x4f1>
 85e2591:	c7 04 24 44 00 00 00 	movl   $0x44,(%esp)
 85e2598:	e8 b3 1e 14 00       	call   8724450 <_Znwj>
 85e259d:	89 c3                	mov    %eax,%ebx
 85e259f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e25a2:	8b 50 7c             	mov    0x7c(%eax),%edx
 85e25a5:	89 d8                	mov    %ebx,%eax
 85e25a7:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e25ab:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e25ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e25b2:	89 04 24             	mov    %eax,(%esp)
 85e25b5:	e8 32 48 00 00       	call   85e6dec <_ZN27CMission_move_channel_totalC1ERK13MissionScripti>
 85e25ba:	eb 18                	jmp    85e25d4 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x4a2>
 85e25bc:	89 d6                	mov    %edx,%esi
 85e25be:	89 c7                	mov    %eax,%edi
 85e25c0:	89 1c 24             	mov    %ebx,(%esp)
 85e25c3:	e8 28 1f 14 00       	call   87244f0 <_ZdlPv>
 85e25c8:	89 f8                	mov    %edi,%eax
 85e25ca:	89 f2                	mov    %esi,%edx
 85e25cc:	89 04 24             	mov    %eax,(%esp)
 85e25cf:	e8 7c 11 50 00       	call   8ae3750 <_Unwind_Resume>
 85e25d4:	89 d8                	mov    %ebx,%eax
 85e25d6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85e25d9:	eb 48                	jmp    85e2623 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x4f1>
 85e25db:	c7 04 24 58 00 00 00 	movl   $0x58,(%esp)
 85e25e2:	e8 69 1e 14 00       	call   8724450 <_Znwj>
 85e25e7:	89 c3                	mov    %eax,%ebx
 85e25e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e25ec:	8d 50 60             	lea    0x60(%eax),%edx
 85e25ef:	89 d8                	mov    %ebx,%eax
 85e25f1:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e25f5:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e25f8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e25fc:	89 04 24             	mov    %eax,(%esp)
 85e25ff:	e8 3c 48 00 00       	call   85e6e40 <_ZN20CMission_combo_clearC1ERK13MissionScriptRKSt3mapI16combo_script_key17combo_script_dataSt4lessIS4_ESaISt4pairIKS4_S5_EEE>
 85e2604:	eb 18                	jmp    85e261e <_ZN17PvP_MissionSystem7FactoryERK13MissionScript+0x4ec>
 85e2606:	89 d6                	mov    %edx,%esi
 85e2608:	89 c7                	mov    %eax,%edi
 85e260a:	89 1c 24             	mov    %ebx,(%esp)
 85e260d:	e8 de 1e 14 00       	call   87244f0 <_ZdlPv>
 85e2612:	89 f8                	mov    %edi,%eax
 85e2614:	89 f2                	mov    %esi,%edx
 85e2616:	89 04 24             	mov    %eax,(%esp)
 85e2619:	e8 32 11 50 00       	call   8ae3750 <_Unwind_Resume>
 85e261e:	89 d8                	mov    %ebx,%eax
 85e2620:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85e2623:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85e2626:	83 c4 3c             	add    $0x3c,%esp
 85e2629:	5b                   	pop    %ebx
 85e262a:	5e                   	pop    %esi
 85e262b:	5f                   	pop    %edi
 85e262c:	5d                   	pop    %ebp
 85e262d:	c3                   	ret

```

```c
// PvP_MissionSystem::Factory @ 0x85e2132

/* PvP_MissionSystem::Factory(MissionScript const&) */

CMission_winning_count * __thiscall
PvP_MissionSystem::Factory(PvP_MissionSystem *this,MissionScript *param_1)

{
  CMission_winning_count *local_20;
  
  local_20 = (CMission_winning_count *)0x0;
  switch(*(undefined4 *)(param_1 + 0x34)) {
  case 0:
    local_20 = operator_new(0x44);
                    /* try { // try from 085e217e to 085e2182 has its CatchHandler @ 085e2185 */
    CMission_winning_count::CMission_winning_count(local_20,param_1,*(int *)(param_1 + 0x7c));
    break;
  case 1:
    local_20 = operator_new(0x48);
                    /* try { // try from 085e21d8 to 085e21dc has its CatchHandler @ 085e21df */
    CMission_winning_streak::CMission_winning_streak
              ((CMission_winning_streak *)local_20,param_1,*(int *)(param_1 + 0x7c),
               *(int *)(param_1 + 0x80));
    break;
  case 2:
    local_20 = operator_new(0x44);
                    /* try { // try from 085e2225 to 085e2229 has its CatchHandler @ 085e222c */
    CMission_join::CMission_join((CMission_join *)local_20,param_1,*(int *)(param_1 + 0x7c));
    break;
  case 3:
    local_20 = operator_new(0x44);
                    /* try { // try from 085e2272 to 085e2276 has its CatchHandler @ 085e2279 */
    CMission_kill_count::CMission_kill_count
              ((CMission_kill_count *)local_20,param_1,*(int *)(param_1 + 0x7c));
    break;
  case 4:
    local_20 = operator_new(0x44);
                    /* try { // try from 085e22bf to 085e22c3 has its CatchHandler @ 085e22c6 */
    CMission_hereafter_join::CMission_hereafter_join
              ((CMission_hereafter_join *)local_20,param_1,*(int *)(param_1 + 0x7c));
    break;
  case 5:
    local_20 = operator_new(0x44);
                    /* try { // try from 085e230c to 085e2310 has its CatchHandler @ 085e2313 */
    CMission_hereafter_winning_count::CMission_hereafter_winning_count
              ((CMission_hereafter_winning_count *)local_20,param_1,*(int *)(param_1 + 0x7c));
    break;
  case 6:
    local_20 = operator_new(0x48);
                    /* try { // try from 085e2366 to 085e236a has its CatchHandler @ 085e236d */
    CMission_remain_hp::CMission_remain_hp
              ((CMission_remain_hp *)local_20,param_1,*(int *)(param_1 + 0x7c),
               *(int *)(param_1 + 0x80));
    break;
  case 7:
    local_20 = operator_new(0x44);
                    /* try { // try from 085e23b3 to 085e23b7 has its CatchHandler @ 085e23ba */
    CMission_revenge::CMission_revenge
              ((CMission_revenge *)local_20,param_1,*(int *)(param_1 + 0x7c));
    break;
  case 8:
    local_20 = operator_new(0x44);
                    /* try { // try from 085e2400 to 085e2404 has its CatchHandler @ 085e2407 */
    CMission_hereafter_kill_count::CMission_hereafter_kill_count
              ((CMission_hereafter_kill_count *)local_20,param_1,*(int *)(param_1 + 0x7c));
    break;
  case 9:
    local_20 = operator_new(0x48);
                    /* try { // try from 085e245a to 085e245e has its CatchHandler @ 085e2461 */
    CMission_kill::CMission_kill
              ((CMission_kill *)local_20,param_1,*(int *)(param_1 + 0x7c),*(int *)(param_1 + 0x80));
    break;
  case 0xb:
    local_20 = operator_new(0x4c);
                    /* try { // try from 085e24c1 to 085e24c5 has its CatchHandler @ 085e24c8 */
    CMission_within::CMission_within
              ((CMission_within *)local_20,param_1,*(int *)(param_1 + 0x7c),*(int *)(param_1 + 0x80)
               ,*(int *)(param_1 + 0x84));
    break;
  case 0xc:
    local_20 = operator_new(0x48);
                    /* try { // try from 085e251b to 085e251f has its CatchHandler @ 085e2522 */
    CMission_remains_hp::CMission_remains_hp
              ((CMission_remains_hp *)local_20,param_1,*(int *)(param_1 + 0x7c),
               *(int *)(param_1 + 0x80));
    break;
  case 0xd:
    local_20 = operator_new(0x44);
                    /* try { // try from 085e2568 to 085e256c has its CatchHandler @ 085e256f */
    CMission_move_channel::CMission_move_channel
              ((CMission_move_channel *)local_20,param_1,*(int *)(param_1 + 0x7c));
    break;
  case 0xe:
    local_20 = operator_new(0x44);
                    /* try { // try from 085e25b5 to 085e25b9 has its CatchHandler @ 085e25bc */
    CMission_move_channel_total::CMission_move_channel_total
              ((CMission_move_channel_total *)local_20,param_1,*(int *)(param_1 + 0x7c));
    break;
  case 0xf:
    local_20 = operator_new(0x58);
                    /* try { // try from 085e25ff to 085e2603 has its CatchHandler @ 085e2606 */
    CMission_combo_clear::CMission_combo_clear
              ((CMission_combo_clear *)local_20,param_1,(map *)(param_1 + 0x60));
  }
  return local_20;
}

```

---

## Load_EtcParameter

```asm
// === 085e1fee PvP_MissionSystem::Load_EtcParameter  [0x085e1fee-0x85e206d] ===
 85e1fee:	55                   	push   %ebp
 85e1fef:	89 e5                	mov    %esp,%ebp
 85e1ff1:	56                   	push   %esi
 85e1ff2:	53                   	push   %ebx
 85e1ff3:	83 ec 40             	sub    $0x40,%esp
 85e1ff6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85e1ff9:	89 04 24             	mov    %eax,(%esp)
 85e1ffc:	e8 c3 4f 00 00       	call   85e6fc4 <_ZN22MissionParameterScriptC1Ev>
 85e2001:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85e2004:	89 04 24             	mov    %eax,(%esp)
 85e2007:	e8 e0 97 47 00       	call   8a5b7ec <_Z31importPvpMissionParameterScriptR22MissionParameterScript>
 85e200c:	83 f0 01             	xor    $0x1,%eax
 85e200f:	84 c0                	test   %al,%al
 85e2011:	74 13                	je     85e2026 <_ZN17PvP_MissionSystem17Load_EtcParameterEv+0x38>
 85e2013:	c7 04 24 b3 2a cc 08 	movl   $0x8cc2ab3,(%esp)
 85e201a:	e8 51 c5 a9 ff       	call   807e570 <puts@plt>
 85e201f:	bb 00 00 00 00       	mov    $0x0,%ebx
 85e2024:	eb 34                	jmp    85e205a <_ZN17PvP_MissionSystem17Load_EtcParameterEv+0x6c>
 85e2026:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85e2029:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e202d:	8b 45 08             	mov    0x8(%ebp),%eax
 85e2030:	89 04 24             	mov    %eax,(%esp)
 85e2033:	e8 36 00 00 00       	call   85e206e <_ZN17PvP_MissionSystem21copy_missionParameterERK22MissionParameterScript>
 85e2038:	bb 01 00 00 00       	mov    $0x1,%ebx
 85e203d:	eb 1b                	jmp    85e205a <_ZN17PvP_MissionSystem17Load_EtcParameterEv+0x6c>
 85e203f:	89 d3                	mov    %edx,%ebx
 85e2041:	89 c6                	mov    %eax,%esi
 85e2043:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85e2046:	89 04 24             	mov    %eax,(%esp)
 85e2049:	e8 e2 4f 00 00       	call   85e7030 <_ZN22MissionParameterScriptD1Ev>
 85e204e:	89 f0                	mov    %esi,%eax
 85e2050:	89 da                	mov    %ebx,%edx
 85e2052:	89 04 24             	mov    %eax,(%esp)
 85e2055:	e8 f6 16 50 00       	call   8ae3750 <_Unwind_Resume>
 85e205a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85e205d:	89 04 24             	mov    %eax,(%esp)
 85e2060:	e8 cb 4f 00 00       	call   85e7030 <_ZN22MissionParameterScriptD1Ev>
 85e2065:	89 d8                	mov    %ebx,%eax
 85e2067:	83 c4 40             	add    $0x40,%esp
 85e206a:	5b                   	pop    %ebx
 85e206b:	5e                   	pop    %esi
 85e206c:	5d                   	pop    %ebp
 85e206d:	c3                   	ret

```

```c
// PvP_MissionSystem::Load_EtcParameter @ 0x85e1fee

/* PvP_MissionSystem::Load_EtcParameter() */

bool __thiscall PvP_MissionSystem::Load_EtcParameter(PvP_MissionSystem *this)

{
  char cVar1;
  MissionParameterScript local_34 [40];
  
  MissionParameterScript::MissionParameterScript(local_34);
                    /* try { // try from 085e2007 to 085e2037 has its CatchHandler @ 085e203f */
  cVar1 = importPvpMissionParameterScript(local_34);
  if (cVar1 == '\x01') {
    copy_missionParameter(this,local_34);
  }
  else {
    puts("Mission Parameter Error!");
  }
  MissionParameterScript::~MissionParameterScript(local_34);
  return cVar1 == '\x01';
}

```

---

## Load_list

```asm
// === 085e1dc6 PvP_MissionSystem::Load_list  [0x085e1dc6-0x85e1fed] ===
 85e1dc6:	55                   	push   %ebp
 85e1dc7:	89 e5                	mov    %esp,%ebp
 85e1dc9:	56                   	push   %esi
 85e1dca:	53                   	push   %ebx
 85e1dcb:	81 ec d0 00 00 00    	sub    $0xd0,%esp
 85e1dd1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85e1dd8:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85e1ddb:	c7 44 24 04 00 02 50 	movl   $0x9500200,0x4(%esp)
 85e1de2:	09 
 85e1de3:	89 04 24             	mov    %eax,(%esp)
 85e1de6:	e8 07 43 b0 ff       	call   80e60f2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 85e1deb:	83 ec 04             	sub    $0x4,%esp
 85e1dee:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 85e1df4:	89 04 24             	mov    %eax,(%esp)
 85e1df7:	e8 90 9c 47 00       	call   8a5ba8c <_ZN13MissionScriptC1Ev>
 85e1dfc:	e9 70 01 00 00       	jmp    85e1f71 <_ZN17PvP_MissionSystem9Load_listEv+0x1ab>
 85e1e01:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85e1e04:	89 04 24             	mov    %eax,(%esp)
 85e1e07:	e8 ac 43 b0 ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 85e1e0c:	83 c0 04             	add    $0x4,%eax
 85e1e0f:	89 04 24             	mov    %eax,(%esp)
 85e1e12:	e8 d9 46 12 00       	call   87064f0 <_ZNKSs5c_strEv>
 85e1e17:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85e1e1a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85e1e1e:	0f 84 7f 01 00 00    	je     85e1fa3 <_ZN17PvP_MissionSystem9Load_listEv+0x1dd>
 85e1e24:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e1e27:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e1e2b:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 85e1e31:	89 04 24             	mov    %eax,(%esp)
 85e1e34:	e8 ef 8d 47 00       	call   8a5ac28 <_Z22importPvpMissionScriptP13MissionScriptPKc>
 85e1e39:	83 f0 01             	xor    $0x1,%eax
 85e1e3c:	84 c0                	test   %al,%al
 85e1e3e:	74 1d                	je     85e1e5d <_ZN17PvP_MissionSystem9Load_listEv+0x97>
 85e1e40:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e1e43:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e1e47:	c7 04 24 99 2a cc 08 	movl   $0x8cc2a99,(%esp)
 85e1e4e:	e8 0d bd a9 ff       	call   807db60 <printf@plt>
 85e1e53:	bb 00 00 00 00       	mov    $0x0,%ebx
 85e1e58:	e9 77 01 00 00       	jmp    85e1fd4 <_ZN17PvP_MissionSystem9Load_listEv+0x20e>
 85e1e5d:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 85e1e63:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e1e67:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1e6a:	89 04 24             	mov    %eax,(%esp)
 85e1e6d:	e8 c0 02 00 00       	call   85e2132 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript>
 85e1e72:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 85e1e75:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85e1e78:	85 c0                	test   %eax,%eax
 85e1e7a:	75 0a                	jne    85e1e86 <_ZN17PvP_MissionSystem9Load_listEv+0xc0>
 85e1e7c:	bb 00 00 00 00       	mov    $0x0,%ebx
 85e1e81:	e9 4e 01 00 00       	jmp    85e1fd4 <_ZN17PvP_MissionSystem9Load_listEv+0x20e>
 85e1e86:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85e1e89:	89 04 24             	mov    %eax,(%esp)
 85e1e8c:	e8 75 4a 00 00       	call   85e6906 <_ZNK8CMission15GetMissionIndexEv>
 85e1e91:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85e1e94:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e1e97:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 85e1e9a:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e1e9e:	8d 55 e8             	lea    -0x18(%ebp),%edx
 85e1ea1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e1ea5:	89 04 24             	mov    %eax,(%esp)
 85e1ea8:	e8 ba 56 00 00       	call   85e7567 <_ZSt9make_pairIiRP8CMissionESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 85e1ead:	83 ec 04             	sub    $0x4,%esp
 85e1eb0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e1eb3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e1eb7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85e1eba:	89 04 24             	mov    %eax,(%esp)
 85e1ebd:	e8 ec 56 00 00       	call   85e75ae <_ZNSt4pairIKiP8CMissionEC1IiS2_EEOS_IT_T0_E>
 85e1ec2:	8b 55 08             	mov    0x8(%ebp),%edx
 85e1ec5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85e1ec8:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 85e1ecb:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85e1ecf:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e1ed3:	89 04 24             	mov    %eax,(%esp)
 85e1ed6:	e8 03 57 00 00       	call   85e75de <_ZNSt3mapIiP8CMissionSt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 85e1edb:	83 ec 04             	sub    $0x4,%esp
 85e1ede:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85e1ee1:	89 04 24             	mov    %eax,(%esp)
 85e1ee4:	e8 29 4a 00 00       	call   85e6912 <_ZNK8CMission14GetMissionKindEv>
 85e1ee9:	8b 55 08             	mov    0x8(%ebp),%edx
 85e1eec:	83 c2 18             	add    $0x18,%edx
 85e1eef:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e1ef3:	89 14 24             	mov    %edx,(%esp)
 85e1ef6:	e8 0f 57 00 00       	call   85e760a <_ZNSt6vectorISt4listIP8CMissionSaIS2_EESaIS4_EEixEj>
 85e1efb:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 85e1efe:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e1f02:	89 04 24             	mov    %eax,(%esp)
 85e1f05:	e8 12 57 00 00       	call   85e761c <_ZNSt4listIP8CMissionSaIS1_EE9push_backERKS1_>
 85e1f0a:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85e1f0d:	89 04 24             	mov    %eax,(%esp)
 85e1f10:	e8 2f 4a 00 00       	call   85e6944 <_ZNK8CMission15GetMissionGradeEv>
 85e1f15:	83 f8 02             	cmp    $0x2,%eax
 85e1f18:	0f 94 c0             	sete   %al
 85e1f1b:	84 c0                	test   %al,%al
 85e1f1d:	74 47                	je     85e1f66 <_ZN17PvP_MissionSystem9Load_listEv+0x1a0>
 85e1f1f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85e1f22:	89 04 24             	mov    %eax,(%esp)
 85e1f25:	e8 e8 49 00 00       	call   85e6912 <_ZNK8CMission14GetMissionKindEv>
 85e1f2a:	89 c2                	mov    %eax,%edx
 85e1f2c:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1f2f:	8d 48 40             	lea    0x40(%eax),%ecx
 85e1f32:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e1f35:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e1f39:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85e1f3d:	89 04 24             	mov    %eax,(%esp)
 85e1f40:	e8 01 f9 b2 ff       	call   8111846 <_ZNSt6bitsetILj32EEixEj>
 85e1f45:	83 ec 04             	sub    $0x4,%esp
 85e1f48:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85e1f4f:	00 
 85e1f50:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e1f53:	89 04 24             	mov    %eax,(%esp)
 85e1f56:	e8 f7 56 00 00       	call   85e7652 <_ZNSt6bitsetILj32EE9referenceaSEb>
 85e1f5b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e1f5e:	89 04 24             	mov    %eax,(%esp)
 85e1f61:	e8 0e f9 b2 ff       	call   8111874 <_ZNSt6bitsetILj32EE9referenceD1Ev>
 85e1f66:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85e1f69:	89 04 24             	mov    %eax,(%esp)
 85e1f6c:	e8 9f 46 b0 ff       	call   80e6610 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEppEv>
 85e1f71:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85e1f74:	c7 44 24 04 00 02 50 	movl   $0x9500200,0x4(%esp)
 85e1f7b:	09 
 85e1f7c:	89 04 24             	mov    %eax,(%esp)
 85e1f7f:	e8 94 41 b0 ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 85e1f84:	83 ec 04             	sub    $0x4,%esp
 85e1f87:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85e1f8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e1f8e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85e1f91:	89 04 24             	mov    %eax,(%esp)
 85e1f94:	e8 a5 41 b0 ff       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 85e1f99:	84 c0                	test   %al,%al
 85e1f9b:	0f 85 60 fe ff ff    	jne    85e1e01 <_ZN17PvP_MissionSystem9Load_listEv+0x3b>
 85e1fa1:	eb 01                	jmp    85e1fa4 <_ZN17PvP_MissionSystem9Load_listEv+0x1de>
 85e1fa3:	90                   	nop
 85e1fa4:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1fa7:	89 04 24             	mov    %eax,(%esp)
 85e1faa:	e8 25 01 00 00       	call   85e20d4 <_ZN17PvP_MissionSystem9sort_listEv>
 85e1faf:	bb 01 00 00 00       	mov    $0x1,%ebx
 85e1fb4:	eb 1e                	jmp    85e1fd4 <_ZN17PvP_MissionSystem9Load_listEv+0x20e>
 85e1fb6:	89 d3                	mov    %edx,%ebx
 85e1fb8:	89 c6                	mov    %eax,%esi
 85e1fba:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 85e1fc0:	89 04 24             	mov    %eax,(%esp)
 85e1fc3:	e8 10 4f 00 00       	call   85e6ed8 <_ZN13MissionScriptD1Ev>
 85e1fc8:	89 f0                	mov    %esi,%eax
 85e1fca:	89 da                	mov    %ebx,%edx
 85e1fcc:	89 04 24             	mov    %eax,(%esp)
 85e1fcf:	e8 7c 17 50 00       	call   8ae3750 <_Unwind_Resume>
 85e1fd4:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 85e1fda:	89 04 24             	mov    %eax,(%esp)
 85e1fdd:	e8 f6 4e 00 00       	call   85e6ed8 <_ZN13MissionScriptD1Ev>
 85e1fe2:	89 d8                	mov    %ebx,%eax
 85e1fe4:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85e1fe7:	83 c4 00             	add    $0x0,%esp
 85e1fea:	5b                   	pop    %ebx
 85e1feb:	5e                   	pop    %esi
 85e1fec:	5d                   	pop    %ebp
 85e1fed:	c3                   	ret

```

```c
// PvP_MissionSystem::Load_list @ 0x85e1dc6

/* PvP_MissionSystem::Load_list() */

undefined4 __thiscall PvP_MissionSystem::Load_list(PvP_MissionSystem *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  list<CMission*,std::allocator<CMission*>> *this_00;
  undefined4 uVar4;
  MissionScript local_c8 [136];
  CMission *local_40;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_3c [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_38 [4];
  pair local_34 [8];
  pair<int_const,CMission*> local_2c [8];
  int local_24 [2];
  CMission *local_1c;
  reference local_18 [8];
  char *local_10;
  
  local_10 = (char *)0x0;
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            (local_3c);
  MissionScript::MissionScript(local_c8);
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_38);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_3c,
                       (_Rb_tree_iterator *)local_38);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_3c);
                    /* try { // try from 085e1e12 to 085e1fae has its CatchHandler @ 085e1fb6 */
    local_10 = (char *)std::string::c_str((string *)(iVar2 + 4));
    if (local_10 == (char *)0x0) break;
    cVar1 = importPvpMissionScript(local_c8,local_10);
    if (cVar1 != '\x01') {
      printf("Mission Script Error: %s\n",local_10);
      uVar4 = 0;
      goto LAB_085e1fd4;
    }
    local_40 = (CMission *)Factory(this,local_c8);
    if (local_40 == (CMission *)0x0) {
      uVar4 = 0;
      goto LAB_085e1fd4;
    }
    local_1c = (CMission *)CMission::GetMissionIndex(local_40);
    std::make_pair<int,CMission*&>(local_24,&local_1c);
    std::pair<int_const,CMission*>::pair<int,CMission*>(local_2c,(pair *)local_24);
    std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::insert
              (local_34);
    uVar3 = CMission::GetMissionKind(local_40);
    this_00 = (list<CMission*,std::allocator<CMission*>> *)
              std::
              vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
              ::operator[]((vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
                            *)(this + 0x18),uVar3);
    std::list<CMission*,std::allocator<CMission*>>::push_back(this_00,&local_40);
    iVar2 = CMission::GetMissionGrade(local_40);
    if (iVar2 == 2) {
      CMission::GetMissionKind(local_40);
      std::bitset<32u>::operator[]((uint)local_18);
      std::bitset<32u>::reference::operator=(local_18,true);
      std::bitset<32u>::reference::~reference(local_18);
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_3c);
  }
  sort_list(this);
  uVar4 = 1;
LAB_085e1fd4:
  MissionScript::~MissionScript(local_c8);
  return uVar4;
}

```

---

## PvP_MissionSystem

```asm
// === 085e1abc PvP_MissionSystem::PvP_MissionSystem  [0x085e1abc-0x85e1c47] ===
 85e1abc:	55                   	push   %ebp
 85e1abd:	89 e5                	mov    %esp,%ebp
 85e1abf:	57                   	push   %edi
 85e1ac0:	56                   	push   %esi
 85e1ac1:	53                   	push   %ebx
 85e1ac2:	83 ec 2c             	sub    $0x2c,%esp
 85e1ac5:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1ac8:	89 04 24             	mov    %eax,(%esp)
 85e1acb:	e8 7c 57 00 00       	call   85e724c <_ZNSt3mapIiP8CMissionSt4lessIiESaISt4pairIKiS1_EEEC1Ev>
 85e1ad0:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1ad3:	83 c0 18             	add    $0x18,%eax
 85e1ad6:	89 04 24             	mov    %eax,(%esp)
 85e1ad9:	e8 e8 57 00 00       	call   85e72c6 <_ZNSt6vectorISt4listIP8CMissionSaIS2_EESaIS4_EEC1Ev>
 85e1ade:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1ae1:	83 c0 24             	add    $0x24,%eax
 85e1ae4:	89 04 24             	mov    %eax,(%esp)
 85e1ae7:	e8 92 09 b0 ff       	call   80e247e <_ZNSt6vectorIjSaIjEEC1Ev>
 85e1aec:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1aef:	83 c0 34             	add    $0x34,%eax
 85e1af2:	89 04 24             	mov    %eax,(%esp)
 85e1af5:	e8 3e 58 00 00       	call   85e7338 <_ZNSt4listISt4pairIjjESaIS1_EEC1Ev>
 85e1afa:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1afd:	83 c0 40             	add    $0x40,%eax
 85e1b00:	89 04 24             	mov    %eax,(%esp)
 85e1b03:	e8 d6 39 eb ff       	call   84954de <_ZNSt6bitsetILj32EEC1Ev>
 85e1b08:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1b0b:	83 c0 48             	add    $0x48,%eax
 85e1b0e:	89 04 24             	mov    %eax,(%esp)
 85e1b11:	e8 68 09 b0 ff       	call   80e247e <_ZNSt6vectorIjSaIjEEC1Ev>
 85e1b16:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 85e1b1d:	e8 2e bc a9 ff       	call   807d750 <time@plt>
 85e1b22:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85e1b25:	8d 75 dc             	lea    -0x24(%ebp),%esi
 85e1b28:	c7 04 24 c8 09 00 00 	movl   $0x9c8,(%esp)
 85e1b2f:	e8 1c 29 14 00       	call   8724450 <_Znwj>
 85e1b34:	89 c3                	mov    %eax,%ebx
 85e1b36:	89 d8                	mov    %ebx,%eax
 85e1b38:	89 74 24 04          	mov    %esi,0x4(%esp)
 85e1b3c:	89 04 24             	mov    %eax,(%esp)
 85e1b3f:	e8 e6 9e ae ff       	call   80cba2a <_ZN7CMTRandC1ERKm>
 85e1b44:	eb 12                	jmp    85e1b58 <_ZN17PvP_MissionSystemC1Ev+0x9c>
 85e1b46:	89 d6                	mov    %edx,%esi
 85e1b48:	89 c7                	mov    %eax,%edi
 85e1b4a:	89 1c 24             	mov    %ebx,(%esp)
 85e1b4d:	e8 9e 29 14 00       	call   87244f0 <_ZdlPv>
 85e1b52:	89 f8                	mov    %edi,%eax
 85e1b54:	89 f2                	mov    %esi,%edx
 85e1b56:	eb 6c                	jmp    85e1bc4 <_ZN17PvP_MissionSystemC1Ev+0x108>
 85e1b58:	89 da                	mov    %ebx,%edx
 85e1b5a:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1b5d:	89 50 44             	mov    %edx,0x44(%eax)
 85e1b60:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1b63:	c7 40 3c 00 00 00 00 	movl   $0x0,0x3c(%eax)
 85e1b6a:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1b6d:	83 c0 40             	add    $0x40,%eax
 85e1b70:	89 04 24             	mov    %eax,(%esp)
 85e1b73:	e8 2a 58 00 00       	call   85e73a2 <_ZNSt6bitsetILj32EE5resetEv>
 85e1b78:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e1b7b:	89 04 24             	mov    %eax,(%esp)
 85e1b7e:	e8 35 58 00 00       	call   85e73b8 <_ZNSt4listIP8CMissionSaIS1_EEC1Ev>
 85e1b83:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1b86:	8d 50 18             	lea    0x18(%eax),%edx
 85e1b89:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e1b8c:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e1b90:	c7 44 24 04 24 00 00 	movl   $0x24,0x4(%esp)
 85e1b97:	00 
 85e1b98:	89 14 24             	mov    %edx,(%esp)
 85e1b9b:	e8 a4 58 00 00       	call   85e7444 <_ZNSt6vectorISt4listIP8CMissionSaIS2_EESaIS4_EE6resizeEjS4_>
 85e1ba0:	eb 15                	jmp    85e1bb7 <_ZN17PvP_MissionSystemC1Ev+0xfb>
 85e1ba2:	89 d3                	mov    %edx,%ebx
 85e1ba4:	89 c6                	mov    %eax,%esi
 85e1ba6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e1ba9:	89 04 24             	mov    %eax,(%esp)
 85e1bac:	e8 13 53 00 00       	call   85e6ec4 <_ZNSt4listIP8CMissionSaIS1_EED1Ev>
 85e1bb1:	89 f0                	mov    %esi,%eax
 85e1bb3:	89 da                	mov    %ebx,%edx
 85e1bb5:	eb 0d                	jmp    85e1bc4 <_ZN17PvP_MissionSystemC1Ev+0x108>
 85e1bb7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e1bba:	89 04 24             	mov    %eax,(%esp)
 85e1bbd:	e8 02 53 00 00       	call   85e6ec4 <_ZNSt4listIP8CMissionSaIS1_EED1Ev>
 85e1bc2:	eb 7b                	jmp    85e1c3f <_ZN17PvP_MissionSystemC1Ev+0x183>
 85e1bc4:	89 d3                	mov    %edx,%ebx
 85e1bc6:	89 c6                	mov    %eax,%esi
 85e1bc8:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1bcb:	83 c0 48             	add    $0x48,%eax
 85e1bce:	89 04 24             	mov    %eax,(%esp)
 85e1bd1:	e8 bc 08 b0 ff       	call   80e2492 <_ZNSt6vectorIjSaIjEED1Ev>
 85e1bd6:	89 f0                	mov    %esi,%eax
 85e1bd8:	89 da                	mov    %ebx,%edx
 85e1bda:	eb 00                	jmp    85e1bdc <_ZN17PvP_MissionSystemC1Ev+0x120>
 85e1bdc:	89 d3                	mov    %edx,%ebx
 85e1bde:	89 c6                	mov    %eax,%esi
 85e1be0:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1be3:	83 c0 34             	add    $0x34,%eax
 85e1be6:	89 04 24             	mov    %eax,(%esp)
 85e1be9:	e8 c2 52 00 00       	call   85e6eb0 <_ZNSt4listISt4pairIjjESaIS1_EED1Ev>
 85e1bee:	89 f0                	mov    %esi,%eax
 85e1bf0:	89 da                	mov    %ebx,%edx
 85e1bf2:	eb 00                	jmp    85e1bf4 <_ZN17PvP_MissionSystemC1Ev+0x138>
 85e1bf4:	89 d3                	mov    %edx,%ebx
 85e1bf6:	89 c6                	mov    %eax,%esi
 85e1bf8:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1bfb:	83 c0 24             	add    $0x24,%eax
 85e1bfe:	89 04 24             	mov    %eax,(%esp)
 85e1c01:	e8 8c 08 b0 ff       	call   80e2492 <_ZNSt6vectorIjSaIjEED1Ev>
 85e1c06:	89 f0                	mov    %esi,%eax
 85e1c08:	89 da                	mov    %ebx,%edx
 85e1c0a:	eb 00                	jmp    85e1c0c <_ZN17PvP_MissionSystemC1Ev+0x150>
 85e1c0c:	89 d3                	mov    %edx,%ebx
 85e1c0e:	89 c6                	mov    %eax,%esi
 85e1c10:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1c13:	83 c0 18             	add    $0x18,%eax
 85e1c16:	89 04 24             	mov    %eax,(%esp)
 85e1c19:	e8 bc 56 00 00       	call   85e72da <_ZNSt6vectorISt4listIP8CMissionSaIS2_EESaIS4_EED1Ev>
 85e1c1e:	89 f0                	mov    %esi,%eax
 85e1c20:	89 da                	mov    %ebx,%edx
 85e1c22:	eb 00                	jmp    85e1c24 <_ZN17PvP_MissionSystemC1Ev+0x168>
 85e1c24:	89 d3                	mov    %edx,%ebx
 85e1c26:	89 c6                	mov    %eax,%esi
 85e1c28:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1c2b:	89 04 24             	mov    %eax,(%esp)
 85e1c2e:	e8 69 52 00 00       	call   85e6e9c <_ZNSt3mapIiP8CMissionSt4lessIiESaISt4pairIKiS1_EEED1Ev>
 85e1c33:	89 f0                	mov    %esi,%eax
 85e1c35:	89 da                	mov    %ebx,%edx
 85e1c37:	89 04 24             	mov    %eax,(%esp)
 85e1c3a:	e8 11 1b 50 00       	call   8ae3750 <_Unwind_Resume>
 85e1c3f:	83 c4 2c             	add    $0x2c,%esp
 85e1c42:	5b                   	pop    %ebx
 85e1c43:	5e                   	pop    %esi
 85e1c44:	5f                   	pop    %edi
 85e1c45:	5d                   	pop    %ebp
 85e1c46:	c3                   	ret
 85e1c47:	90                   	nop

```

```c
// PvP_MissionSystem::PvP_MissionSystem @ 0x85e1abc

/* PvP_MissionSystem::PvP_MissionSystem() */

void __thiscall PvP_MissionSystem::PvP_MissionSystem(PvP_MissionSystem *this)

{
  CMTRand *this_00;
  ulong local_28;
  list<CMission*,std::allocator<CMission*>> local_24 [20];
  
  std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::map
            ((map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>> *)
             this);
                    /* try { // try from 085e1ad9 to 085e1add has its CatchHandler @ 085e1c24 */
  std::
  vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
  ::vector((vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
            *)(this + 0x18));
                    /* try { // try from 085e1ae7 to 085e1aeb has its CatchHandler @ 085e1c0c */
  std::vector<unsigned_int,std::allocator<unsigned_int>>::vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x24));
                    /* try { // try from 085e1af5 to 085e1af9 has its CatchHandler @ 085e1bf4 */
  std::
  list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>::
  list((list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
        *)(this + 0x34));
  std::bitset<32u>::bitset((bitset<32u> *)(this + 0x40));
                    /* try { // try from 085e1b11 to 085e1b15 has its CatchHandler @ 085e1bdc */
  std::vector<unsigned_int,std::allocator<unsigned_int>>::vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x48));
  local_28 = time((time_t *)0x0);
                    /* try { // try from 085e1b2f to 085e1b33 has its CatchHandler @ 085e1bc4 */
  this_00 = operator_new(0x9c8);
                    /* try { // try from 085e1b3f to 085e1b43 has its CatchHandler @ 085e1b46 */
  CMTRand::CMTRand(this_00,&local_28);
  *(CMTRand **)(this + 0x44) = this_00;
  *(undefined4 *)(this + 0x3c) = 0;
  std::bitset<32u>::reset((bitset<32u> *)(this + 0x40));
                    /* try { // try from 085e1b7e to 085e1b82 has its CatchHandler @ 085e1bc4 */
  std::list<CMission*,std::allocator<CMission*>>::list(local_24);
                    /* try { // try from 085e1b9b to 085e1b9f has its CatchHandler @ 085e1ba2 */
  std::
  vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
  ::resize((vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
            *)(this + 0x18),0x24,local_24);
                    /* try { // try from 085e1bbd to 085e1bc1 has its CatchHandler @ 085e1bc4 */
  std::list<CMission*,std::allocator<CMission*>>::~list(local_24);
  return;
}

```

---

## copy_missionParameter

```asm
// === 085e206e PvP_MissionSystem::copy_missionParameter  [0x085e206e-0x85e20d3] ===
 85e206e:	55                   	push   %ebp
 85e206f:	89 e5                	mov    %esp,%ebp
 85e2071:	83 ec 18             	sub    $0x18,%esp
 85e2074:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2077:	8b 55 08             	mov    0x8(%ebp),%edx
 85e207a:	83 c2 24             	add    $0x24,%edx
 85e207d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e2081:	89 14 24             	mov    %edx,(%esp)
 85e2084:	e8 27 56 00 00       	call   85e76b0 <_ZNSt6vectorIjSaIjEEaSERKS1_>
 85e2089:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e208c:	8b 50 0c             	mov    0xc(%eax),%edx
 85e208f:	8b 45 08             	mov    0x8(%ebp),%eax
 85e2092:	89 50 30             	mov    %edx,0x30(%eax)
 85e2095:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2098:	8d 50 10             	lea    0x10(%eax),%edx
 85e209b:	8b 45 08             	mov    0x8(%ebp),%eax
 85e209e:	83 c0 34             	add    $0x34,%eax
 85e20a1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e20a5:	89 04 24             	mov    %eax,(%esp)
 85e20a8:	e8 51 58 00 00       	call   85e78fe <_ZNSt4listISt4pairIjjESaIS1_EEaSERKS3_>
 85e20ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e20b0:	8b 50 18             	mov    0x18(%eax),%edx
 85e20b3:	8b 45 08             	mov    0x8(%ebp),%eax
 85e20b6:	89 50 3c             	mov    %edx,0x3c(%eax)
 85e20b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e20bc:	8d 50 1c             	lea    0x1c(%eax),%edx
 85e20bf:	8b 45 08             	mov    0x8(%ebp),%eax
 85e20c2:	83 c0 48             	add    $0x48,%eax
 85e20c5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e20c9:	89 04 24             	mov    %eax,(%esp)
 85e20cc:	e8 df 55 00 00       	call   85e76b0 <_ZNSt6vectorIjSaIjEEaSERKS1_>
 85e20d1:	c9                   	leave
 85e20d2:	c3                   	ret
 85e20d3:	90                   	nop

```

```c
// PvP_MissionSystem::copy_missionParameter @ 0x85e206e

/* PvP_MissionSystem::copy_missionParameter(MissionParameterScript const&) */

void __thiscall
PvP_MissionSystem::copy_missionParameter(PvP_MissionSystem *this,MissionParameterScript *param_1)

{
  std::vector<unsigned_int,std::allocator<unsigned_int>>::operator=
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x24),(vector *)param_1);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0xc);
  std::
  list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>::
  operator=((list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
             *)(this + 0x34),(list *)(param_1 + 0x10));
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x18);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::operator=
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x48),
             (vector *)(param_1 + 0x1c));
  return;
}

```

---

## find_mission

```asm
// === 085e262e PvP_MissionSystem::find_mission  [0x085e262e-0x85e2691] ===
 85e262e:	55                   	push   %ebp
 85e262f:	89 e5                	mov    %esp,%ebp
 85e2631:	83 ec 28             	sub    $0x28,%esp
 85e2634:	8b 55 08             	mov    0x8(%ebp),%edx
 85e2637:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85e263a:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 85e263d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85e2641:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e2645:	89 04 24             	mov    %eax,(%esp)
 85e2648:	e8 6d 56 00 00       	call   85e7cba <_ZNSt3mapIiP8CMissionSt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 85e264d:	83 ec 04             	sub    $0x4,%esp
 85e2650:	8b 55 08             	mov    0x8(%ebp),%edx
 85e2653:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85e2656:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e265a:	89 04 24             	mov    %eax,(%esp)
 85e265d:	e8 8c 4e 00 00       	call   85e74ee <_ZNSt3mapIiP8CMissionSt4lessIiESaISt4pairIKiS1_EEE3endEv>
 85e2662:	83 ec 04             	sub    $0x4,%esp
 85e2665:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85e2668:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e266c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85e266f:	89 04 24             	mov    %eax,(%esp)
 85e2672:	e8 9d 4e 00 00       	call   85e7514 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP8CMissionEEneERKS5_>
 85e2677:	84 c0                	test   %al,%al
 85e2679:	74 10                	je     85e268b <_ZN17PvP_MissionSystem12find_missionEi+0x5d>
 85e267b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85e267e:	89 04 24             	mov    %eax,(%esp)
 85e2681:	e8 c0 4e 00 00       	call   85e7546 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP8CMissionEEptEv>
 85e2686:	8b 40 04             	mov    0x4(%eax),%eax
 85e2689:	eb 05                	jmp    85e2690 <_ZN17PvP_MissionSystem12find_missionEi+0x62>
 85e268b:	b8 00 00 00 00       	mov    $0x0,%eax
 85e2690:	c9                   	leave
 85e2691:	c3                   	ret

```

```c
// PvP_MissionSystem::find_mission @ 0x85e262e

/* PvP_MissionSystem::find_mission(int) */

undefined4 PvP_MissionSystem::find_mission(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,CMission*>> local_14 [4];
  map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>> local_10 [12];
  
  std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::find
            ((int *)local_14);
  std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CMission*>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,CMission*>>::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## get_BaseMissionExp_byRank

```asm
// === 085e2e74 PvP_MissionSystem::get_BaseMissionExp_byRank  [0x085e2e74-0x85e2eff] ===
 85e2e74:	55                   	push   %ebp
 85e2e75:	89 e5                	mov    %esp,%ebp
 85e2e77:	53                   	push   %ebx
 85e2e78:	83 ec 34             	sub    $0x34,%esp
 85e2e7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2e7e:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 85e2e82:	0f b7 5d e4          	movzwl -0x1c(%ebp),%ebx
 85e2e86:	8b 45 08             	mov    0x8(%ebp),%eax
 85e2e89:	83 c0 48             	add    $0x48,%eax
 85e2e8c:	89 04 24             	mov    %eax,(%esp)
 85e2e8f:	e8 ce f5 af ff       	call   80e2462 <_ZNKSt6vectorIjSaIjEE4sizeEv>
 85e2e94:	39 c3                	cmp    %eax,%ebx
 85e2e96:	0f 93 c0             	setae  %al
 85e2e99:	84 c0                	test   %al,%al
 85e2e9b:	74 45                	je     85e2ee2 <_ZNK17PvP_MissionSystem25get_BaseMissionExp_byRankEt+0x6e>
 85e2e9d:	0f b7 5d e4          	movzwl -0x1c(%ebp),%ebx
 85e2ea1:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85e2ea8:	00 
 85e2ea9:	c7 44 24 08 62 01 00 	movl   $0x162,0x8(%esp)
 85e2eb0:	00 
 85e2eb1:	c7 44 24 04 00 3b cc 	movl   $0x8cc3b00,0x4(%esp)
 85e2eb8:	08 
 85e2eb9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e2ebc:	89 04 24             	mov    %eax,(%esp)
 85e2ebf:	e8 54 c8 f6 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85e2ec4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85e2ec8:	c7 44 24 04 38 2c cc 	movl   $0x8cc2c38,0x4(%esp)
 85e2ecf:	08 
 85e2ed0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e2ed3:	89 04 24             	mov    %eax,(%esp)
 85e2ed6:	e8 ad c8 f6 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85e2edb:	b8 00 00 00 00       	mov    $0x0,%eax
 85e2ee0:	eb 18                	jmp    85e2efa <_ZNK17PvP_MissionSystem25get_BaseMissionExp_byRankEt+0x86>
 85e2ee2:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 85e2ee6:	8b 55 08             	mov    0x8(%ebp),%edx
 85e2ee9:	83 c2 48             	add    $0x48,%edx
 85e2eec:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e2ef0:	89 14 24             	mov    %edx,(%esp)
 85e2ef3:	e8 3a 27 b1 ff       	call   80f5632 <_ZNKSt6vectorIjSaIjEEixEj>
 85e2ef8:	8b 00                	mov    (%eax),%eax
 85e2efa:	83 c4 34             	add    $0x34,%esp
 85e2efd:	5b                   	pop    %ebx
 85e2efe:	5d                   	pop    %ebp
 85e2eff:	c3                   	ret

```

```c
// PvP_MissionSystem::get_BaseMissionExp_byRank @ 0x85e2e74

/* PvP_MissionSystem::get_BaseMissionExp_byRank(unsigned short) const */

undefined4 __thiscall
PvP_MissionSystem::get_BaseMissionExp_byRank(PvP_MissionSystem *this,ushort param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  cMyTrace local_1c [20];
  
  uVar1 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size
                    ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x48));
  if (param_1 < uVar1) {
    puVar3 = (undefined4 *)
             std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                       ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x48),
                        (uint)param_1);
    uVar2 = *puVar3;
  }
  else {
    cMyTrace::cMyTrace(local_1c,
                       "unsigned int PvP_MissionSystem::get_BaseMissionExp_byRank(short unsigned int) const"
                       ,0x162,5);
    cMyTrace::operator()(local_1c,"[@missionSystem] <InvalidRank : %d>",(uint)param_1);
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## get_New_DailyMission

```asm
// === 085e26e0 PvP_MissionSystem::get_New_DailyMission  [0x085e26e0-0x85e2e73] ===
 85e26e0:	55                   	push   %ebp
 85e26e1:	89 e5                	mov    %esp,%ebp
 85e26e3:	57                   	push   %edi
 85e26e4:	56                   	push   %esi
 85e26e5:	53                   	push   %ebx
 85e26e6:	81 ec 4c 01 00 00    	sub    $0x14c,%esp
 85e26ec:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 85e26f2:	89 04 24             	mov    %eax,(%esp)
 85e26f5:	e8 ec 55 00 00       	call   85e7ce6 <_ZNSt17_Rb_tree_iteratorISt4pairIKiP8CMissionEEC1Ev>
 85e26fa:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 85e2701:	e9 18 01 00 00       	jmp    85e281e <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x13e>
 85e2706:	8b 45 08             	mov    0x8(%ebp),%eax
 85e2709:	8d 50 24             	lea    0x24(%eax),%edx
 85e270c:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85e270f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e2713:	89 14 24             	mov    %edx,(%esp)
 85e2716:	e8 49 fe af ff       	call   80e2564 <_ZNSt6vectorIjSaIjEEixEj>
 85e271b:	8b 00                	mov    (%eax),%eax
 85e271d:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 85e2723:	8b 55 08             	mov    0x8(%ebp),%edx
 85e2726:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 85e272c:	8d 8d 34 ff ff ff    	lea    -0xcc(%ebp),%ecx
 85e2732:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85e2736:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e273a:	89 04 24             	mov    %eax,(%esp)
 85e273d:	e8 78 55 00 00       	call   85e7cba <_ZNSt3mapIiP8CMissionSt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 85e2742:	83 ec 04             	sub    $0x4,%esp
 85e2745:	8b 85 d4 fe ff ff    	mov    -0x12c(%ebp),%eax
 85e274b:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
 85e2751:	8b 55 08             	mov    0x8(%ebp),%edx
 85e2754:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 85e275a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e275e:	89 04 24             	mov    %eax,(%esp)
 85e2761:	e8 88 4d 00 00       	call   85e74ee <_ZNSt3mapIiP8CMissionSt4lessIiESaISt4pairIKiS1_EEE3endEv>
 85e2766:	83 ec 04             	sub    $0x4,%esp
 85e2769:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 85e276f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e2773:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 85e2779:	89 04 24             	mov    %eax,(%esp)
 85e277c:	e8 73 55 00 00       	call   85e7cf4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP8CMissionEEeqERKS5_>
 85e2781:	84 c0                	test   %al,%al
 85e2783:	0f 85 90 00 00 00    	jne    85e2819 <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x139>
 85e2789:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 85e278f:	89 04 24             	mov    %eax,(%esp)
 85e2792:	e8 af 4d 00 00       	call   85e7546 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP8CMissionEEptEv>
 85e2797:	8b 40 04             	mov    0x4(%eax),%eax
 85e279a:	89 45 c8             	mov    %eax,-0x38(%ebp)
 85e279d:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 85e27a1:	74 77                	je     85e281a <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x13a>
 85e27a3:	8b 45 c8             	mov    -0x38(%ebp),%eax
 85e27a6:	89 04 24             	mov    %eax,(%esp)
 85e27a9:	e8 58 41 00 00       	call   85e6906 <_ZNK8CMission15GetMissionIndexEv>
 85e27ae:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 85e27b4:	8b 45 c8             	mov    -0x38(%ebp),%eax
 85e27b7:	89 04 24             	mov    %eax,(%esp)
 85e27ba:	e8 53 41 00 00       	call   85e6912 <_ZNK8CMission14GetMissionKindEv>
 85e27bf:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 85e27c5:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 85e27cb:	8d 95 4c ff ff ff    	lea    -0xb4(%ebp),%edx
 85e27d1:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e27d5:	8d 95 50 ff ff ff    	lea    -0xb0(%ebp),%edx
 85e27db:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e27df:	89 04 24             	mov    %eax,(%esp)
 85e27e2:	e8 5a 65 bd ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 85e27e7:	83 ec 04             	sub    $0x4,%esp
 85e27ea:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 85e27f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e27f4:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 85e27fa:	89 04 24             	mov    %eax,(%esp)
 85e27fd:	e8 06 55 00 00       	call   85e7d08 <_ZNSt4pairIjjEC1IiiEEOS_IT_T0_E>
 85e2802:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 85e2808:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e280c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e280f:	89 04 24             	mov    %eax,(%esp)
 85e2812:	e8 25 55 00 00       	call   85e7d3c <_ZNSt6vectorISt4pairIjjESaIS1_EE9push_backEOS1_>
 85e2817:	eb 01                	jmp    85e281a <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x13a>
 85e2819:	90                   	nop
 85e281a:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 85e281e:	8b 45 08             	mov    0x8(%ebp),%eax
 85e2821:	83 c0 24             	add    $0x24,%eax
 85e2824:	89 04 24             	mov    %eax,(%esp)
 85e2827:	e8 36 fc af ff       	call   80e2462 <_ZNKSt6vectorIjSaIjEE4sizeEv>
 85e282c:	3b 45 c4             	cmp    -0x3c(%ebp),%eax
 85e282f:	0f 97 c0             	seta   %al
 85e2832:	84 c0                	test   %al,%al
 85e2834:	0f 85 cc fe ff ff    	jne    85e2706 <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x26>
 85e283a:	8b 45 08             	mov    0x8(%ebp),%eax
 85e283d:	83 c0 34             	add    $0x34,%eax
 85e2840:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e2844:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 85e284a:	89 04 24             	mov    %eax,(%esp)
 85e284d:	e8 0c 55 00 00       	call   85e7d5e <_ZNSt4listISt4pairIjjESaIS1_EEC1ERKS3_>
 85e2852:	8b 45 08             	mov    0x8(%ebp),%eax
 85e2855:	8b 40 3c             	mov    0x3c(%eax),%eax
 85e2858:	89 45 bc             	mov    %eax,-0x44(%ebp)
 85e285b:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 85e2862:	e9 53 02 00 00       	jmp    85e2aba <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x3da>
 85e2867:	8b 45 08             	mov    0x8(%ebp),%eax
 85e286a:	8b 40 44             	mov    0x44(%eax),%eax
 85e286d:	89 04 24             	mov    %eax,(%esp)
 85e2870:	e8 d1 91 ae ff       	call   80cba46 <_ZN7CMTRand7randIntEv>
 85e2875:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 85e2878:	ba 00 00 00 00       	mov    $0x0,%edx
 85e287d:	f7 f1                	div    %ecx
 85e287f:	89 d0                	mov    %edx,%eax
 85e2881:	89 45 d0             	mov    %eax,-0x30(%ebp)
 85e2884:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 85e288b:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 85e2891:	8d 95 28 ff ff ff    	lea    -0xd8(%ebp),%edx
 85e2897:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e289b:	89 04 24             	mov    %eax,(%esp)
 85e289e:	e8 85 55 00 00       	call   85e7e28 <_ZNSt4listISt4pairIjjESaIS1_EE5beginEv>
 85e28a3:	83 ec 04             	sub    $0x4,%esp
 85e28a6:	e9 82 01 00 00       	jmp    85e2a2d <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x34d>
 85e28ab:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 85e28b1:	89 04 24             	mov    %eax,(%esp)
 85e28b4:	e8 e1 55 00 00       	call   85e7e9a <_ZNKSt14_List_iteratorISt4pairIjjEEptEv>
 85e28b9:	8b 10                	mov    (%eax),%edx
 85e28bb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85e28be:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85e28c1:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 85e28c4:	8b 45 d0             	mov    -0x30(%ebp),%eax
 85e28c7:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 85e28ca:	0f 8d 4f 01 00 00    	jge    85e2a1f <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x33f>
 85e28d0:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 85e28d6:	89 04 24             	mov    %eax,(%esp)
 85e28d9:	e8 bc 55 00 00       	call   85e7e9a <_ZNKSt14_List_iteratorISt4pairIjjEEptEv>
 85e28de:	8b 40 04             	mov    0x4(%eax),%eax
 85e28e1:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 85e28e7:	8b 55 08             	mov    0x8(%ebp),%edx
 85e28ea:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 85e28f0:	8d 8d 58 ff ff ff    	lea    -0xa8(%ebp),%ecx
 85e28f6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85e28fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e28fe:	89 04 24             	mov    %eax,(%esp)
 85e2901:	e8 b4 53 00 00       	call   85e7cba <_ZNSt3mapIiP8CMissionSt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 85e2906:	83 ec 04             	sub    $0x4,%esp
 85e2909:	8b 85 d4 fe ff ff    	mov    -0x12c(%ebp),%eax
 85e290f:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
 85e2915:	8b 55 08             	mov    0x8(%ebp),%edx
 85e2918:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 85e291e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e2922:	89 04 24             	mov    %eax,(%esp)
 85e2925:	e8 c4 4b 00 00       	call   85e74ee <_ZNSt3mapIiP8CMissionSt4lessIiESaISt4pairIKiS1_EEE3endEv>
 85e292a:	83 ec 04             	sub    $0x4,%esp
 85e292d:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 85e2933:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e2937:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 85e293d:	89 04 24             	mov    %eax,(%esp)
 85e2940:	e8 af 53 00 00       	call   85e7cf4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP8CMissionEEeqERKS5_>
 85e2945:	84 c0                	test   %al,%al
 85e2947:	0f 85 d1 00 00 00    	jne    85e2a1e <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x33e>
 85e294d:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 85e2953:	89 04 24             	mov    %eax,(%esp)
 85e2956:	e8 eb 4b 00 00       	call   85e7546 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP8CMissionEEptEv>
 85e295b:	8b 40 04             	mov    0x4(%eax),%eax
 85e295e:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85e2961:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 85e2965:	74 74                	je     85e29db <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x2fb>
 85e2967:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85e296a:	89 04 24             	mov    %eax,(%esp)
 85e296d:	e8 94 3f 00 00       	call   85e6906 <_ZNK8CMission15GetMissionIndexEv>
 85e2972:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 85e2978:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85e297b:	89 04 24             	mov    %eax,(%esp)
 85e297e:	e8 8f 3f 00 00       	call   85e6912 <_ZNK8CMission14GetMissionKindEv>
 85e2983:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 85e2989:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 85e298f:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 85e2995:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e2999:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 85e299f:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e29a3:	89 04 24             	mov    %eax,(%esp)
 85e29a6:	e8 96 63 bd ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 85e29ab:	83 ec 04             	sub    $0x4,%esp
 85e29ae:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 85e29b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e29b8:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 85e29be:	89 04 24             	mov    %eax,(%esp)
 85e29c1:	e8 42 53 00 00       	call   85e7d08 <_ZNSt4pairIjjEC1IiiEEOS_IT_T0_E>
 85e29c6:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 85e29cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e29d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e29d3:	89 04 24             	mov    %eax,(%esp)
 85e29d6:	e8 61 53 00 00       	call   85e7d3c <_ZNSt6vectorISt4pairIjjESaIS1_EE9push_backEOS1_>
 85e29db:	8b 5d bc             	mov    -0x44(%ebp),%ebx
 85e29de:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 85e29e4:	89 04 24             	mov    %eax,(%esp)
 85e29e7:	e8 ae 54 00 00       	call   85e7e9a <_ZNKSt14_List_iteratorISt4pairIjjEEptEv>
 85e29ec:	8b 00                	mov    (%eax),%eax
 85e29ee:	89 da                	mov    %ebx,%edx
 85e29f0:	29 c2                	sub    %eax,%edx
 85e29f2:	89 d0                	mov    %edx,%eax
 85e29f4:	89 45 bc             	mov    %eax,-0x44(%ebp)
 85e29f7:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 85e29fd:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
 85e2a03:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e2a07:	8d 95 28 ff ff ff    	lea    -0xd8(%ebp),%edx
 85e2a0d:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e2a11:	89 04 24             	mov    %eax,(%esp)
 85e2a14:	e8 8f 54 00 00       	call   85e7ea8 <_ZNSt4listISt4pairIjjESaIS1_EE5eraseESt14_List_iteratorIS1_E>
 85e2a19:	83 ec 04             	sub    $0x4,%esp
 85e2a1c:	eb 4a                	jmp    85e2a68 <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x388>
 85e2a1e:	90                   	nop
 85e2a1f:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 85e2a25:	89 04 24             	mov    %eax,(%esp)
 85e2a28:	e8 59 54 00 00       	call   85e7e86 <_ZNSt14_List_iteratorISt4pairIjjEEppEv>
 85e2a2d:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 85e2a33:	8d 95 28 ff ff ff    	lea    -0xd8(%ebp),%edx
 85e2a39:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e2a3d:	89 04 24             	mov    %eax,(%esp)
 85e2a40:	e8 09 54 00 00       	call   85e7e4e <_ZNSt4listISt4pairIjjESaIS1_EE3endEv>
 85e2a45:	83 ec 04             	sub    $0x4,%esp
 85e2a48:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 85e2a4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e2a52:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 85e2a58:	89 04 24             	mov    %eax,(%esp)
 85e2a5b:	e8 12 54 00 00       	call   85e7e72 <_ZNKSt14_List_iteratorISt4pairIjjEEneERKS2_>
 85e2a60:	84 c0                	test   %al,%al
 85e2a62:	0f 85 43 fe ff ff    	jne    85e28ab <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x1cb>
 85e2a68:	83 7d bc 00          	cmpl   $0x0,-0x44(%ebp)
 85e2a6c:	7f 48                	jg     85e2ab6 <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x3d6>
 85e2a6e:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85e2a75:	00 
 85e2a76:	c7 44 24 08 23 01 00 	movl   $0x123,0x8(%esp)
 85e2a7d:	00 
 85e2a7e:	c7 44 24 04 60 3b cc 	movl   $0x8cc3b60,0x4(%esp)
 85e2a85:	08 
 85e2a86:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 85e2a8c:	89 04 24             	mov    %eax,(%esp)
 85e2a8f:	e8 84 cc f6 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85e2a94:	8b 45 bc             	mov    -0x44(%ebp),%eax
 85e2a97:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e2a9b:	c7 44 24 04 0c 2b cc 	movl   $0x8cc2b0c,0x4(%esp)
 85e2aa2:	08 
 85e2aa3:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 85e2aa9:	89 04 24             	mov    %eax,(%esp)
 85e2aac:	e8 d7 cc f6 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85e2ab1:	e9 a5 03 00 00       	jmp    85e2e5b <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x77b>
 85e2ab6:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 85e2aba:	8b 45 08             	mov    0x8(%ebp),%eax
 85e2abd:	8b 40 30             	mov    0x30(%eax),%eax
 85e2ac0:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 85e2ac3:	0f 97 c0             	seta   %al
 85e2ac6:	84 c0                	test   %al,%al
 85e2ac8:	0f 85 99 fd ff ff    	jne    85e2867 <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x187>
 85e2ace:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 85e2ad5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85e2adc:	00 
 85e2add:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 85e2ae3:	89 04 24             	mov    %eax,(%esp)
 85e2ae6:	e8 f5 53 00 00       	call   85e7ee0 <_ZNSt6bitsetILj32EEC1Em>
 85e2aeb:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 85e2af2:	e9 2b 03 00 00       	jmp    85e2e22 <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x742>
 85e2af7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85e2afa:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e2afe:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2b01:	89 04 24             	mov    %eax,(%esp)
 85e2b04:	e8 19 54 00 00       	call   85e7f22 <_ZNSt6vectorISt4pairIjjESaIS1_EEixEj>
 85e2b09:	8b 00                	mov    (%eax),%eax
 85e2b0b:	89 45 c0             	mov    %eax,-0x40(%ebp)
 85e2b0e:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 85e2b12:	74 0a                	je     85e2b1e <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x43e>
 85e2b14:	83 7d c0 20          	cmpl   $0x20,-0x40(%ebp)
 85e2b18:	0f 86 45 01 00 00    	jbe    85e2c63 <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x583>
 85e2b1e:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 85e2b24:	89 04 24             	mov    %eax,(%esp)
 85e2b27:	e8 a4 3a 12 00       	call   87065d0 <_ZNSsC1Ev>
 85e2b2c:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 85e2b33:	eb 63                	jmp    85e2b98 <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x4b8>
 85e2b35:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85e2b38:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e2b3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2b3f:	89 04 24             	mov    %eax,(%esp)
 85e2b42:	e8 db 53 00 00       	call   85e7f22 <_ZNSt6vectorISt4pairIjjESaIS1_EEixEj>
 85e2b47:	8b 58 04             	mov    0x4(%eax),%ebx
 85e2b4a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85e2b4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e2b51:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2b54:	89 04 24             	mov    %eax,(%esp)
 85e2b57:	e8 c6 53 00 00       	call   85e7f22 <_ZNSt6vectorISt4pairIjjESaIS1_EEixEj>
 85e2b5c:	8b 00                	mov    (%eax),%eax
 85e2b5e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85e2b62:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e2b66:	c7 44 24 04 2f 2b cc 	movl   $0x8cc2b2f,0x4(%esp)
 85e2b6d:	08 
 85e2b6e:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 85e2b74:	89 04 24             	mov    %eax,(%esp)
 85e2b77:	e8 c4 b8 a9 ff       	call   807e440 <sprintf@plt>
 85e2b7c:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 85e2b82:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e2b86:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 85e2b8c:	89 04 24             	mov    %eax,(%esp)
 85e2b8f:	e8 9c 54 12 00       	call   8708030 <_ZNSspLEPKc>
 85e2b94:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 85e2b98:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2b9b:	89 04 24             	mov    %eax,(%esp)
 85e2b9e:	e8 63 53 00 00       	call   85e7f06 <_ZNKSt6vectorISt4pairIjjESaIS1_EE4sizeEv>
 85e2ba3:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 85e2ba6:	0f 97 c0             	seta   %al
 85e2ba9:	84 c0                	test   %al,%al
 85e2bab:	75 88                	jne    85e2b35 <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x455>
 85e2bad:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 85e2bb3:	89 04 24             	mov    %eax,(%esp)
 85e2bb6:	e8 35 39 12 00       	call   87064f0 <_ZNKSs5c_strEv>
 85e2bbb:	89 c6                	mov    %eax,%esi
 85e2bbd:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2bc0:	89 04 24             	mov    %eax,(%esp)
 85e2bc3:	e8 3e 53 00 00       	call   85e7f06 <_ZNKSt6vectorISt4pairIjjESaIS1_EE4sizeEv>
 85e2bc8:	89 c3                	mov    %eax,%ebx
 85e2bca:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85e2bcd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e2bd1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2bd4:	89 04 24             	mov    %eax,(%esp)
 85e2bd7:	e8 46 53 00 00       	call   85e7f22 <_ZNSt6vectorISt4pairIjjESaIS1_EEixEj>
 85e2bdc:	8b 78 04             	mov    0x4(%eax),%edi
 85e2bdf:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85e2be6:	00 
 85e2be7:	c7 44 24 08 39 01 00 	movl   $0x139,0x8(%esp)
 85e2bee:	00 
 85e2bef:	c7 44 24 04 60 3b cc 	movl   $0x8cc3b60,0x4(%esp)
 85e2bf6:	08 
 85e2bf7:	8d 45 8c             	lea    -0x74(%ebp),%eax
 85e2bfa:	89 04 24             	mov    %eax,(%esp)
 85e2bfd:	e8 16 cb f6 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85e2c02:	89 74 24 14          	mov    %esi,0x14(%esp)
 85e2c06:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 85e2c0a:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 85e2c0e:	8b 45 c0             	mov    -0x40(%ebp),%eax
 85e2c11:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e2c15:	c7 44 24 04 3c 2b cc 	movl   $0x8cc2b3c,0x4(%esp)
 85e2c1c:	08 
 85e2c1d:	8d 45 8c             	lea    -0x74(%ebp),%eax
 85e2c20:	89 04 24             	mov    %eax,(%esp)
 85e2c23:	e8 60 cb f6 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85e2c28:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2c2b:	89 04 24             	mov    %eax,(%esp)
 85e2c2e:	e8 01 53 00 00       	call   85e7f34 <_ZNSt6vectorISt4pairIjjESaIS1_EE5clearEv>
 85e2c33:	eb 1b                	jmp    85e2c50 <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x570>
 85e2c35:	89 d3                	mov    %edx,%ebx
 85e2c37:	89 c6                	mov    %eax,%esi
 85e2c39:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 85e2c3f:	89 04 24             	mov    %eax,(%esp)
 85e2c42:	e8 99 4f 12 00       	call   8707be0 <_ZNSsD1Ev>
 85e2c47:	89 f0                	mov    %esi,%eax
 85e2c49:	89 da                	mov    %ebx,%edx
 85e2c4b:	e9 ed 01 00 00       	jmp    85e2e3d <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x75d>
 85e2c50:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 85e2c56:	89 04 24             	mov    %eax,(%esp)
 85e2c59:	e8 82 4f 12 00       	call   8707be0 <_ZNSsD1Ev>
 85e2c5e:	e9 f8 01 00 00       	jmp    85e2e5b <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x77b>
 85e2c63:	8d 45 9c             	lea    -0x64(%ebp),%eax
 85e2c66:	8b 55 c0             	mov    -0x40(%ebp),%edx
 85e2c69:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e2c6d:	8d 95 24 ff ff ff    	lea    -0xdc(%ebp),%edx
 85e2c73:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e2c77:	89 04 24             	mov    %eax,(%esp)
 85e2c7a:	e8 c7 eb b2 ff       	call   8111846 <_ZNSt6bitsetILj32EEixEj>
 85e2c7f:	83 ec 04             	sub    $0x4,%esp
 85e2c82:	8d 45 9c             	lea    -0x64(%ebp),%eax
 85e2c85:	89 04 24             	mov    %eax,(%esp)
 85e2c88:	e8 ed eb b2 ff       	call   811187a <_ZNKSt6bitsetILj32EE9referencecvbEv>
 85e2c8d:	89 c3                	mov    %eax,%ebx
 85e2c8f:	8d 45 9c             	lea    -0x64(%ebp),%eax
 85e2c92:	89 04 24             	mov    %eax,(%esp)
 85e2c95:	e8 da eb b2 ff       	call   8111874 <_ZNSt6bitsetILj32EE9referenceD1Ev>
 85e2c9a:	84 db                	test   %bl,%bl
 85e2c9c:	0f 84 3f 01 00 00    	je     85e2de1 <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x701>
 85e2ca2:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 85e2ca8:	89 04 24             	mov    %eax,(%esp)
 85e2cab:	e8 20 39 12 00       	call   87065d0 <_ZNSsC1Ev>
 85e2cb0:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85e2cb7:	eb 63                	jmp    85e2d1c <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x63c>
 85e2cb9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85e2cbc:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e2cc0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2cc3:	89 04 24             	mov    %eax,(%esp)
 85e2cc6:	e8 57 52 00 00       	call   85e7f22 <_ZNSt6vectorISt4pairIjjESaIS1_EEixEj>
 85e2ccb:	8b 58 04             	mov    0x4(%eax),%ebx
 85e2cce:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85e2cd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e2cd5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2cd8:	89 04 24             	mov    %eax,(%esp)
 85e2cdb:	e8 42 52 00 00       	call   85e7f22 <_ZNSt6vectorISt4pairIjjESaIS1_EEixEj>
 85e2ce0:	8b 00                	mov    (%eax),%eax
 85e2ce2:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85e2ce6:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e2cea:	c7 44 24 04 2f 2b cc 	movl   $0x8cc2b2f,0x4(%esp)
 85e2cf1:	08 
 85e2cf2:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 85e2cf8:	89 04 24             	mov    %eax,(%esp)
 85e2cfb:	e8 40 b7 a9 ff       	call   807e440 <sprintf@plt>
 85e2d00:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 85e2d06:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e2d0a:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 85e2d10:	89 04 24             	mov    %eax,(%esp)
 85e2d13:	e8 18 53 12 00       	call   8708030 <_ZNSspLEPKc>
 85e2d18:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 85e2d1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2d1f:	89 04 24             	mov    %eax,(%esp)
 85e2d22:	e8 df 51 00 00       	call   85e7f06 <_ZNKSt6vectorISt4pairIjjESaIS1_EE4sizeEv>
 85e2d27:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 85e2d2a:	0f 97 c0             	seta   %al
 85e2d2d:	84 c0                	test   %al,%al
 85e2d2f:	75 88                	jne    85e2cb9 <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x5d9>
 85e2d31:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 85e2d37:	89 04 24             	mov    %eax,(%esp)
 85e2d3a:	e8 b1 37 12 00       	call   87064f0 <_ZNKSs5c_strEv>
 85e2d3f:	89 c6                	mov    %eax,%esi
 85e2d41:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2d44:	89 04 24             	mov    %eax,(%esp)
 85e2d47:	e8 ba 51 00 00       	call   85e7f06 <_ZNKSt6vectorISt4pairIjjESaIS1_EE4sizeEv>
 85e2d4c:	89 c3                	mov    %eax,%ebx
 85e2d4e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85e2d51:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e2d55:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2d58:	89 04 24             	mov    %eax,(%esp)
 85e2d5b:	e8 c2 51 00 00       	call   85e7f22 <_ZNSt6vectorISt4pairIjjESaIS1_EEixEj>
 85e2d60:	8b 78 04             	mov    0x4(%eax),%edi
 85e2d63:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85e2d6a:	00 
 85e2d6b:	c7 44 24 08 4d 01 00 	movl   $0x14d,0x8(%esp)
 85e2d72:	00 
 85e2d73:	c7 44 24 04 60 3b cc 	movl   $0x8cc3b60,0x4(%esp)
 85e2d7a:	08 
 85e2d7b:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85e2d7e:	89 04 24             	mov    %eax,(%esp)
 85e2d81:	e8 92 c9 f6 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85e2d86:	89 74 24 14          	mov    %esi,0x14(%esp)
 85e2d8a:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 85e2d8e:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 85e2d92:	8b 45 c0             	mov    -0x40(%ebp),%eax
 85e2d95:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e2d99:	c7 44 24 04 b8 2b cc 	movl   $0x8cc2bb8,0x4(%esp)
 85e2da0:	08 
 85e2da1:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85e2da4:	89 04 24             	mov    %eax,(%esp)
 85e2da7:	e8 dc c9 f6 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85e2dac:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2daf:	89 04 24             	mov    %eax,(%esp)
 85e2db2:	e8 7d 51 00 00       	call   85e7f34 <_ZNSt6vectorISt4pairIjjESaIS1_EE5clearEv>
 85e2db7:	eb 18                	jmp    85e2dd1 <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x6f1>
 85e2db9:	89 d3                	mov    %edx,%ebx
 85e2dbb:	89 c6                	mov    %eax,%esi
 85e2dbd:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 85e2dc3:	89 04 24             	mov    %eax,(%esp)
 85e2dc6:	e8 15 4e 12 00       	call   8707be0 <_ZNSsD1Ev>
 85e2dcb:	89 f0                	mov    %esi,%eax
 85e2dcd:	89 da                	mov    %ebx,%edx
 85e2dcf:	eb 6c                	jmp    85e2e3d <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x75d>
 85e2dd1:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 85e2dd7:	89 04 24             	mov    %eax,(%esp)
 85e2dda:	e8 01 4e 12 00       	call   8707be0 <_ZNSsD1Ev>
 85e2ddf:	eb 7a                	jmp    85e2e5b <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x77b>
 85e2de1:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85e2de4:	8b 55 c0             	mov    -0x40(%ebp),%edx
 85e2de7:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e2deb:	8d 95 24 ff ff ff    	lea    -0xdc(%ebp),%edx
 85e2df1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e2df5:	89 04 24             	mov    %eax,(%esp)
 85e2df8:	e8 49 ea b2 ff       	call   8111846 <_ZNSt6bitsetILj32EEixEj>
 85e2dfd:	83 ec 04             	sub    $0x4,%esp
 85e2e00:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85e2e07:	00 
 85e2e08:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85e2e0b:	89 04 24             	mov    %eax,(%esp)
 85e2e0e:	e8 3f 48 00 00       	call   85e7652 <_ZNSt6bitsetILj32EE9referenceaSEb>
 85e2e13:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85e2e16:	89 04 24             	mov    %eax,(%esp)
 85e2e19:	e8 56 ea b2 ff       	call   8111874 <_ZNSt6bitsetILj32EE9referenceD1Ev>
 85e2e1e:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 85e2e22:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e2e25:	89 04 24             	mov    %eax,(%esp)
 85e2e28:	e8 d9 50 00 00       	call   85e7f06 <_ZNKSt6vectorISt4pairIjjESaIS1_EE4sizeEv>
 85e2e2d:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 85e2e30:	0f 97 c0             	seta   %al
 85e2e33:	84 c0                	test   %al,%al
 85e2e35:	0f 85 bc fc ff ff    	jne    85e2af7 <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x417>
 85e2e3b:	eb 1e                	jmp    85e2e5b <_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE+0x77b>
 85e2e3d:	89 d3                	mov    %edx,%ebx
 85e2e3f:	89 c6                	mov    %eax,%esi
 85e2e41:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 85e2e47:	89 04 24             	mov    %eax,(%esp)
 85e2e4a:	e8 61 40 00 00       	call   85e6eb0 <_ZNSt4listISt4pairIjjESaIS1_EED1Ev>
 85e2e4f:	89 f0                	mov    %esi,%eax
 85e2e51:	89 da                	mov    %ebx,%edx
 85e2e53:	89 04 24             	mov    %eax,(%esp)
 85e2e56:	e8 f5 08 50 00       	call   8ae3750 <_Unwind_Resume>
 85e2e5b:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 85e2e61:	89 04 24             	mov    %eax,(%esp)
 85e2e64:	e8 47 40 00 00       	call   85e6eb0 <_ZNSt4listISt4pairIjjESaIS1_EED1Ev>
 85e2e69:	8d 65 f4             	lea    -0xc(%ebp),%esp
 85e2e6c:	83 c4 00             	add    $0x0,%esp
 85e2e6f:	5b                   	pop    %ebx
 85e2e70:	5e                   	pop    %esi
 85e2e71:	5f                   	pop    %edi
 85e2e72:	5d                   	pop    %ebp
 85e2e73:	c3                   	ret

```

```c
// PvP_MissionSystem::get_New_DailyMission @ 0x85e26e0

/* PvP_MissionSystem::get_New_DailyMission(std::vector<std::pair<unsigned int, unsigned int>,
   std::allocator<std::pair<unsigned int, unsigned int> > >&) */

void __thiscall PvP_MissionSystem::get_New_DailyMission(PvP_MissionSystem *this,vector *param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int local_130;
  char local_12c [64];
  string local_ec [4];
  string local_e8 [4];
  undefined4 local_e4;
  bitset<32u> local_e0 [4];
  list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
  local_dc [8];
  int local_d4;
  undefined4 local_d0;
  map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>> local_cc [4];
  pair<unsigned_int,unsigned_int> local_c8 [8];
  int local_c0 [2];
  undefined4 local_b8;
  int local_b4;
  _List_iterator local_b0 [4];
  undefined4 local_ac;
  map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>> local_a8 [4];
  pair<unsigned_int,unsigned_int> local_a4 [8];
  int local_9c [2];
  undefined4 local_94;
  int local_90;
  undefined1 local_8c [4];
  cMyTrace local_88 [16];
  cMyTrace local_78 [16];
  reference local_68 [8];
  cMyTrace local_60 [16];
  reference local_50 [8];
  uint local_48;
  uint local_44;
  uint local_40;
  CMission *local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  CMission *local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  std::_Rb_tree_iterator<std::pair<int_const,CMission*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,CMission*>> *)&local_d4);
  local_40 = 0;
  while (uVar4 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size
                           ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x24)),
        local_40 < uVar4) {
    puVar7 = (undefined4 *)
             std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                       ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x24),local_40)
    ;
    local_d0 = *puVar7;
    std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::find
              (&local_130);
    local_d4 = local_130;
    std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::end
              (local_cc);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,CMission*>>::operator==
                      ((_Rb_tree_iterator<std::pair<int_const,CMission*>> *)local_cc,
                       (_Rb_tree_iterator *)&local_d4);
    if (cVar2 == '\0') {
      iVar10 = std::_Rb_tree_iterator<std::pair<int_const,CMission*>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,CMission*>> *)&local_d4);
      local_3c = *(CMission **)(iVar10 + 4);
      if (local_3c != (CMission *)0x0) {
        local_b8 = CMission::GetMissionIndex(local_3c);
        local_b4 = CMission::GetMissionKind(local_3c);
        std::make_pair<int,int>(local_c0,&local_b4);
        std::pair<unsigned_int,unsigned_int>::pair<int,int>(local_c8,(pair *)local_c0);
        std::
        vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
        ::push_back((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                     *)param_1,local_c8);
      }
    }
    local_40 = local_40 + 1;
  }
  std::
  list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>::
  list(local_dc,(list *)(this + 0x34));
  local_48 = *(uint *)(this + 0x3c);
  for (local_38 = 0; local_38 < *(uint *)(this + 0x30); local_38 = local_38 + 1) {
    local_34 = CMTRand::randInt(*(CMTRand **)(this + 0x44));
    local_34 = local_34 % local_48;
    local_30 = 0;
                    /* try { // try from 085e289e to 085e2b2b has its CatchHandler @ 085e2e3d */
    std::
    list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
    ::begin();
    while( true ) {
      std::
      list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
      ::end();
      cVar2 = std::_List_iterator<std::pair<unsigned_int,unsigned_int>>::operator!=
                        ((_List_iterator<std::pair<unsigned_int,unsigned_int>> *)&local_e4,local_b0)
      ;
      if (cVar2 == '\0') break;
      piVar5 = (int *)std::_List_iterator<std::pair<unsigned_int,unsigned_int>>::operator->
                                ((_List_iterator<std::pair<unsigned_int,unsigned_int>> *)&local_e4);
      local_30 = *piVar5 + local_30;
      if ((int)local_34 < local_30) {
        iVar10 = std::_List_iterator<std::pair<unsigned_int,unsigned_int>>::operator->
                           ((_List_iterator<std::pair<unsigned_int,unsigned_int>> *)&local_e4);
        local_ac = *(undefined4 *)(iVar10 + 4);
        std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::find
                  (&local_130);
        local_d4 = local_130;
        std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::end
                  (local_a8);
        cVar2 = std::_Rb_tree_iterator<std::pair<int_const,CMission*>>::operator==
                          ((_Rb_tree_iterator<std::pair<int_const,CMission*>> *)local_a8,
                           (_Rb_tree_iterator *)&local_d4);
        if (cVar2 == '\0') {
          iVar10 = std::_Rb_tree_iterator<std::pair<int_const,CMission*>>::operator->
                             ((_Rb_tree_iterator<std::pair<int_const,CMission*>> *)&local_d4);
          local_2c = *(CMission **)(iVar10 + 4);
          if (local_2c != (CMission *)0x0) {
            local_94 = CMission::GetMissionIndex(local_2c);
            local_90 = CMission::GetMissionKind(local_2c);
            std::make_pair<int,int>(local_9c,&local_90);
            std::pair<unsigned_int,unsigned_int>::pair<int,int>(local_a4,(pair *)local_9c);
            std::
            vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
            ::push_back((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                         *)param_1,local_a4);
          }
          uVar4 = local_48;
          piVar5 = (int *)std::_List_iterator<std::pair<unsigned_int,unsigned_int>>::operator->
                                    ((_List_iterator<std::pair<unsigned_int,unsigned_int>> *)
                                     &local_e4);
          local_48 = uVar4 - *piVar5;
          std::
          list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
          ::erase(local_8c,local_dc,local_e4);
          break;
        }
      }
      std::_List_iterator<std::pair<unsigned_int,unsigned_int>>::operator++
                ((_List_iterator<std::pair<unsigned_int,unsigned_int>> *)&local_e4);
    }
    if ((int)local_48 < 1) {
      cMyTrace::cMyTrace(local_88,
                         "void PvP_MissionSystem::get_New_DailyMission(std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int, unsigned int> > >&)"
                         ,0x123,5);
      cMyTrace::operator()(local_88,"[@missionSystem] InvalidMaxDice %d",local_48);
      goto LAB_085e2e5b;
    }
  }
  local_44 = 0;
  std::bitset<32u>::bitset(local_e0,0);
  local_28 = 0;
  while( true ) {
    uVar4 = std::
            vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
            ::size((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                    *)param_1);
    if (uVar4 <= local_28) goto LAB_085e2e5b;
    puVar6 = (uint *)std::
                     vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                     ::operator[]((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                                   *)param_1,local_28);
    local_44 = *puVar6;
    if ((local_44 == 0) || (0x20 < local_44)) break;
    std::bitset<32u>::operator[]((uint)local_68);
    bVar3 = std::bitset::reference::operator_cast_to_bool(local_68);
    std::bitset<32u>::reference::~reference((reference *)local_68);
    if (bVar3) {
      std::string::string(local_ec);
      local_20 = 0;
      while (uVar4 = std::
                     vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                     ::size((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                             *)param_1), local_20 < uVar4) {
        iVar10 = std::
                 vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                 ::operator[]((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                               *)param_1,local_20);
        uVar1 = *(undefined4 *)(iVar10 + 4);
        puVar7 = (undefined4 *)
                 std::
                 vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                 ::operator[]((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                               *)param_1,local_20);
        sprintf(local_12c,"<K:%d, I:%d>",*puVar7,uVar1);
                    /* try { // try from 085e2d13 to 085e2db6 has its CatchHandler @ 085e2db9 */
        std::string::operator+=(local_ec,local_12c);
        local_20 = local_20 + 1;
      }
      uVar8 = std::string::c_str(local_ec);
      uVar9 = std::
              vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
              ::size((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                      *)param_1);
      iVar10 = std::
               vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
               ::operator[]((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                             *)param_1,local_28);
      uVar1 = *(undefined4 *)(iVar10 + 4);
      cMyTrace::cMyTrace(local_60,
                         "void PvP_MissionSystem::get_New_DailyMission(std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int, unsigned int> > >&)"
                         ,0x14d,5);
      cMyTrace::operator()
                (local_60,
                 "[@missionSystem] OverlappedKind: <Invalid mission kind : %d> <mission index : %d> <Created DailyMission Size : %d> <List : %s >"
                 ,local_44,uVar1,uVar9,uVar8);
      std::
      vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
      ::clear((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
               *)param_1);
                    /* try { // try from 085e2dda to 085e2dfc has its CatchHandler @ 085e2e3d */
      std::string::~string(local_ec);
      goto LAB_085e2e5b;
    }
    std::bitset<32u>::operator[]((uint)local_50);
    std::bitset<32u>::reference::operator=(local_50,true);
    std::bitset<32u>::reference::~reference(local_50);
    local_28 = local_28 + 1;
  }
  std::string::string(local_e8);
  local_24 = 0;
  while (uVar4 = std::
                 vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                 ::size((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                         *)param_1), local_24 < uVar4) {
    iVar10 = std::
             vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
             ::operator[]((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                           *)param_1,local_24);
    uVar1 = *(undefined4 *)(iVar10 + 4);
    puVar7 = (undefined4 *)
             std::
             vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
             ::operator[]((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                           *)param_1,local_24);
    sprintf(local_12c,"<K:%d, I:%d>",*puVar7,uVar1);
                    /* try { // try from 085e2b8f to 085e2c32 has its CatchHandler @ 085e2c35 */
    std::string::operator+=(local_e8,local_12c);
    local_24 = local_24 + 1;
  }
  uVar8 = std::string::c_str(local_e8);
  uVar9 = std::
          vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
          ::size((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                  *)param_1);
  iVar10 = std::
           vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
           ::operator[]((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                         *)param_1,local_28);
  uVar1 = *(undefined4 *)(iVar10 + 4);
  cMyTrace::cMyTrace(local_78,
                     "void PvP_MissionSystem::get_New_DailyMission(std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int, unsigned int> > >&)"
                     ,0x139,5);
  cMyTrace::operator()
            (local_78,
             "[@missionSystem] OverKind: <Invalid mission kind : %d> <mission index : %d> <Created DailyMission Size : %d> <List : %s >"
             ,local_44,uVar1,uVar9,uVar8);
  std::
  vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
  ::clear((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
           *)param_1);
                    /* try { // try from 085e2c59 to 085e2caf has its CatchHandler @ 085e2e3d */
  std::string::~string(local_e8);
LAB_085e2e5b:
  std::
  list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>::
  ~list(local_dc);
  return;
}

```

---

## get_WithinMissionIndex

```asm
// === 085e2f00 PvP_MissionSystem::get_WithinMissionIndex  [0x085e2f00-0x85e2ffb] ===
 85e2f00:	55                   	push   %ebp
 85e2f01:	89 e5                	mov    %esp,%ebp
 85e2f03:	83 ec 38             	sub    $0x38,%esp
 85e2f06:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85e2f0d:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85e2f14:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e2f17:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e2f1b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e2f1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e2f22:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85e2f25:	89 04 24             	mov    %eax,(%esp)
 85e2f28:	e8 a7 f8 b7 ff       	call   81627d4 <_ZNSt4pairIiiEC1IiiEEOT_OT0_>
 85e2f2d:	8b 45 08             	mov    0x8(%ebp),%eax
 85e2f30:	83 c0 18             	add    $0x18,%eax
 85e2f33:	c7 44 24 04 1b 00 00 	movl   $0x1b,0x4(%esp)
 85e2f3a:	00 
 85e2f3b:	89 04 24             	mov    %eax,(%esp)
 85e2f3e:	e8 0d 50 00 00       	call   85e7f50 <_ZNKSt6vectorISt4listIP8CMissionSaIS2_EESaIS4_EEixEj>
 85e2f43:	8d 55 d8             	lea    -0x28(%ebp),%edx
 85e2f46:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e2f4a:	89 14 24             	mov    %edx,(%esp)
 85e2f4d:	e8 10 50 00 00       	call   85e7f62 <_ZNKSt4listIP8CMissionSaIS1_EE5beginEv>
 85e2f52:	83 ec 04             	sub    $0x4,%esp
 85e2f55:	eb 5b                	jmp    85e2fb2 <_ZNK17PvP_MissionSystem22get_WithinMissionIndexEi+0xb2>
 85e2f57:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85e2f5a:	89 04 24             	mov    %eax,(%esp)
 85e2f5d:	e8 72 50 00 00       	call   85e7fd4 <_ZNKSt20_List_const_iteratorIP8CMissionEdeEv>
 85e2f62:	8b 10                	mov    (%eax),%edx
 85e2f64:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85e2f67:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e2f6b:	89 04 24             	mov    %eax,(%esp)
 85e2f6e:	e8 b7 39 00 00       	call   85e692a <_ZNK8CMission12GetRankRangeEv>
 85e2f73:	83 ec 04             	sub    $0x4,%esp
 85e2f76:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85e2f79:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e2f7d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85e2f80:	89 04 24             	mov    %eax,(%esp)
 85e2f83:	e8 94 af af ff       	call   80ddf1c <_ZNSt4pairIiiEaSEOS0_>
 85e2f88:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85e2f8b:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85e2f8e:	75 17                	jne    85e2fa7 <_ZNK17PvP_MissionSystem22get_WithinMissionIndexEi+0xa7>
 85e2f90:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85e2f93:	89 04 24             	mov    %eax,(%esp)
 85e2f96:	e8 39 50 00 00       	call   85e7fd4 <_ZNKSt20_List_const_iteratorIP8CMissionEdeEv>
 85e2f9b:	8b 00                	mov    (%eax),%eax
 85e2f9d:	89 04 24             	mov    %eax,(%esp)
 85e2fa0:	e8 61 39 00 00       	call   85e6906 <_ZNK8CMission15GetMissionIndexEv>
 85e2fa5:	eb 52                	jmp    85e2ff9 <_ZNK17PvP_MissionSystem22get_WithinMissionIndexEi+0xf9>
 85e2fa7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85e2faa:	89 04 24             	mov    %eax,(%esp)
 85e2fad:	e8 0e 50 00 00       	call   85e7fc0 <_ZNSt20_List_const_iteratorIP8CMissionEppEv>
 85e2fb2:	8b 45 08             	mov    0x8(%ebp),%eax
 85e2fb5:	83 c0 18             	add    $0x18,%eax
 85e2fb8:	c7 44 24 04 1b 00 00 	movl   $0x1b,0x4(%esp)
 85e2fbf:	00 
 85e2fc0:	89 04 24             	mov    %eax,(%esp)
 85e2fc3:	e8 88 4f 00 00       	call   85e7f50 <_ZNKSt6vectorISt4listIP8CMissionSaIS2_EESaIS4_EEixEj>
 85e2fc8:	8d 55 ec             	lea    -0x14(%ebp),%edx
 85e2fcb:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e2fcf:	89 14 24             	mov    %edx,(%esp)
 85e2fd2:	e8 b1 4f 00 00       	call   85e7f88 <_ZNKSt4listIP8CMissionSaIS1_EE3endEv>
 85e2fd7:	83 ec 04             	sub    $0x4,%esp
 85e2fda:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e2fdd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e2fe1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85e2fe4:	89 04 24             	mov    %eax,(%esp)
 85e2fe7:	e8 c0 4f 00 00       	call   85e7fac <_ZNKSt20_List_const_iteratorIP8CMissionEneERKS2_>
 85e2fec:	84 c0                	test   %al,%al
 85e2fee:	0f 85 63 ff ff ff    	jne    85e2f57 <_ZNK17PvP_MissionSystem22get_WithinMissionIndexEi+0x57>
 85e2ff4:	b8 00 00 00 00       	mov    $0x0,%eax
 85e2ff9:	c9                   	leave
 85e2ffa:	c3                   	ret
 85e2ffb:	90                   	nop

```

```c
// PvP_MissionSystem::get_WithinMissionIndex @ 0x85e2f00

/* PvP_MissionSystem::get_WithinMissionIndex(int) const */

undefined4 __thiscall PvP_MissionSystem::get_WithinMissionIndex(PvP_MissionSystem *this,int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  _List_const_iterator<CMission*> local_2c [4];
  int local_28 [2];
  int local_20 [2];
  _List_const_iterator local_18 [4];
  pair local_14 [16];
  
  local_20[0] = 0;
  local_20[1] = 0;
  std::pair<int,int>::pair<int,int>((pair<int,int> *)local_28,local_20 + 1,local_20);
  std::
  vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
  ::operator[]((vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
                *)(this + 0x18),0x1b);
  std::list<CMission*,std::allocator<CMission*>>::begin();
  while( true ) {
    std::
    vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
    ::operator[]((vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
                  *)(this + 0x18),0x1b);
    std::list<CMission*,std::allocator<CMission*>>::end();
    cVar1 = std::_List_const_iterator<CMission*>::operator!=(local_2c,local_18);
    if (cVar1 == '\0') {
      return 0;
    }
    std::_List_const_iterator<CMission*>::operator*(local_2c);
    CMission::GetRankRange();
    std::pair<int,int>::operator=((pair<int,int> *)local_28,local_14);
    if (local_28[0] == param_1) break;
    std::_List_const_iterator<CMission*>::operator++(local_2c);
  }
  puVar2 = (undefined4 *)std::_List_const_iterator<CMission*>::operator*(local_2c);
  uVar3 = CMission::GetMissionIndex((CMission *)*puVar2);
  return uVar3;
}

```

---

## get_kind_mission_list

```asm
// === 085e2692 PvP_MissionSystem::get_kind_mission_list  [0x085e2692-0x85e26df] ===
 85e2692:	55                   	push   %ebp
 85e2693:	89 e5                	mov    %esp,%ebp
 85e2695:	83 ec 18             	sub    $0x18,%esp
 85e2698:	8b 45 08             	mov    0x8(%ebp),%eax
 85e269b:	83 c0 18             	add    $0x18,%eax
 85e269e:	89 04 24             	mov    %eax,(%esp)
 85e26a1:	e8 98 53 00 00       	call   85e7a3e <_ZNKSt6vectorISt4listIP8CMissionSaIS2_EESaIS4_EE4sizeEv>
 85e26a6:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85e26a9:	0f 97 c0             	seta   %al
 85e26ac:	84 c0                	test   %al,%al
 85e26ae:	74 17                	je     85e26c7 <_ZN17PvP_MissionSystem21get_kind_mission_listEj+0x35>
 85e26b0:	8b 45 08             	mov    0x8(%ebp),%eax
 85e26b3:	8d 50 18             	lea    0x18(%eax),%edx
 85e26b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e26b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e26bd:	89 14 24             	mov    %edx,(%esp)
 85e26c0:	e8 45 4f 00 00       	call   85e760a <_ZNSt6vectorISt4listIP8CMissionSaIS2_EESaIS4_EEixEj>
 85e26c5:	eb 16                	jmp    85e26dd <_ZN17PvP_MissionSystem21get_kind_mission_listEj+0x4b>
 85e26c7:	8b 45 08             	mov    0x8(%ebp),%eax
 85e26ca:	83 c0 18             	add    $0x18,%eax
 85e26cd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85e26d4:	00 
 85e26d5:	89 04 24             	mov    %eax,(%esp)
 85e26d8:	e8 2d 4f 00 00       	call   85e760a <_ZNSt6vectorISt4listIP8CMissionSaIS2_EESaIS4_EEixEj>
 85e26dd:	c9                   	leave
 85e26de:	c3                   	ret
 85e26df:	90                   	nop

```

```c
// PvP_MissionSystem::get_kind_mission_list @ 0x85e2692

/* PvP_MissionSystem::get_kind_mission_list(unsigned int) */

void __thiscall PvP_MissionSystem::get_kind_mission_list(PvP_MissionSystem *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = std::
          vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
          ::size((vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
                  *)(this + 0x18));
  if (param_1 < uVar1) {
    std::
    vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
    ::operator[]((vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
                  *)(this + 0x18),param_1);
  }
  else {
    std::
    vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
    ::operator[]((vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
                  *)(this + 0x18),0);
  }
  return;
}

```

---

## sort_list

```asm
// === 085e20d4 PvP_MissionSystem::sort_list  [0x085e20d4-0x85e2131] ===
 85e20d4:	55                   	push   %ebp
 85e20d5:	89 e5                	mov    %esp,%ebp
 85e20d7:	53                   	push   %ebx
 85e20d8:	83 ec 24             	sub    $0x24,%esp
 85e20db:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85e20e2:	eb 2b                	jmp    85e210f <_ZN17PvP_MissionSystem9sort_listEv+0x3b>
 85e20e4:	8b 45 08             	mov    0x8(%ebp),%eax
 85e20e7:	8d 50 18             	lea    0x18(%eax),%edx
 85e20ea:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e20ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e20f1:	89 14 24             	mov    %edx,(%esp)
 85e20f4:	e8 11 55 00 00       	call   85e760a <_ZNSt6vectorISt4listIP8CMissionSaIS2_EESaIS4_EEixEj>
 85e20f9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85e20fc:	88 5c 24 04          	mov    %bl,0x4(%esp)
 85e2100:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e2103:	89 04 24             	mov    %eax,(%esp)
 85e2106:	e8 4f 59 00 00       	call   85e7a5a <_ZNSt4listIP8CMissionSaIS1_EE4sortI15MissionLessThanEEvT_>
 85e210b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85e210f:	8b 45 08             	mov    0x8(%ebp),%eax
 85e2112:	83 c0 18             	add    $0x18,%eax
 85e2115:	89 04 24             	mov    %eax,(%esp)
 85e2118:	e8 21 59 00 00       	call   85e7a3e <_ZNKSt6vectorISt4listIP8CMissionSaIS2_EESaIS4_EE4sizeEv>
 85e211d:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85e2120:	0f 97 c0             	seta   %al
 85e2123:	84 c0                	test   %al,%al
 85e2125:	75 bd                	jne    85e20e4 <_ZN17PvP_MissionSystem9sort_listEv+0x10>
 85e2127:	b8 00 00 00 00       	mov    $0x0,%eax
 85e212c:	83 c4 24             	add    $0x24,%esp
 85e212f:	5b                   	pop    %ebx
 85e2130:	5d                   	pop    %ebp
 85e2131:	c3                   	ret

```

```c
// PvP_MissionSystem::sort_list @ 0x85e20d4

/* PvP_MissionSystem::sort_list() */

undefined4 __thiscall PvP_MissionSystem::sort_list(PvP_MissionSystem *this)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 unaff_BL;
  uint local_14;
  
  local_14 = 0;
  while( true ) {
    uVar2 = std::
            vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
            ::size((vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
                    *)(this + 0x18));
    if (uVar2 <= local_14) break;
    uVar1 = std::
            vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
            ::operator[]((vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
                          *)(this + 0x18),local_14);
    std::list<CMission*,std::allocator<CMission*>>::sort<MissionLessThan>(uVar1,unaff_BL);
    local_14 = local_14 + 1;
  }
  return 0;
}

```

---

## ~PvP_MissionSystem

```asm
// === 085e1c48 PvP_MissionSystem::~PvP_MissionSystem  [0x085e1c48-0x85e1dc5] ===
 85e1c48:	55                   	push   %ebp
 85e1c49:	89 e5                	mov    %esp,%ebp
 85e1c4b:	56                   	push   %esi
 85e1c4c:	53                   	push   %ebx
 85e1c4d:	83 ec 20             	sub    $0x20,%esp
 85e1c50:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1c53:	8b 40 44             	mov    0x44(%eax),%eax
 85e1c56:	85 c0                	test   %eax,%eax
 85e1c58:	74 0e                	je     85e1c68 <_ZN17PvP_MissionSystemD1Ev+0x20>
 85e1c5a:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1c5d:	8b 40 44             	mov    0x44(%eax),%eax
 85e1c60:	89 04 24             	mov    %eax,(%esp)
 85e1c63:	e8 88 28 14 00       	call   87244f0 <_ZdlPv>
 85e1c68:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1c6b:	c7 40 44 00 00 00 00 	movl   $0x0,0x44(%eax)
 85e1c72:	c7 04 24 83 2a cc 08 	movl   $0x8cc2a83,(%esp)
 85e1c79:	e8 f2 c8 a9 ff       	call   807e570 <puts@plt>
 85e1c7e:	8b 55 08             	mov    0x8(%ebp),%edx
 85e1c81:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85e1c84:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e1c88:	89 04 24             	mov    %eax,(%esp)
 85e1c8b:	e8 38 58 00 00       	call   85e74c8 <_ZNSt3mapIiP8CMissionSt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 85e1c90:	83 ec 04             	sub    $0x4,%esp
 85e1c93:	eb 29                	jmp    85e1cbe <_ZN17PvP_MissionSystemD1Ev+0x76>
 85e1c95:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85e1c98:	89 04 24             	mov    %eax,(%esp)
 85e1c9b:	e8 a6 58 00 00       	call   85e7546 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP8CMissionEEptEv>
 85e1ca0:	8b 40 04             	mov    0x4(%eax),%eax
 85e1ca3:	85 c0                	test   %eax,%eax
 85e1ca5:	74 0c                	je     85e1cb3 <_ZN17PvP_MissionSystemD1Ev+0x6b>
 85e1ca7:	8b 10                	mov    (%eax),%edx
 85e1ca9:	83 c2 10             	add    $0x10,%edx
 85e1cac:	8b 12                	mov    (%edx),%edx
 85e1cae:	89 04 24             	mov    %eax,(%esp)
 85e1cb1:	ff d2                	call   *%edx
 85e1cb3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85e1cb6:	89 04 24             	mov    %eax,(%esp)
 85e1cb9:	e8 6a 58 00 00       	call   85e7528 <_ZNSt17_Rb_tree_iteratorISt4pairIKiP8CMissionEEppEv>
 85e1cbe:	8b 55 08             	mov    0x8(%ebp),%edx
 85e1cc1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85e1cc4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e1cc8:	89 04 24             	mov    %eax,(%esp)
 85e1ccb:	e8 1e 58 00 00       	call   85e74ee <_ZNSt3mapIiP8CMissionSt4lessIiESaISt4pairIKiS1_EEE3endEv>
 85e1cd0:	83 ec 04             	sub    $0x4,%esp
 85e1cd3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85e1cd6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e1cda:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85e1cdd:	89 04 24             	mov    %eax,(%esp)
 85e1ce0:	e8 2f 58 00 00       	call   85e7514 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP8CMissionEEneERKS5_>
 85e1ce5:	84 c0                	test   %al,%al
 85e1ce7:	75 ac                	jne    85e1c95 <_ZN17PvP_MissionSystemD1Ev+0x4d>
 85e1ce9:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1cec:	89 04 24             	mov    %eax,(%esp)
 85e1cef:	e8 60 58 00 00       	call   85e7554 <_ZNSt3mapIiP8CMissionSt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 85e1cf4:	eb 18                	jmp    85e1d0e <_ZN17PvP_MissionSystemD1Ev+0xc6>
 85e1cf6:	89 d3                	mov    %edx,%ebx
 85e1cf8:	89 c6                	mov    %eax,%esi
 85e1cfa:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1cfd:	83 c0 48             	add    $0x48,%eax
 85e1d00:	89 04 24             	mov    %eax,(%esp)
 85e1d03:	e8 8a 07 b0 ff       	call   80e2492 <_ZNSt6vectorIjSaIjEED1Ev>
 85e1d08:	89 f0                	mov    %esi,%eax
 85e1d0a:	89 da                	mov    %ebx,%edx
 85e1d0c:	eb 10                	jmp    85e1d1e <_ZN17PvP_MissionSystemD1Ev+0xd6>
 85e1d0e:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1d11:	83 c0 48             	add    $0x48,%eax
 85e1d14:	89 04 24             	mov    %eax,(%esp)
 85e1d17:	e8 76 07 b0 ff       	call   80e2492 <_ZNSt6vectorIjSaIjEED1Ev>
 85e1d1c:	eb 18                	jmp    85e1d36 <_ZN17PvP_MissionSystemD1Ev+0xee>
 85e1d1e:	89 d3                	mov    %edx,%ebx
 85e1d20:	89 c6                	mov    %eax,%esi
 85e1d22:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1d25:	83 c0 34             	add    $0x34,%eax
 85e1d28:	89 04 24             	mov    %eax,(%esp)
 85e1d2b:	e8 80 51 00 00       	call   85e6eb0 <_ZNSt4listISt4pairIjjESaIS1_EED1Ev>
 85e1d30:	89 f0                	mov    %esi,%eax
 85e1d32:	89 da                	mov    %ebx,%edx
 85e1d34:	eb 10                	jmp    85e1d46 <_ZN17PvP_MissionSystemD1Ev+0xfe>
 85e1d36:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1d39:	83 c0 34             	add    $0x34,%eax
 85e1d3c:	89 04 24             	mov    %eax,(%esp)
 85e1d3f:	e8 6c 51 00 00       	call   85e6eb0 <_ZNSt4listISt4pairIjjESaIS1_EED1Ev>
 85e1d44:	eb 18                	jmp    85e1d5e <_ZN17PvP_MissionSystemD1Ev+0x116>
 85e1d46:	89 d3                	mov    %edx,%ebx
 85e1d48:	89 c6                	mov    %eax,%esi
 85e1d4a:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1d4d:	83 c0 24             	add    $0x24,%eax
 85e1d50:	89 04 24             	mov    %eax,(%esp)
 85e1d53:	e8 3a 07 b0 ff       	call   80e2492 <_ZNSt6vectorIjSaIjEED1Ev>
 85e1d58:	89 f0                	mov    %esi,%eax
 85e1d5a:	89 da                	mov    %ebx,%edx
 85e1d5c:	eb 10                	jmp    85e1d6e <_ZN17PvP_MissionSystemD1Ev+0x126>
 85e1d5e:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1d61:	83 c0 24             	add    $0x24,%eax
 85e1d64:	89 04 24             	mov    %eax,(%esp)
 85e1d67:	e8 26 07 b0 ff       	call   80e2492 <_ZNSt6vectorIjSaIjEED1Ev>
 85e1d6c:	eb 18                	jmp    85e1d86 <_ZN17PvP_MissionSystemD1Ev+0x13e>
 85e1d6e:	89 d3                	mov    %edx,%ebx
 85e1d70:	89 c6                	mov    %eax,%esi
 85e1d72:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1d75:	83 c0 18             	add    $0x18,%eax
 85e1d78:	89 04 24             	mov    %eax,(%esp)
 85e1d7b:	e8 5a 55 00 00       	call   85e72da <_ZNSt6vectorISt4listIP8CMissionSaIS2_EESaIS4_EED1Ev>
 85e1d80:	89 f0                	mov    %esi,%eax
 85e1d82:	89 da                	mov    %ebx,%edx
 85e1d84:	eb 10                	jmp    85e1d96 <_ZN17PvP_MissionSystemD1Ev+0x14e>
 85e1d86:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1d89:	83 c0 18             	add    $0x18,%eax
 85e1d8c:	89 04 24             	mov    %eax,(%esp)
 85e1d8f:	e8 46 55 00 00       	call   85e72da <_ZNSt6vectorISt4listIP8CMissionSaIS2_EESaIS4_EED1Ev>
 85e1d94:	eb 1b                	jmp    85e1db1 <_ZN17PvP_MissionSystemD1Ev+0x169>
 85e1d96:	89 d3                	mov    %edx,%ebx
 85e1d98:	89 c6                	mov    %eax,%esi
 85e1d9a:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1d9d:	89 04 24             	mov    %eax,(%esp)
 85e1da0:	e8 f7 50 00 00       	call   85e6e9c <_ZNSt3mapIiP8CMissionSt4lessIiESaISt4pairIKiS1_EEED1Ev>
 85e1da5:	89 f0                	mov    %esi,%eax
 85e1da7:	89 da                	mov    %ebx,%edx
 85e1da9:	89 04 24             	mov    %eax,(%esp)
 85e1dac:	e8 9f 19 50 00       	call   8ae3750 <_Unwind_Resume>
 85e1db1:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1db4:	89 04 24             	mov    %eax,(%esp)
 85e1db7:	e8 e0 50 00 00       	call   85e6e9c <_ZNSt3mapIiP8CMissionSt4lessIiESaISt4pairIKiS1_EEED1Ev>
 85e1dbc:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85e1dbf:	83 c4 00             	add    $0x0,%esp
 85e1dc2:	5b                   	pop    %ebx
 85e1dc3:	5e                   	pop    %esi
 85e1dc4:	5d                   	pop    %ebp
 85e1dc5:	c3                   	ret

```

```c
// PvP_MissionSystem::~PvP_MissionSystem @ 0x85e1c48

/* PvP_MissionSystem::~PvP_MissionSystem() */

void __thiscall PvP_MissionSystem::~PvP_MissionSystem(PvP_MissionSystem *this)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>> local_14 [4];
  map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>> local_10 [4];
  
  if (*(int *)(this + 0x44) != 0) {
    operator_delete(*(void **)(this + 0x44));
  }
  *(undefined4 *)(this + 0x44) = 0;
                    /* try { // try from 085e1c79 to 085e1cf3 has its CatchHandler @ 085e1cf6 */
  puts("Mission System Delete");
  std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::begin
            (local_14);
  while( true ) {
    std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::end
              (local_10);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,CMission*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,CMission*>> *)local_14,
                       (_Rb_tree_iterator *)local_10);
    if (cVar2 == '\0') break;
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,CMission*>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,CMission*>> *)local_14);
    piVar1 = *(int **)(iVar3 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(piVar1);
    }
    std::_Rb_tree_iterator<std::pair<int_const,CMission*>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,CMission*>> *)local_14);
  }
  std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::clear
            ((map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>> *)
             this);
                    /* try { // try from 085e1d17 to 085e1d1b has its CatchHandler @ 085e1d1e */
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x48));
                    /* try { // try from 085e1d3f to 085e1d43 has its CatchHandler @ 085e1d46 */
  std::
  list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>::
  ~list((list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
         *)(this + 0x34));
                    /* try { // try from 085e1d67 to 085e1d6b has its CatchHandler @ 085e1d6e */
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x24));
                    /* try { // try from 085e1d8f to 085e1d93 has its CatchHandler @ 085e1d96 */
  std::
  vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
  ::~vector((vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
             *)(this + 0x18));
  std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::~map
            ((map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>> *)
             this);
  return;
}

```

