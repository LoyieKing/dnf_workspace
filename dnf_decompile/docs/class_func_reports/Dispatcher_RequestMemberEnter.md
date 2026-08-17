# Dispatcher_RequestMemberEnter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081cb82a Dispatcher_RequestMemberEnter::check_error  [0x081cb82a-0x81cb873] ===
 81cb82a:	55                   	push   %ebp
 81cb82b:	89 e5                	mov    %esp,%ebp
 81cb82d:	83 ec 28             	sub    $0x28,%esp
 81cb830:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb833:	89 04 24             	mov    %eax,(%esp)
 81cb836:	e8 51 eb f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81cb83b:	83 f8 02             	cmp    $0x2,%eax
 81cb83e:	7e 0f                	jle    81cb84f <_ZN29Dispatcher_RequestMemberEnter11check_errorEP5CUserR8MSG_BASE+0x25>
 81cb840:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb843:	89 04 24             	mov    %eax,(%esp)
 81cb846:	e8 e7 4b f5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81cb84b:	85 c0                	test   %eax,%eax
 81cb84d:	75 07                	jne    81cb856 <_ZN29Dispatcher_RequestMemberEnter11check_errorEP5CUserR8MSG_BASE+0x2c>
 81cb84f:	b8 01 00 00 00       	mov    $0x1,%eax
 81cb854:	eb 05                	jmp    81cb85b <_ZN29Dispatcher_RequestMemberEnter11check_errorEP5CUserR8MSG_BASE+0x31>
 81cb856:	b8 00 00 00 00       	mov    $0x0,%eax
 81cb85b:	84 c0                	test   %al,%al
 81cb85d:	74 07                	je     81cb866 <_ZN29Dispatcher_RequestMemberEnter11check_errorEP5CUserR8MSG_BASE+0x3c>
 81cb85f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81cb864:	eb 0b                	jmp    81cb871 <_ZN29Dispatcher_RequestMemberEnter11check_errorEP5CUserR8MSG_BASE+0x47>
 81cb866:	8b 45 10             	mov    0x10(%ebp),%eax
 81cb869:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cb86c:	b8 00 00 00 00       	mov    $0x0,%eax
 81cb871:	c9                   	leave
 81cb872:	c3                   	ret
 81cb873:	90                   	nop

```

```c
// Dispatcher_RequestMemberEnter::check_error @ 0x81cb82a

