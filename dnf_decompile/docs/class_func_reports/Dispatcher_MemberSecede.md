# Dispatcher_MemberSecede

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## check_error

```asm
// === 081cbbd0 Dispatcher_MemberSecede::check_error  [0x081cbbd0-0x81cbc2d] ===
 81cbbd0:	55                   	push   %ebp
 81cbbd1:	89 e5                	mov    %esp,%ebp
 81cbbd3:	83 ec 18             	sub    $0x18,%esp
 81cbbd6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbbd9:	89 04 24             	mov    %eax,(%esp)
 81cbbdc:	e8 ab e7 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81cbbe1:	83 f8 02             	cmp    $0x2,%eax
 81cbbe4:	7e 0f                	jle    81cbbf5 <_ZN23Dispatcher_MemberSecede11check_errorEP5CUserR8MSG_BASE+0x25>
 81cbbe6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbbe9:	89 04 24             	mov    %eax,(%esp)
 81cbbec:	e8 41 48 f5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81cbbf1:	85 c0                	test   %eax,%eax
 81cbbf3:	75 07                	jne    81cbbfc <_ZN23Dispatcher_MemberSecede11check_errorEP5CUserR8MSG_BASE+0x2c>
 81cbbf5:	b8 01 00 00 00       	mov    $0x1,%eax
 81cbbfa:	eb 05                	jmp    81cbc01 <_ZN23Dispatcher_MemberSecede11check_errorEP5CUserR8MSG_BASE+0x31>
 81cbbfc:	b8 00 00 00 00       	mov    $0x0,%eax
 81cbc01:	84 c0                	test   %al,%al
 81cbc03:	74 07                	je     81cbc0c <_ZN23Dispatcher_MemberSecede11check_errorEP5CUserR8MSG_BASE+0x3c>
 81cbc05:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81cbc0a:	eb 20                	jmp    81cbc2c <_ZN23Dispatcher_MemberSecede11check_errorEP5CUserR8MSG_BASE+0x5c>
 81cbc0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbc0f:	89 04 24             	mov    %eax,(%esp)
 81cbc12:	e8 ad 39 06 00       	call   822f5c4 <_ZN15CUserCharacInfo20get_charac_memberkeyEv>
 81cbc17:	85 c0                	test   %eax,%eax
 81cbc19:	0f 94 c0             	sete   %al
 81cbc1c:	84 c0                	test   %al,%al
 81cbc1e:	74 07                	je     81cbc27 <_ZN23Dispatcher_MemberSecede11check_errorEP5CUserR8MSG_BASE+0x57>
 81cbc20:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81cbc25:	eb 05                	jmp    81cbc2c <_ZN23Dispatcher_MemberSecede11check_errorEP5CUserR8MSG_BASE+0x5c>
 81cbc27:	b8 00 00 00 00       	mov    $0x0,%eax
 81cbc2c:	c9                   	leave
 81cbc2d:	c3                   	ret

```

