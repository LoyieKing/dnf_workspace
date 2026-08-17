# Dispatcher_RegisterToBlackList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## check_error

```asm
// === 081cdc70 Dispatcher_RegisterToBlackList::check_error  [0x081cdc70-0x81cdc99] ===
 81cdc70:	55                   	push   %ebp
 81cdc71:	89 e5                	mov    %esp,%ebp
 81cdc73:	83 ec 18             	sub    $0x18,%esp
 81cdc76:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cdc79:	89 04 24             	mov    %eax,(%esp)
 81cdc7c:	e8 0b c7 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81cdc81:	83 f8 02             	cmp    $0x2,%eax
 81cdc84:	0f 9e c0             	setle  %al
 81cdc87:	84 c0                	test   %al,%al
 81cdc89:	74 07                	je     81cdc92 <_ZN30Dispatcher_RegisterToBlackList11check_errorEP5CUserR8MSG_BASE+0x22>
 81cdc8b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81cdc90:	eb 05                	jmp    81cdc97 <_ZN30Dispatcher_RegisterToBlackList11check_errorEP5CUserR8MSG_BASE+0x27>
 81cdc92:	b8 00 00 00 00       	mov    $0x0,%eax
 81cdc97:	c9                   	leave
 81cdc98:	c3                   	ret
 81cdc99:	90                   	nop

```

