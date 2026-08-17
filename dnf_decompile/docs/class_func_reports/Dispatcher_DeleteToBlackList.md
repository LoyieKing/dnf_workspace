# Dispatcher_DeleteToBlackList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## check_error

```asm
// === 081cdee0 Dispatcher_DeleteToBlackList::check_error  [0x081cdee0-0x81cdf09] ===
 81cdee0:	55                   	push   %ebp
 81cdee1:	89 e5                	mov    %esp,%ebp
 81cdee3:	83 ec 18             	sub    $0x18,%esp
 81cdee6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cdee9:	89 04 24             	mov    %eax,(%esp)
 81cdeec:	e8 9b c4 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81cdef1:	83 f8 02             	cmp    $0x2,%eax
 81cdef4:	0f 9e c0             	setle  %al
 81cdef7:	84 c0                	test   %al,%al
 81cdef9:	74 07                	je     81cdf02 <_ZN28Dispatcher_DeleteToBlackList11check_errorEP5CUserR8MSG_BASE+0x22>
 81cdefb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81cdf00:	eb 05                	jmp    81cdf07 <_ZN28Dispatcher_DeleteToBlackList11check_errorEP5CUserR8MSG_BASE+0x27>
 81cdf02:	b8 00 00 00 00       	mov    $0x0,%eax
 81cdf07:	c9                   	leave
 81cdf08:	c3                   	ret
 81cdf09:	90                   	nop

```

```c
// Dispatcher_DeleteToBlackList::check_error @ 0x81cdee0

/* Dispatcher_DeleteToBlackList::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_DeleteToBlackList::check_error(CUser *param_1,MSG_BASE *param_2)

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
// === 081cdf0a Dispatcher_DeleteToBlackList::process  [0x081cdf0a-0x81ce03b] ===
 81cdf0a:	55                   	push   %ebp
 81cdf0b:	89 e5                	mov    %esp,%ebp
 81cdf0d:	53                   	push   %ebx
 81cdf0e:	83 ec 54             	sub    $0x54,%esp
 81cdf11:	8b 45 14             	mov    0x14(%ebp),%eax
 81cdf14:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cdf17:	8b 45 10             	mov    0x10(%ebp),%eax
 81cdf1a:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cdf1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cdf21:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cdf25:	8b 45 08             	mov    0x8(%ebp),%eax
 81cdf28:	89 04 24             	mov    %eax,(%esp)
 81cdf2b:	e8 b0 ff ff ff       	call   81cdee0 <_ZN28Dispatcher_DeleteToBlackList11check_errorEP5CUserR8MSG_BASE>
 81cdf30:	89 c2                	mov    %eax,%edx
 81cdf32:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cdf35:	89 50 04             	mov    %edx,0x4(%eax)
 81cdf38:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cdf3b:	8b 40 04             	mov    0x4(%eax),%eax
 81cdf3e:	85 c0                	test   %eax,%eax
 81cdf40:	7e 0a                	jle    81cdf4c <_ZN28Dispatcher_DeleteToBlackList7processEP5CUserR8MSG_BASER9ParamBase+0x42>
 81cdf42:	b8 00 00 00 00       	mov    $0x0,%eax
 81cdf47:	e9 ea 00 00 00       	jmp    81ce036 <_ZN28Dispatcher_DeleteToBlackList7processEP5CUserR8MSG_BASER9ParamBase+0x12c>
 81cdf4c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cdf4f:	8b 40 04             	mov    0x4(%eax),%eax
 81cdf52:	85 c0                	test   %eax,%eax
 81cdf54:	79 32                	jns    81cdf88 <_ZN28Dispatcher_DeleteToBlackList7processEP5CUserR8MSG_BASER9ParamBase+0x7e>
 81cdf56:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cdf59:	89 04 24             	mov    %eax,(%esp)
 81cdf5c:	e8 0d c4 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cdf61:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81cdf64:	8b 52 04             	mov    0x4(%edx),%edx
 81cdf67:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cdf6b:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cdf6f:	c7 44 24 04 60 46 bd 	movl   $0x8bd4660,0x4(%esp)
 81cdf76:	08 
 81cdf77:	c7 04 24 ea 26 00 00 	movl   $0x26ea,(%esp)
 81cdf7e:	e8 54 29 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cdf83:	e9 ae 00 00 00       	jmp    81ce036 <_ZN28Dispatcher_DeleteToBlackList7processEP5CUserR8MSG_BASER9ParamBase+0x12c>
 81cdf88:	8b 45 10             	mov    0x10(%ebp),%eax
 81cdf8b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cdf8e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81cdf91:	89 04 24             	mov    %eax,(%esp)
 81cdf94:	e8 d7 db 05 00       	call   822bb70 <_ZN26Packet_Delete_To_BlackListC1Ev>
 81cdf99:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cdf9c:	89 04 24             	mov    %eax,(%esp)
 81cdf9f:	e8 ca c3 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cdfa4:	89 45 ce             	mov    %eax,-0x32(%ebp)
 81cdfa7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cdfaa:	8b 40 10             	mov    0x10(%eax),%eax
 81cdfad:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81cdfb0:	83 c2 14             	add    $0x14,%edx
 81cdfb3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cdfb7:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cdfbb:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81cdfbe:	83 c0 0e             	add    $0xe,%eax
 81cdfc1:	89 04 24             	mov    %eax,(%esp)
 81cdfc4:	e8 07 f9 ea ff       	call   807d8d0 <strncpy@plt>
 81cdfc9:	8d 5d c4             	lea    -0x3c(%ebp),%ebx
 81cdfcc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cdfcf:	89 04 24             	mov    %eax,(%esp)
 81cdfd2:	e8 b9 dc ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81cdfd7:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 81cdfdd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cdfe1:	89 14 24             	mov    %edx,(%esp)
 81cdfe4:	e8 a1 40 f4 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81cdfe9:	c7 44 24 08 2c 00 00 	movl   $0x2c,0x8(%esp)
 81cdff0:	00 
 81cdff1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cdff5:	89 04 24             	mov    %eax,(%esp)
 81cdff8:	e8 f7 2d 2a 00       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 81cdffd:	8d 5d c4             	lea    -0x3c(%ebp),%ebx
 81ce000:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce003:	89 04 24             	mov    %eax,(%esp)
 81ce006:	e8 85 dc ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81ce00b:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 81ce011:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ce015:	89 14 24             	mov    %edx,(%esp)
 81ce018:	e8 9b f3 f4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81ce01d:	c7 44 24 08 2c 00 00 	movl   $0x2c,0x8(%esp)
 81ce024:	00 
 81ce025:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ce029:	89 04 24             	mov    %eax,(%esp)
 81ce02c:	e8 4d fc 29 00       	call   846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>
 81ce031:	b8 00 00 00 00       	mov    $0x0,%eax
 81ce036:	83 c4 54             	add    $0x54,%esp
 81ce039:	5b                   	pop    %ebx
 81ce03a:	5d                   	pop    %ebp
 81ce03b:	c3                   	ret

```

