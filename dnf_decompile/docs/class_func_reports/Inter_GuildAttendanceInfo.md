# Inter_GuildAttendanceInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e4052 Inter_GuildAttendanceInfo::dispatch_sig  [0x084e4052-0x84e41e3] ===
 84e4052:	55                   	push   %ebp
 84e4053:	89 e5                	mov    %esp,%ebp
 84e4055:	56                   	push   %esi
 84e4056:	53                   	push   %ebx
 84e4057:	83 ec 20             	sub    $0x20,%esp
 84e405a:	8b 45 10             	mov    0x10(%ebp),%eax
 84e405d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e4060:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e4063:	89 04 24             	mov    %eax,(%esp)
 84e4066:	e8 21 63 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e406b:	83 f8 02             	cmp    $0x2,%eax
 84e406e:	0f 9e c0             	setle  %al
 84e4071:	84 c0                	test   %al,%al
 84e4073:	74 0a                	je     84e407f <_ZN25Inter_GuildAttendanceInfo12dispatch_sigEP5CUserPci+0x2d>
 84e4075:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e407a:	e9 5b 01 00 00       	jmp    84e41da <_ZN25Inter_GuildAttendanceInfo12dispatch_sigEP5CUserPci+0x188>
 84e407f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4082:	8b 58 0a             	mov    0xa(%eax),%ebx
 84e4085:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e4088:	89 04 24             	mov    %eax,(%esp)
 84e408b:	e8 be 7b be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e4090:	39 c3                	cmp    %eax,%ebx
 84e4092:	0f 95 c0             	setne  %al
 84e4095:	84 c0                	test   %al,%al
 84e4097:	74 0a                	je     84e40a3 <_ZN25Inter_GuildAttendanceInfo12dispatch_sigEP5CUserPci+0x51>
 84e4099:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e409e:	e9 37 01 00 00       	jmp    84e41da <_ZN25Inter_GuildAttendanceInfo12dispatch_sigEP5CUserPci+0x188>
 84e40a3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e40a6:	89 04 24             	mov    %eax,(%esp)
 84e40a9:	e8 9e 9c 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e40ae:	c7 44 24 08 64 01 00 	movl   $0x164,0x8(%esp)
 84e40b5:	00 
 84e40b6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e40bd:	00 
 84e40be:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e40c1:	89 04 24             	mov    %eax,(%esp)
 84e40c4:	e8 33 78 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e40c9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e40d0:	00 
 84e40d1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e40d4:	89 04 24             	mov    %eax,(%esp)
 84e40d7:	e8 44 78 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e40dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e40df:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84e40e3:	0f be c0             	movsbl %al,%eax
 84e40e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e40ea:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e40ed:	89 04 24             	mov    %eax,(%esp)
 84e40f0:	e8 2b 78 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e40f5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e40f8:	8b 40 13             	mov    0x13(%eax),%eax
 84e40fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e40ff:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4102:	89 04 24             	mov    %eax,(%esp)
 84e4105:	e8 32 78 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e410a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e410d:	8b 40 17             	mov    0x17(%eax),%eax
 84e4110:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e4114:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4117:	89 04 24             	mov    %eax,(%esp)
 84e411a:	e8 1d 78 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e411f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4122:	8b 40 2b             	mov    0x2b(%eax),%eax
 84e4125:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e4129:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e412c:	89 04 24             	mov    %eax,(%esp)
 84e412f:	e8 08 78 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e4134:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4137:	8b 40 23             	mov    0x23(%eax),%eax
 84e413a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e413e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4141:	89 04 24             	mov    %eax,(%esp)
 84e4144:	e8 f3 77 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e4149:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e414c:	8b 40 27             	mov    0x27(%eax),%eax
 84e414f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e4153:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4156:	89 04 24             	mov    %eax,(%esp)
 84e4159:	e8 de 77 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e415e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4161:	8b 40 1b             	mov    0x1b(%eax),%eax
 84e4164:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e4168:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e416b:	89 04 24             	mov    %eax,(%esp)
 84e416e:	e8 c9 77 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e4173:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4176:	8b 40 1f             	mov    0x1f(%eax),%eax
 84e4179:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e417d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4180:	89 04 24             	mov    %eax,(%esp)
 84e4183:	e8 b4 77 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e4188:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e418f:	00 
 84e4190:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4193:	89 04 24             	mov    %eax,(%esp)
 84e4196:	e8 bd 77 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e419b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e419e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e41a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e41a5:	89 04 24             	mov    %eax,(%esp)
 84e41a8:	e8 0d 44 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e41ad:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e41b2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e41b5:	89 04 24             	mov    %eax,(%esp)
 84e41b8:	e8 c3 9c 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e41bd:	eb 1b                	jmp    84e41da <_ZN25Inter_GuildAttendanceInfo12dispatch_sigEP5CUserPci+0x188>
 84e41bf:	89 d3                	mov    %edx,%ebx
 84e41c1:	89 c6                	mov    %eax,%esi
 84e41c3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e41c6:	89 04 24             	mov    %eax,(%esp)
 84e41c9:	e8 b2 9c 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e41ce:	89 f0                	mov    %esi,%eax
 84e41d0:	89 da                	mov    %ebx,%edx
 84e41d2:	89 04 24             	mov    %eax,(%esp)
 84e41d5:	e8 76 f5 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e41da:	89 d8                	mov    %ebx,%eax
 84e41dc:	83 c4 20             	add    $0x20,%esp
 84e41df:	5b                   	pop    %ebx
 84e41e0:	5e                   	pop    %esi
 84e41e1:	5d                   	pop    %ebp
 84e41e2:	c3                   	ret
 84e41e3:	90                   	nop

```

```c
// Inter_GuildAttendanceInfo::dispatch_sig @ 0x84e4052

/* Inter_GuildAttendanceInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildAttendanceInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
                    /* try { // try from 084e40c4 to 084e41ac has its CatchHandler @ 084e41bf */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x164);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)*(char *)(local_10 + 0x12));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x13));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x17));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x2b));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x23));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x27));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x1b));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x1f));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}

```

