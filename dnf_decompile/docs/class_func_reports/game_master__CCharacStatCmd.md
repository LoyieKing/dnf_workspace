# game_master__CCharacStatCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084a905e game_master::CCharacStatCmd::execute  [0x084a905e-0x84a9219] ===
 84a905e:	55                   	push   %ebp
 84a905f:	89 e5                	mov    %esp,%ebp
 84a9061:	57                   	push   %edi
 84a9062:	56                   	push   %esi
 84a9063:	53                   	push   %ebx
 84a9064:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 84a906a:	8d 95 d9 fe ff ff    	lea    -0x127(%ebp),%edx
 84a9070:	bb ff 00 00 00       	mov    $0xff,%ebx
 84a9075:	b8 00 00 00 00       	mov    $0x0,%eax
 84a907a:	89 d1                	mov    %edx,%ecx
 84a907c:	83 e1 01             	and    $0x1,%ecx
 84a907f:	85 c9                	test   %ecx,%ecx
 84a9081:	74 08                	je     84a908b <_ZN11game_master14CCharacStatCmd7executeEv+0x2d>
 84a9083:	88 02                	mov    %al,(%edx)
 84a9085:	83 c2 01             	add    $0x1,%edx
 84a9088:	83 eb 01             	sub    $0x1,%ebx
 84a908b:	89 d1                	mov    %edx,%ecx
 84a908d:	83 e1 02             	and    $0x2,%ecx
 84a9090:	85 c9                	test   %ecx,%ecx
 84a9092:	74 09                	je     84a909d <_ZN11game_master14CCharacStatCmd7executeEv+0x3f>
 84a9094:	66 89 02             	mov    %ax,(%edx)
 84a9097:	83 c2 02             	add    $0x2,%edx
 84a909a:	83 eb 02             	sub    $0x2,%ebx
 84a909d:	89 d9                	mov    %ebx,%ecx
 84a909f:	c1 e9 02             	shr    $0x2,%ecx
 84a90a2:	89 d7                	mov    %edx,%edi
 84a90a4:	f3 ab                	rep stos %eax,%es:(%edi)
 84a90a6:	89 fa                	mov    %edi,%edx
 84a90a8:	89 d9                	mov    %ebx,%ecx
 84a90aa:	83 e1 02             	and    $0x2,%ecx
 84a90ad:	85 c9                	test   %ecx,%ecx
 84a90af:	74 06                	je     84a90b7 <_ZN11game_master14CCharacStatCmd7executeEv+0x59>
 84a90b1:	66 89 02             	mov    %ax,(%edx)
 84a90b4:	83 c2 02             	add    $0x2,%edx
 84a90b7:	89 d9                	mov    %ebx,%ecx
 84a90b9:	83 e1 01             	and    $0x1,%ecx
 84a90bc:	85 c9                	test   %ecx,%ecx
 84a90be:	74 05                	je     84a90c5 <_ZN11game_master14CCharacStatCmd7executeEv+0x67>
 84a90c0:	88 02                	mov    %al,(%edx)
 84a90c2:	83 c2 01             	add    $0x1,%edx
 84a90c5:	8b 45 08             	mov    0x8(%ebp),%eax
 84a90c8:	89 04 24             	mov    %eax,(%esp)
 84a90cb:	e8 ea ae 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a90d0:	89 04 24             	mov    %eax,(%esp)
 84a90d3:	e8 e4 b1 00 00       	call   84b42bc <_ZNK15CUserCharacInfo20getCurCharacAddInfoREv>
 84a90d8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84a90db:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a90de:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 84a90e2:	0f b7 c8             	movzwl %ax,%ecx
 84a90e5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a90e8:	0f b7 40 46          	movzwl 0x46(%eax),%eax
 84a90ec:	0f b7 d0             	movzwl %ax,%edx
 84a90ef:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a90f2:	8b 40 42             	mov    0x42(%eax),%eax
 84a90f5:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84a90f9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84a90fd:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a9101:	c7 44 24 04 8c fa c7 	movl   $0x8c7fa8c,0x4(%esp)
 84a9108:	08 
 84a9109:	8d 85 d9 fe ff ff    	lea    -0x127(%ebp),%eax
 84a910f:	89 04 24             	mov    %eax,(%esp)
 84a9112:	e8 29 53 bd ff       	call   807e440 <sprintf@plt>
 84a9117:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84a911a:	89 04 24             	mov    %eax,(%esp)
 84a911d:	e8 2a 4c 0e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84a9122:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 84a9129:	00 
 84a912a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a9131:	00 
 84a9132:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84a9135:	89 04 24             	mov    %eax,(%esp)
 84a9138:	e8 bf 27 c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84a913d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a9144:	00 
 84a9145:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84a9148:	89 04 24             	mov    %eax,(%esp)
 84a914b:	e8 d0 27 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84a9150:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a9157:	00 
 84a9158:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84a915b:	89 04 24             	mov    %eax,(%esp)
 84a915e:	e8 41 0d c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84a9163:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a916a:	00 
 84a916b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84a916e:	89 04 24             	mov    %eax,(%esp)
 84a9171:	e8 aa 27 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84a9176:	8d 85 d9 fe ff ff    	lea    -0x127(%ebp),%eax
 84a917c:	89 04 24             	mov    %eax,(%esp)
 84a917f:	e8 2c 52 bd ff       	call   807e3b0 <strlen@plt>
 84a9184:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a9188:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84a918b:	89 04 24             	mov    %eax,(%esp)
 84a918e:	e8 a9 27 c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84a9193:	8d 85 d9 fe ff ff    	lea    -0x127(%ebp),%eax
 84a9199:	89 04 24             	mov    %eax,(%esp)
 84a919c:	e8 0f 52 bd ff       	call   807e3b0 <strlen@plt>
 84a91a1:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a91a5:	8d 85 d9 fe ff ff    	lea    -0x127(%ebp),%eax
 84a91ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a91af:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84a91b2:	89 04 24             	mov    %eax,(%esp)
 84a91b5:	e8 2a e2 d0 ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84a91ba:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84a91c1:	00 
 84a91c2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84a91c5:	89 04 24             	mov    %eax,(%esp)
 84a91c8:	e8 8b 27 c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84a91cd:	8b 45 08             	mov    0x8(%ebp),%eax
 84a91d0:	89 04 24             	mov    %eax,(%esp)
 84a91d3:	e8 e2 ad 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a91d8:	8d 55 d8             	lea    -0x28(%ebp),%edx
 84a91db:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a91df:	89 04 24             	mov    %eax,(%esp)
 84a91e2:	e8 d3 f3 19 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84a91e7:	eb 1b                	jmp    84a9204 <_ZN11game_master14CCharacStatCmd7executeEv+0x1a6>
 84a91e9:	89 d3                	mov    %edx,%ebx
 84a91eb:	89 c6                	mov    %eax,%esi
 84a91ed:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84a91f0:	89 04 24             	mov    %eax,(%esp)
 84a91f3:	e8 88 4c 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84a91f8:	89 f0                	mov    %esi,%eax
 84a91fa:	89 da                	mov    %ebx,%edx
 84a91fc:	89 04 24             	mov    %eax,(%esp)
 84a91ff:	e8 4c a5 63 00       	call   8ae3750 <_Unwind_Resume>
 84a9204:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84a9207:	89 04 24             	mov    %eax,(%esp)
 84a920a:	e8 71 4c 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84a920f:	81 c4 3c 01 00 00    	add    $0x13c,%esp
 84a9215:	5b                   	pop    %ebx
 84a9216:	5e                   	pop    %esi
 84a9217:	5f                   	pop    %edi
 84a9218:	5d                   	pop    %ebp
 84a9219:	c3                   	ret