/* Dispatcher_RequestMemberEnter::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_RequestMemberEnter::check_error(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081cb85b;
    }
  }
  bVar1 = true;
LAB_081cb85b:
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
// === 081cb874 Dispatcher_RequestMemberEnter::process  [0x081cb874-0x81cb97f] ===
 81cb874:	55                   	push   %ebp
 81cb875:	89 e5                	mov    %esp,%ebp
 81cb877:	53                   	push   %ebx
 81cb878:	83 ec 54             	sub    $0x54,%esp
 81cb87b:	8b 45 14             	mov    0x14(%ebp),%eax
 81cb87e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cb881:	8b 45 10             	mov    0x10(%ebp),%eax
 81cb884:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cb888:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb88b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cb88f:	8b 45 08             	mov    0x8(%ebp),%eax
 81cb892:	89 04 24             	mov    %eax,(%esp)
 81cb895:	e8 90 ff ff ff       	call   81cb82a <_ZN29Dispatcher_RequestMemberEnter11check_errorEP5CUserR8MSG_BASE>
 81cb89a:	89 c2                	mov    %eax,%edx
 81cb89c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cb89f:	89 50 04             	mov    %edx,0x4(%eax)
 81cb8a2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cb8a5:	8b 40 04             	mov    0x4(%eax),%eax
 81cb8a8:	85 c0                	test   %eax,%eax
 81cb8aa:	7e 0a                	jle    81cb8b6 <_ZN29Dispatcher_RequestMemberEnter7processEP5CUserR8MSG_BASER9ParamBase+0x42>
 81cb8ac:	b8 00 00 00 00       	mov    $0x0,%eax
 81cb8b1:	e9 c4 00 00 00       	jmp    81cb97a <_ZN29Dispatcher_RequestMemberEnter7processEP5CUserR8MSG_BASER9ParamBase+0x106>
 81cb8b6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cb8b9:	8b 40 04             	mov    0x4(%eax),%eax
 81cb8bc:	85 c0                	test   %eax,%eax
 81cb8be:	79 32                	jns    81cb8f2 <_ZN29Dispatcher_RequestMemberEnter7processEP5CUserR8MSG_BASER9ParamBase+0x7e>
 81cb8c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb8c3:	89 04 24             	mov    %eax,(%esp)
 81cb8c6:	e8 a3 ea f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cb8cb:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81cb8ce:	8b 52 04             	mov    0x4(%edx),%edx
 81cb8d1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cb8d5:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cb8d9:	c7 44 24 04 a0 4e bd 	movl   $0x8bd4ea0,0x4(%esp)
 81cb8e0:	08 
 81cb8e1:	c7 04 24 92 21 00 00 	movl   $0x2192,(%esp)
 81cb8e8:	e8 ea 4f 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cb8ed:	e9 88 00 00 00       	jmp    81cb97a <_ZN29Dispatcher_RequestMemberEnter7processEP5CUserR8MSG_BASER9ParamBase+0x106>
 81cb8f2:	8b 45 10             	mov    0x10(%ebp),%eax
 81cb8f5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cb8f8:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81cb8fb:	89 04 24             	mov    %eax,(%esp)
 81cb8fe:	e8 cb 00 06 00       	call   822b9ce <_ZN35Packet_Monitor_Request_Member_EnterC1Ev>
 81cb903:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb906:	89 04 24             	mov    %eax,(%esp)
 81cb909:	e8 88 d3 ef ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81cb90e:	89 45 ca             	mov    %eax,-0x36(%ebp)
 81cb911:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb914:	89 04 24             	mov    %eax,(%esp)
 81cb917:	e8 32 03 f0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81cb91c:	89 45 ce             	mov    %eax,-0x32(%ebp)
 81cb91f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cb922:	8b 40 10             	mov    0x10(%eax),%eax
 81cb925:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81cb928:	83 c2 14             	add    $0x14,%edx
 81cb92b:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cb92f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cb933:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81cb936:	83 c0 12             	add    $0x12,%eax
 81cb939:	89 04 24             	mov    %eax,(%esp)
 81cb93c:	e8 8f 1f eb ff       	call   807d8d0 <strncpy@plt>
 81cb941:	8d 5d c0             	lea    -0x40(%ebp),%ebx
 81cb944:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb947:	89 04 24             	mov    %eax,(%esp)
 81cb94a:	e8 41 03 f0 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81cb94f:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 81cb955:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cb959:	89 14 24             	mov    %edx,(%esp)
 81cb95c:	e8 29 67 f4 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81cb961:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 81cb968:	00 
 81cb969:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cb96d:	89 04 24             	mov    %eax,(%esp)
 81cb970:	e8 cf 54 2a 00       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 81cb975:	b8 00 00 00 00       	mov    $0x0,%eax
 81cb97a:	83 c4 54             	add    $0x54,%esp
 81cb97d:	5b                   	pop    %ebx
 81cb97e:	5d                   	pop    %ebp
 81cb97f:	c3                   	ret

```

```c
// Dispatcher_RequestMemberEnter::process @ 0x81cb874

/* Dispatcher_RequestMemberEnter::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_RequestMemberEnter::process
          (Dispatcher_RequestMemberEnter *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CMonitorServerProxy *this_00;
  Packet_Monitor_Request_Member_Enter local_44 [10];
  undefined4 local_3a;
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
      uVar1 = LineFunc(0x2192,
                       "virtual int Dispatcher_RequestMemberEnter::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_14 + 4),uVar2);
    }
    else {
      local_10 = param_2;
      Packet_Monitor_Request_Member_Enter::Packet_Monitor_Request_Member_Enter(local_44);
      local_3a = CUser::GetUID(param_1);
      local_36 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      strncpy(acStack_32,(char *)(local_10 + 0x14),*(size_t *)(local_10 + 0x10));
      uVar1 = CUser::GetServerGroup(param_1);
      this_00 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar1);
      CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_44,0x30);
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
// === 081cb780 Dispatcher_RequestMemberEnter::read  [0x081cb780-0x81cb829] ===
 81cb780:	55                   	push   %ebp
 81cb781:	89 e5                	mov    %esp,%ebp
 81cb783:	83 ec 28             	sub    $0x28,%esp
 81cb786:	8b 45 10             	mov    0x10(%ebp),%eax
 81cb789:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cb78c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cb78f:	83 c0 10             	add    $0x10,%eax
 81cb792:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cb796:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb799:	89 04 24             	mov    %eax,(%esp)
 81cb79c:	e8 4f 19 3c 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81cb7a1:	83 f0 01             	xor    $0x1,%eax
 81cb7a4:	84 c0                	test   %al,%al
 81cb7a6:	74 26                	je     81cb7ce <_ZN29Dispatcher_RequestMemberEnter4readER9PacketBufR8MSG_BASE+0x4e>
 81cb7a8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cb7af:	00 
 81cb7b0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cb7b7:	00 
 81cb7b8:	c7 44 24 04 00 4f bd 	movl   $0x8bd4f00,0x4(%esp)
 81cb7bf:	08 
 81cb7c0:	c7 04 24 69 21 00 00 	movl   $0x2169,(%esp)
 81cb7c7:	e8 0b 51 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cb7cc:	eb 59                	jmp    81cb827 <_ZN29Dispatcher_RequestMemberEnter4readER9PacketBufR8MSG_BASE+0xa7>
 81cb7ce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cb7d1:	8b 40 10             	mov    0x10(%eax),%eax
 81cb7d4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81cb7d7:	83 c2 14             	add    $0x14,%edx
 81cb7da:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cb7de:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81cb7e5:	00 
 81cb7e6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cb7ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb7ed:	89 04 24             	mov    %eax,(%esp)
 81cb7f0:	e8 c7 1a 3c 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81cb7f5:	83 f0 01             	xor    $0x1,%eax
 81cb7f8:	84 c0                	test   %al,%al
 81cb7fa:	74 26                	je     81cb822 <_ZN29Dispatcher_RequestMemberEnter4readER9PacketBufR8MSG_BASE+0xa2>
 81cb7fc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cb803:	00 
 81cb804:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cb80b:	00 
 81cb80c:	c7 44 24 04 00 4f bd 	movl   $0x8bd4f00,0x4(%esp)
 81cb813:	08 
 81cb814:	c7 04 24 6c 21 00 00 	movl   $0x216c,(%esp)
 81cb81b:	e8 b7 50 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cb820:	eb 05                	jmp    81cb827 <_ZN29Dispatcher_RequestMemberEnter4readER9PacketBufR8MSG_BASE+0xa7>
 81cb822:	b8 00 00 00 00       	mov    $0x0,%eax
 81cb827:	c9                   	leave
 81cb828:	c3                   	ret
 81cb829:	90                   	nop

```

```c
// Dispatcher_RequestMemberEnter::read @ 0x81cb780

/* Dispatcher_RequestMemberEnter::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RequestMemberEnter::read
          (Dispatcher_RequestMemberEnter *this,PacketBuf *param_1,MSG_BASE *param_2)

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
      uVar2 = LineFunc(0x216c,
                       "virtual int Dispatcher_RequestMemberEnter::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x2169,"virtual int Dispatcher_RequestMemberEnter::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081cb980 Dispatcher_RequestMemberEnter::send  [0x081cb980-0x81cb999] ===
 81cb980:	55                   	push   %ebp
 81cb981:	89 e5                	mov    %esp,%ebp
 81cb983:	83 ec 10             	sub    $0x10,%esp
 81cb986:	8b 45 10             	mov    0x10(%ebp),%eax
 81cb989:	89 45 fc             	mov    %eax,-0x4(%ebp)
 81cb98c:	8b 45 fc             	mov    -0x4(%ebp),%eax
 81cb98f:	8b 40 04             	mov    0x4(%eax),%eax
 81cb992:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81cb997:	c9                   	leave
 81cb998:	c3                   	ret
 81cb999:	90                   	nop

```

```c
// Dispatcher_RequestMemberEnter::send @ 0x81cb980

/* Dispatcher_RequestMemberEnter::send(CUser*, ParamBase&) */

undefined4 __thiscall
Dispatcher_RequestMemberEnter::send
          (Dispatcher_RequestMemberEnter *this,CUser *param_1,ParamBase *param_2)

{
  return *(undefined4 *)(param_2 + 4);
}

```