```c
// Dispatcher_RegisterToBlackList::check_error @ 0x81cdc70

/* Dispatcher_RegisterToBlackList::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_RegisterToBlackList::check_error(CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 < 3) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## process

```asm
// === 081cdc9a Dispatcher_RegisterToBlackList::process  [0x081cdc9a-0x81cde35] ===
 81cdc9a:	55                   	push   %ebp
 81cdc9b:	89 e5                	mov    %esp,%ebp
 81cdc9d:	53                   	push   %ebx
 81cdc9e:	83 ec 54             	sub    $0x54,%esp
 81cdca1:	8b 45 14             	mov    0x14(%ebp),%eax
 81cdca4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cdca7:	8b 45 10             	mov    0x10(%ebp),%eax
 81cdcaa:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cdcae:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cdcb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cdcb5:	8b 45 08             	mov    0x8(%ebp),%eax
 81cdcb8:	89 04 24             	mov    %eax,(%esp)
 81cdcbb:	e8 b0 ff ff ff       	call   81cdc70 <_ZN30Dispatcher_RegisterToBlackList11check_errorEP5CUserR8MSG_BASE>
 81cdcc0:	89 c2                	mov    %eax,%edx
 81cdcc2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cdcc5:	89 50 04             	mov    %edx,0x4(%eax)
 81cdcc8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cdccb:	8b 40 04             	mov    0x4(%eax),%eax
 81cdcce:	85 c0                	test   %eax,%eax
 81cdcd0:	7e 0a                	jle    81cdcdc <_ZN30Dispatcher_RegisterToBlackList7processEP5CUserR8MSG_BASER9ParamBase+0x42>
 81cdcd2:	b8 00 00 00 00       	mov    $0x0,%eax
 81cdcd7:	e9 54 01 00 00       	jmp    81cde30 <_ZN30Dispatcher_RegisterToBlackList7processEP5CUserR8MSG_BASER9ParamBase+0x196>
 81cdcdc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cdcdf:	8b 40 04             	mov    0x4(%eax),%eax
 81cdce2:	85 c0                	test   %eax,%eax
 81cdce4:	79 32                	jns    81cdd18 <_ZN30Dispatcher_RegisterToBlackList7processEP5CUserR8MSG_BASER9ParamBase+0x7e>
 81cdce6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cdce9:	89 04 24             	mov    %eax,(%esp)
 81cdcec:	e8 7d c6 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cdcf1:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81cdcf4:	8b 52 04             	mov    0x4(%edx),%edx
 81cdcf7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cdcfb:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cdcff:	c7 44 24 04 20 47 bd 	movl   $0x8bd4720,0x4(%esp)
 81cdd06:	08 
 81cdd07:	c7 04 24 9f 26 00 00 	movl   $0x269f,(%esp)
 81cdd0e:	e8 c4 2b 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cdd13:	e9 18 01 00 00       	jmp    81cde30 <_ZN30Dispatcher_RegisterToBlackList7processEP5CUserR8MSG_BASER9ParamBase+0x196>
 81cdd18:	8b 45 10             	mov    0x10(%ebp),%eax
 81cdd1b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cdd1e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81cdd21:	89 04 24             	mov    %eax,(%esp)
 81cdd24:	e8 05 de 05 00       	call   822bb2e <_ZN28Packet_Register_To_BlackListC1Ev>
 81cdd29:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cdd2c:	89 04 24             	mov    %eax,(%esp)
 81cdd2f:	e8 3a c6 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cdd34:	89 45 ce             	mov    %eax,-0x32(%ebp)
 81cdd37:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cdd3a:	8b 40 10             	mov    0x10(%eax),%eax
 81cdd3d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81cdd40:	83 c2 14             	add    $0x14,%edx
 81cdd43:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cdd47:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cdd4b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81cdd4e:	83 c0 0e             	add    $0xe,%eax
 81cdd51:	89 04 24             	mov    %eax,(%esp)
 81cdd54:	e8 77 fb ea ff       	call   807d8d0 <strncpy@plt>
 81cdd59:	e8 23 e4 ef ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81cdd5e:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 81cdd64:	83 f8 03             	cmp    $0x3,%eax
 81cdd67:	0f 94 c0             	sete   %al
 81cdd6a:	84 c0                	test   %al,%al
 81cdd6c:	74 55                	je     81cddc3 <_ZN30Dispatcher_RegisterToBlackList7processEP5CUserR8MSG_BASER9ParamBase+0x129>
 81cdd6e:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 81cdd75:	00 
 81cdd76:	c7 44 24 04 d6 17 bc 	movl   $0x8bc17d6,0x4(%esp)
 81cdd7d:	08 
 81cdd7e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81cdd81:	83 c0 0e             	add    $0xe,%eax
 81cdd84:	89 04 24             	mov    %eax,(%esp)
 81cdd87:	e8 34 0b eb ff       	call   807e8c0 <strncmp@plt>
 81cdd8c:	85 c0                	test   %eax,%eax
 81cdd8e:	74 22                	je     81cddb2 <_ZN30Dispatcher_RegisterToBlackList7processEP5CUserR8MSG_BASER9ParamBase+0x118>
 81cdd90:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 81cdd97:	00 
 81cdd98:	c7 44 24 04 dd 17 bc 	movl   $0x8bc17dd,0x4(%esp)
 81cdd9f:	08 
 81cdda0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81cdda3:	83 c0 0e             	add    $0xe,%eax
 81cdda6:	89 04 24             	mov    %eax,(%esp)
 81cdda9:	e8 12 0b eb ff       	call   807e8c0 <strncmp@plt>
 81cddae:	85 c0                	test   %eax,%eax
 81cddb0:	75 11                	jne    81cddc3 <_ZN30Dispatcher_RegisterToBlackList7processEP5CUserR8MSG_BASER9ParamBase+0x129>
 81cddb2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cddb5:	c7 40 04 ff ff ff 7f 	movl   $0x7fffffff,0x4(%eax)
 81cddbc:	b8 00 00 00 00       	mov    $0x0,%eax
 81cddc1:	eb 6d                	jmp    81cde30 <_ZN30Dispatcher_RegisterToBlackList7processEP5CUserR8MSG_BASER9ParamBase+0x196>
 81cddc3:	8d 5d c4             	lea    -0x3c(%ebp),%ebx
 81cddc6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cddc9:	89 04 24             	mov    %eax,(%esp)
 81cddcc:	e8 bf de ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81cddd1:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 81cddd7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cdddb:	89 14 24             	mov    %edx,(%esp)
 81cddde:	e8 a7 42 f4 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81cdde3:	c7 44 24 08 2c 00 00 	movl   $0x2c,0x8(%esp)
 81cddea:	00 
 81cddeb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cddef:	89 04 24             	mov    %eax,(%esp)
 81cddf2:	e8 fd 2f 2a 00       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 81cddf7:	8d 5d c4             	lea    -0x3c(%ebp),%ebx
 81cddfa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cddfd:	89 04 24             	mov    %eax,(%esp)
 81cde00:	e8 8b de ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81cde05:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 81cde0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cde0f:	89 14 24             	mov    %edx,(%esp)
 81cde12:	e8 a1 f5 f4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81cde17:	c7 44 24 08 2c 00 00 	movl   $0x2c,0x8(%esp)
 81cde1e:	00 
 81cde1f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cde23:	89 04 24             	mov    %eax,(%esp)
 81cde26:	e8 53 fe 29 00       	call   846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>
 81cde2b:	b8 00 00 00 00       	mov    $0x0,%eax
 81cde30:	83 c4 54             	add    $0x54,%esp
 81cde33:	5b                   	pop    %ebx
 81cde34:	5d                   	pop    %ebp
 81cde35:	c3                   	ret

```

```c
// Dispatcher_RegisterToBlackList::process @ 0x81cdc9a

