# Inter_SendTimeSync

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e3326 Inter_SendTimeSync::dispatch_sig  [0x084e3326-0x84e33eb] ===
 84e3326:	55                   	push   %ebp
 84e3327:	89 e5                	mov    %esp,%ebp
 84e3329:	56                   	push   %esi
 84e332a:	53                   	push   %ebx
 84e332b:	83 ec 20             	sub    $0x20,%esp
 84e332e:	8b 45 10             	mov    0x10(%ebp),%eax
 84e3331:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e3334:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e3337:	89 04 24             	mov    %eax,(%esp)
 84e333a:	e8 0d aa 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e333f:	c7 44 24 08 2c 01 00 	movl   $0x12c,0x8(%esp)
 84e3346:	00 
 84e3347:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e334e:	00 
 84e334f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e3352:	89 04 24             	mov    %eax,(%esp)
 84e3355:	e8 a2 85 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e335a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e335d:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 84e3361:	98                   	cwtl
 84e3362:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3366:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e3369:	89 04 24             	mov    %eax,(%esp)
 84e336c:	e8 33 6b bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84e3371:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3374:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 84e3378:	98                   	cwtl
 84e3379:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e337d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e3380:	89 04 24             	mov    %eax,(%esp)
 84e3383:	e8 1c 6b bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84e3388:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e338f:	00 
 84e3390:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e3393:	89 04 24             	mov    %eax,(%esp)
 84e3396:	e8 bd 85 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e339b:	e8 07 70 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e33a0:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 84e33a7:	00 
 84e33a8:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84e33ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e33af:	89 04 24             	mov    %eax,(%esp)
 84e33b2:	e8 cd 5d 1e 00       	call   86c9184 <_ZN9GameWorld19send_all_with_stateER11PacketGuardi>
 84e33b7:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e33bc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e33bf:	89 04 24             	mov    %eax,(%esp)
 84e33c2:	e8 b9 aa 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e33c7:	89 d8                	mov    %ebx,%eax
 84e33c9:	83 c4 20             	add    $0x20,%esp
 84e33cc:	5b                   	pop    %ebx
 84e33cd:	5e                   	pop    %esi
 84e33ce:	5d                   	pop    %ebp
 84e33cf:	c3                   	ret
 84e33d0:	89 d3                	mov    %edx,%ebx
 84e33d2:	89 c6                	mov    %eax,%esi
 84e33d4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e33d7:	89 04 24             	mov    %eax,(%esp)
 84e33da:	e8 a1 aa 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e33df:	89 f0                	mov    %esi,%eax
 84e33e1:	89 da                	mov    %ebx,%edx
 84e33e3:	89 04 24             	mov    %eax,(%esp)
 84e33e6:	e8 65 03 60 00       	call   8ae3750 <_Unwind_Resume>
 84e33eb:	90                   	nop

```

```c
// Inter_SendTimeSync::dispatch_sig @ 0x84e3326

/* Inter_SendTimeSync::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SendTimeSync::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *this;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e3355 to 084e33b6 has its CatchHandler @ 084e33d0 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,300);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 10));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 0xc));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all_with_state(this,local_1c,3);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}

```

