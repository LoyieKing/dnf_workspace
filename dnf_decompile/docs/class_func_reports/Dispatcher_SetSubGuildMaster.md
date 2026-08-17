# Dispatcher_SetSubGuildMaster

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082053e6 Dispatcher_SetSubGuildMaster::dispatch_sig  [0x082053e6-0x8205599] ===
 82053e6:	55                   	push   %ebp
 82053e7:	89 e5                	mov    %esp,%ebp
 82053e9:	53                   	push   %ebx
 82053ea:	83 ec 54             	sub    $0x54,%esp
 82053ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 82053f0:	89 04 24             	mov    %eax,(%esp)
 82053f3:	e8 94 4f ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82053f8:	83 f8 02             	cmp    $0x2,%eax
 82053fb:	7e 0f                	jle    820540c <_ZN28Dispatcher_SetSubGuildMaster12dispatch_sigEP5CUserR9PacketBuf+0x26>
 82053fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205400:	89 04 24             	mov    %eax,(%esp)
 8205403:	e8 2a b0 f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8205408:	85 c0                	test   %eax,%eax
 820540a:	75 07                	jne    8205413 <_ZN28Dispatcher_SetSubGuildMaster12dispatch_sigEP5CUserR9PacketBuf+0x2d>
 820540c:	b8 01 00 00 00       	mov    $0x1,%eax
 8205411:	eb 05                	jmp    8205418 <_ZN28Dispatcher_SetSubGuildMaster12dispatch_sigEP5CUserR9PacketBuf+0x32>
 8205413:	b8 00 00 00 00       	mov    $0x0,%eax
 8205418:	84 c0                	test   %al,%al
 820541a:	74 29                	je     8205445 <_ZN28Dispatcher_SetSubGuildMaster12dispatch_sigEP5CUserR9PacketBuf+0x5f>
 820541c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8205423:	00 
 8205424:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820542b:	00 
 820542c:	c7 44 24 04 c0 ed bc 	movl   $0x8bcedc0,0x4(%esp)
 8205433:	08 
 8205434:	c7 04 24 97 9d 00 00 	movl   $0x9d97,(%esp)
 820543b:	e8 97 b4 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8205440:	e9 4f 01 00 00       	jmp    8205594 <_ZN28Dispatcher_SetSubGuildMaster12dispatch_sigEP5CUserR9PacketBuf+0x1ae>
 8205445:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 8205448:	89 04 24             	mov    %eax,(%esp)
 820544b:	e8 28 65 02 00       	call   822b978 <_ZN35Packet_Monitor_Set_Sub_Guild_MasterC1Ev>
 8205450:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8205457:	ff 
 8205458:	8b 45 0c             	mov    0xc(%ebp),%eax
 820545b:	89 04 24             	mov    %eax,(%esp)
 820545e:	e8 3d 8b 44 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8205463:	89 45 cd             	mov    %eax,-0x33(%ebp)
 8205466:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205469:	89 04 24             	mov    %eax,(%esp)
 820546c:	e8 fb 9f 02 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 8205471:	89 45 d1             	mov    %eax,-0x2f(%ebp)
 8205474:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8205477:	89 44 24 04          	mov    %eax,0x4(%esp)
 820547b:	8b 45 10             	mov    0x10(%ebp),%eax
 820547e:	89 04 24             	mov    %eax,(%esp)
 8205481:	e8 6a 7c 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8205486:	83 f0 01             	xor    $0x1,%eax
 8205489:	84 c0                	test   %al,%al
 820548b:	74 29                	je     82054b6 <_ZN28Dispatcher_SetSubGuildMaster12dispatch_sigEP5CUserR9PacketBuf+0xd0>
 820548d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8205494:	00 
 8205495:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820549c:	00 
 820549d:	c7 44 24 04 c0 ed bc 	movl   $0x8bcedc0,0x4(%esp)
 82054a4:	08 
 82054a5:	c7 04 24 a1 9d 00 00 	movl   $0x9da1,(%esp)
 82054ac:	e8 26 b4 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82054b1:	e9 de 00 00 00       	jmp    8205594 <_ZN28Dispatcher_SetSubGuildMaster12dispatch_sigEP5CUserR9PacketBuf+0x1ae>
 82054b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82054b9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82054bd:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 82054c4:	00 
 82054c5:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 82054c8:	83 c0 12             	add    $0x12,%eax
 82054cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 82054cf:	8b 45 10             	mov    0x10(%ebp),%eax
 82054d2:	89 04 24             	mov    %eax,(%esp)
 82054d5:	e8 e2 7d 38 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 82054da:	83 f0 01             	xor    $0x1,%eax
 82054dd:	84 c0                	test   %al,%al
 82054df:	74 29                	je     820550a <_ZN28Dispatcher_SetSubGuildMaster12dispatch_sigEP5CUserR9PacketBuf+0x124>
 82054e1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82054e8:	00 
 82054e9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82054f0:	00 
 82054f1:	c7 44 24 04 c0 ed bc 	movl   $0x8bcedc0,0x4(%esp)
 82054f8:	08 
 82054f9:	c7 04 24 a4 9d 00 00 	movl   $0x9da4,(%esp)
 8205500:	e8 d2 b3 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8205505:	e9 8a 00 00 00       	jmp    8205594 <_ZN28Dispatcher_SetSubGuildMaster12dispatch_sigEP5CUserR9PacketBuf+0x1ae>
 820550a:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 820550d:	83 c0 30             	add    $0x30,%eax
 8205510:	89 44 24 04          	mov    %eax,0x4(%esp)
 8205514:	8b 45 10             	mov    0x10(%ebp),%eax
 8205517:	89 04 24             	mov    %eax,(%esp)
 820551a:	e8 03 7a 38 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 820551f:	83 f0 01             	xor    $0x1,%eax
 8205522:	84 c0                	test   %al,%al
 8205524:	74 26                	je     820554c <_ZN28Dispatcher_SetSubGuildMaster12dispatch_sigEP5CUserR9PacketBuf+0x166>
 8205526:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820552d:	00 
 820552e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8205535:	00 
 8205536:	c7 44 24 04 c0 ed bc 	movl   $0x8bcedc0,0x4(%esp)
 820553d:	08 
 820553e:	c7 04 24 a7 9d 00 00 	movl   $0x9da7,(%esp)
 8205545:	e8 8d b3 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820554a:	eb 48                	jmp    8205594 <_ZN28Dispatcher_SetSubGuildMaster12dispatch_sigEP5CUserR9PacketBuf+0x1ae>
 820554c:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8205550:	3c 01                	cmp    $0x1,%al
 8205552:	75 07                	jne    820555b <_ZN28Dispatcher_SetSubGuildMaster12dispatch_sigEP5CUserR9PacketBuf+0x175>
 8205554:	b8 00 00 00 00       	mov    $0x0,%eax
 8205559:	eb 39                	jmp    8205594 <_ZN28Dispatcher_SetSubGuildMaster12dispatch_sigEP5CUserR9PacketBuf+0x1ae>
 820555b:	8d 5d c3             	lea    -0x3d(%ebp),%ebx
 820555e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205561:	89 04 24             	mov    %eax,(%esp)
 8205564:	e8 27 67 ec ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8205569:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 820556f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8205573:	89 14 24             	mov    %edx,(%esp)
 8205576:	e8 3d 7e f1 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 820557b:	c7 44 24 08 31 00 00 	movl   $0x31,0x8(%esp)
 8205582:	00 
 8205583:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8205587:	89 04 24             	mov    %eax,(%esp)
 820558a:	e8 ef 86 26 00       	call   846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>
 820558f:	b8 00 00 00 00       	mov    $0x0,%eax
 8205594:	83 c4 54             	add    $0x54,%esp
 8205597:	5b                   	pop    %ebx
 8205598:	5d                   	pop    %ebp
 8205599:	c3                   	ret

