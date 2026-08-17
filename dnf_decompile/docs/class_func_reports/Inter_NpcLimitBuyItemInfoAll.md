# Inter_NpcLimitBuyItemInfoAll

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e6258 Inter_NpcLimitBuyItemInfoAll::dispatch_sig  [0x084e6258-0x84e6447] ===
 84e6258:	55                   	push   %ebp
 84e6259:	89 e5                	mov    %esp,%ebp
 84e625b:	56                   	push   %esi
 84e625c:	53                   	push   %ebx
 84e625d:	83 ec 30             	sub    $0x30,%esp
 84e6260:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84e6264:	75 0a                	jne    84e6270 <_ZN28Inter_NpcLimitBuyItemInfoAll12dispatch_sigEP5CUserPci+0x18>
 84e6266:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e626b:	e9 cf 01 00 00       	jmp    84e643f <_ZN28Inter_NpcLimitBuyItemInfoAll12dispatch_sigEP5CUserPci+0x1e7>
 84e6270:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e6273:	89 04 24             	mov    %eax,(%esp)
 84e6276:	e8 11 41 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e627b:	85 c0                	test   %eax,%eax
 84e627d:	0f 94 c0             	sete   %al
 84e6280:	84 c0                	test   %al,%al
 84e6282:	74 0a                	je     84e628e <_ZN28Inter_NpcLimitBuyItemInfoAll12dispatch_sigEP5CUserPci+0x36>
 84e6284:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e6289:	e9 b1 01 00 00       	jmp    84e643f <_ZN28Inter_NpcLimitBuyItemInfoAll12dispatch_sigEP5CUserPci+0x1e7>
 84e628e:	8b 45 10             	mov    0x10(%ebp),%eax
 84e6291:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e6294:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e6297:	89 04 24             	mov    %eax,(%esp)
 84e629a:	e8 ad 7a 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e629f:	c7 44 24 08 93 01 00 	movl   $0x193,0x8(%esp)
 84e62a6:	00 
 84e62a7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e62ae:	00 
 84e62af:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e62b2:	89 04 24             	mov    %eax,(%esp)
 84e62b5:	e8 42 56 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e62ba:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e62bd:	8b 40 16             	mov    0x16(%eax),%eax
 84e62c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e62c4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e62c7:	89 04 24             	mov    %eax,(%esp)
 84e62ca:	e8 6d 56 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e62cf:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84e62d6:	e9 ed 00 00 00       	jmp    84e63c8 <_ZN28Inter_NpcLimitBuyItemInfoAll12dispatch_sigEP5CUserPci+0x170>
 84e62db:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e62de:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 84e62e1:	89 d0                	mov    %edx,%eax
 84e62e3:	01 c0                	add    %eax,%eax
 84e62e5:	01 d0                	add    %edx,%eax
 84e62e7:	c1 e0 02             	shl    $0x2,%eax
 84e62ea:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84e62ed:	83 c0 10             	add    $0x10,%eax
 84e62f0:	8b 40 0a             	mov    0xa(%eax),%eax
 84e62f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e62f7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e62fa:	89 04 24             	mov    %eax,(%esp)
 84e62fd:	e8 3a 56 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e6302:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e6305:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 84e6308:	89 d0                	mov    %edx,%eax
 84e630a:	01 c0                	add    %eax,%eax
 84e630c:	01 d0                	add    %edx,%eax
 84e630e:	c1 e0 02             	shl    $0x2,%eax
 84e6311:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84e6314:	83 c0 10             	add    $0x10,%eax
 84e6317:	8b 40 0e             	mov    0xe(%eax),%eax
 84e631a:	85 c0                	test   %eax,%eax
 84e631c:	75 18                	jne    84e6336 <_ZN28Inter_NpcLimitBuyItemInfoAll12dispatch_sigEP5CUserPci+0xde>
 84e631e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e6325:	00 
 84e6326:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e6329:	89 04 24             	mov    %eax,(%esp)
 84e632c:	e8 0b 56 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e6331:	e9 8e 00 00 00       	jmp    84e63c4 <_ZN28Inter_NpcLimitBuyItemInfoAll12dispatch_sigEP5CUserPci+0x16c>
 84e6336:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e6339:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 84e633c:	89 d0                	mov    %edx,%eax
 84e633e:	01 c0                	add    %eax,%eax
 84e6340:	01 d0                	add    %edx,%eax
 84e6342:	c1 e0 02             	shl    $0x2,%eax
 84e6345:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84e6348:	83 c0 10             	add    $0x10,%eax
 84e634b:	8b 48 12             	mov    0x12(%eax),%ecx
 84e634e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e6351:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 84e6354:	89 d0                	mov    %edx,%eax
 84e6356:	01 c0                	add    %eax,%eax
 84e6358:	01 d0                	add    %edx,%eax
 84e635a:	c1 e0 02             	shl    $0x2,%eax
 84e635d:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 84e6360:	83 c0 10             	add    $0x10,%eax
 84e6363:	8b 40 0e             	mov    0xe(%eax),%eax
 84e6366:	39 c1                	cmp    %eax,%ecx
 84e6368:	72 15                	jb     84e637f <_ZN28Inter_NpcLimitBuyItemInfoAll12dispatch_sigEP5CUserPci+0x127>
 84e636a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e6371:	00 
 84e6372:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e6375:	89 04 24             	mov    %eax,(%esp)
 84e6378:	e8 bf 55 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e637d:	eb 45                	jmp    84e63c4 <_ZN28Inter_NpcLimitBuyItemInfoAll12dispatch_sigEP5CUserPci+0x16c>
 84e637f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e6382:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 84e6385:	89 d0                	mov    %edx,%eax
 84e6387:	01 c0                	add    %eax,%eax
 84e6389:	01 d0                	add    %edx,%eax
 84e638b:	c1 e0 02             	shl    $0x2,%eax
 84e638e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84e6391:	83 c0 10             	add    $0x10,%eax
 84e6394:	8b 48 0e             	mov    0xe(%eax),%ecx
 84e6397:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e639a:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 84e639d:	89 d0                	mov    %edx,%eax
 84e639f:	01 c0                	add    %eax,%eax
 84e63a1:	01 d0                	add    %edx,%eax
 84e63a3:	c1 e0 02             	shl    $0x2,%eax
 84e63a6:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 84e63a9:	83 c0 10             	add    $0x10,%eax
 84e63ac:	8b 40 12             	mov    0x12(%eax),%eax
 84e63af:	89 ca                	mov    %ecx,%edx
 84e63b1:	29 c2                	sub    %eax,%edx
 84e63b3:	89 d0                	mov    %edx,%eax
 84e63b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e63b9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e63bc:	89 04 24             	mov    %eax,(%esp)
 84e63bf:	e8 78 55 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e63c4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84e63c8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e63cb:	8b 40 16             	mov    0x16(%eax),%eax
 84e63ce:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84e63d1:	7e 0d                	jle    84e63e0 <_ZN28Inter_NpcLimitBuyItemInfoAll12dispatch_sigEP5CUserPci+0x188>
 84e63d3:	83 7d f4 1d          	cmpl   $0x1d,-0xc(%ebp)
 84e63d7:	7f 07                	jg     84e63e0 <_ZN28Inter_NpcLimitBuyItemInfoAll12dispatch_sigEP5CUserPci+0x188>
 84e63d9:	b8 01 00 00 00       	mov    $0x1,%eax
 84e63de:	eb 05                	jmp    84e63e5 <_ZN28Inter_NpcLimitBuyItemInfoAll12dispatch_sigEP5CUserPci+0x18d>
 84e63e0:	b8 00 00 00 00       	mov    $0x0,%eax
 84e63e5:	84 c0                	test   %al,%al
 84e63e7:	0f 85 ee fe ff ff    	jne    84e62db <_ZN28Inter_NpcLimitBuyItemInfoAll12dispatch_sigEP5CUserPci+0x83>
 84e63ed:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e63f4:	00 
 84e63f5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e63f8:	89 04 24             	mov    %eax,(%esp)
 84e63fb:	e8 58 55 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e6400:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e6403:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e6407:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e640a:	89 04 24             	mov    %eax,(%esp)
 84e640d:	e8 a8 21 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e6412:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e6417:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e641a:	89 04 24             	mov    %eax,(%esp)
 84e641d:	e8 5e 7a 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e6422:	eb 1b                	jmp    84e643f <_ZN28Inter_NpcLimitBuyItemInfoAll12dispatch_sigEP5CUserPci+0x1e7>
 84e6424:	89 d3                	mov    %edx,%ebx
 84e6426:	89 c6                	mov    %eax,%esi
 84e6428:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e642b:	89 04 24             	mov    %eax,(%esp)
 84e642e:	e8 4d 7a 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e6433:	89 f0                	mov    %esi,%eax
 84e6435:	89 da                	mov    %ebx,%edx
 84e6437:	89 04 24             	mov    %eax,(%esp)
 84e643a:	e8 11 d3 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e643f:	89 d8                	mov    %ebx,%eax
 84e6441:	83 c4 30             	add    $0x30,%esp
 84e6444:	5b                   	pop    %ebx
 84e6445:	5e                   	pop    %esi
 84e6446:	5d                   	pop    %ebp
 84e6447:	c3                   	ret

