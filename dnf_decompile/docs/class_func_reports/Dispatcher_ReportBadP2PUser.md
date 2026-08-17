# Dispatcher_ReportBadP2PUser

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081fd0a8 Dispatcher_ReportBadP2PUser::dispatch_sig  [0x081fd0a8-0x81fd25b] ===
 81fd0a8:	55                   	push   %ebp
 81fd0a9:	89 e5                	mov    %esp,%ebp
 81fd0ab:	56                   	push   %esi
 81fd0ac:	53                   	push   %ebx
 81fd0ad:	83 ec 40             	sub    $0x40,%esp
 81fd0b0:	8d 45 ce             	lea    -0x32(%ebp),%eax
 81fd0b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fd0b7:	8b 45 10             	mov    0x10(%ebp),%eax
 81fd0ba:	89 04 24             	mov    %eax,(%esp)
 81fd0bd:	e8 60 fe 38 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81fd0c2:	83 f0 01             	xor    $0x1,%eax
 81fd0c5:	84 c0                	test   %al,%al
 81fd0c7:	74 29                	je     81fd0f2 <_ZN27Dispatcher_ReportBadP2PUser12dispatch_sigEP5CUserR9PacketBuf+0x4a>
 81fd0c9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fd0d0:	00 
 81fd0d1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fd0d8:	00 
 81fd0d9:	c7 44 24 04 a0 fb bc 	movl   $0x8bcfba0,0x4(%esp)
 81fd0e0:	08 
 81fd0e1:	c7 04 24 db 8d 00 00 	movl   $0x8ddb,(%esp)
 81fd0e8:	e8 ea 37 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fd0ed:	e9 63 01 00 00       	jmp    81fd255 <_ZN27Dispatcher_ReportBadP2PUser12dispatch_sigEP5CUserR9PacketBuf+0x1ad>
 81fd0f2:	0f b6 45 ce          	movzbl -0x32(%ebp),%eax
 81fd0f6:	0f be f0             	movsbl %al,%esi
 81fd0f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd0fc:	89 04 24             	mov    %eax,(%esp)
 81fd0ff:	e8 24 3f f0 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81fd104:	89 c3                	mov    %eax,%ebx
 81fd106:	8d 45 cf             	lea    -0x31(%ebp),%eax
 81fd109:	89 04 24             	mov    %eax,(%esp)
 81fd10c:	e8 49 dc 02 00       	call   822ad5a <_ZN12cMyTraceNoopC1Ev>
 81fd111:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81fd115:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fd119:	c7 44 24 04 ec 26 bc 	movl   $0x8bc26ec,0x4(%esp)
 81fd120:	08 
 81fd121:	8d 45 cf             	lea    -0x31(%ebp),%eax
 81fd124:	89 04 24             	mov    %eax,(%esp)
 81fd127:	e8 34 dc 02 00       	call   822ad60 <_ZN12cMyTraceNoopclEPKcz>
 81fd12c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd12f:	89 04 24             	mov    %eax,(%esp)
 81fd132:	e8 27 2d 03 00       	call   822fe5e <_ZN5CUser10CheckInPvpEv>
 81fd137:	84 c0                	test   %al,%al
 81fd139:	0f 84 81 00 00 00    	je     81fd1c0 <_ZN27Dispatcher_ReportBadP2PUser12dispatch_sigEP5CUserR9PacketBuf+0x118>
 81fd13f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd142:	89 04 24             	mov    %eax,(%esp)
 81fd145:	e8 44 80 45 00       	call   865518e <_ZN5CUser10GetPVPRoomEv>
 81fd14a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81fd14d:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81fd151:	75 4b                	jne    81fd19e <_ZN27Dispatcher_ReportBadP2PUser12dispatch_sigEP5CUserR9PacketBuf+0xf6>
 81fd153:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81fd15a:	00 
 81fd15b:	c7 44 24 08 e8 8d 00 	movl   $0x8de8,0x8(%esp)
 81fd162:	00 
 81fd163:	c7 44 24 04 a0 fb bc 	movl   $0x8bcfba0,0x4(%esp)
 81fd16a:	08 
 81fd16b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81fd16e:	89 04 24             	mov    %eax,(%esp)
 81fd171:	e8 a2 25 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fd176:	c7 44 24 0c e8 8d 00 	movl   $0x8de8,0xc(%esp)
 81fd17d:	00 
 81fd17e:	c7 44 24 08 a0 fb bc 	movl   $0x8bcfba0,0x8(%esp)
 81fd185:	08 
 81fd186:	c7 44 24 04 0f 27 bc 	movl   $0x8bc270f,0x4(%esp)
 81fd18d:	08 
 81fd18e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81fd191:	89 04 24             	mov    %eax,(%esp)
 81fd194:	e8 ef 25 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fd199:	e9 b2 00 00 00       	jmp    81fd250 <_ZN27Dispatcher_ReportBadP2PUser12dispatch_sigEP5CUserR9PacketBuf+0x1a8>
 81fd19e:	0f b6 45 ce          	movzbl -0x32(%ebp),%eax
 81fd1a2:	0f be c0             	movsbl %al,%eax
 81fd1a5:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fd1a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd1ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fd1b0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81fd1b3:	89 04 24             	mov    %eax,(%esp)
 81fd1b6:	e8 5f fd 3d 00       	call   85dcf1a <_ZN8PvP_Room12VoteLackUserEP5CUseri>
 81fd1bb:	e9 90 00 00 00       	jmp    81fd250 <_ZN27Dispatcher_ReportBadP2PUser12dispatch_sigEP5CUserR9PacketBuf+0x1a8>
 81fd1c0:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 81fd1c7:	00 
 81fd1c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd1cb:	89 04 24             	mov    %eax,(%esp)
 81fd1ce:	e8 fd 2e 03 00       	call   82300d0 <_ZNK5CUser7IsStateE8ch_state>
 81fd1d3:	84 c0                	test   %al,%al
 81fd1d5:	74 79                	je     81fd250 <_ZN27Dispatcher_ReportBadP2PUser12dispatch_sigEP5CUserR9PacketBuf+0x1a8>
 81fd1d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd1da:	89 04 24             	mov    %eax,(%esp)
 81fd1dd:	e8 6a 7f 45 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81fd1e2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81fd1e5:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81fd1e9:	75 48                	jne    81fd233 <_ZN27Dispatcher_ReportBadP2PUser12dispatch_sigEP5CUserR9PacketBuf+0x18b>
 81fd1eb:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81fd1f2:	00 
 81fd1f3:	c7 44 24 08 f8 8d 00 	movl   $0x8df8,0x8(%esp)
 81fd1fa:	00 
 81fd1fb:	c7 44 24 04 a0 fb bc 	movl   $0x8bcfba0,0x4(%esp)
 81fd202:	08 
 81fd203:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81fd206:	89 04 24             	mov    %eax,(%esp)
 81fd209:	e8 0a 25 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fd20e:	c7 44 24 0c f8 8d 00 	movl   $0x8df8,0xc(%esp)
 81fd215:	00 
 81fd216:	c7 44 24 08 a0 fb bc 	movl   $0x8bcfba0,0x8(%esp)
 81fd21d:	08 
 81fd21e:	c7 44 24 04 22 27 bc 	movl   $0x8bc2722,0x4(%esp)
 81fd225:	08 
 81fd226:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81fd229:	89 04 24             	mov    %eax,(%esp)
 81fd22c:	e8 57 25 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fd231:	eb 1d                	jmp    81fd250 <_ZN27Dispatcher_ReportBadP2PUser12dispatch_sigEP5CUserR9PacketBuf+0x1a8>
 81fd233:	0f b6 45 ce          	movzbl -0x32(%ebp),%eax
 81fd237:	0f be c0             	movsbl %al,%eax
 81fd23a:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fd23e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd241:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fd245:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81fd248:	89 04 24             	mov    %eax,(%esp)
 81fd24b:	e8 40 6a 3b 00       	call   85b3c90 <_ZN6CParty12VoteLackUserEP5CUseri>
 81fd250:	b8 00 00 00 00       	mov    $0x0,%eax
 81fd255:	83 c4 40             	add    $0x40,%esp
 81fd258:	5b                   	pop    %ebx
 81fd259:	5e                   	pop    %esi
 81fd25a:	5d                   	pop    %ebp
 81fd25b:	c3                   	ret

