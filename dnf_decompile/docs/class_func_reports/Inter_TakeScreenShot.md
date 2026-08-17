# Inter_TakeScreenShot

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084df3d6 Inter_TakeScreenShot::dispatch_sig  [0x084df3d6-0x84df479] ===
 84df3d6:	55                   	push   %ebp
 84df3d7:	89 e5                	mov    %esp,%ebp
 84df3d9:	56                   	push   %esi
 84df3da:	53                   	push   %ebx
 84df3db:	83 ec 20             	sub    $0x20,%esp
 84df3de:	8b 45 10             	mov    0x10(%ebp),%eax
 84df3e1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84df3e4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84df3e7:	89 04 24             	mov    %eax,(%esp)
 84df3ea:	e8 5d e9 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84df3ef:	c7 44 24 08 f4 00 00 	movl   $0xf4,0x8(%esp)
 84df3f6:	00 
 84df3f7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84df3fe:	00 
 84df3ff:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84df402:	89 04 24             	mov    %eax,(%esp)
 84df405:	e8 f2 c4 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84df40a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84df40d:	8b 40 0b             	mov    0xb(%eax),%eax
 84df410:	89 44 24 04          	mov    %eax,0x4(%esp)
 84df414:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84df417:	89 04 24             	mov    %eax,(%esp)
 84df41a:	e8 1d c5 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84df41f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84df426:	00 
 84df427:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84df42a:	89 04 24             	mov    %eax,(%esp)
 84df42d:	e8 26 c5 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84df432:	e8 70 af bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84df437:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84df43a:	89 54 24 04          	mov    %edx,0x4(%esp)
 84df43e:	89 04 24             	mov    %eax,(%esp)
 84df441:	e8 ce 97 1e 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84df446:	bb 00 00 00 00       	mov    $0x0,%ebx
 84df44b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84df44e:	89 04 24             	mov    %eax,(%esp)
 84df451:	e8 2a ea 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84df456:	89 d8                	mov    %ebx,%eax
 84df458:	83 c4 20             	add    $0x20,%esp
 84df45b:	5b                   	pop    %ebx
 84df45c:	5e                   	pop    %esi
 84df45d:	5d                   	pop    %ebp
 84df45e:	c3                   	ret
 84df45f:	89 d3                	mov    %edx,%ebx
 84df461:	89 c6                	mov    %eax,%esi
 84df463:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84df466:	89 04 24             	mov    %eax,(%esp)
 84df469:	e8 12 ea 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84df46e:	89 f0                	mov    %esi,%eax
 84df470:	89 da                	mov    %ebx,%edx
 84df472:	89 04 24             	mov    %eax,(%esp)
 84df475:	e8 d6 42 60 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// Inter_TakeScreenShot::dispatch_sig @ 0x84df3d6

/* Inter_TakeScreenShot::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_TakeScreenShot::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *this;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084df405 to 084df445 has its CatchHandler @ 084df45f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xf4);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xb));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}

```

