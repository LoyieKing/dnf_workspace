# Inter_SendTimeSyncLogin

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e33ec Inter_SendTimeSyncLogin::dispatch_sig  [0x084e33ec-0x84e34b9] ===
 84e33ec:	55                   	push   %ebp
 84e33ed:	89 e5                	mov    %esp,%ebp
 84e33ef:	56                   	push   %esi
 84e33f0:	53                   	push   %ebx
 84e33f1:	83 ec 20             	sub    $0x20,%esp
 84e33f4:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84e33f8:	75 0a                	jne    84e3404 <_ZN23Inter_SendTimeSyncLogin12dispatch_sigEP5CUserPci+0x18>
 84e33fa:	bb d4 53 00 00       	mov    $0x53d4,%ebx
 84e33ff:	e9 ac 00 00 00       	jmp    84e34b0 <_ZN23Inter_SendTimeSyncLogin12dispatch_sigEP5CUserPci+0xc4>
 84e3404:	8b 45 10             	mov    0x10(%ebp),%eax
 84e3407:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e340a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e340d:	89 04 24             	mov    %eax,(%esp)
 84e3410:	e8 37 a9 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e3415:	c7 44 24 08 2c 01 00 	movl   $0x12c,0x8(%esp)
 84e341c:	00 
 84e341d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e3424:	00 
 84e3425:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e3428:	89 04 24             	mov    %eax,(%esp)
 84e342b:	e8 cc 84 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e3430:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3433:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 84e3437:	98                   	cwtl
 84e3438:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e343c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e343f:	89 04 24             	mov    %eax,(%esp)
 84e3442:	e8 5d 6a bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84e3447:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e344a:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 84e344e:	98                   	cwtl
 84e344f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3453:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e3456:	89 04 24             	mov    %eax,(%esp)
 84e3459:	e8 46 6a bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84e345e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e3465:	00 
 84e3466:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e3469:	89 04 24             	mov    %eax,(%esp)
 84e346c:	e8 e7 84 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e3471:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e3474:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3478:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e347b:	89 04 24             	mov    %eax,(%esp)
 84e347e:	e8 37 51 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e3483:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e3488:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e348b:	89 04 24             	mov    %eax,(%esp)
 84e348e:	e8 ed a9 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e3493:	eb 1b                	jmp    84e34b0 <_ZN23Inter_SendTimeSyncLogin12dispatch_sigEP5CUserPci+0xc4>
 84e3495:	89 d3                	mov    %edx,%ebx
 84e3497:	89 c6                	mov    %eax,%esi
 84e3499:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e349c:	89 04 24             	mov    %eax,(%esp)
 84e349f:	e8 dc a9 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e34a4:	89 f0                	mov    %esi,%eax
 84e34a6:	89 da                	mov    %ebx,%edx
 84e34a8:	89 04 24             	mov    %eax,(%esp)
 84e34ab:	e8 a0 02 60 00       	call   8ae3750 <_Unwind_Resume>
 84e34b0:	89 d8                	mov    %ebx,%eax
 84e34b2:	83 c4 20             	add    $0x20,%esp
 84e34b5:	5b                   	pop    %ebx
 84e34b6:	5e                   	pop    %esi
 84e34b7:	5d                   	pop    %ebp
 84e34b8:	c3                   	ret
 84e34b9:	90                   	nop

```

```c
// Inter_SendTimeSyncLogin::dispatch_sig @ 0x84e33ec

/* Inter_SendTimeSyncLogin::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SendTimeSyncLogin::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  PacketGuard local_1c [12];
  int local_10;
  
  if (param_2 == (char *)0x0) {
    uVar1 = 0x53d4;
  }
  else {
    local_10 = param_3;
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e342b to 084e3482 has its CatchHandler @ 084e3495 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,300);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 0x12));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 0x14));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    uVar1 = 0;
    PacketGuard::~PacketGuard(local_1c);
  }
  return uVar1;
}

```