```c
// Dispatcher_DeleteToBlackList::process @ 0x81cdf0a

/* Dispatcher_DeleteToBlackList::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_DeleteToBlackList::process
          (Dispatcher_DeleteToBlackList *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CMonitorServerProxy *this_00;
  CGuildServerProxy *this_01;
  Packet_Delete_To_BlackList local_40 [10];
  undefined4 local_36;
  char acStack_32 [30];
  ParamBase *local_14;
  MSG_BASE *local_10;
  
  local_14 = param_3;
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_14 + 4) = uVar1;
  if (*(int *)(local_14 + 4) < 1) {
    if (*(int *)(local_14 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x26ea,
                       "virtual int Dispatcher_DeleteToBlackList::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_14 + 4),uVar2);
    }
    else {
      local_10 = param_2;
      Packet_Delete_To_BlackList::Packet_Delete_To_BlackList(local_40);
      local_36 = CUser::get_acc_id(param_1);
      strncpy(acStack_32,(char *)(local_10 + 0x14),*(size_t *)(local_10 + 0x10));
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
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 081cde36 Dispatcher_DeleteToBlackList::read  [0x081cde36-0x81cdedf] ===
 81cde36:	55                   	push   %ebp
 81cde37:	89 e5                	mov    %esp,%ebp
 81cde39:	83 ec 28             	sub    $0x28,%esp
 81cde3c:	8b 45 10             	mov    0x10(%ebp),%eax
 81cde3f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cde42:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cde45:	83 c0 10             	add    $0x10,%eax
 81cde48:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cde4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cde4f:	89 04 24             	mov    %eax,(%esp)
 81cde52:	e8 99 f2 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81cde57:	83 f0 01             	xor    $0x1,%eax
 81cde5a:	84 c0                	test   %al,%al
 81cde5c:	74 26                	je     81cde84 <_ZN28Dispatcher_DeleteToBlackList4readER9PacketBufR8MSG_BASE+0x4e>
 81cde5e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cde65:	00 
 81cde66:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cde6d:	00 
 81cde6e:	c7 44 24 04 c0 46 bd 	movl   $0x8bd46c0,0x4(%esp)
 81cde75:	08 
 81cde76:	c7 04 24 ce 26 00 00 	movl   $0x26ce,(%esp)
 81cde7d:	e8 55 2a 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cde82:	eb 59                	jmp    81cdedd <_ZN28Dispatcher_DeleteToBlackList4readER9PacketBufR8MSG_BASE+0xa7>
 81cde84:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cde87:	8b 40 10             	mov    0x10(%eax),%eax
 81cde8a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81cde8d:	83 c2 14             	add    $0x14,%edx
 81cde90:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cde94:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81cde9b:	00 
 81cde9c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cdea0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cdea3:	89 04 24             	mov    %eax,(%esp)
 81cdea6:	e8 11 f4 3b 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81cdeab:	83 f0 01             	xor    $0x1,%eax
 81cdeae:	84 c0                	test   %al,%al
 81cdeb0:	74 26                	je     81cded8 <_ZN28Dispatcher_DeleteToBlackList4readER9PacketBufR8MSG_BASE+0xa2>
 81cdeb2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cdeb9:	00 
 81cdeba:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cdec1:	00 
 81cdec2:	c7 44 24 04 c0 46 bd 	movl   $0x8bd46c0,0x4(%esp)
 81cdec9:	08 
 81cdeca:	c7 04 24 d1 26 00 00 	movl   $0x26d1,(%esp)
 81cded1:	e8 01 2a 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cded6:	eb 05                	jmp    81cdedd <_ZN28Dispatcher_DeleteToBlackList4readER9PacketBufR8MSG_BASE+0xa7>
 81cded8:	b8 00 00 00 00       	mov    $0x0,%eax
 81cdedd:	c9                   	leave
 81cdede:	c3                   	ret
 81cdedf:	90                   	nop

```

```c
// Dispatcher_DeleteToBlackList::read @ 0x81cde36

/* Dispatcher_DeleteToBlackList::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_DeleteToBlackList::read
          (Dispatcher_DeleteToBlackList *this,PacketBuf *param_1,MSG_BASE *param_2)

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
      uVar2 = LineFunc(0x26d1,
                       "virtual int Dispatcher_DeleteToBlackList::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x26ce,"virtual int Dispatcher_DeleteToBlackList::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}

```