```

```c
// Dispatcher_ReportBadP2PUser::dispatch_sig @ 0x81fd0a8

/* Dispatcher_ReportBadP2PUser::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ReportBadP2PUser::dispatch_sig
          (Dispatcher_ReportBadP2PUser *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char local_36;
  cMyTraceNoop local_35;
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  PvP_Room *local_14;
  CParty *local_10;
  
  cVar1 = PacketBuf::get_byte(param_2,&local_36);
  if (cVar1 == '\x01') {
    iVar3 = (int)local_36;
    uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    cMyTraceNoop::cMyTraceNoop(&local_35);
    cMyTraceNoop::operator()((char *)&local_35,"user %s Lack votes slot %d as Lack",uVar2,iVar3);
    cVar1 = CUser::CheckInPvp(param_1);
    if (cVar1 == '\0') {
      cVar1 = CUser::IsState(param_1,5);
      if (cVar1 != '\0') {
        local_10 = (CParty *)CUser::GetParty(param_1);
        if (local_10 == (CParty *)0x0) {
          cMyTrace::cMyTrace(local_24,
                             "virtual int Dispatcher_ReportBadP2PUser::dispatch_sig(CUser*, PacketBuf&)"
                             ,0x8df8,5);
          cMyTrace::operator()
                    (local_24,"[%s][%d]_!pParty",
                     "virtual int Dispatcher_ReportBadP2PUser::dispatch_sig(CUser*, PacketBuf&)",
                     0x8df8);
        }
        else {
          CParty::VoteLackUser(local_10,param_1,(int)local_36);
        }
      }
    }
    else {
      local_14 = (PvP_Room *)CUser::GetPVPRoom(param_1);
      if (local_14 == (PvP_Room *)0x0) {
        cMyTrace::cMyTrace(local_34,
                           "virtual int Dispatcher_ReportBadP2PUser::dispatch_sig(CUser*, PacketBuf&)"
                           ,0x8de8,5);
        cMyTrace::operator()
                  (local_34,"[%s][%d]_!pPVPRoom",
                   "virtual int Dispatcher_ReportBadP2PUser::dispatch_sig(CUser*, PacketBuf&)",
                   0x8de8);
      }
      else {
        PvP_Room::VoteLackUser(local_14,param_1,(int)local_36);
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x8ddb,
                     "virtual int Dispatcher_ReportBadP2PUser::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
  }
  return uVar2;
}

```

