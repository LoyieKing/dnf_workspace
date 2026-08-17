# DisPatcher_RequestGuildWarInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0820439a DisPatcher_RequestGuildWarInfo::dispatch_sig  [0x0820439a-0x8204457] ===
 820439a:	55                   	push   %ebp
 820439b:	89 e5                	mov    %esp,%ebp
 820439d:	53                   	push   %ebx
 820439e:	81 ec 74 01 00 00    	sub    $0x174,%esp
 82043a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82043a7:	89 04 24             	mov    %eax,(%esp)
 82043aa:	e8 dd 5f ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82043af:	83 f8 01             	cmp    $0x1,%eax
 82043b2:	7e 0f                	jle    82043c3 <_ZN30DisPatcher_RequestGuildWarInfo12dispatch_sigEP5CUserR9PacketBuf+0x29>
 82043b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82043b7:	89 04 24             	mov    %eax,(%esp)
 82043ba:	e8 73 c0 f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82043bf:	85 c0                	test   %eax,%eax
 82043c1:	75 07                	jne    82043ca <_ZN30DisPatcher_RequestGuildWarInfo12dispatch_sigEP5CUserR9PacketBuf+0x30>
 82043c3:	b8 01 00 00 00       	mov    $0x1,%eax
 82043c8:	eb 05                	jmp    82043cf <_ZN30DisPatcher_RequestGuildWarInfo12dispatch_sigEP5CUserR9PacketBuf+0x35>
 82043ca:	b8 00 00 00 00       	mov    $0x0,%eax
 82043cf:	84 c0                	test   %al,%al
 82043d1:	74 07                	je     82043da <_ZN30DisPatcher_RequestGuildWarInfo12dispatch_sigEP5CUserR9PacketBuf+0x40>
 82043d3:	b8 00 00 00 00       	mov    $0x0,%eax
 82043d8:	eb 74                	jmp    820444e <_ZN30DisPatcher_RequestGuildWarInfo12dispatch_sigEP5CUserR9PacketBuf+0xb4>
 82043da:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 82043e0:	89 04 24             	mov    %eax,(%esp)
 82043e3:	e8 f4 76 02 00       	call   822badc <_ZN28Packet_Notice_Guild_War_InfoC1Ev>
 82043e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82043eb:	89 04 24             	mov    %eax,(%esp)
 82043ee:	e8 a3 48 ec ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 82043f3:	89 85 a6 fe ff ff    	mov    %eax,-0x15a(%ebp)
 82043f9:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8204400:	ff 
 8204401:	8b 45 0c             	mov    0xc(%ebp),%eax
 8204404:	89 04 24             	mov    %eax,(%esp)
 8204407:	e8 94 9b 44 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 820440c:	89 85 aa fe ff ff    	mov    %eax,-0x156(%ebp)
 8204412:	8d 9d 9c fe ff ff    	lea    -0x164(%ebp),%ebx
 8204418:	8b 45 0c             	mov    0xc(%ebp),%eax
 820441b:	89 04 24             	mov    %eax,(%esp)
 820441e:	e8 6d 78 ec ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8204423:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 8204429:	89 44 24 04          	mov    %eax,0x4(%esp)
 820442d:	89 14 24             	mov    %edx,(%esp)
 8204430:	e8 83 8f f1 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8204435:	c7 44 24 08 5c 01 00 	movl   $0x15c,0x8(%esp)
 820443c:	00 
 820443d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8204441:	89 04 24             	mov    %eax,(%esp)
 8204444:	e8 35 98 26 00       	call   846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>
 8204449:	b8 00 00 00 00       	mov    $0x0,%eax
 820444e:	81 c4 74 01 00 00    	add    $0x174,%esp
 8204454:	5b                   	pop    %ebx
 8204455:	5d                   	pop    %ebp
 8204456:	c3                   	ret
 8204457:	90                   	nop

```

```c
// DisPatcher_RequestGuildWarInfo::dispatch_sig @ 0x820439a

/* DisPatcher_RequestGuildWarInfo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 DisPatcher_RequestGuildWarInfo::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  CGuildServerProxy *this;
  Packet_Notice_Guild_War_Info local_168 [10];
  undefined4 local_15e;
  undefined4 local_15a;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if ((iVar2 < 2) ||
     (iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar2 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    Packet_Notice_Guild_War_Info::Packet_Notice_Guild_War_Info(local_168);
    local_15e = CUser::GetUID((CUser *)param_2);
    local_15a = CUser::get_charac_no((CUser *)param_2,-1);
    uVar3 = CUser::GetServerGroup((CUser *)param_2);
    this = (CGuildServerProxy *)
           CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar3);
    CGuildServerProxy::SendPacket(this,(char *)local_168,0x15c);
  }
  return 0;
}

```

