# Inter_WebNoticeSingle

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d1344 Inter_WebNoticeSingle::dispatch_sig  [0x084d1344-0x84d1447] ===
 84d1344:	55                   	push   %ebp
 84d1345:	89 e5                	mov    %esp,%ebp
 84d1347:	56                   	push   %esi
 84d1348:	53                   	push   %ebx
 84d1349:	83 ec 20             	sub    $0x20,%esp
 84d134c:	8b 45 10             	mov    0x10(%ebp),%eax
 84d134f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d1352:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d1355:	89 04 24             	mov    %eax,(%esp)
 84d1358:	e8 ef c9 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d135d:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 84d1364:	00 
 84d1365:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d136c:	00 
 84d136d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d1370:	89 04 24             	mov    %eax,(%esp)
 84d1373:	e8 84 a5 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d1378:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d137f:	00 
 84d1380:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d1383:	89 04 24             	mov    %eax,(%esp)
 84d1386:	e8 95 a5 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d138b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d1392:	00 
 84d1393:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d1396:	89 04 24             	mov    %eax,(%esp)
 84d1399:	e8 06 8b c0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84d139e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d13a5:	00 
 84d13a6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d13a9:	89 04 24             	mov    %eax,(%esp)
 84d13ac:	e8 6f a5 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d13b1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d13b4:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84d13b8:	0f b6 c0             	movzbl %al,%eax
 84d13bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d13bf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d13c2:	89 04 24             	mov    %eax,(%esp)
 84d13c5:	e8 72 a5 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d13ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d13cd:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84d13d1:	0f b6 c0             	movzbl %al,%eax
 84d13d4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d13d7:	83 c2 0b             	add    $0xb,%edx
 84d13da:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d13de:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d13e2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d13e5:	89 04 24             	mov    %eax,(%esp)
 84d13e8:	e8 f7 5f ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84d13ed:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d13f4:	00 
 84d13f5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d13f8:	89 04 24             	mov    %eax,(%esp)
 84d13fb:	e8 58 a5 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d1400:	e8 a2 8f c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84d1405:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84d1408:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d140c:	89 04 24             	mov    %eax,(%esp)
 84d140f:	e8 00 78 1f 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84d1414:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d1419:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d141c:	89 04 24             	mov    %eax,(%esp)
 84d141f:	e8 5c ca 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d1424:	89 d8                	mov    %ebx,%eax
 84d1426:	83 c4 20             	add    $0x20,%esp
 84d1429:	5b                   	pop    %ebx
 84d142a:	5e                   	pop    %esi
 84d142b:	5d                   	pop    %ebp
 84d142c:	c3                   	ret
 84d142d:	89 d3                	mov    %edx,%ebx
 84d142f:	89 c6                	mov    %eax,%esi
 84d1431:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d1434:	89 04 24             	mov    %eax,(%esp)
 84d1437:	e8 44 ca 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d143c:	89 f0                	mov    %esi,%eax
 84d143e:	89 da                	mov    %ebx,%edx
 84d1440:	89 04 24             	mov    %eax,(%esp)
 84d1443:	e8 08 23 61 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// Inter_WebNoticeSingle::dispatch_sig @ 0x84d1344

/* Inter_WebNoticeSingle::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_WebNoticeSingle::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *this;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d1373 to 084d1413 has its CatchHandler @ 084d142d */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xc);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 10));
  InterfacePacketBuf::put_str
            ((InterfacePacketBuf *)local_1c,(char *)(local_10 + 0xb),(uint)*(byte *)(local_10 + 10))
  ;
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}

```

