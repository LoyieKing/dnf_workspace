# Inter_MonitorGuildMemberNamingReply

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cc23c Inter_MonitorGuildMemberNamingReply::dispatch_sig  [0x084cc23c-0x84cc35b] ===
 84cc23c:	55                   	push   %ebp
 84cc23d:	89 e5                	mov    %esp,%ebp
 84cc23f:	56                   	push   %esi
 84cc240:	53                   	push   %ebx
 84cc241:	83 ec 20             	sub    $0x20,%esp
 84cc244:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc247:	89 04 24             	mov    %eax,(%esp)
 84cc24a:	e8 3d e1 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cc24f:	85 c0                	test   %eax,%eax
 84cc251:	0f 94 c0             	sete   %al
 84cc254:	84 c0                	test   %al,%al
 84cc256:	74 0a                	je     84cc262 <_ZN35Inter_MonitorGuildMemberNamingReply12dispatch_sigEP5CUserPci+0x26>
 84cc258:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cc25d:	e9 f1 00 00 00       	jmp    84cc353 <_ZN35Inter_MonitorGuildMemberNamingReply12dispatch_sigEP5CUserPci+0x117>
 84cc262:	8b 45 10             	mov    0x10(%ebp),%eax
 84cc265:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84cc268:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cc26b:	8b 58 12             	mov    0x12(%eax),%ebx
 84cc26e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cc275:	ff 
 84cc276:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc279:	89 04 24             	mov    %eax,(%esp)
 84cc27c:	e8 1f 1d 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cc281:	39 c3                	cmp    %eax,%ebx
 84cc283:	0f 95 c0             	setne  %al
 84cc286:	84 c0                	test   %al,%al
 84cc288:	74 0a                	je     84cc294 <_ZN35Inter_MonitorGuildMemberNamingReply12dispatch_sigEP5CUserPci+0x58>
 84cc28a:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cc28f:	e9 bf 00 00 00       	jmp    84cc353 <_ZN35Inter_MonitorGuildMemberNamingReply12dispatch_sigEP5CUserPci+0x117>
 84cc294:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc297:	89 04 24             	mov    %eax,(%esp)
 84cc29a:	e8 ad 1a 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cc29f:	c7 44 24 08 80 00 00 	movl   $0x80,0x8(%esp)
 84cc2a6:	00 
 84cc2a7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cc2ae:	00 
 84cc2af:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc2b2:	89 04 24             	mov    %eax,(%esp)
 84cc2b5:	e8 42 f6 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cc2ba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cc2bd:	8b 40 0a             	mov    0xa(%eax),%eax
 84cc2c0:	85 c0                	test   %eax,%eax
 84cc2c2:	75 15                	jne    84cc2d9 <_ZN35Inter_MonitorGuildMemberNamingReply12dispatch_sigEP5CUserPci+0x9d>
 84cc2c4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cc2cb:	00 
 84cc2cc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc2cf:	89 04 24             	mov    %eax,(%esp)
 84cc2d2:	e8 49 f6 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cc2d7:	eb 13                	jmp    84cc2ec <_ZN35Inter_MonitorGuildMemberNamingReply12dispatch_sigEP5CUserPci+0xb0>
 84cc2d9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cc2e0:	00 
 84cc2e1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc2e4:	89 04 24             	mov    %eax,(%esp)
 84cc2e7:	e8 34 f6 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cc2ec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cc2ef:	8b 40 0a             	mov    0xa(%eax),%eax
 84cc2f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cc2f6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc2f9:	89 04 24             	mov    %eax,(%esp)
 84cc2fc:	e8 1f f6 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cc301:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cc308:	00 
 84cc309:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc30c:	89 04 24             	mov    %eax,(%esp)
 84cc30f:	e8 44 f6 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cc314:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc317:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cc31b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc31e:	89 04 24             	mov    %eax,(%esp)
 84cc321:	e8 94 c2 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cc326:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cc32b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc32e:	89 04 24             	mov    %eax,(%esp)
 84cc331:	e8 4a 1b 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cc336:	eb 1b                	jmp    84cc353 <_ZN35Inter_MonitorGuildMemberNamingReply12dispatch_sigEP5CUserPci+0x117>
 84cc338:	89 d3                	mov    %edx,%ebx
 84cc33a:	89 c6                	mov    %eax,%esi
 84cc33c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc33f:	89 04 24             	mov    %eax,(%esp)
 84cc342:	e8 39 1b 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cc347:	89 f0                	mov    %esi,%eax
 84cc349:	89 da                	mov    %ebx,%edx
 84cc34b:	89 04 24             	mov    %eax,(%esp)
 84cc34e:	e8 fd 73 61 00       	call   8ae3750 <_Unwind_Resume>
 84cc353:	89 d8                	mov    %ebx,%eax
 84cc355:	83 c4 20             	add    $0x20,%esp
 84cc358:	5b                   	pop    %ebx
 84cc359:	5e                   	pop    %esi
 84cc35a:	5d                   	pop    %ebp
 84cc35b:	c3                   	ret

```

```c
// Inter_MonitorGuildMemberNamingReply::dispatch_sig @ 0x84cc23c

/* Inter_MonitorGuildMemberNamingReply::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorGuildMemberNamingReply::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_1c [12];
  int local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    local_10 = param_3;
    iVar1 = *(int *)(param_3 + 0x12);
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar1 == iVar2) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084cc2b5 to 084cc325 has its CatchHandler @ 084cc338 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x80);
      if (*(int *)(local_10 + 10) == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 10));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return 0;
}

```

