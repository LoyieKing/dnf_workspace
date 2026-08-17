# Dispatcher_MemberEnterReply

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## check_error

```asm
// === 081cb9f0 Dispatcher_MemberEnterReply::check_error  [0x081cb9f0-0x81cba33] ===
 81cb9f0:	55                   	push   %ebp
 81cb9f1:	89 e5                	mov    %esp,%ebp
 81cb9f3:	83 ec 18             	sub    $0x18,%esp
 81cb9f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb9f9:	89 04 24             	mov    %eax,(%esp)
 81cb9fc:	e8 8b e9 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81cba01:	83 f8 02             	cmp    $0x2,%eax
 81cba04:	7e 0f                	jle    81cba15 <_ZN27Dispatcher_MemberEnterReply11check_errorEP5CUserR8MSG_BASE+0x25>
 81cba06:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cba09:	89 04 24             	mov    %eax,(%esp)
 81cba0c:	e8 21 4a f5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81cba11:	85 c0                	test   %eax,%eax
 81cba13:	75 07                	jne    81cba1c <_ZN27Dispatcher_MemberEnterReply11check_errorEP5CUserR8MSG_BASE+0x2c>
 81cba15:	b8 01 00 00 00       	mov    $0x1,%eax
 81cba1a:	eb 05                	jmp    81cba21 <_ZN27Dispatcher_MemberEnterReply11check_errorEP5CUserR8MSG_BASE+0x31>
 81cba1c:	b8 00 00 00 00       	mov    $0x0,%eax
 81cba21:	84 c0                	test   %al,%al
 81cba23:	74 07                	je     81cba2c <_ZN27Dispatcher_MemberEnterReply11check_errorEP5CUserR8MSG_BASE+0x3c>
 81cba25:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81cba2a:	eb 05                	jmp    81cba31 <_ZN27Dispatcher_MemberEnterReply11check_errorEP5CUserR8MSG_BASE+0x41>
 81cba2c:	b8 00 00 00 00       	mov    $0x0,%eax
 81cba31:	c9                   	leave
 81cba32:	c3                   	ret
 81cba33:	90                   	nop

```

```c
// Dispatcher_MemberEnterReply::check_error @ 0x81cb9f0

/* Dispatcher_MemberEnterReply::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_MemberEnterReply::check_error(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081cba21;
    }
  }
  bVar1 = true;
LAB_081cba21:
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## process

```asm
// === 081cba34 Dispatcher_MemberEnterReply::process  [0x081cba34-0x81cbb25] ===
 81cba34:	55                   	push   %ebp
 81cba35:	89 e5                	mov    %esp,%ebp
 81cba37:	53                   	push   %ebx
 81cba38:	83 ec 34             	sub    $0x34,%esp
 81cba3b:	8b 45 14             	mov    0x14(%ebp),%eax
 81cba3e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cba41:	8b 45 10             	mov    0x10(%ebp),%eax
 81cba44:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cba48:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cba4b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cba4f:	8b 45 08             	mov    0x8(%ebp),%eax
 81cba52:	89 04 24             	mov    %eax,(%esp)
 81cba55:	e8 96 ff ff ff       	call   81cb9f0 <_ZN27Dispatcher_MemberEnterReply11check_errorEP5CUserR8MSG_BASE>
 81cba5a:	89 c2                	mov    %eax,%edx
 81cba5c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cba5f:	89 50 04             	mov    %edx,0x4(%eax)
 81cba62:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cba65:	8b 40 04             	mov    0x4(%eax),%eax
 81cba68:	85 c0                	test   %eax,%eax
 81cba6a:	7e 0a                	jle    81cba76 <_ZN27Dispatcher_MemberEnterReply7processEP5CUserR8MSG_BASER9ParamBase+0x42>
 81cba6c:	b8 00 00 00 00       	mov    $0x0,%eax
 81cba71:	e9 a9 00 00 00       	jmp    81cbb1f <_ZN27Dispatcher_MemberEnterReply7processEP5CUserR8MSG_BASER9ParamBase+0xeb>
 81cba76:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cba79:	8b 40 04             	mov    0x4(%eax),%eax
 81cba7c:	85 c0                	test   %eax,%eax
 81cba7e:	79 2f                	jns    81cbaaf <_ZN27Dispatcher_MemberEnterReply7processEP5CUserR8MSG_BASER9ParamBase+0x7b>
 81cba80:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cba83:	89 04 24             	mov    %eax,(%esp)
 81cba86:	e8 e3 e8 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cba8b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81cba8e:	8b 52 04             	mov    0x4(%edx),%edx
 81cba91:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cba95:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cba99:	c7 44 24 04 e0 4d bd 	movl   $0x8bd4de0,0x4(%esp)
 81cbaa0:	08 
 81cbaa1:	c7 04 24 ef 21 00 00 	movl   $0x21ef,(%esp)
 81cbaa8:	e8 2a 4e 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cbaad:	eb 70                	jmp    81cbb1f <_ZN27Dispatcher_MemberEnterReply7processEP5CUserR8MSG_BASER9ParamBase+0xeb>
 81cbaaf:	8b 45 10             	mov    0x10(%ebp),%eax
 81cbab2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cbab5:	8d 45 dd             	lea    -0x23(%ebp),%eax
 81cbab8:	89 04 24             	mov    %eax,(%esp)
 81cbabb:	e8 50 ff 05 00       	call   822ba10 <_ZN33Packet_Monitor_Member_Enter_ReplyC1Ev>
 81cbac0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbac3:	89 04 24             	mov    %eax,(%esp)
 81cbac6:	e8 cb d1 ef ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81cbacb:	89 45 e7             	mov    %eax,-0x19(%ebp)
 81cbace:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbad1:	89 04 24             	mov    %eax,(%esp)
 81cbad4:	e8 75 01 f0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81cbad9:	89 45 eb             	mov    %eax,-0x15(%ebp)
 81cbadc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cbadf:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81cbae3:	88 45 ef             	mov    %al,-0x11(%ebp)
 81cbae6:	8d 5d dd             	lea    -0x23(%ebp),%ebx
 81cbae9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbaec:	89 04 24             	mov    %eax,(%esp)
 81cbaef:	e8 9c 01 f0 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81cbaf4:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 81cbafa:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cbafe:	89 14 24             	mov    %edx,(%esp)
 81cbb01:	e8 84 65 f4 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81cbb06:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81cbb0d:	00 
 81cbb0e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cbb12:	89 04 24             	mov    %eax,(%esp)
 81cbb15:	e8 2a 53 2a 00       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 81cbb1a:	b8 00 00 00 00       	mov    $0x0,%eax
 81cbb1f:	83 c4 34             	add    $0x34,%esp
 81cbb22:	5b                   	pop    %ebx
 81cbb23:	5d                   	pop    %ebp
 81cbb24:	c3                   	ret
 81cbb25:	90                   	nop