```

```c
// Dispatcher_SetSubGuildMaster::dispatch_sig @ 0x82053e6

/* Dispatcher_SetSubGuildMaster::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_SetSubGuildMaster::dispatch_sig
          (Dispatcher_SetSubGuildMaster *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CGuildServerProxy *this_00;
  Packet_Monitor_Set_Sub_Guild_Master local_41 [10];
  undefined4 local_37;
  undefined4 local_33;
  char acStack_2f [30];
  char local_11;
  int local_10 [2];
  
  iVar3 = CUser::get_state(param_1);
  if (2 < iVar3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_08205418;
    }
  }
  bVar1 = true;
LAB_08205418:
  if (bVar1) {
    uVar4 = LineFunc(0x9d97,
                     "virtual int Dispatcher_SetSubGuildMaster::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
  else {
    Packet_Monitor_Set_Sub_Guild_Master::Packet_Monitor_Set_Sub_Guild_Master(local_41);
    local_37 = CUser::get_charac_no(param_1,-1);
    local_33 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
    cVar2 = PacketBuf::get_int(param_2,local_10);
    if (cVar2 == '\x01') {
      cVar2 = PacketBuf::get_str(param_2,acStack_2f,0x1e,local_10[0]);
      if (cVar2 == '\x01') {
        cVar2 = PacketBuf::get_byte(param_2,&local_11);
        if (cVar2 == '\x01') {
          if (local_11 == '\x01') {
            uVar4 = 0;
          }
          else {
            uVar4 = CUser::GetServerGroup(param_1);
            this_00 = (CGuildServerProxy *)
                      CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                                (GlobalData::s_guild_proxy_mgr,uVar4);
            CGuildServerProxy::SendPacket(this_00,(char *)local_41,0x31);
            uVar4 = 0;
          }
        }
        else {
          uVar4 = LineFunc(0x9da7,
                           "virtual int Dispatcher_SetSubGuildMaster::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar4 = LineFunc(0x9da4,
                         "virtual int Dispatcher_SetSubGuildMaster::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar4 = LineFunc(0x9da1,
                       "virtual int Dispatcher_SetSubGuildMaster::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
  }
  return uVar4;
}

```