```

```c
// game_master::CCharacStatCmd::execute @ 0x84a905e

/* game_master::CCharacStatCmd::execute() */

void __thiscall game_master::CCharacStatCmd::execute(CCharacStatCmd *this)

{
  CUserCharacInfo *this_00;
  size_t sVar1;
  CUser *this_01;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  char local_12b;
  char local_12a [254];
  PacketGuard local_2c [12];
  int local_20;
  
  pcVar3 = &local_12b;
  uVar4 = 0xff;
  bVar5 = ((uint)pcVar3 & 1) != 0;
  if (bVar5) {
    local_12b = '\0';
    pcVar3 = local_12a;
    uVar4 = 0xfe;
  }
  if (((uint)pcVar3 & 2) != 0) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3 = pcVar3 + 2;
    uVar4 = uVar4 - 2;
  }
  for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  if ((uVar4 & 2) != 0) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3 = pcVar3 + 2;
  }
  if (!bVar5) {
    *pcVar3 = '\0';
  }
  this_00 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  local_20 = CUserCharacInfo::getCurCharacAddInfoR(this_00);
  sprintf(&local_12b,"charac_stat move_speed=%d,attack_speed=%d,cast_speed=%d",
          *(undefined4 *)(local_20 + 0x42),(uint)*(ushort *)(local_20 + 0x46),
          (uint)*(ushort *)(local_20 + 0x48));
  PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 084a9138 to 084a91e6 has its CatchHandler @ 084a91e9 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0xc);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
  sVar1 = strlen(&local_12b);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,sVar1);
  sVar1 = strlen(&local_12b);
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,&local_12b,sVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
  this_01 = (CUser *)CCommand::GetUser((CCommand *)this);
  CUser::Send(this_01,local_2c);
  PacketGuard::~PacketGuard(local_2c);
  return;
}

```