```

```c
// Dispatcher_MemberEnterReply::process @ 0x81cba34

/* Dispatcher_MemberEnterReply::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_MemberEnterReply::process
          (Dispatcher_MemberEnterReply *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CMonitorServerProxy *this_00;
  Packet_Monitor_Member_Enter_Reply local_27 [10];
  undefined4 local_1d;
  undefined4 local_19;
  MSG_BASE local_15;
  ParamBase *local_14;
  MSG_BASE *local_10;
  
  local_14 = param_3;
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_14 + 4) = uVar1;
  if (*(int *)(local_14 + 4) < 1) {
    if (*(int *)(local_14 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x21ef,
                       "virtual int Dispatcher_MemberEnterReply::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_14 + 4),uVar2);
    }
    else {
      local_10 = param_2;
      Packet_Monitor_Member_Enter_Reply::Packet_Monitor_Member_Enter_Reply(local_27);
      local_1d = CUser::GetUID(param_1);
      local_19 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      local_15 = local_10[0xd];
      uVar1 = CUser::GetServerGroup(param_1);
      this_00 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar1);
      CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_27,0x13);
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
// === 081cb99a Dispatcher_MemberEnterReply::read  [0x081cb99a-0x81cb9ef] ===
 81cb99a:	55                   	push   %ebp
 81cb99b:	89 e5                	mov    %esp,%ebp
 81cb99d:	83 ec 28             	sub    $0x28,%esp
 81cb9a0:	8b 45 10             	mov    0x10(%ebp),%eax
 81cb9a3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cb9a6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cb9a9:	83 c0 0d             	add    $0xd,%eax
 81cb9ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cb9b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb9b3:	89 04 24             	mov    %eax,(%esp)
 81cb9b6:	e8 b5 15 3c 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81cb9bb:	83 f0 01             	xor    $0x1,%eax
 81cb9be:	84 c0                	test   %al,%al
 81cb9c0:	74 26                	je     81cb9e8 <_ZN27Dispatcher_MemberEnterReply4readER9PacketBufR8MSG_BASE+0x4e>
 81cb9c2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cb9c9:	00 
 81cb9ca:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cb9d1:	00 
 81cb9d2:	c7 44 24 04 40 4e bd 	movl   $0x8bd4e40,0x4(%esp)
 81cb9d9:	08 
 81cb9da:	c7 04 24 d4 21 00 00 	movl   $0x21d4,(%esp)
 81cb9e1:	e8 f1 4e 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cb9e6:	eb 05                	jmp    81cb9ed <_ZN27Dispatcher_MemberEnterReply4readER9PacketBufR8MSG_BASE+0x53>
 81cb9e8:	b8 00 00 00 00       	mov    $0x0,%eax
 81cb9ed:	c9                   	leave
 81cb9ee:	c3                   	ret
 81cb9ef:	90                   	nop

```

```c
// Dispatcher_MemberEnterReply::read @ 0x81cb99a

/* Dispatcher_MemberEnterReply::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_MemberEnterReply::read
          (Dispatcher_MemberEnterReply *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x21d4,"virtual int Dispatcher_MemberEnterReply::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}

```

