# Inter_SendPeriodicMessage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e3232 Inter_SendPeriodicMessage::dispatch_sig  [0x084e3232-0x84e3325] ===
 84e3232:	55                   	push   %ebp
 84e3233:	89 e5                	mov    %esp,%ebp
 84e3235:	56                   	push   %esi
 84e3236:	53                   	push   %ebx
 84e3237:	83 ec 20             	sub    $0x20,%esp
 84e323a:	8b 45 10             	mov    0x10(%ebp),%eax
 84e323d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e3240:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3243:	83 c0 0a             	add    $0xa,%eax
 84e3246:	0f b6 00             	movzbl (%eax),%eax
 84e3249:	84 c0                	test   %al,%al
 84e324b:	75 0a                	jne    84e3257 <_ZN25Inter_SendPeriodicMessage12dispatch_sigEP5CUserPci+0x25>
 84e324d:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e3252:	e9 c6 00 00 00       	jmp    84e331d <_ZN25Inter_SendPeriodicMessage12dispatch_sigEP5CUserPci+0xeb>
 84e3257:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e325a:	89 04 24             	mov    %eax,(%esp)
 84e325d:	e8 ea aa 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e3262:	c7 44 24 08 2b 01 00 	movl   $0x12b,0x8(%esp)
 84e3269:	00 
 84e326a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e3271:	00 
 84e3272:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e3275:	89 04 24             	mov    %eax,(%esp)
 84e3278:	e8 7f 86 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e327d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3280:	83 c0 0a             	add    $0xa,%eax
 84e3283:	89 04 24             	mov    %eax,(%esp)
 84e3286:	e8 25 b1 b9 ff       	call   807e3b0 <strlen@plt>
 84e328b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e328f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e3292:	89 04 24             	mov    %eax,(%esp)
 84e3295:	e8 a2 86 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e329a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e329d:	83 c0 0a             	add    $0xa,%eax
 84e32a0:	89 04 24             	mov    %eax,(%esp)
 84e32a3:	e8 08 b1 b9 ff       	call   807e3b0 <strlen@plt>
 84e32a8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e32ab:	83 c2 0a             	add    $0xa,%edx
 84e32ae:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e32b2:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e32b6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e32b9:	89 04 24             	mov    %eax,(%esp)
 84e32bc:	e8 23 41 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e32c1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e32c8:	00 
 84e32c9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e32cc:	89 04 24             	mov    %eax,(%esp)
 84e32cf:	e8 84 86 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e32d4:	e8 ce 70 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e32d9:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 84e32e0:	00 
 84e32e1:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84e32e4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e32e8:	89 04 24             	mov    %eax,(%esp)
 84e32eb:	e8 94 5e 1e 00       	call   86c9184 <_ZN9GameWorld19send_all_with_stateER11PacketGuardi>
 84e32f0:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e32f5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e32f8:	89 04 24             	mov    %eax,(%esp)
 84e32fb:	e8 80 ab 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e3300:	eb 1b                	jmp    84e331d <_ZN25Inter_SendPeriodicMessage12dispatch_sigEP5CUserPci+0xeb>
 84e3302:	89 d3                	mov    %edx,%ebx
 84e3304:	89 c6                	mov    %eax,%esi
 84e3306:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e3309:	89 04 24             	mov    %eax,(%esp)
 84e330c:	e8 6f ab 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e3311:	89 f0                	mov    %esi,%eax
 84e3313:	89 da                	mov    %ebx,%edx
 84e3315:	89 04 24             	mov    %eax,(%esp)
 84e3318:	e8 33 04 60 00       	call   8ae3750 <_Unwind_Resume>
 84e331d:	89 d8                	mov    %ebx,%eax
 84e331f:	83 c4 20             	add    $0x20,%esp
 84e3322:	5b                   	pop    %ebx
 84e3323:	5e                   	pop    %esi
 84e3324:	5d                   	pop    %ebp
 84e3325:	c3                   	ret

```

```c
// Inter_SendPeriodicMessage::dispatch_sig @ 0x84e3232

/* Inter_SendPeriodicMessage::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SendPeriodicMessage::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  GameWorld *this;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  if (*(char *)(param_3 + 10) != '\0') {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e3278 to 084e32ef has its CatchHandler @ 084e3302 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,299);
    sVar1 = strlen((char *)(local_10 + 10));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,sVar1);
    sVar1 = strlen((char *)(local_10 + 10));
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_1c,(char *)(local_10 + 10),sVar1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all_with_state(this,local_1c,3);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}

```

