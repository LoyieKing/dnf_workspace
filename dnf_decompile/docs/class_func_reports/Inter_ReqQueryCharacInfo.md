# Inter_ReqQueryCharacInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d22fc Inter_ReqQueryCharacInfo::dispatch_sig  [0x084d22fc-0x84d24a1] ===
 84d22fc:	55                   	push   %ebp
 84d22fd:	89 e5                	mov    %esp,%ebp
 84d22ff:	56                   	push   %esi
 84d2300:	53                   	push   %ebx
 84d2301:	83 ec 20             	sub    $0x20,%esp
 84d2304:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2307:	89 04 24             	mov    %eax,(%esp)
 84d230a:	e8 7d 80 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d230f:	83 f8 02             	cmp    $0x2,%eax
 84d2312:	0f 9e c0             	setle  %al
 84d2315:	84 c0                	test   %al,%al
 84d2317:	74 0a                	je     84d2323 <_ZN24Inter_ReqQueryCharacInfo12dispatch_sigEP5CUserPci+0x27>
 84d2319:	b8 00 00 00 00       	mov    $0x0,%eax
 84d231e:	e9 78 01 00 00       	jmp    84d249b <_ZN24Inter_ReqQueryCharacInfo12dispatch_sigEP5CUserPci+0x19f>
 84d2323:	8b 45 10             	mov    0x10(%ebp),%eax
 84d2326:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d2329:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d232c:	8b 40 20             	mov    0x20(%eax),%eax
 84d232f:	85 c0                	test   %eax,%eax
 84d2331:	74 25                	je     84d2358 <_ZN24Inter_ReqQueryCharacInfo12dispatch_sigEP5CUserPci+0x5c>
 84d2333:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d2336:	8b 40 20             	mov    0x20(%eax),%eax
 84d2339:	0f b6 c0             	movzbl %al,%eax
 84d233c:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d2340:	c7 44 24 04 8b 00 00 	movl   $0x8b,0x4(%esp)
 84d2347:	00 
 84d2348:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d234b:	89 04 24             	mov    %eax,(%esp)
 84d234e:	e8 ef 9b 1a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84d2353:	e9 3e 01 00 00       	jmp    84d2496 <_ZN24Inter_ReqQueryCharacInfo12dispatch_sigEP5CUserPci+0x19a>
 84d2358:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d235b:	89 04 24             	mov    %eax,(%esp)
 84d235e:	e8 e9 b9 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d2363:	c7 44 24 08 8b 00 00 	movl   $0x8b,0x8(%esp)
 84d236a:	00 
 84d236b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d2372:	00 
 84d2373:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2376:	89 04 24             	mov    %eax,(%esp)
 84d2379:	e8 7e 95 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d237e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d2385:	00 
 84d2386:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2389:	89 04 24             	mov    %eax,(%esp)
 84d238c:	e8 8f 95 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d2391:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d2394:	89 04 24             	mov    %eax,(%esp)
 84d2397:	e8 14 c0 ba ff       	call   807e3b0 <strlen@plt>
 84d239c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d23a0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d23a3:	89 04 24             	mov    %eax,(%esp)
 84d23a6:	e8 91 95 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d23ab:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d23ae:	89 04 24             	mov    %eax,(%esp)
 84d23b1:	e8 fa bf ba ff       	call   807e3b0 <strlen@plt>
 84d23b6:	89 c2                	mov    %eax,%edx
 84d23b8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d23bb:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d23bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d23c3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d23c6:	89 04 24             	mov    %eax,(%esp)
 84d23c9:	e8 16 50 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84d23ce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d23d1:	0f b7 40 2a          	movzwl 0x2a(%eax),%eax
 84d23d5:	98                   	cwtl
 84d23d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d23da:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d23dd:	89 04 24             	mov    %eax,(%esp)
 84d23e0:	e8 bf 7a c0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84d23e5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d23e8:	0f b6 40 28          	movzbl 0x28(%eax),%eax
 84d23ec:	0f be c0             	movsbl %al,%eax
 84d23ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d23f3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d23f6:	89 04 24             	mov    %eax,(%esp)
 84d23f9:	e8 22 95 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d23fe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d2401:	0f b6 40 2c          	movzbl 0x2c(%eax),%eax
 84d2405:	0f be c0             	movsbl %al,%eax
 84d2408:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d240c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d240f:	89 04 24             	mov    %eax,(%esp)
 84d2412:	e8 09 95 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d2417:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d241a:	0f b6 40 2d          	movzbl 0x2d(%eax),%eax
 84d241e:	0f be c0             	movsbl %al,%eax
 84d2421:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d2425:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2428:	89 04 24             	mov    %eax,(%esp)
 84d242b:	e8 f0 94 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d2430:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d2433:	0f b6 40 2e          	movzbl 0x2e(%eax),%eax
 84d2437:	0f be c0             	movsbl %al,%eax
 84d243a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d243e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2441:	89 04 24             	mov    %eax,(%esp)
 84d2444:	e8 d7 94 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d2449:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d2450:	00 
 84d2451:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2454:	89 04 24             	mov    %eax,(%esp)
 84d2457:	e8 fc 94 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d245c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d245f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d2463:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2466:	89 04 24             	mov    %eax,(%esp)
 84d2469:	e8 4c 61 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d246e:	eb 1b                	jmp    84d248b <_ZN24Inter_ReqQueryCharacInfo12dispatch_sigEP5CUserPci+0x18f>
 84d2470:	89 d3                	mov    %edx,%ebx
 84d2472:	89 c6                	mov    %eax,%esi
 84d2474:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2477:	89 04 24             	mov    %eax,(%esp)
 84d247a:	e8 01 ba 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d247f:	89 f0                	mov    %esi,%eax
 84d2481:	89 da                	mov    %ebx,%edx
 84d2483:	89 04 24             	mov    %eax,(%esp)
 84d2486:	e8 c5 12 61 00       	call   8ae3750 <_Unwind_Resume>
 84d248b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d248e:	89 04 24             	mov    %eax,(%esp)
 84d2491:	e8 ea b9 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d2496:	b8 00 00 00 00       	mov    $0x0,%eax
 84d249b:	83 c4 20             	add    $0x20,%esp
 84d249e:	5b                   	pop    %ebx
 84d249f:	5e                   	pop    %esi
 84d24a0:	5d                   	pop    %ebp
 84d24a1:	c3                   	ret

```

```c
// Inter_ReqQueryCharacInfo::dispatch_sig @ 0x84d22fc

/* Inter_ReqQueryCharacInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReqQueryCharacInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  PacketGuard local_1c [12];
  char *local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_10 = (char *)param_3;
    if (*(int *)(param_3 + 0x20) == 0) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d2379 to 084d246d has its CatchHandler @ 084d2470 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x8b);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      sVar2 = strlen(local_10);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,sVar2);
      sVar2 = strlen(local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_1c,local_10,sVar2);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 0x2a))
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)local_10[0x28]);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)local_10[0x2c]);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)local_10[0x2d]);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)local_10[0x2e]);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x8b,*(uint *)(param_3 + 0x20) & 0xff);
    }
  }
  return 0;
}

```

