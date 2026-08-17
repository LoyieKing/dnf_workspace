# Inter_MonitorNoticeMessage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d035e Inter_MonitorNoticeMessage::dispatch_sig  [0x084d035e-0x84d0465] ===
 84d035e:	55                   	push   %ebp
 84d035f:	89 e5                	mov    %esp,%ebp
 84d0361:	56                   	push   %esi
 84d0362:	53                   	push   %ebx
 84d0363:	83 ec 20             	sub    $0x20,%esp
 84d0366:	8b 45 10             	mov    0x10(%ebp),%eax
 84d0369:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d036c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d036f:	89 04 24             	mov    %eax,(%esp)
 84d0372:	e8 d5 d9 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d0377:	c7 44 24 08 6e 00 00 	movl   $0x6e,0x8(%esp)
 84d037e:	00 
 84d037f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d0386:	00 
 84d0387:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d038a:	89 04 24             	mov    %eax,(%esp)
 84d038d:	e8 6a b5 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d0392:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d0399:	00 
 84d039a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d039d:	89 04 24             	mov    %eax,(%esp)
 84d03a0:	e8 7b b5 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d03a5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d03ac:	00 
 84d03ad:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d03b0:	89 04 24             	mov    %eax,(%esp)
 84d03b3:	e8 68 b5 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d03b8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d03bb:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84d03bf:	84 c0                	test   %al,%al
 84d03c1:	75 0a                	jne    84d03cd <_ZN26Inter_MonitorNoticeMessage12dispatch_sigEP5CUserPci+0x6f>
 84d03c3:	bb 82 2e 00 00       	mov    $0x2e82,%ebx
 84d03c8:	e9 85 00 00 00       	jmp    84d0452 <_ZN26Inter_MonitorNoticeMessage12dispatch_sigEP5CUserPci+0xf4>
 84d03cd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d03d0:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84d03d4:	0f b6 c0             	movzbl %al,%eax
 84d03d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d03db:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d03de:	89 04 24             	mov    %eax,(%esp)
 84d03e1:	e8 56 b5 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d03e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d03e9:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84d03ed:	0f b6 c0             	movzbl %al,%eax
 84d03f0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d03f3:	83 c2 0b             	add    $0xb,%edx
 84d03f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d03fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d03fe:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d0401:	89 04 24             	mov    %eax,(%esp)
 84d0404:	e8 db 6f ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84d0409:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d0410:	00 
 84d0411:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d0414:	89 04 24             	mov    %eax,(%esp)
 84d0417:	e8 3c b5 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d041c:	e8 86 9f c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84d0421:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84d0424:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d0428:	89 04 24             	mov    %eax,(%esp)
 84d042b:	e8 e4 87 1f 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84d0430:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d0435:	eb 1b                	jmp    84d0452 <_ZN26Inter_MonitorNoticeMessage12dispatch_sigEP5CUserPci+0xf4>
 84d0437:	89 d3                	mov    %edx,%ebx
 84d0439:	89 c6                	mov    %eax,%esi
 84d043b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d043e:	89 04 24             	mov    %eax,(%esp)
 84d0441:	e8 3a da 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d0446:	89 f0                	mov    %esi,%eax
 84d0448:	89 da                	mov    %ebx,%edx
 84d044a:	89 04 24             	mov    %eax,(%esp)
 84d044d:	e8 fe 32 61 00       	call   8ae3750 <_Unwind_Resume>
 84d0452:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d0455:	89 04 24             	mov    %eax,(%esp)
 84d0458:	e8 23 da 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d045d:	89 d8                	mov    %ebx,%eax
 84d045f:	83 c4 20             	add    $0x20,%esp
 84d0462:	5b                   	pop    %ebx
 84d0463:	5e                   	pop    %esi
 84d0464:	5d                   	pop    %ebp
 84d0465:	c3                   	ret

```

```c
// Inter_MonitorNoticeMessage::dispatch_sig @ 0x84d035e

/* Inter_MonitorNoticeMessage::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeMessage::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *this;
  undefined4 uVar1;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d038d to 084d042f has its CatchHandler @ 084d0437 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x6e);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  if (*(char *)(local_10 + 10) == '\0') {
    uVar1 = 0x2e82;
  }
  else {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 10));
    InterfacePacketBuf::put_str
              ((InterfacePacketBuf *)local_1c,(char *)(local_10 + 0xb),
               (uint)*(byte *)(local_10 + 10));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this,local_1c);
    uVar1 = 0;
  }
  PacketGuard::~PacketGuard(local_1c);
  return uVar1;
}

```