/* Dispatcher_RegisterToBlackList::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_RegisterToBlackList::process
          (Dispatcher_RegisterToBlackList *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  CMonitorServerProxy *this_00;
  CGuildServerProxy *this_01;
  Packet_Register_To_BlackList local_40 [10];
  undefined4 local_36;
  char acStack_32 [30];
  ParamBase *local_14;
  MSG_BASE *local_10;
  
  local_14 = param_3;
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_14 + 4) = uVar1;
  if (0 < *(int *)(local_14 + 4)) {
    return 0;
  }
  if (-1 < *(int *)(local_14 + 4)) {
    local_10 = param_2;
    Packet_Register_To_BlackList::Packet_Register_To_BlackList(local_40);
    local_36 = CUser::get_acc_id(param_1);
    strncpy(acStack_32,(char *)(local_10 + 0x14),*(size_t *)(local_10 + 0x10));
    iVar3 = G_CEnvironment();
    if ((*(int *)(iVar3 + 0x378) == 3) &&
       ((iVar3 = strncmp(acStack_32,&DAT_08bc17d6,0x1d), iVar3 == 0 ||
        (iVar3 = strncmp(acStack_32,&DAT_08bc17dd,0x1d), iVar3 == 0)))) {
      *(undefined4 *)(local_14 + 4) = 0x7fffffff;
    }
    else {
      uVar1 = CUser::GetServerGroup(param_1);
      this_00 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar1);
      CMonitorServerProxy::SendPacket(this_00,(char *)local_40,0x2c);
      uVar1 = CUser::GetServerGroup(param_1);
      this_01 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,uVar1);
      CGuildServerProxy::SendPacket(this_01,(char *)local_40,0x2c);
    }
    return 0;
  }
  uVar2 = CUser::get_acc_id(param_1);
  uVar1 = LineFunc(0x269f,
                   "virtual int Dispatcher_RegisterToBlackList::process(CUser*, MSG_BASE&, ParamBase&)"
                   ,*(int *)(local_14 + 4),uVar2);
  return uVar1;
}

```

---

## read

```asm
// === 081cdbc6 Dispatcher_RegisterToBlackList::read  [0x081cdbc6-0x81cdc6f] ===
 81cdbc6:	55                   	push   %ebp
 81cdbc7:	89 e5                	mov    %esp,%ebp
 81cdbc9:	83 ec 28             	sub    $0x28,%esp
 81cdbcc:	8b 45 10             	mov    0x10(%ebp),%eax
 81cdbcf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cdbd2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cdbd5:	83 c0 10             	add    $0x10,%eax
 81cdbd8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cdbdc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cdbdf:	89 04 24             	mov    %eax,(%esp)
 81cdbe2:	e8 09 f5 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81cdbe7:	83 f0 01             	xor    $0x1,%eax
 81cdbea:	84 c0                	test   %al,%al
 81cdbec:	74 26                	je     81cdc14 <_ZN30Dispatcher_RegisterToBlackList4readER9PacketBufR8MSG_BASE+0x4e>
 81cdbee:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cdbf5:	00 
 81cdbf6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cdbfd:	00 
 81cdbfe:	c7 44 24 04 80 47 bd 	movl   $0x8bd4780,0x4(%esp)
 81cdc05:	08 
 81cdc06:	c7 04 24 7d 26 00 00 	movl   $0x267d,(%esp)
 81cdc0d:	e8 c5 2c 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cdc12:	eb 59                	jmp    81cdc6d <_ZN30Dispatcher_RegisterToBlackList4readER9PacketBufR8MSG_BASE+0xa7>
 81cdc14:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cdc17:	8b 40 10             	mov    0x10(%eax),%eax
 81cdc1a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81cdc1d:	83 c2 14             	add    $0x14,%edx
 81cdc20:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cdc24:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81cdc2b:	00 
 81cdc2c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cdc30:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cdc33:	89 04 24             	mov    %eax,(%esp)
 81cdc36:	e8 81 f6 3b 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81cdc3b:	83 f0 01             	xor    $0x1,%eax
 81cdc3e:	84 c0                	test   %al,%al
 81cdc40:	74 26                	je     81cdc68 <_ZN30Dispatcher_RegisterToBlackList4readER9PacketBufR8MSG_BASE+0xa2>
 81cdc42:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cdc49:	00 
 81cdc4a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cdc51:	00 
 81cdc52:	c7 44 24 04 80 47 bd 	movl   $0x8bd4780,0x4(%esp)
 81cdc59:	08 
 81cdc5a:	c7 04 24 80 26 00 00 	movl   $0x2680,(%esp)
 81cdc61:	e8 71 2c 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cdc66:	eb 05                	jmp    81cdc6d <_ZN30Dispatcher_RegisterToBlackList4readER9PacketBufR8MSG_BASE+0xa7>
 81cdc68:	b8 00 00 00 00       	mov    $0x0,%eax
 81cdc6d:	c9                   	leave
 81cdc6e:	c3                   	ret
 81cdc6f:	90                   	nop

```

```c
// Dispatcher_RegisterToBlackList::read @ 0x81cdbc6

/* Dispatcher_RegisterToBlackList::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RegisterToBlackList::read
          (Dispatcher_RegisterToBlackList *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x10));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x14),0x1e,*(int *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x2680,
                       "virtual int Dispatcher_RegisterToBlackList::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x267d,
                     "virtual int Dispatcher_RegisterToBlackList::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

