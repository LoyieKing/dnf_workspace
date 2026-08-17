# Inter_AchieveGuildAttendance

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e41e4 Inter_AchieveGuildAttendance::dispatch_sig  [0x084e41e4-0x84e42df] ===
 84e41e4:	55                   	push   %ebp
 84e41e5:	89 e5                	mov    %esp,%ebp
 84e41e7:	56                   	push   %esi
 84e41e8:	53                   	push   %ebx
 84e41e9:	83 ec 20             	sub    $0x20,%esp
 84e41ec:	8b 45 10             	mov    0x10(%ebp),%eax
 84e41ef:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e41f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e41f5:	89 04 24             	mov    %eax,(%esp)
 84e41f8:	e8 8f 61 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e41fd:	83 f8 02             	cmp    $0x2,%eax
 84e4200:	0f 9e c0             	setle  %al
 84e4203:	84 c0                	test   %al,%al
 84e4205:	74 0a                	je     84e4211 <_ZN28Inter_AchieveGuildAttendance12dispatch_sigEP5CUserPci+0x2d>
 84e4207:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e420c:	e9 c6 00 00 00       	jmp    84e42d7 <_ZN28Inter_AchieveGuildAttendance12dispatch_sigEP5CUserPci+0xf3>
 84e4211:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4214:	8b 58 0a             	mov    0xa(%eax),%ebx
 84e4217:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e421a:	89 04 24             	mov    %eax,(%esp)
 84e421d:	e8 2c 7a be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e4222:	39 c3                	cmp    %eax,%ebx
 84e4224:	0f 95 c0             	setne  %al
 84e4227:	84 c0                	test   %al,%al
 84e4229:	74 0a                	je     84e4235 <_ZN28Inter_AchieveGuildAttendance12dispatch_sigEP5CUserPci+0x51>
 84e422b:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e4230:	e9 a2 00 00 00       	jmp    84e42d7 <_ZN28Inter_AchieveGuildAttendance12dispatch_sigEP5CUserPci+0xf3>
 84e4235:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4238:	89 04 24             	mov    %eax,(%esp)
 84e423b:	e8 0c 9b 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e4240:	c7 44 24 08 34 01 00 	movl   $0x134,0x8(%esp)
 84e4247:	00 
 84e4248:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e424f:	00 
 84e4250:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4253:	89 04 24             	mov    %eax,(%esp)
 84e4256:	e8 a1 76 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e425b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e425e:	8b 40 12             	mov    0x12(%eax),%eax
 84e4261:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e4265:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4268:	89 04 24             	mov    %eax,(%esp)
 84e426b:	e8 cc 76 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e4270:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4273:	8b 40 16             	mov    0x16(%eax),%eax
 84e4276:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e427a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e427d:	89 04 24             	mov    %eax,(%esp)
 84e4280:	e8 b7 76 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e4285:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e428c:	00 
 84e428d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4290:	89 04 24             	mov    %eax,(%esp)
 84e4293:	e8 c0 76 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e4298:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e429b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e429f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e42a2:	89 04 24             	mov    %eax,(%esp)
 84e42a5:	e8 10 43 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e42aa:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e42af:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e42b2:	89 04 24             	mov    %eax,(%esp)
 84e42b5:	e8 c6 9b 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e42ba:	eb 1b                	jmp    84e42d7 <_ZN28Inter_AchieveGuildAttendance12dispatch_sigEP5CUserPci+0xf3>
 84e42bc:	89 d3                	mov    %edx,%ebx
 84e42be:	89 c6                	mov    %eax,%esi
 84e42c0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e42c3:	89 04 24             	mov    %eax,(%esp)
 84e42c6:	e8 b5 9b 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e42cb:	89 f0                	mov    %esi,%eax
 84e42cd:	89 da                	mov    %ebx,%edx
 84e42cf:	89 04 24             	mov    %eax,(%esp)
 84e42d2:	e8 79 f4 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e42d7:	89 d8                	mov    %ebx,%eax
 84e42d9:	83 c4 20             	add    $0x20,%esp
 84e42dc:	5b                   	pop    %ebx
 84e42dd:	5e                   	pop    %esi
 84e42de:	5d                   	pop    %ebp
 84e42df:	c3                   	ret

```

```c
// Inter_AchieveGuildAttendance::dispatch_sig @ 0x84e41e4

/* Inter_AchieveGuildAttendance::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AchieveGuildAttendance::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = *(int *)(local_10 + 10),
     iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar1 == iVar2)) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e4256 to 084e42a9 has its CatchHandler @ 084e42bc */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x134);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x12));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x16));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}

```

