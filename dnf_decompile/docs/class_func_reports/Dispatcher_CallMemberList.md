# Dispatcher_CallMemberList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## check_error

```asm
// === 081cbd44 Dispatcher_CallMemberList::check_error  [0x081cbd44-0x81cbda1] ===
 81cbd44:	55                   	push   %ebp
 81cbd45:	89 e5                	mov    %esp,%ebp
 81cbd47:	83 ec 18             	sub    $0x18,%esp
 81cbd4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbd4d:	89 04 24             	mov    %eax,(%esp)
 81cbd50:	e8 37 e6 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81cbd55:	83 f8 02             	cmp    $0x2,%eax
 81cbd58:	7e 0f                	jle    81cbd69 <_ZN25Dispatcher_CallMemberList11check_errorEP5CUserR8MSG_BASE+0x25>
 81cbd5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbd5d:	89 04 24             	mov    %eax,(%esp)
 81cbd60:	e8 cd 46 f5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81cbd65:	85 c0                	test   %eax,%eax
 81cbd67:	75 07                	jne    81cbd70 <_ZN25Dispatcher_CallMemberList11check_errorEP5CUserR8MSG_BASE+0x2c>
 81cbd69:	b8 01 00 00 00       	mov    $0x1,%eax
 81cbd6e:	eb 05                	jmp    81cbd75 <_ZN25Dispatcher_CallMemberList11check_errorEP5CUserR8MSG_BASE+0x31>
 81cbd70:	b8 00 00 00 00       	mov    $0x0,%eax
 81cbd75:	84 c0                	test   %al,%al
 81cbd77:	74 07                	je     81cbd80 <_ZN25Dispatcher_CallMemberList11check_errorEP5CUserR8MSG_BASE+0x3c>
 81cbd79:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81cbd7e:	eb 20                	jmp    81cbda0 <_ZN25Dispatcher_CallMemberList11check_errorEP5CUserR8MSG_BASE+0x5c>
 81cbd80:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbd83:	89 04 24             	mov    %eax,(%esp)
 81cbd86:	e8 39 38 06 00       	call   822f5c4 <_ZN15CUserCharacInfo20get_charac_memberkeyEv>
 81cbd8b:	85 c0                	test   %eax,%eax
 81cbd8d:	0f 94 c0             	sete   %al
 81cbd90:	84 c0                	test   %al,%al
 81cbd92:	74 07                	je     81cbd9b <_ZN25Dispatcher_CallMemberList11check_errorEP5CUserR8MSG_BASE+0x57>
 81cbd94:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81cbd99:	eb 05                	jmp    81cbda0 <_ZN25Dispatcher_CallMemberList11check_errorEP5CUserR8MSG_BASE+0x5c>
 81cbd9b:	b8 00 00 00 00       	mov    $0x0,%eax
 81cbda0:	c9                   	leave
 81cbda1:	c3                   	ret

```

