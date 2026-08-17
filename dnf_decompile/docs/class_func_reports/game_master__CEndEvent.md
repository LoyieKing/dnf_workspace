# game_master__CEndEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084ab94c game_master::CEndEvent::execute  [0x084ab94c-0x84ab9c3] ===
 84ab94c:	55                   	push   %ebp
 84ab94d:	89 e5                	mov    %esp,%ebp
 84ab94f:	53                   	push   %ebx
 84ab950:	83 ec 34             	sub    $0x34,%esp
 84ab953:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab956:	89 04 24             	mov    %eax,(%esp)
 84ab959:	e8 5c 86 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84ab95e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ab961:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ab964:	89 04 24             	mov    %eax,(%esp)
 84ab967:	e8 30 9f c9 ff       	call   814589c <_ZN5CUser8isGMUserEv>
 84ab96c:	83 f0 01             	xor    $0x1,%eax
 84ab96f:	84 c0                	test   %al,%al
 84ab971:	75 4a                	jne    84ab9bd <_ZN11game_master9CEndEvent7executeEv+0x71>
 84ab973:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 84ab976:	89 04 24             	mov    %eax,(%esp)
 84ab979:	e8 1c cf db ff       	call   826889a <_ZN24Packet_Monitor_Event_EndC1Ev>
 84ab97e:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab981:	8b 40 08             	mov    0x8(%eax),%eax
 84ab984:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84ab987:	8d 5d e6             	lea    -0x1a(%ebp),%ebx
 84ab98a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ab98d:	89 04 24             	mov    %eax,(%esp)
 84ab990:	e8 fb 02 c2 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84ab995:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 84ab99b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ab99f:	89 14 24             	mov    %edx,(%esp)
 84ab9a2:	e8 e3 66 c6 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84ab9a7:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 84ab9ae:	00 
 84ab9af:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ab9b3:	89 04 24             	mov    %eax,(%esp)
 84ab9b6:	e8 89 54 fc ff       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 84ab9bb:	eb 01                	jmp    84ab9be <_ZN11game_master9CEndEvent7executeEv+0x72>
 84ab9bd:	90                   	nop
 84ab9be:	83 c4 34             	add    $0x34,%esp
 84ab9c1:	5b                   	pop    %ebx
 84ab9c2:	5d                   	pop    %ebp
 84ab9c3:	c3                   	ret

```

```c
// game_master::CEndEvent::execute @ 0x84ab94c

/* game_master::CEndEvent::execute() */

void __thiscall game_master::CEndEvent::execute(CEndEvent *this)

{
  char cVar1;
  undefined4 uVar2;
  CMonitorServerProxy *this_00;
  Packet_Monitor_Event_End local_1e [10];
  undefined4 local_14;
  CUser *local_10;
  
  local_10 = (CUser *)CCommand::GetUser((CCommand *)this);
  cVar1 = CUser::isGMUser(local_10);
  if (cVar1 == '\x01') {
    Packet_Monitor_Event_End::Packet_Monitor_Event_End(local_1e);
    local_14 = *(undefined4 *)(this + 8);
    uVar2 = CUser::GetServerGroup(local_10);
    this_00 = (CMonitorServerProxy *)
              CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                        (GlobalData::s_monitor_proxy_mgr,uVar2);
    CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_1e,0xe);
  }
  return;
}

```

---

## parse

```asm
// === 084ab914 game_master::CEndEvent::parse  [0x084ab914-0x84ab94b] ===
 84ab914:	55                   	push   %ebp
 84ab915:	89 e5                	mov    %esp,%ebp
 84ab917:	83 ec 18             	sub    $0x18,%esp
 84ab91a:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab91d:	8b 40 04             	mov    0x4(%eax),%eax
 84ab920:	83 c0 0c             	add    $0xc,%eax
 84ab923:	89 04 24             	mov    %eax,(%esp)
 84ab926:	e8 3d 37 df ff       	call   829f068 <_Z4trimRSs>
 84ab92b:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab92e:	8b 40 04             	mov    0x4(%eax),%eax
 84ab931:	83 c0 0c             	add    $0xc,%eax
 84ab934:	89 04 24             	mov    %eax,(%esp)
 84ab937:	e8 b4 ab 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84ab93c:	89 04 24             	mov    %eax,(%esp)
 84ab93f:	e8 ac 2d bd ff       	call   807e6f0 <atoi@plt>
 84ab944:	8b 55 08             	mov    0x8(%ebp),%edx
 84ab947:	89 42 08             	mov    %eax,0x8(%edx)
 84ab94a:	c9                   	leave
 84ab94b:	c3                   	ret

```

```c
// game_master::CEndEvent::parse @ 0x84ab914

/* game_master::CEndEvent::parse() */

void __thiscall game_master::CEndEvent::parse(CEndEvent *this)

{
  char *__nptr;
  int iVar1;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar1 = atoi(__nptr);
  *(int *)(this + 8) = iVar1;
  return;
}

```