```c
// Dispatcher_MemberSecede::check_error @ 0x81cbbd0

/* Dispatcher_MemberSecede::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_MemberSecede::check_error(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081cbc01;
    }
  }
  bVar1 = true;
LAB_081cbc01:
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
// === 081cbc2e Dispatcher_MemberSecede::process  [0x081cbc2e-0x81cbd39] ===
 81cbc2e:	55                   	push   %ebp
 81cbc2f:	89 e5                	mov    %esp,%ebp
 81cbc31:	53                   	push   %ebx
 81cbc32:	83 ec 54             	sub    $0x54,%esp
 81cbc35:	8b 45 14             	mov    0x14(%ebp),%eax
 81cbc38:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cbc3b:	8b 45 10             	mov    0x10(%ebp),%eax
 81cbc3e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cbc42:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbc45:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cbc49:	8b 45 08             	mov    0x8(%ebp),%eax
 81cbc4c:	89 04 24             	mov    %eax,(%esp)
 81cbc4f:	e8 7c ff ff ff       	call   81cbbd0 <_ZN23Dispatcher_MemberSecede11check_errorEP5CUserR8MSG_BASE>
 81cbc54:	89 c2                	mov    %eax,%edx
 81cbc56:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cbc59:	89 50 04             	mov    %edx,0x4(%eax)
 81cbc5c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cbc5f:	8b 40 04             	mov    0x4(%eax),%eax
 81cbc62:	85 c0                	test   %eax,%eax
 81cbc64:	7e 0a                	jle    81cbc70 <_ZN23Dispatcher_MemberSecede7processEP5CUserR8MSG_BASER9ParamBase+0x42>
 81cbc66:	b8 00 00 00 00       	mov    $0x0,%eax
 81cbc6b:	e9 c4 00 00 00       	jmp    81cbd34 <_ZN23Dispatcher_MemberSecede7processEP5CUserR8MSG_BASER9ParamBase+0x106>
 81cbc70:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cbc73:	8b 40 04             	mov    0x4(%eax),%eax
 81cbc76:	85 c0                	test   %eax,%eax
 81cbc78:	79 32                	jns    81cbcac <_ZN23Dispatcher_MemberSecede7processEP5CUserR8MSG_BASER9ParamBase+0x7e>
 81cbc7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbc7d:	89 04 24             	mov    %eax,(%esp)
 81cbc80:	e8 e9 e6 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cbc85:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81cbc88:	8b 52 04             	mov    0x4(%edx),%edx
 81cbc8b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cbc8f:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cbc93:	c7 44 24 04 20 4d bd 	movl   $0x8bd4d20,0x4(%esp)
 81cbc9a:	08 
 81cbc9b:	c7 04 24 28 22 00 00 	movl   $0x2228,(%esp)
 81cbca2:	e8 30 4c 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cbca7:	e9 88 00 00 00       	jmp    81cbd34 <_ZN23Dispatcher_MemberSecede7processEP5CUserR8MSG_BASER9ParamBase+0x106>
 81cbcac:	8b 45 10             	mov    0x10(%ebp),%eax
 81cbcaf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cbcb2:	8d 45 bf             	lea    -0x41(%ebp),%eax
 81cbcb5:	89 04 24             	mov    %eax,(%esp)
 81cbcb8:	e8 77 fd 05 00       	call   822ba34 <_ZN28Packet_Monitor_Member_SecedeC1Ev>
 81cbcbd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbcc0:	89 04 24             	mov    %eax,(%esp)
 81cbcc3:	e8 ce cf ef ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81cbcc8:	89 45 c9             	mov    %eax,-0x37(%ebp)
 81cbccb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbcce:	89 04 24             	mov    %eax,(%esp)
 81cbcd1:	e8 78 ff ef ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81cbcd6:	89 45 cd             	mov    %eax,-0x33(%ebp)
 81cbcd9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cbcdc:	8b 40 10             	mov    0x10(%eax),%eax
 81cbcdf:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81cbce2:	83 c2 14             	add    $0x14,%edx
 81cbce5:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cbce9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cbced:	8d 45 bf             	lea    -0x41(%ebp),%eax
 81cbcf0:	83 c0 13             	add    $0x13,%eax
 81cbcf3:	89 04 24             	mov    %eax,(%esp)
 81cbcf6:	e8 a5 1b eb ff       	call   807d8a0 <memcpy@plt>
 81cbcfb:	8d 5d bf             	lea    -0x41(%ebp),%ebx
 81cbcfe:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbd01:	89 04 24             	mov    %eax,(%esp)
 81cbd04:	e8 87 ff ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81cbd09:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 81cbd0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cbd13:	89 14 24             	mov    %edx,(%esp)
 81cbd16:	e8 6f 63 f4 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81cbd1b:	c7 44 24 08 31 00 00 	movl   $0x31,0x8(%esp)
 81cbd22:	00 
 81cbd23:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cbd27:	89 04 24             	mov    %eax,(%esp)
 81cbd2a:	e8 15 51 2a 00       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 81cbd2f:	b8 00 00 00 00       	mov    $0x0,%eax
 81cbd34:	83 c4 54             	add    $0x54,%esp
 81cbd37:	5b                   	pop    %ebx
 81cbd38:	5d                   	pop    %ebp
 81cbd39:	c3                   	ret

```