```

```c
// Inter_NpcLimitBuyItemInfoAll::dispatch_sig @ 0x84e6258

/* Inter_NpcLimitBuyItemInfoAll::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NpcLimitBuyItemInfoAll::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  if ((param_2 != (char *)0x0) && (iVar2 = CUser::get_state((CUser *)param_2), iVar2 != 0)) {
    local_14 = param_3;
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084e62b5 to 084e6411 has its CatchHandler @ 084e6424 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x193);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x16));
    local_10 = 0;
    while( true ) {
      if ((local_10 < *(int *)(local_14 + 0x16)) && (local_10 < 0x1e)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) break;
      InterfacePacketBuf::put_int
                ((InterfacePacketBuf *)local_20,*(int *)(local_14 + local_10 * 0xc + 0x1a));
      if (*(int *)(local_14 + local_10 * 0xc + 0x1e) == 0) {
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0);
      }
      else if (*(uint *)(local_14 + local_10 * 0xc + 0x22) <
               *(uint *)(local_14 + local_10 * 0xc + 0x1e)) {
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_20,
                   *(int *)(local_14 + local_10 * 0xc + 0x1e) -
                   *(int *)(local_14 + local_10 * 0xc + 0x22));
      }
      else {
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0);
      }
      local_10 = local_10 + 1;
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_2,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}

```