```c
// Dispatcher_CallMemberList::check_error @ 0x81cbd44

/* Dispatcher_CallMemberList::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_CallMemberList::check_error(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081cbd75;
    }
  }
  bVar1 = true;
LAB_081cbd75:
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_2);
    if (iVar2 == 0) {
      uVar3 = 0x7fffffff;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## process

```asm
// === 081cbda2 Dispatcher_CallMemberList::process  [0x081cbda2-0x81cbe83] ===
 81cbda2:	55                   	push   %ebp
 81cbda3:	89 e5                	mov    %esp,%ebp
 81cbda5:	53                   	push   %ebx
 81cbda6:	83 ec 34             	sub    $0x34,%esp
 81cbda9:	8b 45 14             	mov    0x14(%ebp),%eax
 81cbdac:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cbdaf:	8b 45 10             	mov    0x10(%ebp),%eax
 81cbdb2:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cbdb6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbdb9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cbdbd:	8b 45 08             	mov    0x8(%ebp),%eax
 81cbdc0:	89 04 24             	mov    %eax,(%esp)
 81cbdc3:	e8 7c ff ff ff       	call   81cbd44 <_ZN25Dispatcher_CallMemberList11check_errorEP5CUserR8MSG_BASE>
 81cbdc8:	89 c2                	mov    %eax,%edx
 81cbdca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cbdcd:	89 50 04             	mov    %edx,0x4(%eax)
 81cbdd0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cbdd3:	8b 40 04             	mov    0x4(%eax),%eax
 81cbdd6:	85 c0                	test   %eax,%eax
 81cbdd8:	7e 0a                	jle    81cbde4 <_ZN25Dispatcher_CallMemberList7processEP5CUserR8MSG_BASER9ParamBase+0x42>
 81cbdda:	b8 00 00 00 00       	mov    $0x0,%eax
 81cbddf:	e9 99 00 00 00       	jmp    81cbe7d <_ZN25Dispatcher_CallMemberList7processEP5CUserR8MSG_BASER9ParamBase+0xdb>
 81cbde4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cbde7:	8b 40 04             	mov    0x4(%eax),%eax
 81cbdea:	85 c0                	test   %eax,%eax
 81cbdec:	79 2f                	jns    81cbe1d <_ZN25Dispatcher_CallMemberList7processEP5CUserR8MSG_BASER9ParamBase+0x7b>
 81cbdee:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbdf1:	89 04 24             	mov    %eax,(%esp)
 81cbdf4:	e8 75 e5 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cbdf9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81cbdfc:	8b 52 04             	mov    0x4(%edx),%edx
 81cbdff:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cbe03:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cbe07:	c7 44 24 04 c0 4c bd 	movl   $0x8bd4cc0,0x4(%esp)
 81cbe0e:	08 
 81cbe0f:	c7 04 24 5b 22 00 00 	movl   $0x225b,(%esp)
 81cbe16:	e8 bc 4a 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cbe1b:	eb 60                	jmp    81cbe7d <_ZN25Dispatcher_CallMemberList7processEP5CUserR8MSG_BASER9ParamBase+0xdb>
 81cbe1d:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 81cbe20:	89 04 24             	mov    %eax,(%esp)
 81cbe23:	e8 4e fc 05 00       	call   822ba76 <_ZN31Packet_Monitor_Call_Member_ListC1Ev>
 81cbe28:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbe2b:	89 04 24             	mov    %eax,(%esp)
 81cbe2e:	e8 63 ce ef ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81cbe33:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81cbe36:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbe39:	89 04 24             	mov    %eax,(%esp)
 81cbe3c:	e8 0d fe ef ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81cbe41:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cbe44:	8d 5d e2             	lea    -0x1e(%ebp),%ebx
 81cbe47:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbe4a:	89 04 24             	mov    %eax,(%esp)
 81cbe4d:	e8 3e fe ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81cbe52:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 81cbe58:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cbe5c:	89 14 24             	mov    %edx,(%esp)
 81cbe5f:	e8 26 62 f4 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81cbe64:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 81cbe6b:	00 
 81cbe6c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cbe70:	89 04 24             	mov    %eax,(%esp)
 81cbe73:	e8 7c 4f 2a 00       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 81cbe78:	b8 00 00 00 00       	mov    $0x0,%eax
 81cbe7d:	83 c4 34             	add    $0x34,%esp
 81cbe80:	5b                   	pop    %ebx
 81cbe81:	5d                   	pop    %ebp
 81cbe82:	c3                   	ret
 81cbe83:	90                   	nop

```

```c
// Dispatcher_CallMemberList::process @ 0x81cbda2

/* Dispatcher_CallMemberList::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_CallMemberList::process
          (Dispatcher_CallMemberList *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CMonitorServerProxy *this_00;
  Packet_Monitor_Call_Member_List local_22 [10];
  undefined4 local_18;
  undefined4 local_14;
  ParamBase *local_10;
  
  local_10 = param_3;
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_10 + 4) = uVar1;
  if (*(int *)(local_10 + 4) < 1) {
    if (*(int *)(local_10 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x225b,
                       "virtual int Dispatcher_CallMemberList::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_10 + 4),uVar2);
    }
    else {
      Packet_Monitor_Call_Member_List::Packet_Monitor_Call_Member_List(local_22);
      local_18 = CUser::GetUID(param_1);
      local_14 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar1 = CUser::GetServerGroup(param_1);
      this_00 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar1);
      CMonitorServerProxy::SendPacket(this_00,(char *)local_22,0x12);
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
// === 081cbd3a Dispatcher_CallMemberList::read  [0x081cbd3a-0x81cbd43] ===
 81cbd3a:	55                   	push   %ebp
 81cbd3b:	89 e5                	mov    %esp,%ebp
 81cbd3d:	b8 00 00 00 00       	mov    $0x0,%eax
 81cbd42:	5d                   	pop    %ebp
 81cbd43:	c3                   	ret

```

```c
// Dispatcher_CallMemberList::read @ 0x81cbd3a

/* Dispatcher_CallMemberList::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_CallMemberList::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