```c
// Dispatcher_MemberSecede::process @ 0x81cbc2e

/* Dispatcher_MemberSecede::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_MemberSecede::process
          (Dispatcher_MemberSecede *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CMonitorServerProxy *this_00;
  Packet_Monitor_Member_Secede local_45 [10];
  undefined4 local_3b;
  undefined4 local_37;
  undefined1 auStack_32 [30];
  ParamBase *local_14;
  MSG_BASE *local_10;
  
  local_14 = param_3;
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_14 + 4) = uVar1;
  if (*(int *)(local_14 + 4) < 1) {
    if (*(int *)(local_14 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x2228,
                       "virtual int Dispatcher_MemberSecede::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_14 + 4),uVar2);
    }
    else {
      local_10 = param_2;
      Packet_Monitor_Member_Secede::Packet_Monitor_Member_Secede(local_45);
      local_3b = CUser::GetUID(param_1);
      local_37 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      memcpy(auStack_32,local_10 + 0x14,*(size_t *)(local_10 + 0x10));
      uVar1 = CUser::GetServerGroup(param_1);
      this_00 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar1);
      CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_45,0x31);
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
// === 081cbb26 Dispatcher_MemberSecede::read  [0x081cbb26-0x81cbbcf] ===
 81cbb26:	55                   	push   %ebp
 81cbb27:	89 e5                	mov    %esp,%ebp
 81cbb29:	83 ec 28             	sub    $0x28,%esp
 81cbb2c:	8b 45 10             	mov    0x10(%ebp),%eax
 81cbb2f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cbb32:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cbb35:	83 c0 10             	add    $0x10,%eax
 81cbb38:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cbb3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbb3f:	89 04 24             	mov    %eax,(%esp)
 81cbb42:	e8 a9 15 3c 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81cbb47:	83 f0 01             	xor    $0x1,%eax
 81cbb4a:	84 c0                	test   %al,%al
 81cbb4c:	74 26                	je     81cbb74 <_ZN23Dispatcher_MemberSecede4readER9PacketBufR8MSG_BASE+0x4e>
 81cbb4e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cbb55:	00 
 81cbb56:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cbb5d:	00 
 81cbb5e:	c7 44 24 04 80 4d bd 	movl   $0x8bd4d80,0x4(%esp)
 81cbb65:	08 
 81cbb66:	c7 04 24 09 22 00 00 	movl   $0x2209,(%esp)
 81cbb6d:	e8 65 4d 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cbb72:	eb 59                	jmp    81cbbcd <_ZN23Dispatcher_MemberSecede4readER9PacketBufR8MSG_BASE+0xa7>
 81cbb74:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cbb77:	8b 40 10             	mov    0x10(%eax),%eax
 81cbb7a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81cbb7d:	83 c2 14             	add    $0x14,%edx
 81cbb80:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cbb84:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81cbb8b:	00 
 81cbb8c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cbb90:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbb93:	89 04 24             	mov    %eax,(%esp)
 81cbb96:	e8 21 17 3c 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81cbb9b:	83 f0 01             	xor    $0x1,%eax
 81cbb9e:	84 c0                	test   %al,%al
 81cbba0:	74 26                	je     81cbbc8 <_ZN23Dispatcher_MemberSecede4readER9PacketBufR8MSG_BASE+0xa2>
 81cbba2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cbba9:	00 
 81cbbaa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cbbb1:	00 
 81cbbb2:	c7 44 24 04 80 4d bd 	movl   $0x8bd4d80,0x4(%esp)
 81cbbb9:	08 
 81cbbba:	c7 04 24 0c 22 00 00 	movl   $0x220c,(%esp)
 81cbbc1:	e8 11 4d 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cbbc6:	eb 05                	jmp    81cbbcd <_ZN23Dispatcher_MemberSecede4readER9PacketBufR8MSG_BASE+0xa7>
 81cbbc8:	b8 00 00 00 00       	mov    $0x0,%eax
 81cbbcd:	c9                   	leave
 81cbbce:	c3                   	ret
 81cbbcf:	90                   	nop

```

```c
// Dispatcher_MemberSecede::read @ 0x81cbb26

/* Dispatcher_MemberSecede::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_MemberSecede::read(Dispatcher_MemberSecede *this,PacketBuf *param_1,MSG_BASE *param_2)

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
      uVar2 = LineFunc(0x220c,"virtual int Dispatcher_MemberSecede::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x2209,"virtual int Dispatcher_MemberSecede::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

